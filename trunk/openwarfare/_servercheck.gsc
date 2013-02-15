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
		
		if( getdvar("sv_pure") == "1" && rotationHasCustomMaps() ) {
			if( getdvar("dedicated") == "listen server" ) {
				iprintln("Map rotation has custom maps, setting sv_pure=0");
				iprintln("so that it wont crash the server application.");
				setdvar("sv_pure", "0");
			}
			else {
				iprintln("Map rotation has custom maps, if anyone has crashes");
				iprintln("or 'file/sum mismatch', try setting sv_pure=0.");
			}
		}
		
		// If running Leetmod original (no renamed directory) we have to make a few
		// checks, else, server admin is running its 'own' modification - checks are disabled
		renamed = modFolderRename();
		if( renamed == "_NOrename" ) {
			// Check all the .IWDs present in the mod folder for 3rd party content
			invalidIWDFile = has3rdPartyIWDs();
			
			if( isModTouched() )
				invalidIWDFile = getdvar("_modfile");
			
			if ( invalidIWDFile != "" )
				setdvar("_invalidIWD", invalidIWDFile);
		}
		else if(renamed != "_renameOK") {
			setdvar("_invalidIWD", "rename: "+renamed);
		}
	}
	
	invalidIWD = getdvar("_invalidIWD");
	// If the check was invalid then we'll let the server admin know about the problem
	if ( isDefined(invalidIWD) && invalidIWD != "" ) {
		if( invalidIWD == getdvar("_modfile") )
			logPrint( "OW;Invalid mod file ^3" + invalidIWD + ".iwd^7 has been found in the mod directory.\n" );
		else if( isSubstr( invalidIWD, "rename: " ) )
			logPrint( "OW;Invalid mod folder " + invalidIWD + ". Check allowed naming sintax.\n" );
		else
			logPrint( "OW;Unknown file ^3" + invalidIWD + ".iwd^7 has been found in the mod directory.\n" );
		thread warnModder(invalidIWD);
	}
}

has3rdPartyIWDs()
{
//#fix on release
/*
	// Check if there's any .IWD file that doesn't belong to the mod
	iwdFiles = strtok( tolower( getdvar( "sv_referencedIwdNames" ) ), " " );
	// should be 'mods/leetmodVERSION'
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
*/
	return "";
}

isModTouched()
{
	//# overrided for now
	/*
	iwdNames = strtok( getdvar( "sv_iwdnames" ), " " );
	iwdSums = strtok( getdvar( "sv_iwds" ), " " );
	modFile = getdvar("_modfile");
	
	for(i=0; i < iwdNames.size; i++) {
		if( iwdNames[i] == modFile && iwdSums[i] != "#magicvalue" )
				return true;
	}
	*/
	
	return false;
}

modFolderRename()
{
	directories = strtok( tolower( getdvar("fs_game") ), "/" );
	modFolderName = directories[directories.size-1];
	modFile = getdvar("_modfile");
	
	if( isDefined(modFolderName) && modFolderName == modFile )
		return "_NOrename";
	
	if( isSubStr( modFolderName, modFile+"_" ) )
		return "_renameOK";
	
	return modFolderName;
}

warnModder(invalidIWD)
{
	level endon( "game_ended" );
	
	errorMessage = [];
	
	if( invalidIWD == getdvar("_modfile") )
		errorMessage[0] = "Leetmod's ^1"+invalidIWD+".iwd^7 file was modified but mod folder wasn't renamed.";
	else if( isSubstr( invalidIWD, "rename: " ) )
		errorMessage[0] = "Bad mod folder "+invalidIWD+". Check allowed naming sintax.";
	else
		errorMessage[0] = "Unknown ^1"+invalidIWD+".iwd^7 on mod folder but folder wasn't renamed.";
	errorMessage[1] = "If you want to use your own custom content in Leetmod";
	errorMessage[2] = "you can, by renaming the mod folder and .iwd file to:";
	errorMessage[3] = "'^5"+getDvar("_modfile")+"_^2suffix^7', where '^2suffix^7' is at your will.\n";
	
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
	if( !isStockMap(getDvar("mapname")) )
		return true;
	
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