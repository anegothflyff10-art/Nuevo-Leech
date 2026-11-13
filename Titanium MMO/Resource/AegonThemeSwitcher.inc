restartWindows
{
	addWnd	APP_INVENTORY
	addWnd	APP_BAG_EX
	addWnd	APP_COMMUNICATION_CHAT
	addWnd	APP_SWITCHEQUIP
	addWnd	APP_NAVIGATOR
	addWnd	APP_CHARACTER3
}

Theme
{	
	themeFolder		"Data\Theme\Default\"
	themeName		"Default"
	themeType		0
	wndColor		0
	wndColorFrame	0
}

Theme
{	
	themeFolder		"Data\Theme\Default\ThemeSwitcher\Blue\"
	themeName		"Blue"
	themeType		0
	wndColor		0
	wndColorFrame	0
}

Theme
{    
    themeFolder		"Data\Theme\Default\ThemeSwitcher\Titanium\"
    themeName		"Titanium"
    themeType		1	
	wndColor		0xff232322
	wndColorFrame	0xffb28b48
	textColor		0xffffffff
	fontTextColor	0xffc2a36e
	fontTitleColor	0xfff6cc4d
	staticColor		0xfff6cc4d
	highlightColor	0	0xff00ffff
	highlightColor	1	0xff47ff47
	highlightColor	2	0xffccb3ff
	highlightColor	3	0xffefcd0c
	highlightColor	4	0xffff0000
	
	RenderFillRect	0xff615a4d
	RenderRect		0xffcda053
	
	nameColor		1	0xff47ff47	
	
	scrollBarOffset		10
	titleBarYOffset		15
	titleBarPosOffset 	-5	8
	
	wndTitleBarPosOffset	APP_STATUS1	0	0
	wndTitleBarPosOffset    APP_BAG_EX	-6	11
	wndTitleBarPosOffset	APP_INSTANTMSG -6 0
	wndTitleBarPosOffset	APP_MESSAGEBOX -10 6
	
	titleDrawOffset	0						8
	titleDrawOffset APP_NAVIGATOR			0
	titleDrawOffset APP_STATUS1				0
	
	pickUpHeight	0						32
	pickUpHeight	APP_BAG_EX				40
	pickUpHeight	APP_INVENTORY			60
	pickUpHeight	APP_VIEW_INVENTORY_CTRL	60
	
	maxSlotAppletOffset		-1
	offsetLoopIncrease		3
	offsetLoopIncreaseQueue	7
	queueIconOffsetPoint	2
	inventoryCtrlOffsetXY	3	3
	
	buttonFont			"Verdana" 0xffb8ae9c 0xff565044 10 1 0 1
	buttonFontHover		"Verdana" 0xffcdc1a7 0xff896a36 10 1 0 1
	messengerFontTitle	"Verdana" 0xffffffff 0xffffffff 12 0 0 0
}


//Theme           // For OBT Disable
//{    
//    themeFolder		"Data\Theme\Default\ThemeSwitcher\TitaniumLight\"
//    themeName		"TitaniumLight"
//    themeType		2	
//	wndColor		0xff232322
//	wndColorFrame	0xffb28b48
//	textColor		0xffffffff
//	fontTextColor	0xffc2a36e
//	fontTitleColor	0xfff6cc4d
//	staticColor		0xfff6cc4d
//	highlightColor	0	0xff00ffff
//	highlightColor	1	0xff47ff47
//	highlightColor	2	0xffccb3ff
//	highlightColor	3	0xffefcd0c
//	highlightColor	4	0xffff0000
//	
//	RenderFillRect	0xff615a4d
//	RenderRect		0xffcda053
//	
//	nameColor		1	0xff47ff47	
//	
//	scrollBarOffset	10
//	titleBarYOffset	15
//	
//	titleDrawOffset	0						8
//	titleDrawOffset APP_NAVIGATOR			0
//	titleDrawOffset APP_STATUS1				0
//	
//	pickUpHeight	0						32
//	pickUpHeight	APP_BAG_EX				40
//	pickUpHeight	APP_INVENTORY			60
//	pickUpHeight	APP_VIEW_INVENTORY_CTRL	60
//	
//	maxSlotAppletOffset		-1
//	offsetLoopIncrease		3
//	offsetLoopIncreaseQueue	7
//	queueIconOffsetPoint	2
//	inventoryCtrlOffsetXY	3	3
//	
//}
