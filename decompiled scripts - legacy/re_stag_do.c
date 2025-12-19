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
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	Ped pedLocal_53 = 0;
	Ped pedLocal_54 = 0;
	Ped pedLocal_55 = 0;
	Ped pedLocal_56 = 0;
	Vehicle veLocal_57 = 0;
	var uLocal_58 = 4;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	Vehicle veLocal_63 = 0;
	Object obLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	BOOL bLocal_112 = 0;
	BOOL bLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	BOOL bLocal_125 = 0;
	BOOL bLocal_126 = 0;
	BOOL bLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	Vehicle veLocal_130 = 0;
	Vehicle veLocal_131 = 0;
	Cam caLocal_132 = 0;
	Cam caLocal_133 = 0;
	var uLocal_134 = 16;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
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
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	BOOL bLocal_299 = 0;
	char* sLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	BOOL bLocal_308 = 0;
	BOOL bLocal_309 = 0;
	BOOL bLocal_310 = 0;
	BOOL bLocal_311 = 0;
	BOOL bLocal_312 = 0;
	BOOL bLocal_313 = 0;
	BOOL bLocal_314 = 0;
	BOOL bLocal_315 = 0;
	int iLocal_316 = 0;
	Blip blLocal_317 = 0;
	Blip blLocal_318 = 0;
	Blip blLocal_319 = 0;
	Blip blLocal_320 = 0;
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
	fLocal_41 = 20f;
	bLocal_115 = true;
	iLocal_306 = 6000;
	uLocal_50 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
			if (PED::IS_PED_IN_GROUP(pedLocal_53))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
			if (PED::IS_PED_IN_GROUP(pedLocal_55))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_55);
	
		func_186();
	}

	if (func_185(283, 1))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_156(uLocal_50, -1, 0, false, false))
	{
		if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	
		func_153(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_114)
		{
			if (!func_152())
				if (func_151())
					func_186();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SDRM", 0);
		
			switch (iLocal_46)
			{
				case 0:
					if (func_139())
						func_186();
				
					if (bLocal_48)
					{
						bLocal_49 = true;
						iLocal_46 = 1;
					}
					else
					{
						func_129();
					}
					break;
			
				case 1:
					func_128();
				
					if (!bLocal_112)
					{
						func_127();
						func_124();
						func_113();
					
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_316))
							func_112();
					}
					else
					{
						func_109();
					
						if (!bLocal_122)
							func_107();
					
						func_99();
						func_97();
						func_81();
						func_80(pedLocal_53, false);
						!bLocal_119;
					
						if (iLocal_47 == 0 && !bLocal_116)
						{
							func_76();
							func_74();
						}
						else
						{
							func_69();
						}
					
						if (iLocal_47 == 3)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_85, true) < 100f)
							{
								if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
									CUTSCENE::REQUEST_CUTSCENE("sdrm_mcs_2", 8);
							
								if (CUTSCENE::IS_CUTSCENE_ACTIVE())
								{
									if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
									{
										if (!PED::IS_PED_INJURED(pedLocal_53) && !PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_54) && !PED::IS_PED_INJURED(pedLocal_56) && !ENTITY::IS_ENTITY_DEAD(veLocal_130, false))
										{
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groom", pedLocal_53, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Groomsman", pedLocal_55, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Bride", pedLocal_54, 0);
											CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Father_of_the_bride", pedLocal_56, 0);
										}
									}
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::REMOVE_CUTSCENE();
							}
						
							if (bLocal_116)
							{
								if (func_68(true, false, true))
									func_32();
							}
							else if (!PED::IS_PED_INJURED(pedLocal_55))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_55, false))
								{
									if (HUD::DOES_BLIP_EXIST(blLocal_320))
									{
										HUD::REMOVE_BLIP(&blLocal_320);
									
										if (HUD::DOES_BLIP_EXIST(blLocal_318))
											HUD::REMOVE_BLIP(&blLocal_318);
									
										if (!HUD::DOES_BLIP_EXIST(blLocal_318))
											blLocal_318 = func_30(uLocal_65, true);
									}
								}
							}
						}
					
						if (func_3())
						{
							if (!PED::IS_PED_INJURED(pedLocal_53))
								TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_55))
								TASK::TASK_SMART_FLEE_PED(pedLocal_55, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_54))
								TASK::TASK_SMART_FLEE_PED(pedLocal_54, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							if (!PED::IS_PED_INJURED(pedLocal_56))
								TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						
							func_2();
						}
					}
				
					func_1();
					break;
			}
		}
		else
		{
			func_186();
		}
	}

	return;
}

void func_1() // Position - 0x395 (917)
{
	return;
}

void func_2() // Position - 0x39D (925)
{
	func_186();
	return;
}

BOOL func_3() // Position - 0x3A9 (937)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(pedLocal_53))
		{
			return true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(pedLocal_53))
				return true;
		
			if (bLocal_114)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_28();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_police", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}

	if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_57, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_57) || ENTITY::IS_ENTITY_IN_WATER(veLocal_57))
		{
			func_28();
		
			if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
				return true;
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_57))
				{
					func_28();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
						return true;
				}
			}
		}
	}
	else
	{
		func_28();
	
		if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			return true;
	}

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
			}
		
			return true;
		}
	}

	if (iLocal_47 >= 1)
	{
		if (bLocal_121)
		{
			if (PED::IS_PED_INJURED(pedLocal_55))
			{
				func_28();
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), true))
			{
				func_28();
				return true;
			}
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (!bLocal_124)
				{
					func_28();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_comeba", 4, 0, 0, 0))
						bLocal_124 = true;
				}
			}
			else
			{
				bLocal_124 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_57, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	if (iLocal_47 == 3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_INJURED(pedLocal_54) || PED::IS_PED_INJURED(pedLocal_56))
				return true;
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_54, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), true))
				return true;
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0) && bLocal_308)
			{
				if (!bLocal_125)
				{
					func_28();
				
					if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_nobest", 4, 0, 0, 0))
						bLocal_125 = true;
				}
			}
			else
			{
				bLocal_125 = false;
			}
		
			if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 150f, 150f, 150f, false, true, 0))
				return true;
		}
	}

	return false;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6AC (1708)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22990 = false;
	Global_22992 = false;
	Global_22997 = false;
	Global_23974 = 0;
	Global_23976 = false;
	Global_23980 = 0;
	Global_2883585 = 0;
	return func_5(sParam2, iParam3, false);
}

BOOL func_5(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x6FA (1786)
{
	Global_22984 = 0;

	if (Global_22983 == 0 || Global_22985 == 2)
	{
		if (Global_22983 != 0)
		{
			if (iParam1 > Global_22985)
			{
				if (Global_22990 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21610.f_1 = 3;
					Global_22983 = 0;
					Global_22984 = 1;
					Global_23036 = false;
					Global_22979 = 0;
					Global_22980 = 0;
					Global_22994 = false;
					Global_22993 = false;
					Global_21609 = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_25(8, -1))
			return 0;
	
		Global_23059 = { Global_23053 };
		func_24();
		Global_22272 = { Global_22437 };
		Global_22989 = Global_22990;
		Global_22996 = Global_22997;
		Global_2883586 = Global_2883585;
		Global_22998 = { Global_23014 };
		Global_22991 = Global_22992;
		Global_23973 = Global_23974;
		Global_23981 = { Global_23987 };
		Global_23975 = Global_23976;
		Global_23977 = Global_23978;
		Global_23979 = Global_23980;
		Global_22602.f_370 = Global_23972;
		Global_22602.f_368 = Global_23970;
		Global_22602.f_369 = Global_23971;
		Global_22979 = Global_22980;
	
		if (Global_22989)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21610.f_1 > 3)
					return 0;
			}
		
			if (Global_21576 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_15())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80280)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_21610.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_9463, 9))
					return 0;
			}
		
			func_13();
			Global_22993 = bParam2;
		}
	
		Global_22985 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22602, sParam0, 24);
		Global_21849 = 0;
		func_12();
		func_6();
		return 1;
	}

	if (Global_22983 == 5)
		return 0;

	if (iParam1 < Global_22985 || iParam1 == Global_22985)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}

	return 0;
}

void func_6() // Position - 0x9C8 (2504)
{
	if (!func_7())
		return;

	if (Global_22989)
	{
		TEXT_LABEL_COPY(&(Global_1978568.f_1), { Global_22602 }, 4);
		Global_1978568 = Global_8778;
		Global_1978568.f_6 = Global_22993;
	}

	return;
}

BOOL func_7() // Position - 0x9FF (2559)
{
	if (!Global_262145.f_28485)
		return false;

	if (!Global_80280)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_8(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_8(Player plParam0) // Position - 0xA62 (2658)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_10(8))
			return true;
	
		if (Global_2733002.f_5971.f_1 > 0)
			return true;
	}

	return func_9(plParam0, 20);
}

BOOL func_9(Player plParam0, int iParam1) // Position - 0xA99 (2713)
{
	return IS_BIT_SET(Global_1892653[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_10(int iParam0) // Position - 0xAB1 (2737)
{
	return IS_BIT_SET(Global_2733002.f_5960, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xAC3 (2755)
{
	return -1;
}

void func_12() // Position - 0xACC (2764)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21851[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22983 = 1;
	return;
}

void func_13() // Position - 0xAFD (2813)
{
	Global_23036 = Global_23035;
	Global_23030 = Global_23031;
	Global_23077 = { Global_23065 };
	Global_23083 = { Global_23071 };
	Global_23038 = Global_23037;
	Global_23107 = { Global_23089 };
	Global_23113 = { Global_23095 };
	Global_23119 = { Global_23101 };
	Global_23125 = { Global_23131 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_22994 = Global_22995;
	Global_22996 = Global_22997;
	Global_22998 = { Global_23014 };
	Global_22987 = Global_22988;
	Global_23999 = false;
	Global_23032 = 0;
	Global_23033 = false;
	MISC::CLEAR_BIT(&Global_9464, 16);
	return;
}

BOOL func_14() // Position - 0xB92 (2962)
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
		return true;

	return false;
}

BOOL func_15() // Position - 0xBB9 (3001)
{
	int num;
	int weaponHash;

	if (Global_80280)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xC52 (3154)
{
	if (func_23(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xCF4 (3316)
{
	func_18();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_18() // Position - 0xD0D (3341)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_19(character) && !func_23(14) || Global_113852)
			{
				if (Global_114904.f_2370.f_539.f_4321 != character && func_19(Global_114904.f_2370.f_539.f_4321))
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

BOOL func_19(eCharacter echParam0) // Position - 0xE0A (3594)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xE16 (3606)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xE53 (3667)
{
	if (func_19(character))
		return func_22(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_22(eCharacter echParam0) // Position - 0xE78 (3704)
{
	return Global_2339[echParam0 /*29*/];
}

BOOL func_23(int iParam0) // Position - 0xE87 (3719)
{
	return Global_44869 == iParam0;
}

void func_24() // Position - 0xE95 (3733)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_22272[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22272[i /*10*/].f_1), "", 24);
		Global_22272[i /*10*/].f_7 = 0;
		Global_22272[i /*10*/].f_8 = 0;
	}

	Global_22272.f_161 = -99;
	Global_22272.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_25(int iParam0, int iParam1) // Position - 0xEEC (3820)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677542.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677542.f_1048, iParam0);
}

void func_26() // Position - 0xF24 (3876)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21610.f_1 == 9 || Global_21609 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
		Global_21610.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}

	return;
}

void func_27(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xF7B (3963)
{
	Global_22437 = { *uParam0 };
	Global_8779 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23053, sParam2, 24);
	Global_23972 = iParam5;

	if (iParam3 == 0)
	{
		Global_23970 = 1;
		Global_23968 = 0;
	}
	else
	{
		Global_23970 = 0;
		Global_23968 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23971 = 1;
		Global_23969 = 0;
	}
	else
	{
		Global_23971 = 0;
		Global_23969 = 1;
	}

	return;
}

void func_28() // Position - 0xFD1 (4049)
{
	Global_21849 = 0;
	func_29();
	return;
}

void func_29() // Position - 0xFE1 (4065)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
	}

	return;
}

Blip func_30(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1002 (4098)
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_31(BOOL bParam0, var uParam1, var uParam2) // Position - 0x102E (4142)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_32() // Position - 0x1045 (4165)
{
	switch (iLocal_129)
	{
		case 0:
			func_28();
			BUILTIN::WAIT(0);
			func_59(true, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			bLocal_308 = false;
			iLocal_129 = iLocal_129 + 1;
			break;
	
		case 1:
			iLocal_129 = iLocal_129 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedLocal_53) && !PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_54) && !PED::IS_PED_INJURED(pedLocal_56) && !ENTITY::IS_ENTITY_DEAD(veLocal_130, false))
			{
				if (func_58())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(veLocal_130, "SDRM_Car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_53, "Groom", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_55, "Groomsman", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_54, "Bride", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_56, "Father_of_the_bride", 0, 0, 0);
					CUTSCENE::START_CUTSCENE(4);
					iLocal_129 = iLocal_129 + 1;
				}
			}
			break;
	
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_130, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_130, 1084227584);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_130, true);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
				}
			
				iLocal_129 = iLocal_129 + 1;
			}
			break;
	
		case 4:
			PED::DELETE_PED(&pedLocal_53);
			PED::DELETE_PED(&pedLocal_55);
			PED::DELETE_PED(&pedLocal_54);
			PED::DELETE_PED(&pedLocal_56);
			func_59(false, true, true, false, false, false, false);
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			func_33();
			break;
	}

	return;
}

void func_33() // Position - 0x11A8 (4520)
{
	while (!func_57())
	{
		BUILTIN::WAIT(0);
	}

	func_37(-1, 0);
	func_34();
	func_186();
	return;
}

void func_34() // Position - 0x11CE (4558)
{
	func_35();
	return;
}

int func_35() // Position - 0x11DB (4571)
{
	if (func_36(false))
		return 0;

	if (Global_102468.f_8)
		if (Global_102468.f_10 > 0)
			return 0;
	else if (Global_102468.f_10 > 1)
		return 0;

	Global_102468.f_10 = Global_102468.f_10 + 1;
	return 1;
}

BOOL func_36(BOOL bParam0) // Position - 0x1226 (4646)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80529, 0);
}

void func_37(int iParam0, int iParam1) // Position - 0x124E (4686)
{
	if (iParam0 == -1)
		iParam0 = func_55();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_54(iParam0))
	{
		func_53(iParam0, iParam1);
	
		if (!func_52(51))
		{
			func_48("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_51(), 0, 138, 0);
			func_47(51);
		}
	
		if (func_46(iParam0))
			Global_114904.f_25002.f_2 = 3;
	
		if (func_45(iParam0, iParam1) != 322)
			func_39(func_45(iParam0, iParam1), uLocal_43, uLocal_43.f_1);
	
		Global_114892 = iParam1;
	
		if (Global_114890 == 0)
			if (Global_114893 == 1 || Global_114893 == 5 || Global_114893 == 11 || Global_114893 == 25)
				func_38(2);
			else if (Global_114893 == 26 || Global_114893 == 8 || Global_114893 == 17)
				func_38(7);
			else
				func_38(1);
	}

	return;
}

void func_38(int iParam0) // Position - 0x1351 (4945)
{
	Global_114890 = iParam0;
	return;
}

void func_39(int iParam0, var uParam1, var uParam2) // Position - 0x135F (4959)
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_114904.f_10201[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114904.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114904.f_10201[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114904.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114904.f_10201[iParam0 /*12*/].f_10 = uParam1;
		Global_114904.f_10201[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0") /* TUNEABLE: NUM_HIDDEN_PACKAGES_0, NUM_HIDDEN_PACKAGES_0 */, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1") /* TUNEABLE: NUM_HIDDEN_PACKAGES_1, NUM_HIDDEN_PACKAGES_1 */, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3") /* TUNEABLE: NUM_HIDDEN_PACKAGES_3, NUM_HIDDEN_PACKAGES_3 */, 50, 0);
	}

	if (flag)
		func_40();

	return;
}

void func_40() // Position - 0x1445 (5189)
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_114640 = 0;
	Global_114641 = 0;
	Global_114642 = 0;
	Global_114643 = 0;
	Global_114644 = 0;
	Global_114645 = 0;
	Global_114646 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114904.f_10201.f_3853;
	Global_114904.f_10201.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114904.f_10201[num /*12*/].f_5 == true)
		{
			switch (Global_114904.f_10201[num /*12*/].f_6)
			{
				case 1:
					Global_114640 = Global_114640 + 1;
					num2 = num2 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114641 = Global_114641 + 1;
					num3 = num3 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114642 = Global_114642 + 1;
					num4 = num4 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114643 = Global_114643 + 1;
					num5 = num5 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114644 = Global_114644 + 1;
					num6 = num6 + (Global_114904.f_10201[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114645 = Global_114645 + 1;
					num7 = num7 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114646 = Global_114646 + 1;
					num8 = num8 + Global_114904.f_10201[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114623 > 0)
		if (Global_114640 == Global_114623)
			num2 = 55f;

	if (Global_114624 > 0)
		if (Global_114641 == Global_114624)
			num3 = 10f;

	if (Global_114625 > 0)
		if (Global_114642 == Global_114625)
			num4 = 0f;

	if (Global_114626 > 0)
		if (Global_114643 == Global_114626)
			num5 = 10f;

	if (Global_114627 > 0)
	{
		if (Global_114644 == Global_114627 || (Global_114627 * 10) / Global_114644 < 41 || Global_114644 > Global_114630 || Global_114644 == Global_114630)
		{
			if (!IS_BIT_SET(Global_114904.f_10201.f_3856, 14))
			{
				if (Global_114644 == Global_114627)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, Global_114627, 0);
					MISC::SET_BIT(&(Global_114904.f_10201.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114628 > 0)
		if (Global_114645 == Global_114628)
			num7 = 15f;

	if (Global_114629 > 0)
		if (Global_114646 == Global_114629)
			num8 = 5f;

	Global_114904.f_10201.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114644 > Global_114630 || Global_114644 == Global_114630)
		value2 = Global_114630;
	else
		value2 = Global_114644;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED") /* TUNEABLE: NUM_MISSIONS_COMPLETED, NUM_MISSIONS_COMPLETED */, Global_114640, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE") /* TUNEABLE: NUM_MISSIONS_AVAILABLE */, Global_114623, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED") /* TUNEABLE: NUM_MINIGAMES_COMPLETED, NUM_MINIGAMES_COMPLETED */, Global_114641, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE") /* TUNEABLE: NUM_MINIGAMES_AVAILABLE */, Global_114624, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED") /* TUNEABLE: NUM_ODDJOBS_COMPLETED */, Global_114642, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE") /* TUNEABLE: NUM_ODDJOBS_AVAILABLE */, Global_114625, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED") /* TUNEABLE: NUM_RNDPEOPLE_COMPLETED, NUM_RNDPEOPLE_COMPLETED */, Global_114643, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE") /* TUNEABLE: NUM_RNDPEOPLE_AVAILABLE */, Global_114626, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE") /* TUNEABLE: NUM_RNDEVENTS_AVAILABLE */, Global_114630, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED") /* TUNEABLE: NUM_MISC_COMPLETED, NUM_MISC_COMPLETED */, Global_114646 + Global_114645, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE") /* TUNEABLE: NUM_MISC_AVAILABLE */, Global_114629 + Global_114628, true);
	Global_114647 = (Global_114640 * 100) / Global_114623;
	Global_114649 = ((Global_114642 + Global_114641) * 100) / (Global_114625 + Global_114624);
	Global_114648 = ((Global_114643 + value2) * 100) / (Global_114626 + Global_114630);
	Global_114650 = ((Global_114645 + Global_114646) * 100) / (Global_114628 + Global_114629);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE") /* TUNEABLE: TOTAL_PROGRESS_MADE */, Global_114904.f_10201.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS") /* TUNEABLE: PERCENT_STORY_MISSIONS */, Global_114647, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS") /* TUNEABLE: PERCENT_AMBIENT_MISSIONS */, Global_114648, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS") /* TUNEABLE: PERCENT_ODDJOBS */, Global_114649, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114904.f_10201.f_3853))
		func_42(13, BUILTIN::FLOOR(Global_114904.f_10201.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80280)
		{
			if (func_41() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114638 = false;
			
				if (!Global_65010)
					func_35();
			}
		}
	}

	return;
}

int func_41() // Position - 0x1903 (6403)
{
	return Global_33775;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x190E (6414)
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x195F (6495)
{
	if (iParam2 == -1)
		iParam2 = func_44();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_44() // Position - 0x197D (6525)
{
	return Global_1574927;
}

int func_45(int iParam0, int iParam1) // Position - 0x1989 (6537)
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_46(int iParam0) // Position - 0x1CFD (7421)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_47(int iParam0) // Position - 0x1D2C (7468)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114904.f_20417.f_150[i], offset);

	return;
}

void func_48(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1D6E (7534)
{
	func_49(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_49(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1D8F (7567)
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_114904.f_20417.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114904.f_20417[i /*16*/], sParam0))
			return;
	}

	if (Global_114904.f_20417.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_12 = iParam2;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114904.f_20417.f_145 = Global_114904.f_20417.f_145 + 1;
		func_50();
	}

	return;
}

void func_50() // Position - 0x1F62 (8034)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114904.f_20417.f_146[i] = 0;
	}

	for (i = 0; i < Global_114904.f_20417.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114904.f_20417[i /*16*/].f_11, 0))
			if (Global_114904.f_20417[i /*16*/].f_12 > Global_114904.f_20417.f_146[0])
				Global_114904.f_20417.f_146[0] = Global_114904.f_20417[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114904.f_20417[i /*16*/].f_11, 1))
			if (Global_114904.f_20417[i /*16*/].f_12 > Global_114904.f_20417.f_146[1])
				Global_114904.f_20417.f_146[1] = Global_114904.f_20417[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114904.f_20417[i /*16*/].f_11, 2))
			if (Global_114904.f_20417[i /*16*/].f_12 > Global_114904.f_20417.f_146[2])
				Global_114904.f_20417.f_146[2] = Global_114904.f_20417[i /*16*/].f_12;
	}

	return;
}

int func_51() // Position - 0x2079 (8313)
{
	func_18();

	switch (Global_114904.f_2370.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

BOOL func_52(int iParam0) // Position - 0x20BF (8383)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114904.f_20417.f_150[i], num);

	return false;
}

void func_53(int iParam0, int iParam1) // Position - 0x20FF (8447)
{
	MISC::SET_BIT(&Global_114904.f_25002.f_8[iParam0], iParam1);
	return;
}

int func_54(int iParam0) // Position - 0x211A (8474)
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_55() // Position - 0x21CB (8651)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_56(unk);
	return num;
}

int func_56(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x21E8 (8680)
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

BOOL func_57() // Position - 0x23C2 (9154)
{
	return true;
}

BOOL func_58() // Position - 0x23CB (9163)
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_80279)
		if (!hasCutsceneLoaded)
			Global_80279 = true;

	return hasCutsceneLoaded;
}

void func_59(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x23EE (9198)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_67(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21610.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_14())
				Global_21610.f_1 = 3;
		
			Global_22983 = 5;
		}
	
		func_66(true, bParam3, bParam2, false);
		Global_65016 = true;
		Global_77345 = true;
		Global_80278 = true;
	}
	else
	{
		func_67(0);
		HUD::THEFEED_RESUME();
		Global_65016 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_66(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(PLAYER::PLAYER_ID()) && !func_61(PLAYER::PLAYER_ID(), 0) && !func_60() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80278 = false;
	}

	return;
}

BOOL func_60() // Position - 0x253D (9533)
{
	return IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18, 14);
}

BOOL func_61(Player plParam0, int iParam1) // Position - 0x2557 (9559)
{
	BOOL flag;

	if (!func_63(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_62(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845250[plParam0 /*880*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_62(int iParam0, BOOL bParam1) // Position - 0x25B0 (9648)
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_44();

	if (Global_1575070[num] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574921[num];
		bParam1;
	}

	return character;
}

BOOL func_63(Player plParam0) // Position - 0x25F1 (9713)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_64(Player plParam0) // Position - 0x2613 (9747)
{
	if (func_61(plParam0, 0))
		return true;

	if (func_65())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_65() // Position - 0x2652 (9810)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_66(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2660 (9824)
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_67(int iParam0) // Position - 0x2693 (9875)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 13);
	else
		MISC::CLEAR_BIT(&Global_9463, 13);

	return;
}

BOOL func_68(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26B6 (9910)
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

void func_69() // Position - 0x279B (10139)
{
	if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
	{
		if (!bLocal_115)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false) && PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_57, false))
			{
				bLocal_115 = true;
			
				if (HUD::DOES_BLIP_EXIST(blLocal_317))
					HUD::REMOVE_BLIP(&blLocal_317);
			
				if (bLocal_120 && !bLocal_116)
					if (!HUD::DOES_BLIP_EXIST(blLocal_318))
						blLocal_318 = func_30(uLocal_65, true);
			
				!func_73();
			}
		}
	
		if (!bLocal_115 && !bLocal_117)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_57, false))
				{
					!func_73();
				
					if (HUD::DOES_BLIP_EXIST(blLocal_317))
						HUD::REMOVE_BLIP(&blLocal_317);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_317))
					{
						blLocal_317 = func_72(pedLocal_53, false, 145);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_317, true);
					}
				
					bLocal_115 = false;
					bLocal_117 = true;
				}
			}
		}
	
		if (bLocal_115)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false))
			{
				!func_73();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_317))
				{
					blLocal_317 = func_70(veLocal_57, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_317, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_318))
					HUD::REMOVE_BLIP(&blLocal_318);
			
				bLocal_115 = false;
			}
		
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false) && !PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_57, false))
			{
				!func_73();
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_317))
				{
					blLocal_317 = func_70(veLocal_57, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_317, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_318))
					HUD::REMOVE_BLIP(&blLocal_318);
			
				bLocal_115 = false;
			}
		}
	}

	return;
}

Blip func_70(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x292A (10538)
{
	return func_71(veParam0, !bParam1, bParam2);
}

Blip func_71(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x293D (10557)
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

Blip func_72(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x29E1 (10721)
{
	Blip blip;

	blip = func_71(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2339[iParam2 /*29*/].f_3));

	return blip;
}

BOOL func_73() // Position - 0x2A2B (10795)
{
	if (Global_22983 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_74() // Position - 0x2A4D (10829)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_319))
					{
						HUD::REMOVE_BLIP(&blLocal_319);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_318))
							blLocal_318 = func_30(uLocal_65, true);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_319))
					{
						HUD::REMOVE_BLIP(&blLocal_319);
					
						if (!HUD::DOES_BLIP_EXIST(blLocal_318))
							blLocal_318 = func_30(uLocal_65, true);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(blLocal_318))
				{
					HUD::REMOVE_BLIP(&blLocal_318);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_319))
						blLocal_319 = func_72(pedLocal_53, false, 145);
				}
			
				PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID());
			}
			else if (HUD::DOES_BLIP_EXIST(blLocal_318))
			{
				HUD::REMOVE_BLIP(&blLocal_318);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
					blLocal_319 = func_72(pedLocal_53, false, 145);
			}
		
			if (!PED::IS_PED_IN_GROUP(pedLocal_53))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_53);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_53);
					PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
					PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
				}
			}
		}
	}

	return;
}

int func_75() // Position - 0x2BE1 (11233)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_76() // Position - 0x2BF1 (11249)
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_79())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_53))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_53, 0, 0);
			
				if (!bLocal_123)
				{
					if (!func_73())
					{
						bLocal_123 = true;
					
						if (func_78())
							func_77(&uLocal_134, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						else
							func_77(&uLocal_134, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
					}
				}
			}
			else
			{
				bLocal_123 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) == 0 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 0)
				{
					TASK::CLEAR_PED_TASKS(pedLocal_53);
				
					if (!PED::IS_PED_IN_GROUP(pedLocal_53))
					{
						PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
						PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_53) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
		}
	}

	return;
}

BOOL func_77(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2D7F (11647)
{
	func_27(uParam0, _CHAR_NULL, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_22990 = false;
	Global_22997 = false;
	Global_22992 = false;
	Global_23974 = 1;
	Global_23976 = false;
	Global_23980 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_23987, sParam3, 24);
	Global_2883585 = 0;
	return func_5(sParam2, iParam4, false);
}

BOOL func_78() // Position - 0x2DD3 (11731)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

BOOL func_79() // Position - 0x2E3E (11838)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
				return true;

	return false;
}

void func_80(Ped pedParam0, BOOL bParam1) // Position - 0x2F60 (12128)
{
	BOOL flag;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		flag = false;
	
		if (bParam1)
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedParam0))
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(pedParam0, false))
					flag = true;
		else
			flag = false;
	
		if (!PED::IS_PED_HEADTRACKING_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID()))
			if (!flag)
				TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), -1, SLF_SLOW_TURN_RATE | 2048, 2);
		else if (flag)
			if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(pedParam0))
				TASK::TASK_CLEAR_LOOK_AT(pedParam0);
	}

	return;
}

void func_81() // Position - 0x2FE7 (12263)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_95("stagd_chape_1"))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_318))
					blLocal_318 = func_30(uLocal_65, true);
			
				bLocal_120 = true;
			}
		
			if (func_95("stagd_chape_3"))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			
				if (!PED::IS_PED_INJURED(pedLocal_53))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 30600);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 13.5f, 13.5f, 13.5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(pedLocal_53, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (iLocal_47 == 0)
					{
						if (BUILTIN::TIMERB() > 5000)
						{
							if (iLocal_128 == 0)
							{
								if (!func_73())
								{
									func_94();
								
									if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", sLocal_300, 4, 0, 0, 0))
										bLocal_308 = true;
								
									bLocal_119 = true;
									iLocal_128 = iLocal_128 + 1;
									BUILTIN::SETTIMERB(0);
								}
							}
						}
					
						if (BUILTIN::TIMERB() > 5000)
						{
							if (iLocal_128 == 1)
							{
								if (!func_73())
								{
									HUD::DISPLAY_HUD(true);
									HUD::DISPLAY_RADAR(true);
									iLocal_128 = iLocal_128 + 1;
									BUILTIN::SETTIMERB(0);
								}
							}
						}
					
						if (BUILTIN::TIMERB() > 2500)
						{
							if (iLocal_128 == 2)
							{
								if (!func_73())
								{
									func_94();
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_tailM", 4, 0, 0, 0);
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_tailF", 4, 0, 0, 0);
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_tailT", 4, 0, 0, 0);
								
									iLocal_128 = iLocal_128 + 1;
									BUILTIN::SETTIMERB(0);
								}
							}
						}
					}
				
					if (!bLocal_122)
					{
						if (iLocal_47 == 3)
						{
							if (!func_73())
							{
								if (iLocal_128 == 0)
								{
									_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_128 = iLocal_128 + 1;
								}
							}
						}
					
						if (iLocal_47 == 3)
							if (BUILTIN::TIMERB() > 5000)
								if (iLocal_128 == 0)
									if (!func_73())
										iLocal_128 = iLocal_128 + 1;
					
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_85, 150f, 150f, 150f, false, true, 0))
						{
							if (iLocal_301 == 0)
							{
								if (iLocal_305 == func_82(func_83()) + 11)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_301 = 1;
									}
								}
							}
						
							if (iLocal_301 < 2)
							{
								if (iLocal_305 == func_82(func_83()) + 10)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_301 = 2;
									}
								}
							}
						
							if (iLocal_301 < 3)
							{
								if (iLocal_305 == func_82(func_83()) + 9)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_301 = 3;
									}
								}
							}
						
							if (iLocal_301 < 4)
							{
								if (iLocal_305 == func_82(func_83()) + 8)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_301 = 4;
									}
								}
							}
						
							if (iLocal_301 < 5)
								if (iLocal_305 == func_82(func_83()) + 7)
									if (!func_73())
										iLocal_301 = 5;
						
							if (iLocal_301 < 6)
								if (iLocal_305 == func_82(func_83()) + 6)
									if (!func_73())
										iLocal_301 = 6;
						
							if (iLocal_301 < 7)
								if (iLocal_305 == func_82(func_83()) + 5)
									if (!func_73())
										iLocal_301 = 7;
						
							if (iLocal_301 < 8)
								if (iLocal_305 == func_82(func_83()) + 4)
									if (!func_73())
										iLocal_301 = 8;
						
							if (iLocal_301 < 9)
							{
								if (iLocal_305 == func_82(func_83()) + 3)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 9;
									}
								}
							}
						
							if (iLocal_301 < 10)
							{
								if (iLocal_305 == func_82(func_83()) + 2)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 10;
									}
								}
							}
						
							if (iLocal_301 < 11)
							{
								if (iLocal_305 == func_82(func_83()) + 1)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_301 < 6)
							{
								if (iLocal_305 == func_82(func_83()) + 6)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						
							if (iLocal_301 < 7)
							{
								if (iLocal_305 == func_82(func_83()) + 5)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						
							if (iLocal_301 < 8)
							{
								if (iLocal_305 == func_82(func_83()) + 4)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						
							if (iLocal_301 < 9)
							{
								if (iLocal_305 == func_82(func_83()) + 3)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						
							if (iLocal_301 < 10)
							{
								if (iLocal_305 == func_82(func_83()) + 2)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						
							if (iLocal_301 < 11)
							{
								if (iLocal_305 == func_82(func_83()) + 1)
								{
									if (!func_73())
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_301 = iLocal_301 + 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

int func_82(int iParam0) // Position - 0x3584 (13700)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_83() // Position - 0x3597 (13719)
{
	var unk;

	func_93(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_92(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_91(&unk, CLOCK::GET_CLOCK_HOURS());
	func_86(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_85(&unk, CLOCK::GET_CLOCK_MONTH());
	func_84(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_84(var uParam0, int iParam1) // Position - 0x35DD (13789)
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_85(var uParam0, int iParam1) // Position - 0x3663 (13923)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x3696 (13974)
{
	int num;
	int num2;

	num = func_90(*uParam0);
	num2 = func_88(*uParam0);

	if (iParam1 < 1 || iParam1 > func_87(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_87(int iParam0, int iParam1) // Position - 0x36E7 (14055)
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_88(int iParam0) // Position - 0x3789 (14217)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_89(BOOL bParam0, var uParam1, var uParam2) // Position - 0x37AB (14251)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_90(int iParam0) // Position - 0x37C2 (14274)
{
	return iParam0 & 15;
}

void func_91(var uParam0, int iParam1) // Position - 0x37CF (14287)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_92(var uParam0, int iParam1) // Position - 0x3809 (14345)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_93(var uParam0, int iParam1) // Position - 0x3844 (14404)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_94() // Position - 0x3880 (14464)
{
	Global_21849 = 0;
	func_26();
	return;
}

BOOL func_95(char* sParam0) // Position - 0x3890 (14480)
{
	var string2;

	if (func_73())
	{
		TEXT_LABEL_COPY(&string2, { func_96() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

struct<6> func_96() // Position - 0x38B8 (14520)
{
	var unk;
	int currentScriptedConversationLine;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_22983 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_23993;
	
		if (currentScriptedConversationLine > -1)
			return Global_21851[currentScriptedConversationLine /*6*/];
		else
			return unk;
	}

	return unk;
}

void func_97() // Position - 0x38FE (14590)
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	eViewModeContext camActiveViewModeContext2;
	eViewMode camViewModeForContext2;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
		{
			if (!PED::IS_PED_INJURED(pedLocal_53))
			{
				if (!bLocal_127 && bLocal_116)
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
					camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
				
					if (camActiveViewModeContext != ON_FOOT)
					{
						camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
					
						if (camViewModeForContext != FIRST_PERSON)
						{
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_TIMELINE_PICKUP_CLIP, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_BEHIND, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_RESTART, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_ADVANCE, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_BACK, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_REPLAY_TOOLS, true);
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
						}
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_53, -2002.008f, 455.58f, 101.0381f, -2009.7614f, 453.2027f, 105.9135f, 12.4375f, false, true, 0) || BUILTIN::TIMERA() > 5000)
					{
						bLocal_127 = true;
						BUILTIN::SETTIMERA(0);
						func_59(true, true, true, false, false, false, false);
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
					
						while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("superd")))
						{
							BUILTIN::WAIT(0);
						}
					
						caLocal_132 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.49612f, 103.55235f, -6.509435f, -0.037031f, -95.98762f, 29.001434f, false, 2);
						caLocal_133 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2014.3337f, 456.418f, 103.31525f, -6.198685f, -0.037031f, -100.57357f, 29.001434f, false, 2);
						CAM::SHAKE_CAM(caLocal_132, "HAND_SHAKE", 0.25f);
						CAM::SHAKE_CAM(caLocal_133, "HAND_SHAKE", 0.25f);
						CAM::SET_CAM_ACTIVE(caLocal_132, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						BUILTIN::WAIT(1000);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_133, caLocal_132, 4000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(uLocal_97, 10f, false, false, false, false, false, false, 0);
					
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), uLocal_97, 8f, 8f, 8f, false, true, 0))
							{
								veLocal_131 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_131, true, false);
								VEHICLE::DELETE_VEHICLE(&veLocal_131);
							}
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_57, 1);
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_317))
							{
								blLocal_317 = func_70(veLocal_57, false, false);
								HUD::SET_BLIP_AS_FRIENDLY(blLocal_317, true);
							}
						}
					
						bLocal_115 = false;
					}
				}
			
				if (bLocal_127 && CAM::DOES_CAM_EXIST(caLocal_132))
				{
					if (BUILTIN::TIMERA() > 5700 && !bLocal_315)
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							bLocal_315 = true;
						}
					}
				
					if (BUILTIN::TIMERA() > 6000)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						func_59(false, true, true, false, false, false, false);
						CAM::SET_CAM_ACTIVE(caLocal_132, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(caLocal_132, false);
						CAM::STOP_GAMEPLAY_HINT(false);
					}
				}
			
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2201.4172f, 4296.06f, 47.5076f, 100f, 100f, 100f, false, true, 0))
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_85, 5f, false, false, false, false, false, false, 0);
			}
		
			if (!bLocal_121)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_101, 100f, 100f, 100f, false, true, 0))
				{
					STREAMING::REQUEST_MODEL(joaat("IG_BestMen"));
				
					if (STREAMING::HAS_MODEL_LOADED(joaat("IG_BestMen")))
					{
						pedLocal_55 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BestMen"), -2202.7468f, 4299.008f, 47.4293f, 73.0028f, true, true);
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_134, 4, pedLocal_55, "BESTMAN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(pedLocal_55, PV_COMP_HEAD, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_55, joaat("PLAYER"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, true);
						PED::SET_PED_CONFIG_FLAG(pedLocal_55, 185, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_111);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
						bLocal_121 = true;
					}
				}
			}
		
			if (!bLocal_122)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_75, 20f, 20f, 20f, false, true, 0))
				{
					func_28();
				
					if (!func_73())
					{
						_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_122 = true;
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_68, uLocal_71, fLocal_74, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedLocal_53, uLocal_68, uLocal_71, fLocal_74, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, uLocal_65, 0f, 0f, 2f, true, true, 0) && func_68(true, false, true) || bLocal_116)
			{
				switch (iLocal_47)
				{
					case 0:
						HUD::REMOVE_BLIP(&blLocal_318);
					
						if (!bLocal_116)
						{
							uLocal_65 = { uLocal_101 };
						
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 4, false);
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
							{
								camActiveViewModeContext2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
							
								if (camActiveViewModeContext2 != ON_FOOT)
								{
									camViewModeForContext2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext2);
								
									if (camViewModeForContext2 == FIRST_PERSON)
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 5000, 0, 2);
									}
									else
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_57, 5000, SLF_EXTEND_YAW_LIMIT | 2048, 4);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(veLocal_57, 0f, 0f, 0f, true, -1, 3000, 2000);
									}
								}
							}
						
							func_28();
						
							if (!func_73())
							{
								_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_wait1", 4, 0, 0, 0);
							
								if (!PED::IS_PED_INJURED(pedLocal_53))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_53);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2013.0945f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_97, 3f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
									PED::SET_PED_KEEP_TASK(pedLocal_53, true);
								}
							
								bLocal_116 = true;
								BUILTIN::SETTIMERA(0);
							}
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_53) && !ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
						{
							if (bLocal_116 && ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, uLocal_97, 1f, 1f, 1f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
							{
								if (PED::IS_PED_IN_GROUP(pedLocal_53))
								{
									if (!func_73())
										if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
											_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_reply", 4, 0, 0, 0);
								
									PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
								}
							
								if (ENTITY::IS_ENTITY_OCCLUDED(pedLocal_53))
								{
									if (!PED::IS_PED_INJURED(pedLocal_53))
									{
										ENTITY::SET_ENTITY_VISIBLE(pedLocal_53, false, false);
										ENTITY::SET_ENTITY_COLLISION(pedLocal_53, false, false);
										ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_53, true, false);
										ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, true);
									}
								
									if (BUILTIN::TIMERA() > 15000)
									{
										if (!PED::IS_PED_INJURED(pedLocal_53))
										{
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HAIR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HEAD, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_UPPR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_LOWR, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_JBIB, 0, 0, 0);
											ENTITY::SET_ENTITY_VISIBLE(pedLocal_53, true, false);
											ENTITY::SET_ENTITY_COLLISION(pedLocal_53, true, false);
											ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_53, false, false);
											ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, false);
											ENTITY::SET_ENTITY_COORDS(pedLocal_53, uLocal_97, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(pedLocal_53, 106.5078f);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_AlwaysFlee, true);
											PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(pedLocal_53, true);
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, -1, SLF_WHILE_NOT_IN_FOV, 4);
										
											if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
												TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
												TASK::TASK_ENTER_VEHICLE(0, veLocal_57, -1, 0, 2f, 1, 0);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
											}
										}
									
										BUILTIN::SETTIMERA(0);
										uLocal_65 = { uLocal_101 };
										uLocal_68 = { uLocal_104 };
										uLocal_71 = { uLocal_107 };
										fLocal_74 = fLocal_110;
										iLocal_47 = 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(pedLocal_53) && !ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, veLocal_57, 5f, 5f, 5f, false, true, 0) && !bLocal_126)
							{
								_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_suit", 4, 0, 0, 0);
								bLocal_126 = true;
							}
						
							if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false))
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_47 = 2;
										bLocal_116 = false;
										iLocal_128 = 0;
									}
								}
								else
								{
									if (iLocal_306 == 0)
										iLocal_306 = MISC::GET_GAME_TIMER();
								
									if (iLocal_306 != 0 && MISC::GET_GAME_TIMER() > iLocal_306 + 6000)
									{
										_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_306 = 0;
									}
								
									BUILTIN::SETTIMERA(0);
								}
							}
						}
						break;
				
					case 2:
						if (!bLocal_116)
						{
							func_28();
						
							if (_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
									{
										veLocal_130 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									}
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_55) && !PED::IS_PED_INJURED(pedLocal_53))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
									{
										veLocal_130 = PED::GET_VEHICLE_PED_IS_IN(pedLocal_53, false);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
										TASK::TASK_ENTER_VEHICLE(0, veLocal_130, -1, 2, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_111);
										PED::SET_PED_CONFIG_FLAG(pedLocal_55, 185, false);
									}
									else
									{
										TASK::TASK_GO_TO_ENTITY(pedLocal_55, pedLocal_53, -1, 8f, 1073741824, 1073741824, 0);
									}
								
									if (!HUD::DOES_BLIP_EXIST(blLocal_320))
										blLocal_320 = func_72(pedLocal_55, false, 145);
								
									if (HUD::DOES_BLIP_EXIST(blLocal_318))
										HUD::REMOVE_BLIP(&blLocal_318);
								}
							
								BUILTIN::SETTIMERA(0);
								bLocal_118 = true;
								bLocal_116 = true;
							}
						}
					
						if (bLocal_116 && !PED::IS_PED_INJURED(pedLocal_53))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || BUILTIN::TIMERA() > 12000)
							{
								uLocal_65 = { uLocal_75 };
								uLocal_68 = { uLocal_78 };
								uLocal_71 = { uLocal_81 };
								fLocal_74 = fLocal_84;
								STREAMING::REQUEST_MODEL(joaat("IG_Bride"));
								STREAMING::REQUEST_MODEL(joaat("washington"));
								STREAMING::REQUEST_MODEL(joaat("baller2"));
								STREAMING::REQUEST_MODEL(joaat("primo"));
							
								if (STREAMING::HAS_MODEL_LOADED(joaat("IG_Bride")) && STREAMING::HAS_MODEL_LOADED(joaat("washington")) && STREAMING::HAS_MODEL_LOADED(joaat("baller2")) && STREAMING::HAS_MODEL_LOADED(joaat("primo")))
								{
									pedLocal_54 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("IG_Bride"), -330.36f, 6154.03f, 30.8f, 90f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_54, iLocal_111);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
									pedLocal_56 = PED::CREATE_PED(PED_TYPE_CIVMALE, joaat("IG_BestMen"), -333.3692f, 6157.6436f, 30.489f, 83.2763f, true, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, true);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_56, PLAYER::PLAYER_PED_ID(), -1);
									PED::SET_PED_COMPONENT_VARIATION(pedLocal_56, PV_COMP_HEAD, 1, 0, 0);
									uLocal_58[0] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -342.1295f, 6141.4043f, 30.4839f, 133.4604f, true, true, false);
									uLocal_58[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, true, true, false);
									uLocal_58[2] = VEHICLE::CREATE_VEHICLE(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, true, true, false);
									uLocal_58[3] = VEHICLE::CREATE_VEHICLE(joaat("washington"), -322.3235f, 6135.4272f, 30.4924f, 316.5898f, true, true, false);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_58[0], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_58[1], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_58[2], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									VEHICLE::SET_VEHICLE_COLOURS(uLocal_58[3], MISC::GET_RANDOM_INT_IN_RANGE(0, 127), 0);
									iLocal_47 = 3;
									bLocal_116 = false;
									iLocal_128 = 0;
								}
							}
						}
						break;
				
					case 3:
						if (!bLocal_116)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, false);
									bLocal_116 = true;
									BUILTIN::WAIT(3000);
									func_28();
									BUILTIN::WAIT(0);
								}
							}
						}
						break;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
		{
			func_186();
		}
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x4533 (17715)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80280)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

void func_99() // Position - 0x45CE (17870)
{
	if (bLocal_308 && iLocal_305 != func_82(func_83()) && !CAM::DOES_CAM_EXIST(caLocal_132))
		func_103(((iLocal_305 * 1000 * 60) - (func_82(func_83()) * 1000 * 60)) + ((iLocal_304 * 1000) - (func_106(func_83()) * 1000)), "TIMER_TIME" /*TIME*/, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);

	if (iLocal_304 == 0)
		if (iLocal_305 == func_82(func_83()) + 1 && iLocal_304 == func_106(func_83()) - 55 || iLocal_304 == func_106(func_83()) - 56 || iLocal_304 == func_106(func_83()) - 57 || iLocal_304 == func_106(func_83()) - 58 || iLocal_304 == func_106(func_83()) - 59)
			func_102();

	if (iLocal_305 == func_82(func_83()))
	{
		func_102();
		func_100();
	
		if (!func_73())
		{
			_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_failti", 4, 0, 0, 0);
		
			if (!PED::IS_PED_INJURED(pedLocal_53))
				TASK::TASK_USE_MOBILE_PHONE(pedLocal_53, true, 1);
		
			if (!PED::IS_PED_INJURED(pedLocal_54))
				TASK::TASK_SMART_FLEE_PED(pedLocal_54, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_56))
				TASK::TASK_SMART_FLEE_PED(pedLocal_56, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		
			BUILTIN::WAIT(8500);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 3, false);
		
			BUILTIN::WAIT(2000);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_53);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_53, 0, 0);
				PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 5000, 0, 2);
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_55, 500, 0);
			}
		
			BUILTIN::WAIT(1000);
		
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_57, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
			
				if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_57)
				{
					TASK::TASK_ENTER_VEHICLE(0, veLocal_57, -1, -1, 1f, 8, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_57, PLAYER::PLAYER_PED_ID(), 8, 15f, 786469, 10f, 10f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
				PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_55, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				
					if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == veLocal_57)
					{
						TASK::TASK_ENTER_VEHICLE(0, veLocal_57, -1, 0, 1073741824, 1, 0);
						TASK::TASK_PAUSE(0, 100000);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				
					TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_111);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
					PED::SET_PED_KEEP_TASK(pedLocal_55, true);
				}
			}
		
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		
			while (func_73())
			{
				BUILTIN::WAIT(0);
			}
		
			func_2();
		}
	}

	return;
}

void func_100() // Position - 0x4902 (18690)
{
	Global_21849 = 0;
	func_101();
	return;
}

void func_101() // Position - 0x4912 (18706)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_23994 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}

	return;
}

void func_102() // Position - 0x4936 (18742)
{
	int clockHours;
	int clockMinutes;
	int clockSeconds;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockSeconds = CLOCK::GET_CLOCK_SECONDS();

	if (iLocal_307 == 0)
	{
		if (clockMinutes == 55 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 1)
	{
		if (clockMinutes == 56 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 2)
	{
		if (clockMinutes == 56 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 3)
	{
		if (clockMinutes == 57 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 4)
	{
		if (clockMinutes == 57 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 5)
	{
		if (clockMinutes == 58 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 6)
	{
		if (clockMinutes == 58 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 7)
	{
		if (clockMinutes == 58 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 8)
	{
		if (clockMinutes == 58 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 9)
	{
		if (clockMinutes == 59 && clockSeconds >= 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 10)
	{
		if (clockMinutes == 59 && clockSeconds >= 15)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 11)
	{
		if (clockMinutes == 59 && clockSeconds >= 30)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 12)
	{
		if (clockMinutes == 59 && clockSeconds >= 45)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}
	else if (iLocal_307 == 13)
	{
		if (clockMinutes >= 0 && clockHours == iLocal_305)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_307 = iLocal_307 + 1;
		}
	}

	return;
}

void func_103(ePedComponentType epctParam0, char* sParam1, int iParam2, int iParam3, ePedComponentType epctParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Position - 0x4C0B (19467)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_105(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1679103.f_1 = 1;
		func_104(7, num);
		Global_1679103.f_4714[num] = epctParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1679103.f_4714.f_11[num /*16*/], sParam1, 64);
		Global_1679103.f_4714.f_172[num] = iParam2;
		Global_1679103.f_4714.f_216[num] = iParam3;
		Global_1679103.f_4714.f_183[num] = epctParam4;
		Global_1679103.f_4714.f_194[num] = iParam5;
		Global_1679103.f_4714.f_249[num] = iParam6;
		Global_1679103.f_4714.f_260[num] = iParam7;
		Global_1679103.f_4714.f_205[num] = iParam8;
		Global_1679103.f_4714.f_314[num] = iParam9;
		Global_1679103.f_4714.f_325[num] = iParam10;
		Global_1679103.f_4714.f_357[num] = iParam11;
		Global_1679103.f_4714.f_238[num] = iParam12;
		Global_1679103.f_4714.f_271[num] = iParam13;
		Global_1679103.f_4714.f_368[num] = iParam14;
		Global_1679103.f_4714.f_379[num] = iParam15;
		Global_1679103.f_4714.f_390[num] = iParam16;
		Global_1679103.f_4714.f_227[num] = iParam17;
	}

	return;
}

void func_104(int iParam0, int iParam1) // Position - 0x4D68 (19816)
{
	MISC::SET_BIT(&Global_1679103.f_7064[iParam0], iParam1);
	return;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x4D81 (19841)
{
	return IS_BIT_SET(Global_1679103.f_7064[iParam0], iParam1);
}

int func_106(int iParam0) // Position - 0x4D97 (19863)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

void func_107() // Position - 0x4DAA (19882)
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_57, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_57, false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(veLocal_57))
				if (!func_73())
					if (_GET_RANDOM_BOOL())
						_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_crash", 4, 0, 0, 0);
					else
						_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_bump1", 4, 0, 0, 0);
			else if (PED::IS_PED_IN_VEHICLE(pedLocal_53, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				if (!func_73())
					_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_bump1", 4, 0, 0, 0);

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x4E64 (20068)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

void func_109() // Position - 0x4E82 (20098)
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_53, false);

	if (!PED::IS_PED_INJURED(pedLocal_55))
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(pedLocal_55, false);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0) || iLocal_47 == 1 || bLocal_124 || bLocal_125 || bLocal_123 || bLocal_116)
		if (iLocal_47 >= 2 && bLocal_118 && iLocal_47 != 1 && !bLocal_124 && !bLocal_125 && !bLocal_123 && !bLocal_116)
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_55, PLAYER::PLAYER_PED_ID(), 4f, 4f, 4f, false, true, 0))
				if (func_111())
					func_110(0);
			else if (func_73() && !func_111())
				func_110(1);
		else if (func_111())
			func_110(0);
	else if (func_73() && !func_111())
		func_110(1);

	return;
}

void func_110(int iParam0) // Position - 0x4F80 (20352)
{
	Global_23994 = iParam0;
	return;
}

BOOL func_111() // Position - 0x4F8D (20365)
{
	if (Global_23994 == 1)
		return true;

	return false;
}

void func_112() // Position - 0x4FA4 (20388)
{
	if (CLOCK::GET_CLOCK_HOURS() > 2 && CLOCK::GET_CLOCK_HOURS() < 15 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_53);
			func_28();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_failda", 4, 0, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_64))
				ENTITY::DETACH_ENTITY(obLocal_64, true, true);
		}
	
		while (func_73())
		{
			BUILTIN::WAIT(0);
		}
	
		func_2();
	}

	return;
}

void func_113() // Position - 0x5022 (20514)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_53))
	{
		if (!bLocal_113)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 130f, 60f, 50f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_53) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 10f, 10f, 10f, false, true, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					blLocal_319 = func_72(pedLocal_53, false, 145);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_319, false);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 2048, 4);
				}
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 10f, 10f, 10f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_319))
						HUD::SHOW_HEIGHT_ON_BLIP(blLocal_319, true);
				
					BUILTIN::SETTIMERB(0);
					func_100();
				
					while (func_73())
					{
						BUILTIN::WAIT(0);
					}
				
					if (!func_73())
					{
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
							_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_greetM", 4, 0, 0, 0);
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
							_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_greetF", 4, 0, 0, 0);
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
							_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_greetT", 4, 0, 0, 0);
					}
				
					bLocal_113 = true;
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_53))
			{
				if (!func_152() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, false, true, 0) && HUD::DOES_BLIP_EXIST(blLocal_319))
				{
					if (!func_73())
						_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_greet2", 4, 0, 0, 0);
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						veLocal_63 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				
					func_114(true);
				}
			}
		}
		else if (!bLocal_299)
		{
			if (!PED::IS_PED_INJURED(pedLocal_53))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 25f, 25f, 25f, false, true, 0))
				{
					func_28();
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_leave", 4, 0, 0, 0);
					bLocal_299 = true;
				}
			}
		}
	}

	return;
}

int func_114(BOOL bParam0) // Position - 0x524A (21066)
{
	if (func_118())
	{
		Global_114894 = true;
		Global_114891 = MISC::GET_GAME_TIMER();
	
		if (func_46(Global_114893))
			func_115(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_46(Global_114893))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_115(int iParam0) // Position - 0x529D (21149)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114904.f_25002.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_117(iParam0), -1);
					Global_114904.f_25002.f_2 = Global_114904.f_25002.f_2 + 1;
					MISC::SET_BIT(&Global_114900, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114900, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_117(iParam0), -1);
					Global_114904.f_25002.f_3 = Global_114904.f_25002.f_3 + 1;
					MISC::SET_BIT(&Global_114900, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114900, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_117(iParam0), -1);
					Global_114904.f_25002.f_4 = Global_114904.f_25002.f_4 + 1;
					MISC::SET_BIT(&Global_114900, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x5378 (21368)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

char* func_117(int iParam0) // Position - 0x538F (21391)
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

BOOL func_118() // Position - 0x53D2 (21458)
{
	switch (func_119(&Global_33835, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_119(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x5408 (21512)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99882.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_123(0))
			return 0;
	
		Global_44833 = Global_44833 + 1;
		*uParam0 = Global_44833;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24390.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44869 = iParam2;
		Global_44831 = *uParam0;
		Global_44832 = iParam4;
		Global_44830 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44830 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44830; i = i + 1)
			{
				if (Global_44836[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44831 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44830 == 8)
			return 0;
	
		Global_44833 = Global_44833 + 1;
		*uParam0 = Global_44833;
		Global_44836[Global_44830 /*4*/] = Global_44833;
		Global_44836[Global_44830 /*4*/].f_1 = iParam1;
		Global_44836[Global_44830 /*4*/].f_2 = iParam2;
		Global_44836[Global_44830 /*4*/].f_3 = 0;
		Global_44830 = Global_44830 + 1;
	
		if (iParam4 != 0)
			func_120(uParam0, iParam4);
	}

	return 2;
}

void func_120(var uParam0, int iParam1) // Position - 0x553F (21823)
{
	int i;

	if (Global_44830 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44830; i = i + 1)
	{
		if (Global_44836[i /*4*/] == *uParam0)
			Global_44836[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x558E (21902)
{
	return func_122(iParam0, Global_44869);
}

BOOL func_122(int iParam0, int iParam1) // Position - 0x559F (21919)
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_123(int iParam0) // Position - 0x5780 (22400)
{
	if (Global_44869 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

void func_124() // Position - 0x57A2 (22434)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 3f))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
				ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 99, 0, 0);
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 3f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, true);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, false);
				
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_53))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 99, 0, 0);
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 2f, 2f, 2f, false, true, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_68(true, false, true))
					{
						if (!bLocal_309)
						{
							func_114(true);
							func_59(true, true, true, false, false, false, false);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
							HUD::CLEAR_HELP(true);
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
						
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 5f, true, false, false, false);
								GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
							}
						
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_53, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(pedLocal_53, true) - { 1.5f, 4f, 3f }, true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
								}
							}
						
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								iLocal_316 = PED::CREATE_SYNCHRONIZED_SCENE(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								caLocal_132 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_316, 0.158f);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_132, iLocal_316, "untie_cam", "re@stag_do@");
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
								TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_53, iLocal_316, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_53, false, false);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_316, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								CAM::SET_CAM_ACTIVE(caLocal_132, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								bLocal_309 = true;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}

	if (bLocal_309 && !bLocal_311)
	{
		func_28();
		BUILTIN::WAIT(0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_untieM", 4, 0, 0, 0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_untieF", 4, 0, 0, 0);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_untieT", 4, 0, 0, 0);
	
		bLocal_311 = true;
	}

	if (bLocal_309 && !bLocal_310)
	{
		if (!bLocal_314)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.2f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) < 0.3f)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ROPE_CUT", PLAYER::PLAYER_PED_ID(), "ROPE_CUT_SOUNDSET", false, 0);
				bLocal_314 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.46470588f && !bLocal_315)
		{
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				bLocal_315 = true;
			}
		}
	
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_316) > 0.5f)
			bLocal_310 = true;
	
		if (func_125(1000))
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				BUILTIN::WAIT(0);
			}
		
			bLocal_310 = true;
			bLocal_313 = true;
		}
	}

	if (bLocal_310 && !bLocal_312)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_64))
			ENTITY::DETACH_ENTITY(obLocal_64, true, true);
	
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -936.6537f, 2767.4968f, 24.4289f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.4017f);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		CAM::SET_CAM_ACTIVE(caLocal_132, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(caLocal_132, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
		func_59(false, true, true, false, false, false, false);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
			PED::SET_PED_CAN_RAGDOLL(pedLocal_53, true);
			ENTITY::SET_ENTITY_COORDS(pedLocal_53, -935.6716f, 2767.7717f, 24.4289f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_53, 136.9073f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_53, false, false);
		}
	
		if (bLocal_313)
		{
			CAM::DO_SCREEN_FADE_IN(800);
		
			while (CAM::IS_SCREEN_FADING_IN())
			{
				BUILTIN::WAIT(0);
			}
		
			bLocal_313 = false;
		}
	
		bLocal_315 = false;
		bLocal_312 = true;
	}

	if (bLocal_312 && !PED::IS_PED_INJURED(pedLocal_53))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 1 && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("rhino"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_WHILE_NOT_IN_FOV, 3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
			}
			else if (!PED::IS_PED_IN_GROUP(pedLocal_53))
			{
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_53))
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_75());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
		}
	
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		blLocal_318 = func_30(uLocal_65, true);
		bLocal_112 = true;
		bLocal_114 = true;
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@");
		STREAMING::REMOVE_ANIM_DICT("re@stag_do@idle_a");
		iLocal_303 = func_82(func_83());
		iLocal_305 = iLocal_303 + 5;
		iLocal_302 = func_106(func_83());
	
		if (iLocal_302 >= 30)
		{
			iLocal_304 = 0;
			iLocal_305 = iLocal_305 + 1;
		}
	
		if (iLocal_305 > 24)
			iLocal_305 = iLocal_305 - 24;
	
		if (iLocal_305 == 0)
			sLocal_300 = "stagd_ptime0";
		else if (iLocal_305 == 1)
			sLocal_300 = "stagd_ptime1";
		else if (iLocal_305 == 2)
			sLocal_300 = "stagd_ptime2";
		else if (iLocal_305 == 3)
			sLocal_300 = "stagd_ptime3";
		else if (iLocal_305 == 4)
			sLocal_300 = "stagd_ptime4";
		else if (iLocal_305 == 5)
			sLocal_300 = "stagd_ptime5";
		else if (iLocal_305 == 6)
			sLocal_300 = "stagd_ptime6";
		else if (iLocal_305 == 7)
			sLocal_300 = "stagd_ptime7";
		else if (iLocal_305 == 8)
			sLocal_300 = "stagd_ptime8";
		else if (iLocal_305 == 9)
			sLocal_300 = "stagd_ptime9";
		else if (iLocal_305 == 10)
			sLocal_300 = "stagd_ptim10";
		else if (iLocal_305 == 11)
			sLocal_300 = "stagd_ptim11";
		else if (iLocal_305 == 12)
			sLocal_300 = "stagd_ptim12";
		else if (iLocal_305 == 13)
			sLocal_300 = "stagd_ptim13";
		else if (iLocal_305 == 14)
			sLocal_300 = "stagd_ptim14";
		else if (iLocal_305 == 15)
			sLocal_300 = "stagd_ptim15";
		else if (iLocal_305 == 16)
			sLocal_300 = "stagd_ptim16";
		else if (iLocal_305 == 17)
			sLocal_300 = "stagd_ptim17";
		else if (iLocal_305 == 18)
			sLocal_300 = "stagd_ptim18";
		else if (iLocal_305 == 19)
			sLocal_300 = "stagd_ptim19";
		else if (iLocal_305 == 20)
			sLocal_300 = "stagd_ptim20";
		else if (iLocal_305 == 21)
			sLocal_300 = "stagd_ptim21";
		else if (iLocal_305 == 22)
			sLocal_300 = "stagd_ptim22";
		else if (iLocal_305 == 23)
			sLocal_300 = "stagd_ptim23";
	}

	return;
}

BOOL func_125(int iParam0) // Position - 0x5F72 (24434)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_126())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_126() // Position - 0x5FBC (24508)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_127() // Position - 0x5FEE (24558)
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
	
		veLocal_131 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_53, false), 30f, 0, 4);
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_131, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_131, -1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_131, pedLocal_53, 30f, 30f, 30f, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_131, true, false);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_131, false))
					{
						VEHICLE::START_VEHICLE_HORN(veLocal_131, 3000, 0, false);
					
						if (!PED::IS_PED_INJURED(pedLocal_53))
							if (!func_73() && !bLocal_113)
								_CONVERSATION_ADD_LINE(&uLocal_134, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_131);
				}
			}
		}
	}

	return;
}

void func_128() // Position - 0x60C6 (24774)
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_129() // Position - 0x6133 (24883)
{
	func_130(39, true);
	func_130(40, true);
	func_130(41, true);
	func_130(42, true);
	func_130(43, true);
	func_130(44, true);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_StagGrm_01"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_MODEL(joaat("prop_stag_do_rope"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_StagGrm_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("superd")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_stag_do_rope")))
	{
		BUILTIN::WAIT(0);
	}

	STREAMING::REQUEST_ANIM_DICT("re@stag_do@");
	STREAMING::REQUEST_ANIM_DICT("re@stag_do@idle_a");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);

	while (!STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@") || !STREAMING::HAS_ANIM_DICT_LOADED("re@stag_do@idle_a") || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1))
	{
		BUILTIN::WAIT(0);
	}

	pedLocal_53 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("U_M_Y_StagGrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, true, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_53, "GROOM");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_53, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, true);
	PED::SET_PED_MONEY(pedLocal_53, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HAIR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_HEAD, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_UPPR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_LOWR, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(pedLocal_53, PV_COMP_JBIB, 1, 0, 0);
	TASK::TASK_SET_DECISION_MAKER(pedLocal_53, joaat("empty"));
	PED::SET_PED_COMBAT_MOVEMENT(pedLocal_53, CM_WillRetreat);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 206, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 134, true);
	obLocal_64 = OBJECT::CREATE_OBJECT(joaat("prop_stag_do_rope"), ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_64, pedLocal_53, PED::GET_PED_BONE_INDEX(pedLocal_53, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	veLocal_57 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -2009.0146f, 455.3556f, 101.6528f, 274.8103f, false, false, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_57, true);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(veLocal_57, 0f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_57, 3);
	VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_57, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_1(veLocal_57, 0, 73, 0);
	VEHICLE::SET_VEHICLE_MOD_COLOR_2(veLocal_57, 2, 48);
	VEHICLE::SET_VEHICLE_MOD(veLocal_57, 11, 1, false);
	VEHICLE::SET_VEHICLE_MOD(veLocal_57, 12, 1, false);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("superd"), 3);
	ENTITY::SET_ENTITY_LOD_DIST(veLocal_57, 10000);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(veLocal_57, 5f);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_57);
	uLocal_75 = { -352.88f, 6164.31f, 30.5f };
	uLocal_78 = { -355.2565f, 6164.9307f, 30.2944f };
	uLocal_81 = { -330.5575f, 6139.8516f, 34.4886f };
	fLocal_84 = 25.375f;
	uLocal_85 = { -343.5804f, 6156.198f, 30.489f };
	uLocal_88 = { -1991.1265f, 457.991f, 101.1808f };
	uLocal_91 = { -2002.6903f, 460.539f, 99.828f };
	uLocal_94 = { -1997.6046f, 445.6651f, 105.0519f };
	uLocal_97 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_100 = 24.6875f;
	uLocal_101 = { -2205.3506f, 4298.7896f, 47.265f };
	uLocal_104 = { -2207.5254f, 4301.697f, 47.1803f };
	uLocal_107 = { -2195.6367f, 4295.4067f, 51.1889f };
	fLocal_110 = 12.5625f;
	uLocal_65 = { uLocal_88 };
	uLocal_68 = { uLocal_91 };
	uLocal_71 = { uLocal_94 };
	fLocal_74 = fLocal_100;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("superd"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_85 - { 10f, 10f, 10f }, uLocal_85 + { 10f, 10f, 10f }, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_85 - { 20f, 20f, 20f }, uLocal_85 + { 20f, 20f, 20f }, false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_53, false) - { 10f, 10f, 10f }, ENTITY::GET_ENTITY_COORDS(pedLocal_53, false) + { 10f, 10f, 10f }, false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA({ 101.6406f, 455.1994f, -2007.751f } - { 15f, 15f, 15f }, { 101.6406f, 455.1994f, -2007.751f } + { 15f, 15f, 15f }, false, true, true, true, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA({ 47.4293f, 4299.008f, -2202.7468f } - { 15f, 25f, 25f }, { 47.4293f, 4299.008f, -2202.7468f } + { 15f, 25f, 25f }, false, true, true, true, 1);
	MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 10f, 0);

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
		TASK::TASK_PLAY_ANIM(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
		PED::SET_PED_KEEP_TASK(pedLocal_53, true);
	}

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_134, 3, pedLocal_53, "GROOM", 0, 1);
	bLocal_48 = true;
	return;
}

void func_130(int iParam0, BOOL bParam1) // Position - 0x6645 (26181)
{
	if (bParam1)
		if (!func_138(iParam0, 2, true))
			func_137(iParam0, 2, true);
	else if (func_138(iParam0, 2, true))
		func_131(iParam0, 2, true);

	return;
}

void func_131(int iParam0, int iParam1, BOOL bParam2) // Position - 0x667C (26236)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_102481.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_41() == 0)
		{
			address = func_135(func_136(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_132(func_136(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_114904.f_668[iParam0], iParam1);
	}

	return;
}

void func_132(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x66EC (26348)
{
	Hash statName;

	if (iParam0 != 16715)
	{
		statName = func_133(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_133(int iParam0, int iParam1) // Position - 0x671A (26394)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_134(iParam1));
}

int func_134(int iParam0) // Position - 0x672F (26415)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_44();
	
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

int func_135(int iParam0, int iParam1) // Position - 0x6763 (26467)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16715)
	{
		statHash = func_133(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_136(int iParam0) // Position - 0x6792 (26514)
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 14766;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9917;
	
		case 57:
			return 9919;
	
		case 58:
			return 11435;
	
		case 59:
			return 11846;
	
		case 60:
			return 11903;
	
		case 61:
			return 12447;
	
		case 62:
			return 14262;
	
		case 63:
			return 14263;
	
		case 64:
			return 14264;
	
		default:
			break;
	}

	return 16715;
}

void func_137(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6B76 (27510)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_102481.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_41() == 0)
		{
			address = func_135(func_136(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_132(func_136(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_114904.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_138(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6BE6 (27622)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102481.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_41() == 0)
			return IS_BIT_SET(func_135(func_136(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114904.f_668[iParam0], iParam1);

	return false;
}

BOOL func_139() // Position - 0x6C46 (27718)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_43) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_150())
			return false;
	}

	if (func_146())
		return true;

	if (func_140(100f, true) != -1)
		return true;

	return false;
}

int func_140(float fParam0, BOOL bParam1) // Position - 0x6CCC (27852)
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_51();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114904.f_18581[num /*6*/], 2) && !IS_BIT_SET(Global_114904.f_18581[num /*6*/], 3))
				{
					func_141(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_141(int iParam0, var uParam1) // Position - 0x6D7D (28029)
{
	switch (iParam0)
	{
		case 0:
			func_142(uParam1, "Abigail1", func_144(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 1:
			func_142(uParam1, "Abigail2", func_144(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 2:
			func_142(uParam1, "Barry1", func_144(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 3:
			func_142(uParam1, "Barry2", func_144(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 4:
			func_142(uParam1, "Barry3", func_144(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 5:
			func_142(uParam1, "Barry3A", func_144(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 6:
			func_142(uParam1, "Barry3C", func_144(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 7:
			func_142(uParam1, "Barry4", func_144(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_143(iParam0), 0, 0);
			break;
	
		case 8:
			func_142(uParam1, "Dreyfuss1", func_144(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 9:
			func_142(uParam1, "Epsilon1", func_144(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 10:
			func_142(uParam1, "Epsilon2", func_144(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 11:
			func_142(uParam1, "Epsilon3", func_144(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 12:
			func_142(uParam1, "Epsilon4", func_144(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 13:
			func_142(uParam1, "Epsilon5", func_144(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 14:
			func_142(uParam1, "Epsilon6", func_144(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 15:
			func_142(uParam1, "Epsilon7", func_144(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 16:
			func_142(uParam1, "Epsilon8", func_144(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 17:
			func_142(uParam1, "Extreme1", func_144(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 18:
			func_142(uParam1, "Extreme2", func_144(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 19:
			func_142(uParam1, "Extreme3", func_144(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 20:
			func_142(uParam1, "Extreme4", func_144(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 21:
			func_142(uParam1, "Fanatic1", func_144(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_143(iParam0), 1, 0);
			break;
	
		case 22:
			func_142(uParam1, "Fanatic2", func_144(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_143(iParam0), 1, 0);
			break;
	
		case 23:
			func_142(uParam1, "Fanatic3", func_144(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_143(iParam0), 0, 1);
			break;
	
		case 24:
			func_142(uParam1, "Hao1", func_144(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_143(iParam0), 0, 1);
			break;
	
		case 25:
			func_142(uParam1, "Hunting1", func_144(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 26:
			func_142(uParam1, "Hunting2", func_144(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 27:
			func_142(uParam1, "Josh1", func_144(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 28:
			func_142(uParam1, "Josh2", func_144(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 29:
			func_142(uParam1, "Josh3", func_144(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 30:
			func_142(uParam1, "Josh4", func_144(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 31:
			func_142(uParam1, "Maude1", func_144(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 32:
			func_142(uParam1, "Minute1", func_144(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 33:
			func_142(uParam1, "Minute2", func_144(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 34:
			func_142(uParam1, "Minute3", func_144(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 35:
			func_142(uParam1, "MrsPhilips1", func_144(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 36:
			func_142(uParam1, "MrsPhilips2", func_144(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 37:
			func_142(uParam1, "Nigel1", func_144(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 38:
			func_142(uParam1, "Nigel1A", func_144(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 39:
			func_142(uParam1, "Nigel1B", func_144(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_143(iParam0), 1, 1);
			break;
	
		case 40:
			func_142(uParam1, "Nigel1C", func_144(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_143(iParam0), 1, 1);
			break;
	
		case 41:
			func_142(uParam1, "Nigel1D", func_144(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_143(iParam0), 1, 1);
			break;
	
		case 42:
			func_142(uParam1, "Nigel2", func_144(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 43:
			func_142(uParam1, "Nigel3", func_144(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_143(iParam0), 1, 1);
			break;
	
		case 44:
			func_142(uParam1, "Omega1", func_144(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 45:
			func_142(uParam1, "Omega2", func_144(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 46:
			func_142(uParam1, "Paparazzo1", func_144(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 47:
			func_142(uParam1, "Paparazzo2", func_144(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 48:
			func_142(uParam1, "Paparazzo3", func_144(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 49:
			func_142(uParam1, "Paparazzo3A", func_144(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 50:
			func_142(uParam1, "Paparazzo3B", func_144(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 51:
			func_142(uParam1, "Paparazzo4", func_144(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 52:
			func_142(uParam1, "Rampage1", func_144(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 54:
			func_142(uParam1, "Rampage3", func_144(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 55:
			func_142(uParam1, "Rampage4", func_144(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 56:
			func_142(uParam1, "Rampage5", func_144(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_143(iParam0), 0, 0);
			break;
	
		case 53:
			func_142(uParam1, "Rampage2", func_144(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_143(iParam0), 1, 0);
			break;
	
		case 57:
			func_142(uParam1, "TheLastOne", func_144(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 58:
			func_142(uParam1, "Tonya1", func_144(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 59:
			func_142(uParam1, "Tonya2", func_144(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 60:
			func_142(uParam1, "Tonya3", func_144(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 61:
			func_142(uParam1, "Tonya4", func_144(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		case 62:
			func_142(uParam1, "Tonya5", func_144(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_143(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_142(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x7F32 (32562)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_143(int iParam0) // Position - 0x7FC3 (32707)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_144(int iParam0) // Position - 0x833F (33599)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_145(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_145(int iParam0) // Position - 0x8376 (33654)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

BOOL func_146() // Position - 0x87C2 (34754)
{
	if (func_149() && !func_150())
		return true;

	if (func_148() && func_147())
		return true;

	return false;
}

BOOL func_147() // Position - 0x87F4 (34804)
{
	return Global_114622 > 0;
}

BOOL func_148() // Position - 0x8802 (34818)
{
	if (Global_99326 != -1)
		return true;

	return false;
}

BOOL func_149() // Position - 0x8817 (34839)
{
	if (Global_99326 != -1)
		return IS_BIT_SET(Global_93192[Global_99326 /*34*/].f_15, 20);

	return false;
}

BOOL func_150() // Position - 0x883A (34874)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_151() // Position - 0x8857 (34903)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_146())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_150())
			return false;

	if (func_140(100f, true) != -1)
		return true;

	return false;
}

BOOL func_152() // Position - 0x88B9 (35001)
{
	if (Global_114893 == func_55() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114894)
		return true;

	return false;
}

void func_153(int iParam0) // Position - 0x88E4 (35044)
{
	if (iParam0 == -1)
		iParam0 = func_55();

	if (iParam0 == -1)
		return;

	func_155(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114890 = 0;
	func_154();
	return;
}

void func_154() // Position - 0x891A (35098)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_155(int iParam0) // Position - 0x8957 (35159)
{
	Global_114893 = iParam0;
	return;
}

BOOL func_156(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8965 (35173)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_153496)
		return false;

	if (iParam3 == -1)
		iParam3 = func_55();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_43 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_150())
				return false;
		}
	
		if (!Global_114904.f_9092)
			return false;
	
		if (func_36(false))
			return false;
	
		if (func_146())
			return false;
	
		if (func_183())
			return false;
	
		if (Global_114893 != -1)
			return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_140(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_43.f_2 > 50f)
				return false;
	
		if (!func_182(iParam3))
			return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_181(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_181(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_180(iParam3, iParam4, 145))
				return false;
	
		if (!func_179(Global_114904.f_25002.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114895 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_178())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_169(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_168(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_168(0, 0))
			return false;
	
		if (Global_33922)
			return false;
	
		if (func_182(30) && !func_168(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_19(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114904.f_2370.f_539.f_2300[i /*3*/] };
				num = Global_114904.f_2370.f_539.f_2296[i];
			
				if (func_167(num))
					if (func_158(i))
						if (!func_157(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_157(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x8CFF (36095)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_158(eCharacter echParam0) // Position - 0x8D46 (36166)
{
	int num;

	num = Global_114904.f_2370.f_539.f_2296[echParam0];
	return func_159(num);
}

BOOL func_159(int iParam0) // Position - 0x8D67 (36199)
{
	return func_160(iParam0, 1);
}

int func_160(int iParam0, int iParam1) // Position - 0x8D76 (36214)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_167(iParam0))
		return 0;

	func_161(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_161(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x8DC9 (36297)
{
	func_162(func_83(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_162(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x8DE7 (36327)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_166(iParam0, iParam1))
	{
		num = func_90(iParam1);
		num2 = func_88(iParam0);
		num3 = func_88(iParam0) - func_88(iParam1);
		num4 = func_90(iParam0) - func_90(iParam1);
		num5 = func_165(iParam0) - func_165(iParam1);
		num6 = func_82(iParam0) - func_82(iParam1);
		num7 = func_106(iParam0) - func_106(iParam1);
		num8 = func_164(iParam0) - func_164(iParam1);
	}
	else
	{
		num = func_90(iParam0);
		num2 = func_88(iParam1);
		num3 = func_88(iParam1) - func_88(iParam0);
		num4 = func_90(iParam1) - func_90(iParam0);
		num5 = func_165(iParam1) - func_165(iParam0);
		num6 = func_82(iParam1) - func_82(iParam0);
		num7 = func_106(iParam1) - func_106(iParam0);
		num8 = func_164(iParam1) - func_164(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_87(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_163(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_163(float fParam0, float fParam1, float fParam2) // Position - 0x8FE8 (36840)
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_164(int iParam0) // Position - 0x902A (36906)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_165(int iParam0) // Position - 0x903D (36925)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x904F (36943)
{
	int num;
	int num2;

	if (!func_167(iParam1) || !func_167(iParam0))
		return 1;

	num = func_88(iParam0);
	num2 = func_88(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_90(iParam0);
	num2 = func_90(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_165(iParam0);
	num2 = func_165(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_82(iParam0);
	num2 = func_82(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_106(iParam0);
	num2 = func_106(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_164(iParam0);
	num2 = func_164(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_167(int iParam0) // Position - 0x915B (37211)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_164(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_106(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_82(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_88(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_90(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_165(iParam0);

	if (num6 < 1 || num6 > func_87(num5, num4))
		return false;

	return true;
}

BOOL func_168(int iParam0, int iParam1) // Position - 0x9237 (37431)
{
	if (IS_BIT_SET(Global_114904.f_25002.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_169(int iParam0) // Position - 0x9257 (37463)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_19(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_177() || Global_113951 || Global_33778 || func_176() || func_25(8, -1) || func_175() || func_174() || func_173() || func_172() || Global_114904.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_177() || Global_33778 || func_176() || func_25(8, -1) || func_173() || func_175() || func_174() || func_172() || Global_114904.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_177() || Global_113951 || Global_33778 || func_176() || func_25(8, -1) || func_173() || func_175() || func_174() || func_172() || Global_114904.f_7695.f_919[character] == 5 || Global_45416 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_177() || Global_113951 || Global_33778 || func_176() || func_25(8, -1) || func_175() || func_174() || func_172() || Global_114904.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_177() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_25(8, -1) || func_172() || func_171() || Global_114904.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_25(8, -1) || func_175() || func_174() || func_171() || func_170())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_177() || Global_33778 || func_176() || func_25(8, -1) || func_174() || func_173() || func_172() || Global_114904.f_7695.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_177() || func_174() || Global_113951 || Global_33778 || func_176() || Global_46094 || func_25(8, -1) || func_173() || func_171() || func_172() || Global_114904.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_177() || Global_113951 || Global_33778 || func_176() || func_25(8, -1) || func_173() || func_171() || func_175() || func_174() || func_172())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_170() // Position - 0x9974 (39284)
{
	return Global_102468.f_1;
}

BOOL func_171() // Position - 0x9982 (39298)
{
	if (Global_99326 != -1)
		return IS_BIT_SET(Global_93192[Global_99326 /*34*/].f_15, 13);

	return false;
}

BOOL func_172() // Position - 0x99A5 (39333)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_173() // Position - 0x99BF (39359)
{
	if (Global_80541)
		return true;
	else if (Global_65004 && !Global_65010)
		return true;

	return false;
}

BOOL func_174() // Position - 0x99E9 (39401)
{
	return Global_102481.f_418 > 0;
}

BOOL func_175() // Position - 0x99FA (39418)
{
	return Global_102481.f_417 > 0;
}

BOOL func_176() // Position - 0x9A0B (39435)
{
	return Global_1575090;
}

BOOL func_177() // Position - 0x9A17 (39447)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99882.f_44 == 1;

	return false;
}

BOOL func_178() // Position - 0x9A33 (39475)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_179(int iParam0) // Position - 0x9A5B (39515)
{
	return func_166(func_83(), iParam0);
}

BOOL func_180(int iParam0, int iParam1, eCharacter echParam2) // Position - 0x9A6D (39533)
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_181(eCharacter echParam0) // Position - 0x9B51 (39761)
{
	if (!func_19(echParam0))
		return 7;

	return Global_114904.f_7695.f_919[echParam0];
}

BOOL func_182(int iParam0) // Position - 0x9B75 (39797)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114904.f_25002, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114904.f_25002.f_1, num);
	}

	return flag;
}

BOOL func_183() // Position - 0x9BCD (39885)
{
	Vehicle vehiclePedIsIn;

	if (Global_33927)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x9C11 (39953)
{
	int profileSetting;

	if (Global_153787 == 2)
		return true;
	else if (Global_153787 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT") /* TUNEABLE: SP_UNLOCK_EXCLUS_CONTENT */, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT") /* TUNEABLE: SP_UNLOCK_EXCLUS_CONTENT */, profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_185(int iParam0, int iParam1) // Position - 0x9CC9 (40137)
{
	if (Global_114904.f_10201[iParam0 /*12*/].f_5 == true)
	{
		iParam1 == 1;
		return true;
	}

	return false;
}

void func_186() // Position - 0x9CF0 (40176)
{
	if (bLocal_49)
	{
		func_224(false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_85 - { 10f, 10f, 10f }, uLocal_85 + { 10f, 10f, 10f }, true, true);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		func_28();
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_63, false))
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_63, false) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_63, 50f, 50f, 50f, false, true, 0))
				func_198(veLocal_63, 0, _CHAR_NULL);
	
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_85, 100f, 100f, 100f, false, true, 0))
		{
			if (!PED::IS_PED_INJURED(pedLocal_53) && !PED::IS_PED_INJURED(pedLocal_55))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_111);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_CHAT_TO_PED(0, pedLocal_53, 16, 0f, 0f, 0f, 0f, 0f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_111);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_55, iLocal_111);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_111);
			}
		}
	
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_131);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_57);
	
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_53, 317, true);
		
			if (!ENTITY::IS_ENTITY_ATTACHED(pedLocal_53))
				ENTITY::FREEZE_ENTITY_POSITION(pedLocal_53, false);
		
			PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(obLocal_64))
		{
			ENTITY::DETACH_ENTITY(obLocal_64, true, true);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_53);
	
		if (!PED::IS_PED_INJURED(pedLocal_55))
		{
			PED::SET_PED_CONFIG_FLAG(pedLocal_55, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_55, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_55);
	
		if (!PED::IS_PED_INJURED(pedLocal_54))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_54, false);
	
		if (!PED::IS_PED_INJURED(pedLocal_56))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_56, false);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_54);
	}

	func_187(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_187(int iParam0) // Position - 0x9F0F (40719)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_55();

	if (iParam0 == -1)
		return;

	if (func_152())
	{
		func_191(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114895 = MISC::GET_GAME_TIMER();
		func_190(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_189(Global_114893, true), 64);
	
		if (func_54(Global_114893) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114892, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114890, MISC::GET_GAME_TIMER() - Global_114891, 0);
	}
	else if (IS_BIT_SET(Global_114900, 0) && Global_114904.f_25002.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114900, 0);
	}

	func_188(&Global_33835);
	Global_114894 = false;
	func_155(-1);
	return;
}

void func_188(var uParam0) // Position - 0x9FC1 (40897)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44831))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44830 = 0;
	Global_44832 = 0;
	Global_44869 = 15;
	Global_65007 = false;
	Global_65008 = 0;
	return;
}

char* func_189(int iParam0, BOOL bParam1) // Position - 0x9FFE (40958)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_190(int iParam0) // Position - 0xA247 (41543)
{
	Global_45420 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_191(int iParam0) // Position - 0xA259 (41561)
{
	func_192(iParam0, 0, func_197(iParam0));
	return;
}

void func_192(int iParam0, int iParam1, int iParam2) // Position - 0xA26E (41582)
{
	int unk;
	var unk2;

	unk = func_83();
	func_195(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_194(iParam0, &unk);
	unk2 = { func_193(&unk) };
	return;
}

struct<16> func_193(var uParam0) // Position - 0xA29D (41629)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_82(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_106(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_164(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_165(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_90(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_88(*uParam0), 64);
	return unk;
}

void func_194(int iParam0, var uParam1) // Position - 0xA36D (41837)
{
	Global_114904.f_25002.f_43[iParam0] = *uParam1;
	return;
}

void func_195(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA385 (41861)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_88(*uParam0);
	i = func_90(*uParam0);
	num2 = func_165(*uParam0);
	j = func_82(*uParam0);
	k = func_106(*uParam0);
	l = func_164(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_87(i, num); num2 > m; m = func_87(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_196(uParam0, l, k, j, num2, i, num);
	return;
}

void func_196(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA507 (42247)
{
	func_93(uParam0, iParam1);
	func_92(uParam0, iParam2);
	func_91(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_86(uParam0, iParam4);
	func_84(uParam0, iParam6);
	return;
}

int func_197(int iParam0) // Position - 0xA53F (42303)
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

int func_198(Vehicle veParam0, int iParam1, eCharacter echParam2) // Position - 0xA6E2 (42722)
{
	var script;
	const char* entityScript;

	if (iParam1 == 0)
	{
		entityScript = ENTITY::GET_ENTITY_SCRIPT(veParam0, &script);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
			if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
				return 0;
	}

	func_199(veParam0, echParam2);
	return 1;
}

void func_199(Vehicle veParam0, eCharacter echParam1) // Position - 0xA722 (42786)
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_205(veParam0))
		return;

	if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Zero"))
				echParam1 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_One"))
				echParam1 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("Player_Two"))
				echParam1 = CHAR_TREVOR;
	
		if (echParam1 != CHAR_MICHAEL && echParam1 != CHAR_FRANKLIN && echParam1 != CHAR_TREVOR)
			echParam1 = Global_114904.f_2370.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114904.f_32757.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114904.f_32757.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114904.f_32757.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_114904.f_32757.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_114904.f_32757.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114904.f_32757.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114904.f_32757.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114904.f_32757.f_5600[i /*78*/].f_1)))
					Global_114904.f_32757.f_5600[i /*78*/].f_66 = 0;
	}

	Global_114904.f_32757.f_5590 = echParam1;
	Global_79975 = veParam0;
	Global_114904.f_32757.f_5588 = 1;
	func_200(veParam0, &(Global_114904.f_32757.f_5510));
	return;
}

void func_200(Vehicle veParam0, var uParam1) // Position - 0xA924 (43300)
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_204(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_203(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_202(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_201(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_201(int iParam0) // Position - 0xABCF (43983)
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_202(var uParam0, var uParam1, var uParam2) // Position - 0xAC7F (44159)
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_203(int iParam0) // Position - 0xAE72 (44658)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_204(var uParam0) // Position - 0xAE92 (44690)
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_205(Vehicle veParam0) // Position - 0xAF42 (44866)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_222(veParam0, 0, false) || func_222(veParam0, 1, false) || func_222(veParam0, 2, false) || func_221(veParam0) != _CHAR_NULL || func_220(veParam0) || func_219(veParam0) || func_218(veParam0) || func_217(veParam0) || !func_206(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_219(veParam0);
		func_219(veParam0);
		func_222(veParam0, 0, false);
		func_222(veParam0, 1, false);
		func_222(veParam0, 2, false);
		func_221(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_206(Hash hParam0) // Position - 0xB01F (45087)
{
	if (hParam0 == 0)
		return false;

	if (!func_207(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case -671564942:
		case -902029319:
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
	}

	return true;
}

BOOL func_207(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xB1DD (45533)
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < EXTRAMETADATA::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (EXTRAMETADATA::GET_DLC_VEHICLE_DATA(i, &outData))
			{
				if (hParam0 == outData.f_1)
				{
					if (EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
				
					break;
				}
			}
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_216() && !func_215() && !func_214() && !func_213() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (func_212() || MISC::IS_PC_VERSION() || func_211())
		{
		}
		else if (!func_214())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_210(hParam0, iParam2))
			return false;

	if (!func_208(hParam0))
		return false;

	return true;
}

BOOL func_208(Hash hParam0) // Position - 0xB362 (45922)
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xB42E (46126)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_210(Hash hParam0, int iParam1) // Position - 0xB445 (46149)
{
	int cloudTimeAsInt;
	int num;

	if (Global_2708544)
		return true;

	if (!Global_2708545 && iParam1 >= 0 && iParam1 <= 607)
		if (IS_BIT_SET(Global_1583765[iParam1 /*143*/].f_104, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case 1730644782:
			num = Global_262145.f_35676[0];
			break;
	
		case -402415705:
			num = Global_262145.f_35676[1];
			break;
	
		case -1555091703:
			num = Global_262145.f_35676[2];
			break;
	
		case 893780296:
			num = Global_262145.f_35676[3];
			break;
	
		case 1596736441:
			num = Global_262145.f_35676[4];
			break;
	
		case 1380582820:
			num = Global_262145.f_35676[5];
			break;
	
		case -1007324375:
			num = Global_262145.f_35676[6];
			break;
	
		case -938068410:
			num = Global_262145.f_35676[7];
			break;
	
		case -1778998583:
			num = Global_262145.f_35676[8];
			break;
	
		case -358638792:
			num = Global_262145.f_35676[9];
			break;
	
		case 617517171:
			num = Global_262145.f_35676[10];
			break;
	
		case 287906327:
			num = Global_262145.f_35676[11];
			break;
	
		case -1006198950:
			num = Global_262145.f_35676[12];
			break;
	
		case -855850193:
			num = Global_262145.f_35676[13];
			break;
	
		case 507621923:
			num = Global_262145.f_35676[14];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	return false;
}

BOOL func_211() // Position - 0xB609 (46601)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_212() // Position - 0xB61F (46623)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_213() // Position - 0xB635 (46645)
{
	return false;
}

BOOL func_214() // Position - 0xB63E (46654)
{
	return true;
}

BOOL func_215() // Position - 0xB647 (46663)
{
	return true;
}

BOOL func_216() // Position - 0xB650 (46672)
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_217(Vehicle veParam0) // Position - 0xB669 (46697)
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_207(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_218(Vehicle veParam0) // Position - 0xB6B0 (46768)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99765[i]))
			if (Global_99765[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_219(Vehicle veParam0) // Position - 0xB6EB (46827)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99735[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99735[i], false))
				if (Global_99735[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_99735[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_220(Vehicle veParam0) // Position - 0xB767 (46951)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_79070.f_484[24]))
		if (veParam0 == Global_79070.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79070.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_79070.f_484[i])
					return true;
	}

	return false;
}

eCharacter func_221(Vehicle veParam0) // Position - 0xB84F (47183)
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99735[i]))
			if (Global_99735[i] == veParam0)
				return Global_99745[i];
	}

	return _CHAR_NULL;
}

BOOL func_222(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0xB8B2 (47282)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_223(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114904.f_7236[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_223(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xB920 (47392)
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

void func_224(BOOL bParam0) // Position - 0xB9F8 (47608)
{
	int i;

	for (i = 0; i < 65; i = i + 1)
	{
		func_130(i, bParam0);
	}

	return;
}

