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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		iLocal_60 = 5;

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			switch (iLocal_60)
			{
				case 0:
					func_10();
					break;
			
				case 1:
					break;
			
				case 2:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_PoliceVehicleRequest, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_PoliceVehicleRequest, uLocal_62, 2, 3f, &iLocal_66, 0, 0))
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
			
				case 3:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (func_8(PLAYER::PLAYER_ID(), false) && func_4(PLAYER::PLAYER_ID()) == 5 && Global_1969957)
						{
							if (Global_1969958 == 0)
								Global_1969958 = 1;
						
							iLocal_60 = 5;
						}
						else if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_AmbulanceDepartment, PLAYER::PLAYER_PED_ID(), 2, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_AmbulanceDepartment, uLocal_62, 2, 3f, &iLocal_66, 0, 0))
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
			
				case 4:
					func_9();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (MISC::CREATE_INCIDENT_WITH_ENTITY(DT_FireDepartment, PLAYER::PLAYER_PED_ID(), 4, 3f, &iLocal_66, 0, 0))
						{
							iLocal_65 = MISC::GET_GAME_TIMER();
							iLocal_60 = 5;
						}
					}
					else if (MISC::CREATE_INCIDENT(DT_FireDepartment, uLocal_62, 4, 3f, &iLocal_66, 0, 0))
					{
						if (Global_98958.f_358 == MISC::GET_HASH_KEY("AGENCY_PREP_1") || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("agency_prep1")) > 0 && func_3(false))
							Global_98958.f_358 = MISC::GET_HASH_KEY("AHP1_TRUCKCALLED");
						else if (func_2(67) && !func_2(68))
							Global_98888 = true;
					
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_60 = 5;
					}
					break;
			
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_65 + 60000 || !MISC::IS_INCIDENT_VALID(iLocal_66))
						func_1();
					else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							if (MISC::IS_INCIDENT_VALID(iLocal_66))
								MISC::DELETE_INCIDENT(iLocal_66);
					break;
			}
		}
	}

	return;
}

void func_1() // Position - 0x27A (634)
{
	iLocal_60 = 0;
	iLocal_61 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(int iParam0) // Position - 0x28C (652)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114963.f_9094.f_330[iParam0 /*6*/];
}

BOOL func_3(BOOL bParam0) // Position - 0x2B8 (696)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80586, 0);
}

int func_4(Player plParam0) // Position - 0x2E0 (736)
{
	if (func_6(plParam0) == 233)
		return func_5(plParam0);

	return -1;
}

int func_5(Player plParam0) // Position - 0x2FD (765)
{
	if (func_8(plParam0, false))
		return Global_1892925[plParam0 /*615*/].f_10.f_183;

	return -1;
}

int func_6(Player plParam0) // Position - 0x320 (800)
{
	if (func_7(plParam0))
		if (func_8(plParam0, false))
			return Global_1892925[plParam0 /*615*/].f_10.f_34;

	return -1;
}

BOOL func_7(Player plParam0) // Position - 0x34C (844)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x36E (878)
{
	if (func_7(plParam0))
		if (Global_1892925[plParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892925[plParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

void func_9() // Position - 0x3B2 (946)
{
	if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
		iLocal_60 = 5;

	return;
}

void func_10() // Position - 0x3C9 (969)
{
	var unk;

	switch (iLocal_61)
	{
		case 0:
			iLocal_61 = 1;
			iLocal_65 = MISC::GET_GAME_TIMER();
			break;
	
		case 1:
			while (!func_20())
			{
				BUILTIN::WAIT(0);
			
				if (func_19() == 3)
					iLocal_60 = 3;
			
				if (func_19() == 4)
					iLocal_60 = 4;
			
				if (func_19() == 5)
					iLocal_60 = 2;
			
				if (MISC::GET_GAME_TIMER() > iLocal_65 + 30000)
				{
					iLocal_65 = MISC::GET_GAME_TIMER();
					func_13(0);
				}
			}
		
			if (iLocal_60 == 0)
				iLocal_60 = 5;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				func_11(PLAYER::PLAYER_PED_ID(), &uLocal_62, &unk);
		
			iLocal_65 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

void func_11(Ped pedParam0, Vector3* pvParam1, var uParam2) // Position - 0x462 (1122)
{
	int nthClosest;
	int outNumLanes;
	var unk;
	var unk2;
	var unk3;
	var unk6;
	float dx;
	float num;
	float headingFromVector2d;
	float num2;
	float outHeading;
	float xOffset;
	float num3;
	int num4;
	int shapeTestHandle;
	int hit;
	var surfaceNormal;
	var endCoords;
	var entityHit;

	num3 = 5f;
	nthClosest = 1;
	num4 = 0;

	while (num4 < 2)
	{
		switch (num4)
		{
			case 0:
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), nthClosest, pvParam1, &outHeading, &outNumLanes, 5, 1077936128, 0);
				PATHFIND::GET_CLOSEST_ROAD(*pvParam1, 1f, 1, &unk3, &unk6, &unk, &unk2, &num, false);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
					*pvParam1 = { -3031.38f, 605.32f, 6.86f };
			
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
				headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
				num2 = outHeading + 180f;
			
				if (num2 > 360f)
					num2 = num2 - 360f;
			
				if (func_12(headingFromVector2d, outHeading, 90f))
					*uParam2 = outHeading;
				else
					*uParam2 = num2;
			
				if (num < 0f)
				{
					xOffset = 0f;
				}
				else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*pvParam1, 1, 1, 1077936128, 0)))
				{
					xOffset = 0f;
				}
				else
				{
					xOffset = num3 * BUILTIN::TO_FLOAT(outNumLanes / 2);
				
					if (xOffset == 0f)
						xOffset = xOffset + num3;
				
					if (outNumLanes == 5)
						xOffset = xOffset + num3;
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 294f, -895f, 28f, true) < 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
						xOffset = xOffset + 5f;
					else
						xOffset = xOffset + 3.75f;
				
					xOffset = xOffset + (num / 2f);
				}
			
				if (BUILTIN::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > BUILTIN::VDIST(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, -xOffset, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
					xOffset = -xOffset;
			
				*pvParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*pvParam1, *uParam2, xOffset, 0f, 0f) };
				shapeTestHandle = SHAPETEST::START_SHAPE_TEST_CAPSULE(*pvParam1 + { pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f, pvParam1->f_2 + 4.5f }, *pvParam1 + { 4.5f, 0.5f, 0.5f }, 2.5f, 1, 0, 4);
				num4 = num4 + 1;
				break;
		
			case 1:
				if (nthClosest <= 2)
				{
					if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
					{
						if (hit != 0)
						{
							if (endCoords.f_2 > pvParam1->f_2 + 8.5f)
							{
								num4 = num4 + 1;
							}
							else
							{
								nthClosest = nthClosest + 1;
								num4 = 0;
							}
						}
						else
						{
							num4 = num4 + 1;
						}
					}
				}
				else
				{
					num4 = num4 + 1;
				}
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_12(float fParam0, float fParam1, float fParam2) // Position - 0x708 (1800)
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x77D (1917)
{
	if (func_18())
		return;

	if (Global_21882)
		if (func_17())
			func_15(true, true);
		else
			func_15(false, false);

	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23023 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_14())
		Global_21649.f_1 = 3;

	return;
}

BOOL func_14() // Position - 0x807 (2055)
{
	if (Global_21649.f_1 == true || Global_21649.f_1 == false)
		return true;

	return false;
}

void func_15(BOOL bParam0, BOOL bParam1) // Position - 0x82E (2094)
{
	if (bParam0)
	{
		if (func_16(0))
		{
			Global_21882 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
		
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == true)
	{
		Global_21882 = false;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
	}

	return;
}

BOOL func_16(int iParam0) // Position - 0x8A2 (2210)
{
	if (iParam0 == 1)
		if (Global_21649.f_1 > 3)
			if (IS_BIT_SET(Global_9502, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21649.f_1 > 3)
		return true;

	return false;
}

BOOL func_17() // Position - 0x8F9 (2297)
{
	return IS_BIT_SET(Global_1964670, 5);
}

BOOL func_18() // Position - 0x907 (2311)
{
	return IS_BIT_SET(Global_1964670, 19);
}

int func_19() // Position - 0x916 (2326)
{
	return Global_24040;
}

BOOL func_20() // Position - 0x921 (2337)
{
	if (Global_23023 == 0)
		return true;

	return false;
}

