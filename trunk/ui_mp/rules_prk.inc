#define RULES_PRK_X         250
#define RULES_PRK_Y         160

itemDef
{
	//name acwindow
	group grpControlbutton
	rect (RULES_PRK_X+0) (RULES_PRK_Y+2) 115 105
	type			1
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .5 .5 .5 .5
	forecolor 1 1 1 1
	backcolor 0 0 0 1
	visible when( dvarbool(tmp_showrules_prk) );
}

itemDef
{
	//name acwindow2
	group grpControlbutton
	type			1
	rect (RULES_PRK_X+2) (RULES_PRK_Y+4) 111 20
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .1 .1 .1 .2
	forecolor 1 1 1 1
	backcolor .4 .6 .85 1
	visible when( dvarbool(tmp_showrules_prk) );
}


itemDef
{
	text "Perk Rules"
	style 0
	textscale .25
	textstyle 3
	rect (RULES_PRK_X+60) (RULES_PRK_Y+20) 110 20
	textalign ITEM_ALIGN_CENTER
	textalignx -55
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(tmp_showrules_prk) );
}

itemDef
{
	name "prk_none"
	text "None"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PRK_X+30) (RULES_PRK_Y+30) 22 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_prk) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/perks/none.cfg"
		setdvar tmp_showrules_prk 0;
	}
}
itemDef
{
	name "prk_leetmod"
	text "Leetmod"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PRK_X+30) (RULES_PRK_Y+45) 36 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_prk) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/perks/leetmod.cfg"
		setdvar tmp_showrules_prk 0;
	}
}
itemDef
{
	name "prk_some"
	text "Some more"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PRK_X+30) (RULES_PRK_Y+60) 42 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_prk) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/perks/some.cfg"
		setdvar tmp_showrules_prk 0;
	}
}
itemDef
{
	name "prk_all"
	text "All"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PRK_X+30) (RULES_PRK_Y+75) 15 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_prk) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/perks/all.cfg"
		setdvar tmp_showrules_prk 0;
	}
}

itemDef
{
	name "pfl_back"
	text "Back"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_PRK_X+8) (RULES_PRK_Y+95) 22 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny		10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_prk) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		setdvar tmp_showrules_prk 0;
	}
}