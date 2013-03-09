#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	rulesets\leetmod\armory\common_strip::init();
	init();
}

init()
{
	setDvar( "classes_default_enable", "2" );
	setDvar( "classes_custom_enable", "0" );
	setDvar( "scr_melee_enable", "1" );

	setDvar( "class_assault_displayname", "W1200" );
	setDvar( "class_assault_primary", "winchester1200;winchester1200;winchester1200" );
	setDvar( "class_assault_secondary", "none" );

	setDvar( "class_specops_displayname", "M1014" );
	setDvar( "class_specops_primary", "m1014;m1014;m1014" );
	setDvar( "class_specops_secondary", "none" );
}