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
	var uLocal_33 = 20;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
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
	int iLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0f;
	Interior inLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
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
	fLocal_61 = 277.7314f;
	uLocal_63 = { -196.045f, -580.13f, 135.0004f };
	CAM::DO_SCREEN_FADE_OUT(&func_13);
	func_16();

	while (true)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
		func_15();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE() || iLocal_60)
			func_3();
	
		if (!bLocal_56)
		{
			if (!bLocal_55 && CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_63, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_61);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uLocal_63, 2500f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				bLocal_55 = true;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (!bLocal_59)
				{
					bLocal_59 = func_2();
				}
				else if (!bLocal_57)
				{
					bLocal_57 = func_1();
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(&func_13);
					bLocal_56 = true;
				}
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x121 Hash - 0xE5129D6B ^0xDFA22C22
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_62, "garage_decor_01"))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_62, "garage_decor_01");
	}
	else
	{
		INTERIOR::REFRESH_INTERIOR(inLocal_62);
		return 1;
	}

	return 0;
}

BOOL func_2() // Position - 0x14B Hash - 0xB4319716 ^0xA16496A7
{
	inLocal_62 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_62))
	{
		if (!bLocal_58)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_62);
			bLocal_58 = true;
		}
		else if (INTERIOR::IS_INTERIOR_READY(inLocal_62))
		{
			INTERIOR::UNPIN_INTERIOR(inLocal_62);
			return 1;
		}
	}

	return 0;
}

void func_3() // Position - 0x18C Hash - 0x527671A9 ^0x527671A9
{
	int i;

	for (i = 0; i < iLocal_54; i = i + 1)
	{
		func_5(i);
	}

	func_4();
	return;
}

void func_4() // Position - 0x1B1 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_5(int iParam0) // Position - 0x1BD Hash - 0xDCEE90FC ^0x104A7718
{
	func_6(&uLocal_33[iParam0]);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) - 1);
	return;
}

void func_6(var uParam0) // Position - 0x1DB Hash - 0x7623605C ^0x6B47B1A0
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

int _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x214 Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575055 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return 1;

	if (func_14())
		return 1;

	if (Global_2698758)
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x298 Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_10())
	{
		case 0:
			return func_9();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_9() // Position - 0x2CB Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2698865)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_10() // Position - 0x2EF Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

BOOL func_11() // Position - 0x2FA Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x309 Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_13() // Position - 0x320 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2696172;
}

BOOL func_14() // Position - 0x32C Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_695;
}

void func_15() // Position - 0x33B Hash - 0x66E327B2 ^0x39BE3C9E
{
	SYSTEM::WAIT(0);
	return;
}

void func_16() // Position - 0x348 Hash - 0xD998FA2 ^0x65691374
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	_NETWORK_ENSURE_SCRIPT_IS_NETWORKED(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_33, 21, 0);

	if (!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA())
		func_3();

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (!STREAMING::IS_IPL_ACTIVE("imp_dt1_02_cargarage_a"))
		STREAMING::REQUEST_IPL("imp_dt1_02_cargarage_a");

	return;
}

BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0x38C Hash - 0xBB119947 ^0x279B9D24
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
	
		SYSTEM::WAIT(0);
	}

	return false;
}

int _NETWORK_ENSURE_SCRIPT_IS_NETWORKED(int iParam0, int iParam1, BOOL bNoTerminate) // Position - 0x3E5 Hash - 0x75751681 ^0x9140C9A0
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bNoTerminate)
				func_4();
			else
				return 0;
	
		if (!func_19(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			
				if (func_14())
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bNoTerminate)
						func_4();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bNoTerminate)
					func_4();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574667 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bNoTerminate)
				func_4();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bNoTerminate)
			func_4();
		else
			return 0;

	return 1;
}

BOOL func_19(BOOL bParam0) // Position - 0x4FB Hash - 0x1CCCE169 ^0x1CCCE169
{
	bParam0;
	return Global_1575055;
}

