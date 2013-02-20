#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Softcore Pistols Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\pistolsonly::init();
}
