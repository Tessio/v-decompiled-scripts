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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
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
	fLocal_47 = 80f;
	fLocal_48 = 140f;
	fLocal_49 = 180f;
	func_105();

	while (true)
	{
		func_104();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_98();
	
		if (Global_2733190.f_3988.f_758 == 0)
			func_98();
	
		switch (iLocal_52)
		{
			case 0:
				iLocal_52 = 1;
				break;
		
			case 1:
				if (func_12())
					iLocal_52 = 2;
				break;
		
			case 2:
				if (!func_1())
					iLocal_52 = 4;
				break;
		
			case 4:
				func_98();
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0xD3 (211)
{
	ePedComponentType type;

	if (func_7(true))
	{
		type = Global_2733190.f_3988.f_757;
	
		if (type != _INVALID_PLAYER_INDEX())
		{
			if (func_4(type))
			{
				func_2(type);
				return false;
			}
		}
		else
		{
			func_2(type);
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

void func_2(ePedComponentType epctParam0) // Position - 0x120 (288)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		func_3(epctParam0);

	Global_2733190.f_3988.f_757 = _INVALID_PLAYER_INDEX();
	return;
}

void func_3(Player plParam0) // Position - 0x145 (325)
{
	Player offset;

	offset = plParam0;
	MISC::CLEAR_BIT(&(Global_2647284.f_388), offset);
	MISC::CLEAR_BIT(&(Global_2647284.f_389), offset);
	MISC::CLEAR_BIT(&(Global_2647284.f_390), offset);
	MISC::CLEAR_BIT(&(Global_2647284.f_392), offset);
	MISC::CLEAR_BIT(&(Global_2647284.f_396), offset);
	MISC::CLEAR_BIT(&(Global_2647284.f_391), offset);
	return;
}

BOOL func_4(ePedComponentType epctParam0) // Position - 0x19F (415)
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1B8 (440)
{
	ePedComponentType type;

	type = player;

	if (type != PV_COMP_INVALID)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (type == Global_2673273.f_3)
					return Global_2673273.f_2;
				else if (Global_2658293[type /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x218 (536)
{
	return -1;
}

BOOL func_7(BOOL bParam0) // Position - 0x221 (545)
{
	return func_8(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_8(Player plParam0, BOOL bParam1) // Position - 0x233 (563)
{
	return func_9(plParam0, bParam1, 1);
}

int func_9(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x244 (580)
{
	ePedComponentType type;

	if (!func_11(plParam0))
		return 0;

	if (!bParam1)
		if (func_10(plParam0, iParam2))
			return 0;

	type = Global_1892925[plParam0 /*615*/].f_10;

	if (func_11(type) && Global_1892925[type /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

BOOL func_10(ePedComponentType epctParam0, int iParam1) // Position - 0x2A0 (672)
{
	if (func_11(epctParam0))
		if (func_11(Global_1892925[epctParam0 /*615*/].f_10))
			if (Global_1892925[epctParam0 /*615*/].f_10 == epctParam0 && Global_1892925[epctParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

BOOL func_11(ePedComponentType epctParam0) // Position - 0x2EF (751)
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_12() // Position - 0x311 (785)
{
	Player player;

	if (func_7(true))
	{
		player = Global_2733190.f_3988.f_757;
	
		if (player != _INVALID_PLAYER_INDEX())
			if (func_13(player))
				return true;
	}

	return false;
}

BOOL func_13(Player plParam0) // Position - 0x344 (836)
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
	{
		func_96(plParam0, 432, true, false);
	
		if (func_95(plParam0))
			func_92(plParam0, func_93(func_94(PLAYER::PLAYER_ID())), true, false);
	
		if (func_90(plParam0))
			func_88(plParam0, true, true, false);
	
		func_82(plParam0, true, false);
		func_14(plParam0, true, 5000);
		return true;
	}

	return false;
}

void func_14(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x3A8 (936)
{
	ePedComponentType offset;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (iParam2 > 200000)
		iParam2 = 200000;

	offset = epctParam0;

	if (bParam1)
	{
		if (epctParam0 == Global_2673273)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2647284[offset]))
		{
			MISC::SET_BIT(&(Global_2647284.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2647284.f_375), offset);
			HUD::SET_BLIP_FLASHES(Global_2647284[offset], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2647284[offset], 250);
			func_15(epctParam0);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647284.f_375), offset);
			else
				Global_2647284.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
		else
		{
			MISC::SET_BIT(&(Global_2647284.f_370), offset);
			MISC::CLEAR_BIT(&(Global_2647284.f_375), offset);
		
			if (iParam2 < 0)
				MISC::SET_BIT(&(Global_2647284.f_375), offset);
			else
				Global_2647284.f_201[offset] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
		}
	}

	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2647284.f_370), offset);
		MISC::CLEAR_BIT(&(Global_2647284.f_375), offset);
	
		if (HUD::DOES_BLIP_EXIST(Global_2647284[offset]))
		{
			func_15(epctParam0);
			HUD::SET_BLIP_FLASHES(Global_2647284[offset], false);
		}
	}

	return;
}

void func_15(ePedComponentType epctParam0) // Position - 0x4DD (1245)
{
	ePedComponentType type;

	type = epctParam0;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647284[type]))
		{
			Global_2647284.f_1504[type] = func_16(epctParam0);
			HUD::SET_BLIP_PRIORITY(Global_2647284[type], Global_2647284.f_1504[type]);
		}
	}

	return;
}

int func_16(ePedComponentType epctParam0) // Position - 0x52B (1323)
{
	ePedComponentType type;
	eBlipSprite blipSprite;

	type = epctParam0;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2647284[type]))
		{
			blipSprite = HUD::GET_BLIP_SPRITE(Global_2647284[type]);
		
			if (IS_BIT_SET(Global_2647284.f_386, type) || IS_BIT_SET(Global_2647284.f_385, type))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_2647284.f_371, type) || IS_BIT_SET(Global_2647284.f_370, type) || IS_BIT_SET(Global_2647284.f_388, type))
			{
				return func_79(10);
			}
			else
			{
				switch (blipSprite)
				{
					case BLIP_PLAYERSTATE_CUSTODY:
					case BLIP_PLAYERSTATE_ARRESTED:
					case BLIP_PLAYERSTATE_KEYHOLDER:
						return func_79(7);
				
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_79(11);
				
					case BLIP_PLAYERSTATE_DRIVING:
						if (PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(Global_2673273))
							return func_79(6);
						else
							return func_79(5);
						break;
				
					case BLIP_ON_MISSION:
						if (PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(Global_2673273))
							return func_79(6);
						else
							return func_79(5);
						break;
				
					case BLIP_PASSIVE:
					case BLIP_USINGMENU:
						if (func_78(Global_2673273, epctParam0, -2, 0))
							return func_79(6);
						else
							return func_79(5);
						break;
				
					case BLIP_BOUNTY_HIT:
					case BLIP_BOUNTY_HIT_INSIDE:
						return func_79(10);
				
					case BLIP_INCAPACITATED:
						if (func_21(Global_2673273, epctParam0, true))
							return func_79(10);
						else
							return func_79(5);
						break;
				
					case BLIP_CONTRABAND:
					case BLIP_PACKAGE:
					case BLIP_SPORTS_CAR:
					case BLIP_SUPPLIES:
						return func_79(10);
				
					case BLIP_LEVEL_INSIDE:
						if (func_20(epctParam0) || func_19(epctParam0) || func_17(epctParam0))
							if (func_21(Global_2673273, epctParam0, true))
								return 3;
							else
								return 4;
						else if (func_21(Global_2673273, epctParam0, true))
							return func_79(6);
						else
							return func_79(5);
						break;
				
					case BLIP_PLAYERSTATE_PARTNER:
					case BLIP_GANG_HIGHLIGHT:
					default:
						if (func_21(Global_2673273, epctParam0, true))
							return func_79(6);
						else
							return func_79(5);
						break;
				}
			}
		}
	}

	return 1;
}

BOOL func_17(ePedComponentType epctParam0) // Position - 0x796 (1942)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_18(Global_2658293[epctParam0 /*468*/].f_325.f_8) == 16;

	return false;
}

int func_18(ePedComponentType epctParam0) // Position - 0x7DD (2013)
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
		case PV_COMP_ACCS:
		case PV_COMP_TASK:
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
		case PV_COMP_MAX:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	
		case 174:
		case 175:
		case 176:
			return 32;
	
		case 177:
		case 178:
		case 179:
			return 33;
	}

	return -1;
}

BOOL func_19(ePedComponentType epctParam0) // Position - 0xD2D (3373)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_18(Global_2658293[epctParam0 /*468*/].f_325.f_8) == 15;

	return false;
}

BOOL func_20(ePedComponentType epctParam0) // Position - 0xD74 (3444)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_18(Global_2658293[epctParam0 /*468*/].f_325.f_8) == 14;

	return false;
}

BOOL func_21(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0xDBB (3515)
{
	if (func_24(epctParam0, -2, false, false, false) == func_24(epctParam1, -2, false, false, false))
		return true;

	if (bParam2)
		if (func_22(func_24(epctParam0, -2, false, false, false)) && func_22(func_24(epctParam1, -2, false, false, false)))
			return true;

	return false;
}

int func_22(ePedComponentType epctParam0) // Position - 0xE14 (3604)
{
	if (epctParam0 == func_23(true) || epctParam0 == func_23(false))
		return 1;

	return 0;
}

ePedComponentType func_23(BOOL bParam0) // Position - 0xE3A (3642)
{
	if (bParam0)
		return 118;

	return 116;
}

ePedComponentType func_24(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE51 (3665)
{
	int playerTeam;
	Ped ped;

	if (!func_11(epctParam0))
		return PV_COMP_BERD;

	if (func_76(epctParam0) && !bParam4)
		if (bParam2)
			return PV_COMP_HEAD;
		else
			return PV_COMP_BERD;

	if (iParam1 == -2)
	{
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	
		if (playerTeam > -1 && playerTeam < 4)
			if (Global_4718592.f_127184[playerTeam] != PV_COMP_INVALID)
				iParam1 = playerTeam;
	}

	if (func_76(PLAYER::PLAYER_ID()) || func_75() && func_74() && !IS_BIT_SET(Global_2733190.f_3788, 31) && !bParam4)
	{
		ped = func_73();
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			if (PED::IS_PED_A_PLAYER(ped))
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped) != -1)
					if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), false, true))
						if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
							if (Global_4718592.f_127184[iParam1] != PV_COMP_INVALID)
								return func_71(iParam1, epctParam0, false);
							else
								return func_43(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
						else
							return func_43(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
				if (Global_4718592.f_127184[iParam1] != PV_COMP_INVALID)
					return func_71(iParam1, epctParam0, false);
				else
					return func_25(false, -1, false);
			else
				return func_25(false, -1, false);
	}

	if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
		if (Global_4718592.f_127184[iParam1] != PV_COMP_INVALID)
			return func_71(iParam1, epctParam0, false);
		else
			return func_43(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);

	return func_43(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

ePedComponentType func_25(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x103C (4156)
{
	return func_26(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

ePedComponentType func_26(ePedComponentType epctParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x1052 (4178)
{
	int playerTeam;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
		return 3;

	playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);

	if (func_42(*Global_4718592.f_197291))
		playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (func_41() || func_40() && func_38() && Global_1689077.f_1)
		if (bParam1)
			return func_37(iParam2, playerTeam);
		else
			return func_37(playerTeam, playerTeam);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_31(playerTeam, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_16, 18))
				if (playerTeam == iParam2)
					return func_23(true);
				else
					return func_23(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_27(playerTeam, iParam2, true, 4);
			else
				return func_27(playerTeam, iParam2, false, 4);
	
		return 28;
	}

	if (playerTeam == iParam2 || iParam2 == -1)
		return func_23(true);

	return func_23(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_27(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x116F (4463)
{
	int num;

	num = func_30(iParam0, iParam1, iParam3);

	if (func_28(*Global_4718592.f_132931, true, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x114;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_28(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1288 (4744)
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_197291 == 65)
			return true;

	if (bParam2)
		if (func_29(*Global_4718592.f_197291, false))
			return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9605[i])
			return true;
	}

	return false;
}

BOOL func_29(int iParam0, BOOL bParam1) // Position - 0x12F4 (4852)
{
	if (iParam0 == 93)
		if (bParam1)
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_30(int iParam0, int iParam1, int iParam2) // Position - 0x1320 (4896)
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_31(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

BOOL func_31(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1368 (4968)
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058150.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26719, num))
			{
				num2 = Global_1058150.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_32(iParam0, num, iParam1, num2) || !func_32(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_32(iParam0, num, iParam1, num2) || !func_32(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_32(iParam0, num, iParam1, num2) || !func_32(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_32(iParam0, num, iParam1, num2) || !func_32(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3787, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3787, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3787, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3787, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3787, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3787, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3787, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3787, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3787, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3787, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3787, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3787, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3787, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3787, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3787, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3787, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_32(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16B3 (5811)
{
	BOOL num;
	ePedComponentType type;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	ePedComponentType i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_26720, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3838[iParam2 /*26988*/].f_26720, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		type = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(type, true, true) || func_34(type, 0) || IS_BIT_SET(Global_2658293[type /*468*/].f_203, 2) || func_33(type))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(type) != iParam2)
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(type);
		
			if (PED::IS_PED_INJURED(playerPed))
			{
			}
			else
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
			
				if (entityModel2 == joaat("MP_F_Freemode_01") || entityModel2 == joaat("MP_M_Freemode_01"))
					if (entityModel == joaat("MP_F_Freemode_01") || entityModel == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (entityModel2 != entityModel)
					return false;
			}
		}
	}

	return num;
}

BOOL func_33(ePedComponentType epctParam0) // Position - 0x17DF (6111)
{
	return IS_BIT_SET(Global_1845298[epctParam0 /*881*/].f_36.f_18, 14);
}

BOOL func_34(ePedComponentType epctParam0, int iParam1) // Position - 0x17F7 (6135)
{
	BOOL flag;

	if (!func_11(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_35(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[epctParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

eCharacter func_35(int iParam0, BOOL bParam1) // Position - 0x1850 (6224)
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_36();

	if (Global_1575075[num] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574922[num];
		bParam1;
	}

	return character;
}

int func_36() // Position - 0x1891 (6289)
{
	return Global_1574928;
}

int func_37(int iParam0, int iParam1) // Position - 0x189D (6301)
{
	if (iParam0 == -1)
		iParam0 = func_30(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_38() // Position - 0x18EB (6379)
{
	if (func_39())
		return true;

	return IS_BIT_SET(*Global_4718592.f_202198, 4);
}

BOOL func_39() // Position - 0x190A (6410)
{
	return IS_BIT_SET(*Global_4718592.f_189724, 12);
}

BOOL func_40() // Position - 0x191F (6431)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(*Global_4718592.f_202198, 0);

	return IS_BIT_SET(*Global_4718592.f_202198, 0) || Global_1926860 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_41() // Position - 0x1966 (6502)
{
	if (func_39() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	return false;
}

BOOL func_42(int iParam0) // Position - 0x1983 (6531)
{
	return iParam0 == 94;
}

ePedComponentType func_43(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1990 (6544)
{
	int playerTeam;
	BOOL flag;
	ePedComponentType type;
	int num;
	int num2;

	if (iParam2 == -2)
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	else
		playerTeam = iParam2;

	if (Global_1845298[PLAYER::PLAYER_ID() /*881*/] == 148)
		flag = true;

	type = epctParam0;

	if (type > PV_COMP_INVALID)
		if (Global_1845298[type /*881*/] == 148)
			flag = true;

	if (!flag)
	{
		if (playerTeam != -1)
		{
			if (func_51())
			{
				num = func_47(epctParam0);
			
				if (!(num == -1))
					return func_45(num);
			}
		
			if (func_78(epctParam1, epctParam0, playerTeam, 0) && !IS_BIT_SET(Global_4718592.f_16, 18) || func_31(PLAYER::GET_PLAYER_TEAM(epctParam1), PLAYER::GET_PLAYER_TEAM(epctParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_16, 23) && !IS_BIT_SET(Global_4718592.f_16, 18))
				return func_23(true);
			else if (IS_BIT_SET(Global_4718592.f_16, 26))
				return func_44(true);
			else
				return func_26(epctParam1, true, playerTeam, bParam4);
		}
		else if (Global_1836754 || Global_1836744 || Global_1845298[epctParam0 /*881*/] == PV_COMP_HEAD)
		{
			if (epctParam0 == epctParam1 || Global_1836754 == true && Global_1836764 == false)
				return func_23(true);
			else
				return func_26(epctParam1, true, playerTeam, bParam4);
		}
	
		if (Global_1836748 && Global_1836207.f_14 == epctParam0)
			return 28;
	}

	num2 = func_47(epctParam0);

	if (!(num2 == -1))
		return func_45(num2);

	if (bParam3)
		return PV_COMP_HEAD;

	return PV_COMP_BERD;
}

ePedComponentType func_44(BOOL bParam0) // Position - 0x1B28 (6952)
{
	if (bParam0)
		return 119;

	return 116;
}

ePedComponentType func_45(int iParam0) // Position - 0x1B3F (6975)
{
	int num;

	if (iParam0 > -1)
	{
		num = func_46(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

int func_46(int iParam0) // Position - 0x1C02 (7170)
{
	return Global_2649161.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_47(ePedComponentType epctParam0) // Position - 0x1C19 (7193)
{
	if (func_11(epctParam0))
		if (func_49(epctParam0, true))
			return Global_2649161.f_818.f_11[func_48(epctParam0)];

	return -1;
}

ePedComponentType func_48(ePedComponentType epctParam0) // Position - 0x1C49 (7241)
{
	if (func_11(epctParam0))
		return Global_1892925[epctParam0 /*615*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_49(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x1C6C (7276)
{
	if (!func_11(epctParam0))
		return false;

	if (!bParam1)
		if (func_50(epctParam0))
			return false;

	return func_11(Global_1892925[epctParam0 /*615*/].f_10);
}

BOOL func_50(ePedComponentType epctParam0) // Position - 0x1CA4 (7332)
{
	if (func_11(epctParam0))
		if (func_11(Global_1892925[epctParam0 /*615*/].f_10))
			return Global_1892925[epctParam0 /*615*/].f_10 == epctParam0;

	return false;
}

BOOL func_51() // Position - 0x1CD9 (7385)
{
	if (func_70() || func_69() || func_68() || func_67() || func_66() || func_64() || func_62() || func_59() || func_56() || func_52())
		return true;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_37, 1))
		return true;

	return false;
}

BOOL func_52() // Position - 0x1D5F (7519)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return Global_2685152.f_27;

	return func_53(*Global_4718592.f_132931);
}

BOOL func_53(int iParam0) // Position - 0x1D85 (7557)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 23; i = i + 1)
	{
		if (iParam0 == func_55(i) || iParam0 == func_54(i))
			return 1;
	}

	return 0;
}

int func_54(int iParam0) // Position - 0x1DCA (7626)
{
	switch (iParam0)
	{
		case 8:
			return -1561912048;
	
		case 9:
			return 172853447;
	
		case 10:
			return 629260601;
	
		case 16:
			return 97645458;
	
		case 17:
			return -1784228215;
	
		case 18:
			return 1207616054;
	
		case 19:
			return -1792579181;
	
		case 20:
			return -425660339;
	
		case 21:
			return -1938166757;
	
		case 22:
			return 2029245399;
	
		default:
		
	}

	return -1;
}

int func_55(int iParam0) // Position - 0x1E66 (7782)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_37389[0];
	
		case 9:
			return Global_262145.f_37389[1];
	
		case 10:
			return Global_262145.f_37389[2];
	
		case 16:
			return Global_262145.f_37389[3];
	
		case 17:
			return Global_262145.f_37389[4];
	
		case 18:
			return Global_262145.f_37389[5];
	
		case 19:
			return Global_262145.f_37389[6];
	
		case 20:
			return Global_262145.f_37389[7];
	
		case 21:
			return Global_262145.f_37389[8];
	
		case 22:
			return Global_262145.f_37389[9];
	
		default:
		
	}

	return -1;
}

BOOL func_56() // Position - 0x1F4A (8010)
{
	return func_57(*Global_4718592.f_132931);
}

BOOL func_57(int iParam0) // Position - 0x1F60 (8032)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_58(i))
			return 1;
	}

	return 0;
}

int func_58(int iParam0) // Position - 0x1F94 (8084)
{
	if (iParam0 != -1)
		return Global_262145.f_35570[iParam0];

	return -1;
}

BOOL func_59() // Position - 0x1FB3 (8115)
{
	return func_60(*Global_4718592.f_132931);
}

BOOL func_60(int iParam0) // Position - 0x1FC9 (8137)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_61(i))
			return 1;
	}

	return 0;
}

int func_61(int iParam0) // Position - 0x1FFD (8189)
{
	if (iParam0 != -1)
		return Global_262145.f_33077[iParam0];

	return -1;
}

BOOL func_62() // Position - 0x201C (8220)
{
	return func_63(*Global_4718592.f_132931);
}

BOOL func_63(ePedComponentType epctParam0) // Position - 0x2032 (8242)
{
	int i;

	if (epctParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31141[i] == epctParam0)
			return 1;
	}

	return 0;
}

BOOL func_64() // Position - 0x206B (8299)
{
	return func_65(*Global_4718592.f_132931);
}

BOOL func_65(ePedComponentType epctParam0) // Position - 0x2081 (8321)
{
	int i;

	if (epctParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_30436[i] == epctParam0)
			return 1;
	}

	return 0;
}

BOOL func_66() // Position - 0x20BB (8379)
{
	return Global_2685152.f_25;
}

BOOL func_67() // Position - 0x20C9 (8393)
{
	return Global_2685152.f_22;
}

BOOL func_68() // Position - 0x20D7 (8407)
{
	return Global_2685152.f_20;
}

ePedComponentType func_69() // Position - 0x20E5 (8421)
{
	return Global_2685152.f_19;
}

ePedComponentType func_70() // Position - 0x20F3 (8435)
{
	return Global_2685152.f_18;
}

ePedComponentType func_71(int iParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x2101 (8449)
{
	ePedComponentType type;
	int num;
	int num2;

	num = Global_1058150.f_14[iParam0];

	if (func_51())
	{
		num2 = func_47(epctParam1);
	
		if (!(num2 == -1))
			return func_45(num2);
	}

	if (num > -1 && num < 17)
		if (IS_BIT_SET(Global_4718592.f_3838[iParam0 /*26988*/].f_8612[num], 24))
			return 18;

	if (iParam0 > -1 && epctParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_127184[iParam0] != PV_COMP_INVALID && Global_4718592.f_127184[iParam0] <= PV_COMP_LOWR)
			if (Global_4718592.f_127184[iParam0] == PV_COMP_HEAD)
				type = 15;
			else if (Global_4718592.f_127184[iParam0] == PV_COMP_BERD)
				type = 18;
			else if (Global_4718592.f_127184[iParam0] == PV_COMP_HAIR)
				type = 24;
			else if (Global_4718592.f_127184[iParam0] == PV_COMP_LOWR)
				if (IS_BIT_SET(Global_4718592.f_16, 29))
					type = 21;
				else
					type = PV_COMP_FEET;
			else
				type = Global_4718592.f_127184[iParam0];
		else
			type = func_26(epctParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_22, 13))
			type = func_72(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_25, 29))
			type = PV_COMP_HEAD;
	
		if (IS_BIT_SET(Global_4718592.f_16, 26) && !func_31(iParam0, PLAYER::GET_PLAYER_TEAM(epctParam1), 0, -1))
			type = func_44(true);
	}
	else
	{
		type = PV_COMP_BERD;
	}

	return type;
}

ePedComponentType func_72(int iParam0) // Position - 0x2281 (8833)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_197487;
			break;
	
		case 1:
			num = *Global_4718592.f_197488;
			break;
	
		case 2:
			num = *Global_4718592.f_197489;
			break;
	
		case 3:
			num = *Global_4718592.f_197490;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

Ped func_73() // Position - 0x2356 (9046)
{
	return Global_2621446.f_2;
}

BOOL func_74() // Position - 0x2364 (9060)
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_75() // Position - 0x2372 (9074)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

BOOL func_76(ePedComponentType epctParam0) // Position - 0x238C (9100)
{
	if (func_34(epctParam0, 0))
		return true;

	if (func_77())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658293[epctParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_77() // Position - 0x23CB (9163)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_78(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x23D9 (9177)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && PLAYER::GET_PLAYER_TEAM(epctParam1) == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(epctParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && iParam2 == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
	}

	return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
}

int func_79(int iParam0) // Position - 0x2451 (9297)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_81())
				if (iParam0 == 5)
					iParam0 = 6;
				else
					iParam0 = 5;
			break;
	}

	return func_80(iParam0);
}

int func_80(int iParam0) // Position - 0x248B (9355)
{
	switch (iParam0)
	{
		case 10:
			return 9;
	
		case 5:
			return 8;
	
		case 6:
			return 7;
	
		case 8:
			return 6;
	
		case 7:
			return 4;
	
		case 4:
		case 11:
			return 2;
	
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
	}

	return 1;
}

BOOL func_81() // Position - 0x2516 (9494)
{
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_2673273);

	if (playerTeam > -1 && playerTeam < 4)
		return IS_BIT_SET(Global_4718592.f_3838[playerTeam /*26988*/].f_14478, 4);

	return false;
}

void func_82(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x254D (9549)
{
	var unk;

	if (func_84(plParam0))
		return;

	func_83(&Global_2647284.f_723[plParam0], &Global_2647284.f_1086[plParam0], &(Global_2647284.f_393), bParam1, plParam0, bParam2, &unk);
	return;
}

BOOL func_83(int iParam0, var uParam1, int* piParam2, BOOL bParam3, Player plParam4, BOOL bParam5, var uParam6) // Position - 0x258B (9611)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}

	if (!SCRIPT::IS_THREAD_ACTIVE(*iParam0) || *iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(piParam2, plParam4);
			}
		
			*iParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*piParam2, plParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(piParam2, plParam4);
			}
		
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
				*uParam1 = -1;
		
			*iParam0 = -1;
		}
	
		return true;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !(*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
	}

	return false;
}

BOOL func_84(Player plParam0) // Position - 0x264A (9802)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return true;

	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH())
		return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x2673 (9843)
{
	switch (func_87())
	{
		case HUD_COLOUR_PURE_WHITE:
			return func_86();
	
		case HUD_COLOUR_BLACK:
			return joaat("creator");
	}

	return 0;
}

Hash func_86() // Position - 0x26A6 (9894)
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

eHudColour func_87() // Position - 0x26CA (9930)
{
	return Global_33815;
}

void func_88(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x26D5 (9941)
{
	var unk;

	if (func_84(plParam0))
		return;

	if (func_83(&Global_2647284.f_822[plParam0], &Global_2647284.f_1185[plParam0], &(Global_2647284.f_367), bParam1, plParam0, bParam3, &unk))
		func_89(plParam0, bParam2);

	return;
}

void func_89(Player plParam0, BOOL bParam1) // Position - 0x271D (10013)
{
	if (bParam1)
		MISC::SET_BIT(&(Global_2647284.f_368), plParam0);
	else
		MISC::CLEAR_BIT(&(Global_2647284.f_368), plParam0);

	if (HUD::DOES_BLIP_EXIST(Global_2647284[plParam0]))
		if (bParam1)
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647284[plParam0], false);
		else
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2647284[plParam0], true);

	return;
}

BOOL func_90(Player plParam0) // Position - 0x2778 (10104)
{
	return func_91(&Global_2647284.f_822[plParam0]);
}

BOOL func_91(int iParam0) // Position - 0x278F (10127)
{
	if (SCRIPT::IS_THREAD_ACTIVE(*iParam0))
		if (!(*iParam0 == SCRIPT::GET_ID_OF_THIS_THREAD()))
			return 0;

	return 1;
}

void func_92(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27B2 (10162)
{
	var unk;

	if (func_84(plParam0))
		return;

	if (func_83(&Global_2647284.f_624[plParam0], &Global_2647284.f_987[plParam0], &(Global_2647284.f_389), bParam2, plParam0, bParam3, &unk))
		if (bParam2)
			Global_2647284.f_459[plParam0] = iParam1;

	return;
}

int func_93(eHudColour ehcParam0) // Position - 0x2804 (10244)
{
	int r;
	int g;
	int b;
	var a;

	switch (ehcParam0)
	{
		case 1:
			return 4;
	
		case 0:
			return 4;
	
		case 6:
			return 59;
	
		case 18:
			return 2;
	
		case 13:
			return 5;
	
		case 116:
			return 38;
	
		case 28:
			return 6;
	
		case 29:
			return 7;
	
		case 30:
			return 8;
	
		case 31:
			return 9;
	
		case 32:
			return 10;
	
		case 33:
			return 11;
	
		case 34:
			return 12;
	
		case 35:
			return 13;
	
		case 36:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 16;
	
		case 39:
			return 17;
	
		case 40:
			return 18;
	
		case 41:
			return 19;
	
		case 42:
			return 20;
	
		case 43:
			return 21;
	
		case 44:
			return 22;
	
		case 45:
			return 23;
	
		case 46:
			return 24;
	
		case 47:
			return 25;
	
		case 48:
			return 26;
	
		case 49:
			return 27;
	
		case 50:
			return 28;
	
		case 51:
			return 29;
	
		case 52:
			return 30;
	
		case 53:
			return 31;
	
		case 54:
			return 32;
	
		case 55:
			return 33;
	
		case 56:
			return 34;
	
		case 57:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 9:
			return 57;
	
		case 10:
			return 53;
	
		case 118:
			return 57;
	
		case 14:
			return 56;
	
		case 3:
			return 55;
	
		case 21:
			return 50;
	
		case 15:
			return 51;
	
		case 20:
			return 52;
	
		case 11:
			return 54;
	
		case 23:
			return 58;
	
		case 12:
			return 60;
	
		case 24:
			return 61;
	
		case 4:
			return 62;
	
		default:
		
	}

	HUD::GET_HUD_COLOUR(ehcParam0, &r, &g, &b, &a);
	return (r * 16777216) + (g * 65536) + (b * 256) + a;
}

int func_94(ePedComponentType epctParam0) // Position - 0x2A6C (10860)
{
	int num;

	num = func_47(epctParam0);

	if (num != -1)
		return func_45(num);

	return 1;
}

BOOL func_95(Player plParam0) // Position - 0x2A8C (10892)
{
	return func_91(&Global_2647284.f_624[plParam0]);
}

void func_96(Player plParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2AA3 (10915)
{
	BOOL flag;

	if (func_84(plParam0))
		return;

	if (func_83(&Global_2647284.f_591[plParam0], &Global_2647284.f_954[plParam0], &(Global_2647284.f_388), bParam2, plParam0, bParam3, &flag))
	{
		if (bParam2)
			Global_2647284.f_426[plParam0] = ebsParam1;
	
		if (flag)
			func_97();
	}

	return;
}

void func_97() // Position - 0x2AFE (11006)
{
	Global_2647284.f_1656 = 1;
	Global_1950702.f_4219 = 1;
	return;
}

void func_98() // Position - 0x2B16 (11030)
{
	func_2(Global_2733190.f_3988.f_757);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x2B30 (11056)
{
	if (Global_1575066 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_103())
		return true;

	if (Global_2699678)
		return true;

	if (func_102())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_100())
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

BOOL func_100() // Position - 0x2BB4 (11188)
{
	return Global_2685152.f_726;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x2BC3 (11203)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_102() // Position - 0x2BDA (11226)
{
	return Global_2697072;
}

BOOL func_103() // Position - 0x2BE6 (11238)
{
	return Global_2685152.f_721;
}

void func_104() // Position - 0x2BF5 (11253)
{
	BUILTIN::WAIT(0);
	return;
}

int func_105() // Position - 0x2C02 (11266)
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return 1;
}

