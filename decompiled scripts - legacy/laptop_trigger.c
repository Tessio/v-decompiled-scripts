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
	var uLocal_50 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = -1;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = -2;
	var uLocal_108 = -2;
	var uLocal_109 = -2;
	var uLocal_110 = 5;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 2;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 2;
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
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	int iLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	BOOL bLocal_141 = 0;
	BOOL bLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	Object obLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	BOOL flag;
	char* name;
	var sizeAndPeds;
	BOOL flag2;
	Vector3 vector;
	Hash entityModel;
	Vector3 entityRotation;
	BOOL flag3;
	int pedNearbyPeds;
	int i;
	Vector3 vector2;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

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
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	fLocal_63 = 0f;
	iLocal_138 = -1;
	uLocal_152 = { 0f, 0f, 0f };
	obLocal_149 = obScriptParam_0;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_311();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_310(13) || func_310(14))
	{
		func_311();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_40206)
	{
		func_311();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_77453)
		SCRIPT::TERMINATE_THIS_THREAD();

	flag = false;
	name = "tvscreen";
	sizeAndPeds = 25;
	flag2 = true;
	vector = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) - (ENTITY::GET_ENTITY_FORWARD_VECTOR(obScriptParam_0) * { 0.6f, 0.6f, 0.6f }) };
	vector.f_2 = vector.f_2 + 0.5f;
	uLocal_155 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, uLocal_152) };
	Global_1950057 = 0;
	Global_1950053 = false;
	Global_1950165 = 0;

	while (flag2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		{
			if (bLocal_140)
				if (!func_308(PLAYER::PLAYER_ID()))
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_143))
						func_306(&uLocal_143, true, false);
		
			if (Global_1950053 && func_305(PLAYER::PLAYER_ID()) || func_304(PLAYER::PLAYER_ID()))
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_147))
				{
					func_306(&uLocal_147, false, false);
				}
				else if (func_303(&uLocal_147, 10000, false))
				{
					_STOPWATCH_DESTROY(&uLocal_147);
					Global_1950053 = false;
				}
			
				func_296(0);
			}
		
			if (Global_1845094)
			{
				if (!flag)
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_149);
				
					if (entityModel == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_149, 2) };
						obLocal_149 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(obLocal_149, true), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(obLocal_149, entityRotation, 2, true);
						flag = true;
					}
				}
			}
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obLocal_149, 0))
			{
				func_311();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(obLocal_149) && !CUTSCENE::IS_CUTSCENE_PLAYING() && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_149))
			{
				flag3 = false;
				pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, -1);
				i = 0;
			
				for (i = 0; i < pedNearbyPeds; i = i + 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[i], false))
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_INTRO", 3))
							flag3 = true;
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(sizeAndPeds[i], "MP_COMMON_MISS", "HACK_LOOP", 3))
							flag3 = true;
				}
			
				if (Global_17)
					flag3 = true;
			
				vector2 = { 0.6f, 0.6f, 0.8f };
			
				if (func_295() || func_294(PLAYER::PLAYER_ID()) || func_304(PLAYER::PLAYER_ID()) || func_293())
					vector2 = { 1f, 1f, 0.9f };
				else if (func_292())
					vector2 = { 0.75f, 0.55f, 1.25f };
			
				flag4 = func_291(PLAYER::PLAYER_ID());
				flag5 = true;
			
				if (func_292() || func_290())
					flag5 = func_289(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 90f);
			
				if (!flag3 && !Global_34046 && !func_288(0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !func_287() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, vector2, false, true, 1) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(obLocal_149) && !IS_BIT_SET(Global_2621446, 15) && !func_286() && !(Global_80280 && func_285()) && !(!Global_80280 && func_284()) && !(Global_80280 && IS_BIT_SET(Global_4718592.f_15, 24) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !(Global_80280 && func_283() && func_282()) && !(Global_80280 && func_281(PLAYER::PLAYER_ID()) == 5) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !Global_79044 && !func_278() && !func_277() && flag5 && !func_274() && !func_273())
				{
					if (!func_272(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_39) && !func_271(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_260.f_39, -1) && !func_270(PLAYER::PLAYER_ID()))
					{
						if (bLocal_141 != flag4)
						{
							if (func_305(PLAYER::PLAYER_ID()) || func_269(PLAYER::PLAYER_ID()) || func_304(PLAYER::PLAYER_ID()))
							{
								if (iLocal_138 != -1)
									func_268(&iLocal_138);
							
								if (func_266())
									HUD::CLEAR_HELP(true);
							}
						}
					
						bLocal_141 = flag4;
					
						if (iLocal_138 == -1)
							if (flag)
								_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "MPLA_BILL" /*Unable to use the laptop until utility charge is paid.*/, 0, 0, 0, 0);
							else if (func_295())
								func_264(flag4);
							else if (func_261())
								func_258(flag4);
							else if (func_293())
								func_248(flag4);
							else if (func_292())
								func_246(flag4);
							else
								_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BROWSEINPUTTRIG" /*Press ~INPUT_CONTEXT~ to browse the internet on this computer.*/, 0, 0, 0, 0);
					}
				
					if (iLocal_138 != -1 && func_244(iLocal_138, true) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_243())
					{
						if (iLocal_138 != -1)
							func_268(&iLocal_138);
					
						if (!flag)
						{
							if (func_242() || func_241() || func_240())
								func_235();
						
							if (func_295())
							{
								func_30(0, flag4);
								func_29(0, 1);
							}
							else if (func_293())
							{
								func_30(0, flag4);
								func_29(0, 3);
							}
							else if (func_261())
							{
								func_30(1, flag4);
								func_29(0, 2);
							}
							else if (func_292())
							{
								func_29(8, 0);
							}
							else
							{
								func_29(0, 0);
							}
						
							if (!bLocal_139)
							{
								func_22();
								bLocal_139 = true;
							}
						
							flag6 = true;
						
							if (func_242() || func_241() || func_240())
							{
								func_21(&uLocal_145, false, false);
							
								while (!func_303(&uLocal_145, 500, false))
								{
									func_296(0);
									BUILTIN::WAIT(0);
								}
							
								_STOPWATCH_DESTROY(&uLocal_145);
							}
						
							while (flag6)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(obLocal_149) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(obLocal_149, true), 1.5f, 1.5f, 4f, false, true, 1))
									Global_77345 = true;
							
								if (func_242() || func_241() || func_270(PLAYER::PLAYER_ID()) || func_240())
									if (!func_20() && !Global_79044)
										flag6 = false;
								else if (func_20() || Global_77345)
									flag6 = false;
							
								if (func_242())
									func_296(0);
							
								BUILTIN::WAIT(0);
							}
						
							if (func_242() || func_241() || func_240())
								func_6();
						
							func_296(0);
							_STOPWATCH_DESTROY(&uLocal_147);
							bLocal_139 = false;
						}
					}
					else if (iLocal_138 != -1 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_243() && func_240())
					{
						if (iLocal_138 != -1)
						{
							func_268(&iLocal_138);
							func_5();
						}
					
						func_235();
						MISC::SET_BIT(&(Global_1950198.f_4), 28);
					
						while (IS_BIT_SET(Global_1950198.f_4, 28))
						{
							BUILTIN::WAIT(0);
						}
					
						func_6();
						func_4();
						func_296(0);
					}
				}
				else
				{
					if (iLocal_138 != -1)
						func_268(&iLocal_138);
				
					if (func_305(PLAYER::PLAYER_ID()) || func_269(PLAYER::PLAYER_ID()))
						if (func_266())
							HUD::CLEAR_HELP(true);
				
					if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
						if (func_1())
							flag2 = false;
				}
			}
			else if (iLocal_138 != -1)
			{
				func_268(&iLocal_138);
			}
		}
		else
		{
			if (iLocal_138 != -1)
				func_268(&iLocal_138);
		
			flag2 = false;
		}
	
		BUILTIN::WAIT(0);
	}

	if (flag)
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(name))
			HUD::RELEASE_NAMED_RENDERTARGET(name);

	return;
}

BOOL func_1() // Position - 0x885 (2181)
{
	Hash entityModel;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_149);
	
		if (func_3(entityModel))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(obLocal_149, true) };
				return BUILTIN::VDIST2(entityCoords, entityCoords2) > 10000f;
			}
		}
		else
		{
			return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_149);
		}
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x8ED (2285)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_3(Hash hParam0) // Position - 0x90E (2318)
{
	if (hParam0 == joaat("prop_laptop_lester"))
		return true;

	return false;
}

void func_4() // Position - 0x925 (2341)
{
	if (Global_2673271.f_1023.f_10)
		Global_2673271.f_1023.f_10 = 0;

	return;
}

void func_5() // Position - 0x943 (2371)
{
	if (!Global_2673271.f_1023.f_10)
		Global_2673271.f_1023.f_10 = 1;

	return;
}

void func_6() // Position - 0x962 (2402)
{
	var animDict;

	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PLAYER::PLAYER_PED_ID());
				
					if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			
				if (func_7(1, &animDict))
					STREAMING::REMOVE_ANIM_DICT(&animDict);
			
				if (func_7(2, &animDict))
				{
					if (iLocal_150 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
							iLocal_151 = -1;
						}
					
						iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obLocal_149, 2), 2, false, false, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						STREAMING::REMOVE_ANIM_DICT(&animDict);
					}
				}
			}
		}
	}

	Global_1950052 = false;
	return;
}

BOOL func_7(int iParam0, char* sParam1) // Position - 0xA56 (2646)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	if (!func_305(PLAYER::PLAYER_ID()) && !func_304(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

BOOL func_8(ePedComponentType epctParam0) // Position - 0xABE (2750)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_9(Global_2658291[epctParam0 /*468*/].f_325.f_8) == 13;

	return false;
}

int func_9(ePedComponentType epctParam0) // Position - 0xB05 (2821)
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

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1055 (4181)
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
				if (type == Global_2673271.f_3)
					return Global_2673271.f_2;
				else if (Global_2658291[type /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x10B5 (4277)
{
	return -1;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x10BE (4286)
{
	if (Global_1575062 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_19())
		return true;

	if (Global_2699567)
		return true;

	if (func_18())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_16())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x1142 (4418)
{
	switch (func_15())
	{
		case 0:
			return func_14();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_14() // Position - 0x1175 (4469)
{
	switch (Global_2699676)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_15() // Position - 0x1199 (4505)
{
	return Global_33775;
}

BOOL func_16() // Position - 0x11A4 (4516)
{
	return Global_2685150.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x11B3 (4531)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_18() // Position - 0x11CA (4554)
{
	return Global_2696964;
}

BOOL func_19() // Position - 0x11D6 (4566)
{
	return Global_2685150.f_695;
}

BOOL func_20() // Position - 0x11E5 (4581)
{
	return Global_77342;
}

void func_21(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11F1 (4593)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*iParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*iParam0 = MISC::GET_GAME_TIMER();

	iParam0->f_1 = 1;
	return;
}

void func_22() // Position - 0x122E (4654)
{
	if (func_28() || func_27())
	{
		func_26();
		func_23();
	}

	return;
}

void func_23() // Position - 0x124F (4687)
{
	if (!_IS_FMMC_ACTIVE() && !func_24() && Global_2686089)
		Global_4718592.f_132500 = 0;

	return;
}

BOOL func_24() // Position - 0x127D (4733)
{
	return Global_2685150.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x128C (4748)
{
	return Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_185 != 0;
}

void func_26() // Position - 0x12A3 (4771)
{
	Global_2685150.f_758 = 1;
	return;
}

BOOL func_27() // Position - 0x12B3 (4787)
{
	return Global_2685150.f_737;
}

BOOL func_28() // Position - 0x12C2 (4802)
{
	return IS_BIT_SET(Global_2685150.f_2, 11);
}

void func_29(int iParam0, int iParam1) // Position - 0x12D3 (4819)
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_77456 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_77456)
	{
		case 3:
			Global_77454 = 0;
			break;
	
		case 4:
			Global_77454 = 3;
			break;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsecuroserv")) > 0)
	{
		if (flag)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appbikerbusiness")) > 0)
	{
		if (flag2)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appimportexport")) > 0)
	{
		if (flag3)
		{
		}
	
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		if (flag || flag2 || flag3)
		{
		}
	
		return;
	}

	if (Global_80280 && func_285())
		return;

	if (!Global_80280 && func_284())
		return;

	if (Global_80280)
	{
		Global_77307 = iParam1;
	}
	else if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			BUILTIN::WAIT(0);
		}
	
		BUILTIN::START_NEW_SCRIPT("appInternet", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}

	return;
}

void func_30(int iParam0, BOOL bParam1) // Position - 0x14B3 (5299)
{
	if (!bParam1 && !func_234(PLAYER::PLAYER_ID(), true) && func_233() < func_232() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_228(PLAYER::PLAYER_ID()))
		func_31(true, iParam0, 375994962);

	return;
}

void func_31(BOOL bParam0, int iParam1, int iParam2) // Position - 0x1502 (5378)
{
	var unk;

	func_142(true, true, iParam1, iParam2);

	if (bParam0)
	{
		if (func_141(91) || func_141(98))
			func_138();
	
		func_117();
		func_116(17);
		unk.f_3 = 514341487;
		unk.f_4 = iParam1;
	
		if (func_115(PLAYER::PLAYER_ID()) && iParam1 == 0)
			unk.f_4 = 100;
	
		func_113(unk, func_114(false, true));
		func_59();
	
		if (!func_115(PLAYER::PLAYER_ID()) && iParam1 != 1)
			_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_GANGAPP_SECUROSERV, "GB_TXTMSG_INIT2" /*Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits.*/, 2, 0, 0, 0, 0, true, 0, 1);
	}

	return;
}

int _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x159E (5534)
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_9463, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_34(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_10187 = iParam6;
			Global_10090[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_10167 = echParam0;
			MISC::SET_BIT(&Global_9463, 1);
			MISC::SET_BIT(&Global_9463, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x162D (5677)
{
	return Global_2339[character /*29*/].f_3;
}

int func_34(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x1640 (5696)
{
	int num;
	int num2;

	iParam13 > 99;
	MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	num = 0;

	switch (iParam16)
	{
		case 0:
			if (Global_21610 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21610 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21610 == CHAR_FRANKLIN)
				num = 0;
			else
				num = 1;
			break;
	
		default:
			num = 0;
			break;
	}

	if (num == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				return 0;
	
		if (Global_114904.f_14058[Global_21610 /*20*/].f_17 == true)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_51() == 0)
	{
		func_49();
		return 0;
	}

	func_48(Global_24051);
	TEXT_LABEL_ASSIGN_STRING(&Global_114904.f_14148[Global_24051 /*104*/], sParam1, 64);
	Global_114904.f_14148[Global_24051 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114904.f_14148[Global_24051 /*104*/].f_24 = iParam2;
	}

	Global_114904.f_14148[Global_24051 /*104*/].f_25 = iParam7;
	Global_114904.f_14148[Global_24051 /*104*/].f_26 = iParam8;
	Global_114904.f_14148[Global_24051 /*104*/].f_29 = iParam9;
	Global_114904.f_14148[Global_24051 /*104*/].f_30 = iParam12;
	Global_114904.f_14148[Global_24051 /*104*/].f_31 = iParam11;
	Global_114904.f_14148[Global_24051 /*104*/].f_28 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114904.f_14148[Global_24051 /*104*/].f_33), sParam4, 64);
	Global_114904.f_14148[Global_24051 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114904.f_14148[Global_24051 /*104*/].f_50), sParam5, 64);
	Global_114904.f_14148[Global_24051 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114904.f_14148[Global_24051 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114904.f_14148[Global_24051 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_9463, 10))
	{
		Global_114904.f_14148[Global_24051 /*104*/].f_99[0] = true;
		Global_114904.f_14148[Global_24051 /*104*/].f_99[1] = true;
		Global_114904.f_14148[Global_24051 /*104*/].f_99[2] = true;
		Global_10186 = 4;
		func_47(0);
		func_47(2);
		func_47(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114904.f_14148[Global_24051 /*104*/].f_99[Global_21610] = true;
				break;
		
			case 0:
				Global_114904.f_14148[Global_24051 /*104*/].f_99[0] = true;
				break;
		
			case 2:
				Global_114904.f_14148[Global_24051 /*104*/].f_99[2] = true;
				break;
		
			case 1:
				Global_114904.f_14148[Global_24051 /*104*/].f_99[1] = true;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21610)
			{
				case CHAR_MICHAEL:
					func_47(0);
					Global_10186 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_47(1);
					Global_10186 = 1;
					break;
			
				case CHAR_TREVOR:
					func_47(2);
					Global_10186 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_47(3);
					Global_10186 = 3;
					break;
			
				default:
					Global_10186 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_9463, 10))
		{
			Global_114904.f_14058[0 /*20*/].f_17 = 1;
			Global_114904.f_14058[1 /*20*/].f_17 = 1;
			Global_114904.f_14058[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114904.f_14058[Global_21610 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114904.f_14058[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114904.f_14058[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114904.f_14058[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_24053[Global_24051] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21553)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21599, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21610)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21599, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21599, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21599, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21599, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_46())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21599, true);
	}

	if (!Global_21843 && !IS_BIT_SET(Global_9465, 9))
	{
		if (Global_21610.f_1 == 6)
		{
			func_45(Global_21591, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_41(1);
			func_45(Global_21591, "DISPLAY_VIEW", 1f, BUILTIN::TO_FLOAT(Global_21590), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1978585 != -1 && echParam0 == Global_1978585)
		num2 = 1;

	func_35(echParam0, sParam1, num2, func_40(PLAYER::PLAYER_ID()));
	return 1;
}

void func_35(eCharacter echParam0, char* sParam1, BOOL bParam2, ePedComponentType epctParam3) // Position - 0x1B23 (6947)
{
	eCharacter character;

	if (!func_36())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = epctParam3;
	character.f_6 = Global_1978568.f_7;
	character.f_7 = Global_1978568.f_8;
	character.f_8 = Global_1978568.f_9;
	character.f_9 = Global_1978568.f_10;
	character.f_10 = Global_1978568.f_11;
	character.f_11 = Global_1978568.f_12;
	character.f_12 = Global_1978568.f_13;
	character.f_13 = Global_1978568.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1978585 = -1;

	return;
}

BOOL func_36() // Position - 0x1BBE (7102)
{
	if (!Global_262145.f_28485)
		return false;

	if (!Global_80280)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_37(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_37(ePedComponentType epctParam0) // Position - 0x1C21 (7201)
{
	if (epctParam0 == PLAYER::PLAYER_ID())
	{
		if (func_39(8))
			return true;
	
		if (Global_2733002.f_5971.f_1 > 0)
			return true;
	}

	return func_38(epctParam0, 20);
}

BOOL func_38(ePedComponentType epctParam0, int iParam1) // Position - 0x1C58 (7256)
{
	return IS_BIT_SET(Global_1892653[epctParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_39(int iParam0) // Position - 0x1C70 (7280)
{
	return IS_BIT_SET(Global_2733002.f_5960, iParam0);
}

ePedComponentType func_40(Player plParam0) // Position - 0x1C82 (7298)
{
	return Global_1845250[plParam0 /*880*/].f_198.f_6;
}

void func_41(int iParam0) // Position - 0x1C97 (7319)
{
	int i;
	int num;
	int value;
	int j;
	int value2;
	int k;
	int value3;
	int value4;
	int value5;
	int value6;

	Global_24052 = 0;
	Global_10085 = iParam0;
	func_44();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_310(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_9470[num /*15*/].f_11)
				{
					if (i == Global_9470[num /*15*/].f_4)
					{
						if (Global_10048[i] == false)
						{
							Global_10011[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_9464, 3))
								{
									value = 42;
									Global_21846 = 1;
								}
								else
								{
									value = 255;
									Global_21846 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696959)
								if (num == 14)
									func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24046), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
						
							Global_10048[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 35)
			{
				if (iParam0 == Global_9470[num /*15*/].f_11)
				{
					if (i == Global_9470[num /*15*/].f_4)
					{
						if (Global_10048[i] == false)
						{
							Global_10011[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114904.f_14148[j /*104*/].f_24 != 0)
										if (Global_114904.f_14148[j /*104*/].f_28 == 0)
											if (Global_114904.f_14148[j /*104*/].f_99[Global_21610] == true)
												Global_24052 = Global_24052 + 1;
								}
							
								func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24052), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_80280)
								{
									value2 = 0;
									value2 = Global_4521273;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4521275[k /*296*/].f_24 != 0)
											if (Global_4521275[k /*296*/].f_28 == 0)
												if (Global_4521275[k /*296*/].f_291[Global_21610] == true)
													value2 = value2 + 1;
									}
								
									func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(value2), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21610)
									{
										case CHAR_MICHAEL:
											value3 = Global_46105;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_46106;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_46107;
											break;
									
										default:
											break;
									}
								
									func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(value3), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(Global_24046), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9469);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_9464, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_9464, 3))
								{
									value5 = 42;
									Global_21846 = 1;
								}
								else
								{
									value5 = 255;
									Global_21846 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_9470[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_9464, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21591, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9470[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_43(&Global_9470[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9470[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1881981.f_1;
								func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(value6), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_42(Global_21591, "SET_DATA_SLOT", BUILTIN::TO_FLOAT(1), BUILTIN::TO_FLOAT(i), BUILTIN::TO_FLOAT(Global_9470[num /*15*/].f_10), BUILTIN::TO_FLOAT(0), -1f, &Global_9470[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_10048[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_42(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x221E (8734)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_43(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_43(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_43(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_43(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_43(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_43(char* sParam0) // Position - 0x22D1 (8913)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_44() // Position - 0x22E3 (8931)
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_10048[i] = false;
	}

	return;
}

void func_45(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2306 (8966)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(BUILTIN::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_46() // Position - 0x2369 (9065)
{
	return Global_1575090;
}

void func_47(int iParam0) // Position - 0x2375 (9077)
{
	var unk;
	var unk2;

	unk = Global_114904.f_14058[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_48(int iParam0) // Position - 0x2394 (9108)
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_114904.f_14148[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114904.f_14148[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114904.f_14148[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114904.f_14148[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114904.f_14148[iParam0 /*104*/].f_18.f_4 = num;
	Global_114904.f_14148[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_49() // Position - 0x2426 (9254)
{
	int num;
	int num2;
	int num3;

	if (Global_80280)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	num3 = num;
	Global_24051 = 34;
	Global_114904.f_14148[Global_24051 /*104*/].f_18 = -1;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_1 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_2 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_3 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_50(Global_114904.f_14148[num3 /*104*/].f_18, Global_114904.f_14148[Global_24051 /*104*/].f_18))
			Global_24051 = num3;
	
		num3 = num3 + 1;
	}

	Global_114904.f_14148[Global_24051 /*104*/].f_24 = 1;
	return;
}

BOOL func_50(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x24F1 (9457)
{
	int num;
	int num2;
	int num3;
	int num4;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

int func_51() // Position - 0x25DC (9692)
{
	int num;
	int num2;
	int i;

	if (Global_80280)
	{
		num = 24;
		num2 = 33;
	}
	else
	{
		num = 0;
		num2 = 20;
	}

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_114904.f_14148[i /*104*/].f_24 == 0)
		{
			Global_24051 = i;
			return 1;
		}
	}

	i = num;
	Global_24051 = 34;
	Global_114904.f_14148[Global_24051 /*104*/].f_18 = -1;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_1 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_2 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_3 = 0;
	Global_114904.f_14148[Global_24051 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114904.f_14148[i /*104*/].f_24 == 0 || Global_114904.f_14148[i /*104*/].f_24 == 1)
			if (!func_50(Global_114904.f_14148[i /*104*/].f_18, Global_114904.f_14148[Global_24051 /*104*/].f_18))
				Global_24051 = i;
	
		Global_114904.f_14148[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_24051 == 34)
		return 0;

	Global_114904.f_14148[Global_24051 /*104*/].f_99[0] = false;
	Global_114904.f_14148[Global_24051 /*104*/].f_99[1] = false;
	Global_114904.f_14148[Global_24051 /*104*/].f_99[2] = false;
	return 1;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2744 (10052)
{
	if (func_310(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/])
				Global_21610 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/])
				Global_21610 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
				Global_21610 = CHAR_TREVOR;
			else
				Global_21610 = CHAR_MICHAEL;
	}
	else
	{
		Global_21610 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21610 == _CHAR_NULL)
			Global_21610 = CHAR_MULTIPLAYER;
	
		if (Global_80280)
			Global_21610 = CHAR_MULTIPLAYER;
	
		if (Global_21610 > CHAR_MULTIPLAYER)
			Global_21610 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x27E6 (10214)
{
	func_54();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_54() // Position - 0x27FF (10239)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_55(character) && !func_310(14) || Global_113852)
			{
				if (Global_114904.f_2370.f_539.f_4321 != character && func_55(Global_114904.f_2370.f_539.f_4321))
					Global_114904.f_2370.f_539.f_4322 = Global_114904.f_2370.f_539.f_4321;
			
				Global_114904.f_2370.f_539.f_4323 = character;
				Global_114904.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114904.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114904.f_2370.f_539.f_4323 = Global_114904.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114904.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_55(eCharacter echParam0) // Position - 0x28FC (10492)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2908 (10504)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2945 (10565)
{
	if (func_55(character))
		return func_58(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_58(eCharacter echParam0) // Position - 0x296A (10602)
{
	return Global_2339[echParam0 /*29*/];
}

void func_59() // Position - 0x2979 (10617)
{
	if (!func_110() && func_74() && func_72(PLAYER::PLAYER_ID()))
		if (func_69())
			_THEFEED_SHOW_MESSAGE("GB_INFO_MC_L" /*There are players looking to join a MC in this session.*/, false);
		else
			_THEFEED_SHOW_MESSAGE("GB_INFO_LFG" /*There are players looking for work as Bodyguards in this session.*/, false);

	return;
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x29BD (10685)
{
	int num;
	int num2;

	num = -1;
	num2 = 1;

	if (bParam1)
		num2 = 2;

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_61(0, sParam0, num2, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return num;
}

void func_61(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x29F5 (10741)
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_64(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_62(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1943908.f_5[num /*53*/] = iParam0;
		Global_1943908.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1943908.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1943908.f_5[num /*53*/].f_2[0] = iParam4;
		Global_1943908.f_5[num /*53*/].f_2[1] = iParam5;
		Global_1943908.f_5[num /*53*/].f_2[2] = iParam6;
		Global_1943908.f_5[num /*53*/].f_7 = iParam7;
		Global_1943908.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1943908.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1943908.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1943908.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1943908.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_62(int iParam0) // Position - 0x2AFD (11005)
{
	int i;

	for (i = 0; i <= Global_1943908 - 1; i = i + 1)
	{
		if (iParam0 > Global_1943908.f_5[i /*53*/].f_1)
		{
			func_63(i);
			return i;
		}
	}

	Global_1943908 = Global_1943908 + 1;

	if (Global_1943908 > 5)
	{
		Global_1943908 = 5;
		return Global_1943908;
	}

	return Global_1943908 - 1;
}

void func_63(int iParam0) // Position - 0x2B5F (11103)
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1943908.f_5[i /*53*/] = { Global_1943908.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL func_64(ePedComponentType epctParam0, int iParam1) // Position - 0x2B98 (11160)
{
	BOOL flag;

	if (!func_67(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_65(-1, false) == 8;
	else
		flag = Global_1845250[epctParam0 /*880*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

int func_65(int iParam0, BOOL bParam1) // Position - 0x2BF1 (11249)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_66();

	if (Global_1575070[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

int func_66() // Position - 0x2C32 (11314)
{
	return Global_1574927;
}

BOOL func_67(ePedComponentType epctParam0) // Position - 0x2C3E (11326)
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x2C60 (11360)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

BOOL func_69() // Position - 0x2C71 (11377)
{
	return func_70(PLAYER::PLAYER_ID());
}

BOOL func_70(ePedComponentType epctParam0) // Position - 0x2C81 (11393)
{
	return func_71(epctParam0, 1);
}

BOOL func_71(ePedComponentType epctParam0, int iParam1) // Position - 0x2C90 (11408)
{
	if (func_67(epctParam0))
		if (func_67(Global_1892653[epctParam0 /*615*/].f_10))
			if (Global_1892653[epctParam0 /*615*/].f_10 == epctParam0 && Global_1892653[epctParam0 /*615*/].f_10.f_433 == iParam1)
				return 1;

	return 0;
}

BOOL func_72(ePedComponentType epctParam0) // Position - 0x2CDF (11487)
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return false;

	if (func_64(epctParam0, 0))
		return false;

	if (IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_140, 2) || IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_140, 5))
		return false;

	if (func_73(epctParam0))
		return false;

	return true;
}

BOOL func_73(ePedComponentType epctParam0) // Position - 0x2D47 (11591)
{
	Player player;

	player = epctParam0;

	if (player != -1)
		return func_38(epctParam0, 9);

	return false;
}

BOOL func_74() // Position - 0x2D65 (11621)
{
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_75(type))
			return true;
	}

	return false;
}

BOOL func_75(ePedComponentType epctParam0) // Position - 0x2D96 (11670)
{
	int num;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (epctParam0 != PLAYER::PLAYER_ID())
		{
			num = 0;
		
			if (func_109(true))
				if (func_108(epctParam0, 9))
					num = 1;
			else if (func_38(epctParam0, 15))
				num = 1;
		
			if (num && func_76(epctParam0, PV_COMP_HEAD, false))
				return true;
		}
	}

	return false;
}

int func_76(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x2DF3 (11763)
{
	var gamerHandle;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return 0;

	if (func_64(epctParam0, 0))
		return 0;

	if (func_106(epctParam0))
		return 0;

	if (IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_140, 2) || IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_140, 5))
		return 0;

	if (func_105(epctParam0))
		return 0;

	if (bParam2)
	{
		if (func_103(epctParam0, epctParam1, true))
			return 0;
	
		if (func_37(epctParam0))
			return 0;
	
		if (func_101(epctParam0, true))
			return 0;
	}
	else if (func_234(epctParam0, true))
	{
		return 0;
	}

	if (func_100(epctParam0))
		return 0;

	if (func_73(epctParam0))
		return 0;

	if (func_228(epctParam0))
		return 0;

	if (func_98(epctParam0))
		return 0;

	if (func_95(epctParam0))
		return 0;

	if (func_92(epctParam0))
		return 0;

	if (func_89(epctParam0))
		return 0;

	if (func_79(epctParam0))
		return 0;

	if (!Global_1988073)
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(epctParam0) };
	
		if (IS_GAMER_HANDLE_VALID(gamerHandle) && !NETWORK::_NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(0, &gamerHandle))
			return 0;
	}

	return 1;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x2F41 (12097)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> GET_GAMER_HANDLE_PLAYER(ePedComponentType epctParam0) // Position - 0x2F51 (12113)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(epctParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_79(ePedComponentType epctParam0) // Position - 0x2F68 (12136)
{
	if (func_87(epctParam0) || func_80(epctParam0))
		return true;

	return false;
}

int func_80(ePedComponentType epctParam0) // Position - 0x2F8A (12170)
{
	if (func_81(epctParam0, 363, -1))
		return 1;

	return 0;
}

BOOL func_81(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x2FA4 (12196)
{
	ePedComponentType type;

	if (func_85(epctParam0) == epctParam1)
	{
		if (iParam2 == -1)
		{
			return true;
		}
		else
		{
			type = func_84(epctParam0);
		
			if (type != _INVALID_PLAYER_INDEX())
				return func_82(type) == iParam2;
		}
	}

	return false;
}

int func_82(ePedComponentType epctParam0) // Position - 0x2FE2 (12258)
{
	if (func_83(epctParam0, false))
		return Global_1892653[epctParam0 /*615*/].f_10.f_183;

	return -1;
}

BOOL func_83(Player plParam0, BOOL bParam1) // Position - 0x3005 (12293)
{
	if (func_67(plParam0))
		if (Global_1892653[plParam0 /*615*/].f_10.f_34 != PV_COMP_INVALID || bParam1 && Global_1892653[plParam0 /*615*/].f_10.f_33 != PV_COMP_INVALID)
			return true;

	return false;
}

ePedComponentType func_84(ePedComponentType epctParam0) // Position - 0x3049 (12361)
{
	return Global_1892653[epctParam0 /*615*/].f_10.f_36;
}

ePedComponentType func_85(ePedComponentType epctParam0) // Position - 0x305E (12382)
{
	if (func_86(epctParam0, false))
		return Global_1892653[epctParam0 /*615*/].f_10.f_33;

	return PV_COMP_INVALID;
}

BOOL func_86(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x3081 (12417)
{
	if (func_67(epctParam0))
		if (Global_1892653[epctParam0 /*615*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1892653[epctParam0 /*615*/].f_10.f_34 != PV_COMP_INVALID)
			return true;

	return false;
}

int func_87(ePedComponentType epctParam0) // Position - 0x30C5 (12485)
{
	if (func_88(epctParam0) == 363)
		return 1;

	return 0;
}

ePedComponentType func_88(ePedComponentType epctParam0) // Position - 0x30DE (12510)
{
	if (func_67(epctParam0))
		if (func_83(epctParam0, false))
			return Global_1892653[epctParam0 /*615*/].f_10.f_34;

	return PV_COMP_INVALID;
}

BOOL func_89(ePedComponentType epctParam0) // Position - 0x310A (12554)
{
	if (func_91(epctParam0) || func_90(epctParam0))
		return true;

	return false;
}

int func_90(ePedComponentType epctParam0) // Position - 0x312C (12588)
{
	if (func_81(epctParam0, 364, -1))
		return 1;

	return 0;
}

int func_91(ePedComponentType epctParam0) // Position - 0x3146 (12614)
{
	if (func_88(epctParam0) == 364)
		return 1;

	return 0;
}

BOOL func_92(ePedComponentType epctParam0) // Position - 0x315F (12639)
{
	if (func_94(epctParam0) || func_93(epctParam0))
		return true;

	return false;
}

int func_93(ePedComponentType epctParam0) // Position - 0x3181 (12673)
{
	if (func_81(epctParam0, 362, -1))
		return 1;

	return 0;
}

int func_94(ePedComponentType epctParam0) // Position - 0x319B (12699)
{
	if (func_88(epctParam0) == 362)
		return 1;

	return 0;
}

BOOL func_95(ePedComponentType epctParam0) // Position - 0x31B4 (12724)
{
	if (func_97(epctParam0))
		return true;

	if (func_96(epctParam0))
		return true;

	return false;
}

BOOL func_96(ePedComponentType epctParam0) // Position - 0x31D7 (12759)
{
	if (func_81(epctParam0, 339, -1))
		return true;

	return false;
}

BOOL func_97(ePedComponentType epctParam0) // Position - 0x31F1 (12785)
{
	if (func_88(epctParam0) == 339)
		return true;

	return false;
}

BOOL func_98(ePedComponentType epctParam0) // Position - 0x320A (12810)
{
	if (func_64(epctParam0, 0))
		return true;

	if (func_99())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658291[epctParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_99() // Position - 0x3249 (12873)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_100(ePedComponentType epctParam0) // Position - 0x3257 (12887)
{
	ePedComponentType type;

	type = epctParam0;

	if (type != PV_COMP_INVALID)
		return IS_BIT_SET(Global_1892653[type /*615*/].f_1, 0);

	return false;
}

BOOL func_101(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x327A (12922)
{
	return func_102(epctParam0, bParam1, 1);
}

int func_102(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x328B (12939)
{
	ePedComponentType type;

	if (!func_67(epctParam0))
		return 0;

	if (!bParam1)
		if (func_71(epctParam0, iParam2))
			return 0;

	type = Global_1892653[epctParam0 /*615*/].f_10;

	if (func_67(type) && Global_1892653[type /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

BOOL func_103(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x32E7 (13031)
{
	if (func_67(epctParam1))
	{
		if (!bParam2)
			if (func_104(epctParam0, epctParam1))
				return false;
	
		if (Global_1892653[epctParam0 /*615*/].f_10 != _INVALID_PLAYER_INDEX())
			return epctParam1 == Global_1892653[epctParam0 /*615*/].f_10;
	}

	return false;
}

BOOL func_104(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x3331 (13105)
{
	if (epctParam1 != _INVALID_PLAYER_INDEX())
		if (epctParam0 != _INVALID_PLAYER_INDEX())
			if (Global_1892653[epctParam0 /*615*/].f_10 != _INVALID_PLAYER_INDEX())
				if (Global_1892653[epctParam0 /*615*/].f_10 == epctParam0)
					return epctParam1 == epctParam0;

	return false;
}

BOOL func_105(ePedComponentType epctParam0) // Position - 0x3376 (13174)
{
	return func_38(epctParam0, 30);
}

BOOL func_106(ePedComponentType epctParam0) // Position - 0x3386 (13190)
{
	if (!func_38(epctParam0, 2))
		return true;

	if (func_38(epctParam0, 1))
		return true;

	if (func_107(epctParam0) > 0)
		return true;

	return false;
}

int func_107(ePedComponentType epctParam0) // Position - 0x33BA (13242)
{
	return Global_1892653[epctParam0 /*615*/].f_10.f_24;
}

BOOL func_108(ePedComponentType epctParam0, int iParam1) // Position - 0x33CF (13263)
{
	return IS_BIT_SET(Global_1892653[epctParam0 /*615*/].f_10.f_5, iParam1);
}

BOOL func_109(BOOL bParam0) // Position - 0x33E7 (13287)
{
	return func_101(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_110() // Position - 0x33F9 (13305)
{
	int i;
	var string2;
	var string1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_12[i] == _INVALID_PLAYER_INDEX())
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "", 64);
			string1 = { func_111(func_112(i)) };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, &string2))
				return false;
		}
	}

	return true;
}

struct<16> func_111(int iParam0) // Position - 0x3453 (13395)
{
	return Global_2686090.f_3083.f_18[iParam0 /*16*/];
}

int func_112(int iParam0) // Position - 0x346B (13419)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		default:
		
	}

	return 0;
}

void func_113(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15) // Position - 0x34C1 (13505)
{
	hParam0 = -642704387;
	hParam0.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam15 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &hParam0, 15, iParam15, hParam0);

	return;
}

int func_114(BOOL bParam0, BOOL bParam1) // Position - 0x34F0 (13552)
{
	int address;
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(type, false, false))
			if (type != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_64(type, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_115(ePedComponentType epctParam0) // Position - 0x3555 (13653)
{
	if (!func_67(epctParam0))
		return false;

	return IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_260.f_37, 26);
}

void func_116(int iParam0) // Position - 0x357C (13692)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2733002.f_3988.f_7[num], offset);
	return;
}

void func_117() // Position - 0x35A5 (13733)
{
	var unk;
	int num;

	unk = { func_137(155, 157, -1) };
	num = 0;

	if (func_109(true))
	{
		unk = { func_137(47, 48, -1) };
		num = 1;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_135(PLAYER::PLAYER_ID(), false), 64);

	func_123(&unk, num, false);

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	return;
}

void func_118(int iParam0) // Position - 0x3621 (13857)
{
	MISC::SET_BIT(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_4), iParam0);
	return;
}

void func_119(int iParam0) // Position - 0x363E (13886)
{
	MISC::CLEAR_BIT(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_4), iParam0);
	return;
}

BOOL func_120() // Position - 0x365B (13915)
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (func_121())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (func_122())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return true;

	return false;
}

BOOL func_121() // Position - 0x36CC (14028)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_122() // Position - 0x36E2 (14050)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_123(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x36F8 (14072)
{
	if (bParam2)
	{
		if (func_109(true) || iParam1 == 1)
		{
			func_132(47, 48, sParam0, -1, true);
			func_131(3, sParam0);
		
			if (func_69() && iParam1 == 1)
				func_130(sParam0, bParam2);
		}
		else
		{
			func_132(155, 157, sParam0, -1, true);
			func_131(1, sParam0);
		
			if (func_282() && iParam1 == 0)
				func_124(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_106), sParam0, 64);
	func_131(6, sParam0);
	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_122 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	return;
}

void func_124(const char* sParam0, BOOL bParam1) // Position - 0x37C8 (14280)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_132(45, 46, sParam0, -1, true);
			func_131(0, sParam0);
			unk = { func_137(155, 157, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
			{
				func_132(155, 157, sParam0, -1, true);
				func_131(1, sParam0);
			}
		
			if (func_129(true))
			{
				unk = { func_137(155, 157, -1) };
				func_125(-1408096250, unk, -81044133);
			}
		}
	}

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_343), sParam0, 64);
		func_131(5, sParam0);
	}

	return;
}

void func_125(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17) // Position - 0x3893 (14483)
{
	BOOL isBoss;
	int bossType;
	int bossId1;
	int bossId2;
	int textSource;

	if (Global_1989167 == MISC::GET_FRAME_COUNT())
		return;

	Global_1989167 = MISC::GET_FRAME_COUNT();
	isBoss = func_282();
	bossType = 0;

	if (func_129(true))
		if (func_109(true))
			bossType = 1;
		else
			bossType = 2;

	bossId1 = func_127(_GET_BOSS_OF_LOCAL_PLAYER());
	bossId2 = func_126(_GET_BOSS_OF_LOCAL_PLAYER());
	textSource = iParam17;
	STATS::_PLAYSTATS_NAMED_USER_CONTENT(isBoss, bossType, bossId1, bossId2, iParam0, &uParam1, textSource);
	return;
}

int func_126(ePedComponentType epctParam0) // Position - 0x38FD (14589)
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1892653[epctParam0 /*615*/].f_10.f_9[1];
}

int func_127(ePedComponentType epctParam0) // Position - 0x3922 (14626)
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1892653[epctParam0 /*615*/].f_10.f_9[0];
}

ePedComponentType _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x3947 (14663)
{
	return Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10;
}

BOOL func_129(BOOL bParam0) // Position - 0x395C (14684)
{
	return func_234(PLAYER::PLAYER_ID(), bParam0);
}

void func_130(const char* sParam0, BOOL bParam1) // Position - 0x396E (14702)
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_132(49, 50, sParam0, -1, true);
			func_131(2, sParam0);
		
			if (func_129(true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
				func_125(-1629413369, unk, -81044133);
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_359), sParam0, 64);
		func_131(7, sParam0);
	}

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	return;
}

void func_131(int iParam0, const char* sParam1) // Position - 0x3A0A (14858)
{
	Global_1988496[iParam0] = MISC::GET_HASH_KEY(sParam1);
	return;
}

void func_132(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x3A20 (14880)
{
	Hash statName;
	Hash statName2;
	var value;
	var value2;
	int lengthOfLiteralString;
	int length;

	statName = func_133(iParam0, iParam3);
	statName2 = func_133(iParam1, iParam3);

	if (statName != 0 && statName2 != 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&value, "", 32);
		TEXT_LABEL_ASSIGN_STRING(&value2, "", 32);
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
	
		if (lengthOfLiteralString > 0)
		{
			length = 10;
		
			if (lengthOfLiteralString < 10)
				length = lengthOfLiteralString;
		
			TEXT_LABEL_ASSIGN_STRING(&value, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, length, 31), 32);
		
			if (lengthOfLiteralString > 10)
				TEXT_LABEL_ASSIGN_STRING(&value2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, lengthOfLiteralString, 31), 32);
		}
	
		STATS::STAT_SET_STRING(statName, &value, bParam4);
		STATS::STAT_SET_STRING(statName2, &value2, bParam4);
	}

	return;
}

Hash func_133(int iParam0, int iParam1) // Position - 0x3AB3 (15027)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_134(iParam1));
}

int func_134(int iParam0) // Position - 0x3AC8 (15048)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_66();
	
		if (num2 > -1)
		{
			Global_2741298 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741298 = 1;
		}
	}

	return num;
}

const char* func_135(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x3AFC (15100)
{
	if (!bParam1)
		if (func_101(epctParam0, true))
			return func_136();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_136() // Position - 0x3B23 (15139)
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

struct<16> func_137(int iParam0, int iParam1, int iParam2) // Position - 0x3B33 (15155)
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk17;

	statHash = func_133(iParam0, iParam2);
	statHash2 = func_133(iParam1, iParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

void func_138() // Position - 0x3B70 (15216)
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_2673271.f_2591[i /*80*/].f_2 != 0)
		{
			Global_2673271.f_2591[i /*80*/].f_2 = 5;
			func_139(&(Global_2673271.f_2591[i /*80*/].f_69), 1);
		}
	}

	return;
}

void func_139(int iParam0, int iParam1) // Position - 0x3BBB (15291)
{
	func_140(iParam0, iParam1);
	return;
}

void func_140(int iParam0, int iParam1) // Position - 0x3BCB (15307)
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_141(int iParam0) // Position - 0x3BDC (15324)
{
	return Global_2673271.f_2591[0 /*80*/].f_1 == iParam0;
}

void func_142(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3BF3 (15347)
{
	var userID;
	int cloudTimeAsInt;
	int num;
	var unk6;
	var unk22;
	var unk23;
	const char* userid;
	var unk24;
	BOOL flag;
	int address;

	if (!func_225())
		return;

	num = 1;

	if (func_115(PLAYER::PLAYER_ID()))
		num = 2;

	if (iParam2 == 1)
		num = 3;

	if (Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			unk6 = { func_223(iParam2) };
			STATS::START_BEING_BOSS(num, &unk6, iParam3);
			func_220(false);
			func_217(false);
			func_119(21);
			func_119(22);
			Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_471 = num;
		}
	
		Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10 = PLAYER::PLAYER_ID();
		Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_433 = iParam2;
		Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_470 = iParam2;
		STATS::GET_BOSS_GOON_UUID(func_66(), &unk22, &unk23);
		func_216(unk22, unk23);
		userid = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
		TEXT_LABEL_ASSIGN_STRING(&unk24, userid, 64);
		func_215(unk24);
		func_214();
	
		if (func_213(14806, -1) <= 0)
			cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		else
			cloudTimeAsInt = func_213(14806, -1) - 43200;
	
		func_210(cloudTimeAsInt);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", INT))
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
	
		Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_25 = -1;
		Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_26 = -1;
		Global_2733002.f_3988.f_227 = -1;
		func_204();
		func_196(12, 0, true);
	
		if (bParam0)
			func_116(0);
	
		if (Global_2733002.f_3988.f_263 != _INVALID_PLAYER_INDEX())
			Global_2733002.f_3988.f_263 = _INVALID_PLAYER_INDEX();
	
		if (IS_BIT_SET(Global_2733002.f_925, 15))
			MISC::CLEAR_BIT(&(Global_2733002.f_925), 15);
	
		if (func_195(15))
			func_194(15);
	
		if (!func_193() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_192();
			func_191(2);
		}
	
		func_189(14846, 2, -1, true);
		func_119(31);
		func_117();
		func_188();
		func_187();
		func_186();
		func_152();
	
		if (iParam2 != 1)
		{
			if (!func_151(82, 3))
			{
				flag = false;
				address = func_213(14803, -1);
			
				if (!IS_BIT_SET(address, 11))
				{
					MISC::SET_BIT(&address, 11);
					func_189(14803, address, -1, true);
					flag = true;
				}
			
				func_145(82, 3, flag);
			}
		}
	
		if (iParam2 == 1)
			STATS::PLAYSTATS_CHANGE_MC_ROLE(func_127(_GET_BOSS_OF_LOCAL_PLAYER()), func_126(_GET_BOSS_OF_LOCAL_PLAYER()), func_144(), func_143(), Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_434, 4, Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_472);
	
		if (bParam1)
			if (iParam2 == 0)
				func_125(-1408096250, func_223(iParam2), -81044133);
			else
				func_125(-1629413369, func_223(iParam2), -81044133);
	}

	return;
}

int func_143() // Position - 0x3EAE (16046)
{
	if (Global_1947782.f_3 != 0)
		return Global_1947782.f_3;

	return -1;
}

int func_144() // Position - 0x3ECA (16074)
{
	if (Global_1947782.f_2 != 0)
		return Global_1947782.f_2;

	return -1;
}

void func_145(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3EE6 (16102)
{
	int num;

	Global_10166 = echParam0;

	if (Global_118[echParam0 /*10*/].f_8 != 198)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_150(echParam0, 0, 1);
			func_150(echParam0, 1, 1);
			func_150(echParam0, 2, 1);
			func_149(echParam0, 0, 1);
			func_149(echParam0, 1, 1);
			func_149(echParam0, 2, 1);
		}
		else
		{
			if (func_148(echParam0, echParam1) == 1 && func_147(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_150(echParam0, num, 1);
			func_149(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2733002.f_5840, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2733002.f_5840, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2733002.f_5840, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_80280)
			{
				if (echParam1 != 4)
				{
					if (Global_21610 != echParam1)
					{
						Global_10139[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_10156[echParam1] = true;
						Global_10161[echParam1] = echParam0;
					}
					else if (echParam0 == Global_21610)
					{
					}
					else
					{
						Global_10090[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_10090[1 /*6*/].f_5 = echParam1;
						func_146();
					}
				}
				else
				{
					Global_10090[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_10090[1 /*6*/].f_5 = echParam1;
					func_146();
				}
			}
			else
			{
				Global_10090[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_10090[1 /*6*/].f_5 = echParam1;
				func_146();
			}
		}
	}

	return;
}

void func_146() // Position - 0x4066 (16486)
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2339[Global_10166 /*29*/].f_7)), 64);

	if (Global_10185 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_10090[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_10090[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_9463, 0);
	return;
}

int func_147(eCharacter echParam0, int iParam1) // Position - 0x40E1 (16609)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[echParam0 /*29*/].f_24[iParam1];
}

int func_148(eCharacter echParam0, int iParam1) // Position - 0x410B (16651)
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2339[echParam0 /*29*/].f_12[iParam1];
}

void func_149(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x4135 (16693)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114904.f_28058[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_150(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x417A (16762)
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2339[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114904.f_28058[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL func_151(int iParam0, int iParam1) // Position - 0x41BF (16831)
{
	if (func_148(iParam0, iParam1) == 1)
		return true;

	return false;
}

void func_152() // Position - 0x41DB (16859)
{
	BOOL flag;

	if (func_28())
	{
		if (func_24() || func_185())
		{
			return;
		}
		else
		{
			func_159(false);
		
			if (func_157())
				func_156();
		
			func_155();
			flag = NETWORK::NETWORK_IS_IN_TRANSITION();
		
			if (flag || NETWORK::NETWORK_IS_TRANSITION_STARTED() || NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING() || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED())
			{
				if (*Global_262145.f_33075)
					NETWORK::NETWORK_CANCEL_TRANSITION_MATCHMAKING();
			
				if (flag)
					NETWORK::NETWORK_BAIL_TRANSITION(6, 0, 0);
			}
		
			func_154();
			func_153();
			func_155();
		}
	}

	return;
}

void func_153() // Position - 0x4271 (17009)
{
	Global_1048576.f_10 = 0;
	return;
}

void func_154() // Position - 0x4280 (17024)
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	int num;
	var unk6;
	int num2;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk24;
	ePedComponentType type;
	int num3;
	var unk40;
	var unk41;
	var unk42;
	var unk43;
	var unk44;
	int num4;
	var unk45;
	int i;
	int j;
	int k;

	num = -1;
	num2 = -1;
	num4 = -1;
	Global_2686090.f_6110 = { unk11 };

	for (i = 0; i <= 31; i = i + 1)
	{
		Global_2686090.f_1.f_845[i /*57*/] = { unk11 };
		Global_2686090.f_1.f_845[i /*57*/].f_13 = { unk24 };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2686090.f_1.f_845[i /*57*/].f_29), "", 16);
		Global_2686090.f_1.f_845[i /*57*/].f_44 = unk40;
		Global_2686090.f_1.f_845[i /*57*/].f_45 = unk41;
		Global_2686090.f_1.f_845[i /*57*/].f_46 = 0;
		Global_2686090.f_1.f_845[i /*57*/].f_47 = unk42;
		Global_2686090.f_1.f_845[i /*57*/].f_50 = unk43;
		Global_2686090.f_1.f_845[i /*57*/].f_55 = unk44;
		Global_2686090.f_1.f_845[i /*57*/].f_48 = 0;
		Global_2686090.f_1.f_845[i /*57*/].f_49 = 0;
		Global_2686090.f_1.f_845[i /*57*/].f_54 = 0;
		Global_2686090.f_1.f_845[i /*57*/].f_56 = unk44;
		Global_2686090.f_1.f_845[i /*57*/].f_53 = unk45;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2686090.f_1.f_845[i /*57*/].f_33[j] = type;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2686090.f_1.f_845[i /*57*/].f_36[j] = num3;
		}
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		Global_2686090.f_1.f_2670[i /*57*/] = { unk11 };
		Global_2686090.f_1.f_2670[i /*57*/].f_13 = { unk24 };
		Global_2686090.f_1.f_2670[i /*57*/].f_44 = unk40;
		Global_2686090.f_1.f_2670[i /*57*/].f_45 = unk41;
		Global_2686090.f_1.f_2670[i /*57*/].f_47 = unk42;
		Global_2686090.f_1.f_2670[i /*57*/].f_50 = unk43;
		Global_2686090.f_1.f_2670[i /*57*/].f_55 = unk44;
		Global_2686090.f_1.f_2670[i /*57*/].f_56 = unk44;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2686090.f_1.f_2670[i /*57*/].f_33[j] = type;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2686090.f_1.f_2670[i /*57*/].f_36[j] = num3;
		}
	}

	Global_2686090.f_1.f_2798 = unk;
	Global_2686090.f_1.f_2799 = unk2;
	Global_2686090.f_1.f_2800 = unk3;
	Global_2686090.f_1.f_2802 = unk4;
	Global_2686090.f_1.f_2805 = unk5;
	Global_2686090.f_1.f_2806 = 0;
	Global_2686090.f_1.f_2808 = num;
	Global_2686090.f_1.f_2809 = unk6;
	Global_2686090.f_1.f_2810 = unk6;
	Global_2686090.f_1.f_2811 = num2;
	Global_2686090.f_1.f_2812 = unk7;

	for (k = 0; k < 9; k = k + 1)
	{
		Global_2686090.f_1.f_2813[k] = 0;
	}

	Global_2686090.f_1.f_2826 = num4;
	Global_2686090.f_1.f_2823 = unk8;
	Global_2686090.f_1.f_2824 = unk9;
	Global_2686090.f_1.f_2825 = unk10;
	Global_2685150.f_844 = 0;
	return;
}

void func_155() // Position - 0x45B7 (17847)
{
	MISC::SET_BIT(&(Global_2685150.f_2), 12);
	return;
}

void func_156() // Position - 0x45CB (17867)
{
	Global_1057441 = -1;
	return;
}

BOOL func_157() // Position - 0x45D8 (17880)
{
	switch (func_158())
	{
		case 21:
		case 35:
		case 33:
		case 37:
		case 46:
		case 48:
		case 50:
		case 52:
		case 54:
		case 56:
		case 58:
		case 60:
		case 62:
		case 64:
		case 71:
		case 73:
		case 86:
		case 88:
		case 109:
		case 117:
		case 119:
		case 122:
		case 124:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 141:
			return true;
	
		default:
		
	}

	return false;
}

int func_158() // Position - 0x46A2 (18082)
{
	return Global_1057441;
}

void func_159(BOOL bParam0) // Position - 0x46AE (18094)
{
	BOOL flag;

	if (func_181() && !func_180())
	{
		func_179();
		func_178();
	}
	else
	{
		flag = func_177();
		func_176();
		func_174(true);
		func_173();
		func_172();
		func_171();
	
		if (flag && !bParam0)
			func_170();
	}

	if (Global_2694229.f_8)
		func_169();

	func_168();
	func_167();
	func_166();
	func_164();

	if (!func_163())
	{
		func_162();
		func_161(0);
	}

	func_178();
	func_160(0);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(false);

	return;
}

void func_160(int iParam0) // Position - 0x4741 (18241)
{
	Global_2685150.f_892 = iParam0;
	return;
}

void func_161(int iParam0) // Position - 0x4752 (18258)
{
	if (iParam0 == -1)
		Global_2685150.f_893 = Global_2685150.f_893 + 1;
	else
		Global_2685150.f_893 = iParam0;

	return;
}

void func_162() // Position - 0x477C (18300)
{
	Global_2685150.f_9 = -1;
	return;
}

BOOL func_163() // Position - 0x478B (18315)
{
	return Global_2685150.f_739;
}

void func_164() // Position - 0x479A (18330)
{
	Global_2685150.f_42 = func_165();
	return;
}

int func_165() // Position - 0x47AC (18348)
{
	if (Global_2693290)
		return 32;

	return 32 - Global_2693291;
}

void func_166() // Position - 0x47C7 (18375)
{
	Global_2685150.f_737 = 0;
	return;
}

void func_167() // Position - 0x47D7 (18391)
{
	Global_2685150.f_719 = 0;
	return;
}

void func_168() // Position - 0x47E7 (18407)
{
	MISC::CLEAR_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18), 15);
	return;
}

void func_169() // Position - 0x4804 (18436)
{
	Global_2694229.f_8 = 0;
	Global_2694229.f_7 = 0;
	return;
}

void func_170() // Position - 0x481A (18458)
{
	MISC::SET_BIT(&(Global_2685150.f_3), 2);
	return;
}

void func_171() // Position - 0x482D (18477)
{
	MISC::CLEAR_BIT(&Global_2685150, 7);
	return;
}

void func_172() // Position - 0x483E (18494)
{
	MISC::CLEAR_BIT(&Global_2685150, 6);
	return;
}

void func_173() // Position - 0x484F (18511)
{
	Global_2685150 = 0;
	Global_2685150.f_2 = 0;
	Global_2685150.f_3 = 0;
	return;
}

void func_174(BOOL bParam0) // Position - 0x486A (18538)
{
	int i;
	var unk;
	int j;

	Global_2686090.f_1.f_2798 = 0;
	Global_2686090.f_1.f_2799 = 0;
	Global_2686090.f_1.f_2825 = 0;
	Global_2686090.f_1.f_2805 = 0;
	Global_2686090.f_1.f_2806 = 0;
	Global_2686090.f_1.f_2809 = 0;
	Global_2686090.f_1.f_2810 = 0;
	Global_2686090.f_1.f_2808 = -1;
	Global_2686090.f_1.f_2811 = -1;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_2686090.f_1.f_2813[i] = 0;
	}

	Global_2686090.f_1.f_2826 = -1;

	if (bParam0)
	{
		Global_2686090.f_1.f_2823 = -1;
		Global_2686090.f_1.f_2824 = -1;
	}

	Global_2686090.f_1.f_2845 = 0;
	func_175();
	unk.f_33 = 2;
	unk.f_36 = 7;

	for (j = 0; j <= 31; j = j + 1)
	{
		Global_2686090.f_1.f_845[j /*57*/] = { unk };
	}

	Global_2681183.f_33 = -1;
	Global_2681183.f_34 = -1;
	return;
}

void func_175() // Position - 0x4966 (18790)
{
	Global_2681183.f_32 = 0;
	return;
}

void func_176() // Position - 0x4975 (18805)
{
	var unk;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Global_2682903[i /*37*/] = { unk };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682903[i /*37*/].f_13), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682903[i /*37*/].f_29), "", 16);
		Global_2682903[i /*37*/].f_33 = 0;
		Global_2682903[i /*37*/].f_34 = 0;
		Global_2682903[i /*37*/].f_35 = 0;
	}

	Global_2682903.f_1185 = 0;
	Global_2682903.f_1186 = 0;
	return;
}

BOOL func_177() // Position - 0x49EF (18927)
{
	return IS_BIT_SET(Global_2685150.f_3, 2);
}

void func_178() // Position - 0x49FF (18943)
{
	MISC::CLEAR_BIT(&(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18), 5);
	return;
}

void func_179() // Position - 0x4A1B (18971)
{
	MISC::CLEAR_BIT(&(Global_2685150.f_2), 11);
	return;
}

BOOL func_180() // Position - 0x4A2F (18991)
{
	return IS_BIT_SET(Global_2685150.f_2, 27);
}

BOOL func_181() // Position - 0x4A40 (19008)
{
	if (func_16() || func_184() || func_183() || func_182())
		return true;

	return false;
}

BOOL func_182() // Position - 0x4A72 (19058)
{
	return IS_BIT_SET(Global_2685150, 1);
}

BOOL func_183() // Position - 0x4A80 (19072)
{
	return IS_BIT_SET(Global_2685150, 2);
}

BOOL func_184() // Position - 0x4A8E (19086)
{
	return IS_BIT_SET(Global_2685150, 20);
}

BOOL func_185() // Position - 0x4A9D (19101)
{
	return IS_BIT_SET(Global_2686090.f_1.f_2810, 3);
}

void func_186() // Position - 0x4AB0 (19120)
{
	if (!Global_2733002.f_3988.f_342)
		Global_2733002.f_3988.f_342 = 1;

	return;
}

void func_187() // Position - 0x4AD1 (19153)
{
	var unk;

	unk = { func_137(49, 50, -1) };
	func_130(&unk, false);

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	return;
}

void func_188() // Position - 0x4B1A (19226)
{
	var unk;

	unk = { func_137(45, 46, -1) };
	func_124(&unk, false);

	if (!func_122() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_120())
		func_119(28);
	else
		func_118(28);

	return;
}

void func_189(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4B63 (19299)
{
	Hash statName;

	if (iParam0 != 16715)
	{
		statName = func_190(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_190(int iParam0, int iParam1) // Position - 0x4B91 (19345)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_134(iParam1));
}

void func_191(int iParam0) // Position - 0x4BA6 (19366)
{
	MISC::SET_BIT(&(Global_4576502.f_2), iParam0);

	if (Global_4576502)
		return;

	Global_4576502 = true;
	Global_4576502.f_1 = 0;
	return;
}

void func_192() // Position - 0x4BD0 (19408)
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4576428.f_28[i /*2*/] != -1 && Global_4576428.f_28[i /*2*/].f_1 != 0)
			if (HUD::DOES_BLIP_EXIST(Global_4576428.f_28[i /*2*/].f_1))
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_4576428.f_28[i /*2*/].f_1, true);
	}

	return;
}

BOOL func_193() // Position - 0x4C31 (19505)
{
	return Global_2685150.f_742;
}

void func_194(int iParam0) // Position - 0x4C40 (19520)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_2733002.f_3988.f_7[num], offset);
	return;
}

BOOL func_195(int iParam0) // Position - 0x4C69 (19561)
{
	int num;
	int num2;

	num = iParam0 / 32;
	num2 = iParam0 % 32;
	return IS_BIT_SET(Global_2733002.f_3988.f_7[num], num2);
}

void func_196(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4C8F (19599)
{
	if (func_203())
	{
		if (iParam1 == 1)
		{
			if (Global_2733002.f_3588 == PV_COMP_INVALID)
				Global_2733002.f_3588 = Global_262145.f_26822;
		
			func_21(&(Global_2733002.f_3586), false, false);
		
			if (bParam2)
			{
				if (Global_2733002.f_3591 == -1)
					Global_2733002.f_3591 = Global_262145.f_26823;
			
				func_21(&(Global_2733002.f_3589), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
				func_202(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_8 = 0;
			func_202(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_201() && !func_197(PLAYER::PLAYER_ID()))
			Global_1057440 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_197(Player plParam0) // Position - 0x4D59 (19801)
{
	if (func_198(plParam0, true, false))
		if (Global_1845250[plParam0 /*880*/] != PV_COMP_FEET)
			return true;

	return false;
}

BOOL func_198(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4D7E (19838)
{
	if (bParam1)
		if (func_199(plParam0))
			return true;

	!bParam2;

	if (Global_1845250[plParam0 /*880*/] == PV_COMP_INVALID)
		return false;

	return true;
}

BOOL func_199(Player plParam0) // Position - 0x4DB0 (19888)
{
	return func_200(plParam0);
}

BOOL func_200(Player plParam0) // Position - 0x4DBE (19902)
{
	return IS_BIT_SET(Global_1845250[plParam0 /*880*/].f_11.f_1, 0);
}

BOOL func_201() // Position - 0x4DD5 (19925)
{
	return Global_2685150.f_844;
}

void func_202(BOOL bParam0) // Position - 0x4DE4 (19940)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_203())
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
		
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
		
			if (Global_1574582.f_1 == false || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
			
				if (bParam0)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
			}
		}
		else
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
			
				if (Global_1574582.f_1 == false || Global_1574582.f_2 == 1)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
			}
		
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}

	return;
}

BOOL func_203() // Position - 0x4EDD (20189)
{
	return Global_1574582;
}

void func_204() // Position - 0x4EE9 (20201)
{
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(type))
		{
			func_206(true, type);
		
			if (type != PLAYER::PLAYER_ID())
				func_205(type);
		}
	}

	return;
}

void func_205(ePedComponentType epctParam0) // Position - 0x4F2B (20267)
{
	Ped playerPed;

	if (IS_BIT_SET(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_102, epctParam0))
	{
		playerPed = PLAYER::GET_PLAYER_PED(epctParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(playerPed, PLAYER::PLAYER_ID(), true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), epctParam0, true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(epctParam0, PLAYER::PLAYER_ID(), true);
		func_206(true, epctParam0);
		MISC::CLEAR_BIT(&(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_102), epctParam0);
	}

	return;
}

void func_206(BOOL bParam0, ePedComponentType epctParam1) // Position - 0x4F8D (20365)
{
	Vehicle vehiclePedIsIn;
	Ped playerPed;
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(epctParam1, false, true))
	{
		playerPed = PLAYER::GET_PLAYER_PED(epctParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(playerPed) && !ENTITY::IS_ENTITY_DEAD(playerPed, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, bParam0, true);
				
					if (func_103(epctParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
					{
						if (_GET_BOSS_OF_LOCAL_PLAYER() == epctParam1)
						{
							if (Global_2733002.f_3988.f_264[3] != vehiclePedIsIn)
								Global_2733002.f_3988.f_264[3] = vehiclePedIsIn;
						}
						else
						{
							num = func_207(_GET_BOSS_OF_LOCAL_PLAYER(), epctParam1);
						
							if (num != -1)
								if (Global_2733002.f_3988.f_264[num] != vehiclePedIsIn)
									Global_2733002.f_3988.f_264[num] = vehiclePedIsIn;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_103(epctParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
				{
					if (_GET_BOSS_OF_LOCAL_PLAYER() == epctParam1)
					{
						vehiclePedIsIn = Global_2733002.f_3988.f_264[3];
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
							Global_2733002.f_3988.f_264[3] = 0;
						}
					}
					else
					{
						num2 = func_207(_GET_BOSS_OF_LOCAL_PLAYER(), epctParam1);
					
						if (num2 != -1)
						{
							vehiclePedIsIn = Global_2733002.f_3988.f_264[num2];
						
							if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
								Global_2733002.f_3988.f_264[num2] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_207(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x512E (20782)
{
	int i;

	if (func_291(epctParam0))
	{
		if (func_103(epctParam1, epctParam0, false) || func_209(epctParam1, epctParam0))
		{
			for (i = 0; i < 7; i = i + 1)
			{
				if (func_208(epctParam0, i) == epctParam1)
					return i;
			}
		}
	}

	return -1;
}

ePedComponentType func_208(ePedComponentType epctParam0, int iParam1) // Position - 0x5184 (20868)
{
	if (func_291(epctParam0))
		if (iParam1 > -1 && iParam1 < 7)
			return Global_1892653[epctParam0 /*615*/].f_10.f_12[iParam1];

	return _INVALID_PLAYER_INDEX();
}

BOOL func_209(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x51C0 (20928)
{
	if (epctParam1 != _INVALID_PLAYER_INDEX())
		if (Global_1892653[epctParam0 /*615*/].f_10.f_27 != _INVALID_PLAYER_INDEX())
			return epctParam1 == Global_1892653[epctParam0 /*615*/].f_10.f_27;

	return false;
}

void func_210(int iParam0) // Position - 0x51F9 (20985)
{
	if (!func_225())
		return;

	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_1 = iParam0;

	if (func_213(14806, -1) != func_211(PLAYER::PLAYER_ID()))
		func_189(14806, func_211(PLAYER::PLAYER_ID()), -1, true);

	return;
}

int func_211(Player plParam0) // Position - 0x5241 (21057)
{
	if (func_212(plParam0) == -1)
		return -1;

	return func_212(plParam0) + 43200;
}

int func_212(Player plParam0) // Position - 0x5262 (21090)
{
	return Global_1892653[plParam0 /*615*/].f_10.f_1;
}

int func_213(int iParam0, int iParam1) // Position - 0x5277 (21111)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16715)
	{
		statHash = func_190(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_214() // Position - 0x52A6 (21158)
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
	
		if (func_109(true))
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
		else
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
	}

	return;
}

void func_215(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x52D7 (21207)
{
	Global_2686090.f_3083.f_2 = { uParam0 };
	return;
}

void func_216(int iParam0, int iParam1) // Position - 0x52F0 (21232)
{
	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_9[0] = iParam0;
	Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_10.f_9[1] = iParam1;
	return;
}

void func_217(BOOL bParam0) // Position - 0x5320 (21280)
{
	func_218(204, bParam0, -1, true);
	return;
}

void func_218(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x5332 (21298)
{
	Hash statName;

	statName = func_219(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_219(int iParam0, int iParam1) // Position - 0x5355 (21333)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_134(iParam1));
}

void func_220(BOOL bParam0) // Position - 0x536A (21354)
{
	if (bParam0)
	{
		if (func_222(4))
		{
			func_118(21);
			func_118(22);
		}
	
		func_118(31);
		func_221(bParam0);
	}
	else
	{
		if (func_38(PLAYER::PLAYER_ID(), 21))
		{
			func_119(21);
		
			if (!func_222(3) && func_222(4))
				func_118(22);
		}
	
		func_119(31);
		func_221(bParam0);
	}

	return;
}

void func_221(BOOL bParam0) // Position - 0x53D2 (21458)
{
	func_218(432, bParam0, -1, true);
	return;
}

BOOL func_222(int iParam0) // Position - 0x53E5 (21477)
{
	return IS_BIT_SET(Global_2733002.f_3988.f_51, iParam0);
}

struct<16> func_223(int iParam0) // Position - 0x53F9 (21497)
{
	var unk;

	if (iParam0 == 1)
		unk = { func_137(47, 48, -1) };
	else
		unk = { func_137(155, 157, -1) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_224(iParam0), 64);

	return unk;
}

const char* func_224(int iParam0) // Position - 0x543C (21564)
{
	switch (iParam0)
	{
		case 1:
			return func_136();
	
		default:
		
	}

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

BOOL func_225() // Position - 0x5460 (21600)
{
	if (func_227() && func_226(0))
		return true;

	return false;
}

BOOL func_226(int iParam0) // Position - 0x547E (21630)
{
	return Global_1574538[iParam0];
}

BOOL func_227() // Position - 0x548E (21646)
{
	return func_226(func_66() + 1);
}

BOOL func_228(ePedComponentType epctParam0) // Position - 0x54A0 (21664)
{
	return func_229(epctParam0) > 0;
}

int func_229(ePedComponentType epctParam0) // Position - 0x54B0 (21680)
{
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (Global_1892653[epctParam0 /*615*/].f_10.f_182 != -1)
			num = Global_1892653[epctParam0 /*615*/].f_10.f_182;
		else
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER") /* TUNEABLE: MPPLY_VIPGAMEPLAYDISABLEDTIMER */);
	
		num2 = (num + func_230()) - NETWORK::GET_CLOUD_TIME_AS_INT();
		return num2;
	}

	return -1;
}

var func_230() // Position - 0x5505 (21765)
{
	return Global_262145.f_15447;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x5514 (21780)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_232() // Position - 0x5532 (21810)
{
	return Global_262145.f_12910;
}

int func_233() // Position - 0x5541 (21825)
{
	int i;
	int num;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(type))
			if (func_291(type))
				num = num + 1;
	}

	return num;
}

BOOL func_234(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x557E (21886)
{
	if (!func_67(epctParam0))
		return false;

	if (!bParam1)
		if (func_291(epctParam0))
			return false;

	return func_67(Global_1892653[epctParam0 /*615*/].f_10);
}

void func_235() // Position - 0x55B6 (21942)
{
	var unk;
	Vector3 offsetFromEntityInWorldCoords;
	BOOL flag;

	Global_1950052 = true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_149, 0.0328f, -0.8f, 0.3f) };
		flag = false;
		_STOPWATCH_DESTROY(&uLocal_145);
	
		if (func_7(0, &unk))
		{
			while (!flag)
			{
				func_296(0);
			
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_145))
					func_306(&uLocal_145, false, false);
				else if (func_303(&uLocal_145, 4000, false))
					flag = true;
			
				if (!func_239(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0.05f, false) && !func_289(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 5f))
					if (!func_237(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), offsetFromEntityInWorldCoords, 1f, 5000, ENTITY::GET_ENTITY_HEADING(obLocal_149), 0.25f);
				else
					flag = true;
			
				GRAPHICS::DRAW_DEBUG_SPHERE(offsetFromEntityInWorldCoords, 0.1f, 255, 0, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(offsetFromEntityInWorldCoords, ENTITY::GET_ENTITY_COORDS(obLocal_149, true), 0, 255, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0, 0, 255, 255);
				BUILTIN::WAIT(0);
			}
		
			_STOPWATCH_DESTROY(&uLocal_145);
			iLocal_150 = 0;
		}
	}

	while (iLocal_150 != 3)
	{
		func_236(obLocal_149);
		func_296(0);
		BUILTIN::WAIT(0);
	}

	return;
}

void func_236(Object obParam0) // Position - 0x5707 (22279)
{
	var animDict;
	var animDict2;
	var animDict3;
	char* animnName;
	int endRange;
	int localSceneFromNetworkId;
	int randomIntInRange;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!func_305(PLAYER::PLAYER_ID()) && !func_304(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam0))
		return;

	func_7(0, &animDict);
	func_7(1, &animDict2);
	func_7(2, &animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict3);
	STREAMING::REQUEST_ANIM_DICT(&animDict);
	animnName = "idle_a";
	endRange = 1;

	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("MP_F_Freemode_01"))
		endRange = 1;

	switch (iLocal_150)
	{
		case 0:
			bLocal_142 = false;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
						iLocal_151 = -1;
					}
				
					iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
					STREAMING::REMOVE_ANIM_DICT(&animDict);
					iLocal_150 = 1;
				}
			}
			break;
	
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&animDict2);
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
		
			if (!bLocal_142)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					bLocal_142 = true;
				}
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.96f)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
			
				if (MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_a") && randomIntInRange == 0 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_b") && randomIntInRange == 1 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_c") && randomIntInRange == 2 || MISC::ARE_STRINGS_EQUAL(&uLocal_158, "idle_d") && randomIntInRange == 3)
				{
					randomIntInRange = randomIntInRange + 1;
				
					if (randomIntInRange >= endRange)
						randomIntInRange = 0;
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
			
				switch (randomIntInRange)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_a", 16);
						iLocal_150 = 3;
						break;
				
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_b", 16);
						iLocal_150 = 3;
						break;
				
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_c", 16);
						iLocal_150 = 3;
						break;
				
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_d", 16);
						iLocal_150 = 3;
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uLocal_158, "idle_XXX", 16);
						break;
				}
			}
			break;
	
		case 3:
			bLocal_142 = false;
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_a", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_b", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_c", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &animDict2, "idle_d", 2))
				GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
			else
				GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 256, 64, 64, 64);
		
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
		
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_151);
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					PED::SET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId, 0f);
			
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
				iLocal_150 = 3;
				return;
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.99f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_151))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_151);
					iLocal_151 = -1;
				}
			
				iLocal_151 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_155, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_151, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_151);
				iLocal_150 = 3;
				return;
			}
			break;
	}

	return;
}

BOOL func_237(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x5C51 (23633)
{
	if (func_238(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_238(Ped pedParam0) // Position - 0x5C84 (23684)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_239(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x5CA4 (23716)
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

BOOL func_240() // Position - 0x5D1F (23839)
{
	if (!func_8(Global_2673271.f_4.f_16))
		return false;

	return IS_BIT_SET(Global_1950198.f_751, 30);
}

BOOL func_241() // Position - 0x5D45 (23877)
{
	if (func_304(Global_2673271.f_4.f_16))
		if (IS_BIT_SET(Global_1950198.f_751, 0) || IS_BIT_SET(Global_1950198.f_751, 2))
			return 1;

	return 0;
}

BOOL func_242() // Position - 0x5D7C (23932)
{
	if (func_305(Global_2673271.f_4.f_16))
		if (IS_BIT_SET(Global_1950198.f_751, 0) || IS_BIT_SET(Global_1950198.f_751, 2))
			return true;

	return false;
}

BOOL func_243() // Position - 0x5DB3 (23987)
{
	if (func_228(PLAYER::PLAYER_ID()))
		return false;

	if (func_277())
		return false;

	if (func_274())
		return false;

	if (func_291(PLAYER::PLAYER_ID()))
		return true;
	else if (func_233() < func_232())
		return true;

	return false;
}

BOOL func_244(int iParam0, BOOL bParam1) // Position - 0x5E02 (24066)
{
	int num;

	num = func_245(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_288(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_45643[num /*32*/] == true && Global_45643[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_45643[num /*32*/].f_29)
					return false;
		
			Global_45643[num /*32*/].f_5 = 1;
			Global_45643[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45643[num /*32*/] == false;
			Global_45643[num /*32*/].f_7;
		}
	}

	return false;
}

int func_245(int iParam0) // Position - 0x5EBA (24250)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45643[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_246(BOOL bParam0) // Position - 0x5EF5 (24309)
{
	if (func_240() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_247() && !Global_1950053)
		_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 2, "ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/, 0, 0, 0, 0);

	return;
}

BOOL func_247() // Position - 0x5F35 (24373)
{
	return Global_1950198.f_764;
}

void func_248(BOOL bParam0) // Position - 0x5F44 (24388)
{
	if (func_270(PLAYER::PLAYER_ID()) && func_256(PLAYER::PLAYER_ID()) == func_255(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_247() && !Global_1950053)
	{
		if (func_252())
		{
			func_251("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_233() >= func_232())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_228(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_70(PLAYER::PLAYER_ID()))
		{
			func_251("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_303(&uLocal_143, 10000, true) || !bLocal_140)
		{
			if (func_249(PLAYER::PLAYER_ID()) || Global_1950053 == true)
			{
				bLocal_140 = true;
			
				if (!Global_1950053)
					func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_266())
					HUD::CLEAR_HELP(true);
			
				bLocal_140 = false;
				_STOPWATCH_DESTROY(&uLocal_143);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_140)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_249(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_140 = false;
			}
		}
	}

	return;
}

BOOL func_249(Player plParam0) // Position - 0x60B9 (24761)
{
	return func_250(func_88(plParam0));
}

BOOL func_250(ePedComponentType epctParam0) // Position - 0x60CB (24779)
{
	switch (epctParam0)
	{
		case 178:
		case 188:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_251(char* sParam0) // Position - 0x60EB (24811)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_252() // Position - 0x6101 (24833)
{
	if (Global_1950058)
		return false;

	return func_253();
}

BOOL func_253() // Position - 0x6118 (24856)
{
	if (func_254())
		return true;

	return Global_2685150.f_746;
}

BOOL func_254() // Position - 0x6132 (24882)
{
	return Global_1575043 == 10;
}

ePedComponentType func_255(Player plParam0) // Position - 0x6141 (24897)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return PV_COMP_HEAD;

	return Global_1845250[plParam0 /*880*/].f_260.f_156;
}

ePedComponentType func_256(ePedComponentType epctParam0) // Position - 0x6164 (24932)
{
	if (func_270(epctParam0))
		return func_257(Global_2658291[epctParam0 /*468*/].f_325.f_8);

	return PV_COMP_HEAD;
}

ePedComponentType func_257(ePedComponentType epctParam0) // Position - 0x618B (24971)
{
	switch (epctParam0)
	{
		case 60:
			return 1;
	
		case 61:
			return 2;
	
		case 62:
			return 3;
	
		case 63:
			return 4;
	
		case 64:
			return 5;
	
		case 65:
			return 6;
	
		case 66:
			return 7;
	
		case 67:
			return 8;
	
		case 68:
			return 9;
	
		case 69:
			return 10;
	}

	return 0;
}

void func_258(BOOL bParam0) // Position - 0x6220 (25120)
{
	if (func_269(PLAYER::PLAYER_ID()) || func_241() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_247() && !Global_1950053 && func_289(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_149), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		}
		else if (func_252())
		{
			if (func_269(PLAYER::PLAYER_ID()))
				func_251("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/);
			else
				func_251("BIKERWHBLCKD" /*Join a public session to manage your Business*/);
		}
		else if (func_70(PLAYER::PLAYER_ID()))
		{
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_303(&uLocal_143, 10000, true) || !bLocal_140)
			{
				if (func_259(PLAYER::PLAYER_ID()) || Global_1950053 == true)
				{
					bLocal_140 = true;
				
					if (!Global_1950053)
						func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
				}
				else
				{
					if (func_266())
						HUD::CLEAR_HELP(true);
				
					bLocal_140 = false;
					_STOPWATCH_DESTROY(&uLocal_143);
					_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/, 0, 0, 0, 0);
				}
			}
			else if (bLocal_140)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			
				if (!func_259(PLAYER::PLAYER_ID()))
				{
					bLocal_140 = false;
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (!bParam0 && func_233() < func_232())
		{
			_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/, 0, 0, 0, 0);
		}
		else
		{
			func_251("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/);
		}
	}

	return;
}

BOOL func_259(Player plParam0) // Position - 0x638F (25487)
{
	return func_260(func_88(plParam0));
}

BOOL func_260(ePedComponentType epctParam0) // Position - 0x63A1 (25505)
{
	switch (epctParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_261() // Position - 0x63C7 (25543)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
	{
		if (func_263(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_304(PLAYER::PLAYER_ID()) || func_262(PLAYER::PLAYER_ID()))
			return true;
	}

	return false;
}

BOOL func_262(Player plParam0) // Position - 0x6405 (25605)
{
	if (func_271(Global_1845250[plParam0 /*880*/].f_260.f_39, -1))
		return 1;

	return 0;
}

BOOL func_263(ePedComponentType epctParam0) // Position - 0x6428 (25640)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID && Global_2658291[epctParam0 /*468*/].f_325.f_11 != _INVALID_PLAYER_INDEX())
				return func_9(Global_2658291[epctParam0 /*468*/].f_325.f_8) == 25;

	return false;
}

void func_264(BOOL bParam0) // Position - 0x6488 (25736)
{
	if (func_242() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_247() && !Global_1950053)
	{
		if (func_252())
		{
			func_251("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_233() >= func_232())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_228(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_70(PLAYER::PLAYER_ID()))
		{
			func_251("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_143) && func_303(&uLocal_143, 10000, true) || !bLocal_140)
		{
			if (func_308(PLAYER::PLAYER_ID()) || Global_1950053 == true)
			{
				bLocal_140 = true;
			
				if (!Global_1950053)
					func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_266())
					HUD::CLEAR_HELP(true);
			
				bLocal_140 = false;
				_STOPWATCH_DESTROY(&uLocal_143);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_138, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_140)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_251("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_308(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_140 = false;
			}
		}
	}

	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x65E3 (26083)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_268(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_45643[i /*32*/])
		{
			Global_45643[i /*32*/] = true;
			Global_45643[i /*32*/].f_1 = Global_45844;
			Global_45844 = Global_45844 + 1;
			Global_45643[i /*32*/].f_4 = 0;
			Global_45643[i /*32*/].f_29 = 0;
			Global_45643[i /*32*/].f_5 = 0;
			Global_45643[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45643[i /*32*/].f_8), sParam2, 16);
			Global_45643[i /*32*/].f_6 = iParam3;
			Global_45643[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45643[i /*32*/].f_7 = 0;
			Global_45643[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45643[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45643[i /*32*/].f_13), sParam4, 64);
				Global_45643[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45643[i /*32*/].f_12 = 0;
				Global_45643[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45643[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_266() // Position - 0x670E (26382)
{
	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_OFF_LAP_1" /*Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHSECUROBLCK" /*This computer is unavailable during a mission.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKD" /*Join a public session to manage your Business*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/))
		return true;

	return false;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x67B2 (26546)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_268(var uParam0) // Position - 0x67C5 (26565)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_245(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_45643[num /*32*/])
		{
			Global_45643[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_269(Player plParam0) // Position - 0x681C (26652)
{
	if (func_271(Global_1845250[plParam0 /*880*/].f_260.f_39, -1) && !IS_BIT_SET(Global_1845250[plParam0 /*880*/].f_260.f_37, 1))
		return 1;

	return 0;
}

BOOL func_270(ePedComponentType epctParam0) // Position - 0x6855 (26709)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_9(Global_2658291[epctParam0 /*468*/].f_325.f_8) == 1;

	return false;
}

BOOL func_271(ePedComponentType epctParam0, int iParam1) // Position - 0x689B (26779)
{
	if (iParam1 == -1)
	{
		switch (epctParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (epctParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (epctParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_272(ePedComponentType epctParam0) // Position - 0x6978 (27000)
{
	switch (epctParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_273() // Position - 0x69A7 (27047)
{
	return Global_79056;
}

BOOL func_274() // Position - 0x69B3 (27059)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_234(PLAYER::PLAYER_ID(), true) && func_83(PLAYER::PLAYER_ID(), false) && func_73(PLAYER::PLAYER_ID()))
	{
		if (func_88(PLAYER::PLAYER_ID()) == 256)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0))
				return true;
	
		if (func_88(PLAYER::PLAYER_ID()) == 271)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.8796f, -528.8513f, 75.0839f, -1472.6295f, -526.5934f, 73.3136f, false, true, 0))
				return true;
			else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.4672f, -3167.9465f, -37.5246f, 1006.9028f, -3171.1516f, -39.6192f, false, true, 0))
				return true;
	
		if (func_275(*Global_4718592.f_132500) == 5)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 571.1f, -3123.7f, 19.8f, 567.1f, -3128.7f, 17.8f, false, true, 0))
				return true;
	}

	return false;
}

int func_275(int iParam0) // Position - 0x6AE1 (27361)
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_276(i))
			return i;
	}

	return -1;
}

int func_276(int iParam0) // Position - 0x6B0C (27404)
{
	if (iParam0 != -1)
		return Global_262145.f_33076[iParam0];

	return -1;
}

BOOL func_277() // Position - 0x6B2B (27435)
{
	return IS_BIT_SET(Global_1950198.f_11, 1);
}

BOOL func_278() // Position - 0x6B3B (27451)
{
	if (func_280(PLAYER::PLAYER_ID()) == 150 && func_279(PLAYER::PLAYER_PED_ID(), 3084.5112f, -4686.664f, 26.2522f, 50f, true))
		return true;

	return false;
}

BOOL func_279(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x6B78 (27512)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), fParam1) <= fParam4 * fParam4;
}

ePedComponentType func_280(Player plParam0) // Position - 0x6B96 (27542)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1892653[player /*615*/];

	return PV_COMP_INVALID;
}

int func_281(Player plParam0) // Position - 0x6BB5 (27573)
{
	if (func_88(plParam0) == 243)
		return func_82(plParam0);

	return -1;
}

BOOL func_282() // Position - 0x6BD2 (27602)
{
	return func_291(PLAYER::PLAYER_ID());
}

BOOL func_283() // Position - 0x6BE2 (27618)
{
	return Global_1845250[PLAYER::PLAYER_ID() /*880*/] == 148;
}

BOOL func_284() // Position - 0x6BF8 (27640)
{
	return Global_77343;
}

BOOL func_285() // Position - 0x6C04 (27652)
{
	return Global_1935522;
}

BOOL func_286() // Position - 0x6C10 (27664)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
			return true;

	return false;
}

BOOL func_287() // Position - 0x6C3E (27710)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_288(int iParam0) // Position - 0x6C58 (27736)
{
	if (iParam0 == 1)
		if (Global_21610.f_1 > 3)
			if (IS_BIT_SET(Global_9463, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21610.f_1 > 3)
		return true;

	return false;
}

BOOL func_289(float fParam0, float fParam1, float fParam2) // Position - 0x6CAF (27823)
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
			return 1;
	else if (fParam0 < num || fParam0 > num2)
		return 1;

	return 0;
}

BOOL func_290() // Position - 0x6D24 (27940)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		if (func_305(PLAYER::PLAYER_ID()))
			return 1;

	return 0;
}

BOOL func_291(ePedComponentType epctParam0) // Position - 0x6D45 (27973)
{
	if (func_67(epctParam0))
		if (func_67(Global_1892653[epctParam0 /*615*/].f_10))
			return Global_1892653[epctParam0 /*615*/].f_10 == epctParam0;

	return false;
}

BOOL func_292() // Position - 0x6D7A (28026)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149) && func_8(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_293() // Position - 0x6D9D (28061)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149) && func_270(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_294(Player plParam0) // Position - 0x6DC0 (28096)
{
	if (func_271(Global_1845250[plParam0 /*880*/].f_260.f_39, -1))
		return 1;

	return 0;
}

BOOL func_295() // Position - 0x6DE3 (28131)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_149))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_149) == joaat("ex_prop_monitor_01_ex") || func_305(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_296(int iParam0) // Position - 0x6E16 (28182)
{
	if (func_301())
		return;

	if (!(Global_21610.f_1 == 1))
	{
		if (func_288(0))
			func_297(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}

	return;
}

void func_297(int iParam0) // Position - 0x6E49 (28233)
{
	if (func_301())
		return;

	if (Global_21842)
		if (func_300())
			func_299(true, true);
		else
			func_299(false, false);

	if (Global_21610.f_1 == 10 || Global_21610.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22983 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_298())
		Global_21610.f_1 = 3;

	return;
}

BOOL func_298() // Position - 0x6ED3 (28371)
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
		return true;

	return false;
}

void func_299(BOOL bParam0, BOOL bParam1) // Position - 0x6EFA (28410)
{
	if (bParam0)
	{
		if (func_288(0))
		{
			Global_21842 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21547);
		
			Global_21538 = { Global_21556[Global_21555 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
		}
	}
	else if (Global_21842 == true)
	{
		Global_21842 = false;
		Global_21538 = { Global_21563[Global_21555 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21547);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21538);
	}

	return;
}

BOOL func_300() // Position - 0x6F6E (28526)
{
	return IS_BIT_SET(Global_1964145, 5);
}

BOOL func_301() // Position - 0x6F7C (28540)
{
	return IS_BIT_SET(Global_1964145, 19);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6F8B (28555)
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_303(var uParam0, int iParam1, BOOL bParam2) // Position - 0x6F98 (28568)
{
	if (iParam1 == -1)
		return true;

	func_306(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL func_304(ePedComponentType epctParam0) // Position - 0x6FF6 (28662)
{
	int num;

	if (epctParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
		{
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
			{
				num = func_9(Global_2658291[epctParam0 /*468*/].f_325.f_8);
				return num == 2 || num == 25;
			}
		}
	}

	return false;
}

BOOL func_305(ePedComponentType epctParam0) // Position - 0x704B (28747)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_9(Global_2658291[epctParam0 /*468*/].f_325.f_8) == 0;

	return false;
}

void func_306(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7091 (28817)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x70D6 (28886)
{
	return uParam0->f_1;
}

BOOL func_308(Player plParam0) // Position - 0x70E2 (28898)
{
	return func_309(func_88(plParam0));
}

BOOL func_309(ePedComponentType epctParam0) // Position - 0x70F4 (28916)
{
	switch (epctParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_310(int iParam0) // Position - 0x711A (28954)
{
	return Global_44869 == iParam0;
}

void func_311() // Position - 0x7128 (28968)
{
	if (iLocal_138 != -1)
		func_268(&iLocal_138);

	if (func_266())
		HUD::CLEAR_HELP(true);

	Global_1950053 = false;
	Global_1950052 = false;
	return;
}

