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
	int iLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	float fLocal_53 = 0f;
	float fLocal_54 = 0f;
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	int iLocal_60 = 0;
	Blip blLocal_61 = 0;
	Blip blLocal_62 = 0;
	Blip blLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	Ped pedLocal_73 = 0;
	Ped pedLocal_74 = 0;
	Vehicle veLocal_75 = 0;
	int iLocal_76 = 0;
	Cam caLocal_77 = 0;
	Vehicle veLocal_78 = 0;
	BOOL bLocal_79 = 0;
	int iLocal_80 = 0;
	char* sLocal_81 = 0;
	char* sLocal_82 = 0;
	char* sLocal_83 = 0;
	char* sLocal_84 = 0;
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
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	float fLocal_117 = 0f;
	char* sLocal_118 = 0;
	char* sLocal_119 = 0;
	var uLocal_120 = 16;
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
	char* sLocal_285 = 0;
	char* sLocal_286 = 0;
	char* sLocal_287 = 0;
	char* sLocal_288 = 0;
	char* sLocal_289 = 0;
	char* sLocal_290 = 0;
	char* sLocal_291 = 0;
	char* sLocal_292 = 0;
	BOOL bLocal_293 = 0;
	BOOL bLocal_294 = 0;
	BOOL bLocal_295 = 0;
	BOOL bLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	char* sLocal_304 = 0;
	char* sLocal_305 = 0;
	char* sLocal_306 = 0;
	char* sLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
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
	Hash hLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = -1;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 1000;
	var uLocal_338 = 1000;
	var uLocal_339 = 0;
	BOOL bLocal_340 = 0;
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

void main() // Position - 0x0 Hash - 0x17B4681A ^0x17B4681A
{
	var entityCoords;
	Vehicle closestVehicle;

	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_54 = 10f;
	fLocal_55 = 7f;
	iLocal_56 = 1;
	sLocal_82 = "random@car_thief@waving_ig_1";
	fLocal_117 = 1f;
	iLocal_297 = 786603;
	iLocal_298 = 786469;
	sLocal_305 = "car_returned_peyote";
	sLocal_306 = "girl_car_returned";
	sLocal_307 = "player_car_returned";
	uLocal_50 = { uScriptParam_0.f_1[0 /*3*/] };
	fLocal_53 = uScriptParam_0.f_17[0];

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_240();

	func_239();

	if (iLocal_299 == 2)
	{
		if (func_238(34))
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			
				if (entityCoords.f_2 > 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -743.3924f, -2129.8203f, 12.076193f, -708.892f, -2160.7053f, 19.703499f, 124.5f, false, true, 0))
					SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
	}

	if (func_197(uLocal_50, 17, iLocal_299, false, false))
		func_194(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_193();
		func_192(blLocal_61, &uLocal_64);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		func_191();
	
		if (!func_190())
		{
			if (func_189())
				func_240();
		
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_46)
				{
					case 0:
						if (func_172())
						{
							PED::SET_CREATE_RANDOM_COPS(false);
							iLocal_46 = 1;
						}
						break;
				
					case 1:
						if (!PED::IS_PED_INJURED(pedLocal_74))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(pedLocal_73) && func_171(veLocal_75) && !func_170(0))
							{
								if (func_169())
								{
									if (func_171(veLocal_78))
										VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_78, false);
								
									func_160(true);
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
									func_155(39, true);
									func_155(40, true);
									func_155(41, true);
									func_155(42, true);
									func_155(43, true);
									func_155(44, true);
									SYSTEM::SETTIMERA(0);
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(pedLocal_73))
								{
									TASK::TASK_SMART_FLEE_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_73, true);
									SYSTEM::WAIT(0);
								}
							
								func_240();
							}
						}
						else
						{
							if (!PED::IS_PED_INJURED(pedLocal_73) && func_171(veLocal_75))
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_73, veLocal_75, 20f, iLocal_297);
								PED::SET_PED_KEEP_TASK(pedLocal_73, true);
								SYSTEM::WAIT(0);
							}
						
							func_123(false);
						}
						break;
				}
			}
			else
			{
				func_240();
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(pedLocal_74))
				if (uLocal_120[2 /*10*/].f_7)
					func_122(&uLocal_120, 2);
		
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			func_114();
		
			if (func_171(veLocal_75) && !func_113())
			{
				if (func_111())
				{
					if (!PED::IS_PED_INJURED(pedLocal_73))
					{
						switch (iLocal_47)
						{
							case 0:
								if (!PED::IS_PED_INJURED(pedLocal_74))
								{
									if (PED::IS_PED_IN_VEHICLE(pedLocal_74, veLocal_75, false))
									{
										if (iLocal_299 == 2)
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_74, true, 1);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_75, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_75, PLAYER::PLAYER_PED_ID(), 8, 30f, iLocal_298, 200f, 10f, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_74, iLocal_76);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
										}
										else
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_74, true, 1);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
											TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_75, 30, 1000);
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_75, PLAYER::PLAYER_PED_ID(), 8, 40f, iLocal_298, 200f, 10f, true);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_74, iLocal_76);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
										}
									
										uLocal_315 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_75, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_75, "wheel_lr")) };
										uLocal_318 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_75, uLocal_315) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", veLocal_75, uLocal_318 + { -0.5f, -1f, 0f }, 0f, 180f, 0f, 0.25f, false, false, false);
										uLocal_321 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_75, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_75, "wheel_rr")) };
										uLocal_324 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_75, uLocal_321) };
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_wheel_burnout", veLocal_75, uLocal_324 + { -0.5f, -1f, 0f }, 0f, 180f, 0f, 0.25f, false, false, false);
										SYSTEM::SETTIMERA(0);
									
										if (!HUD::DOES_BLIP_EXIST(blLocal_62))
											blLocal_62 = func_109(veLocal_75, true, 0);
									
										MISC::SET_INSTANCE_PRIORITY_HINT(2);
										iLocal_47 = 1;
									}
									else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_75, PLAYER::PLAYER_PED_ID(), true))
									{
										if (!PED::IS_PED_INJURED(pedLocal_74))
										{
											TASK::TASK_SMART_FLEE_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
											PED::SET_PED_KEEP_TASK(pedLocal_74, true);
											SYSTEM::WAIT(0);
										}
									
										func_240();
									}
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_73, veLocal_75, 20f, iLocal_297);
									PED::SET_PED_KEEP_TASK(pedLocal_73, true);
									SYSTEM::WAIT(0);
									func_123(false);
								}
								break;
						
							case 1:
								if (func_171(veLocal_75))
								{
									if (iLocal_299 == 1)
									{
										if (SYSTEM::TIMERA() < 5000)
										{
											if (SYSTEM::TIMERA() > 2000)
												fLocal_117 = fLocal_117 + 0.4f;
											else
												fLocal_117 = fLocal_117 + 0.2f;
										
											if (fLocal_117 > 30f)
												fLocal_117 = 30f;
										
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_75, fLocal_117);
											closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(veLocal_75, true), 5f, 0, 4);
										
											if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												if (func_171(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
													if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_75))
														SYSTEM::SETTIMERA(5000);
											
												if (func_171(closestVehicle))
													if (closestVehicle != veLocal_75)
														if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(closestVehicle, veLocal_75))
															SYSTEM::SETTIMERA(5000);
											}
										}
									}
								
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veLocal_75) < 700f)
										func_240();
								}
							
								func_79();
							
								if (func_78() || func_77() || ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_75) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_75, 1, 5000) || FIRE::IS_ENTITY_ON_FIRE(veLocal_75) || PED::IS_PED_INJURED(pedLocal_74) || !PED::IS_PED_IN_VEHICLE(pedLocal_74, veLocal_75, false))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
									{
										if (func_171(veLocal_75))
											AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_75, 0);
									
										AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
									}
								
									if (HUD::DOES_BLIP_EXIST(blLocal_62))
										HUD::REMOVE_BLIP(&blLocal_62);
								
									func_76();
								
									if (HUD::DOES_BLIP_EXIST(blLocal_61))
										HUD::REMOVE_BLIP(&blLocal_61);
								
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_73);
									VEHICLE::BRING_VEHICLE_TO_HALT(veLocal_75, 50f, 5, false);
									blLocal_63 = func_109(veLocal_75, false, 0);
									fLocal_107 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_75, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
									fLocal_105 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_75, true), ENTITY::GET_ENTITY_COORDS(pedLocal_73, true));
									fLocal_106 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_73, true));
									func_74(&uLocal_328, 0, false);
									iLocal_47 = 2;
								}
								break;
						
							case 2:
								if (func_171(veLocal_75))
									if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veLocal_75) < 700f)
										func_240();
							
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
									func_240();
							
								if (!ENTITY::IS_ENTITY_DEAD(pedLocal_74, false))
									if (!PED::IS_PED_IN_VEHICLE(pedLocal_74, veLocal_75, false))
										func_73(pedLocal_74, &uLocal_65, -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
								else
									func_72(&uLocal_65);
							
								if (!PED::IS_PED_INJURED(pedLocal_74))
								{
									if (!PED::IS_PED_IN_COMBAT(pedLocal_74, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_COMBAT_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 0, 16);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
									}
								}
							
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_75, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > fLocal_107 + 220f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veLocal_75, true), ENTITY::GET_ENTITY_COORDS(pedLocal_73, true)) > fLocal_105 + 220f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_73, true)) > fLocal_106 + 220f)
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_75, false))
										func_123(false);
									else
										func_240();
							
								if (HUD::DOES_BLIP_EXIST(blLocal_63))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_75, false))
									{
										HUD::REMOVE_BLIP(&blLocal_63);
										blLocal_61 = func_68(pedLocal_73, false, 0);
										func_67(&uLocal_64);
										func_74(&uLocal_328, 0, false);
									
										if (!bLocal_58)
										{
											if (iLocal_299 == 1)
												uLocal_91 = { -2258.759f, 4274.059f, 45.916603f };
											else if (bLocal_59)
												uLocal_91 = { -483.4162f, -2160.8735f, 8.359f };
											else
												uLocal_91 = { -485.9905f, -2153.542f, 8.1999f };
										
											if (!CAM::IS_SPHERE_VISIBLE(uLocal_91, 2f) && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_73))
											{
												ENTITY::SET_ENTITY_COORDS(pedLocal_73, uLocal_91, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(pedLocal_73, fLocal_104);
												bLocal_58 = true;
											}
										}
									
										iLocal_48 = 3;
										iLocal_302 = MISC::GET_GAME_TIMER();
									}
									else if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_75, pedLocal_73, 20f, 20f, 7f, false, true, 0))
									{
										func_66();
									
										if (func_65())
										{
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_73, veLocal_75, -1, false, false))
											{
												if (!bLocal_294)
													_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_288, 4, 0, 0, 0);
											
												TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_73, veLocal_75, 35f, iLocal_297);
												PED::SET_PED_KEEP_TASK(pedLocal_73, true);
												func_123(true);
											}
										}
									}
								}
								else if (HUD::DOES_BLIP_EXIST(blLocal_61))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_75, false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_73, fLocal_54, fLocal_54, fLocal_54, false, true, 0))
										{
											if (func_49(true, false, true))
											{
												HUD::REMOVE_BLIP(&blLocal_61);
											
												if (iLocal_299 == 1)
													if (func_48(ENTITY::GET_ENTITY_HEADING(veLocal_75), 336f, 90f))
														sLocal_304 = "RANDOM@CAR_THEFT_1@MCS_2";
													else
														sLocal_304 = "RANDOM@CAR_THEFT_1@MCS_2";
												else
													sLocal_304 = "RANDOM@CAR_THEFT_1@MCS_3";
											
												STREAMING::REQUEST_ANIM_DICT(sLocal_304);
												iLocal_48 = 4;
												iLocal_47 = 3;
											}
										}
										else
										{
											func_46(ENTITY::GET_ENTITY_COORDS(pedLocal_73, true), &fLocal_54, &fLocal_55);
										}
									}
									else
									{
										HUD::REMOVE_BLIP(&blLocal_61);
										blLocal_63 = func_109(veLocal_75, false, 0);
										iLocal_48 = 0;
									}
								}
								break;
						
							case 3:
								if (iLocal_299 == 1)
								{
									if (func_4())
									{
										if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
											PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
									
										func_123(true);
									}
								}
								else if (func_4())
								{
									if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
										PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
								
									func_123(true);
								}
								break;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(pedLocal_74))
						{
							if (PED::IS_PED_IN_VEHICLE(pedLocal_74, veLocal_75, false))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_74, veLocal_75, PLAYER::PLAYER_PED_ID(), 8, 50f, iLocal_298, 10f, 10f, false);
								PED::SET_PED_KEEP_TASK(pedLocal_74, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								PED::SET_PED_KEEP_TASK(pedLocal_74, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
							}
						}
					
						SYSTEM::WAIT(0);
						func_240();
					}
				}
				else
				{
					if (iLocal_47 == 1)
					{
						if (func_171(veLocal_75))
							VEHICLE::DELETE_VEHICLE(&veLocal_75);
					
						if (!PED::IS_PED_INJURED(pedLocal_74))
							PED::DELETE_PED(&pedLocal_74);
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_73))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, sLocal_81, "agitated_idle_a", 3))
							ENTITY::STOP_ENTITY_ANIM(pedLocal_73, "waiting", sLocal_81, -2f);
					
						func_1(pedLocal_73, "GENERIC_CURSE_HIGH", 24);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_100, 1f, 20000, 1193033728, 1056964608);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
					}
				
					func_240();
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(pedLocal_74))
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_74, true);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_75))
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_75, 50f);
			
				func_240();
			}
		}
	}

	return;
}

void func_1(Ped pedParam0, char* sParam1, int iParam2) // Position - 0xB87 Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xB9E Hash - 0xA17D549C ^0xCF648034
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xD93 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_4() // Position - 0xDB4 Hash - 0x4C389F52 ^0x8386A9EB
{
	Vector3 animInitialOffsetPosition;
	char* boneName;
	Vector3 vector;
	float heading;

	boneName = "chassis";
	func_66();

	if (!PED::IS_PED_INJURED(pedLocal_73) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_171(veLocal_75) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_304))
	{
		switch (iLocal_49)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (func_49(true, false, true))
					{
						if (!IS_BIT_SET(Global_8800, 11))
						{
							if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								func_37(true, true, true, false, false, false, false);
							
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									HUD::CLEAR_HELP(true);
								
									while (!func_34(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_55, 1, 1056964608, false, true, false))
									{
										HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
										SYSTEM::WAIT(0);
									}
								
									func_34(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_55, 0, 1056964608, false, true, false);
								}
							
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							
								if (!PED::IS_PED_INJURED(pedLocal_73))
									PED::SET_PED_CAN_RAGDOLL(pedLocal_73, false);
							
								func_32();
								func_25(0);
								HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
								iLocal_49 = 1;
							}
						}
					}
				}
				break;
		
			case 1:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(veLocal_75, 0, 0, 0f);
				VEHICLE::SET_VEHICLE_DOOR_LATCHED(veLocal_75, 0, true, true, true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (iLocal_299 == 1)
				{
					if (func_171(veLocal_75))
					{
						if (func_48(ENTITY::GET_ENTITY_HEADING(veLocal_75), 336f, 90f))
						{
							uLocal_88 = { -2254.2998f, 4273.361f, 44.9697f };
							fLocal_103 = 336.6557f;
							uLocal_85 = { -2252.683f, 4274.1597f, 45.0612f };
							uLocal_91 = { -2257.825f, 4269.189f, 44.6334f };
							fLocal_104 = 272.8688f;
							uLocal_111 = { -2254.5876f, 4277.307f, 45.6133f };
							uLocal_114 = { 6.6248f, 0.0369f, 179.5595f };
						}
						else
						{
							uLocal_88 = { -2254.223f, 4272.33f, 44.9193f };
							fLocal_103 = 148.0287f;
							uLocal_91 = { -2255.733f, 4271.32f, 44.8166f };
							fLocal_104 = 179.4774f;
							uLocal_85 = { -2257.088f, 4268.938f, 44.6456f };
							uLocal_111 = { -2255.7751f, 4274.144f, 46.0666f };
							uLocal_114 = { 2.8781f, 0.3464f, -146.6097f };
						}
					}
				
					vector = { -2269.34f, 4279.89f, 45.47f };
					heading = 53.23f;
					fLocal_110 = 50f;
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_85, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_COORDS(pedLocal_73, uLocal_91, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_75, fLocal_103);
					ENTITY::SET_ENTITY_COORDS(veLocal_75, uLocal_88, true, false, false, true);
				}
				else
				{
					if (!func_48(ENTITY::GET_ENTITY_HEADING(veLocal_75), 64.6764f, 90f))
					{
						uLocal_111 = { -478.7095f, -2163.5984f, 10.3091f };
						uLocal_114 = { -7.4391f, 0.0006f, 35.6865f };
						uLocal_88 = { -484.9581f, -2155.266f, 8.248f };
						fLocal_103 = 243.308f;
						fLocal_110 = 22f;
					}
					else
					{
						uLocal_111 = { -488.0143f, -2149.419f, 9.9817f };
						uLocal_114 = { -11.7475f, 0.0006f, -145.0045f };
						uLocal_88 = { -484.3195f, -2154.1882f, 8.2182f };
						fLocal_103 = 64.6764f;
						fLocal_110 = 36.9289f;
					}
				
					vector = { -486.92f, -2169.01f, 8.89f };
					heading = 63.1f;
					ENTITY::SET_ENTITY_COORDS(veLocal_75, uLocal_88, true, false, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_HEADING(veLocal_75, fLocal_103);
				}
			
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			
				if (func_171(veLocal_75))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_75, 1084227584);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_74))
						if (PED::IS_PED_IN_VEHICLE(pedLocal_74, veLocal_75, false))
							PED::DELETE_PED(&pedLocal_74);
				}
			
				uLocal_308 = { 0f, 0f, 0f };
				uLocal_311 = { 0f, 0f, 0f };
				iLocal_300 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_308, uLocal_311, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_300, veLocal_75, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_75, boneName));
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_300, uLocal_308, uLocal_311, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_73, iLocal_300, sLocal_304, sLocal_306, 1000f, -2f, 0, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_300, sLocal_304, sLocal_307, 1000f, -2f, 1024, 0, 1148846080, 0);
				caLocal_77 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", uLocal_111, uLocal_114, fLocal_110, false, 2);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_77, iLocal_300, "car_returned_cam", sLocal_304);
				ENTITY::PLAY_ENTITY_ANIM(veLocal_75, sLocal_305, sLocal_304, 1000f, false, false, false, 0, 262144);
				uLocal_308 = { ENTITY::GET_ENTITY_COORDS(veLocal_75, true) };
				uLocal_311 = { ENTITY::GET_ENTITY_ROTATION(veLocal_75, 2) };
			
				if (func_171(veLocal_78))
				{
					if (func_24(veLocal_78, uLocal_88, true) <= 11f)
					{
						ENTITY::SET_ENTITY_COORDS(veLocal_78, vector, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(veLocal_78, heading);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_78, 1084227584);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_78, true, false);
					}
				}
			
				MISC::CLEAR_AREA(uLocal_88, 10f, true, false, false, false);
				SYSTEM::SETTIMERA(0);
			
				if (iLocal_299 == 2)
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("rocoto"), 15);
				else
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("peyote"), 15);
			
				FIRE::STOP_FIRE_IN_RANGE(uLocal_88, 15f);
				CAM::SET_CAM_ACTIVE(caLocal_77, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_49 = 3;
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
		
			case 3:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (func_21())
					iLocal_49 = 4;
			
				if (iLocal_299 == 1)
				{
					if (SYSTEM::TIMERA() > 1500 && !bLocal_340)
						if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_119, 4, 0, 0, 0))
							iLocal_49 = 4;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300) && !bLocal_340)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) >= 0.2f)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_119, 4, 0, 0, 0))
						{
							iLocal_60 = 0;
							iLocal_49 = 4;
						}
					}
				}
			
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				break;
		
			case 4:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (iLocal_299 == 2)
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
						if (iLocal_60 == 0)
							if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, "RECT2_REWARD", 4, 0, 0, 0))
								iLocal_60 = 1;
			
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			
				if (iLocal_299 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300))
					{
						if (iLocal_314 == 0)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) >= 0.83f)
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_304, sLocal_307, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300), false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
								iLocal_314 = 1;
							}
						}
					
						if (!PED::IS_PED_INJURED(pedLocal_73))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) >= 0.83f)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, sLocal_304, sLocal_306, 2))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(pedLocal_73, -1000f, false);
								
									if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_73, false))
									{
										if (func_171(veLocal_75))
										{
											PED::SET_PED_INTO_VEHICLE(pedLocal_73, veLocal_75, -1);
											PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
										}
									}
								
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_73, true, false);
								}
								else
								{
									PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
								}
							}
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300))
				{
					if (iLocal_314 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) >= 0.86f)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_304, sLocal_307, 1000f, -2f, -1, 1048576, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300), false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							iLocal_314 = 1;
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_73))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) > 0.847f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, sLocal_304, sLocal_306, 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(pedLocal_73, -1000f, false);
							
								if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_73, false))
								{
									if (func_171(veLocal_75))
									{
										PED::SET_PED_INTO_VEHICLE(pedLocal_73, veLocal_75, -1);
										PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
									}
								}
							
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_73, true, false);
							}
							else
							{
								PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
							}
						}
					}
				}
			
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_300) >= 0.99f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300) || func_21())
				{
					if (!ENTITY::IS_ENTITY_DEAD(veLocal_75, false) && ENTITY::IS_ENTITY_PLAYING_ANIM(veLocal_75, sLocal_304, sLocal_305, 3))
						ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(veLocal_75, sLocal_304, sLocal_305, 1f);
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_300))
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_300, 1f);
				
					if (bLocal_340)
					{
						animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_304, sLocal_307, uLocal_308, uLocal_311, 1f, 2) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition, true, false, false, true);
						animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_304, sLocal_307, uLocal_308, uLocal_311, 1f, 2) };
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), animInitialOffsetPosition.f_2);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					}
				
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, true);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_73, false))
					{
						if (func_171(veLocal_75))
						{
							PED::SET_PED_INTO_VEHICLE(pedLocal_73, veLocal_75, -1);
							PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_73))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_73, false))
						{
							if (func_171(veLocal_75))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(veLocal_75, 0, 0, 0f);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(veLocal_75, 0, true, true, true);
								iLocal_303 = MISC::GET_GAME_TIMER();
								iLocal_49 = 5;
							}
						}
					}
				}
				break;
		
			case 5:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			
				if (MISC::GET_GAME_TIMER() - iLocal_303 > 100)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73) && func_171(veLocal_75))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, veLocal_75, 9, 1000);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_75, 25f, iLocal_297);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
						PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
					}
				
					func_37(false, true, true, false, false, false, false);
				
					if (bLocal_340)
					{
						if (CAM::DOES_CAM_EXIST(caLocal_77))
						{
							CAM::SET_CAM_ACTIVE(caLocal_77, false);
							CAM::DESTROY_CAM(caLocal_77, false);
						}
					
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						SYSTEM::WAIT(750);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						func_19(500, true);
					}
					else
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						CAM::SET_CAM_ACTIVE(caLocal_77, false);
					}
				
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_18(&veLocal_75);
					func_5(_GET_CURRENT_PLAYER_CHARACTER(), 4, 5);
					return true;
				}
				else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
				{
					PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
				}
				break;
		}
	}

	return false;
}

void func_5(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x17C6 Hash - 0xF0BE1C2C ^0x3B8D00E2
{
	int num;
	int num2;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][echParam0] = Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][echParam0] + iParam2;
			break;
	
		case CHAR_MULTIPLAYER:
			num2 = 14835;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14835)
			{
				num = func_10(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_6(num2, num, -1, true);
			}
			break;
	}

	return;
}

void func_6(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x18B4 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_7(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_7(int iParam0, int iParam1) // Position - 0x18E2 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_8(iParam1));
}

int func_8(int iParam0) // Position - 0x18F7 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_9();
	
		if (num2 > -1)
		{
			Global_2750950 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2750950 = 1;
		}
	}

	return num;
}

int func_9() // Position - 0x192B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int func_10(int iParam0, int iParam1) // Position - 0x1937 Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_7(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1966 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_12();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_12() // Position - 0x197F Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_14(character) && !func_13(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_14(Global_113969.f_2366.f_539.f_4321))
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
			
				Global_113969.f_2366.f_539.f_4323 = character;
				Global_113969.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113969.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_13(int iParam0) // Position - 0x1A7C Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

BOOL func_14(eCharacter echParam0) // Position - 0x1A8A Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1A96 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x1AD3 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_14(character))
		return func_17(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_17(eCharacter echParam0) // Position - 0x1AF8 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

void func_18(Vehicle* pveParam0) // Position - 0x1B07 Hash - 0xC50F9886 ^0x638B6124
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_19(int iParam0, BOOL bParam1) // Position - 0x1B3F Hash - 0xE7B2CDD3 ^0xC2D0D6D9
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);

	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}

	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x1B7B Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_21() // Position - 0x1B9D Hash - 0xAB59F157 ^0xD9B90404
{
	int vehicleAsset;

	vehicleAsset = joaat("peyote");

	if (iLocal_299 == 2)
		vehicleAsset = joaat("rocoto");

	if (func_22(1000))
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(vehicleAsset))
		{
			CAM::SET_CAM_ACTIVE(caLocal_77, false);
			CAM::DO_SCREEN_FADE_OUT(500);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				SYSTEM::WAIT(0);
			}
		
			bLocal_340 = true;
			return true;
		}
	}

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(vehicleAsset))
		{
			bLocal_340 = true;
			return true;
		}
	}

	return false;
}

BOOL func_22(int iParam0) // Position - 0x1C0F Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_23())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_23() // Position - 0x1C59 Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

float func_24(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1C8B Hash - 0xC22B942A ^0xE0DB8793
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_25(int iParam0) // Position - 0x1CC5 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_31())
		return;

	if (!(Global_20930.f_1 == 1))
	{
		if (func_30(0))
			func_26(iParam0);
	
		MISC::SET_BIT(&Global_8801, 2);
	}

	return;
}

void func_26(int iParam0) // Position - 0x1CF8 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_31())
		return;

	if (Global_21145)
		if (func_29())
			func_28(true, true);
		else
			func_28(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_27())
		Global_20930.f_1 = 3;

	return;
}

BOOL func_27() // Position - 0x1D82 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

void func_28(BOOL bParam0, BOOL bParam1) // Position - 0x1DA9 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_30(0))
		{
			Global_21145 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
		
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == true)
	{
		Global_21145 = false;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
	}

	return;
}

BOOL func_29() // Position - 0x1E1D Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_30(int iParam0) // Position - 0x1E2B Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20930.f_1 > 3)
			if (IS_BIT_SET(Global_8800, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20930.f_1 > 3)
		return true;

	return false;
}

BOOL func_31() // Position - 0x1E82 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956920, 19);
}

void func_32() // Position - 0x1E91 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21152 = 0;
	func_33();
	return;
}

void func_33() // Position - 0x1EA1 Hash - 0xF6D04E68 ^0x80AE5309
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}

	return;
}

BOOL func_34(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1EC2 Hash - 0xEF9D4F61 ^0xC848BDEA
{
	func_36(bParam5, bParam6);
	func_35(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_35(Vehicle veParam0) // Position - 0x1F19 Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_36(BOOL bParam0, BOOL bParam1) // Position - 0x1F45 Hash - 0xC86614C6 ^0xCD39041A
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam0)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	return;
}

void func_37(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2096 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_45(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_27())
				Global_20930.f_1 = 3;
		
			Global_22286 = 5;
		}
	
		func_44(true, bParam3, bParam2, false);
		Global_64172 = true;
		Global_76501 = true;
		Global_79387 = true;
	}
	else
	{
		func_45(0);
		HUD::THEFEED_RESUME();
		Global_64172 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_44(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_42(PLAYER::PLAYER_ID()) && !func_39(PLAYER::PLAYER_ID(), 0) && !func_38() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_42(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_79387 = false;
	}

	return;
}

BOOL func_38() // Position - 0x21E3 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

BOOL func_39(Player plParam0, int iParam1) // Position - 0x21FD Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_41(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_40(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_40(int iParam0, BOOL bParam1) // Position - 0x2256 Hash - 0x1DCD393E ^0x1DCD393E
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_9();

	if (Global_1575063[num] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574920[num];
		bParam1;
	}

	return character;
}

BOOL func_41(Player plParam0) // Position - 0x2297 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_42(Player plParam0) // Position - 0x22B9 Hash - 0x68897CDD ^0x7A533860
{
	if (func_39(plParam0, 0))
		return true;

	if (func_43())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_43() // Position - 0x22F8 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_44(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2306 Hash - 0x3167F4C7 ^0xCE6B9B6A
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

void func_45(int iParam0) // Position - 0x2339 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 13);
	else
		MISC::CLEAR_BIT(&Global_8800, 13);

	return;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x235C Hash - 0x7B97391D ^0x9AF8EB5F
{
	BOOL flag;
	float dx;
	float headingFromVector2d;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_47(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_47(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	}

	if (flag)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
			*uParam3 = 6f * 4f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
			*uParam3 = 6f * 3f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
			*uParam3 = 6f * 2f;
		else
			*uParam3 = 6f;
	
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}

	return;
}

BOOL func_47(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x245D Hash - 0x910E6355 ^0xC68C334A
{
	float entityHeading;
	float num;
	float num2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(veParam0);
		num2 = fParam1 - fParam2;
	
		if (num2 < 0f)
			num2 = num2 + 360f;
	
		num = fParam1 + fParam2;
	
		if (num >= 360f)
			num = num - 360f;
	
		if (num > num2)
			if (entityHeading < num && entityHeading > num2)
				return true;
		else if (entityHeading < num || entityHeading > num2)
			return true;
	}

	return false;
}

BOOL func_48(float fParam0, float fParam1, float fParam2) // Position - 0x24E4 Hash - 0x142F7A4A ^0x142F7A4A
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
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

BOOL func_49(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2559 Hash - 0xF0D380FF ^0x29DD7336
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

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x263E Hash - 0x384540C1 ^0x384540C1
{
	func_64(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_22293 = false;
	Global_22295 = false;
	Global_22300 = false;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_51(sParam2, iParam3, false);
}

BOOL func_51(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x268C Hash - 0x77297D51 ^0x40DC584A
{
	Global_22287 = 0;

	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = false;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = false;
					Global_22296 = false;
					Global_20929 = 0;
				}
				else
				{
					func_63();
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
	
		if (func_62(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_61();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
	
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20930.f_1 > 3)
					return 0;
			}
		
			if (Global_20896 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_59())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_79389)
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
		
			if (func_27())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
			
				if (IS_BIT_SET(Global_8800, 9))
					return 0;
			}
		
			func_58();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_57();
		func_52();
		return 1;
	}

	if (Global_22286 == 5)
		return 0;

	if (iParam1 < Global_22288 || iParam1 == Global_22288)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_63();
	}

	return 0;
}

void func_52() // Position - 0x295A Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_53())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_53() // Position - 0x2991 Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_54(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_54(Player plParam0) // Position - 0x29F4 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_55(plParam0, 20);
}

BOOL func_55(Player plParam0, int iParam1) // Position - 0x2A04 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x2A1C Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_57() // Position - 0x2A25 Hash - 0xDB58E314 ^0x9CD71162
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21154[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
	return;
}

void func_58() // Position - 0x2A57 Hash - 0xCD8A4D28 ^0xCD8A4D28
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = false;
	Global_22335 = 0;
	Global_22336 = false;
	MISC::CLEAR_BIT(&Global_8801, 16);
	return;
}

BOOL func_59() // Position - 0x2AEC Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_79389)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2B85 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_13(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
				Global_20930 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
				Global_20930 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
				Global_20930 = CHAR_TREVOR;
			else
				Global_20930 = CHAR_MICHAEL;
	}
	else
	{
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20930 == _CHAR_NULL)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_79389)
			Global_20930 = CHAR_MULTIPLAYER;
	
		if (Global_20930 > CHAR_MULTIPLAYER)
			Global_20930 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_61() // Position - 0x2C27 Hash - 0xBE88A374 ^0xF3CC4604
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21575[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21575[i /*10*/].f_1), "", 24);
		Global_21575[i /*10*/].f_7 = 0;
		Global_21575[i /*10*/].f_8 = 0;
	}

	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x2C7F Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1668667.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1668667.f_1048, iParam0);
}

void func_63() // Position - 0x2CB7 Hash - 0xE32CF1EF ^0xB9A7BEB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9 || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}

	return;
}

void func_64(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2D0E Hash - 0xC6B752B2 ^0xC6B752B2
{
	Global_21740 = { *uParam0 };
	Global_8116 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;

	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}

	return;
}

BOOL func_65() // Position - 0x2D64 Hash - 0xC07956FD ^0x1121EB1D
{
	if (PED::IS_PED_INJURED(pedLocal_74))
		return true;
	else if (func_171(veLocal_75))
		if (!ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_74, veLocal_75, 10f, 10f, 10f, false, true, 0))
			return true;

	return false;
}

void func_66() // Position - 0x2DA8 Hash - 0x48506058 ^0x33477BA5
{
	float vehicleEngineHealth;
	BOOL flag;
	BOOL flag2;

	if (func_171(veLocal_75))
	{
		vehicleEngineHealth = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veLocal_75);
	
		if (vehicleEngineHealth > 0f && vehicleEngineHealth < 650f)
		{
			flag2 = true;
		}
		else if (vehicleEngineHealth > 650f && vehicleEngineHealth < 950f)
		{
		}
		else
		{
			flag = true;
		}
	
		if (flag && VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(veLocal_75))
			sLocal_119 = sLocal_291;
		else if (flag2)
			sLocal_119 = sLocal_290;
		else
			sLocal_119 = sLocal_289;
	}

	return;
}

void func_67(var uParam0) // Position - 0x2E23 Hash - 0xEE73B491 ^0x5CAB0245
{
	*uParam0 = -99;
	return;
}

Blip func_68(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2E31 Hash - 0xDAE0482B ^0xDAE0482B
{
	iParam2 = iParam2;
	return func_69(pedParam0, bParam1, 145);
}

Blip func_69(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x2E47 Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_70(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2169[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_70(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2E91 Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_71(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2F35 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_72(Blip* pblParam0) // Position - 0x2F4C Hash - 0x448A57D ^0x38679B08
{
	BOOL flag;
	var unk;

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::REMOVE_BLIP(pblParam0);
		flag = true;
	}

	if (HUD::DOES_BLIP_EXIST(pblParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(pblParam0->f_1));
		flag = true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pblParam0->f_7, false))
			if (HUD::DOES_PED_HAVE_AI_BLIP(pblParam0->f_7))
				HUD::SET_PED_HAS_AI_BLIP(pblParam0->f_7, false);
	
		flag = true;
	}

	if (flag)
		*pblParam0 = { unk };

	return;
}

int func_73(Ped pedParam0, var uParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, int iParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0x2FBE Hash - 0x1E0371E4 ^0x2179AF37
{
	BOOL flag;

	if (plParam3 == 0)
		plParam3 = PLAYER::GET_PLAYER_INDEX();

	if (iParam6 < 0f)
		iParam6 = 100f;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(pedParam0))
		{
			flag = true;
		
			if (PED::IS_PED_IN_FLYING_VEHICLE(pedParam0) && bParam11)
				flag = false;
		
			if (flag)
			{
				if (iParam8 == -1)
					HUD::SET_PED_HAS_AI_BLIP(pedParam0, true);
				else
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(pedParam0, true, iParam8);
			
				uParam1->f_7 = pedParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(pedParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(pedParam0, iParam6);
			
				if (HUD::DOES_BLIP_EXIST(*uParam1))
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!(iParam9 == -1))
			HUD::SET_PED_AI_BLIP_SPRITE(pedParam0, iParam9);
	
		HUD::SET_PED_AI_BLIP_FORCED_ON(pedParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(pedParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(pedParam0);
	
		if (!(iParam9 == -1) || bParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!(iParam8 == -1))
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
				
					if (bParam10)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
			
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!IS_BIT_SET(uParam1->f_6, 2))
			if (HUD::DOES_BLIP_EXIST(*uParam1))
				MISC::SET_BIT(&(uParam1->f_6), 2);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(pedParam0);
		
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!(iParam8 == -1))
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					
						if (bParam10)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						else
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
				
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}

	return 0;
}

void func_74(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x31B2 Hash - 0xAF87CC41 ^0x2F8CE1AE
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2738935.f_4712, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			HUD::CLEAR_HELP(true);

	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x328C Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_76() // Position - 0x329F Hash - 0x2E5252A9 ^0x8A59A06D
{
	if (!PED::IS_PED_INJURED(pedLocal_74))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_74, BF_CanDoDrivebys, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_74, BF_0x66BB9FCC, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_74, BF_CanLeaveVehicle, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_74, BF_CanUseVehicles, false);
		TASK::TASK_COMBAT_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_74, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
	}
	else
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
	}

	if (func_171(veLocal_75))
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_75, 1);

	return;
}

int func_77() // Position - 0x330C Hash - 0x6BBD7CDA ^0xE68BFAD5
{
	if (func_171(veLocal_75))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_75, 40f, 40f, 10f, false, true, 0))
		{
			if (bLocal_79)
			{
				if (!PED::IS_PED_INJURED(pedLocal_74))
				{
					if (!bLocal_296)
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(veLocal_75))
						{
							TASK::TASK_DRIVE_BY(pedLocal_74, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 40f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							bLocal_296 = true;
						}
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_301 + 7000)
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_75, 20f, 20f, 10f, false, true, 0))
							if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_287, 4, 0, 0, 0))
								iLocal_301 = MISC::GET_GAME_TIMER();
				
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(veLocal_75);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(veLocal_75);
					bLocal_79 = false;
				}
			}
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_75, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(pedLocal_74))
					_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_287, 4, 0, 0, 0);
			
				iLocal_80 = iLocal_80 + 1;
				bLocal_79 = true;
			}
		
			if (iLocal_80 > 10)
				return 1;
		}
		else
		{
			bLocal_296 = false;
			bLocal_79 = false;
		}
	}

	return 0;
}

int func_78() // Position - 0x3418 Hash - 0xC8D271C3 ^0xE48E5154
{
	if (func_171(veLocal_75))
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_75, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_75, 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_75, 4, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(veLocal_75, 5, false))
			return 1;

	return 0;
}

void func_79() // Position - 0x3463 Hash - 0x5A39DAAD ^0xC35689AB
{
	if (func_171(veLocal_75) && HUD::DOES_BLIP_EXIST(blLocal_62))
		func_80(&uLocal_328, veLocal_75, 0, 0, true, true, true);

	return;
}

void func_80(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x348D Hash - 0x85234EBF ^0x85234EBF
{
	func_81(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_81(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x34AA Hash - 0x61CE440A ^0x61CE440A
{
	func_82(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_82(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x34C8 Hash - 0x811E56D5 ^0xAB2F569F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_74(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_83(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_83(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x3500 Hash - 0xDAF9A1E8 ^0x9B7C725B
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_108();

	if (func_107(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_102(uParam0, bParam7, bParam9, false))
				func_98(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_88(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
							{
								_DISPLAY_HELP_TEXT(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
									func_86(true);
							}
						}
					}
				}
			}
			else if (func_88(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_86(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_74(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_74(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_74(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_74(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_74(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_74(uParam0, string2, true);
		
			if (!func_102(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_85(uParam0))
					func_84(uParam0);
		}
	}
	else
	{
		func_74(uParam0, string2, false);
	}

	return;
}

void func_84(var uParam0) // Position - 0x386D Hash - 0x4809780E ^0x49596B3F
{
	if (func_107(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_85(var uParam0) // Position - 0x38D6 Hash - 0x98F74CA5 ^0xEF4CACA5
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_86(BOOL bParam0) // Position - 0x3901 Hash - 0xEA423090 ^0xE108A001
{
	switch (Global_44042)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113969.f_10052.f_100 = Global_113969.f_10052.f_100 + 1;
		
			return Global_113969.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113969.f_10052.f_101 = Global_113969.f_10052.f_101 + 1;
		
			return Global_113969.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113969.f_10052.f_102 = Global_113969.f_10052.f_102 + 1;
		
			return Global_113969.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x39AB Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_88(const char* sParam0) // Position - 0x39C2 Hash - 0x4F114C67 ^0xDD2D6D79
{
	if (!func_89(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_86(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_86(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_86(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_89(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A5B Hash - 0x3D231FF2 ^0x1CCF6728
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_30(0))
		return false;

	if (func_97())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_76498)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return false;

	if (Global_61347)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_96() || func_95(*Global_4718592.f_185586) || func_94())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_92(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1955929)
		return false;

	if (func_90(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_90(ePedComponentType epctParam0) // Position - 0x3CB4 Hash - 0xA439E034 ^0x14CB4DD5
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID;
		else if (Global_1575083 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x3D1A Hash - 0x3FF6E4CA ^0xE6B59972
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
				if (type == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[type /*465*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_92(Vehicle veParam0, int iParam1) // Position - 0x3D7A Hash - 0xCE6C32C8 ^0x91687715
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x3DDC Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_94() // Position - 0x3E61 Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2684504.f_19;
}

BOOL func_95(int iParam0) // Position - 0x3E6F Hash - 0x6B8F9071 ^0x6B8F9071
{
	return iParam0 == 51;
}

BOOL func_96() // Position - 0x3E7C Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2684504.f_18;
}

BOOL func_97() // Position - 0x3E8A Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

void func_98(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x3E9F Hash - 0x9F7B2F79 ^0x8B74986F
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1582021 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_74(uParam0, 0, false);

	if (func_101(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_99())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_99() // Position - 0x3FAF Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_100(PLAYER::PLAYER_ID());
}

BOOL func_100(Player plParam0) // Position - 0x3FBF Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_101(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x3FDE Hash - 0x3F9B8E56 ^0xA63694E8
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_102(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4027 Hash - 0xA880205D ^0xE1080820
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_106(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_105(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_105(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_106(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_85(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_106(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_105(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_105(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_106(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_106(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_105(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_105(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_106(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_104(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_103(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_103(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_104(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_85(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_89(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_108();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_103(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4393 Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_89(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_104(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x43E5 Hash - 0x3FCF0638 ^0x1EFD5267
{
	if (!func_89(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_105(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x442E Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_89(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_117)
				return true;
		}
	}

	return false;
}

BOOL func_106(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x448D Hash - 0xF22F9C98 ^0xCA2E1CBD
{
	if (!func_89(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_107(Vehicle veParam0) // Position - 0x44E3 Hash - 0xF847883B ^0xE7694E14
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_108() // Position - 0x453E Hash - 0x4941A993 ^0x296D04CD
{
	MISC::SET_BIT(&Global_8801, 4);
	return;
}

Blip func_109(Vehicle veParam0, BOOL bParam1, int iParam2) // Position - 0x454E Hash - 0x6E07861D ^0x6E07861D
{
	iParam2 = iParam2;
	return func_110(veParam0, bParam1, false);
}

Blip func_110(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4563 Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_70(veParam0, !bParam1, bParam2);
}

BOOL func_111() // Position - 0x4576 Hash - 0xA8493EF1 ^0x27FAF800
{
	float xSize;

	xSize = 300f;

	if (iLocal_299 == 1)
		xSize = 220f;

	if (func_171(veLocal_75))
	{
		func_112(blLocal_62, veLocal_75, xSize, 1061158912, false);
	
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veLocal_75, xSize, xSize, 100f, false, true, 0))
			return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(veLocal_75))
			return true;
	}

	return false;
}

void func_112(Blip blParam0, Vehicle veParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0x45DB Hash - 0xBE866CF5 ^0x5FE08F9C
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(veParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

BOOL func_113() // Position - 0x4734 Hash - 0xBB0645CB ^0xCF99D2D5
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_75, false) && VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_75))
		return true;

	return false;
}

void func_114() // Position - 0x475A Hash - 0x1D04F9BB ^0xDB30E71D
{
	if (!PED::IS_PED_INJURED(pedLocal_73) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_48)
		{
			case 0:
				iLocal_56 = iLocal_56;
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_73, false))
				{
					if (iLocal_299 == 1)
					{
						if (func_121())
							iLocal_48 = 1;
					}
					else if (!PED::IS_PED_RAGDOLL(pedLocal_73) && !TASK::IS_PED_GETTING_UP(pedLocal_73))
					{
						TASK::TASK_LOOK_AT_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -539.4566f, -2094.491f, 6.967173f, -468.4296f, -2152.5486f, 18.99127f, 26.75f, false, true, 0))
						{
							TASK::TASK_ACHIEVE_HEADING(pedLocal_73, 345f, 0);
							iLocal_48 = 1;
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
							TASK::TASK_PLAY_ANIM(0, sLocal_82, "arms_waving", 2f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_82, "arms_waving", 8f, -8f, -1, 0, 0, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_82, "arms_waving", 8f, -2f, -1, 0, 0, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
							iLocal_302 = MISC::GET_GAME_TIMER();
							iLocal_48 = 2;
						}
					}
				}
				break;
		
			case 1:
				if (iLocal_299 == 1)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
						TASK::TASK_PLAY_ANIM(0, sLocal_82, sLocal_84, 4f, -2f, -1, 0, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
						iLocal_48 = 2;
					}
				}
				else if (PED::IS_PED_FACING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 60f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
						TASK::TASK_PLAY_ANIM(0, sLocal_82, "arms_waving", 2f, -8f, -1, 0, 0, false, false, false);
					
						if (bLocal_59 == false)
							TASK::TASK_PLAY_ANIM(0, sLocal_82, "pointing", 8f, -4f, -1, 0, 0, false, false, false);
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
						iLocal_48 = 2;
					}
				}
			
				if (func_121())
					func_120();
				break;
		
			case 2:
				if (func_121())
					func_120();
			
				if (iLocal_299 == 2)
				{
					if (!PED::IS_PED_FACING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 60f) && !func_118(pedLocal_73, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), 0);
				
					if (func_117(pedLocal_73, PLAYER::PLAYER_PED_ID(), true) < 25f)
						if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
							if (MISC::GET_GAME_TIMER() - iLocal_302 > 6000)
								func_116();
				}
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && !func_118(pedLocal_73, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
				{
					if (iLocal_299 == 1)
					{
						uLocal_91 = { -2260.1f, 4274.24f, 44.9f };
					
						if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_73, uLocal_91, 1.5f, 1.5f, 1.5f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_91, 1f, 20000, fLocal_104, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, sLocal_81, "waiting", 3))
						{
							TASK::TASK_PLAY_ANIM(pedLocal_73, sLocal_81, "waiting", 4f, -4f, -1, 0, 0, false, false, false);
						
							if (func_117(pedLocal_73, PLAYER::PLAYER_PED_ID(), true) < 25f)
								func_116();
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, sLocal_81, "waiting", 3))
					{
						TASK::TASK_PLAY_ANIM(pedLocal_73, sLocal_81, "waiting", 4f, -4f, -1, 0, 0, false, false, false);
					}
				}
				break;
		
			case 3:
				if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID()))
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_73, 40f, 40f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_73, 9f, 9f, 9f, false, true, 0))
				{
					if (func_115())
					{
						if (bLocal_57)
						{
							if (iLocal_299 == 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
								bLocal_57 = false;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
								bLocal_57 = false;
								iLocal_302 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_73, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
							{
								if (!PED::IS_PED_FACING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
								}
								else if (MISC::GET_GAME_TIMER() - iLocal_302 > 6000)
								{
									bLocal_57 = true;
								}
							}
						}
						else if (!PED::IS_PED_FACING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 70f))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_73);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_76);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_76);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_73, iLocal_76);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_76);
							iLocal_302 = iLocal_302 + 4000;
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_74))
					{
						TASK::TASK_SMART_FLEE_PED(pedLocal_74, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_74, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_74);
					}
				}
				else
				{
					if (iLocal_299 == 1)
						uLocal_91 = { -2260.1f, 4274.24f, 44.9f };
					else if (bLocal_59)
						uLocal_91 = { -483.4162f, -2160.8735f, 8.359f };
					else
						uLocal_91 = { -485.9905f, -2153.542f, 8.1999f };
				
					if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_73, uLocal_91, 4f, 4f, 4f, false, true, 0))
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_73, SCRIPT_TASK_GO_STRAIGHT_TO_COORD) == 7)
							TASK::TASK_GO_STRAIGHT_TO_COORD(pedLocal_73, uLocal_91, 1f, 20000, fLocal_104, 1056964608);
					else if (!PED::IS_PED_FACING_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 50f))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), -1);
				
					bLocal_57 = true;
				}
				break;
		
			case 4:
				break;
		}
	}

	if (func_170(1))
	{
		if (!PED::IS_PED_INJURED(pedLocal_73))
		{
			TASK::TASK_SMART_FLEE_PED(pedLocal_73, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_73, true);
			SYSTEM::WAIT(0);
		}
	
		func_240();
	}

	return;
}

BOOL func_115() // Position - 0x4DC6 Hash - 0x110E0697 ^0x110E0697
{
	if (!bLocal_294)
		if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_288, 4, 0, 0, 0))
			bLocal_294 = true;

	return bLocal_294;
}

BOOL func_116() // Position - 0x4DEF Hash - 0x110E0697 ^0x110E0697
{
	if (!bLocal_295)
		if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_286, 4, 0, 0, 0))
			bLocal_295 = true;

	return bLocal_295;
}

float func_117(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x4E18 Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL func_118(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x4E76 Hash - 0x5CB13EA9 ^0x50B73240
{
	if (func_119(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_119(Ped pedParam0) // Position - 0x4EA9 Hash - 0x7E48B415 ^0x126328AB
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_120() // Position - 0x4EC9 Hash - 0x7868B7EF ^0xB19F19D9
{
	if (!bLocal_293)
		if (SYSTEM::TIMERA() > 2000)
			if (_CONVERSATION_ADD_LINE(&uLocal_120, sLocal_292, sLocal_285, 4, 0, 0, 0))
				bLocal_293 = true;

	return bLocal_293;
}

BOOL func_121() // Position - 0x4EFC Hash - 0xD8730DDF ^0x694C7948
{
	if (!PED::IS_PED_INJURED(pedLocal_74) && !PED::IS_PED_INJURED(pedLocal_73))
		if (func_171(veLocal_75))
			if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_74, veLocal_75))
				return true;
	else
		return true;

	return false;
}

void func_122(var uParam0, int iParam1) // Position - 0x4F3A Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_123(BOOL bParam0) // Position - 0x4F57 Hash - 0x86360B99 ^0x562BCDC7
{
	eCharacter character;

	if (iLocal_299 == 2)
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
	
		switch (character)
		{
			case CHAR_MICHAEL:
				while (!func_146(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
						PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		
			case CHAR_FRANKLIN:
				while (!func_146(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
						PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		
			case CHAR_TREVOR:
				while (!func_146(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_73))
						PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
				
					SYSTEM::WAIT(0);
				}
				break;
		}
	}

	if (bParam0)
		func_145(8);

	func_127(17, iLocal_299);
	func_124();
	func_240();
	return;
}

void func_124() // Position - 0x5052 Hash - 0xD765C186 ^0xD765C186
{
	func_125();
	return;
}

int func_125() // Position - 0x505F Hash - 0x9482CBBF ^0x8B17A994
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_101572.f_8)
		if (Global_101572.f_10 > 0)
			return 0;
	else if (Global_101572.f_10 > 1)
		return 0;

	Global_101572.f_10 = Global_101572.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x50AA Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

void func_127(int iParam0, int iParam1) // Position - 0x50D2 Hash - 0x207C13D1 ^0xB789CC4C
{
	if (iParam0 == -1)
		iParam0 = func_143();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_142(iParam0))
	{
		func_141(iParam0, iParam1);
	
		if (!func_140(51))
		{
			func_136("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_139(), 0, 138, 0);
			func_135(51);
		}
	
		if (func_134(iParam0))
			Global_113969.f_24998.f_2 = 3;
	
		if (func_133(iParam0, iParam1) != 322)
			func_128(func_133(iParam0, iParam1), uLocal_43, uLocal_43.f_1);
	
		Global_113957 = iParam1;
	
		if (Global_113955 == 0)
			if (Global_113958 == 1 || Global_113958 == 5 || Global_113958 == 11 || Global_113958 == 25)
				func_145(2);
			else if (Global_113958 == 26 || Global_113958 == 8 || Global_113958 == 17)
				func_145(7);
			else
				func_145(1);
	}

	return;
}

void func_128(int iParam0, var uParam1, var uParam2) // Position - 0x51D6 Hash - 0xEC2439E7 ^0x1B67A713
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

	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == true)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_129();

	return;
}

void func_129() // Position - 0x52BC Hash - 0x9F269E94 ^0x9F269E94
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
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113969.f_10197[num /*12*/].f_5 == true)
		{
			switch (Global_113969.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_113705 = Global_113705 + 1;
					num2 = num2 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113706 = Global_113706 + 1;
					num3 = num3 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113707 = Global_113707 + 1;
					num4 = num4 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113708 = Global_113708 + 1;
					num5 = num5 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113709 = Global_113709 + 1;
					num6 = num6 + (Global_113969.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113710 = Global_113710 + 1;
					num7 = num7 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113711 = Global_113711 + 1;
					num8 = num8 + Global_113969.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113688 > 0)
		if (Global_113705 == Global_113688)
			num2 = 55f;

	if (Global_113689 > 0)
		if (Global_113706 == Global_113689)
			num3 = 10f;

	if (Global_113690 > 0)
		if (Global_113707 == Global_113690)
			num4 = 0f;

	if (Global_113691 > 0)
		if (Global_113708 == Global_113691)
			num5 = 10f;

	if (Global_113692 > 0)
	{
		if (Global_113709 == Global_113692 || (Global_113692 * 10) / Global_113709 < 41 || Global_113709 > Global_113695 || Global_113709 == Global_113695)
		{
			if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113692, 0);
					MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113693 > 0)
		if (Global_113710 == Global_113693)
			num7 = 15f;

	if (Global_113694 > 0)
		if (Global_113711 == Global_113694)
			num8 = 5f;

	Global_113969.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
		value2 = Global_113695;
	else
		value2 = Global_113709;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113705, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113688, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113706, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113689, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113707, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113690, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113708, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113691, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113695, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113711 + Global_113710, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113694 + Global_113693, true);
	Global_113712 = (Global_113705 * 100) / Global_113688;
	Global_113714 = ((Global_113707 + Global_113706) * 100) / (Global_113690 + Global_113689);
	Global_113713 = ((Global_113708 + value2) * 100) / (Global_113691 + Global_113695);
	Global_113715 = ((Global_113710 + Global_113711) * 100) / (Global_113693 + Global_113694);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113969.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113712, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113713, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113714, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113969.f_10197.f_3853))
		func_131(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_130() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = false;
			
				if (!Global_64166)
					func_125();
			}
		}
	}

	return;
}

int func_130() // Position - 0x577A Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

BOOL func_131(int iParam0, int iParam1) // Position - 0x5785 Hash - 0x77E0C72A ^0x80DA2A54
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x57D6 Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_9();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_133(int iParam0, int iParam1) // Position - 0x57F4 Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_134(int iParam0) // Position - 0x5B68 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_135(int iParam0) // Position - 0x5B97 Hash - 0x12249850 ^0x46987D7A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113969.f_20413.f_150[i], offset);

	return;
}

void func_136(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x5BD9 Hash - 0x2B872DAE ^0x63FE6CA
{
	func_137(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_137(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x5BFB Hash - 0x7C3327C8 ^0x126CE460
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

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113969.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113969.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 + 1;
		func_138();
	}

	return;
}

void func_138() // Position - 0x5DCF Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113969.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 0))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[0])
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 1))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[1])
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 2))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[2])
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_139() // Position - 0x5EE6 Hash - 0x35BC7314 ^0x35BC7314
{
	func_12();

	switch (Global_113969.f_2366.f_539.f_4321)
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

BOOL func_140(int iParam0) // Position - 0x5F2C Hash - 0x3F44A899 ^0x7041C53
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113969.f_20413.f_150[i], num);

	return false;
}

void func_141(int iParam0, int iParam1) // Position - 0x5F6C Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113969.f_24998.f_8[iParam0], iParam1);
	return;
}

int func_142(int iParam0) // Position - 0x5F87 Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_143() // Position - 0x6038 Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_144(unk);
	return num;
}

int func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x6055 Hash - 0x6DA57317 ^0x57A32A43
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

void func_145(int iParam0) // Position - 0x622F Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113955 = iParam0;
	return;
}

BOOL func_146(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x623D Hash - 0xCD7D90D3 ^0xCD7D90D3
{
	int num;
	var unk10;
	int num2;
	int num3;

	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return false;

	if (iParam4 < 0)
		return false;

	if (iParam5 < 0)
		return false;

	if (iParam6 == 76)
		return false;

	if (iParam7 == 235)
		return false;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return false;

	if (iParam2 < 1 || iParam2 > 7)
		return false;

	if (Global_113969.f_7691.f_866 < CHAR_STEVE_MIKE_CONF)
	{
		num = iParam0;
		num.f_3 = func_154(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_113969.f_7691.f_765[Global_113969.f_7691.f_866 /*10*/] = { num };
		Global_113969.f_7691.f_866 = Global_113969.f_7691.f_866 + 1;
		return true;
	}
	else
	{
		unk10 = { func_153(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		num2 = 0;
		func_152(&num2);
		num3 = func_151(unk10, Global_113969.f_7691.f_765[num2 /*10*/]);
	
		if (num3 == 2)
		{
			func_149(Global_113969.f_7691.f_765[num2 /*10*/]);
			Global_113969.f_7691.f_765[num2 /*10*/] = { unk10 };
			func_148(&unk10);
			return true;
		}
		else if (num3 == 1)
		{
			if (func_147(unk10))
			{
				func_149(Global_113969.f_7691.f_765[num2 /*10*/]);
				Global_113969.f_7691.f_765[num2 /*10*/] = { unk10 };
				func_148(&unk10);
				return true;
			}
			else
			{
				if (!func_147(Global_113969.f_7691.f_765[num2 /*10*/]))
				{
					Global_113969.f_7691.f_765[num2 /*10*/] = { unk10 };
					func_148(&unk10);
					return true;
				}
			
				func_148(&unk10);
				return true;
			}
		}
		else
		{
			func_149(unk10);
			func_148(&unk10);
			return true;
		}
	}

	return false;
}

BOOL func_147(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x645C Hash - 0x5829CA23 ^0x90D2141D
{
	if (uParam0.f_8 == 0)
		return false;

	return true;
}

void func_148(var uParam0) // Position - 0x6474 Hash - 0x7F9E7548 ^0x7F9E7548
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_149(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x6486 Hash - 0xA7FCC8CC ^0xD13FD65B
{
	if (func_147(uParam0))
		func_150(uParam0.f_8, 0);

	return;
}

void func_150(int iParam0, int iParam1) // Position - 0x64A3 Hash - 0xEFDF2B54 ^0x1CE7BA3B
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113969.f_8616[iParam0] = true;
	Global_113969.f_8616.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x64E0 Hash - 0xC393E93F ^0x75404E91
{
	var unk;
	var unk2;

	unk = uParam0.f_3;
	unk2 = uParam10.f_3;

	if (unk > unk2)
		return 2;

	if (unk < unk2)
		return 0;

	return 1;
}

void func_152(var uParam0) // Position - 0x6511 Hash - 0x2F9672FB ^0x2F9672FB
{
	eCharacter i;

	*uParam0 = 0;

	for (i = CHAR_MICHAEL; i < Global_113969.f_7691.f_866; i = i + 1)
	{
		if (func_151(Global_113969.f_7691.f_765[i /*10*/], Global_113969.f_7691.f_765[*uParam0 /*10*/]) == 0)
			*uParam0 = i;
	}

	return;
}

struct<10> func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x6568 Hash - 0x242D9B5A ^0x9F57922F
{
	int num;

	num = iParam0;
	num.f_3 = func_154(iParam1);
	num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
	num.f_5 = iParam5;
	num.f_1 = iParam9;
	num.f_2 = iParam2;
	num.f_6 = iParam3;
	num.f_7 = iParam6;
	num.f_8 = iParam7;
	num.f_9 = iParam8;
	MISC::CLEAR_BIT(&(num.f_1), 0);
	return num;
}

int func_154(int iParam0) // Position - 0x65C1 Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

void func_155(int iParam0, BOOL bParam1) // Position - 0x662B Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_159(iParam0, 2, true))
			func_158(iParam0, 2, true);
	else if (func_159(iParam0, 2, true))
		func_156(iParam0, 2, true);

	return;
}

void func_156(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6662 Hash - 0x9D8964AD ^0x8B4A734
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_130() == 0)
		{
			address = func_10(func_157(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_6(func_157(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

int func_157(int iParam0) // Position - 0x66D2 Hash - 0x28E83966 ^0x9E37924F
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
			return 12924;
	
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
	
		default:
			break;
	}

	return 14835;
}

void func_158(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6A7A Hash - 0x9D8964AD ^0x494B9556
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_130() == 0)
		{
			address = func_10(func_157(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_6(func_157(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_159(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6AEA Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101585.f_1414[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_130() == 0)
			return IS_BIT_SET(func_10(func_157(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_113969.f_668[iParam0], iParam1);

	return false;
}

int func_160(BOOL bParam0) // Position - 0x6B4A Hash - 0x3A78A0E1 ^0xFB516C6B
{
	if (func_163())
	{
		Global_113959 = true;
		Global_113956 = MISC::GET_GAME_TIMER();
	
		if (func_134(Global_113958))
			func_161(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_134(Global_113958))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_161(int iParam0) // Position - 0x6B9D Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_162(iParam0), -1);
					Global_113969.f_24998.f_2 = Global_113969.f_24998.f_2 + 1;
					MISC::SET_BIT(&Global_113965, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113965, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_162(iParam0), -1);
					Global_113969.f_24998.f_3 = Global_113969.f_24998.f_3 + 1;
					MISC::SET_BIT(&Global_113965, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113965, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_162(iParam0), -1);
					Global_113969.f_24998.f_4 = Global_113969.f_24998.f_4 + 1;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}

	return;
}

char* func_162(int iParam0) // Position - 0x6C78 Hash - 0x7CF8A08F ^0x7CFB52B5
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

BOOL func_163() // Position - 0x6CBC Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_164(&Global_33008, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_164(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x6CF2 Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_168(0))
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23692.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44003; i = i + 1)
			{
				if (Global_44009[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44003 == 8)
			return 0;
	
		Global_44006 = Global_44006 + 1;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003 = Global_44003 + 1;
	
		if (iParam4 != 0)
			func_165(uParam0, iParam4);
	}

	return 2;
}

void func_165(var uParam0, int iParam1) // Position - 0x6E29 Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_44003 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44003; i = i + 1)
	{
		if (Global_44009[i /*4*/] == *uParam0)
			Global_44009[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x6E78 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_167(iParam0, Global_44042);
}

BOOL func_167(int iParam0, int iParam1) // Position - 0x6E89 Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_168(int iParam0) // Position - 0x706A Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_169() // Position - 0x708C Hash - 0x6C9A3F7E ^0x78D6F164
{
	float xSize;

	switch (iLocal_299)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2300.3167f, 4179.6123f, 36.981594f, -2191.317f, 4368.794f, 74.89676f, 70.75f, false, true, 0))
				return true;
			break;
	
		case 2:
			if (bLocal_59)
				xSize = 80f;
			else
				xSize = 80f;
		
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -487.5048f, -2157.9895f, 8.2627f, xSize, xSize, 40f, false, true, 0))
				return true;
			break;
	}

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		if (!PED::IS_PED_INJURED(pedLocal_73))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_73))
				return true;

	return false;
}

BOOL func_170(int iParam0) // Position - 0x7142 Hash - 0x954C8014 ^0x5C576D80
{
	BOOL flag;
	Vector3 vector;
	Vector3 vector2;

	vector = { 6f, 6f, 6f };
	vector2 = { -6f, -6f, -6f };

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(pedLocal_73))
		{
			if (iParam0 == 0 || func_117(pedLocal_73, pedLocal_74, true) > 15f)
			{
				if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_73, 31086, 0f, 0f, 0f), 4f, false))
					flag = true;
			
				vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_73, 31086, 0f, 0f, 0f) };
				vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_73, 31086, 0f, 0f, 0f) };
			
				if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
					flag = true;
			}
		
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_73, 31086, 0f, 0f, 0f), 6f))
				flag = true;
		
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_73, 31086, 0f, 0f, 0f), 6f))
				flag = true;
		
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), true))
				flag = true;
		}
	}

	flag;
	return flag;
}

BOOL func_171(Vehicle veParam0) // Position - 0x7269 Hash - 0x7E47BB06 ^0x692E6B64
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL func_172() // Position - 0x7293 Hash - 0x2F3F55EE ^0x2F3F55EE
{
	float dx;
	Vector3 vector;
	float heading;
	Hash model;
	Hash model2;
	Hash model3;
	char* str;
	char* name;
	char* name2;

	vector = { uLocal_97 };
	heading = fLocal_109;

	switch (iLocal_299)
	{
		case 1:
			uLocal_94 = { -2257.4817f, 4266.638f, 44.5095f };
			fLocal_108 = 293.9091f;
			uLocal_97 = { -2253.7632f, 4273.17f, 44.977f };
			fLocal_109 = 185.5212f;
			model = joaat("A_F_Y_Vinewood_04");
			model3 = joaat("peyote");
			model2 = joaat("G_M_Y_SalvaGoon_01");
			str = "CThiefVictim";
			name = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
			sLocal_285 = "RECT1_ATTR";
			sLocal_286 = "RECT1_HELP";
			sLocal_287 = "RECT1_FYOU";
			sLocal_288 = "RECT1_JOY";
			sLocal_289 = "RECT1_OK";
			sLocal_290 = "RECT1_BAD";
			sLocal_291 = "RECT1_GOOD";
			sLocal_292 = "RECT1AU";
			sLocal_81 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_83 = "random@car_thief@waving_ig_1";
			uLocal_100 = { -2270.632f, 4287.437f, 44.9008f };
			fLocal_55 = 3f;
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_94) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_97))
			{
				vector = { uLocal_94 };
				heading = fLocal_108;
				bLocal_59 = true;
				sLocal_82 = "random@car_thief@waving_ig_2";
				sLocal_84 = "waving_l";
			}
			else
			{
				sLocal_84 = "waving";
				sLocal_82 = "random@car_thief@waving_ig_1";
				vector = { uLocal_97 };
				heading = fLocal_109;
			}
			break;
	
		case 2:
			uLocal_97 = { -538.6718f, -2183.4421f, 5.2336f };
			uLocal_94 = { -365.7f, -2179.2603f, 9.3184f };
			model = joaat("A_F_Y_Indian_01");
			model3 = joaat("rocoto");
			model2 = joaat("A_M_M_SouCent_04");
			str = "CThiefGolfer";
			name2 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
			sLocal_285 = "RECT2_ATTR";
			sLocal_286 = "RECT2_HELP";
			sLocal_287 = "RECT2_FYOU";
			sLocal_288 = "RECT2_JOY";
			sLocal_289 = "RECT2_OK";
			sLocal_290 = "RECT2_BAD";
			sLocal_291 = "RECT2_GOOD";
			sLocal_292 = "RECT2AU";
			sLocal_81 = "RANDOM@CAR_THIEF@waiting_ig_4";
			sLocal_82 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			sLocal_83 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
			uLocal_100 = { -505.1966f, -2159.2275f, 7.6466f };
			fLocal_54 = 15f;
			fLocal_55 = 3f;
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_94) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_97))
				bLocal_59 = true;
			break;
	}

	STREAMING::REQUEST_MODEL(model);
	STREAMING::REQUEST_MODEL(model2);
	STREAMING::REQUEST_MODEL(model3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_81);
	STREAMING::REQUEST_ANIM_DICT(sLocal_82);
	STREAMING::REQUEST_ANIM_DICT(sLocal_83);
	STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@WAITING_IG_4");
	STREAMING::REQUEST_PTFX_ASSET();

	if (STREAMING::HAS_MODEL_LOADED(model) && STREAMING::HAS_MODEL_LOADED(model2) && STREAMING::HAS_MODEL_LOADED(model3) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_81) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_82) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_83) && STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@WAITING_IG_4") && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		if (iLocal_299 == 1)
		{
			func_186("re_cartheft - Distance to vTop = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_94));
			func_186("re_cartheft - Distance to vBottom = ", SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_97));
			veLocal_75 = VEHICLE::CREATE_VEHICLE(model3, vector, heading, true, true, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(veLocal_75, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_75, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_75, true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(veLocal_75, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(veLocal_75, false);
			VEHICLE::SET_VEHICLE_EXTRA(veLocal_75, 2, false);
			pedLocal_74 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_75, PED_TYPE_CRIMINAL, model2, -1, true, true);
			PED::SET_PED_CONFIG_FLAG(pedLocal_74, 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_74, BF_CanLeaveVehicle, true);
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_74, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_ACCURACY(pedLocal_74, 10);
			PED::SET_DRIVER_ABILITY(pedLocal_74, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(pedLocal_74, 1f);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_75, 135, 135);
			PED::ADD_RELATIONSHIP_GROUP("re_cartheft relGroupThief", &hLocal_327);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_327, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_327, joaat("CIVMALE"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), hLocal_327);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_74, hLocal_327);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(veLocal_75, true);
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uLocal_50 };
				fLocal_53 = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
			}
		
			pedLocal_73 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, uLocal_50, fLocal_53, true, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_73, name);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_73, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_HEAD, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_HAIR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_LOWR, 1, 1, 0);
			AUDIO::STOP_PED_SPEAKING(pedLocal_73, true);
		
			if (bLocal_59)
			{
				uLocal_88 = { -2254.413f, 4270.227f, 44.8028f };
				fLocal_103 = 124.6557f;
				uLocal_85 = { -2252.683f, 4274.1597f, 45.0612f };
				uLocal_91 = { -2257.825f, 4269.189f, 44.6334f };
				fLocal_104 = 272.8688f;
				uLocal_111 = { -2258.0403f, 4272.2437f, 45.75466f };
				uLocal_114 = { 1.729481f, 0f, -114.935196f };
			}
			else
			{
				uLocal_88 = { -2253.634f, 4269.119f, 44.7686f };
				fLocal_103 = 336.143f;
				uLocal_91 = { -2255.733f, 4271.32f, 44.8166f };
				fLocal_104 = 179.4774f;
				uLocal_85 = { -2257.088f, 4268.938f, 44.6456f };
				uLocal_111 = { -2254.8865f, 4273.539f, 46.2282f };
				uLocal_114 = { -7.492095f, 0f, -168.19087f };
			}
		}
		else
		{
			if (bLocal_59)
				veLocal_75 = VEHICLE::CREATE_VEHICLE(model3, -488.7506f, -2159.3254f, 8.2581f, 15.0886f, true, true, false);
			else
				veLocal_75 = VEHICLE::CREATE_VEHICLE(model3, -486.3563f, -2159.9421f, 8.2887f, 288.8187f, true, true, false);
		
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(veLocal_75, 0, false);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_75, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_75, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_75, true);
			VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_75, 0);
			VEHICLE::SET_VEHICLE_MOD(veLocal_75, 11, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_75, 16, 3, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_75, 12, 1, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_75, 13, 1, false);
			VEHICLE::SET_VEHICLE_WHEEL_TYPE(veLocal_75, 3);
			VEHICLE::SET_VEHICLE_MOD(veLocal_75, 23, 6, false);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veLocal_75, 3);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_75, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_75, 22, true);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_75, 143, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veLocal_75, 31, 2);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(veLocal_75, false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(veLocal_75, false);
		
			if (bLocal_59)
				pedLocal_73 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -490.4008f, -2160.7551f, 8.2498f, 314.0037f, true, true);
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -583.08844f, -2234.2488f, 4.523423f, -685.1817f, -2350.9036f, 17.070732f, 178f, false, true, 0))
				pedLocal_73 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -486.81f, -2156.99f, 8.27f, -172.34f, true, true);
			else
				pedLocal_73 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, model, -486.2511f, -2161.808f, 8.3041f, 353.4264f, true, true);
		
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_UPPR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_73, PV_COMP_LOWR, 1, 2, 0);
			pedLocal_74 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_75, PED_TYPE_CRIMINAL, model2, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(pedLocal_74, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_ACCURACY(pedLocal_74, 10);
			PED::SET_DRIVER_ABILITY(pedLocal_74, 1f);
			PED::SET_DRIVER_RACING_MODIFIER(pedLocal_74, 1f);
			PED::SET_PED_CONFIG_FLAG(pedLocal_74, 42, true);
			AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_74, name2);
			uLocal_88 = { -501.9105f, -2148.0193f, 8.0392f };
			fLocal_103 = 294.4744f;
			uLocal_85 = { -501.0442f, -2150.7988f, 8.139f };
			uLocal_91 = { -493.8062f, -2156.036f, 8.1978f };
			uLocal_111 = { -504.365f, -2144.5342f, 9.8585f };
			uLocal_114 = { -6.6935f, 0f, -127.8147f };
		}
	
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_73, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_73, 185, true);
		VEHICLE::SET_CAN_RESPRAY_VEHICLE(veLocal_75, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_75, true, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_73, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_74, true);
		TASK::TASK_LOOK_AT_ENTITY(pedLocal_73, pedLocal_74, -1, 0, 2);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_75);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(veLocal_75, true);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_75, false, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(model3, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(veLocal_75, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_75, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_73, BF_AlwaysFlee, false);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_73, 512, true);
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_118 = "MICHAEL";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_118 = "FRANKLIN";
				break;
		
			case CHAR_TREVOR:
				sLocal_118 = "TREVOR";
				break;
		}
	
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), sLocal_118, 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 1, pedLocal_73, str, 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_120, 2, pedLocal_74, "CThief", 0, 1);
		return true;
	}
	else if (func_173())
	{
		func_240();
	}

	return false;
}

BOOL func_173() // Position - 0x7AC3 Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_43) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_184())
			return false;
	}

	if (func_180())
		return true;

	if (func_174(100f, true) != -1)
		return true;

	return false;
}

int func_174(float fParam0, BOOL bParam1) // Position - 0x7B49 Hash - 0xA169FFDC ^0x284941E0
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
		if (func_14(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_139();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113969.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_113969.f_18577[num /*6*/], 3))
				{
					func_175(num, &unk);
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

void func_175(int iParam0, var uParam1) // Position - 0x7BFA Hash - 0x2D8E3F8 ^0x7018B42B
{
	switch (iParam0)
	{
		case 0:
			func_176(uParam1, "Abigail1", func_178(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 1:
			func_176(uParam1, "Abigail2", func_178(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 2:
			func_176(uParam1, "Barry1", func_178(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 3:
			func_176(uParam1, "Barry2", func_178(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 4:
			func_176(uParam1, "Barry3", func_178(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 5:
			func_176(uParam1, "Barry3A", func_178(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 6:
			func_176(uParam1, "Barry3C", func_178(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 7:
			func_176(uParam1, "Barry4", func_178(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_177(iParam0), 0, 0);
			break;
	
		case 8:
			func_176(uParam1, "Dreyfuss1", func_178(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 9:
			func_176(uParam1, "Epsilon1", func_178(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 10:
			func_176(uParam1, "Epsilon2", func_178(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 11:
			func_176(uParam1, "Epsilon3", func_178(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 12:
			func_176(uParam1, "Epsilon4", func_178(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 13:
			func_176(uParam1, "Epsilon5", func_178(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 14:
			func_176(uParam1, "Epsilon6", func_178(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 15:
			func_176(uParam1, "Epsilon7", func_178(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 16:
			func_176(uParam1, "Epsilon8", func_178(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 17:
			func_176(uParam1, "Extreme1", func_178(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 18:
			func_176(uParam1, "Extreme2", func_178(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 19:
			func_176(uParam1, "Extreme3", func_178(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 20:
			func_176(uParam1, "Extreme4", func_178(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 21:
			func_176(uParam1, "Fanatic1", func_178(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_177(iParam0), 1, 0);
			break;
	
		case 22:
			func_176(uParam1, "Fanatic2", func_178(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_177(iParam0), 1, 0);
			break;
	
		case 23:
			func_176(uParam1, "Fanatic3", func_178(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_177(iParam0), 0, 1);
			break;
	
		case 24:
			func_176(uParam1, "Hao1", func_178(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_177(iParam0), 0, 1);
			break;
	
		case 25:
			func_176(uParam1, "Hunting1", func_178(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 26:
			func_176(uParam1, "Hunting2", func_178(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 27:
			func_176(uParam1, "Josh1", func_178(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 28:
			func_176(uParam1, "Josh2", func_178(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 29:
			func_176(uParam1, "Josh3", func_178(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 30:
			func_176(uParam1, "Josh4", func_178(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 31:
			func_176(uParam1, "Maude1", func_178(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 32:
			func_176(uParam1, "Minute1", func_178(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 33:
			func_176(uParam1, "Minute2", func_178(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 34:
			func_176(uParam1, "Minute3", func_178(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 35:
			func_176(uParam1, "MrsPhilips1", func_178(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 36:
			func_176(uParam1, "MrsPhilips2", func_178(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 37:
			func_176(uParam1, "Nigel1", func_178(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 38:
			func_176(uParam1, "Nigel1A", func_178(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 39:
			func_176(uParam1, "Nigel1B", func_178(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
	
		case 40:
			func_176(uParam1, "Nigel1C", func_178(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
	
		case 41:
			func_176(uParam1, "Nigel1D", func_178(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_177(iParam0), 1, 1);
			break;
	
		case 42:
			func_176(uParam1, "Nigel2", func_178(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 43:
			func_176(uParam1, "Nigel3", func_178(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 1);
			break;
	
		case 44:
			func_176(uParam1, "Omega1", func_178(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 45:
			func_176(uParam1, "Omega2", func_178(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 46:
			func_176(uParam1, "Paparazzo1", func_178(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 47:
			func_176(uParam1, "Paparazzo2", func_178(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 48:
			func_176(uParam1, "Paparazzo3", func_178(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 49:
			func_176(uParam1, "Paparazzo3A", func_178(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 50:
			func_176(uParam1, "Paparazzo3B", func_178(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 51:
			func_176(uParam1, "Paparazzo4", func_178(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 52:
			func_176(uParam1, "Rampage1", func_178(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 54:
			func_176(uParam1, "Rampage3", func_178(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 55:
			func_176(uParam1, "Rampage4", func_178(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 56:
			func_176(uParam1, "Rampage5", func_178(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_177(iParam0), 0, 0);
			break;
	
		case 53:
			func_176(uParam1, "Rampage2", func_178(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_177(iParam0), 1, 0);
			break;
	
		case 57:
			func_176(uParam1, "TheLastOne", func_178(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 58:
			func_176(uParam1, "Tonya1", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 59:
			func_176(uParam1, "Tonya2", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 60:
			func_176(uParam1, "Tonya3", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 61:
			func_176(uParam1, "Tonya4", func_178(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		case 62:
			func_176(uParam1, "Tonya5", func_178(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_177(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_176(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x8E43 Hash - 0x340E6E87 ^0xA591C803
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

int func_177(int iParam0) // Position - 0x8ED4 Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_178(int iParam0) // Position - 0x921A Hash - 0x323E6781 ^0xC1CA7211
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_179(iParam0) };

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

struct<2> func_179(int iParam0) // Position - 0x9252 Hash - 0x975AC8C9 ^0xC5DD7C0A
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

BOOL func_180() // Position - 0x969F Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_183() && !func_184())
		return true;

	if (func_182() && func_181())
		return true;

	return false;
}

BOOL func_181() // Position - 0x96D1 Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113687 > 0;
}

BOOL func_182() // Position - 0x96DF Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_98435 != -1)
		return true;

	return false;
}

BOOL func_183() // Position - 0x96F4 Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_184() // Position - 0x9717 Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x9734 Hash - 0x6C235EE0 ^0x9E57F206
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79389)
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

void func_186(char* sParam0, float fParam1) // Position - 0x97CF Hash - 0x2E949C6A ^0x2E949C6A
{
	func_188(sParam0);
	func_187(fParam1);
	return;
}

void func_187(float fParam0) // Position - 0x97E3 Hash - 0xDD586179 ^0xDD586179
{
	fParam0 != 0f;
	return;
}

void func_188(char* sParam0) // Position - 0x97F2 Hash - 0xF54A2398 ^0xC5887C42
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

BOOL func_189() // Position - 0x9805 Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_180())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_184())
			return false;

	if (func_174(100f, true) != -1)
		return true;

	return false;
}

BOOL func_190() // Position - 0x9867 Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113958 == func_143() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113959)
		return true;

	return false;
}

void func_191() // Position - 0x9892 Hash - 0x231478AA ^0xA263CA1B
{
	if (func_119(PLAYER::PLAYER_PED_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_75 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != veLocal_78)
				veLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	return;
}

void func_192(Blip blParam0, var uParam1) // Position - 0x98DC Hash - 0x54F8B7E9 ^0xFC9A9E73
{
	int value;
	int num;

	if (*uParam1 == -99)
		*uParam1 = MISC::GET_GAME_TIMER();

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		value = MISC::GET_GAME_TIMER() - *uParam1;
	
		if (value < 5000)
		{
			num = SYSTEM::CEIL(SYSTEM::TO_FLOAT(value) / 1000f);
		
			if ((num * 1000) - value < 500)
				if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
					HUD::SET_BLIP_ALPHA(blParam0, 255);
			else if (HUD::GET_BLIP_ALPHA(blParam0) != 0)
				HUD::SET_BLIP_ALPHA(blParam0, 0);
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
		
			if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
				HUD::SET_BLIP_ALPHA(blParam0, 255);
		}
	}

	return;
}

void func_193() // Position - 0x997B Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_194(int iParam0) // Position - 0x9983 Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_143();

	if (iParam0 == -1)
		return;

	func_196(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_195();
	return;
}

void func_195() // Position - 0x99B9 Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_196(int iParam0) // Position - 0x99F6 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113958 = iParam0;
	return;
}

BOOL func_197(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x9A04 Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152557)
		return false;

	if (iParam3 == -1)
		iParam3 = func_143();

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
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_184())
				return false;
		}
	
		if (!Global_113969.f_9088)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_180())
			return false;
	
		if (func_236())
			return false;
	
		if (Global_113958 != -1)
			return false;
	
		if (func_14(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_174(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_43.f_2 > 50f)
				return false;
	
		if (!func_235(iParam3))
			return false;
	
		if (func_14(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_234(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_234(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_14(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_233(iParam3, iParam4, 145))
				return false;
	
		if (!func_232(Global_113969.f_24998.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113960 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_231())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_222(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_221(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_221(0, 0))
			return false;
	
		if (Global_33095)
			return false;
	
		if (func_235(30) && !func_221(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_14(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_113969.f_2366.f_539.f_2300[i /*3*/] };
				num = Global_113969.f_2366.f_539.f_2296[i];
			
				if (func_220(num))
					if (func_198(i))
						if (!func_101(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_198(eCharacter echParam0) // Position - 0x9D9E Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113969.f_2366.f_539.f_2296[echParam0];
	return func_199(num);
}

BOOL func_199(int iParam0) // Position - 0x9DBF Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_200(iParam0, 1);
}

int func_200(int iParam0, int iParam1) // Position - 0x9DCE Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_220(iParam0))
		return 0;

	func_201(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_201(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x9E21 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_202(func_213(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_202(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x9E3F Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_212(iParam0, iParam1))
	{
		num = func_211(iParam1);
		num2 = func_209(iParam0);
		num3 = func_209(iParam0) - func_209(iParam1);
		num4 = func_211(iParam0) - func_211(iParam1);
		num5 = func_208(iParam0) - func_208(iParam1);
		num6 = func_207(iParam0) - func_207(iParam1);
		num7 = func_206(iParam0) - func_206(iParam1);
		num8 = func_205(iParam0) - func_205(iParam1);
	}
	else
	{
		num = func_211(iParam0);
		num2 = func_209(iParam1);
		num3 = func_209(iParam1) - func_209(iParam0);
		num4 = func_211(iParam1) - func_211(iParam0);
		num5 = func_208(iParam1) - func_208(iParam0);
		num6 = func_207(iParam1) - func_207(iParam0);
		num7 = func_206(iParam1) - func_206(iParam0);
		num8 = func_205(iParam1) - func_205(iParam0);
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
	
		num5 = num5 + func_204(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_203(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_203(float fParam0, float fParam1, float fParam2) // Position - 0xA040 Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_204(int iParam0, int iParam1) // Position - 0xA082 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_205(int iParam0) // Position - 0xA124 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_206(int iParam0) // Position - 0xA137 Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_207(int iParam0) // Position - 0xA14A Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_208(int iParam0) // Position - 0xA15D Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_209(int iParam0) // Position - 0xA16F Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_210(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA191 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_211(int iParam0) // Position - 0xA1A8 Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_212(int iParam0, int iParam1) // Position - 0xA1B5 Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_220(iParam1) || !func_220(iParam0))
		return 1;

	num = func_209(iParam0);
	num2 = func_209(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_211(iParam0);
	num2 = func_211(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_208(iParam0);
	num2 = func_208(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_207(iParam0);
	num2 = func_207(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_206(iParam0);
	num2 = func_206(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_205(iParam0);
	num2 = func_205(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_213() // Position - 0xA2C1 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_219(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_218(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_217(&unk, CLOCK::GET_CLOCK_HOURS());
	func_216(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_215(&unk, CLOCK::GET_CLOCK_MONTH());
	func_214(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_214(var uParam0, int iParam1) // Position - 0xA307 Hash - 0x15B9927E ^0x4A4674
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_215(var uParam0, int iParam1) // Position - 0xA38D Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_216(var uParam0, int iParam1) // Position - 0xA3C0 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_211(*uParam0);
	num2 = func_209(*uParam0);

	if (iParam1 < 1 || iParam1 > func_204(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_217(var uParam0, int iParam1) // Position - 0xA411 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_218(var uParam0, int iParam1) // Position - 0xA44B Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_219(var uParam0, int iParam1) // Position - 0xA486 Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_220(int iParam0) // Position - 0xA4C2 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_205(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_206(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_207(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_209(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_211(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_208(iParam0);

	if (num6 < 1 || num6 > func_204(num5, num4))
		return false;

	return true;
}

BOOL func_221(int iParam0, int iParam1) // Position - 0xA59E Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113969.f_24998.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_222(int iParam0) // Position - 0xA5BE Hash - 0x97844555 ^0xADCD6DAA
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_14(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_230() || Global_113016 || Global_32951 || func_229() || func_62(8, -1) || func_228() || func_227() || func_226() || func_225() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_230() || Global_32951 || func_229() || func_62(8, -1) || func_226() || func_228() || func_227() || func_225() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_230() || Global_113016 || Global_32951 || func_229() || func_62(8, -1) || func_226() || func_228() || func_227() || func_225() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_230() || Global_113016 || Global_32951 || func_229() || func_62(8, -1) || func_228() || func_227() || func_225() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_230() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_62(8, -1) || func_225() || func_224() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_62(8, -1) || func_228() || func_227() || func_224() || func_223())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_230() || Global_32951 || func_229() || func_62(8, -1) || func_227() || func_226() || func_225() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_230() || func_227() || Global_113016 || Global_32951 || func_229() || Global_45250 || func_62(8, -1) || func_226() || func_224() || func_225() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_230() || Global_113016 || Global_32951 || func_229() || func_62(8, -1) || func_226() || func_224() || func_228() || func_227() || func_225())
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

BOOL func_223() // Position - 0xACDB Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_101572.f_1;
}

BOOL func_224() // Position - 0xACE9 Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_225() // Position - 0xAD0C Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_226() // Position - 0xAD26 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_227() // Position - 0xAD50 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_228() // Position - 0xAD61 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_393 > 0;
}

BOOL func_229() // Position - 0xAD72 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575083;
}

BOOL func_230() // Position - 0xAD7E Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

BOOL func_231() // Position - 0xAD9A Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_232(int iParam0) // Position - 0xADC2 Hash - 0xCDB90269 ^0xCDB90269
{
	return func_212(func_213(), iParam0);
}

BOOL func_233(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xADD4 Hash - 0xBEEFD79C ^0xBEEFD79C
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

int func_234(eCharacter echParam0) // Position - 0xAEB8 Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_14(echParam0))
		return 7;

	return Global_113969.f_7691.f_919[echParam0];
}

BOOL func_235(int iParam0) // Position - 0xAEDC Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113969.f_24998, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113969.f_24998.f_1, num);
	}

	return flag;
}

BOOL func_236() // Position - 0xAF34 Hash - 0xB72C022E ^0x452A7B6D
{
	Vehicle vehiclePedIsIn;

	if (Global_33100)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xAF78 Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_152848 == 2)
		return true;
	else if (Global_152848 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
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

BOOL func_238(eCharacter echParam0) // Position - 0xB030 Hash - 0x3D43FEFC ^0x3D43FEFC
{
	int i;

	if (echParam0 == 94 || echParam0 == -1)
		return false;

	if (Global_95498[echParam0 /*2*/])
		return true;

	for (i = 0; i < Global_92265; i = i + 1)
	{
		if (Global_92265[i /*5*/] != -1)
			if (Global_79660.f_109[Global_92265[i /*5*/] /*4*/] == echParam0)
				return true;
	}

	return false;
}

void func_239() // Position - 0xB098 Hash - 0x1768D41F ^0x1D1067EA
{
	if (SYSTEM::VDIST(uLocal_50, -2255.21f, 4271.04f, 44.875f) < 5f)
		iLocal_299 = 1;
	else if (SYSTEM::VDIST(uLocal_50, -500.924f, -2165.36f, 7.6988f) < 5f)
		iLocal_299 = 2;

	return;
}

void func_240() // Position - 0xB0E3 Hash - 0x817BE284 ^0x39D02456
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_74) && !ENTITY::IS_ENTITY_DEAD(pedLocal_74, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_74, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(pedLocal_74));
		func_252(&pedLocal_74, true, 0, 1);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_73) && !ENTITY::IS_ENTITY_DEAD(pedLocal_73, false))
	{
		PED::SET_PED_RESET_FLAG(pedLocal_73, 310, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_73, false);
	}

	if (HUD::DOES_BLIP_EXIST(blLocal_62))
		HUD::REMOVE_BLIP(&blLocal_62);

	func_72(&uLocal_65);

	if (HUD::DOES_BLIP_EXIST(blLocal_63))
		HUD::REMOVE_BLIP(&blLocal_63);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (func_171(veLocal_75))
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_75, 0);
	
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}

	if (iLocal_299 == 2)
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("rocoto"));
	else
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("peyote"));

	func_18(&veLocal_75);

	if (func_171(veLocal_78))
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_78, true);

	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_155(39, false);
	func_155(40, false);
	func_155(41, false);
	func_155(42, false);
	func_155(43, false);
	func_155(44, false);
	func_241(-1);
	func_74(&uLocal_328, 0, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_241(int iParam0) // Position - 0xB1FF Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_143();

	if (iParam0 == -1)
		return;

	if (func_190())
	{
		func_245(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_244(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_243(Global_113958, true), 64);
	
		if (func_142(Global_113958) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113957, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113955, MISC::GET_GAME_TIMER() - Global_113956, 0);
	}
	else if (IS_BIT_SET(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113965, 0);
	}

	func_242(&Global_33008);
	Global_113959 = false;
	func_196(-1);
	return;
}

void func_242(var uParam0) // Position - 0xB2B1 Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44004))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = false;
	Global_64164 = 0;
	return;
}

char* func_243(int iParam0, BOOL bParam1) // Position - 0xB2EE Hash - 0x959319CB ^0x28257271
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

void func_244(int iParam0) // Position - 0xB537 Hash - 0xC0234809 ^0x4FD853DC
{
	Global_44593 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_245(int iParam0) // Position - 0xB549 Hash - 0x881273A8 ^0x881273A8
{
	func_246(iParam0, 0, func_251(iParam0));
	return;
}

void func_246(int iParam0, int iParam1, int iParam2) // Position - 0xB55E Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_213();
	func_249(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_248(iParam0, &unk);
	unk2 = { func_247(&unk) };
	return;
}

struct<16> func_247(var uParam0) // Position - 0xB58D Hash - 0xB96DB942 ^0x95F998CA
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_207(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_206(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_205(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_208(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_211(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_209(*uParam0), 64);
	return unk;
}

void func_248(int iParam0, var uParam1) // Position - 0xB65E Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
	return;
}

void func_249(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB676 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_209(*uParam0);
	i = func_211(*uParam0);
	num2 = func_208(*uParam0);
	j = func_207(*uParam0);
	k = func_206(*uParam0);
	l = func_205(*uParam0);

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

	for (m = func_204(i, num); num2 > m; m = func_204(i, num))
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
	func_250(uParam0, l, k, j, num2, i, num);
	return;
}

void func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB7F8 Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_219(uParam0, iParam1);
	func_218(uParam0, iParam2);
	func_217(uParam0, iParam3);
	func_215(uParam0, iParam5);
	func_216(uParam0, iParam4);
	func_214(uParam0, iParam6);
	return;
}

int func_251(int iParam0) // Position - 0xB830 Hash - 0x4219564C ^0x4219564C
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

void func_252(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xB9D3 Hash - 0x34362197 ^0xC592197
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

