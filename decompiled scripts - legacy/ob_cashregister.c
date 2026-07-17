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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	Object obScriptParam_0 = 0;
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

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_1690407, 1))
		{
			func_27();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
			func_22(0, -1, false);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
			iLocal_39 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_27();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (iLocal_39 == 1)
			if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
				func_27();
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0))
			{
				switch (iLocal_35)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_0))
						{
							uLocal_36 = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) };
							iLocal_35 = 1;
						}
						break;
				
					case 1:
						if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obScriptParam_0, 0) && ENTITY::IS_ENTITY_VISIBLE(obScriptParam_0) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(obScriptParam_0))
						{
							func_1();
							iLocal_35 = 2;
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_27();
			}
		}
		else
		{
			func_27();
		}
	}

	return;
}

void func_1() // Position - 0x111 (273)
{
	Hash model;
	Hash pickupHash;
	int address;
	int randomIntInRange;

	model = joaat("prop_money_bag_01");
	pickupHash = joaat("PICKUP_MONEY_MED_BAG");
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		model = joaat("prop_cash_pile_01");
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		randomIntInRange = func_13(randomIntInRange, 1);
	}

	MISC::SET_BIT(&address, 3);
	MISC::SET_BIT(&address, 4);
	STREAMING::REQUEST_MODEL(model);

	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		BUILTIN::WAIT(0);
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_2(pickupHash, OBJECT::GET_SAFE_PICKUP_COORDS(uLocal_36, 1067030938, 1069547520), address, randomIntInRange, model, false, false);
	else
		OBJECT::CREATE_PICKUP(pickupHash, OBJECT::GET_SAFE_PICKUP_COORDS(uLocal_36, 1067030938, 1069547520), address, randomIntInRange, false, model);

	return;
}

struct<5> func_2(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, Hash hParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1C5 (453)
{
	var unk;

	unk = 123;

	if (func_12() && func_11(hParam0))
		unk = { func_3(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7) };
	else
		unk.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7, bParam8);

	return unk;
}

struct<5> func_3(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, Hash hParam6, BOOL bParam7) // Position - 0x21C (540)
{
	var unk;
	int num;
	Hash hash;
	int num2;

	unk = 123;

	if (func_10(hParam0, vParam1) == -1)
		return unk;

	num = func_9(-1);

	if (num == -1)
		return unk;

	hash = 123;
	hash = hParam0;
	hash.f_1 = { vParam1 };

	if (func_4(&hash) != -1)
		return unk;

	MISC::SET_BIT(&iParam4, 5);
	hash.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7, false);
	num2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (bParam7)
	{
		Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
	
		if (Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_13 == 0)
		{
			Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_11 = 1;
		}
		else
		{
			Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_11 = 2;
		}
	}

	Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/] = { hash };
	Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_5 = { vParam1 };
	Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_8 = iParam4;
	Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_9 = iParam5;
	Global_1912667[num2 /*318*/].f_102.f_21[num /*14*/].f_10 = hParam6;
	return hash;
}

int func_4(Hash hParam0) // Position - 0x39F (927)
{
	int i;

	if (!func_7(hParam0))
		return -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_5(hParam0, &Global_2652581.f_2452[i /*16*/]))
			return i;
	}

	return -1;
}

BOOL func_5(Hash hParam0, Any* panParam1) // Position - 0x3E2 (994)
{
	if (*hParam0 == *panParam1 && func_6(hParam0->f_1, panParam1->f_1, false) && hParam0->f_4 == panParam1->f_4)
		return true;

	return false;
}

BOOL func_6(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x41D (1053)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_7(Hash hParam0) // Position - 0x464 (1124)
{
	if (*hParam0 == 123 || func_8(hParam0->f_1) || hParam0->f_4 == 0)
		return false;

	return true;
}

BOOL func_8(float fParam0, var uParam1, var uParam2) // Position - 0x496 (1174)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_9(int iParam0) // Position - 0x4C0 (1216)
{
	int num;
	int i;

	if (iParam0 == -1)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_1912667[iParam0 /*318*/].f_102.f_21[i /*14*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

int func_10(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x50C (1292)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_2652581.f_2452[i /*16*/]) && !OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(hParam0, vParam1, 2f))
		{
			num = i;
			break;
		}
	}

	return num;
}

BOOL func_11(int iParam0) // Position - 0x557 (1367)
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
		case joaat("PICKUP_VEHICLE_MONEY_VARIABLE"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_12() // Position - 0x5A7 (1447)
{
	return Global_262145.f_30340;
}

int func_13(int iParam0, int iParam1) // Position - 0x5B6 (1462)
{
	float value;

	switch (iParam1)
	{
		case 0:
			break;
	
		case 1:
			if (iParam0 > 0)
			{
				value = BUILTIN::TO_FLOAT(iParam0) * Global_262145;
				iParam0 = BUILTIN::ROUND(value);
			}
			break;
	
		default:
			break;
	}

	return iParam0;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x5F7 (1527)
{
	if (Global_1575066 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_21())
		return true;

	if (Global_2699678)
		return true;

	if (func_20())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_18())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x67B (1659)
{
	switch (func_17())
	{
		case HUD_COLOUR_PURE_WHITE:
			return func_16();
	
		case HUD_COLOUR_BLACK:
			return joaat("creator");
	}

	return 0;
}

Hash func_16() // Position - 0x6AE (1710)
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

eHudColour func_17() // Position - 0x6D2 (1746)
{
	return Global_33815;
}

BOOL func_18() // Position - 0x6DD (1757)
{
	return Global_2685152.f_726;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x6EC (1772)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_20() // Position - 0x703 (1795)
{
	return Global_2697072;
}

BOOL func_21() // Position - 0x70F (1807)
{
	return Global_2685152.f_721;
}

int func_22(int iParam0, int iParam1, BOOL bParam2) // Position - 0x71E (1822)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_26();
			else
				return 0;
	
		if (!func_23(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_26();
					else
						return 0;
			
				if (func_21())
					if (!bParam2)
						func_26();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_26();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_26();
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
				func_26();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_26();
		else
			return 0;

	return 1;
}

BOOL func_23(BOOL bParam0) // Position - 0x834 (2100)
{
	if (bParam0 && Global_1575066)
		if (func_24())
			return false;
		else
			return true;

	return Global_1575066;
}

BOOL func_24() // Position - 0x860 (2144)
{
	if (func_25())
		return true;

	return Global_1575069;
}

BOOL func_25() // Position - 0x87B (2171)
{
	if (Global_1575066 || Global_1575073)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
			return true;

	return false;
}

void func_26() // Position - 0x8A6 (2214)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_27() // Position - 0x8B2 (2226)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

