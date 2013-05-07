#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\armory\promod::init();
	rulesets\leetmod\perks\none::init();
	init();

	setDvar( "scr_league_ruleset", "Profile Leetmod" );
}

init()
{
	setDvar( "classes_default_enable", "" );
	setDvar( "classes_custom_enable", "" );
	setDvar( "scr_bob_effect_enable", "" );
	setDvar( "scr_game_hardpoints", "" );
	setDvar( "scr_player_maxhealth", "" );
	setDvar( "scr_healthregen_method", "" );
	setDvar( "scr_hud_show_crosshair", "" );
}