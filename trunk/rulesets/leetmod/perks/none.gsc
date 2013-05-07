#include openwarfare\_utils;


setRuleset()
{
	init();
	
	setDvar( "scr_league_ruleset", "Perks None" );
}

init()
{
	setDvar( "perk_allow_c4_mp", "0" );
	setDvar( "perk_allow_specialty_specialgrenade", "0" );
	setDvar( "perk_allow_rpg_mp", "0" );
	setDvar( "perk_allow_claymore_mp", "0" );
	setDvar( "perk_allow_specialty_fraggrenade", "0" );
	setDvar( "perk_allow_specialty_extraammo", "0" );
	setDvar( "perk_allow_specialty_detectexplosive", "0" );

	setDvar( "perk_allow_specialty_bulletdamage", "0" );
	setDvar( "perk_allow_specialty_armorvest", "0" );
	setDvar( "perk_allow_specialty_fastreload", "0" );
	setDvar( "perk_allow_specialty_rof", "0" );
	setDvar( "perk_allow_specialty_twoprimaries", "0" );
	setDvar( "perk_allow_specialty_gpsjammer", "0" );
	setDvar( "perk_allow_specialty_explosivedamage", "0" );

	setDvar( "perk_allow_specialty_longersprint", "0" );
	setDvar( "perk_allow_specialty_bulletaccuracy", "0" );
	setDvar( "perk_allow_specialty_pistoldeath", "0" );
	setDvar( "perk_allow_specialty_grenadepulldeath", "0" );
	setDvar( "perk_allow_specialty_bulletpenetration", "0" );
	setDvar( "perk_allow_specialty_holdbreath", "0" );
	setDvar( "perk_allow_specialty_quieter", "0" );
	setDvar( "perk_allow_specialty_parabolic", "0" );
}