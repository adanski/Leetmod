#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\armory\common_strip::init();
	init();
	
	setDvar( "scr_league_ruleset", "Armory Sniper" );
}

init()
{
	setDvar( "weap_allow_sniper_dragunov", "1" );
	setDvar( "weap_allow_sniper_barrett", "1" );
	setDvar( "weap_allow_sniper_m21", "1" );

	setDvar( "classes_default_enable", "5" );
	setDvar( "classes_custom_enable", "0" );
	setDvar( "scr_melee_enable", "0" );

	setDvar( "class_assault_displayname", "M40A3" );
	setDvar( "class_assault_primary", "m40a3;m40a3;m40a3" );
	setDvar( "class_assault_secondary", "none" );

	setDvar( "class_specops_displayname", "R700" );
	setDvar( "class_specops_primary", "remington700;remington700;remington700" );
	setDvar( "class_specops_secondary", "none" );

	setDvar( "class_heavygunner_displayname", "Dragunov" );
	setDvar( "class_heavygunner_primary", "dragunov;dragunov;dragunov" );
	setDvar( "class_heavygunner_secondary", "none" );

	setDvar( "class_demolitions_displayname", "M21" );
	setDvar( "class_demolitions_primary", "m21;m21;m21" );
	setDvar( "class_demolitions_secondary", "none" );

	setDvar( "class_sniper_displayname", "Barrett .50 cal" );
	setDvar( "class_sniper_primary", "barrett;barrett;barrett" );
	setDvar( "class_sniper_secondary", "none" );
}