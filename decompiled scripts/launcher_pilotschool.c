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
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	BOOL bLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	uLocal_88 = { uScriptParam_0.f_1[0 /*3*/] };
	uLocal_88 = { uLocal_88 };
	uLocal_84 = uLocal_84;
	uLocal_67 = { uLocal_67 };
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_92(true);

	pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_90(&Global_112617, 0);
	func_89();

	if (func_88(iLocal_92, 1))
		iLocal_98 = 10;
	else
		iLocal_98 = 9;

	while (!Global_39381)
	{
		SYSTEM::WAIT(0);
	}

	if (!func_88(iLocal_92, 8))
		if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
			if (func_85(0, iLocal_97))
				func_92(false);
			else
				func_92(true);

	if (iLocal_97 != -1)
		if (!func_85(0, iLocal_97))
			func_92(true);

	if (func_88(iLocal_92, 8388608))
		func_92(true);

	if (func_88(iLocal_92, 524288) && func_84() && !func_83())
		func_92(true);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_88(iLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_82(iLocal_103, true, false);
			iLocal_103 = 263;
		}
	
		func_81(10);
	}

	while (true)
	{
		if (!func_88(iLocal_92, 268435456))
		{
			groundZ = 0f;
		
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uScriptParam_0.f_1[0 /*3*/], &groundZ, false, false))
			{
				if (groundZ != 0f)
				{
					uScriptParam_0.f_1[0 /*3*/].f_2 = groundZ;
					func_80(&iLocal_92, 268435456);
				}
			}
		}
	
		pedLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	
		if (func_88(iLocal_92, 1048576))
			if (ENTITY::IS_ENTITY_DEAD(pedLocal_83, false))
				func_92(true);
	
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
					if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) || func_88(iLocal_92, 16) && !func_88(iLocal_92, 524288))
					{
						iLocal_96 = -1;
						func_79();
						func_81(1);
					}
					else
					{
						if (fLocal_108 > fLocal_100 * fLocal_100)
						{
							if (iLocal_103 != 263)
							{
								func_82(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						
							func_81(10);
						}
					
						uLocal_85.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
					}
					break;
			
				case 1:
					if (func_78() && fLocal_91 > fLocal_115 * 1.5f * fLocal_115 * 1.5f)
					{
						iLocal_101 = iLocal_101;
						func_81(3);
					}
					else
					{
						func_79();
					}
					break;
			
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_92(true);
						return;
					}
				
					if (!_CAN_ENTER_FREEROAM_STATE(iLocal_98))
					{
						if (!func_88(iLocal_92, 8))
						{
							flag2 = true;
						
							if (MISC::ARE_STRINGS_EQUAL(&(Global_101533.f_3), &uLocal_67))
							{
								uLocal_67 = { uLocal_51 };
								flag2 = false;
							}
						
							if (flag2)
							{
								func_92(false);
								break;
							}
						}
					}
				
					if (!func_88(iLocal_92, 4))
					{
						func_77();
						func_80(&iLocal_92, 4);
					}
				
					if (fLocal_108 > fLocal_100 * fLocal_100 && !Global_101567)
					{
						if (iLocal_103 != 263)
						{
							if (func_76(6) && !func_75(iLocal_103))
							{
							}
							else
							{
								func_82(iLocal_103, true, false);
								iLocal_103 = 263;
							}
						}
					
						func_81(10);
					}
					else
					{
						uLocal_67 = { uLocal_51 };
						flag3 = !func_88(iLocal_92, 64);
						func_90(&iLocal_92, 128);
					
						if (!func_74(3) && !Global_101567)
						{
							if (func_88(iLocal_92, 2097152))
							{
								if (!func_88(iLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_73()) && !Global_101567)
								{
									func_81(10);
									break;
								}
							}
						}
					
						if (func_88(iLocal_92, 524288) && func_84() && !func_83())
							func_92(true);
					
						if (func_72())
							func_92(true);
					
						if (!func_58(6) || Global_113016 || func_57())
							flag3 = false;
					
						if (func_88(iLocal_92, 1))
						{
							if (!func_56())
							{
								func_54(&iLocal_92, 128);
								flag3 = false;
							}
						}
					
						if (func_53(true))
							flag3 = false;
					
						if (Global_79389)
							flag3 = false;
					
						if (func_52())
							flag3 = false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
							flag3 = false;
					
						if (func_51() || func_50(8, -1))
							flag3 = false;
					
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
							flag3 = false;
					
						if (func_49(0) || func_48())
							flag3 = false;
					
						if (flag3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_83, uScriptParam_0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
								flag3 = false;
						
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								flag3 = false;
						
							if (flag3)
							{
								PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
							
								if (func_47(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										_CONTEXT_ADD_HELP_TEXT(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_54(&iLocal_92, 2048);
									}
									else if (!func_88(iLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_90(&iLocal_92, 2048);
									}
								
									if (func_43(iLocal_94, true))
									{
										sLocal_99 = sLocal_99;
										_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
										func_90(&iLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&uLocal_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
										func_81(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
									func_90(&iLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&uLocal_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
									func_81(5);
								}
							}
						}
					
						if (!flag3)
						{
							if (iLocal_94 != -1)
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
								func_90(&iLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
				
					func_42();
					break;
			
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
				
					if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_67))
					{
						if (iLocal_94 != -1)
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
					
						num = 2;
						flag = false;
					
						if (func_88(iLocal_92, 1))
						{
							if (func_76(6) || func_76(7))
							{
								num = 1;
								flag = true;
							}
						}
					
						if (num != 1)
							num = func_39(&iLocal_96, 6, iLocal_98, false, 0);
					
						if (num == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						
							func_38();
						
							if (Global_45250)
								func_29(PLAYER::PLAYER_PED_ID());
						
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_REMOVE_FIRES | 16 | 32);
							iLocal_50 = func_28();
							func_90(&iLocal_92, 4);
							func_27();
							func_54(&iLocal_92, 2);
							func_81(6);
							func_23(&uLocal_105);
						
							if (iLocal_97 != -1)
							{
								func_22(iLocal_97);
								func_19(func_21(iLocal_97), 0, 0);
							}
						}
						else if (num == 2)
						{
							func_18();
						}
						else if (num == 0)
						{
							func_81(10);
						}
					}
					else
					{
						func_18();
					}
					break;
			
				case 6:
					if (!func_88(iLocal_92, 256))
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
							PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
						else if (CAM::IS_SCREEN_FADED_OUT())
							func_54(&iLocal_92, 256);
				
					if (func_88(Global_112617, 262144))
					{
						func_90(&Global_112617, 262144);
						func_17();
					}
				
					if (func_88(iLocal_92, 2097152))
						if (!func_74(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
							func_81(10);
				
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_13(&uLocal_105) * 1000f), iLocal_97, false);
						func_12(&uLocal_105);
						func_90(&iLocal_92, 256);
						func_9();
					
						if (flag)
						{
							func_90(&iLocal_92, 2);
						}
						else if (func_88(iLocal_92, 2))
						{
							if (func_88(Global_112617, 0))
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_90(&iLocal_92, 2);
							}
							else
							{
								func_8(&iLocal_96);
								iLocal_96 = -1;
								func_90(&iLocal_92, 2);
							}
						}
					
						func_81(0);
					
						if (iLocal_97 != -1)
						{
							if (func_88(Global_112617, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101570, 0);
								func_7(func_21(iLocal_97), 0, Global_101570, true, false);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_21(iLocal_97), 0, Global_101570, 0);
								func_7(func_21(iLocal_97), 0, Global_101570, false, false);
							}
						}
					
						func_4();
						func_90(&Global_112617, 0);
					
						if (func_88(iLocal_92, 16777216))
							func_92(true);
					
						if (iLocal_97 != -1)
							if (Global_113969.f_9088)
								if (!func_85(0, iLocal_97))
									func_92(true);
					}
				
					func_3();
					break;
			
				case 8:
					func_81(0);
					break;
			
				case 10:
					func_92(true);
					break;
			
				case 9:
					if (fLocal_108 > fLocal_100 * fLocal_100)
					{
						if (iLocal_103 != 263)
						{
							func_82(iLocal_103, true, false);
							iLocal_103 = 263;
						}
					
						func_81(10);
					}
					break;
			
				case 7:
					func_2();
				
					if (iLocal_103 != 263)
						func_82(iLocal_103, false, false);
				
					if (iLocal_94 != -1)
						_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
						if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_99))
							HUD::CLEAR_HELP(true);
				
					func_81(4);
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
									if (_CAN_ENTER_FREEROAM_STATE(iLocal_98) && func_85(0, iLocal_97))
									{
										func_89();
									
										if (iLocal_103 != 263)
											func_82(iLocal_103, true, false);
									
										func_81(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > fLocal_100 * fLocal_100)
								{
									if (iLocal_103 != 263)
									{
										func_82(iLocal_103, true, false);
										iLocal_103 = 263;
									}
								
									func_81(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > (80f + 5f) * (80f + 5f))
								{
									func_89();
								
									if (iLocal_103 != 263)
										func_82(iLocal_103, true, false);
								
									func_81(0);
								}
							}
						}
						else
						{
							func_82(iLocal_103, true, false);
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA75 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2() // Position - 0xA88 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_3() // Position - 0xA90 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_4() // Position - 0xA98 Hash - 0x54615105 ^0x54615105
{
	func_5(&uLocal_120);
	return;
}

void func_5(var uParam0) // Position - 0xAA6 Hash - 0xE6DAF914 ^0x981F5DE3
{
	Vehicle vehicle;

	vehicle = *uParam0;

	if (ENTITY::DOES_ENTITY_EXIST(vehicle))
	{
		if (!func_6(vehicle))
		{
			ENTITY::SET_ENTITY_COLLISION(vehicle, true, false);
			ENTITY::SET_ENTITY_VISIBLE(vehicle, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(vehicle, false);
		}
	}

	return;
}

BOOL func_6(Vehicle veParam0) // Position - 0xADD Hash - 0x2E9AC124 ^0x5164B34A
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

void func_7(char* sParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB20 Hash - 0xE9AC9AEE ^0xA4AB7C48
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_98583))
		return;

	if (MISC::COMPARE_STRINGS(sParam0, &Global_98583, false, -1) != 0)
		return;

	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_95690);
	TEXT_LABEL_ASSIGN_STRING(&Global_98583, "", 64);
	return;
}

void func_8(var uParam0) // Position - 0xB64 Hash - 0x995C9E2 ^0x995C9E2
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

void func_9() // Position - 0xBA1 Hash - 0xE9E439A3 ^0x7AD2C7C7
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

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0xBE3 Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0xBF9 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_12(var uParam0) // Position - 0xC0F Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

float func_13(int* piParam0) // Position - 0xC25 Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_16(piParam0))
		if (func_15(piParam0))
			return piParam0->f_2;
		else
			return func_14(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_14(BOOL bParam0) // Position - 0xC61 Hash - 0xB0FB4432 ^0x9D798691
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

BOOL func_15(int* piParam0) // Position - 0xCB9 Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_16(int* piParam0) // Position - 0xCC6 Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_17() // Position - 0xCD3 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_18() // Position - 0xCDC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_19(char* sParam0, int iParam1, int iParam2) // Position - 0xCE4 Hash - 0x8572F920 ^0xA7259CBD
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xD25 Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

char* func_21(int iParam0) // Position - 0xD4D Hash - 0x4E453EBF ^0x4E453EBF
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

void func_22(int iParam0) // Position - 0xE8B Hash - 0x6F25AF03 ^0xBE6FE336
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

void func_23(int* piParam0) // Position - 0xEE2 Hash - 0xF9B0CE5A ^0xF9B0CE5A
{
	if (!func_16(piParam0))
		func_26(piParam0);
	else
		func_24(piParam0);

	return;
}

void func_24(int* piParam0) // Position - 0xF03 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_25(piParam0, 0f);
	return;
}

void func_25(int* piParam0, float fParam1) // Position - 0xF12 Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_14(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_26(int* piParam0) // Position - 0xF3D Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_16(piParam0))
		func_24(piParam0);

	return;
}

void func_27() // Position - 0xF55 Hash - 0xF1FDDA45 ^0x724180EA
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1093.842f, -2375.285f, -100f, -1007.24f, -2425.285f, 100f, 150f, false, true, true);
	return;
}

int func_28() // Position - 0xF87 Hash - 0x1D5B247E ^0x440C72FE
{
	int num;

	num = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_51, &uLocal_116, 4, essLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_51);
	return num;
}

void func_29(Ped pedParam0) // Position - 0xFA4 Hash - 0x91438920 ^0xDA692F14
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_37(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_45036[num /*5*/];
		func_32(1, num2, 1);
		return;
	}

	num3 = func_31(pedParam0);

	if (num3 == -1)
		return;

	func_30(num3);
	return;
}

void func_30(int iParam0) // Position - 0xFFD Hash - 0xBB510F32 ^0xE77AE77B
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

int func_31(Ped pedParam0) // Position - 0x1080 Hash - 0x14AF2EDD ^0xC5BC7CD2
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

void func_32(int iParam0, int iParam1, int iParam2) // Position - 0x10B1 Hash - 0xF54D70EF ^0xF54D70EF
{
	func_33(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10C6 Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_35(iParam0, iParam1, iParam2))
		return;

	num = func_34();

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

int func_34() // Position - 0x1148 Hash - 0x11506CC4 ^0x2E9F5641
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

BOOL func_35(int iParam0, int iParam1, int iParam2) // Position - 0x1179 Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_36(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_36(int iParam0, int iParam1, int iParam2) // Position - 0x1194 Hash - 0x61F8C119 ^0x1C9B84EC
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

int func_37(Ped pedParam0) // Position - 0x11E0 Hash - 0xDCBB968F ^0xDCBB968F
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

void func_38() // Position - 0x1229 Hash - 0x53295875 ^0x53295875
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

int func_39(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x12A6 Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_41(0))
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
			func_40(uParam0, iParam4);
	}

	return 2;
}

void func_40(var uParam0, int iParam1) // Position - 0x13DD Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_41(int iParam0) // Position - 0x142C Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_42() // Position - 0x144E Hash - 0xB4E0F37 ^0x6DE553F7
{
	if (func_75(76))
		ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1154.1101f, -2715.2026f, 18.8074f, 0f, 0f, 1.8f, true, true, 0);

	return;
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x1481 Hash - 0xE8E8EFB4 ^0x98461D05
{
	int num;

	num = func_44(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_49(0))
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

int func_44(int iParam0) // Position - 0x1539 Hash - 0x7F0E29AD ^0x84091235
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

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x1574 Hash - 0xFE5630E8 ^0xFE5630E8
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_44(*uParam0);

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

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x15CB Hash - 0xC67F23A2 ^0xEFF6309F
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

BOOL func_47(var uParam0) // Position - 0x16F6 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_48() // Position - 0x16FF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76498;
}

BOOL func_49(int iParam0) // Position - 0x170B Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_50(int iParam0, int iParam1) // Position - 0x1762 Hash - 0xA14C4D3F ^0xA6034F77
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

BOOL func_51() // Position - 0x179A Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_52() // Position - 0x17AF Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_53(BOOL bParam0) // Position - 0x17C9 Hash - 0x1F743529 ^0xDFDFCA73
{
	if (bParam0)
		return Global_23692.f_4 && Global_23692.f_104 == 4;

	return Global_23692.f_4;
}

void func_54(var uParam0, int iParam1) // Position - 0x17F2 Hash - 0xF55E891F ^0xF55E891F
{
	func_55(uParam0, iParam1);
	return;
}

void func_55(var uParam0, int iParam1) // Position - 0x1802 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_56() // Position - 0x1813 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_57() // Position - 0x181C Hash - 0xC7110B3 ^0x51D25EBB
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

BOOL func_58(int iParam0) // Position - 0x1926 Hash - 0x97844555 ^0xADCD6DAA
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_66(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_113016 || Global_32951 || func_64() || func_50(8, -1) || func_63() || func_62() || func_61() || func_52() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_65() || Global_32951 || func_64() || func_50(8, -1) || func_61() || func_63() || func_62() || func_52() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_113016 || Global_32951 || func_64() || func_50(8, -1) || func_61() || func_63() || func_62() || func_52() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_65() || Global_113016 || Global_32951 || func_64() || func_50(8, -1) || func_63() || func_62() || func_52() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_65() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_50(8, -1) || func_52() || func_60() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_50(8, -1) || func_63() || func_62() || func_60() || func_59())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_65() || Global_32951 || func_64() || func_50(8, -1) || func_62() || func_61() || func_52() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_65() || func_62() || Global_113016 || Global_32951 || func_64() || Global_45250 || func_50(8, -1) || func_61() || func_60() || func_52() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_65() || Global_113016 || Global_32951 || func_64() || func_50(8, -1) || func_61() || func_60() || func_63() || func_62() || func_52())
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

BOOL func_59() // Position - 0x2043 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_101572.f_1;
}

BOOL func_60() // Position - 0x2051 Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_61() // Position - 0x2074 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_62() // Position - 0x209E Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_63() // Position - 0x20AF Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_393 > 0;
}

BOOL func_64() // Position - 0x20C0 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575083;
}

BOOL func_65() // Position - 0x20CC Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

BOOL func_66(eCharacter echParam0) // Position - 0x20E8 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x20F4 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_68();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_68() // Position - 0x210D Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_66(character) && !func_76(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_66(Global_113969.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x220A Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2247 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_66(character))
		return func_71(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_71(eCharacter echParam0) // Position - 0x226C Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

BOOL func_72() // Position - 0x227B Hash - 0x3CA1BB47 ^0x4BFFF917
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
		return true;

	return false;
}

Ped func_73() // Position - 0x2295 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_97345;
}

BOOL func_74(int iParam0) // Position - 0x22A1 Hash - 0x6ACD7BFA ^0x6ACD7BFA
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_76(6) || func_76(7))
				return true;
			else
				return func_74(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_58(4))
					return true;
			break;
	}

	return false;
}

BOOL func_75(int iParam0) // Position - 0x2313 Hash - 0x7524A8DB ^0x409ED99B
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_33328[num /*23*/].f_19);
}

BOOL func_76(int iParam0) // Position - 0x234F Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

void func_77() // Position - 0x235D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_78() // Position - 0x2365 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_79() // Position - 0x236E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_80(var uParam0, int iParam1) // Position - 0x2376 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_81(int iParam0) // Position - 0x2387 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_93 = iParam0;
	return;
}

void func_82(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2393 Hash - 0x3DFD90D4 ^0xB85FE721
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

BOOL func_83() // Position - 0x2493 Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_84() // Position - 0x24B0 Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x24D3 Hash - 0xDEE74A4E ^0xDEE74A4E
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113969.f_9088.f_99.f_219[iParam0], iParam1);
	return flag;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x251D Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_87(iParam0, Global_44042);
}

BOOL func_87(int iParam0, int iParam1) // Position - 0x252E Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_88(int iParam0, int iParam1) // Position - 0x270F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_89() // Position - 0x271E Hash - 0xC7E459BA ^0xC3F37A3E
{
	iLocal_97 = 5;
	sLocal_99 = "PLAY_PSCHOOL" /*Press ~INPUT_CONTEXT~ to enter Flight School.*/;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_51, "Pilot_School", 64);
	essLocal_95 = 62500;
	return;
}

void func_90(int iParam0, int iParam1) // Position - 0x273B Hash - 0xF55E891F ^0xF55E891F
{
	func_91(iParam0, iParam1);
	return;
}

void func_91(var uParam0, int iParam1) // Position - 0x274B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_92(BOOL bParam0) // Position - 0x2760 Hash - 0x12400ACB ^0x3A862E90
{
	if (bParam0)
		if (iLocal_103 != 263)
			func_82(iLocal_103, 0, false);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_94);

	if (func_88(iLocal_92, 2))
	{
		func_4();
		func_90(&iLocal_92, 2);
		func_8(&iLocal_96);
	}

	iLocal_96 = -1;
	func_93();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_93() // Position - 0x27A9 Hash - 0xC88B3A8B ^0xCE5EF390
{
	func_90(&iLocal_92, 4);
	func_94();

	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);

	if (!MISC::IS_STRING_NULL(&uLocal_67))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_67) != 0)
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_67);

	return;
}

void func_94() // Position - 0x27E6 Hash - 0x6CC2F021 ^0x6CC2F021
{
	if (bLocal_121)
		func_95(76);

	return;
}

void func_95(int iParam0) // Position - 0x27F9 Hash - 0x1281F51C ^0xDCF2FE21
{
	if (iParam0 != 263)
		func_82(iParam0, true, false);

	return;
}

