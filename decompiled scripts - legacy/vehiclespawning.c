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
	int iLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	var uLocal_52 = 20;
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
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	int iLocal_79 = 0;
	float fLocal_80 = 0f;
	Interior inLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
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
	iLocal_45 = 3;
	fLocal_46 = 0f;
	fLocal_50 = -0.0375f;
	fLocal_51 = 0.17f;
	fLocal_80 = 277.7314f;
	uLocal_82 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(800);
	func_16();

	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		func_15();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE() || iLocal_79)
			func_3();
	
		if (!bLocal_75)
		{
			if (!bLocal_74 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_82, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_80);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uLocal_82, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				bLocal_74 = true;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!bLocal_78)
				{
					bLocal_78 = func_2();
				}
				else if (!bLocal_76)
				{
					bLocal_76 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(800);
					bLocal_75 = true;
				}
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x121 (289)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_81, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_81, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(inLocal_81);
		return 1;
	}

	return 0;
}

BOOL func_2() // Position - 0x14B (331)
{
	inLocal_81 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_81))
	{
		if (!bLocal_77)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_81);
			bLocal_77 = true;
		}
		else if (INTERIOR::IS_INTERIOR_READY(inLocal_81))
		{
			INTERIOR::UNPIN_INTERIOR(inLocal_81);
			return 1;
		}
	}

	return 0;
}

void func_3() // Position - 0x18C (396)
{
	int i;

	for (i = 0; i < iLocal_73; i = i + 1)
	{
		func_5(i);
	}

	func_4();
	return;
}

void func_4() // Position - 0x1B1 (433)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_5(int iParam0) // Position - 0x1BD (445)
{
	func_6(&uLocal_52[iParam0]);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1);
	return;
}

void func_6(var uParam0) // Position - 0x1DB (475)
{
	Entity entity;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0);

	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		entity = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&entity);
	}

	return;
}

int _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x214 (532)
{
	if (Global_1575066 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return 1;

	if (func_14())
		return 1;

	if (Global_2699678)
		return 1;

	if (func_13())
		return 1;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_11())
			return 1;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return 1;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return 1;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return 1;

	return 0;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x298 (664)
{
	switch (func_10())
	{
		case HUD_COLOUR_PURE_WHITE:
			return func_9();
	
		case HUD_COLOUR_BLACK:
			return joaat("creator");
	}

	return 0;
}

Hash func_9() // Position - 0x2CB (715)
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

eHudColour func_10() // Position - 0x2EF (751)
{
	return Global_33815;
}

BOOL func_11() // Position - 0x2FA (762)
{
	return Global_2685152.f_726;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x309 (777)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_13() // Position - 0x320 (800)
{
	return Global_2697072;
}

BOOL func_14() // Position - 0x32C (812)
{
	return Global_2685152.f_721;
}

void func_15() // Position - 0x33B (827)
{
	BUILTIN::WAIT(0);
	return;
}

void func_16() // Position - 0x348 (840)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_18(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_52, 21, 0);

	if (!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA())
		func_3();

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");

	return;
}

BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0x38C (908)
{
	int num;

	num = 0;

	while (true)
	{
		num = num + 1;
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_14())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (num >= 3600)
			return false;
	
		BUILTIN::WAIT(0);
	}

	return false;
}

int func_18(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3E5 (997)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_4();
			else
				return 0;
	
		if (!func_19(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_4();
					else
						return 0;
			
				if (func_14())
					if (!bParam2)
						func_4();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_4();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_4();
				else
					return 0;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574669 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_4();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_4();
		else
			return 0;

	return 1;
}

BOOL func_19(BOOL bParam0) // Position - 0x4FB (1275)
{
	if (bParam0 && Global_1575066)
		if (func_20())
			return false;
		else
			return true;

	return Global_1575066;
}

BOOL func_20() // Position - 0x527 (1319)
{
	if (func_21())
		return true;

	return Global_1575069;
}

BOOL func_21() // Position - 0x542 (1346)
{
	if (Global_1575066 || Global_1575073)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
			return true;

	return false;
}

