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

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
		STATS::PLAYSTATS_AWARD_NAV(Global_1667211.f_471, Global_1667211.f_472, Global_1667211.f_499, Global_1667211.f_500);
		Global_1667211.f_471 = 0;
		Global_1667211.f_472 = 0;
		Global_1667211.f_499 = 0;
		Global_1667211.f_500 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	num = 0;
	num2 = 1;
	Global_1666627.f_1 = 0;
	Global_1666627.f_3 = 0;
	Global_1666627.f_5 = 0;
	Global_1666627.f_7 = 0;
	Global_1666627.f_6 = 0;
	func_157(&Global_1668188);
	func_156(0, &Global_1668188);
	func_155(&Global_1668188);
	func_153(&Global_1667211);
	func_152(-1, &Global_1667211);
	func_151(&Global_1667211);
	func_150(&Global_1667211);
	func_146();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);

	switch (iScriptParam_0)
	{
		case 3:
			while (num == 0)
			{
				SYSTEM::WAIT(0);
			
				if (num2 == 1)
				{
					if (num3 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1666627.f_7 = 0;
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
			
				if (Global_1667211.f_469 == 0 && Global_1667211.f_470 == 0)
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
							func_156(Global_1666627.f_6, &Global_1668188);
							func_155(&Global_1668188);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_145();
						}
						else
						{
							switch (Global_1666627.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1666627.f_7 = 1;
									func_144(&Global_1667211, &Global_1666627);
									func_152(func_143(&(Global_1666627.f_1), &(Global_1666627.f_3), Global_1666627.f_5, 188), &Global_1667211);
									func_151(&Global_1667211);
									func_150(&Global_1667211);
									func_128(&Global_1667211, &Global_1666627);
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
						switch (Global_1666627.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1666627.f_1 = 0;
								Global_1666627.f_3 = 0;
								func_156(-1, &Global_1668188);
								func_155(&Global_1668188);
								func_145();
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
								func_152(-1, &Global_1667211);
								func_151(&Global_1667211);
								func_150(&Global_1667211);
								func_145();
								Global_1666627.f_7 = 0;
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
			
				func_15(&Global_1666627);
			
				if (num2 == 1)
					func_2(&Global_1667211, &Global_1666627, &uLocal_111);
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
	STATS::PLAYSTATS_AWARD_NAV(Global_1667211.f_471, Global_1667211.f_472, Global_1667211.f_499, Global_1667211.f_500);
	Global_1667211.f_471 = 0;
	Global_1667211.f_472 = 0;
	Global_1667211.f_499 = 0;
	Global_1667211.f_500 = 0;

	while (true)
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x539 Hash - 0xC95075F2 ^0x4BBDF52A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_2(var uParam0, var uParam1, var uParam2) // Position - 0x552 Hash - 0xD16A2E1D ^0x397A8E4E
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

	if (!_STOPWATCH_IS_INITIALIZED(uParam2) || _STOPWATCH_IS_INITIALIZED(uParam2) && _STOPWATCH_HAS_TIME_PASSED(uParam2, 250, false))
		flag = true;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || func_12(187, &(Global_1668667.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		_STOPWATCH_INITIALIZE(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || func_12(188, &(Global_1668667.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		_STOPWATCH_INITIALIZE(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || func_12(189, &(Global_1668667.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		_STOPWATCH_INITIALIZE(uParam2, false, false);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || func_12(190, &(Global_1668667.f_1060), 1) && flag)
	{
		_STOPWATCH_DESTROY(uParam2);
		_STOPWATCH_INITIALIZE(uParam2, false, false);
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
				else if (uParam1->f_6 > 19)
				{
					uParam1->f_6 = 0;
				}
			
				switch (func_6(*uParam1, false))
				{
					case 9:
						if (uParam1->f_6 < 0)
							uParam1->f_6 = 19;
						break;
				}
			
				func_156(uParam1->f_6, &Global_1668188);
				func_155(&Global_1668188);
				uParam0->f_469 = 1;
				_STOPWATCH_RESET(&(uParam0->f_465), false, false);
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
			
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
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
						if (uParam1->f_6 > 19)
							uParam1->f_6 = 0;
						break;
				}
			
				func_156(uParam1->f_6, &Global_1668188);
				func_155(&Global_1668188);
				uParam0->f_469 = 1;
				_STOPWATCH_RESET(&(uParam0->f_465), false, false);
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = uParam1->f_3 + 1;
			
				if (uParam1->f_3 > 2)
					uParam1->f_3 = 0;
			
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
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
						func_153(uParam0);
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
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
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
						func_153(uParam0);
						func_1();
					}
				
					uParam1->f_1 = 0;
					uParam1->f_5 = uParam1->f_5 + 1;
				
					if (uParam1->f_5 > iLocal_109)
						uParam1->f_5 = 0;
				}
			
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
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
						Global_1666627.f_1 = num3 % 4;
						Global_1666627.f_3 = num3 / 4;
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
					func_153(uParam0);
					func_144(uParam0, uParam1);
					func_152(-1, uParam0);
					func_151(uParam0);
					func_150(uParam0);
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
						func_145();
						uParam0->f_470 = 1;
					}
					break;
			}
		}
	}

	return;
}

void func_3(BOOL bParam0) // Position - 0xB9D Hash - 0xE0A64B89 ^0xA7F8BA7
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
	return;
}

BOOL func_4(var uParam0, int iParam1, BOOL bParam2) // Position - 0xBAD Hash - 0xE7AE0A5 ^0x8D771ED3
{
	if (iParam1 == -1)
		return true;

	_STOPWATCH_INITIALIZE(uParam0, bParam2, false);

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

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xC17 Hash - 0x6A4AB354 ^0xD9372BF4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

int func_6(int iParam0, BOOL bParam1) // Position - 0xC54 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_7();

	if (Global_1575063[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_7() // Position - 0xC95 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int func_8() // Position - 0xCA1 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32949;
}

int func_9() // Position - 0xCAC Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0xCB7 Hash - 0x6F79B86B ^0x7B76DD66
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xCFC Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_12(int iParam0, var uParam1, int iParam2) // Position - 0xD09 Hash - 0x588FA52C ^0x8FF06169
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

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0xE6C Hash - 0x154EA353 ^0xBFA672B0
{
	if (millis == -1)
		return 1;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return 1;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return 1;

	return 0;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xECA Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_15(var uParam0) // Position - 0xED6 Hash - 0x5CB22580 ^0x8C9A0ABD
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
					if (!Global_262145.f_9090)
					{
						iLocal_109 = 30;
						iLocal_110 = 4;
					}
					else
					{
						iLocal_109 = 29;
						iLocal_110 = 8;
					}
				
					num = 0;
				
					if (!Global_262145.f_29219)
						num = num + 1;
				
					if (Global_262145.f_24286)
						num = num + 1;
				
					if (Global_262145.f_24287)
						num = num + 1;
				
					if (Global_262145.f_24285)
						num = num + 1;
				
					if (!*Global_262145.f_33343)
						num = num + 1;
				
					if (!*Global_262145.f_33344)
						num = num + 1;
				
					if (!*Global_262145.f_33345)
						num = num + 1;
				
					if (!*Global_262145.f_33346)
						num = num + 6;
				
					if (!*Global_262145.f_33347)
						num = num + 2;
				
					if (!func_127())
						num = num + 1;
				
					if (!Global_262145.f_30301)
						iLocal_110 = iLocal_110 - 5;
				
					if (Global_262145.f_30358[0] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_30358[6] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34966)
						num = num + 1;
				
					if (!*Global_262145.f_34967)
						num = num + 1;
				
					if (!*Global_262145.f_34968)
						num = num + 1;
				
					if (!*Global_262145.f_34969)
						num = num + 1;
				
					if (!*Global_262145.f_34970)
						num = num + 1;
				
					if (!*Global_262145.f_34971)
						num = num + 1;
				
					if (!*Global_262145.f_34972)
						num = num + 1;
				
					if (!*Global_262145.f_34973)
						num = num + 1;
				
					if (!*Global_262145.f_35192)
						num = num + 1;
				
					if (!*Global_262145.f_35193)
						num = num + 1;
				
					if (!*Global_262145.f_35496)
						num = num + 1;
				
					if (!*Global_262145.f_35495)
						num = num + 1;
				
					if (!*Global_262145.f_35497)
						num = num + 4;
				
					if (!*Global_262145.f_35493)
						num = num + 2;
				
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
					if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
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
				
					if (Global_262145.f_23837 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23838 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23839 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23840 == false)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_23837 == false || Global_262145.f_23839 == false || Global_262145.f_23838 == false || Global_262145.f_23840 == false)
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
				
					if (!Global_262145.f_29219)
						num = num + 1;
				
					if (Global_262145.f_24286)
					{
						num = num + 1;
						num = num + 1;
					}
				
					if (Global_262145.f_24287)
					{
						num = num + 1;
						num = num + 1;
					}
				
					if (Global_262145.f_24285)
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
				
					if (!Global_262145.f_30301)
						iLocal_110 = iLocal_110 - 5;
				
					if (Global_262145.f_30358[0] == 0f)
						iLocal_110 = iLocal_110 - 1;
				
					if (Global_262145.f_30358[6] == 0f)
						iLocal_110 = iLocal_110 - 1;
					break;
			
				case 15:
					iLocal_109 = 1;
					iLocal_110 = 7;
					break;
			
				case 16:
					iLocal_109 = 1;
					iLocal_110 = 12;
				
					if (!*Global_262145.f_33343)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33344)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33345)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_33346)
						iLocal_110 = iLocal_110 - 6;
				
					if (!*Global_262145.f_33347)
						iLocal_110 = iLocal_110 - 2;
				
					if (!func_127())
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
				
					if (!*Global_262145.f_34966)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34967)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34968)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34969)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34970)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34971)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34972)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_34973)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35192)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35193)
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
				
					if (!*Global_262145.f_35496)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35495)
						iLocal_110 = iLocal_110 - 1;
				
					if (!*Global_262145.f_35497)
						iLocal_110 = iLocal_110 - 4;
				
					if (!*Global_262145.f_35493)
						iLocal_110 = iLocal_110 - 2;
				
					if (iLocal_110 < 1)
					{
						iLocal_109 = iLocal_109 - 1;
						iLocal_110 = iLocal_110 + 12;
					}
					break;
			
				case 19:
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
							func_118(9, 8, num2, &Global_1667211);
							func_118(1, 8, num2, &Global_1667211);
							func_118(4, 8, num2, &Global_1667211);
							func_118(5, 8, num2, &Global_1667211);
							func_118(2, 8, num2, &Global_1667211);
							func_118(8, 8, num2, &Global_1667211);
							func_118(7, 8, num2, &Global_1667211);
							func_118(3, 8, num2, &Global_1667211);
							func_118(6, 8, num2, &Global_1667211);
							func_118(10, 8, num2, &Global_1667211);
							func_118(19, 8, num2, &Global_1667211);
							func_118(24, 8, num2, &Global_1667211);
							break;
					
						case 1:
							func_118(40, 8, num2, &Global_1667211);
							func_118(41, 8, num2, &Global_1667211);
							func_118(42, 8, num2, &Global_1667211);
							func_118(21, 8, num2, &Global_1667211);
							func_118(58, 8, num2, &Global_1667211);
							func_118(57, 8, num2, &Global_1667211);
							func_118(37, 8, num2, &Global_1667211);
							func_104(20, 8, num2, &Global_1667211);
							func_118(51, 8, num2, &Global_1667211);
							func_118(52, 8, num2, &Global_1667211);
							func_118(54, 8, num2, &Global_1667211);
							func_104(14, 8, num2, &Global_1667211);
							break;
					
						case 2:
							func_104(15, 8, num2, &Global_1667211);
							func_104(16, 8, num2, &Global_1667211);
							func_118(29, 8, num2, &Global_1667211);
							func_118(28, 8, num2, &Global_1667211);
							func_118(47, 8, num2, &Global_1667211);
							func_104(6, 8, num2, &Global_1667211);
							func_104(7, 8, num2, &Global_1667211);
							func_118(30, 8, num2, &Global_1667211);
							func_104(2, 8, num2, &Global_1667211);
							func_118(36, 8, num2, &Global_1667211);
							func_118(49, 8, num2, &Global_1667211);
							func_118(15, 8, num2, &Global_1667211);
							break;
					
						case 3:
							func_118(60, 8, num2, &Global_1667211);
							func_118(19, 8, num2, &Global_1667211);
							func_118(53, 8, num2, &Global_1667211);
							func_118(12, 8, num2, &Global_1667211);
							func_118(11, 8, num2, &Global_1667211);
							func_118(14, 8, num2, &Global_1667211);
							break;
					
						case 4:
							func_118(10, 8, num2, &Global_1667211);
							func_118(17, 8, num2, &Global_1667211);
							func_118(61, 8, num2, &Global_1667211);
							func_118(0, 8, num2, &Global_1667211);
							func_118(16, 8, num2, &Global_1667211);
							func_104(13, 8, num2, &Global_1667211);
							func_118(20, 8, num2, &Global_1667211);
							func_118(62, 8, num2, &Global_1667211);
							func_118(63, 8, num2, &Global_1667211);
							func_104(23, 8, num2, &Global_1667211);
							break;
					
						case 5:
							func_118(9, 8, num2, &Global_1667211);
							func_118(56, 8, num2, &Global_1667211);
							func_118(55, 8, num2, &Global_1667211);
							func_118(45, 8, num2, &Global_1667211);
							func_118(43, 8, num2, &Global_1667211);
							func_118(46, 8, num2, &Global_1667211);
							func_118(44, 8, num2, &Global_1667211);
							func_104(22, 8, num2, &Global_1667211);
							func_104(17, 8, num2, &Global_1667211);
							func_104(18, 8, num2, &Global_1667211);
							func_118(59, 8, num2, &Global_1667211);
							func_118(1, 8, num2, &Global_1667211);
							break;
					
						case 6:
							func_118(142, 8, num2, &Global_1667211);
							func_88(12, 8, num2, &Global_1667211);
							func_88(13, 8, num2, &Global_1667211);
							func_88(14, 8, num2, &Global_1667211);
							func_88(15, 8, num2, &Global_1667211);
							func_88(16, 8, num2, &Global_1667211);
							func_118(143, 8, num2, &Global_1667211);
							func_88(17, 8, num2, &Global_1667211);
							func_88(18, 8, num2, &Global_1667211);
							func_88(19, 8, num2, &Global_1667211);
							func_118(147, 8, num2, &Global_1667211);
							func_104(184, 8, num2, &Global_1667211);
							break;
					
						case 7:
							if (!Global_1667211.f_1[0])
							{
								func_88(1, 8, num2, &Global_1667211);
								func_88(2, 8, num2, &Global_1667211);
								func_88(6, 8, num2, &Global_1667211);
								func_88(3, 8, num2, &Global_1667211);
								func_88(7, 8, num2, &Global_1667211);
								func_88(8, 8, num2, &Global_1667211);
								func_88(4, 8, num2, &Global_1667211);
								func_88(9, 8, num2, &Global_1667211);
								func_88(10, 8, num2, &Global_1667211);
								func_88(5, 8, num2, &Global_1667211);
								func_88(11, 8, num2, &Global_1667211);
							}
							break;
					
						case 8:
							if (!Global_1667211.f_1[0])
							{
								func_118(165, 8, num2, &Global_1667211);
								func_104(189, 8, num2, &Global_1667211);
								func_104(190, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23837 == true)
									func_118(161, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23839 == true)
									func_118(162, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23838 == true)
									func_118(163, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23840 == true)
									func_118(164, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23837 == true && Global_262145.f_23839 == true && Global_262145.f_23838 == true && Global_262145.f_23840 == true)
									func_104(191, 8, num2, &Global_1667211);
							}
							break;
					
						case 9:
							if (!Global_1667211.f_1[0])
							{
								func_118(86, 8, num2, &Global_1667211);
								func_118(85, 8, num2, &Global_1667211);
								func_118(84, 8, num2, &Global_1667211);
								func_118(83, 8, num2, &Global_1667211);
								func_118(82, 8, num2, &Global_1667211);
								func_118(81, 8, num2, &Global_1667211);
								func_118(80, 8, num2, &Global_1667211);
								func_118(79, 8, num2, &Global_1667211);
								func_118(78, 8, num2, &Global_1667211);
								func_118(77, 8, num2, &Global_1667211);
								func_118(76, 8, num2, &Global_1667211);
								func_118(75, 8, num2, &Global_1667211);
							}
							break;
					
						case 10:
							if (!Global_1667211.f_1[0])
							{
								func_104(53, 8, num2, &Global_1667211);
								func_104(54, 8, num2, &Global_1667211);
								func_104(55, 8, num2, &Global_1667211);
								func_104(56, 8, num2, &Global_1667211);
								func_104(57, 8, num2, &Global_1667211);
								func_104(58, 8, num2, &Global_1667211);
								func_104(59, 8, num2, &Global_1667211);
								func_104(62, 8, num2, &Global_1667211);
								func_104(60, 8, num2, &Global_1667211);
								func_104(61, 8, num2, &Global_1667211);
								func_118(87, 8, num2, &Global_1667211);
							}
							break;
					
						case 11:
							if (!Global_1667211.f_1[0])
							{
								func_104(63, 8, num2, &Global_1667211);
								func_118(88, 8, num2, &Global_1667211);
								func_104(64, 8, num2, &Global_1667211);
								func_104(65, 8, num2, &Global_1667211);
								func_104(66, 8, num2, &Global_1667211);
								func_104(67, 8, num2, &Global_1667211);
								func_104(68, 8, num2, &Global_1667211);
								func_104(69, 8, num2, &Global_1667211);
								func_104(70, 8, num2, &Global_1667211);
								func_104(71, 8, num2, &Global_1667211);
								func_104(72, 8, num2, &Global_1667211);
								func_104(73, 8, num2, &Global_1667211);
							}
							break;
					
						case 12:
							if (!Global_1667211.f_1[0])
							{
								if (Global_262145.f_28777)
								{
									func_104(89, 8, num2, &Global_1667211);
									func_104(90, 8, num2, &Global_1667211);
									func_104(92, 8, num2, &Global_1667211);
									func_104(91, 8, num2, &Global_1667211);
									func_104(94, 8, num2, &Global_1667211);
									func_104(93, 8, num2, &Global_1667211);
								}
							}
							break;
					
						case 13:
							if (!Global_1667211.f_1[0])
							{
								func_104(95, 8, num2, &Global_1667211);
								func_104(96, 8, num2, &Global_1667211);
								func_118(106, 8, num2, &Global_1667211);
								func_104(97, 8, num2, &Global_1667211);
								func_104(98, 8, num2, &Global_1667211);
								func_104(99, 8, num2, &Global_1667211);
								func_104(100, 8, num2, &Global_1667211);
								func_104(101, 8, num2, &Global_1667211);
								func_104(102, 8, num2, &Global_1667211);
								func_104(103, 8, num2, &Global_1667211);
								func_104(104, 8, num2, &Global_1667211);
								func_104(105, 8, num2, &Global_1667211);
							}
							break;
					
						case 14:
							if (!Global_1667211.f_1[0])
							{
								func_104(113, 8, num2, &Global_1667211);
								func_118(107, 8, num2, &Global_1667211);
								func_118(108, 8, num2, &Global_1667211);
								func_118(109, 8, num2, &Global_1667211);
								func_118(110, 8, num2, &Global_1667211);
								func_118(111, 8, num2, &Global_1667211);
								func_118(112, 8, num2, &Global_1667211);
								func_118(113, 8, num2, &Global_1667211);
								func_104(114, 8, num2, &Global_1667211);
								func_118(114, 8, num2, &Global_1667211);
								func_104(117, 8, num2, &Global_1667211);
								func_104(116, 8, num2, &Global_1667211);
							}
							break;
					
						case 15:
							if (!Global_1667211.f_1[0])
							{
								func_104(127, 8, num2, &Global_1667211);
								func_104(128, 8, num2, &Global_1667211);
								func_104(129, 8, num2, &Global_1667211);
								func_104(130, 8, num2, &Global_1667211);
								func_104(131, 8, num2, &Global_1667211);
								func_104(132, 8, num2, &Global_1667211);
								func_104(133, 8, num2, &Global_1667211);
								func_104(134, 8, num2, &Global_1667211);
								func_104(140, 8, num2, &Global_1667211);
								func_104(135, 8, num2, &Global_1667211);
								func_104(141, 8, num2, &Global_1667211);
								func_104(136, 8, num2, &Global_1667211);
							}
							break;
					
						case 16:
							if (!Global_1667211.f_1[0])
							{
								func_104(143, 8, num2, &Global_1667211);
								func_104(144, 8, num2, &Global_1667211);
								func_104(145, 8, num2, &Global_1667211);
								func_104(146, 8, num2, &Global_1667211);
								func_118(120, 8, num2, &Global_1667211);
								func_104(147, 8, num2, &Global_1667211);
								func_104(148, 8, num2, &Global_1667211);
								func_118(121, 8, num2, &Global_1667211);
								func_104(149, 8, num2, &Global_1667211);
								func_104(150, 8, num2, &Global_1667211);
								func_118(122, 8, num2, &Global_1667211);
								func_104(151, 8, num2, &Global_1667211);
							}
							break;
					
						case 17:
							if (!Global_1667211.f_1[0])
							{
								func_104(159, 8, num2, &Global_1667211);
								func_104(160, 8, num2, &Global_1667211);
								func_104(162, 8, num2, &Global_1667211);
								func_104(164, 8, num2, &Global_1667211);
								func_104(165, 8, num2, &Global_1667211);
								func_118(128, 8, num2, &Global_1667211);
								func_118(129, 8, num2, &Global_1667211);
								func_118(130, 8, num2, &Global_1667211);
								func_118(131, 8, num2, &Global_1667211);
								func_118(132, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35193)
									func_104(163, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35192)
									func_104(161, 8, num2, &Global_1667211);
							}
							break;
					
						case 18:
							if (!Global_1667211.f_1[0])
							{
								func_104(174, 8, num2, &Global_1667211);
								func_104(175, 8, num2, &Global_1667211);
								func_104(176, 8, num2, &Global_1667211);
								func_104(177, 8, num2, &Global_1667211);
								func_104(178, 8, num2, &Global_1667211);
								func_104(179, 8, num2, &Global_1667211);
								func_118(133, 8, num2, &Global_1667211);
								func_118(134, 8, num2, &Global_1667211);
								func_118(135, 8, num2, &Global_1667211);
								func_118(136, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35495)
									func_118(137, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35496)
									func_118(138, 8, num2, &Global_1667211);
							}
							break;
					
						case 19:
							func_82(4, 8, num2, &Global_1667211);
							func_82(2, 8, num2, &Global_1667211);
							func_82(7, 8, num2, &Global_1667211);
							func_82(0, 8, num2, &Global_1667211);
							func_82(6, 8, num2, &Global_1667211);
							func_82(8, 8, num2, &Global_1667211);
							func_82(5, 8, num2, &Global_1667211);
							func_82(1, 8, num2, &Global_1667211);
							func_82(54, 8, num2, &Global_1667211);
							func_82(57, 8, num2, &Global_1667211);
							func_82(58, 8, num2, &Global_1667211);
							func_82(59, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(17, 8, num2, &Global_1667211);
							func_118(12, 8, num2, &Global_1667211);
							func_118(40, 8, num2, &Global_1667211);
							func_118(31, 8, num2, &Global_1667211);
							func_118(37, 8, num2, &Global_1667211);
							func_118(34, 8, num2, &Global_1667211);
							func_118(33, 8, num2, &Global_1667211);
							func_118(32, 8, num2, &Global_1667211);
							func_118(41, 8, num2, &Global_1667211);
							func_118(35, 8, num2, &Global_1667211);
							func_118(63, 8, num2, &Global_1667211);
							func_70(1, 8, num2, &Global_1667211);
							break;
					
						case 1:
							func_118(39, 8, num2, &Global_1667211);
							func_104(11, 8, num2, &Global_1667211);
							func_118(38, 8, num2, &Global_1667211);
							func_104(10, 8, num2, &Global_1667211);
							func_118(48, 8, num2, &Global_1667211);
							func_118(22, 8, num2, &Global_1667211);
							func_118(23, 8, num2, &Global_1667211);
							func_118(31, 8, num2, &Global_1667211);
							func_118(35, 8, num2, &Global_1667211);
							func_104(4, 8, num2, &Global_1667211);
							func_104(5, 8, num2, &Global_1667211);
							func_118(32, 8, num2, &Global_1667211);
							break;
					
						case 2:
							if (!Global_1667211.f_1[0])
							{
								func_104(12, 8, num2, &Global_1667211);
								func_118(27, 8, num2, &Global_1667211);
								func_104(0, 8, num2, &Global_1667211);
								func_104(21, 8, num2, &Global_1667211);
								func_70(1, 8, num2, &Global_1667211);
								func_70(0, 8, num2, &Global_1667211);
								func_70(3, 8, num2, &Global_1667211);
								func_70(2, 8, num2, &Global_1667211);
								func_118(149, 8, num2, &Global_1667211);
								func_118(150, 8, num2, &Global_1667211);
								func_118(156, 8, num2, &Global_1667211);
								func_104(188, 8, num2, &Global_1667211);
							}
							break;
					
						case 5:
							if (!Global_1667211.f_1[0])
							{
								func_118(5, 8, num2, &Global_1667211);
								func_118(4, 8, num2, &Global_1667211);
								func_118(25, 8, num2, &Global_1667211);
								func_118(2, 8, num2, &Global_1667211);
								func_118(26, 8, num2, &Global_1667211);
								func_118(7, 8, num2, &Global_1667211);
								func_118(3, 8, num2, &Global_1667211);
								func_118(6, 8, num2, &Global_1667211);
								func_118(8, 8, num2, &Global_1667211);
								func_118(24, 8, num2, &Global_1667211);
								func_118(151, 8, num2, &Global_1667211);
								func_118(153, 8, num2, &Global_1667211);
							}
							break;
					
						case 6:
							if (!Global_1667211.f_1[0])
							{
								func_118(145, 8, num2, &Global_1667211);
								func_118(144, 8, num2, &Global_1667211);
								func_104(186, 8, num2, &Global_1667211);
								func_104(183, 8, num2, &Global_1667211);
								func_104(187, 8, num2, &Global_1667211);
								func_118(154, 8, num2, &Global_1667211);
								func_88(21, 8, num2, &Global_1667211);
							
								if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
									func_88(20, 8, num2, &Global_1667211);
							}
							break;
					
						case 9:
							if (!Global_1667211.f_1[0])
							{
								func_118(74, 8, num2, &Global_1667211);
								func_118(73, 8, num2, &Global_1667211);
								func_118(72, 8, num2, &Global_1667211);
								func_104(52, 8, num2, &Global_1667211);
								func_104(51, 8, num2, &Global_1667211);
								func_118(71, 8, num2, &Global_1667211);
								func_118(70, 8, num2, &Global_1667211);
								func_104(50, 8, num2, &Global_1667211);
								func_104(30, 8, num2, &Global_1667211);
								func_104(31, 8, num2, &Global_1667211);
								func_104(32, 8, num2, &Global_1667211);
								func_104(33, 8, num2, &Global_1667211);
							}
							break;
					
						case 11:
							if (!Global_1667211.f_1[0])
							{
								func_104(74, 8, num2, &Global_1667211);
								func_104(75, 8, num2, &Global_1667211);
								func_118(89, 8, num2, &Global_1667211);
								func_118(90, 8, num2, &Global_1667211);
								func_118(91, 8, num2, &Global_1667211);
								func_104(76, 8, num2, &Global_1667211);
								func_104(77, 8, num2, &Global_1667211);
								func_104(78, 8, num2, &Global_1667211);
								func_118(92, 8, num2, &Global_1667211);
								func_118(93, 8, num2, &Global_1667211);
								func_104(79, 8, num2, &Global_1667211);
								func_104(80, 8, num2, &Global_1667211);
							}
							break;
					
						case 13:
							if (!Global_1667211.f_1[0])
							{
								func_118(105, 8, num2, &Global_1667211);
								func_104(106, 8, num2, &Global_1667211);
								func_104(107, 8, num2, &Global_1667211);
								func_104(108, 8, num2, &Global_1667211);
								func_118(101, 8, num2, &Global_1667211);
								func_104(111, 8, num2, &Global_1667211);
								func_118(99, 8, num2, &Global_1667211);
								func_104(112, 8, num2, &Global_1667211);
							
								if (!Global_262145.f_24285)
									func_118(104, 8, num2, &Global_1667211);
							
								if (!Global_262145.f_24287)
								{
									func_118(103, 8, num2, &Global_1667211);
									func_104(109, 8, num2, &Global_1667211);
								}
							
								if (!Global_262145.f_24286)
									func_118(102, 8, num2, &Global_1667211);
							}
							break;
					
						case 14:
							if (!Global_1667211.f_1[0])
							{
								if (Global_262145.f_30358[0] != 0f)
									func_104(115, 8, num2, &Global_1667211);
							
								func_104(118, 8, num2, &Global_1667211);
								func_104(119, 8, num2, &Global_1667211);
								func_104(120, 8, num2, &Global_1667211);
							
								if (Global_262145.f_30358[6] != 0f)
									func_104(121, 8, num2, &Global_1667211);
							
								func_104(122, 8, num2, &Global_1667211);
								func_118(115, 8, num2, &Global_1667211);
							
								if (Global_262145.f_30301)
								{
									func_118(116, 8, num2, &Global_1667211);
									func_104(123, 8, num2, &Global_1667211);
									func_104(124, 8, num2, &Global_1667211);
									func_104(125, 8, num2, &Global_1667211);
									func_104(126, 8, num2, &Global_1667211);
								}
							}
							break;
					
						case 15:
							if (!Global_1667211.f_1[0])
							{
								func_104(142, 8, num2, &Global_1667211);
								func_118(117, 8, num2, &Global_1667211);
								func_118(118, 8, num2, &Global_1667211);
								func_104(137, 8, num2, &Global_1667211);
								func_104(138, 8, num2, &Global_1667211);
								func_104(139, 8, num2, &Global_1667211);
								func_118(119, 8, num2, &Global_1667211);
							}
							break;
					
						case 16:
							if (!Global_1667211.f_1[0])
							{
								if (*Global_262145.f_33343)
									func_118(123, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33344)
									func_118(124, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33345)
									func_118(125, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33346)
								{
									func_104(152, 8, num2, &Global_1667211);
									func_104(153, 8, num2, &Global_1667211);
									func_104(154, 8, num2, &Global_1667211);
									func_104(155, 8, num2, &Global_1667211);
								}
							
								if (func_127())
									func_118(126, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33346)
								{
									func_104(156, 8, num2, &Global_1667211);
									func_104(157, 8, num2, &Global_1667211);
								}
							
								if (*Global_262145.f_33347)
								{
									func_118(127, 8, num2, &Global_1667211);
									func_104(158, 8, num2, &Global_1667211);
								}
							}
							break;
					
						case 17:
							if (*Global_262145.f_34966)
								func_104(166, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34967)
								func_104(167, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34968)
								func_104(168, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34969)
								func_104(169, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34970)
								func_104(170, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34971)
								func_104(171, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34972)
								func_104(172, 8, num2, &Global_1667211);
						
							if (*Global_262145.f_34973)
								func_104(173, 8, num2, &Global_1667211);
							break;
					
						case 18:
							if (*Global_262145.f_35497)
							{
								func_104(180, 8, num2, &Global_1667211);
								func_104(181, 8, num2, &Global_1667211);
								func_118(139, 8, num2, &Global_1667211);
								func_118(140, 8, num2, &Global_1667211);
							}
						
							if (*Global_262145.f_35493)
							{
								func_118(141, 8, num2, &Global_1667211);
								func_104(182, 8, num2, &Global_1667211);
							}
							break;
					
						case 19:
							func_82(60, 8, num2, &Global_1667211);
							func_82(12, 8, num2, &Global_1667211);
							func_82(56, 8, num2, &Global_1667211);
							func_82(55, 8, num2, &Global_1667211);
							func_82(25, 8, num2, &Global_1667211);
							func_82(34, 8, num2, &Global_1667211);
							func_82(45, 8, num2, &Global_1667211);
							func_82(48, 8, num2, &Global_1667211);
							func_82(49, 8, num2, &Global_1667211);
							func_82(65, 8, num2, &Global_1667211);
							func_82(46, 8, num2, &Global_1667211);
							func_82(9, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(48, 8, num2, &Global_1667211);
							func_118(14, 8, num2, &Global_1667211);
							func_118(25, 8, num2, &Global_1667211);
							func_118(26, 8, num2, &Global_1667211);
							func_118(15, 8, num2, &Global_1667211);
							func_118(22, 8, num2, &Global_1667211);
							func_118(27, 8, num2, &Global_1667211);
							func_118(21, 8, num2, &Global_1667211);
							func_118(11, 8, num2, &Global_1667211);
							func_118(62, 8, num2, &Global_1667211);
							func_118(23, 8, num2, &Global_1667211);
							func_118(0, 8, num2, &Global_1667211);
							break;
					
						case 1:
							if (!Global_1667211.f_1[0])
							{
								func_118(34, 8, num2, &Global_1667211);
								func_104(3, 8, num2, &Global_1667211);
								func_118(33, 8, num2, &Global_1667211);
								func_104(8, 8, num2, &Global_1667211);
								func_118(157, 8, num2, &Global_1667211);
								func_118(158, 8, num2, &Global_1667211);
								func_118(159, 8, num2, &Global_1667211);
								func_118(148, 8, num2, &Global_1667211);
								func_118(152, 8, num2, &Global_1667211);
							}
							break;
					
						case 2:
							if (!Global_1667211.f_1[0])
							{
								func_118(160, 8, num2, &Global_1667211);
								func_118(67, 8, num2, &Global_1667211);
								func_104(25, 8, num2, &Global_1667211);
								func_104(26, 8, num2, &Global_1667211);
							}
							break;
					
						case 5:
							if (!Global_1667211.f_1[0])
								func_118(155, 8, num2, &Global_1667211);
							break;
					
						case 9:
							if (!Global_1667211.f_1[0])
							{
								func_104(34, 8, num2, &Global_1667211);
								func_104(35, 8, num2, &Global_1667211);
								func_104(36, 8, num2, &Global_1667211);
								func_104(37, 8, num2, &Global_1667211);
								func_104(38, 8, num2, &Global_1667211);
								func_104(39, 8, num2, &Global_1667211);
								func_104(40, 8, num2, &Global_1667211);
								func_104(41, 8, num2, &Global_1667211);
								func_104(42, 8, num2, &Global_1667211);
								func_104(43, 8, num2, &Global_1667211);
								func_104(44, 8, num2, &Global_1667211);
								func_104(45, 8, num2, &Global_1667211);
							}
							break;
					
						case 11:
							if (!Global_1667211.f_1[0])
							{
								func_104(81, 8, num2, &Global_1667211);
								func_118(94, 8, num2, &Global_1667211);
								func_118(95, 8, num2, &Global_1667211);
								func_104(82, 8, num2, &Global_1667211);
								func_104(83, 8, num2, &Global_1667211);
								func_118(96, 8, num2, &Global_1667211);
								func_104(84, 8, num2, &Global_1667211);
								func_104(85, 8, num2, &Global_1667211);
								func_118(97, 8, num2, &Global_1667211);
								func_104(86, 8, num2, &Global_1667211);
								func_104(87, 8, num2, &Global_1667211);
								func_104(88, 8, num2, &Global_1667211);
							}
							break;
					
						case 13:
							if (!Global_1667211.f_1[0])
							{
								if (!Global_262145.f_24286)
									func_104(110, 8, num2, &Global_1667211);
							
								if (Global_262145.f_29219)
									func_118(100, 8, num2, &Global_1667211);
							}
							break;
					
						case 19:
							if (!Global_1667211.f_1[0])
							{
								func_82(10, 8, num2, &Global_1667211);
								func_82(11, 8, num2, &Global_1667211);
								func_82(87, 8, num2, &Global_1667211);
								func_82(89, 8, num2, &Global_1667211);
								type = PV_COMP_HEAD;
							
								if (_STAT_GET_PACKED_BOOL(3608, -1))
									type = PV_COMP_BERD;
							
								func_65("CLO_LTS_T_0", "CLO_LTS_TD_0", "Elitas_Tshirt", "MPTshirtAwardLTS", PV_COMP_BERD, type, -1, 1, &Global_1667211, 192, 166);
								func_62(0);
								func_62(1);
								func_62(2);
								type = PV_COMP_HEAD;
							
								if (func_53(4))
									type = PV_COMP_BERD;
							
								func_65("CLO_HST_A_4", "CLO_HST_AD_5", "CantTouchThis", "MPTShirtAwards2", PV_COMP_BERD, type, -1, 1, &Global_1667211, 192, 166);
								func_62(5);
								func_62(7);
								func_62(6);
							}
							break;
					}
					break;
			
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(16, 8, num2, &Global_1667211);
							func_118(45, 8, num2, &Global_1667211);
							func_118(43, 8, num2, &Global_1667211);
							func_118(46, 8, num2, &Global_1667211);
							func_118(44, 8, num2, &Global_1667211);
							func_118(30, 8, num2, &Global_1667211);
							func_104(2, 8, num2, &Global_1667211);
							func_118(39, 8, num2, &Global_1667211);
							func_118(38, 8, num2, &Global_1667211);
							func_104(3, 8, num2, &Global_1667211);
							func_118(42, 8, num2, &Global_1667211);
							func_118(36, 8, num2, &Global_1667211);
							break;
					
						case 1:
							!Global_1667211.f_1[0];
							break;
					
						case 9:
							if (!Global_1667211.f_1[0])
							{
								func_104(46, 8, num2, &Global_1667211);
								func_104(47, 8, num2, &Global_1667211);
								func_104(48, 8, num2, &Global_1667211);
								func_104(49, 8, num2, &Global_1667211);
							}
							break;
					
						case 19:
							func_62(8);
							type = PV_COMP_HEAD;
						
							if (func_53(9))
								type = PV_COMP_BERD;
						
							func_65("CLO_HST_A_9", "CLO_HST_AD_9", "Showroom", "MPTShirtAwards2", PV_COMP_BERD, type, -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_0", "CHR_HST_AD_0", "SportMod", "MPAwardMods", func_52(148, 5, 0), func_50(148, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_1", "CHR_HST_AD_1", "LowriderMod", "MPAwardMods", func_52(149, 5, 0), func_50(149, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_2", "CHR_HST_AD_2", "OffroadMod", "MPAwardMods", func_52(151, 5, 0), func_50(151, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_3", "CHR_HST_AD_3", "HighendMod", "MPAwardMods", func_52(142, 5, 0), func_50(142, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_4", "CHR_HST_AD_4", "TunerMod", "MPAwardMods", func_52(143, 5, 0), func_50(143, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_5", "CHR_HST_AD_5", "BikeMod", "MPAwardMods", func_52(153, 5, 0), func_50(153, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_6", "CHR_HST_AD_6", "SUVMod", "MPAwardMods", func_52(157, 5, 0), func_50(157, -1), -1, 1, &Global_1667211, 192, 166);
							func_65("CHR_HST_A_7", "CHR_HST_AD_7", "MuscleMod", "MPAwardMods", func_52(158, 5, 0), func_50(158, -1), -1, 1, &Global_1667211, 192, 166);
							func_62(34);
							func_65("CLO_S1M_DEC_25", "CLO_S1M_D_24_25" /*Complete all the Lowriders Lamar missions.*/, "BennyTshirt01", "MPTShirtAwards4", PV_COMP_ACCS, type, -1, 1, &Global_1667211, 192, 166);
							break;
					}
					break;
			
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(15, 8, num2, &Global_1667211);
							func_104(4, 8, num2, &Global_1667211);
							func_104(5, 8, num2, &Global_1667211);
							func_104(7, 8, num2, &Global_1667211);
							func_104(6, 8, num2, &Global_1667211);
							func_118(29, 8, num2, &Global_1667211);
							func_118(28, 8, num2, &Global_1667211);
							func_118(20, 8, num2, &Global_1667211);
							func_104(0, 8, num2, &Global_1667211);
							func_104(8, 8, num2, &Global_1667211);
							func_118(61, 8, num2, &Global_1667211);
							func_70(3, 8, num2, &Global_1667211);
							break;
					
						case 19:
							if (!Global_1667211.f_1[0])
							{
								if (func_49(2934, -1) == 1)
								{
									type = PV_COMP_ACCS;
								}
								else
								{
									type = func_42(0);
								
									if (type > PV_COMP_HEAD)
										type = type - 1;
								}
							
								func_65("CLO_S1M_DEC_24", "CLO_S1M_D_24_25" /*Complete all the Lowriders Lamar missions.*/, "BennyTshirt02", "MPTShirtAwards4", PV_COMP_ACCS, type, -1, 1, &Global_1667211, 192, 166);
							}
							break;
					}
					break;
			
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(22, 8, num2, &Global_1667211);
							func_104(17, 8, num2, &Global_1667211);
							func_104(18, 8, num2, &Global_1667211);
							func_70(2, 8, num2, &Global_1667211);
							func_70(0, 8, num2, &Global_1667211);
							func_104(16, 8, num2, &Global_1667211);
							func_104(12, 8, num2, &Global_1667211);
							func_104(13, 8, num2, &Global_1667211);
							func_118(55, 8, num2, &Global_1667211);
							func_118(56, 8, num2, &Global_1667211);
							func_118(53, 8, num2, &Global_1667211);
							func_104(20, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(10, 8, num2, &Global_1667211);
							func_104(21, 8, num2, &Global_1667211);
							func_118(60, 8, num2, &Global_1667211);
							func_104(11, 8, num2, &Global_1667211);
							func_118(51, 8, num2, &Global_1667211);
							func_118(52, 8, num2, &Global_1667211);
							func_118(59, 8, num2, &Global_1667211);
							func_118(58, 8, num2, &Global_1667211);
							func_104(14, 8, num2, &Global_1667211);
							func_118(54, 8, num2, &Global_1667211);
							func_118(57, 8, num2, &Global_1667211);
							func_118(47, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(23, 8, num2, &Global_1667211);
								func_118(49, 8, num2, &Global_1667211);
								func_118(148, 8, num2, &Global_1667211);
								func_118(149, 8, num2, &Global_1667211);
								func_118(150, 8, num2, &Global_1667211);
								func_118(151, 8, num2, &Global_1667211);
								func_118(152, 8, num2, &Global_1667211);
								func_118(142, 8, num2, &Global_1667211);
								func_118(143, 8, num2, &Global_1667211);
								func_118(144, 8, num2, &Global_1667211);
								func_118(145, 8, num2, &Global_1667211);
								func_104(184, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(147, 8, num2, &Global_1667211);
								func_104(183, 8, num2, &Global_1667211);
								func_118(153, 8, num2, &Global_1667211);
								func_104(187, 8, num2, &Global_1667211);
								func_118(154, 8, num2, &Global_1667211);
								func_118(155, 8, num2, &Global_1667211);
								func_118(156, 8, num2, &Global_1667211);
								func_118(157, 8, num2, &Global_1667211);
								func_118(158, 8, num2, &Global_1667211);
								func_118(159, 8, num2, &Global_1667211);
								func_104(188, 8, num2, &Global_1667211);
								func_118(160, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(186, 8, num2, &Global_1667211);
								func_88(12, 8, num2, &Global_1667211);
								func_88(13, 8, num2, &Global_1667211);
								func_88(14, 8, num2, &Global_1667211);
								func_88(15, 8, num2, &Global_1667211);
								func_88(16, 8, num2, &Global_1667211);
								func_88(17, 8, num2, &Global_1667211);
								func_88(18, 8, num2, &Global_1667211);
								func_88(19, 8, num2, &Global_1667211);
							
								if (!Global_262145.f_9090)
								{
									func_118(67, 8, num2, &Global_1667211);
									func_104(25, 8, num2, &Global_1667211);
									func_104(26, 8, num2, &Global_1667211);
								}
							}
							break;
					}
					break;
			
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_88(21, 8, num2, &Global_1667211);
							
								if (IS_XBOX_PLATFORM() || IS_PLAYSTATION_PLATFORM() || MISC::IS_PC_VERSION())
									func_88(20, 8, num2, &Global_1667211);
							
								func_88(1, 8, num2, &Global_1667211);
								func_88(2, 8, num2, &Global_1667211);
								func_88(6, 8, num2, &Global_1667211);
								func_88(3, 8, num2, &Global_1667211);
								func_88(7, 8, num2, &Global_1667211);
								func_88(8, 8, num2, &Global_1667211);
								func_88(4, 8, num2, &Global_1667211);
								func_88(9, 8, num2, &Global_1667211);
								func_88(10, 8, num2, &Global_1667211);
								func_88(5, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_88(11, 8, num2, &Global_1667211);
								func_118(165, 8, num2, &Global_1667211);
								func_104(189, 8, num2, &Global_1667211);
								func_104(190, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23837 == true)
									func_118(161, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23839 == true)
									func_118(162, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23838 == true)
									func_118(163, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23840 == true)
									func_118(164, 8, num2, &Global_1667211);
							
								if (Global_262145.f_23837 == true && Global_262145.f_23839 == true && Global_262145.f_23838 == true && Global_262145.f_23840 == true)
									func_104(191, 8, num2, &Global_1667211);
							
								func_118(86, 8, num2, &Global_1667211);
								func_118(85, 8, num2, &Global_1667211);
								func_118(84, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(83, 8, num2, &Global_1667211);
								func_118(82, 8, num2, &Global_1667211);
								func_118(81, 8, num2, &Global_1667211);
								func_118(80, 8, num2, &Global_1667211);
								func_118(79, 8, num2, &Global_1667211);
								func_118(78, 8, num2, &Global_1667211);
								func_118(77, 8, num2, &Global_1667211);
								func_118(76, 8, num2, &Global_1667211);
								func_118(75, 8, num2, &Global_1667211);
								func_118(74, 8, num2, &Global_1667211);
								func_118(73, 8, num2, &Global_1667211);
								func_118(72, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(52, 8, num2, &Global_1667211);
								func_104(51, 8, num2, &Global_1667211);
								func_118(71, 8, num2, &Global_1667211);
								func_118(70, 8, num2, &Global_1667211);
								func_104(50, 8, num2, &Global_1667211);
								func_104(30, 8, num2, &Global_1667211);
								func_104(31, 8, num2, &Global_1667211);
								func_104(32, 8, num2, &Global_1667211);
								func_104(33, 8, num2, &Global_1667211);
								func_104(34, 8, num2, &Global_1667211);
								func_104(35, 8, num2, &Global_1667211);
								func_104(36, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(37, 8, num2, &Global_1667211);
								func_104(38, 8, num2, &Global_1667211);
								func_104(39, 8, num2, &Global_1667211);
								func_104(40, 8, num2, &Global_1667211);
								func_104(41, 8, num2, &Global_1667211);
								func_104(42, 8, num2, &Global_1667211);
								func_104(43, 8, num2, &Global_1667211);
								func_104(44, 8, num2, &Global_1667211);
								func_104(45, 8, num2, &Global_1667211);
								func_104(46, 8, num2, &Global_1667211);
								func_104(47, 8, num2, &Global_1667211);
								func_104(48, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
								func_104(49, 8, num2, &Global_1667211);
						
							func_104(53, 8, num2, &Global_1667211);
							func_104(54, 8, num2, &Global_1667211);
							func_104(55, 8, num2, &Global_1667211);
							func_104(56, 8, num2, &Global_1667211);
							func_104(57, 8, num2, &Global_1667211);
							func_104(58, 8, num2, &Global_1667211);
							func_104(59, 8, num2, &Global_1667211);
							func_104(62, 8, num2, &Global_1667211);
							func_104(60, 8, num2, &Global_1667211);
							func_104(61, 8, num2, &Global_1667211);
							func_118(87, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(88, 8, num2, &Global_1667211);
							func_118(89, 8, num2, &Global_1667211);
							func_118(90, 8, num2, &Global_1667211);
							func_118(91, 8, num2, &Global_1667211);
							func_118(92, 8, num2, &Global_1667211);
							func_118(93, 8, num2, &Global_1667211);
							func_118(94, 8, num2, &Global_1667211);
							func_118(95, 8, num2, &Global_1667211);
							func_118(96, 8, num2, &Global_1667211);
							func_118(97, 8, num2, &Global_1667211);
							func_104(63, 8, num2, &Global_1667211);
							func_104(64, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(65, 8, num2, &Global_1667211);
							func_104(66, 8, num2, &Global_1667211);
							func_104(67, 8, num2, &Global_1667211);
							func_104(68, 8, num2, &Global_1667211);
							func_104(69, 8, num2, &Global_1667211);
							func_104(70, 8, num2, &Global_1667211);
							func_104(71, 8, num2, &Global_1667211);
							func_104(72, 8, num2, &Global_1667211);
							func_104(73, 8, num2, &Global_1667211);
							func_104(74, 8, num2, &Global_1667211);
							func_104(75, 8, num2, &Global_1667211);
							func_104(76, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(77, 8, num2, &Global_1667211);
							func_104(78, 8, num2, &Global_1667211);
							func_104(79, 8, num2, &Global_1667211);
							func_104(80, 8, num2, &Global_1667211);
							func_104(81, 8, num2, &Global_1667211);
							func_104(82, 8, num2, &Global_1667211);
							func_104(83, 8, num2, &Global_1667211);
							func_104(84, 8, num2, &Global_1667211);
							func_104(85, 8, num2, &Global_1667211);
							func_104(86, 8, num2, &Global_1667211);
							func_104(87, 8, num2, &Global_1667211);
							func_104(88, 8, num2, &Global_1667211);
							break;
					}
					break;
			
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								if (Global_262145.f_28777)
								{
									func_104(89, 8, num2, &Global_1667211);
									func_104(90, 8, num2, &Global_1667211);
									func_104(92, 8, num2, &Global_1667211);
									func_104(91, 8, num2, &Global_1667211);
									func_104(94, 8, num2, &Global_1667211);
									func_104(93, 8, num2, &Global_1667211);
								}
							
								func_104(95, 8, num2, &Global_1667211);
								func_104(96, 8, num2, &Global_1667211);
								func_118(106, 8, num2, &Global_1667211);
								func_104(97, 8, num2, &Global_1667211);
								func_104(98, 8, num2, &Global_1667211);
								func_104(99, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(100, 8, num2, &Global_1667211);
								func_104(101, 8, num2, &Global_1667211);
								func_104(102, 8, num2, &Global_1667211);
								func_104(103, 8, num2, &Global_1667211);
								func_104(104, 8, num2, &Global_1667211);
								func_104(105, 8, num2, &Global_1667211);
								func_118(105, 8, num2, &Global_1667211);
								func_104(106, 8, num2, &Global_1667211);
								func_104(107, 8, num2, &Global_1667211);
								func_104(108, 8, num2, &Global_1667211);
								func_118(101, 8, num2, &Global_1667211);
								func_104(111, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(99, 8, num2, &Global_1667211);
								func_104(112, 8, num2, &Global_1667211);
							
								if (!Global_262145.f_24285)
									func_118(104, 8, num2, &Global_1667211);
							
								if (!Global_262145.f_24287)
								{
									func_104(109, 8, num2, &Global_1667211);
									func_118(103, 8, num2, &Global_1667211);
								}
							
								if (!Global_262145.f_24286)
								{
									func_104(110, 8, num2, &Global_1667211);
									func_118(102, 8, num2, &Global_1667211);
								}
							
								if (Global_262145.f_29219)
									func_118(100, 8, num2, &Global_1667211);
							
								func_104(113, 8, num2, &Global_1667211);
								func_118(107, 8, num2, &Global_1667211);
								func_118(108, 8, num2, &Global_1667211);
								func_118(109, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(110, 8, num2, &Global_1667211);
								func_118(111, 8, num2, &Global_1667211);
								func_118(112, 8, num2, &Global_1667211);
								func_118(113, 8, num2, &Global_1667211);
								func_104(114, 8, num2, &Global_1667211);
								func_118(114, 8, num2, &Global_1667211);
								func_104(116, 8, num2, &Global_1667211);
								func_104(117, 8, num2, &Global_1667211);
								func_104(118, 8, num2, &Global_1667211);
								func_104(119, 8, num2, &Global_1667211);
								func_104(120, 8, num2, &Global_1667211);
								func_104(122, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								if (Global_262145.f_30358[0] != 0f)
									func_104(115, 8, num2, &Global_1667211);
							
								if (Global_262145.f_30358[6] != 0f)
									func_104(121, 8, num2, &Global_1667211);
							
								func_118(115, 8, num2, &Global_1667211);
							
								if (Global_262145.f_30301)
								{
									func_118(116, 8, num2, &Global_1667211);
									func_104(123, 8, num2, &Global_1667211);
									func_104(124, 8, num2, &Global_1667211);
									func_104(125, 8, num2, &Global_1667211);
									func_104(126, 8, num2, &Global_1667211);
								}
							
								func_104(127, 8, num2, &Global_1667211);
								func_104(128, 8, num2, &Global_1667211);
								func_104(129, 8, num2, &Global_1667211);
								func_104(130, 8, num2, &Global_1667211);
								func_104(131, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(132, 8, num2, &Global_1667211);
								func_104(133, 8, num2, &Global_1667211);
								func_104(134, 8, num2, &Global_1667211);
								func_104(140, 8, num2, &Global_1667211);
								func_104(135, 8, num2, &Global_1667211);
								func_104(141, 8, num2, &Global_1667211);
								func_104(136, 8, num2, &Global_1667211);
								func_104(142, 8, num2, &Global_1667211);
								func_118(117, 8, num2, &Global_1667211);
								func_118(118, 8, num2, &Global_1667211);
								func_104(137, 8, num2, &Global_1667211);
								func_104(138, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_104(139, 8, num2, &Global_1667211);
								func_118(119, 8, num2, &Global_1667211);
								func_104(143, 8, num2, &Global_1667211);
								func_104(144, 8, num2, &Global_1667211);
								func_104(145, 8, num2, &Global_1667211);
								func_104(146, 8, num2, &Global_1667211);
								func_118(120, 8, num2, &Global_1667211);
								func_104(147, 8, num2, &Global_1667211);
								func_104(148, 8, num2, &Global_1667211);
								func_118(121, 8, num2, &Global_1667211);
								func_104(149, 8, num2, &Global_1667211);
								func_104(150, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 26:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(122, 8, num2, &Global_1667211);
								func_104(151, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33343)
									func_118(123, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33344)
									func_118(124, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33345)
									func_118(125, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33346)
								{
									func_104(152, 8, num2, &Global_1667211);
									func_104(153, 8, num2, &Global_1667211);
									func_104(154, 8, num2, &Global_1667211);
									func_104(155, 8, num2, &Global_1667211);
								}
							
								if (func_127())
									func_118(126, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_33346)
								{
									func_104(156, 8, num2, &Global_1667211);
									func_104(157, 8, num2, &Global_1667211);
								}
							}
							break;
					}
					break;
			
				case 27:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								if (*Global_262145.f_33347)
								{
									func_118(127, 8, num2, &Global_1667211);
									func_104(158, 8, num2, &Global_1667211);
								}
							
								func_104(159, 8, num2, &Global_1667211);
								func_104(160, 8, num2, &Global_1667211);
								func_104(162, 8, num2, &Global_1667211);
								func_104(164, 8, num2, &Global_1667211);
								func_104(165, 8, num2, &Global_1667211);
								func_118(128, 8, num2, &Global_1667211);
								func_118(129, 8, num2, &Global_1667211);
								func_118(130, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34966)
									func_104(166, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34967)
									func_104(167, 8, num2, &Global_1667211);
							}
							break;
					}
					break;
			
				case 28:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								func_118(131, 8, num2, &Global_1667211);
								func_118(132, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35193)
									func_104(163, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35192)
									func_104(161, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34968)
									func_104(168, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34969)
									func_104(169, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34970)
									func_104(170, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34971)
									func_104(171, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34972)
									func_104(172, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_34973)
									func_104(173, 8, num2, &Global_1667211);
							
								func_104(174, 8, num2, &Global_1667211);
								func_104(175, 8, num2, &Global_1667211);
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
							if (!Global_1667211.f_1[0])
							{
								func_104(176, 8, num2, &Global_1667211);
								func_104(177, 8, num2, &Global_1667211);
								func_104(178, 8, num2, &Global_1667211);
								func_104(179, 8, num2, &Global_1667211);
								func_118(133, 8, num2, &Global_1667211);
								func_118(134, 8, num2, &Global_1667211);
								func_118(135, 8, num2, &Global_1667211);
								func_118(136, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35495)
									func_118(137, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35496)
									func_118(138, 8, num2, &Global_1667211);
							
								if (*Global_262145.f_35497)
								{
									func_104(180, 8, num2, &Global_1667211);
									func_104(181, 8, num2, &Global_1667211);
								}
							}
							break;
					}
					break;
			
				case 30:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1667211.f_1[0])
							{
								if (*Global_262145.f_35497)
								{
									func_118(139, 8, num2, &Global_1667211);
									func_118(140, 8, num2, &Global_1667211);
								}
							
								if (*Global_262145.f_35493)
								{
									func_118(141, 8, num2, &Global_1667211);
									func_104(182, 8, num2, &Global_1667211);
								}
							}
							break;
					}
					break;
			}
		
			func_29(&Global_1667211, func_41(&Global_1667211));
			func_28(1, &Global_1668188);
			func_27(1, &Global_1668188);
			func_26(1, &Global_1668188);
			func_25(0, "HUD_AWDLIST1" /*All Awards*/, &Global_1668188);
			func_25(1, "HUD_AWDLIST12" /*Victory*/, &Global_1668188);
			func_25(2, "HUD_AWDLIST3b" /*General*/, &Global_1668188);
			func_25(3, "HUD_AWDLIST6" /*Crimes*/, &Global_1668188);
			func_25(4, "HUD_AWDLIST9" /*Vehicle*/, &Global_1668188);
			func_25(5, "HUD_AWDLIST10" /*Combat*/, &Global_1668188);
			func_25(6, "HUD_AWDLIST13", &Global_1668188);
			func_25(7, "HUD_AWD_GANGOP" /*The Doomsday Heist*/, &Global_1668188);
			func_25(8, "HUD_AWD_NIGHTCLUB" /*After Hours*/, &Global_1668188);
			func_25(9, "PM_ARENA" /*Arena War*/, &Global_1668188);
			func_25(10, "AWDGBC_VC" /*The Diamond Casino & Resort*/, &Global_1668188);
			func_25(11, "FMMC_CH_DN" /*The Diamond Casino Heist*/, &Global_1668188);
		
			if (Global_262145.f_28777)
				func_25(12, "SUM20AWARDPAGE" /*Los Santos Summer Special*/, &Global_1668188);
		
			func_25(13, "HEISTISLAWDPAGE" /*The Cayo Perico Heist*/, &Global_1668188);
			func_25(14, "TUNEAWDPAGE" /*Los Santos Tuners*/, &Global_1668188);
			func_25(15, "FIXAWDPAGE" /*The Contract*/, &Global_1668188);
			func_25(16, "DLC222AWDPAGE", &Global_1668188);
			func_25(17, "DLC223AWDPAGE", &Global_1668188);
			func_25(18, "DLC124AWDPAGE", &Global_1668188);
			func_25(19, "HUD_AWDLIST6b" /*Rewards*/, &Global_1668188);
			func_16(&Global_1668188, func_24(&Global_1668188));
		}
	}

	return;
}

void func_16(var uParam0, int iParam1) // Position - 0x4BAD Hash - 0x39139A16 ^0x39139A16
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
		value = uParam0->f_343[i];
	
		for (i = 0; i <= 19; i = i + 1)
		{
			if (uParam0->f_1[i] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
			
				if (uParam0->f_471 == 1)
					if (uParam0->f_472 == i)
						value = 0;
					else
						value = 4;
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_385[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			
				if (uParam0->f_470)
					func_22(&uParam0->f_22[i /*16*/]);
				else
					func_21(&uParam0->f_22[i /*16*/]);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_364[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_427[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_448[i]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_406[i]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			*uParam0 = 1;
		}
	
		func_20(0);
	}

	func_17(uParam0, func_19(uParam0));
	return;
}

void func_17(var uParam0, int iParam1) // Position - 0x4CCD Hash - 0x95D8A620 ^0x2E5A3FA2
{
	if (iParam1 == 1)
	{
		uParam0->f_473 = 0;
		func_18(uParam0);
	}

	if (uParam0->f_473 == 0)
	{
		if (uParam0->f_472 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_472);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_472 = -1;
			uParam0->f_473 = 1;
		}
	}

	return;
}

void func_18(var uParam0) // Position - 0x4D20 Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_475 = 0;
	return;
}

int func_19(var uParam0) // Position - 0x4D2E Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_475;
}

void func_20(int iParam0) // Position - 0x4D3B Hash - 0x9A867C6D ^0x76500655
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_21(const char* sParam0) // Position - 0x4D58 Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

void func_22(char* sParam0) // Position - 0x4D66 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_23(var uParam0) // Position - 0x4D78 Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_474 = 0;
	return;
}

int func_24(var uParam0) // Position - 0x4D86 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_474;
}

void func_25(int iParam0, char* sParam1, var uParam2) // Position - 0x4D93 Hash - 0x7F209A56 ^0x253096E8
{
	TEXT_LABEL_ASSIGN_STRING(&uParam2->f_22[iParam0 /*16*/], sParam1, 64);
	uParam2->f_1[iParam0] = 1;
	return;
}

void func_26(int iParam0, var uParam1) // Position - 0x4DB0 Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_471 = iParam0;
	return;
}

void func_27(int iParam0, var uParam1) // Position - 0x4DBF Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_469 = iParam0;
	return;
}

void func_28(int iParam0, var uParam1) // Position - 0x4DCE Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_470 = iParam0;
	return;
}

void func_29(var uParam0, int iParam1) // Position - 0x4DDD Hash - 0x66848661 ^0x66848661
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
				value = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uParam0->f_221[i]) / SYSTEM::TO_FLOAT(uParam0->f_208[i])) * 100f);
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

void func_30(var uParam0, int iParam1) // Position - 0x4FC6 Hash - 0x525DF8A1 ^0xF76AD4E
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

void func_31(var uParam0) // Position - 0x5010 Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_462 = 0;
	return;
}

int func_32(var uParam0) // Position - 0x501E Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1) // Position - 0x502B Hash - 0x56C5C12A ^0x473CD17C
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

void func_34(const char* sParam0, int iParam1) // Position - 0x50D7 Hash - 0x6196CDAF ^0x684CCAE
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_35(var uParam0) // Position - 0x50EF Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_463 = 0;
	return;
}

int func_36(var uParam0) // Position - 0x50FD Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_463;
}

BOOL func_37(const char* sParam0) // Position - 0x510A Hash - 0x45AA2165 ^0x40E3E680
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

char* func_38(int iParam0) // Position - 0x5144 Hash - 0xCCAD7FDD ^0xDACAA5D4
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

BOOL func_39(var uParam0) // Position - 0x5197 Hash - 0x7C63AA24 ^0xEACEB229
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

void func_40(var uParam0) // Position - 0x51F3 Hash - 0xB7743C40 ^0xB7743C40
{
	uParam0->f_460 = 0;
	return;
}

int func_41(var uParam0) // Position - 0x5201 Hash - 0x9BB76AD4 ^0x9BB76AD4
{
	return uParam0->f_460;
}

ePedComponentType func_42(int iParam0) // Position - 0x520E Hash - 0xF57393DD ^0xF57393DD
{
	ePedComponentType type;

	if (Global_1938445[iParam0 /*8*/] == PV_COMP_INVALID)
	{
		type = func_49(func_48(iParam0), -1);
	
		if (type == -1)
		{
			func_43(iParam0, 0);
			type = 0;
		}
	
		Global_1938445[iParam0 /*8*/] = type;
	}

	return Global_1938445[iParam0 /*8*/];
}

void func_43(int iParam0, ePedComponentType epctParam1) // Position - 0x5251 Hash - 0xB2B490B ^0xB2B490B
{
	Global_1938445[iParam0 /*8*/] = epctParam1;
	func_44(func_48(iParam0), epctParam1, -1);
	return;
}

void func_44(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x5270 Hash - 0xCCFC956D ^0xCCFC956D
{
	func_45(iParam0, epctParam1, iParam2, true);
	return;
}

void func_45(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3) // Position - 0x5283 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_46(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, epctParam1, bParam3);
	}

	return;
}

Hash func_46(int iParam0, int iParam1) // Position - 0x52B1 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_47(iParam1));
}

int func_47(int iParam0) // Position - 0x52C6 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_7();
	
		if (num2 > -1)
		{
			Global_2750950 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750950 = 1;
		}
	}

	return num;
}

int func_48(int iParam0) // Position - 0x52FA Hash - 0x334ABCD8 ^0x3F508946
{
	switch (iParam0)
	{
		case 0:
			return 12925;
	
		default:
		
	}

	return 12925;
}

int func_49(int iParam0, int iParam1) // Position - 0x5318 Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_46(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

ePedComponentType func_50(int iParam0, int iParam1) // Position - 0x5347 Hash - 0x5137F6D6 ^0x4CA951A0
{
	Hash statHash;
	ePedComponentType outValue;

	statHash = func_51(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return PV_COMP_HEAD;
}

Hash func_51(int iParam0, int iParam1) // Position - 0x536B Hash - 0x44FC0648 ^0x78F4F029
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_47(iParam1));
}

ePedComponentType func_52(int iParam0, int iParam1, int iParam2) // Position - 0x5381 Hash - 0x80259D9F ^0x80259D9F
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
	
		case 148:
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
	
		case 149:
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
	
		case 150:
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
	
		case 151:
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
	
		case 152:
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
					return 25;
			
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
					return 25;
			
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
	
		case 145:
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
	
		case 146:
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
	
		case 147:
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
	
		case 153:
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
					return 25;
			
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
					return PV_COMP_DECL;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
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
					return 25;
			
				case 5:
					return 50;
			
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
					return 15;
			
				case 5:
					return 25;
			
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
	
		case 161:
			switch (iParam1)
			{
				case 0:
					return PV_COMP_HEAD;
			
				case 1:
					return PV_COMP_HEAD;
			
				case 2:
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
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
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
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
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
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
					return Global_262145.f_24846;
			
				case 3:
					return Global_262145.f_24847;
			
				case 4:
					return Global_262145.f_24848;
			
				case 5:
					return Global_262145.f_24849;
			
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
					return Global_262145.f_28207;
			
				case 3:
					return Global_262145.f_28208;
			
				case 4:
					return Global_262145.f_28209;
			
				case 5:
					return Global_262145.f_28210;
			
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
					return Global_262145.f_28372;
			
				case 3:
					return Global_262145.f_28373;
			
				case 4:
					return Global_262145.f_28374;
			
				case 5:
					return Global_262145.f_28375;
			
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
					return Global_262145.f_28400;
			
				case 3:
					return Global_262145.f_28401;
			
				case 4:
					return Global_262145.f_28402;
			
				case 5:
					return Global_262145.f_28403;
			
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
					return Global_262145.f_28404;
			
				case 3:
					return Global_262145.f_28405;
			
				case 4:
					return Global_262145.f_28406;
			
				case 5:
					return Global_262145.f_28407;
			
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
					return Global_262145.f_28138;
			
				case 3:
					return Global_262145.f_28139;
			
				case 4:
					return Global_262145.f_28140;
			
				case 5:
					return Global_262145.f_28141;
			
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
					return Global_262145.f_28376;
			
				case 3:
					return Global_262145.f_28377;
			
				case 4:
					return Global_262145.f_28378;
			
				case 5:
					return Global_262145.f_28379;
			
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
	}

	return 999;
}

BOOL func_53(int iParam0) // Position - 0x8545 Hash - 0x2F462566 ^0xE730EBB9
{
	BOOL flag;

	flag = _STAT_GET_PACKED_INT(386, -1) == 0;

	if (flag)
		if (func_54(func_59(func_60(iParam0, flag), 3), -1))
			return true;
		else
			return false;

	if (func_54(func_59(func_60(iParam0, flag), 4), -1))
		return true;

	return false;
}

BOOL func_54(int iParam0, int iParam1) // Position - 0x859E Hash - 0x75CF6A28 ^0x4A659B70
{
	int num;
	int num2;

	if (func_57(iParam0) == 14835)
		return false;

	num = func_56(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_55(num2));
}

int func_55(int iParam0) // Position - 0x85CD Hash - 0x9042BAD4 ^0x9042BAD4
{
	return iParam0 % 32;
}

int func_56(int iParam0, int iParam1) // Position - 0x85DA Hash - 0xCC2D4398 ^0xCC2D4398
{
	int num;

	num = func_49(func_57(iParam0), iParam1);
	return num;
}

int func_57(int iParam0) // Position - 0x85F2 Hash - 0xF08C5B2E ^0xA4BC8B65
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_58(num);

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
				return &_STOPWATCH_IS_INITIALIZED;
		
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

	return 14835;
}

int func_58(int iParam0) // Position - 0x896D Hash - 0x195EBE32 ^0x195EBE32
{
	return iParam0 / 32;
}

int func_59(int iParam0, Hash hParam1) // Position - 0x897A Hash - 0xF58FDC97 ^0x803B7A87
{
	int tattooShopDlcItemIndex;

	tattooShopDlcItemIndex = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);

	if (tattooShopDlcItemIndex != -1)
		return 129 + tattooShopDlcItemIndex;

	return -1;
}

int func_60(int iParam0, BOOL bParam1) // Position - 0x899C Hash - 0xEB464A98 ^0x46B2B9C2
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

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x8E4F Hash - 0x6099A833 ^0x79D555BB
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_62(int iParam0) // Position - 0x8E6B Hash - 0x615EB052 ^0x99D537F1
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
			num = 152;
			break;
	
		case 1:
			str = "CLO_HST_A_1";
			str2 = "CLO_HST_AD_1";
			str3 = "ForHire";
			str4 = "MPTShirtAwards2";
			num = 144;
			break;
	
		case 2:
			str = "CLO_HST_A_2";
			str2 = "CLO_HST_AD_3";
			str3 = "LiveALittle";
			str4 = "MPTShirtAwards2";
			num = 150;
			break;
	
		case 5:
			str = "CLO_HST_A_5";
			str2 = "CLO_HST_AD_6";
			str3 = "Decorated";
			str4 = "MPTShirtAwards2";
			num = 147;
			break;
	
		case 7:
			str = "CLO_HST_A_7";
			str2 = "CLO_HST_AD_8";
			str3 = "OneManArmy";
			str4 = "MPTShirtAwards2";
			num = 159;
			break;
	
		case 6:
			str = "CLO_HST_A_6";
			str2 = "CLO_HST_AD_7";
			str3 = "PsychoKiller";
			str4 = "MPTShirtAwards2";
			num = 155;
			break;
	
		case 8:
			str = "CLO_HST_A_8";
			str2 = "CLO_HST_AD_2";
			str3 = "ShotCaller";
			str4 = "MPTShirtAwards2";
			num = 145;
			break;
	
		case 34:
			str = "CLO_HSTM_U_3_0";
			str2 = "CLO_HST_AD_10";
			str3 = "EliteTshirt1";
			str4 = "MPTShirtAwards2";
			break;
	}

	num3 = 5;

	if (func_64(num, 9) != 1)
		num2 = 1;

	if (iParam0 != 34)
	{
		type = func_52(num, num3, 9);
		type2 = func_50(num, -1);
	}
	else
	{
		type = PV_COMP_HAND;
		type2 = func_63();
	}

	func_65(str, str2, str3, str4, type, type2, -1, num2, &Global_1667211, 192, 166);
	return;
}

ePedComponentType func_63() // Position - 0x8FEA Hash - 0xB5C560A6 ^0xD0BECCC7
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

int func_64(int iParam0, int iParam1) // Position - 0x9049 Hash - 0xC3AA83C2 ^0xC3AA83C2
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
	
		case 148:
			return 1;
	
		case 149:
			return 1;
	
		case 150:
			return 1;
	
		case 151:
			return 1;
	
		case 152:
			return 1;
	
		case 67:
			return 1;
	
		case 142:
			return 1;
	
		case 143:
			return 1;
	
		case 144:
			return 1;
	
		case 145:
			return 1;
	
		case 146:
			return 1;
	
		case 147:
			return 1;
	
		case 153:
			return 1;
	
		case 154:
			return 1;
	
		case 155:
			return 1;
	
		case 156:
			return 1;
	
		case 157:
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
	
		case 164:
			return 1;
	
		case 165:
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
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
	}

	return 0;
}

void func_65(char* sParam0, char* sParam1, char* sParam2, char* sParam3, ePedComponentType epctParam4, ePedComponentType epctParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10) // Position - 0x95B5 Hash - 0x97BC0479 ^0xB60E75C
{
	int i;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (uParam8->f_1[i] == 0)
		{
			func_67(i, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_66(i, sParam0, sParam1, epctParam4, epctParam5, uParam8);
			uParam8->f_1[i] = 1;
			uParam8->f_473[i] = iParam9;
			uParam8->f_486[i] = iParam10;
			i = 12;
		}
	}

	return;
}

void func_66(int iParam0, char* sParam1, char* sParam2, ePedComponentType epctParam3, ePedComponentType epctParam4, var uParam5) // Position - 0x961F Hash - 0x5E7192A9 ^0x5CD8F263
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_14[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_111[iParam0 /*8*/], sParam2, 32);
	uParam5->f_208[iParam0] = epctParam3;
	uParam5->f_221[iParam0] = epctParam4;
	return;
}

void func_67(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5) // Position - 0x9653 Hash - 0x98627D03 ^0x96B39ED2
{
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_234[iParam0 /*8*/], sParam1, 32);
	TEXT_LABEL_ASSIGN_STRING(&uParam5->f_331[iParam0 /*8*/], sParam2, 32);
	uParam5->f_428[iParam0] = func_68(iParam4);
	uParam5->f_441[iParam0] = iParam3;
	return;
}

int func_68(int iParam0) // Position - 0x968E Hash - 0x8EB6B77 ^0x8EB6B77
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

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x96DD Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_7();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_70(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x96F9 Hash - 0xF946839F ^0xF946839F
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
			iParam1 = func_81(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_79(iParam0, iParam2);
			break;
	}

	num = func_79(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_78(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_77(iParam0, iParam2, false);
	str2 = func_76(iParam0, iParam1, iParam2, false);
	str3 = func_75(iParam0, iParam2);
	str4 = func_74(iParam0, iParam2);
	type = func_73(iParam0, num, iParam2);
	type2 = func_72(iParam0);
	num2 = func_71(iParam1);
	type3 = func_73(iParam0, num2, iParam2);
	value = type - type3;
	value2 = type2 - type3;
	num3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	func_65(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 192, 166);
	return;
}

int func_71(int iParam0) // Position - 0x9835 Hash - 0xD5290EEB ^0xD5290EEB
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

ePedComponentType func_72(int iParam0) // Position - 0x988E Hash - 0xBA4508AD ^0xCA4E89B0
{
	Hash hash;
	Hash statHash;
	ePedComponentType outValue;

	hash = Global_1680145[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return PV_COMP_HEAD;
}

ePedComponentType func_73(int iParam0, int iParam1, int iParam2) // Position - 0x98B6 Hash - 0x80259D9F ^0x80259D9F
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

char* func_74(int iParam0, int iParam1) // Position - 0x9A0C Hash - 0xB53505BE ^0x998CC222
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

char* func_75(int iParam0, int iParam1) // Position - 0x9A5A Hash - 0xB53505BE ^0x48CA7BD0
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

char* func_76(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9AA8 Hash - 0x9457DC86 ^0x89124A70
{
	iParam2 == 9;
	bParam3;
	func_73(iParam0, iParam1, iParam2) == PV_COMP_BERD;

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

char* func_77(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9B09 Hash - 0x3A600D1B ^0x7532AA9F
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

int func_78(int iParam0, int iParam1) // Position - 0x9B5C Hash - 0x4ED58738 ^0x4ED58738
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

int func_79(int iParam0, int iParam1) // Position - 0x9B9B Hash - 0x34E0BCB7 ^0x34E0BCB7
{
	if (func_80(func_72(iParam0), func_73(iParam0, 5, iParam1)))
		return 5;

	if (func_80(func_72(iParam0), func_73(iParam0, 4, iParam1)))
		return 5;

	if (func_80(func_72(iParam0), func_73(iParam0, 3, iParam1)))
		return 4;

	if (func_80(func_72(iParam0), func_73(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

BOOL func_80(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x9C0C Hash - 0x4017309C ^0x4017309C
{
	if (epctParam1 <= epctParam0)
		return true;

	return false;
}

int func_81(int iParam0, int iParam1) // Position - 0x9C20 Hash - 0xE4D6AF96 ^0xE4D6AF96
{
	if (!func_80(func_72(iParam0), func_73(iParam0, 5, iParam1)))
		return 0;

	if (!func_80(func_72(iParam0), func_73(iParam0, 4, iParam1)))
		return 2;

	if (!func_80(func_72(iParam0), func_73(iParam0, 3, iParam1)))
		return 3;

	if (!func_80(func_72(iParam0), func_73(iParam0, 2, iParam1)))
		return 4;

	return 5;
}

void func_82(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x9C95 Hash - 0x41A48735 ^0x41A48735
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
			if (func_54(iParam0, -1))
				iParam1 = 0;
			break;
	
		case 7:
			if (func_54(iParam0, -1) == false)
				iParam1 = 5;
			break;
	}

	num2 = func_87(iParam0);

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

	str = func_86(iParam0, num);
	str2 = func_85(iParam0, num);
	str3 = func_84(iParam0, num);
	str4 = func_83(iParam0, num);
	type = func_52(num2, iParam1, 0);
	type2 = func_50(num2, -1);

	if (num2 == 64)
	{
		type = PV_COMP_BERD;
		type2 = PV_COMP_HEAD;
	}

	num3 = -1;

	if (func_54(iParam0, -1))
	{
		type2 = func_52(func_87(iParam0), iParam1, 0);
	
		if (num2 == 64)
			type2 = PV_COMP_BERD;
	}

	iParam1 = 1;
	func_65(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 192, 166);
	return;
}

char* func_83(int iParam0, int iParam1) // Position - 0x9DBF Hash - 0xEBE3BF0D ^0x69768373
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

char* func_84(int iParam0, int iParam1) // Position - 0x9EA4 Hash - 0xEBE3BF0D ^0x18068614
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

char* func_85(int iParam0, int iParam1) // Position - 0xA350 Hash - 0xEBE3BF0D ^0xBB12C59
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

char* func_86(int iParam0, int iParam1) // Position - 0xA7FC Hash - 0xEBE3BF0D ^0xB915D9B9
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

int func_87(int iParam0) // Position - 0xACB8 Hash - 0xB2994853 ^0xB2994853
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

void func_88(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0xADA3 Hash - 0x9C09F769 ^0x9C09F769
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
			iParam1 = func_103(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_102();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_101(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_102();
	str = func_99(iParam0, iParam2, false);
	str2 = func_98(iParam0, iParam1, iParam2, false);
	str3 = func_97(iParam0, iParam2);
	str4 = func_96(iParam0, iParam2);
	type = func_94(iParam0, num, iParam2);
	type2 = func_91(iParam0, num, iParam2);
	num2 = func_71(iParam1);
	num3 = func_94(iParam0, num2, iParam2);
	value = type - num3;
	value2 = type2 - num3;

	if (func_90(iParam0))
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
				value = func_94(iParam0, num2, iParam2);
				value2 = func_91(iParam0, num, iParam2);
				break;
		}
	
		num4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	}

	func_65(str, str2, str3, str4, type, type2, num4, iParam1, uParam3, 192, 166);
	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0xB1F1 Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

BOOL func_90(int iParam0) // Position - 0xB20F Hash - 0xBA4508AD ^0x15EAB79A
{
	Hash hash;
	Hash statHash;
	BOOL outValue;

	hash = Global_1680153[iParam0];
	statHash = hash;

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

ePedComponentType func_91(int iParam0, int iParam1, int iParam2) // Position - 0xB237 Hash - 0x448ADEA9 ^0x448ADEA9
{
	iParam1 == 5;
	iParam2 == 0;
	func_90(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_92(iParam0);
	
		case 4:
			return func_92(iParam0);
	
		case 5:
			return func_92(iParam0);
	
		case 7:
			return func_92(iParam0);
	
		case 8:
			return func_92(iParam0);
	
		case 9:
			return func_92(iParam0);
	
		case 10:
			return func_92(iParam0);
	
		case 11:
			return func_92(iParam0);
	
		default:
		
	}

	if (func_90(iParam0) == true)
		return 1;

	return 0;
}

int func_92(int iParam0) // Position - 0xB2E5 Hash - 0x2F4FB14B ^0x2F4FB14B
{
	int num;
	int num2;
	int i;

	num2 = _MPPLY_STAT_GET_INT(func_93(iParam0));

	for (i = 0; i < 29; i = i + 1)
	{
		if (IS_BIT_SET(num2, i))
			num = num + 1;
	}

	return num;
}

int func_93(int iParam0) // Position - 0xB31C Hash - 0x344C68C0 ^0x6A43D808
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

int func_94(int iParam0, int iParam1, int iParam2) // Position - 0xB3A0 Hash - 0x4E4451D9 ^0x4E4451D9
{
	iParam1 == 5;
	iParam2 == 0;
	func_90(iParam0);

	switch (iParam0)
	{
		case 3:
			return func_95();
	
		case 4:
			return func_95();
	
		case 5:
			return func_95();
	
		case 7:
			return func_95();
	
		case 8:
			return func_95();
	
		case 9:
			return func_95();
	
		case 10:
			return func_95();
	
		case 11:
			return func_95();
	
		default:
		
	}

	return 1;
}

int func_95() // Position - 0xB42D Hash - 0xBD2AF76F ^0xBD2AF76F
{
	return 29;
}

char* func_96(int iParam0, int iParam1) // Position - 0xB437 Hash - 0x4FC5F938 ^0x4F4AE67F
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

char* func_97(int iParam0, int iParam1) // Position - 0xB562 Hash - 0x4FC5F938 ^0x501A2157
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

char* func_98(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xB68D Hash - 0x9457DC86 ^0x9D73B224
{
	iParam2 == 9;
	bParam3;
	func_94(iParam0, iParam1, iParam2) == 1;

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
			return "AWD_GANGOP9d" /*Complete The Doomsday Heist in order, with the same team of 4 players, on hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 7:
			return "AWD_GANGOP4d" /*Complete The Doomsday Heist in order with the same team of 2 players.*/;
	
		case 8:
			return "AWD_GANGOP6d" /*Complete The Doomsday Heist in order with the same team of 3 players.*/;
	
		case 9:
			return "AWD_GANGOP5d" /*Complete The Doomsday Heist in order, with the same team of 2 players, on hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 10:
			return "AWD_GANGOP8d" /*Complete The Doomsday Heist in order, with the same team of 3 players, on hard difficulty, without losing any lives on Setups and Finales.*/;
	
		case 11:
			return "AWD_GANGO10d" /*Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale.*/;
	
		default:
		
	}

	return "";
}

char* func_99(int iParam0, int iParam1, BOOL bParam2) // Position - 0xB7CB Hash - 0x3A600D1B ^0xAD6BA0D
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
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0);
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xB8B7 Hash - 0xA17D549C ^0xB1B82963
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

int func_101(int iParam0, int iParam1) // Position - 0xB959 Hash - 0x5DED1051 ^0x5DED1051
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

int func_102() // Position - 0xBA41 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_103(int iParam0) // Position - 0xBA4A Hash - 0xCC5E629C ^0xCC5E629C
{
	if (func_90(iParam0))
		return 5;

	return 0;
}

void func_104(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0xBA60 Hash - 0x9C09F769 ^0x9C09F769
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
			iParam1 = func_117(iParam0);
			break;
	
		case 7:
		case 8:
			iParam1 = func_116();
			break;
	}

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_115(iParam0, iParam2) != 1)
				iParam1 = 1;

	num = func_116();
	str = func_114(iParam0, iParam2, false);
	str2 = func_113(iParam0, iParam1, iParam2, false);
	str3 = func_112(iParam0, iParam2);
	str4 = func_111(iParam0, iParam2);
	type = func_110(iParam0, num, iParam2);

	if (func_108(iParam0, -1) == true)
		type2 = 1;
	else
		type2 = 0;

	num3 = func_71(iParam1);
	num4 = func_110(iParam0, num3, iParam2);
	value = type - num4;
	value2 = type2 - num4;

	switch (iParam0)
	{
		case 15:
			type2 = func_49(1153, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 16:
			type2 = func_49(1152, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 12:
			type2 = func_49(1088, -1);
		
			if (type2 > 25)
				type2 = 25;
		
			value = 25;
			value2 = type2;
			break;
	
		case 25:
			if (func_108(iParam0, -1))
			{
				type2 = func_49(2117, -1) * 7;
				num2 = func_49(2116, -1);
				type2 = PV_COMP_TEEF;
				value = 7;
				value2 = type2;
			}
			else
			{
				type2 = func_49(2117, -1) * 7;
				num2 = func_49(2116, -1);
				type2 = type2 + num2;
			
				if (type2 > PV_COMP_TEEF)
					type2 = PV_COMP_TEEF;
			
				value = 7;
				value2 = type2;
			}
			break;
	
		case 26:
			if (func_108(iParam0, -1))
			{
				type2 = func_49(2117, -1) * 7;
				num2 = func_49(2116, -1);
				type2 = 28;
				value = 28;
				value2 = type2;
			}
			else
			{
				type2 = func_49(2117, -1) * 7;
				num2 = func_49(2116, -1);
				type2 = type2 + num2;
			
				if (type2 > 28)
					type2 = 28;
			
				value = 28;
				value2 = type2;
			}
			break;
	
		case 186:
			if (func_108(iParam0, -1))
			{
				type2 = 43;
				value = 43;
				value2 = type2;
			}
			else
			{
				type2 = func_106();
				value = 43;
				value2 = type2;
			}
			break;
	
		case 191:
			if (func_108(iParam0, -1))
			{
				type2 = PV_COMP_LOWR;
				value = 4;
				value2 = type2;
			}
			else
			{
				type2 = func_49(7254, -1);
				value = 4;
				value2 = type2;
			}
			break;
	
		case 190:
			if (func_108(iParam0, -1))
			{
				type2 = 100;
				value = 100;
				value2 = type2;
			}
			else
			{
				type2 = func_49(7238, -1);
				value = 100;
				value2 = type2;
			}
			break;
	
		case 59:
			if (func_108(iParam0, -1))
			{
				type2 = PV_COMP_FEET;
				value = 6;
				value2 = type2;
			}
			else
			{
				type2 = func_105();
				value = 6;
				value2 = type2;
			}
			break;
	}

	if (func_108(iParam0, -1))
		num5 = 100;
	else
		num5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);

	func_65(str, str2, str3, str4, type, type2, num5, iParam1, uParam3, iParam0, 166);
	return;
}

ePedComponentType func_105() // Position - 0xBDB6 Hash - 0xB7F7A5B ^0x45D8062C
{
	int num;

	num = func_49(8283, -1);

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

ePedComponentType func_106() // Position - 0xBE1B Hash - 0xE6722AD4 ^0xE6722AD4
{
	int i;
	int num;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_107(i) != 0)
			num = num + 1;
	}

	return num;
}

int func_107(int iParam0) // Position - 0xBE48 Hash - 0x7ED19C7F ^0x71BF7239
{
	switch (iParam0)
	{
		case 0:
			return func_49(12586, -1);
	
		case 1:
			return func_49(12587, -1);
	
		case 2:
			return func_49(12588, -1);
	
		case 3:
			return func_49(12589, -1);
	
		case 4:
			return func_49(12590, -1);
	
		case 5:
			return func_49(12591, -1);
	
		case 6:
			return func_49(12592, -1);
	
		case 7:
			return func_49(12593, -1);
	
		case 8:
			return func_49(12594, -1);
	
		case 9:
			return func_49(12595, -1);
	
		case 10:
			return func_49(12596, -1);
	
		case 11:
			return func_49(12597, -1);
	
		case 12:
			return func_49(12598, -1);
	
		case 13:
			return func_49(12599, -1);
	
		case 14:
			return func_49(12600, -1);
	
		case 15:
			return func_49(12601, -1);
	
		case 16:
			return func_49(12602, -1);
	
		case 17:
			return func_49(12603, -1);
	
		case 18:
			return func_49(12604, -1);
	
		case 19:
			return func_49(12605, -1);
	
		case 20:
			return func_49(12606, -1);
	
		case 21:
			return func_49(12607, -1);
	
		case 22:
			return func_49(12608, -1);
	
		case 23:
			return func_49(12609, -1);
	
		case 24:
			return func_49(12610, -1);
	
		case 25:
			return func_49(12611, -1);
	
		case 26:
			return func_49(12612, -1);
	
		case 27:
			return func_49(12613, -1);
	
		case 28:
			return func_49(12614, -1);
	
		case 29:
			return func_49(12615, -1);
	
		case 30:
			return func_49(12616, -1);
	
		case 31:
			return func_49(12617, -1);
	
		case 32:
			return func_49(12618, -1);
	
		case 33:
			return func_49(12619, -1);
	
		case 34:
			return func_49(12620, -1);
	
		case 35:
			return func_49(12621, -1);
	
		case 36:
			return func_49(12622, -1);
	
		case 37:
			return func_49(12623, -1);
	
		case 38:
			return func_49(12624, -1);
	
		case 39:
			return func_49(12625, -1);
	
		case 40:
			return func_49(12626, -1);
	
		case 41:
			return func_49(12627, -1);
	
		case 42:
			return func_49(12628, -1);
	
		case 43:
			return func_49(12629, -1);
	
		case 44:
			return func_49(12630, -1);
	
		case 45:
			return func_49(12631, -1);
	
		case 46:
			return func_49(12632, -1);
	
		case 47:
			return func_49(12633, -1);
	
		case 48:
			return func_49(12634, -1);
	
		case 49:
			return func_49(12635, -1);
	
		default:
			break;
	}

	return 0;
}

BOOL func_108(int iParam0, int iParam1) // Position - 0xC1AE Hash - 0x5137F6D6 ^0x3B535546
{
	Hash statHash;
	int outValue;

	statHash = func_109(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_109(int iParam0, int iParam1) // Position - 0xC1D2 Hash - 0x1C1291EE ^0x14578FFE
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_47(iParam1));
}

int func_110(int iParam0, int iParam1, int iParam2) // Position - 0xC1E8 Hash - 0xE8154449 ^0xE8154449
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
	
		case 186:
			return 43;
	
		case 191:
			return 4;
	
		case 190:
			return 100;
	
		case 59:
			return 6;
	}

	return 1;
}

char* func_111(int iParam0, int iParam1) // Position - 0xC27F Hash - 0xA6133955 ^0xA6133955
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
	
		case 184:
			return "MPAwardHeists";
	
		case 183:
			return "MPAwardHeists";
	
		case 186:
			return "MPAwardHeists";
	
		case 187:
			return "MPAwardHeists";
	
		case 188:
			return "MPAwardHeists";
	
		case 189:
			return "MPAwardNightclub";
	
		case 190:
			return "MPAwardNightclub";
	
		case 191:
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

	return "";
}

char* func_112(int iParam0, int iParam1) // Position - 0xCA32 Hash - 0xCE5A442 ^0xB5CB0DDF
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
	
		case 184:
			return "CantTouchThis";
	
		case 183:
			return "FairPlay";
	
		case 186:
			return "JackOfAllTrades";
	
		case 187:
			return "ItTakesTwo";
	
		case 188:
			return "Showroom";
	
		case 189:
			return "Coordinated";
	
		case 190:
			return "HotSpot";
	
		case 191:
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

	return "";
}

char* func_113(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xD3D0 Hash - 0xFF6398F4 ^0x7FBD3BCF
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
	
		case 184:
			return "AWS_751";
	
		case 188:
			return "AWS_763";
	
		case 183:
			return "AWS_754";
	
		case 186:
			return "AWS_765";
	
		case 187:
			return "AWS_756";
	
		case 189:
			return "AWS_793";
	
		case 190:
			return "AWS_794";
	
		case 191:
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
			return "AWS_1010";
	
		case 144:
			return "AWS_987";
	
		case 145:
			return "AWS_988";
	
		case 146:
			return "AWS_989";
	
		case 147:
			return "AWS_990";
	
		case 148:
			return "AWS_991";
	
		case 149:
			return "AWS_992";
	
		case 150:
			return "AWS_993";
	
		case 151:
			return "AWS_994";
	
		case 152:
			return "AWS_995";
	
		case 153:
			return "AWS_996";
	
		case 154:
			return "AWS_997";
	
		case 155:
			return "AWS_998";
	
		case 156:
			return "AWS_999";
	
		case 157:
			return "AWS_1000";
	
		case 158:
			return "AWS_1001";
	
		case 159:
			return "AWS_1012";
	
		case 160:
			return "AWS_1013";
	
		case 161:
			return "AWS_1014";
	
		case 162:
			return "AWS_1015";
	
		case 163:
			return "AWS_1016";
	
		case 164:
			return "AWS_1017";
	
		case 165:
			return "AWS_1018";
	
		case 166:
			return "AWS_1024";
	
		case 167:
			return "AWS_1025";
	
		case 168:
			return "AWS_1026";
	
		case 169:
			return "AWS_1027";
	
		case 170:
			return "AWS_1028";
	
		case 171:
			return "AWS_1029";
	
		case 172:
			return "AWS_1030";
	
		case 173:
			return "AWS_1031";
	
		case 174:
			return "AWS_1032";
	
		case 175:
			return "AWS_1033";
	
		case 176:
			return "AWS_1034";
	
		case 177:
			return "AWS_1035";
	
		case 178:
			return "AWS_1036";
	
		case 179:
			return "AWS_1037";
	
		case 180:
			return "AWS_1044";
	
		case 181:
			return "AWS_1045";
	
		case 182:
			return "AWS_1049";
	}

	return "";
}

char* func_114(int iParam0, int iParam1, BOOL bParam2) // Position - 0xDD6E Hash - 0x3A600D1B ^0x42833CA6
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
	
		case 184:
			return "AWT_751";
	
		case 183:
			return "AWT_754";
	
		case 186:
			return "AWT_765";
	
		case 188:
			return "AWT_763";
	
		case 187:
			return "AWT_756";
	
		case 189:
			return "AWT_793";
	
		case 190:
			return "AWT_794";
	
		case 191:
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
			return "AWT_919" /*Its A Steal*/;
	
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
			return "AWT_1010";
	
		case 144:
			return "AWT_987";
	
		case 145:
			return "AWT_988";
	
		case 146:
			return "AWT_989";
	
		case 147:
			return "AWT_990";
	
		case 148:
			return "AWT_991";
	
		case 149:
			return "AWT_992";
	
		case 150:
			return "AWT_993";
	
		case 151:
			return "AWT_994";
	
		case 152:
			return "AWT_995";
	
		case 153:
			return "AWT_996";
	
		case 154:
			return "AWT_997";
	
		case 155:
			return "AWT_998";
	
		case 156:
			return "AWT_999";
	
		case 157:
			return "AWT_1000";
	
		case 158:
			return "AWT_1001";
	
		case 159:
			return "AWT_1012";
	
		case 160:
			return "AWT_1013";
	
		case 161:
			return "AWT_1014";
	
		case 162:
			return "AWT_1015";
	
		case 163:
			return "AWT_1016";
	
		case 164:
			return "AWT_1017";
	
		case 165:
			return "AWT_1018";
	
		case 166:
			return "AWT_1024";
	
		case 167:
			return "AWT_1025";
	
		case 168:
			return "AWT_1026";
	
		case 169:
			return "AWT_1027";
	
		case 170:
			return "AWT_1028";
	
		case 171:
			return "AWT_1029";
	
		case 172:
			return "AWT_1030";
	
		case 173:
			return "AWT_1031";
	
		case 174:
			return "AWT_1032";
	
		case 175:
			return "AWT_1033";
	
		case 176:
			return "AWT_1034";
	
		case 177:
			return "AWT_1035";
	
		case 178:
			return "AWT_1036";
	
		case 179:
			return "AWT_1037";
	
		case 180:
			return "AWT_1044";
	
		case 181:
			return "AWT_1045";
	
		case 182:
			return "AWT_1049";
	}

	return "";
}

int func_115(int iParam0, int iParam1) // Position - 0xE6E8 Hash - 0xC3AA83C2 ^0xC3AA83C2
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
	
		case 184:
			return 1;
	
		case 183:
			return 1;
	
		case 186:
			return 1;
	
		case 188:
			return 1;
	
		case 187:
			return 1;
	
		case 189:
			return 1;
	
		case 190:
			return 1;
	
		case 191:
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

	return 0;
}

int func_116() // Position - 0xED28 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_117(int iParam0) // Position - 0xED31 Hash - 0xA754738A ^0xA754738A
{
	if (func_108(iParam0, -1))
		return 5;

	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0xED48 Hash - 0xF946839F ^0xF946839F
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
			iParam1 = func_124(iParam0, iParam2);
			break;
	
		case 7:
		case 8:
			iParam1 = func_123(iParam0, iParam2);
			break;
	}

	num = func_123(iParam0, iParam2);

	if (iParam1 != 0)
		if (iParam1 != 1)
			if (func_64(iParam0, iParam2) != 1)
				iParam1 = 1;

	str = func_122(iParam0, iParam2);
	str2 = func_121(iParam0, iParam1, iParam2);
	str3 = func_120(iParam0, iParam1, iParam2);
	str4 = func_119(iParam0, iParam1, iParam2);
	type = func_52(iParam0, num, iParam2);
	type2 = func_50(iParam0, -1);
	num2 = func_71(iParam1);
	type3 = func_52(iParam0, num2, iParam2);
	value = type - type3;
	value2 = type2 - type3;
	num3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f);
	func_65(str, str2, str3, str4, type, type2, num3, iParam1, uParam3, 192, iParam0);
	return;
}

char* func_119(int iParam0, int iParam1, int iParam2) // Position - 0xEE88 Hash - 0x955FB005 ^0x955FB005
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
	
		case 148:
			return "MPAwardHeists";
	
		case 149:
			return "MPAwardHeists";
	
		case 150:
			return "MPAwardHeists";
	
		case 151:
			return "MPAwardHeists";
	
		case 152:
			return "MPAwardHeists";
	
		case 67:
			return "MPAwardHeists";
	
		case 142:
			return "MPAwardHeists";
	
		case 143:
			return "MPAwardHeists";
	
		case 144:
			return "MPAwardHeists";
	
		case 145:
			return "MPAwardHeists";
	
		case 146:
			return "MPAwardHeists";
	
		case 147:
			return "MPAwardHeists";
	
		case 153:
			return "MPAwardHeists";
	
		case 154:
			return "MPAwardHeists";
	
		case 155:
			return "MPAwardHeists";
	
		case 156:
			return "MPAwardHeists";
	
		case 157:
			return "MPAwardHeists";
	
		case 158:
			return "MPAwardHeists";
	
		case 159:
			return "MPAwardHeists";
	
		case 160:
			return "MPAwardHeists";
	
		case 161:
			return "MPAwardNightclub";
	
		case 162:
			return "MPAwardNightclub";
	
		case 163:
			return "MPAwardNightclub";
	
		case 164:
			return "MPAwardNightclub";
	
		case 165:
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
	}

	return "";
}

char* func_120(int iParam0, int iParam1, int iParam2) // Position - 0xF59F Hash - 0x6F80A5CB ^0x469DDE12
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
	
		case 148:
			return "Captured";
	
		case 149:
			return "ThePostman";
	
		case 150:
			return "GimmeThat";
	
		case 151:
			return "NoYouDont";
	
		case 152:
			return "DeathDefying";
	
		case 67:
			return "dailyduty";
	
		case 142:
			return "TheBigTime";
	
		case 143:
			return "BePrepared";
	
		case 144:
			return "ForHire";
	
		case 145:
			return "ShotCaller";
	
		case 146:
			return "LiveALittle";
	
		case 147:
			return "Decorated";
	
		case 153:
			return "LightsOut";
	
		case 154:
			return "InControl";
	
		case 155:
			return "PsychoKiller";
	
		case 156:
			return "CalmDown";
	
		case 157:
			return "StillStanding";
	
		case 158:
			return "OneAndOnly";
	
		case 159:
			return "OneManArmy";
	
		case 160:
			return "MovingDay";
	
		case 161:
			return "Solomun";
	
		case 162:
			return "TaleOfUs";
	
		case 163:
			return "Dixon";
	
		case 164:
			return "TheBlackMadonna";
	
		case 165:
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
	}

	return "";
}

char* func_121(int iParam0, int iParam1, int iParam2) // Position - 0xFDD9 Hash - 0xFBEEF23B ^0xFBEEF23B
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
	
		case 148:
			return "AWS_740";
	
		case 149:
			return "AWS_741";
	
		case 150:
			return "AWS_742";
	
		case 151:
			return "AWS_743";
	
		case 152:
			return "AWS_744";
	
		case 67:
			return "AWS_782";
	
		case 142:
			return "AWS_745";
	
		case 143:
			return "AWS_746";
	
		case 144:
			return "AWS_747";
	
		case 145:
			return "AWS_748";
	
		case 146:
			return "AWS_749";
	
		case 147:
			return "AWS_752";
	
		case 153:
			return "AWS_755";
	
		case 154:
			return "AWS_757";
	
		case 155:
			return "AWS_758";
	
		case 156:
			return "AWS_759";
	
		case 157:
			return "AWS_760";
	
		case 158:
			return "AWS_761";
	
		case 159:
			return "AWS_762";
	
		case 160:
			return "AWS_764";
	
		case 161:
			if (iParam1 == 5)
				return "AWS_788_4";
			else if (iParam1 == 4)
				return "AWS_788_3";
			else if (iParam1 == 3)
				return "AWS_788_2";
			else
				return "AWS_788_1";
			break;
	
		case 162:
			if (iParam1 == 5)
				return "AWS_789_4";
			else if (iParam1 == 4)
				return "AWS_789_3";
			else if (iParam1 == 3)
				return "AWS_789_2";
			else
				return "AWS_789_1";
			break;
	
		case 163:
			if (iParam1 == 5)
				return "AWS_790_4";
			else if (iParam1 == 4)
				return "AWS_790_3";
			else if (iParam1 == 3)
				return "AWS_790_2";
			else
				return "AWS_790_1";
			break;
	
		case 164:
			if (iParam1 == 5)
				return "AWS_791_4";
			else if (iParam1 == 4)
				return "AWS_791_3";
			else if (iParam1 == 3)
				return "AWS_791_2";
			else
				return "AWS_791_1";
			break;
	
		case 165:
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
			return "AWS_1002";
	
		case 121:
			if (iParam1 == 5)
				return "AWS_1003d";
			else if (iParam1 == 4)
				return "AWS_1003c";
			else if (iParam1 == 3)
				return "AWS_1003b";
			else
				return "AWS_1003a";
			break;
	
		case 122:
			if (iParam1 == 5)
				return "AWS_1004d";
			else if (iParam1 == 4)
				return "AWS_1004c";
			else if (iParam1 == 3)
				return "AWS_1004b";
			else
				return "AWS_1004a";
			break;
	
		case 123:
			if (iParam1 == 5)
				return "AWS_1005d";
			else if (iParam1 == 4)
				return "AWS_1005c";
			else if (iParam1 == 3)
				return "AWS_1005b";
			else
				return "AWS_1005a";
			break;
	
		case 124:
			if (iParam1 == 5)
				return "AWS_1006d";
			else if (iParam1 == 4)
				return "AWS_1006c";
			else if (iParam1 == 3)
				return "AWS_1006b";
			else
				return "AWS_1006a";
			break;
	
		case 125:
			if (iParam1 == 5)
				return "AWS_1007d";
			else if (iParam1 == 4)
				return "AWS_1007c";
			else if (iParam1 == 3)
				return "AWS_1007b";
			else
				return "AWS_1007a";
			break;
	
		case 126:
			return "AWS_1008";
	
		case 127:
			if (iParam1 == 5)
				return "AWS_1009d";
			else if (iParam1 == 4)
				return "AWS_1009c";
			else if (iParam1 == 3)
				return "AWS_1009b";
			else
				return "AWS_1009a";
			break;
	
		case 128:
			if (iParam1 == 5)
				return "AWS_1019d";
			else if (iParam1 == 4)
				return "AWS_1019c";
			else if (iParam1 == 3)
				return "AWS_1019b";
			else
				return "AWS_1019a";
			break;
	
		case 129:
			if (iParam1 == 5)
				return "AWS_1020d";
			else if (iParam1 == 4)
				return "AWS_1020c";
			else if (iParam1 == 3)
				return "AWS_1020b";
			else
				return "AWS_1020a";
			break;
	
		case 130:
			if (iParam1 == 5)
				return "AWS_1021d";
			else if (iParam1 == 4)
				return "AWS_1021c";
			else if (iParam1 == 3)
				return "AWS_1021b";
			else
				return "AWS_1021a";
			break;
	
		case 131:
			if (iParam1 == 5)
				return "AWS_1022d";
			else if (iParam1 == 4)
				return "AWS_1022c";
			else if (iParam1 == 3)
				return "AWS_1022b";
			else
				return "AWS_1022a";
			break;
	
		case 132:
			if (iParam1 == 5)
				return "AWS_1023d";
			else if (iParam1 == 4)
				return "AWS_1023c";
			else if (iParam1 == 3)
				return "AWS_1023b";
			else
				return "AWS_1023a";
			break;
	
		case 133:
			if (iParam1 == 5)
				return "AWS_1038d";
			else if (iParam1 == 4)
				return "AWS_1038c";
			else if (iParam1 == 3)
				return "AWS_1038b";
			else
				return "AWS_1038";
			break;
	
		case 134:
			if (iParam1 == 5)
				return "AWS_1039d";
			else if (iParam1 == 4)
				return "AWS_1039c";
			else if (iParam1 == 3)
				return "AWS_1039b";
			else
				return "AWS_1039";
			break;
	
		case 135:
			if (iParam1 == 5)
				return "AWS_1040d";
			else if (iParam1 == 4)
				return "AWS_1040c";
			else if (iParam1 == 3)
				return "AWS_1040b";
			else
				return "AWS_1040";
			break;
	
		case 136:
			if (iParam1 == 5)
				return "AWS_1041d";
			else if (iParam1 == 4)
				return "AWS_1041c";
			else if (iParam1 == 3)
				return "AWS_1041b";
			else
				return "AWS_1041";
			break;
	
		case 137:
			if (iParam1 == 5)
				return "AWS_1042d";
			else if (iParam1 == 4)
				return "AWS_1042c";
			else if (iParam1 == 3)
				return "AWS_1042b";
			else
				return "AWS_1042";
			break;
	
		case 138:
			if (iParam1 == 5)
				return "AWS_1043d";
			else if (iParam1 == 4)
				return "AWS_1043c";
			else if (iParam1 == 3)
				return "AWS_1043b";
			else
				return "AWS_1043";
			break;
	
		case 139:
			if (iParam1 == 5)
				return "AWS_1046d";
			else if (iParam1 == 4)
				return "AWS_1046c";
			else if (iParam1 == 3)
				return "AWS_1046b";
			else
				return "AWS_1046";
			break;
	
		case 140:
			if (iParam1 == 5)
				return "AWS_1047d";
			else if (iParam1 == 4)
				return "AWS_1047c";
			else if (iParam1 == 3)
				return "AWS_1047b";
			else
				return "AWS_1047";
			break;
	
		case 141:
			if (iParam1 == 5)
				return "AWS_1048d";
			else if (iParam1 == 4)
				return "AWS_1048c";
			else if (iParam1 == 3)
				return "AWS_1048b";
			else
				return "AWS_1048";
			break;
	}

	return "";
}

char* func_122(int iParam0, int iParam1) // Position - 0x1132B Hash - 0x4FC5F938 ^0xD3423E46
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
	
		case 148:
			return "AWT_740";
	
		case 149:
			return "AWT_741";
	
		case 150:
			return "AWT_742";
	
		case 151:
			return "AWT_743";
	
		case 152:
			return "AWT_744";
	
		case 67:
			return "AWT_782";
	
		case 142:
			return "AWT_745";
	
		case 143:
			return "AWT_746";
	
		case 144:
			return "AWT_747";
	
		case 145:
			return "AWT_748";
	
		case 146:
			return "AWT_749";
	
		case 147:
			return "AWT_752";
	
		case 153:
			return "AWT_755";
	
		case 154:
			return "AWT_757";
	
		case 155:
			return "AWT_758";
	
		case 156:
			return "AWT_759";
	
		case 157:
			return "AWT_760";
	
		case 158:
			return "AWT_761";
	
		case 159:
			return "AWT_762";
	
		case 160:
			return "AWT_764";
	
		case 161:
			return "AWT_788";
	
		case 162:
			return "AWT_789";
	
		case 163:
			return "AWT_790";
	
		case 164:
			return "AWT_791";
	
		case 165:
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
			return "AWT_1002";
	
		case 121:
			return "AWT_1003";
	
		case 122:
			return "AWT_1004";
	
		case 123:
			return "AWT_1005";
	
		case 124:
			return "AWT_1006";
	
		case 125:
			return "AWT_1007";
	
		case 126:
			return "AWT_1008";
	
		case 127:
			return "AWT_1009";
	
		case 128:
			return "AWT_1019";
	
		case 129:
			return "AWT_1020";
	
		case 130:
			return "AWT_1021";
	
		case 131:
			return "AWT_1022";
	
		case 132:
			return "AWT_1023";
	
		case 133:
			return "AWT_1038";
	
		case 134:
			return "AWT_1039";
	
		case 135:
			return "AWT_1040";
	
		case 136:
			return "AWT_1041";
	
		case 137:
			return "AWT_1042";
	
		case 138:
			return "AWT_1043";
	
		case 139:
			return "AWT_1046";
	
		case 140:
			return "AWT_1047";
	
		case 141:
			return "AWT_1048";
	}

	return "";
}

int func_123(int iParam0, int iParam1) // Position - 0x11B91 Hash - 0x1ED4FB3C ^0x1ED4FB3C
{
	if (func_80(func_50(iParam0, -1), func_52(iParam0, 5, iParam1)))
		return 5;

	if (func_80(func_50(iParam0, -1), func_52(iParam0, 4, iParam1)))
		return 5;

	if (func_80(func_50(iParam0, -1), func_52(iParam0, 3, iParam1)))
		return 4;

	if (func_80(func_50(iParam0, -1), func_52(iParam0, 2, iParam1)))
		return 3;

	return 2;
}

int func_124(int iParam0, int iParam1) // Position - 0x11C06 Hash - 0x98A9DA24 ^0x98A9DA24
{
	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 2, iParam1)))
		return 0;

	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 3, iParam1)))
		return 2;

	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 4, iParam1)))
		return 3;

	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 5, iParam1)))
		return 4;

	return 5;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x11C7F Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x11C95 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_127() // Position - 0x11CAB Hash - 0xCD0EE523 ^0x79A07C1C
{
	return *Global_262145.f_33140;
}

void func_128(var uParam0, var uParam1) // Position - 0x11CBD Hash - 0x2783E18B ^0xC0A986B8
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

	func_138(Global_1667211.f_473[uParam0->f_455]);
	func_130(Global_1667211.f_486[uParam0->f_455]);
	num3 = uParam1->f_5 + 1;
	num4 = iLocal_109 + 1;
	func_129(0, num3, num4, "HUD_PAGE" /*Page ~1~ of ~1~*/, false);
	return;
}

void func_129(int iParam0, int iParam1, int iParam2, const char* sParam3, BOOL bParam4) // Position - 0x11D4D Hash - 0xC5739C91 ^0xEC1A6124
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

void func_130(int iParam0) // Position - 0x11DAA Hash - 0x61A9348F ^0x61A9348F
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_137(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_137(iParam0))
		{
			offset = func_136(iParam0);
		
			if (func_133(iParam0))
				flag = true;
		}
	
		if (!IS_BIT_SET(Global_1667211.f_471, offset))
			MISC::SET_BIT(&(Global_1667211.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1667211.f_472, offset))
				MISC::SET_BIT(&(Global_1667211.f_472), offset);
	}

	if (func_132(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_132(iParam0))
		{
			offset2 = func_131(iParam0);
		
			if (func_133(iParam0))
				flag2 = true;
		}
	
		if (!IS_BIT_SET(Global_1667211.f_499, offset2))
			MISC::SET_BIT(&(Global_1667211.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1667211.f_500, offset2))
				MISC::SET_BIT(&(Global_1667211.f_500), offset2);
	}

	return;
}

int func_131(int iParam0) // Position - 0x11E80 Hash - 0xDB0AC7E7 ^0xDB0AC7E7
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

BOOL func_132(int iParam0) // Position - 0x11F00 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_133(int iParam0) // Position - 0x11F47 Hash - 0x4D49281D ^0x4D49281D
{
	int num;
	int num2;

	num = func_134(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_55(num2));
}

int func_134(int iParam0) // Position - 0x11F64 Hash - 0xBB7329A4 ^0xE8CDF20
{
	switch (func_135(iParam0))
	{
		case 758:
			return func_49(758, -1);
	
		case 759:
			return func_49(759, -1);
	
		case 760:
			return func_49(760, -1);
	
		case 761:
			return func_49(761, -1);
	
		case 8735:
			return func_49(8735, -1);
	
		case 12315:
			return func_49(12315, -1);
	
		default:
		
	}

	return 0;
}

int func_135(int iParam0) // Position - 0x11FDE Hash - 0xE07AE818 ^0x87BF4E0F
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_58(num);

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

	return 14835;
}

int func_136(int iParam0) // Position - 0x12056 Hash - 0x95C02DBF ^0x95C02DBF
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

BOOL func_137(int iParam0) // Position - 0x12090 Hash - 0xE48228D0 ^0xE48228D0
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

void func_138(int iParam0) // Position - 0x120B9 Hash - 0xF52016AA ^0xF52016AA
{
	int offset;
	BOOL flag;
	int offset2;
	BOOL flag2;

	if (func_142(iParam0))
	{
		offset = 0;
		flag = false;
	
		if (func_142(iParam0))
		{
			offset = func_141(iParam0);
			flag = func_108(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1667211.f_471, offset))
			MISC::SET_BIT(&(Global_1667211.f_471), offset);
	
		if (flag)
			if (!IS_BIT_SET(Global_1667211.f_472, offset))
				MISC::SET_BIT(&(Global_1667211.f_472), offset);
	}

	if (func_140(iParam0))
	{
		offset2 = 0;
		flag2 = false;
	
		if (func_140(iParam0))
		{
			offset2 = func_139(iParam0);
			flag2 = func_108(iParam0, -1);
		}
	
		if (!IS_BIT_SET(Global_1667211.f_499, offset2))
			MISC::SET_BIT(&(Global_1667211.f_499), offset2);
	
		if (flag2)
			if (!IS_BIT_SET(Global_1667211.f_500, offset2))
				MISC::SET_BIT(&(Global_1667211.f_500), offset2);
	}

	return;
}

int func_139(int iParam0) // Position - 0x12189 Hash - 0xEE599357 ^0xEE599357
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

BOOL func_140(int iParam0) // Position - 0x12271 Hash - 0xE48228D0 ^0xE48228D0
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

int func_141(int iParam0) // Position - 0x122E8 Hash - 0xEE599357 ^0xEE599357
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

BOOL func_142(int iParam0) // Position - 0x123D0 Hash - 0xE48228D0 ^0xE48228D0
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

int func_143(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x12447 Hash - 0xF0765A5B ^0xF0765A5B
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

void func_144(var uParam0, var uParam1) // Position - 0x125B1 Hash - 0x62526A8A ^0x793FEB11
{
	if (uParam1->f_5 > iLocal_109)
	{
		func_153(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}

	return;
}

void func_145() // Position - 0x125D2 Hash - 0x79374ACB ^0x79374ACB
{
	func_129(0, -1, -1, 0, false);
	return;
}

void func_146() // Position - 0x125E3 Hash - 0xEB25D9F ^0xEB25D9F
{
	func_147();
	func_129(0, -1, -1, 0, false);
	return;
}

void func_147() // Position - 0x125F8 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_148(false);
	return;
}

void func_148(BOOL bParam0) // Position - 0x12605 Hash - 0xD32FE308 ^0xD32FE308
{
	if (bParam0)
		func_149(0, 3, 0, 2, 0, false);
	else
		func_149(0, 2, 0, 2, 1, false);

	return;
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x12629 Hash - 0x5A814391 ^0x582E604A
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

void func_150(var uParam0) // Position - 0x1266C Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_463 = 1;
	return;
}

void func_151(var uParam0) // Position - 0x1267A Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_462 = 1;
	return;
}

void func_152(int iParam0, var uParam1) // Position - 0x12688 Hash - 0x6A26DC5D ^0x6A26DC5D
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
	return;
}

void func_153(var uParam0) // Position - 0x1269E Hash - 0xACEB12D7 ^0xACEB12D7
{
	func_154(uParam0);
	uParam0->f_460 = 1;
	return;
}

void func_154(var uParam0) // Position - 0x126B2 Hash - 0x84178B07 ^0x5FC3ABCF
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

void func_155(var uParam0) // Position - 0x1271B Hash - 0xAC97E5E4 ^0xAC97E5E4
{
	uParam0->f_475 = 1;
	return;
}

void func_156(int iParam0, var uParam1) // Position - 0x12729 Hash - 0x5AAB1292 ^0x5AAB1292
{
	uParam1->f_472 = iParam0;
	return;
}

void func_157(var uParam0) // Position - 0x12738 Hash - 0xACEB12D7 ^0xACEB12D7
{
	func_158(uParam0);
	uParam0->f_474 = 1;
	return;
}

void func_158(var uParam0) // Position - 0x1274C Hash - 0x1F26A9F4 ^0x82CC4440
{
	var unk;

	unk.f_1 = 20;
	unk.f_22 = 20;
	unk.f_343 = 20;
	unk.f_364 = 20;
	unk.f_385 = 20;
	unk.f_406 = 20;
	unk.f_427 = 20;
	unk.f_448 = 20;
	*uParam0 = { unk };
	return;
}

