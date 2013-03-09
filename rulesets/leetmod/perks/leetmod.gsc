#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	init();
}

init()
{
	setDvar( "perk_allow_c4_mp", "" );
	setDvar( "perk_allow_specialty_specialgrenade", "" );
	setDvar( "perk_allow_rpg_mp", "" );
	setDvar( "perk_allow_claymore_mp", "" );
	setDvar( "perk_allow_specialty_fraggrenade", "" );
	setDvar( "perk_allow_specialty_extraammo", "" );
	setDvar( "perk_allow_specialty_detectexplosive", "" );

	setDvar( "perk_allow_specialty_bulletdamage", "" );
	setDvar( "perk_allow_specialty_armorvest", "" );
	setDvar( "perk_allow_specialty_fastreload", "" );
	setDvar( "perk_allow_specialty_rof", "" );
	setDvar( "perk_allow_specialty_twoprimaries", "" );
	setDvar( "perk_allow_specialty_gpsjammer", "" );
	setDvar( "perk_allow_specialty_explosivedamage", "" );

	setDvar( "perk_allow_specialty_longersprint", "" );
	setDvar( "perk_allow_specialty_bulletaccuracy", "" );
	setDvar( "perk_allow_specialty_pistoldeath", "" );
	setDvar( "perk_allow_specialty_grenadepulldeath", "" );
	setDvar( "perk_allow_specialty_bulletpenetration", "" );
	setDvar( "perk_allow_specialty_holdbreath", "" );
	setDvar( "perk_allow_specialty_quieter", "" );
	setDvar( "perk_allow_specialty_parabolic", "" );
}