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
	BOOL bLocal_27 = 0;
	BOOL bLocal_28 = 0;
	BOOL bLocal_29 = 0;
	BOOL bLocal_30 = 0;
	int iLocal_31 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int numUnits;
	int num;
	var entityCoords;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Interior interiorFromEntity;

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
	iLocal_26 = -1;
	bLocal_30 = true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("exile_city_denial")) > 1)
	{
		Global_44007 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_42(18);
	func_41();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	numUnits = 2;
	num = 0;

	while (!bLocal_29)
	{
		bLocal_29 = true;
	
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
		{
			Global_44007 = 0;
		
			if (!func_40(130))
			{
				func_39(18);
				func_38();
			}
			else if (func_40(131))
			{
				func_39(18);
				func_38();
			}
		
			switch (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP())
			{
				case 16:
					func_39(18);
					func_38();
					break;
			
				case 2:
					func_38();
					break;
			
				case 1:
					func_25(1628462442);
					func_25(1791324372);
					func_25(-240877892);
					func_25(1806999335);
					func_25(2054503592);
					func_25(-2009081795);
					bLocal_27 = 0;
				
					while (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						SYSTEM::WAIT(1000);
					}
				
					bLocal_29 = false;
					break;
			}
		}
	}

	while (true)
	{
		if (num > 0)
		{
			num = num - SYSTEM::TIMERA();
			SYSTEM::SETTIMERA(0);
		
			if (num < 0)
				num = 0;
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		bLocal_27 = func_24(entityCoords, &bLocal_30);
	
		if (Global_79660 || Global_79660.f_1)
			bLocal_27 = 0;
	
		flag = false;
		flag2 = false;
	
		if (func_40(131))
			flag = true;
	
		if (!func_40(130))
			flag = true;
	
		if (flag)
		{
			Global_44007 = 0;
			func_39(18);
			func_38();
		}
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			flag2 = true;
	
		Global_44007 = bLocal_27;
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					bLocal_27 = 0;
	
		if (bLocal_28 != bLocal_27)
		{
			if (!bLocal_27)
				func_20();
		
			if (bLocal_27 && !flag2)
			{
				flag3 = false;
				flag4 = true;
			
				while (flag4)
				{
					switch (func_18(&iLocal_26, 6, 12, false, 0))
					{
						case 0:
							flag4 = false;
							flag3 = false;
							break;
					
						case 1:
							flag4 = false;
							flag3 = true;
							break;
					
						default:
							SYSTEM::WAIT(0);
							break;
					}
				
					if (Global_79389)
						SCRIPT::TERMINATE_THIS_THREAD();
				}
			
				if (flag3)
				{
					PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
				
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					
						while (INTERIOR::IS_VALID_INTERIOR(interiorFromEntity))
						{
							SYSTEM::WAIT(5000);
							PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
						
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
								interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						}
					}
				
					if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_MICHAEL)
						if (!IS_BIT_SET(Global_113969.f_7691.f_923, 0))
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_113969.f_7691.f_923, 1))
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						else if (!IS_BIT_SET(Global_113969.f_7691.f_923, 2))
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
					else if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_TREVOR)
						if (!IS_BIT_SET(Global_113969.f_7691.f_923, 3))
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_113969.f_7691.f_923, 4))
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						else if (!IS_BIT_SET(Global_113969.f_7691.f_923, 4))
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
				
					if (num == 0 && !flag2)
					{
						if (!func_9(0) && !func_9(4) && !func_9(3))
						{
							if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
						
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (bLocal_30)
									_DISPLAY_HELP_TEXT("CITDENAL" /*Michael and Trevor have been exiled from the city. If they enter the city, Martin's henchmen will track them down.*/, -1);
								else
									_DISPLAY_HELP_TEXT("CITDENAL_R" /*Michael and Trevor have been exiled by Martin. Approaching his ranch will cause his henchmen to attack.*/, -1);
							
								num = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_27 = false;
				}
			}
			else
			{
				func_20();
			}
		}
	
		if (bLocal_27)
			if (!MISC::IS_INCIDENT_VALID(iLocal_31))
				if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
	
		if (bLocal_27 && SYSTEM::TIMERB() > 60000)
		{
			SYSTEM::SETTIMERB(0);
			numUnits = numUnits + MISC::GET_RANDOM_INT_IN_RANGE(1, 2);
		
			if (numUnits < 8)
				if (MISC::IS_INCIDENT_VALID(iLocal_31))
					MISC::SET_INCIDENT_REQUESTED_UNITS(iLocal_31, DT_Gangs, numUnits);
				else if (MISC::GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(DT_Gangs) < 256)
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							MISC::CREATE_INCIDENT_WITH_ENTITY(DT_Gangs, PLAYER::PLAYER_PED_ID(), numUnits, 0f, &iLocal_31, 0, 0);
			else
				numUnits = 8;
		}
	
		bLocal_28 = bLocal_27;
	
		if (flag2)
		{
			Global_44007 = 0;
		
			if (bLocal_27)
				func_20();
		
			func_4();
		
			while (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				SYSTEM::WAIT(2000);
			}
		
			func_41();
			flag2 = false;
		}
	
		if (bLocal_27)
			SYSTEM::WAIT(0);
		else
			SYSTEM::WAIT(10000);
	
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_27)
				func_20();
		
			while (func_9(0) || func_9(4))
			{
				SYSTEM::WAIT(8000);
			}
		}
	}

	func_4();
	return;
}

BOOL func_1(int iParam0) // Position - 0x5EE Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x610 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_3(iParam0, Global_44042);
}

BOOL func_3(int iParam0, int iParam1) // Position - 0x621 Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_4() // Position - 0x802 Hash - 0x5460D424 ^0x5460D424
{
	func_7(0, true);
	func_7(2, true);
	func_7(1, true);
	func_5(0, true);
	func_5(1, true);
	func_5(3, true);
	func_5(2, true);
	return;
}

void func_5(int iParam0, BOOL bParam1) // Position - 0x834 Hash - 0xD7C53193 ^0x3211BD3D
{
	if (iParam0 == 7)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_113969.f_7232.f_17[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_113969.f_7232.f_17[iParam0], 0);

	MISC::DISABLE_POLICE_RESTART(Global_96652[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_96652[iParam0 /*9*/].f_7, false, false);
	return;
}

void func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x892 Hash - 0x3DFD90D4 ^0xB85FE721
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_33328[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_33328[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 18);
	
		if (Global_33325 == true)
			Global_33326 = true;
	
		Global_33325 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_33328[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_33328[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_33328[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_33328[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_33328[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

void func_7(int iParam0, BOOL bParam1) // Position - 0x992 Hash - 0x468B920B ^0x6B3AB821
{
	if (iParam0 == 5)
		return;

	if (bParam1)
		MISC::SET_BIT(&Global_113969.f_7232.f_11[iParam0], 0);
	else
		MISC::CLEAR_BIT(&Global_113969.f_7232.f_11[iParam0], 0);

	MISC::DISABLE_HOSPITAL_RESTART(Global_96716[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_96716[iParam0 /*9*/].f_7, 0, false);
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x9F0 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_9(int iParam0) // Position - 0xA07 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xA15 Hash - 0xA32DA1EA ^0xA32DA1EA
{
	int num;
	eCharacter i;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam4 < 3)
		if (iParam4 != iParam3)
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_113969.f_7691.f_136 < CHAR_MIKE_TREV_CONF)
	{
		num = iParam0;
	
		if (Global_113969.f_7691.f_911 == num)
			Global_113969.f_7691.f_911 = -1;
	
		num.f_3 = func_13(iParam1);
		num.f_1 = iParam11;
		num.f_2 = iParam2;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_5 = iParam6;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = iParam7;
		num.f_11 = -1;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		MISC::CLEAR_BIT(&(num.f_1), 1);
		MISC::CLEAR_BIT(&(num.f_1), 0);
	
		if (iParam7 != -1)
			MISC::SET_BIT(&(num.f_1), 11);
		else if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_113969.f_7691[Global_113969.f_7691.f_136 /*15*/] = { num };
		Global_113969.f_7691.f_136 = Global_113969.f_7691.f_136 + 1;
	
		for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
		{
			if (IS_BIT_SET(iParam2, i))
				func_11(i);
		}
	
		return 1;
	}

	return 0;
}

void func_11(eCharacter echParam0) // Position - 0xB8F Hash - 0xDBA91FA2 ^0x62041168
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_12(echParam0))
		return;

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_7691[i /*15*/].f_2, echParam0))
			if (Global_113969.f_7691[i /*15*/].f_3 > num)
				num = Global_113969.f_7691[i /*15*/].f_3;
	}

	for (j = CHAR_MICHAEL; j < Global_113969.f_7691.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113969.f_7691.f_651[j /*14*/].f_2, echParam0))
			if (Global_113969.f_7691.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113969.f_7691.f_919[echParam0] = num;
	return;
}

BOOL func_12(eCharacter echParam0) // Position - 0xC4D Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_13(int iParam0) // Position - 0xC59 Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCC3 Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xCEB Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD28 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_12(character))
		return func_17(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_17(eCharacter echParam0) // Position - 0xD4D Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

int func_18(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xD5C Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_1(0))
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44003; i = i + 1)
			{
				if (Global_44009[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44003 == 8)
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003 = Global_44003 + 1;
	
		if (iParam4 != 0)
			func_19(uParam0, iParam4);
	}

	return 2;
}

void func_19(var uParam0, int iParam1) // Position - 0xE93 Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_44003 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44003; i = i + 1)
	{
		if (Global_44009[i /*4*/] == *uParam0)
			Global_44009[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

void func_20() // Position - 0xEE2 Hash - 0xD8A4CAA0 ^0x46F634C3
{
	if (iLocal_26 != -1)
		func_21(&iLocal_26);

	func_25(1628462442);
	func_25(1791324372);
	func_25(-240877892);
	func_25(1806999335);
	func_25(2054503592);
	func_25(-2009081795);
	bLocal_27 = 0;
	bLocal_28 = false;
	Global_44007 = 0;
	MISC::DELETE_INCIDENT(iLocal_31);
	return;
}

void func_21(var uParam0) // Position - 0xF42 Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44004))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = false;
	Global_64164 = 0;
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xF7F Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_23();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_23() // Position - 0xF98 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_12(character) && !func_9(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_12(Global_113969.f_2366.f_539.f_4321))
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

int func_24(float fParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1095 Hash - 0x27F3BE95 ^0xD700E5EA
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
		return 0;

	if (fParam0.f_1 < 400f)
	{
		if (fParam0 < 1400f)
		{
			if (fParam0 > -1900f)
			{
				if (fParam0.f_1 > -3500f)
				{
					*uParam3 = 1;
					return 1;
				}
			}
		}
	}

	if (fParam0 < 1536.35f)
	{
		if (fParam0.f_1 > 1016.18f)
		{
			if (fParam0.f_1 < 1213.53f)
			{
				if (fParam0 > 1278.08f)
				{
					*uParam3 = 0;
					return 1;
				}
			}
		}
	}

	return 0;
}

int func_25(int iParam0) // Position - 0x1124 Hash - 0xA75852D8 ^0xD16C52E
{
	eCharacter i;
	int num;

	num = 0;

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_136; i = i + 1)
	{
		if (Global_113969.f_7691[i /*15*/] == iParam0)
		{
			if (Global_44589 != i)
			{
				func_37(i);
				func_29(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_198; i = i + 1)
	{
		if (Global_113969.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_29(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_650; i = i + 1)
	{
		if (Global_113969.f_7691.f_199[i /*15*/] == iParam0)
		{
			func_28(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_764; i = i + 1)
	{
		if (Global_113969.f_7691.f_651[i /*14*/] == iParam0)
		{
			func_27(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_866; i = i + 1)
	{
		if (Global_113969.f_7691.f_765[i /*10*/] == iParam0)
		{
			func_26(i);
			num = 1;
		}
	}

	return num;
}

void func_26(eCharacter echParam0) // Position - 0x124B Hash - 0xEC7DB104 ^0xEC7DB104
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113969.f_7691.f_866)
		return;

	if (Global_113969.f_7691.f_866 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113969.f_7691.f_866 - 2; i = i + 1)
		{
			Global_113969.f_7691.f_765[i /*10*/] = { Global_113969.f_7691.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_113969.f_7691.f_866 > CHAR_MICHAEL)
	{
		Global_113969.f_7691.f_765[Global_113969.f_7691.f_866 - 1 /*10*/] = { unk };
		Global_113969.f_7691.f_866 = Global_113969.f_7691.f_866 - 1;
	}

	return;
}

void func_27(eCharacter echParam0) // Position - 0x1304 Hash - 0xEC7DB104 ^0xEC7DB104
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113969.f_7691.f_764)
		return;

	if (Global_113969.f_7691.f_764 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113969.f_7691.f_764 - 2; i = i + 1)
		{
			Global_113969.f_7691.f_651[i /*14*/] = { Global_113969.f_7691.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_113969.f_7691.f_764 > CHAR_MICHAEL)
	{
		Global_113969.f_7691.f_651[Global_113969.f_7691.f_764 - 1 /*14*/] = { unk };
		Global_113969.f_7691.f_764 = Global_113969.f_7691.f_764 - 1;
	}

	func_11(CHAR_MICHAEL);
	func_11(CHAR_FRANKLIN);
	func_11(CHAR_TREVOR);
	return;
}

void func_28(int iParam0) // Position - 0x13CC Hash - 0x137FFF25 ^0x82C17B
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_650; i = i + 1)
	{
		if (Global_113969.f_7691.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_113969.f_7691.f_650 - 2; j = j + 1)
			{
				Global_113969.f_7691.f_199[j /*15*/] = { Global_113969.f_7691.f_199[j + 1 /*15*/] };
			}
		
			Global_113969.f_7691.f_199[Global_113969.f_7691.f_650 - 1 /*15*/] = { unk };
			Global_113969.f_7691.f_650 = Global_113969.f_7691.f_650 - 1;
			return;
		}
	}

	return;
}

void func_29(int iParam0) // Position - 0x1479 Hash - 0xCCFAC6AA ^0xEC431D32
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_198; i = i + 1)
	{
		if (Global_113969.f_7691.f_137[i /*15*/] == iParam0)
		{
			func_30(Global_113969.f_7691.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_113969.f_7691.f_198 - 2; j = j + 1)
			{
				Global_113969.f_7691.f_137[j /*15*/] = { Global_113969.f_7691.f_137[j + 1 /*15*/] };
			}
		
			Global_113969.f_7691.f_137[Global_113969.f_7691.f_198 - 1 /*15*/] = { unk };
			Global_113969.f_7691.f_198 = Global_113969.f_7691.f_198 - 1;
			return;
		}
	}

	return;
}

int func_30(eCharacter echParam0) // Position - 0x1535 Hash - 0x523E24 ^0x941A30AC
{
	eCharacter character;

	if (Global_118[echParam0 /*10*/].f_8 != 181)
	{
		if (func_36(echParam0, Global_20930) == 1)
		{
			func_35(echParam0, Global_20930, 0);
		
			if (func_34(echParam0, Global_20930) == 0)
			{
				character = Global_20930;
				func_31(echParam0, character);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_31(eCharacter echParam0, eCharacter echParam1) // Position - 0x158B Hash - 0xB539F413 ^0x1156AFD6
{
	eCharacter character;

	if (Global_118[echParam0 /*10*/].f_8 != 181)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_33(echParam0, character, 0);
			func_32(echParam0, character, 0);
		}
	}

	return;
}

void func_32(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x15C0 Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2169[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_33(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1605 Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2169[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_34(eCharacter echParam0, eCharacter echParam1) // Position - 0x164A Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2169[echParam0 /*29*/].f_24[echParam1];
}

void func_35(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1674 Hash - 0xB4ABC33 ^0x67322EDD
{
	Global_2169[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_113969.f_28054[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

int func_36(eCharacter echParam0, eCharacter echParam1) // Position - 0x16A5 Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2169[echParam0 /*29*/].f_19[echParam1];
}

void func_37(eCharacter echParam0) // Position - 0x16CF Hash - 0x4FA51D98 ^0x238D4E50
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_113969.f_7691.f_136)
		return;

	num = Global_113969.f_7691[echParam0 /*15*/].f_2;

	if (Global_113969.f_7691.f_136 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_113969.f_7691.f_136 - 2; i = i + 1)
		{
			Global_113969.f_7691[i /*15*/] = { Global_113969.f_7691[i + 1 /*15*/] };
		}
	}

	if (Global_113969.f_7691.f_136 > CHAR_MICHAEL)
	{
		Global_113969.f_7691[Global_113969.f_7691.f_136 - 1 /*15*/] = { unk };
		Global_113969.f_7691.f_136 = Global_113969.f_7691.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_11(i);
	}

	return;
}

void func_38() // Position - 0x17A7 Hash - 0xD4EB0EF ^0xEB7BBD6D
{
	func_20();
	func_4();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_39(int iParam0) // Position - 0x17BB Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113969.f_9088.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_113969.f_9088.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

BOOL func_40(int iParam0) // Position - 0x1812 Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_41() // Position - 0x183F Hash - 0x78ED966B ^0x78ED966B
{
	func_7(0, false);
	func_7(2, false);
	func_7(1, false);
	func_5(0, false);
	func_5(1, false);
	func_5(3, false);
	func_5(2, false);
	return;
}

int func_42(int iParam0) // Position - 0x1871 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113969.f_9088.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_113969.f_9088.f_99.f_219[num], offset);
	return 1;
}

