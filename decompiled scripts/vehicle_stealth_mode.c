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
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;

	if (func_92(&uLocal_44))
	{
		while (!func_83())
		{
			func_71(&uLocal_44);
		
			if (func_61(&uLocal_44))
				break;
		
			func_17(&uLocal_44);
			SYSTEM::WAIT(0);
		}
	}

	func_1(&uLocal_44);
	return;
}

void func_1(int* piParam0) // Position - 0xA8 Hash - 0x8D25DECD ^0xD1E5F804
{
	func_16();

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (func_8(&uLocal_44))
		func_4(&uLocal_44);

	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_3();
	PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
	func_2();
	return;
}

void func_2() // Position - 0xE7 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0xF3 Hash - 0xFB0BB1F9 ^0x4526D383
{
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 3);
	return;
}

void func_4(int* piParam0) // Position - 0x10E Hash - 0xCF8F112 ^0xD3735C92
{
	func_7(false, true);
	func_6(false, -1, true);
	func_5(&(piParam0->f_6), 5);
	return;
}

void func_5(int* piParam0, int iParam1) // Position - 0x12C Hash - 0xAEE04633 ^0xFF7FBF85
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_6(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x13C Hash - 0xB065F1DA ^0xB441C126
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647037.f_1582) || Global_2647037.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam2)
	{
		if (bParam0)
		{
			Global_2647037.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2647037.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2647037.f_1582 = -1;
		}
	
		Global_2647037.f_1585 = iParam1;
		Global_2647037.f_1587 = bParam0;
	}
	else
	{
		!bParam2;
	}

	return;
}

void func_7(BOOL bParam0, BOOL bParam1) // Position - 0x1AE Hash - 0xBCD519EA ^0xC130617F
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2647037.f_1598) || Global_2647037.f_1598 == SCRIPT::GET_ID_OF_THIS_THREAD() || bParam1)
	{
		if (bParam0)
		{
			Global_2647037.f_1598 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_75.f_2), 23);
		}
		else
		{
			Global_2647037.f_1598 = -1;
			MISC::CLEAR_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_75.f_2), 23);
		}
	}
	else
	{
		!bParam1;
	}

	return;
}

BOOL func_8(int* piParam0) // Position - 0x22D Hash - 0x1EF8B247 ^0xCC87D221
{
	return func_9(&(piParam0->f_6), 5);
}

BOOL func_9(int* piParam0, int iParam1) // Position - 0x23E Hash - 0xDDB0D9A1 ^0xDDB0D9A1
{
	return IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_10(int* piParam0) // Position - 0x24C Hash - 0xAA28C9C5 ^0x34A63E66
{
	if (piParam0->f_2 != 0)
		if (func_14("STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/, func_15(piParam0->f_2), func_15(piParam0->f_2)) || func_13("STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/, func_15(piParam0->f_2)))
			return true;

	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_11()) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/);
}

char* func_11() // Position - 0x2B0 Hash - 0x8D68C33C ^0x8D68C33C
{
	return "STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2BB Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_13(char* sParam0, char* sParam1) // Position - 0x2CE Hash - 0xCB708C57 ^0x57AB1DDC
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_14(char* sParam0, char* sParam1, char* sParam2) // Position - 0x2E7 Hash - 0x3E27E359 ^0x22928652
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_15(Hash hParam0) // Position - 0x306 Hash - 0x2810F472 ^0xD047DBCA
{
	if (hParam0 == joaat("annihilator2"))
		return "ANNIH_2_STEALTH" /*Stealth Annihilator*/;

	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam0);
}

void func_16() // Position - 0x324 Hash - 0x2F6A9992 ^0xC793CCF7
{
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 1);
	return;
}

void func_17(int* piParam0) // Position - 0x33F Hash - 0xCA0CCE77 ^0x9DCD2955
{
	func_58(piParam0);
	func_57(piParam0);

	if (func_56(piParam0))
	{
		if (func_55(piParam0) && !func_54(piParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_53())
		{
			func_51(piParam0, true);
			func_50(piParam0);
		}
		else if (func_9(&(piParam0->f_6), 6) && func_54(piParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1) && !func_53())
			{
				func_51(piParam0, false);
				func_5(&(piParam0->f_6), 6);
				func_5(&(piParam0->f_6), 2);
			}
		}
	}

	if (func_49(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 1);
		func_48();
		func_47(piParam0);
	
		if (func_46())
			func_45(true);
	}
	else if (func_44(piParam0))
	{
		PLAYER::SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(PLAYER::PLAYER_ID(), 0);
		func_16();
		func_47(piParam0);
		func_43(piParam0, 5);
	
		if (func_46())
			func_45(false);
	}

	if (func_54(piParam0) && !func_55(piParam0))
	{
		func_41(piParam0);
		func_40();
		func_43(piParam0, 2);
	
		if (func_37(piParam0))
			func_35(piParam0);
	}
	else
	{
		func_18(piParam0);
	}

	func_3();
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 4);
	return;
}

void func_18(int* piParam0) // Position - 0x48C Hash - 0xE1ADBA51 ^0xF7D1476B
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 2) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_34(piParam0) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		func_26(piParam0, 1);
		func_25(&(piParam0->f_6), 3);
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_56(piParam0))
			func_21(func_22(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
		else
			func_20(func_22(piParam0), func_15(piParam0->f_2), num);
	
		func_19(piParam0);
		func_25(&(piParam0->f_6), 0);
	}

	return;
}

void func_19(int* piParam0) // Position - 0x56A Hash - 0x942EE4B5 ^0x86A949B
{
	func_25(&(piParam0->f_6), 2);
	return;
}

void func_20(char* sParam0, char* sParam1, int iParam2) // Position - 0x57B Hash - 0xF37B3394 ^0xE3F991D6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

void func_21(char* sParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x598 Hash - 0x47299B4F ^0xDEB05525
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam3);
	return;
}

char* func_22(int* piParam0) // Position - 0x5BB Hash - 0x2D040EBA ^0x870B9C3A
{
	if (func_56(piParam0))
		if (func_23(piParam0->f_2))
			return "STEALTH_OFF_S";
		else
			return "STEALTH_OFF" /*Press ~INPUT_VEH_ROOF~ to enter Stealth Mode when piloting the ~a~. All pilot and passenger weapons are unavailable in Stealth Mode as the ~a~ will not appear on enemy radars or maps.*/;

	return "STEALTH_OFF_P" /*The Pilot has disabled Stealth Mode.*/;
}

BOOL func_23(int iParam0) // Position - 0x5EB Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 239897677:
			return true;
	}

	return false;
}

var func_24(BOOL bParam0, var uParam1, var uParam2) // Position - 0x608 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_25(int* piParam0, int iParam1) // Position - 0x61F Hash - 0xAEE04633 ^0xC5A9CA3F
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_26(int* piParam0, int iParam1) // Position - 0x62F Hash - 0x75185106 ^0xF61FC00D
{
	int num;
	int num2;

	if (func_56(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("akula"):
				num2 = 19004;
				break;
		
			case joaat("annihilator2"):
				num2 = 36624;
				break;
		
			case 239897677:
				num2 = 36625;
				break;
		
			case joaat("terbyte"):
				return;
		}
	
		num = _STAT_GET_PACKED_INT(num2, -1) + iParam1;
	
		if (num >= 0)
			func_27(num2, num, -1);
	}

	return;
}

void func_27(int iParam0, int iParam1, int iParam2) // Position - 0x69C Hash - 0x4C8CAB3D ^0xBFF357A2
{
	if (iParam2 == -1)
		iParam2 = func_28();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_28() // Position - 0x6C4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0x6D0 Hash - 0x6099A833 ^0x79D555BB
{
	if (iParam1 == -1)
		iParam1 = func_28();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_30() // Position - 0x6EC Hash - 0xF8732737 ^0xF4809C55
{
	return !IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 4) && !func_31(true);
}

BOOL func_31(BOOL bParam0) // Position - 0x710 Hash - 0xEFCC5115 ^0x5C97DD54
{
	if (*Global_4718592.f_118493 == 6 || *Global_4718592.f_118493 == 7)
	{
		if (Global_4718592.f_2 == 20)
			return true;
	
		if (bParam0 && Global_4718592.f_2 == 25)
			return true;
	}

	return false;
}

BOOL func_32() // Position - 0x760 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76640;
}

BOOL func_33(int iParam0) // Position - 0x76C Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_34(int* piParam0) // Position - 0x7C3 Hash - 0x4D06198D ^0x5261B03E
{
	if (func_56(piParam0))
	{
		switch (piParam0->f_2)
		{
			case joaat("akula"):
				return _STAT_GET_PACKED_INT(19004, -1) < 3;
		
			case joaat("annihilator2"):
				return _STAT_GET_PACKED_INT(36624, -1) < 3;
		
			case 239897677:
				return _STAT_GET_PACKED_INT(36625, -1) < 3;
		
			case joaat("terbyte"):
				return false;
		
			default:
			
		}
	}

	return true;
}

void func_35(int* piParam0) // Position - 0x823 Hash - 0xCA88934E ^0x8C2EF23F
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		if (func_23(piParam0->f_2))
			_DISPLAY_HELP_TEXT("STEALTH_WARN_S", 3000);
		else
			_DISPLAY_HELP_TEXT("STEALTH_WARN" /*All pilot and passenger weapons are unavailable while the vehicle is in Stealth Mode.*/, 3000);

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x855 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_37(int* piParam0) // Position - 0x86C Hash - 0xD87B745A ^0xD10A30FB
{
	int num;

	if (func_33(0) || func_32())
		return false;

	num = func_38(piParam0);

	switch (num)
	{
		case 1:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON))
				return true;
			break;
	
		case 0:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK))
				return true;
			break;
	
		case 2:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK))
				return true;
			break;
	
		case 3:
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
				return true;
			break;
	}

	return false;
}

int func_38(int* piParam0) // Position - 0x910 Hash - 0x53BDFFBE ^0x63804050
{
	if (!func_39(piParam0))
		return 4;

	switch (piParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
			switch (piParam0->f_4)
			{
				case -1:
					return 1;
			
				case 0:
					return 2;
			
				default:
				
			}
		
			return 4;
	}

	return 4;
}

BOOL func_39(int* piParam0) // Position - 0x966 Hash - 0xA482206C ^0xBDFBF523
{
	return ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
}

void func_40() // Position - 0x985 Hash - 0x42735151 ^0x2208980D
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_GUN_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PASSENGER_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	return;
}

void func_41(int* piParam0) // Position - 0x9ED Hash - 0xEB920128 ^0xA7531533
{
	int num;

	if (!func_9(&(piParam0->f_6), 0) && !func_9(&(piParam0->f_6), 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_9(&(piParam0->f_6), 3) && !func_33(0) && !func_32() && func_30() && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false)))
	{
		num = piParam0->f_6.f_2 ? 3333 : 10000;
		piParam0->f_6.f_2 = 0;
	
		if (func_56(piParam0))
			_DISPLAY_HELP_TEXT(func_42(piParam0), num);
		else
			func_21(func_42(piParam0), func_15(piParam0->f_2), func_15(piParam0->f_2), num);
	
		func_50(piParam0);
		func_25(&(piParam0->f_6), 0);
	}

	return;
}

char* func_42(int* piParam0) // Position - 0xAB6 Hash - 0xAB9DC7A5 ^0xB7100E37
{
	if (func_56(piParam0))
		if (func_23(piParam0->f_2))
			return "STEALTH_ON_S";
		else
			return "STEALTH_ON" /*Press ~INPUT_VEH_ROOF~ to disable Stealth Mode.*/;

	return "STEALTH_ON_P" /*The Pilot has turned on Stealth Mode. All pilot and passenger weapons are unavailable as the ~a~ will not appear on enemy radars or maps.*/;
}

void func_43(int* piParam0, int iParam1) // Position - 0xAE7 Hash - 0xB9D48296 ^0xA5FC03F
{
	if (func_55(piParam0))
		return;

	if (PLAYER::GET_MAX_WANTED_LEVEL() != iParam1)
		PLAYER::SET_MAX_WANTED_LEVEL(iParam1);

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iParam1)
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam1, false);

	return;
}

BOOL func_44(int* piParam0) // Position - 0xB22 Hash - 0xC009BC7B ^0xC009BC7B
{
	return !func_9(piParam0, 0) && func_9(piParam0, 1);
}

void func_45(BOOL bParam0) // Position - 0xB3E Hash - 0x5B4A9B90 ^0xD5266444
{
	if (bParam0)
		MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 6);
	else
		MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 6);

	return;
}

BOOL func_46() // Position - 0xB74 Hash - 0x3DC7A169 ^0x93D86E64
{
	if (Global_1845075)
		return false;

	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 5);
}

void func_47(int* piParam0) // Position - 0xB97 Hash - 0x1A5C18AC ^0x8C04C460
{
	func_5(&(piParam0->f_6), 0);

	if (func_10(piParam0))
		HUD::CLEAR_HELP(true);

	if (!func_56(piParam0))
		if (func_54(piParam0))
			func_5(&(piParam0->f_6), 1);
		else
			func_5(&(piParam0->f_6), 2);

	return;
}

void func_48() // Position - 0xBDE Hash - 0x2F6A9992 ^0xF84ABC46
{
	MISC::SET_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 1);
	return;
}

BOOL func_49(int* piParam0) // Position - 0xBF9 Hash - 0x42E1273E ^0x42E1273E
{
	return func_9(piParam0, 0) && !func_9(piParam0, 1);
}

void func_50(int* piParam0) // Position - 0xC15 Hash - 0x5D53E8CF ^0x529E652D
{
	func_25(&(piParam0->f_6), 1);
	return;
}

void func_51(int* piParam0, BOOL bParam1) // Position - 0xC26 Hash - 0x2DD8CC7F ^0xC6C2FA70
{
	func_52(piParam0->f_1, bParam1);
	return;
}

void func_52(Vehicle veParam0, BOOL bParam1) // Position - 0xC38 Hash - 0xEC97DA75 ^0x5856EF3C
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				VEHICLE::SET_DEPLOY_FOLDING_WINGS(veParam0, !bParam1, false);
				break;
		
			case 239897677:
				VEHICLE::_SET_DEPLOY_MISSILE_BAYS(veParam0, !bParam1);
				break;
		}
	}

	return;
}

BOOL func_53() // Position - 0xC8B Hash - 0x978BB7FE ^0x89B2B8A9
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 3);
}

BOOL func_54(int* piParam0) // Position - 0xCA3 Hash - 0xE7BA92D6 ^0xE7BA92D6
{
	return func_9(piParam0, 0);
}

BOOL func_55(int* piParam0) // Position - 0xCB2 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_9(piParam0, 2);
}

BOOL func_56(int* piParam0) // Position - 0xCC1 Hash - 0xB1BB5CC4 ^0xD57C6565
{
	return func_39(piParam0) && piParam0->f_3 == PLAYER::PLAYER_PED_ID() || VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false) == PLAYER::PLAYER_PED_ID();
}

void func_57(int* piParam0) // Position - 0xCF2 Hash - 0x712FA1B0 ^0x678ED7D
{
	if (func_10(piParam0) && func_33(0) || func_32())
	{
		piParam0->f_6.f_2 = 1;
		HUD::CLEAR_HELP(true);
		func_5(&(piParam0->f_6), 0);
	
		if (func_54(piParam0))
		{
			func_5(&(piParam0->f_6), 1);
		}
		else
		{
			func_5(&(piParam0->f_6), 2);
		
			if (func_56(piParam0))
				func_26(piParam0, -1);
		}
	}

	return;
}

void func_58(int* piParam0) // Position - 0xD5A Hash - 0x37E4F557 ^0xC73F3AAA
{
	if (func_54(piParam0))
		if (func_8(piParam0))
			if (func_60())
				func_4(piParam0);
		else if (!func_60())
			func_59(piParam0);
	else if (func_8(piParam0))
		func_4(piParam0);

	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871), 2);
	return;
}

void func_59(int* piParam0) // Position - 0xDB7 Hash - 0x8F9BB5B0 ^0x82B3E882
{
	func_7(true, true);
	func_6(true, -1, true);
	func_25(&(piParam0->f_6), 5);
	return;
}

BOOL func_60() // Position - 0xDD5 Hash - 0x84748B7F ^0x711FABA2
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 2);
}

BOOL func_61(int* piParam0) // Position - 0xDED Hash - 0xFEA4F61C ^0x7CB60DD6
{
	if (!func_39(piParam0))
		return true;

	if (!func_70(piParam0))
		return true;

	if (!func_69(piParam0->f_2))
		return true;

	if (func_68(PLAYER::PLAYER_ID(), true, true))
		return true;

	if (func_67(PLAYER::PLAYER_ID()))
		return true;

	if (func_64(PLAYER::PLAYER_ID()))
		return true;

	if (func_62(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_62(Player plParam0) // Position - 0xE60 Hash - 0xE39633AF ^0x7097E4AE
{
	if (plParam0 > -1)
	{
		if (Global_2657991[plParam0 /*467*/].f_249 > -1)
			if (func_63(Global_2657991[plParam0 /*467*/].f_249) == 4)
				return true;
	
		if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 4))
			return true;
	}

	return false;
}

int func_63(int iParam0) // Position - 0xEA9 Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
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
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	}

	return 6;
}

BOOL func_64(Player plParam0) // Position - 0x11EC Hash - 0x3BED6F11 ^0x3BED6F11
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_324, 3);

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x121D Hash - 0x3FF6E4CA ^0xE6B59972
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
				if (type == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[type /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x127D Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_67(Player plParam0) // Position - 0x1286 Hash - 0xD7F7F990 ^0x7DEBB5FC
{
	if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 14))
		return true;

	if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 11))
		return true;

	return false;
}

BOOL func_68(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12BF Hash - 0xBF1A1A60 ^0xAC4BA81B
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 1))
			return true;

	if (bParam2)
		if (Global_2657991[plParam0 /*467*/].f_324.f_8 != -1)
			return true;

	return false;
}

BOOL func_69(int iParam0) // Position - 0x1323 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case 239897677:
		case joaat("terbyte"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_70(int* piParam0) // Position - 0x134F Hash - 0xE9DCEBB8 ^0xCC767969
{
	return ENTITY::DOES_ENTITY_EXIST(piParam0->f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(piParam0->f_1, false);
}

void func_71(int* piParam0) // Position - 0x136D Hash - 0x4397E5BC ^0x4397E5BC
{
	BOOL flag;
	BOOL flag2;
	Ped pedInVehicleSeat;

	flag = func_9(piParam0, 4);
	flag2 = func_9(piParam0, 0);
	func_82(piParam0);

	if (flag)
		func_25(piParam0, 3);
	else
		func_5(piParam0, 3);

	if (flag2)
		func_25(piParam0, 1);
	else
		func_5(piParam0, 1);

	if (func_39(piParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			piParam0->f_1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		
			if (func_70(piParam0))
			{
				piParam0->f_2 = ENTITY::GET_ENTITY_MODEL(piParam0->f_1);
			
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					func_25(piParam0, 2);
			}
		}
	}

	if (func_70(piParam0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(piParam0->f_1, -1, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(piParam0->f_1, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false) && PED::IS_PED_A_PLAYER(pedInVehicleSeat))
			{
				piParam0->f_3 = pedInVehicleSeat;
			
				if (pedInVehicleSeat == PLAYER::PLAYER_PED_ID())
				{
					func_25(piParam0, 4);
				
					if (!func_9(piParam0, 3))
						func_25(&(piParam0->f_6), 6);
				}
			}
		}
	
		if (func_39(piParam0))
			piParam0->f_4 = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_56(piParam0))
			if (func_80() && func_74(piParam0))
				func_25(piParam0, 0);
		else
			func_72(piParam0);
	}

	if (func_49(piParam0))
		piParam0->f_6.f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_72(int* piParam0) // Position - 0x14C4 Hash - 0x2E9E6B9 ^0x6C1CA3
{
	if (ENTITY::DOES_ENTITY_EXIST(piParam0->f_3) && func_73(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(piParam0->f_3)))
		func_25(piParam0, 0);
	else
		func_5(piParam0, 0);

	return;
}

BOOL func_73(Player plParam0) // Position - 0x14F9 Hash - 0xC1E6753A ^0xC1E6753A
{
	return plParam0 != -1 && IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_871, 1);
}

BOOL func_74(int* piParam0) // Position - 0x1518 Hash - 0xB82272C3 ^0x8FB45D62
{
	BOOL flag;

	flag = func_79();

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
	{
		func_78(piParam0);
	
		switch (piParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				flag = !VEHICLE::ARE_FOLDING_WINGS_DEPLOYED(piParam0->f_1);
				break;
		
			case 239897677:
				flag = !VEHICLE::_ARE_MISSILE_BAYS_DEPLOYED(piParam0->f_1);
				break;
		
			case joaat("terbyte"):
				flag = ENTITY::GET_ENTITY_SPEED(piParam0->f_1) == 0f;
				break;
		}
	}
	else if (func_77(piParam0))
	{
		if (func_76(piParam0))
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(piParam0->f_1);
	}
	else
	{
		func_75(piParam0);
	}

	return flag;
}

void func_75(int* piParam0) // Position - 0x15AC Hash - 0x342F23B1 ^0x884AB481
{
	func_25(&(piParam0->f_6), 4);
	piParam0->f_6.f_1 = MISC::GET_GAME_TIMER();
	return;
}

BOOL func_76(int* piParam0) // Position - 0x15C7 Hash - 0x1BD1D0FA ^0x2C810FBB
{
	return MISC::GET_GAME_TIMER() - piParam0->f_6.f_1 >= 200;
}

BOOL func_77(int* piParam0) // Position - 0x15DD Hash - 0x721CC2C4 ^0x38F4880A
{
	return func_9(&(piParam0->f_6), 4);
}

void func_78(int* piParam0) // Position - 0x15EE Hash - 0x79922215 ^0x1A2F8231
{
	func_5(&(piParam0->f_6), 4);
	return;
}

BOOL func_79() // Position - 0x15FF Hash - 0x153877E4 ^0xA0B3529C
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 1);
}

BOOL func_80() // Position - 0x1617 Hash - 0xB5410557 ^0xB5410557
{
	return !func_31(true);
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x1625 Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

void func_82(int* piParam0) // Position - 0x16AA Hash - 0x4D7A39B1 ^0xDCE69257
{
	*piParam0 = 0;
	piParam0->f_1 = 0;
	piParam0->f_3 = 0;
	piParam0->f_2 = 0;
	piParam0->f_4 = -1;
	return;
}

BOOL func_83() // Position - 0x16CA Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
		return true;

	return false;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x16DE Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575056 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_91())
		return true;

	if (Global_2699004)
		return true;

	if (func_90())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_88())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1762 Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_87())
	{
		case 0:
			return func_86();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_86() // Position - 0x1795 Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_87() // Position - 0x17B9 Hash - 0x21D64237 ^0x21D64237
{
	return Global_33087;
}

BOOL func_88() // Position - 0x17C4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x17D3 Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_90() // Position - 0x17EA Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2696416;
}

BOOL func_91() // Position - 0x17F6 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_695;
}

BOOL func_92(int* piParam0) // Position - 0x1805 Hash - 0xEDE306D7 ^0xE75FA498
{
	BOOL flag;

	func_71(piParam0);

	if (func_70(piParam0))
	{
		if (func_56(piParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(piParam0->f_1))
			{
				flag = true;
			
				if (func_53())
				{
					flag = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(piParam0->f_6), 6);
					flag = false;
				}
			
				if (flag)
					func_51(piParam0, false);
				else
					func_25(&(piParam0->f_6), 3);
			}
		}
		else
		{
			func_25(&(piParam0->f_6), 3);
		}
	}

	return true;
}

BOOL func_93() // Position - 0x187F Hash - 0x2DA9F6D6 ^0x2DA9F6D6
{
	if (func_46() && func_94())
		return true;

	return false;
}

BOOL func_94() // Position - 0x189C Hash - 0x88D4807A ^0xFE3CF6A8
{
	return IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_871, 6);
}

