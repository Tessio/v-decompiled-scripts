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
	var uLocal_94 = -1;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = -2;
	var uLocal_104 = -2;
	var uLocal_105 = -2;
	var uLocal_106 = 5;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 2;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 2;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
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
	int iLocal_134 = 0;
	BOOL bLocal_135 = 0;
	BOOL bLocal_136 = 0;
	BOOL bLocal_137 = 0;
	BOOL bLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	Object obLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	Object obScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	iLocal_134 = -1;
	uLocal_148 = { 0f, 0f, 0f };
	obLocal_145 = obScriptParam_0;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_145))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_300(13) || func_300(14))
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_39518)
	{
		func_301();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (Global_76751)
		SCRIPT::TERMINATE_THIS_THREAD();

	flag = false;
	name = "tvscreen";
	sizeAndPeds = 25;
	flag2 = true;
	vector = { ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true) - (ENTITY::GET_ENTITY_FORWARD_VECTOR(obScriptParam_0) * { 0.6f, 0.6f, 0.6f }) };
	vector.f_2 = vector.f_2 + 0.5f;
	uLocal_151 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obScriptParam_0, uLocal_148) };
	Global_1943777 = 0;
	Global_1943773 = false;
	Global_1943885 = 0;

	while (flag2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_145))
		{
			if (bLocal_136)
				if (!func_298(PLAYER::PLAYER_ID()))
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_139))
						_STOPWATCH_INITIALIZE(&uLocal_139, true, false);
		
			if (Global_1943773 && func_295(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()))
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_143))
				{
					_STOPWATCH_INITIALIZE(&uLocal_143, false, false);
				}
				else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_143, 10000, false))
				{
					_STOPWATCH_DESTROY(&uLocal_143);
					Global_1943773 = false;
				}
			
				func_286(0);
			}
		
			if (Global_1845065)
			{
				if (!flag)
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_145);
				
					if (entityModel == joaat("prop_laptop_01a"))
					{
						ENTITY::CREATE_MODEL_HIDE(ENTITY::GET_ENTITY_COORDS(obScriptParam_0, true), 1f, joaat("prop_laptop_01a"), false);
						entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_145, 2) };
						obLocal_145 = OBJECT::CREATE_OBJECT(joaat("prop_laptop_lester2"), ENTITY::GET_ENTITY_COORDS(obLocal_145, true), false, true, false);
						ENTITY::SET_ENTITY_ROTATION(obLocal_145, entityRotation, 2, true);
						flag = true;
					}
				}
			}
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obLocal_145, 0))
			{
				func_301();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(obLocal_145) && !CUTSCENE::IS_CUTSCENE_PLAYING() && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_145))
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
			
				if (func_285() || func_284(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()) || func_283())
					vector2 = { 1f, 1f, 0.9f };
				else if (func_282())
					vector2 = { 0.75f, 0.55f, 1.25f };
			
				flag4 = func_281(PLAYER::PLAYER_ID());
				flag5 = true;
			
				if (func_282() || func_280())
					flag5 = func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_145), 90f);
			
				if (!flag3 && !Global_33358 && !func_278(0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !func_277() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vector, vector2, false, true, 1) && INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_ROOM_KEY_FROM_ENTITY(obLocal_145) && !IS_BIT_SET(Global_2621446, 15) && !func_276() && !(Global_79539 && func_275()) && !(!Global_79539 && func_274()) && !(Global_79539 && IS_BIT_SET(Global_4718592.f_14, 24) && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !(Global_79539 && func_273() && func_272()) && !(Global_79539 && func_271(PLAYER::PLAYER_ID()) == 5) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !Global_78303 && !func_268() && !func_267() && flag5 && !func_264() && !func_263())
				{
					if (!func_262(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_36) && !func_261(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_36, -1) && !func_260(PLAYER::PLAYER_ID()))
					{
						if (bLocal_137 != flag4)
						{
							if (func_295(PLAYER::PLAYER_ID()) || func_259(PLAYER::PLAYER_ID()) || func_294(PLAYER::PLAYER_ID()))
							{
								if (iLocal_134 != -1)
									_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
							
								if (func_256())
									HUD::CLEAR_HELP(true);
							}
						}
					
						bLocal_137 = flag4;
					
						if (iLocal_134 == -1)
							if (flag)
								_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "MPLA_BILL" /*Unable to use the laptop until utility charge is paid.*/, 0, 0, 0, 0);
							else if (func_285())
								func_254(flag4);
							else if (func_251())
								func_248(flag4);
							else if (func_283())
								func_238(flag4);
							else if (func_282())
								func_236(flag4);
							else
								_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "BROWSEINPUTTRIG" /*Press ~INPUT_CONTEXT~ to browse the internet on this computer.*/, 0, 0, 0, 0);
					}
				
					if (iLocal_134 != -1 && func_234(iLocal_134, true) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_233())
					{
						if (iLocal_134 != -1)
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
					
						if (!flag)
						{
							if (func_232() || func_231() || func_230())
								func_225();
						
							if (func_285())
							{
								func_30(0, flag4);
								func_29(0, 1);
							}
							else if (func_283())
							{
								func_30(0, flag4);
								func_29(0, 3);
							}
							else if (func_251())
							{
								func_30(1, flag4);
								func_29(0, 2);
							}
							else if (func_282())
							{
								func_29(8, 0);
							}
							else
							{
								func_29(0, 0);
							}
						
							if (!bLocal_135)
							{
								func_22();
								bLocal_135 = true;
							}
						
							flag6 = true;
						
							if (func_232() || func_231() || func_230())
							{
								_STOPWATCH_RESET(&uLocal_141, false, false);
							
								while (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_141, 500, false))
								{
									func_286(0);
									SYSTEM::WAIT(0);
								}
							
								_STOPWATCH_DESTROY(&uLocal_141);
							}
						
							while (flag6)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(obLocal_145) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(obLocal_145, true), 1.5f, 1.5f, 4f, false, true, 1))
									Global_76643 = true;
							
								if (func_232() || func_231() || func_260(PLAYER::PLAYER_ID()) || func_230())
									if (!func_20() && !Global_78303)
										flag6 = false;
								else if (func_20() || Global_76643)
									flag6 = false;
							
								if (func_232())
									func_286(0);
							
								SYSTEM::WAIT(0);
							}
						
							if (func_232() || func_231() || func_230())
								func_6();
						
							func_286(0);
							_STOPWATCH_DESTROY(&uLocal_143);
							bLocal_135 = false;
						}
					}
					else if (iLocal_134 != -1 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) && func_233() && func_230())
					{
						if (iLocal_134 != -1)
						{
							_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
							func_5();
						}
					
						func_225();
						MISC::SET_BIT(&(Global_1943917.f_4), 28);
					
						while (IS_BIT_SET(Global_1943917.f_4, 28))
						{
							SYSTEM::WAIT(0);
						}
					
						func_6();
						func_4();
						func_286(0);
					}
				}
				else
				{
					if (iLocal_134 != -1)
						_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
				
					if (func_295(PLAYER::PLAYER_ID()) || func_259(PLAYER::PLAYER_ID()))
						if (func_256())
							HUD::CLEAR_HELP(true);
				
					if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
						if (func_1())
							flag2 = false;
				}
			}
			else if (iLocal_134 != -1)
			{
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
			}
		}
		else
		{
			if (iLocal_134 != -1)
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);
		
			flag2 = false;
		}
	
		SYSTEM::WAIT(0);
	}

	if (flag)
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(name))
			HUD::RELEASE_NAMED_RENDERTARGET(name);

	return;
}

BOOL func_1() // Position - 0x885 Hash - 0xF14E8488 ^0xA990037B
{
	Hash entityModel;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_145);
	
		if (func_3(entityModel))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				entityCoords2 = { ENTITY::GET_ENTITY_COORDS(obLocal_145, true) };
				return SYSTEM::VDIST2(entityCoords, entityCoords2) > 10000f;
			}
		}
		else
		{
			return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_145);
		}
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x8ED Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_3(Hash hParam0) // Position - 0x90E Hash - 0xAD766E45 ^0x5748B4EC
{
	if (hParam0 == joaat("prop_laptop_lester"))
		return true;

	return false;
}

void func_4() // Position - 0x925 Hash - 0x33AC001D ^0x2671C198
{
	if (Global_2672939.f_1023.f_10)
		Global_2672939.f_1023.f_10 = 0;

	return;
}

void func_5() // Position - 0x943 Hash - 0xD39EBC16 ^0xE54D0827
{
	if (!Global_2672939.f_1023.f_10)
		Global_2672939.f_1023.f_10 = 1;

	return;
}

void func_6() // Position - 0x962 Hash - 0x3F5F549D ^0x14AC8449
{
	var animDict;

	if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(obLocal_145))
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
					if (iLocal_146 != 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_147);
							iLocal_147 = -1;
						}
					
						iLocal_147 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_151, ENTITY::GET_ENTITY_ROTATION(obLocal_145, 2), 2, false, false, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict, "exit", 8f, -4f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
						STREAMING::REMOVE_ANIM_DICT(&animDict);
					}
				}
			}
		}
	}

	Global_1943772 = false;
	return;
}

BOOL func_7(int iParam0, char* sParam1) // Position - 0xA56 Hash - 0xF60DF950 ^0x999AC753
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

	if (!func_295(PLAYER::PLAYER_ID()) && !func_294(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam1, "", 64);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam1, "anim@amb@warehouse@laptop@", 64);
	return true;
}

BOOL func_8(ePedComponentType epctParam0) // Position - 0xABE Hash - 0x796267EB ^0x3C8CE6D9
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657991[epctParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2657991[epctParam0 /*467*/].f_324.f_8) == 13;

	return false;
}

int func_9(Hash hParam0) // Position - 0xB05 Hash - 0xEE599357 ^0xEE599357
{
	switch (hParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1021 Hash - 0x3FF6E4CA ^0xE6B59972
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
				if (type == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[type /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1081 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x108A Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575056 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_19())
		return true;

	if (Global_2699004)
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x110E Hash - 0x90B5165C ^0xB8DD5DC8
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

Hash func_14() // Position - 0x1141 Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

int func_15() // Position - 0x1165 Hash - 0x21D64237 ^0x21D64237
{
	return Global_33087;
}

BOOL func_16() // Position - 0x1170 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x117F Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_18() // Position - 0x1196 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2696416;
}

BOOL func_19() // Position - 0x11A2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_695;
}

BOOL func_20() // Position - 0x11B1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76640;
}

void _STOPWATCH_RESET(int pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x11BD Hash - 0x6A4AB354 ^0xD9372BF4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

void func_22() // Position - 0x11FA Hash - 0x35BBF2A0 ^0x35BBF2A0
{
	if (func_28() || func_27())
	{
		func_26();
		func_23();
	}

	return;
}

void func_23() // Position - 0x121B Hash - 0x4E2E9530 ^0x3532C79A
{
	if (!_IS_FMMC_ACTIVE() && !func_24() && Global_2685657)
		Global_4718592.f_128476 = 0;

	return;
}

BOOL func_24() // Position - 0x1249 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x1258 Hash - 0x9A79549B ^0x4A0EF303
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_193 != 0;
}

void func_26() // Position - 0x126F Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_2684718.f_758 = 1;
	return;
}

BOOL func_27() // Position - 0x127F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_737;
}

BOOL func_28() // Position - 0x128E Hash - 0xEDAE0057 ^0x5A1A7786
{
	return IS_BIT_SET(Global_2684718.f_2, 11);
}

void func_29(int iParam0, int iParam1) // Position - 0x129F Hash - 0x73CB6EFA ^0x73CB6EFA
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	Global_76754 = iParam0;
	flag = iParam1 == 1;
	flag2 = iParam1 == 2;
	flag3 = iParam1 == 3;

	switch (Global_76754)
	{
		case 3:
			Global_76752 = 0;
			break;
	
		case 4:
			Global_76752 = 3;
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

	if (Global_79539 && func_275())
		return;

	if (!Global_79539 && func_274())
		return;

	if (Global_79539)
	{
		Global_76605 = iParam1;
	}
	else if (flag)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
			SCRIPT::REQUEST_SCRIPT("appSecuroServ");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appSecuroServ"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appSecuroServ");
	}
	else if (flag2)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
			SCRIPT::REQUEST_SCRIPT("appBikerBusiness");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appBikerBusiness"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appBikerBusiness");
	}
	else if (flag3)
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
			SCRIPT::REQUEST_SCRIPT("appImportExport");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appImportExport"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appImportExport", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appImportExport");
	}
	else
	{
		if (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
			SCRIPT::REQUEST_SCRIPT("appInternet");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("appInternet"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("appInternet", APP_INTERNET);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("appInternet");
	}

	return;
}

void func_30(int iParam0, BOOL bParam1) // Position - 0x147F Hash - 0x2BB55921 ^0x2179F839
{
	if (!bParam1 && !func_224(PLAYER::PLAYER_ID(), true) && func_223() < func_222() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_218(PLAYER::PLAYER_ID()))
		func_31(true, iParam0, 375994962);

	return;
}

void func_31(BOOL bParam0, int iParam1, int iParam2) // Position - 0x14CE Hash - 0xB814131E ^0x37924B88
{
	var unk;

	func_132(true, true, iParam1, iParam2);

	if (bParam0)
	{
		if (func_131(91) || func_131(98))
			func_128();
	
		func_107();
		func_106(17);
		unk.f_3 = 514341487;
		unk.f_4 = iParam1;
	
		if (func_105(PLAYER::PLAYER_ID()) && iParam1 == 0)
			unk.f_4 = 100;
	
		func_103(unk, _GET_LOBBY_SCRIPT_EVENT_BITS(false, true));
		func_58();
	
		if (!func_105(PLAYER::PLAYER_ID()) && iParam1 != 1)
			_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_GANGAPP_SECUROSERV, "GB_TXTMSG_INIT2" /*Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits.*/, 2, 0, 0, 0, 0, true, 0, 1);
	}

	return;
}

int _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0x156A Hash - 0x2EDA5ECE ^0x16D5CF7
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_8919, 10);
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
			Global_9643 = iParam6;
			Global_9546[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9623 = echParam0;
			MISC::SET_BIT(&Global_8919, 1);
			MISC::SET_BIT(&Global_8919, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x15F9 Hash - 0x5D6A4A13 ^0x32291975
{
	return Global_2201[character /*29*/].f_3;
}

int func_34(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x160C Hash - 0x56140E21 ^0x6722A9E7
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
			if (Global_21066 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_21066 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_21066 == CHAR_FRANKLIN)
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
	
		if (Global_114135.f_14055[Global_21066 /*20*/].f_17 == true)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_50() == 0)
	{
		func_48();
		return 0;
	}

	func_47(Global_23492);
	TEXT_LABEL_ASSIGN_STRING(&Global_114135.f_14145[Global_23492 /*104*/], sParam1, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114135.f_14145[Global_23492 /*104*/].f_24 = iParam2;
	}

	Global_114135.f_14145[Global_23492 /*104*/].f_25 = iParam7;
	Global_114135.f_14145[Global_23492 /*104*/].f_26 = iParam8;
	Global_114135.f_14145[Global_23492 /*104*/].f_29 = iParam9;
	Global_114135.f_14145[Global_23492 /*104*/].f_30 = iParam12;
	Global_114135.f_14145[Global_23492 /*104*/].f_31 = iParam11;
	Global_114135.f_14145[Global_23492 /*104*/].f_28 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_14145[Global_23492 /*104*/].f_33), sParam4, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_14145[Global_23492 /*104*/].f_50), sParam5, 64);
	Global_114135.f_14145[Global_23492 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_14145[Global_23492 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_114135.f_14145[Global_23492 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8919, 10))
	{
		Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = true;
		Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = true;
		Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = true;
		Global_9642 = 4;
		func_46(0);
		func_46(2);
		func_46(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[Global_21066] = true;
				break;
		
			case 0:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = true;
				break;
		
			case 2:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = true;
				break;
		
			case 1:
				Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = true;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_21066)
			{
				case CHAR_MICHAEL:
					func_46(0);
					Global_9642 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_46(1);
					Global_9642 = 1;
					break;
			
				case CHAR_TREVOR:
					func_46(2);
					Global_9642 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_46(3);
					Global_9642 = 3;
					break;
			
				default:
					Global_9642 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8919, 10))
		{
			Global_114135.f_14055[0 /*20*/].f_17 = 1;
			Global_114135.f_14055[1 /*20*/].f_17 = 1;
			Global_114135.f_14055[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114135.f_14055[Global_21066 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_114135.f_14055[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_114135.f_14055[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_114135.f_14055[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23494[Global_23492] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21009)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21066)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_21055, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_45())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21055, true);
	}

	if (!Global_21285 && !IS_BIT_SET(Global_8921, 9))
	{
		if (Global_21066.f_1 == 6)
		{
			func_44(Global_21047, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_40(1);
			func_44(Global_21047, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21046), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1972247 != -1 && echParam0 == Global_1972247)
		num2 = 1;

	func_35(echParam0, sParam1, num2, func_39(PLAYER::PLAYER_ID()));
	return 1;
}

void func_35(eCharacter echParam0, char* sParam1, BOOL bParam2, ePedComponentType epctParam3) // Position - 0x1AEF Hash - 0x8EDEEA2A ^0x9CE88A61
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
	character.f_6 = Global_1972230.f_7;
	character.f_7 = Global_1972230.f_8;
	character.f_8 = Global_1972230.f_9;
	character.f_9 = Global_1972230.f_10;
	character.f_10 = Global_1972230.f_11;
	character.f_11 = Global_1972230.f_12;
	character.f_12 = Global_1972230.f_13;
	character.f_13 = Global_1972230.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1972247 = -1;

	return;
}

BOOL func_36() // Position - 0x1B8A Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79539)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_37(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_37(ePedComponentType epctParam0) // Position - 0x1BED Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_38(epctParam0, 20);
}

BOOL func_38(ePedComponentType epctParam0, int iParam1) // Position - 0x1BFD Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887549[epctParam0 /*611*/].f_10.f_4, iParam1);
}

ePedComponentType func_39(Player plParam0) // Position - 0x1C15 Hash - 0xD56839EF ^0xE2816EA0
{
	return Global_1845221[plParam0 /*889*/].f_206.f_6;
}

void func_40(int iParam0) // Position - 0x1C2A Hash - 0x237C6068 ^0x694D87FA
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

	Global_23493 = 0;
	Global_9541 = iParam0;
	func_43();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_300(14))
		{
			while (num < 35)
			{
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == false)
						{
							Global_9467[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value = 42;
									Global_21288 = 1;
								}
								else
								{
									value = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696411)
								if (num == 14)
									func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
						
							Global_9504[i] = true;
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
				if (iParam0 == Global_8926[num /*15*/].f_11)
				{
					if (i == Global_8926[num /*15*/].f_4)
					{
						if (Global_9504[i] == false)
						{
							Global_9467[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_114135.f_14145[j /*104*/].f_24 != 0)
										if (Global_114135.f_14145[j /*104*/].f_28 == 0)
											if (Global_114135.f_14145[j /*104*/].f_99[Global_21066] == true)
												Global_23493 = Global_23493 + 1;
								}
							
								func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23493), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79539)
								{
									value2 = 0;
									value2 = Global_4542452;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4542454[k /*296*/].f_24 != 0)
											if (Global_4542454[k /*296*/].f_28 == 0)
												if (Global_4542454[k /*296*/].f_291[Global_21066] == true)
													value2 = value2 + 1;
									}
								
									func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21066)
									{
										case CHAR_MICHAEL:
											value3 = Global_45403;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45404;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45405;
											break;
									
										default:
											break;
									}
								
									func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23488), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8925);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8920, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8920, 3))
								{
									value5 = 42;
									Global_21288 = 1;
								}
								else
								{
									value5 = 255;
									Global_21288 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 24 && MISC::ARE_STRINGS_EQUAL(&Global_8926[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8920, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21047, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8926[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_42(&Global_8926[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8926[num /*15*/].f_10 == 57 && num == 24)
							{
								value6 = 0;
								value6 = Global_1882240.f_1;
								func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_41(Global_21047, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8926[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8926[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9504[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_41(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x21B1 Hash - 0x39E054FF ^0x41D02682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_42(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_42(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_42(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_42(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_42(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_42(char* sParam0) // Position - 0x2264 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_43() // Position - 0x2276 Hash - 0xA8B082D2 ^0xA8B082D2
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9504[i] = false;
	}

	return;
}

void func_44(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2299 Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_45() // Position - 0x22FC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575084;
}

void func_46(int iParam0) // Position - 0x2308 Hash - 0x82B5D42C ^0xE58ED58A
{
	var unk;
	var unk2;

	unk = Global_114135.f_14055[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_47(int iParam0) // Position - 0x2327 Hash - 0x3B4AC1F3 ^0x87B359AA
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
	Global_114135.f_14145[iParam0 /*104*/].f_18 = clockSeconds;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_4 = num;
	Global_114135.f_14145[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_48() // Position - 0x23B9 Hash - 0xC4D8B21 ^0xF60D6219
{
	int num;
	int num2;
	int num3;

	if (Global_79539)
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
	Global_23492 = 34;
	Global_114135.f_14145[Global_23492 /*104*/].f_18 = -1;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_1 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_2 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_3 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_49(Global_114135.f_14145[num3 /*104*/].f_18, Global_114135.f_14145[Global_23492 /*104*/].f_18))
			Global_23492 = num3;
	
		num3 = num3 + 1;
	}

	Global_114135.f_14145[Global_23492 /*104*/].f_24 = 1;
	return;
}

BOOL func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x2484 Hash - 0x87F973EB ^0x688F177D
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

int func_50() // Position - 0x256F Hash - 0xC20166C6 ^0x2C188830
{
	int num;
	int num2;
	int i;

	if (Global_79539)
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
		if (Global_114135.f_14145[i /*104*/].f_24 == 0)
		{
			Global_23492 = i;
			return 1;
		}
	}

	i = num;
	Global_23492 = 34;
	Global_114135.f_14145[Global_23492 /*104*/].f_18 = -1;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_1 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_2 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_3 = 0;
	Global_114135.f_14145[Global_23492 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_114135.f_14145[i /*104*/].f_24 == 0 || Global_114135.f_14145[i /*104*/].f_24 == 1)
			if (!func_49(Global_114135.f_14145[i /*104*/].f_18, Global_114135.f_14145[Global_23492 /*104*/].f_18))
				Global_23492 = i;
	
		Global_114135.f_14145[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23492 == 34)
		return 0;

	Global_114135.f_14145[Global_23492 /*104*/].f_99[0] = false;
	Global_114135.f_14145[Global_23492 /*104*/].f_99[1] = false;
	Global_114135.f_14145[Global_23492 /*104*/].f_99[2] = false;
	return 1;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x26D7 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_300(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
				Global_21066 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
				Global_21066 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
				Global_21066 = CHAR_TREVOR;
			else
				Global_21066 = CHAR_MICHAEL;
	}
	else
	{
		Global_21066 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21066 == _CHAR_NULL)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_79539)
			Global_21066 = CHAR_MULTIPLAYER;
	
		if (Global_21066 > CHAR_MULTIPLAYER)
			Global_21066 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2779 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_53();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_53() // Position - 0x2792 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_54(character) && !func_300(14) || Global_113083)
			{
				if (Global_114135.f_2367.f_539.f_4321 != character && func_54(Global_114135.f_2367.f_539.f_4321))
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
			
				Global_114135.f_2367.f_539.f_4323 = character;
				Global_114135.f_2367.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != _CHAR_NULL)
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
		
			return;
		}
	}

	Global_114135.f_2367.f_539.f_4321 = 145;
	return;
}

BOOL func_54(eCharacter echParam0) // Position - 0x288F Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x289B Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x28D8 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_54(character))
		return func_57(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_57(eCharacter echParam0) // Position - 0x28FD Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2201[echParam0 /*29*/];
}

void func_58() // Position - 0x290C Hash - 0xC78A82C6 ^0xE802F3C7
{
	if (!func_100() && func_73() && func_71(PLAYER::PLAYER_ID()))
		if (func_68())
			_THEFEED_SHOW_MESSAGE("GB_INFO_MC_L" /*There are players looking to join a MC in this session.*/, false);
		else
			_THEFEED_SHOW_MESSAGE("GB_INFO_LFG" /*There are players looking for work as Bodyguards in this session.*/, false);

	return;
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x2950 Hash - 0x1D302AB2 ^0xA49F216C
{
	int num;
	int num2;

	num = -1;
	num2 = 1;

	if (bParam1)
		num2 = 2;

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(0, sParam0, num2, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return num;
}

void func_60(int iParam0, char* sParam1, int iParam2, char* sParam3, Hash hParam4, Hash hParam5, Hash hParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x2988 Hash - 0xD30C28A6 ^0x34D37D69
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_63(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_61(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1937688.f_5[num /*53*/] = iParam0;
		Global_1937688.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1937688.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1937688.f_5[num /*53*/].f_2[0] = hParam4;
		Global_1937688.f_5[num /*53*/].f_2[1] = hParam5;
		Global_1937688.f_5[num /*53*/].f_2[2] = hParam6;
		Global_1937688.f_5[num /*53*/].f_7 = iParam7;
		Global_1937688.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1937688.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937688.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937688.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937688.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_61(int iParam0) // Position - 0x2A90 Hash - 0xA7898F03 ^0xA3D88B74
{
	int i;

	for (i = 0; i <= Global_1937688 - 1; i = i + 1)
	{
		if (iParam0 > Global_1937688.f_5[i /*53*/].f_1)
		{
			func_62(i);
			return i;
		}
	}

	Global_1937688 = Global_1937688 + 1;

	if (Global_1937688 > 5)
	{
		Global_1937688 = 5;
		return Global_1937688;
	}

	return Global_1937688 - 1;
}

void func_62(int iParam0) // Position - 0x2AF2 Hash - 0x29ABAA16 ^0xEC85F5D7
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1937688.f_5[i /*53*/] = { Global_1937688.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL func_63(ePedComponentType epctParam0, int iParam1) // Position - 0x2B2B Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_66(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_64(-1, false) == 8;
	else
		flag = Global_1845221[epctParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

int func_64(int iParam0, BOOL bParam1) // Position - 0x2B84 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_65();

	if (Global_1575064[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_65() // Position - 0x2BC5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

BOOL func_66(ePedComponentType epctParam0) // Position - 0x2BD1 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x2BF3 Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

BOOL func_68() // Position - 0x2C04 Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_69(PLAYER::PLAYER_ID());
}

BOOL func_69(ePedComponentType epctParam0) // Position - 0x2C14 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_70(epctParam0, 1);
}

BOOL func_70(ePedComponentType epctParam0, int iParam1) // Position - 0x2C23 Hash - 0xEA053375 ^0x162A414
{
	if (func_66(epctParam0))
		if (func_66(Global_1887549[epctParam0 /*611*/].f_10))
			if (Global_1887549[epctParam0 /*611*/].f_10 == epctParam0 && Global_1887549[epctParam0 /*611*/].f_10.f_431 == iParam1)
				return 1;

	return 0;
}

BOOL func_71(ePedComponentType epctParam0) // Position - 0x2C72 Hash - 0x5878327D ^0x6720E0EA
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return false;

	if (func_63(epctParam0, 0))
		return false;

	if (IS_BIT_SET(Global_1845221[epctParam0 /*889*/].f_140, 2) || IS_BIT_SET(Global_1845221[epctParam0 /*889*/].f_140, 5))
		return false;

	if (func_72(epctParam0))
		return false;

	return true;
}

BOOL func_72(ePedComponentType epctParam0) // Position - 0x2CDA Hash - 0xE40D6326 ^0xE40D6326
{
	Player player;

	player = epctParam0;

	if (player != -1)
		return func_38(epctParam0, 9);

	return false;
}

BOOL func_73() // Position - 0x2CF8 Hash - 0x6D3574EB ^0xC0C6A680
{
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_74(type))
			return true;
	}

	return false;
}

BOOL func_74(ePedComponentType epctParam0) // Position - 0x2D29 Hash - 0x97F81B3B ^0xBAC8EA0E
{
	int num;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (epctParam0 != PLAYER::PLAYER_ID())
		{
			num = 0;
		
			if (func_99(true))
				if (func_98(epctParam0, 9))
					num = 1;
			else if (func_38(epctParam0, 15))
				num = 1;
		
			if (num && func_75(epctParam0, PV_COMP_HEAD, false))
				return true;
		}
	}

	return false;
}

int func_75(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x2D86 Hash - 0xDFEDF08 ^0xDFEDF08
{
	var gamerHandle;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return 0;

	if (func_63(epctParam0, 0))
		return 0;

	if (func_96(epctParam0))
		return 0;

	if (IS_BIT_SET(Global_1845221[epctParam0 /*889*/].f_140, 2) || IS_BIT_SET(Global_1845221[epctParam0 /*889*/].f_140, 5))
		return 0;

	if (func_95(epctParam0))
		return 0;

	if (bParam2)
	{
		if (func_93(epctParam0, epctParam1, true))
			return 0;
	
		if (func_37(epctParam0))
			return 0;
	
		if (func_91(epctParam0, true))
			return 0;
	}
	else if (func_224(epctParam0, true))
	{
		return 0;
	}

	if (func_90(epctParam0))
		return 0;

	if (func_72(epctParam0))
		return 0;

	if (func_218(epctParam0))
		return 0;

	if (func_88(epctParam0))
		return 0;

	if (func_78(epctParam0))
		return 0;

	if (!Global_1980810)
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(epctParam0) };
	
		if (IS_GAMER_HANDLE_VALID(gamerHandle) && !NETWORK::_NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(0, &gamerHandle))
			return 0;
	}

	return 1;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x2EAD Hash - 0x4709BB10 ^0xDD69BC9A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> GET_GAMER_HANDLE_PLAYER(ePedComponentType epctParam0) // Position - 0x2EBD Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(epctParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_78(ePedComponentType epctParam0) // Position - 0x2ED4 Hash - 0x85F8BECA ^0x85F8BECA
{
	if (func_86(epctParam0))
		return true;

	if (func_79(epctParam0))
		return true;

	return false;
}

BOOL func_79(ePedComponentType epctParam0) // Position - 0x2EF7 Hash - 0xBC978DE1 ^0x69E6E1B2
{
	if (func_80(epctParam0, 339, -1))
		return true;

	return false;
}

BOOL func_80(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x2F11 Hash - 0xFBC5B044 ^0xFBC5B044
{
	ePedComponentType type;

	if (func_84(epctParam0) == epctParam1)
	{
		if (iParam2 == -1)
		{
			return true;
		}
		else
		{
			type = func_83(epctParam0);
		
			if (type != _INVALID_PLAYER_INDEX())
				return func_81(type) == iParam2;
		}
	}

	return false;
}

int func_81(ePedComponentType epctParam0) // Position - 0x2F4F Hash - 0x48014DA ^0xC49B9410
{
	if (func_82(epctParam0, false))
		return Global_1887549[epctParam0 /*611*/].f_10.f_182;

	return -1;
}

BOOL func_82(Player plParam0, BOOL bParam1) // Position - 0x2F72 Hash - 0x3654624B ^0x97E7BA1
{
	if (func_66(plParam0))
		if (Global_1887549[plParam0 /*611*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1887549[plParam0 /*611*/].f_10.f_32 != PV_COMP_INVALID)
			return true;

	return false;
}

ePedComponentType func_83(ePedComponentType epctParam0) // Position - 0x2FB6 Hash - 0xD56839EF ^0x635B970E
{
	return Global_1887549[epctParam0 /*611*/].f_10.f_35;
}

ePedComponentType func_84(ePedComponentType epctParam0) // Position - 0x2FCB Hash - 0x48014DA ^0xC3BFB404
{
	if (func_85(epctParam0, false))
		return Global_1887549[epctParam0 /*611*/].f_10.f_32;

	return PV_COMP_INVALID;
}

BOOL func_85(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x2FEE Hash - 0x3654624B ^0xCCA63DE1
{
	if (func_66(epctParam0))
		if (Global_1887549[epctParam0 /*611*/].f_10.f_32 != PV_COMP_INVALID || bParam1 && Global_1887549[epctParam0 /*611*/].f_10.f_33 != PV_COMP_INVALID)
			return true;

	return false;
}

BOOL func_86(ePedComponentType epctParam0) // Position - 0x3032 Hash - 0xE53D806E ^0xCF068FED
{
	if (func_87(epctParam0) == 339)
		return true;

	return false;
}

ePedComponentType func_87(ePedComponentType epctParam0) // Position - 0x304B Hash - 0x5EA8DF5A ^0xEE8D593B
{
	if (func_66(epctParam0))
		if (func_82(epctParam0, false))
			return Global_1887549[epctParam0 /*611*/].f_10.f_33;

	return PV_COMP_INVALID;
}

BOOL func_88(ePedComponentType epctParam0) // Position - 0x3077 Hash - 0x68897CDD ^0x41D261A7
{
	if (func_63(epctParam0, 0))
		return true;

	if (func_89())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[epctParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_89() // Position - 0x30B6 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_90(ePedComponentType epctParam0) // Position - 0x30C4 Hash - 0x295F4323 ^0xC9EF0000
{
	ePedComponentType type;

	type = epctParam0;

	if (type != PV_COMP_INVALID)
		return IS_BIT_SET(Global_1887549[type /*611*/].f_1, 0);

	return false;
}

BOOL func_91(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x30E7 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_92(epctParam0, bParam1, 1);
}

int func_92(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x30F8 Hash - 0x55931638 ^0x4F47E369
{
	ePedComponentType type;

	if (!func_66(epctParam0))
		return 0;

	if (!bParam1)
		if (func_70(epctParam0, iParam2))
			return 0;

	type = Global_1887549[epctParam0 /*611*/].f_10;

	if (func_66(type) && Global_1887549[type /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_93(ePedComponentType epctParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x3154 Hash - 0x5EDAC812 ^0x3EC37E95
{
	if (func_66(epctParam1))
	{
		if (!bParam2)
			if (func_94(epctParam0, epctParam1))
				return false;
	
		if (Global_1887549[epctParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
			return epctParam1 == Global_1887549[epctParam0 /*611*/].f_10;
	}

	return false;
}

BOOL func_94(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x319E Hash - 0x586F6286 ^0x1FED8FDC
{
	if (epctParam1 != _INVALID_PLAYER_INDEX())
		if (epctParam0 != _INVALID_PLAYER_INDEX())
			if (Global_1887549[epctParam0 /*611*/].f_10 != _INVALID_PLAYER_INDEX())
				if (Global_1887549[epctParam0 /*611*/].f_10 == epctParam0)
					return epctParam1 == epctParam0;

	return false;
}

BOOL func_95(ePedComponentType epctParam0) // Position - 0x31E3 Hash - 0x6DFF3230 ^0x6DFF3230
{
	return func_38(epctParam0, 30);
}

BOOL func_96(ePedComponentType epctParam0) // Position - 0x31F3 Hash - 0x36BA2E5D ^0x36BA2E5D
{
	if (!func_38(epctParam0, 2))
		return true;

	if (func_38(epctParam0, 1))
		return true;

	if (func_97(epctParam0) > 0)
		return true;

	return false;
}

int func_97(ePedComponentType epctParam0) // Position - 0x3227 Hash - 0xD56839EF ^0xFF06EFEF
{
	return Global_1887549[epctParam0 /*611*/].f_10.f_23;
}

BOOL func_98(ePedComponentType epctParam0, int iParam1) // Position - 0x323C Hash - 0x7CD5054C ^0xF58E6423
{
	return IS_BIT_SET(Global_1887549[epctParam0 /*611*/].f_10.f_5, iParam1);
}

BOOL func_99(BOOL bParam0) // Position - 0x3254 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_91(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_100() // Position - 0x3266 Hash - 0x4A0C5BA3 ^0xFDB92045
{
	int i;
	var string2;
	var string1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_11[i] == _INVALID_PLAYER_INDEX())
		{
			TEXT_LABEL_ASSIGN_STRING(&string1, "", 64);
			string1 = { func_101(func_102(i)) };
		
			if (MISC::ARE_STRINGS_EQUAL(&string1, &string2))
				return false;
		}
	}

	return true;
}

struct<16> func_101(int iParam0) // Position - 0x32C0 Hash - 0xC7B8D48C ^0xD50F5A0
{
	return Global_2685658.f_3078.f_18[iParam0 /*16*/];
}

int func_102(int iParam0) // Position - 0x32D8 Hash - 0xF198491A ^0xF198491A
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

void func_103(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15) // Position - 0x332E Hash - 0x408D7F7 ^0x544B8634
{
	hParam0 = -642704387;
	hParam0.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam15 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &hParam0, 15, iParam15, hParam0);

	return;
}

int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x335D Hash - 0x28809950 ^0x99E2BCBE
{
	int address;
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(type, false, false))
			if (type != PLAYER::PLAYER_ID() || includeLocalPlayer)
				if (includeSpectators)
					MISC::SET_BIT(&address, i);
				else if (!func_63(type, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_105(ePedComponentType epctParam0) // Position - 0x33C2 Hash - 0x5C6BAC9 ^0x241B950B
{
	if (!func_66(epctParam0))
		return false;

	return IS_BIT_SET(Global_1845221[epctParam0 /*889*/].f_268.f_34, 26);
}

void func_106(int iParam0) // Position - 0x33E9 Hash - 0xF11EB1F3 ^0x618C6F9E
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2739811.f_5265.f_7[num], offset);
	return;
}

void func_107() // Position - 0x3412 Hash - 0x6677E37 ^0x45BBDECE
{
	var unk;
	int num;

	unk = { func_127(145, 147, -1) };
	num = 0;

	if (func_99(true))
	{
		unk = { func_127(47, 48, -1) };
		num = 1;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_125(PLAYER::PLAYER_ID(), false), 64);

	func_113(&unk, num, false);

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_108(int iParam0) // Position - 0x348E Hash - 0xB4D8C147 ^0x84728BEF
{
	MISC::SET_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

void func_109(int iParam0) // Position - 0x34AB Hash - 0xB4D8C147 ^0xA3BC9DC6
{
	MISC::CLEAR_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_4), iParam0);
	return;
}

BOOL func_110() // Position - 0x34C8 Hash - 0x8E091D62 ^0x230252DD
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (IS_PLAYSTATION_PLATFORM())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (IS_XBOX_PLATFORM())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	return false;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x352F Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x3545 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_113(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x355B Hash - 0xA0DA1633 ^0xA0DA1633
{
	if (bParam2)
	{
		if (func_99(true) || iParam1 == 1)
		{
			func_122(47, 48, sParam0, -1, true);
			func_121(3, sParam0);
		
			if (func_68() && iParam1 == 1)
				func_120(sParam0, bParam2);
		}
		else
		{
			func_122(145, 147, sParam0, -1, true);
			func_121(1, sParam0);
		
			if (func_272() && iParam1 == 0)
				func_114(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_105), sParam0, 64);
	func_121(6, sParam0);
	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_114(const char* sParam0, BOOL bParam1) // Position - 0x362B Hash - 0xD1E82734 ^0xBB6A0F18
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(45, 46, sParam0, -1, true);
			func_121(0, sParam0);
			unk = { func_127(145, 147, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
			{
				func_122(145, 147, sParam0, -1, true);
				func_121(1, sParam0);
			}
		
			if (func_119(true))
			{
				unk = { func_127(145, 147, -1) };
				func_115(-1408096250, unk, -81044133);
			}
		}
	}

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_341), sParam0, 64);
		func_121(5, sParam0);
	}

	return;
}

void func_115(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17) // Position - 0x36F6 Hash - 0xB8AF0017 ^0x122BA5AA
{
	BOOL isBoss;
	int bossType;
	int bossId1;
	int bossId2;
	int textSource;

	if (Global_1981867 == MISC::GET_FRAME_COUNT())
		return;

	Global_1981867 = MISC::GET_FRAME_COUNT();
	isBoss = func_272();
	bossType = 0;

	if (func_119(true))
		if (func_99(true))
			bossType = 1;
		else
			bossType = 2;

	bossId1 = func_117(_GET_BOSS_OF_LOCAL_PLAYER());
	bossId2 = func_116(_GET_BOSS_OF_LOCAL_PLAYER());
	textSource = iParam17;
	STATS::_PLAYSTATS_NAMED_USER_CONTENT(isBoss, bossType, bossId1, bossId2, iParam0, &uParam1, textSource);
	return;
}

int func_116(ePedComponentType epctParam0) // Position - 0x3760 Hash - 0xAE8A6582 ^0x6E31D9BB
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887549[epctParam0 /*611*/].f_10.f_8[1];
}

int func_117(ePedComponentType epctParam0) // Position - 0x3785 Hash - 0x57997590 ^0xB0714101
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887549[epctParam0 /*611*/].f_10.f_8[0];
}

ePedComponentType _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x37AA Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_119(BOOL bParam0) // Position - 0x37BF Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_224(PLAYER::PLAYER_ID(), bParam0);
}

void func_120(const char* sParam0, BOOL bParam1) // Position - 0x37D1 Hash - 0xD66A6FFB ^0xD4FA16AD
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_122(49, 50, sParam0, -1, true);
			func_121(2, sParam0);
		
			if (func_119(true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
				func_115(-1629413369, unk, -81044133);
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_357), sParam0, 64);
		func_121(7, sParam0);
	}

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_121(int iParam0, const char* sParam1) // Position - 0x386D Hash - 0xDD46CB4B ^0xFDFAF401
{
	Global_1981196[iParam0] = MISC::GET_HASH_KEY(sParam1);
	return;
}

void func_122(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x3883 Hash - 0x84D1DFB0 ^0x84D1DFB0
{
	Hash statName;
	Hash statName2;
	var value;
	var value2;
	int lengthOfLiteralString;
	int length;

	statName = func_123(iParam0, iParam3);
	statName2 = func_123(iParam1, iParam3);

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

Hash func_123(int iParam0, int iParam1) // Position - 0x3916 Hash - 0x90FCB752 ^0x5B4C199C
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(3, iParam0, func_124(iParam1));
}

int func_124(int iParam0) // Position - 0x392B Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_65();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

const char* func_125(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x395F Hash - 0xE02F216E ^0xF1946F55
{
	if (!bParam1)
		if (func_91(epctParam0, true))
			return func_126();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_126() // Position - 0x3986 Hash - 0xB58A1E6 ^0xE745B285
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

struct<16> func_127(int iParam0, int iParam1, int iParam2) // Position - 0x3996 Hash - 0x400DB5D5 ^0xB2712477
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk17;

	statHash = func_123(iParam0, iParam2);
	statHash2 = func_123(iParam1, iParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

void func_128() // Position - 0x39D3 Hash - 0x7C63C178 ^0x6E84F81B
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_2672939.f_2590[i /*80*/].f_2 != 0)
		{
			Global_2672939.f_2590[i /*80*/].f_2 = 5;
			func_129(&(Global_2672939.f_2590[i /*80*/].f_69), 1);
		}
	}

	return;
}

void func_129(int iParam0, int iParam1) // Position - 0x3A1E Hash - 0xF55E891F ^0xF55E891F
{
	func_130(iParam0, iParam1);
	return;
}

void func_130(int iParam0, int iParam1) // Position - 0x3A2E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_131(int iParam0) // Position - 0x3A3F Hash - 0x1E41B1EC ^0x522D1215
{
	return Global_2672939.f_2590[0 /*80*/].f_1 == iParam0;
}

void func_132(BOOL bParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3A56 Hash - 0x9C82430D ^0x8396A8B2
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

	if (!func_215())
		return;

	num = 1;

	if (func_105(PLAYER::PLAYER_ID()))
		num = 2;

	if (iParam2 == 1)
		num = 3;

	if (Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			unk6 = { func_213(iParam2) };
			STATS::START_BEING_BOSS(num, &unk6, iParam3);
			func_210(false);
			func_207(false);
			func_109(21);
			func_109(22);
			Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_469 = num;
		}
	
		Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10 = PLAYER::PLAYER_ID();
		Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_431 = iParam2;
		Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_468 = iParam2;
		STATS::GET_BOSS_GOON_UUID(func_65(), &unk22, &unk23);
		func_206(unk22, unk23);
		userid = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &userID);
		TEXT_LABEL_ASSIGN_STRING(&unk24, userid, 64);
		func_205(unk24);
		func_204();
	
		if (func_203(13559, -1) <= 0)
			cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		else
			cloudTimeAsInt = func_203(13559, -1) - 43200;
	
		func_200(cloudTimeAsInt);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", INT))
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
	
		Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_24 = -1;
		Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_25 = -1;
		Global_2739811.f_5265.f_226 = -1;
		func_194();
		func_186(12, 0, true);
	
		if (bParam0)
			func_106(0);
	
		if (Global_2739811.f_5265.f_262 != _INVALID_PLAYER_INDEX())
			Global_2739811.f_5265.f_262 = _INVALID_PLAYER_INDEX();
	
		if (IS_BIT_SET(Global_2739811.f_1869, 15))
			MISC::CLEAR_BIT(&(Global_2739811.f_1869), 15);
	
		if (func_185(15))
			func_184(15);
	
		if (!func_183() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_182();
			func_181(2);
		}
	
		func_179(13599, 2, -1, true);
		func_109(31);
		func_107();
		func_178();
		func_177();
		func_176();
		func_142();
	
		if (iParam2 != 1)
		{
			if (!func_141(82, 3))
			{
				flag = false;
				address = func_203(13556, -1);
			
				if (!IS_BIT_SET(address, 11))
				{
					MISC::SET_BIT(&address, 11);
					func_179(13556, address, -1, true);
					flag = true;
				}
			
				func_135(82, 3, flag);
			}
		}
	
		if (iParam2 == 1)
			STATS::PLAYSTATS_CHANGE_MC_ROLE(func_117(_GET_BOSS_OF_LOCAL_PLAYER()), func_116(_GET_BOSS_OF_LOCAL_PLAYER()), func_134(), func_133(), Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_432, 4, Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_470);
	
		if (bParam1)
			if (iParam2 == 0)
				func_115(-1408096250, func_213(iParam2), -81044133);
			else
				func_115(-1629413369, func_213(iParam2), -81044133);
	}

	return;
}

int func_133() // Position - 0x3D11 Hash - 0x38EE7661 ^0xAB55A4B8
{
	if (Global_1941502.f_3 != 0)
		return Global_1941502.f_3;

	return -1;
}

int func_134() // Position - 0x3D2D Hash - 0x38EE7661 ^0x725966E2
{
	if (Global_1941502.f_2 != 0)
		return Global_1941502.f_2;

	return -1;
}

void func_135(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3D49 Hash - 0xDA27A8A3 ^0xD3778307
{
	int num;

	Global_9622 = echParam0;

	if (Global_120[echParam0 /*10*/].f_8 != 184)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (echParam1 == 4)
		{
			func_140(echParam0, 0, 1);
			func_140(echParam0, 1, 1);
			func_140(echParam0, 2, 1);
			func_139(echParam0, 0, 1);
			func_139(echParam0, 1, 1);
			func_139(echParam0, 2, 1);
		}
		else
		{
			if (func_138(echParam0, echParam1) == 1 && func_137(echParam0, echParam1) == 1)
				bParam2 = false;
		
			num = echParam1;
			func_140(echParam0, num, 1);
			func_139(echParam0, num, 1);
		
			if (echParam0 == CHAR_SESSANTA && !IS_BIT_SET(Global_2739811.f_7008, 4))
				bParam2 = false;
		
			if (echParam0 == CHAR_ISLDJ4 && !IS_BIT_SET(Global_2739811.f_7008, 3))
				bParam2 = false;
		
			if (echParam0 == CHAR_KDJ && !IS_BIT_SET(Global_2739811.f_7008, 3))
				bParam2 = false;
		}
	
		if (bParam2)
		{
			if (!Global_79539)
			{
				if (echParam1 != 4)
				{
					if (Global_21066 != echParam1)
					{
						Global_9595[echParam1 /*4*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9612[echParam1] = true;
						Global_9617[echParam1] = echParam0;
					}
					else if (echParam0 == Global_21066)
					{
					}
					else
					{
						Global_9546[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
						Global_9546[1 /*6*/].f_5 = echParam1;
						func_136();
					}
				}
				else
				{
					Global_9546[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
					Global_9546[1 /*6*/].f_5 = echParam1;
					func_136();
				}
			}
			else
			{
				Global_9546[1 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
				Global_9546[1 /*6*/].f_5 = echParam1;
				func_136();
			}
		}
	}

	return;
}

void func_136() // Position - 0x3EC7 Hash - 0xF7BA2A ^0xB51E8951
{
	var txdName;
	var subject;
	const char* filenameForAudioConversation;

	TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2201[Global_9622 /*29*/].f_7)), 64);

	if (Global_9641 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_9546[1 /*6*/]), 64);
		filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact: ~n~~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_9546[1 /*6*/]);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
	}

	MISC::CLEAR_BIT(&Global_8919, 0);
	return;
}

int func_137(eCharacter echParam0, int iParam1) // Position - 0x3F42 Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_24[iParam1];
}

int func_138(eCharacter echParam0, int iParam1) // Position - 0x3F6C Hash - 0x97DCD8A1 ^0x5A8D70D2
{
	if (iParam1 < 0 || iParam1 > 4)
		return 0;

	return Global_2201[echParam0 /*29*/].f_12[iParam1];
}

void func_139(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3F96 Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_24[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114135.f_28055[echParam0 /*29*/].f_24[iParam1] = iParam2;

	return;
}

void func_140(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3FDB Hash - 0xD2CCAEC5 ^0x6B5DD823
{
	if (iParam1 < 0 || iParam1 > 4)
		return;

	Global_2201[echParam0 /*29*/].f_12[iParam1] = iParam2;

	if (echParam0 < _CHAR_UNUSED)
		Global_114135.f_28055[echParam0 /*29*/].f_12[iParam1] = iParam2;

	return;
}

BOOL func_141(int iParam0, int iParam1) // Position - 0x4021 Hash - 0xDE2524EF ^0xDE2524EF
{
	if (func_138(iParam0, iParam1) == 1)
		return true;

	return false;
}

void func_142() // Position - 0x403D Hash - 0x626412B2 ^0x400A8BE1
{
	BOOL flag;

	if (func_28())
	{
		if (func_24() || func_175())
		{
			return;
		}
		else
		{
			func_149(false);
		
			if (func_147())
				func_146();
		
			func_145();
			flag = NETWORK::NETWORK_IS_IN_TRANSITION();
		
			if (flag || NETWORK::NETWORK_IS_TRANSITION_STARTED() || NETWORK::NETWORK_IS_TRANSITION_BUSY() || NETWORK::NETWORK_IS_TRANSITION_MATCHMAKING() || NETWORK::NETWORK_IS_TRANSITION_LEAVE_POSTPONED())
			{
				if (*Global_262145.f_32987)
					NETWORK::NETWORK_CANCEL_TRANSITION_MATCHMAKING();
			
				if (flag)
					NETWORK::NETWORK_BAIL_TRANSITION(6, 0, 0);
			}
		
			func_144();
			func_143();
			func_145();
		}
	}

	return;
}

void func_143() // Position - 0x40D3 Hash - 0x54676713 ^0xF5463CDC
{
	Global_1048576.f_10 = 0;
	return;
}

void func_144() // Position - 0x40E2 Hash - 0x677EF21 ^0x677EF21
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
	Global_2685658.f_6067 = { unk11 };

	for (i = 0; i <= 31; i = i + 1)
	{
		Global_2685658.f_1.f_845[i /*57*/] = { unk11 };
		Global_2685658.f_1.f_845[i /*57*/].f_13 = { unk24 };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2685658.f_1.f_845[i /*57*/].f_29), "", 16);
		Global_2685658.f_1.f_845[i /*57*/].f_44 = unk40;
		Global_2685658.f_1.f_845[i /*57*/].f_45 = unk41;
		Global_2685658.f_1.f_845[i /*57*/].f_46 = 0;
		Global_2685658.f_1.f_845[i /*57*/].f_47 = unk42;
		Global_2685658.f_1.f_845[i /*57*/].f_50 = unk43;
		Global_2685658.f_1.f_845[i /*57*/].f_55 = unk44;
		Global_2685658.f_1.f_845[i /*57*/].f_48 = 0;
		Global_2685658.f_1.f_845[i /*57*/].f_49 = 0;
		Global_2685658.f_1.f_845[i /*57*/].f_54 = 0;
		Global_2685658.f_1.f_845[i /*57*/].f_56 = unk44;
		Global_2685658.f_1.f_845[i /*57*/].f_53 = unk45;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685658.f_1.f_845[i /*57*/].f_33[j] = type;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685658.f_1.f_845[i /*57*/].f_36[j] = num3;
		}
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		Global_2685658.f_1.f_2670[i /*57*/] = { unk11 };
		Global_2685658.f_1.f_2670[i /*57*/].f_13 = { unk24 };
		Global_2685658.f_1.f_2670[i /*57*/].f_44 = unk40;
		Global_2685658.f_1.f_2670[i /*57*/].f_45 = unk41;
		Global_2685658.f_1.f_2670[i /*57*/].f_47 = unk42;
		Global_2685658.f_1.f_2670[i /*57*/].f_50 = unk43;
		Global_2685658.f_1.f_2670[i /*57*/].f_55 = unk44;
		Global_2685658.f_1.f_2670[i /*57*/].f_56 = unk44;
	
		for (j = 0; j <= 1; j = j + 1)
		{
			Global_2685658.f_1.f_2670[i /*57*/].f_33[j] = type;
		}
	
		for (j = 0; j <= 6; j = j + 1)
		{
			Global_2685658.f_1.f_2670[i /*57*/].f_36[j] = num3;
		}
	}

	Global_2685658.f_1.f_2798 = unk;
	Global_2685658.f_1.f_2799 = unk2;
	Global_2685658.f_1.f_2800 = unk3;
	Global_2685658.f_1.f_2802 = unk4;
	Global_2685658.f_1.f_2805 = unk5;
	Global_2685658.f_1.f_2806 = 0;
	Global_2685658.f_1.f_2808 = num;
	Global_2685658.f_1.f_2809 = unk6;
	Global_2685658.f_1.f_2810 = unk6;
	Global_2685658.f_1.f_2811 = num2;
	Global_2685658.f_1.f_2812 = unk7;

	for (k = 0; k < 9; k = k + 1)
	{
		Global_2685658.f_1.f_2813[k] = 0;
	}

	Global_2685658.f_1.f_2826 = num4;
	Global_2685658.f_1.f_2823 = unk8;
	Global_2685658.f_1.f_2824 = unk9;
	Global_2685658.f_1.f_2825 = unk10;
	Global_2684718.f_844 = 0;
	return;
}

void func_145() // Position - 0x4419 Hash - 0x2A0A618A ^0x183FF27
{
	MISC::SET_BIT(&(Global_2684718.f_2), 12);
	return;
}

void func_146() // Position - 0x442D Hash - 0x1A3F4198 ^0x1A3F4198
{
	Global_1057440 = -1;
	return;
}

BOOL func_147() // Position - 0x443A Hash - 0xADA03269 ^0xADA03269
{
	switch (func_148())
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
			return true;
	
		default:
		
	}

	return false;
}

int func_148() // Position - 0x44DA Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1057440;
}

void func_149(BOOL bParam0) // Position - 0x44E6 Hash - 0xB41DF10A ^0xB41DF10A
{
	BOOL flag;

	if (func_171() && !func_170())
	{
		func_169();
		func_168();
	}
	else
	{
		flag = func_167();
		func_166();
		func_164(true);
		func_163();
		func_162();
		func_161();
	
		if (flag && !bParam0)
			func_160();
	}

	if (Global_2693671.f_8)
		func_159();

	func_158();
	func_157();
	func_156();
	func_154();

	if (!func_153())
	{
		func_152();
		func_151(0);
	}

	func_168();
	func_150(0);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		NETWORK::NETWORK_REMAIN_IN_GAME_CHAT(false);

	return;
}

void func_150(int iParam0) // Position - 0x4579 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_2684718.f_892 = iParam0;
	return;
}

void func_151(int iParam0) // Position - 0x458A Hash - 0x723A3A86 ^0x723A3A86
{
	if (iParam0 == -1)
		Global_2684718.f_893 = Global_2684718.f_893 + 1;
	else
		Global_2684718.f_893 = iParam0;

	return;
}

void func_152() // Position - 0x45B4 Hash - 0x127C62FF ^0x296B8BEA
{
	Global_2684718.f_9 = -1;
	return;
}

BOOL func_153() // Position - 0x45C3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_739;
}

void func_154() // Position - 0x45D2 Hash - 0x300F9BB3 ^0x558AE64E
{
	Global_2684718.f_42 = func_155();
	return;
}

int func_155() // Position - 0x45E4 Hash - 0xA5E19383 ^0xA5E19383
{
	if (Global_2692732)
		return 32;

	return 32 - Global_2692733;
}

void func_156() // Position - 0x45FF Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_2684718.f_737 = 0;
	return;
}

void func_157() // Position - 0x460F Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_2684718.f_719 = 0;
	return;
}

void func_158() // Position - 0x461F Hash - 0xA1C15E47 ^0xE83CEBF7
{
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18), 15);
	return;
}

void func_159() // Position - 0x463C Hash - 0x3A5BFB04 ^0x5917FCF9
{
	Global_2693671.f_8 = 0;
	Global_2693671.f_7 = 0;
	return;
}

void func_160() // Position - 0x4652 Hash - 0x4AE8ED90 ^0xA5B4F618
{
	MISC::SET_BIT(&(Global_2684718.f_3), 2);
	return;
}

void func_161() // Position - 0x4665 Hash - 0x6A6128A5 ^0x358353D9
{
	MISC::CLEAR_BIT(&Global_2684718, 7);
	return;
}

void func_162() // Position - 0x4676 Hash - 0xCE6EFE21 ^0xC43AC6BF
{
	MISC::CLEAR_BIT(&Global_2684718, 6);
	return;
}

void func_163() // Position - 0x4687 Hash - 0x991298F ^0x65A0E054
{
	Global_2684718 = 0;
	Global_2684718.f_2 = 0;
	Global_2684718.f_3 = 0;
	return;
}

void func_164(BOOL bParam0) // Position - 0x46A2 Hash - 0x2BFC6AF5 ^0x96149626
{
	int i;
	var unk;
	int j;

	Global_2685658.f_1.f_2798 = 0;
	Global_2685658.f_1.f_2799 = 0;
	Global_2685658.f_1.f_2825 = 0;
	Global_2685658.f_1.f_2805 = 0;
	Global_2685658.f_1.f_2806 = 0;
	Global_2685658.f_1.f_2809 = 0;
	Global_2685658.f_1.f_2810 = 0;
	Global_2685658.f_1.f_2808 = -1;
	Global_2685658.f_1.f_2811 = -1;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_2685658.f_1.f_2813[i] = 0;
	}

	Global_2685658.f_1.f_2826 = -1;

	if (bParam0)
	{
		Global_2685658.f_1.f_2823 = -1;
		Global_2685658.f_1.f_2824 = -1;
	}

	Global_2685658.f_1.f_2845 = 0;
	func_165();
	unk.f_33 = 2;
	unk.f_36 = 7;

	for (j = 0; j <= 31; j = j + 1)
	{
		Global_2685658.f_1.f_845[j /*57*/] = { unk };
	}

	Global_2680839.f_33 = -1;
	Global_2680839.f_34 = -1;
	return;
}

void func_165() // Position - 0x479E Hash - 0x54676713 ^0x82443470
{
	Global_2680839.f_32 = 0;
	return;
}

void func_166() // Position - 0x47AD Hash - 0x983E9EBE ^0x7C49E855
{
	var unk;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		Global_2682471[i /*37*/] = { unk };
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682471[i /*37*/].f_13), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2682471[i /*37*/].f_29), "", 16);
		Global_2682471[i /*37*/].f_33 = 0;
		Global_2682471[i /*37*/].f_34 = 0;
		Global_2682471[i /*37*/].f_35 = 0;
	}

	Global_2682471.f_1185 = 0;
	Global_2682471.f_1186 = 0;
	return;
}

BOOL func_167() // Position - 0x4827 Hash - 0x4EF3C1E3 ^0xE2BD5D30
{
	return IS_BIT_SET(Global_2684718.f_3, 2);
}

void func_168() // Position - 0x4837 Hash - 0x2C1E3D64 ^0x72D6E85F
{
	MISC::CLEAR_BIT(&(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_36.f_18), 5);
	return;
}

void func_169() // Position - 0x4853 Hash - 0x65A0695A ^0x35D44DC7
{
	MISC::CLEAR_BIT(&(Global_2684718.f_2), 11);
	return;
}

BOOL func_170() // Position - 0x4867 Hash - 0xEEDBE9C9 ^0x81086132
{
	return IS_BIT_SET(Global_2684718.f_2, 27);
}

BOOL func_171() // Position - 0x4878 Hash - 0x56648017 ^0x56648017
{
	if (func_16() || func_174() || func_173() || func_172())
		return true;

	return false;
}

BOOL func_172() // Position - 0x48AA Hash - 0x97999A47 ^0x97999A47
{
	return IS_BIT_SET(Global_2684718, 1);
}

BOOL func_173() // Position - 0x48B8 Hash - 0x70FF297D ^0x70FF297D
{
	return IS_BIT_SET(Global_2684718, 2);
}

BOOL func_174() // Position - 0x48C6 Hash - 0x7BB65268 ^0x7BB65268
{
	return IS_BIT_SET(Global_2684718, 20);
}

BOOL func_175() // Position - 0x48D5 Hash - 0x7C65AEB ^0x3C1440C9
{
	return IS_BIT_SET(Global_2685658.f_1.f_2810, 3);
}

void func_176() // Position - 0x48E8 Hash - 0x3C8538B5 ^0x3C8538B5
{
	if (!Global_2739811.f_5265.f_341)
		Global_2739811.f_5265.f_341 = 1;

	return;
}

void func_177() // Position - 0x4909 Hash - 0x2E810EBC ^0xF2C6F97F
{
	var unk;

	unk = { func_127(49, 50, -1) };
	func_120(&unk, false);

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_178() // Position - 0x4952 Hash - 0xFA56621C ^0x2D7B437D
{
	var unk;

	unk = { func_127(45, 46, -1) };
	func_114(&unk, false);

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_110())
		func_109(28);
	else
		func_108(28);

	return;
}

void func_179(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x499B Hash - 0x99A9B13C ^0x893CB3D1
{
	Hash statName;

	if (iParam0 != 15468)
	{
		statName = func_180(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_180(int iParam0, int iParam1) // Position - 0x49C9 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_124(iParam1));
}

void func_181(int iParam0) // Position - 0x49DE Hash - 0x2EA7DA59 ^0x4042D40D
{
	MISC::SET_BIT(&(Global_4597681.f_2), iParam0);

	if (Global_4597681)
		return;

	Global_4597681 = true;
	Global_4597681.f_1 = 0;
	return;
}

void func_182() // Position - 0x4A08 Hash - 0xD5471B74 ^0xF99F3A21
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4597607.f_28[i /*2*/] != -1 && Global_4597607.f_28[i /*2*/].f_1 != 0)
			if (HUD::DOES_BLIP_EXIST(Global_4597607.f_28[i /*2*/].f_1))
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_4597607.f_28[i /*2*/].f_1, true);
	}

	return;
}

BOOL func_183() // Position - 0x4A69 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_742;
}

void func_184(int iParam0) // Position - 0x4A78 Hash - 0xF11EB1F3 ^0x23B8778F
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::CLEAR_BIT(&Global_2739811.f_5265.f_7[num], offset);
	return;
}

BOOL func_185(int iParam0) // Position - 0x4AA1 Hash - 0x5247BF6B ^0x73E42775
{
	int num;
	int num2;

	num = iParam0 / 32;
	num2 = iParam0 % 32;
	return IS_BIT_SET(Global_2739811.f_5265.f_7[num], num2);
}

void func_186(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4AC7 Hash - 0x4BEFCAC6 ^0x4BEFCAC6
{
	if (func_193())
	{
		if (iParam1 == 1)
		{
			if (Global_2739811.f_4530 == PV_COMP_INVALID)
				Global_2739811.f_4530 = Global_262145.f_26734;
		
			_STOPWATCH_RESET(&(Global_2739811.f_4528), false, false);
		
			if (bParam2)
			{
				if (Global_2739811.f_4533 == -1)
					Global_2739811.f_4533 = Global_262145.f_26735;
			
				_STOPWATCH_RESET(&(Global_2739811.f_4531), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
				func_192(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
			func_192(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_191() && !func_187(PLAYER::PLAYER_ID()))
			Global_1057439 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_187(Player plParam0) // Position - 0x4B91 Hash - 0x79327863 ^0x79327863
{
	if (func_188(plParam0, true, false))
		if (Global_1845221[plParam0 /*889*/] != PV_COMP_FEET)
			return true;

	return false;
}

BOOL func_188(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4BB6 Hash - 0x326C99FC ^0x326C99FC
{
	if (bParam1)
		if (func_189(plParam0))
			return true;

	!bParam2;

	if (Global_1845221[plParam0 /*889*/] == PV_COMP_INVALID)
		return false;

	return true;
}

BOOL func_189(Player plParam0) // Position - 0x4BE8 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_190(plParam0);
}

BOOL func_190(Player plParam0) // Position - 0x4BF6 Hash - 0x1ACBF981 ^0x51A073B
{
	return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_11.f_1, 0);
}

BOOL func_191() // Position - 0x4C0D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_844;
}

void func_192(BOOL bParam0) // Position - 0x4C1C Hash - 0x3C9A3419 ^0x64F3D42A
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_193())
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

BOOL func_193() // Position - 0x4D15 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574582;
}

void func_194() // Position - 0x4D21 Hash - 0x69D2BB04 ^0x369A6C17
{
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(type))
		{
			func_196(true, type);
		
			if (type != PLAYER::PLAYER_ID())
				func_195(type);
		}
	}

	return;
}

void func_195(ePedComponentType epctParam0) // Position - 0x4D63 Hash - 0x2182E345 ^0xE44C22B6
{
	Ped playerPed;

	if (IS_BIT_SET(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_101, epctParam0))
	{
		playerPed = PLAYER::GET_PLAYER_PED(epctParam0);
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(playerPed, PLAYER::PLAYER_ID(), true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), epctParam0, true);
		PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(epctParam0, PLAYER::PLAYER_ID(), true);
		func_196(true, epctParam0);
		MISC::CLEAR_BIT(&(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_101), epctParam0);
	}

	return;
}

void func_196(BOOL bParam0, ePedComponentType epctParam1) // Position - 0x4DC5 Hash - 0x27C0CEDB ^0x3F4C38D4
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
				
					if (func_93(epctParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
					{
						if (_GET_BOSS_OF_LOCAL_PLAYER() == epctParam1)
						{
							if (Global_2739811.f_5265.f_263[3] != vehiclePedIsIn)
								Global_2739811.f_5265.f_263[3] = vehiclePedIsIn;
						}
						else
						{
							num = func_197(_GET_BOSS_OF_LOCAL_PLAYER(), epctParam1);
						
							if (num != -1)
								if (Global_2739811.f_5265.f_263[num] != vehiclePedIsIn)
									Global_2739811.f_5265.f_263[num] = vehiclePedIsIn;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_93(epctParam1, _GET_BOSS_OF_LOCAL_PLAYER(), true))
				{
					if (_GET_BOSS_OF_LOCAL_PLAYER() == epctParam1)
					{
						vehiclePedIsIn = Global_2739811.f_5265.f_263[3];
					
						if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
						{
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
							Global_2739811.f_5265.f_263[3] = 0;
						}
					}
					else
					{
						num2 = func_197(_GET_BOSS_OF_LOCAL_PLAYER(), epctParam1);
					
						if (num2 != -1)
						{
							vehiclePedIsIn = Global_2739811.f_5265.f_263[num2];
						
							if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && ENTITY::IS_ENTITY_A_VEHICLE(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
							{
								VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(vehiclePedIsIn, true, true);
								Global_2739811.f_5265.f_263[num2] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_197(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x4F66 Hash - 0xDF8B371 ^0xDF8B371
{
	int i;

	if (func_281(epctParam0))
	{
		if (func_93(epctParam1, epctParam0, false) || func_199(epctParam1, epctParam0))
		{
			for (i = 0; i < 7; i = i + 1)
			{
				if (func_198(epctParam0, i) == epctParam1)
					return i;
			}
		}
	}

	return -1;
}

ePedComponentType func_198(ePedComponentType epctParam0, int iParam1) // Position - 0x4FBC Hash - 0x5EC69D21 ^0x1441E87
{
	if (func_281(epctParam0))
		if (iParam1 > -1 && iParam1 < 7)
			return Global_1887549[epctParam0 /*611*/].f_10.f_11[iParam1];

	return _INVALID_PLAYER_INDEX();
}

BOOL func_199(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x4FF8 Hash - 0x5B9FEF76 ^0x60203278
{
	if (epctParam1 != _INVALID_PLAYER_INDEX())
		if (Global_1887549[epctParam0 /*611*/].f_10.f_26 != _INVALID_PLAYER_INDEX())
			return epctParam1 == Global_1887549[epctParam0 /*611*/].f_10.f_26;

	return false;
}

void func_200(int iParam0) // Position - 0x5031 Hash - 0x6DD0188C ^0x3873137A
{
	if (!func_215())
		return;

	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_1 = iParam0;

	if (func_203(13559, -1) != func_201(PLAYER::PLAYER_ID()))
		func_179(13559, func_201(PLAYER::PLAYER_ID()), -1, true);

	return;
}

int func_201(Player plParam0) // Position - 0x5079 Hash - 0xDD8CD081 ^0x1F077E41
{
	if (func_202(plParam0) == -1)
		return -1;

	return func_202(plParam0) + 43200;
}

int func_202(Player plParam0) // Position - 0x509A Hash - 0xD56839EF ^0x4E9C9795
{
	return Global_1887549[plParam0 /*611*/].f_10.f_1;
}

int func_203(int iParam0, int iParam1) // Position - 0x50AF Hash - 0x744E461C ^0x5051D2B7
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_180(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_204() // Position - 0x50DE Hash - 0xD4AF72E8 ^0xE32FCA43
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
	
		if (func_99(true))
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
		else
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
	}

	return;
}

void func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x510F Hash - 0x1AC49706 ^0x134C4FDF
{
	Global_2685658.f_3078.f_2 = { uParam0 };
	return;
}

void func_206(int iParam0, int iParam1) // Position - 0x5128 Hash - 0xEA0476FE ^0x32B4144D
{
	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[0] = iParam0;
	Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10.f_8[1] = iParam1;
	return;
}

void func_207(BOOL bParam0) // Position - 0x5158 Hash - 0xEFD5E91 ^0xEFD5E91
{
	func_208(204, bParam0, -1, true);
	return;
}

void func_208(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x516A Hash - 0xC00D48A9 ^0x169717F7
{
	Hash statName;

	statName = func_209(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_209(int iParam0, int iParam1) // Position - 0x518D Hash - 0x1D62A43E ^0x33D7B335
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_124(iParam1));
}

void func_210(BOOL bParam0) // Position - 0x51A2 Hash - 0x7B027CCA ^0x61B71126
{
	if (bParam0)
	{
		if (func_212(4))
		{
			func_108(21);
			func_108(22);
		}
	
		func_108(31);
		func_211(bParam0);
	}
	else
	{
		if (func_38(PLAYER::PLAYER_ID(), 21))
		{
			func_109(21);
		
			if (!func_212(3) && func_212(4))
				func_108(22);
		}
	
		func_109(31);
		func_211(bParam0);
	}

	return;
}

void func_211(BOOL bParam0) // Position - 0x520A Hash - 0xD7404062 ^0x55748261
{
	func_208(432, bParam0, -1, true);
	return;
}

BOOL func_212(int iParam0) // Position - 0x521D Hash - 0xA8EFE44C ^0x67822B94
{
	return IS_BIT_SET(Global_2739811.f_5265.f_50, iParam0);
}

struct<16> func_213(int iParam0) // Position - 0x5231 Hash - 0x756F7C ^0x2978F6E5
{
	var unk;

	if (iParam0 == 1)
		unk = { func_127(47, 48, -1) };
	else
		unk = { func_127(145, 147, -1) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		TEXT_LABEL_ASSIGN_STRING(&unk, func_214(iParam0), 64);

	return unk;
}

const char* func_214(int iParam0) // Position - 0x5274 Hash - 0xF2D7EA8A ^0x9F7F6E37
{
	switch (iParam0)
	{
		case 1:
			return func_126();
	
		default:
		
	}

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

BOOL func_215() // Position - 0x5298 Hash - 0x65EF086C ^0x65EF086C
{
	if (func_217() && func_216(0))
		return true;

	return false;
}

BOOL func_216(int iParam0) // Position - 0x52B6 Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1574538[iParam0];
}

BOOL func_217() // Position - 0x52C6 Hash - 0x129F0515 ^0x129F0515
{
	return func_216(func_65() + 1);
}

BOOL func_218(ePedComponentType epctParam0) // Position - 0x52D8 Hash - 0x63867B92 ^0x63867B92
{
	return func_219(epctParam0) > 0;
}

int func_219(ePedComponentType epctParam0) // Position - 0x52E8 Hash - 0xCC105905 ^0x22CE5430
{
	int num;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		if (Global_1887549[epctParam0 /*611*/].f_10.f_181 != -1)
			num = Global_1887549[epctParam0 /*611*/].f_10.f_181;
		else
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_VIPGAMEPLAYDISABLEDTIMER"));
	
		num2 = (num + func_220()) - NETWORK::GET_CLOUD_TIME_AS_INT();
		return num2;
	}

	return -1;
}

var func_220() // Position - 0x533D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_262145.f_15358;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x534C Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_222() // Position - 0x536A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_262145.f_12821;
}

int func_223() // Position - 0x5379 Hash - 0x8C5859AA ^0x70288F4
{
	int i;
	int num;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(type))
			if (func_281(type))
				num = num + 1;
	}

	return num;
}

BOOL func_224(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x53B6 Hash - 0xB4CE8E51 ^0xDD439BF7
{
	if (!func_66(epctParam0))
		return false;

	if (!bParam1)
		if (func_281(epctParam0))
			return false;

	return func_66(Global_1887549[epctParam0 /*611*/].f_10);
}

void func_225() // Position - 0x53EE Hash - 0x3349335C ^0xAA309546
{
	var unk;
	Vector3 offsetFromEntityInWorldCoords;
	BOOL flag;

	Global_1943772 = true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(obLocal_145, 0.0328f, -0.8f, 0.3f) };
		flag = false;
		_STOPWATCH_DESTROY(&uLocal_141);
	
		if (func_7(0, &unk))
		{
			while (!flag)
			{
				func_286(0);
			
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_141))
					_STOPWATCH_INITIALIZE(&uLocal_141, false, false);
				else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_141, 4000, false))
					flag = true;
			
				if (!func_229(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0.05f, false) && !func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_145), 5f))
					if (!func_227(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), offsetFromEntityInWorldCoords, 1f, 5000, ENTITY::GET_ENTITY_HEADING(obLocal_145), 0.25f);
				else
					flag = true;
			
				GRAPHICS::DRAW_DEBUG_SPHERE(offsetFromEntityInWorldCoords, 0.1f, 255, 0, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(offsetFromEntityInWorldCoords, ENTITY::GET_ENTITY_COORDS(obLocal_145, true), 0, 255, 0, 255);
				GRAPHICS::DRAW_DEBUG_LINE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), offsetFromEntityInWorldCoords, 0, 0, 255, 255);
				SYSTEM::WAIT(0);
			}
		
			_STOPWATCH_DESTROY(&uLocal_141);
			iLocal_146 = 0;
		}
	}

	while (iLocal_146 != 3)
	{
		func_226(obLocal_145);
		func_286(0);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_226(Object obParam0) // Position - 0x553F Hash - 0x5968B826 ^0xA45EBCE7
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

	if (!func_295(PLAYER::PLAYER_ID()) && !func_294(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID()))
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

	switch (iLocal_146)
	{
		case 0:
			bLocal_138 = false;
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&animDict))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_147);
						iLocal_147 = -1;
					}
				
					iLocal_147 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_151, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, false, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
					STREAMING::REMOVE_ANIM_DICT(&animDict);
					iLocal_146 = 1;
				}
			}
			break;
	
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&animDict2);
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_147);
		
			if (!bLocal_138)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.93f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Login", "GTAO_Exec_SecuroServ_Warehouse_PC_Sounds", true);
					bLocal_138 = true;
				}
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.96f)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
			
				if (MISC::ARE_STRINGS_EQUAL(&uLocal_154, "idle_a") && randomIntInRange == 0 || MISC::ARE_STRINGS_EQUAL(&uLocal_154, "idle_b") && randomIntInRange == 1 || MISC::ARE_STRINGS_EQUAL(&uLocal_154, "idle_c") && randomIntInRange == 2 || MISC::ARE_STRINGS_EQUAL(&uLocal_154, "idle_d") && randomIntInRange == 3)
				{
					randomIntInRange = randomIntInRange + 1;
				
					if (randomIntInRange >= endRange)
						randomIntInRange = 0;
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_147);
					iLocal_147 = -1;
				}
			
				iLocal_147 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_151, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
			
				switch (randomIntInRange)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_154, "idle_a", 16);
						iLocal_146 = 3;
						break;
				
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_154, "idle_b", 16);
						iLocal_146 = 3;
						break;
				
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_154, "idle_c", 16);
						iLocal_146 = 3;
						break;
				
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_154, "idle_d", 16);
						iLocal_146 = 3;
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uLocal_154, "idle_XXX", 16);
						break;
				}
			}
			break;
	
		case 3:
			bLocal_138 = false;
		
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
		
			localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_147);
		
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_147);
					iLocal_147 = -1;
				}
			
				iLocal_147 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_151, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_147);
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					PED::SET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId, 0f);
			
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
				iLocal_146 = 3;
				return;
			}
		
			if (STREAMING::HAS_ANIM_DICT_LOADED(&animDict2) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId) || PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId) >= 0.99f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_147);
					iLocal_147 = -1;
				}
			
				iLocal_147 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uLocal_151, ENTITY::GET_ENTITY_ROTATION(obParam0, 2), 2, false, true, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_147, &animDict2, animnName, 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_147);
				iLocal_146 = 3;
				return;
			}
			break;
	}

	return;
}

BOOL func_227(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x5A89 Hash - 0x5CB13EA9 ^0x50B73240
{
	if (func_228(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_228(Ped pedParam0) // Position - 0x5ABC Hash - 0x7E48B415 ^0x126328AB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_229(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x5ADC Hash - 0x1FB736D4 ^0x234AEAB7
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

BOOL func_230() // Position - 0x5B57 Hash - 0x882C31A ^0x20C66F83
{
	if (!func_8(PLAYER::PLAYER_ID()))
		return false;

	return IS_BIT_SET(Global_1943917.f_727, 30);
}

BOOL func_231() // Position - 0x5B79 Hash - 0x8D853E27 ^0xF41F03
{
	if (func_294(PLAYER::PLAYER_ID()))
		if (IS_BIT_SET(Global_1943917.f_727, 0) || IS_BIT_SET(Global_1943917.f_727, 2))
			return 1;

	return 0;
}

BOOL func_232() // Position - 0x5BAC Hash - 0x8D853E27 ^0xF41F03
{
	if (func_295(PLAYER::PLAYER_ID()))
		if (IS_BIT_SET(Global_1943917.f_727, 0) || IS_BIT_SET(Global_1943917.f_727, 2))
			return true;

	return false;
}

BOOL func_233() // Position - 0x5BDF Hash - 0x23EAC72E ^0x5AC0D68
{
	if (func_218(PLAYER::PLAYER_ID()))
		return false;

	if (func_267())
		return false;

	if (func_264())
		return false;

	if (func_281(PLAYER::PLAYER_ID()))
		return true;
	else if (func_223() < func_222())
		return true;

	return false;
}

BOOL func_234(int iParam0, BOOL bParam1) // Position - 0x5C2E Hash - 0xE8E8EFB4 ^0x98461D05
{
	int num;

	num = func_235(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_278(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/] == true && Global_44941[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_44941[num /*32*/].f_29)
					return false;
		
			Global_44941[num /*32*/].f_5 = 1;
			Global_44941[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44941[num /*32*/] == false;
			Global_44941[num /*32*/].f_7;
		}
	}

	return false;
}

int func_235(int iParam0) // Position - 0x5CE6 Hash - 0x7F0E29AD ^0x84091235
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44941[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_236(BOOL bParam0) // Position - 0x5D21 Hash - 0x3AB19FE9 ^0xDBE5FF0D
{
	if (func_230() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1943773)
		_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 2, "ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/, 0, 0, 0, 0);

	return;
}

BOOL func_237() // Position - 0x5D61 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1943917.f_740;
}

void func_238(BOOL bParam0) // Position - 0x5D70 Hash - 0x359C6C1D ^0x260EA762
{
	if (func_260(PLAYER::PLAYER_ID()) && func_246(PLAYER::PLAYER_ID()) == func_245(PLAYER::PLAYER_ID()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1943773)
	{
		if (func_242())
		{
			func_241("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_223() >= func_222())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_218(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			func_241("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_139) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_139, 10000, true) || !bLocal_136)
		{
			if (func_239(PLAYER::PLAYER_ID()) || Global_1943773 == true)
			{
				bLocal_136 = true;
			
				if (!Global_1943773)
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_256())
					HUD::CLEAR_HELP(true);
			
				bLocal_136 = false;
				_STOPWATCH_DESTROY(&uLocal_139);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_136)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_239(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_136 = false;
			}
		}
	}

	return;
}

BOOL func_239(Player plParam0) // Position - 0x5EE5 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_240(func_87(plParam0));
}

BOOL func_240(ePedComponentType epctParam0) // Position - 0x5EF7 Hash - 0x5000025C ^0x5000025C
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

void func_241(char* sParam0) // Position - 0x5F17 Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL func_242() // Position - 0x5F2D Hash - 0x560CF1B7 ^0x560CF1B7
{
	if (Global_1943778)
		return false;

	return func_243();
}

BOOL func_243() // Position - 0x5F44 Hash - 0x49FC590C ^0x49FC590C
{
	if (func_244())
		return true;

	return Global_2684718.f_746;
}

BOOL func_244() // Position - 0x5F5E Hash - 0x4DB153F0 ^0x4DB153F0
{
	return Global_1575037 == 10;
}

ePedComponentType func_245(Player plParam0) // Position - 0x5F6D Hash - 0x3D5167E7 ^0xD72C2F5C
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return PV_COMP_HEAD;

	return Global_1845221[plParam0 /*889*/].f_268.f_150;
}

ePedComponentType func_246(ePedComponentType epctParam0) // Position - 0x5F90 Hash - 0x236E27BC ^0x888C1B4A
{
	if (func_260(epctParam0))
		return func_247(Global_2657991[epctParam0 /*467*/].f_324.f_8);

	return PV_COMP_HEAD;
}

ePedComponentType func_247(Hash hParam0) // Position - 0x5FB7 Hash - 0x95677753 ^0x95677753
{
	switch (hParam0)
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

void func_248(BOOL bParam0) // Position - 0x604C Hash - 0x654C34E0 ^0x96A8A62F
{
	if (func_259(PLAYER::PLAYER_ID()) || func_231() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1943773 && func_279(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), ENTITY::GET_ENTITY_HEADING(obLocal_145), 90f))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		}
		else if (func_242())
		{
			if (func_259(PLAYER::PLAYER_ID()))
				func_241("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/);
			else
				func_241("BIKERWHBLCKD" /*Join a public session to manage your Business*/);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_139) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_139, 10000, true) || !bLocal_136)
			{
				if (func_249(PLAYER::PLAYER_ID()) || Global_1943773 == true)
				{
					bLocal_136 = true;
				
					if (!Global_1943773)
						func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
				}
				else
				{
					if (func_256())
						HUD::CLEAR_HELP(true);
				
					bLocal_136 = false;
					_STOPWATCH_DESTROY(&uLocal_139);
					_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/, 0, 0, 0, 0);
				}
			}
			else if (bLocal_136)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			
				if (!func_249(PLAYER::PLAYER_ID()))
				{
					bLocal_136 = false;
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (!bParam0 && func_223() < func_222())
		{
			_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/, 0, 0, 0, 0);
		}
		else
		{
			func_241("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/);
		}
	}

	return;
}

BOOL func_249(Player plParam0) // Position - 0x61BB Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_250(func_87(plParam0));
}

BOOL func_250(ePedComponentType epctParam0) // Position - 0x61CD Hash - 0x5000025C ^0x5000025C
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

BOOL func_251() // Position - 0x61F3 Hash - 0xB9BBF693 ^0xE7DF2AD1
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145))
	{
		if (func_253(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_294(PLAYER::PLAYER_ID()) || func_252(PLAYER::PLAYER_ID()))
			return true;
	}

	return false;
}

BOOL func_252(Player plParam0) // Position - 0x6231 Hash - 0xEB5B5CD1 ^0xC0A8FB80
{
	if (func_261(Global_1845221[plParam0 /*889*/].f_268.f_36, -1))
		return 1;

	return 0;
}

BOOL func_253(ePedComponentType epctParam0) // Position - 0x6254 Hash - 0x928E8225 ^0x97D4EDDD
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657991[epctParam0 /*467*/].f_324.f_8 != -1 && Global_2657991[epctParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_9(Global_2657991[epctParam0 /*467*/].f_324.f_8) == 25;

	return false;
}

void func_254(BOOL bParam0) // Position - 0x62B4 Hash - 0x32744C9 ^0xC48A0588
{
	if (func_232() && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()) && !func_237() && !Global_1943773)
	{
		if (func_242())
		{
			func_241("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/);
		}
		else if (!bParam0)
		{
			if (func_223() >= func_222())
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "WHSECUROMAXVIP" /*This computer is unavailable. The maximum number of VIPs, CEOs and Club Presidents has been reached in this session.*/, 0, 0, 0, 0);
			else if (func_218(PLAYER::PLAYER_ID()))
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "PIM_EXECH0x1" /*SecuroServ access is currently blocked due to your recent behavior.*/, 0, 0, 0, 0);
			else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			else
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/, 0, 0, 0, 0);
		}
		else if (func_69(PLAYER::PLAYER_ID()))
		{
			func_241("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_139) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_139, 10000, true) || !bLocal_136)
		{
			if (func_298(PLAYER::PLAYER_ID()) || Global_1943773 == true)
			{
				bLocal_136 = true;
			
				if (!Global_1943773)
					func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
			}
			else
			{
				if (func_256())
					HUD::CLEAR_HELP(true);
			
				bLocal_136 = false;
				_STOPWATCH_DESTROY(&uLocal_139);
				_CONTEXT_ADD_HELP_TEXT(&iLocal_134, 1, "WHSECUROINPUT" /*Press ~INPUT_CONTEXT~ to access this laptop.*/, 0, 0, 0, 0);
			}
		}
		else if (bLocal_136)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				func_241("WHSECUROBLCK" /*This computer is unavailable during a mission.*/);
		
			if (!func_298(PLAYER::PLAYER_ID()))
			{
				HUD::CLEAR_HELP(true);
				bLocal_136 = false;
			}
		}
	}

	return;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x640F Hash - 0xC67F23A2 ^0xEFF6309F
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
		if (!Global_44941[i /*32*/])
		{
			Global_44941[i /*32*/] = true;
			Global_44941[i /*32*/].f_1 = Global_45142;
			Global_45142 = Global_45142 + 1;
			Global_44941[i /*32*/].f_4 = 0;
			Global_44941[i /*32*/].f_29 = 0;
			Global_44941[i /*32*/].f_5 = 0;
			Global_44941[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_8), sParam2, 16);
			Global_44941[i /*32*/].f_6 = iParam3;
			Global_44941[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44941[i /*32*/].f_7 = 0;
			Global_44941[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44941[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44941[i /*32*/].f_13), sParam4, 64);
				Global_44941[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44941[i /*32*/].f_12 = 0;
				Global_44941[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44941[i /*32*/].f_1;
			return;
		}
	}

	return;
}

BOOL func_256() // Position - 0x653A Hash - 0x3C890941 ^0xEFCBDFFA
{
	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_OFF_LAP_1" /*Register as SecuroServ CEO to gain access to this computer. ~n~Press ~INPUT_FRONTEND_RIGHT~ to stand up.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHPRIVSESLAP" /*Join a public session to access the SecuroServ network.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHSECUROBLCK" /*This computer is unavailable during a mission.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("SECINPUTTREGLAP" /*Press ~INPUT_CONTEXT~ to register as a SecuroServ CEO and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHINPUT" /*Press ~INPUT_CONTEXT~ to securely access the Open Road website.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKA" /*Press ~INPUT_CONTEXT~ to found a Motorcycle Club and access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKB" /*You need to be the President of a Motorcycle Club to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("WHBIKERBLCK" /*You need to register as a SecuroServ CEO to access this computer.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKC" /*Join a public session to purchase a Business.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("BIKERWHBLCKD" /*Join a public session to manage your Business*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("ARENAWHINPUT" /*Press ~INPUT_CONTEXT~ to access arenawar.tv.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view Sponsorship Tier Unlocks.*/))
		return true;

	return false;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x65DE Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x65F1 Hash - 0xFE5630E8 ^0xFE5630E8
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_235(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44941[num /*32*/])
		{
			Global_44941[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_259(Player plParam0) // Position - 0x6648 Hash - 0x7E4C644 ^0xA8C9EFC
{
	if (func_261(Global_1845221[plParam0 /*889*/].f_268.f_36, -1) && !IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 1))
		return 1;

	return 0;
}

BOOL func_260(ePedComponentType epctParam0) // Position - 0x6681 Hash - 0xD5524D9D ^0x5570CB4E
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657991[epctParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2657991[epctParam0 /*467*/].f_324.f_8) == 1;

	return false;
}

BOOL func_261(ePedComponentType epctParam0, int iParam1) // Position - 0x66C7 Hash - 0x32D9FCC4 ^0x32D9FCC4
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

BOOL func_262(ePedComponentType epctParam0) // Position - 0x67A4 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_263() // Position - 0x67D3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_78315;
}

BOOL func_264() // Position - 0x67DF Hash - 0x98B9AAC7 ^0xF8017CC9
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_224(PLAYER::PLAYER_ID(), true) && func_82(PLAYER::PLAYER_ID(), false) && func_72(PLAYER::PLAYER_ID()))
	{
		if (func_87(PLAYER::PLAYER_ID()) == 256)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1155f, -3200.515f, -40.05f, 1176.79f, -3189.532f, -34.785f, false, true, 0))
				return true;
	
		if (func_87(PLAYER::PLAYER_ID()) == 271)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1470.8796f, -528.8513f, 75.0839f, -1472.6295f, -526.5934f, 73.3136f, false, true, 0))
				return true;
			else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1008.4672f, -3167.9465f, -37.5246f, 1006.9028f, -3171.1516f, -39.6192f, false, true, 0))
				return true;
	
		if (func_265(*Global_4718592.f_128476) == 5)
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 571.1f, -3123.7f, 19.8f, 567.1f, -3128.7f, 17.8f, false, true, 0))
				return true;
	}

	return false;
}

int func_265(int iParam0) // Position - 0x690D Hash - 0x2607B81 ^0x2607B81
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_266(i))
			return i;
	}

	return -1;
}

int func_266(int iParam0) // Position - 0x6938 Hash - 0x62114499 ^0x957CA90D
{
	if (iParam0 != -1)
		return Global_262145.f_32988[iParam0];

	return -1;
}

BOOL func_267() // Position - 0x6957 Hash - 0x7F5DC36F ^0x200A1459
{
	return IS_BIT_SET(Global_1943917.f_11, 1);
}

BOOL func_268() // Position - 0x6967 Hash - 0x1DCB695A ^0x49DDBAC6
{
	if (func_270(PLAYER::PLAYER_ID()) == 150 && func_269(PLAYER::PLAYER_PED_ID(), 3084.5112f, -4686.664f, 26.2522f, 50f, true))
		return true;

	return false;
}

BOOL func_269(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5) // Position - 0x69A4 Hash - 0x9A4C1B16 ^0x6EACDAB9
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5), fParam1) <= fParam4 * fParam4;
}

ePedComponentType func_270(Player plParam0) // Position - 0x69C2 Hash - 0x8EC56FC1 ^0x8EC56FC1
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1887549[player /*611*/];

	return PV_COMP_INVALID;
}

int func_271(Player plParam0) // Position - 0x69E1 Hash - 0xF6352B1A ^0xF6352B1A
{
	if (func_87(plParam0) == 243)
		return func_81(plParam0);

	return -1;
}

BOOL func_272() // Position - 0x69FE Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_281(PLAYER::PLAYER_ID());
}

BOOL func_273() // Position - 0x6A0E Hash - 0x6A47EBAD ^0xEDC3B247
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 148;
}

BOOL func_274() // Position - 0x6A24 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_76641;
}

BOOL func_275() // Position - 0x6A30 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1929312;
}

BOOL func_276() // Position - 0x6A3C Hash - 0xCE5A537A ^0xEA88654
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, false) == PLAYER::PLAYER_PED_ID())
			return true;

	return false;
}

BOOL func_277() // Position - 0x6A6A Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_278(int iParam0) // Position - 0x6A84 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_279(float fParam0, float fParam1, float fParam2) // Position - 0x6ADB Hash - 0x142F7A4A ^0x142F7A4A
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

BOOL func_280() // Position - 0x6B50 Hash - 0x1AD64292 ^0x459B125C
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145))
		if (func_295(PLAYER::PLAYER_ID()))
			return 1;

	return 0;
}

BOOL func_281(ePedComponentType epctParam0) // Position - 0x6B71 Hash - 0xC62FC261 ^0xD6778B42
{
	if (func_66(epctParam0))
		if (func_66(Global_1887549[epctParam0 /*611*/].f_10))
			return Global_1887549[epctParam0 /*611*/].f_10 == epctParam0;

	return false;
}

BOOL func_282() // Position - 0x6BA6 Hash - 0xEECAD0C ^0x246B1C6C
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145) && func_8(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_283() // Position - 0x6BC9 Hash - 0xEECAD0C ^0x246B1C6C
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145) && func_260(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_284(Player plParam0) // Position - 0x6BEC Hash - 0xEB5B5CD1 ^0xC0A8FB80
{
	if (func_261(Global_1845221[plParam0 /*889*/].f_268.f_36, -1))
		return 1;

	return 0;
}

BOOL func_285() // Position - 0x6C0F Hash - 0xC002E6B9 ^0x914BE716
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_145))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_145) == joaat("ex_prop_monitor_01_ex") || func_295(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_286(int iParam0) // Position - 0x6C42 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_291())
		return;

	if (!(Global_21066.f_1 == 1))
	{
		if (func_278(0))
			func_287(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_287(int iParam0) // Position - 0x6C75 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_291())
		return;

	if (Global_21284)
		if (func_290())
			func_289(true, true);
		else
			func_289(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_288())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_288() // Position - 0x6CFF Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_289(BOOL bParam0, BOOL bParam1) // Position - 0x6D26 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_278(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_290() // Position - 0x6D9A Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_291() // Position - 0x6DA8 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1957675, 19);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x6DB7 Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x6DC4 Hash - 0x154EA353 ^0xBFA672B0
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

BOOL func_294(ePedComponentType epctParam0) // Position - 0x6E22 Hash - 0xBEBC589B ^0x5CA4AC22
{
	int num;

	if (epctParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
		{
			if (Global_2657991[epctParam0 /*467*/].f_324.f_8 != -1)
			{
				num = func_9(Global_2657991[epctParam0 /*467*/].f_324.f_8);
				return num == 2 || num == 25;
			}
		}
	}

	return false;
}

BOOL func_295(Player plParam0) // Position - 0x6E77 Hash - 0x6326813E ^0x9AB30C78
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657991[plParam0 /*467*/].f_324.f_8 != -1)
				return func_9(Global_2657991[plParam0 /*467*/].f_324.f_8) == 0;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x6EBD Hash - 0x6F79B86B ^0x7B76DD66
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x6F02 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

BOOL func_298(Player plParam0) // Position - 0x6F0E Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_299(func_87(plParam0));
}

BOOL func_299(ePedComponentType epctParam0) // Position - 0x6F20 Hash - 0x5000025C ^0x5000025C
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

BOOL func_300(int iParam0) // Position - 0x6F46 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44181 == iParam0;
}

void func_301() // Position - 0x6F54 Hash - 0x2ACF749A ^0xC42EB91B
{
	if (iLocal_134 != -1)
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_134);

	if (func_256())
		HUD::CLEAR_HELP(true);

	Global_1943773 = false;
	Global_1943772 = false;
	return;
}

