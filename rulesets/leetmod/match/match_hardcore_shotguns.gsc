#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore Shotguns Only" );

	rulesets\openwarfare\common\common::init();
	rulesets\openwarfare\match\match::init();
	rulesets\openwarfare\common\hardcore::init();
	rulesets\openwarfare\common\shotgunsonly::init();
}
