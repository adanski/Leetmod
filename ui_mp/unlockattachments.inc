#define UNLOCK_ATTACHMENT_S \
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 10 "ulka,mp5:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 11 "ulka,skorpion:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 12 "ulka,uzi:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 13 "ulka,ak74u:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 14 "ulka,p90:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 20 "ulka,ak47:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 21 "ulka,m14:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 23 "ulka,g3:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 24 "ulka,g36c:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 25 "ulka,m16:silencer";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 26 "ulka,m4:silencer";

#define UNLOCK_ATTACHMENT_R \
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 10 "ulka,mp5:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 11 "ulka,skorpion:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 12 "ulka,uzi:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 13 "ulka,ak74u:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 14 "ulka,p90:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 20 "ulka,ak47:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 21 "ulka,m14:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 23 "ulka,g3:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 24 "ulka,g36c:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 25 "ulka,m16:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 26 "ulka,m4:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 70 "ulka,m1014:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 71 "ulka,winchester1200:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 80 "ulka,rpd:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 81 "ulka,saw:reflex";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 82 "ulka,m60e4:reflex";

#define UNLOCK_ATTACHMENT_A \
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 10 "ulka,mp5:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 11 "ulka,skorpion:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 12 "ulka,uzi:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 13 "ulka,ak74u:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 14 "ulka,p90:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 20 "ulka,ak47:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 21 "ulka,m14:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 23 "ulka,g3:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 24 "ulka,g36c:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 25 "ulka,m16:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 26 "ulka,m4:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 60 "ulka,dragunov:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 61 "ulka,m40a3:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 62 "ulka,barrett:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 64 "ulka,remington700:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 65 "ulka,m21:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 80 "ulka,rpd:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 81 "ulka,saw:acog";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 82 "ulka,m60e4:acog";

#define UNLOCK_ATTACHMENT_G \
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 70 "ulka,m1014:grip";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 71 "ulka,winchester1200:grip";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 80 "ulka,rpd:grip";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 81 "ulka,saw:grip";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 82 "ulka,m60e4:grip";

#define UNLOCK_ATTACHMENT_GL \
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 21 "ulka,m14:gl";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 23 "ulka,g3:gl";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 24 "ulka,g36c:gl";\
scriptMenuRespondOnDvarIntValue ow_cac_stat_primary 26 "ulka,m4:gl";

menuDef
{
	CENTER_POPUP_SETUP( "unlockattachments", 7, ; , 1 )
	execkey "q" { play "mouse_click"; exec "openScriptMenu ow_cac_editor cacPrimaryPrev"; }
	execkey "w" { play "mouse_click"; exec "openScriptMenu ow_cac_editor cacPrimaryNext"; }
	execkey "e" {
		execNow "set ct_cac_prim_mp44 0";
		execNowOnDvarIntValue ow_cac_stat_primary 22 "set ct_cac_prim_mp44 1";
		execOnDvarIntValue ct_cac_prim_mp44 0 "openScriptMenu ow_cac_editor cacPAttachmentNext";
		play "mouse_click";
	}
	execkey "b" { close self; }
	CHOICE_BUTTON_VIS( 1, "@WEAPON_SILENCER", exec "set ct_tmp_proc 1"; UNLOCK_ATTACHMENT_S, when( dvarInt(ow_cac_stat_primary) == 10 || dvarInt(ow_cac_stat_primary) == 11 || dvarInt(ow_cac_stat_primary) == 12 || dvarInt(ow_cac_stat_primary) == 13 || dvarInt(ow_cac_stat_primary) == 14 || dvarInt(ow_cac_stat_primary) == 20 || dvarInt(ow_cac_stat_primary) == 21 || dvarInt(ow_cac_stat_primary) == 23 || dvarInt(ow_cac_stat_primary) == 24 || dvarInt(ow_cac_stat_primary) == 25 || dvarInt(ow_cac_stat_primary) == 26 ) )
	//CHOICE_DBUTTON_VIS( 1, "@WEAPON_SILENCER", when( 0 ) )
	CHOICE_BUTTON_VIS( 2, "@WEAPON_REDDOT", exec "set ct_tmp_proc 1"; UNLOCK_ATTACHMENT_R, when( dvarInt(ow_cac_stat_primary) == 10 || dvarInt(ow_cac_stat_primary) == 11 || dvarInt(ow_cac_stat_primary) == 12 || dvarInt(ow_cac_stat_primary) == 13 || dvarInt(ow_cac_stat_primary) == 14 || dvarInt(ow_cac_stat_primary) == 20 || dvarInt(ow_cac_stat_primary) == 21 || dvarInt(ow_cac_stat_primary) == 23 || dvarInt(ow_cac_stat_primary) == 24 || dvarInt(ow_cac_stat_primary) == 25 || dvarInt(ow_cac_stat_primary) == 26 || dvarInt(ow_cac_stat_primary) == 70 || dvarInt(ow_cac_stat_primary) == 71 || dvarInt(ow_cac_stat_primary) == 80 || dvarInt(ow_cac_stat_primary) == 81 || dvarInt(ow_cac_stat_primary) == 82 ) )
	//CHOICE_DBUTTON_VIS( 2, "@WEAPON_REDDOT", when( 0 ) )
	CHOICE_BUTTON_VIS( 3, "@WEAPON_ACOG", exec "set ct_tmp_proc 1"; UNLOCK_ATTACHMENT_A, when( dvarInt(ow_cac_stat_primary) == 10 || dvarInt(ow_cac_stat_primary) == 11 || dvarInt(ow_cac_stat_primary) == 12 || dvarInt(ow_cac_stat_primary) == 13 || dvarInt(ow_cac_stat_primary) == 14 || dvarInt(ow_cac_stat_primary) == 20 || dvarInt(ow_cac_stat_primary) == 21 || dvarInt(ow_cac_stat_primary) == 23 || dvarInt(ow_cac_stat_primary) == 24 || dvarInt(ow_cac_stat_primary) == 25 || dvarInt(ow_cac_stat_primary) == 26 || dvarInt(ow_cac_stat_primary) == 60 || dvarInt(ow_cac_stat_primary) == 61 || dvarInt(ow_cac_stat_primary) == 62 || dvarInt(ow_cac_stat_primary) == 64 || dvarInt(ow_cac_stat_primary) == 65 || dvarInt(ow_cac_stat_primary) == 80 || dvarInt(ow_cac_stat_primary) == 81 || dvarInt(ow_cac_stat_primary) == 82) )
	//CHOICE_DBUTTON_VIS( 3, "@WEAPON_ACOG", when( 0 ) )
	CHOICE_BUTTON_VIS( 4, "@WEAPON_GRIP", exec "set ct_tmp_proc 1"; UNLOCK_ATTACHMENT_G, when( dvarInt(ow_cac_stat_primary) == 70 || dvarInt(ow_cac_stat_primary) == 71 || dvarInt(ow_cac_stat_primary) == 80 || dvarInt(ow_cac_stat_primary) == 81 || dvarInt(ow_cac_stat_primary) == 82 ) )
	//CHOICE_DBUTTON_VIS( 4, "@WEAPON_GRIP", when( 0 ) )
	CHOICE_BUTTON_VIS( 5, "@WEAPON_GRENADE_LAUNCHER", exec "set ct_tmp_proc 1"; UNLOCK_ATTACHMENT_GL, when( dvarInt(ow_cac_stat_primary) == 21 || dvarInt(ow_cac_stat_primary) == 23 || dvarInt(ow_cac_stat_primary) == 24 || dvarInt(ow_cac_stat_primary) == 26 ) )
	
	CHOICE_BUTTON_VIS( 6, "@OW_CAC_UNLOCK_ATTACH", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkalla", when( dvarInt(ui_isEndOfGame) != 1 ) )
	//CHOICE_DBUTTON_VIS( 6, "@OW_CAC_UNLOCK_ATTACH", when( 0 ) )
	
	CHOICE_BUTTON_VIS( 7, "@MENU_BACK", close self, when( !dvarbool(ct_tmp_proc) ) )
	CHOICE_DBUTTON_VIS( 7, "@OW_MENU_PROCESSING", when( dvarbool(ct_tmp_proc) ) )
}