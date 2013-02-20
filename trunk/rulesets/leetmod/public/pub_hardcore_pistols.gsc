#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Public Hardcore Pistols Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\common\hardcore::init();
	rulesets\openwarfare\common\pistolsonly::init();
}
