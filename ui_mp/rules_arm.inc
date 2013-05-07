#define RULES_ARM_X         250
#define RULES_ARM_Y         160

itemDef
{
	//name acwindow
	group grpControlbutton
	rect (RULES_ARM_X+0) (RULES_ARM_Y+2) 115 150
	type			1
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .5 .5 .5 .5
	forecolor 1 1 1 1
	backcolor 0 0 0 1
	visible when( dvarbool(tmp_showrules_arm) );
}

itemDef
{
	//name acwindow2
	group grpControlbutton
	type			1
	rect (RULES_ARM_X+2) (RULES_ARM_Y+4) 111 20
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .1 .1 .1 .2
	forecolor 1 1 1 1
	backcolor .4 .6 .85 1
	visible when( dvarbool(tmp_showrules_arm) );
}


itemDef
{
	text "Armory Rules"
	style 0
	textscale .25
	textstyle 3
	rect (RULES_ARM_X+60) (RULES_ARM_Y+20) 110 20
	textalign ITEM_ALIGN_CENTER
	textalignx -55
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(tmp_showrules_arm) );
}

itemDef
{
	name "arm_boltaction"
	text "Bolt Actions"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+30) 46 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/boltaction.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_sniper"
	text "Snipers"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+45) 32 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/sniper.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_shotgun"
	text "Shotguns"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+60) 40 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/shotgun.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_pistol"
	text "Pistols"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+75) 30 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/pistol.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_promod"
	text "Promod"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+90) 34 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/promod.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_leetmod"
	text "Leetmod"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+105) 36 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/leetmod.cfg"
		setdvar tmp_showrules_arm 0;
	}
}
itemDef
{
	name "arm_all"
	text "All"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+30) (RULES_ARM_Y+120) 15 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny 10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec rules/armory/all.cfg"
		setdvar tmp_showrules_arm 0;
	}
}

itemDef
{
	name "arm_back"
	text "Back"
	type			1
	style WINDOW_STYLE_FILLED
	rect (RULES_ARM_X+8) (RULES_ARM_Y+140) 22 10
	textstyle 3
	textscale .25
	textfont UI_FONT_NORMAL
	textalign ITEM_ALIGN_LEFT
	textaligny		10
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	visible when( dvarbool(tmp_showrules_arm) );
	mouseEnter { play "mouse_over"; }
	action
	{
		play "mouse_click";
		setdvar tmp_showrules_arm 0;
	}
}