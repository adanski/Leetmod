#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Tactical All Weapons" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\tactical::init();
}
