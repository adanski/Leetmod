#include openwarfare\_utils;

init()
{
	//******************************************************************************
	// configs/server/rank.cfg
	//******************************************************************************		
	setDvar( "scr_server_rank_type", "1" );

	setDvar( "class_allies_assault_limit", "0" );
	setDvar( "class_allies_specops_limit", "0" );
	setDvar( "class_allies_heavygunner_limit", "0" );
	setDvar( "class_allies_demolitions_limit", "0" );

	setDvar( "class_axis_assault_limit", "0" );
	setDvar( "class_axis_specops_limit", "0" );
	setDvar( "class_axis_heavygunner_limit", "0" );
	setDvar( "class_axis_demolitions_limit", "0" );
}