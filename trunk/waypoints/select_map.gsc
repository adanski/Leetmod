// =========================================================================================
// Custom waypoint system for PeZBOT by - [WJF] AbneyPark
// www.before-dawn.co.uk
// =========================================================================================
//
// If you have opened this file I expect you want to add a if statement to allow the mod
// load waypoints for a map that you have just added them to.
//
// ====================================== INSTRUCTIONS =====================================
//
// Just simply add the generated script section to the end of this file in the marked sections.
//
// I couldn't output double quotes to file so replace the single quotes with double quotes so ' = "
// I also couldnt output a \ between the mapnames to file, so replace the / with \ in the file names
// it's real easy, use the already added ones as a guide.
//
// DO NOT MODIFY THE REST OF THE FILE
//
// =========================================================================================

choose()
{
	mapname = getdvar("mapname");
	
	level.waypointCount = 0;
	level.waypoints = [];
	
	
	if(mapname == "mp_backlot") {
		thread Waypoints\mp_backlot_waypoints::load_waypoints();
	}
	
// New Maps After This ---------------------------------------------------------------------------------------------------

	//# some map waypoint calls were commented because
	//# hunk memory usage pops in (too much scripting code)
	// bog, crash snow, modern rust, killhouse

	else if(mapname == "mp_bloc") {
		thread Waypoints\mp_bloc_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_bog") {
		//#thread Waypoints\mp_bog_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_countdown") {
		thread Waypoints\mp_countdown_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_convoy") {
		thread Waypoints\mp_convoy_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_crash") {
		thread Waypoints\mp_crash_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_crash_snow") {
		//#thread Waypoints\mp_crash_snow_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_crossfire") {
		thread Waypoints\mp_crossfire_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_citystreets") {
		thread Waypoints\mp_citystreets_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_farm") {
		thread Waypoints\mp_farm_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_overgrown") {
		thread Waypoints\mp_overgrown_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_pipeline") {
		thread Waypoints\mp_pipeline_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_shipment") {
		thread Waypoints\mp_shipment_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_showdown") {
		thread Waypoints\mp_showdown_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_strike") {
		thread Waypoints\mp_strike_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_vacant") {
		thread Waypoints\mp_vacant_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_broadcast") {
		thread Waypoints\mp_broadcast_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_creek") {
		thread Waypoints\mp_creek_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_killhouse") {
		//#thread Waypoints\mp_killhouse_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_carentan") {
		thread Waypoints\mp_carentan_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_cargoship") {
		thread Waypoints\mp_cargoship_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_compact") {
		thread Waypoints\mp_compact_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_ctan") {
		thread Waypoints\mp_ctan_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_fav") {
		thread Waypoints\mp_fav_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_highrise") {
		thread Waypoints\mp_highrise_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_inv") {
		thread Waypoints\mp_inv_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_modern_rust") {
		//#thread Waypoints\mp_modern_rust_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_mw2_term") {
		thread Waypoints\mp_mw2_term_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_sbase") {
		thread Waypoints\mp_sbase_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_skidrow") {
		thread Waypoints\mp_skidrow_waypoints::load_waypoints();
	}
	
	else if(mapname == "mp_summit") {
		thread Waypoints\mp_summit_waypoints::load_waypoints();
	}
	
// New Maps Before This --------------------------------------------------------------------------------------------------

	else {
		iprintlnBold("^1[PeZBOT ERROR] ^7- Map " + mapname + " does not support PezBOT waypoints");
	}
}