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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (SYSTEM::TIMERA() > 125)
					{
						func_10();
						SYSTEM::SETTIMERA(0);
					}
				
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_27) * 30 && SYSTEM::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
				
					if (SYSTEM::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						SYSTEM::SETTIMERB(0);
					}
					break;
			
				case 8:
					if (func_6(FRONTEND_CONTROL, Global_20898, 0))
					{
						func_5();
						Global_20908 = true;
						func_10();
						func_7();
					
						if (Global_20930.f_1 > 3)
							Global_20930.f_1 = 7;
					}
					break;
			
				default:
					break;
			}
		
			if (func_4())
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

BOOL func_1() // Position - 0x144 Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x187 Hash - 0x1A3876A6 ^0xCEA00C89
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	MISC::CLEAR_BIT(&Global_8801, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(int iParam0, int iParam1) // Position - 0x1BA Hash - 0x656FCE1C ^0x656FCE1C
{
	Global_4543337[iParam0] = iParam1;
	return;
}

BOOL func_4() // Position - 0x1CC Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x1F5 Hash - 0x67F72294 ^0x9E7C3C8C
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

BOOL func_6(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x216 Hash - 0xBB00BE4E ^0xA27687FD
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

void func_7() // Position - 0x288 Hash - 0x43D9AEB1 ^0x43D9AEB1
{
	if (Global_20918)
	{
		func_8(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*CALL*/, 0, 0, 0, 0);
		func_8(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_8(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x31A Hash - 0x39E054FF ^0x41D02682
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
		func_9(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_9(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_9(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_9(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_9(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_9(const char* sParam0) // Position - 0x3CD Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_10() // Position - 0x3DF Hash - 0xAC011F5F ^0xDA48B360
{
	int i;
	BOOL flag;

	if (func_18() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			uLocal_18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fLocal_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			fLocal_22 = 360f - fLocal_21;
			fLocal_25 = fLocal_25 - fLocal_22;
		
			if (fLocal_25 < 0f)
				fLocal_25 = fLocal_25 + 360f;
		
			if (iLocal_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_8801, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_8801, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_8801, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				if (IS_BIT_SET(Global_8802, 1))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			fLocal_21 == fLocal_21;
			func_14(Global_20911, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		uLocal_18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fLocal_21 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		Global_4543359 > 21;
	
		for (i = 0; i < Global_4543359; i = i + 1)
		{
			func_13(i);
			func_12(i);
			func_11(i);
			fLocal_22 = 360f - fLocal_21;
			fLocal_25 = fLocal_25 - fLocal_22;
		
			if (fLocal_25 < 0f)
				fLocal_25 = fLocal_25 + 360f;
		
			if (iLocal_29 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				flag = false;
			
				switch (i)
				{
					case 0:
						if (IS_BIT_SET(Global_4543084, 5))
							flag = true;
						break;
				
					case 1:
						if (IS_BIT_SET(Global_4543084, 6))
							flag = true;
						break;
				
					case 2:
						if (IS_BIT_SET(Global_4543084, 7))
							flag = true;
						break;
				
					case 3:
						if (IS_BIT_SET(Global_4543084, 8))
							flag = true;
						break;
				}
			
				if (flag)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_25));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::FLOOR(fLocal_26));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_8801, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				if (IS_BIT_SET(Global_8801, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_28);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4543337[i]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			fLocal_21 == fLocal_21;
			func_14(Global_20911, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

float func_11(int iParam0) // Position - 0x68E Hash - 0xE51B5B68 ^0x20814A41
{
	fLocal_23 = Global_4543273[iParam0 /*3*/] - uLocal_18;
	fLocal_24 = SYSTEM::COS((3.14159f / 180f) * uLocal_18) * (Global_4543273[iParam0 /*3*/].f_1 - uLocal_18.f_1);
	fLocal_25 = MISC::ATAN2(fLocal_23, fLocal_24);

	if (fLocal_25 < 0f)
		fLocal_25 = fLocal_25 + 360f;

	return fLocal_25;
}

float func_12(int iParam0) // Position - 0x6E4 Hash - 0xE93D342 ^0x6C411E1F
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_4543273[iParam0 /*3*/], uLocal_18));
	fLocal_28 = Global_4543273[iParam0 /*3*/].f_2 - uLocal_18.f_2;
	return fLocal_27;
}

float func_13(int iParam0) // Position - 0x717 Hash - 0x5E79A7AB ^0xF52C1666
{
	fLocal_26 = SYSTEM::SQRT(((Global_4543273[iParam0 /*3*/] - uLocal_18) * (Global_4543273[iParam0 /*3*/] - uLocal_18)) + ((Global_4543273[iParam0 /*3*/].f_1 - uLocal_18.f_1) * (Global_4543273[iParam0 /*3*/].f_1 - uLocal_18.f_1)));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x75E Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

float func_15() // Position - 0x7C1 Hash - 0xA3520A48 ^0x89AEB346
{
	fLocal_23 = Global_23392 - uLocal_18;
	fLocal_24 = SYSTEM::COS((3.14159f / 180f) * uLocal_18) * (Global_23392.f_1 - uLocal_18.f_1);
	fLocal_25 = MISC::ATAN2(fLocal_23, fLocal_24);

	if (fLocal_25 < 0f)
		fLocal_25 = fLocal_25 + 360f;

	return fLocal_25;
}

float func_16() // Position - 0x80D Hash - 0x77F95A63 ^0x7F7B8A43
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_23392, uLocal_18));
	fLocal_28 = Global_23392.f_2 - uLocal_18.f_2;
	return fLocal_27;
}

float func_17() // Position - 0x836 Hash - 0xDD68BD4D ^0x96424199
{
	fLocal_26 = SYSTEM::SQRT(((Global_23392 - uLocal_18) * (Global_23392 - uLocal_18)) + ((Global_23392.f_1 - uLocal_18.f_1) * (Global_23392.f_1 - uLocal_18.f_1)));
	return fLocal_26;
}

int func_18() // Position - 0x869 Hash - 0x1B91F518 ^0x1B91F518
{
	if (Global_79389 == true)
		return 1;

	return 0;
}

