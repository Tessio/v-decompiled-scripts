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
	char* sLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
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
	sLocal_35 = "NULL";
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_47, "CELL_212" /*SÍ*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "CELL_213" /*NO*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_55, "CELL_39" /*Transmisión*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_59, "CELL_MP_300" /*¿Activar?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "CELL_MP_301" /*¿Desactivar?*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_67, "CELL_MP_302" /*No disponible*/, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_55(&uLocal_45);
	func_46();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_44(true);
			func_43();
		}
	
		if (!(Global_21666.f_1 == 9) && Global_21666.f_1 > 3)
		{
			func_3();
		
			if (Global_21666.f_1 != 8)
				if (func_2())
					func_43();
		}
	
		if (func_1())
			func_43();
	}

	return;
}

BOOL func_1() // Position - 0xDE (222)
{
	if (Global_21666.f_1 == 1 || Global_21666.f_1 == 3 || Global_21666.f_1 == 0 || Global_21610 == 1)
	{
		Global_21653 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x121 (289)
{
	if (Global_10142 == 1 || Global_21666.f_1 < 7)
	{
		Global_21653 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x14A (330)
{
	if (func_39(&uLocal_45))
	{
		if (func_17())
		{
			if (Global_2697028)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				func_10(1080503477, func_11(true, true));
				Global_2697028 = false;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				func_10(1793940769, func_11(true, true));
				Global_2697028 = true;
			}
		
			func_4(0);
			return;
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0x1A6 (422)
{
	if (func_9())
		return;

	if (Global_21899)
		if (func_8())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23040 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_5())
		Global_21666.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x230 (560)
{
	if (Global_21666.f_1 == 1 || Global_21666.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x257 (599)
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_21899 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21603);
		
			Global_21594 = { Global_21612[Global_21611 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21594);
		}
	}
	else if (Global_21899 == true)
	{
		Global_21899 = false;
		Global_21594 = { Global_21619[Global_21611 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21603);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21594);
	}

	return;
}

BOOL func_7(int iParam0) // Position - 0x2CB (715)
{
	if (iParam0 == 1)
		if (Global_21666.f_1 > 3)
			if (IS_BIT_SET(Global_9502, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21666.f_1 > 3)
		return true;

	return false;
}

BOOL func_8() // Position - 0x322 (802)
{
	return IS_BIT_SET(Global_1965230, 5);
}

BOOL func_9() // Position - 0x330 (816)
{
	return IS_BIT_SET(Global_1965230, 19);
}

void func_10(int iParam0, int iParam1) // Position - 0x33F (831)
{
	Hash eventData;

	eventData = 800157557;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam0;
	eventData.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);

	if (!(iParam1 == 0))
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 5, iParam1, eventData);

	return;
}

int func_11(BOOL bParam0, BOOL bParam1) // Position - 0x386 (902)
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_12(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_12(Player plParam0, int iParam1) // Position - 0x3EB (1003)
{
	BOOL flag;

	if (!func_15(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_13(-1, false) == 8;
	else
		flag = Global_1845347[plParam0 /*884*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_13(int iParam0, BOOL bParam1) // Position - 0x444 (1092)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_14();

	if (Global_1575077[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574922[num2];
		bParam1;
	}

	return num;
}

int func_14() // Position - 0x485 (1157)
{
	return Global_1574928;
}

BOOL func_15(Player plParam0) // Position - 0x491 (1169)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4B3 (1203)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2673276.f_3)
					return Global_2673276.f_2;
				else if (Global_2658296[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_17() // Position - 0x513 (1299)
{
	if (!func_33(PLAYER::PLAYER_ID(), true) && func_18())
		return true;

	return false;
}

BOOL func_18() // Position - 0x536 (1334)
{
	if (!func_30())
		return false;

	if (func_19(false))
		return false;

	return true;
}

BOOL func_19(BOOL bParam0) // Position - 0x557 (1367)
{
	if (bParam0)
		return func_22();

	return func_20(func_21());
}

BOOL func_20(int iParam0) // Position - 0x573 (1395)
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_21() // Position - 0x588 (1416)
{
	return Global_1912812[PLAYER::PLAYER_ID() /*322*/].f_279;
}

BOOL func_22() // Position - 0x59E (1438)
{
	return func_28(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_27() != 0 && !func_23(0);
}

BOOL func_23(int iParam0) // Position - 0x5CE (1486)
{
	int num;

	num = func_24(16787, -1);
	return IS_BIT_SET(num, iParam0);
}

int func_24(int iParam0, int iParam1) // Position - 0x5E5 (1509)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 18535)
	{
		statHash = func_25(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_25(int iParam0, int iParam1) // Position - 0x614 (1556)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_26(iParam1));
}

int func_26(int iParam0) // Position - 0x629 (1577)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_14();
	
		if (num2 > -1)
		{
			Global_2741717 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741717 = 1;
		}
	}

	return num;
}

int func_27() // Position - 0x65D (1629)
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

BOOL func_28(int iParam0, int iParam1) // Position - 0x669 (1641)
{
	Hash statHash;
	int outValue;

	statHash = func_29(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_29(int iParam0, int iParam1) // Position - 0x68D (1677)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_26(iParam1));
}

BOOL func_30() // Position - 0x6A2 (1698)
{
	if (Global_1574613)
		return true;

	if (func_32())
		return true;

	if (func_31())
		return true;

	return func_28(120, -1);
}

BOOL func_31() // Position - 0x6D2 (1746)
{
	return Global_1575085;
}

BOOL func_32() // Position - 0x6DE (1758)
{
	return Global_1575087;
}

BOOL func_33(Player plParam0, BOOL bParam1) // Position - 0x6EA (1770)
{
	if (func_38() != 0)
		return func_37(plParam0) != 0;

	return func_34(plParam0, bParam1, false);
}

BOOL func_34(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x711 (1809)
{
	if (bParam1)
		if (func_35(plParam0))
			return 1;

	!bParam2;

	if (Global_1845347[plParam0 /*884*/] == -1)
		return 0;

	return 1;
}

BOOL func_35(Player plParam0) // Position - 0x743 (1859)
{
	return func_36(plParam0);
}

BOOL func_36(Player plParam0) // Position - 0x751 (1873)
{
	return IS_BIT_SET(Global_1845347[plParam0 /*884*/].f_11.f_1, 0);
}

int func_37(Player plParam0) // Position - 0x768 (1896)
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return Global_2658296[plParam0 /*468*/].f_1;

	return 0;
}

int func_38() // Position - 0x78A (1930)
{
	return Global_33832;
}

BOOL func_39(var uParam0) // Position - 0x795 (1941)
{
	if (!IS_BIT_SET(*uParam0, 0))
		return false;

	if (Global_21644)
		return false;

	if (!CAM::IS_SCREEN_FADED_IN())
		return false;

	if (!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, Global_21635))
		return false;

	func_40();
	Global_21644 = true;
	return true;
}

void func_40() // Position - 0x7D9 (2009)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_21655, true);
		func_41();
	}

	return;
}

void func_41() // Position - 0x7FE (2046)
{
	if (func_42())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_42() // Position - 0x812 (2066)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;

	if (Global_80362)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		num = 1;

	if (Global_4525201 || num)
		return true;

	return true;
}

void func_43() // Position - 0x859 (2137)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_44(BOOL bParam0) // Position - 0x865 (2149)
{
	if (bParam0)
	{
		func_45();
	
		if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
			MISC::SET_BIT(&Global_9503, 16);
	
		Global_21666.f_1 = 1;
	
		if (func_7(0))
			func_4(0);
	}
	else if (Global_21666.f_1 == 1)
	{
		if (!(Global_21666.f_1 == 0))
			Global_21666.f_1 = 3;
	}

	return;
}

void func_45() // Position - 0x8C8 (2248)
{
	if (Global_21666.f_1 == 9 || Global_21666.f_1 == 10)
	{
		Global_23093 = 0;
		Global_23089 = 1;
	}

	return;
}

void func_46() // Position - 0x8F1 (2289)
{
	if (!(Global_21666.f_1 == 7))
		Global_21666.f_1 = 7;

	func_54(Global_21647, "SET_DATA_SLOT_EMPTY", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);

	if (func_17())
		if (Global_2697028)
			func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_63, 0, 0, 0, 0);
		else
			func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_59, 0, 0, 0, 0);
	else
		func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(13), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(12), -1f, -1f, &uLocal_67, 0, 0, 0, 0);

	func_54(Global_21647, "DISPLAY_VIEW", BUILTIN::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_50(&uLocal_55);

	if (func_17())
		func_47(13, &uLocal_47, 1, "", 4, &uLocal_51, &uLocal_45);
	else
		func_47(1, "", 1, "", 4, &uLocal_51, &uLocal_45);

	return;
}

void func_47(int iParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* piParam6) // Position - 0xA01 (2561)
{
	func_48(2, iParam0, sParam1, 0, piParam6, -1);
	func_48(1, iParam2, sParam3, 1, piParam6, 17);
	func_48(3, iParam4, sParam5, 2, piParam6, -1);
	return;
}

void func_48(int iParam0, int iParam1, char* sParam2, int iParam3, int* piParam4, int iParam5) // Position - 0xA31 (2609)
{
	if (iParam1 == 1)
	{
		func_53(Global_21647, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 0f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(piParam4, iParam3);
		func_49(iParam5, false);
		return;
	}

	if (Global_21654)
	{
		func_53(Global_21647, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(piParam4, iParam3);
		func_49(iParam5, true);
		return;
	}

	func_53(Global_21647, "SET_SOFT_KEYS", BUILTIN::TO_FLOAT(iParam0), 1f, BUILTIN::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(piParam4, iParam3);
	func_49(iParam5, true);
	return;
}

void func_49(int iParam0, BOOL bParam1) // Position - 0xAD3 (2771)
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		MISC::SET_BIT(&Global_9502, iParam0);
		return;
	}

	MISC::CLEAR_BIT(&Global_9502, iParam0);
	return;
}

void func_50(const char* sParam0) // Position - 0xAFE (2814)
{
	func_51(Global_21647, "SET_HEADER", sParam0, 0, 0, 0, 0);
	return;
}

void func_51(int iParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0xB16 (2838)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_52(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_52(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_52(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_52(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_52(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_52(const char* sParam0) // Position - 0xB71 (2929)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_53(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xB83 (2947)
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
		func_52(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_52(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_52(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_52(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_52(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_54(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xC36 (3126)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_55(var uParam0) // Position - 0xC99 (3225)
{
	*uParam0 = 0;
	return;
}

