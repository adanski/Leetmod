#include openwarfare\_utils;

init()
{
	// OpenWarfare rulesets pub rulesets
	addLeagueRuleset( "pub_softcore_all", "all", rulesets\openwarfare\public\pub_softcore_all::setRuleset );
	addLeagueRuleset( "pub_hardcore_all", "all", rulesets\openwarfare\public\pub_hardcore_all::setRuleset );
	addLeagueRuleset( "pub_tactical_all", "all", rulesets\openwarfare\public\pub_tactical_all::setRuleset );

	addLeagueRuleset( "pub_softcore_pistols", "all", rulesets\openwarfare\public\pub_softcore_pistols::setRuleset );
	addLeagueRuleset( "pub_hardcore_pistols", "all", rulesets\openwarfare\public\pub_hardcore_pistols::setRuleset );
	addLeagueRuleset( "pub_tactical_pistols", "all", rulesets\openwarfare\public\pub_tactical_pistols::setRuleset );

	addLeagueRuleset( "pub_softcore_shotguns", "all", rulesets\openwarfare\public\pub_softcore_shotguns::setRuleset );
	addLeagueRuleset( "pub_hardcore_shotguns", "all", rulesets\openwarfare\public\pub_hardcore_shotguns::setRuleset );
	addLeagueRuleset( "pub_tactical_shotguns", "all", rulesets\openwarfare\public\pub_tactical_shotguns::setRuleset );
		
	addLeagueRuleset( "pub_softcore_snipers", "all", rulesets\openwarfare\public\pub_softcore_snipers::setRuleset );
	addLeagueRuleset( "pub_hardcore_snipers", "all", rulesets\openwarfare\public\pub_hardcore_snipers::setRuleset );
	addLeagueRuleset( "pub_tactical_snipers", "all", rulesets\openwarfare\public\pub_tactical_snipers::setRuleset );

	// OpenWarfare rulesets match rulesets
	addLeagueRuleset( "match_softcore_all", "all", rulesets\openwarfare\match\match_softcore_all::setRuleset );
	addLeagueRuleset( "match_hardcore_all", "all", rulesets\openwarfare\match\match_hardcore_all::setRuleset );
	addLeagueRuleset( "match_tactical_all", "all", rulesets\openwarfare\match\match_tactical_all::setRuleset );

	addLeagueRuleset( "match_softcore_pistols", "all", rulesets\openwarfare\match\match_softcore_pistols::setRuleset );
	addLeagueRuleset( "match_hardcore_pistols", "all", rulesets\openwarfare\match\match_hardcore_pistols::setRuleset );
	addLeagueRuleset( "match_tactical_pistols", "all", rulesets\openwarfare\match\match_tactical_pistols::setRuleset );

	addLeagueRuleset( "match_softcore_shotguns", "all", rulesets\openwarfare\match\match_softcore_shotguns::setRuleset );
	addLeagueRuleset( "match_hardcore_shotguns", "all", rulesets\openwarfare\match\match_hardcore_shotguns::setRuleset );
	addLeagueRuleset( "match_tactical_shotguns", "all", rulesets\openwarfare\match\match_tactical_shotguns::setRuleset );
		
	addLeagueRuleset( "match_softcore_snipers", "all", rulesets\openwarfare\match\match_softcore_snipers::setRuleset );
	addLeagueRuleset( "match_hardcore_snipers", "all", rulesets\openwarfare\match\match_hardcore_snipers::setRuleset );
	addLeagueRuleset( "match_tactical_snipers", "all", rulesets\openwarfare\match\match_tactical_snipers::setRuleset );
}