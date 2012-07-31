menuDef
{
  CENTER_POPUP_SETUP( "unlockweaponsperks", 14, ;, 1 )
  execkey "q" { close self; }
  CHOICE_BUTTON_VIS( 1, "@WEAPON_COLT1911", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,colt45", when( dvarInt(ct_tmp_type) == 0 && stat( 3001 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 1, "@WEAPON_COLT1911", when( dvarInt(ct_tmp_type) == 0 && stat( 3001 ) != 0 ) )
  CHOICE_BUTTON_VIS( 2, "@WEAPON_DESERTEAGLE", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,deserteagle", when( dvarInt(ct_tmp_type) == 0 && stat( 3003 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 2, "@WEAPON_DESERTEAGLE", when( dvarInt(ct_tmp_type) == 0 && stat( 3003 ) != 0 ) )
  
  CHOICE_BUTTON_VIS( 4, "@WEAPON_M4_CARBINE", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,m4", when( dvarInt(ct_tmp_type) == 0 && stat( 3026 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 4, "@WEAPON_M4_CARBINE", when( dvarInt(ct_tmp_type) == 0 && stat( 3026 ) != 0 ) )
  CHOICE_BUTTON_VIS( 5, "@WEAPON_G3", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,g3", when( dvarInt(ct_tmp_type) == 0 && stat( 3023 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 5, "@WEAPON_G3", when( dvarInt(ct_tmp_type) == 0 && stat( 3023 ) != 0 ) )
  CHOICE_BUTTON_VIS( 6, "@WEAPON_G36C", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,g36c", when( dvarInt(ct_tmp_type) == 0 && stat( 3024 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 6, "@WEAPON_G36C", when( dvarInt(ct_tmp_type) == 0 && stat( 3024 ) != 0 ) )
  CHOICE_BUTTON_VIS( 7, "@WEAPON_M14", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,m14", when( dvarInt(ct_tmp_type) == 0 && stat( 3021 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 7, "@WEAPON_M14", when( dvarInt(ct_tmp_type) == 0 && stat( 3021 ) != 0 ) )
  CHOICE_BUTTON_VIS( 8, "@WEAPON_MP44", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,mp44", when( dvarInt(ct_tmp_type) == 0 && stat( 3022 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 8, "@WEAPON_MP44", when( dvarInt(ct_tmp_type) == 0 && stat( 3022 ) != 0 ) )
  
  CHOICE_BUTTON_VIS( 10, "@WEAPON_M60E4", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,m60e4", when( dvarInt(ct_tmp_type) == 0 && stat( 3082 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 10, "@WEAPON_M60E4", when( dvarInt(ct_tmp_type) == 0 && stat( 3082 ) != 0 ) )
  
  #undef CHOICE_TEXTALIGN
  #define	CHOICE_TEXTALIGN		ITEM_ALIGN_MIDDLE_RIGHT
    
  CHOICE_BUTTON_VIS( 13, "@OW_CAC_NEXT_PAGE", exec "toggle ct_tmp_type 0 1", when( dvarInt(ct_tmp_type) == 0 || dvarInt(ct_tmp_type) == 1 ) )
  
  #undef CHOICE_TEXTALIGN
  #define	CHOICE_TEXTALIGN		ITEM_ALIGN_MIDDLE_CENTER
  
  CHOICE_BUTTON_VIS( 1, "@WEAPON_UZI", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,uzi", when( dvarInt(ct_tmp_type) == 1 && stat( 3012 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 1, "@WEAPON_UZI", when( dvarInt(ct_tmp_type) == 1 && stat( 3012 ) != 0 ) )
  CHOICE_BUTTON_VIS( 2, "@WEAPON_AK74U", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,ak74u", when( dvarInt(ct_tmp_type) == 1 && stat( 3013 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 2, "@WEAPON_AK74U", when( dvarInt(ct_tmp_type) == 1 && stat( 3013 ) != 0 ) )
  CHOICE_BUTTON_VIS( 3, "@WEAPON_P90", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,p90", when( dvarInt(ct_tmp_type) == 1 && stat( 3014 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 3, "@WEAPON_P90", when( dvarInt(ct_tmp_type) == 1 && stat( 3014 ) != 0 ) )

  
  CHOICE_BUTTON_VIS( 5, "@WEAPON_BENELLI", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,m1014", when( dvarInt(ct_tmp_type) == 1 && stat( 3070 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 5, "@WEAPON_BENELLI", when( dvarInt(ct_tmp_type) == 1 && stat( 3070 ) != 0 ) )

  CHOICE_BUTTON_VIS( 7, "@WEAPON_M21", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,m21", when( dvarInt(ct_tmp_type) == 1 && stat( 3065 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 7, "@WEAPON_M21", when( dvarInt(ct_tmp_type) == 1 && stat( 3065 ) != 0 ) )
  CHOICE_BUTTON_VIS( 8, "@WEAPON_DRAGUNOV", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,dragunov", when( dvarInt(ct_tmp_type) == 1 && stat( 3060 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 8, "@WEAPON_DRAGUNOV", when( dvarInt(ct_tmp_type) == 1 && stat( 3060 ) != 0 ) )
  CHOICE_BUTTON_VIS( 9, "@WEAPON_REMINGTON700", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,remington700", when( dvarInt(ct_tmp_type) == 1 && stat( 3064 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 9, "@WEAPON_REMINGTON700", when( dvarInt(ct_tmp_type) == 1 && stat( 3064 ) != 0 ) )
  CHOICE_BUTTON_VIS( 10, "@WEAPON_BARRETT", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkw,barrett", when( dvarInt(ct_tmp_type) == 1 && stat( 3062 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 10, "@WEAPON_BARRETT", when( dvarInt(ct_tmp_type) == 1 && stat( 3062 ) != 0 ) )
  
  #undef CHOICE_TEXTALIGN
  #define	CHOICE_TEXTALIGN		ITEM_ALIGN_MIDDLE_RIGHT
  
  //CHOICE_BUTTON_VIS( 10, "@OW_CAC_NEXT_PAGE", setdvar ct_tmp_type 0, when( dvarInt(ct_tmp_type) == 1 ) )
  
  #undef CHOICE_TEXTALIGN
  #define	CHOICE_TEXTALIGN		ITEM_ALIGN_MIDDLE_CENTER
  
  CHOICE_BUTTON_VIS( 12, "@OW_CAC_UNLOCK_WEAPONS", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkallw", when( dvarInt(ct_tmp_type) != 2 && (stat( 3001 ) == 0 || stat( 3003 ) == 0 || stat( 3026 ) == 0 || stat( 3023 ) == 0 || stat( 3024 ) == 0 || stat( 3021 ) == 0 || stat( 3022 ) == 0 || stat( 3012 ) == 0 || stat( 3013 ) == 0 || stat( 3070 ) == 0 || stat( 3065 ) == 0 || stat( 3060 ) == 0 || stat( 3064 ) == 0 || stat( 3062 ) == 0 ) ) )
  
  
  CHOICE_BUTTON_VIS( 1, "@PERKS_BANDOLIER", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_extraammo", when( dvarInt(ct_tmp_type) == 2 && stat( 165 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 1, "@PERKS_BANDOLIER", when( dvarInt(ct_tmp_type) == 2 && stat( 165 ) != 0 ) )
  CHOICE_BUTTON_VIS( 2, "@PERKS_BOMB_SQUAD", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_detectexplosive", when( dvarInt(ct_tmp_type) == 2 && stat( 155 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 2, "@PERKS_BOMB_SQUAD", when( dvarInt(ct_tmp_type) == 2 && stat( 155 ) != 0 ) )
  CHOICE_BUTTON_VIS( 3, "@PERKS_CLAYMORE_X_2", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,claymore_mp", when( dvarInt(ct_tmp_type) == 2 && stat( 185 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 3, "@PERKS_CLAYMORE_X_2", when( dvarInt(ct_tmp_type) == 2 && stat( 185 ) != 0 ) )
  CHOICE_BUTTON_VIS( 4, "@PERKS_DOUBLE_TAP", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_rof", when( dvarInt(ct_tmp_type) == 2 && stat( 163 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 4, "@PERKS_DOUBLE_TAP", when( dvarInt(ct_tmp_type) == 2 && stat( 163 ) != 0 ) )
  CHOICE_BUTTON_VIS( 5, "@PERKS_DEAD_SILENCE", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_quieter", when( dvarInt(ct_tmp_type) == 2 && stat( 153 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 5, "@PERKS_DEAD_SILENCE", when( dvarInt(ct_tmp_type) == 2 && stat( 153 ) != 0 ) )
  CHOICE_BUTTON_VIS( 6, "@PERKS_EAVESDROP", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_parabolic", when( dvarInt(ct_tmp_type) == 2 && stat( 150 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 6, "@PERKS_EAVESDROP", when( dvarInt(ct_tmp_type) == 2 && stat( 150 ) != 0 ) )
  CHOICE_BUTTON_VIS( 7, "@PERKS_FRAG_X_3", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_fraggrenade", when( dvarInt(ct_tmp_type) == 2 && stat( 173 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 7, "@PERKS_FRAG_X_3", when( dvarInt(ct_tmp_type) == 2 && stat( 173 ) != 0 ) )
  CHOICE_BUTTON_VIS( 8, "@PERKS_IRON_LUNGS", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_holdbreath", when( dvarInt(ct_tmp_type) == 2 && stat( 152 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 8, "@PERKS_IRON_LUNGS", when( dvarInt(ct_tmp_type) == 2 && stat( 152 ) != 0 ) )
  CHOICE_BUTTON_VIS( 9, "@PERKS_LAST_STAND", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_pistoldeath", when( dvarInt(ct_tmp_type) == 2 && stat( 157 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 9, "@PERKS_LAST_STAND", when( dvarInt(ct_tmp_type) == 2 && stat( 157 ) != 0 ) )
  CHOICE_BUTTON_VIS( 10, "@PERKS_MARTYRDOM", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_grenadepulldeath", when( dvarInt(ct_tmp_type) == 2 && stat( 158 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 10, "@PERKS_MARTYRDOM", when( dvarInt(ct_tmp_type) == 2 && stat( 158 ) != 0 ) )
  CHOICE_BUTTON_VIS( 11, "@PERKS_OVERKILL", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_twoprimaries", when( dvarInt(ct_tmp_type) == 2 && stat( 166 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 11, "@PERKS_OVERKILL", when( dvarInt(ct_tmp_type) == 2 && stat( 166 ) != 0 ) )
  CHOICE_BUTTON_VIS( 12, "@PERKS_SLEIGHT_OF_HAND", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_fastreload", when( dvarInt(ct_tmp_type) == 2 && stat( 164 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 12, "@PERKS_SLEIGHT_OF_HAND", when( dvarInt(ct_tmp_type) == 2 && stat( 164 ) != 0 ) )
  CHOICE_BUTTON_VIS( 13, "@PERKS_UAV_JAMMER", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkp,specialty_gpsjammer", when( dvarInt(ct_tmp_type) == 2 && stat( 151 ) == 0 ) )
  CHOICE_DBUTTON_VIS( 13, "@PERKS_UAV_JAMMER", when( dvarInt(ct_tmp_type) == 2 && stat( 151 ) != 0 ) )
  
  
  
  //CHOICE_BUTTON_VIS( 14, "@OW_CAC_UNLOCK_PERKS", exec "set ct_tmp_proc 1"; scriptMenuResponse "ulkallp", when( dvarInt(ct_tmp_type) == 2 && (stat( 155 ) == 0 || stat( 185 ) == 0 || stat( 165 ) == 0 || stat( 173 ) == 0 || stat( 164 ) == 0 || stat( 163 ) == 0 || stat( 151 ) == 0 || stat( 166 ) == 0 || stat( 153 ) == 0) ) )
  
  CHOICE_BUTTON_VIS( 14, "@MENU_BACK", close self, when( !dvarbool(ct_tmp_proc) ) )
  CHOICE_DBUTTON_VIS( 14, "@OW_MENU_PROCESSING", when( dvarbool(ct_tmp_proc) ) )
}