#include openwarfare\_utils;

init()
{
	//******************************************************************************
	// Load the rulesets for each league we want the server to support
	// If you want you can add a z_svr_rs_[leaguename].iwd file to your server
	// You can and should try to combine multiple rulesets inside a single .IWD file
	//******************************************************************************

	// Load ruleset example:
	// rulesets\<rulesetdir>\rulesets::init();
	rulesets\leetmod\rulesets::init();
}