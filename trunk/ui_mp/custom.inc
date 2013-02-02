#ifndef SETA_CUSTOM_VARS
  #define SETA_CUSTOM_VARS "seta ct_conChatHistOnly 0; seta ct_hud_show_inventory 0; seta ct_hud_show_scores 0; seta ct_hud_hardcore_show_compass 0; seta ct_chat_position standard; seta ct_scoreboardNew 0; seta r_normal 1; seta ct_menu_hide_fog 0; seta ct_lm_ver 18"
#endif
#ifndef SETA_CUSTOM_VARS_CLASSES1NAME
#define SETA_CUSTOM_VARS_CLASSES1NAME "seta customclass6 Ranked_Class_6; seta customclass7 Ranked_Class_7; seta customclass8 Ranked_Class_8; seta customclass9 Ranked_Class_9; seta customclass11 Editable_Class_A; seta customclass12 Editable_Class_B; seta customclass13 Editable_Class_C; seta customclass14 Editable_Class_D; seta customclass15 Editable_Class_E; seta customclass16 Editable_Class_F; seta customclass17 Editable_Class_G; seta customclass18 Editable_Class_G; seta customclass19 Editable_Class_H"
#endif
//#define SETA_CUSTOM_VARS_EX "seta compassObjectiveScreen 0; seta player_breath_snd_src 0; seta snd_enableSrc 0; seta ct_unlocked_weap 0; seta ct_unlocked_attach 0; seta ct_unlocked_camo 0";
#ifndef ASH1
#define ASH1 "set con_outputWindowColor 0.1 0.2 1 0.2"
#endif
#ifndef ASH2
#define ASH2 "set con_outputSliderColor 0.2 0.7 0 0.6"
#endif
#ifndef ASH3
#define ASH3 "set con_inputBoxColor 0.4 0.5 0.8 1"
#endif
#ifndef ASH4
#define ASH4 "set con_inputHintBoxColor 0.4 0.6 0.8 1"
#endif
#ifndef ASH5
#define ASH5 "con_hidechannel *; con_showchannel client"
#endif

#ifndef AHH1
#define AHH1 "set con_outputWindowColor 0.35 0.35 0.3 0.75"
#endif
#ifndef AHH2
#define AHH2 "set con_outputSliderColor 0.15 0.15 0.1 0.6"
#endif
#ifndef AHH3
#define AHH3 "set con_inputBoxColor 0.25 0.25 0.2 1"
#endif
#ifndef AHH4
#define AHH4 "set con_inputHintBoxColor 0.4 0.4 0.35 1"
#endif
#ifndef AHH5
#define AHH5 "con_hidechannel *; con_showchannel dontfilter error gamenotify boldgame subtitle obituary logfile_only console_only gfx sound files devgui profile ui client server system playerweap ai anim physics fx leaderboards parserscript script"
#endif

#ifndef ASN1
#define ASN1 "seta cg_scoreboardHeight 480; seta cg_scoreboardItemHeight 15; seta cg_scoreboardBannerHeight 30"
#endif
#ifndef ASO1
#define ASO1 "seta cg_scoreboardHeight 435; seta cg_scoreboardItemHeight 18; seta cg_scoreboardBannerHeight 35"
#endif

#ifndef INDEX_TIME_PLAYED_OTHER
#define INDEX_TIME_PLAYED_OTHER 2313
#endif
#ifndef STATTODVAR_TIME_PLAYED_OTHER
#define STATTODVAR_TIME_PLAYED_OTHER execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2313 ui_stat_time_played_other"
#endif
#ifndef INDEX_TIME_PLAYED_OPFOR
#define INDEX_TIME_PLAYED_OPFOR 2312
#endif
#ifndef STATTODVAR_TIME_PLAYED_OPFOR
#define STATTODVAR_TIME_PLAYED_OPFOR execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2312 ui_stat_time_played_opfor"
#endif
#ifndef INDEX_TIME_PLAYED_ALLIES
#define INDEX_TIME_PLAYED_ALLIES 2311
#endif
#ifndef STATTODVAR_TIME_PLAYED_ALLIES
#define STATTODVAR_TIME_PLAYED_ALLIES execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2311 ui_stat_time_played_allies"
#endif
#ifndef INDEX_SUICIDES
#define INDEX_SUICIDES 2310
#endif
#ifndef STATTODVAR_SUICIDES
#define STATTODVAR_SUICIDES execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2310 ui_stat_suicides"
#endif
#ifndef INDEX_TEAMKILLS
#define INDEX_TEAMKILLS 2309
#endif
#ifndef STATTODVAR_TEAMKILLS
#define STATTODVAR_TEAMKILLS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2309 ui_stat_teamkills"
#endif
#ifndef INDEX_HEADSHOTS
#define INDEX_HEADSHOTS 2308
#endif
#ifndef STATTODVAR_HEADSHOTS
#define STATTODVAR_HEADSHOTS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2308 ui_stat_headshots"
#endif
#ifndef INDEX_ASSISTS
#define INDEX_ASSISTS 2307
#endif
#ifndef STATTODVAR_ASSISTS
#define STATTODVAR_ASSISTS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2307 ui_stat_assists"
#endif
#ifndef INDEX_DEATH_STREAK
#define INDEX_DEATH_STREAK 2306
#endif
#ifndef STATTODVAR_DEATH_STREAK
#define STATTODVAR_DEATH_STREAK execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2306 ui_stat_death_streak"
#endif
#ifndef INDEX_DEATHS
#define INDEX_DEATHS 2305
#endif
#ifndef STATTODVAR_DEATHS
#define STATTODVAR_DEATHS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2305 ui_stat_deaths"
#endif
#ifndef INDEX_KILL_STREAK
#define INDEX_KILL_STREAK 2304
#endif
#ifndef STATTODVAR_KILL_STREAK
#define STATTODVAR_KILL_STREAK execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2304 ui_stat_kill_streak"
#endif
#ifndef INDEX_KILLS
#define INDEX_KILLS 2303
#endif
#ifndef STATTODVAR_KILLS
#define STATTODVAR_KILLS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2303 ui_stat_kills"
#endif
#ifndef INDEX_SCORE
#define INDEX_SCORE 2302
#endif
#ifndef STATTODVAR_SCORE
#define STATTODVAR_SCORE execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2302 ui_stat_score"
#endif
#ifndef INDEX_RANKXP
#define INDEX_RANKXP 2301
#endif
#ifndef STATTODVAR_RANKXP
#define STATTODVAR_RANKXP execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2301 ui_stat_rankxp"
#endif
#ifndef INDEX_TFT
#define INDEX_TFT 252
#endif
#ifndef STATTODVAR_TFT
#define STATTODVAR_TFT execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 252 ui_stat_tft"
#endif
#ifndef INDEX_TTTS
#define INDEX_TTTS 2326
#endif
#ifndef STATTODVAR_TTTS
#define STATTODVAR_TTTS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2326 ui_stat_ttts"
#endif
#ifndef INDEX_WINS
#define INDEX_WINS 2316
#endif
#ifndef STATTODVAR_WINS
#define STATTODVAR_WINS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2316 ui_stat_wins"
#endif
#ifndef INDEX_LOSSES
#define INDEX_LOSSES 2317
#endif
#ifndef STATTODVAR_LOSSES
#define STATTODVAR_LOSSES execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2317 ui_stat_losses"
#endif
#ifndef INDEX_TIES
#define INDEX_TIES 2318
#endif
#ifndef STATTODVAR_TIES
#define STATTODVAR_TIES execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2318 ui_stat_ties"
#endif
#ifndef INDEX_HITS
#define INDEX_HITS 2322
#endif
#ifndef STATTODVAR_HITS
#define STATTODVAR_HITS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2322 ui_stat_hit"
#endif
#ifndef INDEX_MISSES
#define INDEX_MISSES 2323
#endif
#ifndef STATTODVAR_MISSES
#define STATTODVAR_MISSES execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2323 ui_stat_miss"
#endif
#ifndef INDEX_TOTAL_SHOTS
#define INDEX_TOTAL_SHOTS 2324
#endif
#ifndef STATTODVAR_TOTAL_SHOTS
#define STATTODVAR_TOTAL_SHOTS execNowOnDvarIntValue ct_displayingSelf 0 "statGetInDvar 2324 ui_stat_tshots"
#endif

#ifndef GETNAMEONDVAR
#define GETNAMEONDVAR execNowOnDvarIntValue ct_displayingSelf 0 "setfromdvar ui_stat_name name"
#endif

#ifndef STAT_UPDATE_SELF
#define STAT_UPDATE_SELF \
  GETNAMEONDVAR; \
	STATTODVAR_TIME_PLAYED_OTHER; \
	STATTODVAR_TIME_PLAYED_OPFOR; \
	STATTODVAR_TIME_PLAYED_ALLIES; \
  STATTODVAR_SUICIDES; \
	STATTODVAR_TEAMKILLS; \
	STATTODVAR_HEADSHOTS; \
	STATTODVAR_ASSISTS; \
	STATTODVAR_DEATH_STREAK; \
	STATTODVAR_DEATHS; \
	STATTODVAR_KILL_STREAK; \
	STATTODVAR_KILLS; \
	STATTODVAR_SCORE; \
	STATTODVAR_RANKXP; \
  STATTODVAR_TFT; \
  STATTODVAR_TTTS; \
  STATTODVAR_WINS; \
  STATTODVAR_LOSSES; \
  STATTODVAR_TIES; \
  STATTODVAR_HITS; \
  STATTODVAR_MISSES; \
  STATTODVAR_TOTAL_SHOTS;
#endif