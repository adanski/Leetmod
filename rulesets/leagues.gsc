#include openwarfare\_utils;

init()
{
	// For more information about adding new rulesets please refer to our FAQ and
	// Tutorials section in our forums

	//******************************************************************************
	// Load the rulesets for each league we want the server to support
	// Don't forget to have the z_svr_rs_[leaguename].iwd file in your server
	// You can and should try to combine multiple rulesets inside a single .IWD file
	//******************************************************************************

	// Load ruleset example
	// rulesets\<rulesetdir>\rulesets::init();
	rulesets\leetmod\rulesets::init();
}