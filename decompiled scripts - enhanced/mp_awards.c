#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 17;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 17;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	int num;
	int num2;
	int num3;
	var scaleformHandle;
	var scaleformHandle2;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistPick"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistDrop"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DeletePlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SetCrewChallenge"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageLeft"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageRight"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SupressSelectPM"));
		HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
		Global_1574599 = 0;
		STATS::PLAYSTATS_AWARD_NAV(Global_1672212.f_471, Global_1672212.f_472, Global_1672212.f_499, Global_1672212.f_500);
		Global_1672212.f_471 = 0;
		Global_1672212.f_472 = 0;
		Global_1672212.f_499 = 0;
		Global_1672212.f_500 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	num = 0;
	num2 = 1;
	Global_1671628.f_1 = 0;
	Global_1671628.f_3 = 0;
	Global_1671628.f_5 = 0;
	Global_1671628.f_7 = 0;
	Global_1671628.f_6 = 0;
	func_220(&Global_1673304);
	func_219(0, &Global_1673304);
	func_218(&Global_1673304);
	func_216(&Global_1672212);
	func_215(-1, &Global_1672212);
	func_214(&Global_1672212);
	func_213(&Global_1672212);
	func_209();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	switch (iScriptParam_0)
	{
		case 3:
			while (num == 0)
			{
				BUILTIN::WAIT(0);
			
				if (num2 == 1)
				{
					if (num3 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1671628.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							num3 = 1;
						}
					}
				}
			
				if (Global_1672212.f_469 == 0 && Global_1672212.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
					{
						if (num2 == 0)
						{
							num2 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
							func_219(Global_1671628.f_6, &Global_1673304);
							func_218(&Global_1673304);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_208();
						}
						else
						{
							switch (Global_1671628.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1671628.f_7 = 1;
									func_207(&Global_1672212, &Global_1671628);
									func_215(func_206(&(Global_1671628.f_1), &(Global_1671628.f_3), Global_1671628.f_5, 188), &Global_1672212);
									func_214(&Global_1672212);
									func_213(&Global_1672212);
									func_191(&Global_1672212, &Global_1671628);
									break;
							}
						}
					}
				}
			
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
				{
					if (num2 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::RELEASE_CONTROL_OF_FRONTEND();
						num = 1;
					}
					else
					{
						switch (Global_1671628.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1671628.f_1 = 0;
								Global_1671628.f_3 = 0;
								func_219(-1, &Global_1673304);
								func_218(&Global_1673304);
								func_208();
								num2 = 0;
								break;
						
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								func_215(-1, &Global_1672212);
								func_214(&Global_1672212);
								func_213(&Global_1672212);
								func_208();
								Global_1671628.f_7 = 0;
								break;
						}
					}
				}
			
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", false);
			
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
			
				func_15(&Global_1671628);
			
				if (num2 == 1)
					func_2(&Global_1672212, &Global_1671628, &uLocal_111);
			}
			break;
	
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	}

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&scaleformHandle);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&scaleformHandle2);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	Global_1574599 = 0;
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
	STATS::PLAYSTATS_AWARD_NAV(Global_1672212.f_471, Global_1672212.f_472, Global_1672212.f_499, Global_1672212.f_500);
	Global_1672212.f_471 = 0;
	Global_1672212.f_472 = 0;
	Global_1672212.f_499 = 0;
	Global_1672212.f_500 = 0;

	while (true)
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x539 (1337)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_2(var uParam0, var uParam1, var uParam2) // Position - 0x552 (1362)
{
	BOOL flag;
	int num;
	int num2;
	var lastItemMenuId;
	int selectedItemUniqueId;
	int num3;
	var unk;
	var unk2;
	var lastItemMenuId2;
	int selectedItemMenuId;
	int selectedItemUniqueId2;
	int num4;

	if (!_STOPWATCH_IS_INITIALIZED(uParam2) || _STOPWATCH_IS_INITIALIZED(uParam2) && func_13(uParam2, 250, false))
		flag = true;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || func_12(187, &(Global_1673898.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || func_12(188, &(Global_1673898.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || func_12(189, &(Global_1673898.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || func_12(190, &(Global_1673898.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		func_10(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}

	if (IS_BIT_SET(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
	
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = uParam1->f_6 - 1;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
			
				if (func_9() == 0 || func_8() == 0)
				{
				}
				else if (uParam1->f_6 > 21)
				{
					uParam1->f_6 = 0;
				}
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_6 < 0)
							uParam1->f_6 = 21;
						break;
				}
			
				func_219(uParam1->f_6, &Global_1673304);
				func_218(&Global_1673304);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), false, false);
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = uParam1->f_3 - 1;
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_3 < 0)
							uParam1->f_3 = 2;
						break;
				}
			
				func_215(func_206(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_214(uParam0);
				func_213(uParam0);
				func_191(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
	
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = uParam1->f_6 + 1;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_6 > 21)
							uParam1->f_6 = 0;
						break;
				}
			
				func_219(uParam1->f_6, &Global_1673304);
				func_218(&Global_1673304);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), false, false);
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = uParam1->f_3 + 1;
			
				if (uParam1->f_3 > 2)
					uParam1->f_3 = 0;
			
				func_215(func_206(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_214(uParam0);
				func_213(uParam0);
				func_191(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
	
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = uParam1->f_1 - 1;
			
				if (uParam1->f_1 < 0)
				{
					if (iLocal_109 >= 1)
					{
						func_216(uParam0);
						func_1();
					}
				
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = uParam1->f_5 - 1;
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_109;
						uParam1->f_1 = 3;
						num = uParam1->f_1 + (uParam1->f_3 * 4);
					
						if (num >= iLocal_110)
						{
							uParam1->f_1 = (iLocal_110 - 1) % 4;
							uParam1->f_3 = (iLocal_110 - 1) / 4;
						}
					}
				}
			
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_215(func_206(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_214(uParam0);
				func_213(uParam0);
				func_191(uParam0, uParam1);
				break;
		}
	}

	if (IS_BIT_SET(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
	
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = uParam1->f_1 + 1;
				num2 = uParam1->f_1 + (uParam1->f_3 * 4);
			
				if (uParam1->f_1 >= 4 || uParam1->f_5 == iLocal_109 && num2 >= iLocal_110)
				{
					if (iLocal_109 >= 1)
					{
						func_216(uParam0);
						func_1();
					}
				
					uParam1->f_1 = 0;
					uParam1->f_5 = uParam1->f_5 + 1;
				
					if (uParam1->f_5 > iLocal_109)
						uParam1->f_5 = 0;
				}
			
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_215(func_206(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_214(uParam0);
				func_213(uParam0);
				func_191(uParam0, uParam1);
				break;
		}
	}

	if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
	{
		HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&lastItemMenuId, &selectedItemUniqueId);
	
		switch (uParam1->f_7)
		{
			case 0:
				if (selectedItemUniqueId == 0 || selectedItemUniqueId == 1)
				{
					uParam1->f_7 = 1;
				
					if (HUD::PAUSE_MENU_GET_MOUSE_CLICK_EVENT(&num3, &unk, &unk2))
					{
						Global_1671628.f_1 = num3 % 4;
						Global_1671628.f_3 = num3 / 4;
					}
				}
				break;
		}
	}

	if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
	{
		HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&lastItemMenuId2, &selectedItemMenuId, &selectedItemUniqueId2);
		num4 = selectedItemMenuId + 1000;
	
		if (num4 >= 0)
		{
			if (selectedItemUniqueId2 == 0)
			{
				uParam1->f_7 = 0;
			
				if (uParam1->f_6 != num4)
				{
					uParam1->f_6 = num4;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (selectedItemUniqueId2 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = num4 % 4;
				uParam1->f_3 = num4 / 4;
			}
			else if (selectedItemUniqueId2 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}

	if (uParam0->f_469 == 1)
	{
		if (func_4(&(uParam0->f_465), 500, false))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_216(uParam0);
					func_207(uParam0, uParam1);
					func_215(-1, uParam0);
					func_214(uParam0);
					func_213(uParam0);
					func_3(false);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(true);
						func_208();
						uParam0->f_470 = 1;
					}
					break;
			}
		}
	}

	return;
}

void func_3(BOOL bParam0) // Position - 0xB9D (2973)
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
	return;
}

BOOL func_4(var uParam0, int iParam1, BOOL bParam2) // Position - 0xBAD (2989)
{
	if (iParam1 == -1)
		return true;

	func_10(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			_STOPWATCH_DESTROY(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		_STOPWATCH_DESTROY(uParam0);
		return true;
	}

	return false;
}

void func_5(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC17 (3095)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*uParam0 = MISC::GET_GAME_TIMER();

	uParam0->f_1 = 1;
	return;
}

int func_6(int iParam0, BOOL bParam1) // Position - 0xC54 (3156)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_7();

	if (Global_1575068[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

int func_7() // Position - 0xC95 (3221)
{
	return Global_1574927;
}

int func_8() // Position - 0xCA1 (3233)
{
	return Global_33299;
}

int func_9() // Position - 0xCAC (3244)
{
	return Global_33298;
}

void func_10(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCB7 (3255)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xCFC (3324)
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_12(int iParam0, var uParam1, int iParam2) // Position - 0xD09 (3337)
{
	int num;
	int num2;
	int num3;

	num = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 127;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 127;
	num3 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X) - 127;

	switch (iParam0)
	{
		case 189:
			if (num < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 190:
			if (num > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 188:
			if (num2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 187:
			if (num2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 194:
			if (num3 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	
		case 193:
			if (num3 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_13(var uParam0, int iParam1, BOOL bParam2) // Position - 0xE6C (3692)
{
	if (iParam1 == -1)
		return 1;

	func_10(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return 1;

	return 0;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xECA (3786)
{
	return uParam0->f_1;
}

void func_15(var uParam0) // Position - 0xED6 (3798)
{
	BOOL flag;
	BOOL flag2;
	ePedComponentType type;
	int num;
	int num2;

	num = 0;

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
		flag = true;

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
		flag2 = true;

	type == PV_COMP_BERD;

	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6") && flag && flag2)
		{
			num2 = 9;
		
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_9094)
					{
						iLocal_109 = 33;
						iLocal_110 = 9;
					}
					else
					{
						iLocal_109 = 33;
						iLocal_110 = 3;
					}
				
					num = 0;
				
					if (!Global_262145.f_29256)
						num = num + 1;
				
					if (Global_262145.f_24289)
						num = num + 1;
				
					if (Global_262145.f_24290)
						num = num + 1;
				
					if (Global_262145.f_24288)
						num = num + 1;
				
					if (!*Global_262145.f_33844)
						num = num + 1;
				
					if (!*Global_262145.f_33845)
						num = num + 1;
				
					if (!*Global_262145.f_33846)
						num = num + 1;
				
					if (!*Global_262145.f_33847)
						num = num + 6;
				
					if (!*Global_262145.f_33848)
						num = num + 2;
				
					if (!func_190())
						num = num + 1;
				
					if (!Global_262145.f_30338)
						iLocal_110 = iLocal_110 - 5;
				
					if (Global_262145.f_30395[0] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_30395[6] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35542)
						num = num + 1;
				
					if (!*Global_262145.f_35543)
						num = num + 1;
				
					if (!*Global_262145.f_35544)
						num = num + 1;
				
					if (!*Global_262145.f_35545)
						num = num + 1;
				
					if (!*Global_262145.f_35546)
						num = num + 1;
				
					if (!*Global_262145.f_35547)
						num = num + 1;
				
					if (!*Global_262145.f_35548)
						num = num + 1;
				
					if (!*Global_262145.f_35549)
						num = num + 1;
				
					if (!*Global_262145.f_35770)
						num = num + 1;
				
					if (!*Global_262145.f_35771)
						num = num + 1;
				
					if (!*Global_262145.f_36074)
						num = num + 1;
				
					if (!*Global_262145.f_36073)
						num = num + 1;
				
					if (!*Global_262145.f_36075)
						num = num + 4;
				
					if (!*Global_262145.f_36071)
						num = num + 2;
				
					if (!*Global_262145.f_36620)
						num = num + 11;
				
					if (!*Global_262145.f_37388)
						num = num + 2;
				
					if (!*Global_262145.f_37389)
						num = num + 3;
				
					iLocal_110 = iLocal_110 - num;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 1:
					iLocal_109 = 2;
					iLocal_110 = 7;
					iLocal_109 = 2;
					iLocal_110 = 9;
					break;
			
				case 2:
					iLocal_109 = 2;
					iLocal_110 = 4;
					break;
			
				case 3:
					iLocal_109 = 0;
					iLocal_110 = 8;
					break;
			
				case 4:
					iLocal_109 = 0;
					iLocal_110 = 12;
					break;
			
				case 5:
					iLocal_109 = 1;
					iLocal_110 = 11;
					iLocal_109 = 2;
					iLocal_110 = 2;
					break;
			
				case 6:
					if (func_189() || func_188() || MISC::IS_PC_VERSION())
					{
						iLocal_109 = 1;
						iLocal_110 = 8;
					}
					else
					{
						iLocal_109 = 1;
						iLocal_110 = 7;
					}
					break;
			
				case 8:
					iLocal_109 = 0;
					iLocal_110 = 8;
				
					if (Global_262145.f_23840 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23841 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23842 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23843 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23840 == false || Global_262145.f_23842 == false || Global_262145.f_23841 == false || Global_262145.f_23843 == false)
						iLocal_110 = iLocal_110 - 1;
					break;
			
				case 7:
					iLocal_109 = 0;
					iLocal_110 = 11;
					break;
			
				case 9:
					iLocal_109 = 3;
					iLocal_110 = 4;
					break;
			
				case 10:
					iLocal_109 = 0;
					iLocal_110 = 11;
					break;
			
				case 11:
					iLocal_109 = 2;
					iLocal_110 = 12;
					break;
			
				case 12:
					iLocal_109 = 0;
					iLocal_110 = 6;
					break;
			
				case 13:
					iLocal_109 = 2;
					iLocal_110 = 2;
					num = 0;
				
					if (!Global_262145.f_29256)
						num = num + 1;
				
					if (Global_262145.f_24289)
					{
						num = num + 1;
						num = num + 1;
					}
				
					if (Global_262145.f_24290)
					{
						num = num + 1;
						num = num + 1;
					}
				
					if (Global_262145.f_24288)
						num = num + 1;
				
					iLocal_110 = iLocal_110 - num;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 14:
					iLocal_109 = 1;
					iLocal_110 = 12;
				
					if (!Global_262145.f_30338)
						iLocal_110 = iLocal_110 - 5;
				
					if (Global_262145.f_30395[0] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_30395[6] == 0f)
						iLocal_110 = iLocal_110 - 1;
					break;
			
				case 15:
					iLocal_109 = 1;
					iLocal_110 = 7;
					break;
			
				case 16:
					iLocal_109 = 1;
					iLocal_110 = 12;
				
					if (!*Global_262145.f_33844)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33845)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33846)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33847)
						iLocal_110 = iLocal_110 - 6;
				
					if (!*Global_262145.f_33848)
						iLocal_110 = iLocal_110 - 2;
				
					if (!func_190())
						iLocal_110 = iLocal_110 - 1;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 17:
					iLocal_109 = 1;
					iLocal_110 = 8;
				
					if (!*Global_262145.f_35542)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35543)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35544)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35545)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35546)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35547)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35548)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35549)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35770)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35771)
						iLocal_110 = iLocal_110 - 1;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 18:
					iLocal_109 = 1;
					iLocal_110 = 6;
				
					if (!*Global_262145.f_36074)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_36073)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_36075)
						iLocal_110 = iLocal_110 - 4;
				
					if (!*Global_262145.f_36071)
						iLocal_110 = iLocal_110 - 2;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 19:
					iLocal_109 = 1;
					iLocal_110 = 8;
				
					if (!*Global_262145.f_36620)
					{
						iLocal_109 = 0;
						iLocal_110 = 9;
					}
					break;
			
				case 20:
					iLocal_109 = 1;
					iLocal_110 = 9;
				
					if (!*Global_262145.f_37388 && !*Global_262145.f_37389)
					{
						iLocal_109 = 1;
						iLocal_110 = 4;
					}
					else if (*Global_262145.f_37388 && !*Global_262145.f_37389)
					{
						iLocal_109 = 1;
						iLocal_110 = 6;
					}
					break;
			
				case 21:
					iLocal_109 = 4;
					iLocal_110 = 1;
					break;
			}
		
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_181(9, 8, num2, &Global_1672212);
							func_181(1, 8, num2, &Global_1672212);
							func_181(4, 8, num2, &Global_1672212);
							func_181(5, 8, num2, &Global_1672212);
							func_181(2, 8, num2, &Global_1672212);
							func_181(8, 8, num2, &Global_1672212);
							func_181(7, 8, num2, &Global_1672212);
							func_181(3, 8, num2, &Global_1672212);
							func_181(6, 8, num2, &Global_1672212);
							func_181(10, 8, num2, &Global_1672212);
							func_181(19, 8, num2, &Global_1672212);
							func_181(24, 8, num2, &Global_1672212);
							break;
					
						case 1:
							func_181(40, 8, num2, &Global_1672212);
							func_181(41, 8, num2, &Global_1672212);
							func_181(42, 8, num2, &Global_1672212);
							func_181(21, 8, num2, &Global_1672212);
							func_181(58, 8, num2, &Global_1672212);
							func_181(57, 8, num2, &Global_1672212);
							func_181(37, 8, num2, &Global_1672212);
							func_169(20, 8, num2, &Global_1672212);
							func_181(51, 8, num2, &Global_1672212);
							func_181(52, 8, num2, &Global_1672212);
							func_181(54, 8, num2, &Global_1672212);
							func_169(14, 8, num2, &Global_1672212);
							break;
					
						case 2:
							func_169(15, 8, num2, &Global_1672212);
							func_169(16, 8, num2, &Global_1672212);
							func_181(29, 8, num2, &Global_1672212);
							func_181(28, 8, num2, &Global_1672212);
							func_181(47, 8, num2, &Global_1672212);
							func_169(6, 8, num2, &Global_1672212);
							func_169(7, 8, num2, &Global_1672212);
							func_181(30, 8, num2, &Global_1672212);
							func_169(2, 8, num2, &Global_1672212);
							func_181(36, 8, num2, &Global_1672212);
							func_181(49, 8, num2, &Global_1672212);
							func_181(15, 8, num2, &Global_1672212);
							break;
					
						case 3:
							func_181(60, 8, num2, &Global_1672212);
							func_181(19, 8, num2, &Global_1672212);
							func_181(53, 8, num2, &Global_1672212);
							func_181(12, 8, num2, &Global_1672212);
							func_181(11, 8, num2, &Global_1672212);
							func_181(14, 8, num2, &Global_1672212);
							break;
					
						case 4:
							func_181(10, 8, num2, &Global_1672212);
							func_181(17, 8, num2, &Global_1672212);
							func_181(61, 8, num2, &Global_1672212);
							func_181(0, 8, num2, &Global_1672212);
							func_181(16, 8, num2, &Global_1672212);
							func_169(13, 8, num2, &Global_1672212);
							func_181(20, 8, num2, &Global_1672212);
							func_181(62, 8, num2, &Global_1672212);
							func_181(63, 8, num2, &Global_1672212);
							func_169(23, 8, num2, &Global_1672212);
							break;
					
						case 5:
							func_181(9, 8, num2, &Global_1672212);
							func_181(56, 8, num2, &Global_1672212);
							func_181(55, 8, num2, &Global_1672212);
							func_181(45, 8, num2, &Global_1672212);
							func_181(43, 8, num2, &Global_1672212);
							func_181(46, 8, num2, &Global_1672212);
							func_181(44, 8, num2, &Global_1672212);
							func_169(22, 8, num2, &Global_1672212);
							func_169(17, 8, num2, &Global_1672212);
							func_169(18, 8, num2, &Global_1672212);
							func_181(59, 8, num2, &Global_1672212);
							func_181(1, 8, num2, &Global_1672212);
							break;
					
						case 6:
							func_181(158, 8, num2, &Global_1672212);
							func_153(12, 8, num2, &Global_1672212);
							func_153(13, 8, num2, &Global_1672212);
							func_153(14, 8, num2, &Global_1672212);
							func_153(15, 8, num2, &Global_1672212);
							func_153(16, 8, num2, &Global_1672212);
							func_181(159, 8, num2, &Global_1672212);
							func_153(17, 8, num2, &Global_1672212);
							func_153(18, 8, num2, &Global_1672212);
							func_153(19, 8, num2, &Global_1672212);
							func_181(163, 8, num2, &Global_1672212);
							func_169(210, 8, num2, &Global_1672212);
							break;
					
						case 7:
							if (!Global_1672212.f_1[0])
							{
								func_153(1, 8, num2, &Global_1672212);
								func_153(2, 8, num2, &Global_1672212);
								func_153(6, 8, num2, &Global_1672212);
								func_153(3, 8, num2, &Global_1672212);
								func_153(7, 8, num2, &Global_1672212);
								func_153(8, 8, num2, &Global_1672212);
								func_153(4, 8, num2, &Global_1672212);
								func_153(9, 8, num2, &Global_1672212);
								func_153(10, 8, num2, &Global_1672212);
								func_153(5, 8, num2, &Global_1672212);
								func_153(11, 8, num2, &Global_1672212);
							}
							break;
					
						case 8:
							if (!Global_1672212.f_1[0])
							{
								func_181(181, 8, num2, &Global_1672212);
								func_169(215, 8, num2, &Global_1672212);
								func_169(216, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23840 == true)
									func_181(177, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23842 == true)
									func_181(178, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23841 == true)
									func_181(179, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23843 == true)
									func_181(180, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23840 == true && Global_262145.f_23842 == true && Global_262145.f_23841 == true && Global_262145.f_23843 == true)
									func_169(217, 8, num2, &Global_1672212);
							}
							break;
					
						case 9:
							if (!Global_1672212.f_1[0])
							{
								func_181(86, 8, num2, &Global_1672212);
								func_181(85, 8, num2, &Global_1672212);
								func_181(84, 8, num2, &Global_1672212);
								func_181(83, 8, num2, &Global_1672212);
								func_181(82, 8, num2, &Global_1672212);
								func_181(81, 8, num2, &Global_1672212);
								func_181(80, 8, num2, &Global_1672212);
								func_181(79, 8, num2, &Global_1672212);
								func_181(78, 8, num2, &Global_1672212);
								func_181(77, 8, num2, &Global_1672212);
								func_181(76, 8, num2, &Global_1672212);
								func_181(75, 8, num2, &Global_1672212);
							}
							break;
					
						case 10:
							if (!Global_1672212.f_1[0])
							{
								func_169(53, 8, num2, &Global_1672212);
								func_169(54, 8, num2, &Global_1672212);
								func_169(55, 8, num2, &Global_1672212);
								func_169(56, 8, num2, &Global_1672212);
								func_169(57, 8, num2, &Global_1672212);
								func_169(58, 8, num2, &Global_1672212);
								func_169(59, 8, num2, &Global_1672212);
								func_169(62, 8, num2, &Global_1672212);
								func_169(60, 8, num2, &Global_1672212);
								func_169(61, 8, num2, &Global_1672212);
								func_181(87, 8, num2, &Global_1672212);
							}
							break;
					
						case 11:
							if (!Global_1672212.f_1[0])
							{
								func_169(63, 8, num2, &Global_1672212);
								func_181(88, 8, num2, &Global_1672212);
								func_169(64, 8, num2, &Global_1672212);
								func_169(65, 8, num2, &Global_1672212);
								func_169(66, 8, num2, &Global_1672212);
								func_169(67, 8, num2, &Global_1672212);
								func_169(68, 8, num2, &Global_1672212);
								func_169(69, 8, num2, &Global_1672212);
								func_169(70, 8, num2, &Global_1672212);
								func_169(71, 8, num2, &Global_1672212);
								func_169(72, 8, num2, &Global_1672212);
								func_169(73, 8, num2, &Global_1672212);
							}
							break;
					
						case 12:
							if (!Global_1672212.f_1[0])
							{
								if (Global_262145.f_28814)
								{
									func_169(89, 8, num2, &Global_1672212);
									func_169(90, 8, num2, &Global_1672212);
									func_169(92, 8, num2, &Global_1672212);
									func_169(91, 8, num2, &Global_1672212);
									func_169(94, 8, num2, &Global_1672212);
									func_169(93, 8, num2, &Global_1672212);
								}
							}
							break;
					
						case 13:
							if (!Global_1672212.f_1[0])
							{
								func_169(95, 8, num2, &Global_1672212);
								func_169(96, 8, num2, &Global_1672212);
								func_181(106, 8, num2, &Global_1672212);
								func_169(97, 8, num2, &Global_1672212);
								func_169(98, 8, num2, &Global_1672212);
								func_169(99, 8, num2, &Global_1672212);
								func_169(100, 8, num2, &Global_1672212);
								func_169(101, 8, num2, &Global_1672212);
								func_169(102, 8, num2, &Global_1672212);
								func_169(103, 8, num2, &Global_1672212);
								func_169(104, 8, num2, &Global_1672212);
								func_169(105, 8, num2, &Global_1672212);
							}
							break;
					
						case 14:
							if (!Global_1672212.f_1[0])
							{
								func_169(113, 8, num2, &Global_1672212);
								func_181(107, 8, num2, &Global_1672212);
								func_181(108, 8, num2, &Global_1672212);
								func_181(109, 8, num2, &Global_1672212);
								func_181(110, 8, num2, &Global_1672212);
								func_181(111, 8, num2, &Global_1672212);
								func_181(112, 8, num2, &Global_1672212);
								func_181(113, 8, num2, &Global_1672212);
								func_169(114, 8, num2, &Global_1672212);
								func_181(114, 8, num2, &Global_1672212);
								func_169(117, 8, num2, &Global_1672212);
								func_169(116, 8, num2, &Global_1672212);
							}
							break;
					
						case 15:
							if (!Global_1672212.f_1[0])
							{
								func_169(127, 8, num2, &Global_1672212);
								func_169(128, 8, num2, &Global_1672212);
								func_169(129, 8, num2, &Global_1672212);
								func_169(130, 8, num2, &Global_1672212);
								func_169(131, 8, num2, &Global_1672212);
								func_169(132, 8, num2, &Global_1672212);
								func_169(133, 8, num2, &Global_1672212);
								func_169(134, 8, num2, &Global_1672212);
								func_169(140, 8, num2, &Global_1672212);
								func_169(135, 8, num2, &Global_1672212);
								func_169(141, 8, num2, &Global_1672212);
								func_169(136, 8, num2, &Global_1672212);
							}
							break;
					
						case 16:
							if (!Global_1672212.f_1[0])
							{
								func_169(143, 8, num2, &Global_1672212);
								func_169(144, 8, num2, &Global_1672212);
								func_169(145, 8, num2, &Global_1672212);
								func_169(146, 8, num2, &Global_1672212);
								func_181(120, 8, num2, &Global_1672212);
								func_169(147, 8, num2, &Global_1672212);
								func_169(148, 8, num2, &Global_1672212);
								func_181(121, 8, num2, &Global_1672212);
								func_169(149, 8, num2, &Global_1672212);
								func_169(150, 8, num2, &Global_1672212);
								func_181(122, 8, num2, &Global_1672212);
								func_169(151, 8, num2, &Global_1672212);
							}
							break;
					
						case 17:
							if (!Global_1672212.f_1[0])
							{
								func_169(159, 8, num2, &Global_1672212);
								func_169(160, 8, num2, &Global_1672212);
								func_169(162, 8, num2, &Global_1672212);
								func_169(164, 8, num2, &Global_1672212);
								func_169(165, 8, num2, &Global_1672212);
								func_181(128, 8, num2, &Global_1672212);
								func_181(129, 8, num2, &Global_1672212);
								func_181(130, 8, num2, &Global_1672212);
								func_181(131, 8, num2, &Global_1672212);
								func_181(132, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35771)
									func_169(163, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35770)
									func_169(161, 8, num2, &Global_1672212);
							}
							break;
					
						case 18:
							if (!Global_1672212.f_1[0])
							{
								func_169(174, 8, num2, &Global_1672212);
								func_169(175, 8, num2, &Global_1672212);
								func_169(176, 8, num2, &Global_1672212);
								func_169(177, 8, num2, &Global_1672212);
								func_169(178, 8, num2, &Global_1672212);
								func_169(179, 8, num2, &Global_1672212);
								func_181(133, 8, num2, &Global_1672212);
								func_181(134, 8, num2, &Global_1672212);
								func_181(135, 8, num2, &Global_1672212);
								func_181(136, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36073)
									func_181(137, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36074)
									func_181(138, 8, num2, &Global_1672212);
							}
							break;
					
						case 19:
							if (!Global_1672212.f_1[0])
							{
								func_169(183, 8, num2, &Global_1672212);
								func_169(184, 8, num2, &Global_1672212);
								func_169(185, 8, num2, &Global_1672212);
								func_169(186, 8, num2, &Global_1672212);
								func_169(187, 8, num2, &Global_1672212);
								func_181(142, 8, num2, &Global_1672212);
								func_181(143, 8, num2, &Global_1672212);
								func_181(144, 8, num2, &Global_1672212);
								func_181(145, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36620)
								{
									func_169(188, 8, num2, &Global_1672212);
									func_169(189, 8, num2, &Global_1672212);
									func_169(190, 8, num2, &Global_1672212);
								}
							}
							break;
					
						case 20:
							func_169(196, 8, num2, &Global_1672212);
							func_181(150, 8, num2, &Global_1672212);
							func_169(197, 8, num2, &Global_1672212);
							func_169(198, 8, num2, &Global_1672212);
							func_169(199, 8, num2, &Global_1672212);
							func_169(200, 8, num2, &Global_1672212);
							func_169(201, 8, num2, &Global_1672212);
							func_169(202, 8, num2, &Global_1672212);
							func_169(203, 8, num2, &Global_1672212);
							func_181(151, 8, num2, &Global_1672212);
							func_181(152, 8, num2, &Global_1672212);
							func_169(204, 8, num2, &Global_1672212);
							break;
					
						case 21:
							func_147(4, 8, num2, &Global_1672212);
							func_147(2, 8, num2, &Global_1672212);
							func_147(7, 8, num2, &Global_1672212);
							func_147(0, 8, num2, &Global_1672212);
							func_147(6, 8, num2, &Global_1672212);
							func_147(8, 8, num2, &Global_1672212);
							func_147(5, 8, num2, &Global_1672212);
							func_147(1, 8, num2, &Global_1672212);
							func_147(54, 8, num2, &Global_1672212);
							func_147(57, 8, num2, &Global_1672212);
							func_147(58, 8, num2, &Global_1672212);
							func_147(59, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_181(17, 8, num2, &Global_1672212);
							func_181(12, 8, num2, &Global_1672212);
							func_181(40, 8, num2, &Global_1672212);
							func_181(31, 8, num2, &Global_1672212);
							func_181(37, 8, num2, &Global_1672212);
							func_181(34, 8, num2, &Global_1672212);
							func_181(33, 8, num2, &Global_1672212);
							func_181(32, 8, num2, &Global_1672212);
							func_181(41, 8, num2, &Global_1672212);
							func_181(35, 8, num2, &Global_1672212);
							func_181(63, 8, num2, &Global_1672212);
							func_135(1, 8, num2, &Global_1672212);
							break;
					
						case 1:
							func_181(39, 8, num2, &Global_1672212);
							func_169(11, 8, num2, &Global_1672212);
							func_181(38, 8, num2, &Global_1672212);
							func_169(10, 8, num2, &Global_1672212);
							func_181(48, 8, num2, &Global_1672212);
							func_181(22, 8, num2, &Global_1672212);
							func_181(23, 8, num2, &Global_1672212);
							func_181(31, 8, num2, &Global_1672212);
							func_181(35, 8, num2, &Global_1672212);
							func_169(4, 8, num2, &Global_1672212);
							func_169(5, 8, num2, &Global_1672212);
							func_181(32, 8, num2, &Global_1672212);
							break;
					
						case 2:
							if (!Global_1672212.f_1[0])
							{
								func_169(12, 8, num2, &Global_1672212);
								func_181(27, 8, num2, &Global_1672212);
								func_169(0, 8, num2, &Global_1672212);
								func_169(21, 8, num2, &Global_1672212);
								func_135(1, 8, num2, &Global_1672212);
								func_135(0, 8, num2, &Global_1672212);
								func_135(3, 8, num2, &Global_1672212);
								func_135(2, 8, num2, &Global_1672212);
								func_181(165, 8, num2, &Global_1672212);
								func_181(166, 8, num2, &Global_1672212);
								func_181(172, 8, num2, &Global_1672212);
								func_169(214, 8, num2, &Global_1672212);
							}
							break;
					
						case 5:
							if (!Global_1672212.f_1[0])
							{
								func_181(5, 8, num2, &Global_1672212);
								func_181(4, 8, num2, &Global_1672212);
								func_181(25, 8, num2, &Global_1672212);
								func_181(2, 8, num2, &Global_1672212);
								func_181(26, 8, num2, &Global_1672212);
								func_181(7, 8, num2, &Global_1672212);
								func_181(3, 8, num2, &Global_1672212);
								func_181(6, 8, num2, &Global_1672212);
								func_181(8, 8, num2, &Global_1672212);
								func_181(24, 8, num2, &Global_1672212);
								func_181(167, 8, num2, &Global_1672212);
								func_181(169, 8, num2, &Global_1672212);
							}
							break;
					
						case 6:
							if (!Global_1672212.f_1[0])
							{
								func_181(161, 8, num2, &Global_1672212);
								func_181(160, 8, num2, &Global_1672212);
								func_169(212, 8, num2, &Global_1672212);
								func_169(209, 8, num2, &Global_1672212);
								func_169(213, 8, num2, &Global_1672212);
								func_181(170, 8, num2, &Global_1672212);
								func_153(21, 8, num2, &Global_1672212);
							
								if (func_189() || func_188() || MISC::IS_PC_VERSION())
									func_153(20, 8, num2, &Global_1672212);
							}
							break;
					
						case 9:
							if (!Global_1672212.f_1[0])
							{
								func_181(74, 8, num2, &Global_1672212);
								func_181(73, 8, num2, &Global_1672212);
								func_181(72, 8, num2, &Global_1672212);
								func_169(52, 8, num2, &Global_1672212);
								func_169(51, 8, num2, &Global_1672212);
								func_181(71, 8, num2, &Global_1672212);
								func_181(70, 8, num2, &Global_1672212);
								func_169(50, 8, num2, &Global_1672212);
								func_169(30, 8, num2, &Global_1672212);
								func_169(31, 8, num2, &Global_1672212);
								func_169(32, 8, num2, &Global_1672212);
								func_169(33, 8, num2, &Global_1672212);
							}
							break;
					
						case 11:
							if (!Global_1672212.f_1[0])
							{
								func_169(74, 8, num2, &Global_1672212);
								func_169(75, 8, num2, &Global_1672212);
								func_181(89, 8, num2, &Global_1672212);
								func_181(90, 8, num2, &Global_1672212);
								func_181(91, 8, num2, &Global_1672212);
								func_169(76, 8, num2, &Global_1672212);
								func_169(77, 8, num2, &Global_1672212);
								func_169(78, 8, num2, &Global_1672212);
								func_181(92, 8, num2, &Global_1672212);
								func_181(93, 8, num2, &Global_1672212);
								func_169(79, 8, num2, &Global_1672212);
								func_169(80, 8, num2, &Global_1672212);
							}
							break;
					
						case 13:
							if (!Global_1672212.f_1[0])
							{
								func_181(105, 8, num2, &Global_1672212);
								func_169(106, 8, num2, &Global_1672212);
								func_169(107, 8, num2, &Global_1672212);
								func_169(108, 8, num2, &Global_1672212);
								func_181(101, 8, num2, &Global_1672212);
								func_169(111, 8, num2, &Global_1672212);
								func_181(99, 8, num2, &Global_1672212);
								func_169(112, 8, num2, &Global_1672212);
							
								if (!Global_262145.f_24288)
									func_181(104, 8, num2, &Global_1672212);
							
								if (!Global_262145.f_24290)
								{
									func_181(103, 8, num2, &Global_1672212);
									func_169(109, 8, num2, &Global_1672212);
								}
							
								if (!Global_262145.f_24289)
									func_181(102, 8, num2, &Global_1672212);
							}
							break;
					
						case 14:
							if (!Global_1672212.f_1[0])
							{
								if (Global_262145.f_30395[0] != 0f)
									func_169(115, 8, num2, &Global_1672212);
							
								func_169(118, 8, num2, &Global_1672212);
								func_169(119, 8, num2, &Global_1672212);
								func_169(120, 8, num2, &Global_1672212);
							
								if (Global_262145.f_30395[6] != 0f)
									func_169(121, 8, num2, &Global_1672212);
							
								func_169(122, 8, num2, &Global_1672212);
								func_181(115, 8, num2, &Global_1672212);
							
								if (Global_262145.f_30338)
								{
									func_181(116, 8, num2, &Global_1672212);
									func_169(123, 8, num2, &Global_1672212);
									func_169(124, 8, num2, &Global_1672212);
									func_169(125, 8, num2, &Global_1672212);
									func_169(126, 8, num2, &Global_1672212);
								}
							}
							break;
					
						case 15:
							if (!Global_1672212.f_1[0])
							{
								func_169(142, 8, num2, &Global_1672212);
								func_181(117, 8, num2, &Global_1672212);
								func_181(118, 8, num2, &Global_1672212);
								func_169(137, 8, num2, &Global_1672212);
								func_169(138, 8, num2, &Global_1672212);
								func_169(139, 8, num2, &Global_1672212);
								func_181(119, 8, num2, &Global_1672212);
							}
							break;
					
						case 16:
							if (!Global_1672212.f_1[0])
							{
								if (*Global_262145.f_33844)
									func_181(123, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33845)
									func_181(124, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33846)
									func_181(125, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33847)
								{
									func_169(152, 8, num2, &Global_1672212);
									func_169(153, 8, num2, &Global_1672212);
									func_169(154, 8, num2, &Global_1672212);
									func_169(155, 8, num2, &Global_1672212);
								}
							
								if (func_190())
									func_181(126, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33847)
								{
									func_169(156, 8, num2, &Global_1672212);
									func_169(157, 8, num2, &Global_1672212);
								}
							
								if (*Global_262145.f_33848)
								{
									func_181(127, 8, num2, &Global_1672212);
									func_169(158, 8, num2, &Global_1672212);
								}
							}
							break;
					
						case 17:
							if (*Global_262145.f_35542)
								func_169(166, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35543)
								func_169(167, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35544)
								func_169(168, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35545)
								func_169(169, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35546)
								func_169(170, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35547)
								func_169(171, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35548)
								func_169(172, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_35549)
								func_169(173, 8, num2, &Global_1672212);
							break;
					
						case 18:
							if (*Global_262145.f_36075)
							{
								func_169(180, 8, num2, &Global_1672212);
								func_169(181, 8, num2, &Global_1672212);
								func_181(139, 8, num2, &Global_1672212);
								func_181(140, 8, num2, &Global_1672212);
							}
						
							if (*Global_262145.f_36071)
							{
								func_181(141, 8, num2, &Global_1672212);
								func_169(182, 8, num2, &Global_1672212);
							}
							break;
					
						case 19:
							if (*Global_262145.f_36620)
							{
								func_181(146, 8, num2, &Global_1672212);
								func_169(191, 8, num2, &Global_1672212);
								func_169(192, 8, num2, &Global_1672212);
								func_169(193, 8, num2, &Global_1672212);
								func_181(147, 8, num2, &Global_1672212);
								func_169(194, 8, num2, &Global_1672212);
								func_169(195, 8, num2, &Global_1672212);
								func_181(149, 8, num2, &Global_1672212);
							}
							break;
					
						case 20:
							func_169(205, 8, num2, &Global_1672212);
							func_181(153, 8, num2, &Global_1672212);
							func_181(154, 8, num2, &Global_1672212);
							func_169(206, 8, num2, &Global_1672212);
						
							if (*Global_262145.f_37388)
							{
								func_181(155, 8, num2, &Global_1672212);
								func_169(207, 8, num2, &Global_1672212);
							}
						
							if (*Global_262145.f_37389)
							{
								func_181(156, 8, num2, &Global_1672212);
								func_169(208, 8, num2, &Global_1672212);
								func_181(157, 8, num2, &Global_1672212);
							}
							break;
					
						case 21:
							func_147(60, 8, num2, &Global_1672212);
							func_147(12, 8, num2, &Global_1672212);
							func_147(56, 8, num2, &Global_1672212);
							func_147(55, 8, num2, &Global_1672212);
							func_147(25, 8, num2, &Global_1672212);
							func_147(34, 8, num2, &Global_1672212);
							func_147(45, 8, num2, &Global_1672212);
							func_147(48, 8, num2, &Global_1672212);
							func_147(49, 8, num2, &Global_1672212);
							func_147(65, 8, num2, &Global_1672212);
							func_147(46, 8, num2, &Global_1672212);
							func_147(9, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_181(48, 8, num2, &Global_1672212);
							func_181(14, 8, num2, &Global_1672212);
							func_181(25, 8, num2, &Global_1672212);
							func_181(26, 8, num2, &Global_1672212);
							func_181(15, 8, num2, &Global_1672212);
							func_181(22, 8, num2, &Global_1672212);
							func_181(27, 8, num2, &Global_1672212);
							func_181(21, 8, num2, &Global_1672212);
							func_181(11, 8, num2, &Global_1672212);
							func_181(62, 8, num2, &Global_1672212);
							func_181(23, 8, num2, &Global_1672212);
							func_181(0, 8, num2, &Global_1672212);
							break;
					
						case 1:
							if (!Global_1672212.f_1[0])
							{
								func_181(34, 8, num2, &Global_1672212);
								func_169(3, 8, num2, &Global_1672212);
								func_181(33, 8, num2, &Global_1672212);
								func_169(8, 8, num2, &Global_1672212);
								func_181(173, 8, num2, &Global_1672212);
								func_181(174, 8, num2, &Global_1672212);
								func_181(175, 8, num2, &Global_1672212);
								func_181(164, 8, num2, &Global_1672212);
								func_181(168, 8, num2, &Global_1672212);
							}
							break;
					
						case 2:
							if (!Global_1672212.f_1[0])
							{
								func_181(176, 8, num2, &Global_1672212);
								func_181(67, 8, num2, &Global_1672212);
								func_169(25, 8, num2, &Global_1672212);
								func_169(26, 8, num2, &Global_1672212);
							}
							break;
					
						case 5:
							if (!Global_1672212.f_1[0])
								func_181(171, 8, num2, &Global_1672212);
							break;
					
						case 9:
							if (!Global_1672212.f_1[0])
							{
								func_169(34, 8, num2, &Global_1672212);
								func_169(35, 8, num2, &Global_1672212);
								func_169(36, 8, num2, &Global_1672212);
								func_169(37, 8, num2, &Global_1672212);
								func_169(38, 8, num2, &Global_1672212);
								func_169(39, 8, num2, &Global_1672212);
								func_169(40, 8, num2, &Global_1672212);
								func_169(41, 8, num2, &Global_1672212);
								func_169(42, 8, num2, &Global_1672212);
								func_169(43, 8, num2, &Global_1672212);
								func_169(44, 8, num2, &Global_1672212);
								func_169(45, 8, num2, &Global_1672212);
							}
							break;
					
						case 11:
							if (!Global_1672212.f_1[0])
							{
								func_169(81, 8, num2, &Global_1672212);
								func_181(94, 8, num2, &Global_1672212);
								func_181(95, 8, num2, &Global_1672212);
								func_169(82, 8, num2, &Global_1672212);
								func_169(83, 8, num2, &Global_1672212);
								func_181(96, 8, num2, &Global_1672212);
								func_169(84, 8, num2, &Global_1672212);
								func_169(85, 8, num2, &Global_1672212);
								func_181(97, 8, num2, &Global_1672212);
								func_169(86, 8, num2, &Global_1672212);
								func_169(87, 8, num2, &Global_1672212);
								func_169(88, 8, num2, &Global_1672212);
							}
							break;
					
						case 13:
							if (!Global_1672212.f_1[0])
							{
								if (!Global_262145.f_24289)
									func_169(110, 8, num2, &Global_1672212);
							
								if (Global_262145.f_29256)
									func_181(100, 8, num2, &Global_1672212);
							}
							break;
					
						case 21:
							if (!Global_1672212.f_1[0])
							{
								func_147(10, 8, num2, &Global_1672212);
								func_147(11, 8, num2, &Global_1672212);
								func_147(87, 8, num2, &Global_1672212);
								func_147(89, 8, num2, &Global_1672212);
								type = PV_COMP_HEAD;
							
								if (_STAT_GET_PACKED_BOOL(3608, -1))
									type = PV_COMP_BERD;
							
								func_130("CLO_LTS_T_0", "CLO_LTS_TD_0", "Elitas_Tshirt", "MPTshirtAwardLTS", PV_COMP_BERD, type, -1, 1, &Global_1672212, 218, 182);
								func_127(0);
								func_127(1);
								func_127(2);
								type = PV_COMP_HEAD;
							
								if (func_119(4))
									type = PV_COMP_BERD;
							
								func_130("CLO_HST_A_4", "CLO_HST_AD_5", "CantTouchThis", "MPTShirtAwards2", PV_COMP_BERD, type, -1, 1, &Global_1672212, 218, 182);
								func_127(5);
								func_127(7);
								func_127(6);
							}
							break;
					}
					break;
			
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_181(16, 8, num2, &Global_1672212);
							func_181(45, 8, num2, &Global_1672212);
							func_181(43, 8, num2, &Global_1672212);
							func_181(46, 8, num2, &Global_1672212);
							func_181(44, 8, num2, &Global_1672212);
							func_181(30, 8, num2, &Global_1672212);
							func_169(2, 8, num2, &Global_1672212);
							func_181(39, 8, num2, &Global_1672212);
							func_181(38, 8, num2, &Global_1672212);
							func_169(3, 8, num2, &Global_1672212);
							func_181(42, 8, num2, &Global_1672212);
							func_181(36, 8, num2, &Global_1672212);
							break;
					
						case 1:
							!Global_1672212.f_1[0];
							break;
					
						case 9:
							if (!Global_1672212.f_1[0])
							{
								func_169(46, 8, num2, &Global_1672212);
								func_169(47, 8, num2, &Global_1672212);
								func_169(48, 8, num2, &Global_1672212);
								func_169(49, 8, num2, &Global_1672212);
							}
							break;
					
						case 21:
							func_127(8);
							type = PV_COMP_HEAD;
						
							if (func_119(9))
								type = PV_COMP_BERD;
						
							func_130("CLO_HST_A_9", "CLO_HST_AD_9", "Showroom", "MPTShirtAwards2", PV_COMP_BERD, type, -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_0", "CHR_HST_AD_0", "SportMod", "MPAwardMods", func_118(164, 5, 0), func_116(164, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_1", "CHR_HST_AD_1", "LowriderMod", "MPAwardMods", func_118(165, 5, 0), func_116(165, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_2", "CHR_HST_AD_2", "OffroadMod", "MPAwardMods", func_118(167, 5, 0), func_116(167, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_3", "CHR_HST_AD_3", "HighendMod", "MPAwardMods", func_118(158, 5, 0), func_116(158, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_4", "CHR_HST_AD_4", "TunerMod", "MPAwardMods", func_118(159, 5, 0), func_116(159, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_5", "CHR_HST_AD_5", "BikeMod", "MPAwardMods", func_118(169, 5, 0), func_116(169, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_6", "CHR_HST_AD_6", "SUVMod", "MPAwardMods", func_118(173, 5, 0), func_116(173, -1), -1, 1, &Global_1672212, 218, 182);
							func_130("CHR_HST_A_7", "CHR_HST_AD_7", "MuscleMod", "MPAwardMods", func_118(174, 5, 0), func_116(174, -1), -1, 1, &Global_1672212, 218, 182);
							func_127(34);
							func_130("CLO_S1M_DEC_25", "CLO_S1M_D_24_25" /*Complete all the Lowriders Lamar missions.*/, "BennyTshirt01", "MPTShirtAwards4", PV_COMP_ACCS, type, -1, 1, &Global_1672212, 218, 182);
							break;
					}
					break;
			
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_169(15, 8, num2, &Global_1672212);
							func_169(4, 8, num2, &Global_1672212);
							func_169(5, 8, num2, &Global_1672212);
							func_169(7, 8, num2, &Global_1672212);
							func_169(6, 8, num2, &Global_1672212);
							func_181(29, 8, num2, &Global_1672212);
							func_181(28, 8, num2, &Global_1672212);
							func_181(20, 8, num2, &Global_1672212);
							func_169(0, 8, num2, &Global_1672212);
							func_169(8, 8, num2, &Global_1672212);
							func_181(61, 8, num2, &Global_1672212);
							func_135(3, 8, num2, &Global_1672212);
							break;
					
						case 21:
							if (!Global_1672212.f_1[0])
							{
								if (func_115(2934, -1) == 1)
								{
									type = PV_COMP_ACCS;
								}
								else
								{
									type = func_42(0);
								
									if (type > PV_COMP_HEAD)
										type = type - 1;
								}
							
								func_130("CLO_S1M_DEC_24", "CLO_S1M_D_24_25" /*Complete all the Lowriders Lamar missions.*/, "BennyTshirt02", "MPTShirtAwards4", PV_COMP_ACCS, type, -1, 1, &Global_1672212, 218, 182);
							}
							break;
					}
					break;
			
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_169(22, 8, num2, &Global_1672212);
							func_169(17, 8, num2, &Global_1672212);
							func_169(18, 8, num2, &Global_1672212);
							func_135(2, 8, num2, &Global_1672212);
							func_135(0, 8, num2, &Global_1672212);
							func_169(16, 8, num2, &Global_1672212);
							func_169(12, 8, num2, &Global_1672212);
							func_169(13, 8, num2, &Global_1672212);
							func_181(55, 8, num2, &Global_1672212);
							func_181(56, 8, num2, &Global_1672212);
							func_181(53, 8, num2, &Global_1672212);
							func_169(20, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_169(10, 8, num2, &Global_1672212);
							func_169(21, 8, num2, &Global_1672212);
							func_181(60, 8, num2, &Global_1672212);
							func_169(11, 8, num2, &Global_1672212);
							func_181(51, 8, num2, &Global_1672212);
							func_181(52, 8, num2, &Global_1672212);
							func_181(59, 8, num2, &Global_1672212);
							func_181(58, 8, num2, &Global_1672212);
							func_169(14, 8, num2, &Global_1672212);
							func_181(54, 8, num2, &Global_1672212);
							func_181(57, 8, num2, &Global_1672212);
							func_181(47, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(23, 8, num2, &Global_1672212);
								func_181(49, 8, num2, &Global_1672212);
								func_181(164, 8, num2, &Global_1672212);
								func_181(165, 8, num2, &Global_1672212);
								func_181(166, 8, num2, &Global_1672212);
								func_181(167, 8, num2, &Global_1672212);
								func_181(168, 8, num2, &Global_1672212);
								func_181(158, 8, num2, &Global_1672212);
								func_181(159, 8, num2, &Global_1672212);
								func_181(160, 8, num2, &Global_1672212);
								func_181(161, 8, num2, &Global_1672212);
								func_169(210, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(163, 8, num2, &Global_1672212);
								func_169(209, 8, num2, &Global_1672212);
								func_181(169, 8, num2, &Global_1672212);
								func_169(213, 8, num2, &Global_1672212);
								func_181(170, 8, num2, &Global_1672212);
								func_181(171, 8, num2, &Global_1672212);
								func_181(172, 8, num2, &Global_1672212);
								func_181(173, 8, num2, &Global_1672212);
								func_181(174, 8, num2, &Global_1672212);
								func_181(175, 8, num2, &Global_1672212);
								func_169(214, 8, num2, &Global_1672212);
								func_181(176, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(212, 8, num2, &Global_1672212);
								func_153(12, 8, num2, &Global_1672212);
								func_153(13, 8, num2, &Global_1672212);
								func_153(14, 8, num2, &Global_1672212);
								func_153(15, 8, num2, &Global_1672212);
								func_153(16, 8, num2, &Global_1672212);
								func_153(17, 8, num2, &Global_1672212);
								func_153(18, 8, num2, &Global_1672212);
								func_153(19, 8, num2, &Global_1672212);
							
								if (!Global_262145.f_9094)
								{
									func_181(67, 8, num2, &Global_1672212);
									func_169(25, 8, num2, &Global_1672212);
									func_169(26, 8, num2, &Global_1672212);
								}
							}
							break;
					}
					break;
			
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_153(21, 8, num2, &Global_1672212);
							
								if (func_189() || func_188() || MISC::IS_PC_VERSION())
									func_153(20, 8, num2, &Global_1672212);
							
								func_153(1, 8, num2, &Global_1672212);
								func_153(2, 8, num2, &Global_1672212);
								func_153(6, 8, num2, &Global_1672212);
								func_153(3, 8, num2, &Global_1672212);
								func_153(7, 8, num2, &Global_1672212);
								func_153(8, 8, num2, &Global_1672212);
								func_153(4, 8, num2, &Global_1672212);
								func_153(9, 8, num2, &Global_1672212);
								func_153(10, 8, num2, &Global_1672212);
								func_153(5, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_153(11, 8, num2, &Global_1672212);
								func_181(181, 8, num2, &Global_1672212);
								func_169(215, 8, num2, &Global_1672212);
								func_169(216, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23840 == true)
									func_181(177, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23842 == true)
									func_181(178, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23841 == true)
									func_181(179, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23843 == true)
									func_181(180, 8, num2, &Global_1672212);
							
								if (Global_262145.f_23840 == true && Global_262145.f_23842 == true && Global_262145.f_23841 == true && Global_262145.f_23843 == true)
									func_169(217, 8, num2, &Global_1672212);
							
								func_181(86, 8, num2, &Global_1672212);
								func_181(85, 8, num2, &Global_1672212);
								func_181(84, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(83, 8, num2, &Global_1672212);
								func_181(82, 8, num2, &Global_1672212);
								func_181(81, 8, num2, &Global_1672212);
								func_181(80, 8, num2, &Global_1672212);
								func_181(79, 8, num2, &Global_1672212);
								func_181(78, 8, num2, &Global_1672212);
								func_181(77, 8, num2, &Global_1672212);
								func_181(76, 8, num2, &Global_1672212);
								func_181(75, 8, num2, &Global_1672212);
								func_181(74, 8, num2, &Global_1672212);
								func_181(73, 8, num2, &Global_1672212);
								func_181(72, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(52, 8, num2, &Global_1672212);
								func_169(51, 8, num2, &Global_1672212);
								func_181(71, 8, num2, &Global_1672212);
								func_181(70, 8, num2, &Global_1672212);
								func_169(50, 8, num2, &Global_1672212);
								func_169(30, 8, num2, &Global_1672212);
								func_169(31, 8, num2, &Global_1672212);
								func_169(32, 8, num2, &Global_1672212);
								func_169(33, 8, num2, &Global_1672212);
								func_169(34, 8, num2, &Global_1672212);
								func_169(35, 8, num2, &Global_1672212);
								func_169(36, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(37, 8, num2, &Global_1672212);
								func_169(38, 8, num2, &Global_1672212);
								func_169(39, 8, num2, &Global_1672212);
								func_169(40, 8, num2, &Global_1672212);
								func_169(41, 8, num2, &Global_1672212);
								func_169(42, 8, num2, &Global_1672212);
								func_169(43, 8, num2, &Global_1672212);
								func_169(44, 8, num2, &Global_1672212);
								func_169(45, 8, num2, &Global_1672212);
								func_169(46, 8, num2, &Global_1672212);
								func_169(47, 8, num2, &Global_1672212);
								func_169(48, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
								func_169(49, 8, num2, &Global_1672212);
						
							func_169(53, 8, num2, &Global_1672212);
							func_169(54, 8, num2, &Global_1672212);
							func_169(55, 8, num2, &Global_1672212);
							func_169(56, 8, num2, &Global_1672212);
							func_169(57, 8, num2, &Global_1672212);
							func_169(58, 8, num2, &Global_1672212);
							func_169(59, 8, num2, &Global_1672212);
							func_169(62, 8, num2, &Global_1672212);
							func_169(60, 8, num2, &Global_1672212);
							func_169(61, 8, num2, &Global_1672212);
							func_181(87, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_181(88, 8, num2, &Global_1672212);
							func_181(89, 8, num2, &Global_1672212);
							func_181(90, 8, num2, &Global_1672212);
							func_181(91, 8, num2, &Global_1672212);
							func_181(92, 8, num2, &Global_1672212);
							func_181(93, 8, num2, &Global_1672212);
							func_181(94, 8, num2, &Global_1672212);
							func_181(95, 8, num2, &Global_1672212);
							func_181(96, 8, num2, &Global_1672212);
							func_181(97, 8, num2, &Global_1672212);
							func_169(63, 8, num2, &Global_1672212);
							func_169(64, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_169(65, 8, num2, &Global_1672212);
							func_169(66, 8, num2, &Global_1672212);
							func_169(67, 8, num2, &Global_1672212);
							func_169(68, 8, num2, &Global_1672212);
							func_169(69, 8, num2, &Global_1672212);
							func_169(70, 8, num2, &Global_1672212);
							func_169(71, 8, num2, &Global_1672212);
							func_169(72, 8, num2, &Global_1672212);
							func_169(73, 8, num2, &Global_1672212);
							func_169(74, 8, num2, &Global_1672212);
							func_169(75, 8, num2, &Global_1672212);
							func_169(76, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_169(77, 8, num2, &Global_1672212);
							func_169(78, 8, num2, &Global_1672212);
							func_169(79, 8, num2, &Global_1672212);
							func_169(80, 8, num2, &Global_1672212);
							func_169(81, 8, num2, &Global_1672212);
							func_169(82, 8, num2, &Global_1672212);
							func_169(83, 8, num2, &Global_1672212);
							func_169(84, 8, num2, &Global_1672212);
							func_169(85, 8, num2, &Global_1672212);
							func_169(86, 8, num2, &Global_1672212);
							func_169(87, 8, num2, &Global_1672212);
							func_169(88, 8, num2, &Global_1672212);
							break;
					}
					break;
			
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								if (Global_262145.f_28814)
								{
									func_169(89, 8, num2, &Global_1672212);
									func_169(90, 8, num2, &Global_1672212);
									func_169(92, 8, num2, &Global_1672212);
									func_169(91, 8, num2, &Global_1672212);
									func_169(94, 8, num2, &Global_1672212);
									func_169(93, 8, num2, &Global_1672212);
								}
							
								func_169(95, 8, num2, &Global_1672212);
								func_169(96, 8, num2, &Global_1672212);
								func_181(106, 8, num2, &Global_1672212);
								func_169(97, 8, num2, &Global_1672212);
								func_169(98, 8, num2, &Global_1672212);
								func_169(99, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(100, 8, num2, &Global_1672212);
								func_169(101, 8, num2, &Global_1672212);
								func_169(102, 8, num2, &Global_1672212);
								func_169(103, 8, num2, &Global_1672212);
								func_169(104, 8, num2, &Global_1672212);
								func_169(105, 8, num2, &Global_1672212);
								func_181(105, 8, num2, &Global_1672212);
								func_169(106, 8, num2, &Global_1672212);
								func_169(107, 8, num2, &Global_1672212);
								func_169(108, 8, num2, &Global_1672212);
								func_181(101, 8, num2, &Global_1672212);
								func_169(111, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(99, 8, num2, &Global_1672212);
								func_169(112, 8, num2, &Global_1672212);
							
								if (!Global_262145.f_24288)
									func_181(104, 8, num2, &Global_1672212);
							
								if (!Global_262145.f_24290)
								{
									func_169(109, 8, num2, &Global_1672212);
									func_181(103, 8, num2, &Global_1672212);
								}
							
								if (!Global_262145.f_24289)
								{
									func_169(110, 8, num2, &Global_1672212);
									func_181(102, 8, num2, &Global_1672212);
								}
							
								if (Global_262145.f_29256)
									func_181(100, 8, num2, &Global_1672212);
							
								func_169(113, 8, num2, &Global_1672212);
								func_181(107, 8, num2, &Global_1672212);
								func_181(108, 8, num2, &Global_1672212);
								func_181(109, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(110, 8, num2, &Global_1672212);
								func_181(111, 8, num2, &Global_1672212);
								func_181(112, 8, num2, &Global_1672212);
								func_181(113, 8, num2, &Global_1672212);
								func_169(114, 8, num2, &Global_1672212);
								func_181(114, 8, num2, &Global_1672212);
								func_169(116, 8, num2, &Global_1672212);
								func_169(117, 8, num2, &Global_1672212);
								func_169(118, 8, num2, &Global_1672212);
								func_169(119, 8, num2, &Global_1672212);
								func_169(120, 8, num2, &Global_1672212);
								func_169(122, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								if (Global_262145.f_30395[0] != 0f)
									func_169(115, 8, num2, &Global_1672212);
							
								if (Global_262145.f_30395[6] != 0f)
									func_169(121, 8, num2, &Global_1672212);
							
								func_181(115, 8, num2, &Global_1672212);
							
								if (Global_262145.f_30338)
								{
									func_181(116, 8, num2, &Global_1672212);
									func_169(123, 8, num2, &Global_1672212);
									func_169(124, 8, num2, &Global_1672212);
									func_169(125, 8, num2, &Global_1672212);
									func_169(126, 8, num2, &Global_1672212);
								}
							
								func_169(127, 8, num2, &Global_1672212);
								func_169(128, 8, num2, &Global_1672212);
								func_169(129, 8, num2, &Global_1672212);
								func_169(130, 8, num2, &Global_1672212);
								func_169(131, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(132, 8, num2, &Global_1672212);
								func_169(133, 8, num2, &Global_1672212);
								func_169(134, 8, num2, &Global_1672212);
								func_169(140, 8, num2, &Global_1672212);
								func_169(135, 8, num2, &Global_1672212);
								func_169(141, 8, num2, &Global_1672212);
								func_169(136, 8, num2, &Global_1672212);
								func_169(142, 8, num2, &Global_1672212);
								func_181(117, 8, num2, &Global_1672212);
								func_181(118, 8, num2, &Global_1672212);
								func_169(137, 8, num2, &Global_1672212);
								func_169(138, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(139, 8, num2, &Global_1672212);
								func_181(119, 8, num2, &Global_1672212);
								func_169(143, 8, num2, &Global_1672212);
								func_169(144, 8, num2, &Global_1672212);
								func_169(145, 8, num2, &Global_1672212);
								func_169(146, 8, num2, &Global_1672212);
								func_181(120, 8, num2, &Global_1672212);
								func_169(147, 8, num2, &Global_1672212);
								func_169(148, 8, num2, &Global_1672212);
								func_181(121, 8, num2, &Global_1672212);
								func_169(149, 8, num2, &Global_1672212);
								func_169(150, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 26:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(122, 8, num2, &Global_1672212);
								func_169(151, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33844)
									func_181(123, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33845)
									func_181(124, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33846)
									func_181(125, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33847)
								{
									func_169(152, 8, num2, &Global_1672212);
									func_169(153, 8, num2, &Global_1672212);
									func_169(154, 8, num2, &Global_1672212);
									func_169(155, 8, num2, &Global_1672212);
								}
							
								if (func_190())
									func_181(126, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_33847)
								{
									func_169(156, 8, num2, &Global_1672212);
									func_169(157, 8, num2, &Global_1672212);
								}
							}
							break;
					}
					break;
			
				case 27:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								if (*Global_262145.f_33848)
								{
									func_181(127, 8, num2, &Global_1672212);
									func_169(158, 8, num2, &Global_1672212);
								}
							
								func_169(159, 8, num2, &Global_1672212);
								func_169(160, 8, num2, &Global_1672212);
								func_169(162, 8, num2, &Global_1672212);
								func_169(164, 8, num2, &Global_1672212);
								func_169(165, 8, num2, &Global_1672212);
								func_181(128, 8, num2, &Global_1672212);
								func_181(129, 8, num2, &Global_1672212);
								func_181(130, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35542)
									func_169(166, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35543)
									func_169(167, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 28:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_181(131, 8, num2, &Global_1672212);
								func_181(132, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35771)
									func_169(163, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35770)
									func_169(161, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35544)
									func_169(168, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35545)
									func_169(169, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35546)
									func_169(170, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35547)
									func_169(171, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35548)
									func_169(172, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_35549)
									func_169(173, 8, num2, &Global_1672212);
							
								func_169(174, 8, num2, &Global_1672212);
								func_169(175, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			}
		
			switch (uParam0->f_5)
			{
				case 29:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								func_169(176, 8, num2, &Global_1672212);
								func_169(177, 8, num2, &Global_1672212);
								func_169(178, 8, num2, &Global_1672212);
								func_169(179, 8, num2, &Global_1672212);
								func_181(133, 8, num2, &Global_1672212);
								func_181(134, 8, num2, &Global_1672212);
								func_181(135, 8, num2, &Global_1672212);
								func_181(136, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36073)
									func_181(137, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36074)
									func_181(138, 8, num2, &Global_1672212);
							
								if (*Global_262145.f_36075)
								{
									func_169(180, 8, num2, &Global_1672212);
									func_169(181, 8, num2, &Global_1672212);
								}
							}
							break;
					}
					break;
			
				case 30:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1672212.f_1[0])
							{
								if (*Global_262145.f_36075)
								{
									func_181(139, 8, num2, &Global_1672212);
									func_181(140, 8, num2, &Global_1672212);
								}
							
								if (*Global_262145.f_36071)
								{
									func_181(141, 8, num2, &Global_1672212);
									func_169(182, 8, num2, &Global_1672212);
								}
							
								func_169(183, 8, num2, &Global_1672212);
								func_169(184, 8, num2, &Global_1672212);
								func_169(185, 8, num2, &Global_1672212);
								func_169(186, 8, num2, &Global_1672212);
								func_169(187, 8, num2, &Global_1672212);
								func_181(142, 8, num2, &Global_1672212);
								func_181(143, 8, num2, &Global_1672212);
								func_181(144, 8, num2, &Global_1672212);
							}
							break;
					}
					break;
			
				case 31:
					func_181(145, 8, num2, &Global_1672212);
				
					if (*Global_262145.f_36620)
					{
						func_169(188, 8, num2, &Global_1672212);
						func_169(189, 8, num2, &Global_1672212);
						func_169(190, 8, num2, &Global_1672212);
						func_181(146, 8, num2, &Global_1672212);
						func_169(191, 8, num2, &Global_1672212);
						func_169(192, 8, num2, &Global_1672212);
						func_169(193, 8, num2, &Global_1672212);
						func_181(147, 8, num2, &Global_1672212);
						func_169(194, 8, num2, &Global_1672212);
						func_169(195, 8, num2, &Global_1672212);
						func_181(149, 8, num2, &Global_1672212);
					}
					break;
			
				case 32:
					func_169(196, 8, num2, &Global_1672212);
					func_181(150, 8, num2, &Global_1672212);
					func_169(197, 8, num2, &Global_1672212);
					func_169(198, 8, num2, &Global_1672212);
					func_169(199, 8, num2, &Global_1672212);
					func_169(200, 8, num2, &Global_1672212);
					func_169(201, 8, num2, &Global_1672212);
					func_169(202, 8, num2, &Global_1672212);
					func_169(203, 8, num2, &Global_1672212);
					func_181(151, 8, num2, &Global_1672212);
					func_181(152, 8, num2, &Global_1672212);
					func_169(204, 8, num2, &Global_1672212);
					break;
			
				case 33:
					func_169(205, 8, num2, &Global_1672212);
					func_181(153, 8, num2, &Global_1672212);
					func_181(154, 8, num2, &Global_1672212);
					func_169(206, 8, num2, &Global_1672212);
				
					if (*Global_262145.f_37388)
					{
						func_181(155, 8, num2, &Global_1672212);
						func_169(207, 8, num2, &Global_1672212);
					}
				
					if (*Global_262145.f_37389)
					{
						func_181(156, 8, num2, &Global_1672212);
						func_169(208, 8, num2, &Global_1672212);
						func_181(157, 8, num2, &Global_1672212);
					}
					break;
			}
		
			func_29(&Global_1672212, func_41(&Global_1672212));
			func_28(1, &Global_1673304);
			func_27(1, &Global_1673304);
			func_26(1, &Global_1673304);
			func_25(0, "HUD_AWDLIST1" /*All Awards*/, &Global_1673304);
			func_25(1, "HUD_AWDLIST12" /*Victory*/, &Global_1673304);
			func_25(2, "HUD_AWDLIST3b" /*General*/, &Global_1673304);
			func_25(3, "HUD_AWDLIST6" /*Crimes*/, &Global_1673304);
			func_25(4, "HUD_AWDLIST9" /*Vehicle*/, &Global_1673304);
			func_25(5, "HUD_AWDLIST10" /*Combat*/, &Global_1673304);
			func_25(6, "HUD_AWDLIST13", &Global_1673304);
			func_25(7, "HUD_AWD_GANGOP" /*The Doomsday Heist*/, &Global_1673304);
			func_25(8, "HUD_AWD_NIGHTCLUB" /*After Hours*/, &Global_1673304);
			func_25(9, "PM_ARENA" /*Arena War*/, &Global_1673304);
			func_25(10, "AWDGBC_VC" /*The Diamond Casino & Resort*/, &Global_1673304);
			func_25(11, "FMMC_CH_DN" /*The Diamond Casino Heist*/, &Global_1673304);
		
			if (Global_262145.f_28814)
				func_25(12, "SUM20AWARDPAGE" /*Los Santos Summer Special*/, &Global_1673304);
		
			func_25(13, "HEISTISLAWDPAGE" /*The Cayo Perico Heist*/, &Global_1673304);
			func_25(14, "TUNEAWDPAGE" /*Los Santos Tuners*/, &Global_1673304);
			func_25(15, "FIXAWDPAGE" /*The Contract*/, &Global_1673304);
			func_25(16, "DLC222AWDPAGE" /*Los Santos Drug Wars*/, &Global_1673304);
			func_25(17, "DLC223AWDPAGE" /*The Chop Shop*/, &Global_1673304);
			func_25(18, "DLC124AWDPAGE" /*Bottom Dollar Bounties*/, &Global_1673304);
			func_25(19, "DLC224AWDPAGE" /*Agents of Sabotage*/, &Global_1673304);
			func_25(20, "DLC125AWDPAGE" /*Money Fronts*/, &Global_1673304);
			func_25(21, "HUD_AWDLIST6b" /*Rewards*/, &Global_1673304);
			func_16(&Global_1673304, func_24(&Global_1673304));
		}
	}

	return;
}

void func_16(var uParam0, int iParam1) // Position - 0x5155 (20821)
{
	int i;
	int value;

	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}

	if (*uParam0 == 0)
	{
		value = uParam0->f_428[i];
	
		for (i = 0; i <= 24; i = i + 1)
		{
			if (uParam0->f_1[i] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			
				if (uParam0->f_586 == 1)
					if (uParam0->f_587 == i)
						value = 0;
					else
						value = 4;
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_480[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			
				if (uParam0->f_585)
					func_22(&uParam0->f_27[i /*16*/]);
				else
					func_21(&uParam0->f_27[i /*16*/]);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_454[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_532[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_558[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_506[i]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			*uParam0 = 1;
		}
	
		func_20(0);
	}

	func_17(uParam0, func_19(uParam0));
	return;
}

void func_17(var uParam0, int iParam1) // Position - 0x5275 (21109)
{
	if (iParam1 == 1)
	{
		uParam0->f_588 = 0;
		func_18(uParam0);
	}

	if (uParam0->f_588 == 0)
	{
		if (uParam0->f_587 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_587);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_587 = -1;
			uParam0->f_588 = 1;
		}
	}

	return;
}

void func_18(var uParam0) // Position - 0x52C8 (21192)
{
	uParam0->f_590 = 0;
	return;
}

int func_19(var uParam0) // Position - 0x52D6 (21206)
{
	return uParam0->f_590;
}

void func_20(int iParam0) // Position - 0x52E3 (21219)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_21(const char* sParam0) // Position - 0x5300 (21248)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_22(char* sParam0) // Position - 0x530E (21262)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_23(var uParam0) // Position - 0x5320 (21280)
{
	uParam0->f_589 = 0;
	return;
}

int func_24(var uParam0) // Position - 0x532E (21294)
{
	return uParam0->f_589;
}

void func_25(int iParam0, char* sParam1, var uParam2) // Position - 0x533B (21307)
{
	TEXT_LABEL_ASSIGN_STRING(&uParam2->f_27[iParam0 /*16*/], sParam1, 64);
	uParam2->f_1[iParam0] = 1;
	return;
}

void func_26(int iParam0, var uParam1) // Position - 0x5358 (21336)
{
	uParam1->f_586 = iParam0;
	return;
}

void func_27(int iParam0, var uParam1) // Position - 0x5367 (21351)
{
	uParam1->f_584 = iParam0;
	return;
}

void func_28(int iParam0, var uParam1) // Position - 0x5376 (21366)
{
	uParam1->f_585 = iParam0;
	return;
}

void func_29(var uParam0, int iParam1) // Position - 0x5385 (21381)
{
	int i;
	int value;
	int value2;
	var labelName;

	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}

	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			for (i = 0; i <= 11; i = i + 1)
			{
				value = -1;
				value = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(uParam0->f_221[i]) / BUILTIN::TO_FLOAT(uParam0->f_208[i])) * 100f);
				value = uParam0->f_441[i];
				value2 = -1;
			
				switch (uParam0->f_428[i])
				{
					case 107:
						value2 = 100;
						break;
				
					case 108:
						value2 = 200;
						break;
				
					case 109:
						value2 = 400;
						break;
				
					case 110:
						value2 = 800;
						break;
				}
			
				TEXT_LABEL_ASSIGN_STRING(&labelName, func_38(uParam0->f_428[i]), 32);
			
				if (uParam0->f_1[i] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_22(&uParam0->f_14[i /*8*/]);
					func_22(&uParam0->f_111[i /*8*/]);
					func_21(&uParam0->f_331[i /*8*/]);
					func_21(&uParam0->f_234[i /*8*/]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[i]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				
					if (func_37(&labelName))
					{
						func_22("HUD_AWDPROG_S" /*Progress*/);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("HUD_AWDPROG" /*~a~ Progress*/);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&labelName);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (uParam0->f_221[i] >= uParam0->f_208[i])
					{
						func_22("TR_COMPLETE" /*Completed*/);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TIMER_DASHES" /*~1~/~1~*/);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[i]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[i]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (value2 >= 0)
					{
						func_22("HUD_AWDAWARD" /*Award*/);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			func_20(1);
			*uParam0 = 1;
		}
	}

	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
	return;
}

void func_30(var uParam0, int iParam1) // Position - 0x556E (21870)
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}

	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}

	return;
}

void func_31(var uParam0) // Position - 0x55B8 (21944)
{
	uParam0->f_462 = 0;
	return;
}

int func_32(var uParam0) // Position - 0x55C6 (21958)
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1) // Position - 0x55D3 (21971)
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}

	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
	
		if (uParam0->f_456 < 0)
		{
			func_22("");
			func_22("");
		}
		else if (uParam0->f_456 < 12)
		{
			func_22(&uParam0->f_14[uParam0->f_456 /*8*/]);
		
			if (uParam0->f_208[uParam0->f_456] > -1)
				func_34(&uParam0->f_111[uParam0->f_456 /*8*/], uParam0->f_208[uParam0->f_456]);
			else
				func_22(&uParam0->f_111[uParam0->f_456 /*8*/]);
		}
	
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}

	return;
}

void func_34(const char* sParam0, int iParam1) // Position - 0x567F (22143)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_35(var uParam0) // Position - 0x5697 (22167)
{
	uParam0->f_463 = 0;
	return;
}

int func_36(var uParam0) // Position - 0x56A5 (22181)
{
	return uParam0->f_463;
}

BOOL func_37(const char* sParam0) // Position - 0x56B2 (22194)
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

char* func_38(int iParam0) // Position - 0x56EC (22252)
{
	switch (iParam0)
	{
		case 107:
			return "HUD_MED_BRON" /*Bronze*/;
	
		case 108:
			return "HUD_MED_SILV" /*Silver*/;
	
		case 109:
			return "HUD_MED_GOLD" /*Gold*/;
	
		case 110:
			return "HUD_MED_PLAT" /*Platinum*/;
	}

	return "";
}

BOOL func_39(var uParam0) // Position - 0x573F (22335)
{
	int i;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (uParam0->f_1[i] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0->f_331[i /*8*/]))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&uParam0->f_331[i /*8*/], false);
			
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&uParam0->f_331[i /*8*/]))
					return false;
			}
		}
	}

	return true;
}

void func_40(var uParam0) // Position - 0x579B (22427)
{
	uParam0->f_460 = 0;
	return;
}

int func_41(var uParam0) // Position - 0x57A9 (22441)
{
	return uParam0->f_460;
}

ePedComponentType func_42(int iParam0) // Position - 0x57B6 (22454)
{
	ePedComponentType type;

	if (Global_1941321[iParam0 /*8*/] == PV_COMP_INVALID)
	{
		type = func_115(func_114(iParam0), -1);
	
		if (type == -1)
		{
			func_43(iParam0, 0);
			type = 0;
		}
	
		Global_1941321[iParam0 /*8*/] = type;
	}

	return Global_1941321[iParam0 /*8*/];
}

void func_43(int iParam0, ePedComponentType epctParam1) // Position - 0x57F9 (22521)
{
	Global_1941321[iParam0 /*8*/] = epctParam1;
	func_44(func_114(iParam0), epctParam1, -1);
	return;
}

void func_44(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x5818 (22552)
{
	BOOL flag;
	int num;

	if (*Global_262145.f_35149)
	{
		func_112(iParam0, epctParam1, iParam2, true);
		return;
	}

	flag = true;
	num.f_2 = -1;
	num = func_111(iParam0);

	if (!func_110(num, epctParam1 == func_115(iParam0, -1)))
	{
		flag = false;
	}
	else
	{
		num.f_1 = func_109(num);
	
		if (num.f_1 == 4)
			flag = false;
	
		if (flag && !func_107(iParam0, &num))
			flag = false;
	}

	func_112(iParam0, epctParam1, iParam2, true);

	if (flag)
		func_45(&num);

	return;
}

void func_45(var uParam0) // Position - 0x58AC (22700)
{
	uParam0->f_6 = func_91(*uParam0, uParam0->f_2);

	if (uParam0->f_6 > uParam0->f_2.f_1)
	{
		func_85(*uParam0);
	
		if (uParam0->f_2.f_1 == 0 && uParam0->f_6 > 0 && uParam0->f_2.f_2 > 1)
			func_83(uParam0->f_2);
	}

	if (uParam0->f_6 >= uParam0->f_2.f_2)
	{
		func_79(uParam0->f_2);
	
		if (func_71(*uParam0, uParam0->f_1, false, false))
		{
			func_56(*uParam0, uParam0->f_1);
			uParam0->f_7 = 1;
		
			if (!Global_2740191.f_7134.f_1 && func_109(*uParam0) >= uParam0->f_1)
			{
				Global_2740191.f_7134.f_1 = 1;
				Global_2740191.f_7134.f_2 = 1;
			}
		
			func_52();
		}
	
		func_51(*uParam0);
	}
	else if (func_46(uParam0))
	{
		func_51(*uParam0);
	}

	return;
}

BOOL func_46(var uParam0) // Position - 0x5990 (22928)
{
	var unk;
	BOOL flag;

	unk = 10;
	flag = false;
	func_50(*uParam0, uParam0->f_2, &unk, &flag);

	if (uParam0->f_6 <= uParam0->f_2.f_1)
		return false;

	if (!flag)
		if (func_49(&unk, uParam0->f_2.f_1, uParam0->f_6, &(uParam0->f_2.f_3)))
			if (func_47(*uParam0, uParam0->f_2, uParam0->f_2.f_3))
				return false;
		else
			return false;

	return true;
}

BOOL func_47(var uParam0, var uParam1, var uParam2) // Position - 0x5A00 (23040)
{
	int num;

	num = func_48(uParam0, uParam1, uParam2);

	if (num != 54820)
		return _STAT_GET_PACKED_BOOL(num, -1);

	return false;
}

int func_48(int iParam0, int iParam1, int iParam2) // Position - 0x5A28 (23080)
{
	switch (iParam0)
	{
		case 18:
			switch (iParam1)
			{
				case 196:
					switch (iParam2)
					{
						case 0:
							return 41871;
					
						case 1:
							return 41872;
					
						case 2:
							return 41873;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 170:
					switch (iParam2)
					{
						case 0:
							return 41984;
					
						case 1:
							return 41985;
					
						case 2:
							return 41986;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 157:
					switch (iParam2)
					{
						case 0:
							return 41990;
					
						case 1:
							return 41991;
					
						case 2:
							return 41992;
					
						case 3:
							return 41993;
					}
					break;
			}
			break;
	}

	return 54820;
}

BOOL func_49(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x5B41 (23361)
{
	int num;
	int i;

	num = 0;
	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		num = uParam0->[i];
	
		if (num != 0)
		{
			if (iParam1 < num && iParam2 >= num)
			{
				*uParam3 = i;
				return true;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

void func_50(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x5B93 (23443)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_3[0] > 0)
		{
			for (j = 0; j < 10; j = j + 1)
			{
				uParam2->[j] = Global_1985099.f_1[i /*14*/].f_3[j];
			}
		
			return;
		}
	}

	uParam2->[0] = 1;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 82:
					*uParam3 = 1;
					break;
			
				case 76:
					uParam2->[0] = 10;
					break;
			
				case 77:
					uParam2->[0] = 100000;
					break;
			
				case 79:
					uParam2->[0] = 500000;
					break;
			
				case 81:
					uParam2->[0] = 14;
					break;
			
				case 83:
					uParam2->[0] = 2000000;
					break;
			
				case 84:
					uParam2->[0] = 500000;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 88:
				case 89:
				case 91:
				case 96:
					*uParam3 = 1;
					break;
			
				case 90:
					uParam2->[0] = 25000;
					break;
			
				case 92:
					uParam2->[0] = 2;
					break;
			
				case 94:
					uParam2->[0] = 9;
					break;
			
				case 95:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 97:
					uParam2->[0] = 100000;
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 4:
				case 6:
					*uParam3 = 1;
					break;
			
				case 5:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 101:
				case 102:
					*uParam3 = 1;
					break;
			
				case 103:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 104:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 105:
					uParam2->[0] = 3;
					break;
			
				case 106:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 107:
					uParam2->[0] = 10;
					break;
			
				case 108:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 24;
					break;
			
				case 109:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					break;
			
				case 110:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 12:
					*uParam3 = 1;
					break;
			
				case 13:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 15:
					uParam2->[0] = 9;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 116:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 117:
				case 118:
				case 122:
					*uParam3 = 1;
					break;
			
				case 120:
					uParam2->[0] = 10;
					break;
			
				case 121:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					break;
			
				case 123:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					uParam2->[4] = 5000000;
					uParam2->[5] = 10000000;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 301:
					*uParam3 = 1;
					break;
			
				case 302:
					uParam2->[0] = 15;
					break;
			
				case 303:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 304:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					break;
			
				case 183:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 184:
					*uParam3 = 1;
					break;
			
				case 185:
					*uParam3 = 1;
					break;
			
				case 186:
					*uParam3 = 1;
					break;
			
				case 187:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 188:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
					break;
			
				case 324:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			
				case 326:
					uParam2->[0] = 10;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 329:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 200;
					uParam2->[4] = 250;
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					break;
			
				case 340:
					*uParam3 = 1;
					break;
			
				case 341:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 342:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 343:
					*uParam3 = 1;
					break;
			
				case 344:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					*uParam3 = 1;
					break;
			
				case 125:
					break;
			
				case 126:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 127:
				case 128:
					*uParam3 = 1;
					break;
			
				case 129:
					uParam2->[1] = 250000;
					uParam2->[2] = 500000;
					uParam2->[3] = 1000000;
					break;
			
				case 130:
					*uParam3 = 1;
					break;
			
				case 131:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 132:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 133:
					*uParam3 = 1;
					break;
			
				case 134:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 135:
					*uParam3 = 1;
					break;
			
				case 136:
					uParam2->[1] = 2500000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					*uParam3 = 1;
					break;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					break;
			
				case 365:
					uParam2->[0] = 6;
					break;
			
				case 366:
					uParam2->[1] = 8;
					break;
			
				case 367:
					*uParam3 = 1;
					break;
			
				case 368:
					*uParam3 = 1;
					break;
			
				case 369:
					uParam2->[1] = 6;
					uParam2->[2] = 10;
					uParam2->[3] = 12;
					break;
			
				case 370:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 371:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 141:
				case 142:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 144:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 145:
					*uParam3 = 1;
					break;
			
				case 146:
					uParam2->[0] = 10;
					break;
			
				case 147:
				case 148:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 149:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 232:
				case 233:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 234:
					*uParam3 = 1;
					break;
			
				case 237:
					uParam2->[0] = 10;
					break;
			
				case 238:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 239:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 240:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 259:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 261:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 262:
					uParam2->[1] = 5;
					uParam2->[2] = 7;
					break;
			
				case 263:
					uParam2->[0] = 15;
					break;
			
				case 264:
					*uParam3 = 1;
					break;
			
				case 265:
					uParam2->[0] = 6;
					break;
			
				case 266:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 271:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 273:
					*uParam3 = 1;
					break;
			
				case 276:
					uParam2->[0] = 15;
					break;
			
				case 277:
					*uParam3 = 1;
					break;
			
				case 278:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 279:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 247:
					uParam2->[1] = 2;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 248:
				case 251:
				case 252:
					*uParam3 = 1;
					break;
			
				case 250:
					uParam2->[0] = 11;
					break;
			
				case 253:
					uParam2->[1] = 5;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					uParam2->[4] = 100;
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 288:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 14;
					break;
			
				case 289:
					uParam2->[0] = 11;
					break;
			
				case 290:
				case 291:
					*uParam3 = 1;
					break;
			
				case 292:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 309:
				case 310:
				case 312:
				case 313:
					*uParam3 = 1;
					break;
			
				case 308:
					uParam2->[1] = 5;
					break;
			
				case 311:
					uParam2->[0] = 15;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 152:
					uParam2->[1] = 5;
					break;
			
				case 156:
				case 161:
					*uParam3 = 1;
					break;
			
				case 157:
					uParam2->[1] = 10000;
					uParam2->[2] = 50000;
					uParam2->[3] = 100000;
					uParam2->[4] = 250000;
					break;
			
				case 158:
				case 160:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 159:
					uParam2->[0] = 8;
					break;
			
				case 162:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 167:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 169:
					uParam2->[0] = 11;
					uParam2->[1] = 20;
					uParam2->[2] = 25;
					break;
			
				case 170:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 172:
					uParam2->[0] = 26;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 173:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 250;
					uParam2->[4] = 500;
					uParam2->[5] = 1000;
					break;
			
				case 174:
					*uParam3 = 1;
					break;
			
				case 175:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					uParam2->[4] = 10000000;
					uParam2->[5] = 25000000;
					uParam2->[6] = 50000000;
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 194:
				case 197:
				case 198:
				case 199:
					*uParam3 = 1;
					break;
			
				case 195:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 196:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 40;
					break;
			
				case 200:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					uParam2->[4] = 50;
					break;
			
				case 201:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 208:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 209:
					*uParam3 = 1;
					break;
			
				case 210:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 211:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			
				case 212:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					break;
			
				case 213:
					uParam2->[1] = 100000;
					uParam2->[2] = 250000;
					uParam2->[3] = 500000;
					break;
			
				case 214:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 221:
				case 223:
				case 224:
				case 225:
					*uParam3 = 1;
					break;
			
				case 226:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					uParam2->[4] = 200;
					uParam2->[5] = 250;
					break;
			
				case 227:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 331:
				case 332:
					*uParam3 = 1;
					break;
			
				case 333:
				case 334:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 335:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					uParam2->[4] = 20;
					break;
			
				case 336:
				case 337:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 316:
					*uParam3 = 1;
					break;
			
				case 317:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 318:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 319:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 320:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 354:
				case 357:
					*uParam3 = 1;
					break;
			
				case 355:
					uParam2->[0] = 10;
					break;
			
				case 356:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 358:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	}

	return;
}

void func_51(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6E0D (28173)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == uParam0.f_2)
		{
			if (uParam0.f_6 >= Global_2740191.f_7134.f_10[i /*8*/].f_6)
				Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
		
			return;
		}
		else if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == -1)
		{
			Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
			return;
		}
	}

	return;
}

void func_52() // Position - 0x6E9D (28317)
{
	int num;
	BOOL flag;

	num = func_54();
	flag = false;

	if (num >= 5 && !_STAT_GET_PACKED_BOOL(41806, -1))
	{
		_STAT_SET_PACKED_BOOL(41806, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_5", 16);
		Global_2740191.f_7134.f_5 = 5;
		flag = true;
	}

	if (num >= 10 && !_STAT_GET_PACKED_BOOL(41807, -1))
	{
		_STAT_SET_PACKED_BOOL(41807, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_1", 16);
		Global_2740191.f_7134.f_5 = 10;
		flag = true;
	}

	if (num >= 15 && !_STAT_GET_PACKED_BOOL(41808, -1))
	{
		_STAT_SET_PACKED_BOOL(41808, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_15", 16);
		Global_2740191.f_7134.f_5 = 15;
		flag = true;
	}

	if (num >= 20 && !_STAT_GET_PACKED_BOOL(41809, -1))
	{
		_STAT_SET_PACKED_BOOL(41809, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_0", 16);
		Global_2740191.f_7134.f_5 = 20;
		flag = true;
	}

	if (num >= 25 && !_STAT_GET_PACKED_BOOL(41810, -1))
	{
		_STAT_SET_PACKED_BOOL(41810, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_7", 16);
		Global_2740191.f_7134.f_5 = 25;
		flag = true;
	}

	if (num >= 30 && !_STAT_GET_PACKED_BOOL(42053, -1))
	{
		_STAT_SET_PACKED_BOOL(42053, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_X7M_O_2", 16);
		Global_2740191.f_7134.f_5 = 30;
		flag = true;
	}

	if (flag)
		Global_2740191.f_7134.f_4 = 1;

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x702F (28719)
{
	if (iParam2 == -1)
		iParam2 = func_7();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_54() // Position - 0x704D (28749)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	ePedComponentType type;
	int num3;

	num = 0;
	i = 0;
	num2 = 0;
	type = PV_COMP_HEAD;

	for (i = 0; i < 5; i = i + 1)
	{
		type = func_115(func_55(i), -1);
	
		for (j = 0; j < 8; j = j + 1)
		{
			num2 = 0;
		
			for (k = 0; k < 4; k = k + 1)
			{
				num3 = (j * 4) + k;
			
				if (IS_BIT_SET(type, num3))
					num2 = num2 + 1;
			}
		
			if (num2 == 4)
				num = num + 1;
		}
	}

	return num;
}

int func_55(int iParam0) // Position - 0x70CD (28877)
{
	switch (iParam0)
	{
		case 0:
			return 15562;
	
		case 1:
			return 15563;
	
		case 2:
			return 15564;
	
		case 3:
			return 15565;
	
		case 4:
			return 17293;
	
		default:
		
	}

	return 17293;
}

void func_56(int iParam0, int iParam1) // Position - 0x711B (28955)
{
	int num;
	ePedComponentType address;
	int offset;

	num = func_70(iParam0);
	address = func_115(num, -1);
	offset = func_68(iParam0, iParam1);

	if (!IS_BIT_SET(address, offset))
	{
		func_60(iParam0, iParam1);
		MISC::SET_BIT(&address, offset);
		func_112(num, address, -1, true);
	}

	func_57(iParam0, iParam1);
	return;
}

void func_57(int iParam0, int iParam1) // Position - 0x716C (29036)
{
	int num;
	int offset;

	num = func_58(iParam0);
	offset = func_68(iParam0, iParam1);

	if (!IS_BIT_SET(Global_1668419.f_33[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_33[num], offset);
		Global_1668419.f_42 = Global_1668419.f_42 + 1;
	}

	if (!IS_BIT_SET(Global_1668419.f_27[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_27[num], offset);
		Global_1668419.f_41 = Global_1668419.f_41 + 1;
	}

	if (iParam1 != 3 && iParam1 != 4)
	{
		if (!IS_BIT_SET(Global_1668419.f_27[num], offset + 1))
		{
			MISC::SET_BIT(&Global_1668419.f_27[num], offset + 1);
			Global_1668419.f_41 = Global_1668419.f_41 + 1;
		}
	}

	return;
}

int func_58(int iParam0) // Position - 0x7227 (29223)
{
	return func_59(iParam0) / 8;
}

int func_59(int iParam0) // Position - 0x7238 (29240)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 6:
			return 4;
	
		case 7:
			return 5;
	
		case 8:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 16:
			return 10;
	
		case 17:
			return 11;
	
		case 18:
			return 12;
	
		case 19:
			return 13;
	
		case 20:
			return 14;
	
		case 21:
			return 15;
	
		case 22:
			return 16;
	
		case 23:
			return 17;
	
		case 24:
			return 18;
	
		case 25:
			return 19;
	
		case 26:
			return 20;
	
		case 27:
			return 21;
	
		case 28:
			return 22;
	
		case 29:
			return 23;
	
		case 30:
			return 24;
	
		case 31:
			return 25;
	
		case 32:
			return 26;
	
		case 33:
			return 27;
	
		case 12:
			return 28;
	
		case 1:
			return 29;
	
		case 11:
			return 30;
	
		case 10:
			return 31;
	
		case 0:
			return 32;
	
		case 9:
			return 33;
	
		default:
		
	}

	return 0;
}

void func_60(int iParam0, int iParam1) // Position - 0x73B6 (29622)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_65();
	hash = func_64();
	hash2 = func_63(iParam1);
	hash3 = func_61(iParam0);
	num2 = -1;
	STATS::_PLAYSTATS_PH_ACTIVITY(entityCoords, num, hash, hash2, hash3, num2);
	return;
}

Hash func_61(int iParam0) // Position - 0x7409 (29705)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "PROGRESS_HUB_PACK_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_62(iParam0), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_62(int iParam0) // Position - 0x7429 (29737)
{
	switch (iParam0)
	{
		case 0:
			return "FIELD_HANGAR";
	
		case 1:
			return "CHICKEN_FACTORY_RAID";
	
		case 2:
			return "PROJECT_OVERTHROW";
	
		case 3:
			return "OPERATION_PAPER_TRAIL";
	
		case 4:
			return "SUPERYACHT_LIFE";
	
		case 5:
			return "GERALDS_LAST_PLAY";
	
		case 6:
			return "PREMIUM_DELUXE_REPO_WORK";
	
		case 7:
			return "MADRAZO_DISPATCH_SERVICES";
	
		case 8:
			return "LOWRIDERS";
	
		case 9:
			return "BUSINESS_TYCOON";
	
		case 10:
			return "HACKER_DEN";
	
		case 11:
			return "BAIL_OFFICE";
	
		case 12:
			return "SALVAGE_YARD";
	
		case 13:
			return "LOS_SANTOS_DRUG_WARS";
	
		case 14:
			return "THE_CONTRACT";
	
		case 15:
			return "AFTER_HOURS";
	
		case 16:
			return "SMUGGLERS_RUN";
	
		case 17:
			return "GUNRUNNING";
	
		case 18:
			return "IMPORT_EXPORT";
	
		case 19:
			return "BIKERS";
	
		case 20:
			return "FAIFAF";
	
		case 21:
			return "LOS_SANTOS_TUNERS";
	
		case 22:
			return "DIAMOND_CASINO";
	
		case 23:
			return "CAYO_PERICO_HEIST";
	
		case 24:
			return "DIAMOND_CASINO_HEIST";
	
		case 25:
			return "DOOMSDAY_HEIST";
	
		case 26:
			return "HEISTS";
	
		case 27:
			return "ARENA_WAR";
	
		case 28:
			return "ADVERSARY_MODES";
	
		case 29:
			return "SURVIVALS";
	
		case 30:
			return "RACING";
	
		case 31:
			return "DEATHMATCHES";
	
		case 32:
			return "VEHICLE_ENTHUSIAST";
	
		case 33:
			return "WEAPONS_EXPERT";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_63(int iParam0) // Position - 0x75F6 (30198)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_1");
	
		case 1:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_2");
	
		case 2:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_3");
	
		case 3:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_4");
	
		case 4:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_MAX");
	
		default:
		
	}

	return MISC::GET_HASH_KEY("***INVALID***");
}

Hash func_64() // Position - 0x7662 (30306)
{
	return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_COMPLETED");
}

int func_65() // Position - 0x7672 (30322)
{
	if (Global_1668418 == 0)
		func_66();

	return Global_1668418;
}

void func_66() // Position - 0x768A (30346)
{
	Global_1668418 = MISC::GET_HASH_KEY(NETWORK::GET_CLOUD_TIME_AS_STRING()) + NETWORK::GET_CLOUD_TIME_AS_INT() + NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) + MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
	return;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x76B9 (30393)
{
	ePedComponentType type;

	type = player;

	if (type != PV_COMP_INVALID)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (type == Global_2672967.f_3)
					return Global_2672967.f_2;
				else if (Global_2658019[type /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

int func_68(int iParam0, int iParam1) // Position - 0x7719 (30489)
{
	if (iParam1 == 4)
		iParam1 = 3;

	return (func_69(iParam0) * 4) + iParam1;
}

int func_69(int iParam0) // Position - 0x7735 (30517)
{
	return func_59(iParam0) % 8;
}

int func_70(int iParam0) // Position - 0x7746 (30534)
{
	int num;

	num = func_58(iParam0);
	return func_55(num);
}

BOOL func_71(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x775C (30556)
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	int i;
	int num4;

	flag = true;
	num = func_109(iParam0);

	if (num > iParam1)
		return true;

	if (bParam2)
		return false;

	num2 = func_77(iParam0, iParam1, 0);
	num3 = (num2 + func_74(iParam0, iParam1)) - 1;
	i = 0;

	for (i = num2; i <= num3; i = i + 1)
	{
		num4 = i;
	
		if (func_72(iParam0, num4))
			func_79(num4);
		else
			flag = false;
	
		if (!bParam3 && !flag)
			return false;
	}

	if (flag)
	{
		func_56(iParam0, iParam1);
		return true;
	}

	return false;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x77F9 (30713)
{
	ePedComponentType type;
	ePedComponentType type2;

	type = func_73(iParam0, iParam1);
	type2 = func_91(iParam0, iParam1);
	return type2 >= type;
}

ePedComponentType func_73(int iParam0, int iParam1) // Position - 0x781A (30746)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_2 > PV_COMP_HEAD)
			return Global_1985099.f_1[i /*14*/].f_2;
	}

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
				case 73:
				case 74:
				case 75:
				case 78:
				case 80:
					return PV_COMP_BERD;
			
				case 82:
					return PV_COMP_FEET;
			
				case 76:
					return PV_COMP_DECL;
			
				case 77:
					return 100000;
			
				case 79:
					return 500000;
			
				case 81:
					return 14;
			
				case 83:
					return 2000000;
			
				case 84:
					return 500000;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
				case 86:
				case 87:
				case 93:
					return PV_COMP_BERD;
			
				case 88:
					return PV_COMP_HAND;
			
				case 89:
				case 92:
					return PV_COMP_HAIR;
			
				case 90:
					return 25000;
			
				case 91:
				case 96:
					return PV_COMP_LOWR;
			
				case 94:
					return PV_COMP_TASK;
			
				case 95:
					return 25;
			
				case 97:
					return 100000;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 7:
					return PV_COMP_BERD;
			
				case 4:
				case 6:
					return PV_COMP_FEET;
			
				case 5:
					return 5000000;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
				case 99:
				case 100:
					return PV_COMP_BERD;
			
				case 101:
					return PV_COMP_HAND;
			
				case 102:
					return PV_COMP_HAIR;
			
				case 103:
					return 250000;
			
				case 104:
				case 107:
					return PV_COMP_DECL;
			
				case 105:
					return PV_COMP_UPPR;
			
				case 106:
					return 25;
			
				case 108:
					return 24;
			
				case 109:
					return 1000000;
			
				case 110:
					return 5000000;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
				case 9:
				case 10:
				case 11:
				case 14:
					return PV_COMP_BERD;
			
				case 12:
					return PV_COMP_HAIR;
			
				case 13:
					return 5000000;
			
				case 15:
					return PV_COMP_TASK;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
				case 112:
				case 113:
				case 114:
				case 115:
				case 119:
					return PV_COMP_BERD;
			
				case 116:
					return 250000;
			
				case 117:
				case 118:
				case 122:
					return PV_COMP_HAND;
			
				case 120:
					return PV_COMP_DECL;
			
				case 121:
					return 2500000;
			
				case 123:
					return 10000000;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
				case 294:
				case 295:
				case 296:
				case 297:
				case 298:
				case 299:
				case 300:
					return PV_COMP_BERD;
			
				case 301:
					return PV_COMP_HAND;
			
				case 302:
					return 15;
			
				case 303:
					return 50000000;
			
				case 304:
					return PV_COMP_HAND;
			
				case 305:
					return PV_COMP_BERD;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
				case 17:
				case 19:
					return PV_COMP_BERD;
			
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					return PV_COMP_FEET;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					return PV_COMP_BERD;
			
				case 183:
					return 25;
			
				case 184:
					return PV_COMP_HAND;
			
				case 185:
					return PV_COMP_ACCS;
			
				case 186:
					return 18;
			
				case 187:
					return 25;
			
				case 188:
					return 25000000;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
				case 323:
					return PV_COMP_BERD;
			
				case 324:
					return 50;
			
				case 326:
					return 100;
			
				case 329:
					return 250;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					return PV_COMP_BERD;
			
				case 340:
					return PV_COMP_HAND;
			
				case 341:
					return PV_COMP_DECL;
			
				case 342:
					return 20;
			
				case 343:
					return 25;
			
				case 344:
					return 50;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					return PV_COMP_FEET;
			
				case 125:
					return PV_COMP_BERD;
			
				case 126:
					return PV_COMP_DECL;
			
				case 127:
				case 128:
					return PV_COMP_HAND;
			
				case 129:
					return 1000000;
			
				case 130:
					return PV_COMP_DECL;
			
				case 131:
					return 25;
			
				case 132:
					return 100;
			
				case 133:
					return 24;
			
				case 134:
					return 100;
			
				case 135:
					return PV_COMP_JBIB;
			
				case 136:
					return 10000000;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
				case 25:
				case 27:
					return PV_COMP_BERD;
			
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					return PV_COMP_FEET;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
				case 33:
				case 35:
					return PV_COMP_BERD;
			
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					return PV_COMP_FEET;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
				case 41:
				case 43:
					return PV_COMP_BERD;
			
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					return PV_COMP_FEET;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
				case 49:
				case 51:
					return PV_COMP_BERD;
			
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					return PV_COMP_ACCS;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
				case 57:
				case 59:
					return PV_COMP_BERD;
			
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					return PV_COMP_FEET;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
				case 65:
				case 67:
					return PV_COMP_BERD;
			
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					return PV_COMP_ACCS;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					return PV_COMP_HAND;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					return PV_COMP_BERD;
			
				case 365:
					return PV_COMP_FEET;
			
				case 366:
					return PV_COMP_ACCS;
			
				case 367:
					return PV_COMP_DECL;
			
				case 368:
					return PV_COMP_DECL;
			
				case 369:
					return PV_COMP_MAX;
			
				case 370:
					return 50;
			
				case 371:
					return PV_COMP_HAND;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
				case 138:
				case 139:
				case 140:
				case 143:
					return PV_COMP_BERD;
			
				case 141:
				case 142:
				case 146:
					return PV_COMP_DECL;
			
				case 144:
					return 25;
			
				case 145:
					return PV_COMP_FEET;
			
				case 147:
				case 148:
					return 100;
			
				case 149:
					return 5000000;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
				case 229:
				case 230:
				case 231:
				case 235:
				case 236:
					return PV_COMP_BERD;
			
				case 232:
				case 233:
				case 237:
					return PV_COMP_DECL;
			
				case 234:
					return PV_COMP_ACCS;
			
				case 238:
					return 25;
			
				case 239:
					return 5000000;
			
				case 240:
					return 100;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
				case 255:
				case 256:
				case 257:
				case 258:
				case 260:
					return PV_COMP_BERD;
			
				case 259:
					return PV_COMP_DECL;
			
				case 261:
					return 25;
			
				case 262:
					return PV_COMP_TEEF;
			
				case 263:
					return 15;
			
				case 264:
					return PV_COMP_HAND;
			
				case 265:
					return PV_COMP_FEET;
			
				case 266:
					return 50000000;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
				case 268:
				case 269:
				case 270:
				case 272:
				case 275:
					return PV_COMP_BERD;
			
				case 271:
					return 25;
			
				case 273:
					return PV_COMP_UPPR;
			
				case 274:
					return PV_COMP_BERD;
			
				case 276:
					return 15;
			
				case 277:
					return PV_COMP_LOWR;
			
				case 278:
					return 50000000;
			
				case 279:
					return 100000;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
				case 242:
				case 243:
				case 244:
				case 245:
				case 246:
				case 249:
					return PV_COMP_BERD;
			
				case 247:
					return 13;
			
				case 248:
				case 251:
				case 252:
					return PV_COMP_FEET;
			
				case 250:
					return PV_COMP_JBIB;
			
				case 253:
					return 100;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
				case 281:
				case 282:
				case 283:
				case 284:
				case 285:
				case 286:
				case 287:
					return PV_COMP_BERD;
			
				case 288:
					return 14;
			
				case 289:
					return PV_COMP_DECL;
			
				case 290:
				case 291:
					return PV_COMP_UPPR;
			
				case 292:
					return 15;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
				case 307:
					return PV_COMP_BERD;
			
				case 308:
					return PV_COMP_HAND;
			
				case 309:
					return 25;
			
				case 310:
					return PV_COMP_TASK;
			
				case 311:
					return 15;
			
				case 312:
					return 20;
			
				case 313:
					return 50;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
				case 151:
				case 153:
				case 154:
				case 155:
					return PV_COMP_BERD;
			
				case 152:
					return PV_COMP_HAND;
			
				case 156:
					return PV_COMP_LOWR;
			
				case 157:
					return Global_262145.f_23684;
			
				case 158:
				case 160:
					return 25;
			
				case 159:
					return PV_COMP_ACCS;
			
				case 161:
					return PV_COMP_DECL;
			
				case 162:
					return 50000000;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
				case 164:
				case 165:
				case 166:
				case 168:
				case 171:
					return PV_COMP_BERD;
			
				case 167:
					return PV_COMP_DECL;
			
				case 169:
					return 25;
			
				case 170:
					return 50;
			
				case 172:
					return 100;
			
				case 173:
					return 1000;
			
				case 174:
					return PV_COMP_ACCS;
			
				case 175:
					return 50000000;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
				case 190:
				case 191:
				case 192:
				case 193:
					return PV_COMP_BERD;
			
				case 194:
					return PV_COMP_HAND;
			
				case 197:
				case 199:
					return PV_COMP_ACCS;
			
				case 198:
					return PV_COMP_DECL;
			
				case 195:
					return 25;
			
				case 196:
					return 40;
			
				case 200:
					return 50;
			
				case 201:
					return 25000000;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
				case 203:
				case 204:
				case 205:
				case 206:
				case 207:
					return PV_COMP_BERD;
			
				case 208:
					return 13;
			
				case 209:
					return PV_COMP_HAND;
			
				case 210:
					return PV_COMP_DECL;
			
				case 211:
					return 25000000;
			
				case 212:
					return 2500000;
			
				case 214:
					return 50;
			
				case 213:
					return 500000;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
				case 216:
				case 217:
				case 218:
				case 219:
				case 220:
				case 222:
					return PV_COMP_BERD;
			
				case 221:
					return PV_COMP_JBIB;
			
				case 223:
					return PV_COMP_HAND;
			
				case 224:
					return PV_COMP_DECL;
			
				case 225:
					return PV_COMP_FEET;
			
				case 226:
					return 250;
			
				case 227:
					return 50000000;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					return PV_COMP_BERD;
			
				case 331:
				case 332:
					return PV_COMP_HAND;
			
				case 333:
				case 334:
					return 25;
			
				case 335:
					return 20;
			
				case 336:
				case 337:
					return 50;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
				case 315:
				case 321:
					return PV_COMP_BERD;
			
				case 316:
					return PV_COMP_HAND;
			
				case 317:
					return PV_COMP_DECL;
			
				case 318:
					return 20;
			
				case 319:
					return 25;
			
				case 320:
					return 50;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
				case 347:
				case 348:
				case 349:
				case 350:
				case 351:
				case 352:
				case 353:
					return PV_COMP_BERD;
			
				case 354:
					return PV_COMP_HAND;
			
				case 355:
					return PV_COMP_DECL;
			
				case 356:
					return 100;
			
				case 357:
					return 15;
			
				case 358:
					return 50;
			}
			break;
	}

	return 123456789;
}

// Unhandled jump detected. Output should be considered invalid
int func_74(int iParam0, int iParam1) // Position - 0x8968 (35176)
{
	if (func_75(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 3;
		
			case 1:
				return 3;
		
			case 2:
				return 3;
		
			case 3:
				return 4;
		
			default:
				goto 0x6F;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
		
			case 1:
				return 2;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_75(int iParam0) // Position - 0x89DB (35291)
{
	int num;

	num = func_76(iParam0);

	switch (num)
	{
		case 0:
		case 4:
			return false;
	
		default:
		
	}

	return true;
}

int func_76(int iParam0) // Position - 0x8A03 (35331)
{
	switch (iParam0)
	{
		case 26:
		case 25:
		case 24:
		case 23:
			return 3;
	
		case 28:
		case 31:
		case 30:
		case 29:
		case 27:
			return 4;
	
		case 20:
		case 19:
		case 18:
		case 17:
		case 16:
		case 15:
		case 14:
		case 13:
		case 12:
		case 11:
		case 10:
		case 9:
			return 1;
	
		case 8:
		case 7:
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 0;
	
		case 22:
		case 21:
			return 2;
	
		case 33:
		case 32:
			return 5;
	}

	return 5;
}

int func_77(int iParam0, int iParam1, int iParam2) // Position - 0x8B09 (35593)
{
	int num;
	int i;
	int num2;

	num = iParam0;
	i = 0;
	num2 = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_78(i);
		}
	}

	num = iParam1;
	i = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_74(iParam0, i);
		}
	}

	num2 = num2 + iParam2;
	return num2;
}

int func_78(int iParam0) // Position - 0x8B75 (35701)
{
	if (func_75(iParam0))
		return 13;

	return 8;
}

void func_79(int iParam0) // Position - 0x8B90 (35728)
{
	int num;
	int num2;
	int offset;

	num = func_82(iParam0);
	num2 = func_81(num);
	offset = func_80(num);
	MISC::SET_BIT(&Global_1668419.f_8[num2], offset);
	Global_1668419.f_40 = Global_1668419.f_40 + 1;
	return;
}

int func_80(int iParam0) // Position - 0x8BCE (35790)
{
	return iParam0 % 32;
}

int func_81(int iParam0) // Position - 0x8BDB (35803)
{
	return iParam0 / 32;
}

int func_82(int iParam0) // Position - 0x8BE8 (35816)
{
	switch (iParam0)
	{
		case 16:
			return 0;
	
		case 17:
			return 1;
	
		case 18:
			return 2;
	
		case 19:
			return 3;
	
		case 20:
			return 4;
	
		case 21:
			return 5;
	
		case 22:
			return 6;
	
		case 23:
			return 7;
	
		case 24:
			return 8;
	
		case 25:
			return 9;
	
		case 26:
			return 10;
	
		case 27:
			return 11;
	
		case 28:
			return 12;
	
		case 29:
			return 13;
	
		case 30:
			return 14;
	
		case 31:
			return 15;
	
		case 32:
			return 16;
	
		case 33:
			return 17;
	
		case 34:
			return 18;
	
		case 35:
			return 19;
	
		case 36:
			return 20;
	
		case 37:
			return 21;
	
		case 38:
			return 22;
	
		case 39:
			return 23;
	
		case 40:
			return 24;
	
		case 41:
			return 25;
	
		case 42:
			return 26;
	
		case 43:
			return 27;
	
		case 44:
			return 28;
	
		case 45:
			return 29;
	
		case 46:
			return 30;
	
		case 47:
			return 31;
	
		case 48:
			return 32;
	
		case 49:
			return 33;
	
		case 50:
			return 34;
	
		case 51:
			return 35;
	
		case 52:
			return 36;
	
		case 53:
			return 37;
	
		case 54:
			return 38;
	
		case 55:
			return 39;
	
		case 56:
			return 40;
	
		case 57:
			return 41;
	
		case 58:
			return 42;
	
		case 59:
			return 43;
	
		case 60:
			return 44;
	
		case 61:
			return 45;
	
		case 62:
			return 46;
	
		case 63:
			return 47;
	
		case 64:
			return 48;
	
		case 65:
			return 49;
	
		case 66:
			return 50;
	
		case 67:
			return 51;
	
		case 68:
			return 52;
	
		case 69:
			return 53;
	
		case 70:
			return 54;
	
		case 71:
			return 55;
	
		case 124:
			return 56;
	
		case 125:
			return 57;
	
		case 126:
			return 58;
	
		case 127:
			return 59;
	
		case 128:
			return 60;
	
		case 129:
			return 61;
	
		case 130:
			return 62;
	
		case 131:
			return 63;
	
		case 132:
			return 64;
	
		case 133:
			return 65;
	
		case 134:
			return 66;
	
		case 135:
			return 67;
	
		case 136:
			return 68;
	
		case 137:
			return 69;
	
		case 138:
			return 70;
	
		case 139:
			return 71;
	
		case 140:
			return 72;
	
		case 141:
			return 73;
	
		case 142:
			return 74;
	
		case 143:
			return 75;
	
		case 144:
			return 76;
	
		case 145:
			return 77;
	
		case 146:
			return 78;
	
		case 147:
			return 79;
	
		case 148:
			return 80;
	
		case 149:
			return 81;
	
		case 150:
			return 82;
	
		case 151:
			return 83;
	
		case 152:
			return 84;
	
		case 153:
			return 85;
	
		case 154:
			return 86;
	
		case 155:
			return 87;
	
		case 156:
			return 88;
	
		case 157:
			return 89;
	
		case 158:
			return 90;
	
		case 159:
			return 91;
	
		case 160:
			return 92;
	
		case 161:
			return 93;
	
		case 162:
			return 94;
	
		case 163:
			return 95;
	
		case 164:
			return 96;
	
		case 165:
			return 97;
	
		case 166:
			return 98;
	
		case 167:
			return 99;
	
		case 168:
			return 100;
	
		case 169:
			return 101;
	
		case 170:
			return 102;
	
		case 171:
			return 103;
	
		case 172:
			return 104;
	
		case 173:
			return 105;
	
		case 174:
			return 106;
	
		case 175:
			return 107;
	
		case 176:
			return 108;
	
		case 177:
			return 109;
	
		case 178:
			return 110;
	
		case 179:
			return 111;
	
		case 180:
			return 112;
	
		case 181:
			return 113;
	
		case 182:
			return 114;
	
		case 183:
			return 115;
	
		case 184:
			return 116;
	
		case 185:
			return 117;
	
		case 186:
			return 118;
	
		case 187:
			return 119;
	
		case 188:
			return 120;
	
		case 189:
			return 121;
	
		case 190:
			return 122;
	
		case 191:
			return 123;
	
		case 192:
			return 124;
	
		case 193:
			return 125;
	
		case 194:
			return 126;
	
		case 195:
			return 127;
	
		case 196:
			return 128;
	
		case 197:
			return 129;
	
		case 198:
			return 130;
	
		case 199:
			return 131;
	
		case 200:
			return 132;
	
		case 201:
			return 133;
	
		case 202:
			return 134;
	
		case 203:
			return 135;
	
		case 204:
			return 136;
	
		case 205:
			return 137;
	
		case 206:
			return 138;
	
		case 207:
			return 139;
	
		case 208:
			return 140;
	
		case 209:
			return 141;
	
		case 210:
			return 142;
	
		case 211:
			return 143;
	
		case 212:
			return 144;
	
		case 213:
			return 145;
	
		case 214:
			return 146;
	
		case 215:
			return 147;
	
		case 216:
			return 148;
	
		case 217:
			return 149;
	
		case 218:
			return 150;
	
		case 219:
			return 151;
	
		case 220:
			return 152;
	
		case 221:
			return 153;
	
		case 222:
			return 154;
	
		case 223:
			return 155;
	
		case 224:
			return 156;
	
		case 225:
			return 157;
	
		case 226:
			return 158;
	
		case 227:
			return 159;
	
		case 228:
			return 160;
	
		case 229:
			return 161;
	
		case 230:
			return 162;
	
		case 231:
			return 163;
	
		case 232:
			return 164;
	
		case 233:
			return 165;
	
		case 234:
			return 166;
	
		case 235:
			return 167;
	
		case 236:
			return 168;
	
		case 237:
			return 169;
	
		case 238:
			return 170;
	
		case 239:
			return 171;
	
		case 240:
			return 172;
	
		case 241:
			return 173;
	
		case 242:
			return 174;
	
		case 243:
			return 175;
	
		case 244:
			return 176;
	
		case 245:
			return 177;
	
		case 246:
			return 178;
	
		case 247:
			return 179;
	
		case 248:
			return 180;
	
		case 249:
			return 181;
	
		case 250:
			return 182;
	
		case 251:
			return 183;
	
		case 252:
			return 184;
	
		case 253:
			return 185;
	
		case 254:
			return 186;
	
		case 255:
			return 187;
	
		case 256:
			return 188;
	
		case 257:
			return 189;
	
		case 258:
			return 190;
	
		default:
		
	}

	switch (iParam0)
	{
		case 259:
			return 191;
	
		case 260:
			return 192;
	
		case 261:
			return 193;
	
		case 262:
			return 194;
	
		case 263:
			return 195;
	
		case 264:
			return 196;
	
		case 265:
			return 197;
	
		case 266:
			return 198;
	
		case 267:
			return 199;
	
		case 268:
			return 200;
	
		case 269:
			return 201;
	
		case 270:
			return 202;
	
		case 271:
			return 203;
	
		case 272:
			return 204;
	
		case 273:
			return 205;
	
		case 274:
			return 206;
	
		case 275:
			return 207;
	
		case 276:
			return 208;
	
		case 277:
			return 209;
	
		case 278:
			return 210;
	
		case 279:
			return 211;
	
		case 280:
			return 212;
	
		case 281:
			return 213;
	
		case 282:
			return 214;
	
		case 283:
			return 215;
	
		case 284:
			return 216;
	
		case 285:
			return 217;
	
		case 286:
			return 218;
	
		case 287:
			return 219;
	
		case 288:
			return 220;
	
		case 289:
			return 221;
	
		case 290:
			return 222;
	
		case 291:
			return 223;
	
		case 292:
			return 224;
	
		case 293:
			return 225;
	
		case 294:
			return 226;
	
		case 295:
			return 227;
	
		case 296:
			return 228;
	
		case 297:
			return 229;
	
		case 298:
			return 230;
	
		case 299:
			return 231;
	
		case 300:
			return 232;
	
		case 301:
			return 233;
	
		case 302:
			return 234;
	
		case 303:
			return 235;
	
		case 304:
			return 236;
	
		case 305:
			return 237;
	
		case 306:
			return 238;
	
		case 307:
			return 239;
	
		case 308:
			return 240;
	
		case 309:
			return 241;
	
		case 310:
			return 242;
	
		case 311:
			return 243;
	
		case 312:
			return 244;
	
		case 313:
			return 245;
	
		case 314:
			return 246;
	
		case 315:
			return 247;
	
		case 316:
			return 248;
	
		case 317:
			return 249;
	
		case 318:
			return 250;
	
		case 319:
			return 251;
	
		case 320:
			return 252;
	
		case 321:
			return 253;
	
		case 322:
			return 254;
	
		case 323:
			return 255;
	
		case 324:
			return 256;
	
		case 325:
			return 257;
	
		case 326:
			return 258;
	
		case 327:
			return 259;
	
		case 328:
			return 260;
	
		case 329:
			return 261;
	
		case 330:
			return 262;
	
		case 331:
			return 263;
	
		case 332:
			return 264;
	
		case 333:
			return 265;
	
		case 334:
			return 266;
	
		case 335:
			return 267;
	
		case 336:
			return 268;
	
		case 337:
			return 269;
	
		case 338:
			return 270;
	
		case 339:
			return 271;
	
		case 340:
			return 272;
	
		case 341:
			return 273;
	
		case 342:
			return 274;
	
		case 343:
			return 275;
	
		case 344:
			return 276;
	
		case 345:
			return 277;
	
		case 346:
			return 278;
	
		case 347:
			return 279;
	
		case 348:
			return 280;
	
		case 349:
			return 281;
	
		case 350:
			return 282;
	
		case 351:
			return 283;
	
		case 352:
			return 284;
	
		case 353:
			return 285;
	
		case 354:
			return 286;
	
		case 355:
			return 287;
	
		case 356:
			return 288;
	
		case 357:
			return 289;
	
		case 358:
			return 290;
	
		case 359:
			return 291;
	
		case 360:
			return 292;
	
		case 361:
			return 293;
	
		case 362:
			return 294;
	
		case 363:
			return 295;
	
		case 364:
			return 296;
	
		case 365:
			return 297;
	
		case 366:
			return 298;
	
		case 367:
			return 299;
	
		case 368:
			return 300;
	
		case 369:
			return 301;
	
		case 370:
			return 302;
	
		case 371:
			return 303;
	
		case 111:
			return 304;
	
		case 112:
			return 305;
	
		case 113:
			return 306;
	
		case 114:
			return 307;
	
		case 115:
			return 308;
	
		case 116:
			return 309;
	
		case 117:
			return 310;
	
		case 118:
			return 311;
	
		case 119:
			return 312;
	
		case 120:
			return 313;
	
		case 121:
			return 314;
	
		case 122:
			return 315;
	
		case 123:
			return 316;
	
		case 8:
			return 317;
	
		case 9:
			return 318;
	
		case 10:
			return 319;
	
		case 11:
			return 320;
	
		case 12:
			return 321;
	
		case 13:
			return 322;
	
		case 14:
			return 323;
	
		case 15:
			return 324;
	
		case 98:
			return 325;
	
		case 99:
			return 326;
	
		case 100:
			return 327;
	
		case 101:
			return 328;
	
		case 102:
			return 329;
	
		case 103:
			return 330;
	
		case 104:
			return 331;
	
		case 105:
			return 332;
	
		case 106:
			return 333;
	
		case 107:
			return 334;
	
		case 108:
			return 335;
	
		case 109:
			return 336;
	
		case 110:
			return 337;
	
		case 85:
			return 338;
	
		case 86:
			return 339;
	
		case 87:
			return 340;
	
		case 88:
			return 341;
	
		case 89:
			return 342;
	
		case 90:
			return 343;
	
		case 91:
			return 344;
	
		case 92:
			return 345;
	
		case 93:
			return 346;
	
		case 94:
			return 347;
	
		case 95:
			return 348;
	
		case 96:
			return 349;
	
		case 97:
			return 350;
	
		case 0:
			return 351;
	
		case 1:
			return 352;
	
		case 2:
			return 353;
	
		case 3:
			return 354;
	
		case 4:
			return 355;
	
		case 5:
			return 356;
	
		case 6:
			return 357;
	
		case 7:
			return 358;
	
		case 72:
			return 359;
	
		case 73:
			return 360;
	
		case 74:
			return 361;
	
		case 75:
			return 362;
	
		case 76:
			return 363;
	
		case 77:
			return 364;
	
		case 78:
			return 365;
	
		case 79:
			return 366;
	
		case 80:
			return 367;
	
		case 81:
			return 368;
	
		case 82:
			return 369;
	
		case 83:
			return 370;
	
		case 84:
			return 371;
	
		default:
		
	}

	return 0;
}

void func_83(var uParam0) // Position - 0x9C67 (40039)
{
	int num;
	int num2;
	int num3;
	int offset;

	num = func_82(uParam0);
	num2 = func_84(num);

	if (num2 != -1)
	{
		num3 = func_81(num2);
		offset = func_80(num2);
		MISC::SET_BIT(&Global_1668419[num3], offset);
	}

	return;
}

int func_84(int iParam0) // Position - 0x9CA3 (40099)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 4:
			return 1;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 4;
	
		case 10:
			return 5;
	
		case 12:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 18:
			return 10;
	
		case 20:
			return 11;
	
		case 21:
			return 12;
	
		case 22:
			return 13;
	
		case 23:
			return 14;
	
		case 26:
			return 15;
	
		case 28:
			return 16;
	
		case 29:
			return 17;
	
		case 30:
			return 18;
	
		case 31:
			return 19;
	
		case 34:
			return 20;
	
		case 36:
			return 21;
	
		case 37:
			return 22;
	
		case 38:
			return 23;
	
		case 39:
			return 24;
	
		case 42:
			return 25;
	
		case 44:
			return 26;
	
		case 45:
			return 27;
	
		case 46:
			return 28;
	
		case 47:
			return 29;
	
		case 50:
			return 30;
	
		case 52:
			return 31;
	
		case 53:
			return 32;
	
		case 54:
			return 33;
	
		case 55:
			return 34;
	
		case 56:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 60:
			return 38;
	
		case 61:
			return 39;
	
		case 62:
			return 40;
	
		case 63:
			return 41;
	
		case 64:
			return 42;
	
		case 65:
			return 43;
	
		case 66:
			return 44;
	
		case 67:
			return 45;
	
		case 68:
			return 46;
	
		case 73:
			return 47;
	
		case 74:
			return 48;
	
		case 76:
			return 49;
	
		case 77:
			return 50;
	
		case 78:
			return 51;
	
		case 79:
			return 52;
	
		case 80:
			return 53;
	
		case 81:
			return 54;
	
		case 84:
			return 55;
	
		case 88:
			return 56;
	
		case 89:
			return 57;
	
		case 90:
			return 58;
	
		case 91:
			return 59;
	
		case 92:
			return 60;
	
		case 93:
			return 61;
	
		case 94:
			return 62;
	
		case 99:
			return 63;
	
		case 101:
			return 64;
	
		case 102:
			return 65;
	
		case 104:
			return 66;
	
		case 105:
			return 67;
	
		case 106:
			return 68;
	
		case 107:
			return 69;
	
		case 115:
			return 70;
	
		case 116:
			return 71;
	
		case 117:
			return 72;
	
		case 118:
			return 73;
	
		case 119:
			return 74;
	
		case 120:
			return 75;
	
		case 126:
			return 76;
	
		case 127:
			return 77;
	
		case 128:
			return 78;
	
		case 129:
			return 79;
	
		case 130:
			return 80;
	
		case 131:
			return 81;
	
		case 132:
			return 82;
	
		case 133:
			return 83;
	
		case 140:
			return 84;
	
		case 141:
			return 85;
	
		case 142:
			return 86;
	
		case 143:
			return 87;
	
		case 144:
			return 88;
	
		case 145:
			return 89;
	
		case 146:
			return 90;
	
		case 153:
			return 91;
	
		case 155:
			return 92;
	
		case 156:
			return 93;
	
		case 157:
			return 94;
	
		case 158:
			return 95;
	
		case 159:
			return 96;
	
		case 164:
			return 97;
	
		case 165:
			return 98;
	
		case 166:
			return 99;
	
		case 169:
			return 100;
	
		case 170:
			return 101;
	
		case 171:
			return 102;
	
		case 172:
			return 103;
	
		case 179:
			return 104;
	
		case 180:
			return 105;
	
		case 182:
			return 106;
	
		case 183:
			return 107;
	
		case 184:
			return 108;
	
		case 185:
			return 109;
	
		case 191:
			return 110;
	
		case 193:
			return 111;
	
		case 194:
			return 112;
	
		case 195:
			return 113;
	
		case 196:
			return 114;
	
		case 197:
			return 115;
	
		case 198:
			return 116;
	
		case 203:
			return 117;
	
		case 205:
			return 118;
	
		case 208:
			return 119;
	
		case 209:
			return 120;
	
		case 210:
			return 121;
	
		case 211:
			return 122;
	
		case 220:
			return 123;
	
		case 221:
			return 124;
	
		case 222:
			return 125;
	
		case 223:
			return 126;
	
		case 224:
			return 127;
	
		case 233:
			return 128;
	
		case 234:
			return 129;
	
		case 235:
			return 130;
	
		case 236:
			return 131;
	
		case 240:
			return 132;
	
		case 241:
			return 133;
	
		case 242:
			return 134;
	
		case 243:
			return 135;
	
		case 244:
			return 136;
	
		case 245:
			return 137;
	
		case 248:
			return 138;
	
		case 249:
			return 139;
	
		case 250:
			return 140;
	
		case 251:
			return 141;
	
		case 252:
			return 142;
	
		case 256:
			return 143;
	
		case 258:
			return 144;
	
		case 261:
			return 145;
	
		case 263:
			return 146;
	
		case 264:
			return 147;
	
		case 265:
			return 148;
	
		case 266:
			return 149;
	
		case 267:
			return 150;
	
		case 268:
			return 151;
	
		case 269:
			return 152;
	
		case 272:
			return 153;
	
		case 273:
			return 154;
	
		case 274:
			return 155;
	
		case 275:
			return 156;
	
		case 276:
			return 157;
	
		case 286:
			return 158;
	
		case 287:
			return 159;
	
		case 288:
			return 160;
	
		case 289:
			return 161;
	
		case 290:
			return 162;
	
		case 291:
			return 163;
	
		case 297:
			return 164;
	
		case 298:
			return 165;
	
		case 299:
			return 166;
	
		case 300:
			return 167;
	
		case 301:
			return 168;
	
		case 302:
			return 169;
	
		case 303:
			return 170;
	
		case 309:
			return 171;
	
		case 310:
			return 172;
	
		case 311:
			return 173;
	
		case 313:
			return 174;
	
		case 314:
			return 175;
	
		case 315:
			return 176;
	
		case 316:
			return 177;
	
		case 321:
			return 178;
	
		case 322:
			return 179;
	
		case 324:
			return 180;
	
		case 328:
			return 181;
	
		case 329:
			return 182;
	
		case 330:
			return 183;
	
		case 331:
			return 184;
	
		case 332:
			return 185;
	
		case 333:
			return 186;
	
		case 334:
			return 187;
	
		case 335:
			return 188;
	
		case 336:
			return 189;
	
		case 337:
			return 190;
	}

	switch (iParam0)
	{
		case 341:
			return 191;
	
		case 342:
			return 192;
	
		case 343:
			return 193;
	
		case 344:
			return 194;
	
		case 345:
			return 195;
	
		case 347:
			return 196;
	
		case 348:
			return 197;
	
		case 349:
			return 198;
	
		case 350:
			return 199;
	
		case 355:
			return 200;
	
		case 356:
			return 201;
	
		case 357:
			return 202;
	
		case 363:
			return 203;
	
		case 364:
			return 204;
	
		case 366:
			return 205;
	
		case 368:
			return 206;
	
		case 369:
			return 207;
	
		case 370:
			return 208;
	
		case 371:
			return 209;
	}

	return -1;
}

void func_85(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA82E (43054)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	Any any;
	Any any2;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_65();
	hash = func_90(uParam0.f_6 >= uParam0.f_2.f_2);
	hash2 = func_86(uParam0, uParam0.f_1, uParam0.f_2);
	any = uParam0.f_6;
	any2 = uParam0.f_2.f_2;
	STATS::_PLAYSTATS_PH_ACTIVITY(entityCoords, num, hash, hash2, any, any2);
	return;
}

Hash func_86(int iParam0, var uParam1, int iParam2) // Position - 0xA897 (43159)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "P_HUB_OBJ_", 64);

	switch (func_76(iParam0))
	{
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "H_", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SM_", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "B_", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "CM_", 64);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SS_", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "M_", 64);
			break;
	}

	switch (iParam0)
	{
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SUMMER2023", 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "PAPERTRAIL", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SUPERYACHT", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "GERALDS", 64);
			break;
	
		case 6:
			TEXT_LABEL_APPEND_STRING(&unk, "SIMEON", 64);
			break;
	
		case 7:
			TEXT_LABEL_APPEND_STRING(&unk, "MADRAZO", 64);
			break;
	
		case 8:
			TEXT_LABEL_APPEND_STRING(&unk, "LOWRIDERS", 64);
			break;
	
		case 13:
			TEXT_LABEL_APPEND_STRING(&unk, "LSDW", 64);
			break;
	
		case 14:
			TEXT_LABEL_APPEND_STRING(&unk, "CONTRACT", 64);
			break;
	
		case 15:
			TEXT_LABEL_APPEND_STRING(&unk, "AFTERHOURS", 64);
			break;
	
		case 16:
			TEXT_LABEL_APPEND_STRING(&unk, "SMUGGLER", 64);
			break;
	
		case 17:
			TEXT_LABEL_APPEND_STRING(&unk, "GUNRUNNING", 64);
			break;
	
		case 18:
			TEXT_LABEL_APPEND_STRING(&unk, "IMPORTEXPORT", 64);
			break;
	
		case 19:
			TEXT_LABEL_APPEND_STRING(&unk, "BIKERS", 64);
			break;
	
		case 20:
			TEXT_LABEL_APPEND_STRING(&unk, "FAIFAF", 64);
			break;
	
		case 21:
			TEXT_LABEL_APPEND_STRING(&unk, "TUNERS", 64);
			break;
	
		case 22:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 23:
			TEXT_LABEL_APPEND_STRING(&unk, "CAYOPERICO", 64);
			break;
	
		case 24:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 25:
			TEXT_LABEL_APPEND_STRING(&unk, "DOOMSDAY", 64);
			break;
	
		case 26:
			TEXT_LABEL_APPEND_STRING(&unk, "HEISTS", 64);
			break;
	
		case 27:
			TEXT_LABEL_APPEND_STRING(&unk, "ARENAWAR", 64);
			break;
	
		case 28:
			TEXT_LABEL_APPEND_STRING(&unk, "ADVERSARY", 64);
			break;
	
		case 29:
			TEXT_LABEL_APPEND_STRING(&unk, "SURVIVALS", 64);
			break;
	
		case 30:
			TEXT_LABEL_APPEND_STRING(&unk, "RACING", 64);
			break;
	
		case 31:
			TEXT_LABEL_APPEND_STRING(&unk, "DEATHMATCHES", 64);
			break;
	
		case 32:
			TEXT_LABEL_APPEND_STRING(&unk, "VEHICLE", 64);
			break;
	
		case 33:
			TEXT_LABEL_APPEND_STRING(&unk, "WEAPON", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "CHICKEN", 64);
			break;
	
		case 12:
			TEXT_LABEL_APPEND_STRING(&unk, "SALVAGE", 64);
			break;
	
		case 11:
			TEXT_LABEL_APPEND_STRING(&unk, "BAIL_OFFICE", 64);
			break;
	
		case 10:
			TEXT_LABEL_APPEND_STRING(&unk, "HACKER_DEN", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "FIELD_HANGAR", 64);
			break;
	
		case 9:
			TEXT_LABEL_APPEND_STRING(&unk, "BUSINESS_TYCOON", 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_89(uParam1), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OBJ_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_87((iParam2 - func_77(iParam0, uParam1, 0)) + 1), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_87(int iParam0) // Position - 0xAB97 (43927)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 16);
	return func_88(&unk);
}

char* func_88(var uParam0) // Position - 0xABB3 (43955)
{
	return uParam0;
}

char* func_89(int iParam0) // Position - 0xABBD (43965)
{
	switch (iParam0)
	{
		case 0:
			return "TIER_1";
	
		case 1:
			return "TIER_2";
	
		case 2:
			return "TIER_3";
	
		case 3:
			return "TIER_4";
	
		case 4:
			return "TIER_MAX";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_90(BOOL bParam0) // Position - 0xAC11 (44049)
{
	if (bParam0)
		return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_COMPLETED");

	return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_UPDATED");
}

ePedComponentType func_91(int iParam0, int iParam1) // Position - 0xAC34 (44084)
{
	int i;
	ePedComponentType type;
	ePedComponentType type2;
	int j;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_1 > PV_COMP_HEAD)
			return Global_1985099.f_1[i /*14*/].f_1;
	}

	type = PV_COMP_HEAD;
	type2 = PV_COMP_HEAD;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
					if (_STAT_GET_PACKED_BOOL(54653, -1))
						type = PV_COMP_BERD;
					break;
			
				case 73:
					type2 = func_115(13035, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 74:
					type2 = _STAT_GET_PACKED_INT(24928, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 75:
					type2 = func_115(13037, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 76:
					type = _STAT_GET_PACKED_INT(24928, -1);
					break;
			
				case 77:
					type = func_115(13040, -1);
					break;
			
				case 78:
					type2 = func_115(13036, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 79:
					type = func_115(13066, -1);
					break;
			
				case 80:
					if (_STAT_GET_PACKED_BOOL(28313, -1) || _STAT_GET_PACKED_BOOL(28314, -1) || _STAT_GET_PACKED_BOOL(28315, -1) || _STAT_GET_PACKED_BOOL(28316, -1) || _STAT_GET_PACKED_BOOL(28317, -1) || _STAT_GET_PACKED_BOOL(28318, -1))
						type = PV_COMP_BERD;
					break;
			
				case 81:
					type = _STAT_GET_PACKED_INT(24929, -1);
					break;
			
				case 82:
					if (_STAT_GET_PACKED_BOOL(28313, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28314, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28315, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28316, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28317, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28318, -1))
						type = type + 1;
					break;
			
				case 83:
					type = func_115(13066, -1);
					break;
			
				case 84:
					type = func_115(13040, -1);
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
					type2 = func_115(12442, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 86:
					if (_STAT_GET_PACKED_BOOL(9539, -1))
						type = PV_COMP_BERD;
					break;
			
				case 87:
					type2 = _STAT_GET_PACKED_INT(24903, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 88:
					type = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 89:
					type = _STAT_GET_PACKED_INT(24904, -1);
					break;
			
				case 90:
					type = func_115(12459, -1);
					break;
			
				case 91:
					type2 = func_115(12444, -1);
				
					if (IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 6))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 7) || IS_BIT_SET(type2, 8))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 9) || IS_BIT_SET(type2, 10))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 11) || IS_BIT_SET(type2, 12))
						type = type + 1;
					break;
			
				case 92:
					if (_STAT_GET_PACKED_BOOL(9549, -1))
					{
						type = PV_COMP_HAIR;
					}
					else
					{
						type = type + func_105(_STAT_GET_PACKED_BOOL(9547, -1));
						type = type + func_105(_STAT_GET_PACKED_BOOL(9548, -1));
					
						if (type == PV_COMP_HAIR)
							_STAT_SET_PACKED_BOOL(9549, true, -1);
					}
					break;
			
				case 93:
					if (_STAT_GET_PACKED_BOOL(9542, -1))
						type = PV_COMP_BERD;
					break;
			
				case 94:
					type = _STAT_GET_PACKED_INT(24905, -1);
					break;
			
				case 95:
					type = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 96:
					if (_STAT_GET_PACKED_BOOL(9543, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9544, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9545, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9546, -1))
						type = type + 1;
					break;
			
				case 97:
					type = func_115(12459, -1);
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					if (_STAT_GET_PACKED_BOOL(51280, -1))
						type = PV_COMP_BERD;
					break;
			
				case 1:
					if (_STAT_GET_PACKED_BOOL(51285, -1))
						type = PV_COMP_BERD;
					break;
			
				case 2:
					if (_STAT_GET_PACKED_BOOL(51278, -1))
						type = PV_COMP_BERD;
					break;
			
				case 3:
					if (_STAT_GET_PACKED_BOOL(51286, -1) || _STAT_GET_PACKED_BOOL(51287, -1) || _STAT_GET_PACKED_BOOL(51288, -1) || _STAT_GET_PACKED_BOOL(51289, -1) || _STAT_GET_PACKED_BOOL(51290, -1) || _STAT_GET_PACKED_BOOL(51291, -1))
						type = PV_COMP_BERD;
					break;
			
				case 4:
					if (_STAT_GET_PACKED_BOOL(51286, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51287, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51288, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51289, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51290, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51291, -1))
						type = type + 1;
					break;
			
				case 5:
					type = func_115(12460, -1);
					break;
			
				case 6:
					if (_STAT_GET_PACKED_BOOL(51292, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51293, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51294, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51295, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51296, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51297, -1))
						type = type + 1;
					break;
			
				case 7:
					if (_STAT_GET_PACKED_BOOL(51279, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
					type2 = func_115(12241, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 99:
					if (_STAT_GET_PACKED_BOOL(9537, -1))
						type = PV_COMP_BERD;
					break;
			
				case 100:
					if (_STAT_GET_PACKED_BOOL(7639, -1))
						type = PV_COMP_BERD;
					break;
			
				case 101:
					type = _STAT_GET_PACKED_INT(7669, -1);
					break;
			
				case 102:
					type = _STAT_GET_PACKED_INT(7672, -1);
					break;
			
				case 103:
					type = func_115(12307, -1);
					break;
			
				case 104:
					type = _STAT_GET_PACKED_INT(7670, -1);
					break;
			
				case 105:
					type = _STAT_GET_PACKED_INT(7674, -1);
					break;
			
				case 106:
					type = _STAT_GET_PACKED_INT(7671, -1);
					break;
			
				case 107:
					type = _STAT_GET_PACKED_INT(26809, -1);
					break;
			
				case 108:
					type2 = func_115(12308, -1);
					j = 0;
				
					for (j = 0; j < 24; j = j + 1)
					{
						if (IS_BIT_SET(type2, j))
							type = type + 1;
					}
					break;
			
				case 109:
					type = func_115(12253, -1);
					break;
			
				case 110:
					type = func_115(12307, -1);
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
					type2 = func_115(12032, -1);
				
					if (type2 > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 112:
					if (_STAT_GET_PACKED_BOOL(42038, -1))
						type = PV_COMP_BERD;
					break;
			
				case 113:
					if (_STAT_GET_PACKED_BOOL(42041, -1))
						type = PV_COMP_BERD;
					break;
			
				case 114:
					if (_STAT_GET_PACKED_BOOL(42044, -1))
						type = PV_COMP_BERD;
					break;
			
				case 115:
					if (_STAT_GET_PACKED_BOOL(42045, -1))
						type = PV_COMP_BERD;
					break;
			
				case 116:
					type = func_115(12044, -1);
					type = type + func_115(12042, -1);
					break;
			
				case 117:
					if (_STAT_GET_PACKED_BOOL(42042, -1))
					{
						type = PV_COMP_HAND;
					}
					else
					{
						type2 = func_115(12033, -1);
					
						if (IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 6))
							type = type + 1;
					
						if (IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 7))
							type = type + 1;
					
						if (IS_BIT_SET(type2, 3) || IS_BIT_SET(type2, 8))
							type = type + 1;
					
						if (IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 9))
							type = type + 1;
					
						if (IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 10))
							type = type + 1;
					
						if (type == PV_COMP_HAND)
							_STAT_SET_PACKED_BOOL(42042, true, -1);
					}
					break;
			
				case 118:
					type = func_115(12045, -1);
					break;
			
				case 119:
					if (_STAT_GET_PACKED_BOOL(42046, -1))
						type = PV_COMP_BERD;
					break;
			
				case 120:
					type = _STAT_GET_PACKED_INT(51052, -1);
					break;
			
				case 121:
					type = func_115(12044, -1);
					type = type + func_115(12042, -1);
					break;
			
				case 122:
					if (_STAT_GET_PACKED_BOOL(42047, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42048, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42049, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42050, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42051, -1))
						type = type + 1;
					break;
			
				case 123:
					type = func_115(12043, -1);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
					if (_STAT_GET_PACKED_BOOL(28272, -1))
						type = PV_COMP_BERD;
					break;
			
				case 9:
					if (_STAT_GET_PACKED_BOOL(28287, -1))
						type = PV_COMP_BERD;
					break;
			
				case 10:
					if (_STAT_GET_PACKED_BOOL(28286, -1))
						type = PV_COMP_BERD;
					break;
			
				case 11:
					if (_STAT_GET_PACKED_BOOL(28285, -1))
						type = PV_COMP_BERD;
					break;
			
				case 12:
					if (_STAT_GET_PACKED_BOOL(28284, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28283, -1))
						type = type + 1;
					break;
			
				case 13:
					type = func_115(12187, -1);
					break;
			
				case 14:
					if (_STAT_GET_PACKED_BOOL(28282, -1))
						type = PV_COMP_BERD;
					break;
			
				case 15:
					if (_STAT_GET_PACKED_BOOL(28273, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28274, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28275, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28276, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28277, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28278, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28279, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28280, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28281, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
					type2 = func_115(11950, -1);
				
					if (IS_BIT_SET(type2, 0) || IS_BIT_SET(type2, 6) || IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 7) || IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 8) || IS_BIT_SET(type2, 3) || IS_BIT_SET(type2, 9) || IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 10) || IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 11))
						type = PV_COMP_BERD;
					break;
			
				case 17:
					if (_STAT_GET_PACKED_BOOL(41566, -1))
						type = PV_COMP_BERD;
					break;
			
				case 18:
					type2 = func_115(11950, -1);
				
					if (IS_BIT_SET(type2, 0) || IS_BIT_SET(type2, 6))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 7))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 8))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 3) || IS_BIT_SET(type2, 9))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 10))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 11))
						type = type + 1;
					break;
			
				case 19:
					if (_STAT_GET_PACKED_BOOL(41706, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(2, 20) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41706, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 20:
					if (_STAT_GET_PACKED_BOOL(41567, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41568, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41569, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41570, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41571, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41572, -1))
						type = type + 1;
					break;
			
				case 21:
					if (_STAT_GET_PACKED_BOOL(41573, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41574, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41575, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41576, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41577, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41578, -1))
						type = type + 1;
					break;
			
				case 22:
					if (_STAT_GET_PACKED_BOOL(41579, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41580, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41581, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41582, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41583, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41584, -1))
						type = type + 1;
					break;
			
				case 23:
					if (_STAT_GET_PACKED_BOOL(41585, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41586, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41587, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41588, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41589, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41590, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
					if (func_115(5448, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 177:
					if (func_115(5453, -1) > PV_COMP_BERD)
						type = PV_COMP_BERD;
					break;
			
				case 178:
					if (_STAT_GET_PACKED_INT(9359, -1) > 0)
						type = PV_COMP_BERD;
					break;
			
				case 179:
					if (_STAT_GET_PACKED_BOOL(36870, -1))
						type = PV_COMP_BERD;
					break;
			
				case 180:
					if (func_115(5465, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 181:
					if (func_115(5457, -1) >= PV_COMP_BERD || func_115(5455, -1) >= PV_COMP_BERD)
						type = PV_COMP_BERD;
					break;
			
				case 182:
					type2 = func_115(5395, -1);
				
					if (IS_BIT_SET(type2, 0) && IS_BIT_SET(type2, 1) && IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 3) && IS_BIT_SET(type2, 4) && IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 6) && IS_BIT_SET(type2, 7) && IS_BIT_SET(type2, 8) || IS_BIT_SET(type2, 9) && IS_BIT_SET(type2, 10) && IS_BIT_SET(type2, 11) || IS_BIT_SET(type2, 12) && IS_BIT_SET(type2, 13) && IS_BIT_SET(type2, 14) || IS_BIT_SET(type2, 15) && IS_BIT_SET(type2, 16) && IS_BIT_SET(type2, 17))
						type = PV_COMP_BERD;
					break;
			
				case 183:
					type = func_115(5453, -1);
					break;
			
				case 184:
					type = func_104();
					break;
			
				case 185:
					if (_STAT_GET_PACKED_BOOL(36831, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36832, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36833, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36834, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36835, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36836, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36837, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36838, -1))
						type = type + 1;
					break;
			
				case 186:
					type2 = func_115(5395, -1);
					type = func_102(type2);
					break;
			
				case 187:
					type = _STAT_GET_PACKED_INT(9359, -1);
					break;
			
				case 188:
					type = func_115(5459, -1);
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
					if (func_115(12031, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 323:
					if (_STAT_GET_PACKED_BOOL(41672, -1))
						type = PV_COMP_BERD;
					break;
			
				case 324:
					type = func_115(11922, -1);
					break;
			
				case 325:
					if (func_116(48, -1) >= PV_COMP_DECL)
						type = PV_COMP_BERD;
					break;
			
				case 326:
					if (_STAT_GET_PACKED_BOOL(41673, -1))
					{
						type = 100;
					}
					else
					{
						type = func_115(11947, -1);
					
						if (type >= 100)
							_STAT_SET_PACKED_BOOL(41673, true, -1);
					}
					break;
			
				case 327:
					type = _STAT_GET_PACKED_BOOL(41332, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 328:
					type = _STAT_GET_PACKED_BOOL(41331, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 329:
					type = func_115(11922, -1);
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
					if (func_115(1209, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 339:
					if (func_115(11921, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 340:
					type = func_116(40, -1) + func_116(41, -1);
					break;
			
				case 341:
					type = func_115(11920, -1);
					break;
			
				case 342:
					type = func_116(40, -1) + func_116(41, -1);
					break;
			
				case 343:
					type = func_115(11965, -1);
					break;
			
				case 344:
					type = func_116(40, -1) + func_116(41, -1);
					break;
			
				case 345:
					if (_STAT_GET_PACKED_BOOL(36922, -1))
					{
						type = PV_COMP_BERD;
					}
					else
					{
						type = func_115(11919, -1);
					
						if (type >= PV_COMP_HAND)
						{
							_STAT_SET_PACKED_BOOL(36922, true, -1);
							type = PV_COMP_BERD;
						}
						else
						{
							type = PV_COMP_HEAD;
						}
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					type2 = func_115(12462, -1);
				
					if (IS_BIT_SET(type2, 0) || IS_BIT_SET(type2, 11))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 12))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 13))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 3) || IS_BIT_SET(type2, 14))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 15))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 16))
						type = type + 1;
					break;
			
				case 125:
					if (_STAT_GET_PACKED_BOOL(42037, -1))
						type = PV_COMP_BERD;
					break;
			
				case 126:
					type = func_115(11811, -1);
					break;
			
				case 127:
					type2 = func_115(12462, -1);
				
					if (IS_BIT_SET(type2, 6) || IS_BIT_SET(type2, 17))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 7) || IS_BIT_SET(type2, 18))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 8) || IS_BIT_SET(type2, 19))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 9) || IS_BIT_SET(type2, 20))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 10) || IS_BIT_SET(type2, 21))
						type = type + 1;
					break;
			
				case 128:
					type2 = func_115(10872, -1);
				
					if (IS_BIT_SET(type2, 20))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 21))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 22))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 23))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 24))
						type = type + 1;
					break;
			
				case 129:
					type = func_115(11815, -1);
					break;
			
				case 130:
					type2 = func_115(10872, -1);
				
					if (IS_BIT_SET(type2, 0))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 20) && IS_BIT_SET(type2, 21) && IS_BIT_SET(type2, 22) && IS_BIT_SET(type2, 23) && IS_BIT_SET(type2, 24))
						type = type + 1;
				
					if (func_115(11811, -1) >= PV_COMP_DECL)
						type = type + 1;
				
					if (func_115(11813, -1) >= PV_COMP_DECL)
						type = type + 1;
				
					if (_STAT_GET_PACKED_INT(41241, -1) >= 5)
						type = type + 1;
				
					type2 = func_115(12462, -1);
				
					if (IS_BIT_SET(type2, 5))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 10))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 26))
						type = type + 1;
				
					if (func_115(11815, -1) >= 1000000)
						type = type + 1;
				
					if (type == PV_COMP_TASK)
						type = type + 1;
					break;
			
				case 131:
					type = func_115(11928, -1);
					break;
			
				case 132:
					type = func_115(11927, -1);
					break;
			
				case 133:
					type = _STAT_GET_PACKED_INT(42084, -1);
					break;
			
				case 134:
					type = func_115(11811, -1);
					break;
			
				case 135:
					if (_STAT_GET_PACKED_BOOL(41660, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41661, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41662, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41663, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41664, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41665, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41666, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41667, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41668, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41669, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41670, -1))
						type = type + 1;
					break;
			
				case 136:
					type = func_115(11815, -1);
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
					if (func_115(10394, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 25:
					if (_STAT_GET_PACKED_BOOL(41333, -1) || _STAT_GET_PACKED_BOOL(41334, -1) || _STAT_GET_PACKED_BOOL(41335, -1) || _STAT_GET_PACKED_BOOL(41336, -1) || _STAT_GET_PACKED_BOOL(41337, -1) || _STAT_GET_PACKED_BOOL(41338, -1))
						type = PV_COMP_BERD;
					break;
			
				case 26:
					type2 = func_115(10394, -1);
				
					if (IS_BIT_SET(type2, 0) || IS_BIT_SET(type2, 7))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 8))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 2) || IS_BIT_SET(type2, 9))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 3) || IS_BIT_SET(type2, 10))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 11))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 5) || IS_BIT_SET(type2, 12))
						type = type + 1;
					break;
			
				case 27:
					if (_STAT_GET_PACKED_BOOL(41707, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(3, 28) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41707, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 28:
					if (_STAT_GET_PACKED_BOOL(41339, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41340, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41341, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41342, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41343, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41344, -1))
						type = type + 1;
					break;
			
				case 29:
					if (_STAT_GET_PACKED_BOOL(41345, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41346, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41347, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41348, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41349, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41350, -1))
						type = type + 1;
					break;
			
				case 30:
					if (_STAT_GET_PACKED_BOOL(41351, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41352, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41353, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41354, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41355, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41356, -1))
						type = type + 1;
					break;
			
				case 31:
					if (_STAT_GET_PACKED_BOOL(41357, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41358, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41359, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41360, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41361, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41362, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
					if (func_115(8977, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 33:
					if (_STAT_GET_PACKED_BOOL(41379, -1))
						type = PV_COMP_BERD;
					break;
			
				case 34:
					type2 = func_115(8977, -1);
				
					if (IS_BIT_SET(type2, 4) || IS_BIT_SET(type2, 5))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 6) || IS_BIT_SET(type2, 7))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 8) || IS_BIT_SET(type2, 9))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 10) || IS_BIT_SET(type2, 11))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 12) || IS_BIT_SET(type2, 13))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 14) || IS_BIT_SET(type2, 15))
						type = type + 1;
					break;
			
				case 35:
					if (_STAT_GET_PACKED_BOOL(41708, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(4, 36) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41708, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 36:
					if (_STAT_GET_PACKED_BOOL(41380, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41381, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41382, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41383, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41384, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41385, -1))
						type = type + 1;
					break;
			
				case 37:
					if (_STAT_GET_PACKED_BOOL(41386, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41387, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41388, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41389, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41390, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41391, -1))
						type = type + 1;
					break;
			
				case 38:
					if (_STAT_GET_PACKED_BOOL(41392, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41393, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41394, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41395, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41396, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41397, -1))
						type = type + 1;
					break;
			
				case 39:
					if (_STAT_GET_PACKED_BOOL(41398, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41399, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41400, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41401, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41402, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41403, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
					if (_STAT_GET_PACKED_BOOL(41404, -1) || _STAT_GET_PACKED_BOOL(41405, -1) || _STAT_GET_PACKED_BOOL(41406, -1) || _STAT_GET_PACKED_BOOL(41407, -1) || _STAT_GET_PACKED_BOOL(41408, -1) || _STAT_GET_PACKED_BOOL(41409, -1))
						type = PV_COMP_BERD;
					break;
			
				case 41:
					if (_STAT_GET_PACKED_BOOL(41410, -1))
						type = PV_COMP_BERD;
					break;
			
				case 42:
					if (_STAT_GET_PACKED_BOOL(41404, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41405, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41406, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41407, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41408, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41409, -1))
						type = type + 1;
					break;
			
				case 43:
					if (_STAT_GET_PACKED_BOOL(41709, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(5, 44) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41709, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 44:
					if (_STAT_GET_PACKED_BOOL(41411, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41412, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41413, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41414, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41415, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41416, -1))
						type = type + 1;
					break;
			
				case 45:
					if (_STAT_GET_PACKED_BOOL(41417, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41418, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41419, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41420, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41421, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41422, -1))
						type = type + 1;
					break;
			
				case 46:
					if (_STAT_GET_PACKED_BOOL(41423, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41424, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41425, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41426, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41427, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41428, -1))
						type = type + 1;
					break;
			
				case 47:
					if (_STAT_GET_PACKED_BOOL(41429, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41430, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41431, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41432, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41433, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41434, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
					if (_STAT_GET_PACKED_BOOL(41436, -1) || _STAT_GET_PACKED_BOOL(41437, -1) || _STAT_GET_PACKED_BOOL(41438, -1) || _STAT_GET_PACKED_BOOL(41439, -1) || _STAT_GET_PACKED_BOOL(41440, -1) || _STAT_GET_PACKED_BOOL(41441, -1) || _STAT_GET_PACKED_BOOL(41442, -1) || _STAT_GET_PACKED_BOOL(41443, -1))
						type = PV_COMP_BERD;
					break;
			
				case 49:
					if (_STAT_GET_PACKED_BOOL(41435, -1))
						type = PV_COMP_BERD;
					break;
			
				case 50:
					if (_STAT_GET_PACKED_BOOL(41436, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41437, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41438, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41439, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41440, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41441, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41442, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41443, -1))
						type = type + 1;
					break;
			
				case 51:
					if (_STAT_GET_PACKED_BOOL(41705, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(6, 52) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41705, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 52:
					if (_STAT_GET_PACKED_BOOL(41444, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41445, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41446, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41447, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41448, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41449, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41450, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41451, -1))
						type = type + 1;
					break;
			
				case 53:
					if (_STAT_GET_PACKED_BOOL(41452, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41453, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41454, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41455, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41456, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41457, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41458, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41459, -1))
						type = type + 1;
					break;
			
				case 54:
					if (_STAT_GET_PACKED_BOOL(41460, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41461, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41462, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41463, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41464, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41465, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41466, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41467, -1))
						type = type + 1;
					break;
			
				case 55:
					if (_STAT_GET_PACKED_BOOL(41468, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41469, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41470, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41471, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41472, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41473, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41474, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41475, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
					if (_STAT_GET_PACKED_BOOL(41476, -1) || _STAT_GET_PACKED_BOOL(41477, -1) || _STAT_GET_PACKED_BOOL(41478, -1) || _STAT_GET_PACKED_BOOL(41479, -1) || _STAT_GET_PACKED_BOOL(41480, -1) || _STAT_GET_PACKED_BOOL(41481, -1))
						type = PV_COMP_BERD;
					break;
			
				case 57:
					if (_STAT_GET_PACKED_BOOL(41506, -1))
						type = PV_COMP_BERD;
					break;
			
				case 58:
					if (_STAT_GET_PACKED_BOOL(41476, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41477, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41478, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41479, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41480, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41481, -1))
						type = type + 1;
					break;
			
				case 59:
					if (_STAT_GET_PACKED_BOOL(41710, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(7, 60) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41710, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 60:
					if (_STAT_GET_PACKED_BOOL(41482, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41483, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41484, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41485, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41486, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41487, -1))
						type = type + 1;
					break;
			
				case 61:
					if (_STAT_GET_PACKED_BOOL(41488, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41489, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41490, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41491, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41492, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41493, -1))
						type = type + 1;
					break;
			
				case 62:
					if (_STAT_GET_PACKED_BOOL(41494, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41495, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41496, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41497, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41498, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41499, -1))
						type = type + 1;
					break;
			
				case 63:
					if (_STAT_GET_PACKED_BOOL(41500, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41501, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41502, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41503, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41504, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41505, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
					if (_STAT_GET_PACKED_BOOL(42015, -1) || _STAT_GET_PACKED_BOOL(42016, -1) || _STAT_GET_PACKED_BOOL(42017, -1) || _STAT_GET_PACKED_BOOL(42018, -1) || _STAT_GET_PACKED_BOOL(42019, -1) || _STAT_GET_PACKED_BOOL(42020, -1) || _STAT_GET_PACKED_BOOL(42021, -1) || _STAT_GET_PACKED_BOOL(42022, -1))
						type = PV_COMP_BERD;
					break;
			
				case 65:
					if (_STAT_GET_PACKED_BOOL(41539, -1))
						type = PV_COMP_BERD;
					break;
			
				case 66:
					if (_STAT_GET_PACKED_BOOL(42015, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42016, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42017, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42018, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42019, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42020, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42021, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42022, -1))
						type = type + 1;
					break;
			
				case 67:
					if (_STAT_GET_PACKED_BOOL(41711, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_91(8, 68) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41711, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 68:
					if (_STAT_GET_PACKED_BOOL(41507, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41508, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41509, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41510, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41511, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41512, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41513, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41514, -1))
						type = type + 1;
					break;
			
				case 69:
					if (_STAT_GET_PACKED_BOOL(41515, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41516, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41517, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41518, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41519, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41520, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41521, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41522, -1))
						type = type + 1;
					break;
			
				case 70:
					if (_STAT_GET_PACKED_BOOL(41523, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41524, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41525, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41526, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41527, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41528, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41529, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41530, -1))
						type = type + 1;
					break;
			
				case 71:
					if (_STAT_GET_PACKED_BOOL(41531, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41532, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41533, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41534, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41535, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41536, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41537, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41538, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					if (_STAT_GET_PACKED_BOOL(36934, -1))
					{
						type = PV_COMP_HAND;
					}
					else
					{
						type = _STAT_GET_PACKED_INT(41248, -1);
					
						if (type >= PV_COMP_HAND)
						{
							_STAT_SET_PACKED_BOOL(36934, true, -1);
							type = PV_COMP_HAND;
						}
					}
					break;
			
				case 360:
					if (_STAT_GET_PACKED_BOOL(36935, -1))
						type = PV_COMP_BERD;
					break;
			
				case 361:
					if (_STAT_GET_PACKED_BOOL(36936, -1))
						type = PV_COMP_BERD;
					break;
			
				case 362:
					if (_STAT_GET_PACKED_BOOL(36937, -1))
						type = PV_COMP_BERD;
					break;
			
				case 363:
					type = _STAT_GET_PACKED_BOOL(36938, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 364:
					type = _STAT_GET_PACKED_BOOL(36920, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 365:
					type = func_102(func_115(11964, -1));
					break;
			
				case 366:
					type = func_98();
					break;
			
				case 367:
					if (_STAT_GET_PACKED_BOOL(36942, -1))
					{
						type = PV_COMP_DECL;
					}
					else if (_STAT_GET_PACKED_BOOL(36946, -1))
					{
						type = func_97();
						_STAT_SET_PACKED_BOOL(36946, false, -1);
					}
					else
					{
						type = func_95();
					}
					break;
			
				case 368:
					type = func_115(11963, -1);
					break;
			
				case 369:
					type = func_104();
					break;
			
				case 370:
					if (_STAT_GET_PACKED_BOOL(36941, -1))
					{
						type = 50;
					}
					else
					{
						type = _STAT_GET_PACKED_INT(41248, -1);
					
						if (type >= 50)
						{
							_STAT_SET_PACKED_BOOL(36941, true, -1);
							type = 50;
						}
					}
					break;
			
				case 371:
					if (_STAT_GET_PACKED_BOOL(15456, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15457, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15458, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15459, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15460, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
					type = _STAT_GET_PACKED_BOOL(28257, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 138:
					if (func_115(9910, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 139:
					if (IS_BIT_SET(func_115(9905, -1), 0))
						type = PV_COMP_BERD;
					break;
			
				case 140:
					if (func_92(128, -1) || func_92(129, -1) || func_92(130, -1))
						type = PV_COMP_BERD;
					break;
			
				case 141:
					type = func_116(118, -1);
					break;
			
				case 142:
					type = func_115(9910, -1);
					break;
			
				case 143:
					if (IS_BIT_SET(func_115(9905, -1), 2))
						type = PV_COMP_BERD;
					break;
			
				case 144:
					type = func_115(11930, -1);
					break;
			
				case 145:
					if (func_92(134, -1))
						type = type + 1;
				
					if (func_92(135, -1))
						type = type + 1;
				
					if (func_92(136, -1))
						type = type + 1;
				
					if (func_92(140, -1))
						type = type + 1;
				
					if (func_92(141, -1))
						type = type + 1;
				
					if (func_92(142, -1))
						type = type + 1;
					break;
			
				case 146:
					type = _STAT_GET_PACKED_INT(42085, -1);
					break;
			
				case 147:
					type = func_115(11931, -1);
					break;
			
				case 148:
					type = func_115(11930, -1);
					break;
			
				case 149:
					type = func_115(9911, -1);
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
					if (func_115(9631, -1) == PV_COMP_BERD && _STAT_GET_PACKED_BOOL(31737, -1))
						type = PV_COMP_BERD;
					break;
			
				case 229:
					if (_STAT_GET_PACKED_BOOL(41870, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_116(111, -1) > PV_COMP_HEAD)
					{
						type = PV_COMP_BERD;
						_STAT_SET_PACKED_BOOL(41870, true, -1);
					}
					break;
			
				case 230:
					type = _STAT_GET_PACKED_BOOL(31753, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 231:
					if (func_115(9620, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 232:
					type = func_116(112, -1);
					break;
			
				case 233:
					type = func_116(107, -1);
					break;
			
				case 234:
					type = func_102(func_115(9620, -1));
					break;
			
				case 235:
					type = _STAT_GET_PACKED_BOOL(32397, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 236:
					type = func_92(114, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 237:
					type = _STAT_GET_PACKED_INT(30226, -1);
					break;
			
				case 238:
					type = func_115(9622, -1);
					break;
			
				case 239:
					type = func_115(11932, -1);
					break;
			
				case 240:
					type = func_116(107, -1);
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
					type = _STAT_GET_PACKED_BOOL(30309, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 255:
					type = _STAT_GET_PACKED_BOOL(30522, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 256:
					if (IS_BIT_SET(func_115(9526, -1), 0) || IS_BIT_SET(func_115(9511, -1), 1))
						type = PV_COMP_BERD;
					break;
			
				case 257:
					if (IS_BIT_SET(func_115(9511, -1), 1))
						type = PV_COMP_BERD;
					break;
			
				case 258:
					if (func_115(9586, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 259:
					type = func_116(100, -1);
					break;
			
				case 260:
					type = _STAT_GET_PACKED_BOOL(41677, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 261:
					type = func_115(11933, -1);
					break;
			
				case 262:
					type = func_102(func_115(9586, -1));
					break;
			
				case 263:
					type = _STAT_GET_PACKED_INT(42094, -1);
					break;
			
				case 264:
					type2 = func_115(9511, -1);
				
					if (IS_BIT_SET(type2, 7))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 8))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 9))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 11))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 6))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 10))
						type = type + 1;
					break;
			
				case 265:
					if (func_115(9544, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(9545, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(9546, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(9547, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(9548, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(9549, -1) > PV_COMP_HEAD)
						type = type + 1;
					break;
			
				case 266:
					type = func_115(11926, -1);
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
					type2 = func_115(8726, -1);
				
					if (func_102(type2) > PV_COMP_BERD || IS_BIT_SET(type2, 1))
						type = PV_COMP_BERD;
					break;
			
				case 268:
					if (_STAT_GET_PACKED_BOOL(28270, -1))
						type = PV_COMP_BERD;
					break;
			
				case 269:
					if (_STAT_GET_PACKED_BOOL(36842, -1))
						type = PV_COMP_BERD;
					break;
			
				case 270:
					if (IS_BIT_SET(func_115(8726, -1), 10))
						type = PV_COMP_BERD;
					break;
			
				case 271:
					type = func_116(88, -1);
					break;
			
				case 272:
					if (_STAT_GET_PACKED_BOOL(32399, -1))
						type = PV_COMP_BERD;
					break;
			
				case 273:
					type2 = func_115(8726, -1);
				
					if (IS_BIT_SET(type2, 11))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 12))
						type = type + 1;
				
					if (IS_BIT_SET(type2, 13))
						type = type + 1;
					break;
			
				case 274:
					if (func_92(64, -1))
						type = PV_COMP_BERD;
					break;
			
				case 275:
					if (_STAT_GET_PACKED_BOOL(42025, -1))
						type = PV_COMP_BERD;
					break;
			
				case 276:
					type = _STAT_GET_PACKED_INT(42086, -1);
					break;
			
				case 277:
					if (_STAT_GET_PACKED_BOOL(41678, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41679, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41680, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41681, -1))
						type = type + 1;
					break;
			
				case 278:
					type = func_115(11925, -1);
					break;
			
				case 279:
					type = func_116(90, -1);
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
					if (_STAT_GET_PACKED_BOOL(27089, -1))
						type = PV_COMP_BERD;
					break;
			
				case 242:
					if (_STAT_GET_PACKED_BOOL(27090, -1))
						type = PV_COMP_BERD;
					break;
			
				case 243:
					type2 = func_115(8283, -1);
				
					if (IS_BIT_SET(type2, 6) || IS_BIT_SET(type2, 12))
						type = PV_COMP_BERD;
					break;
			
				case 244:
					type2 = func_115(8283, -1);
				
					if (IS_BIT_SET(type2, 11) || IS_BIT_SET(type2, 17))
						type = PV_COMP_BERD;
					break;
			
				case 245:
					if (_STAT_GET_PACKED_BOOL(36916, -1))
						type = PV_COMP_BERD;
					break;
			
				case 246:
					if (func_116(87, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 247:
					if (_STAT_GET_PACKED_BOOL(36844, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36845, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36846, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36847, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36848, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36849, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36850, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36851, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36852, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36853, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36854, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36855, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36856, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36857, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36858, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36859, -1))
						type = type + 1;
					break;
			
				case 248:
					if (_STAT_GET_PACKED_BOOL(41548, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41549, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41550, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41551, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41552, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41553, -1))
						type = type + 1;
					break;
			
				case 249:
					if (_STAT_GET_PACKED_BOOL(41868, -1))
						type = PV_COMP_BERD;
					break;
			
				case 250:
					type = _STAT_GET_PACKED_INT(42093, -1);
					break;
			
				case 251:
					if (_STAT_GET_PACKED_BOOL(41560, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41561, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41562, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41563, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41564, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41565, -1))
						type = type + 1;
					break;
			
				case 252:
					if (_STAT_GET_PACKED_BOOL(41554, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41555, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41556, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41557, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41558, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41559, -1))
						type = type + 1;
					break;
			
				case 253:
					type = func_116(87, -1);
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
					if (_STAT_GET_PACKED_BOOL(18139, -1))
						type = PV_COMP_BERD;
					break;
			
				case 281:
					if (_STAT_GET_PACKED_BOOL(36861, -1))
						type = PV_COMP_BERD;
					break;
			
				case 282:
					type2 = func_115(5664, -1);
				
					if (IS_BIT_SET(type2, 0) || IS_BIT_SET(type2, 1) || IS_BIT_SET(type2, 2))
						type = PV_COMP_BERD;
					break;
			
				case 283:
					if (_STAT_GET_PACKED_BOOL(41712, -1))
						type = PV_COMP_BERD;
					break;
			
				case 284:
					if (_STAT_GET_PACKED_BOOL(36862, -1))
						type = PV_COMP_BERD;
					break;
			
				case 285:
					if (_STAT_GET_PACKED_BOOL(41713, -1))
						type = PV_COMP_BERD;
					break;
			
				case 286:
					if (_STAT_GET_PACKED_BOOL(36863, -1))
						type = PV_COMP_BERD;
					break;
			
				case 287:
					if (_STAT_GET_PACKED_BOOL(41714, -1))
						type = PV_COMP_BERD;
					break;
			
				case 288:
					type = func_115(11935, -1);
					break;
			
				case 289:
					type = _STAT_GET_PACKED_INT(42087, -1);
					break;
			
				case 290:
					if (_STAT_GET_PACKED_BOOL(41685, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41690, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41696, -1))
						type = type + 1;
					break;
			
				case 291:
					if (_STAT_GET_PACKED_BOOL(41697, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41698, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41699, -1))
						type = type + 1;
					break;
			
				case 292:
					type = func_115(11924, -1);
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
					if (_STAT_GET_PACKED_BOOL(25009, -1))
						type = PV_COMP_BERD;
					break;
			
				case 307:
					if (func_115(7864, -1) > PV_COMP_HEAD || func_115(7865, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
				
					if (_STAT_GET_PACKED_BOOL(41647, -1) || _STAT_GET_PACKED_BOOL(41648, -1) || _STAT_GET_PACKED_BOOL(41649, -1) || _STAT_GET_PACKED_BOOL(41650, -1) || _STAT_GET_PACKED_BOOL(41651, -1) || _STAT_GET_PACKED_BOOL(41652, -1) || _STAT_GET_PACKED_BOOL(41653, -1) || _STAT_GET_PACKED_BOOL(41654, -1) || _STAT_GET_PACKED_BOOL(41655, -1))
						type = PV_COMP_BERD;
					break;
			
				case 308:
					type = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 309:
					type = func_115(7852, -1);
					break;
			
				case 310:
					if (_STAT_GET_PACKED_BOOL(41647, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41648, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41649, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41650, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41651, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41652, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41653, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41654, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41655, -1))
						type = type + 1;
					break;
			
				case 311:
					type = _STAT_GET_PACKED_INT(42088, -1);
					break;
			
				case 312:
					type = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 313:
					type = func_115(7852, -1);
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						type = PV_COMP_BERD;
					break;
			
				case 151:
					if (func_115(7231, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 152:
					type = func_115(12010, -1);
					break;
			
				case 153:
					if (_STAT_GET_PACKED_BOOL(22082, -1) || _STAT_GET_PACKED_BOOL(22083, -1) || _STAT_GET_PACKED_BOOL(15533, -1))
						type = PV_COMP_BERD;
					break;
			
				case 154:
					type = _STAT_GET_PACKED_BOOL(36868, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 155:
					if (_STAT_GET_PACKED_BOOL(36944, -1))
						type = PV_COMP_BERD;
					break;
			
				case 156:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(22082, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(22083, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15533, -1))
						type = type + 1;
					break;
			
				case 157:
					if (_STAT_GET_PACKED_BOOL(41989, -1))
						type = Global_262145.f_23684;
					else
						type = func_115(7212, -1);
					break;
			
				case 158:
					type = func_115(7231, -1);
					break;
			
				case 159:
					type = _STAT_GET_PACKED_INT(42089, -1);
					break;
			
				case 160:
					type = func_115(7230, -1);
					break;
			
				case 161:
					type = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(func_115(12025, -1) / 60));
					break;
			
				case 162:
					type = func_115(7234, -1);
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
					if (_STAT_GET_PACKED_BOOL(15966, -1))
						type = PV_COMP_BERD;
					break;
			
				case 164:
					if (func_115(6116, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 165:
					if (_STAT_GET_PACKED_BOOL(41676, -1))
						type = PV_COMP_BERD;
					break;
			
				case 166:
					if (_STAT_GET_PACKED_BOOL(32398, -1))
						type = PV_COMP_BERD;
					break;
			
				case 167:
					type = func_115(6116, -1);
					break;
			
				case 168:
					if (func_115(6118, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 169:
					type = func_115(6116, -1);
					break;
			
				case 170:
					if (_STAT_GET_PACKED_BOOL(41987, -1))
						type = 50;
					else
						type = func_115(6104, -1);
					break;
			
				case 171:
					type = _STAT_GET_PACKED_BOOL(36924, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 172:
					type = func_115(6116, -1);
					break;
			
				case 173:
					type = func_115(11959, -1);
					break;
			
				case 174:
					if (_STAT_GET_PACKED_BOOL(36925, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36926, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36927, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36928, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36929, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36930, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36931, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36932, -1))
						type = type + 1;
					break;
			
				case 175:
					type = func_115(6119, -1);
					type = type + func_115(6120, -1);
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
					if (func_115(5303, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 190:
					if (func_115(5332, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 191:
					if (_STAT_GET_PACKED_BOOL(42029, -1) || _STAT_GET_PACKED_BOOL(42030, -1) || _STAT_GET_PACKED_BOOL(42031, -1) || _STAT_GET_PACKED_BOOL(42032, -1) || _STAT_GET_PACKED_BOOL(42033, -1) || _STAT_GET_PACKED_BOOL(42034, -1) || _STAT_GET_PACKED_BOOL(42035, -1) || _STAT_GET_PACKED_BOOL(42036, -1))
						type = type + 1;
					break;
			
				case 192:
					if (_STAT_GET_PACKED_BOOL(41874, -1) || _STAT_GET_PACKED_BOOL(41875, -1) || _STAT_GET_PACKED_BOOL(41876, -1) || _STAT_GET_PACKED_BOOL(41877, -1) || _STAT_GET_PACKED_BOOL(41878, -1) || _STAT_GET_PACKED_BOOL(41879, -1) || _STAT_GET_PACKED_BOOL(41880, -1) || _STAT_GET_PACKED_BOOL(41881, -1) || _STAT_GET_PACKED_BOOL(41882, -1) || _STAT_GET_PACKED_BOOL(41883, -1))
						type = PV_COMP_BERD;
					break;
			
				case 193:
					if (func_115(11941, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 194:
					type = func_115(11940, -1);
					break;
			
				case 195:
					type = func_115(5332, -1);
					break;
			
				case 196:
					if (_STAT_GET_PACKED_BOOL(41988, -1))
						type = 40;
					else
						type = _STAT_GET_PACKED_INT(42095, -1);
					break;
			
				case 197:
					if (_STAT_GET_PACKED_BOOL(42029, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42030, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42031, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42032, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42033, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42034, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42035, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42036, -1))
						type = type + 1;
					break;
			
				case 198:
					if (_STAT_GET_PACKED_BOOL(41874, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41875, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41876, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41877, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41878, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41879, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41880, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41881, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41882, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41883, -1))
						type = type + 1;
					break;
			
				case 199:
					if (_STAT_GET_PACKED_BOOL(41540, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41541, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41542, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41543, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41544, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41545, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41546, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41547, -1))
						type = type + 1;
					break;
			
				case 200:
					type = func_115(11941, -1);
					break;
			
				case 201:
					type = func_115(5333, -1);
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
					type = _STAT_GET_PACKED_BOOL(36871, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 203:
					type = _STAT_GET_PACKED_BOOL(36872, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 204:
					if (_STAT_GET_PACKED_BOOL(36875, -1) || _STAT_GET_PACKED_BOOL(36884, -1) || _STAT_GET_PACKED_BOOL(36885, -1) || _STAT_GET_PACKED_BOOL(36877, -1) || _STAT_GET_PACKED_BOOL(36880, -1) || _STAT_GET_PACKED_BOOL(36878, -1) || _STAT_GET_PACKED_BOOL(36883, -1) || _STAT_GET_PACKED_BOOL(36876, -1) || _STAT_GET_PACKED_BOOL(36882, -1) || _STAT_GET_PACKED_BOOL(36881, -1) || _STAT_GET_PACKED_BOOL(36879, -1) || _STAT_GET_PACKED_BOOL(36887, -1) || _STAT_GET_PACKED_BOOL(36886, -1))
						type = type + 1;
					break;
			
				case 205:
					type = _STAT_GET_PACKED_BOOL(36873, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 206:
					if (_STAT_GET_PACKED_BOOL(42001, -1))
						type = PV_COMP_BERD;
					break;
			
				case 207:
					if (_STAT_GET_PACKED_BOOL(36874, -1))
						type = PV_COMP_BERD;
					break;
			
				case 208:
					if (_STAT_GET_PACKED_BOOL(36875, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36876, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36877, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36878, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36879, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36880, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36881, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36882, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36883, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36884, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36885, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36886, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36887, -1))
						type = type + 1;
					break;
			
				case 209:
					if (func_115(3913, -1) > PV_COMP_HEAD || func_115(3903, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(3946, -1) > PV_COMP_HEAD || func_115(3932, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(3948, -1) > PV_COMP_HEAD || func_115(3936, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(3950, -1) > PV_COMP_HEAD || func_115(3940, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_115(3952, -1) > PV_COMP_HEAD || func_115(3944, -1) > PV_COMP_HEAD)
						type = type + 1;
					break;
			
				case 210:
					type = func_115(10411, -1);
					break;
			
				case 211:
					type = type + func_115(3954, -1);
					type = type + func_115(3955, -1);
					type = type + func_115(3956, -1);
					type = type + func_115(3957, -1);
					type = type + func_115(3958, -1);
					break;
			
				case 212:
					type = func_115(11943, -1);
					break;
			
				case 213:
					type = func_115(11969, -1);
					break;
			
				case 214:
					type = func_115(11942, -1);
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
					type = _STAT_GET_PACKED_BOOL(36888, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 216:
					type = _STAT_GET_PACKED_BOOL(36889, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 217:
					if (_STAT_GET_PACKED_BOOL(36892, -1) || _STAT_GET_PACKED_BOOL(36893, -1) || _STAT_GET_PACKED_BOOL(36894, -1) || _STAT_GET_PACKED_BOOL(36895, -1) || _STAT_GET_PACKED_BOOL(36896, -1) || _STAT_GET_PACKED_BOOL(36897, -1) || _STAT_GET_PACKED_BOOL(36898, -1) || _STAT_GET_PACKED_BOOL(36899, -1) || _STAT_GET_PACKED_BOOL(36900, -1) || _STAT_GET_PACKED_BOOL(36901, -1) || _STAT_GET_PACKED_BOOL(36902, -1) || _STAT_GET_PACKED_BOOL(36903, -1) || _STAT_GET_PACKED_BOOL(36904, -1) || _STAT_GET_PACKED_BOOL(36905, -1) || _STAT_GET_PACKED_BOOL(36906, -1) || _STAT_GET_PACKED_BOOL(36907, -1) || _STAT_GET_PACKED_BOOL(36908, -1) || _STAT_GET_PACKED_BOOL(36909, -1) || _STAT_GET_PACKED_BOOL(36910, -1) || _STAT_GET_PACKED_BOOL(36911, -1) || _STAT_GET_PACKED_BOOL(36912, -1) || _STAT_GET_PACKED_BOOL(36913, -1) || _STAT_GET_PACKED_BOOL(36945, -1) || _STAT_GET_PACKED_BOOL(36914, -1) || _STAT_GET_PACKED_BOOL(36915, -1))
						type = type + 1;
					break;
			
				case 218:
					type = _STAT_GET_PACKED_BOOL(36890, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 219:
					if (func_115(3639, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 220:
					if (func_115(3667, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 221:
					if (_STAT_GET_PACKED_BOOL(7559, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7589, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7592, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7577, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7568, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7583, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7571, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7574, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7586, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7562, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7553, -1))
						type = type + 1;
					break;
			
				case 222:
					type = _STAT_GET_PACKED_BOOL(36891, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 223:
				case 224:
					if (_STAT_GET_PACKED_BOOL(36892, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36893, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36894, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36895, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36896, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36897, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36898, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36899, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36900, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36901, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36902, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36903, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36904, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36905, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36906, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36907, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36908, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36909, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36910, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36911, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36912, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36913, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36945, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36914, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36915, -1))
						type = type + 1;
					break;
			
				case 225:
					if (_STAT_GET_PACKED_BOOL(36860, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36839, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36841, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36843, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36864, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36865, -1))
						type = type + 1;
					break;
			
				case 226:
					type = type + func_115(11970, -1);
					break;
			
				case 227:
					type = func_115(3671, -1);
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					if (func_115(1210, -1) > PV_COMP_HEAD || _STAT_GET_PACKED_BOOL(42023, -1))
						type = PV_COMP_BERD;
					break;
			
				case 331:
					if (_STAT_GET_PACKED_BOOL(41363, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41364, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41365, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41366, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41367, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41368, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41369, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41370, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41371, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41372, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41373, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41374, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41375, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41376, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41377, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41378, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42026, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42027, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42028, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42150, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42151, -1))
						type = type + 1;
					break;
			
				case 332:
					type = func_115(819, -1);
					type = type + func_115(12029, -1);
					type = type + func_115(12030, -1);
					break;
			
				case 333:
					type = func_115(819, -1);
					type = type + func_115(12029, -1);
					type = type + func_115(12030, -1);
					break;
			
				case 334:
					type = type + func_102(func_115(11929, -1));
					type = type + func_102(func_115(11966, -1));
					type = type + func_102(func_115(11967, -1));
					type = type + func_102(func_115(11968, -1));
					break;
			
				case 335:
					type = _STAT_GET_PACKED_INT(41246, -1);
					break;
			
				case 336:
					type = func_115(12026, -1);
					break;
			
				case 337:
					type = func_115(819, -1);
					type = type + func_115(12029, -1);
					type = type + func_115(12030, -1);
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
					if (_STAT_GET_PACKED_BOOL(41594, -1) || _STAT_GET_PACKED_BOOL(41595, -1) || _STAT_GET_PACKED_BOOL(41596, -1) || _STAT_GET_PACKED_BOOL(41597, -1) || _STAT_GET_PACKED_BOOL(41598, -1) || _STAT_GET_PACKED_BOOL(41599, -1) || _STAT_GET_PACKED_BOOL(41600, -1) || _STAT_GET_PACKED_BOOL(41601, -1) || _STAT_GET_PACKED_BOOL(41602, -1) || _STAT_GET_PACKED_BOOL(41603, -1) || _STAT_GET_PACKED_BOOL(41604, -1) || _STAT_GET_PACKED_BOOL(41605, -1) || _STAT_GET_PACKED_BOOL(41606, -1) || _STAT_GET_PACKED_BOOL(41607, -1) || _STAT_GET_PACKED_BOOL(41608, -1) || _STAT_GET_PACKED_BOOL(41609, -1) || _STAT_GET_PACKED_BOOL(41610, -1) || _STAT_GET_PACKED_BOOL(41611, -1) || _STAT_GET_PACKED_BOOL(41612, -1) || _STAT_GET_PACKED_BOOL(41613, -1) || _STAT_GET_PACKED_BOOL(41614, -1) || _STAT_GET_PACKED_BOOL(41615, -1) || _STAT_GET_PACKED_BOOL(41616, -1) || _STAT_GET_PACKED_BOOL(41617, -1) || _STAT_GET_PACKED_BOOL(41618, -1) || _STAT_GET_PACKED_BOOL(41619, -1) || _STAT_GET_PACKED_BOOL(41620, -1) || _STAT_GET_PACKED_BOOL(41621, -1) || _STAT_GET_PACKED_BOOL(41622, -1) || _STAT_GET_PACKED_BOOL(41623, -1) || _STAT_GET_PACKED_BOOL(41624, -1) || _STAT_GET_PACKED_BOOL(41625, -1) || _STAT_GET_PACKED_BOOL(41626, -1) || _STAT_GET_PACKED_BOOL(41627, -1) || _STAT_GET_PACKED_BOOL(41628, -1) || _STAT_GET_PACKED_BOOL(41629, -1) || _STAT_GET_PACKED_BOOL(41630, -1) || _STAT_GET_PACKED_BOOL(41631, -1) || _STAT_GET_PACKED_BOOL(41632, -1) || _STAT_GET_PACKED_BOOL(41633, -1) || _STAT_GET_PACKED_BOOL(41634, -1) || _STAT_GET_PACKED_BOOL(41635, -1) || _STAT_GET_PACKED_BOOL(41636, -1) || _STAT_GET_PACKED_BOOL(41637, -1) || _STAT_GET_PACKED_BOOL(41638, -1) || _STAT_GET_PACKED_BOOL(41639, -1) || _STAT_GET_PACKED_BOOL(41640, -1) || _STAT_GET_PACKED_BOOL(41641, -1) || _STAT_GET_PACKED_BOOL(41642, -1) || _STAT_GET_PACKED_BOOL(41643, -1) || _STAT_GET_PACKED_BOOL(41644, -1) || _STAT_GET_PACKED_BOOL(41645, -1) || _STAT_GET_PACKED_BOOL(41646, -1) || _STAT_GET_PACKED_BOOL(41656, -1) || _STAT_GET_PACKED_BOOL(51339, -1))
						type = PV_COMP_BERD;
					break;
			
				case 315:
					if (_STAT_GET_PACKED_BOOL(36840, -1))
						type = PV_COMP_BERD;
					break;
			
				case 316:
				case 318:
				case 320:
					type = func_115(11917, -1);
					break;
			
				case 317:
				case 319:
					if (_STAT_GET_PACKED_BOOL(41594, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41595, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41596, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41597, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41598, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41599, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41600, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41601, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41602, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41603, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41604, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41605, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41606, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41607, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41608, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41609, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41610, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41611, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41612, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41613, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41614, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41615, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41616, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41617, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41618, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41619, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41620, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41621, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41622, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41623, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41624, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41625, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41626, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41627, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41628, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41629, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41630, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41631, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41632, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41633, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41634, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41635, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41636, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41637, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41638, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41639, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41640, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41641, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41642, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41643, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41644, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41645, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41646, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41656, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51339, -1))
						type = type + 1;
					break;
			
				case 321:
					if (_STAT_GET_PACKED_BOOL(36921, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
					if (_STAT_GET_PACKED_BOOL(36867, -1))
						type = PV_COMP_BERD;
					break;
			
				case 294:
					if (_STAT_GET_PACKED_BOOL(36933, -1))
						type = PV_COMP_BERD;
					break;
			
				case 295:
					if (_STAT_GET_PACKED_BOOL(41700, -1))
						type = PV_COMP_BERD;
					break;
			
				case 296:
					if (_STAT_GET_PACKED_BOOL(41715, -1))
						type = PV_COMP_BERD;
					break;
			
				case 297:
					if (_STAT_GET_PACKED_BOOL(41716, -1))
						type = PV_COMP_BERD;
					break;
			
				case 298:
					if (_STAT_GET_PACKED_BOOL(41717, -1))
						type = PV_COMP_BERD;
					break;
			
				case 299:
					if (_STAT_GET_PACKED_BOOL(41718, -1))
						type = PV_COMP_BERD;
					break;
			
				case 300:
					if (_STAT_GET_PACKED_BOOL(41719, -1))
						type = PV_COMP_BERD;
					break;
			
				case 301:
					type = _STAT_GET_PACKED_INT(42100, -1);
					break;
			
				case 302:
					type = _STAT_GET_PACKED_INT(42090, -1);
					break;
			
				case 303:
					type = func_115(11923, -1);
					break;
			
				case 304:
					if (_STAT_GET_PACKED_BOOL(41701, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41702, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41703, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41704, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36917, -1))
						type = type + 1;
					break;
			
				case 305:
					if (_STAT_GET_PACKED_BOOL(42000, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
					type = _STAT_GET_PACKED_BOOL(41864, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 347:
					if (_STAT_GET_PACKED_BOOL(42014, -1))
						type = PV_COMP_BERD;
					break;
			
				case 348:
					type = _STAT_GET_PACKED_BOOL(41865, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 349:
					type = _STAT_GET_PACKED_BOOL(41863, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 350:
					type = _STAT_GET_PACKED_BOOL(41840, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 351:
					type = _STAT_GET_PACKED_BOOL(41839, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 352:
					type = _STAT_GET_PACKED_BOOL(41841, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 353:
					type = _STAT_GET_PACKED_BOOL(41838, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 354:
					type = _STAT_GET_PACKED_INT(42092, -1);
					break;
			
				case 355:
					type = _STAT_GET_PACKED_INT(42091, -1);
					break;
			
				case 356:
					type = func_115(11975, -1);
				
					if (type > 100)
						type = 99;
				
					if (_STAT_GET_PACKED_BOOL(41866, -1))
						type = type + 1;
					break;
			
				case 357:
					if (_STAT_GET_PACKED_BOOL(41842, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41843, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41844, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41845, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41846, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41847, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41848, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41849, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41850, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41851, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41852, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41853, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41854, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41855, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41856, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41857, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41858, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41859, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41860, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41861, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41862, -1))
						type = type + 1;
					break;
			
				case 358:
					type = func_115(11974, -1);
					break;
			}
			break;
	
		default:
			type = PV_COMP_HEAD;
			break;
	}

	if (type < PV_COMP_HEAD)
		type = func_73(iParam0, iParam1);

	return type;
}

BOOL func_92(int iParam0, int iParam1) // Position - 0x104C3 (66755)
{
	Hash statHash;
	int outValue;

	statHash = func_93(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_93(int iParam0, int iParam1) // Position - 0x104E7 (66791)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_94(iParam1));
}

int func_94(int iParam0) // Position - 0x104FD (66813)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2752424 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752424 = 1;
		}
	}

	return num;
}

ePedComponentType func_95() // Position - 0x10531 (66865)
{
	int num;
	ePedComponentType type;

	num = _STAT_GET_PACKED_INT(41244, -1);

	if (num == 0)
		return 0;

	type = func_115(11960, -1);

	if (Global_2740191.f_6950.f_3 - type >= 2)
	{
		func_96(41244, PV_COMP_HEAD, -1);
		return 0;
	}

	return num;
}

void func_96(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x10578 (66936)
{
	if (iParam2 == -1)
		iParam2 = func_7();

	if (epctParam1 < 0)
		epctParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, epctParam1, iParam2);
	return;
}

ePedComponentType func_97() // Position - 0x105A0 (66976)
{
	ePedComponentType type;
	ePedComponentType type2;

	type = _STAT_GET_PACKED_INT(41244, -1);
	type2 = func_115(11960, -1);

	if (Global_2740191.f_6950.f_3 - type2 >= 2)
	{
		type = PV_COMP_BERD;
	}
	else if (Global_2740191.f_6950.f_3 - type2 == 1)
	{
		type = type + 1;
	
		if (type == PV_COMP_DECL)
			_STAT_SET_PACKED_BOOL(36942, true, -1);
	}

	func_96(41244, type, -1);
	func_112(11960, Global_2740191.f_6950.f_3, -1, true);
	return type;
}

ePedComponentType func_98() // Position - 0x10619 (67097)
{
	ePedComponentType address;
	int i;
	Hash weaponHash;
	int num;

	address = _STAT_GET_PACKED_INT(41242, -1);
	i = 0;

	for (i = 0; i < 103; i = i + 1)
	{
		weaponHash = func_100(i);
		num = func_99(i);
	
		if (num == 17296)
		{
		}
		else if (IS_BIT_SET(func_115(num, -1), i % 32))
		{
			switch (WEAPON::GET_WEAPONTYPE_GROUP(weaponHash))
			{
				case joaat("GROUP_MELEE"):
					MISC::SET_BIT(&address, 0);
					break;
			
				case joaat("GROUP_PISTOL"):
					MISC::SET_BIT(&address, 1);
					break;
			
				case joaat("GROUP_MG"):
				case joaat("GROUP_SMG"):
					MISC::SET_BIT(&address, 2);
					break;
			
				case joaat("GROUP_RIFLE"):
					MISC::SET_BIT(&address, 3);
					break;
			
				case joaat("GROUP_SHOTGUN"):
					MISC::SET_BIT(&address, 4);
					break;
			
				case joaat("GROUP_SNIPER"):
					MISC::SET_BIT(&address, 5);
					break;
			
				case joaat("GROUP_HEAVY"):
					MISC::SET_BIT(&address, 6);
					break;
			
				case joaat("GROUP_THROWN"):
					MISC::SET_BIT(&address, 7);
					break;
			}
		}
	}

	func_96(41242, address, -1);
	return func_102(address);
}

int func_99(int iParam0) // Position - 0x1070F (67343)
{
	iParam0 = iParam0 / 32;

	switch (iParam0)
	{
		case 0:
			return 800;
	
		case 1:
			return 801;
	
		case 2:
			return 2420;
	
		case 3:
			return 10276;
	
		case 4:
			return 12213;
	
		case 5:
			return 12301;
	}

	return 17296;
}

Hash func_100(int iParam0) // Position - 0x10782 (67458)
{
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
	
		case 1:
			return joaat("WEAPON_PISTOL");
	
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
	
		case 3:
			return joaat("WEAPON_APPISTOL");
	
		case 5:
			return joaat("WEAPON_SMG");
	
		case 7:
			return joaat("WEAPON_MICROSMG");
	
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
	
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
	
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
	
		case 12:
			return joaat("WEAPON_MG");
	
		case 13:
			return joaat("WEAPON_COMBATMG");
	
		case 15:
			return joaat("WEAPON_STICKYBOMB");
	
		case 16:
			return joaat("WEAPON_GRENADE");
	
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
	
		case 60:
			return joaat("WEAPON_PROXMINE");
	
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
	
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
	
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
	
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
	
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
	
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
	
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
	
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
	
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
	
		case 27:
			return joaat("WEAPON_RPG");
	
		case 28:
			return joaat("WEAPON_MINIGUN");
	
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
	
		case 31:
			return joaat("WEAPON_STUNGUN");
	
		case 33:
			return joaat("GADGET_PARACHUTE");
	
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
	
		case 43:
			return joaat("WEAPON_PETROLCAN");
	
		case 45:
			return joaat("WEAPON_BOTTLE");
	
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
	
		case 47:
			return joaat("WEAPON_SNSPISTOL");
	
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
	
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
	
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
	
		case 50:
			return joaat("WEAPON_GUSENBERG");
	
		case 51:
			return joaat("WEAPON_DAGGER");
	
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
	
		case 57:
			return joaat("WEAPON_FLAREGUN");
	
		case 53:
			return joaat("WEAPON_MUSKET");
	
		case 54:
			return joaat("WEAPON_FIREWORK");
	
		case 58:
			return joaat("WEAPON_HATCHET");
	
		case 59:
			return joaat("WEAPON_RAILGUN");
	
		case 64:
			return joaat("WEAPON_COMBATPDW");
	
		case 62:
			return joaat("WEAPON_KNUCKLE");
	
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
	
		case 65:
			return joaat("WEAPON_MACHETE");
	
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
	
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
	
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
	
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
	
		case 70:
			return joaat("WEAPON_REVOLVER");
	
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
	
		case 36:
			return joaat("WEAPON_HAMMER");
	
		case 4:
			return joaat("WEAPON_PISTOL50");
	
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
	
		case 41:
			return joaat("WEAPON_MOLOTOV");
	
		case 39:
			return joaat("WEAPON_GOLFCLUB");
	
		case 38:
			return joaat("WEAPON_CROWBAR");
	
		case 37:
			return joaat("WEAPON_BAT");
	
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
	
		case 73:
			return joaat("WEAPON_MINISMG");
	
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
	
		case 75:
			return joaat("WEAPON_BATTLEAXE");
	
		case 76:
			return joaat("WEAPON_PIPEBOMB");
	
		case 77:
			return joaat("WEAPON_POOLCUE");
	
		case 78:
			return joaat("WEAPON_WRENCH");
	
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
	
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
	
		case 81:
			return joaat("WEAPON_RAYPISTOL");
	
		case 82:
			return joaat("WEAPON_RAYCARBINE");
	
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
	
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
	
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
	
		case 86:
			return joaat("WEAPON_COMBATSHOTGUN");
	
		case 88:
			return joaat("WEAPON_MILITARYRIFLE");
	
		case 87:
			return joaat("WEAPON_GADGETPISTOL");
	
		case 10:
			return joaat("WEAPON_HEAVYRIFLE");
	
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
	
		case 90:
			return joaat("WEAPON_FERTILIZERCAN");
	
		case 91:
			return joaat("WEAPON_STUNGUN_MP");
	
		case 92:
			return joaat("WEAPON_METALDETECTOR");
	
		case 93:
			return joaat("WEAPON_TACTICALRIFLE");
	
		case 94:
			return joaat("WEAPON_PRECISIONRIFLE");
	
		case 95:
			return 465894841;
	
		case 96:
			return 1703483498;
	
		case 97:
			return -22923932;
	
		case 98:
			return 350597077;
	
		case 99:
			return joaat("WEAPON_BATTLERIFLE");
	
		case 101:
			return -624951259;
	
		case 102:
			return -1916886713;
	}

	return joaat("WEAPON_UNARMED");
}

var func_101(BOOL bParam0, var uParam1, var uParam2) // Position - 0x10DC3 (69059)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

ePedComponentType func_102(ePedComponentType epctParam0) // Position - 0x10DDA (69082)
{
	int num;
	ePedComponentType type;

	type = epctParam0;

	if (type < PV_COMP_HEAD)
	{
		num = 1;
		func_103(&type, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (type > PV_COMP_HEAD)
	{
		type = type && type - 1;
		num = num + 1;
	}

	return num;
}

void func_103(var uParam0, int iParam1) // Position - 0x10E1A (69146)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

ePedComponentType func_104() // Position - 0x10E2F (69167)
{
	ePedComponentType type;
	int num;

	num = 0;
	type = func_115(2828, -1);

	if (_STAT_GET_PACKED_BOOL(42002, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 19))
	{
		_STAT_SET_PACKED_BOOL(42002, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42003, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 20))
	{
		_STAT_SET_PACKED_BOOL(42003, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42006, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 21))
	{
		_STAT_SET_PACKED_BOOL(42006, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42007, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 22))
	{
		_STAT_SET_PACKED_BOOL(42007, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42005, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 23))
	{
		_STAT_SET_PACKED_BOOL(42005, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42004, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 24))
	{
		_STAT_SET_PACKED_BOOL(42004, true, -1);
		num = num + 1;
	}

	type = func_115(5631, -1);

	if (_STAT_GET_PACKED_BOOL(42012, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 5))
	{
		_STAT_SET_PACKED_BOOL(42012, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42011, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 6))
	{
		_STAT_SET_PACKED_BOOL(42011, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42008, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 7))
	{
		_STAT_SET_PACKED_BOOL(42008, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42013, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 8))
	{
		_STAT_SET_PACKED_BOOL(42013, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42009, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 9))
	{
		_STAT_SET_PACKED_BOOL(42009, true, -1);
		num = num + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42010, -1))
	{
		num = num + 1;
	}
	else if (IS_BIT_SET(type, 10))
	{
		_STAT_SET_PACKED_BOOL(42010, true, -1);
		num = num + 1;
	}

	func_96(41247, num, -1);
	return num;
}

int func_105(BOOL bParam0) // Position - 0x11074 (69748)
{
	if (bParam0)
		return 1;

	return 0;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x11086 (69766)
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_107(int iParam0, var uParam1) // Position - 0x110A2 (69794)
{
	int i;

	for (i = uParam1->f_1; i <= 4; i = i + 1)
	{
		uParam1->f_2 = func_108(iParam0, *uParam1, i);
	
		if (uParam1->f_2 != -1)
		{
			uParam1->f_2.f_2 = func_73(*uParam1, uParam1->f_2);
			uParam1->f_2.f_1 = func_91(*uParam1, uParam1->f_2);
		
			if (uParam1->f_2.f_1 >= uParam1->f_2.f_2)
			{
				uParam1->f_2 = -1;
			}
			else
			{
				uParam1->f_1 = i;
				return true;
			}
		}
	}

	return false;
}

int func_108(int iParam0, int iParam1, int iParam2) // Position - 0x1111A (69914)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 13035:
							return 73;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 13037:
							return 75;
					
						case 13040:
							return 77;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 13036:
							return 78;
					
						case 13066:
							return 79;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 13066:
							return 83;
					
						case 13040:
							return 84;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 0:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 12460:
							return 5;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12442:
							return 85;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12459:
							return 90;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 12444:
							return 91;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12459:
							return 97;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12241:
							return 98;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12307:
							return 103;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12308:
							return 108;
					
						case 12253:
							return 109;
					
						case 12307:
							return 110;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 12187:
							return 13;
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12032:
							return 111;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12042:
						case 12044:
							return 116;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 12033:
							return 117;
					
						case 12045:
							return 118;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12042:
						case 12044:
							return 121;
					
						case 12043:
							return 123;
					}
					break;
			}
			break;
	
		case 26:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 11923:
							return 303;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 11950:
							return 16;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11950:
							return 18;
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5448:
							return 176;
					
						case 5453:
							return 177;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 5465:
							return 180;
					
						case 5457:
						case 5455:
							return 181;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 5395:
							return 182;
					
						case 5453:
							return 183;
					
						case 2828:
						case 5631:
							return 184;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 5395:
							return 186;
					
						case 5459:
							return 188;
					}
					break;
			}
			break;
	
		case 29:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12031:
							return 322;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11922:
							return 324;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11947:
							return 326;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11922:
							return 329;
					}
					break;
			}
			break;
	
		case 31:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 1209:
							return 338;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11921:
							return 339;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11920:
							return 341;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11965:
							return 343;
					
						case 11919:
							return 345;
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12462:
							return 124;
					
						case 11811:
							return 126;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12462:
							return 127;
					
						case 10872:
							return 128;
					
						case 11815:
							return 129;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11813:
						case 12462:
							return 130;
					
						case 11928:
							return 131;
					
						case 11927:
							return 132;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11811:
							return 134;
					
						case 11815:
							return 136;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 10394:
							return 24;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 10394:
							return 26;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8977:
							return 32;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8977:
							return 34;
					}
					break;
			}
			break;
	
		case 33:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 800:
						case 801:
						case 2420:
						case 10276:
						case 12213:
						case 12301:
							return 366;
					
						case 11964:
							return 365;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 2828:
						case 5631:
							return 369;
					
						case 11963:
							return 368;
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9910:
							return 138;
					
						case 9905:
							return 139;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9910:
							return 142;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9905:
							return 143;
					
						case 11930:
							return 144;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11931:
							return 147;
					
						case 11930:
							return 148;
					
						case 9911:
							return 149;
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9631:
							return 228;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9620:
							return 231;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9620:
							return 234;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9622:
							return 238;
					
						case 11932:
							return 239;
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9526:
						case 9511:
							return 256;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9511:
							return 257;
					
						case 9586:
							return 258;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9586:
							return 262;
					
						case 11933:
							return 261;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9511:
							return 264;
					
						case 9544:
						case 9545:
						case 9546:
						case 9547:
						case 9548:
						case 9549:
							return 265;
					
						case 11926:
							return 266;
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8726:
							return 267;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8726:
							return 270;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 8726:
							return 273;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11925:
							return 278;
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8283:
							return 243;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8283:
							return 244;
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5664:
							return 282;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11935:
							return 288;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11924:
							return 292;
					}
					break;
			}
			break;
	
		case 27:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 7852:
							return 309;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 7852:
							return 313;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 7231:
							return 151;
					
						case 12010:
							return 152;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 7231:
							return 158;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 7230:
							return 160;
					
						case 12025:
							return 161;
					
						case 7234:
							return 162;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 6116:
							return 164;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 6116:
							return 167;
					
						case 6118:
							return 168;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 6116:
							return 169;
					
						case 6104:
							return 170;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 6116:
							return 172;
					
						case 11959:
							return 173;
					
						case 6119:
						case 6120:
							return 175;
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5303:
							return 189;
					
						case 5332:
							return 190;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11941:
							return 193;
					
						case 11940:
							return 194;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 5332:
							return 195;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11941:
							return 200;
					
						case 5333:
							return 201;
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 3913:
						case 3946:
						case 3948:
						case 3950:
						case 3952:
						case 3903:
						case 3932:
						case 3936:
						case 3940:
						case 3944:
							return 209;
					
						case 10411:
							return 210;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 3954:
						case 3955:
						case 3956:
						case 3957:
						case 3958:
							return 211;
					
						case 11943:
							return 212;
					
						case 11969:
							return 213;
					
						case 11942:
							return 214;
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 3639:
							return 219;
					
						case 3667:
							return 220;
					}
					break;
			
				case 2:
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11970:
							return 226;
					
						case 3671:
							return 227;
					}
					break;
			}
			break;
	
		case 30:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 1210:
							return 330;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 819:
						case 12029:
						case 12030:
							return 332;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 819:
						case 12029:
						case 12030:
							return 333;
					
						case 11929:
						case 11966:
						case 11967:
						case 11968:
							return 334;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12026:
							return 336;
					
						case 819:
						case 12029:
						case 12030:
							return 337;
					}
					break;
			}
			break;
	
		case 28:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 11917:
							return 316;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11917:
							return 318;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11917:
							return 320;
					}
					break;
			}
			break;
	
		case 32:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 11975:
							return 356;
					
						case 11974:
							return 358;
					}
					break;
			}
			break;
	}

	return -1;
}

int func_109(int iParam0) // Position - 0x12106 (73990)
{
	int num;
	ePedComponentType type;
	int num2;
	int i;

	num = func_70(iParam0);
	type = func_115(num, -1);
	num2 = func_68(iParam0, 0);

	for (i = 0; i < 4; i = i + 1)
	{
		if (!IS_BIT_SET(type, num2 + i))
			return i;
	}

	return 4;
}

BOOL func_110(int iParam0, BOOL bParam1) // Position - 0x1214C (74060)
{
	if (iParam0 == -1)
		return false;

	if (bParam1)
		return false;

	return true;
}

int func_111(int iParam0) // Position - 0x12168 (74088)
{
	switch (iParam0)
	{
		case 13035:
		case 13037:
		case 13040:
		case 13036:
		case 13066:
			return 9;
	
		case 12460:
			return 0;
	
		case 12442:
		case 12459:
		case 12444:
			return 10;
	
		case 12241:
		case 12307:
		case 12308:
		case 12253:
			return 11;
	
		case 12187:
			return 1;
	
		case 12032:
		case 12033:
		case 12042:
		case 12043:
		case 12044:
		case 12045:
			return 12;
	
		case 2828:
		case 5631:
			if (_STAT_GET_PACKED_INT(41247, -1) < 5)
				return 17;
			else
				return 33;
			break;
	
		case 11923:
			return 26;
	
		case 5448:
		case 5453:
		case 5465:
		case 5457:
		case 5455:
		case 5395:
		case 5459:
			return 17;
	
		case 12031:
		case 11922:
		case 11947:
			return 29;
	
		case 1209:
		case 11921:
		case 11920:
		case 11919:
		case 11965:
			return 31;
	
		case 11811:
		case 11813:
		case 11815:
		case 12462:
		case 10872:
		case 11928:
		case 11927:
			return 13;
	
		case 10394:
			return 3;
	
		case 8977:
			return 4;
	
		case 800:
		case 801:
		case 2420:
		case 10276:
		case 12213:
		case 12301:
		case 11964:
		case 11963:
			return 33;
	
		case 11950:
			return 2;
	
		case 9910:
		case 9905:
		case 9911:
		case 11930:
		case 11931:
			return 14;
	
		case 9631:
		case 9620:
		case 9622:
		case 11932:
			return 21;
	
		case 9526:
		case 9511:
		case 9586:
		case 11926:
		case 11933:
		case 9544:
		case 9545:
		case 9546:
		case 9547:
		case 9548:
		case 9549:
			return 23;
	
		case 8726:
		case 11925:
			return 24;
	
		case 8283:
			return 22;
	
		case 11935:
		case 5664:
		case 11924:
			return 25;
	
		case 7852:
			return 27;
	
		case 12010:
		case 7231:
		case 7230:
		case 7234:
		case 12025:
			return 15;
	
		case 6116:
		case 6118:
		case 6104:
		case 6119:
		case 6120:
		case 11959:
			return 16;
	
		case 5303:
		case 5332:
		case 5333:
		case 11941:
		case 11940:
			return 18;
	
		case 3913:
		case 3946:
		case 3948:
		case 3950:
		case 3952:
		case 3903:
		case 3932:
		case 3936:
		case 3940:
		case 3944:
		case 3954:
		case 3955:
		case 3956:
		case 3957:
		case 3958:
		case 11943:
		case 11942:
		case 11969:
		case 10411:
			return 19;
	
		case 3639:
		case 3667:
		case 11970:
		case 3671:
			return 20;
	
		case 1210:
		case 819:
		case 12029:
		case 11929:
		case 11966:
		case 11967:
		case 11968:
		case 12026:
		case 12030:
			return 30;
	
		case 11917:
			return 28;
	
		case 11974:
		case 11975:
			return 32;
	}

	return -1;
}

void func_112(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3) // Position - 0x125A4 (75172)
{
	Hash statName;

	if (iParam0 != 17296)
	{
		statName = func_113(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, epctParam1, bParam3);
	}

	return;
}

Hash func_113(int iParam0, int iParam1) // Position - 0x125D2 (75218)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_94(iParam1));
}

int func_114(int iParam0) // Position - 0x125E7 (75239)
{
	switch (iParam0)
	{
		case 0:
			return 13577;
	
		default:
		
	}

	return 13577;
}

ePedComponentType func_115(int iParam0, int iParam1) // Position - 0x12605 (75269)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17296)
	{
		statHash = func_113(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

ePedComponentType func_116(int iParam0, int iParam1) // Position - 0x12634 (75316)
{
	Hash statHash;
	ePedComponentType outValue;

	statHash = func_117(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return PV_COMP_HEAD;
}

Hash func_117(int iParam0, int iParam1) // Position - 0x12658 (75352)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_94(iParam1));
}

ePedComponentType func_118(int iParam0, int iParam1, int iParam2) // Position - 0x1266E (75374)
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 52:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 30;
			
				case 4:
					return 60;
			
				case 5:
					return 120;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAIR;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_LOWR;
			
				case 5:
					return PV_COMP_HAND;
			
				default:
					break;
			}
			break;
	
		case 63:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAIR;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_LOWR;
			
				case 5:
					return PV_COMP_HAND;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_LOWR;
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_LOWR;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 35:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 36:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 45:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 1000;
			
				case 3:
					return 10000;
			
				case 4:
					return 25000;
			
				case 5:
					return 50000;
			
				default:
					break;
			}
			break;
	
		case 48:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_UPPR;
			
				case 3:
					return PV_COMP_HAND;
			
				case 4:
					return PV_COMP_TEEF;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 54:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 55:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 56:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 250;
			
				case 4:
					return 500;
			
				case 5:
					return 1000;
			
				default:
					break;
			}
			break;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 164:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 165:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 166:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 167:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 168:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 158:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 159:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 160:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 161:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 162:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 163:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 169:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 170:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 171:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
				
			}
			break;
	
		case 172:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 173:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 174:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 175:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 176:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 67:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 177:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_24849;
			
				case 3:
					return Global_262145.f_24850;
			
				case 4:
					return Global_262145.f_24851;
			
				case 5:
					return Global_262145.f_24852;
			
				default:
					break;
			}
			break;
	
		case 178:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_24849;
			
				case 3:
					return Global_262145.f_24850;
			
				case 4:
					return Global_262145.f_24851;
			
				case 5:
					return Global_262145.f_24852;
			
				default:
					break;
			}
			break;
	
		case 179:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_24849;
			
				case 3:
					return Global_262145.f_24850;
			
				case 4:
					return Global_262145.f_24851;
			
				case 5:
					return Global_262145.f_24852;
			
				default:
					break;
			}
			break;
	
		case 180:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_24849;
			
				case 3:
					return Global_262145.f_24850;
			
				case 4:
					return Global_262145.f_24851;
			
				case 5:
					return Global_262145.f_24852;
			
				default:
					break;
			}
			break;
	
		case 181:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 70:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 72:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 73:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 75:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 77:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_DECL;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 80:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 100000;
			
				case 3:
					return 250000;
			
				case 4:
					return 500000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 1000;
			
				case 3:
					return 3000;
			
				case 4:
					return 15000;
			
				case 5:
					return 55000;
			
				default:
					break;
			}
			break;
	
		case 86:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 87:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 88:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 89:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 90:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 25000;
			
				case 3:
					return 50000;
			
				case 4:
					return 75000;
			
				case 5:
					return 100000;
			
				default:
					break;
			}
			break;
	
		case 91:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28226;
			
				case 3:
					return Global_262145.f_28227;
			
				case 4:
					return Global_262145.f_28228;
			
				case 5:
					return Global_262145.f_28229;
			
				default:
					break;
			}
			break;
	
		case 93:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28409;
			
				case 3:
					return Global_262145.f_28410;
			
				case 4:
					return Global_262145.f_28411;
			
				case 5:
					return Global_262145.f_28412;
			
				default:
					break;
			}
			break;
	
		case 94:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28437;
			
				case 3:
					return Global_262145.f_28438;
			
				case 4:
					return Global_262145.f_28439;
			
				case 5:
					return Global_262145.f_28440;
			
				default:
					break;
			}
			break;
	
		case 95:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28441;
			
				case 3:
					return Global_262145.f_28442;
			
				case 4:
					return Global_262145.f_28443;
			
				case 5:
					return Global_262145.f_28444;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28157;
			
				case 3:
					return Global_262145.f_28158;
			
				case 4:
					return Global_262145.f_28159;
			
				case 5:
					return Global_262145.f_28160;
			
				default:
					break;
			}
			break;
	
		case 97:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_28413;
			
				case 3:
					return Global_262145.f_28414;
			
				case 4:
					return Global_262145.f_28415;
			
				case 5:
					return Global_262145.f_28416;
			
				default:
					break;
			}
			break;
	
		case 99:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 50000;
			
				case 3:
					return 250000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 102:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 103:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 1000000;
			
				case 3:
					return 5000000;
			
				case 4:
					return 10000000;
			
				case 5:
					return 20000000;
			
				default:
					break;
			}
			break;
	
		case 106:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 108:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 109:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 112:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 114:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 116:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 30;
			
				case 3:
					return 60;
			
				case 4:
					return 120;
			
				case 5:
					return 240;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 118:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_HAND;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 122:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 124:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 125:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_HAND;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 128:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 129:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 131:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 132:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 135:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 500000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 139:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_UPPR;
			
				case 3:
					return PV_COMP_HAND;
			
				case 4:
					return PV_COMP_DECL;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 140:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 141:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_TEEF;
			
				case 4:
					return PV_COMP_DECL;
			
				case 5:
					return 15;
			
				default:
					break;
			}
			break;
	
		case 142:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 143:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 144:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 145:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 5000;
			
				case 3:
					return 10000;
			
				case 4:
					return 25000;
			
				case 5:
					return 50000;
			
				default:
					break;
			}
			break;
	
		case 146:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_HAND;
			
				default:
					break;
			}
			break;
	
		case 147:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_UPPR;
			
				case 4:
					return PV_COMP_HAND;
			
				case 5:
					return PV_COMP_ACCS;
			
				default:
					break;
			}
			break;
	
		case 149:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 150:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_BERD;
			
				case 3:
					return PV_COMP_HAIR;
			
				case 4:
					return PV_COMP_UPPR;
			
				case 5:
					return PV_COMP_LOWR;
			
				default:
					break;
			}
			break;
	
		case 151:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 152:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 250000;
			
				case 3:
					return 500000;
			
				case 4:
					return 1000000;
			
				case 5:
					return 2000000;
			
				default:
					break;
			}
			break;
	
		case 153:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return 50000;
			
				case 3:
					return 100000;
			
				case 4:
					return 200000;
			
				case 5:
					return 500000;
			
				default:
					break;
			}
			break;
	
		case 154:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 155:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 156:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_TEEF;
			
				case 4:
					return PV_COMP_DECL;
			
				case 5:
					return 15;
			
				default:
					break;
			}
			break;
	
		case 157:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

BOOL func_119(int iParam0) // Position - 0x15CE0 (89312)
{
	BOOL flag;

	flag = _STAT_GET_PACKED_INT(386, -1) == 0;

	if (flag)
		if (func_120(func_125(func_126(iParam0, flag), 3), -1))
			return true;
		else
			return false;

	if (func_120(func_125(func_126(iParam0, flag), 4), -1))
		return true;

	return false;
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x15D39 (89401)
{
	int num;
	int num2;

	if (func_123(iParam0) == 17296)
		return false;

	num = func_122(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_121(num2));
}

int func_121(int iParam0) // Position - 0x15D68 (89448)
{
	return iParam0 % 32;
}

int func_122(int iParam0, int iParam1) // Position - 0x15D75 (89461)
{
	int num;

	num = func_115(func_123(iParam0), iParam1);
	return num;
}

int func_123(int iParam0) // Position - 0x15D8D (89485)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_124(num);

	if (func_9() == 0 || func_8() == 0 || func_9() == 999 && func_8() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1039;
		
			case 1:
				return 1040;
		
			case 2:
				return 1041;
		
			case 3:
				return 1042;
		
			case 4:
				return 1043;
		
			case 5:
				return 1503;
		
			case 6:
				return 1758;
		
			case 7:
				return 1952;
		
			case 8:
				return 1953;
		
			case 9:
				return 1954;
		
			case 10:
				return 1955;
		
			case 11:
				return 1956;
		
			case 12:
				return 1957;
		
			case 13:
				return 2424;
		
			case 14:
				return 2444;
		
			case 15:
				return 2447;
		
			case 16:
				return 2450;
		
			case 17:
				return 2614;
		
			case 18:
				return 2617;
		
			case 19:
				return 2620;
		
			case 20:
				return 3786;
		
			case 21:
				return 3789;
		
			case 22:
				return 3864;
		
			case 23:
				return 3867;
		
			case 24:
				return 3870;
		
			case 25:
				return 3873;
		
			case 26:
				return 5364;
		
			case 27:
				return 5367;
		
			case 28:
				return 5469;
		
			case 29:
				return 5472;
		
			case 30:
				return 6431;
		
			case 31:
				return 6434;
		
			case 32:
				return 7255;
		
			case 33:
				return 7258;
		
			case 34:
				return 7261;
		
			case 35:
				return 7970;
		
			case 36:
				return 7973;
		
			case 37:
				return 7976;
		
			case 38:
				return 7979;
		
			case 39:
				return 8501;
		
			case 40:
				return 8504;
		
			case 41:
				return 8507;
		
			case 42:
				return 8510;
		
			case 43:
				return 8906;
		
			case 44:
				return 8909;
		
			case 45:
				return 8912;
		
			case 46:
				return 10288;
		
			case 47:
				return 10291;
		
			case 48:
				return 10414;
		
			case 49:
				return 10417;
		
			case 50:
				return 11826;
		
			case 51:
				return 11829;
		
			case 52:
				return 12222;
		
			case 53:
				return 12225;
		}
	}

	return 17296;
}

int func_124(int iParam0) // Position - 0x16108 (90376)
{
	return iParam0 / 32;
}

int func_125(int iParam0, Hash hParam1) // Position - 0x16115 (90389)
{
	int tattooShopDlcItemIndex;

	tattooShopDlcItemIndex = EXTRAMETADATA::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);

	if (tattooShopDlcItemIndex != -1)
		return 129 + tattooShopDlcItemIndex;

	return -1;
}

int func_126(int iParam0, BOOL bParam1) // Position - 0x16137 (90423)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_004");
			else
				return joaat("MP_Award_F_Tshirt_004");
			break;
	
		case 1:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_005");
			else
				return joaat("MP_Award_F_Tshirt_005");
			break;
	
		case 2:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_006");
			else
				return joaat("MP_Award_F_Tshirt_006");
			break;
	
		case 3:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_007");
			else
				return joaat("MP_Award_F_Tshirt_007");
			break;
	
		case 4:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_008");
			else
				return joaat("MP_Award_F_Tshirt_008");
			break;
	
		case 5:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_009");
			else
				return joaat("MP_Award_F_Tshirt_009");
			break;
	
		case 6:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_010");
			else
				return joaat("MP_Award_F_Tshirt_010");
			break;
	
		case 7:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_011");
			else
				return joaat("MP_Award_F_Tshirt_011");
			break;
	
		case 8:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_012");
			else
				return joaat("MP_Award_F_Tshirt_012");
			break;
	
		case 9:
			if (bParam1)
				return joaat("MP_Award_M_Tshirt_013");
			else
				return joaat("MP_Award_F_Tshirt_013");
			break;
	
		case 10:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_000");
			else
				return joaat("FM_Hip_F_Retro_000");
			break;
	
		case 11:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_001");
			else
				return joaat("FM_Hip_F_Retro_001");
			break;
	
		case 12:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_002");
			else
				return joaat("FM_Hip_F_Retro_002");
			break;
	
		case 13:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_003");
			else
				return joaat("FM_Hip_F_Retro_003");
			break;
	
		case 14:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_004");
			else
				return joaat("FM_Hip_F_Retro_004");
			break;
	
		case 15:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_005");
			else
				return joaat("FM_Hip_F_Retro_005");
			break;
	
		case 16:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_006");
			else
				return joaat("FM_Hip_F_Retro_006");
			break;
	
		case 17:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_007");
			else
				return joaat("FM_Hip_F_Retro_007");
			break;
	
		case 18:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_008");
			else
				return joaat("FM_Hip_F_Retro_008");
			break;
	
		case 19:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_009");
			else
				return joaat("FM_Hip_F_Retro_009");
			break;
	
		case 20:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_010");
			else
				return joaat("FM_Hip_F_Retro_010");
			break;
	
		case 21:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_011");
			else
				return joaat("FM_Hip_F_Retro_011");
			break;
	
		case 22:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_012");
			else
				return joaat("FM_Hip_F_Retro_012");
			break;
	
		case 23:
			if (bParam1)
				return joaat("FM_Hip_M_Retro_013");
			else
				return joaat("FM_Hip_F_Retro_013");
			break;
	
		case 24:
			if (bParam1)
				return joaat("FM_Rstar_M_Tshirt_000");
			else
				return joaat("FM_Rstar_F_Tshirt_000");
			break;
	
		case 25:
			if (bParam1)
				return joaat("FM_Rstar_M_Tshirt_001");
			else
				return joaat("FM_Rstar_F_Tshirt_001");
			break;
	
		case 26:
			if (bParam1)
				return joaat("FM_Rstar_M_Tshirt_002");
			else
				return joaat("FM_Rstar_F_Tshirt_002");
			break;
	
		case 27:
			if (bParam1)
				return joaat("FM_Ind_M_Award_000");
			else
				return joaat("FM_Ind_F_Award_000");
			break;
	
		case 28:
			if (bParam1)
				return joaat("MP_Fli_M_Tshirt_000");
			else
				return joaat("MP_Fli_F_Tshirt_000");
			break;
	
		case 29:
			if (bParam1)
				return joaat("FM_LTS_M_Tshirt_000");
			else
				return joaat("FM_LTS_F_Tshirt_000");
			break;
	
		case 30:
			if (bParam1)
				return joaat("MP_FM_OGA_000_m");
			else
				return joaat("MP_FM_OGA_000_f");
			break;
	
		case 31:
			if (bParam1)
				return joaat("MP_FM_OGA_001_m");
			else
				return joaat("MP_FM_OGA_001_f");
			break;
	
		case 32:
			if (bParam1)
				return joaat("MP_FM_OGA_002_m");
			else
				return joaat("MP_FM_OGA_002_f");
			break;
	
		case 33:
			if (bParam1)
				return joaat("MP_FM_OGA_003_m");
			else
				return joaat("MP_FM_OGA_003_f");
			break;
	
		case 34:
			if (bParam1)
				return joaat("MP_Elite_M_Tshirt");
			else
				return joaat("MP_Elite_F_Tshirt");
			break;
	
		case 35:
			if (bParam1)
				return joaat("MP_Elite_M_Tshirt_1");
			else
				return joaat("MP_Elite_F_Tshirt_1");
			break;
	}

	return 0;
}

void func_127(int iParam0) // Position - 0x165EA (91626)
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	int num3;
	ePedComponentType type;
	ePedComponentType type2;

	switch (iParam0)
	{
		case 0:
			str = "CLO_HST_A_0";
			str2 = "CLO_HST_AD_0";
			str3 = "DeathDefying";
			str4 = "MPTShirtAwards2";
			num = 168;
			break;
	
		case 1:
			str = "CLO_HST_A_1";
			str2 = "CLO_HST_AD_1";
			str3 = "ForHire";
			str4 = "MPTShirtAwards2";
			num = 160;
			break;
	
		case 2:
			str = "CLO_HST_A_2";
			str2 = "CLO_HST_AD_3";
			str3 = "LiveALittle";
			str4 = "MPTShirtAwards2";
			num = 166;
			break;
	
		case 5:
			str = "CLO_HST_A_5";
			str2 = "CLO_HST_AD_6";
			str3 = "Decorated";
			str4 = "MPTShirtAwards2";
			num = 163;
			break;
	
		case 7:
			str = "CLO_HST_A_7";
			str2 = "CLO_HST_AD_8";
			str3 = "OneManArmy";
			str4 = "MPTShirtAwards2";
			num = 175;
			break;
	
		case 6:
			str = "CLO_HST_A_6";
			str2 = "CLO_HST_AD_7";
			str3 = "PsychoKiller";
			str4 = "MPTShirtAwards2";
			num = 171;
			break;
	
		case 8:
			str = "CLO_HST_A_8";
			str2 = "CLO_HST_AD_2";
			str3 = "ShotCaller";
			str4 = "MPTShirtAwards2";
			num = 161;
			break;
	
		case 34:
			str = "CLO_HSTM_U_3_0";
			str2 = "CLO_HST_AD_10";
			str3 = "EliteTshirt1";
			str4 = "MPTShirtAwards2";
			break;
	}

	num3 = 5;

	if (func_129(num, 9) != 1)
		num2 = 1;

	if (iParam0 != 34)
	{
		type = func_118(num, num3, 9);
		type2 = func_116(num, -1);
	}
	else
	{
		type = PV_COMP_HAND;
		type2 = func_128();
	}

	func_130(str, str2, str3, str4, type, type2, -1, num2, &Global_1672212, 218, 182);
	return;
}

ePedComponentType func_128() // Position - 0x16769 (92009)
{
	int num;

	if (_STAT_GET_PACKED_BOOL(3765, -1))
		num = num + 1;

	if (_STAT_GET_PACKED_BOOL(3766, -1))
		num = num + 1;

	if (_STAT_GET_PACKED_BOOL(3767, -1))
		num = num + 1;

	if (_STAT_GET_PACKED_BOOL(3768, -1))
		num = num + 1;

	if (_STAT_GET_PACKED_BOOL(3769, -1))
		num = num + 1;

	return num;
}

int func_129(int iParam0, int iParam1) // Position - 0x167C8 (92104)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 53:
			return 1;
	
		case 39:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		case 63:
			return 1;
	
		case 16:
			return 1;
	
		case 0:
			return 1;
	
		case 12:
			return 1;
	
		case 11:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 15:
			return 1;
	
		case 17:
			return 1;
	
		case 21:
			return 1;
	
		case 14:
			return 1;
	
		case 22:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 1;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 1;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 164:
			return 1;
	
		case 165:
			return 1;
	
		case 166:
			return 1;
	
		case 167:
			return 1;
	
		case 168:
			return 1;
	
		case 67:
			return 1;
	
		case 158:
			return 1;
	
		case 159:
			return 1;
	
		case 160:
			return 1;
	
		case 161:
			return 1;
	
		case 162:
			return 1;
	
		case 163:
			return 1;
	
		case 169:
			return 1;
	
		case 170:
			return 1;
	
		case 171:
			return 1;
	
		case 172:
			return 1;
	
		case 173:
			return 1;
	
		case 174:
			return 1;
	
		case 175:
			return 1;
	
		case 176:
			return 1;
	
		case 177:
			return 1;
	
		case 178:
			return 1;
	
		case 179:
			return 1;
	
		case 180:
			return 1;
	
		case 181:
			return 1;
	
		case 70:
			return 1;
	
		case 71:
			return 1;
	
		case 72:
			return 1;
	
		case 73:
			return 1;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 1;
	
		case 78:
			return 1;
	
		case 79:
			return 1;
	
		case 80:
			return 1;
	
		case 81:
			return 1;
	
		case 82:
			return 1;
	
		case 83:
			return 1;
	
		case 84:
			return 1;
	
		case 85:
			return 1;
	
		case 86:
			return 1;
	
		case 87:
			return 1;
	
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
			return 1;
	
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			return 1;
	}

	return 0;
}

void func_130(char* sParam0, char* sParam1, char* sParam2, char* sParam3, ePedComponentType epctParam4, ePedComponentType epctParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10) // Position - 0x16D95 (93589)
{
	int i;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (uParam8->f_1[i] == 0)
		{
			func_132(i, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_131(i, sParam0, sParam1, epctParam4, epctParam5, uParam8);
			uParam8->f_1[i] = 1;
			uParam8->f_473[i] = iParam9;
			uParam8->f_486[i] = iParam10;
			i = 12;
		}
	}

	return;
}

void func_131(int iParam0, char* sParam1, char* sParam2, ePedComponentType epctParam3, ePedComponentType epctParam4, var uParam5) // Position - 0x16DFF (93695)
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_14[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_111[iParam0 /*8*/], sParam2, 32);
	uParam5->f_208[iParam0] = epctParam3;
	uParam5->f_221[iParam0] = epctParam4;
	return;
}

void func_132(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5) // Position - 0x16E33 (93747)
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_234[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_331[iParam0 /*8*/], sParam2, 32);
	uParam5->f_428[iParam0] = func_133(iParam4);
	uParam5->f_441[iParam0] = iParam3;
	return;
}

int func_133(int iParam0) // Position - 0x16E6E (93806)
{
	switch (iParam0)
	{
		case 2:
			return 107;
	
		case 3:
			return 108;
	
		case 4:
			return 109;
	
		case 5:
			return 110;
	
		default:
			return 0;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x16EBD (93885)
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_135(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x16ED9 (93913)
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	ePedComponentType type;
	ePedComponentType type2;
	int num2;
	ePedComponentType type3;
	int value;
	int value2;
	int num3;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_146(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_144(iParam0, iParam2);
			break;
	}

	num = func_144(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_143(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_142(iParam0, iParam2, false);
	str2 = func_141(iParam0, iParam1, iParam2, false);
	str3 = func_140(iParam0, iParam2);
	str4 = func_139(iParam0, iParam2);
	type = func_138(iParam0, num, iParam2);
	type2 = func_137(iParam0);
	num2 = func_136(iParam1);
	type3 = func_138(iParam0, num2, iParam2);
	value = type - type3;
	value2 = type2 - type3;
	num3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value)) * 100f);
	func_130(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 218, 182);
	return;
}

int func_136(int iParam0) // Position - 0x17015 (94229)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 0;
			break;
	
		case 2:
			num = 1;
			break;
	
		case 3:
			num = 2;
			break;
	
		case 4:
			num = 3;
			break;
	
		case 5:
			num = 4;
			break;
	}

	return num;
}

ePedComponentType func_137(int iParam0) // Position - 0x1706E (94318)
{
	Hash hash;
	Hash statHash;
	ePedComponentType outValue;

	hash = Global_1685376[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return PV_COMP_HEAD;
}

ePedComponentType func_138(int iParam0, int iParam1, int iParam2) // Position - 0x17096 (94358)
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_HAND;
			
				case 3:
					return PV_COMP_DECL;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return PV_COMP_DECL;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

char* func_139(int iParam0, int iParam1) // Position - 0x171EC (94700)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
	
		case 1:
			return "MPAWARDS5";
	
		case 2:
			return "MPAWARDS5";
	
		case 3:
			return "MPAWARDS6";
	
		default:
		
	}

	return "";
}

char* func_140(int iParam0, int iParam1) // Position - 0x1723A (94778)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
	
		case 1:
			return "DeathmatchCreator";
	
		case 2:
			return "PlayedCreation";
	
		case 3:
			return "CreatorsScore";
	
		default:
		
	}

	return "";
}

char* func_141(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x17288 (94856)
{
	iParam2 == 9;
	bParam3;
	func_138(iParam0, iParam1, iParam2) == PV_COMP_BERD;

	switch (iParam0)
	{
		case 0:
			return "AWS_686";
	
		case 1:
			return "AWS_688";
	
		case 2:
			return "AWS_689";
	
		case 3:
			return "AWS_690";
	
		default:
		
	}

	return "";
}

char* func_142(int iParam0, int iParam1, BOOL bParam2) // Position - 0x172E9 (94953)
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "AWT_686";
	
		case 1:
			return "AWT_688";
	
		case 2:
			return "AWT_689";
	
		case 3:
			return "AWT_690";
	
		default:
		
	}

	return "";
}

int func_143(int iParam0, int iParam1) // Position - 0x1733C (95036)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_144(int iParam0, int iParam1) // Position - 0x1737B (95099)
{
	if (func_145(func_137(iParam0), func_138(iParam0, 5, iParam1)))
		return 5;

	if (func_145(func_137(iParam0), func_138(iParam0, 4, iParam1)))
		return 5;

	if (func_145(func_137(iParam0), func_138(iParam0, 3, iParam1)))
		return 4;

	if (func_145(func_137(iParam0), func_138(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

BOOL func_145(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x173EC (95212)
{
	if (epctParam1 <= epctParam0)
		return true;

	return false;
}

int func_146(int iParam0, int iParam1) // Position - 0x17400 (95232)
{
	if (!func_145(func_137(iParam0), func_138(iParam0, 5, iParam1)))
		return 0;

	if (!func_145(func_137(iParam0), func_138(iParam0, 4, iParam1)))
		return 2;

	if (!func_145(func_137(iParam0), func_138(iParam0, 3, iParam1)))
		return 3;

	if (!func_145(func_137(iParam0), func_138(iParam0, 2, iParam1)))
		return 4;

	return 5;
}

void func_147(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x17475 (95349)
{
	int num;
	int num2;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	ePedComponentType type;
	ePedComponentType type2;
	int num3;

	switch (iParam1)
	{
		case 6:
		case 8:
			if (func_120(iParam0, -1))
				iParam1 = 0;
			break;
	
		case 7:
			if (func_120(iParam0, -1) == false)
				iParam1 = 5;
			break;
	}

	num2 = func_152(iParam0);

	switch (iParam2)
	{
		case 9:
			num = 3;
			break;
	}

	if (iParam0 == 57)
		iParam1 = 2;
	else if (iParam0 == 58 || iParam0 == 9)
		iParam1 = 3;
	else if (iParam0 == 59 || iParam0 == 10)
		iParam1 = 4;
	else
		iParam1 = 5;

	str = func_151(iParam0, num);
	str2 = func_150(iParam0, num);
	str3 = func_149(iParam0, num);
	str4 = func_148(iParam0, num);
	type = func_118(num2, iParam1, 0);
	type2 = func_116(num2, -1);

	if (num2 == 64)
	{
		type = PV_COMP_BERD;
		type2 = PV_COMP_HEAD;
	}

	num3 = -1;

	if (func_120(iParam0, -1))
	{
		type2 = func_118(func_152(iParam0), iParam1, 0);
	
		if (num2 == 64)
			type2 = PV_COMP_BERD;
	}

	iParam1 = 1;
	func_130(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 218, 182);
	return;
}

char* func_148(int iParam0, int iParam1) // Position - 0x1759F (95647)
{
	char* str;

	str = "MPTATTOOS";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
	
		case 89:
			return "MPTSHIRTAWARDS";
	
		case 88:
			return "MPTSHIRTAWARDS";
	
		case 87:
			return "MPTSHIRTAWARDS";
	
		case 57:
			return "MPTattoos2";
	
		case 58:
			return "MPTattoos2";
	
		case 59:
			return "MPTattoos2";
	
		case 60:
			return "MPTattoos2";
	
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
	}

	return str;
}

char* func_149(int iParam0, int iParam1) // Position - 0x17684 (95876)
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
	
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
	
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
	
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
	
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
	
		case 0:
			return "HeadBanger";
	
		case 1:
			return "theslayer";
	
		case 2:
			return "clearout";
	
		case 4:
			return "thehustler";
	
		case 3:
			return "armoredvantakedowns";
	
		case 54:
			return "wineverymodeonce";
	
		case 5:
			return "killplayerbountyhead";
	
		case 6:
			return "holdworldrecord";
	
		case 55:
			return "MP_FM_Tat_Award_008";
	
		case 7:
			return "getrevengekills";
	
		case 8:
			return "kill3otherracers";
	
		case 9:
			return "reachrank1";
	
		case 10:
			return "reachrank2";
	
		case 11:
			return "reachrank3";
	
		case 13:
			return "HeadBanger";
	
		case 14:
			return "HeadBanger";
	
		case 15:
			return "HeadBanger";
	
		case 16:
			return "HeadBanger";
	
		case 89:
			return "RockstarVerifiied";
	
		case 87:
			return "ReachHordeModeWave";
	
		case 12:
			return "TATTOO_RACES_WON";
	}

	switch (iParam0)
	{
		case 17:
			return "Headbanger";
	
		case 18:
			return "Headbanger";
	
		case 19:
			return "Headbanger";
	
		case 20:
			return "Headbanger";
	
		case 21:
			return "Headbanger";
	
		case 22:
			return "Headbanger";
	
		case 23:
			return "Headbanger";
	
		case 24:
			return "Headbanger";
	
		case 25:
			return "MP_FM_Tat_002";
	
		case 26:
			return "Headbanger";
	
		case 27:
			return "Headbanger";
	
		case 28:
			return "Headbanger";
	
		case 61:
			return "Headbanger";
	
		case 62:
			return "Headbanger";
	
		case 63:
			return "Headbanger";
	
		case 64:
			return "Headbanger";
	
		case 65:
			return "MP_FM_Tat_019";
	
		case 29:
			return "Headbanger";
	
		case 30:
			return "Headbanger";
	
		case 31:
			return "Headbanger";
	
		case 66:
			return "Headbanger";
	
		case 32:
			return "Headbanger";
	
		case 33:
			return "Headbanger";
	
		case 34:
			return "MP_FM_Tat_023";
	
		case 35:
			return "Headbanger";
	
		case 36:
			return "Headbanger";
	
		case 37:
			return "Headbanger";
	
		case 38:
			return "Headbanger";
	
		case 39:
			return "Headbanger";
	
		case 40:
			return "Headbanger";
	
		case 67:
			return "Headbanger";
	
		case 41:
			return "Headbanger";
	
		case 68:
			return "Headbanger";
	
		case 42:
			return "Headbanger";
	
		case 43:
			return "Headbanger";
	
		case 44:
			return "Headbanger";
	
		case 45:
			return "MP_FM_Tat_036";
	
		case 46:
			return "MP_FM_Tat_037";
	
		case 47:
			return "Headbanger";
	
		case 48:
			return "MP_FM_Tat_039";
	
		case 49:
			return "MP_FM_Tat_040";
	
		case 50:
			return "Headbanger";
	
		case 51:
			return "Headbanger";
	
		case 52:
			return "Headbanger";
	
		case 53:
			return "Headbanger";
	
		case 69:
			return "Headbanger";
	}

	return str;
}

char* func_150(int iParam0, int iParam1) // Position - 0x17B30 (97072)
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D" /*Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch.*/;
	
		case 6:
			return "TAT_FM_RECHOLD_d" /*Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race.*/;
	
		case 8:
			return "TAT_FM_KIL3RACE_D" /*Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win.*/;
	
		case 5:
			return "TAT_FM_KILb_D" /*Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets.*/;
	
		case 0:
			return "TAT_FM_HEADBANG_D" /*Complete the Head Banger platinum Award. ~n~Get 500 player headshots.*/;
	
		case 12:
			return "TAT_RACE50_D" /*Complete The Champion platinum Award. ~n~Win 50 Races.*/;
	
		case 2:
			return "TAT_CLEAROUT_D" /*Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session.*/;
	
		case 9:
			return "TAT_FM_RANK1_D" /*Complete The Widow Maker silver Award. ~n~Get 250 player kills.*/;
	
		case 10:
			return "TAT_FM_RANK2_D" /*Complete The Widow Maker gold Award. ~n~Get 500 player kills.*/;
	
		case 11:
			return "TAT_FM_RANK3_D" /*Complete The Widow Maker platinum Award. ~n~Get 1000 player kills.*/;
	
		case 4:
			return "TAT_FM_HUST_D" /*Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting.*/;
	
		case 1:
			return "TAT_FM_SLAY_D" /*Complete The Slayer platinum Award. ~n~Win 50 Deathmatches.*/;
	
		case 54:
			return "TAT_FM_EVERMODE1_D" /*Complete the All Rounder platinum Award. ~n~Win every game mode.*/;
	
		case 3:
			return "TAT_FM_ARVANTAKE_D" /*Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks.*/;
	
		case 56:
			return "TAT_CHEATER_D" /*Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives.*/;
	
		case 13:
			return "TAT_CRANKA_D" /*Reached Crew Rank 26.*/;
	
		case 14:
			return "TAT_CRANKB_D" /*Reached Crew Rank 45.*/;
	
		case 15:
			return "TAT_CRANKC_D" /*Reached Crew Rank 18.*/;
	
		case 16:
			return "TAT_CRANKD_D" /*Reached Crew Rank 52.*/;
	
		case 89:
			return "TAT_FM_ROCKSTAR_D" /*Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games.*/;
	
		case 87:
			return "TAT_FM_REDSKULL_D" /*Complete The Survivor platinum Award. ~n~Complete a Survival.*/;
	
		case 55:
			return "TAT_FM_MODDED_D" /*Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle.*/;
	}

	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 18:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 19:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 20:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 21:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 22:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 23:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 24:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 25:
			return "TAT_FM_TAT9D" /*Complete the Death Toll platinum Award. ~n~Get 500 kills in Deathmatch.*/;
	
		case 26:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 27:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 28:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 61:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 62:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 63:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 64:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 65:
			return "TAT_FM_TAT17D" /*Complete the Bloodiest Of The Bunch platinum Award. ~n~Get the most kills in a 4 player Survival.*/;
	
		case 29:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 30:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 31:
			return "TAT_RANK10_D" /*Reach Rank 10 To Unlock Tattoo.*/;
	
		case 66:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 32:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 33:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 34:
			return "TAT_FM_TAT24D" /*Complete the Lapping It Up platinum Award. ~n~Get 25 Private Dances.*/;
	
		case 35:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 36:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 37:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 38:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 39:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 40:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 67:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 41:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 68:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 42:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 43:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 44:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 45:
			return "TAT_FM_TAT37D" /*Complete the Pistol Whipped platinum Award. ~n~Get 500 Pistol kills.*/;
	
		case 46:
			return "TAT_FM_TAT38D" /*Complete the Team Carrier platinum Award. ~n~Earn 50 MVPs in Team Deathmatch.*/;
	
		case 47:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 48:
			return "TAT_FM_TAT40D" /*Complete the Scoping Out platinum Award. ~n~Get 100 Sniper kills.*/;
	
		case 49:
			return "TAT_FM_TAT41D" /*Complete the Killstreaker platinum Award. ~n~Earn a 10 plus killstreak in Deathmatch.*/;
	
		case 50:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 51:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 52:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 53:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 69:
			return "TAT_RANK20_D" /*Reach Rank 20 To Unlock Tattoo.*/;
	
		case 57:
			return "TAT_HOLDUP1V_D" /*Complete the Armed Robber bronze Award. ~n~Hold up 5 stores.*/;
	
		case 58:
			return "TAT_HOLDUP5V_D" /*Complete the Armed Robber silver Award. ~n~Hold up 10 stores.*/;
	
		case 59:
			return "TAT_HOLDUP10V_D" /*Complete the Armed Robber gold Award. ~n~Hold up 15 stores.*/;
	
		case 60:
			return "TAT_HOLDUP20V_D" /*Complete the Armed Robber platinum Award. ~n~Hold up 20 stores.*/;
	}

	return str;
}

char* func_151(int iParam0, int iParam1) // Position - 0x17FDC (98268)
{
	char* str;

	str = "";
	iParam0 == iParam0;
	iParam1 == iParam1;

	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG" /*Skull*/;
	
		case 2:
			return "TAT_CLEAROUT" /*Grim Reaper Smoking Gun*/;
	
		case 9:
			return "TAT_FM_RANK1" /*Blank Scroll*/;
	
		case 10:
			return "TAT_FM_RANK2" /*Embellished Scroll*/;
	
		case 11:
			return "TAT_FM_RANK3" /*Seven Deadly Sins*/;
	
		case 4:
			return "TAT_FM_HUST" /*Hustler*/;
	
		case 1:
			return "TAT_FM_SLAY" /*Burning Heart*/;
	
		case 54:
			return "TAT_FM_EVERMODE1" /*Angel*/;
	
		case 3:
			return "TAT_FM_ARVANTAKE" /*Blackjack*/;
	
		case 7:
			return "TAT_FM_REVENKIL" /*Dragon and Dagger*/;
	
		case 5:
			return "TAT_FM_KILb" /*Skull and Sword*/;
	
		case 8:
			return "TAT_FM_KIL3RACE" /*Ride or Die*/;
	
		case 6:
			return "TAT_FM_RECHOLD" /*Racing Blonde*/;
	
		case 12:
			return "TAT_RACE50" /*Racing Brunette*/;
	
		case 13:
			return "TAT_CRANKA" /*Crew Rank 1*/;
	
		case 14:
			return "TAT_CRANKB" /*Crew Rank 2*/;
	
		case 15:
			return "TAT_CRANKC" /*Crew Rank 3*/;
	
		case 16:
			return "TAT_CRANKD" /*Crew Rank 4*/;
	
		case 87:
			return "TAT_FM_REDSKULL" /*Red Skull T-Shirt*/;
	
		case 88:
			return "TAT_FM_BELLE" /*Los Santos Belle T-Shirt*/;
	
		case 89:
			return "TAT_FM_ROCKSTAR" /*Rockstar T-Shirt*/;
	
		case 55:
			return "TAT_FM_MODDED" /*Los Santos Customs*/;
	
		case 17:
			return "TAT_FM_TAT1" /*Tattoo 1*/;
	
		case 18:
			return "TAT_FM_TAT2" /*Tattoo 2*/;
	
		case 19:
			return "TAT_FM_TAT3" /*Tattoo 3*/;
	
		case 20:
			return "TAT_FM_TAT4" /*Tattoo 4*/;
	
		case 21:
			return "TAT_FM_TAT5" /*Tattoo 5*/;
	
		case 22:
			return "TAT_FM_TAT6" /*Tattoo 6*/;
	
		case 56:
			return "TAT_CHEATER" /*Trust No One*/;
	}

	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7" /*Tattoo 7*/;
	
		case 24:
			return "TAT_FM_TAT8" /*Tattoo 8*/;
	
		case 25:
			return "TAT_FM_TAT9" /*Melting Skull*/;
	
		case 26:
			return "TAT_FM_TAT10" /*Tattoo 10*/;
	
		case 27:
			return "TAT_FM_TAT11" /*Tattoo 11*/;
	
		case 28:
			return "TAT_FM_TAT12" /*Tattoo 12*/;
	
		case 61:
			return "TAT_FM_TAT13" /*Tattoo 13*/;
	
		case 62:
			return "TAT_FM_TAT14" /*Tattoo 14*/;
	
		case 63:
			return "TAT_FM_TAT15" /*Tattoo 1*/;
	
		case 64:
			return "TAT_FM_TAT16" /*Tattoo 16*/;
	
		case 65:
			return "TAT_FM_TAT38" /*The Wages of Sin*/;
	
		case 29:
			return "TAT_FM_TAT18" /*Tattoo 19*/;
	
		case 30:
			return "TAT_FM_TAT19";
	
		case 31:
			return "TAT_FM_TAT20" /*Tattoo 20*/;
	
		case 66:
			return "TAT_FM_TAT21" /*Tattoo 21*/;
	
		case 32:
			return "TAT_FM_TAT22" /*Tattoo 22*/;
	
		case 33:
			return "TAT_FM_TAT23" /*Tattoo 23*/;
	
		case 34:
			return "TAT_FM_TAT24" /*Hottie*/;
	
		case 35:
			return "TAT_FM_TAT25" /*Tattoo 25*/;
	
		case 36:
			return "TAT_FM_TAT26" /*Tattoo 26*/;
	
		case 37:
			return "TAT_FM_TAT27" /*Tattoo 27*/;
	
		case 38:
			return "TAT_FM_TAT28" /*Tattoo 28*/;
	
		case 39:
			return "TAT_FM_TAT29" /*Tattoo 29*/;
	
		case 40:
			return "TAT_FM_TAT30" /*Tattoo 30*/;
	
		case 67:
			return "TAT_FM_TAT31" /*Tattoo 31*/;
	
		case 41:
			return "TAT_FM_TAT32" /*Tattoo 32*/;
	
		case 68:
			return "TAT_FM_TAT33" /*Tattoo 33*/;
	
		case 42:
			return "TAT_FM_TAT34" /*Tattoo 34*/;
	
		case 43:
			return "TAT_FM_TAT35" /*Tattoo 35*/;
	
		case 44:
			return "TAT_FM_TAT36" /*Tattoo 36*/;
	
		case 45:
			return "TAT_FM_TAT37" /*Way Of The Gun*/;
	
		case 46:
			return "TAT_FM_TAT41" /*Grim Reaper*/;
	
		case 47:
			return "TAT_FM_TAT39" /*Tattoo 39*/;
	
		case 48:
			return "TAT_FM_TAT40" /*Broken Skull*/;
	
		case 49:
			return "TAT_FM_TAT17" /*Flaming Skull*/;
	
		case 50:
			return "TAT_FM_TAT42" /*Tattoo 42*/;
	
		case 51:
			return "TAT_FM_TAT43" /*Tattoo 43*/;
	
		case 52:
			return "TAT_FM_TAT44" /*Tattoo 44*/;
	
		case 53:
			return "TAT_FM_TAT45" /*Tattoo 45*/;
	
		case 69:
			return "TAT_FM_TAT46" /*Tattoo 46*/;
	
		case 57:
			return "TAT_HOLDUP1V" /*Clown*/;
	
		case 58:
			return "TAT_HOLDUP5V" /*Clown and Gun*/;
	
		case 59:
			return "TAT_HOLDUP10V" /*Clown Dual Wield*/;
	
		case 60:
			return "TAT_HOLDUP20V" /*Clown Dual Wield Dollars*/;
	}

	return str;
}

int func_152(int iParam0) // Position - 0x184A1 (99489)
{
	switch (iParam0)
	{
		case 4:
			return 49;
	
		case 7:
			return 59;
	
		case 0:
			return 9;
	
		case 5:
			return 55;
	
		case 1:
			return 40;
	
		case 57:
			return 14;
	
		case 58:
			return 14;
	
		case 59:
			return 14;
	
		case 60:
			return 14;
	
		case 12:
			return 21;
	
		case 56:
			return 24;
	
		case 25:
			return 44;
	
		case 34:
			return 15;
	
		case 45:
			return 1;
	
		case 48:
			return 2;
	
		case 46:
			return 42;
	
		case 9:
			return 56;
	
		case 10:
			return 56;
	
		case 11:
			return 56;
	
		case 87:
			return 48;
	
		default:
		
	}

	return 64;
}

void func_153(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1858C (99724)
{
	int i;
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	ePedComponentType type;
	ePedComponentType type2;
	int num2;
	int num3;
	int value;
	ePedComponentType value2;
	int num4;
	int num5;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_168(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_167();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_166(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_167();
	str = func_164(iParam0, iParam2, false);
	str2 = func_163(iParam0, iParam1, iParam2, false);
	str3 = func_162(iParam0, iParam2);
	str4 = func_161(iParam0, iParam2);
	type = func_159(iParam0, num, iParam2);
	type2 = func_156(iParam0, num, iParam2);
	num2 = func_136(iParam1);
	num3 = func_159(iParam0, num2, iParam2);
	value = type - num3;
	value2 = type2 - num3;

	if (func_155(iParam0))
	{
		num4 = 100;
	
		switch (iParam0)
		{
			case 17:
				type2 = 26;
				type = 26;
				break;
		
			case 18:
				type2 = 26;
				type = 26;
				break;
		
			case 19:
				type2 = 26;
				type = 26;
				break;
		
			case 20:
				type2 = 26;
				type = 26;
				break;
		
			case 21:
				type2 = 26;
				type = 26;
				break;
		
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				type2 = 26;
				type = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				value2 = 0;
				num5 = _MPPLY_STAT_GET_INT(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num5, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num5, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num5, 26))
					value2 = value2 - 1;
			
				if (value2 < 0)
					value2 = 0;
			
				type2 = value2;
				type = 26;
				value = 26;
				break;
		
			case 18:
				value2 = PV_COMP_HEAD;
				num5 = _MPPLY_STAT_GET_INT(joaat("MPPLY_HEISTTEAMPROGRESSBITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num5, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num5, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num5, 26))
					value2 = value2 - 1;
			
				if (value2 < PV_COMP_HEAD)
					value2 = PV_COMP_HEAD;
			
				type2 = value2;
				type = 26;
				value = 26;
				break;
		
			case 19:
				value2 = PV_COMP_HEAD;
				num5 = _MPPLY_STAT_GET_INT(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num5, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num5, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num5, 26))
					value2 = value2 - 1;
			
				if (value2 < PV_COMP_HEAD)
					value2 = PV_COMP_HEAD;
			
				type2 = value2;
				type = 26;
				value = 26;
				break;
		
			case 20:
				value2 = PV_COMP_HEAD;
				num5 = _MPPLY_STAT_GET_INT(joaat("MPPLY_HEIST_1STPERSON_PROG"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num5, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num5, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num5, 26))
					value2 = value2 - 1;
			
				if (value2 < PV_COMP_HEAD)
					value2 = PV_COMP_HEAD;
			
				type2 = value2;
				type = 26;
				value = 26;
				break;
		
			case 21:
				value2 = PV_COMP_HEAD;
				num5 = _MPPLY_STAT_GET_INT(joaat("MPPLY_HEISTMEMBERPROGRESSBITSET"));
			
				for (i = 0; i < 28; i = i + 1)
				{
					if (IS_BIT_SET(num5, i))
						value2 = value2 + 1;
				}
			
				if (IS_BIT_SET(num5, 9))
					value2 = value2 - 1;
			
				if (IS_BIT_SET(num5, 26))
					value2 = value2 - 1;
			
				if (value2 < PV_COMP_HEAD)
					value2 = PV_COMP_HEAD;
			
				type2 = value2;
				type = 26;
				value = 26;
				break;
		
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				value = func_159(iParam0, num2, iParam2);
				value2 = func_156(iParam0, num, iParam2);
				break;
		}
	
		num4 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value)) * 100f);
	}

	func_130(str, str2, str3, str4, type, type2, num4, iParam1, uParam3, 218, 182);
	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x189DA (100826)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_155(int iParam0) // Position - 0x189F8 (100856)
{
	Hash hash;
	Hash statHash;
	BOOL outValue;

	hash = Global_1685384[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

ePedComponentType func_156(int iParam0, int iParam1, int iParam2) // Position - 0x18A20 (100896)
{
	iParam1 == 5;
	iParam2 == 0;
	func_155(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_157(iParam0);
	
		case 4:
			return func_157(iParam0);
	
		case 5:
			return func_157(iParam0);
	
		case 7:
			return func_157(iParam0);
	
		case 8:
			return func_157(iParam0);
	
		case 9:
			return func_157(iParam0);
	
		case 10:
			return func_157(iParam0);
	
		case 11:
			return func_157(iParam0);
	
		default:
		
	}

	if (func_155(iParam0) == true)
		return 1;

	return 0;
}

int func_157(int iParam0) // Position - 0x18ACE (101070)
{
	int num;
	int num2;
	int i;

	num2 = _MPPLY_STAT_GET_INT(func_158(iParam0));

	for (i = 0; i < 29; i = i + 1)
	{
		if (IS_BIT_SET(num2, i))
			num = num + 1;
	}

	return num;
}

int func_158(int iParam0) // Position - 0x18B05 (101125)
{
	switch (iParam0)
	{
		case 3:
			return joaat("MPPLY_GANGOPS_ALLINORDER");
	
		case 4:
			return joaat("MPPLY_GANGOPS_LOYALTY");
	
		case 7:
			return joaat("MPPLY_GANGOPS_LOYALTY2");
	
		case 8:
			return joaat("MPPLY_GANGOPS_LOYALTY3");
	
		case 5:
			return joaat("MPPLY_GANGOPS_CRIMMASMD");
	
		case 9:
			return joaat("MPPLY_GANGOPS_CRIMMASMD2");
	
		case 10:
			return joaat("MPPLY_GANGOPS_CRIMMASMD3");
	
		case 11:
			return joaat("MPPLY_GANGOPS_SUPPORT");
	
		default:
		
	}

	return joaat("MPPLY_GANGOPS_ALLINORDER");
}

int func_159(int iParam0, int iParam1, int iParam2) // Position - 0x18B89 (101257)
{
	iParam1 == 5;
	iParam2 == 0;
	func_155(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_160();
	
		case 4:
			return func_160();
	
		case 5:
			return func_160();
	
		case 7:
			return func_160();
	
		case 8:
			return func_160();
	
		case 9:
			return func_160();
	
		case 10:
			return func_160();
	
		case 11:
			return func_160();
	
		default:
		
	}

	return 1;
}

int func_160() // Position - 0x18C16 (101398)
{
	return 29;
}

char* func_161(int iParam0, int iParam1) // Position - 0x18C20 (101408)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
	
		case 13:
			return "MpAwardHeists";
	
		case 14:
			return "MpAwardHeists";
	
		case 15:
			return "MpAwardHeists";
	
		case 16:
			return "MpAwardHeists";
	
		case 17:
			return "MpAwardHeists";
	
		case 18:
			return "MpAwardHeists";
	
		case 19:
			return "MpAwardHeists";
	
		case 20:
			return "MPAwardHeists";
	
		case 21:
			return "MPAwardHeists";
	
		case 1:
			return "MPAwardHeists2";
	
		case 2:
			return "MPAwardHeists2";
	
		case 6:
			return "MPAwardHeists2";
	
		case 3:
			return "MPAwardHeists2";
	
		case 4:
			return "MPAwardHeists2";
	
		case 5:
			return "MPAwardHeists2";
	
		case 7:
			return "MPAwardHeists2";
	
		case 8:
			return "MPAwardHeists2";
	
		case 9:
			return "MPAwardHeists2";
	
		case 10:
			return "MPAwardHeists2";
	
		case 11:
			return "MPAwardHeists2";
	
		default:
		
	}

	return "MPAwardHeists";
}

char* func_162(int iParam0, int iParam1) // Position - 0x18D4B (101707)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
	
		case 13:
			return "GoToJail";
	
		case 14:
			return "LabReport";
	
		case 15:
			return "ProductPlacement";
	
		case 16:
			return "SmoothSailing";
	
		case 17:
			return "AllInOrder";
	
		case 18:
			return "Loyalty";
	
		case 19:
			return "CriminalMastermind";
	
		case 20:
			return "AnotherPerspective";
	
		case 21:
			return "SupportingRole";
	
		case 1:
			return "IAAFinale";
	
		case 2:
			return "SubmarineFinale";
	
		case 6:
			return "MissleSiloFinale";
	
		case 3:
			return "AllInOrderII";
	
		case 4:
			return "LoyaltyIV";
	
		case 5:
			return "CriminalMastermindIV";
	
		case 7:
			return "LoyaltyII";
	
		case 8:
			return "LoyaltyIII";
	
		case 9:
			return "CriminalMastermindII";
	
		case 10:
			return "CriminalMastermindIII";
	
		case 11:
			return "SupportingRoleII";
	
		default:
		
	}

	return "";
}

char* func_163(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x18E76 (102006)
{
	iParam2 == 9;
	bParam3;
	func_159(iParam0, iParam1, iParam2) == 1;

	switch (iParam0)
	{
		case 12:
			return "AWS_775";
	
		case 13:
			return "AWS_767";
	
		case 14:
			return "AWS_768";
	
		case 15:
			return "AWS_776";
	
		case 16:
			return "AWS_780";
	
		case 17:
			return "AWS_777";
	
		case 18:
			return "AWS_778";
	
		case 19:
			return "AWS_779";
	
		case 20:
			return "AWS_785";
	
		case 21:
			return "AWS_786";
	
		case 1:
			return "AWD_GANGOP0d" /*Complete Act I of The Doomsday Heist for the first time.*/;
	
		case 2:
			return "AWD_GANGOP1d" /*Complete Act II of The Doomsday Heist for the first time.*/;
	
		case 6:
			return "AWD_GANGOP2d" /*Complete Act III of The Doomsday Heist for the first time.*/;
	
		case 3:
			return "AWD_GANGOP3d" /*Complete The Doomsday Heist in order.*/;
	
		case 4:
			return "AWD_GANGOP7d" /*Complete The Doomsday Heist in order with the same team of 4 players.*/;
	
		case 5:
			return "AWD_GANGOP9d" /*Complete The Doomsday Heist in order, with the same team of 4 players, on Hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 7:
			return "AWD_GANGOP4d" /*Complete The Doomsday Heist in order with the same team of 2 players.*/;
	
		case 8:
			return "AWD_GANGOP6d" /*Complete The Doomsday Heist in order with the same team of 3 players.*/;
	
		case 9:
			return "AWD_GANGOP5d" /*Complete The Doomsday Heist in order, with the same team of 2 players, on Hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 10:
			return "AWD_GANGOP8d" /*Complete The Doomsday Heist in order, with the same team of 3 players, on Hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 11:
			return "AWD_GANGO10d" /*Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale.*/;
	
		default:
		
	}

	return "";
}

char* func_164(int iParam0, int iParam1, BOOL bParam2) // Position - 0x18FB4 (102324)
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 12:
			return "AWT_775";
	
		case 13:
			return "AWT_767";
	
		case 14:
			return "AWT_768";
	
		case 15:
			return "AWT_776";
	
		case 16:
			return "AWT_780";
	
		case 17:
			return "AWT_777";
	
		case 18:
			return "AWT_778";
	
		case 19:
			return "AWT_779";
	
		case 20:
			return "AWT_785";
	
		case 21:
			return "AWT_786";
	
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_165(iParam0);
	
		default:
		
	}

	return "";
}

char* func_165(int iParam0) // Position - 0x190A0 (102560)
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOPF0" /*Act I*/;
	
		case 2:
			return "AWD_GANGOPF1" /*Act II*/;
	
		case 6:
			return "AWD_GANGOPF2" /*Act III*/;
	
		case 3:
			return "AWD_GANGOPA" /*All In Order II*/;
	
		case 4:
			return "AWD_GANGOPL4" /*Loyalty IV*/;
	
		case 7:
			return "AWD_GANGOPL2" /*Loyalty II*/;
	
		case 8:
			return "AWD_GANGOPL3" /*Loyalty III*/;
	
		case 5:
			return "AWD_GANGOPM4" /*Criminal Mastermind IV*/;
	
		case 9:
			return "AWD_GANGOPM2" /*Criminal Mastermind II*/;
	
		case 10:
			return "AWD_GANGOPM3" /*Criminal Mastermind III*/;
	
		case 11:
			return "AWD_GANGOPSR" /*Supporting Role II*/;
	
		default:
		
	}

	return "";
}

int func_166(int iParam0, int iParam1) // Position - 0x19142 (102722)
{
	iParam1 == 0;

	switch (iParam0)
	{
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 6:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_167() // Position - 0x1922A (102954)
{
	return 5;
}

int func_168(int iParam0) // Position - 0x19233 (102963)
{
	if (func_155(iParam0))
		return 5;

	return 0;
}

void func_169(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x19249 (102985)
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	ePedComponentType type;
	ePedComponentType type2;
	int num2;
	int num3;
	int num4;
	int value;
	ePedComponentType value2;
	int num5;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_180(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_179();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_178(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_179();
	str = func_177(iParam0, iParam2, false);
	str2 = func_176(iParam0, iParam1, iParam2, false);
	str3 = func_175(iParam0, iParam2);
	str4 = func_174(iParam0, iParam2);
	type = func_173(iParam0, num, iParam2);

	if (func_92(iParam0, -1) == true)
		type2 = 1;
	else
		type2 = 0;

	num3 = func_136(iParam1);
	num4 = func_173(iParam0, num3, iParam2);
	value = type - num4;
	value2 = type2 - num4;

	switch (iParam0)
	{
		case 15:
			type2 = func_115(1153, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 16:
			type2 = func_115(1152, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 12:
			type2 = func_115(1088, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 25:
			if (func_92(iParam0, -1))
			{
				type2 = func_115(2117, -1) * 7;
				num2 = func_115(2116, -1);
				type2 = PV_COMP_TEEF;
				value = 7;
				value2 = type2;
			}
			else
			{
				type2 = func_115(2117, -1) * 7;
				num2 = func_115(2116, -1);
				type2 = type2 + num2;
			
				if (type2 > PV_COMP_TEEF)
					type2 = PV_COMP_TEEF;
			
				value = 7;
				value2 = type2;
			}
			break;
	
		case 26:
			if (func_92(iParam0, -1))
			{
				type2 = func_115(2117, -1) * 7;
				num2 = func_115(2116, -1);
				type2 = 28;
				value = 28;
				value2 = type2;
			}
			else
			{
				type2 = func_115(2117, -1) * 7;
				num2 = func_115(2116, -1);
				type2 = type2 + num2;
			
				if (type2 > 28)
					type2 = 28;
			
				value = 28;
				value2 = type2;
			}
			break;
	
		case 212:
			if (func_92(iParam0, -1))
			{
				type2 = 43;
				value = 43;
				value2 = type2;
			}
			else
			{
				type2 = func_171();
				value = 43;
				value2 = type2;
			}
			break;
	
		case 217:
			if (func_92(iParam0, -1))
			{
				type2 = PV_COMP_LOWR;
				value = 4;
				value2 = type2;
			}
			else
			{
				type2 = func_115(7254, -1);
				value = 4;
				value2 = type2;
			}
			break;
	
		case 216:
			if (func_92(iParam0, -1))
			{
				type2 = 100;
				value = 100;
				value2 = type2;
			}
			else
			{
				type2 = func_115(7238, -1);
				value = 100;
				value2 = type2;
			}
			break;
	
		case 59:
			if (func_92(iParam0, -1))
			{
				type2 = PV_COMP_FEET;
				value = 6;
				value2 = type2;
			}
			else
			{
				type2 = func_170();
				value = 6;
				value2 = type2;
			}
			break;
	}

	if (func_92(iParam0, -1))
		num5 = 100;
	else
		num5 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value)) * 100f);

	func_130(str, str2, str3, str4, type, type2, num5, iParam1, uParam3, iParam0, 182);
	return;
}

ePedComponentType func_170() // Position - 0x1959F (103839)
{
	int num;

	num = func_115(8283, -1);

	if (IS_BIT_SET(num, 19))
		return 6;
	else if (IS_BIT_SET(num, 4))
		return 5;
	else if (IS_BIT_SET(num, 3))
		return 4;
	else if (IS_BIT_SET(num, 2))
		return 3;
	else if (IS_BIT_SET(num, 1))
		return 2;
	else if (IS_BIT_SET(num, 0))
		return 1;

	return 0;
}

ePedComponentType func_171() // Position - 0x19604 (103940)
{
	int i;
	int num;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_172(i) != 0)
			num = num + 1;
	}

	return num;
}

int func_172(int iParam0) // Position - 0x19631 (103985)
{
	switch (iParam0)
	{
		case 0:
			return func_115(13238, -1);
	
		case 1:
			return func_115(13239, -1);
	
		case 2:
			return func_115(13240, -1);
	
		case 3:
			return func_115(13241, -1);
	
		case 4:
			return func_115(13242, -1);
	
		case 5:
			return func_115(13243, -1);
	
		case 6:
			return func_115(13244, -1);
	
		case 7:
			return func_115(13245, -1);
	
		case 8:
			return func_115(13246, -1);
	
		case 9:
			return func_115(13247, -1);
	
		case 10:
			return func_115(13248, -1);
	
		case 11:
			return func_115(13249, -1);
	
		case 12:
			return func_115(13250, -1);
	
		case 13:
			return func_115(13251, -1);
	
		case 14:
			return func_115(13252, -1);
	
		case 15:
			return func_115(13253, -1);
	
		case 16:
			return func_115(13254, -1);
	
		case 17:
			return func_115(13255, -1);
	
		case 18:
			return func_115(13256, -1);
	
		case 19:
			return func_115(13257, -1);
	
		case 20:
			return func_115(13258, -1);
	
		case 21:
			return func_115(13259, -1);
	
		case 22:
			return func_115(13260, -1);
	
		case 23:
			return func_115(13261, -1);
	
		case 24:
			return func_115(13262, -1);
	
		case 25:
			return func_115(13263, -1);
	
		case 26:
			return func_115(13264, -1);
	
		case 27:
			return func_115(13265, -1);
	
		case 28:
			return func_115(13266, -1);
	
		case 29:
			return func_115(13267, -1);
	
		case 30:
			return func_115(13268, -1);
	
		case 31:
			return func_115(13269, -1);
	
		case 32:
			return func_115(13270, -1);
	
		case 33:
			return func_115(13271, -1);
	
		case 34:
			return func_115(13272, -1);
	
		case 35:
			return func_115(13273, -1);
	
		case 36:
			return func_115(13274, -1);
	
		case 37:
			return func_115(13275, -1);
	
		case 38:
			return func_115(13276, -1);
	
		case 39:
			return func_115(13277, -1);
	
		case 40:
			return func_115(13278, -1);
	
		case 41:
			return func_115(13279, -1);
	
		case 42:
			return func_115(13280, -1);
	
		case 43:
			return func_115(13281, -1);
	
		case 44:
			return func_115(13282, -1);
	
		case 45:
			return func_115(13283, -1);
	
		case 46:
			return func_115(13284, -1);
	
		case 47:
			return func_115(13285, -1);
	
		case 48:
			return func_115(13286, -1);
	
		case 49:
			return func_115(13287, -1);
	
		default:
			break;
	}

	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2) // Position - 0x19996 (104854)
{
	iParam1 == 5;
	iParam2 == 0;

	switch (iParam0)
	{
		case 15:
			return 25;
	
		case 16:
			return 25;
	
		case 12:
			return 25;
	
		case 25:
			return 7;
	
		case 26:
			return 28;
	
		case 212:
			return 43;
	
		case 217:
			return 4;
	
		case 216:
			return 100;
	
		case 59:
			return 6;
	}

	return 1;
}

char* func_174(int iParam0, int iParam1) // Position - 0x19A2D (105005)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
	
		case 2:
			return "MPAwards5";
	
		case 3:
			return "MPAwards5";
	
		case 4:
			return "MPAwards5";
	
		case 5:
			return "MPAwards5";
	
		case 6:
			return "MPAwards5";
	
		case 7:
			return "MPAwards5";
	
		case 8:
			return "MPAwards5";
	
		case 10:
			return "MPAwards5";
	
		case 11:
			return "MPAwards5";
	
		case 12:
			return "MPAwards5";
	
		case 13:
			return "MPAwards5";
	
		case 14:
			return "MPAwards5";
	
		case 15:
			return "MPAwards5";
	
		case 16:
			return "MPAwards5";
	
		case 17:
			return "MPAwards5";
	
		case 18:
			return "MPAwards5";
	
		case 20:
			return "MPAwards5";
	
		case 21:
			return "MPAwards5";
	
		case 22:
			return "MPAWARDS5";
	
		case 23:
			return "MPAwards4";
	
		case 25:
			return "MPAwardHeists";
	
		case 26:
			return "MPAwardHeists";
	
		case 27:
			return "MPAWARDS6";
	
		case 210:
			return "MPAwardHeists";
	
		case 209:
			return "MPAwardHeists";
	
		case 212:
			return "MPAwardHeists";
	
		case 213:
			return "MPAwardHeists";
	
		case 214:
			return "MPAwardHeists";
	
		case 215:
			return "MPAwardNightclub";
	
		case 216:
			return "MPAwardNightclub";
	
		case 217:
			return "MPAwardNightclub";
	
		case 30:
			return "MPAwardsArena";
	
		case 31:
			return "MPAwardsArena";
	
		case 32:
			return "MPAwardsArena";
	
		case 33:
			return "MPAwardsArena";
	
		case 34:
			return "MPAwardsArena";
	
		case 35:
			return "MPAwardsArena";
	
		case 36:
			return "MPAwardsArena";
	
		case 37:
			return "MPAwardsArena";
	
		case 38:
			return "MPAwardsArena";
	
		case 39:
			return "MPAwardsArena";
	
		case 40:
			return "MPAwardsArena";
	
		case 41:
			return "MPAwardsArena";
	
		case 42:
			return "MPAwardsArena";
	
		case 43:
			return "MPAwardsArena";
	
		case 44:
			return "MPAwardsArena";
	
		case 45:
			return "MPAwardsArena";
	
		case 46:
			return "MPAwardsArena";
	
		case 47:
			return "MPAwardsArena";
	
		case 48:
			return "MPAwardsArena";
	
		case 49:
			return "MPAwardsArena";
	
		case 50:
			return "MPAwardsArena";
	
		case 51:
			return "MPAwardsArena";
	
		case 52:
			return "MPAwardsArena";
	
		case 53:
			return "MPAwardCasino";
	
		case 54:
			return "MPAwardCasino";
	
		case 55:
			return "MPAwardCasino";
	
		case 56:
			return "MPAwardCasino";
	
		case 57:
			return "MPAwardCasino";
	
		case 58:
			return "MPAwardCasino";
	
		case 59:
			return "MPAwardCasino";
	
		case 62:
			return "MPAwardCasino";
	
		case 60:
			return "MPAwardCasino";
	
		case 61:
			return "MPAwardCasino";
	
		case 63:
			return "MPAwardCasinoHeist";
	
		case 64:
			return "MPAwardCasinoHeist";
	
		case 65:
			return "MPAwardCasinoHeist";
	
		case 66:
			return "MPAwardCasinoHeist";
	
		case 67:
			return "MPAwardCasinoHeist";
	
		case 68:
			return "MPAwardCasinoHeist";
	
		case 69:
			return "MPAwardCasinoHeist";
	
		case 70:
			return "MPAwardCasinoHeist";
	
		case 71:
			return "MPAwardCasinoHeist";
	
		case 72:
			return "MPAwardCasinoHeist";
	
		case 73:
			return "MPAwardCasinoHeist";
	
		case 74:
			return "MPAwardCasinoHeist";
	
		case 75:
			return "MPAwardCasinoHeist";
	
		case 76:
			return "MPAwardCasinoHeist";
	
		case 77:
			return "MPAwardCasinoHeist";
	
		case 78:
			return "MPAwardCasinoHeist";
	
		case 79:
			return "MPAwardCasinoHeist";
	
		case 80:
			return "MPAwardCasinoHeist";
	
		case 81:
			return "MPAwardCasinoHeist";
	
		case 82:
			return "MPAwardCasinoHeist";
	
		case 83:
			return "MPAwardCasinoHeist";
	
		case 84:
			return "MPAwardCasinoHeist";
	
		case 85:
			return "MPAwardCasinoHeist";
	
		case 86:
			return "MPAwardCasinoHeist";
	
		case 87:
			return "MPAwardCasinoHeist";
	
		case 88:
			return "MPAwardCasinoHeist";
	
		case 89:
			return "MPAwardSummer2020";
	
		case 90:
			return "MPAwardSummer2020";
	
		case 93:
			return "MPAwardSummer2020";
	
		case 92:
			return "MPAwardSummer2020";
	
		case 91:
			return "MPAwardSummer2020";
	
		case 94:
			return "MPAwardSummer2020";
	
		case 95:
			return "MPAwardIslandHeist";
	
		case 96:
			return "MPAwardIslandHeist";
	
		case 97:
			return "MPAwardIslandHeist";
	
		case 98:
			return "MPAwardIslandHeist";
	
		case 99:
			return "MPAwardIslandHeist";
	
		case 100:
			return "MPAwardIslandHeist";
	
		case 101:
			return "MPAwardIslandHeist";
	
		case 102:
			return "MPAwardIslandHeist";
	
		case 103:
			return "MPAwardIslandHeist";
	
		case 104:
			return "MPAwardIslandHeist";
	
		case 105:
			return "MPAwardIslandHeist";
	
		case 106:
			return "MPAwardIslandHeist";
	
		case 107:
			return "MPAwardIslandHeist";
	
		case 108:
			return "MPAwardIslandHeist";
	
		case 109:
			return "MPAwardIslandHeist";
	
		case 110:
			return "MPAwardIslandHeist";
	
		case 111:
			return "MPAwardIslandHeist";
	
		case 112:
			return "MPAwardIslandHeist";
	
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return "MPAwardTunerPack";
	
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return "MPAwardsFixer";
	
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return "MPAwardXmas2022";
	
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
			return "MPAwardDLC22023";
	
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
			return "MPAwardDLC12024";
	}

	switch (iParam0)
	{
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
			return "MPAwardDLC22024";
	
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
			return "MPAwardDLC12025";
	}

	return "";
}

char* func_175(int iParam0, int iParam1) // Position - 0x1A297 (107159)
{
	if (iParam1 == 9)
		iParam1 = 9;

	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
	
		case 2:
			return "HoleInOne";
	
		case 3:
			return "TargetGridGranny";
	
		case 4:
			return "TennisFiveSets";
	
		case 5:
			return "TennisStraightSets";
	
		case 6:
			return "ClearAllGangHideouts";
	
		case 7:
			return "SixDartCheckout";
	
		case 8:
			return "WinEveryGameModeOnce";
	
		case 10:
			return "WinEveryTypeOfRace";
	
		case 11:
			return "HoldaRaceWorldRecord";
	
		case 12:
			return "Wear25DifferentItemsOfClothing";
	
		case 13:
			return "FullyModACar";
	
		case 14:
			return "WinACustomClassRace";
	
		case 15:
			return "Play25DifferentDeathmatches";
	
		case 16:
			return "Play25DifferentRaces";
	
		case 17:
			return "MostKillsInGangAttack";
	
		case 18:
			return "MostKillsInSurvival";
	
		case 20:
			return "Kill3InARaceAndWin";
	
		case 21:
			return "GetATattooOnEachBodyPart";
	
		case 22:
			return "10KillStreakDeathmatch";
	
		case 23:
			return "Unirider";
	
		case 25:
			return "goaloriented";
	
		case 26:
			return "overachiever";
	
		case 27:
			return "joyrider";
	
		case 210:
			return "CantTouchThis";
	
		case 209:
			return "FairPlay";
	
		case 212:
			return "JackOfAllTrades";
	
		case 213:
			return "ItTakesTwo";
	
		case 214:
			return "Showroom";
	
		case 215:
			return "Coordinated";
	
		case 216:
			return "HotSpot";
	
		case 217:
			return "Clubber";
	
		case 30:
			return "BEGINNER";
	
		case 31:
			return "FIELDFILLER";
	
		case 32:
			return "ArmchairRracer";
	
		case 33:
			return "LEARNER";
	
		case 34:
			return "SUNDAYDRIVER";
	
		case 35:
			return "THEROOKIE";
	
		case 36:
			return "BUMPANDRUN";
	
		case 37:
			return "GEARHEAD";
	
		case 38:
			return "DOORSLAMMER";
	
		case 39:
			return "HOTLAP";
	
		case 40:
			return "ARENAAMATEUR";
	
		case 41:
			return "PAINTTRADER";
	
		case 42:
			return "SHUNTER";
	
		case 43:
			return "JOCK";
	
		case 44:
			return "WARRIOR";
	
		case 45:
			return "TBONE";
	
		case 46:
			return "MAYHEM";
	
		case 47:
			return "WRECKER";
	
		case 48:
			return "CRASHCOURSE";
	
		case 49:
			return "ARENALEGEND";
	
		case 50:
			return "PEGASUS";
	
		case 51:
			return "contactsport";
	
		case 52:
			return "UNSTOPPABLE";
	
		case 53:
			return "LooseCheng";
	
		case 54:
			return "HouseKeeping";
	
		case 55:
			return "StrongArmTactics";
	
		case 56:
			return "PlayToWin";
	
		case 57:
			return "BadBeat";
	
		case 58:
			return "CashingOut";
	
		case 59:
			return "StraightFlush";
	
		case 62:
			return "LuckyLucky";
	
		case 60:
			return "TopPair";
	
		case 61:
			return "FullHouse";
	
		case 63:
			return "SCOPEOUT";
	
		case 64:
			return "ALLCREWEDUP";
	
		case 65:
			return "MOVINGON";
	
		case 66:
			return "AfterParty";
	
		case 67:
			return "GUNMAN";
	
		case 68:
			return "SmashAndGrab";
	
		case 69:
			return "HiddenInPlainSight";
	
		case 70:
			return "Undetected";
	
		case 71:
			return "AllRounder";
	
		case 72:
			return "EliteThief";
	
		case 73:
			return "Professional";
	
		case 74:
			return "SupportAct";
	
		case 75:
			return "Shafted";
	
		case 76:
			return "Collector";
	
		case 77:
			return "Deadeye";
	
		case 78:
			return "PistolAtDawn";
	
		case 79:
			return "BeatTheTraffic";
	
		case 80:
			return "AllWheels";
	
		case 81:
			return "FEELINGROGGY";
	
		case 82:
			return "ApeEscape";
	
		case 83:
			return "MonkeyMind";
	
		case 84:
			return "AquaticApe";
	
		case 85:
			return "KeepingTheFaith";
	
		case 86:
			return "TrueLove";
	
		case 87:
			return "Nemesis" /*Nemesis*/;
	
		case 88:
			return "Friendzoned";
	
		case 89:
			return "KingOfQub3d";
	
		case 90:
			return "Qubism";
	
		case 93:
			return "CrankItTo11";
	
		case 92:
			return "GodofQub3d";
	
		case 91:
			return "Qubits";
	
		case 94:
			return "1111";
	
		case 95:
			return "Inandout";
	
		case 96:
			return "EasyAccess";
	
		case 97:
			return "ItsaSteal";
	
		case 98:
			return "MaximumDistruption";
	
		case 99:
			return "TheIslandHeist";
	
		case 100:
			return "GoingAlone";
	
		case 101:
			return "Teamwork";
	
		case 102:
			return "TravelPlans";
	
		case 103:
			return "ProfessionalThief";
	
		case 104:
			return "CatBurglar";
	
		case 105:
			return "OneOfThem";
	
		case 106:
			return "GoforGold";
	
		case 107:
			return "Elitist";
	
		case 108:
			return "Blowhard";
	
		case 109:
			return "HelpingOut";
	
		case 110:
			return "Courier";
	
		case 111:
			return "PartyVibes";
	
		case 112:
			return "HelpingHand";
	
		case 113:
			return "LSCarMeet";
	
		case 114:
			return "ProCarExporter";
	
		case 115:
			return "TheUnionDepositoryContract";
	
		case 116:
			return "TheSuperdollarDeal";
	
		case 117:
			return "TheBankContract";
	
		case 118:
			return "TheECUJob";
	
		case 119:
			return "ThePrisionContract";
	
		case 120:
			return "TheAgencyDeal";
	
		case 121:
			return "TheLostContract";
	
		case 122:
			return "TheDataContract";
	
		case 123:
			return "StraighttoVideo";
	
		case 124:
			return "MonkeyseeMonkeydo";
	
		case 125:
			return "Trainedtokill";
	
		case 126:
			return "TheDirector";
	
		case 127:
			return "OnCourse";
	
		case 128:
			return "TheNighClubLeak";
	
		case 129:
			return "TheCountryClubLeak";
	
		case 130:
			return "TheSouthCentralLeak";
	
		case 131:
			return "StudioTime";
	
		case 132:
			return "DontFuckWithDre";
	
		case 133:
			return "Backup";
	
		case 134:
			return "SeedCapitalFranklin";
	
		case 135:
			return "FireitUpFranklin";
	
		case 136:
			return "OGKushFranklin";
	
		case 137:
			return "ContractKiller";
	
		case 138:
			return "ADogsBestFriend";
	
		case 139:
			return "SoundCheck";
	
		case 140:
			return "SeedCapitaLamar";
	
		case 141:
			return "FireItUpLamar";
	
		case 142:
			return "OGKushLamar";
	
		case 143:
			return "WelcomeToTheTroupe";
	
		case 144:
			return "DesignatedDriver";
	
		case 145:
			return "FatalIncursion";
	
		case 146:
			return "UncontrolledSubstance";
	
		case 147:
			return "MakeWarNotLove";
	
		case 148:
			return "OffTheRails";
	
		case 149:
			return "BackItUp";
	
		case 150:
			return "LickMyAcid";
	
		case 151:
			return "ChemicalReaction";
	
		case 152:
			return "ThisIsAnIntervention";
	
		case 153:
			return "UnusualSuspects";
	
		case 154:
			return "Friedmind";
	
		case 155:
			return "CheckingIn";
	
		case 156:
			return "BDKD";
	
		case 157:
			return "BackItUp2";
	
		case 158:
			return "5StarRide";
	
		case 159:
			return "TheDugganRobbery";
	
		case 160:
			return "TheCargoShipRobbery";
	
		case 161:
			return "ThePodiumRobbery";
	
		case 162:
			return "TheGangbangerRobbery";
	
		case 163:
			return "TheMctonyRobbery";
	
		case 164:
			return "PerfectRun";
	
		case 165:
			return "ExtraMile";
	
		case 166:
			return "SlushFund";
	
		case 167:
			return "BestLaidPlans";
	
		case 168:
			return "TheCluckinBellFarmRaid";
	
		case 169:
			return "PeckingOrder";
	
		case 170:
			return "SlyFox";
	
		case 171:
			return "Cockfight";
	
		case 172:
			return "AllTheSides";
	
		case 173:
			return "FlyTheCoop";
	
		case 174:
			return "GetWhitney";
	
		case 175:
			return "GetLieberman";
	
		case 176:
			return "GetONeil";
	
		case 177:
			return "GetThompson";
	
		case 178:
			return "GetSong";
	
		case 179:
			return "GetGarcia";
	
		case 180:
			return "PriorityBoarding";
	
		case 181:
			return "NotAScratch";
	
		case 182:
			return "OneOfAKind";
	}

	switch (iParam0)
	{
		case 183:
			return "TheFineArtFile";
	
		case 184:
			return "TheBruteForceFile";
	
		case 185:
			return "TheProjectBreakawayFile";
	
		case 186:
			return "TheBlackBoxFile";
	
		case 187:
			return "BonusPoints";
	
		case 188:
			return "UpAndRunning";
	
		case 189:
			return "Mogul";
	
		case 190:
			return "Intel";
	
		case 191:
			return "IronMule";
	
		case 192:
			return "Ammunition";
	
		case 193:
			return "DirectDelivery";
	
		case 194:
			return "TheTitanJob";
	
		case 195:
			return "PermanentContract";
	}

	switch (iParam0)
	{
		case 196:
			return "liquidmarket";
	
		case 197:
			return "roi";
	
		case 198:
			return "compoundinterest";
	
		case 199:
			return "mutalfunds";
	
		case 200:
			return "currentliabilities";
	
		case 201:
			return "gutinstinct";
	
		case 202:
			return "themonopoly";
	
		case 203:
			return "profitmaximization";
	
		case 204:
			return "DIVERSIFICATION";
	
		case 205:
			return "kushcollector";
	
		case 206:
			return "FirstResponder";
	
		case 207:
			return "ironclad";
	
		case 208:
			return "THEINDISCRIMINATOR";
	}

	return "";
}

char* func_176(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1ADE3 (110051)
{
	iParam2 == 9;
	bParam3;
	iParam1 == 5;

	switch (iParam0)
	{
		case 0:
			return "AWS_521";
	
		case 2:
			return "AWS_660";
	
		case 3:
			return "AWS_667";
	
		case 4:
			return "AWS_670";
	
		case 5:
			return "AWS_671";
	
		case 6:
			return "AWS_691";
	
		case 7:
			return "AWS_697";
	
		case 8:
			return "AWS_701";
	
		case 10:
			return "AWS_705";
	
		case 11:
			return "AWS_706";
	
		case 12:
			return "AWS_709";
	
		case 13:
			return "AWS_711";
	
		case 14:
			return "AWS_712";
	
		case 15:
			return "AWS_714";
	
		case 16:
			return "AWS_715";
	
		case 17:
			return "AWS_718";
	
		case 18:
			return "AWS_719";
	
		case 20:
			return "AWS_725";
	
		case 21:
			return "AWS_727";
	
		case 22:
			return "AWS_717";
	
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_729_M";
			else
				return "AWS_729";
			break;
	
		case 25:
			return "AWS_783";
	
		case 26:
			return "AWS_784";
	
		case 27:
			return "AWS_771";
	
		case 210:
			return "AWS_751";
	
		case 214:
			return "AWS_763";
	
		case 209:
			return "AWS_754";
	
		case 212:
			return "AWS_765";
	
		case 213:
			return "AWS_756";
	
		case 215:
			return "AWS_793";
	
		case 216:
			return "AWS_794";
	
		case 217:
			return "AWS_795";
	
		case 30:
			return "AWS_796";
	
		case 31:
			return "AWS_797";
	
		case 32:
			return "AWS_798";
	
		case 33:
			return "AWS_799";
	
		case 34:
			return "AWS_800";
	
		case 35:
			return "AWS_801";
	
		case 36:
			return "AWS_802";
	
		case 37:
			return "AWS_803";
	
		case 38:
			return "AWS_804";
	
		case 39:
			return "AWS_805";
	
		case 40:
			return "AWS_806";
	
		case 41:
			return "AWS_807";
	
		case 42:
			return "AWS_808";
	
		case 43:
			return "AWS_809";
	
		case 44:
			return "AWS_810";
	
		case 45:
			return "AWS_811";
	
		case 46:
			return "AWS_812";
	
		case 47:
			return "AWS_813";
	
		case 48:
			return "AWS_814";
	
		case 49:
			return "AWS_815";
	
		case 50:
			return "AWS_816";
	
		case 51:
			return "AWS_819";
	
		case 52:
			return "AWS_820";
	
		case 53:
			return "AWS_836" /*Complete Loose Cheng for the first time and earn $50,000.*/;
	
		case 54:
			return "AWS_837" /*Complete House Keeping for the first time and earn $50,000.*/;
	
		case 55:
			return "AWS_838" /*Complete Strong Arm Tactics for the first time and earn $50,000.*/;
	
		case 56:
			return "AWS_839" /*Complete Play to Win for the first time and earn $50,000.*/;
	
		case 57:
			return "AWS_840" /*Complete Bad Beat for the first time and earn $50,000.*/;
	
		case 58:
			return "AWS_841" /*Complete Cashing Out for the first time and earn $100,000.*/;
	
		case 59:
			return "AWS_842" /*Complete all Casino Story Missions in order and earn $500,000.*/;
	
		case 62:
			return "AWS_846" /*Complete a Casino Story Mission without losing a life and earn $50,000.*/;
	
		case 60:
			return "AWS_843" /*Complete all Casino Story Missions as a Crew member and earn $100,000.*/;
	
		case 61:
			return "AWS_844" /*Complete all Casino Story Missions as Leader to earn $100,000 and a bonus item.*/;
	
		case 63:
			return "AWS_857" /*Scope all entrances and exits for The Diamond Casino Heist.*/;
	
		case 64:
			return "AWS_858" /*Unlock all possible crew members for The Diamond Casino Heist.*/;
	
		case 65:
			return "AWS_859" /*Stop a mall cop being fired again during The Diamond Casino Heist.*/;
	
		case 66:
			return "AWS_860" /*Use someone famous to get into the Casino back area.*/;
	
		case 67:
			return "AWS_861" /*Find and help break out an old accomplice for The Diamond Casino Heist.*/;
	
		case 68:
			return "AWS_862" /*Complete the Aggressive approach to The Diamond Casino Heist and earn $100000.*/;
	
		case 69:
			return "AWS_863" /*Complete The Big Con approach to The Diamond Casino Heist without breaking your disguise inside the Casino and earn $150000.*/;
	
		case 70:
			return "AWS_864" /*Complete the Silent & Sneaky approach to The Diamond Casino Heist without ever being detected and earn $200000.*/;
	
		case 71:
			return "AWS_865" /*Complete the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $300000.*/;
	
		case 72:
			return "AWS_866" /*Complete the elite challenges for the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $350000.*/;
	
		case 73:
			return "AWS_867" /*Complete The Diamond Casino Heist on Hard and without losing a life and earn $250,000.*/;
	
		case 74:
			return "AWS_868" /*Complete The Diamond Casino Heist as a crew member.*/;
	
		case 75:
			return "AWS_869" /*Use the elevator shaft to reach the staff lobby during The Diamond Casino Heist.*/;
	
		case 76:
			return "AWS_870" /*Steal all variations of loot from the vault during The Diamond Casino Heist.*/;
	
		case 77:
			return "AWS_871" /*Get over 90% accuracy for an entire playthrough of Badlands Revenge II.*/;
	
		case 78:
			return "AWS_872" /*Complete Badlands Revenge II using only pistols.*/;
	
		case 79:
			return "AWS_873" /*Complete the full race without crashing in Race And Chase.*/;
	
		case 80:
			return "AWS_874" /*Complete Race And Chase with all vehicle types.*/;
	
		case 81:
			return "AWS_875" /*Complete The Wizard's Ruin adventure as Grog.*/;
	
		case 82:
			return "AWS_876" /*Survive any stage without taking any damage in Space Monkey 3: Bananas Gone Bad.*/;
	
		case 83:
			return "AWS_877" /*Complete Space Monkey 3: Bananas Gone Bad without the use of any powerups or pickups.*/;
	
		case 84:
			return "AWS_878" /*Complete the underwater level in Monkey Paradise.*/;
	
		case 85:
			return "AWS_879" /*Complete a level of Defender of the Faith by only pressing right.*/;
	
		case 86:
			return "AWS_880" /*Get a true love rating on The Love Professor.*/;
	
		case 87:
			return "AWS_881" /*Find your nemesis using The Love Professor Cabinet.*/;
	
		case 88:
			return "AWS_882" /*The friendzone doesn't exist but perhaps you can find yourself in it using The Love Professor.*/;
	
		case 89:
			return "AWS_886" /*Get first place on the QUB3D leaderboard.*/;
	
		case 90:
			return "AWS_887" /*Reach level 20 in QUB3D without using special abilities.*/;
	
		case 93:
			return "AWS_888" /*Get the highest score in Axe of Fury.*/;
	
		case 92:
			return "AWS_889" /*Get a score of 19000 in a single play of QUB3D.*/;
	
		case 91:
			return "AWS_890" /*Reach level 20 without removing any blocks from play.*/;
	
		case 94:
			return "AWS_891" /*Get the highest score in Axe of Fury 11 times.*/;
	
		case 95:
			return "AWS_917" /*Scope out all infiltration and escape points on Cayo Perico.*/;
	
		case 96:
			return "AWS_918" /*Scope out all entry points into El Rubio's compound on Cayo Perico.*/;
	
		case 97:
			return "AWS_919" /*Scope out all the secondary target locations in a single playthrough of The Cayo Perico Heist.*/;
	
		case 98:
			return "AWS_920" /*Complete all three disruption prep missions in a single playthrough of The Cayo Perico Heist.*/;
	
		case 99:
			return "AWS_921" /*Complete The Cayo Perico Heist for the first time to earn $200,000.*/;
	
		case 100:
			return "AWS_922" /*Complete The Cayo Perico Heist with one player to earn $100,000.*/;
	
		case 101:
			return "AWS_923" /*Complete The Cayo Perico Heist with four players to earn $100,000.*/;
	
		case 102:
			return "AWS_924" /*Approach The Cayo Perico Heist using all of the different vehicles to earn $250,000.*/;
	
		case 103:
			return "AWS_925" /*Steal all variations of the primary target during The Cayo Perico Heist to earn $150,000.*/;
	
		case 104:
			return "AWS_926" /*Complete The Cayo Perico Heist without ever alerting the guards to earn $200,000.*/;
	
		case 105:
			return "AWS_927" /*Enter the compound using a stolen disguise during The Cayo Perico Heist.*/;
	
		case 106:
			return "AWS_928" /*Steal El Rubio's prized weapon during The Cayo Perico Heist.*/;
	
		case 107:
			return "AWS_929" /*Complete the elite challenge for The Cayo Perico Heist to earn $200,000.*/;
	
		case 108:
			return "AWS_930" /*Complete The Cayo Perico Heist on Hard and without losing a life to earn $200,000.*/;
	
		case 109:
			return "AWS_931" /*Complete all Palms Trax requests sent by Tom Connors.*/;
	
		case 110:
			return "AWS_932" /*Complete all Keinemusik's requests sent by English Dave.*/;
	
		case 111:
			return "AWS_933" /*Revisit the Cayo Perico beach party after completing The Cayo Perico Heist.*/;
	
		case 112:
			return "AWS_934" /*Complete all Moodymann's requests sent by Tom Connors.*/;
	
		case 113:
			return "AWS_944" /*Visit The LS Car Meet for the first time.*/;
	
		case 114:
			return "AWS_951" /*Deliver all 10 Exotic Exports Vehicles to the Docks in a single day.*/;
	
		case 115:
			return "AWS_953" /*Complete The Union Depository Contract as leader to earn $75,000.*/;
	
		case 116:
			return "AWS_954" /*Complete The Superdollar Deal as leader to earn $75,000.*/;
	
		case 117:
			return "AWS_955" /*Complete The Bank Contract as leader to earn $75,000.*/;
	
		case 118:
			return "AWS_956" /*Complete The E.C.U. Job as leader to earn $75,000.*/;
	
		case 119:
			return "AWS_957" /*Complete The Prison Contract as leader to earn $75,000.*/;
	
		case 120:
			return "AWS_958" /*Complete The Agency Deal as leader to earn $75,000.*/;
	
		case 121:
			return "AWS_959" /*Complete The Lost Contract as leader to earn $75,000.*/;
	
		case 122:
			return "AWS_960" /*Complete The Data Contract as leader to earn $75,000.*/;
	
		case 123:
			return "AWS_963" /*Complete all levels using only the pistol in Camhedz.*/;
	
		case 124:
			return "AWS_964" /*Kill all costumed weirdos across all scenes in Camhedz.*/;
	
		case 125:
			return "AWS_965" /*Get an average of 60% accuracy across all scenes in Camhedz.*/;
	
		case 126:
			return "AWS_966" /*Get a 5-star rating on each of the scenes in Camhedz.*/;
	
		case 127:
			return "AWS_968" /*Meet Dr. Dre at the Los Santos Golf Club as leader to earn $50,000.*/;
	
		case 128:
			return "AWS_969" /*Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.*/;
	
		case 129:
			return "AWS_970" /*Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.*/;
	
		case 130:
			return "AWS_971" /*Locate this copy of Dr. Dre's stolen music as leader to earn $100,000.*/;
	
		case 131:
			return "AWS_972" /*Help Dr. Dre at Record A Studios as leader to earn $100,000.*/;
	
		case 132:
			return "AWS_973" /*Track down the thief who stole Dr. Dre's music as leader to earn $250,000.*/;
	
		case 133:
			return "AWS_974" /*Complete all of Dr. Dre's Story missions as a member of an Organization or Motorcycle Club to earn $100,000.*/;
	
		case 134:
			return "AWS_975" /*Complete Seed Capital as Franklin to earn $100,000.*/;
	
		case 135:
			return "AWS_977" /*Complete Fire It Up as Franklin to earn $100,000.*/;
	
		case 136:
			return "AWS_984" /*Complete OG Kush as Franklin to earn $100,000.*/;
	
		case 137:
			return "AWS_980" /*Complete every Payphone Hit with the Assassination Bonus.*/;
	
		case 138:
			return "AWS_981" /*Pet Chop.*/;
	
		case 139:
			return "AWS_982" /*Visit Record A Studios.*/;
	
		case 140:
			return "AWS_976" /*Complete Seed Capital as Lamar to earn $100,000.*/;
	
		case 141:
			return "AWS_986" /*Complete Fire It Up as Lamar to earn $100,000.*/;
	
		case 142:
			return "AWS_985" /*Complete OG Kush as Lamar to earn $100,000.*/;
	
		case 143:
			return "AWS_1010" /*Complete First Dose - Welcome to the Troupe as leader to earn $50,000.*/;
	
		case 144:
			return "AWS_987" /*Complete First Dose - Designated Driver as leader to earn $50,000.*/;
	
		case 145:
			return "AWS_988" /*Complete First Dose - Fatal Incursion as leader to earn $50,000.*/;
	
		case 146:
			return "AWS_989" /*Complete First Dose - Uncontrolled Substance as leader to earn $50,000.*/;
	
		case 147:
			return "AWS_990" /*Complete First Dose - Make War not Love as leader to earn $50,000.*/;
	
		case 148:
			return "AWS_991" /*Complete First Dose - Off the Rails as leader to earn $250,000.*/;
	
		case 149:
			return "AWS_992" /*Complete all of the missions in the First Dose as a member of an Organization or Motorcycle Club to earn $100,000.*/;
	
		case 150:
			return "AWS_993" /*Set up your own Acid Lab.*/;
	
		case 151:
			return "AWS_994" /*Boost the production speed inside your Acid Lab.*/;
	
		case 152:
			return "AWS_995" /*Complete Last Dose - This is an Intervention as leader to earn $100,000.*/;
	
		case 153:
			return "AWS_996" /*Complete Last Dose - Unusual Suspects as leader to earn $100,000.*/;
	
		case 154:
			return "AWS_997" /*Complete Last Dose - FriedMind as leader to earn $100,000.*/;
	
		case 155:
			return "AWS_998" /*Complete Last Dose - Checking In as leader to earn $100,000.*/;
	
		case 156:
			return "AWS_999" /*Complete Last Dose - BDKD as leader to earn $100,000.*/;
	
		case 157:
			return "AWS_1000" /*Complete all of the missions in the Last Dose as a member of an Organization or Motorcycle Club to earn $100,000.*/;
	
		case 158:
			return "AWS_1001" /*Complete 10 fares in a row during Taxi Work.*/;
	
		case 159:
			return "AWS_1012" /*Complete The Duggan Robbery as leader to earn $50,000.*/;
	
		case 160:
			return "AWS_1013" /*Complete The Cargo Ship Robbery as leader to earn $50,000.*/;
	
		case 161:
			return "AWS_1014" /*Complete The Podium Robbery as leader to earn $50,000.*/;
	
		case 162:
			return "AWS_1015" /*Complete The Gangbanger Robbery as leader to earn $50,000.*/;
	
		case 163:
			return "AWS_1016" /*Complete The McTony Robbery as leader to earn $50,000.*/;
	
		case 164:
			return "AWS_1017" /*Complete all the Elite Challenges for a Salvage Yard Robbery as leader to earn $50,000.*/;
	
		case 165:
			return "AWS_1018" /*Complete a Salvage Yard Robbery with all optional Planning Works and Tasks also completed.*/;
	
		case 166:
			return "AWS_1024" /*Complete Slush Fund as leader.*/;
	
		case 167:
			return "AWS_1025" /*Complete all the Setup missions for The Cluckin' Bell Farm Raid as leader.*/;
	
		case 168:
			return "AWS_1026" /*Complete The Cluckin' Bell Farm Raid as leader to earn $250,000.*/;
	
		case 169:
			return "AWS_1027" /*Complete The Cluckin' Bell Farm Raid as a Crew Member to earn $250,000.*/;
	
		case 170:
			return "AWS_1028" /*Complete The Cluckin' Bell Farm Raid as leader using the stealth approach.*/;
	
		case 171:
			return "AWS_1029" /*Complete The Cluckin' Bell Farm Raid as leader using the aggressive approach.*/;
	
		case 172:
			return "AWS_1030" /*Steal all weapons and gear in one playthrough of Concealed Weapons.*/;
	
		case 173:
			return "AWS_1031" /*Steal all getaway vehicles in one playthrough of Hit and Run.*/;
	
		case 174:
			return "AWS_1032" /*Complete Most Wanted - Whitney as leader to earn $25,000.*/;
	
		case 175:
			return "AWS_1033" /*Complete Most Wanted - Lieberman as leader to earn $25,000.*/;
	
		case 176:
			return "AWS_1034" /*Complete Most Wanted - O'Neil as leader to earn $25,000.*/;
	
		case 177:
			return "AWS_1035" /*Complete Most Wanted - Thompson as leader to earn $25,000.*/;
	
		case 178:
			return "AWS_1036" /*Complete Most Wanted - Song as leader to earn $25,000.*/;
	
		case 179:
			return "AWS_1037" /*Complete Most Wanted - Garcia as leader to earn $25,000.*/;
	
		case 180:
			return "AWS_1044" /*Win Assault on ATT-16 in under 25 minutes on the Attacking team.*/;
	
		case 181:
			return "AWS_1045" /*Win Assault on ATT-16 without any parts of the aircraft carrier being destroyed.*/;
	
		case 182:
			return "AWS_1049" /*Take out each type of undead in Ludendorff Cemetery Survival.*/;
	}

	switch (iParam0)
	{
		case 183:
			return "AWS_1050" /*Complete The Fine Art File as leader to earn $50,000.*/;
	
		case 184:
			return "AWS_1051" /*Complete The Brute Force File as leader to earn $50,000.*/;
	
		case 185:
			return "AWS_1052" /*Complete The Project Breakaway File as leader to earn $50,000.*/;
	
		case 186:
			return "AWS_1053" /*Complete The Black Box File as leader to earn $50,000.*/;
	
		case 187:
			return "AWS_1054" /*Complete all mission challenges for an FIB File to earn $50,000.*/;
	
		case 188:
			return "AWS_1059" /*Complete Up and Running as leader.*/;
	
		case 189:
			return "AWS_1060" /*Complete Setup: Mogul as leader.*/;
	
		case 190:
			return "AWS_1061" /*Complete Setup: Intel as leader.*/;
	
		case 191:
			return "AWS_1063" /*Complete Setup: Iron Mule as leader.*/;
	
		case 192:
			return "AWS_1064" /*Complete Setup: Ammunition as leader.*/;
	
		case 193:
			return "AWS_1065" /*Deliver the Ammunition and all bonus objectives directly onto the trailer in Setup: Ammunition.*/;
	
		case 194:
			return "AWS_1067" /*Complete The Titan Job as leader to earn $250,000.*/;
	
		case 195:
			return "AWS_1068" /*Complete The Titan Job as a Crew Member to earn $100,000.*/;
	
		case 196:
			return "AWS_1078" /*Complete Liquid Market as leader.*/;
	
		case 197:
			return "AWS_1079" /*Complete ROI as leader.*/;
	
		case 198:
			return "AWS_1080" /*Complete Compound Interest as leader.*/;
	
		case 199:
			return "AWS_1081" /*Complete Mutual Funds as leader.*/;
	
		case 200:
			return "AWS_1082" /*Complete Current Liabilities as leader.*/;
	
		case 201:
			return "AWS_1083" /*Find the target without any hints during Current Liabilities.*/;
	
		case 202:
			return "AWS_1084" /*Complete The Monopoly as leader.*/;
	
		case 203:
			return "AWS_1085" /*Steal all bonus loot in all Mr Faber Work.*/;
	
		case 204:
			return "AWS_1086" /*Acquire Higgins Helitours or Smoke on the Water.*/;
	
		case 205:
			return "AWS_1087" /*Find and collect all 10 Smoke on the Water Product in one day.*/;
	
		case 206:
			return "AWS_1088" /*Complete all deliveries for QuickiePharm in under 10 minutes.*/;
	
		case 207:
			return "AWS_1089" /*Take less than 10% damage transporting goods for Gruppe Sechs or Bobcat Security.*/;
	
		case 208:
			return "AWS_1090" /*Take out each type of special undead in the Cayo Perico Survival.*/;
	
		default:
		
	}

	return "";
}

char* func_177(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1B8DA (112858)
{
	bParam2;
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return "AWT_521";
	
		case 2:
			return "AWT_660";
	
		case 3:
			return "AWT_667";
	
		case 4:
			return "AWT_670";
	
		case 5:
			return "AWT_671";
	
		case 6:
			return "AWT_691";
	
		case 7:
			return "AWT_697";
	
		case 8:
			return "AWT_701";
	
		case 10:
			return "AWT_705";
	
		case 11:
			return "AWT_706";
	
		case 12:
			return "AWT_709";
	
		case 13:
			return "AWT_711";
	
		case 14:
			return "AWT_712";
	
		case 15:
			return "AWT_714";
	
		case 16:
			return "AWT_715";
	
		case 17:
			return "AWT_718";
	
		case 18:
			return "AWT_719";
	
		case 20:
			return "AWT_725";
	
		case 21:
			return "AWT_727";
	
		case 22:
			return "AWT_717";
	
		case 23:
			return "AWT_729";
	
		case 25:
			return "AWT_783";
	
		case 26:
			return "AWT_784";
	
		case 210:
			return "AWT_751";
	
		case 209:
			return "AWT_754";
	
		case 212:
			return "AWT_765";
	
		case 214:
			return "AWT_763";
	
		case 213:
			return "AWT_756";
	
		case 215:
			return "AWT_793";
	
		case 216:
			return "AWT_794";
	
		case 217:
			return "AWT_795";
	
		case 30:
			return "AWT_796";
	
		case 31:
			return "AWT_797";
	
		case 32:
			return "AWT_798";
	
		case 33:
			return "AWT_799";
	
		case 34:
			return "AWT_800";
	
		case 35:
			return "AWT_801";
	
		case 36:
			return "AWT_802";
	
		case 37:
			return "AWT_803";
	
		case 38:
			return "AWT_804";
	
		case 39:
			return "AWT_805";
	
		case 40:
			return "AWT_806";
	
		case 41:
			return "AWT_807";
	
		case 42:
			return "AWT_808";
	
		case 43:
			return "AWT_809";
	
		case 44:
			return "AWT_810";
	
		case 45:
			return "AWT_811";
	
		case 46:
			return "AWT_812";
	
		case 47:
			return "AWT_813";
	
		case 48:
			return "AWT_814";
	
		case 49:
			return "AWT_815";
	
		case 50:
			return "AWT_816";
	
		case 51:
			return "AWT_819";
	
		case 52:
			return "AWT_820";
	
		case 53:
			return "AWT_836" /*Loose Cheng*/;
	
		case 54:
			return "AWT_837" /*House Keeping*/;
	
		case 55:
			return "AWT_838" /*Strong Arm Tactics*/;
	
		case 56:
			return "AWT_839" /*Play to Win*/;
	
		case 57:
			return "AWT_840" /*Bad Beat*/;
	
		case 58:
			return "AWT_841" /*Cashing Out*/;
	
		case 59:
			return "AWT_842" /*Straight*/;
	
		case 62:
			return "AWT_846" /*Lucky Lucky*/;
	
		case 60:
			return "AWT_843" /*Top Pair*/;
	
		case 61:
			return "AWT_844" /*Full House*/;
	
		case 63:
			return "AWT_857" /*Scope Out*/;
	
		case 64:
			return "AWT_858" /*All Crewed Up*/;
	
		case 65:
			return "AWT_859" /*Moving On*/;
	
		case 66:
			return "AWT_860" /*After Party*/;
	
		case 67:
			return "AWT_861" /*Gunman*/;
	
		case 68:
			return "AWT_862" /*Smash & Grab*/;
	
		case 69:
			return "AWT_863" /*Hidden In Plain Sight*/;
	
		case 70:
			return "AWT_864" /*Undetected*/;
	
		case 71:
			return "AWT_865" /*All Rounder*/;
	
		case 72:
			return "AWT_866" /*Elite Thief*/;
	
		case 73:
			return "AWT_867" /*Professional*/;
	
		case 74:
			return "AWT_868" /*Support Act*/;
	
		case 75:
			return "AWT_869" /*Shafted*/;
	
		case 76:
			return "AWT_870" /*Collector*/;
	
		case 77:
			return "AWT_871" /*Dead Eye*/;
	
		case 78:
			return "AWT_872" /*Pistols At Dawn*/;
	
		case 79:
			return "AWT_873" /*Beat The Traffic*/;
	
		case 80:
			return "AWT_874" /*All Wheels*/;
	
		case 81:
			return "AWT_875" /*Feelin' Groggy*/;
	
		case 82:
			return "AWT_876" /*Ape Escape*/;
	
		case 83:
			return "AWT_877" /*Monkey Mind*/;
	
		case 84:
			return "AWT_878" /*Aquatic Ape*/;
	
		case 85:
			return "AWT_879" /*Keeping The Faith*/;
	
		case 86:
			return "AWT_880" /*True Love*/;
	
		case 87:
			return "AWT_881" /*Nemesis*/;
	
		case 88:
			return "AWT_882" /*Friendzoned*/;
	
		case 89:
			return "AWT_886" /*King Of QUB3D*/;
	
		case 90:
			return "AWT_887" /*Qubism*/;
	
		case 93:
			return "AWT_888" /*Crank It To 11*/;
	
		case 92:
			return "AWT_889" /*God of QUB3D*/;
	
		case 91:
			return "AWT_890" /*Qubits*/;
	
		case 94:
			return "AWT_891" /*11 11*/;
	
		case 95:
			return "AWT_917" /*In And Out*/;
	
		case 96:
			return "AWT_918" /*Easy Access*/;
	
		case 97:
			return "AWT_919" /*It's A Steal*/;
	
		case 98:
			return "AWT_920" /*Maximum Disruption*/;
	
		case 99:
			return "AWT_921" /*The Cayo Perico Heist*/;
	
		case 100:
			return "AWT_922" /*Going Alone*/;
	
		case 101:
			return "AWT_923" /*Teamwork*/;
	
		case 102:
			return "AWT_924" /*Travel Plans*/;
	
		case 103:
			return "AWT_925" /*Professional Thief*/;
	
		case 104:
			return "AWT_926" /*Cat Burglar*/;
	
		case 105:
			return "AWT_927" /*One Of Them*/;
	
		case 106:
			return "AWT_928" /*Go For Gold*/;
	
		case 107:
			return "AWT_929" /*Elitist*/;
	
		case 108:
			return "AWT_930" /*Blow Hard*/;
	
		case 109:
			return "AWT_931" /*Helping Out*/;
	
		case 110:
			return "AWT_932" /*Courier*/;
	
		case 111:
			return "AWT_933" /*Party Vibes*/;
	
		case 112:
			return "AWT_934" /*Helping Hand*/;
	
		case 113:
			return "AWT_944" /*LS Car Meet*/;
	
		case 114:
			return "AWT_951" /*Pro Car Exporter*/;
	
		case 115:
			return "AWT_953" /*The Union Depository Contract*/;
	
		case 116:
			return "AWT_954" /*The Superdollar Deal*/;
	
		case 117:
			return "AWT_955" /*The Bank Contract*/;
	
		case 118:
			return "AWT_956" /*The E.C.U. Job*/;
	
		case 119:
			return "AWT_957" /*The Prison Contract*/;
	
		case 120:
			return "AWT_958" /*The Agency Deal*/;
	
		case 121:
			return "AWT_959" /*The Lost Contract*/;
	
		case 122:
			return "AWT_960" /*The Data Contract*/;
	
		case 123:
			return "AWT_963" /*Straight To Video*/;
	
		case 124:
			return "AWT_964" /*Monkey See Monkey Do*/;
	
		case 125:
			return "AWT_965" /*Trained To Kill*/;
	
		case 126:
			return "AWT_966" /*The Director*/;
	
		case 127:
			return "AWT_968" /*On Course*/;
	
		case 128:
			return "AWT_969" /*Nightlife Leak*/;
	
		case 129:
			return "AWT_970" /*High Society Leak*/;
	
		case 130:
			return "AWT_971" /*South Central Leak*/;
	
		case 131:
			return "AWT_972" /*Studio Time*/;
	
		case 132:
			return "AWT_973" /*Don't Fuck With Dre*/;
	
		case 133:
			return "AWT_974" /*Backup*/;
	
		case 134:
			return "AWT_975" /*Seed Capital - Franklin*/;
	
		case 135:
			return "AWT_977" /*Fire It Up - Franklin*/;
	
		case 136:
			return "AWT_984" /*OG Kush  - Franklin*/;
	
		case 137:
			return "AWT_980" /*Contract Killer*/;
	
		case 138:
			return "AWT_981" /*A Dog's Best Friend*/;
	
		case 139:
			return "AWT_982" /*Sound Check*/;
	
		case 140:
			return "AWT_976" /*Seed Capital - Lamar*/;
	
		case 141:
			return "AWT_986" /*Fire It Up - Lamar*/;
	
		case 142:
			return "AWT_985" /*OG Kush  - Lamar*/;
	
		case 143:
			return "AWT_1010" /*Welcome to the Troupe*/;
	
		case 144:
			return "AWT_987" /*Designated Driver*/;
	
		case 145:
			return "AWT_988" /*Fatal Incursion*/;
	
		case 146:
			return "AWT_989" /*Uncontrolled Substance*/;
	
		case 147:
			return "AWT_990" /*Make War not Love*/;
	
		case 148:
			return "AWT_991" /*Off The Rails*/;
	
		case 149:
			return "AWT_992" /*Back It Up*/;
	
		case 150:
			return "AWT_993" /*Lick My Acid*/;
	
		case 151:
			return "AWT_994" /*Chemical Reaction*/;
	
		case 152:
			return "AWT_995" /*This is an Intervention*/;
	
		case 153:
			return "AWT_996" /*Unusual Suspects*/;
	
		case 154:
			return "AWT_997" /*FriedMind*/;
	
		case 155:
			return "AWT_998" /*Checking In*/;
	
		case 156:
			return "AWT_999" /*BDKD*/;
	
		case 157:
			return "AWT_1000" /*Back It Up 2*/;
	
		case 158:
			return "AWT_1001" /*5 Star Ride*/;
	
		case 159:
			return "AWT_1012" /*The Duggan Robbery*/;
	
		case 160:
			return "AWT_1013" /*The Cargo Ship Robbery*/;
	
		case 161:
			return "AWT_1014" /*The Podium Robbery*/;
	
		case 162:
			return "AWT_1015" /*The Gangbanger Robbery*/;
	
		case 163:
			return "AWT_1016" /*The McTony Robbery*/;
	
		case 164:
			return "AWT_1017" /*Perfect Run*/;
	
		case 165:
			return "AWT_1018" /*Extra Mile*/;
	
		case 166:
			return "AWT_1024" /*Slush Fund*/;
	
		case 167:
			return "AWT_1025" /*Best Laid Plans*/;
	
		case 168:
			return "AWT_1026" /*The Cluckin' Bell Farm Raid*/;
	
		case 169:
			return "AWT_1027" /*Pecking Order*/;
	
		case 170:
			return "AWT_1028" /*Sly Fox*/;
	
		case 171:
			return "AWT_1029" /*Cock Fight*/;
	
		case 172:
			return "AWT_1030" /*All The Sides*/;
	
		case 173:
			return "AWT_1031" /*Fly The Coop*/;
	
		case 174:
			return "AWT_1032" /*Get Whitney*/;
	
		case 175:
			return "AWT_1033" /*Get Lieberman*/;
	
		case 176:
			return "AWT_1034" /*Get O'Neil*/;
	
		case 177:
			return "AWT_1035" /*Get Thompson*/;
	
		case 178:
			return "AWT_1036" /*Get Song*/;
	
		case 179:
			return "AWT_1037" /*Get Garcia*/;
	
		case 180:
			return "AWT_1044" /*Priority Boarding*/;
	
		case 181:
			return "AWT_1045" /*Not A Scratch*/;
	
		case 182:
			return "AWT_1049" /*One Of A Kind*/;
	}

	switch (iParam0)
	{
		case 183:
			return "AWT_1050" /*The Fine Art File*/;
	
		case 184:
			return "AWT_1051" /*The Brute Force File*/;
	
		case 185:
			return "AWT_1052" /*The Project Breakaway File*/;
	
		case 186:
			return "AWT_1053" /*The Black Box File*/;
	
		case 187:
			return "AWT_1054" /*Bonus Points*/;
	
		case 188:
			return "AWT_1059" /*Up And Running*/;
	
		case 189:
			return "AWT_1060" /*Mogul*/;
	
		case 190:
			return "AWT_1061" /*Intel*/;
	
		case 191:
			return "AWT_1063" /*Iron Mule*/;
	
		case 192:
			return "AWT_1064" /*Ammunition*/;
	
		case 193:
			return "AWT_1065" /*Direct Delivery*/;
	
		case 194:
			return "AWT_1067" /*The Titan Job*/;
	
		case 195:
			return "AWT_1068" /*Permanent Contract*/;
	
		case 196:
			return "AWT_1078" /*Liquid Market*/;
	
		case 197:
			return "AWT_1079" /*ROI*/;
	
		case 198:
			return "AWT_1080" /*Compound Interest*/;
	
		case 199:
			return "AWT_1081" /*Mutual Funds*/;
	
		case 200:
			return "AWT_1082" /*Current Liabilities*/;
	
		case 201:
			return "AWT_1083" /*Gut Instinct*/;
	
		case 202:
			return "AWT_1084" /*The Monopoly*/;
	
		case 203:
			return "AWT_1085" /*Profit Maximization*/;
	
		case 204:
			return "AWT_1086" /*Diversification*/;
	
		case 205:
			return "AWT_1087" /*Kush Collector*/;
	
		case 206:
			return "AWT_1088" /*First Responder*/;
	
		case 207:
			return "AWT_1089" /*Ironclad*/;
	
		case 208:
			return "AWT_1090" /*The Indiscriminator*/;
	
		default:
		
	}

	return "";
}

int func_178(int iParam0, int iParam1) // Position - 0x1C3AF (115631)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 1;
	
		case 210:
			return 1;
	
		case 209:
			return 1;
	
		case 212:
			return 1;
	
		case 214:
			return 1;
	
		case 213:
			return 1;
	
		case 215:
			return 1;
	
		case 216:
			return 1;
	
		case 217:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 1;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 1;
	
		case 45:
			return 1;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 1;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 53:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 62:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 63:
			return 1;
	
		case 64:
			return 1;
	
		case 65:
			return 1;
	
		case 66:
			return 1;
	
		case 67:
			return 1;
	
		case 68:
			return 1;
	
		case 69:
			return 1;
	
		case 70:
			return 1;
	
		case 71:
			return 1;
	
		case 72:
			return 1;
	
		case 73:
			return 1;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 1;
	
		case 78:
			return 1;
	
		case 79:
			return 1;
	
		case 80:
			return 1;
	
		case 81:
			return 1;
	
		case 82:
			return 1;
	
		case 83:
			return 1;
	
		case 84:
			return 1;
	
		case 85:
			return 1;
	
		case 86:
			return 1;
	
		case 87:
			return 1;
	
		case 88:
			return 1;
	
		case 89:
			return 1;
	
		case 90:
			return 1;
	
		case 93:
			return 1;
	
		case 92:
			return 1;
	
		case 91:
			return 1;
	
		case 94:
			return 1;
	
		case 95:
			return 1;
	
		case 96:
			return 1;
	
		case 97:
			return 1;
	
		case 98:
			return 1;
	
		case 99:
			return 1;
	
		case 100:
			return 1;
	
		case 101:
			return 1;
	
		case 102:
			return 1;
	
		case 103:
			return 1;
	
		case 104:
			return 1;
	
		case 105:
			return 1;
	
		case 106:
			return 1;
	
		case 107:
			return 1;
	
		case 108:
			return 1;
	
		case 109:
			return 1;
	
		case 110:
			return 1;
	
		case 111:
			return 1;
	
		case 112:
			return 1;
	
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
			return 1;
	}

	switch (iParam0)
	{
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
			return 1;
	}

	return 0;
}

int func_179() // Position - 0x1CA99 (117401)
{
	return 5;
}

int func_180(int iParam0) // Position - 0x1CAA2 (117410)
{
	if (func_92(iParam0, -1))
		return 5;

	return 0;
}

void func_181(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1CAB9 (117433)
{
	int num;
	char* str;
	char* str2;
	char* str3;
	char* str4;
	ePedComponentType type;
	ePedComponentType type2;
	int num2;
	ePedComponentType type3;
	int value;
	int value2;
	int num3;

	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
	
		case 1:
			iParam1 = 1;
			break;
	
		case 2:
			iParam1 = 2;
			break;
	
		case 3:
			iParam1 = 3;
			break;
	
		case 4:
			iParam1 = 4;
			break;
	
		case 5:
			iParam1 = 5;
			break;
	
		case 6:
			iParam1 = func_187(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_186(iParam0, iParam2);
			break;
	}

	num = func_186(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_129(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_185(iParam0, iParam2);
	str2 = func_184(iParam0, iParam1, iParam2);
	str3 = func_183(iParam0, iParam1, iParam2);
	str4 = func_182(iParam0, iParam1, iParam2);
	type = func_118(iParam0, num, iParam2);
	type2 = func_116(iParam0, -1);
	num2 = func_136(iParam1);
	type3 = func_118(iParam0, num2, iParam2);
	value = type - type3;
	value2 = type2 - type3;
	num3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value)) * 100f);
	func_130(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 218, iParam0);
	return;
}

char* func_182(int iParam0, int iParam1, int iParam2) // Position - 0x1CBF9 (117753)
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
	
		case 39:
			return "MPAwards5";
	
		case 51:
			return "MPAwards5";
	
		case 52:
			return "MPAwards5";
	
		case 16:
			return "MPAwards2";
	
		case 60:
			return "MPAwards4";
	
		case 61:
			return "MPAwards4";
	
		case 62:
			return "MPAwards4";
	
		case 63:
			return "MPAwards4";
	
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
					
						case 1:
							return "MPAwards1";
					
						case 2:
							return "MPAwards1";
					
						case 3:
							return "MPAwards1";
					
						case 4:
							return "MPAwards1";
					
						case 5:
							return "MPAwards1";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 12:
			return "MPAwards3";
	
		case 11:
			return "MPAwards4";
	
		case 20:
			return "MPAwards5";
	
		case 19:
			return "MPAwards2";
	
		case 15:
			return "MPAwards4";
	
		case 17:
			return "MPAwards2";
	
		case 21:
			return "MPAwards2";
	
		case 14:
			return "MPAwards4";
	
		case 22:
			return "MPAwards1";
	
		case 1:
			return "MPAwards5";
	
		case 2:
			return "MPAwards5";
	
		case 3:
			return "MPAwards5";
	
		case 4:
			return "MPAwards5";
	
		case 5:
			return "MPAwards4";
	
		case 6:
			return "MPAwards5";
	
		case 7:
			return "MPAwards4";
	
		case 8:
			return "MPAwards5";
	
		case 9:
			return "MPAwards4";
	
		case 10:
			return "MPAwards2";
	
		case 23:
			return "MPAwards1";
	
		case 24:
			return "MPAwards1";
	
		case 25:
			return "MPAwards1";
	
		case 26:
			return "MPAwards1";
	
		case 27:
			return "MPAwards1";
	
		case 28:
			return "MPAwards1";
	
		case 29:
			return "MPAwards5";
	
		case 30:
			return "MPAWARDS5";
	
		case 31:
			return "MPAWARDS5";
	
		case 32:
			return "MPAWARDS5";
	
		case 33:
			return "MPAWARDS5";
	
		case 34:
			return "MPAWARDS5";
	
		case 35:
			return "MPAWARDS5";
	
		case 36:
			return "MPAWARDS5";
	
		case 37:
			return "MPAWARDS5";
	
		case 38:
			return "MPAWARDS5";
	
		case 40:
			return "MPAWARDS5";
	
		case 41:
			return "MPAWARDS5";
	
		case 42:
			return "MPAWARDS5";
	
		case 43:
			return "MPAWARDS5";
	
		case 44:
			return "MPAWARDS5";
	
		case 45:
			return "MPAWARDS5";
	
		case 46:
			return "MPAWARDS5";
	
		case 47:
			return "MPAWARDS5";
	
		case 48:
			return "MPAWARDS5";
	
		case 49:
			return "MPAWARDS5";
	
		case 54:
			return "MPAWARDS5";
	
		case 55:
			return "MPAWARDS5";
	
		case 56:
			return "MPAWARDS5";
	
		case 57:
			return "MPAWARDS5";
	
		case 58:
			return "MPAWARDS5";
	
		case 59:
			return "MPAWARDS5";
	
		case 164:
			return "MPAwardHeists";
	
		case 165:
			return "MPAwardHeists";
	
		case 166:
			return "MPAwardHeists";
	
		case 167:
			return "MPAwardHeists";
	
		case 168:
			return "MPAwardHeists";
	
		case 67:
			return "MPAwardHeists";
	
		case 158:
			return "MPAwardHeists";
	
		case 159:
			return "MPAwardHeists";
	
		case 160:
			return "MPAwardHeists";
	
		case 161:
			return "MPAwardHeists";
	
		case 162:
			return "MPAwardHeists";
	
		case 163:
			return "MPAwardHeists";
	
		case 169:
			return "MPAwardHeists";
	
		case 170:
			return "MPAwardHeists";
	
		case 171:
			return "MPAwardHeists";
	
		case 172:
			return "MPAwardHeists";
	
		case 173:
			return "MPAwardHeists";
	
		case 174:
			return "MPAwardHeists";
	
		case 175:
			return "MPAwardHeists";
	
		case 176:
			return "MPAwardHeists";
	
		case 177:
			return "MPAwardNightclub";
	
		case 178:
			return "MPAwardNightclub";
	
		case 179:
			return "MPAwardNightclub";
	
		case 180:
			return "MPAwardNightclub";
	
		case 181:
			return "MPAwardNightclub";
	
		case 70:
			return "MPAwardsArena";
	
		case 71:
			return "MPAwardsArena";
	
		case 72:
			return "MPAwardsArena";
	
		case 73:
			return "MPAwardsArena";
	
		case 74:
			return "MPAwardsArena";
	
		case 75:
			return "MPAwardsArena";
	
		case 76:
			return "MPAwardsArena";
	
		case 77:
			return "MPAwardsArena";
	
		case 78:
			return "MPAwardsArena";
	
		case 79:
			return "MPAwardsArena";
	
		case 80:
			return "MPAwardsArena";
	
		case 81:
			return "MPAwardsArena";
	
		case 82:
			return "MPAwardsArena";
	
		case 83:
			return "MPAwardsArena";
	
		case 84:
			return "MPAwardsArena";
	
		case 85:
			return "MPAwardsArena";
	
		case 86:
			return "MPAwardsArena";
	
		case 87:
			return "MPAwardCasino";
	
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "MPAwardCasinoHeist";
	
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
			return "MPAwardIslandHeist";
	
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
			return "MPAwardTunerPack";
	
		case 117:
		case 118:
		case 119:
			return "MPAwardsFixer";
	
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return "MPAwardXmas2022";
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
			return "MPAwardDLC22023";
	
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			return "MPAwardDLC12024";
	
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 149:
			return "MPAwardDLC22024";
	
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			return "MPAwardDLC12025";
	}

	return "";
}

char* func_183(int iParam0, int iParam1, int iParam2) // Position - 0x1D37E (119678)
{
	iParam2 == 9;
	iParam1 == 5;

	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
	
		case 39:
			return "ComeFromBehind";
	
		case 60:
			return "TheFugitive";
	
		case 61:
			return "NoClaimsBonus";
	
		case 62:
			return "swallow";
	
		case 63:
			return "Spinderella";
	
		case 16:
			return "Timeinheli";
	
		case 0:
			return "HangingOutInCars";
	
		case 51:
			return "WinRallyAsDriver";
	
		case 52:
			return "WinRallyAsNavigator";
	
		case 12:
			return "Killenemiesindriveby";
	
		case 11:
			return "JackVehicles";
	
		case 20:
			return "Jump40m";
	
		case 19:
			return "Timesavoiding5stars";
	
		case 15:
			return "GetLapDances";
	
		case 17:
			return "Delivercars";
	
		case 21:
			return "racesWon_generic";
	
		case 14:
			return "HoldUpShops";
	
		case 22:
			return "ArmWrestlingVictories";
	
		case 1:
			return "KillPistol";
	
		case 2:
			return "KillSniperrifle";
	
		case 3:
			return "KillGrenades";
	
		case 4:
			return "KillShotgun";
	
		case 5:
			return "KillSMG";
	
		case 6:
			return "KillRocketLauncher";
	
		case 7:
			return "KillStickyBombs";
	
		case 8:
			return "KillMeleeWeapons";
	
		case 9:
			return "Headshots" /*Headshot kills*/;
	
		case 10:
			return "BlowupVehicles";
	
		case 23:
			return "Winatdarts";
	
		case 24:
			return "Blowupenemiesusingcarbombs";
	
		case 25:
			return "KilledpeoplewithanAssaultRifle";
	
		case 26:
			return "KilledpeoplewithaMachineGun";
	
		case 27:
			return "Gethaircuts";
	
		case 28:
			return "Parachute1min";
	
		case 29:
			return "ParachuteJumps20m";
	
		case 30:
			return "Birdie";
	
		case 31:
			return "GolfWin";
	
		case 32:
			return "TargetGridWin";
	
		case 33:
			return "RandomTargetsWin";
	
		case 34:
			return "CoveredTargetsWin";
	
		case 35:
			return "TennisMatchesWon";
	
		case 36:
			return "TennisServiceAce";
	
		case 37:
			return "GTARacesWon";
	
		case 38:
			return "FastestLap";
	
		case 40:
			return "DeathmatchWin";
	
		case 41:
			return "TeamDeathmatchWin";
	
		case 42:
			return "TeamDeathmatchMVP";
	
		case 43:
			return "KillStreak";
	
		case 44:
			return "TotalKills";
	
		case 45:
			return "HatTrickKiller";
	
		case 46:
			return "StolenKill";
	
		case 47:
			return "Land2mFromTarget";
	
		case 48:
			return "ReachHordeModeWave";
	
		case 49:
			return "EarnCashFromBetting";
	
		case 54:
			return "RaceToPointWinner";
	
		case 55:
			return "BountyHunter";
	
		case 56:
			return "OverallKills";
	
		case 57:
			return "WinASeaRace";
	
		case 58:
			return "WinAPlaneRace";
	
		case 59:
			return "GetRevengeKillDeathmatch";
	
		case 164:
			return "Captured";
	
		case 165:
			return "ThePostman";
	
		case 166:
			return "GimmeThat";
	
		case 167:
			return "NoYouDont";
	
		case 168:
			return "DeathDefying";
	
		case 67:
			return "dailyduty";
	
		case 158:
			return "TheBigTime";
	
		case 159:
			return "BePrepared";
	
		case 160:
			return "ForHire";
	
		case 161:
			return "ShotCaller";
	
		case 162:
			return "LiveALittle";
	
		case 163:
			return "Decorated";
	
		case 169:
			return "LightsOut";
	
		case 170:
			return "InControl";
	
		case 171:
			return "PsychoKiller";
	
		case 172:
			return "CalmDown";
	
		case 173:
			return "StillStanding";
	
		case 174:
			return "OneAndOnly";
	
		case 175:
			return "OneManArmy";
	
		case 176:
			return "MovingDay";
	
		case 177:
			return "Solomun";
	
		case 178:
			return "TaleOfUs";
	
		case 179:
			return "Dixon";
	
		case 180:
			return "TheBlackMadonna";
	
		case 181:
			return "ClubDrunk";
	
		case 70:
			return "watchyourstep";
	
		case 71:
			return "TOWEROFFENSE";
	
		case 72:
			return "READYFORWAR";
	
		case 73:
			return "THROUGHTHELENS";
	
		case 74:
			return "SPINNER";
	
		case 75:
			return "YOUMEANBOOBYTRAP";
	
		case 76:
			return "MASTERBANDITO";
	
		case 77:
			return "SITTINGDUCK";
	
		case 78:
			return "CROWDPARTICIPATION";
	
		case 79:
			return "KILLORBEKILLED";
	
		case 80:
			return "MASSIVESHUNT";
	
		case 81:
			return "YOUREOUTTAHERE";
	
		case 82:
			return "WEVEGOTONE";
	
		case 83:
			return "ARENAWAGEWORKER";
	
		case 84:
			return "TIMESERVED";
	
		case 85:
			return "TOPSCORE";
	
		case 86:
			return "CAREERWINNER";
	
		case 87:
			return "HighRoller";
	
		case 88:
			return "Preparation";
	
		case 89:
			return "AsleepOnTheJob";
	
		case 90:
			return "DailyCashGrab";
	
		case 91:
			return "Bigbrother";
	
		case 92:
			return "Sharpshooter";
	
		case 93:
			return "RaceChampion";
	
		case 94:
			return "PlatinumSword";
	
		case 95:
			return "CoinPurse";
	
		case 96:
			return "Astrochimp";
	
		case 97:
			return "Masterful";
	
		case 99:
			return "sunset";
	
		case 100:
			return "TreasureHunter";
	
		case 101:
			return "WreckDiving";
	
		case 102:
			return "Keinmusik";
	
		case 103:
			return "PalmsTrax";
	
		case 104:
			return "Moodymann";
	
		case 105:
			return "FillYourBags";
	
		case 106:
			return "Prepped";
	
		case 107:
			return "LSCarMeetMember";
	
		case 108:
			return "SprintRacer";
	
		case 109:
			return "StreetRacer";
	
		case 110:
			return "PursuitRacer";
	
		case 112:
			return "SpecialDelivery";
	
		case 114:
			return "Groundwork";
	
		case 115:
			return "ContractualCriminal";
	
		case 116:
			return "FacesofDeath";
	
		case 111:
			return "TriedandTested";
	
		case 113:
			return "CarExporter";
	
		case 117:
			return "ContracualObligations";
	
		case 118:
			return "ColdCaller";
	
		case 119:
			return "Producer";
	
		case 120:
			return "RunRabbitRun";
	
		case 121:
			return "CallMe";
	
		case 122:
			return "ChemicalAttraction";
	
		case 123:
			return "StashesToStashes";
	
		case 124:
			return "HereComesTheDrop";
	
		case 125:
			return "GoodSamaritan";
	
		case 126:
			return "YourOwnWorstEnemy";
	
		case 127:
			return "TaxiDriver";
	
		case 128:
			return "NewCarSmell";
	
		case 129:
			return "SeriousPrepper";
	
		case 130:
			return "WheelerDealer";
	
		case 131:
			return "SecondHandParts";
	
		case 132:
			return "TowedAway";
	
		case 133:
			return "Bountiful";
	
		case 134:
			return "Stillbreathing";
	
		case 135:
			return "CashOnDelivery";
	
		case 136:
			return "StepTwoProfit";
	
		case 137:
			return "Dispatched";
	
		case 138:
			return "Pizzathis";
	
		case 139:
			return "happylandings";
	
		case 140:
			return "HardDriveHoarder";
	
		case 141:
			return "DeathTrap";
	
		case 142:
			return "DarnellBrosInc";
	
		case 143:
			return "GetReady";
	
		case 144:
			return "CashInHand";
	
		case 145:
			return "BrotherlyLove";
	
		case 146:
			return "NotOutOfYourDepth";
	
		case 147:
			return "FullyStocked";
	
		case 149:
			return "ArmsInArms";
	
		case 150:
			return "dogsdinner";
	
		case 151:
			return "LICENSEDPROFESSIONAL";
	
		case 152:
			return "COOKINGTHEBOOKS";
	
		case 153:
			return "SQUEAKYCLEAN";
	
		case 154:
			return "QUICKIEPHARM";
	
		case 155:
			return "SAFEGUARD";
	
		case 156:
			return "SUNBURNEDSURVIVOR";
	
		case 157:
			return "DANCINGWITHDEATH";
	}

	return "";
}

char* func_184(int iParam0, int iParam1, int iParam2) // Position - 0x1DCA8 (122024)
{
	iParam1 == 5;
	iParam2 == 9;

	switch (iParam0)
	{
		case 53:
			return "AWS_721";
	
		case 60:
			return "AWS_728";
	
		case 61:
			return "AWS_730";
	
		case 62:
			return "AWS_731";
	
		case 63:
			return "AWS_732";
	
		case 16:
			return "AWS_550";
	
		case 0:
			return "AWS_282";
	
		case 51:
			return "AWS_707";
	
		case 52:
			return "AWS_708";
	
		case 12:
			return "AWS_581";
	
		case 11:
			return "AWS_582";
	
		case 19:
			return "AWS_534";
	
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_509_M";
			else
				return "AWS_509";
			break;
	
		case 39:
			return "AWS_678";
	
		case 15:
			return "AWS_559";
	
		case 17:
			return "AWS_535";
	
		case 21:
			return "AWS_586";
	
		case 14:
			return "AWS_566";
	
		case 22:
			return "AWS_589";
	
		case 1:
			return "AWS_506";
	
		case 2:
			return "AWS_585";
	
		case 3:
			return "AWS_541";
	
		case 4:
			return "AWS_584";
	
		case 5:
			return "AWS_540";
	
		case 6:
			return "AWS_539";
	
		case 7:
			return "AWS_538";
	
		case 8:
			return "AWS_537";
	
		case 9:
			return "AWS_536";
	
		case 10:
			return "AWS_583";
	
		case 23:
			return "AWS_610";
	
		case 24:
			return "AWS_611";
	
		case 25:
			return "AWS_631";
	
		case 26:
			return "AWS_632";
	
		case 27:
			return "AWS_639";
	
		case 28:
			return "AWS_640";
	
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWS_699_m";
			else
				return "AWS_699";
			break;
	
		case 30:
			return "AWS_661";
	
		case 31:
			return "AWS_662";
	
		case 32:
			return "AWS_663";
	
		case 33:
			return "AWS_665";
	
		case 34:
			return "AWS_666";
	
		case 35:
			return "AWS_668";
	
		case 36:
			return "AWS_669";
	
		case 37:
			return "AWS_675";
	
		case 38:
			return "AWS_676";
	
		case 40:
			return "AWS_679";
	
		case 41:
			return "AWS_681";
	
		case 42:
			return "AWS_682";
	
		case 43:
			return "AWS_677";
	
		case 44:
			return "AWS_683";
	
		case 45:
			return "AWS_684";
	
		case 46:
			return "AWS_685";
	
		case 47:
			return "AWS_692";
	
		case 48:
			return "AWS_696";
	
		case 49:
			return "AWS_693";
	
		case 54:
			return "AWS_710";
	
		case 55:
			return "AWS_703";
	
		case 56:
			return "AWS_704";
	
		case 57:
			return "AWS_722";
	
		case 58:
			return "AWS_723";
	
		case 59:
			return "AWS_716";
	
		case 164:
			return "AWS_740";
	
		case 165:
			return "AWS_741";
	
		case 166:
			return "AWS_742";
	
		case 167:
			return "AWS_743";
	
		case 168:
			return "AWS_744";
	
		case 67:
			return "AWS_782";
	
		case 158:
			return "AWS_745";
	
		case 159:
			return "AWS_746";
	
		case 160:
			return "AWS_747";
	
		case 161:
			return "AWS_748";
	
		case 162:
			return "AWS_749";
	
		case 163:
			return "AWS_752";
	
		case 169:
			return "AWS_755";
	
		case 170:
			return "AWS_757";
	
		case 171:
			return "AWS_758";
	
		case 172:
			return "AWS_759";
	
		case 173:
			return "AWS_760";
	
		case 174:
			return "AWS_761";
	
		case 175:
			return "AWS_762";
	
		case 176:
			return "AWS_764";
	
		case 177:
			if (iParam1 == 5)
				return "AWS_788_4";
			else if (iParam1 == 4)
				return "AWS_788_3";
			else if (iParam1 == 3)
				return "AWS_788_2";
			else
				return "AWS_788_1";
			break;
	
		case 178:
			if (iParam1 == 5)
				return "AWS_789_4";
			else if (iParam1 == 4)
				return "AWS_789_3";
			else if (iParam1 == 3)
				return "AWS_789_2";
			else
				return "AWS_789_1";
			break;
	
		case 179:
			if (iParam1 == 5)
				return "AWS_790_4";
			else if (iParam1 == 4)
				return "AWS_790_3";
			else if (iParam1 == 3)
				return "AWS_790_2";
			else
				return "AWS_790_1";
			break;
	
		case 180:
			if (iParam1 == 5)
				return "AWS_791_4";
			else if (iParam1 == 4)
				return "AWS_791_3";
			else if (iParam1 == 3)
				return "AWS_791_2";
			else
				return "AWS_791_1";
			break;
	
		case 181:
			return "AWS_792";
	
		case 70:
			return "AWS_817";
	
		case 71:
			return "AWS_818";
	
		case 72:
			return "AWS_821";
	
		case 73:
			return "AWS_822";
	
		case 74:
			return "AWS_823";
	
		case 75:
			return "AWS_824";
	
		case 76:
			return "AWS_825";
	
		case 77:
			return "AWS_826";
	
		case 78:
			return "AWS_827";
	
		case 79:
			return "AWS_828";
	
		case 80:
			return "AWS_829";
	
		case 81:
			return "AWS_830";
	
		case 82:
			return "AWS_831";
	
		case 83:
			return "AWS_832";
	
		case 84:
			return "AWS_833";
	
		case 85:
			return "AWS_834";
	
		case 86:
			return "AWS_835";
	
		case 87:
			if (iParam1 == 5)
				return "AWS_845_4" /*Complete 50 Casino Work missions for Agatha and earn $100,000.*/;
			else if (iParam1 == 4)
				return "AWS_845_3" /*Complete 25 Casino Work missions for Agatha and earn $50,000.*/;
			else if (iParam1 == 3)
				return "AWS_845_2" /*Complete 10 Casino Work missions for Agatha and earn $20,000.*/;
			else
				return "AWS_845_1" /*Complete 5 Casino Work missions for Agatha and earn $10,000.*/;
			break;
	
		case 88:
			if (iParam1 == 5)
				return "AWS_847_4" /*Complete 40 prep missions as part of The Diamond Casino Heist.*/;
			else if (iParam1 == 4)
				return "AWS_847_3" /*Complete 20 prep missions as part of The Diamond Casino Heist.*/;
			else if (iParam1 == 3)
				return "AWS_847_2" /*Complete 10 prep missions as part of The Diamond Casino Heist.*/;
			else
				return "AWS_847_1" /*Complete 5 prep missions as part of The Diamond Casino Heist.*/;
			break;
	
		case 89:
			if (iParam1 == 5)
				return "AWS_848_4" /*Use the Drone to tranquilize 20 guards during The Diamond Casino Heist.*/;
			else if (iParam1 == 4)
				return "AWS_848_3" /*Use the Drone to tranquilize 15 guards during The Diamond Casino Heist.*/;
			else if (iParam1 == 3)
				return "AWS_848_2" /*Use the Drone to tranquilize 10 guards during The Diamond Casino Heist.*/;
			else
				return "AWS_848_1" /*Use the Drone to tranquilize 5 guards during The Diamond Casino Heist.*/;
			break;
	
		case 90:
			if (iParam1 == 5)
				return "AWS_849_4" /*Steal a total of $100000 from the Daily Vault during The Diamond Casino Heist.*/;
			else if (iParam1 == 4)
				return "AWS_849_3" /*Steal a total of $75000 from the Daily Vault during The Diamond Casino Heist.*/;
			else if (iParam1 == 3)
				return "AWS_849_2" /*Steal a total of $50000 from the Daily Vault during The Diamond Casino Heist.*/;
			else
				return "AWS_849_1" /*Steal a total of $25000 from the Daily Vault during The Diamond Casino Heist.*/;
			break;
	
		case 91:
			if (iParam1 == 5)
				return "AWS_850_4" /*Destroy 40 security cameras during The Diamond Casino Heist.*/;
			else if (iParam1 == 4)
				return "AWS_850_3" /*Destroy 30 security cameras during The Diamond Casino Heist.*/;
			else if (iParam1 == 3)
				return "AWS_850_2" /*Destroy 20 security cameras during The Diamond Casino Heist.*/;
			else
				return "AWS_850_1" /*Destroy 10 security cameras during The Diamond Casino Heist.*/;
			break;
	
		case 92:
			if (iParam1 == 5)
				return "AWS_851_4" /*Kill 40 flying critters across all levels of Badlands Revenge II.*/;
			else if (iParam1 == 4)
				return "AWS_851_3" /*Kill 20 flying critters across all levels of Badlands Revenge II.*/;
			else if (iParam1 == 3)
				return "AWS_851_2" /*Kill 10 flying critters across all levels of Badlands Revenge II.*/;
			else
				return "AWS_851_1" /*Kill 5 flying critters across all levels of Badlands Revenge II.*/;
			break;
	
		case 93:
			if (iParam1 == 5)
				return "AWS_852_4" /*Win 40 races against an opponent in Race And Chase.*/;
			else if (iParam1 == 4)
				return "AWS_852_3" /*Win 20 races against an opponent in Race And Chase.*/;
			else if (iParam1 == 3)
				return "AWS_852_2" /*Win 10 races against an opponent in Race And Chase.*/;
			else
				return "AWS_852_1" /*Win 5 races against an opponent in Race And Chase.*/;
			break;
	
		case 94:
			if (iParam1 == 5)
				return "AWS_853_4" /*Score at least 1000000 during a single play of The Wizard's Ruin.*/;
			else if (iParam1 == 4)
				return "AWS_853_3" /*Score at least 750000 during a single play of The Wizard's Ruin.*/;
			else if (iParam1 == 3)
				return "AWS_853_2" /*Score at least 500000 during a single play of The Wizard's Ruin.*/;
			else
				return "AWS_853_1" /*Score at least 250000 during a single play of The Wizard's Ruin.*/;
			break;
	
		case 95:
			if (iParam1 == 5)
				return "AWS_854_4" /*Collect 950000 treasures during a single play of The Wizard's Ruin.*/;
			else if (iParam1 == 4)
				return "AWS_854_3" /*Collect 700000 treasures during a single play of The Wizard's Ruin.*/;
			else if (iParam1 == 3)
				return "AWS_854_2" /*Collect 450000 treasures during a single play of The Wizard's Ruin.*/;
			else
				return "AWS_854_1" /*Collect 200000 treasures during a single play of The Wizard's Ruin.*/;
			break;
	
		case 96:
			if (iParam1 == 5)
				return "AWS_855_4" /*Score over 3000000 points in a single game of Space Monkey 3: Bananas Gone Bad.*/;
			else if (iParam1 == 4)
				return "AWS_855_3" /*Score over 2500000 points in a single game of Space Monkey 3: Bananas Gone Bad.*/;
			else if (iParam1 == 3)
				return "AWS_855_2" /*Score over 2000000 points in a single game of Space Monkey 3: Bananas Gone Bad.*/;
			else
				return "AWS_855_1" /*Score over 1500000 points in a single game of Space Monkey 3: Bananas Gone Bad.*/;
			break;
	
		case 97:
			if (iParam1 == 5)
				return "AWS_856_4" /*Score over 40000 points in a single play of Penetrator.*/;
			else if (iParam1 == 4)
				return "AWS_856_3" /*Score over 20000 points in a single play of Penetrator.*/;
			else if (iParam1 == 3)
				return "AWS_856_2" /*Score over 10000 points in a single play of Penetrator.*/;
			else
				return "AWS_856_1" /*Score over 5000 points in a single play of Penetrator.*/;
			break;
	
		case 99:
			if (iParam1 == 5)
				return "AWS_936d" /*Dance to Keinemusik's set at the Cayo Perico beach party for 60 minutes.*/;
			else if (iParam1 == 4)
				return "AWS_936c" /*Dance to Keinemusik's set at the Cayo Perico beach party for 30 minutes.*/;
			else if (iParam1 == 3)
				return "AWS_936b" /*Dance to Keinemusik's set at the Cayo Perico beach party for 15 minutes.*/;
			else
				return "AWS_936a" /*Dance to Keinemusik's set at the Cayo Perico beach party for 5 minutes.*/;
			break;
	
		case 100:
			if (iParam1 == 5)
				return "AWS_937d" /*Steal the loot from 50 treasure chests found on Cayo Perico.*/;
			else if (iParam1 == 4)
				return "AWS_937c" /*Steal the loot from 20 treasure chests found on Cayo Perico.*/;
			else if (iParam1 == 3)
				return "AWS_937b" /*Steal the loot from 10 treasure chests found on Cayo Perico.*/;
			else
				return "AWS_937a" /*Steal the loot from 5 treasure chests found on Cayo Perico.*/;
			break;
	
		case 101:
			if (iParam1 == 5)
				return "AWS_938d" /*Steal a total of $1,000,000 from hidden caches found around the San Andreas coast.*/;
			else if (iParam1 == 4)
				return "AWS_938c" /*Steal a total of $750,000 from hidden caches found around the San Andreas coast.*/;
			else if (iParam1 == 3)
				return "AWS_938b" /*Steal a total of $250,000 from hidden caches found around the San Andreas coast.*/;
			else
				return "AWS_938a" /*Steal a total of $50,000 from hidden caches found around the San Andreas coast.*/;
			break;
	
		case 102:
			if (iParam1 == 5)
				return "AWS_939d" /*Dance to Keinemusik's set in The Music Locker for 60 minutes.*/;
			else if (iParam1 == 4)
				return "AWS_939c" /*Dance to Keinemusik's set in The Music Locker for 30 minutes.*/;
			else if (iParam1 == 3)
				return "AWS_939b" /*Dance to Keinemusik's set in The Music Locker for 15 minutes.*/;
			else
				return "AWS_939a" /*Dance to Keinemusik's set in The Music Locker for 5 minutes.*/;
			break;
	
		case 103:
			if (iParam1 == 5)
				return "AWS_940d" /*Dance to Palms Trax set in The Music Locker for 60 minutes.*/;
			else if (iParam1 == 4)
				return "AWS_940c" /*Dance to Palms Trax set in The Music Locker for 30 minutes.*/;
			else if (iParam1 == 3)
				return "AWS_940b" /*Dance to Palms Trax set in The Music Locker for 15 minutes.*/;
			else
				return "AWS_940a" /*Dance to Palms Trax set in The Music Locker for 5 minutes.*/;
			break;
	
		case 104:
			if (iParam1 == 5)
				return "AWS_941d" /*Dance to Moodymann's set in The Music Locker for 60 minutes.*/;
			else if (iParam1 == 4)
				return "AWS_941c" /*Dance to Moodymann's set in The Music Locker for 30 minutes.*/;
			else if (iParam1 == 3)
				return "AWS_941b" /*Dance to Moodymann's set in The Music Locker for 15 minutes.*/;
			else
				return "AWS_941a" /*Dance to Moodymann's set in The Music Locker for 5 minutes.*/;
			break;
	
		case 105:
			if (iParam1 == 5)
				return "AWS_942d" /*Steal a total of $20,000,000 in secondary targets during The Cayo Perico Heist.*/;
			else if (iParam1 == 4)
				return "AWS_942c" /*Steal a total of $10,000,000 in secondary targets during The Cayo Perico Heist.*/;
			else if (iParam1 == 3)
				return "AWS_942b" /*Steal a total of $5,000,000 in secondary targets during The Cayo Perico Heist.*/;
			else
				return "AWS_942a" /*Steal a total of $1,000,000 in secondary targets during The Cayo Perico Heist.*/;
			break;
	
		case 106:
			if (iParam1 == 5)
				return "AWS_943d" /*Complete 50 prep missions as part of The Cayo Perico Heist.*/;
			else if (iParam1 == 4)
				return "AWS_943c" /*Complete 20 prep missions as part of The Cayo Perico Heist.*/;
			else if (iParam1 == 3)
				return "AWS_943b" /*Complete 10 prep missions as part of The Cayo Perico Heist.*/;
			else
				return "AWS_943a" /*Complete 5 prep missions as part of The Cayo Perico Heist.*/;
			break;
	
		case 107:
			if (iParam1 == 5)
				return "AWS_945d" /*Reach LS Car Meet Reputation Level 100.*/;
			else if (iParam1 == 4)
				return "AWS_945c" /*Reach LS Car Meet Reputation Level 50.*/;
			else if (iParam1 == 3)
				return "AWS_945b" /*Reach LS Car Meet Reputation Level 25.*/;
			else
				return "AWS_945a" /*Reach LS Car Meet Reputation Level 5.*/;
			break;
	
		case 108:
			if (iParam1 == 5)
				return "AWS_967d" /*Win 50 Sprints.*/;
			else if (iParam1 == 4)
				return "AWS_967c" /*Win 25 Sprints.*/;
			else if (iParam1 == 3)
				return "AWS_967b" /*Win 10 Sprints.*/;
			else
				return "AWS_967a" /*Win 5 Sprints.*/;
			break;
	
		case 109:
			if (iParam1 == 5)
				return "AWS_946d" /*Win 50 races in the Street Race Series.*/;
			else if (iParam1 == 4)
				return "AWS_946c" /*Win 25 races in the Street Race Series.*/;
			else if (iParam1 == 3)
				return "AWS_946b" /*Win 10 races in the Street Race Series.*/;
			else
				return "AWS_946a" /*Win 5 races in the Street Race Series.*/;
			break;
	
		case 110:
			if (iParam1 == 5)
				return "AWS_947d" /*Win 50 races in the Pursuit Series.*/;
			else if (iParam1 == 4)
				return "AWS_947c" /*Win 25 races in the Pursuit Series.*/;
			else if (iParam1 == 3)
				return "AWS_947b" /*Win 10 races in the Pursuit Series.*/;
			else
				return "AWS_947a" /*Win 5 races in the Pursuit Series.*/;
			break;
	
		case 112:
			if (iParam1 == 5)
				return "AWS_949d" /*Successfully mod and deliver 50 customer vehicles from your Auto Shop.*/;
			else if (iParam1 == 4)
				return "AWS_949c" /*Successfully mod and deliver 25 customer vehicles from your Auto Shop.*/;
			else if (iParam1 == 3)
				return "AWS_949b" /*Successfully mod and deliver 10 customer vehicles from your Auto Shop.*/;
			else
				return "AWS_949a" /*Successfully mod and deliver 5 customer vehicles from your Auto Shop.*/;
			break;
	
		case 114:
			if (iParam1 == 5)
				return "AWS_952d" /*Complete 40 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.*/;
			else if (iParam1 == 4)
				return "AWS_952c" /*Complete 20 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.*/;
			else if (iParam1 == 3)
				return "AWS_952b" /*Complete 10 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.*/;
			else
				return "AWS_952a" /*Complete 5 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta.*/;
			break;
	
		case 115:
			if (iParam1 == 5)
				return "AWS_961d" /*Complete 100 Contracts for KDJ and Sessanta.*/;
			else if (iParam1 == 4)
				return "AWS_961c" /*Complete 50 Contracts for KDJ and Sessanta.*/;
			else if (iParam1 == 3)
				return "AWS_961b" /*Complete 25 Contracts for KDJ and Sessanta.*/;
			else
				return "AWS_961a" /*Complete 5 Contracts for KDJ and Sessanta.*/;
			break;
	
		case 116:
			if (iParam1 == 5)
				return "AWS_962d" /*Carry out over 30 headshots across all scenes in Camhedz.*/;
			else if (iParam1 == 4)
				return "AWS_962c" /*Carry out over 20 headshots across all scenes in Camhedz.*/;
			else if (iParam1 == 3)
				return "AWS_962b" /*Carry out over 10 headshots across all scenes in Camhedz.*/;
			else
				return "AWS_962a" /*Carry out over 5 headshots across all scenes in Camhedz.*/;
			break;
	
		case 111:
			if (iParam1 == 5)
				return "AWS_948d" /*Drive one of the test rides for 240 minutes inside the Test Track.*/;
			else if (iParam1 == 4)
				return "AWS_948c" /*Drive one of the test rides for 120 minutes inside the Test Track.*/;
			else if (iParam1 == 3)
				return "AWS_948b" /*Drive one of the test rides for 60 minutes inside the Test Track.*/;
			else
				return "AWS_948a" /*Drive one of the test rides for 30 minutes inside the Test Track.*/;
			break;
	
		case 113:
			if (iParam1 == 5)
				return "AWS_950d" /*Deliver 100 Exotic Exports Vehicles to the Docks for Sessanta's partner.*/;
			else if (iParam1 == 4)
				return "AWS_950c" /*Deliver 50 Exotic Exports Vehicles to the Docks for Sessanta's partner.*/;
			else if (iParam1 == 3)
				return "AWS_950b" /*Deliver 25 Exotic Exports Vehicles to the Docks for Sessanta's partner.*/;
			else
				return "AWS_950a" /*Deliver 10 Exotic Exports Vehicles to the Docks for Sessanta's partner.*/;
			break;
	
		case 117:
			if (iParam1 == 5)
				return "AWS_978d" /*Complete 50 Security Contracts.*/;
			else if (iParam1 == 4)
				return "AWS_978c" /*Complete 25 Security Contracts.*/;
			else if (iParam1 == 3)
				return "AWS_978b" /*Complete 15 Security Contracts.*/;
			else
				return "AWS_978a" /*Complete 5 Security Contracts.*/;
			break;
	
		case 118:
			if (iParam1 == 5)
				return "AWS_979d" /*Complete 50 Payphone Hits.*/;
			else if (iParam1 == 4)
				return "AWS_979c" /*Complete 25 Payphone Hits.*/;
			else if (iParam1 == 3)
				return "AWS_979b" /*Complete 15 Payphone Hits.*/;
			else
				return "AWS_979a" /*Complete 5 Payphone Hits.*/;
			break;
	
		case 119:
			return "AWS_983" /*Watch Dr. Dre working in Record A Studios.*/;
	
		case 120:
			return "AWS_1002" /*Reach the gateway as the rabbit in First Dose - Uncontrolled Substance.*/;
	
		case 121:
			if (iParam1 == 5)
				return "AWS_1003d" /*Complete 50 Fooligan Jobs for Dax.*/;
			else if (iParam1 == 4)
				return "AWS_1003c" /*Complete 20 Fooligan Jobs for Dax.*/;
			else if (iParam1 == 3)
				return "AWS_1003b" /*Complete 10 Fooligan Jobs for Dax.*/;
			else
				return "AWS_1003a" /*Complete 5 Fooligan Jobs for Dax.*/;
			break;
	
		case 122:
			if (iParam1 == 5)
				return "AWS_1004d" /*Source Supplies for the Acid Lab 50 times.*/;
			else if (iParam1 == 4)
				return "AWS_1004c" /*Source Supplies for the Acid Lab 20 times.*/;
			else if (iParam1 == 3)
				return "AWS_1004b" /*Source Supplies for the Acid Lab 10 times.*/;
			else
				return "AWS_1004a" /*Source Supplies for the Acid Lab 5 times.*/;
			break;
	
		case 123:
			if (iParam1 == 5)
				return "AWS_1005d" /*Raid and steal from 50 stash houses.*/;
			else if (iParam1 == 4)
				return "AWS_1005c" /*Raid and steal from 20 stash houses.*/;
			else if (iParam1 == 3)
				return "AWS_1005b" /*Raid and steal from 10 stash houses.*/;
			else
				return "AWS_1005a" /*Raid and steal from 5 stash houses.*/;
			break;
	
		case 124:
			if (iParam1 == 5)
				return "AWS_1006d" /*Collect 50 G's Caches around Los Santos and Blaine County.*/;
			else if (iParam1 == 4)
				return "AWS_1006c" /*Collect 20 G's Caches around Los Santos and Blaine County.*/;
			else if (iParam1 == 3)
				return "AWS_1006b" /*Collect 10 G's Caches around Los Santos and Blaine County.*/;
			else
				return "AWS_1006a" /*Collect 5 G's Caches around Los Santos and Blaine County.*/;
			break;
	
		case 125:
			if (iParam1 == 5)
				return "AWS_1007d" /*Return stolen cash to a shop 5 times.*/;
			else if (iParam1 == 4)
				return "AWS_1007c" /*Return stolen cash to a shop 3 times.*/;
			else if (iParam1 == 3)
				return "AWS_1007b" /*Return stolen cash to a shop 2 times.*/;
			else
				return "AWS_1007a" /*Return stolen cash to a shop once.*/;
			break;
	
		case 126:
			return "AWS_1008" /*Take out the hostile versions of yourself.*/;
	
		case 127:
			if (iParam1 == 5)
				return "AWS_1009d" /*Complete 50 fares during Taxi Work.*/;
			else if (iParam1 == 4)
				return "AWS_1009c" /*Complete 20 fares during Taxi Work.*/;
			else if (iParam1 == 3)
				return "AWS_1009b" /*Complete 10 fares during Taxi Work.*/;
			else
				return "AWS_1009a" /*Complete 5 fares during Taxi Work.*/;
			break;
	
		case 128:
			if (iParam1 == 5)
				return "AWS_1019d" /*Steal 50 vehicles as part of the Salvage Yard Robberies as leader.*/;
			else if (iParam1 == 4)
				return "AWS_1019c" /*Steal 20 vehicles as part of the Salvage Yard Robberies as leader.*/;
			else if (iParam1 == 3)
				return "AWS_1019b" /*Steal 10 vehicles as part of the Salvage Yard Robberies as leader.*/;
			else
				return "AWS_1019a" /*Steal 5 vehicles as part of the Salvage Yard Robberies as leader.*/;
			break;
	
		case 129:
			if (iParam1 == 5)
				return "AWS_1020d" /*Complete 50 Planning Works as part of Salvage Yard Robberies as leader.*/;
			else if (iParam1 == 4)
				return "AWS_1020c" /*Complete 20 Planning Works as part of Salvage Yard Robberies as leader.*/;
			else if (iParam1 == 3)
				return "AWS_1020b" /*Complete 10 Planning Works as part of Salvage Yard Robberies as leader.*/;
			else
				return "AWS_1020a" /*Complete 5 Planning Works as part of Salvage Yard Robberies as leader.*/;
			break;
	
		case 130:
			if (iParam1 == 5)
				return "AWS_1021d" /*Earn $5,000,000 from selling acquired vehicles as part of the Salvage Yard Robberies.*/;
			else if (iParam1 == 4)
				return "AWS_1021c" /*Earn $2,500,000 from selling acquired vehicles as part of the Salvage Yard Robberies.*/;
			else if (iParam1 == 3)
				return "AWS_1021b" /*Earn $1,000,000 from selling acquired vehicles as part of the Salvage Yard Robberies.*/;
			else
				return "AWS_1021a" /*Earn $250,000 from selling acquired vehicles as part of the Salvage Yard Robberies.*/;
			break;
	
		case 131:
			if (iParam1 == 5)
				return "AWS_1022d" /*Earn $5,000,000 from salvaging acquired vehicles as part of the Salvage Yard Robberies or Tow Truck Service.*/;
			else if (iParam1 == 4)
				return "AWS_1022c" /*Earn $2,500,000 from salvaging acquired vehicles as part of the Salvage Yard Robberies or Tow Truck Service.*/;
			else if (iParam1 == 3)
				return "AWS_1022b" /*Earn $1,000,000 from salvaging acquired vehicles as part of the Salvage Yard Robberies or Tow Truck Service.*/;
			else
				return "AWS_1022a" /*Earn $250,000 from salvaging acquired vehicles as part of the Salvage Yard Robberies or Tow Truck Service.*/;
			break;
	
		case 132:
			if (iParam1 == 5)
				return "AWS_1023d" /*Recover 50 vehicles as part of the Tow Truck Service.*/;
			else if (iParam1 == 4)
				return "AWS_1023c" /*Recover 20 vehicles as part of the Tow Truck Service.*/;
			else if (iParam1 == 3)
				return "AWS_1023b" /*Recover 10 vehicles as part of the Tow Truck Service.*/;
			else
				return "AWS_1023a" /*Recover 5 vehicles as part of the Tow Truck Service.*/;
			break;
	
		case 133:
			if (iParam1 == 5)
				return "AWS_1038d" /*Secure or eliminate 50 bounty targets.*/;
			else if (iParam1 == 4)
				return "AWS_1038c" /*Secure or eliminate 20 bounty targets.*/;
			else if (iParam1 == 3)
				return "AWS_1038b" /*Secure or eliminate 10 bounty targets.*/;
			else
				return "AWS_1038" /*Secure or eliminate 5 bounty targets.*/;
			break;
	
		case 134:
			if (iParam1 == 5)
				return "AWS_1039d" /*Secure 50 bounty targets alive.*/;
			else if (iParam1 == 4)
				return "AWS_1039c" /*Secure 20 bounty targets alive.*/;
			else if (iParam1 == 3)
				return "AWS_1039b" /*Secure 10 bounty targets alive.*/;
			else
				return "AWS_1039" /*Secure 5 bounty targets alive.*/;
			break;
	
		case 135:
			if (iParam1 == 5)
				return "AWS_1040d" /*Earn $5,000,000 from securing or eliminating bounty targets.*/;
			else if (iParam1 == 4)
				return "AWS_1040c" /*Earn $2,500,000 from securing or eliminating bounty targets.*/;
			else if (iParam1 == 3)
				return "AWS_1040b" /*Earn $1,000,000 from securing or eliminating bounty targets.*/;
			else
				return "AWS_1040" /*Earn $250,000 from securing or eliminating bounty targets.*/;
			break;
	
		case 136:
			if (iParam1 == 5)
				return "AWS_1041d" /*Earn $1,000,000 in additional income from the Bail Enforcement Agents.*/;
			else if (iParam1 == 4)
				return "AWS_1041c" /*Earn $750,000 in additional income from the Bail Enforcement Agents.*/;
			else if (iParam1 == 3)
				return "AWS_1041b" /*Earn $500,000 in additional income from the Bail Enforcement Agents.*/;
			else
				return "AWS_1041" /*Earn $250,000 in additional income from the Bail Enforcement Agents.*/;
			break;
	
		case 137:
			if (iParam1 == 5)
				return "AWS_1042d" /*Complete 50 Dispatch Works for Vincent.*/;
			else if (iParam1 == 4)
				return "AWS_1042c" /*Complete 20 Dispatch Works for Vincent.*/;
			else if (iParam1 == 3)
				return "AWS_1042b" /*Complete 10 Dispatch Works for Vincent.*/;
			else
				return "AWS_1042" /*Complete 5 Dispatch Works for Vincent.*/;
			break;
	
		case 138:
			if (iParam1 == 5)
				return "AWS_1043d" /*Make 50 deliveries for Pizza This...*/;
			else if (iParam1 == 4)
				return "AWS_1043c" /*Make 20 deliveries for Pizza This...*/;
			else if (iParam1 == 3)
				return "AWS_1043b" /*Make 10 deliveries for Pizza This...*/;
			else
				return "AWS_1043" /*Make 5 deliveries for Pizza This...*/;
			break;
	
		case 139:
			if (iParam1 == 5)
				return "AWS_1046d" /*Complete 20 bonus objectives in Assault on ATT-16.*/;
			else if (iParam1 == 4)
				return "AWS_1046c" /*Complete 10 bonus objectives in Assault on ATT-16.*/;
			else if (iParam1 == 3)
				return "AWS_1046b" /*Complete 5 bonus objectives in Assault on ATT-16.*/;
			else
				return "AWS_1046" /*Complete 3 bonus objectives in Assault on ATT-16.*/;
			break;
	
		case 140:
			if (iParam1 == 5)
				return "AWS_1047d" /*Steal 50 data drives during Assault on ATT-16.*/;
			else if (iParam1 == 4)
				return "AWS_1047c" /*Steal 20 data drives during Assault on ATT-16.*/;
			else if (iParam1 == 3)
				return "AWS_1047b" /*Steal 10 data drives during Assault on ATT-16.*/;
			else
				return "AWS_1047" /*Steal 5 data drives during Assault on ATT-16.*/;
			break;
	
		case 141:
			if (iParam1 == 5)
				return "AWS_1048d" /*Survive 15 waves in Ludendorff Cemetery Survival.*/;
			else if (iParam1 == 4)
				return "AWS_1048c" /*Survive 10 waves in Ludendorff Cemetery Survival.*/;
			else if (iParam1 == 3)
				return "AWS_1048b" /*Survive 7 waves in Ludendorff Cemetery Survival.*/;
			else
				return "AWS_1048" /*Survive 5 waves in Ludendorff Cemetery Survival.*/;
			break;
	
		case 142:
			if (iParam1 == 5)
				return "AWS_1055d" /*Complete 50 FIB Files.*/;
			else if (iParam1 == 4)
				return "AWS_1055c" /*Complete 20 FIB Files.*/;
			else if (iParam1 == 3)
				return "AWS_1055b" /*Complete 10 FIB Files.*/;
			else
				return "AWS_1055a" /*Complete 5 FIB Files.*/;
			break;
	
		case 143:
			if (iParam1 == 5)
				return "AWS_1056d" /*Complete 50 Planning Works as part of The FIB Files.*/;
			else if (iParam1 == 4)
				return "AWS_1056c" /*Complete 20 Planning Works as part of The FIB Files.*/;
			else if (iParam1 == 3)
				return "AWS_1056b" /*Complete 10 Planning Works as part of The FIB Files.*/;
			else
				return "AWS_1056a" /*Complete 5 Planning Works as part of The FIB Files.*/;
			break;
	
		case 144:
			if (iParam1 == 5)
				return "AWS_1057d" /*Earn $5,000,000 from The FIB Files.*/;
			else if (iParam1 == 4)
				return "AWS_1057c" /*Earn $2,500,000 from The FIB Files.*/;
			else if (iParam1 == 3)
				return "AWS_1057b" /*Earn $1,000,000 from The FIB Files.*/;
			else
				return "AWS_1057a" /*Earn $250,000 from The FIB Files.*/;
			break;
	
		case 145:
			if (iParam1 == 5)
				return "AWS_1058d" /*Earn $50,000 in additional income from the Garment Factory.*/;
			else if (iParam1 == 4)
				return "AWS_1058c" /*Earn $25,000 in additional income from the Garment Factory.*/;
			else if (iParam1 == 3)
				return "AWS_1058b" /*Earn $10,000 in additional income from the Garment Factory.*/;
			else
				return "AWS_1058a" /*Earn $5,000 in additional income from the Garment Factory.*/;
			break;
	
		case 146:
			if (iParam1 == 5)
				return "AWS_1062d" /*Survive 5 shark attacks.*/;
			else if (iParam1 == 4)
				return "AWS_1062c" /*Survive 3 shark attacks.*/;
			else if (iParam1 == 3)
				return "AWS_1062b" /*Survive 2 shark attacks.*/;
			else
				return "AWS_1062a" /*Survive 1 shark attack.*/;
			break;
	
		case 147:
			if (iParam1 == 5)
				return "AWS_1066d" /*Steal all additional equipment in a single playthrough of Oscar Guzman Flies Again.*/;
			else if (iParam1 == 4)
				return "AWS_1066c" /*Steal 5 pieces of additional equipment in a single playthrough of Oscar Guzman Flies Again.*/;
			else if (iParam1 == 3)
				return "AWS_1066b" /*Steal 3 pieces of additional equipment in a single playthrough of Oscar Guzman Flies Again.*/;
			else
				return "AWS_1066a" /*Steal 1 piece of additional equipment in a single playthrough of Oscar Guzman Flies Again.*/;
			break;
	
		case 149:
			if (iParam1 == 5)
				return "AWS_1069d" /*Complete 50 Arms Trafficking missions for Oscar.*/;
			else if (iParam1 == 4)
				return "AWS_1069c" /*Complete 25 Arms Trafficking missions for Oscar.*/;
			else if (iParam1 == 3)
				return "AWS_1069b" /*Complete 10 Arms Trafficking missions for Oscar.*/;
			else
				return "AWS_1069a" /*Complete 5 Arms Trafficking missions for Oscar.*/;
			break;
	
		case 150:
			if (iParam1 == 2)
				return "AWS_1070a" /*Distract 1 junkyard dog with dog food during Liquid Market.*/;
			else if (iParam1 == 3)
				return "AWS_1070b" /*Distract 2 junkyard dogs with dog food during Liquid Market.*/;
			else if (iParam1 == 4)
				return "AWS_1070c" /*Distract 3 junkyard dogs with dog food during Liquid Market.*/;
			else if (iParam1 == 5)
				return "AWS_1070d" /*Distract 4 junkyard dogs with dog food during Liquid Market.*/;
			else
				return "AWS_1070a" /*Distract 1 junkyard dog with dog food during Liquid Market.*/;
			break;
	
		case 151:
			if (iParam1 == 2)
				return "AWS_1071a" /*Reduce heat at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours 5 times.*/;
			else if (iParam1 == 3)
				return "AWS_1071b" /*Reduce heat at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours 10 times.*/;
			else if (iParam1 == 4)
				return "AWS_1071c" /*Reduce heat at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours 15 times.*/;
			else if (iParam1 == 5)
				return "AWS_1071d" /*Reduce heat at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours 25 times.*/;
			else
				return "AWS_1071a" /*Reduce heat at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours 5 times.*/;
			break;
	
		case 152:
			if (iParam1 == 2)
				return "AWS_1072a" /*Earn $250,000 completing jobs at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours.*/;
			else if (iParam1 == 3)
				return "AWS_1072b" /*Earn $500,000 completing jobs at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours.*/;
			else if (iParam1 == 4)
				return "AWS_1072c" /*Earn $1,000,000 completing jobs at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours.*/;
			else if (iParam1 == 5)
				return "AWS_1072d" /*Earn $2,000,000 completing jobs at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours.*/;
			else
				return "AWS_1072a" /*Earn $250,000 completing jobs at the Hands On Car Wash, Smoke on the Water, or Higgins Helitours.*/;
			break;
	
		case 153:
			if (iParam1 == 2)
				return "AWS_1073a" /*Collect $50,000 in laundered income from the safe inside the Hands On Car Wash.*/;
			else if (iParam1 == 3)
				return "AWS_1073b" /*Collect $100,000 in laundered income from the safe inside the Hands On Car Wash.*/;
			else if (iParam1 == 4)
				return "AWS_1073c" /*Collect $200,000 in laundered income from the safe inside the Hands On Car Wash.*/;
			else if (iParam1 == 5)
				return "AWS_1073d" /*Collect $500,000 in laundered income from the safe inside the Hands On Car Wash.*/;
			else
				return "AWS_1073a" /*Collect $50,000 in laundered income from the safe inside the Hands On Car Wash.*/;
			break;
	
		case 154:
			if (iParam1 == 2)
				return "AWS_1074a" /*Complete all deliveries for QuickiePharm 5 times.*/;
			else if (iParam1 == 3)
				return "AWS_1074b" /*Complete all deliveries for QuickiePharm 10 times.*/;
			else if (iParam1 == 4)
				return "AWS_1074c" /*Complete all deliveries for QuickiePharm 15 times.*/;
			else if (iParam1 == 5)
				return "AWS_1074d" /*Complete all deliveries for QuickiePharm 20 times.*/;
			else
				return "AWS_1074a" /*Complete all deliveries for QuickiePharm 5 times.*/;
			break;
	
		case 155:
			if (iParam1 == 2)
				return "AWS_1075a" /*Make 5 deliveries for Gruppe Sechs or Bobcat Security.*/;
			else if (iParam1 == 3)
				return "AWS_1075b" /*Make 10 deliveries for Gruppe Sechs or Bobcat Security.*/;
			else if (iParam1 == 4)
				return "AWS_1075c" /*Make 15 deliveries for Gruppe Sechs or Bobcat Security.*/;
			else if (iParam1 == 5)
				return "AWS_1075d" /*Make 20 deliveries for Gruppe Sechs or Bobcat Security.*/;
			else
				return "AWS_1075a" /*Make 5 deliveries for Gruppe Sechs or Bobcat Security.*/;
			break;
	
		case 156:
			if (iParam1 == 2)
				return "AWS_1076a" /*Survive 5 waves in the Cayo Perico Survival.*/;
			else if (iParam1 == 3)
				return "AWS_1076b" /*Survive 7 waves in the Cayo Perico Survival.*/;
			else if (iParam1 == 4)
				return "AWS_1076c" /*Survive 10 waves in the Cayo Perico Survival.*/;
			else if (iParam1 == 5)
				return "AWS_1076d" /*Survive 15 waves in the Cayo Perico Survival.*/;
			else
				return "AWS_1076a" /*Survive 5 waves in the Cayo Perico Survival.*/;
			break;
	
		case 157:
			if (iParam1 == 2)
				return "AWS_1077a" /*Perform a dancing Action while the undead DJ is active for 5 seconds.*/;
			else if (iParam1 == 3)
				return "AWS_1077b" /*Perform a dancing Action while the undead DJ is active for 10 seconds.*/;
			else if (iParam1 == 4)
				return "AWS_1077c" /*Perform a dancing Action while the undead DJ is active for 30 seconds.*/;
			else if (iParam1 == 5)
				return "AWS_1077d" /*Perform a dancing Action while the undead DJ is active for 60 seconds.*/;
			else
				return "AWS_1077a" /*Perform a dancing Action while the undead DJ is active for 5 seconds.*/;
			break;
	}

	return "";
}

char* func_185(int iParam0, int iParam1) // Position - 0x1F427 (128039)
{
	iParam1 == 9;

	switch (iParam0)
	{
		case 53:
			return "AWT_721";
	
		case 39:
			return "AWT_678";
	
		case 51:
			return "AWT_707";
	
		case 52:
			return "AWT_708";
	
		case 60:
			return "AWT_728";
	
		case 61:
			return "AWT_730";
	
		case 62:
			return "AWT_731";
	
		case 63:
			return "AWT_732";
	
		case 16:
			return "AWT_550";
	
		case 0:
			return "AWT_282";
	
		case 12:
			return "AWT_581";
	
		case 11:
			return "AWT_582";
	
		case 19:
			return "AWT_534";
	
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				return "AWT_509";
			else
				return "AWT_509";
			break;
	
		case 15:
			return "AWT_559";
	
		case 17:
			return "AWT_535";
	
		case 21:
			return "AWT_586";
	
		case 14:
			return "AWT_566";
	
		case 22:
			return "AWT_589";
	
		case 1:
			return "AWT_506";
	
		case 2:
			return "AWT_585";
	
		case 3:
			return "AWT_541";
	
		case 4:
			return "AWT_584";
	
		case 5:
			return "AWT_540";
	
		case 6:
			return "AWT_539";
	
		case 7:
			return "AWT_538";
	
		case 8:
			return "AWT_537";
	
		case 9:
			return "AWT_536";
	
		case 10:
			return "AWT_583";
	
		case 23:
			return "AWT_610";
	
		case 24:
			return "AWT_611";
	
		case 25:
			return "AWT_631";
	
		case 26:
			return "AWT_632";
	
		case 27:
			return "AWT_639";
	
		case 28:
			return "AWT_640";
	
		case 29:
			return "AWT_699";
	
		case 30:
			return "AWT_661";
	
		case 31:
			return "AWT_662";
	
		case 32:
			return "AWT_663";
	
		case 33:
			return "AWT_665";
	
		case 34:
			return "AWT_666";
	
		case 35:
			return "AWT_668";
	
		case 36:
			return "AWT_669";
	
		case 37:
			return "AWT_675";
	
		case 38:
			return "AWT_676";
	
		case 40:
			return "AWT_679";
	
		case 41:
			return "AWT_681";
	
		case 42:
			return "AWT_682";
	
		case 43:
			return "AWT_677";
	
		case 44:
			return "AWT_683";
	
		case 45:
			return "AWT_684";
	
		case 46:
			return "AWT_685";
	
		case 47:
			return "AWT_692";
	
		case 48:
			return "AWT_696";
	
		case 49:
			return "AWT_693";
	
		case 54:
			return "AWT_710";
	
		case 55:
			return "AWT_703";
	
		case 56:
			return "AWT_704";
	
		case 57:
			return "AWT_722";
	
		case 58:
			return "AWT_723";
	
		case 59:
			return "AWT_716";
	
		case 164:
			return "AWT_740";
	
		case 165:
			return "AWT_741";
	
		case 166:
			return "AWT_742";
	
		case 167:
			return "AWT_743";
	
		case 168:
			return "AWT_744";
	
		case 67:
			return "AWT_782";
	
		case 158:
			return "AWT_745";
	
		case 159:
			return "AWT_746";
	
		case 160:
			return "AWT_747";
	
		case 161:
			return "AWT_748";
	
		case 162:
			return "AWT_749";
	
		case 163:
			return "AWT_752";
	
		case 169:
			return "AWT_755";
	
		case 170:
			return "AWT_757";
	
		case 171:
			return "AWT_758";
	
		case 172:
			return "AWT_759";
	
		case 173:
			return "AWT_760";
	
		case 174:
			return "AWT_761";
	
		case 175:
			return "AWT_762";
	
		case 176:
			return "AWT_764";
	
		case 177:
			return "AWT_788";
	
		case 178:
			return "AWT_789";
	
		case 179:
			return "AWT_790";
	
		case 180:
			return "AWT_791";
	
		case 181:
			return "AWT_792";
	
		case 70:
			return "AWT_817";
	
		case 71:
			return "AWT_818";
	
		case 72:
			return "AWT_821";
	
		case 73:
			return "AWT_822";
	
		case 74:
			return "AWT_823";
	
		case 75:
			return "AWT_824";
	
		case 76:
			return "AWT_825";
	
		case 77:
			return "AWT_826";
	
		case 78:
			return "AWT_827";
	
		case 79:
			return "AWT_828";
	
		case 80:
			return "AWT_829";
	
		case 81:
			return "AWT_830";
	
		case 82:
			return "AWT_831";
	
		case 83:
			return "AWT_832";
	
		case 84:
			return "AWT_833";
	
		case 85:
			return "AWT_834";
	
		case 86:
			return "AWT_835";
	
		case 87:
			return "AWT_845" /*High Roller*/;
	
		case 88:
			return "AWT_847" /*Preparation*/;
	
		case 89:
			return "AWT_848" /*Asleep On The Job*/;
	
		case 90:
			return "AWT_849" /*Daily Cash Grab*/;
	
		case 91:
			return "AWT_850" /*Big Brother*/;
	
		case 92:
			return "AWT_851" /*Sharpshooter*/;
	
		case 93:
			return "AWT_852" /*Race Champion*/;
	
		case 94:
			return "AWT_853" /*Platinum Sword*/;
	
		case 95:
			return "AWT_854" /*Coin Purse*/;
	
		case 96:
			return "AWT_855" /*Astrochimp*/;
	
		case 97:
			return "AWT_856" /*Masterful*/;
	
		case 99:
			return "AWT_936" /*Sun Set*/;
	
		case 100:
			return "AWT_937" /*Treasure Hunter*/;
	
		case 101:
			return "AWT_938" /*Wreck Diving*/;
	
		case 102:
			return "AWT_939" /*Keinemusik*/;
	
		case 103:
			return "AWT_940" /*Palms Trax*/;
	
		case 104:
			return "AWT_941" /*Moodymann*/;
	
		case 105:
			return "AWT_942" /*Fill Your Bags*/;
	
		case 106:
			return "AWT_943" /*Prepped*/;
	
		case 107:
			return "AWT_945" /*LS Car Meet Member*/;
	
		case 108:
			return "AWT_967" /*Sprint Racer*/;
	
		case 109:
			return "AWT_946" /*Street Racer*/;
	
		case 110:
			return "AWT_947" /*Pursuit Racer*/;
	
		case 112:
			return "AWT_949" /*Special Delivery*/;
	
		case 114:
			return "AWT_952" /*Groundwork*/;
	
		case 115:
			return "AWT_961" /*Contractual Criminal*/;
	
		case 116:
			return "AWT_962" /*Faces Of Death*/;
	
		case 111:
			return "AWT_948" /*Tried and Tested*/;
	
		case 113:
			return "AWT_950" /*Car Exporter*/;
	
		case 117:
			return "AWT_978" /*Contractual Obligations*/;
	
		case 118:
			return "AWT_979" /*Cold Caller*/;
	
		case 119:
			return "AWT_983" /*Producer*/;
	
		case 120:
			return "AWT_1002" /*Run Rabbit Run*/;
	
		case 121:
			return "AWT_1003" /*Call Me*/;
	
		case 122:
			return "AWT_1004" /*Chemical Attraction*/;
	
		case 123:
			return "AWT_1005" /*Stashes To Stashes*/;
	
		case 124:
			return "AWT_1006" /*Here Comes The Drop*/;
	
		case 125:
			return "AWT_1007" /*Good Samaritan*/;
	
		case 126:
			return "AWT_1008" /*Your Own Worst Enemy*/;
	
		case 127:
			return "AWT_1009" /*Taxi Driver*/;
	
		case 128:
			return "AWT_1019" /*New Car Smell*/;
	
		case 129:
			return "AWT_1020" /*Serious Prepper*/;
	
		case 130:
			return "AWT_1021" /*Wheeler Dealer*/;
	
		case 131:
			return "AWT_1022" /*Second Hand Parts*/;
	
		case 132:
			return "AWT_1023" /*Towed Away*/;
	
		case 133:
			return "AWT_1038" /*Bountiful*/;
	
		case 134:
			return "AWT_1039" /*Still Breathing*/;
	
		case 135:
			return "AWT_1040" /*Cash On Delivery*/;
	
		case 136:
			return "AWT_1041" /*Step Two: Profit*/;
	
		case 137:
			return "AWT_1042" /*Dispatched*/;
	
		case 138:
			return "AWT_1043" /*Pizza This...*/;
	
		case 139:
			return "AWT_1046" /*Happy Landings*/;
	
		case 140:
			return "AWT_1047" /*Hard Drive Hoarder*/;
	
		case 141:
			return "AWT_1048" /*Death Trap*/;
	
		case 142:
			return "AWT_1055" /*Darnell Bros Inc.*/;
	
		case 143:
			return "AWT_1056" /*Get Ready*/;
	
		case 144:
			return "AWT_1057" /*Cash In Hand*/;
	
		case 145:
			return "AWT_1058" /*Brotherly Love*/;
	
		case 146:
			return "AWT_1062" /*Not Out Of Your Depth*/;
	
		case 147:
			return "AWT_1066" /*Fully Stocked*/;
	
		case 149:
			return "AWT_1069" /*Arms In Arms*/;
	
		case 150:
			return "AWT_1070" /*Dog's Dinner*/;
	
		case 151:
			return "AWT_1071" /*Licensed Professional*/;
	
		case 152:
			return "AWT_1072" /*Cooking The Books*/;
	
		case 153:
			return "AWT_1073" /*Squeaky Clean*/;
	
		case 154:
			return "AWT_1074" /*QuickiePharm*/;
	
		case 155:
			return "AWT_1075" /*Safeguard*/;
	
		case 156:
			return "AWT_1076" /*Sunburned Survivor*/;
	
		case 157:
			return "AWT_1077" /*Dancing With Death*/;
	}

	return "";
}

int func_186(int iParam0, int iParam1) // Position - 0x1FD50 (130384)
{
	if (func_145(func_116(iParam0, -1), func_118(iParam0, 5, iParam1)))
		return 5;

	if (func_145(func_116(iParam0, -1), func_118(iParam0, 4, iParam1)))
		return 5;

	if (func_145(func_116(iParam0, -1), func_118(iParam0, 3, iParam1)))
		return 4;

	if (func_145(func_116(iParam0, -1), func_118(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

int func_187(int iParam0, int iParam1) // Position - 0x1FDC5 (130501)
{
	if (!func_145(func_116(iParam0, -1), func_118(iParam0, 2, iParam1)))
		return 0;

	if (!func_145(func_116(iParam0, -1), func_118(iParam0, 3, iParam1)))
		return 2;

	if (!func_145(func_116(iParam0, -1), func_118(iParam0, 4, iParam1)))
		return 3;

	if (!func_145(func_116(iParam0, -1), func_118(iParam0, 5, iParam1)))
		return 4;

	return 5;
}

BOOL func_188() // Position - 0x1FE3E (130622)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_189() // Position - 0x1FE54 (130644)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_190() // Position - 0x1FE6A (130666)
{
	return *Global_262145.f_33641;
}

void func_191(var uParam0, var uParam1) // Position - 0x1FE7C (130684)
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 12;
	num2 = uParam0->f_455;

	switch (uParam1->f_5)
	{
		case 0:
			num2 = num2;
			break;
	
		default:
			if (uParam1->f_5 < iLocal_109)
				num2 = num2 + (num * uParam1->f_5);
			else
				num2 = num2 + (num * uParam1->f_5);
			break;
	}

	if (uParam0->f_455 > -1 && uParam0->f_455 < 12)
	{
		func_201(Global_1672212.f_473[uParam0->f_455]);
		func_193(Global_1672212.f_486[uParam0->f_455]);
	}

	num3 = uParam1->f_5 + 1;
	num4 = iLocal_109 + 1;
	func_192(0, num3, num4, "HUD_PAGE" /*Page ~1~ of ~1~*/, false);
	return;
}

void func_192(int iParam0, int iParam1, int iParam2, const char* sParam3, BOOL bParam4) // Position - 0x1FF23 (130851)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_22("");
	}

	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_193(int iParam0) // Position - 0x1FF80 (130944)
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_200(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_200(iParam0))
		{
			offset = func_199(iParam0);
		
			if (func_196(iParam0))
				flag = true;
		}
	
		if (!IS_BIT_SET(Global_1672212.f_471, offset))
			MISC::SET_BIT(&(Global_1672212.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1672212.f_472, offset))
				MISC::SET_BIT(&(Global_1672212.f_472), offset);
	}

	if (func_195(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_195(iParam0))
		{
			offset2 = func_194(iParam0);
		
			if (func_196(iParam0))
				flag2 = true;
		}
	
		if (!IS_BIT_SET(Global_1672212.f_499, offset2))
			MISC::SET_BIT(&(Global_1672212.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1672212.f_500, offset2))
				MISC::SET_BIT(&(Global_1672212.f_500), offset2);
	}

	return;
}

int func_194(int iParam0) // Position - 0x20059 (131161)
{
	switch (iParam0)
	{
		case 120:
			return 13;
	
		case 121:
			return 14;
	
		case 122:
			return 18;
	
		case 123:
			return 19;
	
		case 124:
			return 20;
	
		case 125:
			return 21;
	
		case 126:
			return 22;
	
		case 127:
			return 23;
	}

	return 0;
}

BOOL func_195(int iParam0) // Position - 0x200D9 (131289)
{
	switch (iParam0)
	{
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return true;
	}

	return false;
}

BOOL func_196(int iParam0) // Position - 0x20120 (131360)
{
	int num;
	int num2;

	num = func_197(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_121(num2));
}

int func_197(int iParam0) // Position - 0x2013D (131389)
{
	switch (func_198(iParam0))
	{
		case 758:
			return func_115(758, -1);
	
		case 759:
			return func_115(759, -1);
	
		case 760:
			return func_115(760, -1);
	
		case 761:
			return func_115(761, -1);
	
		case 8735:
			return func_115(8735, -1);
	
		case 12315:
			return func_115(12315, -1);
	
		default:
		
	}

	return 0;
}

int func_198(int iParam0) // Position - 0x201B7 (131511)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_124(num);

	switch (num2)
	{
		case 0:
			return 758;
	
		case 1:
			return 759;
	
		case 2:
			return 760;
	
		case 3:
			return 761;
	
		case 4:
			return 8735;
	
		case 5:
			return 12315;
	}

	return 17296;
}

int func_199(int iParam0) // Position - 0x2022F (131631)
{
	switch (iParam0)
	{
		case 117:
			return 13;
	
		case 118:
			return 14;
	
		case 119:
			return 18;
	}

	return 0;
}

BOOL func_200(int iParam0) // Position - 0x20269 (131689)
{
	switch (iParam0)
	{
		case 117:
		case 118:
		case 119:
			return true;
	}

	return false;
}

void func_201(int iParam0) // Position - 0x20292 (131730)
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_205(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_205(iParam0))
		{
			offset = func_204(iParam0);
			flag = func_92(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1672212.f_471, offset))
			MISC::SET_BIT(&(Global_1672212.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1672212.f_472, offset))
				MISC::SET_BIT(&(Global_1672212.f_472), offset);
	}

	if (func_203(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_203(iParam0))
		{
			offset2 = func_202(iParam0);
			flag2 = func_92(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1672212.f_499, offset2))
			MISC::SET_BIT(&(Global_1672212.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1672212.f_500, offset2))
				MISC::SET_BIT(&(Global_1672212.f_500), offset2);
	}

	return;
}

int func_202(int iParam0) // Position - 0x20362 (131938)
{
	switch (iParam0)
	{
		case 143:
			return 0;
	
		case 144:
			return 1;
	
		case 145:
			return 2;
	
		case 146:
			return 3;
	
		case 147:
			return 4;
	
		case 148:
			return 5;
	
		case 149:
			return 6;
	
		case 150:
			return 7;
	
		case 151:
			return 8;
	
		case 152:
			return 9;
	
		case 153:
			return 10;
	
		case 154:
			return 11;
	
		case 155:
			return 12;
	
		case 156:
			return 15;
	
		case 157:
			return 16;
	
		case 158:
			return 17;
	}

	return 0;
}

BOOL func_203(int iParam0) // Position - 0x2044A (132170)
{
	switch (iParam0)
	{
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return true;
	}

	return false;
}

int func_204(int iParam0) // Position - 0x204C1 (132289)
{
	switch (iParam0)
	{
		case 127:
			return 0;
	
		case 128:
			return 1;
	
		case 129:
			return 2;
	
		case 130:
			return 3;
	
		case 131:
			return 4;
	
		case 132:
			return 5;
	
		case 133:
			return 6;
	
		case 134:
			return 7;
	
		case 135:
			return 8;
	
		case 136:
			return 9;
	
		case 140:
			return 10;
	
		case 141:
			return 11;
	
		case 142:
			return 12;
	
		case 137:
			return 15;
	
		case 138:
			return 16;
	
		case 139:
			return 17;
	}

	return 0;
}

BOOL func_205(int iParam0) // Position - 0x205A9 (132521)
{
	switch (iParam0)
	{
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 142:
		case 141:
			return true;
	}

	return false;
}

int func_206(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x20620 (132640)
{
	int num;
	int i;

	num = *uParam0 + (*uParam1 * 4);

	switch (iParam3)
	{
		case 188:
			if (uParam2 == iLocal_109)
			{
				if (num < 0 || num > iLocal_110 - 1)
				{
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num < 0 || num > iLocal_110 - 1)
						{
							*uParam1 = 3 - i;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
			}
			break;
	
		case 187:
			if (uParam2 == iLocal_109)
			{
				if (num < 0 || num > iLocal_110 - 1)
				{
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num < 0 || num > iLocal_110 - 1)
						{
							*uParam1 = i;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
			}
			break;
	
		case 189:
			break;
	
		case 190:
			if (uParam2 == iLocal_109)
			{
				if (*uParam0 == 0)
				{
					num = *uParam0 + (*uParam1 * 4);
				
					for (i = 0; i <= 3; i = i + 1)
					{
						if (num > iLocal_110 - 1)
						{
							*uParam1 = *uParam1 - 1;
							num = *uParam0 + (*uParam1 * 4);
						}
						else
						{
							i = 3;
						}
					}
				}
				else if (num > iLocal_110 - 1)
				{
					if (*uParam0 > 0)
						*uParam0 = *uParam0 - 1;
					else
						*uParam0 = 0;
				
					num = *uParam0 + (*uParam1 * 4);
				}
			}
			break;
	}

	return num;
}

void func_207(var uParam0, var uParam1) // Position - 0x2078A (133002)
{
	if (uParam1->f_5 > iLocal_109)
	{
		func_216(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}

	return;
}

void func_208() // Position - 0x207AB (133035)
{
	func_192(0, -1, -1, 0, false);
	return;
}

void func_209() // Position - 0x207BC (133052)
{
	func_210();
	func_192(0, -1, -1, 0, false);
	return;
}

void func_210() // Position - 0x207D1 (133073)
{
	func_211(false);
	return;
}

void func_211(BOOL bParam0) // Position - 0x207DE (133086)
{
	if (bParam0)
		func_212(0, 3, 0, 2, 0, false);
	else
		func_212(0, 2, 0, 2, 1, false);

	return;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x20802 (133122)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_213(var uParam0) // Position - 0x20845 (133189)
{
	uParam0->f_463 = 1;
	return;
}

void func_214(var uParam0) // Position - 0x20853 (133203)
{
	uParam0->f_462 = 1;
	return;
}

void func_215(int iParam0, var uParam1) // Position - 0x20861 (133217)
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
	return;
}

void func_216(var uParam0) // Position - 0x20877 (133239)
{
	func_217(uParam0);
	uParam0->f_460 = 1;
	return;
}

void func_217(var uParam0) // Position - 0x2088B (133259)
{
	var unk;

	unk.f_1 = 12;
	unk.f_14 = 12;
	unk.f_111 = 12;
	unk.f_208 = 12;
	unk.f_221 = 12;
	unk.f_234 = 12;
	unk.f_331 = 12;
	unk.f_428 = 12;
	unk.f_441 = 12;
	unk.f_473 = 12;
	unk.f_486 = 12;
	*uParam0 = { unk };
	return;
}

void func_218(var uParam0) // Position - 0x208F4 (133364)
{
	uParam0->f_590 = 1;
	return;
}

void func_219(int iParam0, var uParam1) // Position - 0x20902 (133378)
{
	uParam1->f_587 = iParam0;
	return;
}

void func_220(var uParam0) // Position - 0x20911 (133393)
{
	func_221(uParam0);
	uParam0->f_589 = 1;
	return;
}

void func_221(var uParam0) // Position - 0x20925 (133413)
{
	var unk;

	unk.f_1 = 25;
	unk.f_27 = 25;
	unk.f_428 = 25;
	unk.f_454 = 25;
	unk.f_480 = 25;
	unk.f_506 = 25;
	unk.f_532 = 25;
	unk.f_558 = 25;
	*uParam0 = { unk };
	return;
}

