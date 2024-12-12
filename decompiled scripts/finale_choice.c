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
	BOOL bLocal_26 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;

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
	bLocal_26 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_47();

	func_46(20);
	func_45();
	func_44(1);
	func_44(0);
	func_44(2);
	func_44(13);
	func_44(12);
	Global_8924 = 1;
	func_43();

	if (!func_42(-1615086084))
		func_41(-1615086084, 2, 2, 2, 1, -1, 5);

	if (!func_42(-1970925435))
		func_41(-1970925435, 2, 0, 0, 1, -1, 5);

	if (!func_42(-1817481777))
		func_41(-1817481777, 2, 12, 3, 1, -1, 5);

	flag = false;

	while (func_40(23) && !func_39(134))
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!flag)
						{
							if (!(func_33() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_32()))
								if (func_13())
									flag = true;
						}
						else
						{
							if (bLocal_26)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_DOWN, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_UP, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_LEFT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_RIGHT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SELECT, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_CANCEL, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, true);
								PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, true);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
						
							switch (func_12())
							{
								case -1615086084:
									if (!func_42(-1989308064))
										func_8(-1989308064, 0, 1, CHAR_MICHAEL, 1, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 2, true);
									break;
							
								case -1970925435:
									if (!func_42(-1060930305))
										func_8(-1060930305, 0, CHAR_FRANKLIN, 2, 2, 6000, 6000, -1, 0, -1, 68);
									break;
							
								case -1060930305:
									func_7(12, 1);
									func_6(134, true);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 1, true);
									break;
							
								case -1817481777:
									func_7(12, 2);
									func_6(134, true);
									STATS::STAT_SET_INT(joaat("SP_FINAL_DECISION"), 3, true);
									break;
							
								default:
									if (!func_5(0))
										flag = false;
									else if (bLocal_26)
										if (func_4())
											bLocal_26 = false;
									break;
							}
						}
					}
				}
			}
		}
	
		SYSTEM::WAIT(0);
	}

	func_3(20);
	Global_101727 = false;
	func_1();
	func_47();
	return;
}

int func_1() // Position - 0x2F3 Hash - 0x9482CBBF ^0x8B17A994
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101727.f_8)
		if (Global_101727.f_10 > 0)
			return 0;
	else if (Global_101727.f_10 > 1)
		return 0;

	Global_101727.f_10 = Global_101727.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x33E Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79788, 0);
}

int func_3(int iParam0) // Position - 0x366 Hash - 0xFCBFD2CC ^0x1DBFD43E
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

	if (IS_BIT_SET(Global_114135.f_9089.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114135.f_9089.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

BOOL func_4() // Position - 0x3BD Hash - 0x3E5D30B5 ^0x66847798
{
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		return true;

	return false;
}

BOOL func_5(int iParam0) // Position - 0x3E6 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

void func_6(int iParam0, BOOL bParam1) // Position - 0x43D Hash - 0xD6D1968B ^0x2D6E7FD1
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_114135.f_9089.f_99.f_58[iParam0] == bParam1)
		return;

	Global_114135.f_9089.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x482 Hash - 0x87731F46 ^0xA2D22A46
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_114135.f_9089.f_99.f_205[iParam0] == iParam1)
		return;

	Global_114135.f_9089.f_99.f_205[iParam0] = iParam1;
	return;
}

int func_8(int iParam0, int iParam1, eCharacter echParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x4C7 Hash - 0x6CC0D4BA ^0x6CC0D4BA
{
	int num;
	int address;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam7 == 76)
		return 0;

	if (iParam8 == 235)
		return 0;

	if (iParam3 == echParam2)
		return 0;

	if (echParam2 != _CHAR_VIRTUAL_MP && echParam2 != CHAR_MICHAEL && echParam2 != CHAR_FRANKLIN && echParam2 != CHAR_TREVOR)
		return 0;

	if (Global_114135.f_7692.f_136 < CHAR_MIKE_TREV_CONF)
	{
		num = iParam0;
	
		if (Global_114135.f_7692.f_911 == num)
			Global_114135.f_7692.f_911 = -1;
	
		num.f_3 = func_11(iParam1);
		num.f_5 = iParam6;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_1 = iParam10;
		address = 0;
		MISC::SET_BIT(&address, echParam2);
		num.f_2 = address;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = -1;
		num.f_11 = -1;
		num.f_7 = iParam7;
		num.f_8 = iParam8;
		num.f_9 = iParam9;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::CLEAR_BIT(&(num.f_1), 1);
	
		if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_114135.f_7692[Global_114135.f_7692.f_136 /*15*/] = { num };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 + 1;
		func_9(echParam2);
		return 1;
	}

	return 0;
}

void func_9(eCharacter echParam0) // Position - 0x618 Hash - 0xDBA91FA2 ^0x62041168
{
	eCharacter i;
	int num;
	eCharacter j;

	num = 0;

	if (!func_10(echParam0))
		return;

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692[i /*15*/].f_2, echParam0))
			if (Global_114135.f_7692[i /*15*/].f_3 > num)
				num = Global_114135.f_7692[i /*15*/].f_3;
	}

	for (j = CHAR_MICHAEL; j < Global_114135.f_7692.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_114135.f_7692.f_651[j /*14*/].f_2, echParam0))
			if (Global_114135.f_7692.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_114135.f_7692.f_919[echParam0] = num;
	return;
}

BOOL func_10(eCharacter echParam0) // Position - 0x6D6 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

int func_11(int iParam0) // Position - 0x6E2 Hash - 0x17C68833 ^0x17C68833
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

int func_12() // Position - 0x74C Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_114135.f_7692.f_911;
}

BOOL func_13() // Position - 0x75E Hash - 0x8BFF875A ^0xD0C80A38
{
	if (Global_21066.f_1 > 3)
	{
		MISC::CLEAR_BIT(&Global_8920, 0);
		func_27(0);
		return false;
	}

	MISC::SET_BIT(&Global_8920, 0);

	if (func_14(0, 0, 1, true))
		return true;

	MISC::CLEAR_BIT(&Global_8920, 0);
	return false;
}

BOOL func_14(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7A3 Hash - 0x899C9E95 ^0x899C9E95
{
	if (Global_79539)
	{
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 24 && iParam0 != 1)
			return false;
	
		if (!IS_BIT_SET(Global_4546023, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 16);
			}
		
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 15);
			}
		
			if (iParam0 == 24)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 27);
			}
		
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4546023, 14);
				MISC::SET_BIT(&Global_4546023, 29);
			}
		}
	
		if (Global_8926[iParam0 /*15*/].f_9 == 0)
			func_20();
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4546023, 14);
			MISC::CLEAR_BIT(&Global_4546023, 16);
			MISC::CLEAR_BIT(&Global_4546023, 15);
			MISC::CLEAR_BIT(&Global_4546023, 27);
			MISC::CLEAR_BIT(&Global_4546023, 29);
			return true;
		}
		else
		{
			return false;
		}
	}

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_21066.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_5(0) == true)
			return false;

	if (Global_21032 == 1)
		return false;

	if (Global_21066.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21063))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21066.f_1 < 4)
			{
				func_18("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					Global_21063 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21048)
	{
		SYSTEM::WAIT(0);
	}

	func_20();
	func_15();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
	{
		Global_9542 = 0;
		Global_21066.f_1 = 7;
		func_18(&(Global_8926[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
				Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8926[iParam0 /*15*/].f_9) == 0)
			Global_21064 = SYSTEM::START_NEW_SCRIPT(&(Global_8926[iParam0 /*15*/].f_5), CELLPHONE);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8926[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_15() // Position - 0x9DE Hash - 0xB51CAE6B ^0x60FA5181
{
	if (Global_79539 == false)
	{
		Global_8926[14 /*15*/].f_4 = -99;
		Global_8926[4 /*15*/].f_4 = -99;
	
		if (Global_2696411)
		{
			if (func_17(14))
			{
				func_16(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_16(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xA62 Hash - 0xC22558F4 ^0xA170BFDC
{
	TEXT_LABEL_ASSIGN_STRING(&Global_8926[iParam0 /*15*/], sParam1, 16);
	Global_8926[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_8926[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8926[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8926[iParam0 /*15*/].f_10 = iParam4;
	Global_8926[iParam0 /*15*/].f_11 = iParam5;
	Global_8926[iParam0 /*15*/].f_12 = iParam6;
	Global_8926[iParam0 /*15*/].f_13 = iParam7;
	Global_8926[iParam0 /*15*/].f_14 = iParam8;

	if (Global_8926[iParam0 /*15*/].f_12 == 0)
		Global_8926[iParam0 /*15*/].f_12 = 0;

	if (Global_8926[iParam0 /*15*/].f_13 == 0)
		Global_8926[iParam0 /*15*/].f_13 = 0;

	if (Global_8926[iParam0 /*15*/].f_14 == 0)
		Global_8926[iParam0 /*15*/].f_14 = 0;

	return;
}

BOOL func_17(int iParam0) // Position - 0xB18 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44181 == iParam0;
}

void func_18(char* sParam0) // Position - 0xB26 Hash - 0x68B96D20 ^0xE2CC02C7
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xB46 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_20() // Position - 0xBE8 Hash - 0x35153265 ^0x666D8ACE
{
	int i;
	int num;
	eCharacter character;

	for (i = 0; i < 35; i = i + 1)
	{
		Global_8926[i /*15*/].f_4 = -99;
	}

	if (Global_79539 == false)
	{
		num = 0;
	
		while (character < _CHAR_DUMMY_1)
		{
			if (func_26(character, Global_21066) == 1)
				num = 1;
		
			character = character + 1;
		}
	
		func_16(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44181 == 15 && _IS_MISSION_REPEAT_ACTIVE(false) == false && Global_8924 == 0)
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 0;
			Global_8925 = 255;
		}
		else
		{
			func_16(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21287 = 1;
			Global_8925 = 42;
		}
	
		if (num == 1)
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_16(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_89 == true)
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114135.f_14055.f_88 == 1)
			func_16(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_16(26, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		if (func_22())
			func_16(23, "CELL_HACKER_ROB", 5, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_16(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
	
		func_16(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4))
			func_16(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_16(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(24, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(34, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4546023, 4))
			if (Global_1836180)
				func_16(24, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 20))
				func_16(24, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 22))
				func_16(24, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4546023, 26))
				if (func_21())
					func_16(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_16(24, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4546023, 4) == false && Global_1836180 == false && IS_BIT_SET(Global_4546023, 20) == false && IS_BIT_SET(Global_4546023, 22) == false && IS_BIT_SET(Global_4546023, 26) == false)
			if (func_21())
				func_16(24, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_16(24, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_21() // Position - 0x1134 Hash - 0x4F6FCCAE ^0x4F6FCCAE
{
	if (Global_79539)
		if (Global_1836586 || Global_1836587 == 1)
			return true;

	return false;
}

BOOL func_22() // Position - 0x115B Hash - 0x1728AAB1 ^0xAC3CBB95
{
	return func_23() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_23() // Position - 0x1171 Hash - 0x6A44CE01 ^0x553A3758
{
	return _STAT_GET_PACKED_BOOL(9539, -1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x1181 Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_25();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_25() // Position - 0x119D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int func_26(eCharacter echParam0, eCharacter echParam1) // Position - 0x11A9 Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[echParam0 /*29*/].f_19[echParam1];
}

void func_27(int iParam0) // Position - 0x11D3 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_31())
		return;

	if (Global_21284)
		if (func_30())
			func_29(true, true);
		else
			func_29(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_28())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_28() // Position - 0x125D Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_29(BOOL bParam0, BOOL bParam1) // Position - 0x1284 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_5(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_30() // Position - 0x12F8 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_31() // Position - 0x1306 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1957675, 19);
}

BOOL func_32() // Position - 0x1315 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99141.f_44 == 1;

	return false;
}

BOOL func_33() // Position - 0x1331 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x134B Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_35();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_35() // Position - 0x1364 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_10(character) && !func_17(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_10(Global_114135.f_2367.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1461 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x149E Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_10(character))
		return func_38(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_38(eCharacter echParam0) // Position - 0x14C3 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2201[echParam0 /*29*/];
}

BOOL func_39(int iParam0) // Position - 0x14D2 Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_99.f_58[iParam0];
}

BOOL func_40(int iParam0) // Position - 0x14FF Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114135.f_9089.f_330[iParam0 /*6*/];
}

int func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x152B Hash - 0xC5B48713 ^0xC5B48713
{
	int num;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (iParam2 < 3)
		if (IS_BIT_SET(iParam1, iParam2))
			return 0;

	if (iParam1 < 1 || iParam1 > 7)
		return 0;

	if (iParam4 <= 0)
		return 0;

	if (Global_114135.f_7692.f_650 < CHAR_DAVE)
	{
		num = iParam0;
	
		if (Global_114135.f_7692.f_911 == num)
			Global_114135.f_7692.f_911 = -1;
	
		num.f_1 = 0;
		num.f_6 = iParam2;
		num.f_2 = iParam1;
		num.f_14 = iParam3;
		num.f_3 = iParam6;
		num.f_7 = -1;
		num.f_8 = 0;
		num.f_9 = -1;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_9 = iParam5;
		num.f_10 = -1;
		num.f_11 = -1;
		MISC::SET_BIT(&(num.f_1), 0);
		MISC::SET_BIT(&(num.f_1), 6);
		Global_114135.f_7692.f_199[Global_114135.f_7692.f_650 /*15*/] = { num };
		Global_114135.f_7692.f_650 = Global_114135.f_7692.f_650 + 1;
		return 1;
	}

	return 0;
}

BOOL func_42(int iParam0) // Position - 0x162E Hash - 0x3EC1FCE7 ^0x9D52DE7
{
	eCharacter i;

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
			return true;
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
			return true;
	}

	return false;
}

void func_43() // Position - 0x172A Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_101727 = true;
	return;
}

void func_44(int iParam0) // Position - 0x1737 Hash - 0xDB027BF ^0xDB027BF
{
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 161 || iParam0 == 208 || iParam0 == 207 || iParam0 == 162)
		return;

	Global_44733[iParam0] = MISC::GET_GAME_TIMER();
	return;
}

void func_45() // Position - 0x178C Hash - 0xD6E4EF90 ^0xCC2CF900
{
	Global_44732 = MISC::GET_GAME_TIMER();
	return;
}

int func_46(int iParam0) // Position - 0x179B Hash - 0xFCBFD2CC ^0x1DBFD43E
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

	if (IS_BIT_SET(Global_114135.f_9089.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114135.f_9089.f_99.f_219[num], offset);
	return 1;
}

void func_47() // Position - 0x17F2 Hash - 0xB9E15BDB ^0xD8A8920
{
	func_48(-1615086084);
	func_48(-1989308064);
	func_48(-1970925435);
	func_48(-1060930305);
	func_48(-1817481777);
	Global_8924 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_48(int iParam0) // Position - 0x183E Hash - 0xA75852D8 ^0xD16C52E
{
	eCharacter i;
	int num;

	num = 0;

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_136; i = i + 1)
	{
		if (Global_114135.f_7692[i /*15*/] == iParam0)
		{
			if (Global_44728 != i)
			{
				func_59(i);
				func_52(iParam0);
				num = 1;
			}
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_52(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			func_51(iParam0);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_764; i = i + 1)
	{
		if (Global_114135.f_7692.f_651[i /*14*/] == iParam0)
		{
			func_50(i);
			num = 1;
		}
	}

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_866; i = i + 1)
	{
		if (Global_114135.f_7692.f_765[i /*10*/] == iParam0)
		{
			func_49(i);
			num = 1;
		}
	}

	return num;
}

void func_49(eCharacter echParam0) // Position - 0x1965 Hash - 0xEC7DB104 ^0xEC7DB104
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114135.f_7692.f_866)
		return;

	if (Global_114135.f_7692.f_866 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114135.f_7692.f_866 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_765[i /*10*/] = { Global_114135.f_7692.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_114135.f_7692.f_866 > CHAR_MICHAEL)
	{
		Global_114135.f_7692.f_765[Global_114135.f_7692.f_866 - 1 /*10*/] = { unk };
		Global_114135.f_7692.f_866 = Global_114135.f_7692.f_866 - 1;
	}

	return;
}

void func_50(eCharacter echParam0) // Position - 0x1A1E Hash - 0xEC7DB104 ^0xEC7DB104
{
	eCharacter i;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114135.f_7692.f_764)
		return;

	if (Global_114135.f_7692.f_764 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114135.f_7692.f_764 - 2; i = i + 1)
		{
			Global_114135.f_7692.f_651[i /*14*/] = { Global_114135.f_7692.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_114135.f_7692.f_764 > CHAR_MICHAEL)
	{
		Global_114135.f_7692.f_651[Global_114135.f_7692.f_764 - 1 /*14*/] = { unk };
		Global_114135.f_7692.f_764 = Global_114135.f_7692.f_764 - 1;
	}

	func_9(CHAR_MICHAEL);
	func_9(CHAR_FRANKLIN);
	func_9(CHAR_TREVOR);
	return;
}

void func_51(int iParam0) // Position - 0x1AE6 Hash - 0x137FFF25 ^0x82C17B
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_650; i = i + 1)
	{
		if (Global_114135.f_7692.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_114135.f_7692.f_650 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_199[j /*15*/] = { Global_114135.f_7692.f_199[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_199[Global_114135.f_7692.f_650 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_650 = Global_114135.f_7692.f_650 - 1;
			return;
		}
	}

	return;
}

void func_52(int iParam0) // Position - 0x1B93 Hash - 0xCCFAC6AA ^0xEC431D32
{
	var unk;
	eCharacter i;
	eCharacter j;

	for (i = CHAR_MICHAEL; i < Global_114135.f_7692.f_198; i = i + 1)
	{
		if (Global_114135.f_7692.f_137[i /*15*/] == iParam0)
		{
			func_53(Global_114135.f_7692.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_114135.f_7692.f_198 - 2; j = j + 1)
			{
				Global_114135.f_7692.f_137[j /*15*/] = { Global_114135.f_7692.f_137[j + 1 /*15*/] };
			}
		
			Global_114135.f_7692.f_137[Global_114135.f_7692.f_198 - 1 /*15*/] = { unk };
			Global_114135.f_7692.f_198 = Global_114135.f_7692.f_198 - 1;
			return;
		}
	}

	return;
}

int func_53(eCharacter echParam0) // Position - 0x1C4F Hash - 0xF5506146 ^0xF7A54567
{
	eCharacter character;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		if (func_26(echParam0, Global_21066) == 1)
		{
			func_58(echParam0, Global_21066, 0);
		
			if (func_57(echParam0, Global_21066) == 0)
			{
				character = Global_21066;
				func_54(echParam0, character);
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

void func_54(eCharacter echParam0, eCharacter echParam1) // Position - 0x1CA5 Hash - 0xA1B5646 ^0x1B8F934B
{
	eCharacter character;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		if (echParam1 > CHAR_MULTIPLAYER)
		{
		}
		else
		{
			character = echParam1;
			func_56(echParam0, character, 0);
			func_55(echParam0, character, 0);
		}
	}

	return;
}

void func_55(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1CDA Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2201[echParam0 /*29*/].f_24[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114135.f_28055[echParam0 /*29*/].f_24[echParam1] = iParam2;

	return;
}

void func_56(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1D1F Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return;

	Global_2201[echParam0 /*29*/].f_12[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114135.f_28055[echParam0 /*29*/].f_12[echParam1] = iParam2;

	return;
}

int func_57(eCharacter echParam0, eCharacter echParam1) // Position - 0x1D64 Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2201[echParam0 /*29*/].f_24[echParam1];
}

void func_58(eCharacter echParam0, eCharacter echParam1, int iParam2) // Position - 0x1D8E Hash - 0xB4ABC33 ^0x67322EDD
{
	Global_2201[echParam0 /*29*/].f_19[echParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114135.f_28055[echParam0 /*29*/].f_19[echParam1] = iParam2;

	return;
}

void func_59(eCharacter echParam0) // Position - 0x1DBF Hash - 0x4FA51D98 ^0x238D4E50
{
	eCharacter i;
	int num;
	var unk;

	if (echParam0 < CHAR_MICHAEL || echParam0 >= Global_114135.f_7692.f_136)
		return;

	num = Global_114135.f_7692[echParam0 /*15*/].f_2;

	if (Global_114135.f_7692.f_136 > CHAR_FRANKLIN)
	{
		for (i = echParam0; i <= Global_114135.f_7692.f_136 - 2; i = i + 1)
		{
			Global_114135.f_7692[i /*15*/] = { Global_114135.f_7692[i + 1 /*15*/] };
		}
	}

	if (Global_114135.f_7692.f_136 > CHAR_MICHAEL)
	{
		Global_114135.f_7692[Global_114135.f_7692.f_136 - 1 /*15*/] = { unk };
		Global_114135.f_7692.f_136 = Global_114135.f_7692.f_136 - 1;
	}

	for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_9(i);
	}

	return;
}

