#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Tactical Pitols Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\match\match::init();
	rulesets\openwarfare\common\tactical::init();
	rulesets\openwarfare\common\pistolsonly::init();
}
