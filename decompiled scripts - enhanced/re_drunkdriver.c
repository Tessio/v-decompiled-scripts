#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	BOOL bLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 2;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	float fLocal_73 = 0f;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 2;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	Vehicle veLocal_92 = 0;
	Vehicle veLocal_93 = 0;
	Hash hLocal_94 = 0;
	Hash hLocal_95 = 0;
	Hash hLocal_96 = 0;
	int iLocal_97 = 0;
	Hash hLocal_98 = 0;
	BOOL bLocal_99 = 0;
	Blip blLocal_100 = 0;
	Blip blLocal_101 = 0;
	BOOL bLocal_102 = 0;
	BOOL bLocal_103 = 0;
	BOOL bLocal_104 = 0;
	BOOL bLocal_105 = 0;
	BOOL bLocal_106 = 0;
	BOOL bLocal_107 = 0;
	BOOL bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	char* sLocal_111 = 0;
	char* sLocal_112 = 0;
	BOOL bLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	BOOL bLocal_119 = 0;
	BOOL bLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	Cam caLocal_125 = 0;
	Cam caLocal_126 = 0;
	Cam caLocal_127 = 0;
	BOOL bLocal_128 = 0;
	BOOL bLocal_129 = 0;
	BOOL bLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
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
	int iLocal_147 = 0;
	var uLocal_148 = 0;
	Blip blLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 2;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	Blip blLocal_156 = 0;
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	float fLocal_162 = 0f;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	BOOL bLocal_166 = 0;
	BOOL bLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	BOOL bLocal_170 = 0;
	var uLocal_171 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = -1f;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_85 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_122 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_135, "", 24);
	iLocal_163 = -1;
	uLocal_337 = { -1017.3451f, -1354.1962f, 4.4568f };
	uLocal_340 = { 2003.4564f, 3071.1018f, 46.0499f };
	uLocal_55 = { uScriptParam_0.f_1[0 /*3*/] };
	func_289();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_249();

	if (func_207(uLocal_55, 27, iLocal_343, false, false))
		func_204(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_157 = MISC::GET_GAME_TIMER();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_60)
		{
			if (!func_203())
				if (func_202())
					func_249();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DD", 0);
		
			switch (iLocal_51)
			{
				case 0:
					if (bLocal_54)
					{
						bLocal_170 = true;
						iLocal_51 = 1;
					}
					else
					{
						if (func_190())
							func_249();
					
						if (!bLocal_58)
							func_189();
					
						if (bLocal_58)
							func_188();
					}
					break;
			
				case 1:
					func_181();
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_180();
						func_177();
					
						if (iLocal_52 == 1 && !ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
						{
							func_77();
						
							if (func_75() || ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_89[0], false))
									{
										if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
											PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
									
										TASK::CLEAR_PED_TASKS(uLocal_89[0]);
										TASK::TASK_SMART_FLEE_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
										func_71(uLocal_89[0], 120000, false, -1082130432);
										PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
										func_69();
										BUILTIN::WAIT(0);
										_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
							
								func_67();
							}
						}
					
						if (iLocal_52 == 2 || iLocal_52 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
						{
							func_77();
						
							if (iLocal_53 != 9)
							{
								if (func_75() || ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
									{
										if (!PED::IS_PED_INJURED(uLocal_89[0]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
												PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
										
											TASK::CLEAR_PED_TASKS(uLocal_89[0]);
											TASK::TASK_SMART_FLEE_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_71(uLocal_89[0], 120000, false, -1082130432);
											PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
										}
									}
								
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
									{
										if (!PED::IS_PED_INJURED(uLocal_89[1]))
										{
											if (PED::IS_PED_IN_GROUP(uLocal_89[1]))
												PED::REMOVE_PED_FROM_GROUP(uLocal_89[1]);
										
											TASK::CLEAR_PED_TASKS(uLocal_89[1]);
											TASK::TASK_SMART_FLEE_PED(uLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											func_71(uLocal_89[1], 120000, false, -1082130432);
											PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
										}
									}
								
									if (iLocal_52 == 1)
									{
										func_69();
										BUILTIN::WAIT(0);
										_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								
									if (iLocal_52 == 2)
									{
										func_69();
										BUILTIN::WAIT(0);
										_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
								
									func_67();
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_89[0], 1f);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
							if (!PED::IS_PED_INJURED(uLocal_89[1]))
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_89[1], 1f);
					}
				
					if (func_66() && !func_65() && iLocal_53 != 9)
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_89[0], uLocal_85, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_52 == 2)
								{
									if (!PED::IS_PED_INJURED(uLocal_89[1]))
									{
										if (!PED::IS_PED_IN_GROUP(uLocal_89[0]) && !PED::IS_PED_IN_GROUP(uLocal_89[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[0], func_64());
											PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[1], func_64());
										}
									}
								}
							
								func_63(0);
								BUILTIN::WAIT(0);
								func_69();
								iLocal_53 = 9;
							}
						}
					}
				
					if (func_62())
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
							PED::DELETE_PED(&uLocal_89[0]);
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
							PED::DELETE_PED(&uLocal_89[1]);
					
						func_37();
					}
				
					if (func_36() || func_35() || func_3())
						func_67();
					break;
			}
		}
		else
		{
			func_249();
		}
	
		func_1();
	}

	return;
}

void func_1() // Position - 0x4E9 (1257)
{
	if (iLocal_52 == 1 && iLocal_53 == 7 && iLocal_62 == 5 && bLocal_108)
	{
		iLocal_157 = MISC::GET_GAME_TIMER();
	
		if (func_2())
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				uLocal_158 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
	}

	return;
}

BOOL func_2() // Position - 0x541 (1345)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (iLocal_52 == 1)
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
						if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							return true;
		
			if (iLocal_52 == 2)
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
					if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
						if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(uLocal_89[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							return true;
		}
	}

	return false;
}

BOOL func_3() // Position - 0x60E (1550)
{
	if (iLocal_52 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_92, 200f, 200f, 200f, false, true, 0))
				return true;
		
			if (!func_34("REDR2_DC") && !func_34("REDR2_AKA") && !func_34("REDR2_OFFR") && !func_34("REDR2_CULT"))
				func_5(true);
		
			if (!func_34("REDR2_DC") && !func_34("REDR2_AKA") && !func_34("REDR2_AKB") && !func_34("REDR2_TRY") && !func_34("REDR2_JIC") && !func_34("REDR2_CH") && !func_34("REDR2_WH2") && !func_34("REDR2_BCK") && !func_34("REDR2_JIA") && !func_34("REDR2_JIB") && !func_34("REDR2_JIC") && !func_34("REDR2_WHA") && !func_34("REDR2_WHB") && !func_34("REDR2_WHC") && !func_34("REDR2_PSM") && !func_34("REDR2_PSF") && !func_34("REDR2_PST") && !func_34("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(veLocal_92) && ENTITY::GET_ENTITY_HEALTH(veLocal_92) < iLocal_78)
				{
					iLocal_78 = ENTITY::GET_ENTITY_HEALTH(veLocal_92);
					func_5(false);
					func_69();
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
		
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_92))
			{
				func_69();
				BUILTIN::WAIT(0);
			
				if (!func_4())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							TASK::TASK_WANDER_STANDARD(uLocal_89[0], 1193033728, 0);
							PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_89[1]))
						{
							TASK::TASK_GO_TO_ENTITY(uLocal_89[1], uLocal_89[0], -1, 0f, 1f, 1073741824, 0);
							PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
						}
					
						return true;
					}
				}
			}
		
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(veLocal_92, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_92, PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_89[0]);
					TASK::TASK_SMART_FLEE_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
			
				if (!PED::IS_PED_INJURED(uLocal_89[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_89[1]);
					TASK::TASK_SMART_FLEE_PED(uLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
			
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

BOOL func_4() // Position - 0x8B8 (2232)
{
	if (Global_23000 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_5(BOOL bParam0) // Position - 0x8DA (2266)
{
	if (bParam0)
	{
		if (bLocal_134)
			if (func_10(&uLocal_171, "REDR2AU", &uLocal_141, &uLocal_135, 8, 0, 0))
				bLocal_134 = false;
	}
	else if (!bLocal_134 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !func_34("REDR1_SWV"))
	{
		uLocal_141 = { func_9() };
		uLocal_135 = { func_8() };
		func_6();
		bLocal_134 = true;
	}

	return;
}

void func_6() // Position - 0x939 (2361)
{
	Global_21866 = 0;
	func_7();
	return;
}

void func_7() // Position - 0x949 (2377)
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_24011 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23000 = 6;
		return;
	}

	return;
}

struct<6> func_8() // Position - 0x96D (2413)
{
	var unk;
	int currentScriptedConversationLine;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_23000 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_24010;
	
		if (currentScriptedConversationLine > -1)
			return Global_21868[currentScriptedConversationLine /*6*/];
		else
			return unk;
	}

	return unk;
}

struct<6> func_9() // Position - 0x9B3 (2483)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_23000 == 4)
		return Global_22619;

	return unk;
}

BOOL func_10(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9D7 (2519)
{
	func_33(uParam0, _CHAR_NULL, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_23007 = false;
	Global_23014 = false;
	Global_23009 = false;
	Global_23991 = 0;
	Global_23993 = false;
	Global_23997 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_24004, sParam3, 24);
	Global_2883585 = 0;
	return func_11(sParam2, iParam4, false);
}

BOOL func_11(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xA2B (2603)
{
	Global_23001 = 0;

	if (Global_23000 == 0 || Global_23002 == 2)
	{
		if (Global_23000 != 0)
		{
			if (iParam1 > Global_23002)
			{
				if (Global_23007 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21627.f_1 = 3;
					Global_23000 = 0;
					Global_23001 = 1;
					Global_23053 = false;
					Global_22996 = 0;
					Global_22997 = 0;
					Global_23011 = false;
					Global_23010 = false;
					Global_21626 = 0;
				}
				else
				{
					func_32();
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
	
		if (func_31(8, -1))
			return 0;
	
		Global_23076 = { Global_23070 };
		func_30();
		Global_22289 = { Global_22454 };
		Global_23006 = Global_23007;
		Global_23013 = Global_23014;
		Global_2883586 = Global_2883585;
		Global_23015 = { Global_23031 };
		Global_23008 = Global_23009;
		Global_23990 = Global_23991;
		Global_23998 = { Global_24004 };
		Global_23992 = Global_23993;
		Global_23994 = Global_23995;
		Global_23996 = Global_23997;
		Global_22619.f_370 = Global_23989;
		Global_22619.f_368 = Global_23987;
		Global_22619.f_369 = Global_23988;
		Global_22996 = Global_22997;
	
		if (Global_23006)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21627.f_1 > 3)
					return 0;
			}
		
			if (Global_21593 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_21())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80305)
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
		
			if (func_20())
			{
				return 0;
			}
			else
			{
				switch (Global_21627.f_1)
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
		
			func_19();
			Global_23010 = bParam2;
		}
	
		Global_23002 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22619, sParam0, 24);
		Global_21866 = 0;
		func_18();
		func_12();
		return 1;
	}

	if (Global_23000 == 5)
		return 0;

	if (iParam1 < Global_23002 || iParam1 == Global_23002)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}

	return 0;
}

void func_12() // Position - 0xCF9 (3321)
{
	if (!func_13())
		return;

	if (Global_23006)
	{
		TEXT_LABEL_COPY(&(Global_1979846.f_1), { Global_22619 }, 4);
		Global_1979846 = Global_8778;
		Global_1979846.f_6 = Global_23010;
	}

	return;
}

BOOL func_13() // Position - 0xD30 (3376)
{
	if (!Global_262145.f_28523)
		return false;

	if (!Global_80305)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_14(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_14(Player plParam0) // Position - 0xD93 (3475)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_16(8))
			return true;
	
		if (Global_2733138.f_6061.f_1 > 0)
			return true;
	}

	return func_15(plParam0, 20);
}

BOOL func_15(Player plParam0, int iParam1) // Position - 0xDCA (3530)
{
	return IS_BIT_SET(Global_1892798[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_16(int iParam0) // Position - 0xDE2 (3554)
{
	return IS_BIT_SET(Global_2733138.f_6050, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xDF4 (3572)
{
	return -1;
}

void func_18() // Position - 0xDFD (3581)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21868[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23000 = 1;
	return;
}

void func_19() // Position - 0xE2D (3629)
{
	Global_23053 = Global_23052;
	Global_23047 = Global_23048;
	Global_23094 = { Global_23082 };
	Global_23100 = { Global_23088 };
	Global_23055 = Global_23054;
	Global_23124 = { Global_23106 };
	Global_23130 = { Global_23112 };
	Global_23136 = { Global_23118 };
	Global_23142 = { Global_23148 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_23011 = Global_23012;
	Global_23013 = Global_23014;
	Global_23015 = { Global_23031 };
	Global_23004 = Global_23005;
	Global_24016 = false;
	Global_23049 = 0;
	Global_23050 = false;
	MISC::CLEAR_BIT(&Global_9464, 16);
	return;
}

BOOL func_20() // Position - 0xEC2 (3778)
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

BOOL func_21() // Position - 0xEE9 (3817)
{
	int num;
	int weaponHash;

	if (Global_80305)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xF82 (3970)
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[0 /*29*/])
				Global_21627 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[1 /*29*/])
				Global_21627 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[2 /*29*/])
				Global_21627 = CHAR_TREVOR;
			else
				Global_21627 = CHAR_MICHAEL;
	}
	else
	{
		Global_21627 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21627 == _CHAR_NULL)
			Global_21627 = CHAR_MULTIPLAYER;
	
		if (Global_80305)
			Global_21627 = CHAR_MULTIPLAYER;
	
		if (Global_21627 > CHAR_MULTIPLAYER)
			Global_21627 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1024 (4132)
{
	func_24();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_24() // Position - 0x103D (4157)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_25(character) && !func_29(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != character && func_25(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = character;
				Global_114931.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_25(eCharacter echParam0) // Position - 0x113A (4410)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1146 (4422)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1183 (4483)
{
	if (func_25(character))
		return func_28(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_28(eCharacter echParam0) // Position - 0x11A8 (4520)
{
	return Global_2339[echParam0 /*29*/];
}

BOOL func_29(int iParam0) // Position - 0x11B7 (4535)
{
	return Global_44886 == iParam0;
}

void func_30() // Position - 0x11C5 (4549)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_22289[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22289[i /*10*/].f_1), "", 24);
		Global_22289[i /*10*/].f_7 = 0;
		Global_22289[i /*10*/].f_8 = 0;
	}

	Global_22289.f_161 = -99;
	Global_22289.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x121B (4635)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

void func_32() // Position - 0x1253 (4691)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24011 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21627.f_1 == 9 || Global_21626 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23000 = 6;
		Global_21627.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23000 = 6;
		return;
	}

	return;
}

void func_33(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x12AA (4778)
{
	Global_22454 = { *uParam0 };
	Global_8779 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23070, sParam2, 24);
	Global_23989 = iParam5;

	if (iParam3 == 0)
	{
		Global_23987 = 1;
		Global_23985 = 0;
	}
	else
	{
		Global_23987 = 0;
		Global_23985 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23988 = 1;
		Global_23986 = 0;
	}
	else
	{
		Global_23988 = 0;
		Global_23986 = 1;
	}

	return;
}

BOOL func_34(char* sParam0) // Position - 0x1300 (4864)
{
	var string2;

	if (func_4())
	{
		TEXT_LABEL_COPY(&string2, { func_9() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

int func_35() // Position - 0x1328 (4904)
{
	if (iLocal_52 == 1)
		if (PED::IS_PED_INJURED(uLocal_89[0]))
			return 1;

	if (iLocal_52 == 2)
		if (PED::IS_PED_INJURED(uLocal_89[0]) && PED::IS_PED_INJURED(uLocal_89[1]))
			return 1;

	return 0;
}

int func_36() // Position - 0x136B (4971)
{
	if (iLocal_52 == 1)
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
			return 1;

	if (iLocal_52 == 2)
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
			return 1;

	return 0;
}

void func_37() // Position - 0x13B1 (5041)
{
	while (!func_61())
	{
		BUILTIN::WAIT(0);
	}

	func_41(27, iLocal_343);
	func_38();
	func_249();
	return;
}

void func_38() // Position - 0x13DA (5082)
{
	func_39();
	return;
}

int func_39() // Position - 0x13E7 (5095)
{
	if (func_40(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

BOOL func_40(BOOL bParam0) // Position - 0x1432 (5170)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

void func_41(int iParam0, int iParam1) // Position - 0x145A (5210)
{
	if (iParam0 == -1)
		iParam0 = func_59();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_58(iParam0))
	{
		func_57(iParam0, iParam1);
	
		if (!func_56(51))
		{
			func_52("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_55(), 0, 138, 0);
			func_51(51);
		}
	
		if (func_50(iParam0))
			Global_114931.f_25002.f_2 = 3;
	
		if (func_49(iParam0, iParam1) != 322)
			func_43(func_49(iParam0, iParam1), uLocal_42, uLocal_42.f_1);
	
		Global_114919 = iParam1;
	
		if (Global_114917 == 0)
			if (Global_114920 == 1 || Global_114920 == 5 || Global_114920 == 11 || Global_114920 == 25)
				func_42(2);
			else if (Global_114920 == 26 || Global_114920 == 8 || Global_114920 == 17)
				func_42(7);
			else
				func_42(1);
	}

	return;
}

void func_42(int iParam0) // Position - 0x155E (5470)
{
	Global_114917 = iParam0;
	return;
}

void func_43(int iParam0, var uParam1, var uParam2) // Position - 0x156C (5484)
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

	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114931.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114931.f_10201[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114931.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114931.f_10201[iParam0 /*12*/].f_10 = uParam1;
		Global_114931.f_10201[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0") /* TUNEABLE: NUM_HIDDEN_PACKAGES_0, NUM_HIDDEN_PACKAGES_0 */, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1") /* TUNEABLE: NUM_HIDDEN_PACKAGES_1, NUM_HIDDEN_PACKAGES_1 */, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3") /* TUNEABLE: NUM_HIDDEN_PACKAGES_3, NUM_HIDDEN_PACKAGES_3 */, 50, 0);
	}

	if (flag)
		func_44();

	return;
}

void func_44() // Position - 0x1652 (5714)
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
	Global_114667 = 0;
	Global_114668 = 0;
	Global_114669 = 0;
	Global_114670 = 0;
	Global_114671 = 0;
	Global_114672 = 0;
	Global_114673 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114931.f_10201.f_3853;
	Global_114931.f_10201.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114931.f_10201[num /*12*/].f_5 == true)
		{
			switch (Global_114931.f_10201[num /*12*/].f_6)
			{
				case 1:
					Global_114667 = Global_114667 + 1;
					num2 = num2 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114668 = Global_114668 + 1;
					num3 = num3 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114669 = Global_114669 + 1;
					num4 = num4 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114670 = Global_114670 + 1;
					num5 = num5 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114671 = Global_114671 + 1;
					num6 = num6 + (Global_114931.f_10201[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114672 = Global_114672 + 1;
					num7 = num7 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114673 = Global_114673 + 1;
					num8 = num8 + Global_114931.f_10201[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114650 > 0)
		if (Global_114667 == Global_114650)
			num2 = 55f;

	if (Global_114651 > 0)
		if (Global_114668 == Global_114651)
			num3 = 10f;

	if (Global_114652 > 0)
		if (Global_114669 == Global_114652)
			num4 = 0f;

	if (Global_114653 > 0)
		if (Global_114670 == Global_114653)
			num5 = 10f;

	if (Global_114654 > 0)
	{
		if (Global_114671 == Global_114654 || (Global_114654 * 10) / Global_114671 < 41 || Global_114671 > Global_114657 || Global_114671 == Global_114657)
		{
			if (!IS_BIT_SET(Global_114931.f_10201.f_3856, 14))
			{
				if (Global_114671 == Global_114654)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, Global_114654, 0);
					MISC::SET_BIT(&(Global_114931.f_10201.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114655 > 0)
		if (Global_114672 == Global_114655)
			num7 = 15f;

	if (Global_114656 > 0)
		if (Global_114673 == Global_114656)
			num8 = 5f;

	Global_114931.f_10201.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114671 > Global_114657 || Global_114671 == Global_114657)
		value2 = Global_114657;
	else
		value2 = Global_114671;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED") /* TUNEABLE: NUM_MISSIONS_COMPLETED, NUM_MISSIONS_COMPLETED */, Global_114667, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE") /* TUNEABLE: NUM_MISSIONS_AVAILABLE */, Global_114650, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED") /* TUNEABLE: NUM_MINIGAMES_COMPLETED, NUM_MINIGAMES_COMPLETED */, Global_114668, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE") /* TUNEABLE: NUM_MINIGAMES_AVAILABLE */, Global_114651, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED") /* TUNEABLE: NUM_ODDJOBS_COMPLETED */, Global_114669, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE") /* TUNEABLE: NUM_ODDJOBS_AVAILABLE */, Global_114652, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED") /* TUNEABLE: NUM_RNDPEOPLE_COMPLETED, NUM_RNDPEOPLE_COMPLETED */, Global_114670, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE") /* TUNEABLE: NUM_RNDPEOPLE_AVAILABLE */, Global_114653, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE") /* TUNEABLE: NUM_RNDEVENTS_AVAILABLE */, Global_114657, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED") /* TUNEABLE: NUM_MISC_COMPLETED, NUM_MISC_COMPLETED */, Global_114673 + Global_114672, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE") /* TUNEABLE: NUM_MISC_AVAILABLE */, Global_114656 + Global_114655, true);
	Global_114674 = (Global_114667 * 100) / Global_114650;
	Global_114676 = ((Global_114669 + Global_114668) * 100) / (Global_114652 + Global_114651);
	Global_114675 = ((Global_114670 + value2) * 100) / (Global_114653 + Global_114657);
	Global_114677 = ((Global_114672 + Global_114673) * 100) / (Global_114655 + Global_114656);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE") /* TUNEABLE: TOTAL_PROGRESS_MADE */, Global_114931.f_10201.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS") /* TUNEABLE: PERCENT_STORY_MISSIONS */, Global_114674, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS") /* TUNEABLE: PERCENT_AMBIENT_MISSIONS */, Global_114675, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS") /* TUNEABLE: PERCENT_ODDJOBS */, Global_114676, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114931.f_10201.f_3853))
		func_46(13, BUILTIN::FLOOR(Global_114931.f_10201.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80305)
		{
			if (func_45() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114665 = false;
			
				if (!Global_65027)
					func_39();
			}
		}
	}

	return;
}

int func_45() // Position - 0x1B10 (6928)
{
	return Global_33792;
}

BOOL func_46(int iParam0, int iParam1) // Position - 0x1B1B (6939)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1B6C (7020)
{
	if (iParam2 == -1)
		iParam2 = func_48();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_48() // Position - 0x1B8A (7050)
{
	return Global_1574927;
}

int func_49(int iParam0, int iParam1) // Position - 0x1B96 (7062)
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

BOOL func_50(int iParam0) // Position - 0x1F0A (7946)
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

void func_51(int iParam0) // Position - 0x1F39 (7993)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114931.f_20417.f_150[i], offset);

	return;
}

void func_52(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1F7B (8059)
{
	func_53(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_53(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1F9B (8091)
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

	for (i = 0; i < Global_114931.f_20417.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114931.f_20417[i /*16*/], sParam0))
			return;
	}

	if (Global_114931.f_20417.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_12 = iParam2;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114931.f_20417[Global_114931.f_20417.f_145 /*16*/].f_10 = -1;
	
		Global_114931.f_20417.f_145 = Global_114931.f_20417.f_145 + 1;
		func_54();
	}

	return;
}

void func_54() // Position - 0x216D (8557)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114931.f_20417.f_146[i] = 0;
	}

	for (i = 0; i < Global_114931.f_20417.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114931.f_20417[i /*16*/].f_11, 0))
			if (Global_114931.f_20417[i /*16*/].f_12 > Global_114931.f_20417.f_146[0])
				Global_114931.f_20417.f_146[0] = Global_114931.f_20417[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[i /*16*/].f_11, 1))
			if (Global_114931.f_20417[i /*16*/].f_12 > Global_114931.f_20417.f_146[1])
				Global_114931.f_20417.f_146[1] = Global_114931.f_20417[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114931.f_20417[i /*16*/].f_11, 2))
			if (Global_114931.f_20417[i /*16*/].f_12 > Global_114931.f_20417.f_146[2])
				Global_114931.f_20417.f_146[2] = Global_114931.f_20417[i /*16*/].f_12;
	}

	return;
}

int func_55() // Position - 0x2284 (8836)
{
	func_24();

	switch (Global_114931.f_2370.f_539.f_4321)
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

BOOL func_56(int iParam0) // Position - 0x22CA (8906)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114931.f_20417.f_150[i], num);

	return false;
}

void func_57(int iParam0, int iParam1) // Position - 0x230A (8970)
{
	MISC::SET_BIT(&Global_114931.f_25002.f_8[iParam0], iParam1);
	return;
}

int func_58(int iParam0) // Position - 0x2325 (8997)
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

int func_59() // Position - 0x23D6 (9174)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_60(unk);
	return num;
}

int func_60(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x23F3 (9203)
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

BOOL func_61() // Position - 0x25CD (9677)
{
	return true;
}

BOOL func_62() // Position - 0x25D6 (9686)
{
	if (Global_34032)
	{
		func_42(4);
		return true;
	}

	return false;
}

void func_63(int iParam0) // Position - 0x25EE (9710)
{
	Global_24011 = iParam0;
	return;
}

int func_64() // Position - 0x25FB (9723)
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_65() // Position - 0x260B (9739)
{
	if (Global_114931.f_25002.f_5 == 1000)
		return true;

	return false;
}

BOOL func_66() // Position - 0x2627 (9767)
{
	return Global_34031;
}

void func_67() // Position - 0x2632 (9778)
{
	func_249();
	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x263E (9790)
{
	func_33(uParam0, _CHAR_NULL, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23007 = false;
	Global_23009 = false;
	Global_23014 = false;
	Global_23991 = 0;
	Global_23993 = false;
	Global_23997 = 0;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, false);
}

void func_69() // Position - 0x268C (9868)
{
	Global_21866 = 0;
	func_70();
	return;
}

void func_70() // Position - 0x269C (9884)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24011 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23000 = 6;
	}

	return;
}

int func_71(Ped pedParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x26BD (9917)
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_74(pedParam0);

	if (!(num == -1))
		return 1;

	num2 = func_73(pedParam0);

	if (!(num2 == -1))
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_72();

	if (num3 == -1)
		return 0;

	Global_45866[num3 /*6*/] = 0;
	Global_45866[num3 /*6*/].f_1 = pedParam0;
	Global_45866[num3 /*6*/].f_2 = iParam1;
	Global_45866[num3 /*6*/].f_3 = iParam1;
	Global_45866[num3 /*6*/].f_4 = 0;
	Global_45866[num3 /*6*/].f_5 = iParam3;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		Global_46109 = 1;

	Global_45864 = Global_45864 + 1;
	return 1;
}

int func_72() // Position - 0x2784 (10116)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45866[i /*6*/] == 13)
			return i;
	}

	return -1;
}

int func_73(Ped pedParam0) // Position - 0x27B3 (10163)
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_45866[i /*6*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

int func_74(Ped pedParam0) // Position - 0x27E4 (10212)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45897[i /*5*/].f_1)
			return Global_45897[i /*5*/];
	}

	return -1;
}

BOOL func_75() // Position - 0x2825 (10277)
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return true;

	if (MISC::IS_BULLET_IN_AREA(uLocal_150, 40f, true) || MISC::IS_BULLET_IN_AREA(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), 10f, false) || MISC::IS_PROJECTILE_IN_AREA(uLocal_150 - { 40f, 40f, 40f }, uLocal_150 + { 40f, 40f, 40f }, false))
		return true;

	if (!PED::IS_PED_INJURED(uLocal_89[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(uLocal_89[0]))
			return true;
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_89[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				return true;
	
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_89[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_89[0]))
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID()))
					return true;
	}
	else
	{
		return true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_89[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), true))
				return true;
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_89[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
					return true;
		
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_89[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_89[1]))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_89[1], PLAYER::PLAYER_PED_ID()))
						return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x29DA (10714)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_77() // Position - 0x29ED (10733)
{
	int randomIntInRange;

	switch (iLocal_53)
	{
		case 0:
			if (iLocal_52 == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.4605f, -1259.8677f, 3.9183f, -1061.8914f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_150, 1f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_150, 15f, 15f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_149))
						HUD::REMOVE_BLIP(&blLocal_149);
				
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
						{
							uLocal_153[0] = func_176(uLocal_89[0], false, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], false);
						}
					}
				
					if (!func_203())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							veLocal_93 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						func_175(&uLocal_171, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_166(true);
						func_165(true);
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.1443f, -1378.79f, 4.1997f, -1039.6846f, -1337.6096f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
						{
							func_164();
							TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0, false, false, false);
							iLocal_121 = MISC::GET_GAME_TIMER() + 60000;
						
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], true);
						
							iLocal_53 = 1;
						}
					}
				}
			}
		
			if (iLocal_52 == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.2384f, 3671.9485f, 30.8437f, 1957.8176f, 3751.8875f, 55.4436f, 159.9375f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(uLocal_150, 1f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_150, 15f, 15f, 15f, false, true, 0))
				{
					func_163();
				
					if (!func_203())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							veLocal_93 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						func_166(true);
						func_165(true);
					}
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.7609f, 3727.6997f, 31.882f, 1896.9618f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
					
						if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[0], true);
					
						if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[1], true);
					
						iLocal_121 = MISC::GET_GAME_TIMER() + 120000;
						iLocal_53 = 3;
					}
				}
			}
			break;
	
		case 1:
			if (iLocal_121 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_89[1], 7000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, veLocal_92, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				}
			
				if (!PED::IS_PED_INJURED(uLocal_89[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_LOOK_AT_ENTITY(0, uLocal_89[0], 7000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				}
			
				BUILTIN::SETTIMERA(0);
				iLocal_53 = 3;
			}
		
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 8f, 8f, 4f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 80f))
					{
						bLocal_119 = true;
						BUILTIN::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 30f, 30f, 30f, false, true, 0))
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(true);
				}
				else
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
				}
			}
			break;
	
		case 3:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[1]))
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							BUILTIN::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
				
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 8f, 8f, 4f, false, true, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 80f))
						{
							bLocal_119 = true;
							BUILTIN::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
				}
			}
		
			if (iLocal_52 == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 30f, 30f, 30f, false, true, 0))
					{
						func_162();
					
						if (func_161())
							func_63(0);
					}
					else if (func_4())
					{
						func_63(1);
					}
				}
			
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_66, 15f, 15f, 15f, false, true, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								}
							
								if (!PED::IS_PED_INJURED(uLocal_89[1]))
									TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							
								BUILTIN::SETTIMERA(0);
								iLocal_53 = 4;
							}
						}
					}
				}
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.1215f, 3715.0566f, 31.844f, 1895.6075f, 3703.5864f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					
						if (!PED::IS_PED_INJURED(uLocal_89[1]))
							TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					
						BUILTIN::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_92, 1.5f, 1.5f, 5f, false, true, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_161())
							func_63(0);
					
						func_69();
						BUILTIN::WAIT(0);
					
						if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_168 = 2;
						
							for (iLocal_61 = 0; iLocal_61 <= 1; iLocal_61 = iLocal_61 + 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
									HUD::REMOVE_BLIP(&uLocal_153[iLocal_61]);
							}
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_156))
								blLocal_156 = func_159(veLocal_92, false, false);
						
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_89[0]);
						
							iLocal_53 = 4;
						}
					}
				}
			
				if (iLocal_121 < MISC::GET_GAME_TIMER())
				{
					if (func_161())
						func_63(0);
				
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]) && ENTITY::DOES_ENTITY_EXIST(veLocal_92))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_89[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_92, -1, -1, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_LOOK_AT_ENTITY(0, uLocal_89[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_89[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_92, -1, 0, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						
							for (iLocal_61 = 0; iLocal_61 <= 1; iLocal_61 = iLocal_61 + 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
									HUD::REMOVE_BLIP(&uLocal_153[iLocal_61]);
							}
						
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
	
		case 4:
			if (iLocal_52 == 1)
			{
				switch (iLocal_168)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 8f, 8f, 4f, false, true, 0) || bLocal_119)
							{
								AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
							
								if (MISC::GET_GAME_TIMER() + 50000 > iLocal_121 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									func_6();
								
									if (bLocal_119)
									{
										if (!func_4())
										{
											if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
											{
												if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													BUILTIN::SETTIMERA(0);
													iLocal_168 = iLocal_168 + 1;
												}
											}
											else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
											{
												if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													BUILTIN::SETTIMERA(0);
													iLocal_168 = iLocal_168 + 1;
												}
											}
											else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
											{
												if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													BUILTIN::SETTIMERA(0);
													iLocal_168 = iLocal_168 + 1;
												}
											}
										}
									}
									else
									{
										iLocal_168 = iLocal_168 + 1;
									}
								}
							}
						}
						break;
				
					case 1:
						if (!func_4())
						{
							if (func_158())
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								
									if (!PED::IS_PED_INJURED(uLocal_89[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0, false, false, false);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_89[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 1193033728);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 1193033728);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
									}
								
									func_157();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
										func_6();
										BUILTIN::WAIT(0);
										iLocal_168 = iLocal_168 + 1;
									}
									else
									{
										func_156(uLocal_89[0], &uLocal_63[0]);
									}
								}
							
								if (!func_4())
									iLocal_168 = iLocal_168 + 1;
							}
						}
						break;
				
					case 2:
						if (func_158())
							iLocal_168 = 6;
						else
							iLocal_168 = iLocal_168 + 1;
						break;
				
					case 3:
						if (!bLocal_102)
						{
							if (BUILTIN::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
									BUILTIN::SETTIMERA(0);
									bLocal_102 = true;
								}
							}
						}
					
						func_156(uLocal_89[0], &uLocal_63[0]);
					
						if (!func_4())
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
								iLocal_168 = iLocal_168 + 1;
						break;
				
					case 4:
						if (!func_158())
						{
							if (!func_4())
							{
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								
									if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
										HUD::REMOVE_BLIP(&uLocal_153[0]);
								
									if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
										HUD::REMOVE_BLIP(&uLocal_153[1]);
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 1);
									
										if (!PED::IS_PED_INJURED(uLocal_89[0]))
											TASK::TASK_ENTER_VEHICLE(uLocal_89[0], veLocal_92, -1, 0, 1f, 1, 0);
									}
								
									iLocal_168 = iLocal_168 + 1;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								HUD::REMOVE_BLIP(&uLocal_153[0]);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
								HUD::REMOVE_BLIP(&uLocal_153[1]);
						
							iLocal_168 = iLocal_168 + 1;
						}
						break;
				
					case 5:
						if (func_158())
						{
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_89[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_89[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[0], func_64());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_89[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_89[0], 0);
								}
							
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_98, joaat("PLAYER"));
								func_155();
							}
						
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_92)
									if (!func_4())
										if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
												iLocal_53 = 7;
										else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
												iLocal_53 = 7;
										else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
												iLocal_53 = 7;
								else
									iLocal_53 = 7;
						}
						break;
				
					case 6:
						func_156(uLocal_89[0], &uLocal_63[0]);
					
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							if (func_158())
								if (!func_4())
									if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
										iLocal_168 = 10;
							else
								iLocal_168 = 4;
						else
							iLocal_168 = 4;
						break;
				
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_158())
							{
								if (!func_4())
								{
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
									{
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											BUILTIN::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
									{
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											BUILTIN::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
									{
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											BUILTIN::SETTIMERA(0);
											iLocal_168 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_168 = 4;
							}
						}
						else
						{
							iLocal_168 = 4;
						}
						break;
				
					case 10:
						if (func_158())
						{
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
							{
								if (!PED::IS_PED_IN_GROUP(uLocal_89[0]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_89[0]);
									PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[0], func_64());
									PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_89[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_89[0], 0);
								}
							
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_98, joaat("PLAYER"));
								func_155();
							}
						
							iLocal_168 = iLocal_168 + 1;
						}
						else
						{
							iLocal_168 = 4;
						}
						break;
				
					case 11:
						iLocal_53 = 7;
						break;
				}
			}
		
			if (iLocal_52 == 2)
			{
				switch (iLocal_168)
				{
					case 0:
						if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10f, 10f, 10f, false, true, 0))
							{
								if (PED::IS_PED_FACING_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
									TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
								
									if (func_161())
										func_63(0);
								
									func_6();
									BUILTIN::WAIT(0);
								
									if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
										iLocal_168 = iLocal_168 + 1;
								}
								else
								{
									func_156(uLocal_89[0], &uLocal_63[0]);
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							BUILTIN::SETTIMERA(0);
							iLocal_168 = iLocal_168 + 1;
						}
						break;
				
					case 2:
						func_156(uLocal_89[0], &uLocal_63[0]);
					
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 1);
					
						if (BUILTIN::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								HUD::REMOVE_BLIP(&uLocal_153[0]);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_153[1]))
								HUD::REMOVE_BLIP(&uLocal_153[1]);
						
							if (!HUD::DOES_BLIP_EXIST(blLocal_156))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
								{
									blLocal_156 = func_159(veLocal_92, false, false);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 1);
								}
							}
						}
					
						if (!func_4())
						{
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 20f, 20f, 20f, false, true, 0) && BUILTIN::TIMERA() > 9500)
								{
									randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
								
									if (randomIntInRange < 60)
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
											BUILTIN::SETTIMERA(0);
									else if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
										BUILTIN::SETTIMERA(0);
								}
							}
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_92, true))
								iLocal_53 = 7;
						break;
				}
			}
		
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
				{
					if (BUILTIN::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_92, -1, false) == uLocal_89[0])
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_92))
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_92, -1, false) && PED::IS_PED_IN_VEHICLE(uLocal_89[0], veLocal_92, false))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_89[0], veLocal_92, false);
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_92, -1, false) == uLocal_89[0])
									{
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_92, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_53 = 7;
									}
									else
									{
										func_71(uLocal_89[0], 120000, false, -1082130432);
										TASK::TASK_WANDER_STANDARD(uLocal_89[0], 1193033728, 0);
										PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
										BUILTIN::WAIT(0);
										func_67();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(uLocal_89[0]))
							{
								func_71(uLocal_89[0], 120000, false, -1082130432);
								TASK::TASK_WANDER_STANDARD(uLocal_89[0], 1193033728, 0);
								PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
								BUILTIN::WAIT(0);
								func_67();
							}
						}
					}
				}
			}
		
			if (iLocal_52 == 2)
			{
				if (BUILTIN::TIMERA() > 60000)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_92, -1, false))
							{
								if (!PED::IS_PED_INJURED(uLocal_89[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, veLocal_92, -1, -1, 1f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								}
							}
						
							if (!PED::IS_PED_INJURED(uLocal_89[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, veLocal_92, -1, 0, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
							}
						
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], veLocal_92, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_92, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_92, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_92, -1016.1517f, -1352.8549f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_92, -1005.7568f, -1353.8058f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_92, -989.2302f, -1354.2777f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
								PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
								func_67();
							}
						}
					}
				}
			}
		
			if (iLocal_52 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[0], veLocal_92) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[1], veLocal_92))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_92, true);
							TASK::CLEAR_PED_TASKS(uLocal_89[1]);
							TASK::TASK_STAND_STILL(uLocal_89[1], -1);
							PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
							iLocal_53 = 5;
						}
					
						if (!bLocal_99)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[0], veLocal_92) && !PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[1], veLocal_92))
							{
								TASK::CLEAR_PED_TASKS(uLocal_89[0]);
								TASK::TASK_STAND_STILL(uLocal_89[0], -1);
							}
						
							if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[0], veLocal_92) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_89[1], veLocal_92))
							{
								TASK::CLEAR_PED_TASKS(uLocal_89[1]);
								TASK::TASK_STAND_STILL(uLocal_89[1], -1);
							}
						
							bLocal_99 = true;
						}
					}
				}
			}
			break;
	
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_89[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, veLocal_92, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_92, 0f, 2f, 0f), 10f, 0, hLocal_96, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_92, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_92, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_92, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_92, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_92, 2185.8171f, 3915.4714f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
				}
			}
		
			iLocal_53 = 6;
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
					if (TASK::GET_SEQUENCE_PROGRESS(uLocal_89[0]) == 5)
						func_67();
			break;
	
		case 7:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[1]))
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[1], 50f, 50f, 50f, false, true, 0))
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_89[1]);
			
				switch (iLocal_62)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								uLocal_153[0] = func_176(uLocal_89[0], false, 145);
						
							iLocal_62 = iLocal_62 + 1;
							BUILTIN::SETTIMERA(0);
						}
						break;
				
					case 1:
						if (BUILTIN::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(uLocal_89[0]))
							{
								if (func_158())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
									{
										fLocal_162 = func_154(PLAYER::PLAYER_PED_ID(), uLocal_89[0], true);
										iLocal_62 = iLocal_62 + 1;
									}
								}
								else if (!bLocal_117)
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
										bLocal_117 = true;
								}
							}
						}
						break;
				
					case 2:
						func_153();
					
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
							if (func_158())
								if (!bLocal_116)
									if (func_154(PLAYER::PLAYER_PED_ID(), uLocal_89[0], true) > fLocal_162 + 5f)
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
											bLocal_116 = true;
							else if (!bLocal_117)
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									bLocal_117 = true;
					
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 1);
						
							if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
								HUD::REMOVE_BLIP(&uLocal_153[0]);
						
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR && !func_65())
							{
								if (!HUD::DOES_BLIP_EXIST(blLocal_101))
								{
									blLocal_101 = func_151(uLocal_85, false);
									HUD::SET_BLIP_SPRITE(blLocal_101, BLIP_ALTRUIST);
									func_149();
								}
							}
						
							bLocal_60 = true;
							iLocal_62 = iLocal_62 + 1;
						}
					
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
							if (func_154(PLAYER::PLAYER_PED_ID(), uLocal_89[0], true) > 50f)
								func_67();
						break;
				
					case 3:
						if (!func_4())
						{
							BUILTIN::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
									iLocal_62 = iLocal_62 + 1;
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
									iLocal_62 = iLocal_62 + 1;
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
									iLocal_62 = iLocal_62 + 1;
						}
						break;
				
					case 4:
						if (!func_4())
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_169 = MISC::GET_GAME_TIMER();
								iLocal_62 = iLocal_62 + 1;
							}
						}
						break;
				
					case 5:
						func_148();
						func_147();
						func_153();
					
						if (!bLocal_108)
						{
							if (MISC::GET_GAME_TIMER() - iLocal_169 > 7000)
							{
								if (!func_4())
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_169 = MISC::GET_GAME_TIMER();
										bLocal_108 = true;
									}
								}
							}
						}
						else if (func_2())
						{
							if (bLocal_107 && !bLocal_106)
							{
								func_146();
							}
							else
							{
								func_143();
								func_142();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							}
						}
					
						if (func_141(uLocal_79))
						{
							func_5(false);
							func_69();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
					
						if (func_140())
						{
							func_5(false);
							func_69();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(uLocal_89[0], uLocal_79, Global_23, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(blLocal_100))
									HUD::REMOVE_BLIP(&blLocal_100);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_101))
									HUD::REMOVE_BLIP(&blLocal_101);
							
								iLocal_53 = 8;
							}
						}
						break;
				}
			}
		
			if (iLocal_52 == 2)
			{
				switch (iLocal_62)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_92, true))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
									uLocal_153[0] = func_176(uLocal_89[0], false, 145);
							
								if (!HUD::DOES_BLIP_EXIST(uLocal_153[1]))
									uLocal_153[1] = func_176(uLocal_89[1], false, 145);
							
								if (!func_4())
								{
									BUILTIN::SETTIMERA(0);
								
									if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
											iLocal_62 = iLocal_62 + 1;
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
											iLocal_62 = iLocal_62 + 1;
									else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
										if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
											iLocal_62 = iLocal_62 + 1;
								}
							}
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(uLocal_89[0]) && !ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
						{
							TASK::TASK_CLEAR_LOOK_AT(uLocal_89[0]);
							TASK::TASK_ENTER_VEHICLE(uLocal_89[0], veLocal_92, 30000, 2, 1073741824, 1, 0);
						}
					
						BUILTIN::SETTIMERA(0);
						iLocal_62 = iLocal_62 + 1;
						break;
				
					case 2:
						if (!PED::IS_PED_INJURED(uLocal_89[1]) && !ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, veLocal_92, 1.5f, -3f, 0f, 1f, 4000, 1036831949, true);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_92, 30000, 1, 1073741824, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						}
					
						BUILTIN::SETTIMERA(0);
						iLocal_62 = iLocal_62 + 1;
						break;
				
					case 3:
						func_148();
						func_147();
					
						if (!bLocal_115)
							if (!func_4())
								if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
									bLocal_115 = true;
					
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(uLocal_89[0], false) && !ENTITY::IS_ENTITY_DEAD(uLocal_89[1], false))
								{
									if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(uLocal_89[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_98, joaat("PLAYER"));
										func_155();
									
										for (iLocal_61 = 0; iLocal_61 <= iLocal_88 - 1; iLocal_61 = iLocal_61 + 1)
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
												HUD::REMOVE_BLIP(&uLocal_153[iLocal_61]);
										}
									
										if (HUD::DOES_BLIP_EXIST(blLocal_156))
											HUD::REMOVE_BLIP(&blLocal_156);
									
										if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR && !func_65())
										{
											if (!HUD::DOES_BLIP_EXIST(blLocal_101))
											{
												blLocal_101 = func_151(uLocal_85, false);
												HUD::SET_BLIP_SPRITE(blLocal_101, BLIP_ALTRUIST);
												func_149();
											}
										}
									
										if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
										{
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												BUILTIN::SETTIMERA(0);
												iLocal_62 = iLocal_62 + 1;
											}
										}
										else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
										{
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												BUILTIN::SETTIMERA(0);
												iLocal_62 = iLocal_62 + 1;
											}
										}
										else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
										{
											if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												BUILTIN::SETTIMERA(0);
												iLocal_62 = iLocal_62 + 1;
											}
										}
									}
								}
							}
						}
						break;
				
					case 4:
						func_148();
						func_147();
					
						if (!func_4())
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								bLocal_60 = true;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_169 = MISC::GET_GAME_TIMER();
								iLocal_62 = iLocal_62 + 1;
							}
						}
						break;
				
					case 5:
						func_148();
					
						if (iLocal_344 == 0 || iLocal_344 == 9)
							func_147();
					
						if (MISC::GET_GAME_TIMER() - iLocal_169 > 9000)
							func_134();
					
						if (iLocal_344 == 9 && MISC::GET_GAME_TIMER() - iLocal_345 > 6000 && MISC::GET_GAME_TIMER() - iLocal_345 < 6500)
							_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
					
						if (func_141(uLocal_79))
						{
							func_5(false);
							func_69();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
					
						if (func_140())
						{
							func_5(false);
							func_69();
							BUILTIN::WAIT(0);
							_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
							if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_92, false))
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_89[0], uLocal_79, Global_23, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_89[1], uLocal_79, Global_23, false, true, 0))
									iLocal_62 = iLocal_62 + 1;
						break;
				
					case 6:
						if (HUD::DOES_BLIP_EXIST(blLocal_100))
							HUD::REMOVE_BLIP(&blLocal_100);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_101))
							HUD::REMOVE_BLIP(&blLocal_101);
					
						iLocal_53 = 8;
						break;
				}
			}
			break;
	
		case 8:
			for (iLocal_61 = 0; iLocal_61 <= iLocal_88 - 1; iLocal_61 = iLocal_61 + 1)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[iLocal_61]))
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_89[iLocal_61], false);
			}
		
			if (iLocal_52 == 1)
			{
				if (func_133(true, false, true) && iLocal_122 == -1)
				{
					func_6();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f - 5f, 2, false);
				
					if (func_2())
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == veLocal_92)
							iLocal_122 = 0;
						else
							iLocal_122 = 1;
					else
						iLocal_122 = 2;
				}
			
				if (iLocal_122 == 0)
					func_132();
			
				if (iLocal_122 == 1)
					func_131();
			
				if (iLocal_122 == 2)
					func_130();
			
				if (bLocal_128)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_37();
				}
			}
		
			if (iLocal_52 == 2)
			{
				if (func_133(true, false, true) && iLocal_122 == -1)
				{
					func_69();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f - 4f, 2, false);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.5865f, 2672.2236f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
				
					func_121(true, true, true, false, false, false, false);
				
					while (func_4())
					{
						BUILTIN::WAIT(0);
					}
				
					if (func_2())
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == veLocal_92)
							iLocal_122 = 0;
				}
			
				if (iLocal_122 == 0)
					func_118();
				else if (iLocal_122 == 1)
					func_117();
				else if (iLocal_122 == 2)
					func_78();
			
				if (bLocal_128)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_37();
				}
			}
			break;
	
		case 9:
			break;
	}

	return;
}

void func_78() // Position - 0x4A86 (19078)
{
	switch (iLocal_124)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			}
		
			if (!PED::IS_PED_INJURED(uLocal_89[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			}
		
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 1:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 2:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_89[0], uLocal_82, 1f, -1, 1193033728, 1056964608);
					iLocal_123 = MISC::GET_GAME_TIMER() + 500;
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_89[1], uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 5:
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 80, false, true);
			bLocal_128 = true;
			break;
	}

	return;
}

void func_79(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4BE3 (19427)
{
	int outValue;
	Hash statHash;

	if (func_116(echParam0) == 3)
		return;

	if (func_116(echParam0) == 4)
		return;

	func_80(func_116(echParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS") /* TUNEABLE: SP0_MONEY_MADE_FROM_RANDOM_PEDS */;
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS") /* TUNEABLE: SP1_MONEY_MADE_FROM_RANDOM_PEDS */;
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS") /* TUNEABLE: SP2_MONEY_MADE_FROM_RANDOM_PEDS */;
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS") /* TUNEABLE: SP0_MONEY_MADE_FROM_MISSIONS */;
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS") /* TUNEABLE: SP1_MONEY_MADE_FROM_MISSIONS */;
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS") /* TUNEABLE: SP2_MONEY_MADE_FROM_MISSIONS */;
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x4CB5 (19637)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_115();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_114(99, 1);
					func_113(joaat("SP0_MONEY_TOTAL_SPENT") /* TUNEABLE: SP0_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 1:
					func_113(joaat("SP1_MONEY_TOTAL_SPENT") /* TUNEABLE: SP1_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 2:
					func_113(joaat("SP2_MONEY_TOTAL_SPENT") /* TUNEABLE: SP2_MONEY_TOTAL_SPENT */, iParam3);
					break;
			}
		
			func_99(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_96(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_113(joaat("SP0_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 1:
							func_113(joaat("SP1_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 2:
							func_113(joaat("SP2_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					}
				
					if (func_96(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_113(joaat("SP0_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 1:
							func_113(joaat("SP1_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 2:
							func_113(joaat("SP2_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_113(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP0_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 1:
							func_113(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP1_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 2:
							func_113(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP2_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_113(joaat("SP0_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP0_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 1:
							func_113(joaat("SP1_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP1_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 2:
							func_113(joaat("SP2_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP2_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_113(joaat("SP0_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP0_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 1:
									func_113(joaat("SP1_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP1_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 2:
									func_113(joaat("SP2_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP2_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_113(joaat("SP0_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 1:
									func_113(joaat("SP1_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 2:
									func_113(joaat("SP2_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							}
						
							if (func_96(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_113(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP0_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 1:
									func_113(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP1_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 2:
									func_113(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP2_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_113(joaat("SP0_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP0_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 1:
									func_113(joaat("SP1_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP1_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 2:
									func_113(joaat("SP2_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP2_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							}
						
							func_95(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_114(95, iParam3);
					break;
			
				case 1:
					func_114(97, iParam3);
					break;
			
				case 2:
					func_114(96, iParam3);
					break;
			}
		
			func_114(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_83(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_83(num2);
	}

	num6 = Global_62201[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_62201[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_62201[num3] = 2147483647;
				else
					Global_62201[num3] = Global_62201[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_113(joaat("SP0_TOTAL_CASH_EARNED") /* TUNEABLE: SP0_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 1:
					func_113(joaat("SP1_TOTAL_CASH_EARNED") /* TUNEABLE: SP1_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 2:
					func_113(joaat("SP2_TOTAL_CASH_EARNED") /* TUNEABLE: SP2_TOTAL_CASH_EARNED */, iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_62201[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_62201[num3];
			Global_62201[num3] = Global_62201[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_114931.f_20571.f_233[num3 /*69*/].f_2[Global_114931.f_20571.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114931.f_20571.f_233[num3 /*69*/].f_2[Global_114931.f_20571.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114931.f_20571.f_233[num3 /*69*/].f_2[Global_114931.f_20571.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114931.f_20571.f_233[num3 /*69*/] = Global_114931.f_20571.f_233[num3 /*69*/] + 1;
		Global_114931.f_20571.f_233[num3 /*69*/].f_1 = Global_114931.f_20571.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114931.f_20571.f_233[num3 /*69*/].f_1 > 10)
			Global_114931.f_20571.f_233[num3 /*69*/].f_1 = 0;
	}

	func_82(iParam0);

	if (Global_44886 == 15)
		func_81(false);

	return 1;
}

void func_81(BOOL bParam0) // Position - 0x52B4 (21172)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/];
			Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114931.f_20571.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_62209[i /*3*/][0] = Global_114931.f_20571[i];
		Global_62209.f_31[i /*3*/][0] = Global_114931.f_20571.f_11[i];
		Global_62209.f_62[i /*3*/][0] = Global_114931.f_20571.f_22[i];
		Global_62209.f_93[i /*3*/][0] = Global_114931.f_20571.f_33[i];
		Global_62209.f_124[i /*3*/][0] = Global_114931.f_20571.f_44[i];
		Global_62209.f_155[i /*3*/][0] = Global_114931.f_20571.f_55[i];
		Global_62209.f_186[i /*3*/][0] = Global_114931.f_20571.f_66[i];
		Global_62209.f_217[i /*3*/][0] = Global_114931.f_20571.f_77[i];
		Global_62209.f_248[i /*3*/][0] = Global_114931.f_20571.f_88[i];
	
		if (!bParam0)
		{
			Global_62209[i /*3*/][1] = Global_114931.f_20571[i];
			Global_62209.f_31[i /*3*/][1] = Global_114931.f_20571.f_11[i];
			Global_62209.f_62[i /*3*/][1] = Global_114931.f_20571.f_22[i];
			Global_62209.f_93[i /*3*/][1] = Global_114931.f_20571.f_33[i];
			Global_62209.f_124[i /*3*/][1] = Global_114931.f_20571.f_44[i];
			Global_62209.f_155[i /*3*/][1] = Global_114931.f_20571.f_55[i];
			Global_62209.f_186[i /*3*/][1] = Global_114931.f_20571.f_66[i];
			Global_62209.f_217[i /*3*/][1] = Global_114931.f_20571.f_77[i];
			Global_62209.f_248[i /*3*/][1] = Global_114931.f_20571.f_88[i];
		}
	}

	return;
}

void func_82(int iParam0) // Position - 0x5536 (21814)
{
	int value;

	value = Global_62201[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH") /* TUNEABLE: SP0_TOTAL_CASH */, value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH") /* TUNEABLE: SP1_TOTAL_CASH */, value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH") /* TUNEABLE: SP2_TOTAL_CASH */, value, true);
			break;
	}

	return;
}

void func_83(int iParam0) // Position - 0x5590 (21904)
{
	int num;
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		_STAT_SET_PACKED_BOOL(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		_STAT_SET_PACKED_BOOL(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		_STAT_SET_PACKED_BOOL(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		_STAT_SET_PACKED_BOOL(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_92(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_92(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_92(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_92(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_92(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_92(8277, 0, -1, true);
		return;
	}

	if (func_91(iParam0))
	{
		func_92(func_90(iParam0), 0, -1, true);
		return;
	}

	if (func_89(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_88(iParam0));
		_MPPLY_STAT_SET_INT(func_88(iParam0), num - 1);
		return;
	}

	if (iParam0 == 39)
	{
		_STAT_SET_PACKED_BOOL(7332, false, -1);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114931.f_20571.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114931.f_20571.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114931.f_20571.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_85() /*5574*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114931.f_20571.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_85() /*5574*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_84(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_84(int iParam0) // Position - 0x575A (22362)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_91(iParam0))
				return "HSW_COUP" /*One free respray, livery or spoiler.*/;
		
			if (func_89(iParam0))
				return "HSWU_COUP" /*One free Hao's Special Works upgrade.*/;
			break;
	}

	return "";
}

int func_85() // Position - 0x588B (22667)
{
	int num;

	num = 0;
	return num;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x5898 (22680)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x58B4 (22708)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_88(int iParam0) // Position - 0x58D2 (22738)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE") /* TUNEABLE: MPPLY_DISCOUNT_HSW_UPGRADE */;
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE") /* TUNEABLE: MPPLY_DISCOUNT_HSW_UPGRADE */;
}

BOOL func_89(int iParam0) // Position - 0x58F4 (22772)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_90(int iParam0) // Position - 0x5911 (22801)
{
	switch (iParam0)
	{
		case 18:
			return 16718;
	
		case 19:
			return 16719;
	
		case 20:
			return 16720;
	
		case 21:
			return 16721;
	
		case 22:
			return 16722;
	
		case 23:
			return 16723;
	
		case 24:
			return 16724;
	
		case 25:
			return 16725;
	
		case 26:
			return 16726;
	
		case 27:
			return 16727;
	
		case 28:
			return 16728;
	
		case 29:
			return 16729;
	
		case 30:
			return 16730;
	
		case 31:
			return 16731;
	
		case 32:
			return 16732;
	
		case 33:
			return 16733;
	
		case 34:
			return 16734;
	
		case 35:
			return 16735;
	
		case 36:
			return 16736;
	
		case 37:
			return 16737;
	}

	return 16718;
}

BOOL func_91(int iParam0) // Position - 0x5A16 (23062)
{
	switch (iParam0)
	{
		case 18:
		case 19:
		case 20:
		case 21:
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
			return true;
	}

	return false;
}

void func_92(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5AA5 (23205)
{
	Hash statName;

	if (iParam0 != 18486)
	{
		statName = func_93(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_93(int iParam0, int iParam1) // Position - 0x5AD3 (23251)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_94(iParam1));
}

int func_94(int iParam0) // Position - 0x5AE8 (23272)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_48();
	
		if (num2 > -1)
		{
			Global_2741524 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741524 = 1;
		}
	}

	return num;
}

void func_95(int iParam0) // Position - 0x5B1C (23324)
{
	func_114(93, iParam0);
	func_114(29, iParam0);
	func_114(30, iParam0);
	return;
}

BOOL func_96(int iParam0) // Position - 0x5B3C (23356)
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;
	int cloudTimeAsInt7;
	int num7;
	int num8;

	if (iParam0 == 8)
		return _STAT_GET_PACKED_BOOL(129, -1);

	if (iParam0 == 9)
		return _STAT_GET_PACKED_BOOL(135, -1);

	if (iParam0 == 10)
		return _STAT_GET_PACKED_BOOL(136, -1);

	if (iParam0 == 11)
		return _STAT_GET_PACKED_BOOL(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_97(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_97(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_97(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_97(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_97(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_97(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_91(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_97(func_90(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_89(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_88(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114931.f_20571.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_85() /*5574*/].f_681.f_10, iParam0);
}

int func_97(int iParam0, int iParam1) // Position - 0x5D47 (23879)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 18486)
	{
		statHash = func_93(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x5D76 (23926)
{
	if (iParam1 == -1)
		iParam1 = func_48();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_99(BOOL bParam0) // Position - 0x5D92 (23954)
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT") /* TUNEABLE: SP0_MONEY_TOTAL_SPENT */, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT") /* TUNEABLE: SP1_MONEY_TOTAL_SPENT */, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT") /* TUNEABLE: SP2_MONEY_TOTAL_SPENT */, &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT") /* TUNEABLE: NUM_CASH_SPENT */, &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT") /* TUNEABLE: NUM_CASH_SPENT */, value, true);
		func_46(27, value);
	}

	if (value < 200000000)
		return 0;

	func_100(27, 1);
	return 1;
}

int func_100(int iParam0, int iParam1) // Position - 0x5E49 (24137)
{
	if (iParam0 >= 78)
		return 0;

	return func_101(iParam0, iParam1);
}

int func_101(int iParam0, int iParam1) // Position - 0x5E64 (24164)
{
	if (func_29(14) && !func_112(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34043 != 0 && !Global_80305)
		return 0;

	if (func_111(&Global_4525144))
	{
		if (func_109(&Global_4525144, iParam0))
			return 0;
	
		if (func_102(&Global_4525144, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_102(var uParam0, int iParam1) // Position - 0x5F01 (24321)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_29(14) && !func_112(iParam1))
		return false;

	if (func_109(uParam0, iParam1))
		return false;

	if (func_108(uParam0) < 0f)
		func_107(uParam0, 0);

	func_105(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_103(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_103(var uParam0, int iParam1) // Position - 0x5FB2 (24498)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_29(14) && !func_112(iParam1))
		return 0;

	if (func_109(uParam0, iParam1))
		return 0;

	if (func_108(uParam0) < 0f)
		func_107(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_104(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_104(var uParam0, int iParam1) // Position - 0x602D (24621)
{
	return uParam0->[iParam1] == 78;
}

void func_105(var uParam0) // Position - 0x603E (24638)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_106(uParam0, i);
	}

	func_107(uParam0, Global_4525143 - 0.5f);
	return;
}

void func_106(var uParam0, int iParam1) // Position - 0x6072 (24690)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x6082 (24706)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_108(var uParam0) // Position - 0x609F (24735)
{
	return uParam0->f_80;
}

BOOL func_109(var uParam0, int iParam1) // Position - 0x60AB (24747)
{
	return func_110(uParam0, iParam1) != -1;
}

int func_110(var uParam0, int iParam1) // Position - 0x60BD (24765)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_111(var uParam0) // Position - 0x60EA (24810)
{
	return uParam0->f_79 == 1;
}

BOOL func_112(int iParam0) // Position - 0x60F8 (24824)
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

void func_113(Hash hParam0, int iParam1) // Position - 0x6148 (24904)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_114(int iParam0, int iParam1) // Position - 0x616B (24939)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60769[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60769[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60769[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60769[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_115() // Position - 0x61C8 (25032)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH") /* TUNEABLE: SP0_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62201[0] == outValue))
			Global_62201[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH") /* TUNEABLE: SP1_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62201[1] == outValue))
			Global_62201[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH") /* TUNEABLE: SP2_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62201[2] == outValue))
			Global_62201[2] = outValue;
	}

	return;
}

int func_116(eCharacter echParam0) // Position - 0x623D (25149)
{
	return Global_2339[echParam0 /*29*/].f_17;
}

void func_117() // Position - 0x624E (25166)
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_124)
	{
		case 0:
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(vehiclePedIsIn))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_89[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_89[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_89[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[1]);
						}
					}
				
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_89[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				iLocal_123 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_89[0], uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 4:
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_124 = 7;
				}
			}
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_124 = 7;
				}
			}
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_123 = MISC::GET_GAME_TIMER() + 750;
					iLocal_124 = 7;
				}
			}
			break;
	
		case 5:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_89[0], uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_123 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_124 = iLocal_124 + 1;
					}
				}
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_89[0], uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
						iLocal_123 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_124 = iLocal_124 + 1;
					}
				}
			}
			break;
	
		case 7:
			if (!func_4())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 8:
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 80, false, true);
			bLocal_128 = true;
			break;
	}

	return;
}

void func_118() // Position - 0x6503 (25859)
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();

	switch (iLocal_124)
	{
		case 0:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_92))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
					{
						if (!PED::IS_PED_INJURED(uLocal_89[0]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_89[0]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 4000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						}
					
						if (!PED::IS_PED_INJURED(uLocal_89[1]))
						{
							TASK::CLEAR_PED_TASKS(uLocal_89[1]);
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[1]);
						}
					}
				
					TEXT_LABEL_ASSIGN_STRING(&uLocal_141, "", 24);
					func_69();
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
			{
				caLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3348f, 2643.9084f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				caLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3016f, 2643.9983f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				CAM::SHAKE_CAM(caLocal_126, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(caLocal_127, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_126, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(uLocal_79, 8f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(veLocal_92, 1120.5507f, 2647.3071f, 36.9963f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(veLocal_92, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_92, 1084227584);
				iLocal_123 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 2:
			if (iLocal_123 - 500 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[1], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
					}
				}
			}
		
			if (iLocal_123 - 1000 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82 - { 0f, 0f, 1f }, 1f, -1, 1048576000, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
					}
				}
			}
		
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(caLocal_126, 1105.8485f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(caLocal_127, 1105.9995f, 2664.4695f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_126, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_123 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 3:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(caLocal_126, 1122.3701f, 2646.1082f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(caLocal_127, 1122.3378f, 2646.1575f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_127, caLocal_126, 1500, 1, 1);
			
				if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_89[0], 1141.1556f, 2643.2046f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_89[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(uLocal_89[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_89[1], 262.1522f);
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0);
				else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0);
				else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0);
			
				iLocal_123 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 5:
			iLocal_124 = 7;
			break;
	
		case 6:
			if (!func_4())
			{
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_123 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_124 = iLocal_124 + 1;
					}
				}
			
				if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN || _GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_123 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_124 = iLocal_124 + 1;
					}
				}
			}
			break;
	
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			func_121(false, true, true, false, false, false, false);
			PED::DELETE_PED(&uLocal_89[0]);
			PED::DELETE_PED(&uLocal_89[1]);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 7);
		
			if (bLocal_129)
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_92, true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
			}
		
			CAM::SET_CAM_ACTIVE(caLocal_126, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1065353216);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 40, false, true);
			bLocal_128 = true;
	}

	if (iLocal_124 != 0)
	{
		if (func_119(1000))
		{
			func_69();
			bLocal_129 = true;
			iLocal_124 = 7;
		}
	}

	return;
}

BOOL func_119(int iParam0) // Position - 0x6AE3 (27363)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_120())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_120() // Position - 0x6B2D (27437)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_121(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x6B5F (27487)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_129(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21627.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_20())
				Global_21627.f_1 = 3;
		
			Global_23000 = 5;
		}
	
		func_128(true, bParam3, bParam2, false);
		Global_65033 = true;
		Global_77362 = true;
		Global_80303 = true;
	}
	else
	{
		func_129(0);
		HUD::THEFEED_RESUME();
		Global_65033 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_128(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_126(PLAYER::PLAYER_ID()) && !func_123(PLAYER::PLAYER_ID(), 0) && !func_122() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_126(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80303 = false;
	}

	return;
}

BOOL func_122() // Position - 0x6CAE (27822)
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

BOOL func_123(Player plParam0, int iParam1) // Position - 0x6CC8 (27848)
{
	BOOL flag;

	if (!func_125(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_124(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845299[plParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_124(int iParam0, BOOL bParam1) // Position - 0x6D21 (27937)
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_48();

	if (Global_1575072[num] == true)
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

BOOL func_125(Player plParam0) // Position - 0x6D62 (28002)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_126(Player plParam0) // Position - 0x6D84 (28036)
{
	if (func_123(plParam0, 0))
		return true;

	if (func_127())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_127() // Position - 0x6DC3 (28099)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_128(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6DD1 (28113)
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

void func_129(int iParam0) // Position - 0x6E04 (28164)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 13);
	else
		MISC::CLEAR_BIT(&Global_9463, 13);

	return;
}

void func_130() // Position - 0x6E27 (28199)
{
	switch (iLocal_124)
	{
		case 0:
			if (!func_4())
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				}
			
				if (bLocal_106)
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				else
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
			
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 1:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 2:
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
				iLocal_123 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 5:
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 80, false, true);
			bLocal_128 = true;
			break;
	}

	return;
}

void func_131() // Position - 0x7006 (28678)
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_124)
	{
		case 0:
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(vehiclePedIsIn) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_89[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					}
				
					if (bLocal_106)
						_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					else
						_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 2:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
			}
		
			func_71(uLocal_89[0], 120000, false, -1082130432);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 4:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			break;
	
		case 5:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 6:
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 80, false, true);
			bLocal_128 = true;
			break;
	}

	return;
}

void func_132() // Position - 0x723E (29246)
{
	switch (iLocal_124)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_92, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_92) && !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_89[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 10000, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
					}
				
					if (bLocal_106)
						_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					else
						_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				
					iLocal_124 = iLocal_124 + 1;
				}
			}
			break;
	
		case 1:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_82, 1f, -1, 1048576000, 0, 1193033728);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
				func_71(uLocal_89[0], 120000, false, -1082130432);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_124 = iLocal_124 + 1;
			}
			break;
	
		case 3:
			iLocal_123 = MISC::GET_GAME_TIMER() + 3000;
		
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
					iLocal_124 = iLocal_124 + 1;
			break;
	
		case 4:
			if (iLocal_123 < MISC::GET_GAME_TIMER())
				iLocal_124 = iLocal_124 + 1;
			break;
	
		case 5:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 6:
			iLocal_124 = iLocal_124 + 1;
			break;
	
		case 7:
			func_79(_GET_CURRENT_PLAYER_CHARACTER(), 1, 80, false, true);
			bLocal_128 = true;
			break;
	}

	return;
}

BOOL func_133(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x747A (29818)
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

void func_134() // Position - 0x755F (30047)
{
	BOOL flag;
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag2;
	eViewModeContext camActiveViewModeContext2;
	eViewMode camViewModeForContext2;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		flag = false;
		camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	
		if (camActiveViewModeContext != ON_FOOT)
		{
			camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
		
			if (camViewModeForContext == FIRST_PERSON)
				flag = true;
		}
	
		if (func_139(64) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_HORN) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_ACCELERATE) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_BRAKE) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_DUCK) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_AIM) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_EXIT) || flag)
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}

	switch (iLocal_344)
	{
		case 0:
			if (func_138())
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], uLocal_89[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], uLocal_89[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_89[0], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_89[1], iLocal_97);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
					iLocal_345 = MISC::GET_GAME_TIMER();
					iLocal_344 = iLocal_344 + 1;
				}
			}
			break;
	
		case 1:
			if (!func_4())
			{
				iLocal_345 = MISC::GET_GAME_TIMER();
				iLocal_344 = iLocal_344 + 1;
			}
			break;
	
		case 2:
			if (func_138())
			{
				if (MISC::GET_GAME_TIMER() - iLocal_345 > 5000)
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344 = iLocal_344 + 1;
					}
				}
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - iLocal_345 > 15000)
			{
				if (func_138())
				{
					TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_344 = iLocal_344 + 1;
				}
			}
			break;
	
		case 4:
			if (func_138())
			{
				func_136();
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344 = iLocal_344 + 1;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_89[0]);
				TASK::CLEAR_PED_TASKS(uLocal_89[1]);
				iLocal_344 = 3;
			}
			break;
	
		case 5:
			if (func_138())
			{
				func_136();
				func_135();
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_89[1], false), false))
				{
					if (MISC::GET_GAME_TIMER() - iLocal_345 > 15000)
					{
						flag2 = false;
						camActiveViewModeContext2 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					
						if (camActiveViewModeContext2 != ON_FOOT)
						{
							camViewModeForContext2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext2);
						
							if (camViewModeForContext2 == FIRST_PERSON)
								flag2 = true;
						}
					
						if (!flag2)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_97);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
						}
					
						if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER();
								iLocal_344 = iLocal_344 + 1;
							}
						}
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER();
								iLocal_344 = iLocal_344 + 1;
							}
						}
						else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
						{
							if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_345 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_344 = iLocal_344 + 1;
							}
						}
					}
				}
			}
			break;
	
		case 6:
			func_136();
			func_135();
		
			if (MISC::GET_GAME_TIMER() - iLocal_345 > 5000 && func_138())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_89[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0, false, false, false);
						
							TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0, false, false, false);
							iLocal_344 = iLocal_344 + 1;
						}
					}
				}
			}
			break;
	
		case 7:
			func_136();
		
			if (func_138())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_345 = MISC::GET_GAME_TIMER();
						iLocal_344 = iLocal_344 + 1;
					}
				}
			}
			break;
	
		case 8:
			func_136();
		
			if (func_138())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(uLocal_89[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0, false, false, false);
							iLocal_344 = 6;
						}
					}
				}
			}
		
			if (MISC::GET_GAME_TIMER() - iLocal_345 > 10000)
			{
				if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_89[0]);
					TASK::CLEAR_PED_TASKS(uLocal_89[1]);
					iLocal_345 = MISC::GET_GAME_TIMER();
					iLocal_344 = iLocal_344 + 1;
				}
			}
			break;
	}

	return;
}

void func_135() // Position - 0x7C48 (31816)
{
	if (!PED::IS_PED_INJURED(uLocal_89[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), 0, false, 0);
				}
			}
		}
	}

	return;
}

void func_136() // Position - 0x7D9E (32158)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_137();
	return;
}

void func_137() // Position - 0x7DAE (32174)
{
	Global_24407.f_134 = 1;
	return;
}

BOOL func_138() // Position - 0x7DBC (32188)
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_INJURED(uLocal_89[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[1], false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_89[1], false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(uLocal_89[0]))
					if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], vehiclePedIsIn, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 2, false) == uLocal_89[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 1, false) == uLocal_89[1])
							return true;
		}
	}

	return false;
}

BOOL func_139(int iParam0) // Position - 0x7E39 (32313)
{
	int num;
	int num2;

	num = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 128;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 128;

	if (num < iParam0 && num > -iParam0 && num2 < iParam0 && num2 > -iParam0)
	{
	}
	else
	{
		return true;
	}

	return false;
}

BOOL func_140() // Position - 0x7E89 (32393)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (func_66())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_34036)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_34036 = true;
				
					if (!Global_34035)
					{
						Global_34035 = true;
						return true;
					}
				}
			}
			else if (Global_34036)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_34036 = false;
			}
		}
	}

	return false;
}

BOOL func_141(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x7F04 (32516)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (func_66() && !Global_34034)
		{
			if (fLocal_45 == -1f)
				fLocal_45 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
		
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > fLocal_45 + 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_34034 = true;
				return true;
			}
		}
	}

	return false;
}

void func_142() // Position - 0x7F91 (32657)
{
	if (!bLocal_106)
	{
		if (!func_34("REDR1_SWV") && !func_34("REDR1_COM") && !func_34("REDR1_BANT1") && !func_34("REDR1_SIK") && !func_34("REDR2_DC") && !func_34("REDR1_OFFR") && !func_34("REDR2_OFFR") && !func_34("REDR1_CULT") && !func_34("REDR2_CULT"))
			func_5(true);
	
		if (bLocal_108 && !bLocal_132 && MISC::GET_GAME_TIMER() - iLocal_169 > 9000)
			if (!func_4())
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
					bLocal_132 = true;
	}

	if (bLocal_132 && !bLocal_133)
	{
		if (!func_4())
		{
			if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
				_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
				_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
				_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
		
			iLocal_147 = MISC::GET_GAME_TIMER() + 6000;
			bLocal_133 = true;
		}
	}

	if (!bLocal_106)
	{
		if (bLocal_132 && !bLocal_131 && iLocal_147 < MISC::GET_GAME_TIMER())
		{
			if (!func_4())
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					bLocal_133 = false;
					bLocal_131 = true;
				}
			}
		}
	}
	else if (bLocal_106 && !bLocal_130 && iLocal_147 < MISC::GET_GAME_TIMER())
	{
		if (!func_4())
		{
			if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				bLocal_133 = false;
				bLocal_130 = true;
			}
		}
	}

	return;
}

void func_143() // Position - 0x814E (33102)
{
	if (func_2() && iLocal_109 < 2)
	{
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100 || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (!func_34("REDR1_SWV"))
			{
				func_5(false);
				func_69();
				BUILTIN::WAIT(0);
				_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_161 = iLocal_161 + 6;
			}
		}
	
		func_144(uLocal_158, MISC::GET_GAME_TIMER() - iLocal_157);
	}

	if (iLocal_161 > 17)
		bLocal_107 = true;

	return;
}

void func_144(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x81DF (33247)
{
	var entitySpeedVector;
	float num;

	if (func_2())
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			entitySpeedVector = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };

	num = { entitySpeedVector - uParam0 };
	num = { func_145(num, iParam3) };

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_34("REDR1_SWV"))
			{
				if (iLocal_163 == -1)
				{
					iLocal_163 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_163 < MISC::GET_GAME_TIMER())
				{
					iLocal_161 = iLocal_161 + 3;
					func_5(false);
					func_69();
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_163 = -1;
			}
		}
	}

	if (num.f_1 > 0.025f)
	{
		iLocal_161 = iLocal_161 + 1;
	
		if (!func_34("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(false);
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num.f_1 < -0.025f)
	{
		iLocal_161 = iLocal_161 + 1;
	
		if (!func_34("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(false);
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num > 0.025f)
	{
		iLocal_161 = iLocal_161 + 1;
	
		if (!func_34("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(false);
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	if (num < -0.025f)
	{
		iLocal_161 = iLocal_161 + 1;
	
		if (!func_34("REDR1_SWV") && iLocal_109 < 4)
		{
			func_5(false);
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}

	return;
}

Vector3 func_145(float fParam0, var uParam1, var uParam2, int iParam3) // Position - 0x83C2 (33730)
{
	float num;

	num = fParam0 / (float)iParam3;
	num.f_1 = fParam0.f_1 / (float)iParam3;
	num.f_2 = fParam0.f_2 / (float)iParam3;
	return num;
}

void func_146() // Position - 0x83EE (33774)
{
	float entityAnimCurrentTime;

	if (!PED::IS_PED_INJURED(uLocal_89[0]))
	{
		switch (iLocal_109)
		{
			case 0:
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
				
					BUILTIN::SETTIMERB(0);
					iLocal_109 = iLocal_109 + 1;
				}
				break;
		
			case 1:
				if (BUILTIN::TIMERB() > 3000 || !func_4())
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_89[0]);
						TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_112, 8f, -8f, -1, 0, 0, false, false, false);
						iLocal_109 = iLocal_109 + 1;
					}
				}
				break;
		
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_112, 3))
				{
					entityAnimCurrentTime = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_1", sLocal_112);
				
					if (entityAnimCurrentTime > 0.243f && entityAnimCurrentTime < 0.28f)
					{
						if (!bLocal_103)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_103 = true;
						}
					}
					else if (entityAnimCurrentTime > 0.295f && entityAnimCurrentTime < 0.37f)
					{
						if (!bLocal_104)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_104 = true;
						
							if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
								_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
								_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
								_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
						}
					}
					else if (entityAnimCurrentTime > 0.49f && entityAnimCurrentTime < 0.55f)
					{
						if (!bLocal_105)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", uLocal_89[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1065353216, false, false, false);
							bLocal_105 = true;
						}
					}
				
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_89[0], "random@drunk_driver_1", sLocal_112) > 0.8f)
						iLocal_109 = iLocal_109 + 1;
				}
				break;
		
			case 3:
				!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_112, 3);
			
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_111, 2f, -4f, -1, 1, 0, false, false, false);
					bLocal_103 = false;
					iLocal_109 = iLocal_109 + 1;
				}
				break;
		
			case 4:
				AUDIO::STOP_SOUND(iLocal_110);
				bLocal_106 = true;
				break;
		}
	}

	return;
}

void func_147() // Position - 0x8678 (34424)
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_166)
		{
			iLocal_164 = MISC::GET_GAME_TIMER();
			bLocal_166 = true;
		}
		else
		{
			iLocal_165 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_165 = 0;
		bLocal_166 = false;
		bLocal_167 = false;
	}

	if (iLocal_165 - iLocal_164 > 50000 && !bLocal_167)
	{
		if (iLocal_52 == 1)
		{
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
	
		bLocal_167 = true;
	}

	if (iLocal_165 - iLocal_164 > 60000 && bLocal_167)
	{
		if (iLocal_52 == 2)
		{
			func_69();
			BUILTIN::WAIT(0);
			_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
	
		if (!PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
		{
			TASK::TASK_WANDER_STANDARD(uLocal_89[0], 1193033728, 0);
			func_71(uLocal_89[0], 120000, false, -1082130432);
			PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
		
			if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
				PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
		
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_89[1], uLocal_89[0], 0f, 1f, 0f, 1f, -1, 1036831949, true);
			func_71(uLocal_89[1], 120000, false, -1082130432);
			PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
		
			if (PED::IS_PED_IN_GROUP(uLocal_89[1]))
				PED::REMOVE_PED_FROM_GROUP(uLocal_89[1]);
		}
	
		func_67();
	}

	return;
}

void func_148() // Position - 0x87CB (34763)
{
	if (iLocal_52 == 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_89[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 150f, 150f, 150f, false, true, 0))
				func_67();
		
			if (func_158() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(uLocal_89[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[0], func_64());
					PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_89[0], true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_89[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
			}
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_111, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_112, 3) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_89[0]))
						TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_111, 2f, -4f, -1, 1, 0, false, false, false);
				
					if (func_161())
					{
						func_63(0);
						bLocal_118 = false;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_111, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(uLocal_89[0], 0, false);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_89[0], "random@drunk_driver_1", sLocal_111, 3))
						TASK::STOP_ANIM_PLAYBACK(uLocal_89[0], 0, false);
			
				if (func_4() && !bLocal_118)
				{
					func_63(1);
					bLocal_118 = true;
				}
			}
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_153[0]))
					HUD::REMOVE_BLIP(&uLocal_153[0]);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_100))
					blLocal_100 = func_151(uLocal_79, true);
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_153[0]))
					uLocal_153[0] = func_176(uLocal_89[0], false, 145);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_100))
					HUD::REMOVE_BLIP(&blLocal_100);
			}
		}
	}

	if (iLocal_52 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_92, false) && !PED::IS_PED_INJURED(uLocal_89[0]) && !PED::IS_PED_INJURED(uLocal_89[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 150f, 150f, 150f, false, true, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[1], 150f, 150f, 150f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[0]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
					
						TASK::CLEAR_PED_TASKS(uLocal_89[0]);
						TASK::TASK_SMART_FLEE_PED(uLocal_89[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_71(uLocal_89[0], 120000, false, -1082130432);
						PED::SET_PED_KEEP_TASK(uLocal_89[0], true);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_89[1]))
					{
						if (PED::IS_PED_IN_GROUP(uLocal_89[1]))
							PED::REMOVE_PED_FROM_GROUP(uLocal_89[1]);
					
						TASK::CLEAR_PED_TASKS(uLocal_89[1]);
						TASK::TASK_SMART_FLEE_PED(uLocal_89[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						func_71(uLocal_89[1], 120000, false, -1082130432);
						PED::SET_PED_KEEP_TASK(uLocal_89[1], true);
					}
				}
			
				func_67();
			}
		
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_92, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_89[0], veLocal_92, false) && PED::IS_PED_IN_VEHICLE(uLocal_89[1], veLocal_92, false))
				{
					if (func_161())
					{
						func_63(0);
						bLocal_118 = false;
					}
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_100))
						blLocal_100 = func_151(uLocal_79, true);
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_156))
					HUD::REMOVE_BLIP(&blLocal_156);
			}
			else
			{
				if (func_4() && !bLocal_118 && iLocal_62 > 3)
				{
					func_63(1);
					bLocal_118 = true;
				}
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_156))
					blLocal_156 = func_159(veLocal_92, false, false);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_100))
					HUD::REMOVE_BLIP(&blLocal_100);
			}
		}
	}

	return;
}

void func_149() // Position - 0x8BD4 (35796)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (!Global_34033)
		{
			_DISPLAY_HELP_TEXT("CULT_BLIP_HELP" /*Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~*/, -1);
			Global_34033 = true;
		}
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x8BF8 (35832)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

Blip func_151(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x8C0F (35855)
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_152(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8C3B (35899)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_153() // Position - 0x8C52 (35922)
{
	if (!PED::IS_PED_INJURED(uLocal_89[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_158())
			{
				if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
					PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(uLocal_89[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
					TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_89[0], 0, 0);
			
				if (!bLocal_120)
				{
					if (!func_4())
					{
						_CONVERSATION_ADD_LINE(&uLocal_171, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						bLocal_120 = true;
					}
				}
			}
			else
			{
				bLocal_120 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_GO_TO_ENTITY) == 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_89[0], SCRIPT_TASK_GO_TO_ENTITY) == 0)
					TASK::CLEAR_PED_TASKS(uLocal_89[0]);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(uLocal_89[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_89[0], func_64());
			PED::SET_PED_NEVER_LEAVES_GROUP(uLocal_89[0], true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uLocal_89[0], 0);
		}
	}

	return;
}

float func_154(Ped pedParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x8D76 (36214)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_155() // Position - 0x8DD4 (36308)
{
	if (!func_65())
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			Global_34031 = true;

	return;
}

void func_156(Ped pedParam0, var uParam1) // Position - 0x8DF0 (36336)
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_97);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_97);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_97);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_97);
				*uParam1 = *uParam1 + 1;
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
					*uParam1 = *uParam1 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
					*uParam1 = 0;
			break;
	}

	return;
}

void func_157() // Position - 0x8EA9 (36521)
{
	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			BUILTIN::SETTIMERA(0);
			iLocal_168 = iLocal_168 + 1;
		}
	}
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			BUILTIN::SETTIMERA(0);
			iLocal_168 = iLocal_168 + 1;
		}
	}
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			BUILTIN::SETTIMERA(0);
			iLocal_168 = iLocal_168 + 1;
		}
	}

	return;
}

BOOL func_158() // Position - 0x8F2C (36652)
{
	int num;

	if (iLocal_52 == 1)
		num = 1;

	if (iLocal_52 == 2)
		num = 2;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= num)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
				return true;

	return false;
}

Blip func_159(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9085 (36997)
{
	return func_160(veParam0, !bParam1, bParam2);
}

Blip func_160(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9098 (37016)
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

BOOL func_161() // Position - 0x913C (37180)
{
	if (Global_24011 == 1)
		return true;

	return false;
}

void func_162() // Position - 0x9153 (37203)
{
	if (!PED::IS_PED_INJURED(uLocal_89[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_89[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!bLocal_113)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
					bLocal_113 = true;
		
			if (!bLocal_114)
				if (_CONVERSATION_ADD_LINE(&uLocal_171, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
					bLocal_114 = true;
		}
	}

	return;
}

void func_163() // Position - 0x91C4 (37316)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_149))
		HUD::REMOVE_BLIP(&blLocal_149);

	for (iLocal_61 = 0; iLocal_61 <= iLocal_88 - 1; iLocal_61 = iLocal_61 + 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
		{
			uLocal_153[iLocal_61] = func_176(uLocal_89[iLocal_61], false, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_153[iLocal_61], false);
		}
	}

	return;
}

void func_164() // Position - 0x921C (37404)
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_23992 = false;
	return;
}

void func_165(BOOL bParam0) // Position - 0x922C (37420)
{
	if (bParam0)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113987, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_113981 = 1;
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113987, "NULL", 24);
		Global_113981 = 0;
	}

	return;
}

int func_166(BOOL bParam0) // Position - 0x9258 (37464)
{
	if (func_169())
	{
		Global_114921 = true;
		Global_114918 = MISC::GET_GAME_TIMER();
	
		if (func_50(Global_114920))
			func_167(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_50(Global_114920))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_167(int iParam0) // Position - 0x92AB (37547)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114931.f_25002.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_168(iParam0), -1);
					Global_114931.f_25002.f_2 = Global_114931.f_25002.f_2 + 1;
					MISC::SET_BIT(&Global_114927, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114927, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_168(iParam0), -1);
					Global_114931.f_25002.f_3 = Global_114931.f_25002.f_3 + 1;
					MISC::SET_BIT(&Global_114927, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114927, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_168(iParam0), -1);
					Global_114931.f_25002.f_4 = Global_114931.f_25002.f_4 + 1;
					MISC::SET_BIT(&Global_114927, 2);
				}
			}
			break;
	}

	return;
}

char* func_168(int iParam0) // Position - 0x9386 (37766)
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

BOOL func_169() // Position - 0x93C8 (37832)
{
	switch (func_170(&Global_33852, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_170(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x93FE (37886)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99907.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_174(0))
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24407.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44886 = iParam2;
		Global_44848 = *uParam0;
		Global_44849 = iParam4;
		Global_44847 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44847 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44847; i = i + 1)
			{
				if (Global_44853[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44848 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44847 == 8)
			return 0;
	
		Global_44850 = Global_44850 + 1;
		*uParam0 = Global_44850;
		Global_44853[Global_44847 /*4*/] = Global_44850;
		Global_44853[Global_44847 /*4*/].f_1 = iParam1;
		Global_44853[Global_44847 /*4*/].f_2 = iParam2;
		Global_44853[Global_44847 /*4*/].f_3 = 0;
		Global_44847 = Global_44847 + 1;
	
		if (iParam4 != 0)
			func_171(uParam0, iParam4);
	}

	return 2;
}

void func_171(var uParam0, int iParam1) // Position - 0x9535 (38197)
{
	int i;

	if (Global_44847 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44847; i = i + 1)
	{
		if (Global_44853[i /*4*/] == *uParam0)
			Global_44853[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x9584 (38276)
{
	return func_173(iParam0, Global_44886);
}

BOOL func_173(int iParam0, int iParam1) // Position - 0x9595 (38293)
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

BOOL func_174(int iParam0) // Position - 0x9776 (38774)
{
	if (Global_44886 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

int func_175(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x9798 (38808)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23007 = false;
	Global_23009 = false;
	Global_23014 = false;
	Global_23991 = 0;
	Global_23993 = true;
	Global_23997 = 0;
	Global_23995 = iParam7;
	Global_2883585 = 0;
	return func_11(sParam2, iParam3, false);
}

Blip func_176(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x97EB (38891)
{
	Blip blip;

	blip = func_160(eParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2339[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2339[iParam2 /*29*/].f_3));

	return blip;
}

void func_177() // Position - 0x9835 (38965)
{
	if (func_179())
	{
		sLocal_111 = "drunk_idle_van";
		sLocal_112 = "vomit_van";
	}
	else if (func_178())
	{
		sLocal_111 = "drunk_idle_low";
		sLocal_112 = "vomit_low";
	}
	else
	{
		sLocal_111 = "drunk_idle";
		sLocal_112 = "vomit_outside";
	}

	return;
}

BOOL func_178() // Position - 0x9875 (39029)
{
	Hash vehicleLayoutHash;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), false))
		{
			vehicleLayoutHash = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false));
		
			if (vehicleLayoutHash == joaat("LAYOUT_LOW") || vehicleLayoutHash == joaat("LAYOUT_LOW_BFINJECTION") || vehicleLayoutHash == joaat("LAYOUT_LOW_CHEETAH") || vehicleLayoutHash == joaat("LAYOUT_LOW_DUNE") || vehicleLayoutHash == joaat("LAYOUT_LOW_INFERNUS") || vehicleLayoutHash == joaat("LAYOUT_LOW_RESTRICTED") || vehicleLayoutHash == joaat("LAYOUT_LOW_SENTINEL2") || vehicleLayoutHash == joaat("LAYOUT_LOW_BLADE") || vehicleLayoutHash == joaat("LAYOUT_LOW_TURISMOR") || vehicleLayoutHash == joaat("LAYOUT_LOW_FURORE") || vehicleLayoutHash == joaat("LAYOUT_LOW_OSIRIS"))
				return true;
		}
	}

	return false;
}

BOOL func_179() // Position - 0x9949 (39241)
{
	Hash vehicleLayoutHash;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false), false))
		{
			vehicleLayoutHash = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(uLocal_89[0], false));
		
			if (vehicleLayoutHash == joaat("LAYOUT_VAN") || vehicleLayoutHash == joaat("LAYOUT_VAN_BODHI") || vehicleLayoutHash == joaat("LAYOUT_VAN_BOXVILLE") || vehicleLayoutHash == joaat("LAYOUT_VAN_CADDY") || vehicleLayoutHash == joaat("LAYOUT_VAN_JOURNEY") || vehicleLayoutHash == joaat("LAYOUT_VAN_MULE") || vehicleLayoutHash == joaat("LAYOUT_VAN_POLICE") || vehicleLayoutHash == joaat("LAYOUT_VAN_TRASH") || vehicleLayoutHash == joaat("LAYOUT_4X4") || vehicleLayoutHash == joaat("LAYOUT_BISON") || vehicleLayoutHash == joaat("LAYOUT_RANGER") || vehicleLayoutHash == joaat("LAYOUT_RANGER_SWAT"))
				return true;
		}
	}

	return false;
}

void func_180() // Position - 0x9A2B (39467)
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

void func_181() // Position - 0x9A98 (39576)
{
	if (!bLocal_59)
	{
		func_183(39, true);
		func_183(40, true);
		func_183(41, true);
		func_183(42, true);
		func_183(43, true);
		func_183(44, true);
		MISC::CLEAR_AREA(uLocal_66, 8f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_66 - { 8f, 8f, 8f }, uLocal_66 + { 8f, 8f, 8f }, false, true, true, true, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_74 - { 10f, 15f, 15f }, uLocal_74 + { 10f, 15f, 15f }, false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_79 - { 10f, 15f, 15f }, uLocal_79 + { 10f, 15f, 15f }, false, true);
		MISC::SET_BIT(&uLocal_148, 5);
	
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &hLocal_98);
		veLocal_92 = VEHICLE::CREATE_VEHICLE(hLocal_96, uLocal_74, fLocal_77, true, true, false);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_92);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_92, 1084227584);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_96, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_92, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(veLocal_92, true);
		iLocal_78 = ENTITY::GET_ENTITY_HEALTH(veLocal_92);
		uLocal_89[0] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_94, uLocal_66, fLocal_69, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_89[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_89[0], hLocal_98);
		PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_89[0], 65536, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_94);
		AUDIO::STOP_PED_SPEAKING(uLocal_89[0], true);
		uLocal_89[1] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_95, uLocal_70, fLocal_73, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_89[1], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_89[1], hLocal_98);
		PED::SET_PED_CONFIG_FLAG(uLocal_89[1], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_89[1], 65536, true);
		AUDIO::STOP_PED_SPEAKING(uLocal_89[1], true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_98, joaat("PLAYER"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_95);
	
		if (iLocal_52 == 1)
		{
			TASK::TASK_PLAY_ANIM(uLocal_89[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(uLocal_89[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_89[0], "MOVE_M@DRUNK@VERYDRUNK", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_89[1], "MOVE_M@DRUNK@MODERATEDRUNK", 1048576000);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[0], PV_COMP_HEAD, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[0], PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[0], PV_COMP_LOWR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_LOWR, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(veLocal_92, 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 299, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_89[0], false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_89[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_89[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 3, uLocal_89[0], "REDR1Drunk1", 0, 1);
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 4, uLocal_89[1], "REDR1Drunk2", 0, 1);
		}
	
		if (iLocal_52 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_79 - { 10f, 50f, 30f }, uLocal_79 + { 10f, 50f, 30f }, false, true, true, true, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_92, true);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_HAIR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_LOWR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uLocal_89[1], PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 134, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[1], 134, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[1], 26, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_89[1], 206, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_89[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_89[1], false);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_89[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_89[0], uLocal_89[1], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_89[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_89[1], false);
			TASK::TASK_LOOK_AT_ENTITY(uLocal_89[1], uLocal_89[0], -1, SLF_EXTEND_YAW_LIMIT | 8 | 2048, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_89[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 1048576000);
			PED::SET_PED_MOVEMENT_CLIPSET(uLocal_89[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 1048576000);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_89[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_89[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 3, uLocal_89[0], "REDR2DrunkM", 0, 1);
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_171, 4, uLocal_89[1], "REDR2DrunkF", 0, 1);
		}
	
		bLocal_59 = true;
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x9F78 (40824)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80305)
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

void func_183(int iParam0, BOOL bParam1) // Position - 0xA013 (40979)
{
	if (bParam1)
		if (!func_187(iParam0, 2, true))
			func_186(iParam0, 2, true);
	else if (func_187(iParam0, 2, true))
		func_184(iParam0, 2, true);

	return;
}

void func_184(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA04A (41034)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_102506.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_45() == 0)
		{
			address = func_97(func_185(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_92(func_185(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_114931.f_668[iParam0], iParam1);
	}

	return;
}

int func_185(int iParam0) // Position - 0xA0BA (41146)
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

	return 18486;
}

void func_186(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA49E (42142)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_102506.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_45() == 0)
		{
			address = func_97(func_185(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_92(func_185(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_114931.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_187(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA50E (42254)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102506.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_45() == 0)
			return IS_BIT_SET(func_97(func_185(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114931.f_668[iParam0], iParam1);

	return false;
}

void func_188() // Position - 0xA56E (42350)
{
	STREAMING::REQUEST_MODEL(hLocal_94);
	STREAMING::REQUEST_MODEL(hLocal_96);
	STREAMING::REQUEST_MODEL(hLocal_95);

	if (iLocal_52 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	else if (iLocal_52 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}

	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");

	if (STREAMING::HAS_MODEL_LOADED(hLocal_94) && STREAMING::HAS_MODEL_LOADED(hLocal_96) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK") && STREAMING::HAS_MODEL_LOADED(hLocal_95))
	{
		if (iLocal_52 == 1)
			if (STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1") && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK") && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1))
				bLocal_54 = true;
		else if (iLocal_52 == 2)
			if (STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
				bLocal_54 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_94);
		STREAMING::REQUEST_MODEL(hLocal_96);
		STREAMING::REQUEST_MODEL(hLocal_95);
	
		if (iLocal_52 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
		}
		else if (iLocal_52 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
	
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}

	return;
}

void func_189() // Position - 0xA6CF (42703)
{
	if (iLocal_52 == 1)
	{
		uLocal_150 = { -1018.2382f, -1350.1014f, 4.475f };
		iLocal_88 = 2;
		hLocal_94 = joaat("A_M_Y_BeachVesp_01");
		hLocal_95 = joaat("A_M_Y_BeachVesp_02");
		uLocal_66 = { -1016.7623f, -1356.459f, 4.5531f };
		fLocal_69 = 247.8087f;
		uLocal_70 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_73 = 66.3861f;
		uLocal_74 = { -1027.7618f, -1341.6439f, 4.4614f };
		fLocal_77 = 76.9418f;
		hLocal_96 = joaat("baller2");
		uLocal_79 = { 160.8892f, -111.4167f, 61.2999f };
		uLocal_82 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_58 = true;
	}

	if (iLocal_52 == 2)
	{
		uLocal_150 = { 1893.8561f, 3714.3457f, 31.7771f };
		iLocal_88 = 2;
		hLocal_94 = joaat("A_M_Y_GenStreet_01");
		hLocal_95 = joaat("A_F_Y_Hipster_03");
		uLocal_66 = { 1893.8561f, 3714.3457f, 31.7771f };
		fLocal_69 = 252.0142f;
		uLocal_70 = { 1894.7627f, 3714.1604f, 31.7605f };
		fLocal_73 = 86.1102f;
		uLocal_74 = { 1888.2565f, 3717.1892f, 31.8394f };
		fLocal_77 = 299.4672f;
		hLocal_96 = joaat("emperor");
		uLocal_79 = { 1120.5507f, 2647.3071f, 36.9963f };
		uLocal_82 = { 1121.8657f, 2641.7068f, 37.1487f };
		bLocal_58 = true;
	}

	return;
}

BOOL func_190() // Position - 0xA827 (43047)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_42) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_201())
			return false;
	}

	if (func_197())
		return true;

	if (func_191(100f, true) != -1)
		return true;

	return false;
}

int func_191(float fParam0, BOOL bParam1) // Position - 0xA8AD (43181)
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
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_55();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114931.f_18581[num /*6*/], 2) && !IS_BIT_SET(Global_114931.f_18581[num /*6*/], 3))
				{
					func_192(num, &unk);
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

void func_192(int iParam0, var uParam1) // Position - 0xA95E (43358)
{
	switch (iParam0)
	{
		case 0:
			func_193(uParam1, "Abigail1", func_195(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 1:
			func_193(uParam1, "Abigail2", func_195(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 2:
			func_193(uParam1, "Barry1", func_195(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 3:
			func_193(uParam1, "Barry2", func_195(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 4:
			func_193(uParam1, "Barry3", func_195(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 5:
			func_193(uParam1, "Barry3A", func_195(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 6:
			func_193(uParam1, "Barry3C", func_195(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 7:
			func_193(uParam1, "Barry4", func_195(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_194(iParam0), 0, 0);
			break;
	
		case 8:
			func_193(uParam1, "Dreyfuss1", func_195(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 9:
			func_193(uParam1, "Epsilon1", func_195(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 10:
			func_193(uParam1, "Epsilon2", func_195(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 11:
			func_193(uParam1, "Epsilon3", func_195(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 12:
			func_193(uParam1, "Epsilon4", func_195(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 13:
			func_193(uParam1, "Epsilon5", func_195(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 14:
			func_193(uParam1, "Epsilon6", func_195(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 15:
			func_193(uParam1, "Epsilon7", func_195(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 16:
			func_193(uParam1, "Epsilon8", func_195(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 17:
			func_193(uParam1, "Extreme1", func_195(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 18:
			func_193(uParam1, "Extreme2", func_195(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 19:
			func_193(uParam1, "Extreme3", func_195(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 20:
			func_193(uParam1, "Extreme4", func_195(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 21:
			func_193(uParam1, "Fanatic1", func_195(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_194(iParam0), 1, 0);
			break;
	
		case 22:
			func_193(uParam1, "Fanatic2", func_195(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_194(iParam0), 1, 0);
			break;
	
		case 23:
			func_193(uParam1, "Fanatic3", func_195(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_194(iParam0), 0, 1);
			break;
	
		case 24:
			func_193(uParam1, "Hao1", func_195(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_194(iParam0), 0, 1);
			break;
	
		case 25:
			func_193(uParam1, "Hunting1", func_195(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 26:
			func_193(uParam1, "Hunting2", func_195(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 27:
			func_193(uParam1, "Josh1", func_195(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 28:
			func_193(uParam1, "Josh2", func_195(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 29:
			func_193(uParam1, "Josh3", func_195(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 30:
			func_193(uParam1, "Josh4", func_195(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 31:
			func_193(uParam1, "Maude1", func_195(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 32:
			func_193(uParam1, "Minute1", func_195(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 33:
			func_193(uParam1, "Minute2", func_195(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 34:
			func_193(uParam1, "Minute3", func_195(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 35:
			func_193(uParam1, "MrsPhilips1", func_195(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 36:
			func_193(uParam1, "MrsPhilips2", func_195(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 37:
			func_193(uParam1, "Nigel1", func_195(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 38:
			func_193(uParam1, "Nigel1A", func_195(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 39:
			func_193(uParam1, "Nigel1B", func_195(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
	
		case 40:
			func_193(uParam1, "Nigel1C", func_195(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
	
		case 41:
			func_193(uParam1, "Nigel1D", func_195(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_194(iParam0), 1, 1);
			break;
	
		case 42:
			func_193(uParam1, "Nigel2", func_195(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 43:
			func_193(uParam1, "Nigel3", func_195(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 1);
			break;
	
		case 44:
			func_193(uParam1, "Omega1", func_195(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 45:
			func_193(uParam1, "Omega2", func_195(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 46:
			func_193(uParam1, "Paparazzo1", func_195(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 47:
			func_193(uParam1, "Paparazzo2", func_195(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 48:
			func_193(uParam1, "Paparazzo3", func_195(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 49:
			func_193(uParam1, "Paparazzo3A", func_195(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 50:
			func_193(uParam1, "Paparazzo3B", func_195(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 51:
			func_193(uParam1, "Paparazzo4", func_195(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 52:
			func_193(uParam1, "Rampage1", func_195(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 54:
			func_193(uParam1, "Rampage3", func_195(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 55:
			func_193(uParam1, "Rampage4", func_195(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 56:
			func_193(uParam1, "Rampage5", func_195(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_194(iParam0), 0, 0);
			break;
	
		case 53:
			func_193(uParam1, "Rampage2", func_195(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_194(iParam0), 1, 0);
			break;
	
		case 57:
			func_193(uParam1, "TheLastOne", func_195(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 58:
			func_193(uParam1, "Tonya1", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 59:
			func_193(uParam1, "Tonya2", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 60:
			func_193(uParam1, "Tonya3", func_195(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 61:
			func_193(uParam1, "Tonya4", func_195(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		case 62:
			func_193(uParam1, "Tonya5", func_195(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_194(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_193(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xBAD3 (47827)
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

int func_194(int iParam0) // Position - 0xBB64 (47972)
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

struct<2> func_195(int iParam0) // Position - 0xBEAA (48810)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_196(iParam0) };

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

struct<2> func_196(int iParam0) // Position - 0xBEE0 (48864)
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

BOOL func_197() // Position - 0xC43E (50238)
{
	if (func_200() && !func_201())
		return true;

	if (func_199() && func_198())
		return true;

	return false;
}

BOOL func_198() // Position - 0xC470 (50288)
{
	return Global_114649 > 0;
}

BOOL func_199() // Position - 0xC47E (50302)
{
	if (Global_99351 != -1)
		return true;

	return false;
}

BOOL func_200() // Position - 0xC493 (50323)
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 20);

	return false;
}

BOOL func_201() // Position - 0xC4B6 (50358)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_202() // Position - 0xC4D3 (50387)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_197())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_201())
			return false;

	if (func_191(100f, true) != -1)
		return true;

	return false;
}

BOOL func_203() // Position - 0xC535 (50485)
{
	if (Global_114920 == func_59() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114921)
		return true;

	return false;
}

void func_204(int iParam0) // Position - 0xC560 (50528)
{
	if (iParam0 == -1)
		iParam0 = func_59();

	if (iParam0 == -1)
		return;

	func_206(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114917 = 0;
	func_205();
	return;
}

void func_205() // Position - 0xC596 (50582)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_206(int iParam0) // Position - 0xC5D3 (50643)
{
	Global_114920 = iParam0;
	return;
}

BOOL func_207(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC5E1 (50657)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_153523)
		return false;

	if (iParam3 == -1)
		iParam3 = func_59();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_42 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_201())
				return false;
		}
	
		if (!Global_114931.f_9092)
			return false;
	
		if (func_40(false))
			return false;
	
		if (func_197())
			return false;
	
		if (func_247())
			return false;
	
		if (Global_114920 != -1)
			return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_191(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_42.f_2 > 50f)
				return false;
	
		if (!func_246(iParam3))
			return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_245(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_245(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_244(iParam3, iParam4, 145))
				return false;
	
		if (!func_243(Global_114931.f_25002.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114922 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_242())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_233(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_232(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_232(0, 0))
			return false;
	
		if (Global_33939)
			return false;
	
		if (func_246(30) && !func_232(30, 0))
			if (iParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_25(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114931.f_2370.f_539.f_2300[i /*3*/] };
				num = Global_114931.f_2370.f_539.f_2296[i];
			
				if (func_231(num))
					if (func_209(i))
						if (!func_208(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_208(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xC97B (51579)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_209(eCharacter echParam0) // Position - 0xC9C2 (51650)
{
	int num;

	num = Global_114931.f_2370.f_539.f_2296[echParam0];
	return func_210(num);
}

BOOL func_210(int iParam0) // Position - 0xC9E3 (51683)
{
	return func_211(iParam0, 1);
}

int func_211(int iParam0, int iParam1) // Position - 0xC9F2 (51698)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_231(iParam0))
		return 0;

	func_212(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_212(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xCA45 (51781)
{
	func_213(func_224(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_213(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xCA63 (51811)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_223(iParam0, iParam1))
	{
		num = func_222(iParam1);
		num2 = func_220(iParam0);
		num3 = func_220(iParam0) - func_220(iParam1);
		num4 = func_222(iParam0) - func_222(iParam1);
		num5 = func_219(iParam0) - func_219(iParam1);
		num6 = func_218(iParam0) - func_218(iParam1);
		num7 = func_217(iParam0) - func_217(iParam1);
		num8 = func_216(iParam0) - func_216(iParam1);
	}
	else
	{
		num = func_222(iParam0);
		num2 = func_220(iParam1);
		num3 = func_220(iParam1) - func_220(iParam0);
		num4 = func_222(iParam1) - func_222(iParam0);
		num5 = func_219(iParam1) - func_219(iParam0);
		num6 = func_218(iParam1) - func_218(iParam0);
		num7 = func_217(iParam1) - func_217(iParam0);
		num8 = func_216(iParam1) - func_216(iParam0);
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
	
		num5 = num5 + func_215(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_214(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_214(float fParam0, float fParam1, float fParam2) // Position - 0xCC64 (52324)
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

int func_215(int iParam0, int iParam1) // Position - 0xCCA6 (52390)
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

int func_216(int iParam0) // Position - 0xCD48 (52552)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_217(int iParam0) // Position - 0xCD5B (52571)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_218(int iParam0) // Position - 0xCD6E (52590)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_219(int iParam0) // Position - 0xCD81 (52609)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_220(int iParam0) // Position - 0xCD93 (52627)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_221(BOOL bParam0, var uParam1, var uParam2) // Position - 0xCDB5 (52661)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_222(int iParam0) // Position - 0xCDCC (52684)
{
	return iParam0 & 15;
}

BOOL func_223(int iParam0, int iParam1) // Position - 0xCDD9 (52697)
{
	int num;
	int num2;

	if (!func_231(iParam1) || !func_231(iParam0))
		return 1;

	num = func_220(iParam0);
	num2 = func_220(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_222(iParam0);
	num2 = func_222(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_219(iParam0);
	num2 = func_219(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_218(iParam0);
	num2 = func_218(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_217(iParam0);
	num2 = func_217(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_216(iParam0);
	num2 = func_216(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_224() // Position - 0xCEE5 (52965)
{
	var unk;

	func_230(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_229(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_228(&unk, CLOCK::GET_CLOCK_HOURS());
	func_227(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_226(&unk, CLOCK::GET_CLOCK_MONTH());
	func_225(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_225(var uParam0, int iParam1) // Position - 0xCF2B (53035)
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

void func_226(var uParam0, int iParam1) // Position - 0xCFB1 (53169)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_227(var uParam0, int iParam1) // Position - 0xCFE4 (53220)
{
	int num;
	int num2;

	num = func_222(*uParam0);
	num2 = func_220(*uParam0);

	if (iParam1 < 1 || iParam1 > func_215(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_228(var uParam0, int iParam1) // Position - 0xD035 (53301)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_229(var uParam0, int iParam1) // Position - 0xD06F (53359)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_230(var uParam0, int iParam1) // Position - 0xD0AA (53418)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_231(int iParam0) // Position - 0xD0E6 (53478)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_216(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_217(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_218(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_220(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_222(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_219(iParam0);

	if (num6 < 1 || num6 > func_215(num5, num4))
		return false;

	return true;
}

BOOL func_232(int iParam0, int iParam1) // Position - 0xD1C2 (53698)
{
	if (IS_BIT_SET(Global_114931.f_25002.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_233(int iParam0) // Position - 0xD1E2 (53730)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_25(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_241() || Global_113978 || Global_33795 || func_240() || func_31(8, -1) || func_239() || func_238() || func_237() || func_236() || Global_114931.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_241() || Global_33795 || func_240() || func_31(8, -1) || func_237() || func_239() || func_238() || func_236() || Global_114931.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_241() || Global_113978 || Global_33795 || func_240() || func_31(8, -1) || func_237() || func_239() || func_238() || func_236() || Global_114931.f_7695.f_919[character] == 5 || Global_45433 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_241() || Global_113978 || Global_33795 || func_240() || func_31(8, -1) || func_239() || func_238() || func_236() || Global_114931.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_241() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_31(8, -1) || func_236() || func_235() || Global_114931.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_31(8, -1) || func_239() || func_238() || func_235() || func_234())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_241() || Global_33795 || func_240() || func_31(8, -1) || func_238() || func_237() || func_236() || Global_114931.f_7695.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_241() || func_238() || Global_113978 || Global_33795 || func_240() || Global_46111 || func_31(8, -1) || func_237() || func_235() || func_236() || Global_114931.f_7695.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_241() || Global_113978 || Global_33795 || func_240() || func_31(8, -1) || func_237() || func_235() || func_239() || func_238() || func_236())
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

BOOL func_234() // Position - 0xD8FF (55551)
{
	return Global_102493.f_1;
}

BOOL func_235() // Position - 0xD90D (55565)
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 13);

	return false;
}

BOOL func_236() // Position - 0xD930 (55600)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_237() // Position - 0xD94A (55626)
{
	if (Global_80566)
		return true;
	else if (Global_65021 && !Global_65027)
		return true;

	return false;
}

BOOL func_238() // Position - 0xD974 (55668)
{
	return Global_102506.f_418 > 0;
}

BOOL func_239() // Position - 0xD985 (55685)
{
	return Global_102506.f_417 > 0;
}

BOOL func_240() // Position - 0xD996 (55702)
{
	return Global_1575092;
}

BOOL func_241() // Position - 0xD9A2 (55714)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99907.f_44 == 1;

	return false;
}

BOOL func_242() // Position - 0xD9BE (55742)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_243(int iParam0) // Position - 0xD9E6 (55782)
{
	return func_223(func_224(), iParam0);
}

BOOL func_244(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xD9F8 (55800)
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

int func_245(eCharacter echParam0) // Position - 0xDADC (56028)
{
	if (!func_25(echParam0))
		return 7;

	return Global_114931.f_7695.f_919[echParam0];
}

BOOL func_246(int iParam0) // Position - 0xDB00 (56064)
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_114931.f_25002, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_114931.f_25002.f_1, num);
	}

	return flag;
}

BOOL func_247() // Position - 0xDB58 (56152)
{
	Vehicle vehiclePedIsIn;

	if (Global_33944)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xDB9C (56220)
{
	int profileSetting;

	if (Global_153815 == 2)
		return true;
	else if (Global_153815 == 3)
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

void func_249() // Position - 0xDC54 (56404)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	if (bLocal_170)
	{
		func_288(false);
	
		if (Global_34035)
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	
		func_287();
		func_6();
		AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_74 - { 10f, 15f, 15f }, uLocal_74 + { 10f, 15f, 15f }, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_79 - { 10f, 15f, 15f }, uLocal_79 + { 10f, 15f, 15f }, true, true);
		func_165(false);
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
	
		if (!ENTITY::IS_ENTITY_DEAD(veLocal_93, false))
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, false) && func_154(PLAYER::PLAYER_PED_ID(), veLocal_93, true) > 50f)
				func_261(veLocal_93, 0, _CHAR_NULL);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_89[0]))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_89[0], 317, true);
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[0], false))
					PED::RESET_PED_LAST_VEHICLE(uLocal_89[0]);
			
				if (PED::IS_PED_IN_GROUP(uLocal_89[0]))
					PED::REMOVE_PED_FROM_GROUP(uLocal_89[0]);
			}
		}
	
		for (iLocal_61 = 0; iLocal_61 <= iLocal_88 - 1; iLocal_61 = iLocal_61 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_89[iLocal_61]))
			{
				if (!PED::IS_PED_INJURED(uLocal_89[iLocal_61]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_89[iLocal_61], 317, true);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_89[iLocal_61], false))
						PED::RESET_PED_LAST_VEHICLE(uLocal_89[iLocal_61]);
				
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_89[iLocal_61], true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_98, joaat("PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_89[iLocal_61], false);
				}
			
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_89[iLocal_61]);
			}
		}
	
		for (iLocal_61 = 0; iLocal_61 <= iLocal_88 - 1; iLocal_61 = iLocal_61 + 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_153[iLocal_61]))
				HUD::REMOVE_BLIP(&uLocal_153[iLocal_61]);
		}
	
		if (iLocal_52 == 1)
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.4054f, -10f, 98.245f, -1277.174f, 10f, 1);
	
		if (CAM::DOES_CAM_EXIST(caLocal_125))
			if (CAM::IS_CAM_ACTIVE(caLocal_125))
				CAM::SET_CAM_ACTIVE(caLocal_125, false);
	}

	func_250(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_250(int iParam0) // Position - 0xDEE8 (57064)
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_59();

	if (iParam0 == -1)
		return;

	if (func_203())
	{
		func_254(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114922 = MISC::GET_GAME_TIMER();
		func_253(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_252(Global_114920, true), 64);
	
		if (func_58(Global_114920) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114919, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114917, MISC::GET_GAME_TIMER() - Global_114918, 0);
	}
	else if (IS_BIT_SET(Global_114927, 0) && Global_114931.f_25002.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114927, 0);
	}

	func_251(&Global_33852);
	Global_114921 = false;
	func_206(-1);
	return;
}

void func_251(var uParam0) // Position - 0xDF9A (57242)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44848))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44847 = 0;
	Global_44849 = 0;
	Global_44886 = 15;
	Global_65024 = false;
	Global_65025 = 0;
	return;
}

char* func_252(int iParam0, BOOL bParam1) // Position - 0xDFD7 (57303)
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

void func_253(int iParam0) // Position - 0xE220 (57888)
{
	Global_45437 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_254(int iParam0) // Position - 0xE232 (57906)
{
	func_255(iParam0, 0, func_260(iParam0));
	return;
}

void func_255(int iParam0, int iParam1, int iParam2) // Position - 0xE247 (57927)
{
	int unk;
	var unk2;

	unk = func_224();
	func_258(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_257(iParam0, &unk);
	unk2 = { func_256(&unk) };
	return;
}

struct<16> func_256(var uParam0) // Position - 0xE276 (57974)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_218(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_217(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_216(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_219(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_222(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_220(*uParam0), 64);
	return unk;
}

void func_257(int iParam0, var uParam1) // Position - 0xE345 (58181)
{
	Global_114931.f_25002.f_43[iParam0] = *uParam1;
	return;
}

void func_258(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xE35D (58205)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_220(*uParam0);
	i = func_222(*uParam0);
	num2 = func_219(*uParam0);
	j = func_218(*uParam0);
	k = func_217(*uParam0);
	l = func_216(*uParam0);

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

	for (m = func_215(i, num); num2 > m; m = func_215(i, num))
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
	func_259(uParam0, l, k, j, num2, i, num);
	return;
}

void func_259(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xE4DF (58591)
{
	func_230(uParam0, iParam1);
	func_229(uParam0, iParam2);
	func_228(uParam0, iParam3);
	func_226(uParam0, iParam5);
	func_227(uParam0, iParam4);
	func_225(uParam0, iParam6);
	return;
}

int func_260(int iParam0) // Position - 0xE517 (58647)
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

int func_261(Vehicle veParam0, int iParam1, eCharacter echParam2) // Position - 0xE6BA (59066)
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

	func_262(veParam0, echParam2);
	return 1;
}

void func_262(Vehicle veParam0, eCharacter echParam1) // Position - 0xE6FA (59130)
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_268(veParam0))
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
			echParam1 = Global_114931.f_2370.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114931.f_32757.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114931.f_32757.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114931.f_32757.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_114931.f_32757.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_114931.f_32757.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114931.f_32757.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114931.f_32757.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114931.f_32757.f_5600[i /*78*/].f_1)))
					Global_114931.f_32757.f_5600[i /*78*/].f_66 = 0;
	}

	Global_114931.f_32757.f_5590 = echParam1;
	Global_80000 = veParam0;
	Global_114931.f_32757.f_5588 = 1;
	func_263(veParam0, &(Global_114931.f_32757.f_5510));
	return;
}

void func_263(Vehicle veParam0, var uParam1) // Position - 0xE8FC (59644)
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_267(uParam1);
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
	
		if (uParam1->f_65 == -1 && !func_266(uParam1->f_66))
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
	
		func_265(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_264(i + 1));
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

int func_264(int iParam0) // Position - 0xEBA7 (60327)
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

int func_265(var uParam0, var uParam1, var uParam2) // Position - 0xEC57 (60503)
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

BOOL func_266(int iParam0) // Position - 0xEE4A (61002)
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

void func_267(var uParam0) // Position - 0xEE6A (61034)
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

BOOL func_268(Vehicle veParam0) // Position - 0xEF19 (61209)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_285(veParam0, 0, false) || func_285(veParam0, 1, false) || func_285(veParam0, 2, false) || func_284(veParam0) != _CHAR_NULL || func_283(veParam0) || func_282(veParam0) || func_281(veParam0) || func_280(veParam0) || !func_269(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_282(veParam0);
		func_282(veParam0);
		func_285(veParam0, 0, false);
		func_285(veParam0, 1, false);
		func_285(veParam0, 2, false);
		func_284(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_269(Hash hParam0) // Position - 0xEFF6 (61430)
{
	if (hParam0 == 0)
		return false;

	if (!func_270(hParam0, false, -1))
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

BOOL func_270(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xF1B4 (61876)
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
		if (!func_279() && !func_278() && !func_277() && !func_276() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (func_275() || MISC::IS_PC_VERSION() || func_274())
		{
		}
		else if (!func_277())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_273(hParam0, iParam2))
			return false;

	if (!func_271(hParam0))
		return false;

	return true;
}

BOOL func_271(Hash hParam0) // Position - 0xF339 (62265)
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

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0xF405 (62469)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_273(ePedComponentType epctParam0, int iParam1) // Position - 0xF41C (62492)
{
	int cloudTimeAsInt;
	int num;
	int i;

	if (Global_2708658)
		return true;

	if (!Global_2708659 && iParam1 >= 0 && iParam1 <= 607)
		if (IS_BIT_SET(Global_1583772[iParam1 /*143*/].f_104, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (epctParam0)
	{
		case 1730644782:
			num = Global_262145.f_36257[0];
			break;
	
		case -402415705:
			num = Global_262145.f_36257[1];
			break;
	
		case -1555091703:
			num = Global_262145.f_36257[2];
			break;
	
		case 893780296:
			num = Global_262145.f_36257[3];
			break;
	
		case 1596736441:
			num = Global_262145.f_36257[4];
			break;
	
		case 1380582820:
			num = Global_262145.f_36257[5];
			break;
	
		case -1007324375:
			num = Global_262145.f_36257[6];
			break;
	
		case -938068410:
			num = Global_262145.f_36257[7];
			break;
	
		case -1778998583:
			num = Global_262145.f_36257[8];
			break;
	
		case -358638792:
			num = Global_262145.f_36257[9];
			break;
	
		case 617517171:
			num = Global_262145.f_36257[10];
			break;
	
		case 287906327:
			num = Global_262145.f_36257[11];
			break;
	
		case -1006198950:
			num = Global_262145.f_36257[12];
			break;
	
		case -855850193:
			num = Global_262145.f_36257[13];
			break;
	
		case 507621923:
			num = Global_262145.f_36257[14];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	for (i = 0; i < 10; i = i + 1)
	{
		if (epctParam0 == Global_1835471[i])
			return true;
	}

	return false;
}

BOOL func_274() // Position - 0xF604 (62980)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_275() // Position - 0xF61A (63002)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_276() // Position - 0xF630 (63024)
{
	return false;
}

BOOL func_277() // Position - 0xF639 (63033)
{
	return true;
}

BOOL func_278() // Position - 0xF642 (63042)
{
	return true;
}

BOOL func_279() // Position - 0xF64B (63051)
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_280(Vehicle veParam0) // Position - 0xF664 (63076)
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_270(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_281(Vehicle veParam0) // Position - 0xF6AB (63147)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99790[i]))
			if (Global_99790[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_282(Vehicle veParam0) // Position - 0xF6E6 (63206)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99760[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99760[i], false))
				if (Global_99760[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_99760[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_283(Vehicle veParam0) // Position - 0xF762 (63330)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_484[24]))
		if (veParam0 == Global_79095.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79095.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_79095.f_484[i])
					return true;
	}

	return false;
}

eCharacter func_284(Vehicle veParam0) // Position - 0xF84A (63562)
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99760[i]))
			if (Global_99760[i] == veParam0)
				return Global_99770[i];
	}

	return _CHAR_NULL;
}

BOOL func_285(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0xF8AD (63661)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_286(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114931.f_7236[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_286(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0xF91B (63771)
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

void func_287() // Position - 0xF9F2 (63986)
{
	Global_34031 = false;
	Global_34032 = false;
	Global_34034 = false;
	Global_34035 = false;
	Global_34036 = false;
	return;
}

void func_288(BOOL bParam0) // Position - 0xFA0E (64014)
{
	int i;

	for (i = 0; i < 65; i = i + 1)
	{
		func_183(i, bParam0);
	}

	return;
}

Vector3 func_289() // Position - 0xFA31 (64049)
{
	float distanceBetweenCoords;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_337, true);
		iLocal_336 = 1;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_340, true) < distanceBetweenCoords)
		{
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_340, true);
			iLocal_336 = 2;
		}
	
		if (iLocal_336 == 1)
		{
			iLocal_343 = 1;
			iLocal_52 = 1;
			return uLocal_337;
		}
	
		if (iLocal_336 == 2)
		{
			iLocal_343 = 2;
			iLocal_52 = 2;
			return uLocal_340;
		}
	}

	return 0f, 0f, 0f;
}

