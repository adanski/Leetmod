#include openwarfare\_utils;


setRuleset()
{
	init();

	setDvar( "scr_league_ruleset", "Server Public" );
}

init()
{
	setDvar( "scr_show_player_assignment", "" );
	//setDvar( "scr_amvs_enable", "" );
	setDvar( "scr_idle_switch_spectator", "" );
	setDvar( "scr_idle_spectator_timeout", "" );
	setDvar( "scr_match_readyup_period", "" );
	setDvar( "scr_match_readyup_period_onsideswitch", "" );
	setDvar( "scr_match_readyup_disable_weapons", "" );
	setDvar( "scr_match_readyup_show_checksums", "" );
	setDvar( "scr_match_readyup_show_checksums_interval", "" );
	setDvar( "scr_match_readyup_time_match", "" );
	setDvar( "scr_match_readyup_time_round", "" );
	setDvar( "scr_match_strategy_time", "" );
	setDvar( "scr_match_strategy_allow_bypass", "" );
	setDvar( "scr_match_strategy_show_bypassed", "" );
	setDvar( "scr_match_strategy_allow_movement", "" );
	setDvar( "scr_match_strategy_getready_time", "" );
	setDvar( "scr_timeouts_perteam", "" );
	setDvar( "scr_timeouts_length", "" );
	setDvar( "scr_timeouts_guids", "" );
	setDvar( "scr_timeouts_tags", "" );
	setDvar( "scr_tk_limit", "" );
	setDvar( "scr_ranked_classes_enable", "" );
	setDvar( "scr_force_autoassign", "" );
	setDvar( "scr_teambalance", "" );
}