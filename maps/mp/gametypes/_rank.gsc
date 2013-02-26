#include common_scripts\utility;
#include maps\mp\gametypes\_hud_util;
#include openwarfare\_utils;


init()
{
	level.rankDebug = getdvarx( "scr_rankdebug", "int", 0, 0, 1 );
	level.scr_power_rank_delay = getdvarx( "scr_power_rank_delay", "float", 0.5, 0.5, 2.0 );
	
	level.scoreInfo = [];
	level.rankTable = [];
	
	precacheShader("white");
	
	precacheString( &"RANK_PLAYER_WAS_PROMOTED_N" );
	precacheString( &"RANK_PLAYER_WAS_PROMOTED" );
	precacheString( &"RANK_PROMOTED" );
	precacheString( &"MP_PLUS" );
	precacheString( &"RANK_ROMANI" );
	precacheString( &"RANK_ROMANII" );
	precacheString( &"OW_POWER_RANKED" );
	
	level.maxRank = int(tableLookup( "mp/rankTable.csv", 0, "maxrank", 1 ));
	level.maxPrestige = int(tableLookup( "mp/rankIconTable.csv", 0, "maxprestige", 1 ));
	
	pId = 0;
	rId = 0;
	for ( pId = 0; pId <= level.maxPrestige; pId++ ) {
		for ( rId = 0; rId <= level.maxRank; rId++ )
			precacheShader( tableLookup( "mp/rankIconTable.csv", 0, rId, pId+1 ) );
	}
	
	rankId = 0;
	rankName = tableLookup( "mp/ranktable.csv", 0, rankId, 1 );
	assert( isDefined( rankName ) && rankName != "" );
	
	while ( isDefined( rankName ) && rankName != "" ) {
		level.rankTable[rankId][1] = tableLookup( "mp/ranktable.csv", 0, rankId, 1 ); // Rank short name
		level.rankTable[rankId][2] = tableLookup( "mp/ranktable.csv", 0, rankId, 2 ); // Minimum XP needed
		level.rankTable[rankId][3] = tableLookup( "mp/ranktable.csv", 0, rankId, 3 ); // XP until next rank
		level.rankTable[rankId][7] = tableLookup( "mp/ranktable.csv", 0, rankId, 7 ); // Maximum XP
		
		precacheString( tableLookupIString( "mp/ranktable.csv", 0, rankId, 16 ) ); // Localized string
		
		rankId++;
		rankName = tableLookup( "mp/ranktable.csv", 0, rankId, 1 );
	}
	
	level.statOffsets = [];
	level.statOffsets["weapon_assault"] = 290;
	level.statOffsets["weapon_lmg"] = 291;
	level.statOffsets["weapon_smg"] = 292;
	level.statOffsets["weapon_shotgun"] = 293;
	level.statOffsets["weapon_sniper"] = 294;
	level.statOffsets["weapon_pistol"] = 295;
	level.statOffsets["perk1"] = 296;
	level.statOffsets["perk2"] = 297;
	level.statOffsets["perk3"] = 298;
	
	level.numChallengeTiers	= 10;
	
	buildChallegeInfo();
	
	level thread onPlayerConnect();
}


isRegisteredEvent( type )
{
	if ( isDefined( level.scoreInfo[type] ) )
		return true;
	else
		return false;
}

registerScoreInfo( type, value )
{
	level.scoreInfo[type]["value"] = value;
}

getScoreInfoValue( type )
{
	return ( level.scoreInfo[type]["value"] );
}

getScoreInfoLabel( type )
{
	return ( level.scoreInfo[type]["label"] );
}

getRankInfoMinXP( rankId )
{
	return int(level.rankTable[rankId][2]);
}

getRankInfoXPAmt( rankId )
{
	return int(level.rankTable[rankId][3]);
}

getRankInfoMaxXp( rankId )
{
	return int(level.rankTable[rankId][7]);
}

getRankInfoFull( rankId )
{
	return tableLookupIString( "mp/ranktable.csv", 0, rankId, 16 );
}

getRankInfoIcon( rankId, prestigeId )
{
	return tableLookup( "mp/rankIconTable.csv", 0, rankId, prestigeId+1 );
}

getRankInfoUnlockWeapon( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 8 );
}

getRankInfoUnlockPerk( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 9 );
}

getRankInfoUnlockChallenge( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 10 );
}

getRankInfoUnlockFeature( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 15 );
}

getRankInfoUnlockCamo( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 11 );
}

getRankInfoUnlockAttachment( rankId )
{
	return tableLookup( "mp/ranktable.csv", 0, rankId, 12 );
}

getRankInfoLevel( rankId )
{
	return int( tableLookup( "mp/ranktable.csv", 0, rankId, 13 ) );
}


onPlayerConnect()
{
	while(1) {
		level waittill( "connected", player );
		
		player.pers["rankxp"] = player maps\mp\gametypes\_persistence::statGet( "rankxp" );
		
		prestigeId = 0;
		player.pers["prestige"] = prestigeId;
		
		rankId = player getRankForXp( player getRankXP() );
		player.pers["rank"] = rankId;
		
		player.pers["participation"] = 0;
		player.cur_rankNum = rankId;
		player.rankUpdateTotal = 0;
		
		if ( level.rankedMatch ) {
			player maps\mp\gametypes\_persistence::statSet( "rank", rankId );
			player maps\mp\gametypes\_persistence::statSet( "plevel", prestigeId );
			player maps\mp\gametypes\_persistence::statSet( "minxp", getRankInfoMinXp( rankId ) );
			player maps\mp\gametypes\_persistence::statSet( "maxxp", getRankInfoMaxXp( rankId ) );
			player maps\mp\gametypes\_persistence::statSet( "lastxp", player.pers["rankxp"] );
			
			// for keeping track of rank through stat#251 used by menu script
			// attempt to move logic out of menus as much as possible
			assertex( isdefined(player.cur_rankNum), "rank: "+ rankId + " does not have an index, check mp/ranktable.csv" );
			player setStat( 251, player.cur_rankNum );
			player setStat( 252, player.cur_rankNum );
			player setStat( 2326, 0 );
			
			// resetting unlockable vars
			if ( !isDefined( player.pers["unlocks"] ) ) {
				player.pers["unlocks"] = [];
				player.pers["unlocks"]["weapon"] = 0;
				player.pers["unlocks"]["perk"] = 0;
				player.pers["unlocks"]["challenge"] = 0;
				player.pers["unlocks"]["camo"] = 0;
				player.pers["unlocks"]["attachment"] = 0;
				player.pers["unlocks"]["feature"] = 0;
				player.pers["unlocks"]["page"] = 0;
				
				// resetting unlockable dvars
				player setClientDvars( "player_unlockweapon0", "",
				                       "player_unlockweapon1", "",
				                       "player_unlockweapon2", "",
				                       "player_unlockweapons", "0",
				                       "player_unlockcamo0a", "",
				                       "player_unlockcamo0b", "",
				                       "player_unlockcamo1a", "",
				                       "player_unlockcamo1b", "",
				                       "player_unlockcamo2a", "",
				                       "player_unlockcamo2b", "",
				                       "player_unlockcamos", "0" );
				                       
				player setClientDvars( "player_unlockattachment0a", "",
				                       "player_unlockattachment0b", "",
				                       "player_unlockattachment1a", "",
				                       "player_unlockattachment1b", "",
				                       "player_unlockattachment2a", "",
				                       "player_unlockattachment2b", "",
				                       "player_unlockattachments", "0",
				                       "player_unlockperk0", "",
				                       "player_unlockperk1", "",
				                       "player_unlockperk2", "",
				                       "player_unlockperks", "0" );
				                       
				player setClientDvars( "player_unlockfeature0", "",
				                       "player_unlockfeature1", "",
				                       "player_unlockfeature2", "",
				                       "player_unlockfeatures", "0",
				                       "player_unlockchallenge0", "",
				                       "player_unlockchallenge1", "",
				                       "player_unlockchallenge2", "",
				                       "player_unlockchallenges", "0",
				                       "player_unlock_page", "0" );
			}
			
			// resetting summary vars
			
			// set default popup in lobby after a game finishes to game "summary"
			// if player got promoted during the game, we set it to "promotion"
			player updateChallenges();
			
		}
		
		player setclientdvar( "ui_lobbypopup", "" );
		if ( !isDefined( player.pers["summary"] ) ) {
			player.pers["summary"] = [];
			player.pers["summary"]["xp"] = 0;
			player.pers["summary"]["score"] = 0;
			player.pers["summary"]["challenge"] = 0;
			player.pers["summary"]["match"] = 0;
			player.pers["summary"]["misc"] = 0;
			
			// resetting game summary dvars
			player setClientDvar( "player_summary_xp", "0" );
			player setClientDvar( "player_summary_score", "0" );
			player setClientDvar( "player_summary_challenge", "0" );
			player setClientDvar( "player_summary_match", "0" );
			player setClientDvar( "player_summary_misc", "0" );
		}
		
		if ( level.gametype != "gg" )
			player setRank( rankId, prestigeId );
			
		player.explosiveKills[0] = 0;
		player.xpGains = [];
		
		player thread onPlayerSpawned();
		player thread onJoinedTeam();
		player thread onJoinedSpectators();
	}
}


onJoinedTeam()
{
	self endon("disconnect");
	
	while(1) {
		self waittill("joined_team");
		self thread removeRankHUD();
	}
}


onJoinedSpectators()
{
	self endon("disconnect");
	
	while(1) {
		self waittill("joined_spectators");
		self thread removeRankHUD();
	}
}


onPlayerSpawned()
{
	self endon("disconnect");
	
	while(1) {
		self waittill("spawned_player");
		
		if(!isdefined(self.hud_rankscroreupdate)) {
			self.hud_rankscroreupdate = newClientHudElem(self);
			self.hud_rankscroreupdate.horzAlign = "center";
			self.hud_rankscroreupdate.vertAlign = "middle";
			self.hud_rankscroreupdate.alignX = "center";
			self.hud_rankscroreupdate.alignY = "middle";
			self.hud_rankscroreupdate.x = 0;
			self.hud_rankscroreupdate.y = -60;
			self.hud_rankscroreupdate.font = "default";
			self.hud_rankscroreupdate.fontscale = 2.0;
			self.hud_rankscroreupdate.archived = false;
			self.hud_rankscroreupdate.color = (0.5,0.5,0.5);
			self.hud_rankscroreupdate maps\mp\gametypes\_hud::fontPulseInit();
		}
	}
}

roundUp( floatVal )
{
	if ( int( floatVal ) != floatVal )
		return int( floatVal+1 );
	else
		return int( floatVal );
}

giveRankXP( type, value, powerrank )
{
	self endon("disconnect");
	
	// Make sure we don't return if we are power ranking (doesn't matter the server is empty)
	if ( type != "powerrank" ) {
		if ( level.teamBased && (!level.playerCount["allies"] || !level.playerCount["axis"]) )
			return;
		else if ( !level.teamBased && (level.playerCount["allies"] + level.playerCount["axis"] < 2) )
			return;
	}
	
	if ( !isDefined( value ) )
		value = getScoreInfoValue( type );
		
	if ( !isDefined( self.xpGains[type] ) )
		self.xpGains[type] = 0;
		
	switch( type ) {
		case "kill":
		case "headshot":
		case "melee":
		case "grenade":
		case "vehicleexplosion":
		case "barrelexplosion":
		case "c4":
		case "claymore":
		case "rpg":
		case "grenadelauncher":
		case "airstrike":
		case "helicopter":
		
		case "assist":
		case "assist_25":
		case "assist_50":
		case "assist_75":
		
		case "suicide":
		case "teamkill":
		
		case "hardpoint":
		case "helicopterdown":
		case "helicopterdown_rpg":
		case "capture":
		case "return":
		case "defend":
		case "assault":
		case "plant":
		case "defuse":
		
		case "pickup":
			if ( level.numLives >= 1 && level.rankedMatch ) {
				multiplier = max(1,int( 10/level.numLives ));
				value = int(value * multiplier);
			}
			break;
	}
	
	self.xpGains[type] += value;
	
	self incRankXP( value );
	
	if ( level.rankedMatch && updateRank() ) {
		if ( !isDefined( powerrank ) ) {
			self thread updateRankAnnounceHUD();
		}
	}
	
	// we might overrule the displaysettings...
	if ( isDefined( self.enableText ) && self.enableText && ( !level.hardcoreMode || isDefined( powerrank ) || (level.scr_hud_show_xp_points == 2))) {
		if ( type == "teamkill" )
			// teamkills are handled differently
			self thread updateRankScoreHUD( getScoreInfoValue( "teamkill" ) );
		else
			self thread updateRankScoreHUD( value, powerrank );
	}
	
	switch( type ) {
		case "kill":
		case "headshot":
		case "melee":
		case "grenade":
		case "vehicleexplosion":
		case "barrelexplosion":
		case "c4":
		case "claymore":
		case "rpg":
		case "grenadelauncher":
		case "airstrike":
		case "helicopter":
		
		case "assist":
		case "assist_25":
		case "assist_50":
		case "assist_75":
		
		case "suicide":
		case "teamkill":
		
		case "hardpoint":
		case "helicopterdown":
		case "helicopterdown_rpg":
		case "capture":
		case "return":
		case "defend":
		case "assault":
		case "plant":
		case "defuse":
		
		case "pickup":
			self.pers["summary"]["score"] += value;
			self.pers["summary"]["xp"] += value;
			break;
			
		case "win":
		case "loss":
		case "tie":
			self.pers["summary"]["match"] += value;
			self.pers["summary"]["xp"] += value;
			break;
			
		case "challenge":
			self.pers["summary"]["challenge"] += value;
			self.pers["summary"]["xp"] += value;
			break;
			
		default:
			self.pers["summary"]["misc"] += value;	//keeps track of ungrouped match xp reward
			self.pers["summary"]["match"] += value;
			self.pers["summary"]["xp"] += value;
			break;
	}
	
	self setClientDvars(
	    "player_summary_xp", self.pers["summary"]["xp"],
	    "player_summary_score", self.pers["summary"]["score"],
	    "player_summary_challenge", self.pers["summary"]["challenge"],
	    "player_summary_match", self.pers["summary"]["match"],
	    "player_summary_misc", self.pers["summary"]["misc"]
	);
	
	self notify ( "update_playerscore_hud" );
}

updateRank()
{
	newRankId = self getRank();
	if ( newRankId == self.pers["rank"] )
		return false;
		
	oldRank = self.pers["rank"];
	rankId = self.pers["rank"];
	self.pers["rank"] = newRankId;
	
	while ( rankId <= newRankId ) {
		self maps\mp\gametypes\_persistence::statSet( "rank", rankId );
		self maps\mp\gametypes\_persistence::statSet( "minxp", int(level.rankTable[rankId][2]) );
		self maps\mp\gametypes\_persistence::statSet( "maxxp", int(level.rankTable[rankId][7]) );
		
		// set current new rank index to stat#252
		self setStat( 252, rankId );
		
		// tell lobby to popup promotion window instead
		self.setPromotion = true;
		if ( level.rankedMatch && level.gameEnded )
			self setClientDvar( "ui_lobbypopup", "promotion" );
			
		// unlocks weapon =======
		unlockedWeapon = self getRankInfoUnlockWeapon( rankId );	// unlockedweapon is weapon reference string
		if ( isDefined( unlockedWeapon ) && unlockedWeapon != "" )
			unlockWeapon( unlockedWeapon );
			
		// unlock perk ==========
		unlockedPerk = self getRankInfoUnlockPerk( rankId );	// unlockedweapon is weapon reference string
		if ( isDefined( unlockedPerk ) && unlockedPerk != "" )
			unlockPerk( unlockedPerk );
			
		// unlock challenge =====
		unlockedChallenge = self getRankInfoUnlockChallenge( rankId );
		if ( isDefined( unlockedChallenge ) && unlockedChallenge != "" )
			unlockChallenge( unlockedChallenge );
			
		// unlock attachment ====
		unlockedAttachment = self getRankInfoUnlockAttachment( rankId );	// ex: ak47 gl
		if ( isDefined( unlockedAttachment ) && unlockedAttachment != "" )
			unlockAttachment( unlockedAttachment );
			
		unlockedCamo = self getRankInfoUnlockCamo( rankId );	// ex: ak47 camo_brockhaurd
		if ( isDefined( unlockedCamo ) && unlockedCamo != "" )
			unlockCamo( unlockedCamo );
			
		unlockedFeature = self getRankInfoUnlockFeature( rankId );	// ex: feature_cac
		if ( isDefined( unlockedFeature ) && unlockedFeature != "" )
			unlockFeature( unlockedFeature );
			
		rankId++;
	}
	self logString( "promoted from " + oldRank + " to " + newRankId + " timeplayed: " + self maps\mp\gametypes\_persistence::statGet( "time_played_total" ) );
	
	if ( level.gametype != "gg" )
		self setRank( newRankId );
		
	return true;
}

forceUnlockAll( wantedRankWPF )
{
	if( !isDefined(self.forcedUnlock) ) {
		self.forcedUnlock = 1;
		rankId = self.pers["rank"];
		
		if(rankId >= wantedRankWPF )
			return false;
			
		while ( rankId <= wantedRankWPF ) {
			// tell lobby to popup promotion window instead
			self.setPromotion = true;
			self.forcedUnlock = 1;
			
			// unlocks weapon =======
			unlockedWeapon = self getRankInfoUnlockWeapon( rankId );	// unlockedweapon is weapon reference string
			if ( isDefined( unlockedWeapon ) && unlockedWeapon != "" ) {
				unlockWeapon( unlockedWeapon );
				wait(0.05);
			}
			
			// unlock perk ==========
			unlockedPerk = self getRankInfoUnlockPerk( rankId );	// unlockedweapon is weapon reference string
			if ( isDefined( unlockedPerk ) && unlockedPerk != "" ) {
				unlockPerk( unlockedPerk );
				wait(0.05);
			}
			
			// unlock challenge =====
			unlockedChallenge = self getRankInfoUnlockChallenge( rankId );
			if ( isDefined( unlockedChallenge ) && unlockedChallenge != "" ) {
				unlockChallenge( unlockedChallenge );
				wait(0.05);
			}
			
			// unlock attachment ====
			unlockedAttachment = self getRankInfoUnlockAttachment( rankId );	// ex: ak47 gl
			if ( isDefined( unlockedAttachment ) && unlockedAttachment != "" ) {
				unlockAttachment( unlockedAttachment );
				wait(0.05);
			}
			
			unlockedCamo = self getRankInfoUnlockCamo( rankId );	// ex: ak47 camo_brockhaurd
			if ( isDefined( unlockedCamo ) && unlockedCamo != "" ) {
				unlockCamo( unlockedCamo );
				wait(0.05);
			}
			
			unlockedFeature = self getRankInfoUnlockFeature( rankId );	// ex: feature_cac
			if ( isDefined( unlockedFeature ) && unlockedFeature != "" ) {
				unlockFeature( unlockedFeature );
				wait(0.05);
			}
			rankId++;
		}
		
		self.forcedUnlock = undefined;
		self setClientDvar("ct_tmp_proc", 0);
		
		return true;
	}
	return false;
}

forceUnlockAllWeapons()
{
	if( !isDefined(self.forcedUnlock) ) {
		self.forcedUnlock = 1;
		
		self forceUnlockWeapon( "colt45" );
		wait (0.1);
		self forceUnlockWeapon( "deserteagle" );
		wait (0.1);
		self forceUnlockWeapon( "m4" );
		wait (0.1);
		self forceUnlockWeapon( "g3" );
		wait (0.1);
		self forceUnlockWeapon( "g36c" );
		wait (0.1);
		self forceUnlockWeapon( "m14" );
		wait (0.1);
		self forceUnlockWeapon( "mp44" );
		wait (0.1);
		self forceUnlockWeapon( "m60e4" );
		wait (0.1);
		self forceUnlockWeapon( "uzi" );
		wait (0.1);
		self forceUnlockWeapon( "ak74u" );
		wait (0.1);
		self forceUnlockWeapon( "p90" );
		wait (0.1);
		self forceUnlockWeapon( "m1014" );
		wait (0.1);
		self forceUnlockWeapon( "m21" );
		wait (0.1);
		self forceUnlockWeapon( "dragunov" );
		wait (0.1);
		self forceUnlockWeapon( "remington700" );
		wait (0.1);
		self forceUnlockWeapon( "barrett" );
		wait (0.1);
		
		self setClientDvar("ct_tmp_proc", 0);
		self.forcedUnlock = undefined;
	}
}

forceUnlockWeapon( weapon )
{
	if ( isDefined( weapon ) && weapon != "" ) {
		switch( weapon ) {
			case "colt45":
				self unlockWeapon( weapon );
				self unlockAttachmentSingular("colt45 silencer");
				break;
			case "deserteagle":
				self unlockWeapon( weapon );
				break;
			case "m4":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_m4_1;ch_expert_m4_1");
				break;
			case "g3":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_g3_1;ch_expert_g3_1");
				break;
			case "g36c":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_g36c_1;ch_expert_g36c_1");
				break;
			case "m14":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_m14_1;ch_expert_m14_1");
				break;
			case "mp44":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_expert_mp44_1");
				break;
			case "m60e4":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_m60e4_1;ch_expert_m60e4_1");
				break;
			case "uzi":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_uzi_1;ch_expert_uzi_1");
				break;
			case "ak74u":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_ak74u_1;ch_expert_ak74u_1");
				break;
			case "p90":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_p90_1;ch_expert_p90_1");
				break;
			case "m1014":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_m1014_1;ch_expert_m1014_1");
				break;
			case "m21":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_m21;ch_expert_m21_1");
				break;
			case "dragunov":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_dragunov;ch_expert_dragunov_1");
				break;
			case "remington700":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_remington700;ch_expert_remington700_1");
				break;
			case "barrett":
				self unlockWeapon( weapon );
				self unlockChallenge("ch_marksman_barrett;ch_expert_barrett_1");
				break;
		}
	}
}

forceUnlockAllPerks()
{
	if( !isDefined(self.forcedUnlock) ) {
		self.forcedUnlock = 1;
		
		self UnlockPerk( "specialty_detectexplosive" );
		wait (0.2);
		self UnlockPerk( "claymore_mp" );
		wait (0.2);
		self UnlockPerk( "specialty_extraammo" );
		wait (0.2);
		self UnlockPerk( "specialty_fraggrenade" );
		wait (0.2);
		self UnlockPerk( "specialty_fastreload" );
		wait (0.2);
		self UnlockPerk( "specialty_rof" );
		wait (0.2);
		self UnlockPerk( "specialty_gpsjammer" );
		wait (0.2);
		self UnlockPerk( "specialty_twoprimaries" );
		wait (0.2);
		self UnlockPerk( "specialty_quieter" );
		wait (0.2);
		self UnlockPerk( "specialty_parabolic" );
		wait (0.2);
		self UnlockPerk( "specialty_holdbreath" );
		wait (0.2);
		self UnlockPerk( "specialty_pistoldeath" );
		wait (0.2);
		self UnlockPerk( "specialty_grenadepulldeath" );
		wait (0.2);
		
		self setClientDvar("ct_tmp_proc", 0);
		self.forcedUnlock = undefined;
	}
}

forceUnlockAllAttach()
{
	if( !isDefined(self.forcedUnlock) ) {
		self.forcedUnlock = 1;
		
		attachmentList = [];
		
		attachmentList[attachmentList.size] = "ak47:reflex";
		attachmentList[attachmentList.size] = "ak74u:reflex";
		attachmentList[attachmentList.size] = "m1014:reflex";
		attachmentList[attachmentList.size] = "g3:reflex";
		attachmentList[attachmentList.size] = "g36c:reflex";
		attachmentList[attachmentList.size] = "m14:reflex";
		attachmentList[attachmentList.size] = "m16:reflex";
		attachmentList[attachmentList.size] = "m4:reflex";
		attachmentList[attachmentList.size] = "mp5:reflex";
		attachmentList[attachmentList.size] = "skorpion:reflex";
		attachmentList[attachmentList.size] = "uzi:reflex";
		attachmentList[attachmentList.size] = "p90:reflex";
		attachmentList[attachmentList.size] = "rpd:reflex";
		attachmentList[attachmentList.size] = "saw:reflex";
		attachmentList[attachmentList.size] = "m60e4:reflex";
		attachmentList[attachmentList.size] = "winchester1200:reflex";
		attachmentList[attachmentList.size] = "ak47:silencer";
		attachmentList[attachmentList.size] = "ak74u:silencer";
		attachmentList[attachmentList.size] = "g3:silencer";
		attachmentList[attachmentList.size] = "g36c:silencer";
		attachmentList[attachmentList.size] = "m14:silencer";
		attachmentList[attachmentList.size] = "m16:silencer";
		attachmentList[attachmentList.size] = "m4:silencer";
		attachmentList[attachmentList.size] = "mp5:silencer";
		attachmentList[attachmentList.size] = "skorpion:silencer";
		attachmentList[attachmentList.size] = "uzi:silencer";
		attachmentList[attachmentList.size] = "p90:silencer";
		attachmentList[attachmentList.size] = "ak47:acog";
		attachmentList[attachmentList.size] = "ak74u:acog";
		attachmentList[attachmentList.size] = "barrett:acog";
		attachmentList[attachmentList.size] = "dragunov:acog";
		attachmentList[attachmentList.size] = "g3:acog";
		attachmentList[attachmentList.size] = "g36c:acog";
		attachmentList[attachmentList.size] = "m14:acog";
		attachmentList[attachmentList.size] = "m16:acog";
		attachmentList[attachmentList.size] = "m21:acog";
		attachmentList[attachmentList.size] = "m4:acog";
		attachmentList[attachmentList.size] = "m40a3:acog";
		attachmentList[attachmentList.size] = "mp5:acog";
		attachmentList[attachmentList.size] = "remington700:acog";
		attachmentList[attachmentList.size] = "skorpion:acog";
		attachmentList[attachmentList.size] = "uzi:acog";
		attachmentList[attachmentList.size] = "p90:acog";
		attachmentList[attachmentList.size] = "rpd:acog";
		attachmentList[attachmentList.size] = "saw:acog";
		attachmentList[attachmentList.size] = "m60e4:acog";
		attachmentList[attachmentList.size] = "rpd:grip";
		attachmentList[attachmentList.size] = "saw:grip";
		attachmentList[attachmentList.size] = "m60e4:grip";
		attachmentList[attachmentList.size] = "m1014:grip";
		attachmentList[attachmentList.size] = "winchester1200:grip";
		attachmentList[attachmentList.size] = "m14:gl";
		attachmentList[attachmentList.size] = "g3:gl";
		attachmentList[attachmentList.size] = "g36c:gl";
		attachmentList[attachmentList.size] = "m4:gl";
		
		attachix = 0;
		
		// Cycle the list of attachments and unlock them
		while( attachix < attachmentList.size ) {
			self unlockAttachmentSingularSpecial( attachmentList[ attachix ] );
			wait ( 0.1 );
			attachix++;
		}
		
		self setClientDvar("ct_tmp_proc", 0);
		self.forcedUnlock = undefined;
	}
}

updateRankAnnounceHUD()
{
	self endon("disconnect");
	
	self notify("update_rank");
	self endon("update_rank");
	
	team = self.pers["team"];
	if ( !isdefined( team ) )
		return;
		
	self notify("reset_outcome");
	newRankName = self getRankInfoFull( self.pers["rank"] );
	
	notifyData = spawnStruct();
	
	notifyData.titleText = &"RANK_PROMOTED";
	
	notifyData.iconName = self getRankInfoIcon( self.pers["rank"], self.pers["prestige"] );
	notifyData.sound = "mp_level_up";
	notifyData.duration = 4.0;
	
	/* //flawed
	if ( isSubStr( level.rankTable[self.pers["rank"]][1], "2" ) )
		subRank = 2;
	else if ( isSubStr( level.rankTable[self.pers["rank"]][1], "3" ) )
		subRank = 3;
	else
		subRank = 1;
	*/
	
	rank_char = level.rankTable[self.pers["rank"]][1];
	subRank = int(rank_char[rank_char.size-1]);
	
	if ( subRank == 2 ) {
		notifyData.textLabel = newRankName;
		notifyData.notifyText = &"RANK_ROMANI";
		notifyData.textIsString = true;
	}
	else if ( subRank == 3 ) {
		notifyData.textLabel = newRankName;
		notifyData.notifyText = &"RANK_ROMANII";
		notifyData.textIsString = true;
	}
	else if ( subRank == 4 ) {
		notifyData.textLabel = newRankName;
		notifyData.notifyText = &"OW_RANK_ROMANIII";
		notifyData.textIsString = true;
	}
	else if ( subRank == 5 ) {
		notifyData.textLabel = newRankName;
		notifyData.notifyText = &"OW_RANK_ROMANIV";
		notifyData.textIsString = true;
	}
	else {
		notifyData.notifyText = newRankName;
	}
	
	if( level.scr_show_ingame_ranking_challenges )
		thread maps\mp\gametypes\_hud_message::notifyMessage( notifyData );
		
	if ( subRank > 1 )
		return;
		
	for ( i = 0; i < level.players.size; i++ ) {
		player = level.players[i];
		playerteam = player.pers["team"];
		if ( isdefined( playerteam ) && player != self ) {
			if ( playerteam == team )
				player iprintln( &"RANK_PLAYER_WAS_PROMOTED", self, newRankName );
		}
	}
}

// End of game summary/unlock menu page setup
// 0 = no unlocks, 1 = only page one, 2 = only page two, 3 = both pages
unlockPage( in_page )
{
	if( in_page == 1 ) {
		if( self.pers["unlocks"]["page"] == 0 ) {
			self setClientDvar( "player_unlock_page", "1" );
			self.pers["unlocks"]["page"] = 1;
		}
		if( self.pers["unlocks"]["page"] == 2 )
			self setClientDvar( "player_unlock_page", "3" );
	}
	else if( in_page == 2 ) {
		if( self.pers["unlocks"]["page"] == 0 ) {
			self setClientDvar( "player_unlock_page", "2" );
			self.pers["unlocks"]["page"] = 2;
		}
		if( self.pers["unlocks"]["page"] == 1 )
			self setClientDvar( "player_unlock_page", "3" );
	}
}

// unlocks weapon
unlockWeapon( refString )
{
	if ( refString == ";" )
		return;
		
	assert( isDefined( refString ) && refString != "" );
	
	stat = int( tableLookup( "mp/statstable.csv", 4, refString, 1 ) );
	
	assertEx( stat > 0, "statsTable refstring " + refString + " has invalid stat number: " + stat );
	
	if( self getStat( stat ) > 0 )
		return;
		
	self setStat( stat, 65537 );	// 65537 is binary mask for newly unlocked weapon
	if( !isDefined(self.forcedUnlock) ) {
		self setClientDvar( "player_unlockWeapon" + self.pers["unlocks"]["weapon"], refString );
		self.pers["unlocks"]["weapon"]++;
		self setClientDvar( "player_unlockWeapons", self.pers["unlocks"]["weapon"] );
		
		self unlockPage( 1 );
	}
}

// unlocks perk
unlockPerk( refString )
{
	assert( isDefined( refString ) && refString != "" );
	
	stat = int( tableLookup( "mp/statstable.csv", 4, refString, 1 ) );
	
	if( self getStat( stat ) > 0 )
		return;
		
	self setStat( stat, 2 );	// 2 is binary mask for newly unlocked perk
	if( !isDefined(self.forcedUnlock) ) {
		self setClientDvar( "player_unlockPerk" + self.pers["unlocks"]["perk"], refString );
		self.pers["unlocks"]["perk"]++;
		self setClientDvar( "player_unlockPerks", self.pers["unlocks"]["perk"] );
		
		self unlockPage( 2 );
	}
}

// unlocks camo - multiple
unlockCamo( refString )
{
	assert( isDefined( refString ) && refString != "" );
	
	// tokenize reference string, accepting multiple camo unlocks in one call
	Ref_Tok = strTok( refString, ";" );
	assertex( Ref_Tok.size > 0, "Camo unlock specified in datatable ["+refString+"] is incomplete or empty" );
	
	for( i=0; i<Ref_Tok.size; i++ )
		unlockCamoSingular( Ref_Tok[i] );
}

// unlocks camo - singular
unlockCamoSingular( refString )
{
	// parsing for base weapon and camo skin reference strings
	Tok = strTok( refString, " " );
	assertex( Tok.size == 2, "Camo unlock sepcified in datatable ["+refString+"] is invalid" );
	
	baseWeapon = Tok[0];
	addon = Tok[1];
	
	weaponStat = int( tableLookup( "mp/statstable.csv", 4, baseWeapon, 1 ) );
	addonMask = int( tableLookup( "mp/attachmenttable.csv", 4, addon, 10 ) );
	
	if ( self getStat( weaponStat ) & addonMask )
		return;
		
	// ORs the camo/attachment's bitmask with weapon's current bits, thus switching the camo/attachment bit on
	setstatto = ( self getStat( weaponStat ) | addonMask ) | (addonMask<<16) | (1<<16);
	self setStat( weaponStat, setstatto );
	
	//fullName = tableLookup( "mp/statstable.csv", 4, baseWeapon, 3 ) + " " + tableLookup( "mp/attachmentTable.csv", 4, addon, 3 );
	if( !isDefined(self.forcedUnlock) ) {
		self setClientDvar( "player_unlockCamo" + self.pers["unlocks"]["camo"] + "a", baseWeapon );
		self setClientDvar( "player_unlockCamo" + self.pers["unlocks"]["camo"] + "b", addon );
		self.pers["unlocks"]["camo"]++;
		self setClientDvar( "player_unlockCamos", self.pers["unlocks"]["camo"] );
		
		self unlockPage( 1 );
	}
}

unlockAttachment( refString )
{
	assert( isDefined( refString ) && refString != "" );
	
	// tokenize reference string, accepting multiple camo unlocks in one call
	Ref_Tok = strTok( refString, ";" );
	assertex( Ref_Tok.size > 0, "Attachment unlock specified in datatable ["+refString+"] is incomplete or empty" );
	
	for( i=0; i<Ref_Tok.size; i++ )
		unlockAttachmentSingular( Ref_Tok[i] );
}

// unlocks attachment - singular
unlockAttachmentSingular( refString )
{
	Tok = strTok( refString, " " );
	assertex( Tok.size == 2, "Attachment unlock sepcified in datatable ["+refString+"] is invalid" );
	
	baseWeapon = Tok[0];
	addon = Tok[1];
	
	weaponStat = int( tableLookup( "mp/statstable.csv", 4, baseWeapon, 1 ) );
	addonMask = int( tableLookup( "mp/attachmenttable.csv", 4, addon, 10 ) );
	
	if ( self getStat( weaponStat ) & addonMask )
		return;
		
	// ORs the camo/attachment's bitmask with weapon's current bits, thus switching the camo/attachment bit on
	setstatto = ( self getStat( weaponStat ) | addonMask ) | (addonMask<<16) | (1<<16);
	self setStat( weaponStat, setstatto );
	
	//fullName = tableLookup( "mp/statstable.csv", 4, baseWeapon, 3 ) + " " + tableLookup( "mp/attachmentTable.csv", 4, addon, 3 );
	if( !isDefined(self.forcedUnlock) ) {
		self setClientDvar( "player_unlockAttachment" + self.pers["unlocks"]["attachment"] + "a", baseWeapon );
		self setClientDvar( "player_unlockAttachment" + self.pers["unlocks"]["attachment"] + "b", addon );
		self.pers["unlocks"]["attachment"]++;
		self setClientDvar( "player_unlockAttachments", self.pers["unlocks"]["attachment"] );
		
		self unlockPage( 1 );
	}
}

unlockAttachmentSingularSpecial( refString )
{
	Tok = strTok( refString, ":" );
	assertex( Tok.size == 2, "Attachment unlock specified in datatable ["+refString+"] is invalid" );
	
	baseWeapon = Tok[0];
	addon = Tok[1];
	
	if( !maps\mp\gametypes\_class::WeaponHasAttachment( baseWeapon, addon ) )
		return;
		
	weaponStat = int( tableLookup( "mp/statstable.csv", 4, baseWeapon, 1 ) );
	addonMask = int( tableLookup( "mp/attachmenttable.csv", 4, addon, 10 ) );
	
	weaponFlags = self getStat( weaponStat );
	
	if ( (weaponFlags & addonMask) || weaponFlags == 0 )
		return;
		
	// ORs the camo/attachment's bitmask with weapon's current bits, thus switching the camo/attachment bit on
	setstatto = ( weaponFlags | addonMask ) | (addonMask<<16) | (1<<16);
	self setStat( weaponStat, setstatto );
	
	//fullName = tableLookup( "mp/statstable.csv", 4, baseWeapon, 3 ) + " " + tableLookup( "mp/attachmentTable.csv", 4, addon, 3 );
}

/*
setBaseNewStatus( stat )
{
	weaponIDs = level.tbl_weaponIDs;
	perkData = level.tbl_PerkData;
	statOffsets = level.statOffsets;
	if ( isDefined( weaponIDs[stat] ) )
	{
		if ( isDefined( statOffsets[weaponIDs[stat]["group"]] ) )
			self setStat( statOffsets[weaponIDs[stat]["group"]], 1 );
	}

	if ( isDefined( perkData[stat] ) )
	{
		if ( isDefined( statOffsets[perkData[stat]["perk_num"]] ) )
			self setStat( statOffsets[perkData[stat]["perk_num"]], 1 );
	}
}

clearNewStatus( stat, bitMask )
{
	self setStat( stat, self getStat( stat ) & bitMask );
}


updateBaseNewStatus()
{
	self setstat( 290, 0 );
	self setstat( 291, 0 );
	self setstat( 292, 0 );
	self setstat( 293, 0 );
	self setstat( 294, 0 );
	self setstat( 295, 0 );
	self setstat( 296, 0 );
	self setstat( 297, 0 );
	self setstat( 298, 0 );

	weaponIDs = level.tbl_weaponIDs;
	// update for weapons and any attachments or camo skins, bit mask 16->32 : 536805376 for new status
	for( i=0; i<149; i++ )
	{
		if( !isdefined( weaponIDs[i] ) )
			continue;
		if( self getStat( i+3000 ) & 536805376 )
			setBaseNewStatus( i );
	}

	perkIDs = level.tbl_PerkData;
	// update for perks
	for( i=150; i<199; i++ )
	{
		if( !isdefined( perkIDs[i] ) )
			continue;
		if( self getStat( i ) > 1 )
			setBaseNewStatus( i );
	}
}
*/

unlockChallenge( refString )
{
	assert( isDefined( refString ) && refString != "" );
	
	// tokenize reference string, accepting multiple camo unlocks in one call
	Ref_Tok = strTok( refString, ";" );
	assertex( Ref_Tok.size > 0, "Camo unlock specified in datatable ["+refString+"] is incomplete or empty" );
	
	for( i=0; i<Ref_Tok.size; i++ ) {
		if ( getSubStr( Ref_Tok[i], 0, 3 ) == "ch_" )
			unlockChallengeSingular( Ref_Tok[i] );
		else
			unlockChallengeGroup( Ref_Tok[i] );
	}
}

// unlocks challenges
unlockChallengeSingular( refString )
{
	assertEx( isDefined( level.challengeInfo[refString] ), "Challenge unlock "+refString+" does not exist." );
	tableName = "mp/challengetable_tier" + level.challengeInfo[refString]["tier"] + ".csv";
	
	if ( self getStat( level.challengeInfo[refString]["stateid"] ) )
		return;
		
	self setStat( level.challengeInfo[refString]["stateid"], 1 );
	
	// set tier as new
	self setStat( 269 + level.challengeInfo[refString]["tier"], 2 );// 2: new, 1: old
	
	//self setClientDvar( "player_unlockchallenge" + self.pers["unlocks"]["challenge"], level.challengeInfo[refString]["name"] );
	if( !isDefined(self.forcedUnlock) ) {
		self.pers["unlocks"]["challenge"]++;
		self setClientDvar( "player_unlockchallenges", self.pers["unlocks"]["challenge"] );
		
		self unlockPage( 2 );
	}
}

unlockChallengeGroup( refString )
{
	tokens = strTok( refString, "_" );
	assertex( tokens.size > 0, "Challenge unlock specified in datatable ["+refString+"] is incomplete or empty" );
	
	assert( tokens[0] == "tier" );
	
	tierId = int( tokens[1] );
	assertEx( tierId > 0 && tierId <= level.numChallengeTiers, "invalid tier ID " + tierId );
	
	groupId = "";
	if ( tokens.size > 2 )
		groupId = tokens[2];
		
	challengeArray = getArrayKeys( level.challengeInfo );
	
	for ( index = 0; index < challengeArray.size; index++ ) {
		challenge = level.challengeInfo[challengeArray[index]];
		
		if ( challenge["tier"] != tierId )
			continue;
			
		if ( challenge["group"] != groupId )
			continue;
			
		if ( self getStat( challenge["stateid"] ) )
			continue;
			
		self setStat( challenge["stateid"], 1 );
		
		// set tier as new
		self setStat( 269 + challenge["tier"], 2 );// 2: new, 1: old
		
	}
	
	//desc = tableLookup( "mp/challengeTable.csv", 0, tierId, 1 );
	
	//self setClientDvar( "player_unlockchallenge" + self.pers["unlocks"]["challenge"], desc );
	if( !isDefined(self.forcedUnlock) ) {
		self.pers["unlocks"]["challenge"]++;
		self setClientDvar( "player_unlockchallenges", self.pers["unlocks"]["challenge"] );
		self unlockPage( 2 );
	}
}


unlockFeature( refString )
{
	assert( isDefined( refString ) && refString != "" );
	
	stat = int( tableLookup( "mp/statstable.csv", 4, refString, 1 ) );
	
	if( self getStat( stat ) > 0 )
		return;
		
	if ( refString == "feature_cac" )
		self setStat( 200, 1 );
		
	self setStat( stat, 2 ); // 2 is binary mask for newly unlocked
	
	if ( refString == "feature_challenges" && !isDefined(self.forcedUnlock) ) {
		self unlockPage( 2 );
		return;
	}
	
	if( !isDefined(self.forcedUnlock) ) {
		self setClientDvar( "player_unlockfeature"+self.pers["unlocks"]["feature"], tableLookup( "mp/statstable.csv", 4, refString, 3 ) );
		self.pers["unlocks"]["feature"]++;
		self setClientDvar( "player_unlockfeatures", self.pers["unlocks"]["feature"] );
		
		self unlockPage( 2 );
	}
}


// update copy of a challenges to be progressed this game, only at the start of the game
// challenges unlocked during the game will not be progressed on during that game session
updateChallenges()
{
	self.challengeData = [];
	for ( i = 1; i <= level.numChallengeTiers; i++ ) {
		tableName = "mp/challengetable_tier"+i+".csv";
		
		idx = 1;
		// unlocks all the challenges in this tier
		for( idx = 1; isdefined( tableLookup( tableName, 0, idx, 0 ) ) && tableLookup( tableName, 0, idx, 0 ) != ""; idx++ ) {
			stat_num = tableLookup( tableName, 0, idx, 2 );
			if( isdefined( stat_num ) && stat_num != "" ) {
				statVal = self getStat( int( stat_num ) );
				
				refString = tableLookup( tableName, 0, idx, 7 );
				if ( statVal )
					self.challengeData[refString] = statVal;
			}
		}
	}
}


buildChallegeInfo()
{
	level.challengeInfo = [];
	
	for ( i = 1; i <= level.numChallengeTiers; i++ ) {
		tableName = "mp/challengetable_tier"+i+".csv";
		
		baseRef = "";
		// unlocks all the challenges in this tier
		for( idx = 1; isdefined( tableLookup( tableName, 0, idx, 0 ) ) && tableLookup( tableName, 0, idx, 0 ) != ""; idx++ ) {
			stat_num = tableLookup( tableName, 0, idx, 2 );
			refString = tableLookup( tableName, 0, idx, 7 );
			
			level.challengeInfo[refString] = [];
			level.challengeInfo[refString]["tier"] = i;
			level.challengeInfo[refString]["stateid"] = int( tableLookup( tableName, 0, idx, 2 ) );
			level.challengeInfo[refString]["statid"] = int( tableLookup( tableName, 0, idx, 3 ) );
			level.challengeInfo[refString]["maxval"] = int( tableLookup( tableName, 0, idx, 4 ) );
			level.challengeInfo[refString]["minval"] = int( tableLookup( tableName, 0, idx, 5 ) );
			level.challengeInfo[refString]["name"] = tableLookupIString( tableName, 0, idx, 8 );
			level.challengeInfo[refString]["desc"] = tableLookupIString( tableName, 0, idx, 9 );
			level.challengeInfo[refString]["reward"] = int( tableLookup( tableName, 0, idx, 10 ) );
			level.challengeInfo[refString]["camo"] = tableLookup( tableName, 0, idx, 12 );
			level.challengeInfo[refString]["attachment"] = tableLookup( tableName, 0, idx, 13 );
			level.challengeInfo[refString]["group"] = tableLookup( tableName, 0, idx, 14 );
			
			precacheString( level.challengeInfo[refString]["name"] );
			
			if ( !int( level.challengeInfo[refString]["stateid"] ) ) {
				level.challengeInfo[baseRef]["levels"]++;
				level.challengeInfo[refString]["stateid"] = level.challengeInfo[baseRef]["stateid"];
				level.challengeInfo[refString]["level"] = level.challengeInfo[baseRef]["levels"];
			}
			else {
				level.challengeInfo[refString]["levels"] = 1;
				level.challengeInfo[refString]["level"] = 1;
				baseRef = refString;
			}
		}
	}
}


endGameUpdate()
{
	player = self;
}

updateRankScoreHUD( amount, powerrank )
{
	self endon( "disconnect" );
	self endon( "joined_team" );
	self endon( "joined_spectators" );
	
	if ( amount == 0 )
		return;
		
	self notify( "update_score" );
	self endon( "update_score" );
	
	self.rankUpdateTotal += amount;
	
	wait ( 0.05 );
	
	if( isDefined( self.hud_rankscroreupdate ) && ( level.scr_hud_show_xp_points != 0 || isDefined( powerrank ) ) ) {
		if ( self.rankUpdateTotal < 0 ) {
			self.hud_rankscroreupdate.label = &"";
			self.hud_rankscroreupdate.color = (1,0,0);
		}
		else {
			self.hud_rankscroreupdate.label = &"MP_PLUS";
			self.hud_rankscroreupdate.color = (1,1,0.5);
		}
		
		self.hud_rankscroreupdate setValue(self.rankUpdateTotal);
		self.hud_rankscroreupdate.alpha = 0.85;
		
		if( level.scr_show_ingame_ranking_challenges )
			self.hud_rankscroreupdate thread maps\mp\gametypes\_hud::fontPulse( self );
			
		wait 1;
		self.hud_rankscroreupdate fadeOverTime( 0.75 );
		self.hud_rankscroreupdate.alpha = 0;
		
		self.rankUpdateTotal = 0;
	}
}

removeRankHUD()
{
	if(isDefined(self.hud_rankscroreupdate))
		self.hud_rankscroreupdate.alpha = 0;
}

getRank()
{
	rankXp = self.pers["rankxp"];
	rankId = self.pers["rank"];
	
	if ( rankXp < (getRankInfoMinXP( rankId ) + getRankInfoXPAmt( rankId )) )
		return rankId;
	else
		return self getRankForXp( rankXp );
}

getRankForXp( xpVal )
{
	// Disabled code, virtual ranks feature is going to be removed because:
	// It's useless now that we've separated ranks,
	// Script memory is needed (Hunk_user out of memory)
	
	//if ( level.scr_enable_virtual_ranks ) {
	//	rankId = openwarfare\_virtualranks::getRankForName( self );
	//	return rankId;
	//}
	
	rankId = 0;
	rankName = level.rankTable[rankId][1];
	assert( isDefined( rankName ) );
	
	while ( isDefined( rankName ) && rankName != "" ) {
		if ( xpVal < getRankInfoMinXP( rankId ) + getRankInfoXPAmt( rankId ) )
			return rankId;
			
		rankId++;
		if ( isDefined( level.rankTable[rankId] ) )
			rankName = level.rankTable[rankId][1];
		else
			rankName = undefined;
	}
	
	rankId--;
	return rankId;
}

getSPM()
{
	spmLevel = level.maxRank - self getRank();
	return spmLevel * 0.25;
}

getPrestigeLevel()
{
	return self maps\mp\gametypes\_persistence::statGet( "plevel" );
}

getRankXP()
{
	return self.pers["rankxp"];
}

incRankXP( amount )
{
	if ( !level.rankedMatch )
		return;
		
	xp = self getRankXP();
	newXp = (xp + amount);
	
	if ( self.pers["rank"] == level.maxRank && newXp >= getRankInfoMaxXP( level.maxRank ) )
		newXp = getRankInfoMaxXP( level.maxRank ) - 1;
		
	self.pers["rankxp"] = newXp;
	self maps\mp\gametypes\_persistence::statSet( "rankxp", newXp );
}
