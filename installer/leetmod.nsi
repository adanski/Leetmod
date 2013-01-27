;NSIS Modern User Interface
;Multilingual Example Script
;Written by Joost Verburg

!define APPNAME "Leetmod"
!define APPVERSION "1.8"
!define MODFOLDER "leetmod"
!define MODVERSION "18"
!define COD4TITLE "Call of Duty 4"


;# change to created lnk's
!define MUI_FINISHPAGE_RUN "$INSTDIR\iw3mp.exe +set fs_game mods/${MODFOLDER}${MODVERSION}"
!define MUI_FINISHPAGE_LINK "Visit Leetmod's website and see all the new features"
!define MUI_FINISHPAGE_LINK_LOCATION "http://www.leetmod.pt.am"

;--------------------------------
;Include Modern UI

  !include "MUI2.nsh"

;--------------------------------
;General

  ;Name and file
  Name "${APPNAME}"
  OutFile "${APPNAME}${APPVERSION}.exe"
  
  ;Default installation folder
  InstallDirRegKey HKLM "SOFTWARE\Activision\${COD4TITLE}" InstallPath

  ;Request application privileges for Windows Vista
  RequestExecutionLevel user

;--------------------------------
;Interface Settings

  !define MUI_ABORTWARNING

;--------------------------------
;Language Selection Dialog Settings

  ;Remember the installer language
  !define MUI_LANGDLL_REGISTRY_ROOT "HKCU" 
  !define MUI_LANGDLL_REGISTRY_KEY "Software\${APPNAME}" 
  !define MUI_LANGDLL_REGISTRY_VALUENAME "Installer Language"

;--------------------------------
;Pages

  !insertmacro MUI_PAGE_LICENSE ".\..\LICENSE.txt"
  !define MUI_PAGE_CUSTOMFUNCTION_PRE DirectoryPre
  !insertmacro MUI_PAGE_DIRECTORY
  !insertmacro MUI_PAGE_COMPONENTS
  !insertmacro MUI_PAGE_INSTFILES
  !insertmacro MUI_PAGE_FINISH
  
  ;!insertmacro MUI_UNPAGE_CONFIRM
  ;!insertmacro MUI_UNPAGE_INSTFILES
  ;!insertmacro MUI_UNPAGE_FINISH

;--------------------------------
;Languages

  !insertmacro MUI_LANGUAGE "English" ;first language is the default language

;--------------------------------
;Reserve Files
  
  ;If you are using solid compression, files that are required before
  ;the actual installation should be stored first in the data block,
  ;because this will make your installer start faster.
  
  !insertmacro MUI_RESERVEFILE_LANGDLL

;--------------------------------
;Installer Sections

Section "${APPNAME}" Leetmod

  SetOutPath "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\"
  
  ;ADD YOUR OWN FILES HERE...
  
  ;Store installation folder
  WriteRegStr HKCU "Software\${APPNAME}" "" $INSTDIR

SectionEnd

Section "New Maps" MapPack

  SetOutPath "$INSTDIR\usermaps"
  
  ;ADD YOUR OWN FILES HERE...
  

SectionEnd

;--------------------------------
;Installer Functions

Function .onInit
  !insertmacro MUI_LANGDLL_DISPLAY
FunctionEnd

Function .onVerifyInstDir
  IfFileExists $INSTDIR\iw3mp.exe PathGood
    Abort ; if the game isn't installed, don't continue
  PathGood:
FunctionEnd

Function DirectoryPre
  Var /GLOBAL COD4PATCH

  ; read the APP version from the registry
  ReadRegStr $COD4PATCH HKLM "SOFTWARE\Activision\${COD4TITLE}" Version
 
  ; Check for APP installation existence
  StrCmp $INSTDIR "" 0 CheckGameFile  ; If there's no installdir
    StrCpy $INSTDIR "$PROGRAMFILES\Activision\Call of Duty 4 - Modern Warfare\"
    ; Check if game file exists
    CheckGameFile:
    IfFileExists "$INSTDIR\iw3mp.exe" 0 NoInstallationFound
    ; Check if game is patched
    StrCmp $COD4PATCH "1.7" NoAbortInst
           MessageBox MB_YESNO|MB_ICONQUESTION "You don't have ${COD4TITLE} patch 1.7 installed. \
            Do you want to continue anyway?" IDYES NoAbortInst
           Abort ; abort if game isn't patched
  NoInstallationFound:
  MessageBox MB_OK "${COD4TITLE} installation was not found. \
    Please point to where it is installed."
  NoAbortInst:
  
FunctionEnd

;--------------------------------
;Descriptions

  ;USE A LANGUAGE STRING IF YOU WANT YOUR DESCRIPTIONS TO BE LANGAUGE SPECIFIC

  ;Assign descriptions to sections
  !insertmacro MUI_FUNCTION_DESCRIPTION_BEGIN
    !insertmacro MUI_DESCRIPTION_TEXT ${Leetmod} "Patch 1.8 in mod"
    !insertmacro MUI_DESCRIPTION_TEXT ${MapPack} "New multiplayer maps made by talented community members"
  !insertmacro MUI_FUNCTION_DESCRIPTION_END
