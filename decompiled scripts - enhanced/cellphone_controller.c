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
	char* sLocal_37 = 0;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	BOOL bLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	BOOL bLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	BOOL bLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 4;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 4;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 4;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	eCharacter echLocal_98 = CHAR_MICHAEL;
	BOOL bLocal_99 = 0;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	var unk;
	int num;

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
	sLocal_37 = "NULL";
	fLocal_38 = 0f;
	fLocal_42 = -0.0375f;
	fLocal_43 = 0.17f;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_53 = 3;
	fLocal_56 = 0f;
	fLocal_57 = 0f;
	fLocal_103 = 0.95f;
	fLocal_104 = 0.07f;
	fLocal_105 = 0.755f;
	iLocal_116 = 9999;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_114932 = MISC::GET_GAME_TIMER();
	func_161();
	func_158();
	func_157();
	Global_21666.f_1 = 3;
	Global_21654 = false;
	Global_21901 = 0;
	Global_24075 = 0;
	unk.f_23 = 2;
	unk.f_56 = 21;

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (Global_21666.f_1 > 3)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 374, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 390, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 391, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 394, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 390, true);
		}
	
		if (iLocal_114 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_114 = 1;
				iLocal_116 = func_155(14818, -1);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_114 == 1)
			{
				switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
				{
					case -1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
				
					case 0:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_en");
						break;
				
					case 1:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_fr");
						break;
				
					case 2:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ge");
						break;
				
					case 3:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_it");
						break;
				
					case 4:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_sp");
						break;
				
					case 5:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pt");
						break;
				
					case 6:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_pl");
						break;
				
					case 7:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ru");
						break;
				
					case 8:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ko");
						break;
				
					case 9:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ch");
						break;
				
					case 10:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_ja");
						break;
				
					case 11:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_me");
						break;
				
					case 12:
						SOCIALCLUB::SC_EMAIL_SET_CURRENT_EMAIL_TAG("gta5mkt_cn");
						break;
				}
			
				SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
				iLocal_114 = 2;
			}
		
			if (iLocal_114 == 2)
			{
				iLocal_115 = SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
			
				switch (iLocal_115)
				{
					case 3:
						break;
				
					case 0:
						if (SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0)
						{
							SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &unk);
						
							if (unk.f_1 != iLocal_116)
							{
								Global_4521352 = 1;
								Global_4521353 = unk.f_394;
							}
							else
							{
								Global_4521352 = 0;
							}
						}
					
						iLocal_114 = 3;
						break;
				
					case 1:
						break;
				
					case 4:
						Global_4521352 = 0;
						iLocal_114 = 3;
						break;
				}
			}
		}
		else
		{
			Global_4521352 = 0;
			iLocal_114 = 0;
		}
	
		if (MISC::IS_PC_VERSION())
			if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
				if (Global_21666.f_1 == 6)
					Global_21666.f_1 = 3;
	
		if (func_154(146))
		{
			if (Global_80362 == false)
			{
				num = func_120(0, false, 119);
			
				if (num != 0)
					func_118(num);
				else
					func_117();
			
				func_113(0);
			}
		}
	
		if (Global_2733326.f_3739 == true)
			if (Global_21666.f_1 > 3)
				Global_21666.f_1 = 3;
	
		if (Global_80362 == true)
		{
			if (Global_21666.f_1 == 3)
			{
				if (IS_BIT_SET(Global_4524923, 15))
				{
					MISC::SET_BIT(&Global_4524923, 14);
					BUILTIN::WAIT(0);
				
					while (!func_111(3, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524923, 14);
					MISC::CLEAR_BIT(&Global_4524923, 15);
				}
			
				if (IS_BIT_SET(Global_4524923, 16))
				{
					MISC::SET_BIT(&Global_4524923, 14);
					BUILTIN::WAIT(0);
				
					while (!func_111(17, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524923, 14);
					MISC::CLEAR_BIT(&Global_4524923, 16);
					MISC::CLEAR_BIT(&Global_4524923, 27);
				}
			
				if (IS_BIT_SET(Global_4524923, 27))
				{
					MISC::SET_BIT(&Global_4524923, 14);
					BUILTIN::WAIT(0);
				
					while (!func_111(25, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524923, 14);
					MISC::CLEAR_BIT(&Global_4524923, 16);
					MISC::CLEAR_BIT(&Global_4524923, 27);
				}
			
				if (IS_BIT_SET(Global_4524923, 29))
				{
					MISC::SET_BIT(&Global_4524923, 14);
					BUILTIN::WAIT(0);
				
					while (!func_111(1, 0, 1, false))
					{
						BUILTIN::WAIT(0);
					}
				
					MISC::CLEAR_BIT(&Global_4524923, 14);
					MISC::CLEAR_BIT(&Global_4524923, 29);
				}
			}
		}
	
		if (Global_80362 == false)
		{
			if (IS_BIT_SET(Global_4524923, 11))
			{
				if (Global_21666.f_1 != 10 && Global_21666.f_1 != 9 || func_110() == false)
				{
					MISC::CLEAR_BIT(&Global_4524923, 11);
					MISC::SET_BIT(&Global_9503, 11);
				}
			}
			else if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
			{
				if (func_110())
				{
					MISC::SET_BIT(&Global_4524923, 11);
					MISC::SET_BIT(&Global_9503, 11);
				}
			}
		
			if (IS_BIT_SET(Global_4524923, 12))
			{
				MISC::CLEAR_BIT(&Global_4524923, 12);
				MISC::SET_BIT(&Global_9503, 11);
			}
		}
		else if (IS_BIT_SET(Global_4524923, 12))
		{
			if (Global_24103 == 0 || Global_24104 == false && !Global_24105)
			{
				MISC::CLEAR_BIT(&Global_4524923, 12);
				MISC::SET_BIT(&Global_9503, 11);
			}
		}
		else if (Global_24105 || Global_24103 > 0 && Global_24104 == true)
		{
			MISC::SET_BIT(&Global_4524923, 12);
			MISC::SET_BIT(&Global_9503, 11);
		}
	
		if (MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_IS_PUSH_TO_TALK_ACTIVE())
			{
				if (!IS_BIT_SET(Global_4524923, 19))
				{
					MISC::SET_BIT(&Global_4524923, 19);
					MISC::SET_BIT(&Global_9503, 11);
				}
			}
			else if (IS_BIT_SET(Global_4524923, 19))
			{
				MISC::CLEAR_BIT(&Global_4524923, 19);
				MISC::SET_BIT(&Global_9503, 11);
			}
		}
	
		if (iLocal_110 == 0)
		{
			if (IS_BIT_SET(Global_9502, 25))
			{
				STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME") /* TUNEABLE: SP_CELLPHONE_SLEEP_TIME */, &iLocal_109, -1);
				iLocal_107 = MISC::GET_GAME_TIMER();
				iLocal_110 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_9502, 25))
		{
			STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME") /* TUNEABLE: SP_CELLPHONE_SLEEP_TIME */, &iLocal_109, -1);
			iLocal_108 = MISC::GET_GAME_TIMER();
			iLocal_110 = 0;
			STATS::STAT_SET_INT(joaat("SP_CELLPHONE_SLEEP_TIME") /* TUNEABLE: SP_CELLPHONE_SLEEP_TIME */, iLocal_109 + (iLocal_108 - iLocal_107), true);
		}
	
		func_109();
		func_108();
		func_107();
		func_106();
		func_104();
		func_84();
		func_83();
		func_82();
	
		if (IS_BIT_SET(Global_9503, 21))
			if (!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE())
				MISC::CLEAR_BIT(&Global_9503, 21);
	
		if (IS_BIT_SET(Global_9502, 7))
		{
			func_77();
			MISC::CLEAR_BIT(&Global_9502, 7);
		}
	
		if (IS_BIT_SET(Global_9502, 0))
			func_76();
	
		if (IS_BIT_SET(Global_4524923, 0))
			func_73();
	
		if (IS_BIT_SET(Global_9503, 11))
		{
			Global_10240 = 0;
		
			if (IS_BIT_SET(Global_9502, 25))
				Global_10240 = Global_10240 + 1;
		
			if (IS_BIT_SET(Global_4524923, 11))
				if (Global_80362 == false)
					Global_10240 = Global_10240 + 1;
		
			if (IS_BIT_SET(Global_4524923, 28))
				if (Global_80362 == true)
					Global_10240 = Global_10240 + 1;
		
			if (IS_BIT_SET(Global_4524923, 12))
				if (Global_80362 && Global_24104 || Global_24105)
					Global_10240 = Global_10240 + 1;
		
			if (IS_BIT_SET(Global_4524923, 19))
				Global_10240 = Global_10240 + 1;
		
			if (Global_10240 == 0)
			{
				MISC::CLEAR_BIT(&Global_9503, 11);
				bLocal_58 = false;
			}
			else
			{
				bLocal_58 = true;
			}
		}
	
		if (Global_80362)
			if (iLocal_111 == 0)
				if (IS_BIT_SET(Global_1984568, 0))
					if (func_71(&uLocal_112, 10000, false))
						if (func_68())
							iLocal_111 = 1;
	
		if (!func_67())
		{
			if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
				if (Global_21666.f_1 == 3)
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								if (Global_80362)
									func_58();
								else
									func_58();
		
			if (Global_21666.f_1 == 4)
				if (IS_BIT_SET(Global_9503, 21))
					func_58();
		
			func_23();
		}
		else
		{
			func_16();
		}
	
		switch (Global_24075)
		{
			case 0:
				func_15();
			
				if (Global_24077 == 1)
					func_14();
				break;
		
			case 1:
				func_13();
				break;
		
			case 2:
				func_12();
				break;
		
			case 3:
				func_11();
				break;
		
			case 4:
				func_10();
				break;
		
			case 5:
				func_9();
				break;
		
			case 14:
				func_14();
				break;
		
			case 6:
				if (Global_24077 == 1)
					func_14();
			
				if (Global_24078 == 1)
				{
					Global_24075 = 9;
					Global_24078 = 0;
				}
				break;
		
			case 8:
				func_8();
				break;
		
			case 9:
				func_5();
				break;
		
			case 10:
				func_4();
				break;
		
			case 11:
				func_3();
				break;
		
			case 12:
				func_2();
				break;
		
			case 13:
				func_1();
				break;
		}
	}

	return;
}

void func_1() // Position - 0x880 (2176)
{
	iLocal_87 = GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_24079);

	switch (iLocal_87)
	{
		case 0:
			Global_24075 = 4;
			break;
	
		case 1:
			break;
	
		case 2:
			MISC::SET_BIT(&Global_9503, 15);
			func_14();
			break;
	}

	return;
}

void func_2() // Position - 0x8C4 (2244)
{
	if (GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_24079))
		Global_24075 = 13;
	else
		func_14();

	return;
}

void func_3() // Position - 0x8E2 (2274)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_85 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_83);
	}
	else
	{
		iLocal_84 = MISC::GET_GAME_TIMER();
		iLocal_85 = iLocal_84 - iLocal_82;
	}

	if (iLocal_85 > 3000)
		HUD::BUSYSPINNER_OFF();

	if (iLocal_85 > 3200)
		Global_24075 = 6;

	return;
}

void func_4() // Position - 0x925 (2341)
{
	iLocal_87 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();

	switch (iLocal_87)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_83 = NETWORK::GET_NETWORK_TIME();
			else
				iLocal_82 = MISC::GET_GAME_TIMER();
		
			Global_24075 = 11;
			BUILTIN::SETTIMERB(0);
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_5() // Position - 0x979 (2425)
{
	Global_24080 = -1;

	if (Global_80362)
	{
		if (func_7())
			GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(*Global_4718592.f_196298, Global_4718592.f_196298.f_1);
	
		if (func_6(&(Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_447), 0))
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
		else
			GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
	}

	if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_24080))
	{
		Global_24075 = 10;
		HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278" /*Guardando foto en la galería*/);
		HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
	}
	else
	{
		func_14();
	}

	return;
}

BOOL func_6(int* piParam0, int iParam1) // Position - 0x9F1 (2545)
{
	return IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_7() // Position - 0x9FF (2559)
{
	return IS_BIT_SET(*Global_4718592.f_196224, 12);
}

void func_8() // Position - 0xA14 (2580)
{
	iLocal_87 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);

	switch (iLocal_87)
	{
		case 0:
			Global_24075 = 9;
			break;
	
		case 1:
			break;
	
		case 2:
			func_14();
			break;
	}

	return;
}

void func_9() // Position - 0xA4E (2638)
{
	iLocal_87 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_88);

	switch (iLocal_87)
	{
		case 0:
			GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, true);
			Global_24075 = 6;
			break;
	
		case 1:
			break;
	
		case 2:
			if (iLocal_88 == 3)
			{
				MISC::SET_BIT(&Global_9503, 14);
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
				GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				Global_24075 = 6;
			}
		
			if (Global_24075 == 5)
			{
				if (iLocal_88 == 0)
				{
					Global_24075 = 4;
					iLocal_88 = 1;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
		
			if (Global_24075 == 5)
			{
				if (iLocal_88 == 1)
				{
					Global_24075 = 4;
					iLocal_88 = 2;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
		
			if (Global_24075 == 5)
			{
				if (iLocal_88 == 2)
				{
					Global_24075 = 4;
					iLocal_88 = 3;
					GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
					BUILTIN::WAIT(0);
				}
			}
			break;
	}

	return;
}

void func_10() // Position - 0xB02 (2818)
{
	if (GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_88))
	{
		Global_24075 = 5;
	}
	else
	{
		MISC::SET_BIT(&Global_9503, 15);
		func_14();
	}

	return;
}

void func_11() // Position - 0xB27 (2855)
{
	iLocal_87 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();

	switch (iLocal_87)
	{
		case 0:
			Global_24075 = 4;
			iLocal_88 = 2;
			break;
	
		case 1:
			break;
	
		case 2:
			Global_21666.f_1 = 3;
			func_14();
			break;
	}

	return;
}

void func_12() // Position - 0xB68 (2920)
{
	if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
		Global_24075 = 3;

	return;
}

void func_13() // Position - 0xB7B (2939)
{
	if (BUILTIN::TIMERB() > 0)
		Global_24075 = 2;

	return;
}

void func_14() // Position - 0xB8F (2959)
{
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	HUD::BUSYSPINNER_OFF();
	Global_24076 = false;
	Global_24077 = 0;
	Global_24078 = 0;
	Global_24075 = 0;
	return;
}

void func_15() // Position - 0xBB9 (3001)
{
	if (Global_24076)
	{
		Global_24075 = 1;
		MISC::CLEAR_BIT(&Global_9503, 14);
		BUILTIN::SETTIMERB(0);
	}

	return;
}

BOOL func_16() // Position - 0xBD9 (3033)
{
	const char* filenameForAudioConversation;

	if (func_22(FRONTEND_CONTROL, Global_21633, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (MISC::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A" /*¡ALERTA!*/);
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH" /*No has pagado la factura del teléfono. El uso del teléfono podría ser cancelado.*/);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, filenameForAudioConversation, 0);
			}
		}
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (func_21(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM))
					return false;
	
		Global_24099 = 0;
		Global_24100 = false;
	
		if (HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() == Global_24097 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() != -1)
		{
			Global_24099 = Global_24098;
			iLocal_91 = MISC::GET_GAME_TIMER();
			iLocal_93 = 0;
			iLocal_94 = 0;
		
			while (func_20(FRONTEND_CONTROL, Global_21633) && iLocal_93 < 250 && Global_21907 == 0 && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
			{
				if (Global_10240 > 0)
					func_17();
			
				BUILTIN::WAIT(0);
				iLocal_92 = MISC::GET_GAME_TIMER();
				iLocal_93 = iLocal_92 - iLocal_91;
			
				if (Global_10240 > 0)
					func_17();
			}
		
			if (func_20(FRONTEND_CONTROL, Global_21633) && Global_21907 == 0 && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
				iLocal_94 = 1;
		
			if (Global_21907 == 0)
			{
				if (iLocal_94 == 1)
				{
					Global_24100 = true;
					Global_24099 = Global_24098;
					Global_24099 == 1;
					Global_24099 == 2;
					Global_24099 == 3;
					Global_24099 == 0;
					Global_24099 == 4;
				}
				else
				{
					Global_24099 = 0;
				}
			}
			else
			{
				Global_24099 = 0;
			}
		}
		else
		{
			Global_24099 = 0;
		}
	
		if (!HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL))
		{
			return true;
		}
		else
		{
			Global_24099 = 0;
			Global_24100 = false;
			return false;
		}
	}

	return false;
}

void func_17() // Position - 0xD92 (3474)
{
	int alpha;

	alpha = 255;

	if (Global_24105)
	{
		fLocal_104 = -0.055f;
		fLocal_105 = 0.745f;
		fLocal_100 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_106 = (100f * fLocal_103) - (100f * fLocal_100);
		fLocal_101 = fLocal_104 + (fLocal_106 * 0.005f);
		fLocal_102 = fLocal_105 - (fLocal_106 * 0.005f);
	
		if (!func_19())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		
			if (MISC::IS_PC_VERSION())
				GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
		
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_54, fLocal_101, fLocal_102, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		}
	}
	else
	{
		if (MISC::IS_PC_VERSION())
			if (Global_2647287.f_1593)
				bLocal_55 = false;
			else if (IS_BIT_SET(Global_9502, 13))
				if (IS_BIT_SET(Global_4524923, 19))
					bLocal_55 = false;
				else
					bLocal_55 = true;
			else
				bLocal_55 = false;
		else if (Global_2647287.f_1593 || IS_BIT_SET(Global_9502, 13))
			bLocal_55 = true;
		else
			bLocal_55 = false;
	
		if (func_67())
			bLocal_55 = true;
	
		if (IS_BIT_SET(Global_4524923, 28))
		{
			alpha = 125;
		
			if (bLocal_55 == true)
				bLocal_55 = false;
		}
	
		if (HUD::IS_MINIMAP_RENDERING())
		{
			if (!HUD::IS_RADAR_HIDDEN())
			{
				if (!bLocal_55)
				{
					if (!func_18())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
							
								if (MISC::IS_PC_VERSION() && Global_2647287.f_1593)
								{
									fLocal_104 = 0.165f;
									fLocal_105 = 0.755f;
								}
								else
								{
									fLocal_104 = 0.07f;
									fLocal_105 = 0.755f;
								}
							
								fLocal_100 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								fLocal_106 = (100f * fLocal_103) - (100f * fLocal_100);
								fLocal_101 = fLocal_104 + (fLocal_106 * 0.005f);
								fLocal_102 = fLocal_105 - (fLocal_106 * 0.005f);
							
								if (!func_19())
								{
									if (MISC::IS_PC_VERSION())
										GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
								
									if (Global_2647287.f_1593)
									{
										fLocal_56 = 0.09f;
										fLocal_57 = -0.25f;
									
										if (MISC::IS_PC_VERSION())
										{
											if (IS_BIT_SET(Global_4524923, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_54, fLocal_101, fLocal_102, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_54, fLocal_101 + fLocal_56, fLocal_102 + fLocal_57, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_54, fLocal_101, fLocal_102, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_18() // Position - 0xFE1 (4065)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		return true;

	return false;
}

BOOL func_19() // Position - 0xFFE (4094)
{
	if (IS_BIT_SET(Global_9504, 3))
		return true;

	return false;
}

BOOL func_20(eControlType ectParam0, eControlAction ecaParam1) // Position - 0x1016 (4118)
{
	if (PAD::IS_CONTROL_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0)
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

BOOL func_21(Ped pedParam0) // Position - 0x105C (4188)
{
	int weaponHash;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
		
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_MARKSMANRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER_MK2"))
				return true;
		}
	}

	return false;
}

BOOL func_22(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x10B9 (4281)
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

void func_23() // Position - 0x112B (4395)
{
	switch (Global_21666.f_1)
	{
		case 4:
			if (IS_BIT_SET(Global_9503, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_21663))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_21663))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
						
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								BUILTIN::WAIT(0);
							
								if (Global_10240 > 0)
									func_17();
							}
						
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
								Global_21663 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
				
					func_57(false);
				}
			
				if (Global_23050 || Global_23051)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_21663))
					{
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
						
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								BUILTIN::WAIT(0);
							
								if (Global_10240 > 0)
									func_17();
							}
						
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
								Global_21663 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
						
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
				
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21647) && Global_21649 == 0)
					{
						BUILTIN::WAIT(0);
					
						if (Global_10240 > 0)
							func_17();
					}
				
					if (Global_21649 == 0)
					{
						Global_21666.f_1 = 9;
						func_24();
					}
				}
				else
				{
					bLocal_99 = false;
				
					if (Global_80362 && Global_24102 || Global_1882206.f_5)
						bLocal_99 = true;
				
					if (Global_114990.f_14060[Global_21666 /*20*/].f_18 == 1 || Global_114990.f_14060[Global_21666 /*20*/].f_17 == 1 || bLocal_99 == true || Global_24099 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21647) && Global_21649 == 0)
						{
							BUILTIN::WAIT(0);
						
							if (Global_10240 > 0)
								func_17();
						}
					
						if (Global_21649 == 0)
						{
							if (Global_21666.f_1 > 3)
							{
								Global_21666.f_1 = 6;
							
								if (Global_24099 == 0)
								{
									if (bLocal_99)
									{
									}
									else if (Global_80362 == false)
									{
										if (Global_114990.f_14060[Global_21666 /*20*/].f_17 == 1)
											func_111(1, 0, 1, false);
									}
								}
								else
								{
									Global_24099 == 3;
									Global_24099 == 1;
									Global_24099 == 2;
									Global_24099 == 4;
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21647) && Global_21649 == 0)
						{
							BUILTIN::WAIT(0);
						
							if (Global_10240 > 0)
								func_17();
						}
					
						if (Global_21649 == 0)
							if (Global_21666.f_1 > 3)
								if (Global_23050 || Global_23051)
									Global_21666.f_1 = 9;
								else
									Global_21666.f_1 = 6;
					}
				}
			}
			break;
	}

	return;
}

void func_24() // Position - 0x13B4 (5044)
{
	var unk;

	if (Global_21649 == 1)
		return;

	if (Global_21666.f_1 < 4)
		return;

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21647))
	{
		if (Global_80362)
			return;
	
		BUILTIN::WAIT(0);
	}

	switch (Global_21666.f_1)
	{
		case 6:
			func_56(Global_21647, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_54(Global_10141);
		
			if (Global_10141 == 1)
			{
				func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21670), -1082130432, -1082130432, -1082130432);
				Global_21646 = Global_21670;
			}
			else
			{
				func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21671), -1082130432, -1082130432, -1082130432);
				Global_21646 = Global_21671;
			}
		
			if (Global_21654)
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*ENTRAR*/, 0, 0, 0, 0);
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*VOLVER*/, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		
			if (Global_21901 == 0)
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else if (Global_80362)
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_9502, 17);
			}
			else
			{
				if (Global_21900 == true)
					if (Global_21654)
						func_53(Global_21647, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*SIGUIENTE*/, 0, 0, 0, 0);
					else
						func_53(Global_21647, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				else if (Global_21654)
					func_53(Global_21647, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*SIGUIENTE*/, 0, 0, 0, 0);
				else
					func_53(Global_21647, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			
				MISC::SET_BIT(&Global_9502, 17);
			}
		
			if (Global_80362)
			{
				Global_21646 = Global_21670;
			
				if (func_52() && IS_BIT_SET(Global_9504, 9))
					func_30(false);
			
				func_56(Global_21647, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21646), -1082130432, -1082130432, -1082130432);
				func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21646), -1082130432, -1082130432, -1082130432);
			}
			break;
	
		case 7:
			break;
	
		case 10:
			func_56(Global_21647, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_53(Global_21647, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		
			if (IS_BIT_SET(Global_9502, 20))
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21654)
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*COLGAR*/, 0, 0, 0, 0);
			
				if (Global_21609)
					func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
	
		case 9:
			if (Global_21665 == 1)
			{
				func_29();
				func_56(Global_21647, "SET_THEME", BUILTIN::TO_FLOAT(Global_114990.f_14060[Global_21666 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_23053)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_217" /*LLAMADA ENTRANTE*/);
					func_28("CELL_217" /*LLAMADA ENTRANTE*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_27(Global_8817, Global_21666) == 0)
				{
					func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*LLAMADA ENTRANTE*/, "CELL_195" /*Desconocido*/, 0);
				}
				else
				{
					func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(2), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), "CELL_217" /*LLAMADA ENTRANTE*/, &(Global_2349[Global_8817 /*29*/].f_3), 0);
				}
			
				func_56(Global_21647, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_23040 == 4 || Global_23040 == 3)
			{
				func_56(Global_21647, "SET_THEME", BUILTIN::TO_FLOAT(Global_114990.f_14060[Global_21666 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_29();
			
				if (Global_23053)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_28("CELL_300" /*CHAR_DEFAULT*/);
					func_28("CELL_219" /*CONECTADO*/);
					func_28("CELL_219" /*CONECTADO*/);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_23298)
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONECTADO*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*MARCANDO...*/, 24);
				
					if (func_27(Global_8817, Global_21666) == 0)
					{
						func_56(Global_21647, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_118[Global_8817 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Desconocido*/, 0);
					}
					else
					{
						func_56(Global_21647, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(4), BUILTIN::TO_FLOAT(0), BUILTIN::TO_FLOAT(3), -1f, -1f, &(Global_2349[Global_8817 /*29*/].f_3), &(Global_2349[Global_8817 /*29*/].f_7), &unk, &(Global_2349[Global_8817 /*29*/].f_3), 0);
					}
				}
			
				func_56(Global_21647, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		
			func_25();
			break;
	
		default:
			break;
	}

	return;
}

void func_25() // Position - 0x19CD (6605)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_21647))
	{
		func_26();
	
		if (Global_21665 == 1)
		{
			if (Global_21654)
				func_53(Global_21647, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*RESPONDER*/, 0, 0, 0, 0);
			else
				func_53(Global_21647, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
		
			if (Global_23087)
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (IS_BIT_SET(Global_9502, 20))
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			else if (Global_21654)
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*RECHAZAR*/, 0, 0, 0, 0);
			else
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		
			func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		}
		else
		{
			func_53(Global_21647, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_9502, 17);
		
			if (IS_BIT_SET(Global_9502, 20))
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_21654)
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*COLGAR*/, 0, 0, 0, 0);
			
				if (Global_21609)
					func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_53(Global_21647, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}

	return;
}

void func_26() // Position - 0x1B5B (7003)
{
	if (Global_80362)
	{
		func_53(Global_21647, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_9502, 17);
	}

	return;
}

int func_27(eCharacter echParam0, eCharacter echParam1) // Position - 0x1B8C (7052)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2349[echParam0 /*29*/].f_24[echParam1];
}

void func_28(char* sParam0) // Position - 0x1BB6 (7094)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_29() // Position - 0x1BC8 (7112)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21666 == CHAR_MICHAEL)
		{
			switch (Global_114990.f_14060[Global_21666 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21666 == CHAR_FRANKLIN)
		{
			switch (Global_114990.f_14060[Global_21666 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21666 == CHAR_TREVOR)
		{
			switch (Global_114990.f_14060[Global_21666 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_21666 == CHAR_MULTIPLAYER)
		{
			switch (Global_4525199)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void func_30(BOOL bParam0) // Position - 0x1E3F (7743)
{
	int i;

	MISC::SET_BIT(&Global_9504, 9);

	if (bParam0)
		func_56(Global_21647, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);

	func_51();
	func_50();

	for (i = 0; i < 9; i = i + 1)
	{
		Global_10065[i] = 0;
		Global_10103[i] = 0;
	}

	if (func_47() && func_33())
	{
		func_31(21, "CELL_37" /*Actividad rápida*/, 0, "AppJIPMP", 14);
		func_31(10, "CELL_16" /*Configuración*/, 1, "appSettings", 24);
	}
	else if (func_47() && !func_33())
	{
		func_31(21, "CELL_37" /*Actividad rápida*/, 0, "AppJIPMP", 14);
	}
	else if (!func_47() && func_33())
	{
		func_31(10, "CELL_16" /*Configuración*/, 0, "appSettings", 24);
	}

	if (bParam0)
	{
		func_56(Global_21647, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(Global_21646), -1082130432, -1082130432, -1082130432);
		func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21646), -1082130432, -1082130432, -1082130432);
	}

	return;
}

void func_31(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4) // Position - 0x1F62 (8034)
{
	func_32(iParam0, sParam1, iParam2, sParam3, iParam4, 1, 1, 0, 0);
	Global_10103[iParam2] = 1;
	Global_10065[iParam2] = iParam0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iParam0 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_28(&Global_9509[iParam0 /*15*/]);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_32(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1FD2 (8146)
{
	TEXT_LABEL_ASSIGN_STRING(&Global_9509[iParam0 /*15*/], sParam1, 16);
	Global_9509[iParam0 /*15*/].f_4 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_9509[iParam0 /*15*/].f_5), sParam3, 16);
	Global_9509[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_9509[iParam0 /*15*/].f_10 = iParam4;
	Global_9509[iParam0 /*15*/].f_11 = iParam5;
	Global_9509[iParam0 /*15*/].f_12 = iParam6;
	Global_9509[iParam0 /*15*/].f_13 = iParam7;
	Global_9509[iParam0 /*15*/].f_14 = iParam8;

	if (Global_9509[iParam0 /*15*/].f_12 == 0)
		Global_9509[iParam0 /*15*/].f_12 = 0;

	if (Global_9509[iParam0 /*15*/].f_13 == 0)
		Global_9509[iParam0 /*15*/].f_13 = 0;

	if (Global_9509[iParam0 /*15*/].f_14 == 0)
		Global_9509[iParam0 /*15*/].f_14 = 0;

	return;
}

BOOL func_33() // Position - 0x2088 (8328)
{
	return !(func_46() || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_44() || func_34(false));
}

BOOL func_34(BOOL bParam0) // Position - 0x20B4 (8372)
{
	if (bParam0)
		return func_37();

	return func_35(func_36());
}

BOOL func_35(int iParam0) // Position - 0x20D0 (8400)
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_36() // Position - 0x20E5 (8421)
{
	return Global_1912812[PLAYER::PLAYER_ID() /*322*/].f_279;
}

BOOL func_37() // Position - 0x20FB (8443)
{
	return func_40(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_39() != 0 && !func_38(0);
}

BOOL func_38(int iParam0) // Position - 0x212B (8491)
{
	int num;

	num = func_155(16787, -1);
	return IS_BIT_SET(num, iParam0);
}

int func_39() // Position - 0x2142 (8514)
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

BOOL func_40(int iParam0, int iParam1) // Position - 0x214E (8526)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_41(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_41(int iParam0, int iParam1) // Position - 0x2172 (8562)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_42(iParam1));
}

int func_42(int iParam0) // Position - 0x2187 (8583)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_43();
	
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

int func_43() // Position - 0x21BB (8635)
{
	return Global_1574928;
}

BOOL func_44() // Position - 0x21C7 (8647)
{
	return func_45(*Global_4718592.f_139431);
}

BOOL func_45(Hash hParam0) // Position - 0x21DD (8669)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_262145.f_31314[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_46() // Position - 0x220C (8716)
{
	return IS_BIT_SET(Global_1674277, 4);
}

BOOL func_47() // Position - 0x221A (8730)
{
	return func_48() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_48() // Position - 0x2230 (8752)
{
	return _STAT_GET_PACKED_BOOL(9539, -1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x2240 (8768)
{
	if (iParam1 == -1)
		iParam1 = func_43();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_50() // Position - 0x225C (8796)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_10103[i] = 0;
	}

	return;
}

void func_51() // Position - 0x227F (8831)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_28(&Global_9509[10 /*15*/]);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	func_56(Global_21647, "DISPLAY_VIEW", 4f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	return;
}

BOOL func_52() // Position - 0x230F (8975)
{
	if (func_33())
		return true;

	if (func_47())
		return true;

	return false;
}

void func_53(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x232E (9006)
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
		func_28(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_28(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_28(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_28(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_28(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_54(int iParam0) // Position - 0x23E1 (9185)
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_24109 = 0;
	Global_10141 = iParam0;
	func_50();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_55(14))
		{
			while (num < 36)
			{
				if (iParam0 == Global_9509[num /*15*/].f_11)
				{
					if (i == Global_9509[num /*15*/].f_4)
					{
						if (Global_10103[i] == 0)
						{
							Global_10065[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_9503, 3))
								{
									value = 42;
									Global_21903 = 1;
								}
								else
								{
									value = 255;
									Global_21903 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2697084)
								if (num == 14)
									func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24103), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
						
							Global_10103[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 36)
			{
				if (iParam0 == Global_9509[num /*15*/].f_11)
				{
					if (i == Global_9509[num /*15*/].f_4)
					{
						if (Global_10103[i] == 0)
						{
							Global_10065[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114990.f_14150[j /*104*/].f_24 != 0)
										if (Global_114990.f_14150[j /*104*/].f_28 == 0)
											if (Global_114990.f_14150[j /*104*/].f_99[Global_21666] == true)
												Global_24109 = Global_24109 + 1;
								}
							
								func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24109), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_80362)
								{
									value2 = 0;
									value2 = Global_4521352;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4521354[k /*296*/].f_24 != 0)
											if (Global_4521354[k /*296*/].f_28 == 0)
												if (Global_4521354[k /*296*/].f_291[Global_21666] == 1)
													value2 = value2 + 1;
									}
								
									func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21666)
									{
										case CHAR_MICHAEL:
											value3 = Global_46175;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_46176;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_46177;
											break;
									
										default:
											break;
									}
								
									func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24103), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9508);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_9503, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_9503, 3))
								{
									value5 = 42;
									Global_21903 = 1;
								}
								else
								{
									value5 = 255;
									Global_21903 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 25 && MISC::ARE_STRINGS_EQUAL(&Global_9509[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_9503, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21647, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_28(&Global_9509[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9509[num /*15*/].f_10 == 57 && num == 25)
							{
								value6 = 0;
								value6 = Global_1882206.f_1;
								func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_53(Global_21647, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9509[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9509[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_10103[i] = 1;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_55(int iParam0) // Position - 0x2968 (10600)
{
	return Global_44938 == iParam0;
}

void func_56(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2976 (10614)
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

void func_57(BOOL bParam0) // Position - 0x29D9 (10713)
{
	if (bParam0)
		if (Global_21666.f_1 == 9)
			Global_21899 = true;
	else
		Global_21899 = false;

	return;
}

void func_58() // Position - 0x29FB (10747)
{
	if (func_16() || IS_BIT_SET(Global_9502, 8))
	{
		MISC::CLEAR_BIT(&Global_9502, 8);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_59())
				{
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (IS_BIT_SET(Global_9503, 21))
						MISC::CLEAR_BIT(&Global_9503, 21);
				
					if (Global_21907 == 1)
						Global_21907 = 0;
				
					switch (Global_21666.f_1)
					{
						case 3:
							Global_21666.f_1 = 4;
							break;
					
						default:
							break;
					}
				
					Global_21897 = 1;
				}
			}
		}
	}

	return;
}

BOOL func_59() // Position - 0x2A90 (10896)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2AFB (11003)
{
	if (func_55(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[0 /*29*/])
				Global_21666 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[1 /*29*/])
				Global_21666 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[2 /*29*/])
				Global_21666 = CHAR_TREVOR;
			else
				Global_21666 = CHAR_MICHAEL;
	}
	else
	{
		Global_21666 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21666 == _CHAR_NULL)
			Global_21666 = CHAR_MULTIPLAYER;
	
		if (Global_80362)
			Global_21666 = CHAR_MULTIPLAYER;
	
		if (Global_21666 > CHAR_MULTIPLAYER)
			Global_21666 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2B9D (11165)
{
	func_62();
	return Global_114990.f_2370.f_539.f_4321;
}

void func_62() // Position - 0x2BB6 (11190)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114990.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_63(character) && !func_55(14) || Global_113936)
			{
				if (Global_114990.f_2370.f_539.f_4321 != character && func_63(Global_114990.f_2370.f_539.f_4321))
					Global_114990.f_2370.f_539.f_4322 = Global_114990.f_2370.f_539.f_4321;
			
				Global_114990.f_2370.f_539.f_4323 = character;
				Global_114990.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114990.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114990.f_2370.f_539.f_4323 = Global_114990.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114990.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_63(eCharacter echParam0) // Position - 0x2CB3 (11443)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2CBF (11455)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2CFC (11516)
{
	if (func_63(character))
		return func_66(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_66(eCharacter echParam0) // Position - 0x2D21 (11553)
{
	return Global_2349[echParam0 /*29*/];
}

BOOL func_67() // Position - 0x2D30 (11568)
{
	if (Global_21666.f_1 == 1 || Global_21666.f_1 == 0)
		return true;

	return false;
}

BOOL func_68() // Position - 0x2D57 (11607)
{
	if (*Global_262145.f_36829)
		return false;

	if (Global_4521352 == 1)
	{
		func_69(Global_4521353, true);
		Global_4521353 = -1;
		Global_4521352 = 0;
		return true;
	}

	return false;
}

void func_69(int iParam0, BOOL bParam1) // Position - 0x2D90 (11664)
{
	char* str;

	switch (iParam0)
	{
		case 35132310:
			str = "RSG_MAIL_NOT1" /*Recibiste una advertencia de conducta sobre tu chat de voz y de texto. Asegúrate de seguir las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 595818427:
			str = "RSG_MAIL_NOT2" /*Te fue suspendido el acceso al chat de voz y de texto debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 2061960091:
			str = "RSG_MAIL_NOT3" /*Te suspendieron de GTA online y del chat de voz y de texto por incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 1321488310:
			str = "RSG_MAIL_NOT4" /*Te prohibieron el acceso al chat de voz y de texto por incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case -1601690383:
			str = "RSG_MAIL_NOT5" /*Te fue suspendido el acceso a ciertas funciones debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 951709659:
			str = "RSG_MAIL_NOT6" /*Te fue prohibido el acceso a ciertas funciones debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 1085859112:
			str = "RSG_MAIL_NOT7" /*Tu contenido fue eliminado debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 1614079778:
			str = "RSG_MAIL_NOT8" /*Consulta Seguridad y alertas, ya que tu contenido fue eliminado y las funciones de creación de contenido fueron suspendidas debido a un incumplimiento de las directrices de la comunidad.*/;
			break;
	
		case 1682565288:
			str = "RSG_MAIL_NOT9" /*Consulta Seguridad y alertas, ya que te fue prohibido el acceso a las funciones de creación de contenido debido a un incumplimiento de las directrices de la comunidad.*/;
			break;
	
		case 905049745:
			str = "RSG_MAIL_NOT10" /*Fue suspendido tu acceso a GTA Online debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 1061715359:
			str = "RSG_MAIL_NOT11" /*Te fue prohibido el acceso a GTA Online debido a un incumplimiento de las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case -756531422:
			str = "RSG_MAIL_NOT12" /*Hay una actualización de tu reporte. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 471439883:
			str = "RSG_MAIL_NOT13" /*Hay una actualización de tu apelación. Obtén más información en Seguridad y alertas.*/;
			break;
	
		case 1225343603:
		default:
			str = "RSG_MAIL_NOT" /*Tienes una notificación sobre las directrices de la comunidad. Obtén más información en Seguridad y alertas.*/;
			break;
	}

	func_70(str, 2, bParam1);
	return;
}

int func_70(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x2E7B (11899)
{
	int num;

	num = -1;

	if (bParam2)
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", "Phone_SoundSet_Default", true);

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);

	if (iParam1 == 0)
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	else if (iParam1 == 2 || iParam1 == 1)
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_ROCKSTAR", "CHAR_ROCKSTAR", false, iParam1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_179" /*Rockstar Games*/), 0);

	return num;
}

BOOL func_71(var uParam0, int iParam1, BOOL bParam2) // Position - 0x2EDD (11997)
{
	if (iParam1 == -1)
		return true;

	func_72(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_72(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F3B (12091)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

void func_73() // Position - 0x2F80 (12160)
{
	var string1;
	int num;
	var sender;
	var unk31;
	var sender2;
	var sender3;
	var sender4;
	var sender5;

	MISC::CLEAR_BIT(&Global_4524923, 0);

	if (Global_24101 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_24101))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_24101))
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_24101), 64);
				Global_24110[Global_24108] = Global_24101;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
				Global_24110[Global_4524907] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
			Global_24110[Global_4524907] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_4521354[Global_4524907 /*296*/].f_17 /*29*/].f_7)), 64);
		Global_24110[Global_4524907] = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&string1))
		TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
	else if (MISC::ARE_STRINGS_EQUAL(&string1, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);

	if (Global_4521354[Global_4524907 /*296*/].f_32 == 4 || Global_4521354[Global_4524907 /*296*/].f_32 == 5 || Global_4521354[Global_4524907 /*296*/].f_32 == 6 || Global_4521354[Global_4524907 /*296*/].f_32 == 7 || Global_4521354[Global_4524907 /*296*/].f_32 == 8 || Global_4521354[Global_4524907 /*296*/].f_32 == 9 || Global_4521354[Global_4524907 /*296*/].f_32 == 10 || Global_4521354[Global_4524907 /*296*/].f_32 == 11)
	{
		num = 0;
	
		switch (Global_4521354[Global_4524907 /*296*/].f_49)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521354[Global_4524907 /*296*/]);
	
		while (num < Global_4521354[Global_4524907 /*296*/].f_49)
		{
			switch (Global_4521354[Global_4524907 /*296*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2733326.f_849[num /*4*/]);
					break;
			
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935890[num /*4*/]);
					break;
			
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935931[num /*4*/]);
					break;
			
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935952[num /*4*/]);
					break;
			
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935969[num /*4*/]);
					break;
			
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935982[num /*4*/]);
					break;
			
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935995[num /*4*/]);
					break;
			
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1936008[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&sender, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_4521354[Global_4524907 /*296*/].f_17 /*29*/].f_3)), 64);
		iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender, 0);
		MISC::SET_BIT(&Global_4524923, 1);
		Global_24098 = 1;
		Global_24097 = iLocal_81;
		Global_24101 = 0;
	}
	else if (Global_4521354[Global_4524907 /*296*/].f_32 == 13)
	{
		func_74(Global_4524907, &unk31);
		TEXT_LABEL_ASSIGN_STRING(&sender2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_4521354[Global_4524907 /*296*/].f_17 /*29*/].f_3)), 64);
		iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender2, 0);
		MISC::SET_BIT(&Global_4524923, 1);
		Global_24098 = 1;
		Global_24097 = iLocal_81;
		Global_24101 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_4521354[Global_4524907 /*296*/]);
	
		switch (Global_4521354[Global_4524907 /*296*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_33));
			
				if (Global_4521354[Global_4524907 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_67));
			
				if (Global_4521354[Global_4524907 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[Global_4524907 /*296*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[Global_4524907 /*296*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[Global_4524907 /*296*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[Global_4524907 /*296*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_83));
				}
				break;
		
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521354[Global_4524907 /*296*/].f_49);
				break;
		
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521354[Global_4524907 /*296*/].f_49);
			
				if (Global_4521354[Global_4524907 /*296*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_67));
			
				if (Global_4521354[Global_4524907 /*296*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4521354[Global_4524907 /*296*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[Global_4524907 /*296*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[Global_4524907 /*296*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_4521354[Global_4524907 /*296*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521354[Global_4524907 /*296*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521354[Global_4524907 /*296*/].f_83));
				}
				break;
		}
	
		if (Global_4521354[Global_4524907 /*296*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&sender3, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&sender3, &Global_10224, 64);
			TEXT_LABEL_APPEND_STRING(&sender3, "</C>", 64);
			iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender3, 0);
			MISC::SET_BIT(&Global_4524923, 1);
			Global_24098 = 1;
			Global_24097 = iLocal_81;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&sender4, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_4521354[Global_4524907 /*296*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_4521354[Global_4524907 /*296*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&sender5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&sender5, &sender4, 64);
				iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender5, 0);
			}
			else
			{
				iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender4, 0);
			}
		
			MISC::SET_BIT(&Global_4524923, 1);
			Global_24098 = 1;
			Global_24097 = iLocal_81;
			Global_24101 = 0;
		}
	}

	Global_4521354[Global_4524907 /*296*/].f_16 = iLocal_81;
	return;
}

void func_74(int iParam0, char* sParam1) // Position - 0x365A (13914)
{
	int num;

	num = 0;
	func_75(Global_4521354[iParam0 /*296*/].f_49, sParam1);

	if (IS_BIT_SET(Global_1989881, 0))
	{
		TEXT_LABEL_APPEND_STRING(sParam1, "p", 16);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam1);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1989882[num /*4*/]);
		num = num + 1;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam1);
	}

	while (num < Global_4521354[iParam0 /*296*/].f_49)
	{
		switch (Global_4521354[iParam0 /*296*/].f_32)
		{
			case 13:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1989882[num /*4*/]);
				break;
		}
	
		num = num + 1;
	}

	return;
}

void func_75(int iParam0, char* sParam1) // Position - 0x36E6 (14054)
{
	switch (iParam0)
	{
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL01" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~*/, 16);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL02" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~*/, 16);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL03" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL04" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL05" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL06" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL07" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL08" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL09" /*Por tiempo limitado, los miembros podrán tomar prestado o comprar estos vehículos en el Club de coches de Vinewood con un descuento exclusivo:~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~~n~~a~*/, 16);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SCL_EMAIL_CL10", 16);
			break;
	}

	return;
}

void func_76() // Position - 0x379F (14239)
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_10222 /*29*/].f_7)), 64);

	if (Global_10241 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_10146[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*Nuevo contacto*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*Nuevo contacto: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_10146[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_9502, 0);
	return;
}

void func_77() // Position - 0x381C (14364)
{
	if (IS_BIT_SET(Global_9502, 1))
	{
		func_80();
		func_78();
		Global_114990.f_14060[Global_21666 /*20*/].f_18 = 1;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_70[Global_21666] = NETWORK::GET_NETWORK_TIME();
			uLocal_60[Global_21666] = 1;
		}
		else if (!IS_BIT_SET(Global_9502, 10))
		{
			uLocal_65[Global_21666] = MISC::GET_GAME_TIMER();
			uLocal_60[Global_21666] = 1;
		}
		else
		{
			uLocal_65[0] = MISC::GET_GAME_TIMER();
			uLocal_65[2] = MISC::GET_GAME_TIMER();
			uLocal_65[1] = MISC::GET_GAME_TIMER();
			uLocal_60[0] = 1;
			uLocal_60[2] = 1;
			uLocal_60[1] = 1;
		}
	
		MISC::CLEAR_BIT(&Global_9502, 1);
	}

	return;
}

void func_78() // Position - 0x38B5 (14517)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_80362)
		Global_114990.f_14060[3 /*20*/].f_10 = func_155(1198, -1);

	if (Global_114990.f_14060[Global_21666 /*20*/].f_10 == 1)
		if (!func_79(0))
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 2000, 100);

	return;
}

BOOL func_79(int iParam0) // Position - 0x3901 (14593)
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

void func_80() // Position - 0x3958 (14680)
{
	var string1;
	int num;
	int num2;
	var sender;
	var sender2;
	var sender3;
	var sender4;

	if (Global_24101 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_24101))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_24101))
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_24101), 64);
				Global_24110[Global_24108] = Global_24101;
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
				Global_24110[Global_24108] = 0;
			}
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
			Global_24110[Global_24108] = 0;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_114990.f_14150[Global_24108 /*104*/].f_17 /*29*/].f_7)), 64);
	
		if (Global_114990.f_14150[Global_24108 /*104*/].f_17 == CHAR_COMIC_STORE)
			TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P" /*CHAR_COMIC_STORE*/), 64);
	
		Global_24110[Global_24108] = 0;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&string1))
		TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
	else if (MISC::ARE_STRINGS_EQUAL(&string1, "NULL"))
		TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);

	if (Global_114990.f_14150[Global_24108 /*104*/].f_32 == 4 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 5 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 6 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 7 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 8 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 9 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 10 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 11 || Global_114990.f_14150[Global_24108 /*104*/].f_32 == 12)
	{
		num = 0;
		num2 = func_81(9, Global_114990.f_14150[Global_24108 /*104*/].f_49);
	
		switch (num2)
		{
			case 1:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /*~a~ ~a~.*/);
				break;
		
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /*~a~ ~a~, ~a~.*/);
				break;
		
			case 3:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
				break;
		
			case 4:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 5:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 6:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 7:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 8:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		
			case 9:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
				break;
		}
	
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_114990.f_14150[Global_24108 /*104*/]);
	
		while (num < num2)
		{
			switch (Global_114990.f_14150[Global_24108 /*104*/].f_32)
			{
				case 4:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2733326.f_849[num /*4*/]);
					break;
			
				case 5:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935890[num /*4*/]);
					break;
			
				case 6:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935931[num /*4*/]);
					break;
			
				case 7:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935952[num /*4*/]);
					break;
			
				case 8:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935969[num /*4*/]);
					break;
			
				case 9:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935982[num /*4*/]);
					break;
			
				case 10:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935995[num /*4*/]);
					break;
			
				case 11:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1936008[num /*4*/]);
					break;
			
				case 12:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1936021[num /*4*/]);
					break;
			}
		
			num = num + 1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&sender, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_114990.f_14150[Global_24108 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender, 0);
		Global_24098 = 3;
		Global_24097 = iLocal_81;
		Global_24101 = 0;
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_114990.f_14150[Global_24108 /*104*/]);
	
		switch (Global_114990.f_14150[Global_24108 /*104*/].f_32)
		{
			case 0:
				break;
		
			case 1:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_33));
			
				if (Global_114990.f_14150[Global_24108 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
			
				if (Global_114990.f_14150[Global_24108 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114990.f_14150[Global_24108 /*104*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114990.f_14150[Global_24108 /*104*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114990.f_14150[Global_24108 /*104*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_83));
				}
				break;
		
			case 2:
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114990.f_14150[Global_24108 /*104*/].f_49);
				break;
		
			case 3:
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_33));
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_114990.f_14150[Global_24108 /*104*/].f_49);
			
				if (Global_114990.f_14150[Global_24108 /*104*/].f_66 == 1 && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67), "NULL"))
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
			
				if (Global_114990.f_14150[Global_24108 /*104*/].f_66 == 2 && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_114990.f_14150[Global_24108 /*104*/].f_83), "NULL"))
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114990.f_14150[Global_24108 /*104*/].f_67)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_67));
				
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_114990.f_14150[Global_24108 /*104*/].f_83)))
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_114990.f_14150[Global_24108 /*104*/].f_83));
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_114990.f_14150[Global_24108 /*104*/].f_83));
				}
				break;
		}
	
		if (Global_114990.f_14150[Global_24108 /*104*/].f_17 == _CHAR_NULL)
		{
			TEXT_LABEL_ASSIGN_STRING(&sender2, "<C>", 64);
			TEXT_LABEL_APPEND_STRING(&sender2, &Global_10224, 64);
			TEXT_LABEL_APPEND_STRING(&sender2, "</C>", 64);
			iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender2, 0);
			Global_24098 = 3;
			Global_24097 = iLocal_81;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&sender3, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[Global_114990.f_14150[Global_24108 /*104*/].f_17 /*29*/].f_3)), 64);
		
			if (Global_114990.f_14150[Global_24108 /*104*/].f_17 == CHAR_SOCIAL_CLUB)
			{
				TEXT_LABEL_ASSIGN_STRING(&sender4, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&sender4, &sender3, 64);
				iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender4, 0);
			}
			else
			{
				iLocal_81 = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender3, 0);
			}
		
			Global_24098 = 3;
			Global_24097 = iLocal_81;
			Global_24101 = 0;
		}
	}

	Global_114990.f_14150[Global_24108 /*104*/].f_16 = iLocal_81;
	return;
}

int func_81(int iParam0, int iParam1) // Position - 0x4026 (16422)
{
	if (iParam0 < iParam1)
		return iParam0;
	else if (iParam1 < iParam0)
		return iParam1;

	return iParam0;
}

void func_82() // Position - 0x404B (16459)
{
	if (IS_BIT_SET(Global_9502, 19))
	{
		MISC::CLEAR_BIT(&Global_9502, 19);
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_114990.f_14060[3 /*20*/].f_18 = 0;
		Global_114990.f_14060[3 /*20*/].f_17 = 0;
	}

	return;
}

void func_83() // Position - 0x4083 (16515)
{
	if (uLocal_60[Global_21666] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_80 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_70[Global_21666]);
		}
		else
		{
			uLocal_75[Global_21666] = MISC::GET_GAME_TIMER();
			iLocal_80 = uLocal_75[Global_21666] - uLocal_65[Global_21666];
		}
	
		if (iLocal_80 > 300000)
		{
			Global_114990.f_14060[Global_21666 /*20*/].f_18 = 0;
			Global_114990.f_14060[Global_21666 /*20*/].f_17 = 0;
			uLocal_60[Global_21666] = 0;
		}
	}

	return;
}

void func_84() // Position - 0x40FC (16636)
{
	int num;

	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_80362 == false)
	{
		if (!func_67())
		{
			if (iLocal_86 == 0)
			{
				if (Global_114990.f_14150[21 /*104*/].f_24 != 0 || Global_114990.f_14150[22 /*104*/].f_24 != 0 || Global_114990.f_14150[23 /*104*/].f_24 != 0)
				{
					switch (Global_21666)
					{
						case CHAR_MICHAEL:
							if (Global_114990.f_14150[21 /*104*/].f_24 != 0)
							{
								iLocal_59 = 21;
								iLocal_86 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						case CHAR_FRANKLIN:
							if (Global_114990.f_14150[22 /*104*/].f_24 != 0)
							{
								iLocal_59 = 22;
								iLocal_86 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						case CHAR_TREVOR:
							if (Global_114990.f_14150[23 /*104*/].f_24 != 0)
							{
								iLocal_59 = 23;
								iLocal_86 = 1;
								BUILTIN::SETTIMERA(0);
							}
							break;
					
						default:
							break;
					}
				}
			}
			else if (BUILTIN::TIMERA() > 15000)
			{
				iLocal_86 = 0;
				num = 0;
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (iLocal_59 == 21 && Global_21666 != CHAR_MICHAEL)
					num = 1;
			
				if (iLocal_59 == 22 && Global_21666 != CHAR_FRANKLIN)
					num = 1;
			
				if (iLocal_59 == 23 && Global_21666 != CHAR_TREVOR)
					num = 1;
			
				if (Global_114990.f_14150[iLocal_59 /*104*/].f_24 != 0 && num == 0)
					if (!func_55(14))
						if (_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(Global_114990.f_14150[iLocal_59 /*104*/].f_17, &Global_114990.f_14150[iLocal_59 /*104*/], Global_114990.f_14150[iLocal_59 /*104*/].f_24, Global_114990.f_14150[iLocal_59 /*104*/].f_25, Global_114990.f_14150[iLocal_59 /*104*/].f_26, Global_114990.f_14150[iLocal_59 /*104*/].f_29, 0, true, Global_114990.f_14150[iLocal_59 /*104*/].f_31, Global_114990.f_14150[iLocal_59 /*104*/].f_30))
							Global_114990.f_14150[iLocal_59 /*104*/].f_24 = 0;
			}
		
			if (iLocal_97 == 0)
			{
				if (Global_10212[Global_21666])
				{
					iLocal_97 = 1;
					echLocal_98 = Global_21666;
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						iLocal_95 = NETWORK::GET_NETWORK_TIME();
					else
						iLocal_89 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_96 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_95);
				}
				else
				{
					iLocal_90 = MISC::GET_GAME_TIMER();
					iLocal_96 = iLocal_90 - iLocal_89;
				}
			
				if (iLocal_96 > 7000)
				{
					if (_CAN_ENTER_FREEROAM_STATE(0))
					{
						Global_10146[1 /*6*/] = { Global_10195[Global_21666 /*4*/] };
						Global_10222 = Global_10217[Global_21666];
						Global_10212[Global_21666] = false;
						iLocal_97 = 0;
					}
				}
			
				if (echLocal_98 != Global_21666)
					iLocal_97 = 0;
			}
		}
	}

	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x4368 (17256)
{
	return func_86(iParam0, Global_44938);
}

BOOL func_86(int iParam0, int iParam1) // Position - 0x4379 (17273)
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

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x455A (17754)
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_9502, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_89(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_10243 = iParam6;
			Global_10146[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_10223 = echParam0;
			MISC::SET_BIT(&Global_9502, 1);
			MISC::SET_BIT(&Global_9502, 7);
		}
	
		return true;
	}

	return false;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x45E9 (17897)
{
	return Global_2349[character /*29*/].f_3;
}

int func_89(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x45FC (17916)
{
	int num;
	int num2;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21666 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21666 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21666 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_114990.f_14060[Global_21666 /*20*/].f_17 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_103() == 0)
	{
		func_101();
		return 0;
	}

	func_100(Global_24108);
	TEXT_LABEL_ASSIGN_STRING(&Global_114990.f_14150[Global_24108 /*104*/], sParam1, 64);
	Global_114990.f_14150[Global_24108 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114990.f_14150[Global_24108 /*104*/].f_24 = iParam2;
	}

	Global_114990.f_14150[Global_24108 /*104*/].f_25 = iParam7;
	Global_114990.f_14150[Global_24108 /*104*/].f_26 = iParam8;
	Global_114990.f_14150[Global_24108 /*104*/].f_29 = iParam9;
	Global_114990.f_14150[Global_24108 /*104*/].f_30 = iParam12;
	Global_114990.f_14150[Global_24108 /*104*/].f_31 = iParam11;
	Global_114990.f_14150[Global_24108 /*104*/].f_28 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114990.f_14150[Global_24108 /*104*/].f_33), sParam4, 64);
	Global_114990.f_14150[Global_24108 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114990.f_14150[Global_24108 /*104*/].f_50), sParam5, 64);
	Global_114990.f_14150[Global_24108 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114990.f_14150[Global_24108 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114990.f_14150[Global_24108 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_9502, 10))
	{
		Global_114990.f_14150[Global_24108 /*104*/].f_99[0] = true;
		Global_114990.f_14150[Global_24108 /*104*/].f_99[1] = true;
		Global_114990.f_14150[Global_24108 /*104*/].f_99[2] = true;
		Global_10242 = 4;
		func_99(0);
		func_99(2);
		func_99(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114990.f_14150[Global_24108 /*104*/].f_99[Global_21666] = true;
				break;
		
			case 0:
				Global_114990.f_14150[Global_24108 /*104*/].f_99[0] = true;
				break;
		
			case 2:
				Global_114990.f_14150[Global_24108 /*104*/].f_99[2] = true;
				break;
		
			case 1:
				Global_114990.f_14150[Global_24108 /*104*/].f_99[1] = true;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21666)
			{
				case CHAR_MICHAEL:
					func_99(0);
					Global_10242 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_99(1);
					Global_10242 = 1;
					break;
			
				case CHAR_TREVOR:
					func_99(2);
					Global_10242 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_99(3);
					Global_10242 = 3;
					break;
			
				default:
					Global_10242 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_9502, 10))
		{
			Global_114990.f_14060[0 /*20*/].f_17 = 1;
			Global_114990.f_14060[1 /*20*/].f_17 = 1;
			Global_114990.f_14060[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114990.f_14060[Global_21666 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114990.f_14060[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114990.f_14060[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114990.f_14060[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_24110[Global_24108] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21609)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21655, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21666)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21655, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21655, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21655, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21655, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_10341[Global_21666 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_98())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21655, true);
	}

	if (!Global_21900 && !IS_BIT_SET(Global_9504, 9))
	{
		if (Global_21666.f_1 == 6)
		{
			func_56(Global_21647, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_54(1);
			func_56(Global_21647, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21646), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1980395 != -1 && echParam0 == Global_1980395)
		num2 = 1;

	func_90(echParam0, sParam1, num2, func_96(PLAYER::PLAYER_ID()));
	return 1;
}

void func_90(eCharacter echParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x4AE1 (19169)
{
	eCharacter character;

	if (!func_91())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = iParam3;
	character.f_6 = Global_1980378.f_7;
	character.f_7 = Global_1980378.f_8;
	character.f_8 = Global_1980378.f_9;
	character.f_9 = Global_1980378.f_10;
	character.f_10 = Global_1980378.f_11;
	character.f_11 = Global_1980378.f_12;
	character.f_12 = Global_1980378.f_13;
	character.f_13 = Global_1980378.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1980395 = -1;

	return;
}

BOOL func_91() // Position - 0x4B7C (19324)
{
	if (!Global_262145.f_28524)
		return false;

	if (!Global_80362)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_92(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1893070[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_92(Player plParam0) // Position - 0x4BDF (19423)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_94(8))
			return true;
	
		if (Global_2733326.f_6065.f_1 > 0)
			return true;
	}

	return func_93(plParam0, 20);
}

BOOL func_93(Player plParam0, int iParam1) // Position - 0x4C16 (19478)
{
	return IS_BIT_SET(Global_1893070[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_94(int iParam0) // Position - 0x4C2E (19502)
{
	return IS_BIT_SET(Global_2733326.f_6054, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x4C40 (19520)
{
	return -1;
}

int func_96(Player plParam0) // Position - 0x4C49 (19529)
{
	if (func_97(plParam0))
		return Global_1845347[plParam0 /*884*/].f_198.f_6;

	return 0;
}

BOOL func_97(Player plParam0) // Position - 0x4C6B (19563)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_98() // Position - 0x4C8D (19597)
{
	return Global_1575097;
}

void func_99(int iParam0) // Position - 0x4C99 (19609)
{
	var unk;
	var unk2;

	unk = Global_114990.f_14060[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_100(int iParam0) // Position - 0x4CB8 (19640)
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
	Global_114990.f_14150[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114990.f_14150[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114990.f_14150[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114990.f_14150[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114990.f_14150[iParam0 /*104*/].f_18.f_4 = num;
	Global_114990.f_14150[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_101() // Position - 0x4D4A (19786)
{
	int num;
	int num2;
	int num3;

	if (Global_80362)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_24108 = 34;
	Global_114990.f_14150[Global_24108 /*104*/].f_18 = -1;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_1 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_2 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_3 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_102(Global_114990.f_14150[num3 /*104*/].f_18, Global_114990.f_14150[Global_24108 /*104*/].f_18))
			Global_24108 = num3;
	
		num3 = num3 + 1;
	}

	Global_114990.f_14150[Global_24108 /*104*/].f_24 = 1;
	return;
}

BOOL func_102(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x4E15 (19989)
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

int func_103() // Position - 0x4F00 (20224)
{
	int num;
	int num2;
	int i;

	if (Global_80362)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_114990.f_14150[i /*104*/].f_24 == 0)
		{
			Global_24108 = i;
			return 1;
		}
	}

	i = num;
	Global_24108 = 34;
	Global_114990.f_14150[Global_24108 /*104*/].f_18 = -1;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_1 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_2 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_3 = 0;
	Global_114990.f_14150[Global_24108 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114990.f_14150[i /*104*/].f_24 == 0 || Global_114990.f_14150[i /*104*/].f_24 == 1)
			if (!func_102(Global_114990.f_14150[i /*104*/].f_18, Global_114990.f_14150[Global_24108 /*104*/].f_18))
				Global_24108 = i;
	
		Global_114990.f_14150[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_24108 == 34)
		return 0;

	Global_114990.f_14150[Global_24108 /*104*/].f_99[0] = false;
	Global_114990.f_14150[Global_24108 /*104*/].f_99[1] = false;
	Global_114990.f_14150[Global_24108 /*104*/].f_99[2] = false;
	return 1;
}

void func_104() // Position - 0x5068 (20584)
{
	if (IS_BIT_SET(Global_9502, 6))
	{
		if (Global_10240 > 0)
		{
			if (IS_BIT_SET(Global_9503, 11))
			{
				if (bLocal_58)
				{
					func_105(iLocal_54, "CLEAR_ALL");
				
					if (IS_BIT_SET(Global_9502, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_54, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					if (IS_BIT_SET(Global_4524923, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_54, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					if (Global_80362 == true)
					{
						if (IS_BIT_SET(Global_4524923, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_54, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					
						if (IS_BIT_SET(Global_4524923, 28))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_54, "CREATE_ALERT");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				
					if (IS_BIT_SET(Global_4524923, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_54, "CREATE_ALERT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
					
						if (IS_BIT_SET(Global_4524923, 12) || IS_BIT_SET(Global_4524923, 11) || IS_BIT_SET(Global_9502, 25))
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
						else
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
					
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
				
					MISC::CLEAR_BIT(&Global_9503, 11);
					bLocal_58 = false;
				}
			}
		}
	
		if (Global_10240 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_54);
			MISC::CLEAR_BIT(&Global_9502, 6);
		}
		else
		{
			func_17();
		}
	}
	else if (Global_10240 > 0)
	{
		iLocal_54 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
	
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_54))
		{
			BUILTIN::WAIT(0);
		}
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		MISC::SET_BIT(&Global_9502, 6);
	}

	return;
}

void func_105(int iParam0, char* sParam1) // Position - 0x521D (21021)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_106() // Position - 0x5232 (21042)
{
	if (IS_BIT_SET(Global_9504, 11))
	{
		MISC::SET_BIT(&Global_9504, 12);
		MISC::CLEAR_BIT(&Global_9504, 11);
		return;
	}

	if (!IS_BIT_SET(Global_9504, 11))
	{
		MISC::CLEAR_BIT(&Global_9504, 12);
		return;
	}

	return;
}

void func_107() // Position - 0x526E (21102)
{
	if (IS_BIT_SET(Global_9503, 7))
	{
		MISC::SET_BIT(&Global_9503, 6);
		MISC::CLEAR_BIT(&Global_9503, 7);
		return;
	}

	if (!IS_BIT_SET(Global_9503, 7))
	{
		MISC::CLEAR_BIT(&Global_9503, 6);
		return;
	}

	return;
}

void func_108() // Position - 0x52A5 (21157)
{
	if (IS_BIT_SET(Global_9503, 4))
	{
		MISC::SET_BIT(&Global_9503, 3);
		MISC::CLEAR_BIT(&Global_9503, 4);
		return;
	}

	if (!IS_BIT_SET(Global_9503, 4))
	{
		MISC::CLEAR_BIT(&Global_9503, 3);
		return;
	}

	return;
}

void func_109() // Position - 0x52DC (21212)
{
	if (IS_BIT_SET(Global_9503, 2))
	{
		if (!(Global_21666.f_1 == 1))
			Global_21666.f_1 = 0;
	
		MISC::CLEAR_BIT(&Global_9503, 2);
		return;
	}

	if (!IS_BIT_SET(Global_9503, 2))
	{
		if (!(Global_21666.f_1 == 1))
			if (Global_21666.f_1 < 4)
				Global_21666.f_1 = 3;
	
		return;
	}

	return;
}

BOOL func_110() // Position - 0x532E (21294)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	int num;
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
			if (Global_21609 == false)
				if (Global_8817 != _CHAR_DETONATEBOMB_2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						Global_23040 != 2;
	
		if (func_55(14))
			return false;
	
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
			return false;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					return false;
	
		if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_38, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1927319))
			return false;
	
		if (Global_114038)
			return false;
	}

	if (Global_80362)
		return false;

	num = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON && camActiveViewModeContext == ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		num = 1;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("seashark2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("submersible2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("toro"))
					num = 0;
			}
		}
	}

	if (Global_4525201 || num == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_114990.f_14060.f_89)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0)
				return true;
			else
				return false;
		else
			return true;

	return false;
}

BOOL func_111(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5577 (21879)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_80362 == false)
	{
		if (func_55(14))
		{
			if (Global_24099 == 2 || Global_24099 == 4)
			{
			}
			else
			{
				return false;
			}
		}
	}

	if (Global_21666.f_1 == 9)
		return false;

	if (iParam2 == 0)
		if (func_79(0) == true)
			return false;

	if (Global_21632 == 1)
		return false;

	if (Global_21666.f_1 == 7)
		return false;

	iParam1 == 1;

	if (!SCRIPT::IS_THREAD_ACTIVE(Global_21663))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_21666.f_1 < 4)
			{
				func_112("cellphone_flashhand");
			
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) == 0)
					Global_21663 = BUILTIN::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
			
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}

	while (!Global_21648)
	{
		BUILTIN::WAIT(0);
	}

	func_158();
	func_157();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
	{
		Global_10142 = 0;
		Global_21666.f_1 = 7;
		func_112(&(Global_9509[iParam0 /*15*/].f_5));
	
		if (bParam3)
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
				Global_21664 = BUILTIN::START_NEW_SCRIPT(&(Global_9509[iParam0 /*15*/].f_5), CONTACTS_APP);
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_9509[iParam0 /*15*/].f_9) == 0)
			Global_21664 = BUILTIN::START_NEW_SCRIPT(&(Global_9509[iParam0 /*15*/].f_5), 2600);
	
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_9509[iParam0 /*15*/].f_5));
		return true;
	}

	return true;
}

void func_112(char* sParam0) // Position - 0x56DA (22234)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		BUILTIN::WAIT(0);
	}

	return;
}

void func_113(int iParam0) // Position - 0x56FA (22266)
{
	if (func_116())
		return;

	if (Global_21899)
		if (func_115())
			func_114(true, true);
		else
			func_114(false, false);

	if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23040 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_67())
		Global_21666.f_1 = 3;

	return;
}

void func_114(BOOL bParam0, BOOL bParam1) // Position - 0x5784 (22404)
{
	if (bParam0)
	{
		if (func_79(0))
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

BOOL func_115() // Position - 0x57F8 (22520)
{
	return IS_BIT_SET(Global_1965230, 5);
}

BOOL func_116() // Position - 0x5806 (22534)
{
	return IS_BIT_SET(Global_1965230, 19);
}

void func_117() // Position - 0x5815 (22549)
{
	float i;

	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);

	for (i = 0f; !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) && !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) || i < 1f; i = i + MISC::GET_FRAME_TIME())
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /*ALERTA*/, "VE_DIR_MODE_SURE" /*¿Seguro que quieres iniciar el modo Director?*/, 18, 0, false, -1, 0, 0, true, 0);
		BUILTIN::WAIT(0);
	}

	MISC::SET_GAME_PAUSED(false);

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_113930 = true;
	}

	return;
}

void func_118(int iParam0) // Position - 0x5894 (22676)
{
	float i;
	char* str;

	MISC::SET_GAME_PAUSED(true);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);

	for (i = 0f; !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || i < 1f; i = i + MISC::GET_FRAME_TIME())
	{
		str = func_119(iParam0, 119);
		HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /*~a~ no está disponible mientras ~a~.*/, 16384, 0, false, -1, "FBR_DIR_MODE" /*Modo director*/, str, true, 0);
		BUILTIN::WAIT(0);
	}

	MISC::SET_GAME_PAUSED(false);
	return;
}

char* func_119(int iParam0, int iParam1) // Position - 0x58F6 (22774)
{
	iParam1 = iParam1;

	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
	
		case 2:
			return "FBR_BLK_RNNNG" /*la característica ya está en funcionamiento*/;
	
		case 13:
			return "FBR_BLK_DEAD" /*estás muerto*/;
	
		case 3:
			return "FBR_BLK_MISS" /*juegas una misión*/;
	
		case 5:
			return "FBR_BLK_SHOP" /*estás de compras*/;
	
		case 4:
			return "FBR_BLK_CUTS" /*ves una cinemática*/;
	
		case 6:
			return "FBR_BLK_WANT" /*tienes un nivel de búsqueda*/;
	
		case 7:
			return "FBR_BLK_ONLI" /*juegas GTA Online*/;
	
		case 8:
			return "FBR_BLK_ACT" /*ejecutas esta acción*/;
	
		case 9:
			return "FBR_BLK_LOC" /*estás en esta ubicación*/;
	
		case 10:
			return "FBR_BLK_VEH" /*estás en un vehículo*/;
	
		case 11:
			return "FBR_BLK_PARA" /*haces paracaidismo*/;
	
		case 12:
			return "FBR_BLK_FALL" /*estás cayendo*/;
	
		default:
			return "ERROR";
	}

	return "ERROR";
}

int func_120(int iParam0, BOOL bParam1, int iParam2) // Position - 0x59E7 (23015)
{
	int num;

	iParam2 = iParam2;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		return 13;

	if (bParam1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
			return 2;

	if (iParam2 == 119)
		if (func_153() == 2 || func_153() == 6 || Global_80362 || Global_113941 > MISC::GET_GAME_TIMER())
			return 7;

	if (func_152() && !func_55(14))
		return 3;

	if (func_151())
		return 3;

	if (func_150())
		return 8;

	if (bParam1)
		if (func_149())
			return 8;

	if (Global_99406)
		return 3;

	if (Global_34090)
		return 8;

	if (Global_33981)
		return 8;

	if (Global_2883694)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0)
			return 3;
	else if (Global_2883693)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0)
			return 3;
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0)
		return 3;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0)
		return 13;

	if (func_148(bParam1))
		return 3;

	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		return 12;

	if (func_147(Global_114014, 256))
		return 3;

	if (func_146() || func_145() || func_141() || func_140())
		return 5;

	if (func_140())
		return 5;

	if (func_139())
		return 5;

	if (func_138())
		return 5;

	if (func_145())
		return 5;

	if (func_137() && !Global_113935)
		return 8;

	if (func_141())
		return 5;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_136())
		return 4;

	if (func_98())
		return 4;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			num = func_124(60);
		
			if (num != 0)
				return num;
		
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
				return 11;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || Global_114037)
				return 10;
		}
	}

	if (Global_34088)
		return 8;

	if (Global_80360)
		return 4;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
			return 6;
	
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
			return 8;
	
		if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
			return 8;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 7;

	if (func_123())
		return 8;

	if (Global_33835)
		return 3;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		return 4;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, false, true, 0))
		return 9;

	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return 9;

	if (bParam1)
		if (!func_121(false))
			return 8;

	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return 9;

	return 0;
}

BOOL func_121(BOOL bParam0) // Position - 0x5D5C (23900)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		return false;

	if (func_98() || Global_24447.f_4 || func_122() || MISC::IS_MEMORY_CARD_IN_USE() || MISC::IS_AUTO_SAVE_IN_PROGRESS() || func_136() || func_151())
		return false;

	if (!bParam0)
		if (MISC::GET_MISSION_FLAG())
			return false;

	return true;
}

BOOL func_122() // Position - 0x5E6C (24172)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99964.f_44 == 1;

	return false;
}

BOOL func_123() // Position - 0x5E88 (24200)
{
	return Global_62261;
}

int func_124(int iParam0) // Position - 0x5E93 (24211)
{
	Vector3 vector;
	Interior interiorFromEntity;
	int i;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		return 5;

	vector = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };

	if (Global_114077[10 /*10*/].f_1)
		if (BUILTIN::VDIST2(vector, 241.9889f, 360.4732f, 105.6166f) < 2f)
			return 3;

	if (func_134(2) && !func_134(17))
		if (BUILTIN::VDIST2(vector, -59.966286f, -1099.0055f, 25.520878f) < 8f)
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, false, true))
				return 9;

	if (BUILTIN::VDIST2(vector, -740.9346f, 5599.4263f, 40.71515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, false, true))
			return 9;

	if (BUILTIN::VDIST2(vector, -740.9346f, 5590.4263f, 40.71515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, false, true))
			return 9;

	if (BUILTIN::VDIST2(vector, 446.32654f, 5566.35f, 780.21515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, false, true))
			return 9;

	if (BUILTIN::VDIST2(vector, 446.32654f, 5577.35f, 780.21515f) < 11f)
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, false, true))
			return 9;

	if (BUILTIN::VDIST2(vector, 128.83f, -1297.98f, 29.3f) < 2f || BUILTIN::VDIST2(vector, 95.07f, -1284.98f, 29.3f) < 2f)
		return 9;

	if (BUILTIN::VDIST2(vector, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_133(26))
		return 9;

	if (!bLocal_44)
		func_125(iParam0);

	interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());

	if (interiorFromEntity == 0)
		return 0;
	else if (interiorFromEntity == Global_113952 || interiorFromEntity == Global_113953 || interiorFromEntity == Global_113954)
		return 9;
	else if (interiorFromEntity == Global_113943)
		return 9;
	else if (interiorFromEntity == Global_113944)
		return 9;
	else if (interiorFromEntity == Global_113947)
		return 9;
	else if (interiorFromEntity == Global_113946)
		return 9;
	else if (interiorFromEntity == Global_113948)
		return 9;
	else if (interiorFromEntity == Global_113949)
		return 9;
	else if (interiorFromEntity == Global_113950)
		return 9;
	else if (interiorFromEntity == Global_113951)
		return 9;
	else if (interiorFromEntity == Global_113955)
		return 9;
	else if (interiorFromEntity == Global_113956)
		return 9;
	else if (interiorFromEntity == Global_113957)
		return 9;
	else if (interiorFromEntity == Global_113958)
		return 9;
	else if (interiorFromEntity == Global_113959)
		return 9;
	else if (interiorFromEntity == Global_113960 || interiorFromEntity == Global_113961 && func_134(67))
		return 9;

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		if (interiorFromEntity == Global_113962[i])
			return 9;
	}

	return 0;
}

void func_125(int iParam0) // Position - 0x62BB (25275)
{
	int i;

	iParam0 = iParam0;
	func_128(24, &Global_113943);
	func_128(47, &Global_113944);
	func_128(10, &Global_113952);
	func_128(9, &Global_113953);
	func_128(8, &Global_113954);
	func_128(21, &Global_113955);
	func_128(11, &Global_113956);
	func_128(18, &Global_113960);
	func_128(19, &Global_113961);
	Global_113947 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
	Global_113946 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
	Global_113948 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
	Global_113949 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
	Global_113950 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.2587f, 28.797f, "v_gun");
	Global_113951 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
	Global_113957 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
	Global_113958 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
	Global_113959 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");

	for (i = 0; i <= 19 - 1; i = i + 1)
	{
		Global_113962[i] = INTERIOR::GET_INTERIOR_AT_COORDS(func_126(i));
	}

	bLocal_44 = true;
	return;
}

Vector3 func_126(int iParam0) // Position - 0x6447 (25671)
{
	if (!func_127(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
	
		case 1:
			return -52.7185f, -1756.1747f, 28.4432f;
	
		case 2:
			return 1159.4408f, -325.6666f, 68.2272f;
	
		case 3:
			return 1699.4293f, 4928.6416f, 41.0858f;
	
		case 4:
			return -1822.9261f, 788.9531f, 137.212f;
	
		case 5:
			return 1166.4265f, 2703.5283f, 37.1574f;
	
		case 6:
			return -2973.4138f, 390.6885f, 14.0433f;
	
		case 7:
			return -1225.8604f, -903.5782f, 11.3263f;
	
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
	
		case 9:
			return -1490.2753f, -382.8514f, 39.1634f;
	
		case 10:
			return -3240.7188f, 1004.5081f, 11.8468f;
	
		case 11:
			return -3039.2488f, 589.3831f, 6.9251f;
	
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
	
		case 13:
			return 2558.7542f, 385.599f, 107.6391f;
	
		case 14:
			return 2681.5112f, 3282.7627f, 54.2573f;
	
		case 15:
			return 1731.1532f, 6411.6333f, 34.0373f;
	
		case 16:
			return 1964.9305f, 3741.207f, 31.3599f;
	
		case 17:
			return 29.0707f, -1348.7728f, 28.5101f;
	
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_127(int iParam0) // Position - 0x6631 (26161)
{
	if (iParam0 >= 19)
		return false;
	else if (iParam0 <= -1)
		return false;

	return true;
}

var func_128(int iParam0, Interior inParam1) // Position - 0x6652 (26194)
{
	Vector3 vector;

	vector = { func_129(iParam0) };
	*inParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, vector.f_3);
	return vector.f_4;
}

struct<5> func_129(int iParam0) // Position - 0x6677 (26231)
{
	var unk;
	var unk6;

	switch (iParam0)
	{
		case 0:
			unk = { -447.4833f, 280.3197f, 77.5215f };
			unk.f_3 = "v_comedy";
			unk.f_4 = unk.f_3;
			break;
	
		case 1:
			unk = { -1906.7858f, -573.7576f, 19.0773f };
			unk.f_3 = "v_psycheoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 2:
			unk = { 1399.973f, 1148.7559f, 113.3336f };
			unk.f_3 = "v_ranch";
			unk.f_4 = unk.f_3;
			break;
	
		case 3:
			unk = { -598.6379f, -1608.3986f, 26.0108f };
			unk.f_3 = "v_recycle";
			unk.f_4 = unk.f_3;
			break;
	
		case 4:
			unk = { -556.5089f, 286.3181f, 81.1763f };
			unk.f_3 = "v_rockclub";
			unk.f_4 = unk.f_3;
			break;
	
		case 5:
			unk = { -111.7116f, -11.912f, 69.5196f };
			unk.f_3 = "v_janitor";
			unk.f_4 = unk.f_3;
			break;
	
		case 6:
			unk = { 1274.9338f, -1714.7256f, 53.7715f };
			unk.f_3 = "v_lesters";
			unk.f_4 = unk.f_3;
			break;
	
		case 7:
			unk = { 147.433f, -2201.3704f, 3.688f };
			unk.f_3 = "v_torture";
			unk.f_4 = unk.f_3;
			break;
	
		case 8:
			unk = { 320.9934f, 265.2515f, 82.1221f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Vinewood)";
			break;
	
		case 9:
			unk = { -1425.5645f, -244.3f, 15.8053f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Morningwood)";
			break;
	
		case 10:
			unk = { 377.153f, -717.567f, 10.0536f };
			unk.f_3 = "v_cinema";
			unk.f_4 = "v_cinema (Downtown)";
			break;
	
		case 11:
			unk = { 245.1564f, 370.211f, 104.7382f };
			unk.f_3 = "v_epsilonism";
			unk.f_4 = unk.f_3;
			break;
	
		case 12:
			unk = { 173.1176f, -1003.2789f, -99.9999f };
			unk.f_3 = "v_garages";
			unk.f_4 = unk.f_3;
			break;
	
		case 13:
			unk = { 199.9715f, -999.6678f, -100f };
			unk.f_3 = "v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 14:
			unk = { 228.6058f, -992.0537f, -99.9999f };
			unk.f_3 = "v_garagel";
			unk.f_3 = "hei_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 15:
			unk = { 1854.2538f, 3686.7385f, 33.2671f };
			unk.f_3 = "v_sheriff";
			unk.f_4 = unk.f_3;
			break;
	
		case 16:
			unk = { -444.8907f, 6013.587f, 30.7164f };
			unk.f_3 = "v_sheriff2";
			unk.f_4 = unk.f_3;
			break;
	
		case 17:
			unk = { 3522.8452f, 3707.9653f, 19.9918f };
			unk.f_3 = "v_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 18:
			unk = { 717.2994f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweat";
			unk.f_4 = unk.f_3;
			break;
	
		case 19:
			unk = { 717.299f, -974.4271f, 23.9142f };
			unk.f_3 = "v_sweatempty";
			unk.f_4 = unk.f_3;
			break;
	
		case 20:
			unk = { 2449.7852f, 4983.8247f, 45.8106f };
			unk.f_3 = "v_farmhouse";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1087.1952f, -1988.445f, 28.649f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 23:
			unk = { 982.233f, -2160.3816f, 28.4761f };
			unk.f_3 = "v_abattoir";
			unk.f_4 = unk.f_3;
			break;
	
		case 21:
			unk = { 479.0568f, -1316.8253f, 28.2038f };
			unk.f_3 = "v_chopshop";
			unk.f_4 = unk.f_3;
			break;
	
		case 24:
			unk = { -1005.6632f, -478.3461f, 49.0265f };
			unk.f_3 = "v_58_sol_office";
			unk.f_4 = unk.f_3;
			break;
	
		case 25:
			unk6 = { func_132(1, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (1)";
			break;
	
		case 26:
			unk6 = { func_132(2, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (2)";
			break;
	
		case 27:
			unk6 = { func_132(3, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (3)";
			break;
	
		case 28:
			unk6 = { func_132(4, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (4)";
			break;
	
		case 29:
			unk6 = { func_132(5, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (5)";
			break;
	
		case 30:
			unk6 = { func_132(6, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (6)";
			break;
	
		case 31:
			unk6 = { func_132(7, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (7)";
			break;
	
		case 32:
			unk = { Global_1312440[34 /*1951*/].f_146.f_1517 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (8)";
			break;
	
		case 33:
			unk6 = { func_132(35, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (9)";
			break;
	
		case 34:
			unk6 = { func_132(36, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (10)";
			break;
	
		case 35:
			unk6 = { func_132(37, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (11)";
			break;
	
		case 36:
			unk6 = { func_132(38, false) };
			unk = { -20.1f, -580.8f, 91.3f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (12)";
			break;
	
		case 37:
			unk6 = { func_132(39, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (13)";
			break;
	
		case 38:
			unk6 = { func_132(40, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (14)";
			break;
	
		case 39:
			unk6 = { func_132(41, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (15)";
			break;
	
		case 40:
			unk6 = { func_132(42, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (16)";
			break;
	
		case 41:
			unk6 = { func_132(43, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (17)";
			break;
	
		case 42:
			unk = { -470.3754f, -698.5207f, 51.5276f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (18)";
			break;
	
		case 43:
			unk = { -460.6133f, -691.5562f, 69.9067f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (19)";
			break;
	
		case 44:
			unk = { 300.633f, -997.4288f, -99.9727f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = "hei_dlc_apart_high_new (20)";
			break;
	
		case 49:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (1)";
			break;
	
		case 50:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (2)";
			break;
	
		case 51:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (3)";
			break;
	
		case 52:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = "apa_v_mp_stilts_b";
			unk.f_4 = "apa_v_mp_stilts_b (4)";
			break;
	
		case 53:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (5)";
			break;
	
		case 54:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (7)";
			break;
	
		case 55:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (8)";
			break;
	
		case 56:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (10)";
			break;
	
		case 57:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (12)";
			break;
	
		case 58:
			unk = { 374.2012f, 416.9688f, 142.5991f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = "apa_v_mp_stilts_a (13)";
			break;
	
		case 45:
			unk = { -16.295849f, -684.0385f, 33.508316f };
			unk.f_3 = "dt1_03_carpark";
			unk.f_4 = "dt1_03_carpark";
			break;
	
		case 46:
			unk = { 341.1f, -1000f, -99.2f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = "v_apart_midspaz";
			break;
	
		case 47:
			unk = { 199.97156f, -1018.95416f, -100f };
			unk.f_3 = "v_garagem_sp";
			unk.f_4 = unk.f_3;
			break;
	
		case 48:
			unk = { -1388.0013f, -618.4197f, 30.8196f };
			unk.f_3 = "v_bahama";
			unk.f_4 = unk.f_3;
			break;
	}

	switch (iParam0)
	{
		case 59:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 60:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 61:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 62:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 63:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 64:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 65:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 66:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 67:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 68:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 69:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 70:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 71:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 72:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 73:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 74:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 75:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 76:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 77:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 78:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_04";
			unk.f_4 = unk.f_3;
			break;
	
		case 79:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_05";
			unk.f_4 = unk.f_3;
			break;
	
		case 80:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_06";
			unk.f_4 = unk.f_3;
			break;
	
		case 81:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_07";
			unk.f_4 = unk.f_3;
			break;
	
		case 82:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = "apa_v_mp_h_08";
			unk.f_4 = unk.f_3;
			break;
	
		case 83:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 84:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 85:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 86:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 87:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 88:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 89:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 90:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 91:
			unk6 = { func_132(87, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 92:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 93:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 94:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 95:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 96:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 97:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 98:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 99:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 100:
			unk6 = { func_132(88, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 101:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 102:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 103:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 104:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 105:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 106:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 107:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 108:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 109:
			unk6 = { func_132(89, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 110:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 111:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 112:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_01c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 113:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 114:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 115:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_02c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 116:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03a_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 117:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03b_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 118:
			unk6 = { func_132(90, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "ex_int_office_03c_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 119:
			unk6 = { func_132(91, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 120:
			unk6 = { func_132(97, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "bkr_biker_dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 121:
			unk6 = { func_132(103, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 122:
			unk6 = { func_132(104, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 123:
			unk6 = { func_132(105, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 124:
			unk6 = { func_132(106, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 125:
			unk6 = { func_132(107, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 126:
			unk6 = { func_132(108, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 127:
			unk6 = { func_132(109, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 128:
			unk6 = { func_132(110, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 129:
			unk6 = { func_132(111, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 130:
			unk6 = { func_132(112, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 131:
			unk6 = { func_132(113, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 132:
			unk6 = { func_132(114, false) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 133:
			unk6 = { func_132(103, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 134:
			unk6 = { func_132(106, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 135:
			unk6 = { func_132(109, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 136:
			unk6 = { func_132(112, true) };
			unk = { unk6 + { 1f, 0f, 0f } };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 137:
			unk = { 938.3077f, -3196.1116f, -100f };
			unk.f_3 = "gr_grdlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 138:
			unk = { 512.5f, 4852f, -62.6f };
			unk.f_3 = "xm_x17dlc_int_sub";
			unk.f_4 = unk.f_3;
			break;
	
		case 139:
			unk = { 2047f, 2942f, -61.9f };
			unk.f_3 = "xm_x17dlc_int_facility";
			unk.f_4 = unk.f_3;
			break;
	
		case 140:
			unk = { -1047.5997f, -232.3503f, 38.0135f };
			unk.f_3 = "v_faceoffice";
			unk.f_4 = unk.f_3;
			break;
	
		case 22:
			unk = { 1100f, -2004f, 37f };
			unk.f_3 = "v_foundry";
			unk.f_4 = unk.f_3;
			break;
	
		case 141:
			unk = { 361f, 6306f, -159f };
			unk.f_3 = "xm_x17dlc_int_silo_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 142:
			unk = { 305f, 6298f, -160f };
			unk.f_3 = "xm_x17dlc_int_silo_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 143:
			unk = { 244f, 6163f, -159f };
			unk.f_3 = "xm_x17dlc_int_lab";
			unk.f_4 = unk.f_3;
			break;
	
		case 144:
			unk = { 2168f, 2920f, -84f };
			unk.f_3 = "xm_x17dlc_int_facility2";
			unk.f_4 = unk.f_3;
			break;
	
		case 145:
			unk = { 446f, 5922f, -158f };
			unk.f_3 = "xm_x17dlc_int_bse_tun";
			unk.f_4 = unk.f_3;
			break;
	
		case 146:
			unk = { 252f, 5972f, -156f };
			unk.f_3 = "xm_x17dlc_int_base_loop";
			unk.f_4 = unk.f_3;
			break;
	
		case 147:
			unk = { 682f, 5959f, -152f };
			unk.f_3 = "xm_x17dlc_int_base_ent";
			unk.f_4 = unk.f_3;
			break;
	
		case 148:
			unk = { 551f, 5939f, -158f };
			unk.f_3 = "xm_x17dlc_int_base";
			unk.f_4 = unk.f_3;
			break;
	
		case 149:
			unk = { 520.0001f, 4750f, -70f };
			unk.f_3 = "xm_x17dlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 150:
			unk = { -1266.8022f, -3014.849f, -49.4903f };
			unk.f_3 = "sm_smugdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 151:
			unk = { 974.9203f, -3000.0647f, -40.647f };
			unk.f_3 = "imp_impexp_intwaremed";
			unk.f_4 = unk.f_3;
			break;
	
		case 152:
			unk = { 969.5376f, -3000.4111f, -48.647f };
			unk.f_3 = "imp_impexp_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 153:
			unk = { 1094.9966f, -3100.0117f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_s_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 154:
			unk = { 1059.9949f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_m_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 155:
			unk = { 1010.0083f, -3100f, -39.9999f };
			unk.f_3 = "ex_int_warehouse_l_dlc";
			unk.f_4 = unk.f_3;
			break;
	
		case 156:
			unk = { 372.6707f, 405.5235f, 144.5326f };
			unk.f_3 = "apa_v_mp_stilts_a";
			unk.f_4 = unk.f_3;
			break;
	
		case 157:
			unk = { -282.0588f, -955.17f, 85.3036f };
			unk.f_3 = "hei_dlc_apart_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 158:
			unk = { 342.7946f, -997.4225f, -99.7444f };
			unk.f_3 = "v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 159:
			unk = { 260.3268f, -997.4298f, -100.0086f };
			unk.f_3 = "v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 160:
			unk = { 108.2369f, -753.5364f, 233.1523f };
			unk.f_3 = "v_fib01";
			unk.f_4 = unk.f_3;
			break;
	
		case 161:
			unk = { 135.3226f, -746.3677f, 253.1523f };
			unk.f_3 = "v_fib03";
			unk.f_4 = unk.f_3;
			break;
	
		case 162:
			unk = { 108.2572f, -753.5342f, 44.7548f };
			unk.f_3 = "v_office_lobby";
			unk.f_4 = unk.f_3;
			break;
	
		case 163:
			unk = { 228.6161f, -992.053f, -99.9999f };
			unk.f_3 = "heist_dlc_garage_high_new";
			unk.f_4 = unk.f_3;
			break;
	
		case 164:
			unk = { 575f, 4750f, -60f };
			unk.f_3 = "xm_v_apart_midspaz";
			unk.f_4 = unk.f_3;
			break;
	
		case 165:
			unk = { 600f, 4750f, -60f };
			unk.f_3 = "xm_v_studio_lo";
			unk.f_4 = unk.f_3;
			break;
	
		case 166:
			unk = { 630f, 4750f, -60f };
			unk.f_3 = "xm_v_garagem";
			unk.f_4 = unk.f_3;
			break;
	
		case 167:
			unk = { 1257f, 4796.7f, -39.1f };
			unk.f_3 = "xm_x17dlc_int_tun_entry";
			unk.f_4 = unk.f_3;
			break;
	
		case 168:
			unk = { 694.4f, 5898.9f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 169:
			unk = { 1121.8f, 5516.3f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 170:
			unk = { 1279.6f, 5233.2f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_straight";
			unk.f_4 = unk.f_3;
			break;
	
		case 171:
			unk = { 1158.6f, 5467.1f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 172:
			unk = { 705.9f, 5838.5f, -152.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 173:
			unk = { 1316.5f, 5184f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_slope_flat";
			unk.f_4 = unk.f_3;
			break;
	
		case 174:
			unk = { 1248f, 5276.1f, -80.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 175:
			unk = { 1090.2f, 5559.2f, -101.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 176:
			unk = { 1261f, 4808.6f, -39.3f };
			unk.f_3 = "xm_x17dlc_int_tun_flat_slope";
			unk.f_4 = unk.f_3;
			break;
	
		case 177:
			unk = { 721.8f, 5781.4f, -146.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 178:
			unk = { 780.8f, 5703.4f, -136.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 179:
			unk = { 868.1f, 5659.2f, -126.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 180:
			unk = { 1218.2f, 5321.2f, -85.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 181:
			unk = { 1278.5f, 4859.7f, -44.7f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_r";
			unk.f_4 = unk.f_3;
			break;
	
		case 182:
			unk = { 1187.2f, 5419.8f, -96.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 183:
			unk = { 1344.7f, 5136.4f, -75.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 184:
			unk = { 1363.4f, 5039.5f, -65.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 185:
			unk = { 1049.3f, 5602.1f, -107.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 186:
			unk = { 1337.8f, 4944.3f, -55.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 187:
			unk = { 961.5f, 5646.9f, -117.4f };
			unk.f_3 = "xm_x17dlc_int_tun_30d_l";
			unk.f_4 = unk.f_3;
			break;
	
		case 188:
			unk = { 345.0041f, 4842.001f, -59.9997f };
			unk.f_3 = "xm_x17dlc_int_02";
			unk.f_4 = unk.f_3;
			break;
	
		case 189:
			unk = { 279.9322f, -1337.4902f, 23.7419f };
			unk.f_3 = "v_coroner";
			unk.f_4 = unk.f_3;
			break;
	
		case 190:
			unk = { -1604.6643f, -3012.5828f, -79.9999f };
			unk.f_3 = "ba_dlc_int_01_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 191:
		case 212:
			unk = { -1505.783f, -3012.5867f, -79.9999f };
			unk.f_3 = "ba_dlc_int_02_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 192:
			unk = { -630.4205f, -236.7843f, 37.057f };
			unk.f_3 = "V_JEWEL2";
			unk.f_4 = unk.f_3;
			break;
	
		case 193:
			unk = { 2800f, -3800f, 100f };
			unk.f_3 = "xs_x18_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 194:
			unk = { 2800f, -3942f, 182.5f };
			unk.f_3 = "xs_arena_vip";
			unk.f_4 = unk.f_3;
			break;
	
		case 195:
			unk = { 1049.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware02";
			unk.f_4 = unk.f_3;
			break;
	
		case 223:
			unk = { 2920f, 4470f, -100f };
			unk.f_3 = "sf_dlc_warehouse_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 196:
			unk = { 1093.6f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware03";
			unk.f_4 = unk.f_3;
			break;
	
		case 197:
			unk = { 1009.5f, -3196.6f, -38.5f };
			unk.f_3 = "bkr_biker_dlc_int_ware01";
			unk.f_4 = unk.f_3;
			break;
	
		case 198:
			unk = { 1100f, 245f, -49f };
			unk.f_3 = "vw_dlc_casino_main";
			unk.f_4 = unk.f_3;
			break;
	
		case 199:
			unk = { 1380f, 200f, -50f };
			unk.f_3 = "vw_dlc_casino_carpark";
			unk.f_4 = unk.f_3;
			break;
	
		case 200:
			unk = { 976.6364f, 70.29476f, 115.16413f };
			unk.f_3 = "vw_dlc_casino_apart";
			unk.f_4 = unk.f_3;
			break;
	
		case 201:
			unk = { 1295f, 230f, -50f };
			unk.f_3 = "vw_dlc_casino_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 202:
			unk = { 2479.3f, -273.9f, -58f };
			unk.f_3 = "ch_DLC_Casino_Heist";
			unk.f_4 = unk.f_3;
			break;
	
		case 203:
			unk = { 2730f, -380f, -49f };
			unk.f_3 = "ch_DLC_Arcade";
			unk.f_4 = unk.f_3;
			break;
	
		case 204:
			unk = { 2800f, -380f, -48.5f };
			unk.f_3 = "ch_DLC_Plan";
			unk.f_4 = unk.f_3;
			break;
	
		case 205:
			unk = { 2497.7f, -312.8f, -69.9f };
			unk.f_3 = "ch_DLC_Tunnel";
			unk.f_4 = unk.f_3;
			break;
	
		case 206:
			unk = { 2523.4f, -270f, -58.7f };
			unk.f_3 = "ch_DLC_Casino_Back";
			unk.f_4 = unk.f_3;
			break;
	
		case 207:
			unk = { 2504.4f, -257.2f, -39.1f };
			unk.f_3 = "ch_DLC_Casino_Hotel";
			unk.f_4 = unk.f_3;
			break;
	
		case 208:
			unk = { 2554f, -281.4f, -64.7f };
			unk.f_3 = "ch_DLC_Casino_Loading";
			unk.f_4 = unk.f_3;
			break;
	
		case 209:
			unk = { 2488.3f, -267.4f, -70.6f };
			unk.f_3 = "ch_DLC_Casino_Vault";
			unk.f_4 = unk.f_3;
			break;
	
		case 210:
			unk = { 2519.9f, -255.3f, -24.1f };
			unk.f_3 = "ch_DLC_Casino_Utility";
			unk.f_4 = unk.f_3;
			break;
	
		case 211:
			unk = { 2572.9f, -253.4f, -64.7f };
			unk.f_3 = "ch_dlc_casino_shaft";
			unk.f_4 = unk.f_3;
			break;
	
		case 213:
			unk = { 1103.5624f, -3000f, -40f };
			unk.f_3 = "gr_grdlc_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 214:
			unk = { 1210f, 1857f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 215:
			unk = { 1569f, -2130f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 216:
			unk = { 839f, 2176f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 217:
			unk = { 982f, -143f, -50f };
			unk.f_3 = "tr_Tuner_MethLab_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 218:
			unk = { -2000f, 1113.4f, 25.7f };
			unk.f_3 = "tr_tuner_car_meet";
			unk.f_4 = unk.f_3;
			break;
	
		case 219:
			unk = { -1350f, 160f, -99.2f };
			unk.f_3 = "tr_tuner_mod_garage";
			unk.f_4 = unk.f_3;
			break;
	
		case 220:
			unk = { 1.1f, -705.6f, 16.1f };
			unk.f_3 = "finbank";
			unk.f_4 = unk.f_3;
			break;
	
		case 221:
			unk = { -1010f, -70f, -99.4f };
			unk.f_3 = "sf_dlc_studio_sec";
			unk.f_4 = unk.f_3;
			break;
	
		case 222:
			unk = { 1550f, 250f, -50f };
			unk.f_3 = "h4_dlc_int_02_h4";
			unk.f_4 = unk.f_3;
			break;
	
		case 224:
			unk = { -935.7f, -2992.2f, 13.9f };
			unk.f_3 = "v_hanger";
			unk.f_4 = unk.f_3;
			break;
	
		case 225:
			unk = { 730f, -2990f, -39f };
			unk.f_3 = "imp_imptexp_mod_int_01";
			unk.f_4 = unk.f_3;
			break;
	
		case 226:
			unk = { 152.3f, -1004.4f, -97.8f };
			unk.f_3 = "v_motel_mp";
			unk.f_4 = unk.f_3;
			break;
	
		case 227:
			unk = { 170f, 5190f, 10f };
			unk.f_3 = "xs_x18_int_mod2";
			unk.f_4 = unk.f_3;
			break;
	
		case 228:
			unk = { 850f, -3000f, -50f };
			unk.f_3 = "reh_dlc_int_04_sum2";
			unk.f_4 = unk.f_3;
			break;
	
		case 229:
			unk = { 495f, -2560f, -50f };
			unk.f_3 = "xm3_DLC_INT_04_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 230:
			unk = { 570f, -415.1f, -69.6f };
			unk.f_3 = "xm3_DLC_INT_03_xm3";
			unk.f_4 = unk.f_3;
			break;
	
		case 231:
			unk = { 984.4f, -95.4f, 76.8f };
			unk.f_3 = "bkr_biker_dlc_int_03";
			unk.f_4 = unk.f_3;
			break;
	
		case 232:
			unk = { -880f, -2770f, -49f };
			unk.f_3 = "M23_1_dlc_int_01_M23_1";
			unk.f_4 = unk.f_3;
			break;
	
		case 233:
			unk = { 800f, -3000f, -69f };
			unk.f_3 = "reh_dlc_int_03_sum2";
			unk.f_4 = unk.f_3;
			break;
	
		case 234:
			unk = { 930.1f, -2269.9f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 235:
			unk = { 930.1f, -2240.1f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 236:
			unk = { 930.1f, -2213.2f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 237:
			unk = { 930.1f, -2183.4f, -50.4f };
			unk.f_3 = "m23_2_int_counterfeit";
			unk.f_4 = unk.f_3;
			break;
	
		case 238:
			unk = { 1000f, -2200f, -50f };
			unk.f_3 = "m23_2_dlc_int_warehouse2";
			unk.f_4 = unk.f_3;
			break;
	
		case 239:
			unk = { 1000f, -2230f, -50f };
			unk.f_3 = "m23_2_dlc_int_warehouse2";
			unk.f_4 = unk.f_3;
			break;
	
		case 240:
			unk = { 1220f, -2280f, -49f };
			unk.f_3 = "m23_2_int_warehouse";
			unk.f_4 = unk.f_3;
			break;
	
		case 241:
			unk = { -1421.0149f, -3012.5867f, -80f };
			unk.f_3 = "ba_dlc_int_03_ba";
			unk.f_4 = unk.f_3;
			break;
	
		case 242:
			unk = { -2000f, 1113.2f, 27.6f };
			unk.f_3 = "tr_tuner_car_meet";
			unk.f_4 = unk.f_3;
			break;
	
		case 243:
			unk = { Global_4718592.f_243070[0 /*160*/].f_16 };
			unk.f_3 = func_131(&Global_4718592.f_243070[0 /*160*/]);
			unk.f_4 = unk.f_3;
			break;
	
		case 244:
			unk = { Global_4718592.f_243070[1 /*160*/].f_16 };
			unk.f_3 = func_131(&Global_4718592.f_243070[1 /*160*/]);
			unk.f_4 = unk.f_3;
			break;
	
		case 245:
			unk = { Global_4718592.f_243070[2 /*160*/].f_16 };
			unk.f_3 = func_131(&Global_4718592.f_243070[2 /*160*/]);
			unk.f_4 = unk.f_3;
			break;
	
		case 246:
			unk = { Global_4718592.f_243070[3 /*160*/].f_16 };
			unk.f_3 = func_131(&Global_4718592.f_243070[3 /*160*/]);
			unk.f_4 = unk.f_3;
			break;
	
		case 247:
			unk = { Global_4718592.f_243070[4 /*160*/].f_16 };
			unk.f_3 = func_131(&Global_4718592.f_243070[4 /*160*/]);
			unk.f_4 = unk.f_3;
			break;
	
		case 248:
			unk = { -196.14f, -580.65f, 135f };
			unk.f_3 = "imp_impexp_int_01";
			unk.f_4 = "imp_dt1_02_cargarage_a";
			break;
	}

	switch (iParam0)
	{
		case 249:
			unk = { -24.4f, -73.8f, -75f };
			unk.f_3 = "m25_1_int_tycoon_studio_lo";
			unk.f_4 = "m25_1_int_tycoon_studio_lo";
			break;
	
		case 250:
			unk = { 60.37f, -80.918f, -75f };
			unk.f_3 = "m25_1_int_tycoon_studio_mid";
			unk.f_4 = "m25_1_int_tycoon_studio_mid";
			break;
	
		case 251:
			unk = { 2675.3f, 5927.8f, -65.6f };
			unk.f_3 = "m26_1_int_sewers_access";
			unk.f_4 = "m26_1_int_sewers_access";
			break;
	
		case 252:
			unk = { 2693.7f, 5877.5f, -61f };
			unk.f_3 = "m26_1_int_loading_bay_tun";
			unk.f_4 = "m26_1_int_loading_bay_tun";
			break;
	
		case 253:
			unk = { 2603.2f, 5903.8f, -49f };
			unk.f_3 = "m26_1_int_exhibition_room";
			unk.f_4 = "m26_1_int_exhibition_room";
			break;
	
		case 254:
			unk = { 2631.4f, 5893.9f, -61f };
			unk.f_3 = "m26_1_int_exhibition_base";
			unk.f_4 = "m26_1_int_exhibition_base";
			break;
	
		case 255:
			unk = { 2583.9f, 5961.4f, -49f };
			unk.f_3 = "m26_1_int_art_worshop";
			unk.f_4 = "m26_1_int_art_worshop";
			break;
	}

	func_130(unk);
	return unk;
}

BOOL func_130(float fParam0, var uParam1, var uParam2) // Position - 0x9410 (37904)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

var func_131(var uParam0) // Position - 0x943A (37946)
{
	return uParam0;
}

struct<6> func_132(int iParam0, BOOL bParam1) // Position - 0x9444 (37956)
{
	var unk;

	switch (iParam0)
	{
		case -1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 2:
			unk = { -761.0982f, 317.6259f, 169.59628f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { -761.1888f, 317.6295f, 216.0503f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { -795.3856f, 340.0188f, 152.7941f };
			unk.f_3 = { 0f, 0f, 179.99997f };
			break;
	
		case 61:
			unk = { -778.5056f, 332.3779f, 212.1968f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 5:
			unk = { -258.1807f, -950.6853f, 70.0239f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 6:
			unk = { -285.0051f, -957.6552f, 85.3035f };
			unk.f_3 = { 0f, 0f, -109.99999f };
			break;
	
		case 7:
			unk = { -1471.8821f, -530.7484f, 62.34918f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 34:
			unk = { -1471.8821f, -530.7484f, 49.72156f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 62:
			unk = { -1463.15f, -540.2369f, 74.2439f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 35:
			unk = { -885.3702f, -451.4775f, 119.327f };
			unk.f_3 = { 0f, 0f, 27.55617f };
			break;
	
		case 36:
			unk = { -913.0385f, -438.4284f, 114.39966f };
			unk.f_3 = { 0f, 0f, -153.30931f };
			break;
	
		case 37:
			unk = { -892.5499f, -430.4789f, 88.25368f };
			unk.f_3 = { 0f, 0f, 116.9193f };
			break;
	
		case 38:
			unk = { -35.0462f, -576.317f, 82.90739f };
			unk.f_3 = { 0f, 0f, 160f };
			break;
	
		case 39:
			unk = { -10.3788f, -590.7431f, 93.02542f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 65:
			unk = { -22.2487f, -589.1461f, 80.2305f };
			unk.f_3 = { 0f, 0f, 69.88f };
			break;
	
		case 40:
			unk = { -900.6311f, -376.7462f, 78.27306f };
			unk.f_3 = { 0f, 0f, 26.92611f };
			break;
	
		case 41:
			unk = { -929.483f, -374.5104f, 102.23286f };
			unk.f_3 = { 0f, 0f, -152.55307f };
			break;
	
		case 63:
			unk = { -914.4202f, -375.8189f, 114.4743f };
			unk.f_3 = { 0f, 0f, -63f };
			break;
	
		case 42:
			unk = { -617.1647f, 64.6042f, 100.8196f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 43:
			unk = { -584.2015f, 42.7133f, 86.4187f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { -609.5665f, 50.2203f, 98.3998f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 73:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = { 0f, 0f, 11f };
			break;
	
		case 74:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = { 0f, 0f, -63.5f };
			break;
	
		case 75:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = { 0f, 0f, -71.5f };
			break;
	
		case 76:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = { 0f, 0f, 40.5f };
			break;
	
		case 77:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = { 0f, 0f, 6f };
			break;
	
		case 78:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = { 0f, 0f, -14.5f };
			break;
	
		case 79:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = { 0f, 0f, -29f };
			break;
	
		case 80:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = { 0f, 0f, 4.5f };
			break;
	
		case 81:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 82:
			unk = { 374.2012f, 416.9688f, 142.6977f };
			unk.f_3 = { 0f, 0f, -14f };
			break;
	
		case 83:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 84:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 85:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 86:
			unk = { -1573.0981f, -4085.806f, 9.7851f };
			unk.f_3 = { 0f, 0f, 162f };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			unk = { 342.8157f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			unk = { 260.3297f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 87:
			unk = { -1572.1869f, -570.8315f, 109.9879f };
			unk.f_3 = { 0f, 0f, -54f };
			break;
	
		case 88:
			unk = { -1383.9543f, -476.7112f, 73.507f };
			unk.f_3 = { 0f, 0f, 8f };
			break;
	
		case 89:
			unk = { -138.0029f, -629.739f, 170.2854f };
			unk.f_3 = { 0f, 0f, -84f };
			break;
	
		case 90:
			unk = { -74.8895f, -817.6883f, 244.8508f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			unk = { 1100.7644f, -3159.384f, -34.9342f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			unk = { 1005.806f, -3157.6702f, -36.0897f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 103:
			if (!bParam1)
			{
				unk = { -1576.5712f, -569.7595f, 85.5f };
				unk.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 104:
			if (!bParam1)
			{
				unk = { -1571.2538f, -566.5865f, 85.5f };
				unk.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 105:
			if (!bParam1)
			{
				unk = { -1568.0984f, -571.9171f, 85.5f };
				unk.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 106:
			if (!bParam1)
			{
				unk = { -1384.5178f, -475.8657f, 56.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 107:
			if (!bParam1)
			{
				unk = { -1384.5383f, -475.8829f, 48.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 108:
			if (!bParam1)
			{
				unk = { -1378.9939f, -477.2481f, 56.1f };
				unk.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 109:
			if (!bParam1)
			{
				unk = { -186.5683f, -576.4624f, 135f };
				unk.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 110:
			if (!bParam1)
			{
				unk = { -113.886f, -564.3862f, 135f };
				unk.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 111:
			if (!bParam1)
			{
				unk = { -134.6568f, -635.1774f, 135f };
				unk.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 112:
			if (!bParam1)
			{
				unk = { -79.0479f, -822.6393f, 221f };
				unk.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 113:
			if (!bParam1)
			{
				unk = { -70.3086f, -819.5784f, 221f };
				unk.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 114:
			if (!bParam1)
			{
				unk = { -79.9861f, -818.425f, 221f };
				unk.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	}

	return unk;
}

BOOL func_133(int iParam0) // Position - 0x9FFA (40954)
{
	int i;

	if (iParam0 == 94 || iParam0 == -1)
		return false;

	if (Global_96471[iParam0 /*2*/])
		return true;

	for (i = 0; i < Global_93238; i = i + 1)
	{
		if (Global_93238[i /*5*/] != -1)
			if (Global_80633.f_109[Global_93238[i /*5*/] /*4*/] == iParam0)
				return true;
	}

	return false;
}

BOOL func_134(int iParam0) // Position - 0xA062 (41058)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114990.f_9094.f_330[iParam0 /*6*/];
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0xA08E (41102)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

BOOL func_136() // Position - 0xA0A1 (41121)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_137() // Position - 0xA0BB (41147)
{
	return MISC::GET_GAME_TIMER() <= Global_24586.f_6481 + 100;
}

BOOL func_138() // Position - 0xA0D0 (41168)
{
	return IS_BIT_SET(Global_80611, 9);
}

BOOL func_139() // Position - 0xA0DF (41183)
{
	return IS_BIT_SET(Global_80611, 8);
}

BOOL func_140() // Position - 0xA0EE (41198)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
			return true;

	return false;
}

BOOL func_141() // Position - 0xA283 (41603)
{
	int i;

	if (func_146())
	{
		for (i = 0; i < 65; i = i + 1)
		{
			if (func_142(i))
				return true;
		}
	}

	return false;
}

BOOL func_142(int iParam0) // Position - 0xA2B3 (41651)
{
	return func_143(iParam0, 20, true);
}

BOOL func_143(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA2C4 (41668)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102563.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_153() == 0)
			return IS_BIT_SET(func_155(func_144(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114990.f_668[iParam0], iParam1);

	return false;
}

int func_144(int iParam0) // Position - 0xA324 (41764)
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 14815;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		case 62:
			return 14262;
	
		case 63:
			return 14263;
	
		case 64:
			return 14264;
	
		default:
			break;
	}

	return 18535;
}

BOOL func_145() // Position - 0xA708 (42760)
{
	return Global_102563.f_418 > 0;
}

BOOL func_146() // Position - 0xA719 (42777)
{
	return Global_102563.f_417 > 0;
}

BOOL func_147(int iParam0, int iParam1) // Position - 0xA72A (42794)
{
	return iParam0 && iParam1 != false;
}

BOOL func_148(BOOL bParam0) // Position - 0xA739 (42809)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80611, 0);
}

BOOL func_149() // Position - 0xA761 (42849)
{
	return Global_102550.f_1;
}

BOOL func_150() // Position - 0xA76F (42863)
{
	return Global_80630;
}

BOOL func_151() // Position - 0xA77B (42875)
{
	if (Global_80623)
		return true;
	else if (Global_65074 && !Global_65080)
		return true;

	return false;
}

BOOL func_152() // Position - 0xA7A5 (42917)
{
	if (Global_44938 == 15)
		return false;

	return true;
}

int func_153() // Position - 0xA7BA (42938)
{
	return Global_33832;
}

BOOL func_154(eCharacter echParam0) // Position - 0xA7C5 (42949)
{
	if (Global_24155 || Global_24154 || Global_24156)
	{
		if (echParam0 == 130)
		{
		}
		else
		{
			return false;
		}
	}

	if (Global_118[echParam0 /*10*/].f_8 != 198)
		if (Global_21666.f_1 == 10)
			if (Global_8817 == echParam0)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

int func_155(int iParam0, int iParam1) // Position - 0xA829 (43049)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 18535)
	{
		statHash = func_156(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_156(int iParam0, int iParam1) // Position - 0xA858 (43096)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_42(iParam1));
}

void func_157() // Position - 0xA86D (43117)
{
	if (Global_80362 == false)
	{
		Global_9509[14 /*15*/].f_4 = -99;
		Global_9509[4 /*15*/].f_4 = -99;
	
		if (Global_2697084)
		{
			if (func_55(14))
			{
				func_32(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
				func_32(14, "CELL_29" /*Lista de actividades*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_32(14, "CELL_29" /*Lista de actividades*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_32(4, "CELL_23" /*Lista de control*/, 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}

	return;
}

void func_158() // Position - 0xA8FB (43259)
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 36; i = i + 1)
	{
		Global_9509[i /*15*/].f_4 = -99;
	}

	if (Global_80362 == false)
	{
		num = 0;
	
		while (num2 < 161)
		{
			if (func_160(num2, Global_21666) == 1)
				num = 1;
		
			num2 = num2 + 1;
		}
	
		func_32(7, "CELL_5" /*Correo electrónico*/, 0, "appEmail", 4, 1, 1, 0, 0);
		func_32(1, "CELL_1" /*Textos*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_32(4, "CELL_23" /*Lista de control*/, 2, "appChecklist", 39, 1, 1, 0, 0);
	
		if (Global_44938 == 15 && func_148(false) == false && Global_9507 == 0)
		{
			func_32(20, "CELL_32" /*Guardado rápido*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21902 = 0;
			Global_9508 = 255;
		}
		else
		{
			func_32(20, "CELL_32" /*Guardado rápido*/, 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21902 = 1;
			Global_9508 = 42;
		}
	
		if (num == 1)
			func_32(0, "CELL_0" /*Contactos*/, 4, "appContacts", 27, 1, 1, 0, 0);
		else
			func_32(0, "CELL_0" /*Contactos*/, 4, "appContacts", 5, 1, 1, 0, 0);
	
		func_32(10, "CELL_16" /*Configuración*/, 5, "appSettings", 24, 1, 1, 0, 0);
		func_32(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_32(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
	
		if (Global_114990.f_14060.f_89 == true)
			func_32(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		if (Global_114990.f_14060.f_88 == 1)
			func_32(16, "CELL_25" /*Francotirador*/, 0, "appContacts", 40, 2, 1, 0, 0);
	
		func_32(27, "CELL_14" /*Más aplicaciones*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_32(11, "CELL_14" /*Más aplicaciones*/, -99, "appContacts", 8, 2, 1, 0, 0);
		func_32(29, "CELL_15" /*Libre*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(30, "CELL_15" /*Libre*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(31, "CELL_15" /*Libre*/, -99, "appSettings", 17, 2, 1, 0, 0);
		func_32(32, "CELL_15" /*Libre*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(33, "CELL_15" /*Libre*/, -99, "appContacts", 17, 2, 1, 0, 0);
		func_32(34, "CELL_15" /*Libre*/, -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_32(7, "CELL_5" /*Correo electrónico*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
	
		if (func_33())
			func_32(23, "CELL_VINEWOOD" /*Club de Vinewood*/, 5, "appVinewoodMenu", 61, 1, 1, 0, 0);
		else
			func_32(10, "CELL_16" /*Configuración*/, 5, "appSettings", 24, 1, 1, 0, 0);
	
		if (func_47())
			func_32(24, "CELL_HACKER_ROB" /*Darnell Inc.*/, 3, "appHackerDen", 62, 1, 1, 0, 0);
		else
			func_32(21, "CELL_37" /*Actividad rápida*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
	
		func_32(1, "CELL_1" /*Textos*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_32(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
		func_32(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
		func_32(14, "CELL_29" /*Lista de actividades*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_32(0, "CELL_0" /*Contactos*/, 2, "appContacts", 5, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524923, 4))
			func_32(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
	
		func_32(13, "CELL_35" /*Lista de jugadores*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_32(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_32(15, "CELL_18" /*Mapa*/, -99, "appContacts", 8, 1, 1, 0, 0);
		func_32(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
		func_32(5, "CELL_4" /*Trabajos*/, -99, "appContacts", 12, 2, 1, 0, 0);
		func_32(25, "CELL_15" /*Libre*/, 0, "appContacts", 17, 2, 1, 0, 0);
		func_32(26, "CELL_15" /*Libre*/, 1, "appContacts", 17, 2, 1, 0, 0);
		func_32(27, "CELL_15" /*Libre*/, 2, "appContacts", 17, 2, 1, 0, 0);
		func_32(28, "CELL_15" /*Libre*/, 3, "appContacts", 17, 2, 1, 0, 0);
		func_32(29, "CELL_15" /*Libre*/, 4, "appContacts", 17, 2, 1, 0, 0);
		func_32(30, "CELL_15" /*Libre*/, 5, "appContacts", 17, 2, 1, 0, 0);
		func_32(31, "CELL_15" /*Libre*/, 6, "appContacts", 17, 2, 1, 0, 0);
		func_32(32, "CELL_15" /*Libre*/, 7, "appContacts", 17, 2, 1, 0, 0);
		func_32(33, "CELL_15" /*Libre*/, 8, "appContacts", 17, 2, 1, 0, 0);
		func_32(34, "CELL_15" /*Libre*/, 9, "appContacts", 17, 2, 1, 0, 0);
		func_32(35, "CELL_15" /*Libre*/, 10, "appContacts", 17, 2, 1, 0, 0);
	
		if (!IS_BIT_SET(Global_4524923, 4))
			if (Global_1836280)
				func_32(25, "CELL_CIRCBREAK" /*Desbloquear VLSI*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524923, 20))
				func_32(25, "CELL_SIGHTS" /*Turista*/, 8, "AppSettings", 59, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524923, 22))
				func_32(25, "CELL_EXTRACT" /*Extracción*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
			else if (IS_BIT_SET(Global_4524923, 26))
				if (func_159())
					func_32(25, "CELL_0" /*Contactos*/, -99, "appContacts", 5, 1, 1, 0, 0);
				else
					func_32(25, "CELL_SECHACK" /*Hack de SecuroServ*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
	
		if (IS_BIT_SET(Global_4524923, 4) == false && Global_1836280 == false && IS_BIT_SET(Global_4524923, 20) == false && IS_BIT_SET(Global_4524923, 22) == false && IS_BIT_SET(Global_4524923, 26) == false)
			if (func_159())
				func_32(25, "CELL_0" /*Contactos*/, -99, "appContacts", 5, 1, 1, 0, 0);
			else
				func_32(25, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
	}

	return;
}

BOOL func_159() // Position - 0xAEE4 (44772)
{
	if (Global_80362)
		if (Global_1836690 || Global_1836691 == 1)
			return true;

	return false;
}

int func_160(int iParam0, eCharacter echParam1) // Position - 0xAF0B (44811)
{
	if (echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF)
		return 0;

	return Global_2349[iParam0 /*29*/].f_19[echParam1];
}

void func_161() // Position - 0xAF35 (44853)
{
	return;
}

