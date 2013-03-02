#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	// Get the main module's dvar
	level.scr_rangefinder_enable = getdvarx( "scr_rangefinder_enable", "int", 0, 0, 1 );
	aux_mapname = getdvar("mapname");
	if(aux_mapname == "mp_sps_muelles" || aux_mapname == "mp_usl_sws_d" || aux_mapname == "mp_old_town" )
		level.scr_rangefinder_enable = 1;
	
	level.scr_rangefinder_unit = getdvarx( "scr_rangefinder_unit", "string", "", undefined, undefined );
	if ( level.scr_rangefinder_unit != "meters" && level.scr_rangefinder_unit != "yards" )
		level.scr_rangefinder_unit = level.scr_measurement_unit_system;
		
	// If range finder is disabled there's nothing else to do here
	if ( level.scr_rangefinder_enable == 0 )
		return;
		
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}


onPlayerConnected()
{
	self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
	self thread addNewEvent( "onPlayerDeath", ::onPlayerDeath );
}


onPlayerSpawned()
{
	// Create the HUD element that will show the zoom level
	self.rangeFinder = newClientHudElem(self);
	self.rangeFinder.alpha = 0;
	self.rangeFinder.fontScale = 1.4;
	self.rangeFinder.color = (0,1,0);
	self.rangeFinder.font = "objective";
	self.rangeFinder.archived = true;
	self.rangeFinder.hideWhenInMenu = false;
	self.rangeFinder.alignX = "right";
	self.rangeFinder.alignY = "top";
	self.rangeFinder.horzAlign = "right";
	self.rangeFinder.vertAlign = "top";
	self.rangeFinder.sort = 1001;
	self.rangeFinder.x = -10;
	self.rangeFinder.y = 27;
	
	// Check which unit we should show
	if ( level.scr_rangefinder_unit == "meters" ) {
		self.rangeFinder.label = &"OW_RANGEFINDER_METERS";
	}
	else {
		self.rangeFinder.label = &"OW_RANGEFINDER_YARDS";
	}
	
	// Start monitoring the player
	self thread monitorCurrentWeapon();
}


onPlayerDeath()
{
	// Destroy the HUD element
	if ( isDefined( self.rangeFinder ) )
		self.rangeFinder destroy();
}


monitorCurrentWeapon()
{
	self endon("disconnect");
	self endon("death");
	level endon( "game_ended" );
	
	// Get the current weapon (at this point the player should have the default sniper zoom value
	oldWeapon = self getCurrentWeapon();
	oldAds = 0;
	updateRangeFinder = false;
	
	// Define which multiplier to use
	if ( level.scr_rangefinder_unit == "meters" ) {
		distMultiplier = 0.0254;
	}
	else {
		distMultiplier = 0.0278;
	}
	
	while(1) {
		wait (0.05);
		
		// Check if the player has switched weapons
		if ( oldWeapon != self getCurrentWeapon() ) {
			oldWeapon = self getCurrentWeapon();
			self.rangeFinder.alpha = 0;
			updateRangeFinder = false;
		}
		else {
			// Check if the player enable/disable ADS
			if ( self playerADS() > oldAds ) {
				oldAds = self playerADS();
				if ( openwarfare\_sniperzoom::isSniperRifle( oldWeapon ) || oldWeapon == "binoculars_mp" ) {
					// Player is enabling ADS
					self.rangeFinder.alpha = 1;
					updateRangeFinder = true;
				}
			}
			else if ( self playerADS() < oldAds ) {
				oldAds = self playerADS();
				// Player is disabling ADS
				self.rangeFinder.alpha = 0;
				updateRangeFinder = false;
			}
		}
		
		// Check if we need to update the value for range finder
		if ( updateRangeFinder) {
			// Get a vector forward based on the player's angles
			vForward = maps\mp\_utility::vector_scale( anglesToForward( self getPlayerAngles() ), 50000 );
			
			// Run the trace
			playerEyes = self getPlayerEyes();
			trace = bulletTrace( playerEyes, playerEyes + vForward, true, self );
			aux_distInUnits = distance( playerEyes, trace["position"] );
			distance = int( aux_distInUnits * distMultiplier * 10 ) / 10;
			
			// Update the HUD element
			// Bullets are capped at 8188 units (208 meters), so we display the distance value in red if greater than that value
			if( aux_distInUnits < 8188 )
				self.rangeFinder.color = (0,1,0);
			else
				self.rangeFinder.color = (1,0,0);
			
			self.rangeFinder setValue( distance );
		}
	}
}
