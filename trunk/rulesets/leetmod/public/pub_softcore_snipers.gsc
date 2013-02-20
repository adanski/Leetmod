#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Softcore Snipers Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\snipersonly::init();
}
