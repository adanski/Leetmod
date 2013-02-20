#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Hardcore All Weapons" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\hardcore::init();
}
