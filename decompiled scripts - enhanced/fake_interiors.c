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
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	Ped pedLocal_50 = 0;
	int iLocal_51 = 0;
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
	iLocal_46 = -1;
	uLocal_47 = { 0f, 0f, 0f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (func_38(PLAYER::PLAYER_ID()) && ENTITY::DOES_ENTITY_EXIST(func_37()))
			pedLocal_50 = func_37();
		else
			pedLocal_50 = PLAYER::PLAYER_PED_ID();
	
		ENTITY::IS_ENTITY_DEAD(pedLocal_50, false);
		func_1();
	}

	return;
}

void func_1() // Position - 0xB1 (177)
{
	Vector3 entityCoords;
	float x;
	BOOL flag;
	int i;

	func_36();

	if (iLocal_46 != -1 && func_35(iLocal_46))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
		x = { func_34(iLocal_46) };
	
		if (BUILTIN::VDIST2(x, entityCoords) < (float)func_33(iLocal_46))
		{
			flag = false;
			i = 0;
		
			for (i = 0; i < func_32(iLocal_46); i = i + 1)
			{
				if (!flag)
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_50, func_31(iLocal_46, i), func_30(iLocal_46, i), func_29(iLocal_46, i), false, true, 0))
						flag = true;
			}
		
			if (flag)
			{
				func_27(26);
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY(func_26(iLocal_46)), x, x.f_1, func_25(iLocal_46), func_24(iLocal_46));
				func_23(iLocal_46);
			}
			else
			{
				func_21(26);
			}
		}
		else
		{
			func_21(26);
		}
	}
	else
	{
		func_21(26);
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_2())
		{
			if (IS_BIT_SET(iLocal_51, 1))
				MISC::CLEAR_BIT(&iLocal_51, 1);
		
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (!IS_BIT_SET(iLocal_51, 0))
				{
					HUD::SET_MINIMAP_COMPONENT(15, true, -1);
					MISC::SET_BIT(&iLocal_51, 0);
				}
			}
			else if (IS_BIT_SET(iLocal_51, 0))
			{
				HUD::SET_MINIMAP_COMPONENT(15, false, -1);
				MISC::CLEAR_BIT(&iLocal_51, 0);
			}
		}
		else if (!IS_BIT_SET(iLocal_51, 1))
		{
			HUD::SET_MINIMAP_COMPONENT(15, false, -1);
			MISC::CLEAR_BIT(&iLocal_51, 0);
			MISC::SET_BIT(&iLocal_51, 1);
		}
	}

	return;
}

BOOL func_2() // Position - 0x208 (520)
{
	Player player;

	if (func_8(PLAYER::PLAYER_ID()))
		return true;

	if (func_5(PLAYER::PLAYER_ID(), true))
	{
		player = _GET_BOSS_OF_LOCAL_PLAYER();
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_8(player))
				return true;
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x248 (584)
{
	return -1;
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x251 (593)
{
	return Global_1893070[PLAYER::PLAYER_ID() /*615*/].f_10;
}

BOOL func_5(Player plParam0, BOOL bParam1) // Position - 0x266 (614)
{
	if (!func_7(plParam0))
		return false;

	if (!bParam1)
		if (func_6(plParam0))
			return false;

	return func_7(Global_1893070[plParam0 /*615*/].f_10);
}

BOOL func_6(Player plParam0) // Position - 0x29E (670)
{
	if (func_7(plParam0))
		if (func_7(Global_1893070[plParam0 /*615*/].f_10))
			return Global_1893070[plParam0 /*615*/].f_10 == plParam0;

	return false;
}

BOOL func_7(Player plParam0) // Position - 0x2D3 (723)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0x2F5 (757)
{
	int num;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_1836333, 9))
		plParam0 = func_11(false, false);

	if (func_10(plParam0))
	{
		num = func_9(plParam0);
	
		if (num == 3 || num == 4 || num == 5)
			return true;
	}

	return false;
}

int func_9(Player plParam0) // Position - 0x349 (841)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845347[plParam0 /*884*/].f_260.f_304;

	return 0;
}

BOOL func_10(Player plParam0) // Position - 0x36D (877)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845347[plParam0 /*884*/].f_260.f_304 != 0;

	return false;
}

Player func_11(BOOL bParam0, BOOL bParam1) // Position - 0x393 (915)
{
	Player i;
	Player player;
	int j;

	if (func_18(false))
		return PLAYER::PLAYER_ID();

	if (bParam0)
		if (!_NETWORK_IS_PLAYER_VALID(Global_1926465, false, true) || func_38(Global_1926465))
			return func_16();

	if (Global_1926465 == _INVALID_PLAYER_INDEX())
	{
		if (Global_2686124.f_6540 != -1)
		{
			for (i = 0; i <= 31; i = i + 1)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(i))
				{
				}
				else if (MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(i)) == Global_2686124.f_6540)
				{
					return i;
				}
			}
		}
	}

	if (func_13(PLAYER::PLAYER_ID(), 0) || func_12() || bParam1)
	{
		player = -1;
	
		for (j = 0; j <= 31; j = j + 1)
		{
			if (IS_BIT_SET(Global_1845347[j /*884*/].f_36.f_18, 14) || Global_1845347[j /*884*/].f_198 == 8)
			{
			}
			else if (Global_1845347[j /*884*/].f_57)
			{
				player = j;
			}
		}
	
		if (player != -1)
			return player;
	}

	return Global_1926465;
}

BOOL func_12() // Position - 0x4A0 (1184)
{
	return IS_BIT_SET(Global_1845347[PLAYER::PLAYER_ID() /*884*/].f_36.f_18, 14);
}

BOOL func_13(Player plParam0, int iParam1) // Position - 0x4BA (1210)
{
	BOOL flag;

	if (!func_7(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_14(-1, false) == 8;
	else
		flag = Global_1845347[plParam0 /*884*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_14(int iParam0, BOOL bParam1) // Position - 0x513 (1299)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_15();

	if (Global_1575077[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574922[num2];
		bParam1;
	}

	return num;
}

int func_15() // Position - 0x554 (1364)
{
	return Global_1574928;
}

Player func_16() // Position - 0x560 (1376)
{
	Player player;
	Player player2;
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!_NETWORK_IS_PLAYER_VALID(player, false, true))
		{
		}
		else if (func_38(player))
		{
		}
		else
		{
			player2 = player;
			break;
		}
	}

	return player2;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x5A7 (1447)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2673276.f_3)
					return Global_2673276.f_2;
				else if (Global_2658296[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_18(BOOL bParam0) // Position - 0x607 (1543)
{
	if (bParam0 && Global_1575068)
		if (func_19())
			return false;
		else
			return true;

	return Global_1575068;
}

BOOL func_19() // Position - 0x633 (1587)
{
	if (func_20())
		return true;

	return Global_1575071;
}

BOOL func_20() // Position - 0x64E (1614)
{
	if (Global_1575068 || Global_1575075)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
			return true;

	return false;
}

void func_21(int iParam0) // Position - 0x679 (1657)
{
	func_22(&(Global_2673276.f_194), iParam0);
	return;
}

BOOL func_22(var uParam0, int iParam1) // Position - 0x690 (1680)
{
	int num;
	int num2;
	int offset;

	num = iParam1;
	num2 = num / 32;
	offset = num % 32;

	if (IS_BIT_SET(uParam0->[num2], offset))
	{
		MISC::CLEAR_BIT(&uParam0->[num2], offset);
		return true;
	}

	return false;
}

void func_23(int iParam0) // Position - 0x6C7 (1735)
{
	float entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
	HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(entityCoords, entityCoords.f_1);

	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
			HUD::SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(entityCoords, entityCoords.f_1);
			break;
	
		case 3:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
	
		case 4:
			HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			break;
	}

	return;
}

int func_24(int iParam0) // Position - 0x735 (1845)
{
	var entityCoords;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
		
			if (entityCoords.f_2 < 9.7796f)
				return 0;
			else if (entityCoords.f_2 > 9.7796f && entityCoords.f_2 < 16f)
				return 1;
			else
				return 2;
			break;
	
		case 2:
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
		
			if (entityCoords.f_2 < 178.9f)
				return 0;
			else if (entityCoords.f_2 > 178.9f && entityCoords.f_2 < 188.7f)
				return 1;
			else
				return 2;
			break;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_25(int iParam0) // Position - 0x80A (2058)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	}

	return 0;
}

char* func_26(int iParam0) // Position - 0x85B (2139)
{
	switch (iParam0)
	{
		case 0:
			return "V_FakeBoatPO1SH2A";
	
		case 1:
			return "V_FakeWarehousePO103";
	
		case 2:
			return "V_FakeKortzCenter";
	
		case 3:
			return "V_FakePrison";
	
		case 4:
			return "V_FakeMilitaryBase";
	}

	return "";
}

void func_27(int iParam0) // Position - 0x8B7 (2231)
{
	func_28(&(Global_2673276.f_194), iParam0);
	return;
}

BOOL func_28(var uParam0, int iParam1) // Position - 0x8CE (2254)
{
	int num;
	int num2;
	int offset;

	num = iParam1;
	num2 = num / 32;
	offset = num % 32;

	if (!IS_BIT_SET(uParam0->[num2], offset))
	{
		MISC::SET_BIT(&uParam0->[num2], offset);
		return true;
	}

	return false;
}

float func_29(int iParam0, int iParam1) // Position - 0x906 (2310)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 28.125f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 32.6875f;
			
				case 1:
					return 13.1875f;
			
				case 2:
					return 16.25f;
			
				case 3:
					return 21.75f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 95f;
			
				case 1:
					return 78.75f;
			
				case 2:
					return 70.6875f;
			
				case 3:
					return 64.4375f;
			
				case 4:
					return 32.375f;
			
				case 5:
					return 19f;
			
				case 6:
					return 19f;
			
				case 7:
					return 19.78125f;
			
				case 8:
					return 32.0625f;
			
				case 9:
					return 35.8125f;
			
				case 10:
					return 30.5f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1500f;
			}
			break;
	}

	return 0f;
}

Vector3 func_30(int iParam0, int iParam1) // Position - 0xA98 (2712)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5371f, -3057.2888f, 40.75164f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.278374f, -2654.2437f, 20.942299f;
			
				case 1:
					return 13.931628f, -2654.5605f, 14.44239f;
			
				case 2:
					return 55.595722f, -2667.4985f, 10.822453f;
			
				case 3:
					return 34.586597f, -2746.3875f, 10.950064f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2169.1704f, 256.7264f, 203.40813f;
			
				case 1:
					return -2216.3938f, 329.4761f, 201.36168f;
			
				case 2:
					return -2345.3528f, 350.78818f, 189.65222f;
			
				case 3:
					return -2288.0972f, 388.99094f, 200.9045f;
			
				case 4:
					return -2310.2632f, 406.638f, 200.90408f;
			
				case 5:
					return -2169.2214f, 260.5679f, 202.42944f;
			
				case 6:
					return -2258.7776f, 166.9506f, 202.83177f;
			
				case 7:
					return -2236.9731f, 285.59576f, 203.03947f;
			
				case 8:
					return -2211.3618f, 303.67413f, 214.93228f;
			
				case 9:
					return -2282.0981f, 383.09036f, 201.0395f;
			
				case 10:
					return -2277.9302f, 356.44424f, 201.10155f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 200f, 2600f, -5f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1451.2051f, 2689.4402f, -37.62654f;
			}
			break;
	}

	return uLocal_47;
}

Vector3 func_31(int iParam0, int iParam1) // Position - 0xCE1 (3297)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1240.5345f, -2880.354f, -19.964888f;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 34.15308f, -2747.0674f, 1.137565f;
			
				case 1:
					return 13.957768f, -2700.626f, 5.046232f;
			
				case 2:
					return 55.61185f, -2687.6814f, 5.005801f;
			
				case 3:
					return 34.56926f, -2759.479f, -0.030933f;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2317.3801f, 191.63188f, 165.40373f;
			
				case 1:
					return -2357.9949f, 264.02972f, 162.79884f;
			
				case 2:
					return -2261.4329f, 387.3963f, 154.35222f;
			
				case 3:
					return -2326.399f, 408.3378f, 140.31822f;
			
				case 4:
					return -2304.6167f, 460.21268f, 140.21474f;
			
				case 5:
					return -2150.825f, 216.41681f, 162.80118f;
			
				case 6:
					return -2172.7651f, 203.5957f, 167.41351f;
			
				case 7:
					return -2191.0364f, 305.96097f, 159.62502f;
			
				case 8:
					return -2227.613f, 340.05872f, 165.13574f;
			
				case 9:
					return -2244.4097f, 399.57635f, 137.5101f;
			
				case 10:
					return -2243.2615f, 371.4072f, 137.2722f;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 3200f, 2600f, 3000f;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2841.1074f, 3506.837f, 1000.47363f;
			}
			break;
	}

	return uLocal_47;
}

int func_32(int iParam0) // Position - 0xF2A (3882)
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 11;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	}

	return 0;
}

int func_33(int iParam0) // Position - 0xF7C (3964)
{
	switch (iParam0)
	{
		case 0:
			return 10000;
	
		case 1:
			return 10000;
	
		case 2:
			return 250000;
	
		case 3:
			return 280900;
	
		case 4:
			return 2250000;
	}

	return 0;
}

Vector3 func_34(int iParam0) // Position - 0xFDA (4058)
{
	switch (iParam0)
	{
		case 0:
			return 1240f, -2970f, 12.2f;
	
		case 1:
			return 40f, -2720f, 12f;
	
		case 2:
			return -2250f, 300f, 182.2f;
	
		case 3:
			return 1700f, 2580f, 80f;
	
		case 4:
			return -2250f, 3100f, 80f;
	}

	return uLocal_47;
}

BOOL func_35(int iParam0) // Position - 0x1074 (4212)
{
	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	
		case 4:
			break;
	}

	return true;
}

void func_36() // Position - 0x10B1 (4273)
{
	Vector3 entityCoords;

	iLocal_45 = iLocal_45 + 1;

	if (iLocal_45 > 4)
		iLocal_45 = 0;

	if (iLocal_45 != iLocal_46)
	{
		if (iLocal_46 == -1)
		{
			iLocal_46 = iLocal_45;
		}
		else
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_50, false) };
		
			if (BUILTIN::VDIST2(func_34(iLocal_45), entityCoords) < BUILTIN::VDIST2(func_34(iLocal_46), entityCoords))
				iLocal_46 = iLocal_45;
		}
	}

	return;
}

Ped func_37() // Position - 0x110B (4363)
{
	return Global_2621446.f_2;
}

BOOL func_38(Player plParam0) // Position - 0x1119 (4377)
{
	if (func_13(plParam0, 0))
		return true;

	if (func_39())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658296[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_39() // Position - 0x1158 (4440)
{
	return IS_BIT_SET(Global_2621446, 3);
}

