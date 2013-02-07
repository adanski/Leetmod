#define ABOUT_MOD_X         400
#define ABOUT_MOD_Y         160

itemDef
{
	//name acwindow
	group grpControlbutton
	rect (ABOUT_MOD_X+0) (ABOUT_MOD_Y+2) 235 175
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .5 .5 .5 .5
	forecolor 1 1 1 1
	backcolor 0 0 0 .85
	visible when( dvarbool(ui_about_show) );
	decoration
}

itemDef
{
	//name acwindow2
	group grpControlbutton
	rect (ABOUT_MOD_X+2) (ABOUT_MOD_Y+4) 231 20
	style WINDOW_STYLE_FILLED
	border 1
	bordercolor .1 .1 .1 .2
	forecolor 1 1 1 1
	backcolor .4 .6 .85 .3
	visible when( dvarbool(ui_about_show) );
	decoration
}


itemDef
{
	text "@OW_ABOUT_TITLE"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+116) (ABOUT_MOD_Y+20) 110 20
	textalign ITEM_ALIGN_CENTER
	textalignx -55
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}

// Current version display
itemDef
{
	text "@OW_ABOUT_ITEM_DEVS"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+40) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
/*
itemDef
{
	text "@OW_ABOUT_ITEM_MANAGERS"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+55) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
*/

// Update version display
itemDef
{
	text "@OW_ABOUT_ITEM_OW"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+70) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
/*
itemDef
{
	text "@OW_ABOUT_ITEM_BOTS"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+85) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
*/
itemDef
{
	text "@OW_ABOUT_ITEM_VERSION"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+100) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
itemDef
{
	text "@OW_ABOUT_ITEM_EMAIL"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+115) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
itemDef
{
	text "@OW_ABOUT_ITEM_THANKS"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+130) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}
itemDef
{
	text "@OW_VISIT_SITE"
	style 0
	textscale .25
	textstyle 3
	rect (ABOUT_MOD_X+30) (ABOUT_MOD_Y+145) 110 20
	textalign ITEM_ALIGN_LEFT
	textalignx 0
	textaligny 0
	textfont UI_FONT_NORMAL
	decoration
	forecolor 1 1 1 1
	visible when( dvarbool(ui_about_show) );
}