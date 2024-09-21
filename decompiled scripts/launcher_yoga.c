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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	int iLocal_50 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	Ped pedLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	eStackSize essLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = 0;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	eCharacter echLocal_116 = CHAR_MICHAEL;
	int iLocal_117 = 0;
	Object obLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;
	float groundZ;
	BOOL flag2;
	BOOL flag3;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	essLocal_95 = FRIEND;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /*~INPUT_CONTEXT~*/;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	echLocal_116 = -1;
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	uLocal_84 = uLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_91(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_89(&Global_112617, 0);
	func_87();

	if (func_86(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39381)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_86(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_83(0, iLocal_97))
				func_91(false);
			else
				func_91(true);

	if (iLocal_97 != -1)
		if (!func_83(0, iLocal_97))
			func_91(true);

	if (func_86(iLocal_92, 8388608))
		func_91(true);

	if (func_86(iLocal_92, 524288) && func_82() && !func_81())
		func_91(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_86(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_80(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_79(10);
	}

	while (true)
	{
		if (!func_86(iLocal_92, 268435456))
		{
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false))
			{
				if (groundZ != 0f)
				{
					uScriptParam_0.f_1[0 /*3*/].f_2 = groundZ;
					func_78(&iLocal_92, 268435456);
				}
			}
		}
	
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_86(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_91(true);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_83) && !ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
		{
			uLocal_85 = { ENTITY::GET_ENTITY_COORDS(pedLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(uLocal_85, uScriptParam_0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			uLocal_109 = { uLocal_85 };
			uLocal_112 = { uScriptParam_0.f_1[0 /*3*/] };
			uLocal_109.f_2 = 0f;
			uLocal_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(uLocal_109, uLocal_112);
		
			switch (iLocal_93)
			{
				case 0:
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_86(iLocal_92, 16) && !func_86(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_77();
						func_79(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_80(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_79(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_76())
					{
						iLocal_101 = iLocal_101;
						func_79(3);
					}
					else
					{
						func_77();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_91(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_86(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101533.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_91(false);
								break;
							}
						}
					}
				
					if (!func_86(iLocal_92, 4))
					{
						func_75();
						func_78(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101567)
					{
						if (iLocal_103 != 263)
						{
							if (func_74(6) && !func_73(iLocal_103))
							{
							}
							else
							{
								func_80(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_79(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_86(iLocal_92, 64);
						func_89(&iLocal_92, 128);
					
						if (!func_72(3) && !Global_101567)
						{
							if (func_86(iLocal_92, 2097152))
							{
								if (!func_86(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_71()) && !Global_101567)
								{
									func_79(10);
									break;
								}
							}
						}
					
						if (func_86(iLocal_92, 524288) && func_82() && !func_81())
							func_91(true);
					
						if (func_70())
							func_91(true);
					
						if (!func_61(6) || Global_113016 || func_60())
							flag3 = false;
					
						if (func_86(iLocal_92, 1))
						{
							if (!func_59())
							{
								func_57(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_56(true))
							flag3 = false;
					
						if (Global_79389)
							flag3 = false;
					
						if (func_55())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_54() || func_53(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_52(0) || func_51())
							flag3 = false;
					
						if (flag3)
						{
							if (!func_45(echLocal_116))
							{
								func_57(&iLocal_92, 128);
								flag3 = false;
							}
						
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_44(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_57(&iLocal_92, 2048);
									}
									else if (!func_86(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_89(&iLocal_92, 2048);
									}
								
									if (func_40(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_89(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_79(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
									func_89(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_79(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
								func_89(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
				
					func_39();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_86(iLocal_92, 1))
						{
							if (func_74(6) || func_74(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_36(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_35();
						
							if (Global_45250)
								func_26(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = SYSTEM::START_NEW_SCRIPT(&uLocal_67, essLocal_95);
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);
							uLocal_51 = { uLocal_67 };
							TEXT_LABEL_ASSIGN_STRING(&uLocal_67, "", 64);
							func_89(&iLocal_92, 4);
							func_25();
							func_57(&iLocal_92, 2);
							func_79(6);
							func_21(&uLocal_105);
						
							if (iLocal_97 != -1)
							{
								func_20(iLocal_97);
								func_17(func_19(iLocal_97), 0, 0);
							}
						}
						else if (num == 2)
						{
							func_16();
						}
						else if (num == 0)
						{
							func_79(10);
						}
					}
					else
					{
						func_16();
					}
					break;
			
				case 6:
					if (!func_86(iLocal_92, 256))
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
						else if (CAM::IS_SCREEN_FADED_OUT())
							func_57(&iLocal_92, 256);
				
					if (func_86(Global_112617, 262144))
					{
						func_89(&Global_112617, 262144);
						func_15();
					}
				
					if (func_86(iLocal_92, 2097152))
						if (!func_72(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_79(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_11(&uLocal_105) * 1000f), iLocal_97, false);
						func_10(&uLocal_105);
						func_89(&iLocal_92, 256);
						func_7();
					
						if (flag)
						{
							func_89(&iLocal_92, 2);
						}
						else if (func_86(iLocal_92, 2))
						{
							if (func_86(Global_112617, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_89(&iLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_89(&iLocal_92, 2);
							}
						}
					
						func_79(0);
					
						if (iLocal_97 != -1)
						{
							if (func_86(Global_112617, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101570, 0);
								func_5(func_19(iLocal_97), 0, Global_101570, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_101570, 0);
								func_5(func_19(iLocal_97), 0, Global_101570, false, false);
							}
						}
					
						func_4();
						func_89(&Global_112617, 0);
					
						if (func_86(iLocal_92, 16777216))
							func_91(true);
					
						if (iLocal_97 != -1)
							if (Global_113969.f_9088)
								if (!func_83(0, iLocal_97))
									func_91(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_79(0);
					break;
			
				case 10:
					func_91(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_80(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_79(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_80(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_79(4);
					break;
			
				case 4:
					if (iLocal_102 % 150 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_83(0, iLocal_97))
									{
										func_87();
									
										if (iLocal_103 != 263)
											func_80(iLocal_103, true, false);
									
										func_79(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_80(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_79(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_87();
								
									if (iLocal_103 != 263)
										func_80(iLocal_103, true, false);
								
									func_79(0);
								}
							}
						}
						else
						{
							func_80(iLocal_103, true, false);
						}
					}
					else
					{
						iLocal_102 = iLocal_102 + 1;
					}
					break;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA8F Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xAA2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_3() // Position - 0xAAA Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_4() // Position - 0xAB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5(char* sParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xABA Hash - 0xE9AC9AEE ^0xA4AB7C48
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98583, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95690);
	TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	return;
}

void func_6(var uParam0) // Position - 0xAFE Hash - 0x995C9E2 ^0x995C9E2
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

void func_7() // Position - 0xB3B Hash - 0xE9E439A3 ^0x7AD2C7C7
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xB7D Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0xB93 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_10(var uParam0) // Position - 0xBA9 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_11(int* piParam0) // Position - 0xBBF Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_14(piParam0))
		if (func_13(piParam0))
			return piParam0->f_2;
		else
			return func_12(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_12(BOOL bParam0) // Position - 0xBFB Hash - 0xB0FB4432 ^0x9D798691
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_13(int* piParam0) // Position - 0xC53 Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_14(int* piParam0) // Position - 0xC60 Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_15() // Position - 0xC6D Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_16() // Position - 0xC76 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_17(char* sParam0, int iParam1, int iParam2) // Position - 0xC7E Hash - 0x8572F920 ^0xA7259CBD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_98583, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_98583, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xCBF Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

char* func_19(int iParam0) // Position - 0xCE7 Hash - 0x4E453EBF ^0x4E453EBF
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
	
		case 1:
			return "MGDT";
	
		case 2:
			return "MGGF";
	
		case 3:
			return "OJHU";
	
		case 4:
			return "MGOR";
	
		case 5:
			return "MGPS";
	
		case 6:
			return "MGRP";
	
		case 7:
			return "MGSEA";
	
		case 8:
			return "MGSTR";
	
		case 9:
			return "MGSC";
	
		case 10:
			return "MGSP";
	
		case 11:
			return "MGSRm";
	
		case 12:
			return "OJTX";
	
		case 13:
			return "MGTN";
	
		case 14:
			return "OJTW";
	
		case 15:
			return "OJDA";
	
		case 16:
			return "OJDG";
	
		case 17:
			return "MGTR";
	
		case 18:
			return "MGYG";
	
		case 19:
			return "MGCR";
	}

	return "INVALID!";
}

void func_20(int iParam0) // Position - 0xE25 Hash - 0x6F25AF03 ^0xBE6FE336
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
	}

	return;
}

void func_21(int* piParam0) // Position - 0xE7C Hash - 0xF9B0CE5A ^0xF9B0CE5A
{
	if (!func_14(piParam0))
		func_24(piParam0);
	else
		func_22(piParam0);

	return;
}

void func_22(int* piParam0) // Position - 0xE9D Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_23(piParam0, 0f);
	return;
}

void func_23(int* piParam0, float fParam1) // Position - 0xEAC Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_12(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_24(int* piParam0) // Position - 0xED7 Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_14(piParam0))
		func_22(piParam0);

	return;
}

void func_25() // Position - 0xEEF Hash - 0xA4A2A30E ^0x23D2885A
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(obLocal_118.f_1);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_118);

	return;
}

void func_26(Ped pedParam0) // Position - 0xF0E Hash - 0x91438920 ^0xDA692F14
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_34(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45036[num /*5*/];
		func_29(1, num2, 1);
		return;
	}

	num3 = func_28(pedParam0);

	if (num3 == -1)
		return;

	func_27(num3);
	return;
}

void func_27(int iParam0) // Position - 0xF67 Hash - 0xBB510F32 ^0xE77AE77B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45005[iParam0 /*6*/].f_1 == 0))
		if (Global_45005[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45248 = 0;

	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = Global_45003 - 1;

	if (Global_45003 < 0)
		Global_45003 = 0;

	return;
}

int func_28(Ped pedParam0) // Position - 0xFEA Hash - 0x14AF2EDD ^0xC5BC7CD2
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45005[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_29(int iParam0, int iParam1, int iParam2) // Position - 0x101B Hash - 0xF54D70EF ^0xF54D70EF
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1030 Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_32(iParam0, iParam1, iParam2))
		return;

	num = func_31();

	if (num == -1)
		return;

	Global_45117[num /*6*/] = iParam0;
	Global_45117[num /*6*/].f_1 = iParam1;
	Global_45117[num /*6*/].f_2 = iParam2;
	Global_45117[num /*6*/].f_3 = iParam3;
	Global_45117[num /*6*/].f_4 = iParam4;
	Global_45117[num /*6*/].f_5 = iParam5;
	return;
}

int func_31() // Position - 0x10B2 Hash - 0x11506CC4 ^0x2E9F5641
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45117[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_32(int iParam0, int iParam1, int iParam2) // Position - 0x10E3 Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_33(int iParam0, int iParam1, int iParam2) // Position - 0x10FE Hash - 0x61F8C119 ^0x1C9B84EC
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45117[i /*6*/].f_2)
			if (iParam0 == Global_45117[i /*6*/])
				if (iParam1 == Global_45117[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_34(Ped pedParam0) // Position - 0x114A Hash - 0xDCBB968F ^0xDCBB968F
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_45036[i /*5*/] == -1))
			if (pedParam0 == Global_45036[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_35() // Position - 0x1193 Hash - 0x53295875 ^0x53295875
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

int func_36(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1210 Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_38(0))
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
			func_37(uParam0, iParam4);
	}

	return 2;
}

void func_37(var uParam0, int iParam1) // Position - 0x1347 Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_38(int iParam0) // Position - 0x1396 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_39() // Position - 0x13B8 Hash - 0xC10546CB ^0x4AEB89A
{
	if (iLocal_117 == 1)
	{
		if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
		{
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), true);
		}
	}

	return;
}

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x13E2 Hash - 0xE8E8EFB4 ^0x98461D05
{
	int num;

	num = func_41(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_52(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44799[num /*32*/] == true && Global_44799[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_44799[num /*32*/].f_29)
					return false;
		
			Global_44799[num /*32*/].f_5 = 1;
			Global_44799[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44799[num /*32*/] == false;
			Global_44799[num /*32*/].f_7;
		}
	}

	return false;
}

int func_41(int iParam0) // Position - 0x149A Hash - 0x7F0E29AD ^0x84091235
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44799[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x14D5 Hash - 0xFE5630E8 ^0xFE5630E8
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_41(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44799[num /*32*/])
		{
			Global_44799[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x152C Hash - 0xC67F23A2 ^0xEFF6309F
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44799[i /*32*/])
		{
			Global_44799[i /*32*/] = true;
			Global_44799[i /*32*/].f_1 = Global_45000;
			Global_45000 = Global_45000 + 1;
			Global_44799[i /*32*/].f_4 = 0;
			Global_44799[i /*32*/].f_29 = 0;
			Global_44799[i /*32*/].f_5 = 0;
			Global_44799[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_8), sParam2, 16);
			Global_44799[i /*32*/].f_6 = iParam3;
			Global_44799[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[i /*32*/].f_7 = 0;
			Global_44799[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_13), sParam4, 64);
				Global_44799[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[i /*32*/].f_12 = 0;
				Global_44799[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44799[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_44(var uParam0) // Position - 0x1657 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_45(eCharacter echParam0) // Position - 0x1660 Hash - 0xC95916E2 ^0xC95916E2
{
	func_46();
	return echParam0 == Global_113969.f_2366.f_539.f_4321;
}

void func_46() // Position - 0x167C Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_47(character) && !func_74(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_47(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_47(eCharacter echParam0) // Position - 0x1779 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1785 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x17C2 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_47(character))
		return func_50(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_50(eCharacter echParam0) // Position - 0x17E7 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_51() // Position - 0x17F6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76498;
}

BOOL func_52(int iParam0) // Position - 0x1802 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x1859 Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668667.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668667.f_1048, iParam0);
}

BOOL func_54() // Position - 0x1891 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_55() // Position - 0x18A6 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_56(BOOL bParam0) // Position - 0x18C0 Hash - 0x1F743529 ^0xDFDFCA73
{
	if (bParam0)
		return Global_23692.f_4 && Global_23692.f_104 == 4;

	return Global_23692.f_4;
}

void func_57(var uParam0, int iParam1) // Position - 0x18E9 Hash - 0xF55E891F ^0xF55E891F
{
	func_58(uParam0, iParam1);
	return;
}

void func_58(var uParam0, int iParam1) // Position - 0x18F9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_59() // Position - 0x190A Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_60() // Position - 0x1913 Hash - 0xC7110B3 ^0x51D25EBB
{
	int weaponHash;
	BOOL flag;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return false;

	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);

	if (weaponHash == 0 || weaponHash == joaat("WEAPON_UNARMED") || weaponHash == joaat("WEAPON_ELECTRIC_FENCE") || weaponHash == joaat("GADGET_PARACHUTE"))
		flag = false;
	else
		flag = true;

	flag;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());

	return flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_ATTACK) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_AIM) || flag && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_DETONATE) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}

BOOL func_61(int iParam0) // Position - 0x1A1D Hash - 0x97844555 ^0xADCD6DAA
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_47(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113016 || Global_32951 || func_67() || func_53(8, -1) || func_66() || func_65() || func_64() || func_55() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || Global_32951 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113016 || Global_32951 || func_67() || func_53(8, -1) || func_64() || func_66() || func_65() || func_55() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_68() || Global_113016 || Global_32951 || func_67() || func_53(8, -1) || func_66() || func_65() || func_55() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_68() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_53(8, -1) || func_55() || func_63() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_53(8, -1) || func_66() || func_65() || func_63() || func_62())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_32951 || func_67() || func_53(8, -1) || func_65() || func_64() || func_55() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_68() || func_65() || Global_113016 || Global_32951 || func_67() || Global_45250 || func_53(8, -1) || func_64() || func_63() || func_55() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_68() || Global_113016 || Global_32951 || func_67() || func_53(8, -1) || func_64() || func_63() || func_66() || func_65() || func_55())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_62() // Position - 0x213A Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_101572.f_1;
}

BOOL func_63() // Position - 0x2148 Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_64() // Position - 0x216B Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_65() // Position - 0x2195 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_66() // Position - 0x21A6 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_393 > 0;
}

BOOL func_67() // Position - 0x21B7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575083;
}

BOOL func_68() // Position - 0x21C3 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x21DF Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_46();
	return Global_113969.f_2366.f_539.f_4321;
}

BOOL func_70() // Position - 0x21F8 Hash - 0x3CA1BB47 ^0x4BFFF917
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
		return true;

	return false;
}

Ped func_71() // Position - 0x2212 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_97345;
}

BOOL func_72(int iParam0) // Position - 0x221E Hash - 0x6ACD7BFA ^0x6ACD7BFA
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_74(6) || func_74(7))
				return true;
			else
				return func_72(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_61(4))
					return true;
			break;
	}

	return false;
}

BOOL func_73(int iParam0) // Position - 0x2290 Hash - 0x7524A8DB ^0x409ED99B
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33328[num /*23*/].f_19);
}

BOOL func_74(int iParam0) // Position - 0x22CC Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

void func_75() // Position - 0x22DA Hash - 0x80357401 ^0x5762ACBA
{
	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_118))
	{
		obLocal_118 = OBJECT::CREATE_OBJECT(obLocal_118.f_1, obLocal_118.f_2, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(obLocal_118, obLocal_118.f_2, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(obLocal_118, obLocal_118.f_5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(obLocal_118, true);
	}

	return;
}

BOOL func_76() // Position - 0x2323 Hash - 0xBA7C9F29 ^0x5AB025BE
{
	if (!STREAMING::IS_MODEL_VALID(obLocal_118.f_1))
		return false;

	return STREAMING::HAS_MODEL_LOADED(obLocal_118.f_1);
}

void func_77() // Position - 0x2343 Hash - 0xC44FD650 ^0x42238294
{
	if (!STREAMING::IS_MODEL_VALID(obLocal_118.f_1))
		return;

	STREAMING::REQUEST_MODEL(obLocal_118.f_1);
	return;
}

void func_78(var uParam0, int iParam1) // Position - 0x2362 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_79(int iParam0) // Position - 0x2373 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_93 = iParam0;
	return;
}

void func_80(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x237F Hash - 0x3DFD90D4 ^0xB85FE721
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

BOOL func_81() // Position - 0x247F Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_82() // Position - 0x249C Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x24BF Hash - 0xDEE74A4E ^0xDEE74A4E
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x2509 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_85(iParam0, Global_44042);
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x251A Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_86(int iParam0, int iParam1) // Position - 0x26FB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_87() // Position - 0x270A Hash - 0x3B2238E3 ^0x9D7756D7
{
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "Yoga", 64);
	sLocal_99 = "PLAY_YOGA" /*Press ~INPUT_CONTEXT~ to do Yoga.*/;
	iLocal_97 = 18;
	fLocal_115 = 2.5f;
	fLocal_100 = 20f;
	essLocal_95 = 62500;
	iLocal_117 = func_88();

	if (iLocal_117 == 0)
	{
		iLocal_103 = 110;
		obLocal_118.f_2 = { -791.0036f, 186.3552f, 71.8295f };
		obLocal_118.f_5 = { 0f, 0f, -87.1403f };
		obLocal_118.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_117 == 1)
	{
		iLocal_103 = 111;
		obLocal_118.f_2 = { 2861.47f, 5945.9f, 357.06f };
		obLocal_118.f_5 = { 0f, -0.5f, 70f };
		obLocal_118.f_1 = joaat("prop_yoga_mat_03");
	}

	echLocal_116 = CHAR_MICHAEL;
	return;
}

int func_88() // Position - 0x27B3 Hash - 0x26626B10 ^0x644BC9C9
{
	Vector3 entityCoords;
	var unk3;
	var unk10;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) };
		unk3 = 2;
		unk3[0 /*3*/] = { -790.906f, 186.293f, 71.835f };
		unk3[1 /*3*/] = { 2862.15f, 5945.49f, 357.11f };
		unk10 = 2;
		unk10[0] = SYSTEM::VDIST2(entityCoords, unk3[0 /*3*/]);
		unk10[1] = SYSTEM::VDIST2(entityCoords, unk3[1 /*3*/]);
	
		if (unk10[0] < unk10[1])
			return 0;
		else
			return 1;
	}

	return 2;
}

void func_89(int iParam0, int iParam1) // Position - 0x284F Hash - 0xF55E891F ^0xF55E891F
{
	func_90(iParam0, iParam1);
	return;
}

void func_90(var uParam0, int iParam1) // Position - 0x285F Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_91(BOOL bParam0) // Position - 0x2874 Hash - 0x12400ACB ^0x3A862E90
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_80(iLocal_103, 0, false);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);

	if (func_86(iLocal_92, 2))
	{
		func_4();
		func_89(&iLocal_92, 2);
		func_6(&iLocal_96);
	}

	iLocal_96 = -1;
	func_92();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_92() // Position - 0x28BD Hash - 0xC88B3A8B ^0xCE5EF390
{
	func_89(&iLocal_92, 4);
	func_93();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_93() // Position - 0x28FA Hash - 0x4301A2BB ^0x15BFFD0B
{
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), false);
	}

	return;
}

