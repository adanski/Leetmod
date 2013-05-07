#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\armory\leetmod::setRuleset();
	init();
	
	setDvar( "scr_league_ruleset", "Armory All Weapons" );
}

init()
{
	setDvar( "weap_allow_heavygunner_saw", "1" );
	setDvar( "weap_allow_heavygunner_rpd", "1" );
	setDvar( "weap_allow_heavygunner_m60e4", "1" );

	setDvar( "attach_allow_assault_gl", "1" );
}