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
	var uLocal_16 = 15;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	BOOL bLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	BOOL bLocal_42 = 0;
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
	fLocal_38 = 0.82f;
	fLocal_39 = 0.42f;
	fLocal_40 = 0f;
	fLocal_41 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	bLocal_37 = true;
	func_27();
	func_26();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					func_21();
				
					if (bLocal_37)
						func_18();
					else
						func_12();
					break;
			
				case 8:
					func_21();
					func_12();
				
					if (func_11(FRONTEND_CONTROL, Global_20898, 0))
					{
						func_10();
						Global_20908 = true;
						func_9(Global_20911, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
					
						if (Global_20930.f_1 > 3)
							Global_20930.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
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

BOOL func_1() // Position - 0x113 Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x156 Hash - 0x79088A01 ^0x82A78E7B
{
	func_7();

	if (func_4(0))
		func_3();

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x172 Hash - 0x53295875 ^0x53295875
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
	return;
}

BOOL func_4(int iParam0) // Position - 0x1EF Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x211 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_6(iParam0, Global_44042);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x222 Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_7() // Position - 0x403 Hash - 0xC65DFBA5 ^0xD68DB962
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x422 Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_9(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44B Hash - 0x5F496D0E ^0x86F8205
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

void func_10() // Position - 0x4AE Hash - 0x67F72294 ^0x9E7C3C8C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

BOOL func_11(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x4CF Hash - 0xBB00BE4E ^0xA27687FD
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

void func_12() // Position - 0x541 Hash - 0xEC2ABBE8 ^0x3344C7D8
{
	if (Global_20908 == false)
	{
		if (func_11(FRONTEND_CONTROL, Global_20899, 0))
		{
			func_15();
			Global_20908 = true;
			_UPDATE_CURRENT_PLAYER_CHARACTER();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
			iLocal_34 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_34))
			{
				SYSTEM::WAIT(0);
			}
		
			Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_259 = uLocal_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_34)];
			func_13(Global_20911, "SET_HEADER", &Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				func_9(Global_20911, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			else
				func_9(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(int iParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x638 Hash - 0xD2A7E1F6 ^0x3BA00BEB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_14(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_14(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_14(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_14(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_14(const char* sParam0) // Position - 0x693 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_15() // Position - 0x6A5 Hash - 0x86A964D6 ^0x3188DDA9
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_16();
	}

	return;
}

void func_16() // Position - 0x6CA Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_17())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_17() // Position - 0x6DE Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79389)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4543362 || flag)
		return true;

	return true;
}

void func_18() // Position - 0x725 Hash - 0x55924E1E ^0x55924E1E
{
	Global_20908 = true;
	iLocal_36 = 0;
	bLocal_37 = false;
	func_19();
	return;
}

void func_19() // Position - 0x73B Hash - 0x973B2A9 ^0xC5CFFCAA
{
	var unk;
	int i;
	int num;
	int num2;

	func_9(Global_20911, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	iLocal_32 = 0;
	unk = 15;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_84[num2] = 5000;
	
		while (num < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_84[num] < Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_84[num2])
					{
						num2 = num;
						func_20(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_104[num2]), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[i] = num2;
		unk[num2] = 1;
	
		if (Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_124[i] == 1)
			iLocal_32 = iLocal_32 + 1;
	}

	func_9(Global_20911, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", &Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_36 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20918)
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x942 Hash - 0x39E054FF ^0x41D02682
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
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_14(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_14(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_14(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_14(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_21() // Position - 0x9F5 Hash - 0xFDECAEB0 ^0xE7593BB9
{
	if (bLocal_42)
		if (SYSTEM::TIMERA() > 50)
			bLocal_42 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (func_11(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, 0))
		{
			if (iLocal_33 > 0)
				iLocal_33 = iLocal_33 - 1;
		
			func_24();
		}
	
		if (func_11(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, 0))
		{
			iLocal_33 = iLocal_33 + 1;
		
			if (iLocal_33 == iLocal_32)
				iLocal_33 = 0;
		
			func_22();
		}
	}

	if (bLocal_42 == false)
	{
		if (func_11(FRONTEND_CONTROL, Global_20906, 0))
		{
			if (iLocal_33 > 0)
				iLocal_33 = iLocal_33 - 1;
		
			func_24();
			bLocal_42 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_11(FRONTEND_CONTROL, Global_20907, 0))
		{
			iLocal_33 = iLocal_33 + 1;
		
			if (iLocal_33 == iLocal_32)
				iLocal_33 = 0;
		
			func_22();
			bLocal_42 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_22() // Position - 0xAA2 Hash - 0xFB702830 ^0xC27AF572
{
	func_9(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_23();
	return;
}

void func_23() // Position - 0xADD Hash - 0x47667904 ^0x5056AC19
{
	if (func_17())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_24() // Position - 0xB00 Hash - 0x97640CFF ^0xFB00F185
{
	func_9(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_25();
	return;
}

void func_25() // Position - 0xB3B Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_17())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

void func_26() // Position - 0xB5E Hash - 0x62300F2B ^0x183A13A0
{
	var unk;
	int value;
	int num;
	int num2;

	iLocal_32 = 0;
	unk = 15;
	value = 0;
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	while (value < 9)
	{
		num = 0;
		num2 = 9;
		Global_9605[Global_20930 /*2811*/][num2 /*281*/] = 5000;
	
		while (num < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (num == 0)
					{
						if (Global_9605[Global_20930 /*2811*/][num /*281*/] < Global_9605[Global_20930 /*2811*/][num2 /*281*/])
						{
							num2 = num;
							func_20(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(value), -1f, -1f, -1f, &(Global_9605[Global_20930 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[value] = num2;
		unk[num2] = 1;
	
		if (Global_9605[Global_20930 /*2811*/][value /*281*/].f_280 == 1)
			iLocal_32 = iLocal_32 + 1;
	
		value = value + 1;
	}

	func_9(Global_20911, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_20918)
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_20(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

void func_27() // Position - 0xCF9 Hash - 0x62DD9502 ^0xE4AB0EE2
{
	if (Global_44042 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xD20 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
				Global_20930 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
				Global_20930 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
				Global_20930 = CHAR_TREVOR;
			else
				Global_20930 = CHAR_MICHAEL;
	}
	else
	{
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20930 == _CHAR_NULL)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_79389)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_20930 > CHAR_MULTIPLAYER)
			Global_20930 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xDC2 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_30();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_30() // Position - 0xDDB Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_31(character) && !func_35(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_31(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_31(eCharacter echParam0) // Position - 0xED8 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xEE4 Hash - 0xAC4E9801 ^0xB379A75F
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xF21 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_31(character))
		return func_34(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_34(eCharacter echParam0) // Position - 0xF46 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_35(int iParam0) // Position - 0xF55 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

