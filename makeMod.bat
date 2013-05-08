REM //******************************************************************************
REM // Call of Duty 4: Modern Warfare
REM //******************************************************************************
REM // Mod      : Leetmod... cod4 patch 1.8 mod
REM // Website  : http://www.Leetmod.pt.am
REM // Based On : The OpenWarfare Project... An Open Source Mod for COD4:MW!
REM // Website  : http://openwarfaremod.com/
REM //******************************************************************************

@echo off
set COMPILEDIR=%CD%
set color=1e
color %color%

:START
cls
REM echo.
REM echo.  _____                  _    _             __
REM echo. ^|  _  ^|                ^| ^|  ^| ^|           / _^|
REM echo. ^| ^| ^| ^|_ __   ___ _ __ ^| ^|  ^| ^| __ _ _ __^| ^|_ __ _ _ __ ___
REM echo. ^| ^| ^| ^| '_ \ / _ \ '_ \^| ^|/\^| ^|/ _` ^| '__^|  _/ _` ^| '__/ _ \
REM echo. \ \_/ / ^|_) ^|  __/ ^| ^| \  /\  / (_^| ^| ^|  ^| ^|^| (_^| ^| ^| ^|  __/
REM echo.  \___/^| .__/ \___^|_^| ^|_^|\/  \/ \__,_^|_^|  ^|_^| \__,_^|_^|  \___^|
REM echo.       ^| ^|               We don't make the game you play.
REM echo.       ^|_^|                 We make the game you play BETTER.
REM echo.
REM echo.            Website: http://openwarfaremod.com/

:MAKEOPTIONS
echo _________________________________________________________________
echo.
echo  Please select an option:
echo    1. Build everything (might take longer)
echo    2. Build leetmod.iwd
echo    3. Build ruleset .IWD file
echo    4. Build mod.ff
echo.
echo    0. Exit
echo.
set /p make_option=:
set make_option=%make_option:~0,1%
if "%make_option%"=="1" goto CHOOSE_LANG
if "%make_option%"=="2" goto MAKE_OPENWARFARE_IWD
if "%make_option%"=="3" goto MAKE_RULES_IWD
if "%make_option%"=="4" goto CHOOSE_LANG
if "%make_option%"=="0" goto FINAL
goto START



:CHOOSE_LANG
echo _________________________________________________________________
echo.
echo  Please choose the language you would like to compile:
echo    1. English
echo    2. French
echo    3. German
echo    4. Italian
echo    5. Portuguese
echo    6. Russian
echo    7. Spanish
echo.
echo    0. Back
echo.
REM OVERRIDE LANG TO COMPILE ALWAYS IN ENGLISH (THIS IS FOR NOT WASTING TIME AT COMPILATION)
goto LANGEN
set /p lang_chosen=:
set lang_chosen=%lang_chosen:~0,1%
REM if "%lang_chosen%"=="1" goto LANGCZ
if "%lang_chosen%"=="1" goto LANGEN
if "%lang_chosen%"=="2" goto LANGFR
if "%lang_chosen%"=="3" goto LANGDE
if "%lang_chosen%"=="4" goto LANGIT
if "%lang_chosen%"=="5" goto LANGPT
if "%lang_chosen%"=="6" goto LANGRU
if "%lang_chosen%"=="7" goto LANGES
if "%lang_chosen%"=="0" goto START
goto CHOOSE_LANG


:LANGEN
set CLANGUAGE=English
set LANG=english
set LTARGET=english
goto COMPILE

:LANGFR
set CLANGUAGE=French
set LANG=french
set LTARGET=french
goto COMPILE

:LANGDE
set CLANGUAGE=German
set LANG=german
set LTARGET=german
goto COMPILE

:LANGIT
set CLANGUAGE=Italian
set LANG=italian
set LTARGET=italian
goto COMPILE

:LANGPT
set CLANGUAGE=Portuguese
set LANG=portuguese
set LTARGET=leet
goto COMPILE

:LANGRU
set CLANGUAGE=Russian
set LANG=russian
set LTARGET=russian
goto COMPILE

:LANGES
set CLANGUAGE=Spanish
set LANG=spanish
set LTARGET=spanish
goto COMPILE


:COMPILE
echo.

echo  Checking language directories...
if not exist ..\..\zone\%LTARGET% mkdir ..\..\zone\%LTARGET%
if not exist ..\..\zone_source\%LTARGET% xcopy ..\..\zone_source\english ..\..\zone_source\%LTARGET% /SYI > NUL

echo  Leetmod will be created in %CLANGUAGE%!
if "%make_option%"=="1" goto MAKE_OPENWARFARE_IWD
if "%make_option%"=="2" goto MAKE_OPENWARFARE_IWD
if "%make_option%"=="3" goto MAKE_RULES_IWD
if "%make_option%"=="4" goto MAKE_MOD_FF
goto END



:MAKE_OPENWARFARE_IWD
echo _________________________________________________________________
echo.
echo  Please choose what set of weapon files to use:
echo    1. Only fixes.
echo    2. No Gun Sway.
echo    3. Sniper Increased Distance.
echo    4. "The Company Hub" weapons by Buster.
echo.
echo    0. Back
echo.
REM OVERRIDE WEAPONS TO COMPILE ALWAYS WITH NO GUN SWAY (THIS IS FOR NOT WASTING TIME AT COMPILATION)
goto WEAPONS_FIXES_NOGUNSWAY
set /p zow_option=:
set zow_option=%zow_option:~0,1%
if "%zow_option%"=="1" goto WEAPONS_FIXES
if "%zow_option%"=="2" goto WEAPONS_FIXES_NOGUNSWAY
if "%zow_option%"=="3" goto WEAPONS_FIXES_NOGUNSWAY_SNIPER
if "%zow_option%"=="4" goto WEAPONS_THECOMPANY
if "%zow_option%"=="0" goto START
goto MAKE_OPENWARFARE_IWD


:BUILD_OPENWARFARE_IWD
echo _________________________________________________________________
echo.
echo  Building leetmod.iwd:
echo    Deleting old leetmod.iwd file...
del leetmod.iwd
echo    Adding images...
7za a -r -tzip leetmod.iwd images\*.iwi > NUL
echo    Adding sounds...
7za a -r -tzip leetmod.iwd sound\*.mp3 > NUL
echo    Adding weapons...
7za a -r -tzip leetmod.iwd weapons\mp\*_mp > NUL
echo    Adding pezbot weapons...
7za a -r -tzip leetmod.iwd weapons\mp\ak47_mp_pezbot_climb_up > NUL
7za a -r -tzip leetmod.iwd weapons\mp\ak47_mp_pezbot_crouch_walk > NUL
7za a -r -tzip leetmod.iwd weapons\mp\ak47_mp_pezbot_stand_run > NUL
7za a -r -tzip leetmod.iwd weapons\mp\ak47_mp_pezbot_stand_walk > NUL
7za a -r -tzip leetmod.iwd weapons\mp\concussion_mp_pezbot_stand_grenade > NUL
7za a -r -tzip leetmod.iwd weapons\mp\flash_mp_pezbot_stand_grenade > NUL
7za a -r -tzip leetmod.iwd weapons\mp\frag_mp_pezbot_stand_grenade > NUL
7za a -r -tzip leetmod.iwd weapons\mp\brick_blaster_mp > NUL
7za a -r -tzip leetmod.iwd weapons\mp\rpg_mp_pezbot_stand_grenade > NUL
7za a -r -tzip leetmod.iwd weapons\mp\smoke_mp_pezbot_stand_grenade > NUL
echo    Adding pezbot waypoints code...
7za a -r -tzip leetmod.iwd waypoints\*.gsc > NUL

REM #COMMENT FOR REMOVING RULESETS - START
echo    Adding Leetmod standard rulesets...
7za a -r -tzip leetmod.iwd rulesets\leetmod\*.gsc > NUL
7za a -r -tzip leetmod.iwd rulesets\leagues.gsc > NUL
REM #COMMENT FOR REMOVING RULESETS - END
REM echo    Adding empty mod.arena file...
REM 7za a -r -tzip leetmod.iwd mod.arena > NUL
echo    Adding menu operation support cfg files...
7za a -r -tzip leetmod.iwd menudvars\* > NUL
echo    Adding menu executable rules files...
7za a -r -tzip leetmod.iwd rules\* > NUL
echo  New leetmod.iwd file successfully built!
del /f /q weapons\mp\* >NUL
rmdir weapons\mp >NUL
if "%make_option%"=="1" goto MAKE_MOD_FF
goto END


:WEAPONS_FIXES
xcopy weapons\fixes weapons\mp /SYI > NUL
goto BUILD_OPENWARFARE_IWD

:WEAPONS_FIXES_NOGUNSWAY
xcopy weapons\fixes+nogunsway weapons\mp /SYI > NUL
REM Copy pezbot weapons too
xcopy weapons\PeZBotweapons weapons\mp /SYI > NUL
goto BUILD_OPENWARFARE_IWD

:WEAPONS_FIXES_NOGUNSWAY_SNIPER
xcopy weapons\fixes+nogunsway+sniper weapons\mp /SYI > NUL
goto BUILD_OPENWARFARE_IWD

:WEAPONS_THECOMPANY
xcopy weapons\thecompany weapons\mp /SYI > NUL
goto BUILD_OPENWARFARE_IWD

:MAKE_RULES_IWD
echo _________________________________________________________________
echo.
echo  Please type the name of the ruleset to build:
echo.
echo    0. Back
echo.
set /p zow_ruleset=:
if "%zow_ruleset%"=="0" goto START
if not exist rulesets\%zow_ruleset% goto INVALID_RULESET
echo  Building ruleset %zow_ruleset% .IWD file:
echo    Deleting old .IWD ruleset file...
del z_svr_rs_%zow_ruleset%.iwd > NUL
echo    Creating new .IWD ruleset file...
7za a -r -tzip z_svr_rs_%zow_ruleset%.iwd rulesets\%zow_ruleset%\*.gsc > NUL
echo  New ruleset .IWD file successfully built!

if "%make_option%"=="1" goto MAKE_MOD_FF
goto END

:INVALID_RULESET
echo  Invalid ruleset name specified!
goto MAKE_RULES_IWD

:MAKE_MOD_FF
echo _________________________________________________________________
echo.
echo  Building mod.ff:
echo    Deleting old mod.ff file...
del mod.ff

echo    Copying localized strings...
xcopy %LANG% ..\..\raw\%LTARGET% /SYI > NUL

echo    Copying game resources...
xcopy configs ..\..\raw\configs /SYI > NUL
xcopy images ..\..\raw\images /SYI > NUL
xcopy fx ..\..\raw\fx /SYI > NUL
xcopy maps ..\..\raw\maps /SYI > NUL
xcopy materials ..\..\raw\materials /SYI > NUL
xcopy mp ..\..\raw\mp /SYI > NUL
REM xcopy rulesets ..\..\raw\rulesets /SYI > NUL
xcopy sound ..\..\raw\sound /SYI > NUL
xcopy soundaliases ..\..\raw\soundaliases /SYI > NUL
xcopy ui_mp ..\..\raw\ui_mp /SYI > NUL
xcopy vision ..\..\raw\vision /SYI > NUL
xcopy weapons\fixes+nogunsway ..\..\raw\weapons\mp /SYI > NUL
xcopy weapons\PeZBotweapons_128wa_fix ..\..\raw\weapons\mp /SYI > NUL
xcopy xanim ..\..\raw\xanim /SYI > NUL
xcopy xmodel ..\..\raw\xmodel /SYI > NUL
xcopy xmodelparts ..\..\raw\xmodelparts /SYI > NUL
xcopy xmodelsurfs ..\..\raw\xmodelsurfs /SYI > NUL

echo    Copying PeZBot waypoints...
xcopy waypoints ..\..\raw\waypoints /SYI > NUL

echo    Copying Leetmod source code...
xcopy openwarfare ..\..\raw\openwarfare /SYI > NUL
copy /Y mod.csv ..\..\zone_source > NUL
copy /Y mod_ignore.csv ..\..\zone_source\%LTARGET%\assetlist > NUL
cd ..\..\bin > NUL


echo    Compiling mod...
linker_pc.exe -language %LTARGET% -compress -cleanup mod 
cd %COMPILEDIR% > NUL
copy ..\..\zone\%LTARGET%\mod.ff > NUL
echo  New mod.ff file successfully built!
goto END

:END
pause
goto FINAL

:FINAL