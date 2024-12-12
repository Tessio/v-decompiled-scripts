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
	char* sLocal_18 = 0;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_31();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("controller_races")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("initial")) > 0)
	{
		SYSTEM::WAIT(0);
	}

	func_30();

	while (true)
	{
		if (func_27(9) || Global_98583)
			func_31();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (func_25())
			{
				func_23();
				func_19();
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				{
					switch (iLocal_26)
					{
						case 1:
							break;
					
						case 2:
							func_1();
							break;
					}
				}
			}
		}
	
		SYSTEM::WAIT(1000);
	}

	return;
}

void func_1() // Position - 0xE5 Hash - 0x8BDA54AC ^0x243D5D53
{
	int i;
	int num;
	float num2;

	if (func_11(8))
	{
		for (i = 0; i <= 5 - 1; i = i + 1)
		{
			num = func_10(i);
		
			if (IS_BIT_SET(Global_114135.f_24983.f_1, i))
			{
				if (IS_BIT_SET(Global_114135.f_24983.f_3, i))
				{
					num2 = SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_8(num, 0));
				
					if (num2 > 43681f)
					{
						if (!func_7(num))
						{
							if (!Global_114109[i])
							{
								func_3(num);
								func_2(num, true, true);
								MISC::CLEAR_BIT(&(Global_114135.f_24983.f_3), i);
							}
							else if (MISC::GET_GAME_TIMER() - Global_114115[i] > 60000)
							{
								Global_114109[i] = false;
								Global_114115[i] = MISC::GET_GAME_TIMER();
								func_3(num);
								func_2(num, true, true);
								MISC::CLEAR_BIT(&(Global_114135.f_24983.f_3), i);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_114135.f_24983.f_3), i);
						}
					}
					else if (func_7(num))
					{
						func_2(num, false, true);
					}
				}
				else if (!func_7(num))
				{
					if (!Global_114109[i])
					{
						func_3(num);
						func_2(num, true, true);
					}
					else if (MISC::GET_GAME_TIMER() - Global_114115[i] > 60000)
					{
						Global_114109[i] = false;
						Global_114115[i] = MISC::GET_GAME_TIMER();
						func_3(num);
						func_2(num, true, true);
					}
				}
			}
		}
	}

	return;
}

void func_2(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x253 Hash - 0x3DFD90D4 ^0xB85FE721
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33467[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	
		if (Global_33464 == true)
			Global_33465 = true;
	
		Global_33464 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33467[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33467[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

void func_3(int iParam0) // Position - 0x353 Hash - 0xEA6E290A ^0xEA6E290A
{
	func_6(iParam0, false, false);
	func_5(iParam0, true);
	func_4(iParam0, true);
	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x371 Hash - 0x47A120FC ^0x8AC0AE90
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 4);

	if (Global_33464 == true)
		Global_33465 = true;

	Global_33464 = true;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_5(int iParam0, BOOL bParam1) // Position - 0x3F4 Hash - 0x7A90E6B9 ^0xCDD88403
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 5);

	if (Global_33464 == true)
		Global_33465 = true;

	Global_33464 = true;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

void func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x477 Hash - 0x1EA6B920 ^0x270D6F7E
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_33467[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_33467[num /*23*/].f_11), 11);

	if (Global_33464 == true)
		Global_33465 = true;

	Global_33464 = true;
	MISC::SET_BIT(&(Global_33467[num /*23*/].f_11), 18);
	return;
}

BOOL func_7(int iParam0) // Position - 0x520 Hash - 0x7524A8DB ^0x409ED99B
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33467[num /*23*/].f_19);
}

Vector3 func_8(int iParam0, int iParam1) // Position - 0x55C Hash - 0xF209984A ^0xE2BBE156
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0f, 0f, 0f;

	return Global_33467[num /*23*/][iParam1 /*3*/];
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x59A Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

int func_10(int iParam0) // Position - 0x5AD Hash - 0x650EC9AC ^0x650EC9AC
{
	switch (iParam0)
	{
		case 0:
			return 86;
	
		case 1:
			return 87;
	
		case 2:
			return 88;
	
		case 3:
			return 89;
	
		case 4:
			return 90;
	}

	return 86;
}

BOOL func_11(int iParam0) // Position - 0x604 Hash - 0x6E8151DF ^0x6BC12465
{
	return IS_BIT_SET(Global_114135.f_9089.f_99.f_219[0], iParam0);
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x61D Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_13();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_13() // Position - 0x636 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_15(character) && !func_14(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_15(Global_114135.f_2367.f_539.f_4321))
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
			
				Global_114135.f_2367.f_539.f_4323 = character;
				Global_114135.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114135.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_14(int iParam0) // Position - 0x733 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44181 == iParam0;
}

BOOL func_15(eCharacter echParam0) // Position - 0x741 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x74D Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x78A Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_15(character))
		return func_18(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_18(eCharacter echParam0) // Position - 0x7AF Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2201[echParam0 /*29*/];
}

void func_19() // Position - 0x7BE Hash - 0x2678328E ^0x9E93B4A
{
	int i;
	int num;
	float num2;

	if (func_11(7))
	{
		for (i = 0; i <= 4 - 1; i = i + 1)
		{
			num = func_22(i);
		
			if (IS_BIT_SET(Global_114135.f_24980.f_2, i))
			{
				num2 = SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_8(num, 0));
			
				if (num2 > 43681f)
				{
					if (!func_7(num))
					{
						if (!Global_114099[i])
						{
							func_3(num);
							func_2(num, true, true);
							MISC::CLEAR_BIT(&(Global_114135.f_24980.f_2), i);
						}
						else if (MISC::GET_GAME_TIMER() - Global_114104[i] > 60000)
						{
							Global_114099[i] = false;
							Global_114104[i] = MISC::GET_GAME_TIMER();
							func_3(num);
							func_2(num, true, true);
							MISC::CLEAR_BIT(&(Global_114135.f_24980.f_2), i);
						}
					}
				}
				else if (func_7(num))
				{
					func_2(num, false, true);
				}
			}
			else if (!func_7(num))
			{
				if (!Global_114099[i])
				{
					func_3(num);
					func_2(num, true, true);
				}
				else if (MISC::GET_GAME_TIMER() - Global_114104[i] > 60000)
				{
					Global_114099[i] = false;
					Global_114104[i] = MISC::GET_GAME_TIMER();
					func_3(num);
					func_2(num, true, true);
				}
			}
			else if (!Global_114135.f_24980)
			{
				if (num == 82)
				{
					func_21(82);
					func_20(65, 1000);
					Global_114135.f_24980 = 1;
				}
			}
		}
	}

	return;
}

void func_20(int iParam0, int iParam1) // Position - 0x936 Hash - 0xEFDF2B54 ^0x1CE7BA3B
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_114135.f_8617[iParam0] = 1;
	Global_114135.f_8617.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_21(int iParam0) // Position - 0x973 Hash - 0x3B9358A9 ^0x3B9358A9
{
	func_6(iParam0, true, false);
	func_5(iParam0, true);
	func_4(iParam0, true);
	return;
}

int func_22(int iParam0) // Position - 0x991 Hash - 0x867B0123 ^0x867B0123
{
	switch (iParam0)
	{
		case 0:
			return 82;
	
		case 1:
			return 83;
	
		case 2:
			return 84;
	
		case 3:
			return 85;
	}

	return 82;
}

void func_23() // Position - 0x9DA Hash - 0xB69B2D2A ^0x3E7F996C
{
	switch (iLocal_26)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_24();
				iLocal_26 = 1;
			}
			else
			{
				iLocal_26 = 2;
			}
			break;
	
		case 1:
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 5)
				iLocal_26 = 2;
			break;
	
		case 2:
			if (CLOCK::GET_CLOCK_HOURS() < 20 && CLOCK::GET_CLOCK_HOURS() >= 5)
			{
				func_24();
				iLocal_26 = 1;
			}
			break;
	}

	return;
}

void func_24() // Position - 0xA5B Hash - 0x71BEF783 ^0x71BEF783
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		func_2(func_10(i), 0, false);
	}

	return;
}

BOOL func_25() // Position - 0xA83 Hash - 0xCCF13035 ^0x2EBBDAD8
{
	if (func_27(9))
		return false;

	if (func_26())
		return false;

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	return true;
}

BOOL func_26() // Position - 0xABF Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_27(int iParam0) // Position - 0xAD9 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44181 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xAFB Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_29(iParam0, Global_44181);
}

BOOL func_29(int iParam0, int iParam1) // Position - 0xB0C Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_30() // Position - 0xCED Hash - 0x795D3AA5 ^0x9E8A6BA
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		Global_114099[i] = false;
		Global_114104[i] = MISC::GET_GAME_TIMER();
	}

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		Global_114109[i] = false;
	}

	return;
}

void func_31() // Position - 0xD3B Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

