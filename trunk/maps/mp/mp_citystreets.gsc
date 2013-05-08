main()
{
	openwarfare\maps\mp_citystreets_fx::main();
	maps\createart\mp_citystreets_art::main();
	maps\mp\_load::main();

	maps\mp\_compass::setupMiniMap("compass_map_mp_citystreets");

	VisionSetNaked( "mp_citystreets" );

	game["allies"] = "marines";
	game["axis"] = "opfor";
	game["attackers"] = "axis";
	game["defenders"] = "allies";
	game["allies_soldiertype"] = "desert";
	game["axis_soldiertype"] = "desert";

	setdvar( "r_specularcolorscale", "1" );

	setdvar("compassmaxrange","2000");

	// Already called in _globallogic.gsc
	//maps\mp\_explosive_barrels::main();
}