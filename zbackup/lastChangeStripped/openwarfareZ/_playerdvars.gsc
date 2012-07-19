












#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{



level.scr_hud_show_enemy_names = getdvarx( "scr_hud_show_enemy_names", "int", 1, 0, 1 );
level.scr_hud_show_friendly_names = getdvarx( "scr_hud_show_friendly_names", "int", 1, 0, 1 );
level.scr_hud_show_friendly_names_distance = getdvarx( "scr_hud_show_friendly_names_distance", "int", 10000, 50, 10000 );
level.scr_enable_auto_melee = getdvarx( "scr_enable_auto_melee", "int", 1, 0, 1 );

level.scr_game_forceuav = getdvarx( "scr_game_forceuav", "int", 0, 0, 1 );

level.scr_ragdoll_explode_force = getdvarx( "scr_ragdoll_explode_force", "int", 18000, 0, 60000 );
level.scr_ragdoll_explode_upbias = getdvarx( "scr_ragdoll_explode_upbias", "float", 0.8, 0, 2 );
level.scr_dynent_bulletForce = getdvarx( "scr_dynent_bulletForce", "int", 1000, 0, 1000000 );
level.scr_dynent_explodeForce = getdvarx( "scr_dynent_explodeForce", "int", 12500, 0, 1000000 );
level.scr_cl_maxpackets = getdvarx( "scr_cl_maxpackets", "int", 30, 0, 100 );

level.scr_bob_prone_fix = getdvarx( "scr_bob_prone_fix", "int", 0, 0, 1 );
level.scr_leg_yaw_tolerance = getdvarx( "scr_leg_yaw_tolerance", "int", 20, 0, 180 );
level.scr_swing_speed = getdvarx( "scr_swing_speed", "float", 0.2, 0, 1 );

level.scr_hudDamageIconHeight = getdvarx( "scr_hudDamageIconHeight", "int", 64, 0, 512 );
level.scr_hudDamageIconWidth = getdvarx( "scr_hudDamageIconWidth", "int", 128, 0, 512 );

level.scr_show_fog = getdvarx( "scr_show_fog", "int", 1, 0, 1 );
level.scr_hud_compass_objectives = getdvarx( "scr_hud_compass_objectives", "int", 0, 0, 1 );
level.scr_bob_effect_enable = getdvarx( "scr_bob_effect_enable", "int", 1, 0, 1 );
level.scr_show_guid_on_firstspawn = getdvarx( "scr_show_guid_on_firstspawn", "int", 0, 0, 1 );

level.scr_barrel_damage_enable = getdvarx( "scr_barrel_damage_enable", "int", 1, 0, 1 );
level.scr_vehicle_damage_enable = getdvarx( "scr_vehicle_damage_enable", "int", 1, 0, 1 );

level.scr_fire_tracer_chance = getdvarx( "scr_fire_tracer_chance", "float", 0.2, 0, 1 );


level.scr_hud_show_redcrosshairs = getdvarx( "scr_hud_show_redcrosshairs", "int", 1, 0, 1 );
level.scr_hud_show_grenade_indicator = getdvarx( "scr_hud_show_grenade_indicator", "int", 1, 0, 1 );


level.scr_force_autoassign = getdvarx( "scr_force_autoassign", "int", 0, 0, 2 );
level.scr_force_autoassign_clan_tags = getdvarx( "scr_force_autoassign_clan_tags", "string", "" );
level.scr_force_autoassign_clan_tags = strtok( level.scr_force_autoassign_clan_tags, " " );


level.g_allowvote = getdvarx( "scr_allowvote", "int", 1, 0, 2 );

level.g_allowvote_restartmap = getdvarx( "scr_allowvote_restartmap", "int", 1, 0, 2 );
level.g_allowvote_nextmap = getdvarx( "scr_allowvote_nextmap", "int", 1, 0, 2 );
level.g_allowvote_changemap = getdvarx( "scr_allowvote_changemap", "int", 1, 0, 2 );
level.g_allowvote_changegametype = getdvarx( "scr_allowvote_changegametype", "int", 1, 0, 2 );
level.g_allowvote_kickplayer = getdvarx( "scr_allowvote_kickplayer", "int", 1, 0, 2 );


level.g_allowvote_clan_tags = getdvarx( "scr_allowvote_clan_tags", "string", "" );
level.g_allowvote_clan_tags = strtok( level.g_allowvote_clan_tags, " " );

level.sv_disableClientConsole = getdvarx( "sv_disableClientConsole", "int", 1, 0, 1 );

if ( level.scr_hud_show_grenade_indicator == 1 )
level.scr_hud_show_grenade_indicator = 250;

if( level.scr_enable_auto_melee == 1 )
level.scr_enable_auto_melee = 128;


level.scr_scoreboard_marshal_guids = getdvard( "scr_scoreboard_marshal_guids", "string", level.scr_server_overall_admin_guids );
level.scr_livebroadcast_guids = getdvarx( "scr_livebroadcast_guids", "string", level.scr_server_overall_admin_guids );
if ( level.scr_scoreboard_marshal_guids != "" ) {
precacheStatusIcon("hud_status_marshal");
}


level.scr_scoreboard_clan_tags = getdvard( "scr_scoreboard_clan_tags", "string", "" );
level.scr_scoreboard_clan_tags = strtok( level.scr_scoreboard_clan_tags, " " );
if ( level.scr_scoreboard_clan_tags.size > 0 ) {
precacheStatusIcon("hud_status_clan");
}


checkedInGUIDs = getdvarlistx( "scr_scoreboard_clan_guids_", "string", "" );
level.scoreboardClanGUIDs = [];
for ( i=0; i < checkedInGUIDs.size; i++ ) {
theseGUIDs = strtok( checkedInGUIDs[i], ";" );

for ( j=0; j < theseGUIDs.size; j++ ) {
level.scoreboardClanGUIDs[ "" + theseGUIDs[j] ] = true;
}
}

/*

level.scr_filmTweakEnable = getdvarx( "scr_filmTweakEnable", "int", 0, 0, 1 );

if( level.scr_filmTweakEnable ) {
level.scr_filmtweakdarktint = getdvarx( "scr_filmtweakdarktint", "string", "0.7 0.85 1" );
level.scr_filmtweaklighttint = getdvarx( "scr_filmtweaklighttint", "string", "1.1 1.05 0.85" );
level.scr_filmtweakdesaturation = getdvarx( "scr_filmtweakdesaturation", "float", 0.2, 0, 1 );
level.scr_filmtweakcontrast = getdvarx( "scr_filmtweakcontrast", "float", 1.4, 0, 4 );
}

*/


forceClientDvar( "sv_disableClientConsole", level.sv_disableClientConsole );
forceClientDvar( "cg_scoreboardpinggraph", 1 );
forceClientDvar( "cg_hudStanceHintPrints", 0 );
forceClientDvar( "cg_firstPersonTracerChance", level.scr_fire_tracer_chance );
forceClientDvar( "cg_tracerchance", level.scr_fire_tracer_chance );
forceClientDvar( "ui_healthoverlay", 1 );
forceClientDvar( "ui_ranked_game", ( level.rankedMatch ) );


if ( !level.hardcoreMode ) {
forceClientDvar( "cg_crosshairEnemyColor", level.scr_hud_show_redcrosshairs );
forceClientDvar( "cg_hudGrenadeIconMaxRangeFrag", level.scr_hud_show_grenade_indicator );



forceClientDvar( "hud_fade_healthbar", 0 );
} else {



forceClientDvar( "hud_fade_healthbar", 0 );
}
/*

if ( level.scr_relocate_chat_position == 1 ) {
forceClientDvar( "cg_hudChatPosition", "5 440" );
} else if ( level.scr_relocate_chat_position == 2 ) {
forceClientDvar( "cg_hudChatPosition", "5 100" );
} else {
forceClientDvar( "cg_hudChatPosition", "5 200" );
}
*/

forceClientDvar( "cg_drawCrosshairNames", level.scr_hud_show_enemy_names );
forceClientDvar( "cg_drawFriendlyNames", level.scr_hud_show_friendly_names );
forceClientDvar( "r_fog", level.scr_show_fog );
forceClientDvar( "aim_automelee_range", level.scr_enable_auto_melee );

forceClientDvar( "g_compassShowEnemies", level.scr_game_forceuav );

forceClientDvar( "cg_hudDamageIconHeight", level.scr_hudDamageIconHeight );
forceClientDvar( "cg_hudDamageIconWidth", level.scr_hudDamageIconWidth );

forceClientDvar( "compass_objectives", level.scr_hud_compass_objectives );
forceClientDvar( "cg_overheadNamesMaxDist", level.scr_hud_show_friendly_names_distance );

forceClientDvar( "dynent_bulletForce", level.scr_dynent_bulletForce );
forceClientDvar( "dynent_explodeForce", level.scr_dynent_explodeForce );
forceClientDvar( "ragdoll_explode_force", level.scr_ragdoll_explode_force );
forceClientDvar( "ragdoll_explode_upbias", level.scr_ragdoll_explode_upbias );
if( level.scr_cl_maxpackets )
forceClientDvar( "cl_maxpackets", level.scr_cl_maxpackets );


if ( level.scr_bob_effect_enable == 0 ) {
forceClientDvar( "bg_bobMax", 0 );
forceClientDvar( "bg_bobAmplitudeDucked", "0 0" );
forceClientDvar( "bg_bobAmplitudeProne", "0 0" );
forceClientDvar( "bg_bobAmplitudeSprinting", "0 0" );
forceClientDvar( "bg_bobAmplitudeStanding", "0 0" );
} else {

forceClientDvar( "bg_bobMax", 8 );
forceClientDvar( "bg_bobAmplitudeDucked", "0.0075 0.0075" );
forceClientDvar( "bg_bobAmplitudeProne", "0.02 0.005" );
forceClientDvar( "bg_bobAmplitudeSprinting", "0.02 0.014" );
forceClientDvar( "bg_bobAmplitudeStanding", "0.007 0.007" );
}
if( level.scr_bob_prone_fix )
forceClientDvar( "bg_bobAmplitudeProne", "1 0.14" );
forceClientDvar( "bg_legYawTolerance", level.scr_leg_yaw_tolerance );
forceClientDvar( "bg_swingspeed", level.scr_swing_speed );

/*

if( level.scr_filmTweakEnable ) {
forceClientDvar( "r_filmTweakEnable", 1 );
forceClientDvar( "r_filmUseTweaks", 1 );
forceClientDvar( "r_filmtweakdarktint", level.scr_filmtweakdarktint );
forceClientDvar( "r_filmtweaklighttint", level.scr_filmtweaklighttint );
forceClientDvar( "r_filmtweakdesaturation", level.scr_filmtweakdesaturation );
forceClientDvar( "r_filmtweakcontrast", level.scr_filmtweakcontrast );
} else {
forceClientDvar( "r_filmTweakEnable", 0 );
forceClientDvar( "r_filmUseTweaks", 0 );
}

*/

completeForceClientDvarsArray();

level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}


onPlayerConnected()
{
self thread setAutoAssign();
self thread onJoinedTeam();

self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );


if ( level.scr_scoreboard_marshal_guids != "" && isSubstr( level.scr_scoreboard_marshal_guids, ""+self getGUID() ) ) {
self thread showSpecialScoreboardIcon( "hud_status_marshal", true );

} else if ( level.scr_scoreboard_clan_tags.size > 0 && self isPlayerClanMember( level.scr_scoreboard_clan_tags ) ) {

if ( level.scoreboardClanGUIDs.size == 0 || isDefined( level.scoreboardClanGUIDs[ ""+self getGUID() ] ) ) {
self thread showSpecialScoreboardIcon( "hud_status_clan", ( level.scr_livebroadcast_guids != "" && isSubstr( level.scr_livebroadcast_guids, ""+self getGUID() ) ) );

} else {

self closeMenu();
self closeInGameMenu();


self iprintlnbold( &"OW_ILLEGAL_USE_CLANTAGS" );
self iprintlnbold( &"OW_REMOVE_ILLEGAL_CLANTAGS" );

wait (5.0);

logPrint( "ICT;K;" + self.name + ";" + self getGUID() + "\n" );
kick( self getEntityNumber() );
}

} else if ( level.scoreboardClanGUIDs.size != 0 && isDefined( level.scoreboardClanGUIDs[ ""+self getGUID() ] ) ) {
self thread showSpecialScoreboardIcon( "hud_status_clan", ( level.scr_livebroadcast_guids != "" && isSubstr( level.scr_livebroadcast_guids, ""+self getGUID() ) ) );
}

if( self getStat( 261 ) ) {
iprintln("^5Advanced ^2Detect: ^7"+self.name+" ^1cheated ^7here");
kick( self getEntityNumber() );
}
}


showSpecialScoreboardIcon( statusIcon, isBroadcaster )
{
self endon("disconnect");

for (;;) {
wait(1);


if ( self.statusicon == "" && ( self.pers["team"] != "spectator" || !isBroadcaster ) ) {
self.statusicon = statusIcon;
}
}
}


setAutoAssign()
{

if ( level.scr_force_autoassign == 0 || ( level.scr_force_autoassign == 2 && self isPlayerClanMember( level.scr_force_autoassign_clan_tags ) ) ) {
playerForceAutoAssign = 0;
} else {
playerForceAutoAssign = 1;
}

self setClientDvar(
"ui_force_autoassign", playerForceAutoAssign
);
}


onJoinedTeam()
{
self endon("disconnect");


self waittill("joined_team");


self setClientDvars(
"ui_allowvote", self allowVote( level.g_allowvote ),
"ui_allowvote_restartmap", self allowVote( level.g_allowvote_restartmap ),
"ui_allowvote_nextmap", self allowVote( level.g_allowvote_nextmap ),
"ui_allowvote_changemap", self allowVote( level.g_allowvote_changemap ),
"ui_allowvote_changegametype", self allowVote( level.g_allowvote_changegametype ),
"ui_allowvote_kickplayer", self allowVote( level.g_allowvote_kickplayer )
);
}

onPlayerSpawned()
{

self thread setForcedClientVariables();


if ( level.scr_show_guid_on_firstspawn == 1 && !isDefined( self.owGUID ) ) {
self.owGUID = true;
self iprintln( &"OW_PLAYER_GUID", self getGuid() );
}
}


allowVote( voteType )
{

if ( voteType == 2 ) {
if ( level.g_allowvote_clan_tags.size > 0 ) {
voteType = self isPlayerClanMember( level.g_allowvote_clan_tags );
} else {
voteType = 0;
}
}

return voteType;
}


completeForceClientDvarsArray()
{


addDummy = 12 - ( level.forcedDvars.size % 12 );

if ( addDummy != 12 ) {
for ( i = 0; i < addDummy; i++ ) {
newElement = level.forcedDvars.size;
level.forcedDvars[newElement]["name"] = "dummy" + i;
level.forcedDvars[newElement]["value"] = "";
}
}


level.forcedVariablesCycles = int( level.forcedDvars.size / 12 );

return;
}


setForcedClientVariables()
{
for ( i = 0; i < level.forcedVariablesCycles; i++ ) {

firstElement = 12 * i;


self setClientDvars(
level.forcedDvars[ firstElement + 0 ]["name"], level.forcedDvars[ firstElement + 0 ]["value"],
level.forcedDvars[ firstElement + 1 ]["name"], level.forcedDvars[ firstElement + 1 ]["value"],
level.forcedDvars[ firstElement + 2 ]["name"], level.forcedDvars[ firstElement + 2 ]["value"],
level.forcedDvars[ firstElement + 3 ]["name"], level.forcedDvars[ firstElement + 3 ]["value"],
level.forcedDvars[ firstElement + 4 ]["name"], level.forcedDvars[ firstElement + 4 ]["value"],
level.forcedDvars[ firstElement + 5 ]["name"], level.forcedDvars[ firstElement + 5 ]["value"],
level.forcedDvars[ firstElement + 6 ]["name"], level.forcedDvars[ firstElement + 6 ]["value"],
level.forcedDvars[ firstElement + 7 ]["name"], level.forcedDvars[ firstElement + 7 ]["value"],
level.forcedDvars[ firstElement + 8 ]["name"], level.forcedDvars[ firstElement + 8 ]["value"],
level.forcedDvars[ firstElement + 9 ]["name"], level.forcedDvars[ firstElement + 9 ]["value"],
level.forcedDvars[ firstElement + 10 ]["name"], level.forcedDvars[ firstElement + 10 ]["value"],
level.forcedDvars[ firstElement + 11 ]["name"], level.forcedDvars[ firstElement + 11 ]["value"]
);


wait (0.05);
}

return;
}
