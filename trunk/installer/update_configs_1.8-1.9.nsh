Push '// Values: Between 0 and 20 (default = 7).'
Push '// Values: Between 0 and 20 (default = 5).'
Push all
Push all
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\searchanddestroy.cfg"
Call AdvReplaceInFile

Push 'set scr_sd_defusetime "7"'
Push 'set scr_sd_defusetime "5"'
Push all
Push all
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\searchanddestroy.cfg"
Call AdvReplaceInFile

Push 'set scr_ch_suddendeath_show_enemies "0"'
Push 'set scr_ch_suddendeath_show_enemies "1"'
Push all
Push all
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\captureandhold.cfg"
Call AdvReplaceInFile

Push 'back to "0".'
Push 'back to "0".$\r$\n// For mode 0 only.'
Push 0
Push 1
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\captureandhold.cfg"
Call AdvReplaceInFile

Push '// Mode 0 default = 2, Mode 1 default = 275'
Push '// Mode 0 default = 2, Mode 1 default = 250'
Push all
Push all
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\captureandhold.cfg"
Call AdvReplaceInFile

Push 'set scr_ch_scorelimit "275"'
Push 'set scr_ch_scorelimit "250"'
Push all
Push all
Push "$INSTDIR\mods\${MODFOLDER}${MODVERSION}\configs\gametypes\captureandhold.cfg"
Call AdvReplaceInFile