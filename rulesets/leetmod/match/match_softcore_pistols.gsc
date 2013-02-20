#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Softcore Pistols Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\match\match::init();
	rulesets\openwarfare\common\pistolsonly::init();
}
