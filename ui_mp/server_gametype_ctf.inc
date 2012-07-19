//CTF
CHOICE_DVARFLOATLIST( 28, "@OW_CTF_MODE", scr_ctf_ctfmode, { "Touch own flag to return to base" 0 "Automatically returned after amount of time" 1 "Capture and manually return it to base" 2 }, ; )
CHOICE_DVAREDIT_NUMERIC( 28, "@OW_CTF_IDLEFLAGRETURNTIME", scr_ctf_idleflagreturntime, 4, ; )
CHOICE_DVARYESNO( 28, "@OW_CTF_ENDROUND_ON_CAPTURE", scr_ctf_endround_on_capture, ; )