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
	int iLocal_16 = 0;
	var uLocal_17 = 2;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	BOOL bLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_52();

	while (true)
	{
		BUILTIN::WAIT(250);
	
		switch (iLocal_16)
		{
			case 0:
				if (uLocal_17[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_23705[3 /*42*/].f_27[0] = _GET_PLAYER_CASH(CHAR_TREVOR);
						func_50(2, 32, Global_23705[3 /*42*/].f_27[0]);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&Global_23705[3 /*42*/], "PA_TREV1" /*Earn one million dollars.*/, 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_23705[3 /*42*/].f_4), "PA_TREV1" /*Earn one million dollars.*/, 16);
					Global_23705[3 /*42*/].f_8 = 0;
					Global_23705[3 /*42*/].f_9 = 1;
					TEXT_LABEL_ASSIGN_STRING(&Global_23705[3 /*42*/].f_10[1 /*4*/], "PA_TREV1A" /*Current wealth $~1~.*/, 16);
					Global_23705[3 /*42*/].f_37[1] = 0;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						Global_23705[3 /*42*/].f_27[1] = _GET_PLAYER_CASH(CHAR_TREVOR);
				
					func_43(2, 3, true, 1);
					func_40("PA_TREV1A" /*Current wealth $~1~.*/, Global_23705[3 /*42*/].f_27[1]);
					iLocal_16 = 1;
				}
				break;
		
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_23705[3 /*42*/].f_27[1] = _GET_PLAYER_CASH(CHAR_TREVOR);
				
					if (func_39(CHAR_TREVOR, 999999))
					{
						func_38("PA_COMPLETE" /*Goal achieved ~a~*/, "PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
						Global_23705[3 /*42*/].f_37[1] = 1;
						Global_23705[3 /*42*/].f_8 = 1;
						iLocal_22 = MISC::GET_GAME_TIMER();
						iLocal_16 = 2;
					}
					else if (func_39(CHAR_TREVOR, 499999))
					{
						if (!bLocal_20)
						{
							_SHOW_SUBTITLE("PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
							bLocal_20 = true;
						}
					}
				
					if (uLocal_17[1])
					{
						func_1(2, 32, 500000, false, false);
						uLocal_17[1] = 0;
					}
				}
				break;
		
			case 2:
				iLocal_21 = MISC::GET_GAME_TIMER();
			
				if (iLocal_21 - iLocal_22 < 5000)
					func_40("PA_TREV1A" /*Current wealth $~1~.*/, Global_23705[3 /*42*/].f_27[1]);
				break;
		}
	}

	return;
}

void func_1(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D5 (469)
{
	int outValue;
	Hash statHash;

	if (func_36(iParam0) == 3)
		return;

	if (func_36(iParam0) == 4)
		return;

	func_2(func_36(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 1:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case 2:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A7 (679)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_35();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_34(99, 1);
					func_33(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_33(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_33(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_17(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_14(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_14(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_33(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_33(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_33(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_14(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_33(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_33(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_33(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_13(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_34(95, iParam3);
					break;
			
				case 1:
					func_34(97, iParam3);
					break;
			
				case 2:
					func_34(96, iParam3);
					break;
			}
		
			func_34(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_5(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_5(num2);
	}

	num6 = Global_61680[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61680[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61680[num3] = 2147483647;
				else
					Global_61680[num3] = Global_61680[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_33(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_33(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_33(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61680[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61680[num3];
			Global_61680[num3] = Global_61680[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114344.f_20568.f_233[num3 /*69*/].f_2[Global_114344.f_20568.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114344.f_20568.f_233[num3 /*69*/] = Global_114344.f_20568.f_233[num3 /*69*/] + 1;
		Global_114344.f_20568.f_233[num3 /*69*/].f_1 = Global_114344.f_20568.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114344.f_20568.f_233[num3 /*69*/].f_1 > 10)
			Global_114344.f_20568.f_233[num3 /*69*/].f_1 = 0;
	}

	func_4(iParam0);

	if (Global_44375 == 15)
		func_3(false);

	return 1;
}

void func_3(BOOL bParam0) // Position - 0x8A6 (2214)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/];
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114344.f_20568.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61688[i /*3*/][0] = Global_114344.f_20568[i];
		Global_61688.f_31[i /*3*/][0] = Global_114344.f_20568.f_11[i];
		Global_61688.f_62[i /*3*/][0] = Global_114344.f_20568.f_22[i];
		Global_61688.f_93[i /*3*/][0] = Global_114344.f_20568.f_33[i];
		Global_61688.f_124[i /*3*/][0] = Global_114344.f_20568.f_44[i];
		Global_61688.f_155[i /*3*/][0] = Global_114344.f_20568.f_55[i];
		Global_61688.f_186[i /*3*/][0] = Global_114344.f_20568.f_66[i];
		Global_61688.f_217[i /*3*/][0] = Global_114344.f_20568.f_77[i];
		Global_61688.f_248[i /*3*/][0] = Global_114344.f_20568.f_88[i];
	
		if (!bParam0)
		{
			Global_61688[i /*3*/][1] = Global_114344.f_20568[i];
			Global_61688.f_31[i /*3*/][1] = Global_114344.f_20568.f_11[i];
			Global_61688.f_62[i /*3*/][1] = Global_114344.f_20568.f_22[i];
			Global_61688.f_93[i /*3*/][1] = Global_114344.f_20568.f_33[i];
			Global_61688.f_124[i /*3*/][1] = Global_114344.f_20568.f_44[i];
			Global_61688.f_155[i /*3*/][1] = Global_114344.f_20568.f_55[i];
			Global_61688.f_186[i /*3*/][1] = Global_114344.f_20568.f_66[i];
			Global_61688.f_217[i /*3*/][1] = Global_114344.f_20568.f_77[i];
			Global_61688.f_248[i /*3*/][1] = Global_114344.f_20568.f_88[i];
		}
	}

	return;
}

void func_4(int iParam0) // Position - 0xB28 (2856)
{
	int value;

	value = Global_61680[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_5(int iParam0) // Position - 0xB82 (2946)
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		_STAT_SET_PACKED_BOOL(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		_STAT_SET_PACKED_BOOL(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		_STAT_SET_PACKED_BOOL(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		_STAT_SET_PACKED_BOOL(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_8(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_8(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_8(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_8(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_8(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_8(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114344.f_20568.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114344.f_20568.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114344.f_20568.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5571*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114344.f_20568.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5571*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_6(int iParam0) // Position - 0xCF9 (3321)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		default:
			break;
	}

	return "";
}

int func_7() // Position - 0xDED (3565)
{
	int num;

	num = 0;
	return num;
}

void func_8(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xDFA (3578)
{
	Hash statName;

	if (iParam0 != 15525)
	{
		statName = func_9(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_9(int iParam0, int iParam1) // Position - 0xE28 (3624)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_10(iParam1));
}

int func_10(int iParam0) // Position - 0xE3D (3645)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_11();
	
		if (num2 > -1)
		{
			Global_2752197 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752197 = 1;
		}
	}

	return num;
}

int func_11() // Position - 0xE71 (3697)
{
	return Global_1574927;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0xE7D (3709)
{
	if (iParam2 == -1)
		iParam2 = func_11();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_13(int iParam0) // Position - 0xE9B (3739)
{
	func_34(93, iParam0);
	func_34(29, iParam0);
	func_34(30, iParam0);
	return;
}

BOOL func_14(int iParam0) // Position - 0xEBB (3771)
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;

	if (iParam0 == 8)
		return _STAT_GET_PACKED_BOOL(129, -1);

	if (iParam0 == 9)
		return _STAT_GET_PACKED_BOOL(135, -1);

	if (iParam0 == 10)
		return _STAT_GET_PACKED_BOOL(136, -1);

	if (iParam0 == 11)
		return _STAT_GET_PACKED_BOOL(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_15(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_15(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_15(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_15(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_15(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_15(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114344.f_20568.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_7() /*5571*/].f_681.f_10, iParam0);
}

int func_15(int iParam0, int iParam1) // Position - 0x105B (4187)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15525)
	{
		statHash = func_9(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x108A (4234)
{
	if (iParam1 == -1)
		iParam1 = func_11();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_17(BOOL bParam0) // Position - 0x10A6 (4262)
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_32(27, value);
	}

	if (value < 200000000)
		return 0;

	func_18(27, 1);
	return 1;
}

int func_18(int iParam0, int iParam1) // Position - 0x115D (4445)
{
	if (iParam0 >= 78)
		return 0;

	return func_19(iParam0, iParam1);
}

int func_19(int iParam0, int iParam1) // Position - 0x1178 (4472)
{
	if (func_31(14) && !func_30(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33532 != 0 && !Global_79744)
		return 0;

	if (func_29(&Global_4546910))
	{
		if (func_27(&Global_4546910, iParam0))
			return 0;
	
		if (func_20(&Global_4546910, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_20(var uParam0, int iParam1) // Position - 0x1215 (4629)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_31(14) && !func_30(iParam1))
		return false;

	if (func_27(uParam0, iParam1))
		return false;

	if (func_26(uParam0) < 0f)
		func_25(uParam0, 0);

	func_23(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_21(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_21(var uParam0, int iParam1) // Position - 0x12C6 (4806)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_31(14) && !func_30(iParam1))
		return 0;

	if (func_27(uParam0, iParam1))
		return 0;

	if (func_26(uParam0) < 0f)
		func_25(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_22(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_22(var uParam0, int iParam1) // Position - 0x1341 (4929)
{
	return uParam0->[iParam1] == 78;
}

void func_23(var uParam0) // Position - 0x1352 (4946)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_24(uParam0, i);
	}

	func_25(uParam0, Global_4546909 - 0.5f);
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x1386 (4998)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x1396 (5014)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_26(var uParam0) // Position - 0x13B3 (5043)
{
	return uParam0->f_80;
}

BOOL func_27(var uParam0, int iParam1) // Position - 0x13BF (5055)
{
	return func_28(uParam0, iParam1) != -1;
}

int func_28(var uParam0, int iParam1) // Position - 0x13D1 (5073)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_29(var uParam0) // Position - 0x13FE (5118)
{
	return uParam0->f_79 == 1;
}

BOOL func_30(int iParam0) // Position - 0x140C (5132)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_31(int iParam0) // Position - 0x145C (5212)
{
	return Global_44375 == iParam0;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0x146A (5226)
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_33(Hash hParam0, int iParam1) // Position - 0x14BB (5307)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_34(int iParam0, int iParam1) // Position - 0x14DE (5342)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60248[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60248[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60248[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60248[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_35() // Position - 0x153B (5435)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[0] == outValue))
			Global_61680[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[1] == outValue))
			Global_61680[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61680[2] == outValue))
			Global_61680[2] = outValue;
	}

	return;
}

int func_36(int iParam0) // Position - 0x15B0 (5552)
{
	return Global_2241[iParam0 /*29*/].f_17;
}

void _SHOW_SUBTITLE(char* sParam0, int iParam1, int iParam2) // Position - 0x15C1 (5569)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
	return;
}

void func_38(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x15DA (5594)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
	return;
}

BOOL func_39(eCharacter echParam0, int iParam1) // Position - 0x15F9 (5625)
{
	if (_GET_PLAYER_CASH(echParam0) > iParam1)
		return true;

	return false;
}

void func_40(char* sParam0, int iParam1) // Position - 0x1614 (5652)
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
	func_42(255, 255, 255, 255);
	func_41(0.81f, 0.8f, sParam0, iParam1, 0);
	return;
}

void func_41(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1657 (5719)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1675 (5749)
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16B4 (5812)
{
	if (func_49())
		return 0;

	if (func_44(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_44(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16DF (5855)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsidetask")) > 0)
		return 0;

	if (func_47() == 0)
	{
		func_46();
		return 0;
	}

	func_45(Global_23704);
	Global_23874[Global_23704 /*9*/].f_1 = iParam1;
	Global_23874[Global_23704 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23874[Global_23704 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_45(int iParam0) // Position - 0x1743 (5955)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_23874[iParam0 /*9*/].f_2 = clockSeconds;
	Global_23874[iParam0 /*9*/].f_2.f_1 = clockMinutes;
	Global_23874[iParam0 /*9*/].f_2.f_2 = clockHours;
	Global_23874[iParam0 /*9*/].f_2.f_3 = clockDayOfMonth;
	Global_23874[iParam0 /*9*/].f_2.f_4 = num;
	Global_23874[iParam0 /*9*/].f_2.f_5 = clockYear;
	return;
}

void func_46() // Position - 0x17BD (6077)
{
	return;
}

int func_47() // Position - 0x17C5 (6085)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23874[i /*9*/].f_8 == 0)
		{
			Global_23704 = i;
			return 1;
		}
	}

	i = 0;
	Global_23704 = 3;
	Global_23874[Global_23704 /*9*/].f_2 = -1;
	Global_23874[Global_23704 /*9*/].f_2.f_1 = 0;
	Global_23874[Global_23704 /*9*/].f_2.f_2 = 0;
	Global_23874[Global_23704 /*9*/].f_2.f_3 = 0;
	Global_23874[Global_23704 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23874[i /*9*/].f_8 == 0 || Global_23874[i /*9*/].f_8 == 1)
			if (!func_48(Global_23874[i /*9*/].f_2, Global_23874[Global_23704 /*9*/].f_2))
				Global_23704 = i;
	
		i = i + 1;
	}

	if (Global_23704 == 3)
		return 0;

	return 1;
}

BOOL func_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x189F (6303)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

BOOL func_49() // Position - 0x198A (6538)
{
	if (Global_21222.f_1 == 1 || Global_21222.f_1 == 0)
		return true;

	return false;
}

int func_50(int iParam0, int iParam1, int iParam2) // Position - 0x19B1 (6577)
{
	if (func_36(iParam0) == 3)
		return 0;

	if (func_36(iParam0) == 4)
		return 0;

	return func_2(func_36(iParam0), 0, iParam1, iParam2, false);
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x19E5 (6629)
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

void func_52() // Position - 0x1A3D (6717)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

