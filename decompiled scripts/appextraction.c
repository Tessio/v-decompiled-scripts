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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (iLocal_18 == 0)
	{
		func_11();
		func_10();
		iLocal_18 = 1;
		SYSTEM::SETTIMERA(0);
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (iLocal_18 == 1 && SYSTEM::TIMERA() > 1500)
					{
						func_6();
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 8:
					if (func_5(FRONTEND_CONTROL, Global_20898, 0))
					{
						func_4();
						Global_20908 = true;
					
						if (Global_20930.f_1 > 3)
							Global_20930.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_3())
				func_2();
		}
		else
		{
			Global_20932 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0xE5 Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x128 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x134 Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_4() // Position - 0x15D Hash - 0x50A0E425 ^0xF7057894
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

BOOL func_5(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x17D Hash - 0xBB00BE4E ^0xA27687FD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void func_6() // Position - 0x1EF Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_7();
	return;
}

void func_7() // Position - 0x1FB Hash - 0x6A52BF3 ^0xDDFA3A2D
{
	func_9(Global_20911, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(24);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);

	if (IS_BIT_SET(Global_4543084, 23))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		func_8("CELL_EXTBYOU" /*You*/);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543085);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543086);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543087);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365.f_2));
		func_8("CELL_BODYG" /*Guard*/);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543088);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543089);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543090);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368.f_2));
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		func_8("CELL_EXTBYOU" /*You*/);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543088);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543089);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543090);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543368.f_2));
		func_8("CELL_EXTBTARG" /*Target*/);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543085);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543086);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365.f_1));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543087);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(Global_4543365.f_2));
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_9(Global_20911, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
	return;
}

void func_8(const char* sParam0) // Position - 0x396 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_9(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3A8 Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_10() // Position - 0x40B Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_7();
	return;
}

void func_11() // Position - 0x417 Hash - 0xBB13B079 ^0xBB13B079
{
	if (Global_20918)
	{
		func_12(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		func_12(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		func_12(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_12(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x4A9 Hash - 0x39E054FF ^0x41D02682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_8(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_8(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_8(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_8(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_8(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

