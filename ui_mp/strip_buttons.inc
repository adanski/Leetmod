// To overcome itemDef max limit, this overrides buttons display to use less itemDef's (at the cost of a more simple interface)

#ifdef CHOICE_HIGHLIGHT_CUSTOM
#undef CHOICE_HIGHLIGHT_CUSTOM
#endif

#define CHOICE_HIGHLIGHT_CUSTOM( itemIndex, foreColorArg, borderColorArg, visArg ) \
		itemDef \
		{ \
			style			WINDOW_STYLE_SHADER \
			rect			(CHOICE_X( itemIndex )+(CHOICE_SIZE_X-(CHOICE_SIZE_Y/4))) CHOICE_Y( itemIndex ) (CHOICE_SIZE_Y/4) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background		HIGHLIGHT_SHADER_ART \
			forecolor		foreColorArg \
			visible			when( localVarInt( ui_highlight ) == itemIndex && localVarString( ui_choicegroup ) == CHOICE_GROUP ); \
			decoration \
		}

#ifdef CHOICE_BUTTON_BG_RAW
#undef CHOICE_BUTTON_BG_RAW
#endif

#define CHOICE_BUTTON_BG_RAW( itemIndex, bgimage, foreColorArg, visArg ) \
		itemDef \
		{ \
			style			WINDOW_STYLE_SHADER \
			rect			CHOICE_ORIGIN( itemIndex ) (CHOICE_SIZE_X-(CHOICE_SIZE_Y/4)) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			exp				material( bgimage ); \
			forecolor		foreColorArg \
			visible			visArg; \
			decoration \
		}