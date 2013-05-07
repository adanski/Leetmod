#include openwarfare\_utils;


setRuleset()
{
	init();

	setDvar( "scr_league_ruleset", "Server Match" );
}

init()
{
	setDvar( "scr_show_player_assignment", "0" );
	//setDvar( "scr_amvs_enable", "0" );
	setDvar( "scr_idle_switch_spectator", "0" );
	setDvar( "scr_idle_spectator_timeout", "0" );
	setDvar( "scr_match_readyup_period", "1" );
	setDvar( "scr_match_readyup_period_onsideswitch", "1" );
	setDvar( "scr_match_readyup_disable_weapons", "0" );
	setDvar( "scr_match_readyup_show_checksums", "0" );
	setDvar( "scr_match_readyup_show_checksums_interval", "30" );
	setDvar( "scr_match_readyup_time_match", "0" );
	setDvar( "scr_match_readyup_time_round", "5" );
	setDvar( "scr_match_strategy_time", "15" );
	setDvar( "scr_match_strategy_allow_bypass", "1" );
	setDvar( "scr_match_strategy_show_bypassed", "1" );
	setDvar( "scr_match_strategy_allow_movement", "1" );
	setDvar( "scr_match_strategy_getready_time", "1.5" );
	setDvar( "scr_timeouts_perteam", "3" );
	setDvar( "scr_timeouts_length", "30" );
	setDvar( "scr_timeouts_guids", "" );
	setDvar( "scr_timeouts_tags", "" );
	setDvar( "scr_tk_limit", "0" );
	setDvar( "scr_ranked_classes_enable", "0" );
	setDvar( "scr_force_autoassign", "0" );
	setDvar( "scr_teambalance", "0" );
}