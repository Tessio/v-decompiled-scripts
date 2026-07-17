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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char* sLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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

void main() // Position - 0x0 (0)
{
	int gameTimer;
	Hash hashKey;
	char* scriptName;
	Vector3 vector;
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
	sLocal_40 = "NULL";
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	fLocal_48 = 0f;
	fLocal_52 = -0.0375f;
	fLocal_53 = 0.17f;
	iLocal_56 = 3;
	iLocal_60 = 1;
	iLocal_61 = 65;
	iLocal_62 = 49;
	iLocal_63 = 64;
	hashKey = joaat("carwash1");
	scriptName = "carwash1";
	vector = { uScriptParam_0.f_1[0 /*3*/] };

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_carwash_launch")) > 1)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_2883694)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(131838674) == 0)
		{
			SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
		
			while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674))
			{
				BUILTIN::WAIT(0);
			}
		
			BUILTIN::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(131838674, &uScriptParam_0, 23, DEFAULT);
		}
	
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_12(PLAYER::PLAYER_PED_ID());
	num = 0;

	while (num == 0)
	{
		if (func_9(PLAYER::PLAYER_ID(), true, false) || func_8() || !func_7(PLAYER::PLAYER_ID()) || func_6() || func_5(PLAYER::PLAYER_ID()) || func_4(PLAYER::PLAYER_ID()) || func_2(PLAYER::PLAYER_ID()))
			num = 0;
		else
			num = 1;
	
		BUILTIN::WAIT(0);
	}

	if (BUILTIN::VDIST2(vector, func_1(157)) < BUILTIN::VDIST2(vector, func_1(156)))
		scriptName = "carwash2";

	gameTimer = MISC::GET_GAME_TIMER();
	hashKey = MISC::GET_HASH_KEY(scriptName);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hashKey) == 0)
	{
		SCRIPT::REQUEST_SCRIPT(scriptName);
	
		while (!SCRIPT::HAS_SCRIPT_LOADED(scriptName))
		{
			SCRIPT::REQUEST_SCRIPT(scriptName);
			BUILTIN::WAIT(0);
		
			if (MISC::GET_GAME_TIMER() > gameTimer + 20000)
				SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		if (SCRIPT::HAS_SCRIPT_LOADED(scriptName))
		{
			BUILTIN::START_NEW_SCRIPT(scriptName, DEFAULT);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptName);
		}
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

Vector3 func_1(int iParam0) // Position - 0x1FF (511)
{
	int num;

	num = iParam0;
	return Global_34195[num /*23*/][0 /*3*/];
}

BOOL func_2(Player plParam0) // Position - 0x217 (535)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_325.f_5, 4);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x23C (572)
{
	return -1;
}

BOOL func_4(Player plParam0) // Position - 0x245 (581)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_260.f_439.f_2, 16);

	return false;
}

BOOL func_5(Player plParam0) // Position - 0x26E (622)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_260.f_376, 29);

	return false;
}

BOOL func_6() // Position - 0x295 (661)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 0);
}

BOOL func_7(Player plParam0) // Position - 0x2AE (686)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_140, 6);
}

int func_8() // Position - 0x2C3 (707)
{
	ePedComponentType type;

	type = Global_2673273;

	if (IS_BIT_SET(Global_1882652[type /*321*/].f_17, 0) && Global_1882652[type /*321*/].f_27 == 2)
		return 1;

	return 0;
}

int func_9(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F8 (760)
{
	if (bParam1)
		if (func_10(plParam0))
			return 1;

	!bParam2;

	if (Global_1845298[plParam0 /*881*/] == -1)
		return 0;

	return 1;
}

BOOL func_10(Player plParam0) // Position - 0x32A (810)
{
	return func_11(plParam0);
}

BOOL func_11(Player plParam0) // Position - 0x338 (824)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_11.f_1, 0);
}

BOOL func_12(Ped pedParam0) // Position - 0x34F (847)
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

