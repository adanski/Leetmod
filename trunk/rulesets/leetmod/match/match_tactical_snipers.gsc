#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Tactical Snipers Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\match\match::init();
	rulesets\openwarfare\common\tactical::init();
	rulesets\openwarfare\common\snipersonly::init();
}
