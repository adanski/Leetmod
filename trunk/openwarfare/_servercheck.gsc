#include openwarfare\_utils;

init()
{
	// Give some time to the server to populate variables with the referenced IWDs
	wait( 5.0 );
			
	startupChecked = getdvar("_startupChk");
	
	// These checks need to be runned just once, also its better for stability since
	// iwd sums could have been calculated wrong sometimes (remember the 'File/sum mismatch')
	if( !isDefined(startupChecked) || startupChecked == "" ) {
		setdvar("_startupChk", "1");
		if( isModTouched() && !isModRenamed() ) {
			thread warnModder();
		}
		
		if( getdvar("sv_pure") == "1" && rotationHasCustomMaps() ) {
			iprintln("Map rotation has custom maps, setting sv_pure=0");
			iprintln("so that it wont crash the server application.");
			setdvar("sv_pure", "0");
		}
		
		// Check all the .IWDs active in the server
		//#Fix it here on release
		//checkResult = runCheck();
		checkResult = "";
		
		if ( checkResult != "" )
			setdvar("_invalidIWD", checkResult);
	}
	
	invalidIWD = getdvar("_invalidIWD");
	
	// If the check was invalid then we'll let the players know about the problem
	if ( isDefined(invalidIWD) && invalidIWD != "" ) {
		logPrint( "OW;Invalid file ^3" + invalidIWD + ".iwd^7 has been found in the mod directory.\n" );
		for ( times = 0; times < 30; times++ ) {
			iprintln( invalidIWD + " (^1" + (30-times) + "^7)." );
			wait( 2.0 );
		}
	}
}

runCheck()
{
	// Check if there's any .IWD file that doesn't belong to the mod
	iwdFiles = strtok( tolower( getdvar( "sv_referencedIwdNames" ) ), " " );
	modPath = tolower( getdvar("fs_game") ) + "/";
	modFile = getdvar("_modfile");
	
	for ( index = 0; index < iwdFiles.size; index++ ) {
		if ( isSubStr( iwdFiles[index], modPath ) ) {
			// Check if the .IWD file doesn't belong to the mod
			if ( iwdFiles[index] != "" + modPath + modFile ) {
				return ""+iwdFiles[index];
			}
		}
	}
	
	return "";
}

isModTouched()
{
	//# overrided for now
	return false;
}

isModRenamed()
{
	return false;
}

warnModder()
{
	level endon( "game_ended" );
	
	errorMessage = [];
	errorMessage[0] = "Leetmod .iwd file was modified but not renamed.";
	errorMessage[1] = "If you want to use your own custom content in Leetmod";
	errorMessage[2] = "you can, but please rename the mod folder and files to:";
	errorMessage[3] = "'leetmod"+getDvar("_modver")+"_suffix', where 'suffix' is at your will.\n";
	
	logPrint(errorMessage[0]+"\n");
	logPrint(errorMessage[1]+"\n");
	logPrint(errorMessage[2]+"\n");
	logPrint(errorMessage[3]+"\n");
	
	while(1) {
		iprintln( errorMessage[0] );
		iprintlnbold( errorMessage[0] );
		wait( 4.0 );
		iprintln( errorMessage[1] );
		iprintlnbold( errorMessage[1] );
		wait( 4.0 );
		iprintln( errorMessage[2] );
		iprintlnbold( errorMessage[2] );
		wait( 4.0 );
		iprintln( errorMessage[3] );
		iprintlnbold( errorMessage[3] );
		wait( 4.0 );
	}
}

rotationHasCustomMaps()
{
	for ( index=0; index < level.mgCombinations.size; index++ ) {
		if( !isStockMap(level.mgCombinations[index]["mapname"]) )
			return true;
	}
	
	return false;
}

isStockMap(mapFile)
{
	arrayKeys = getArrayKeys(level.stockMapNames);
	
	for ( i = arrayKeys.size-1; i >= 0; i-- ) {
		if( arrayKeys[i] == mapFile )
			return true;
	}
	return false;
}