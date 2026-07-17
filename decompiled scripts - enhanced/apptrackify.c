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
	var uLocal_12 = 0;
	var uLocal_13 = -2;
	var uLocal_14 = -2;
	var uLocal_15 = -2;
	var uLocal_16 = 5;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 2;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 2;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
#endregion

void main() // Position - 0x0 (0)
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
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	fLocal_44 = 9.99f;
	fLocal_45 = 0f;
	fLocal_46 = 0f;
	fLocal_47 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	BUILTIN::SETTIMERA(0);
	BUILTIN::SETTIMERB(0);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21666.f_1 != 9)
		{
			switch (Global_21666.f_1)
			{
				case 7:
					if (BUILTIN::TIMERA() > 125)
					{
						func_10();
						BUILTIN::SETTIMERA(0);
					}
				
					if (BUILTIN::TIMERB() > BUILTIN::FLOOR(fLocal_46) * 30 && BUILTIN::TIMERB() > 150)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						BUILTIN::SETTIMERB(0);
					}
				
					if (BUILTIN::TIMERB() > 2000)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "APP_FUNCTION");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						BUILTIN::SETTIMERB(0);
					}
					break;
			
				case 8:
					if (func_6(FRONTEND_CONTROL, Global_21634, 0))
					{
						func_5();
						Global_21644 = true;
						func_10();
						func_7();
					
						if (Global_21666.f_1 > 3)
							Global_21666.f_1 = 7;
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
			Global_21668 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x144 (324)
{
	if (Global_21666.f_1 == 1 || Global_21666.f_1 == 3 || Global_21666.f_1 == 0 || Global_21610 == 1)
	{
		Global_21653 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x187 (391)
{
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	MISC::CLEAR_BIT(&Global_9503, 22);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(int iParam0, int iParam1) // Position - 0x1BA (442)
{
	Global_4525176[iParam0] = iParam1;
	return;
}

BOOL func_4() // Position - 0x1CC (460)
{
	if (Global_10142 == 1 || Global_21666.f_1 < 7)
	{
		Global_21653 = 1;
		return true;
	}

	return false;
}

void func_5() // Position - 0x1F5 (501)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_21655, true);

	return;
}

BOOL func_6(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x216 (534)
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

void func_7() // Position - 0x288 (648)
{
	if (Global_21654)
	{
		func_8(Global_21647, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201" /*LLAMAR*/, 0, 0, 0, 0);
		func_8(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213" /*NO*/, 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_21647, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_8(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_9502, 17);
	return;
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x31A (794)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

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

void func_9(const char* sParam0) // Position - 0x3CD (973)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_10() // Position - 0x3DF (991)
{
	int i;
	BOOL flag;

	if (func_18() == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			uLocal_37 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fLocal_40 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			func_17();
			func_16();
			func_15();
			fLocal_41 = 360f - fLocal_40;
			fLocal_44 = fLocal_44 - fLocal_41;
		
			if (fLocal_44 < 0f)
				fLocal_44 = fLocal_44 + 360f;
		
			if (iLocal_48 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_9503, 30))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(fLocal_44));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(fLocal_45));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_9503, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			
				if (IS_BIT_SET(Global_9503, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				if (IS_BIT_SET(Global_9504, 1))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_47);
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			fLocal_40 == fLocal_40;
			func_14(Global_21647, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		uLocal_37 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fLocal_40 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		Global_4525198 > 21;
	
		for (i = 0; i < Global_4525198; i = i + 1)
		{
			func_13(i);
			func_12(i);
			func_11(i);
			fLocal_41 = 360f - fLocal_40;
			fLocal_44 = fLocal_44 - fLocal_41;
		
			if (fLocal_44 < 0f)
				fLocal_44 = fLocal_44 + 360f;
		
			if (iLocal_48 == 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				flag = false;
			
				switch (i)
				{
					case 0:
						if (IS_BIT_SET(Global_4524923, 5))
							flag = true;
						break;
				
					case 1:
						if (IS_BIT_SET(Global_4524923, 6))
							flag = true;
						break;
				
					case 2:
						if (IS_BIT_SET(Global_4524923, 7))
							flag = true;
						break;
				
					case 3:
						if (IS_BIT_SET(Global_4524923, 8))
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
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(fLocal_44));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::FLOOR(fLocal_45));
				}
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			
				if (IS_BIT_SET(Global_9503, 22))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				if (IS_BIT_SET(Global_9503, 29))
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				else
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fLocal_47);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_4525176[i]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			fLocal_40 == fLocal_40;
			func_14(Global_21647, "DISPLAY_VIEW", 23f, BUILTIN::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		}
	}

	return;
}

float func_11(int iParam0) // Position - 0x68E (1678)
{
	fLocal_42 = Global_4525112[iParam0 /*3*/] - uLocal_37;
	fLocal_43 = BUILTIN::COS((3.14159f / 180f) * uLocal_37) * (Global_4525112[iParam0 /*3*/].f_1 - uLocal_37.f_1);
	fLocal_44 = MISC::ATAN2(fLocal_42, fLocal_43);

	if (fLocal_44 < 0f)
		fLocal_44 = fLocal_44 + 360f;

	return fLocal_44;
}

float func_12(int iParam0) // Position - 0x6E4 (1764)
{
	fLocal_46 = BUILTIN::SQRT(BUILTIN::VDIST2(Global_4525112[iParam0 /*3*/], uLocal_37));
	fLocal_47 = Global_4525112[iParam0 /*3*/].f_2 - uLocal_37.f_2;
	return fLocal_46;
}

float func_13(int iParam0) // Position - 0x717 (1815)
{
	fLocal_45 = BUILTIN::SQRT(((Global_4525112[iParam0 /*3*/] - uLocal_37) * (Global_4525112[iParam0 /*3*/] - uLocal_37)) + ((Global_4525112[iParam0 /*3*/].f_1 - uLocal_37.f_1) * (Global_4525112[iParam0 /*3*/].f_1 - uLocal_37.f_1)));
	return fLocal_45;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x75E (1886)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

float func_15() // Position - 0x7C1 (1985)
{
	fLocal_42 = Global_24147 - uLocal_37;
	fLocal_43 = BUILTIN::COS((3.14159f / 180f) * uLocal_37) * (Global_24147.f_1 - uLocal_37.f_1);
	fLocal_44 = MISC::ATAN2(fLocal_42, fLocal_43);

	if (fLocal_44 < 0f)
		fLocal_44 = fLocal_44 + 360f;

	return fLocal_44;
}

float func_16() // Position - 0x80D (2061)
{
	fLocal_46 = BUILTIN::SQRT(BUILTIN::VDIST2(Global_24147, uLocal_37));
	fLocal_47 = Global_24147.f_2 - uLocal_37.f_2;
	return fLocal_46;
}

float func_17() // Position - 0x836 (2102)
{
	fLocal_45 = BUILTIN::SQRT(((Global_24147 - uLocal_37) * (Global_24147 - uLocal_37)) + ((Global_24147.f_1 - uLocal_37.f_1) * (Global_24147.f_1 - uLocal_37.f_1)));
	return fLocal_45;
}

int func_18() // Position - 0x869 (2153)
{
	if (Global_80362 == true)
		return 1;

	return 0;
}

