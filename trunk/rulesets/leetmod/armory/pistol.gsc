#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	rulesets\leetmod\armory\common_strip::init();
}

init()
{
	setDvar( "classes_default_enable", "5" );
	setDvar( "classes_custom_enable", "0" );
	setDvar( "scr_melee_enable", "1" );

	setDvar( "class_assault_displayname", "Beretta" );
	setDvar( "class_assault_primary", "none" );
	setDvar( "class_assault_secondary", "beretta;beretta;beretta" );

	setDvar( "class_specops_displayname", "Colt45" );
	setDvar( "class_specops_primary", "none" );
	setDvar( "class_specops_secondary", "colt45;colt45;colt45" );

	setDvar( "class_heavygunner_displayname", "USP 45" );
	setDvar( "class_heavygunner_primary", "none" );
	setDvar( "class_heavygunner_secondary", "usp;usp;usp" );

	setDvar( "class_demolitions_displayname", "Desert Eagle" );
	setDvar( "class_demolitions_primary", "none" );
	setDvar( "class_demolitions_secondary", "deserteagle;deserteagle;deserteagle" );

	setDvar( "class_sniper_displayname", "Desert Eagle Gold" );
	setDvar( "class_sniper_primary", "none" );
	setDvar( "class_sniper_secondary", "deserteaglegold;deserteaglegold;deserteaglegold" );
}