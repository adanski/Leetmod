#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\armory\leetmod::setRuleset();
	init();
	
	setDvar( "scr_league_ruleset", "Armory Promod" );
}

init()
{
	setDvar( "attach_allow_reflex", "0" );
	setDvar( "attach_allow_acog", "0" );
	setDvar( "attach_allow_grip", "0" );

	setDvar( "weap_allow_specops_skorpion", "0" );
	setDvar( "weap_allow_specops_p90", "0" );

	setDvar( "weap_allow_sniper_dragunov", "0" );
	setDvar( "weap_allow_sniper_barrett", "0" );
	setDvar( "weap_allow_sniper_m21", "0" );

	setDvar( "scr_grenade_allow_cooking", "0" );
}