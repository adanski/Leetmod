#define RULES_PFL_X         250
#define RULES_PFL_Y         160

itemDef
{
	//name acwindow
	group grpControlbutton
	rect (RULES_PFL_X+0) (RULES_PFL_Y+2) 115 90
	type			1
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .5 .5 .5 .5
	forecolor 1 1 1 1
	backcolor 0 0 0 1
	visible when( dvarbool(tmp_showrules_pfl) );
}

itemDef
{
	//name acwindow2
	group grpControlbutton
	type			1
	rect (RULES_PFL_X+2) (RULES_PFL_Y+4) 111 20
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .1 .1 .1 .2
	forecolor 1 1 1 1
	backcolor .4 .6 .85 1
	visible when( dvarbool(tmp_showrules_pfl) );
}


itemDef
{
	text "Full Profiles"
	style 0
	textscale .25
	textstyle 3
	rect (RULES_PFL_X+60) (RULES_PFL_Y+20) 110 20
	textalign ITEM_ALIGN_CENTER
	textalignx -55
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(tmp_showrules_pfl) );
}

itemDef
{
	name "my_configs"
	text "My /configs"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PFL_X+30) (RULES_PFL_Y+30) 38 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_pfl) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec configs/executefiles.cfg"
		setdvar tmp_showrules_pfl 0;
	}
}
itemDef
{
	name "pfl_leetmod"
	text "Leetmod"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PFL_X+30) (RULES_PFL_Y+45) 36 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_pfl) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/profile/leetmod.cfg"
		setdvar tmp_showrules_pfl 0;
	}
}
itemDef
{
	name "pfl_promod"
	text "Promod"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PFL_X+30) (RULES_PFL_Y+60) 34 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_pfl) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/profile/promod.cfg"
		setdvar tmp_showrules_pfl 0;
	}
}

itemDef
{
	name "pfl_back"
	text "Back"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PFL_X+8) (RULES_PFL_Y+80) 22 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny		10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_pfl) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		setdvar tmp_showrules_pfl 0;
	}
}