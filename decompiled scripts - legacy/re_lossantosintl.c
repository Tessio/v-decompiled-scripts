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
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 4;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	Vehicle veLocal_71 = 0;
	var uLocal_72 = 4;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	Ped pedLocal_77 = 0;
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	BOOL bLocal_94 = 0;
	BOOL bLocal_95 = 0;
	BOOL bLocal_96 = 0;
	BOOL bLocal_97 = 0;
	BOOL bLocal_98 = 0;
	BOOL bLocal_99 = 0;
	int iLocal_100 = 0;
	Hash hLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	Vehicle veLocal_106 = 0;
	Ped pedLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	BOOL bLocal_112 = 0;
	var uLocal_113 = 0;
	Ped pedLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
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
	sLocal_37 = "NULL";
	fLocal_38 = 0f;
	fLocal_42 = -0.0375f;
	fLocal_43 = 0.17f;
	iLocal_45 = 3;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	bLocal_95 = true;
	hLocal_101 = joaat("S_M_M_Pilot_01");
	iLocal_116 = 500;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_12();

	pedLocal_114 = PLAYER::PLAYER_PED_ID();

	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(pedLocal_114, false))
			iLocal_115 = 5;
	
		switch (iLocal_115)
		{
			case 0:
				iLocal_115 = 1;
				break;
		
			case 1:
				func_11();
				iLocal_115 = 2;
				break;
		
			case 2:
				if (func_10())
					iLocal_115 = 3;
				break;
		
			case 3:
				func_9();
				iLocal_115 = 4;
				break;
		
			case 4:
				if (Global_99389)
					iLocal_115 = 5;
			
				func_4();
				break;
		
			case 5:
				func_1();
				func_12();
				break;
		}
	
		BUILTIN::WAIT(iLocal_116);
	}

	return;
}

void func_1() // Position - 0x11A (282)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[i]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_66[i]) || !ENTITY::IS_ENTITY_DEAD(uLocal_66[i], false) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_66[i]))
			{
				VEHICLE::DELETE_VEHICLE(&uLocal_66[i]);
				PED::DELETE_PED(&uLocal_72[i]);
			}
			else
			{
				if (i == 0 || i == 2)
					func_3(true);
			
				func_2(&uLocal_66[i], &uLocal_72[i]);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_66[i]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_72[i]);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_71))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_71))
		{
			VEHICLE::DELETE_VEHICLE(&veLocal_71);
			PED::DELETE_PED(&pedLocal_77);
		}
		else
		{
			func_2(&veLocal_71, &pedLocal_77);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_71);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_77);
		}
	}

	if (bLocal_99)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}

	return;
}

void func_2(var uParam0, var uParam1) // Position - 0x233 (563)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 100, 50, true);

	return;
}

void func_3(BOOL bParam0) // Position - 0x2B4 (692)
{
	if (bLocal_95)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[0], false))
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_66[0]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[0]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_72[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[0], false))
						TASK::TASK_PLANE_MISSION(uLocal_72[0], uLocal_66[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_72[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[0], false))
						TASK::TASK_PLANE_MISSION(uLocal_72[0], uLocal_66[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[2], false))
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_66[2]))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[2]))
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_72[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[2], false))
						TASK::TASK_PLANE_MISSION(uLocal_72[2], uLocal_66[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
				else if (bParam0)
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_72[2], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[2], false))
						TASK::TASK_PLANE_MISSION(uLocal_72[2], uLocal_66[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 90f, 100, 50, true);
	}

	return;
}

void func_4() // Position - 0x493 (1171)
{
	int i;

	switch (iLocal_105)
	{
		case 0:
			uLocal_78[0 /*3*/] = { -1542.1127f, -3023.8025f, 23.2538f };
			uLocal_78[1 /*3*/] = { -3089.888f, -1960.0751f, 313.559f };
			uLocal_78[2 /*3*/] = { -1037.6381f, -3316.1196f, 23.2475f };
			uLocal_78[3 /*3*/] = { 451.174f, -4009.4602f, 135.1171f };
			uLocal_91 = { -1612.1736f, -2688.442f, 12.9444f };
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					bLocal_95 = false;
				else
					bLocal_95 = true;
		
			iLocal_105 = 1;
			break;
	
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(hLocal_101);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_105 = 2;
			break;
	
		case 2:
			if (!bLocal_99)
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(hLocal_101) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_99 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(hLocal_101);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
		
			if (bLocal_99)
			{
				if (!CAM::IS_SPHERE_VISIBLE(uLocal_78[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(uLocal_91, 50f))
				{
					iLocal_105 = 3;
				}
				else
				{
					CAM::IS_SPHERE_VISIBLE(uLocal_78[0 /*3*/], 50f);
					CAM::IS_SPHERE_VISIBLE(uLocal_91, 50f);
				}
			}
			break;
	
		case 3:
			uLocal_66[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_78[0 /*3*/], 0, true, true, false);
			ENTITY::SET_ENTITY_HEADING(uLocal_66[0], 240.3179f);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_66[0], false);
			uLocal_66[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_78[1 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_66[1], false);
			uLocal_66[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_78[2 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_66[2], false);
			uLocal_66[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), uLocal_78[3 /*3*/], 0, true, true, false);
			VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(uLocal_66[3], false);
		
			for (i = 0; i < 4; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[i]))
				{
					uLocal_72[i] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_66[i], PED_TYPE_CIVMALE, hLocal_101, -1, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_66[i], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_66[i], true, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_72[i], true);
				}
			}
		
			func_8(&uLocal_66[1], &uLocal_72[1]);
			func_8(&uLocal_66[2], &uLocal_72[2]);
			func_8(&uLocal_66[3], &uLocal_72[3]);
		
			if (bLocal_95)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_66[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						bLocal_94 = true;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
		
			iLocal_105 = 4;
			break;
	
		case 4:
			if (bLocal_98)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[3], false))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_66[3]))
					{
						if (!bLocal_96)
						{
							func_8(&uLocal_66[3], &uLocal_72[3]);
							bLocal_96 = true;
						}
					}
				}
			}
		
			func_3(false);
			func_7();
		
			switch (iLocal_104)
			{
				case 0:
					if (!bLocal_94)
					{
						if (bLocal_95)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[0], false))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_66[0]) && !CAM::IS_SPHERE_VISIBLE(uLocal_78[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_66[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										bLocal_94 = true;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
				
					if (bLocal_94)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[0], false))
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[0]))
								fLocal_102 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_66[0]);
					
						if (fLocal_102 > 1100f)
							iLocal_104 = 1;
					}
					break;
			
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[1], false))
					{
						if (bLocal_95)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_66[1]))
							{
								if (bLocal_98)
								{
									if (bLocal_96)
									{
										func_6(&uLocal_66[1], &uLocal_72[1]);
									
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_66[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											bLocal_97 = false;
											iLocal_104 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&uLocal_66[1], &uLocal_72[1]);
								
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_66[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										bLocal_97 = false;
										iLocal_104 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
			
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[1], false))
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[1]))
							iLocal_104 = 3;
					break;
			
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[2], false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(uLocal_78[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[2]))
								{
									func_6(&uLocal_66[2], &uLocal_72[2]);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_66[2], 101, "AirportNew", true);
									iLocal_104 = 4;
								}
							}
						}
					}
					break;
			
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[2], false))
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[2]))
							fLocal_103 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_66[2]);
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[1], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_66[1]))
							{
								func_8(&uLocal_66[1], &uLocal_72[1]);
								bLocal_97 = true;
							}
						}
					}
				
					if (fLocal_103 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[3], false))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(uLocal_78[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[3]) && bLocal_97)
									{
										func_6(&uLocal_66[3], &uLocal_72[3]);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_66[3], 104, "AirplaneLandingRedux", true);
										iLocal_104 = 5;
									}
								}
							}
						}
					}
					break;
			
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_66[3], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_66[3]))
						{
							func_5();
							iLocal_104 = 0;
						}
					}
					break;
			}
			break;
	}

	return;
}

void func_5() // Position - 0xBB3 (2995)
{
	fLocal_102 = 0f;
	bLocal_94 = false;
	bLocal_98 = true;
	bLocal_96 = false;
	return;
}

void func_6(var uParam0, var uParam1) // Position - 0xBC7 (3015)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, true, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	return;
}

void func_7() // Position - 0xBF2 (3058)
{
	Vector3 entityCoords;

	switch (iLocal_100)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_71))
			{
				veLocal_71 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, true, true, false);
				ENTITY::SET_ENTITY_LOD_DIST(veLocal_71, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_71, true, true, false);
				VEHICLE::SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(veLocal_71, false);
				pedLocal_77 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_71, PED_TYPE_CIVMALE, hLocal_101, -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_77, true);
				iLocal_100 = 1;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_71) && !ENTITY::IS_ENTITY_DEAD(veLocal_71, false))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_71))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(veLocal_71, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_100 = 2;
					}
				}
			}
			break;
	
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_71) && !ENTITY::IS_ENTITY_DEAD(veLocal_71, false))
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_71))
					if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_71) && !CAM::IS_SPHERE_VISIBLE(-1602.0862f, -2674.0386f, 12.9444f, 50f) && BUILTIN::VDIST2(entityCoords, ENTITY::GET_ENTITY_COORDS(veLocal_71, true)) > 62500f)
						iLocal_100 = 1;
			break;
	}

	return;
}

void func_8(var uParam0, var uParam1) // Position - 0xD31 (3377)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
	return;
}

void func_9() // Position - 0xD5C (3420)
{
	return;
}

BOOL func_10() // Position - 0xD64 (3428)
{
	return true;
}

void func_11() // Position - 0xD6D (3437)
{
	return;
}

void func_12() // Position - 0xD75 (3445)
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_13() // Position - 0xD89 (3465)
{
	Vector3 entityCoords;
	Vector3 vector;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float entityHeading;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_106))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_106))
		{
			VEHICLE::DELETE_VEHICLE(&veLocal_106);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(veLocal_106, false) && !PED::IS_PED_INJURED(pedLocal_107))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_106);
			PED::SET_PED_KEEP_TASK(pedLocal_107, true);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_106, true) };
			entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_106);
			vector = { 0f, 500f, 50f };
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(entityCoords, entityHeading, vector) };
			TASK::TASK_HELI_MISSION(pedLocal_107, veLocal_106, 0, 0, offsetFromCoordAndHeadingInWorldCoords, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}

	if (bLocal_112)
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");

	return;
}

