//SAB
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_BOMB_TIME", scr_sab_bombtimer, 3, ; )
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_PLANT_TIME", scr_sab_planttime, 3, ; )
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_DEFUSE_TIME", scr_sab_defusetime, 3, ; )
    CHOICE_DVARYESNO( 28, "@OW_MANTAIN_TIMER", scr_sab_hotpotato, ; )
    // for oitc too
    CHOICE_DVARYESNO( 28, "@OW_SUDDEN_SHOW_ENEMIES", scr_sab_suddendeath_show_enemies, ; )
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SUDDEN_TIMELIMIT", scr_sab_suddendeath_timelimit, 3, ; )
    // for /
    CHOICE_DVARYESNO( 28, "@OW_PLANTING_SOUND", scr_sab_planting_sound, ; )
    CHOICE_DVARYESNO( 28, "@OW_SHOW_BRIEFCASE_MODEL", scr_sab_show_briefcase, ; )
    
    //for SD CTF and CH too
    CHOICE_DVARYESNO( 28, "@OW_SHOW_SCOREBOARD_BOMBER", scr_sab_scoreboard_bomb_carrier, ; )
    //for CTF and CAH too
    CHOICE_DVARFLOATLIST( 28, "@OW_SHOW_BOMB_CARRIER", scr_sab_show_bomb_carrier, { "Disabled" 0 "Always enabled" 1 "Anti Flag-Camping" 2 }, ; )
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SHOW_BOMB_CARRIER_TIME", scr_sab_show_bomb_carrier_time, 3, ; )
    CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SHOW_BOMB_CARRIER_DISTANCE", scr_sab_show_bomb_carrier_distance, 5, ; )