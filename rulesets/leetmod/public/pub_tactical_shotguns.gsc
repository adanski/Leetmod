#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Tactical Shotguns Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\tactical::init();
	rulesets\openwarfare\common\shotgunsonly::init();
}
