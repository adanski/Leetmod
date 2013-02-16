#undef CHOICE_GROUP
#define CHOICE_GROUP ctf

#define G_GAMETYPE_CTF (dvarString( "settings_config_gametype" ) == "ctf")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_ctf_timelimit, 5, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_ctf_scorelimit, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_ctf_roundlimit, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_ctf_roundswitch, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_ctf_playerrespawndelay, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_ctf_waverespawndelay, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_ctf_numlives, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_ctf_teambalanceendofround, ; , when(G_GAMETYPE_CTF) )

//CTF
CHOICE_DVARFLOATLIST_VIS( 10, "@OW_CTF_MODE", scr_ctf_ctfmode, { "Touch own flag to return to base" 0 "Automatically returned after amount of time" 1 "Capture and manually return it to base" 2 }, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_CTF_IDLEFLAGRETURNTIME", scr_ctf_idleflagreturntime, 3, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_CTF_CAPTURETIME", scr_ctf_capture_time, 2, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVARYESNO_VIS( 13, "@OW_CTF_ENDROUND_ON_CAPTURE", scr_ctf_endround_on_capture, ; , when(G_GAMETYPE_CTF) )

CHOICE_DVARYESNO_VIS( 14, "@OW_SUDDEN_SHOW_ENEMIES", scr_ctf_suddendeath_show_enemies, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SUDDEN_TIMELIMIT", scr_ctf_suddendeath_timelimit, 3, ; , when(G_GAMETYPE_CTF) )

CHOICE_DVARYESNO_VIS( 16, "@OW_SHOW_SCOREBOARD_BOMBER", scr_ctf_scoreboard_flag_carrier, ; , when(G_GAMETYPE_CTF) )

CHOICE_DVARYESNO_VIS( 17, "@OW_CTF_FLAG_CARRIER_CAN_RETURN", scr_ctf_flag_carrier_can_return, ; , when(G_GAMETYPE_CTF) )

CHOICE_DVARFLOATLIST_VIS( 18, "@OW_SHOW_BOMB_CARRIER", scr_ctf_show_flag_carrier, { "Disabled" 0 "Always enabled" 1 "Anti Flag-Camping" 2 }, ; , when(G_GAMETYPE_CTF) )
CHOICE_DVAREDIT_NUMERIC_VIS( 19, "@OW_SHOW_BOMB_CARRIER_TIME", scr_ctf_show_flag_carrier_time, 3, ; , when(G_GAMETYPE_CTF && dvarInt(scr_ctf_show_flag_carrier) == 1 ) )
CHOICE_DVAREDIT_NUMERIC_VIS( 20, "@OW_SHOW_BOMB_CARRIER_TIME_DISTANCE", scr_ctf_show_flag_carrier_time, 3, ; , when(G_GAMETYPE_CTF && dvarInt(scr_ctf_show_flag_carrier) == 2 ) )
CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SHOW_BOMB_CARRIER_DISTANCE", scr_ctf_show_flag_carrier_distance, 4, ; , when(G_GAMETYPE_CTF && dvarInt(scr_ctf_show_flag_carrier) == 2) )
