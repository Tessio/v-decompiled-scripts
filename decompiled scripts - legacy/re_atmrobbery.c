#region Local Var
	int iLocal_0 = 0;
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
	var uLocal_13 = 0;
	var uLocal_14 = -2;
	var uLocal_15 = -2;
	var uLocal_16 = -2;
	var uLocal_17 = 5;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 2;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 2;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 2;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char* sLocal_38 = 0;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 10;
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
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	BOOL bLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	float fLocal_115 = 0f;
	Ped pedLocal_116 = 0;
	Ped pedLocal_117 = 0;
	Object obLocal_118 = 0;
	Blip blLocal_119 = 0;
	Blip blLocal_120 = 0;
	Blip blLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	ScrHandle shLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	Vehicle veLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	float fLocal_146 = 0f;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	BOOL bLocal_149 = 0;
	BOOL bLocal_150 = 0;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	BOOL bLocal_154 = 0;
	BOOL bLocal_155 = 0;
	BOOL bLocal_156 = 0;
	BOOL bLocal_157 = 0;
	Pickup pkLocal_158 = 0;
	BOOL bLocal_159 = 0;
	BOOL bLocal_160 = 0;
	char* sLocal_161 = 0;
	char* sLocal_162 = 0;
	char* sLocal_163 = 0;
	BOOL bLocal_164 = 0;
	BOOL bLocal_165 = 0;
	Cam caLocal_166 = 0;
	int iLocal_167 = 0;
	BOOL bLocal_168 = 0;
	BOOL bLocal_169 = 0;
	Hash hLocal_170 = 0;
	Hash hLocal_171 = 0;
	int iLocal_172 = 0;
	Hash hLocal_173 = 0;
	Hash hLocal_174 = 0;
	Hash hLocal_175 = 0;
	var uLocal_176 = 16;
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
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	char* sLocal_341 = 0;
	char* sLocal_342 = 0;
	char* sLocal_343 = 0;
	char* sLocal_344 = 0;
	char* sLocal_345 = 0;
	char* sLocal_346 = 0;
	char* sLocal_347 = 0;
	char* sLocal_348 = 0;
	char* sLocal_349 = 0;
	char* sLocal_350 = 0;
	char* sLocal_351 = 0;
	char* sLocal_352 = 0;
	char* sLocal_353 = 0;
	char* sLocal_354 = 0;
	BOOL bLocal_355 = 0;
	BOOL bLocal_356 = 0;
	BOOL bLocal_357 = 0;
	BOOL bLocal_358 = 0;
	BOOL bLocal_359 = 0;
	BOOL bLocal_360 = 0;
	float fLocal_361 = 0f;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	float fLocal_368 = 0f;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	float fLocal_374 = 0f;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	float fLocal_378 = 0f;
	char* sLocal_379 = 0;
	char* sLocal_380 = 0;
	char* sLocal_381 = 0;
	char* sLocal_382 = 0;
	char* sLocal_383 = 0;
	char* sLocal_384 = 0;
	char* sLocal_385 = 0;
	char* sLocal_386 = 0;
	char* sLocal_387 = 0;
	char* sLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = -1;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 1000;
	var uLocal_399 = 1000;
	var uLocal_400 = 0;
	var uLocal_401 = 8;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 1;
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
	Vector3 entityCoords;

	iLocal_0 = 3;
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
	fLocal_32 = 0.001f;
	iLocal_35 = -1;
	sLocal_38 = "NULL";
	fLocal_39 = 0f;
	fLocal_43 = -0.0375f;
	fLocal_44 = 0.17f;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	iLocal_63 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_64 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_126 = 3;
	bLocal_149 = true;
	sLocal_161 = "RANDOM@ATMROBBERYGEN";
	sLocal_162 = "RANDOM@ATMROBBERYGEN";
	hLocal_170 = joaat("prop_ld_wallet_01_s");
	hLocal_171 = joaat("prop_ld_wallet_01_s");
	iLocal_362 = 500;
	iLocal_363 = -1;
	iLocal_364 = -1;
	fLocal_374 = 0f;
	fLocal_378 = 0f;
	uLocal_112 = { uScriptParam_0.f_1[0 /*3*/] };
	fLocal_115 = uScriptParam_0.f_17[0];

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_164)
		{
			bLocal_165 = true;
			func_298(false);
		}
		else
		{
			func_280();
		}
	}

	if (BUILTIN::VDIST(uLocal_112, -203.758f, -861.738f, 29.2684f) < 5f)
		iLocal_126 = 1;
	else if (BUILTIN::VDIST(uLocal_112, -2957.61f, 488.29f, 14.47f) < 5f)
		iLocal_126 = 1;
	else if (BUILTIN::VDIST(uLocal_112, 288.973f, -1256.79f, 28.4407f) < 5f)
		iLocal_126 = 2;
	else if (BUILTIN::VDIST(uLocal_112, -3043.93f, 594.84f, 6.6115f) < 5f)
		iLocal_126 = 3;
	else if (BUILTIN::VDIST(uLocal_112, 174.715f, 6637.77f, 30.5733f) < 5f)
		iLocal_126 = 4;
	else
		iLocal_126 = 5;

	if (func_238(uLocal_112, true, iLocal_126, true, false))
		func_235(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	BUILTIN::SETTIMERA(0);
	func_234();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_233();
		func_232(blLocal_119, &uLocal_125);
		func_229(&uLocal_401);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		if (!func_226())
		{
			if (func_225())
				func_280();
		
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_111)
				{
					case 0:
						if (func_199())
							iLocal_111 = 1;
						break;
				
					case 1:
						func_198();
					
						if (shLocal_130 == 0)
							shLocal_130 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_MUGGING, uLocal_112, 30000f);
					
						ENTITY::DOES_ENTITY_EXIST(pedLocal_116);
						ENTITY::DOES_ENTITY_EXIST(pedLocal_117);
					
						if (!PED::IS_PED_INJURED(pedLocal_116))
						{
							if (PED::IS_PED_INJURED(pedLocal_117))
							{
								TASK::TASK_SMART_FLEE_COORD(pedLocal_116, uLocal_112, 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(pedLocal_116, true);
								BUILTIN::WAIT(0);
								func_280();
							}
						
							if (!PED::IS_PED_INJURED(pedLocal_117))
								if (CAM::IS_SPHERE_VISIBLE(uLocal_112, 2.5f))
									if (iLocal_126 == 2)
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 120f, 120f, 8f, false, true, 0) || func_197())
											func_188();
									else if (iLocal_126 == 1)
										if (BUILTIN::VDIST(uLocal_112, -203.758f, -861.738f, 29.2684f) < 5f)
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 100f, 100f, 8f, false, true, 0) || func_197())
												func_188();
										else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 170f, 170f, 8f, false, true, 0) || func_197())
											func_188();
									else if (BUILTIN::VDIST(uLocal_112, -3044.06f, 594.93f, 6.74f) < 5f)
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 65f, 65f, 5f, false, true, 0) || func_197())
											func_188();
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -712.9f, -819.32f, 22.73f, true) < 5f)
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 50f, 50f, 5f, false, true, 0) || func_197())
											func_188();
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 24.13f, -946.84f, 28.36f, true) < 5f)
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 60f, 60f, 5f, false, true, 0) || func_197())
											func_188();
									else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 30f, 30f, 8f, false, true, 0) || func_197())
										func_188();
						}
						else
						{
							if (uLocal_176[2 /*10*/].f_7)
								func_187(&uLocal_176, 2);
						
							if (!PED::IS_PED_INJURED(pedLocal_117))
							{
								TASK::TASK_SMART_FLEE_COORD(pedLocal_117, uLocal_112, 200f, -1, false, false);
								PED::SET_PED_KEEP_TASK(pedLocal_117, true);
								BUILTIN::WAIT(0);
							}
						
							func_280();
						}
						break;
				}
			}
			else
			{
				func_185("IF NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()\\n");
				func_280();
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_116))
			{
				if (!PED::IS_PED_INJURED(pedLocal_116))
				{
					if (func_184(pedLocal_116, SCRIPT_TASK_0xF10822AA))
					{
						if (func_183(pedLocal_116, uLocal_112, true) >= 190f)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_116);
							TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						}
					}
					else if (func_184(pedLocal_116, SCRIPT_TASK_STAND_STILL))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_116);
						TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				}
			}
		
			ENTITY::DOES_ENTITY_EXIST(pedLocal_117);
		
			if (MISC::GET_GAME_TIMER() > iLocal_127 + 3000)
				func_154();
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_134() && !func_131())
				{
					PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
				
					if (!bLocal_154 && !bLocal_159)
						if (ENTITY::DOES_ENTITY_EXIST(pedLocal_117))
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_117, false), -2956.26f, 487.97f, 15.46f) < 5f)
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 100f, 100f, 15f, false, true, 0))
									if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_344, 3, 0, 0, 0))
										bLocal_154 = true;
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -203.72f, -861.8f, 29.27f, true) < 5f)
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 40f, 40f, 15f, false, true, 0))
									if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_344, 3, 0, 0, 0))
										bLocal_154 = true;
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 288.46f, -1256.71f, 28.44f, true) < 5f)
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 50f, 50f, 15f, false, true, 0))
									if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_344, 3, 0, 0, 0))
										bLocal_154 = true;
							else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 50f, 50f, 15f, false, true, 0))
								if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_344, 3, 0, 0, 0))
									bLocal_154 = true;
				
					if (HUD::DOES_BLIP_EXIST(blLocal_120))
					{
						if (!PED::IS_PED_INJURED(pedLocal_116))
						{
							if (bLocal_355)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_116, PLAYER::PLAYER_PED_ID(), fLocal_361, fLocal_361, fLocal_361, false, true, 0))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_116, false))
									{
										if (BUILTIN::TIMERA() > 1000)
										{
											if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116))
											{
												fLocal_361 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_116, true));
												fLocal_361 = fLocal_361 * 1.5f;
												BUILTIN::SETTIMERA(0);
											}
										
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_AlwaysFlee, false);
										}
									}
								}
								else if (!bLocal_357)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_116, 25f, 25f, 25f, false, true, 0))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_116, false))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_AlwaysFlee, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_Aggressive, false);
											func_122();
											bLocal_357 = true;
										}
									}
								}
							}
							else if (!bLocal_156)
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_116, PLAYER::PLAYER_PED_ID(), false))
								{
									_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_342, 4, 0, 0, 0);
									BUILTIN::SETTIMERA(0);
									fLocal_361 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_116, true));
									fLocal_361 = fLocal_361 * 1.5f;
									bLocal_355 = true;
									bLocal_156 = true;
								}
							
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false))
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_134, PLAYER::PLAYER_PED_ID(), true))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_AlwaysFlee, false);
									
										if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedLocal_116))
											TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_116, veLocal_134, PLAYER::PLAYER_PED_ID(), 8, 35f, 4, 10f, 10f, true);
										else
											TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
									
										_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_342, 4, 0, 0, 0);
										BUILTIN::SETTIMERA(0);
										fLocal_361 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_116, true));
										fLocal_361 = fLocal_361 * 1.5f;
										bLocal_355 = true;
										bLocal_156 = true;
									}
								}
							}
						
							if (bLocal_357 || bLocal_355 || bLocal_359)
							{
								if (HUD::DOES_BLIP_EXIST(blLocal_120))
								{
									if (HUD::GET_BLIP_COLOUR(blLocal_120) == 1)
									{
									}
									else
									{
										HUD::SET_BLIP_AS_FRIENDLY(blLocal_120, false);
										HUD::SET_BLIP_COLOUR(blLocal_120, 1);
									}
								}
							
								if (!bLocal_357)
								{
									func_122();
									bLocal_357 = true;
								}
							}
							else
							{
								if (PED::IS_PED_IN_COMBAT(pedLocal_116, PLAYER::PLAYER_PED_ID()))
									bLocal_359 = true;
							
								func_120(blLocal_120, &uLocal_131);
							}
						
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_117))
							{
								if (!bLocal_156)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 15f, 15f, 10f, false, true, 0))
									{
										if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_345, 4, 0, 0, 0))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 8f, -4f, -1, 1, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
											BUILTIN::SETTIMERA(0);
											bLocal_156 = true;
										}
									}
								}
								else if (!bLocal_157)
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 15f, 15f, 10f, false, true, 0))
									{
										if (!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && func_119(pedLocal_117, pedLocal_116, true) > 30f)
										{
											if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_346, 4, 0, 0, 0))
											{
												BUILTIN::SETTIMERA(0);
												bLocal_157 = true;
											}
										}
									}
								}
								else if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_117))
								{
									func_117(pedLocal_117, "GENERIC_CURSE_MED", 24);
								}
							}
						
							if (func_115())
							{
								func_114();
							
								if (ENTITY::DOES_ENTITY_EXIST(pedLocal_117))
									entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_117, true) };
							
								if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_116, entityCoords, 25f, 25f, 25f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_116, 12f, 12f, 12f, false, true, 0))
								{
									if (BUILTIN::TIMERA() > 20000)
									{
										if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_116) && !PED::IS_PED_RAGDOLL(pedLocal_116))
										{
											if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_347, 4, 0, 0, 0))
											{
												bLocal_359 = true;
												BUILTIN::SETTIMERA(0);
											}
										}
									}
								}
							}
							else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, Global_20, false, true, 0))
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_350, 4, 0, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
										TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
										bLocal_356 = true;
										func_280();
									}
								}
								else if (bLocal_359)
								{
									if (_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_351, 4, 0, 0, 0))
									{
										TASK::TASK_WANDER_STANDARD(pedLocal_117, 1193033728, 0);
										PED::FORCE_PED_MOTION_STATE(pedLocal_117, joaat("MotionState_Walk"), false, 0, false);
										bLocal_356 = true;
										func_280();
									}
								}
								else
								{
									TASK::TASK_WANDER_STANDARD(pedLocal_117, 1193033728, 0);
									PED::FORCE_PED_MOTION_STATE(pedLocal_117, joaat("MotionState_Walk"), false, 0, false);
									bLocal_356 = true;
									func_280();
								}
							}
							else
							{
								bLocal_356 = true;
								func_280();
							}
						}
						else if (func_115())
						{
							if (PED::IS_PED_INJURED(pedLocal_116) || PED::IS_PED_DEAD_OR_DYING(pedLocal_116, true) || func_184(pedLocal_116, SCRIPT_TASK_WRITHE))
							{
								_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_354, 4, 0, 0, 0);
								func_110();
								func_187(&uLocal_176, 2);
								HUD::REMOVE_BLIP(&blLocal_120);
							}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(blLocal_119))
					{
						if (bLocal_164)
						{
							if (HUD::DOES_BLIP_EXIST(blLocal_121))
								HUD::REMOVE_BLIP(&blLocal_121);
						
							blLocal_121 = 0;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							blLocal_119 = func_106(pedLocal_117, false, 0);
							func_105(&uLocal_125);
						
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_117))
							{
								fLocal_151 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_117, false));
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_117);
							}
						
							if (fLocal_151 > 750f)
								func_298(false);
						}
						else
						{
							func_102();
						}
					}
					else
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							if (bLocal_164)
								func_298(false);
							else
								func_280();
					
						if (bLocal_169)
						{
						}
						else
						{
							func_2();
						}
					
						if (!bLocal_169)
						{
							if (!PED::IS_PED_INJURED(pedLocal_117))
							{
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_117, false)) > fLocal_151 + 100f)
								{
									if (bLocal_164)
									{
										func_298(false);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_117, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
										func_280();
									}
								}
								else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_117, false)) < fLocal_151)
								{
									fLocal_151 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_117, false));
								}
							
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_117, PLAYER::PLAYER_PED_ID(), true))
									if (bLocal_164)
										func_298(false);
							}
						}
					}
				}
				else
				{
					func_1();
				}
			}
			else
			{
				func_1();
			}
		}
	}

	return;
}

void func_1() // Position - 0xDBF (3519)
{
	if (!PED::IS_PED_INJURED(pedLocal_117))
	{
		TASK::TASK_SMART_FLEE_PED(pedLocal_117, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
		func_117(pedLocal_117, "GENERIC_FRIGHTENED_HIGH", 24);
		PED::SET_PED_KEEP_TASK(pedLocal_117, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_117, false);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_117, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_117);
	}

	func_102();

	if (bLocal_159)
		if (HUD::DOES_BLIP_EXIST(blLocal_121))
			if (OBJECT::DOES_PICKUP_EXIST(pkLocal_158))
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(pkLocal_158)) > 100f)
					func_280();
		else if (bLocal_164)
			func_298(false);
		else if (PED::IS_PED_INJURED(pedLocal_116))
			func_280();

	if (HUD::DOES_BLIP_EXIST(blLocal_120))
		if (PED::IS_PED_INJURED(pedLocal_116))
			HUD::REMOVE_BLIP(&blLocal_120);
		else if (!func_115())
			func_280();

	return;
}

void func_2() // Position - 0xE88 (3720)
{
	Vehicle playersLastVehicle;
	var entityCoords;
	var entityCoords2;
	float dx;
	Vector3 animInitialOffsetPosition;
	Vector3 vector;
	float num;
	var entityCoords3;
	BOOL flag;
	float num2;
	float num3;
	var unk15;
	var unk19;
	var outValue;
	int num4;

	if (!PED::IS_PED_INJURED(pedLocal_117))
	{
		if (!bLocal_168)
		{
			if (bLocal_358)
			{
				if (!bLocal_360)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 15f, 15f, 20f, false, true, 0))
					{
						func_117(pedLocal_117, "GENERIC_HI", 5);
						bLocal_360 = true;
					}
				}
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 296.13f, -894.01f, 28.23f, true) < 5f)
					if (fLocal_152 == 6f)
						fLocal_152 = 5f;
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -2072.88f, -317.19f, 12.32f, true) < 5f)
					if (fLocal_152 == 6f)
						fLocal_152 = 4f;
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, fLocal_152, fLocal_152, fLocal_152, false, true, 0) && !func_101())
				{
					if (func_98(2))
						HUD::CLEAR_HELP(true);
				
					if (!func_131())
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (func_97(true, false, true))
							{
								if (!IS_BIT_SET(Global_9502, 11) || func_96())
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
									{
										HUD::CLEAR_HELP(true);
									
										if (func_95())
											func_94();
									
										if (hLocal_170 == joaat("prop_ld_wallet_pickup"))
											obLocal_118 = OBJECT::CREATE_OBJECT(hLocal_171, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
										else
											obLocal_118 = OBJECT::CREATE_OBJECT(hLocal_170, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
									
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_118, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
									
										ENTITY::SET_ENTITY_VISIBLE(obLocal_118, false, false);
										func_85(true, true, true, false, false, false, false);
									
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
											{
												while (!func_82(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_153, 1, 1056964608, false, true, false) || func_95() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obLocal_118))
												{
													!func_82(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_153, 1, 1056964608, false, true, false);
													func_95();
													!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obLocal_118);
													BUILTIN::WAIT(0);
												}
											
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
													TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
										{
											while (func_95() || !ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obLocal_118))
											{
												BUILTIN::WAIT(0);
											}
										}
									
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									
										if (!PED::IS_PED_INJURED(pedLocal_117))
											PED::SET_PED_CAN_RAGDOLL(pedLocal_117, false);
									
										EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
										EVENT::REMOVE_SHOCKING_EVENT(shLocal_130);
										PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
										func_80();
										func_74(0);
										BUILTIN::WAIT(0);
									
										if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117))
											if (PED::IS_PED_MALE(pedLocal_117))
												sLocal_163 = "move_m@hurry@b";
											else
												sLocal_163 = "move_f@hurry@a";
									
										STREAMING::REQUEST_CLIP_SET(sLocal_163);
										bLocal_168 = true;
										BUILTIN::SETTIMERA(0);
									}
								}
							}
						}
					}
				}
				else
				{
					func_72(ENTITY::GET_ENTITY_COORDS(pedLocal_117, true), &fLocal_152, &fLocal_153);
				
					if (!func_101())
					{
						if (!func_184(pedLocal_117, SCRIPT_TASK_GO_TO_ENTITY) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_117);
							TASK::TASK_GO_TO_ENTITY(pedLocal_117, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						}
					}
					else if (func_184(pedLocal_117, SCRIPT_TASK_GO_TO_ENTITY))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_117);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 1090519040, -1056964608, -1, 0, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 1090519040, -1056964608, -1, 0, 0, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 1090519040, -1056964608, -1, 1, 0, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_117, false, false);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 25f, 25f, 20f, false, true, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 30f, 30f, 20f, false, true, 2))
			{
				if (!func_101())
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_117);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 1056964608, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
					}
				
					bLocal_358 = true;
				}
			}
		}
	
		if (bLocal_168)
		{
			switch (iLocal_167)
			{
				case 0:
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID()) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_149)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -712.9f, -819.32f, 22.73f, true) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -709.9229f, -824.0863f, 22.075096f, -715.21375f, -824.2247f, 25.01217f, 3.25f, false, true, 0))
							{
								uLocal_143 = { -710.1279f, -821.3084f, 22.6169f };
								fLocal_146 = { 0f, 0f, 266.962f };
							}
							else if (!PED::IS_PED_INJURED(pedLocal_117))
							{
								entityCoords3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								func_69(pedLocal_117, &uLocal_143, &fLocal_146, sLocal_379, sLocal_381);
							
								if (uLocal_143.f_2 - entityCoords3.f_2 > 20f)
									uLocal_143 = { entityCoords3 };
							
								uLocal_143.f_2 = uLocal_143.f_2 + 2f;
								MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_143, &(uLocal_143.f_2), false, false);
							
								if (uLocal_143.f_2 == 0f)
								{
									uLocal_143 = { uLocal_371 };
									fLocal_146.f_2 = fLocal_374;
								}
							
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -203.72f, -861.8f, 29.27f, true) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -202.42177f, -864.449f, 27.880587f, -211.44864f, -861.5274f, 31.754005f, 9.5f, false, true, 0))
									{
										if (fLocal_146.f_2 > 315f && fLocal_146.f_2 < 360f)
											fLocal_146.f_2 = 251.4238f;
										else if (fLocal_146.f_2 > 120f && fLocal_146.f_2 < 212f)
											fLocal_146.f_2 = 67.2304f;
									
										uLocal_143 = { -205.81f, -865.2f, 28.5f };
									}
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -821.33f, -1082.43f, 10.14f, true) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(uLocal_143, -826.17444f, -1083.9429f, 9.137519f, -811.65594f, -1075.567f, 13.887788f, 6f, false, true))
								{
									uLocal_143 = { -814.0593f, -1082.4833f, 10.0671f };
									fLocal_146.f_2 = 275.5752f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -387.12f, 6045.79f, 30.5f, true) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(uLocal_143, -377.57883f, 6033.821f, 29.291185f, -373.0138f, 6029.1396f, 33.753822f, 4.75f, false, true))
								{
									uLocal_143 = { -375.0627f, 6030.533f, 30.5313f };
									fLocal_146.f_2 = 222.9049f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -387.12f, 6045.79f, 30.5f, true) < 5f && OBJECT::IS_POINT_IN_ANGLED_AREA(uLocal_143, -381.46072f, 6031.4814f, 29.249712f, -376.67657f, 6026.68f, 33.766556f, 3f, false, true))
								{
									uLocal_143 = { -379.7835f, 6029.4717f, 30.5014f };
									fLocal_146.f_2 = 213.2611f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 89.39f, 2f, 67.34f, true) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.303474f, 4.781172f, 66.79439f, 107.65722f, -8.330787f, 69.16833f, 9.75f, false, true, 0))
										if (fLocal_146.f_2 > 128f && fLocal_146.f_2 < 195f)
											if (fLocal_146.f_2 > 162f)
												fLocal_146.f_2 = 220f;
											else
												fLocal_146.f_2 = 107f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 174.53f, 6637.64f, 30.57f, true) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 176.38945f, 6635.9834f, 29.87799f, 181.75851f, 6641.302f, 33.556004f, 7.75f, false, true, 0))
										if (fLocal_146.f_2 > 244.444f && fLocal_146.f_2 < 326.2103f)
											fLocal_146.f_2 = 343.1367f;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -3044.11f, 594.34f, 6.73f, true) < 5f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3042.5486f, 597.11176f, 6.612578f, -3046.9646f, 595.69727f, 9.065809f, 5f, false, true, 0))
										uLocal_143 = { -3045.4f, 598.65f, 6.51f };
								}
							
								animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 0f, 2) };
								vector = { animInitialOffsetPosition - uLocal_143 };
								vector.f_2 = 0f;
								num3 = BUILTIN::VMAG(vector);
								MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
								num2 = uLocal_143.f_2 - animInitialOffsetPosition.f_2;
								fLocal_146 = MISC::ATAN2(num2, num3);
							
								if (fLocal_146 > 20f || fLocal_146 < -330f)
								{
									uLocal_143 = { uLocal_371 };
									fLocal_146 = 0f;
									fLocal_146.f_2 = fLocal_374;
									animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 0f, 2) };
									vector = { animInitialOffsetPosition - uLocal_143 };
									vector.f_2 = 0f;
									num3 = BUILTIN::VMAG(vector);
									MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
									num2 = uLocal_143.f_2 - animInitialOffsetPosition.f_2;
								}
							}
						
							if (func_68(uLocal_112, -526.58f, -1222.79f, 17.46f, 10f, false))
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(uLocal_143, -538.4412f, -1214.9027f, 16.797941f, -520.32684f, -1223.2487f, 20.555996f, 6.5f, false, true))
									if (fLocal_146.f_2 < 35f || fLocal_146.f_2 > 275f)
										if (fLocal_146.f_2 < 335f)
											fLocal_146.f_2 = 260f;
										else
											fLocal_146.f_2 = 55f;
									else if (fLocal_146.f_2 > 107.2072f && fLocal_146.f_2 < 210f)
										if (fLocal_146.f_2 > 154.6742f)
											fLocal_146.f_2 = 233f;
										else
											fLocal_146.f_2 = 73f;
						}
						else if (iLocal_126 == 4)
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 183.6065f, 6636.6533f, 30.6299f) < BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 172.2291f, 6631.007f, 30.7398f))
							{
								uLocal_143 = { 183.6065f, 6636.6533f, 30.6299f };
								fLocal_146 = { 0f, 0f, 265f };
							}
							else
							{
								uLocal_143 = { 172.2291f, 6631.007f, 30.7398f };
								fLocal_146 = { 0f, 0f, 132f };
							}
						}
						else
						{
							entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						
							if (!PED::IS_PED_INJURED(pedLocal_117))
								entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedLocal_117, true) };
						
							dx = { entityCoords - entityCoords2 };
							uLocal_143 = { entityCoords };
							uLocal_143 = { uLocal_143, uLocal_143.f_1, uLocal_143.f_2 - 1f };
							fLocal_146 = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1) };
						}
					
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_143, -535.795f, -1222.23f, 17.4567f, true) < 5f)
						{
							uLocal_143 = { -521.475f, -1210.47f, 17.1848f };
							fLocal_146 = { 0f, 0f, 308.502f };
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false))
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_134);
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
							{
								playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &uLocal_365, &fLocal_368);
							
								if (ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, uLocal_143, fLocal_368.f_1 + 1f, fLocal_368.f_1 + 1f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 0, 2), fLocal_368.f_1 + 1f, fLocal_368.f_1 + 1f, 3f, false, true, 0))
								{
									if (func_68(uLocal_112, -526.58f, -1222.79f, 17.46f, 10f, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.74774f, -1218.3987f, 16.78482f, -538.97784f, -1213.7561f, 20.536852f, 7.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.74774f, -1218.3987f, 16.78482f, -520.9798f, -1222.3054f, 20.552042f, 7.5f, false, true, 0))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -529.74774f, -1218.3987f, 16.78482f, -538.97784f, -1213.7561f, 20.536852f, 7.5f, false, true, 0))
										{
											num = { 2.9f, 12f, 8f };
											uLocal_138 = { -543.34f, -1216.8f, 17.96f };
											fLocal_142 = 337.5f;
											flag = true;
										}
										else
										{
											num = { 2.9f, 12f, 8f };
											uLocal_138 = { -522.4418f, -1214.5704f, 17.1848f };
											fLocal_142 = 246.7714f;
											flag = true;
										}
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_DOOR_LATCHED(playersLastVehicle, 0, true, true, true);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -203.72f, -861.8f, 29.27f, true) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -197.76158f, -865.97723f, 27.311165f, -191.161f, -849.0546f, 32.892746f, 10.25f, false, true, 0))
									{
										num = { 2.9f, 12f, 8f };
										uLocal_138 = { -187f, -855.51f, 29.02f };
										fLocal_142 = 158.28f;
										flag = true;
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -387.12f, 6045.79f, 30.5f, true) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -390.45358f, 6044.0503f, 29.998678f, -380.4771f, 6032.985f, 33.248787f, 6f, false, true, 0))
									{
										num = { 2.9f, 12f, 8f };
										uLocal_138 = { -395.84f, 6051.16f, 31.19f };
										fLocal_142 = 139.92f;
										flag = true;
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -2956.78f, 488.19f, 14.47f, true) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2955.2336f, 492.46262f, 13.803072f, -2967.1165f, 493.05115f, 17.056633f, 9.75f, false, true, 0))
									{
										num = { 2.9f, 12f, 8f };
										uLocal_138 = { -2972.31f, 490.07f, 15.03f };
										fLocal_142 = 357.64f;
										flag = true;
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
									else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 174.53f, 6637.64f, 30.57f, true) < 5f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 178.24597f, 6638.8237f, 30.527403f, 173.4713f, 6634.0835f, 33.6823f, 6f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, 180.12245f, 6640.3296f, 30.78129f, 171.62299f, 6631.794f, 33.69934f, 8f, false, true, 0))
									{
										num = { 2.9f, 12f, 8f };
										uLocal_138 = { 184.05f, 6628.75f, 31.27f };
										fLocal_142 = 89.37f;
										flag = true;
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
									else
									{
										num = { 2.9f, 12f, 8f };
										fLocal_142 = ENTITY::GET_ENTITY_HEADING(playersLastVehicle);
										uLocal_138 = { func_65(uLocal_143, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 0, 2)) };
									
										if (func_64(0f, 0f, 0f, uLocal_138, false))
											uLocal_138 = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
									
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(playersLastVehicle)))
										{
											fLocal_368 = fLocal_368 + 3f;
											fLocal_368.f_1 = fLocal_368.f_1 + 3f;
										}
									
										flag = true;
									
										if (fLocal_368 - uLocal_365 > num)
											flag = false;
										else if (fLocal_368.f_1 - uLocal_365.f_1 > num.f_1)
											flag = false;
										else if (fLocal_368.f_2 - uLocal_365.f_2 > num.f_2)
											flag = false;
									
										if (flag)
										{
											if (func_67(playersLastVehicle))
											{
												ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_138, true, false, false, true);
												ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_142);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
										{
											if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
												VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
										}
									}
								}
							}
						}
					
						if (func_67(playersLastVehicle))
						{
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &uLocal_365, &fLocal_368);
						
							if (ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, uLocal_143, fLocal_368.f_1 + 1f, fLocal_368.f_1 + 1f, 1f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 0, 2), fLocal_368.f_1 + 1f, fLocal_368.f_1 + 1f, 1f, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_375, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_378);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
							ENTITY::SET_ENTITY_VISIBLE(obLocal_118, true, false);
					
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uLocal_143 - { 10f, 10f, 10f }, uLocal_143 + { 10f, 10f, 10f }, 0);
						MISC::CLEAR_AREA_OF_PROJECTILES(uLocal_143, 20f, 0);
						MISC::CLEAR_AREA_OF_PEDS(uLocal_143, 10f, 0);
						MISC::CLEAR_AREA(uLocal_143, fLocal_368.f_1 + 1f, true, false, false, false);
						FIRE::STOP_FIRE_IN_RANGE(uLocal_143, 25f);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_143, fLocal_146, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_129, false);
						caLocal_166 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::SET_CAM_FOV(caLocal_166, 15f);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_166, iLocal_129, sLocal_382, sLocal_379);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_129, sLocal_379, sLocal_380, 1000f, -1000f, 1024, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					
						if (!PED::IS_PED_INJURED(pedLocal_117))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_117);
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_117, iLocal_129, sLocal_379, sLocal_381, 1000f, -4f, 0, 0, 1148846080, 0);
						}
					
						CAM::SET_CAM_ACTIVE(caLocal_166, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						TEXT_LABEL_ASSIGN_STRING(&unk15, sLocal_353, 16);
						TEXT_LABEL_APPEND_STRING(&unk15, "_1", 16);
						TEXT_LABEL_ASSIGN_STRING(&unk19, sLocal_349, 16);
						TEXT_LABEL_APPEND_STRING(&unk19, "_1", 16);
						func_52(&uLocal_176, sLocal_352, sLocal_353, &unk15, sLocal_349, &unk19, 7, 0, 0);
						BUILTIN::SETTIMERA(0);
						EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
						func_51(joaat("RC_WALLETS_RETURNED") /* TUNEABLE: RC_WALLETS_RETURNED */, 1);
						STATS::STAT_GET_INT(joaat("RC_WALLETS_RETURNED") /* TUNEABLE: RC_WALLETS_RETURNED */, &outValue, -1);
						iLocal_167 = iLocal_167 + 1;
					}
					else
					{
						PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
						PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID());
						PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID());
						TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID());
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_129) == 1f || func_48())
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), false, 0);
					
						if (!PED::IS_PED_INJURED(pedLocal_117))
						{
							PED::SET_PED_MONEY(pedLocal_117, iLocal_362 - (iLocal_362 / 10));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_117, false);
							PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_117, sLocal_163, 1048576000);
						}
					
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_117);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(pedLocal_117, animInitialOffsetPosition, true, false, false, true);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(pedLocal_117, animInitialOffsetPosition.f_2);
						}
					
						animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_379, sLocal_381, uLocal_143, fLocal_146, 1f, 2) };
					
						if (func_68(uLocal_112, -526.58f, -1222.79f, 17.46f, 10f, false))
						{
							if (func_47(PLAYER::PLAYER_PED_ID(), 215.68f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -503.46f, -1199.39f, 19.02f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
							else if (func_47(PLAYER::PLAYER_PED_ID(), 122.0371f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -543.35f, -1208.09f, 16.73f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 288.46f, -1256.71f, 28.44f, true) < 5f)
						{
							if (func_47(PLAYER::PLAYER_PED_ID(), 200.8887f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 289.08f, -1286.56f, 28.68f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
							else if (func_47(PLAYER::PLAYER_PED_ID(), 347.8599f, 60f))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 241.22f, -1236.76f, 28.26f, 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 3.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
								TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_117, 0f, 2.5f, 0f), 1f, 20000, 1048576000, 5, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_117), 1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
						}
					
						PED::FORCE_PED_MOTION_STATE(pedLocal_117, joaat("MotionState_Walk"), true, 0, false);
						PED::SET_PED_CAN_RAGDOLL(pedLocal_117, true);
						PED::SET_PED_KEEP_TASK(pedLocal_117, true);
						func_46(&veLocal_134);
						BUILTIN::SETTIMERB(0);
						CAM::STOP_GAMEPLAY_HINT(false);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						
							if (!func_45())
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_118))
							OBJECT::DELETE_OBJECT(&obLocal_118);
					
						if (!PED::IS_PED_INJURED(pedLocal_117))
							PED::SET_PED_MONEY(pedLocal_117, iLocal_362 - (iLocal_362 / 10));
					
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(caLocal_166, false);
						func_44();
						CAM::DESTROY_CAM(caLocal_166, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						
							while (CAM::IS_SCREEN_FADING_IN())
							{
								BUILTIN::WAIT(0);
							}
						}
					
						num4 = iLocal_362 / 100;
						num4 = num4 * 90;
						BUILTIN::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						func_85(false, true, true, false, false, false, false);
						func_3(_GET_CURRENT_PLAYER_CHARACTER(), 1, num4);
						func_298(true);
					}
					else
					{
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
						{
							if (!PED::IS_PED_INJURED(pedLocal_117) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_118, PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::DETACH_ENTITY(obLocal_118, false, true);
								
									if (PED::IS_PED_MALE(pedLocal_117))
										ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_118, pedLocal_117, PED::GET_PED_BONE_INDEX(pedLocal_117, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
									else
										ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_118, pedLocal_117, PED::GET_PED_BONE_INDEX(pedLocal_117, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
							}
						}
					}
					break;
			}
		}
	}

	return;
}

int func_3(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x29F4 (10740)
{
	if (func_37(echParam0) == 3)
		return 0;

	if (func_37(echParam0) == 4)
		return 0;

	return func_4(func_37(echParam0), 0, iParam1, iParam2, false);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A28 (10792)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_36();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_35(99, 1);
					func_51(joaat("SP0_MONEY_TOTAL_SPENT") /* TUNEABLE: SP0_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 1:
					func_51(joaat("SP1_MONEY_TOTAL_SPENT") /* TUNEABLE: SP1_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 2:
					func_51(joaat("SP2_MONEY_TOTAL_SPENT") /* TUNEABLE: SP2_MONEY_TOTAL_SPENT */, iParam3);
					break;
			}
		
			func_19(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_16(5))
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
							func_51(joaat("SP0_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					}
				
					if (func_16(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("SP0_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP0_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP1_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP2_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
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
							func_51(joaat("SP0_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP0_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 1:
							func_51(joaat("SP1_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP1_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 2:
							func_51(joaat("SP2_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP2_MONEY_SPENT_PROPERTY */, iParam3);
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
									func_51(joaat("SP0_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP0_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP1_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP2_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							}
						
							if (func_16(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP0_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP1_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP2_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("SP0_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP0_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 1:
									func_51(joaat("SP1_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP1_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 2:
									func_51(joaat("SP2_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP2_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							}
						
							func_15(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_35(95, iParam3);
					break;
			
				case 1:
					func_35(97, iParam3);
					break;
			
				case 2:
					func_35(96, iParam3);
					break;
			}
		
			func_35(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_7(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_7(num2);
	}

	num6 = Global_62237[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_62237[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_62237[num3] = 2147483647;
				else
					Global_62237[num3] = Global_62237[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_51(joaat("SP0_TOTAL_CASH_EARNED") /* TUNEABLE: SP0_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 1:
					func_51(joaat("SP1_TOTAL_CASH_EARNED") /* TUNEABLE: SP1_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 2:
					func_51(joaat("SP2_TOTAL_CASH_EARNED") /* TUNEABLE: SP2_TOTAL_CASH_EARNED */, iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_62237[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_62237[num3];
			Global_62237[num3] = Global_62237[num3] - iParam3;
		
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
		Global_114963.f_20573.f_233[num3 /*69*/].f_2[Global_114963.f_20573.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114963.f_20573.f_233[num3 /*69*/].f_2[Global_114963.f_20573.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114963.f_20573.f_233[num3 /*69*/].f_2[Global_114963.f_20573.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114963.f_20573.f_233[num3 /*69*/] = Global_114963.f_20573.f_233[num3 /*69*/] + 1;
		Global_114963.f_20573.f_233[num3 /*69*/].f_1 = Global_114963.f_20573.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114963.f_20573.f_233[num3 /*69*/].f_1 > 10)
			Global_114963.f_20573.f_233[num3 /*69*/].f_1 = 0;
	}

	func_6(iParam0);

	if (Global_44921 == 15)
		func_5(false);

	return 1;
}

void func_5(BOOL bParam0) // Position - 0x3027 (12327)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/];
			Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114963.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_62245[i /*3*/][0] = Global_114963.f_20573[i];
		Global_62245.f_31[i /*3*/][0] = Global_114963.f_20573.f_11[i];
		Global_62245.f_62[i /*3*/][0] = Global_114963.f_20573.f_22[i];
		Global_62245.f_93[i /*3*/][0] = Global_114963.f_20573.f_33[i];
		Global_62245.f_124[i /*3*/][0] = Global_114963.f_20573.f_44[i];
		Global_62245.f_155[i /*3*/][0] = Global_114963.f_20573.f_55[i];
		Global_62245.f_186[i /*3*/][0] = Global_114963.f_20573.f_66[i];
		Global_62245.f_217[i /*3*/][0] = Global_114963.f_20573.f_77[i];
		Global_62245.f_248[i /*3*/][0] = Global_114963.f_20573.f_88[i];
	
		if (!bParam0)
		{
			Global_62245[i /*3*/][1] = Global_114963.f_20573[i];
			Global_62245.f_31[i /*3*/][1] = Global_114963.f_20573.f_11[i];
			Global_62245.f_62[i /*3*/][1] = Global_114963.f_20573.f_22[i];
			Global_62245.f_93[i /*3*/][1] = Global_114963.f_20573.f_33[i];
			Global_62245.f_124[i /*3*/][1] = Global_114963.f_20573.f_44[i];
			Global_62245.f_155[i /*3*/][1] = Global_114963.f_20573.f_55[i];
			Global_62245.f_186[i /*3*/][1] = Global_114963.f_20573.f_66[i];
			Global_62245.f_217[i /*3*/][1] = Global_114963.f_20573.f_77[i];
			Global_62245.f_248[i /*3*/][1] = Global_114963.f_20573.f_88[i];
		}
	}

	return;
}

void func_6(int iParam0) // Position - 0x32A9 (12969)
{
	int value;

	value = Global_62237[iParam0];

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

void func_7(int iParam0) // Position - 0x3303 (13059)
{
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
		func_10(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_10(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_10(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_10(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_10(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_10(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_114963.f_20573.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114963.f_20573.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114963.f_20573.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_9() /*5574*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114963.f_20573.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_9() /*5574*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*Canjeaste tu promoción de ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_8(int iParam0) // Position - 0x347A (13434)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*un corte de pelo gratis.*/;
	
		case 1:
			return "COUP_TATTOO" /*un tatuaje gratis.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% de descuento en tu próxima compra en Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10% de descuento en tu próxima compra en LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10% de descuento en tu próxima compra en ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10% de descuento en tus próximos gastos médicos.*/;
	
		case 6:
			return "COUP_SPRUNK" /*una lata gratis de Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*una pintura de vehículo gratis.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10% de descuento en tu próxima compra en ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10% de descuento en tu próxima compra en DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10% de descuento en tu próxima compra en LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10% de descuento en tu próxima compra en southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10% de descuento en tu próxima compra en Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10% de descuento en tu próxima compra en pandmcycles.com.*/;
	
		default:
			break;
	}

	return "";
}

int func_9() // Position - 0x3578 (13688)
{
	int num;

	num = 0;
	return num;
}

void func_10(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3585 (13701)
{
	Hash statName;

	if (iParam0 != 16764)
	{
		statName = func_11(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_11(int iParam0, int iParam1) // Position - 0x35B3 (13747)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_12(iParam1));
}

BOOL func_12(BOOL bParam0) // Position - 0x35C8 (13768)
{
	BOOL flag;
	BOOL flag2;

	flag = bParam0;

	if (flag == -1)
	{
		flag2 = func_13();
	
		if (flag2 > -1)
		{
			Global_2741491 = 0;
			flag = flag2;
		}
		else
		{
			flag = false;
			Global_2741491 = 1;
		}
	}

	return flag;
}

BOOL func_13() // Position - 0x35FC (13820)
{
	return Global_1574928;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3608 (13832)
{
	if (bParam2 == -1)
		bParam2 = func_13();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, bParam2);
	return;
}

void func_15(int iParam0) // Position - 0x3626 (13862)
{
	func_35(93, iParam0);
	func_35(29, iParam0);
	func_35(30, iParam0);
	return;
}

BOOL func_16(int iParam0) // Position - 0x3646 (13894)
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
		num = func_17(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_17(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_17(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_17(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_17(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_17(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114963.f_20573.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_9() /*5574*/].f_681.f_10, iParam0);
}

int func_17(int iParam0, int iParam1) // Position - 0x37E6 (14310)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_11(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, BOOL bParam1) // Position - 0x3815 (14357)
{
	if (bParam1 == -1)
		bParam1 = func_13();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, bParam1);
}

int func_19(BOOL bParam0) // Position - 0x3831 (14385)
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
		func_34(27, value);
	}

	if (value < 200000000)
		return 0;

	func_20(27, 1);
	return 1;
}

int func_20(int iParam0, int iParam1) // Position - 0x38E8 (14568)
{
	if (iParam0 >= 78)
		return 0;

	return func_21(iParam0, iParam1);
}

int func_21(int iParam0, int iParam1) // Position - 0x3903 (14595)
{
	if (func_33(14) && !func_32(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34066 != 0 && !Global_80337)
		return 0;

	if (func_31(&Global_4525223))
	{
		if (func_29(&Global_4525223, iParam0))
			return 0;
	
		if (func_22(&Global_4525223, iParam0))
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

BOOL func_22(var uParam0, int iParam1) // Position - 0x39A0 (14752)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_33(14) && !func_32(iParam1))
		return false;

	if (func_29(uParam0, iParam1))
		return false;

	if (func_28(uParam0) < 0f)
		func_27(uParam0, 0);

	func_25(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_23(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_23(var uParam0, int iParam1) // Position - 0x3A51 (14929)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_33(14) && !func_32(iParam1))
		return 0;

	if (func_29(uParam0, iParam1))
		return 0;

	if (func_28(uParam0) < 0f)
		func_27(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_24(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_24(var uParam0, int iParam1) // Position - 0x3ACC (15052)
{
	return uParam0->[iParam1] == 78;
}

void func_25(var uParam0) // Position - 0x3ADD (15069)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_26(uParam0, i);
	}

	func_27(uParam0, Global_4525222 - 0.5f);
	return;
}

void func_26(var uParam0, int iParam1) // Position - 0x3B11 (15121)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_27(var uParam0, int iParam1) // Position - 0x3B21 (15137)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_28(var uParam0) // Position - 0x3B3E (15166)
{
	return uParam0->f_80;
}

BOOL func_29(var uParam0, int iParam1) // Position - 0x3B4A (15178)
{
	return func_30(uParam0, iParam1) != -1;
}

int func_30(var uParam0, int iParam1) // Position - 0x3B5C (15196)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_31(var uParam0) // Position - 0x3B89 (15241)
{
	return uParam0->f_79 == 1;
}

BOOL func_32(int iParam0) // Position - 0x3B97 (15255)
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

BOOL func_33(int iParam0) // Position - 0x3BE7 (15335)
{
	return Global_44921 == iParam0;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0x3BF5 (15349)
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

void func_35(int iParam0, int iParam1) // Position - 0x3C46 (15430)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60805[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60805[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60805[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60805[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_36() // Position - 0x3CA3 (15523)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH") /* TUNEABLE: SP0_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62237[0] == outValue))
			Global_62237[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH") /* TUNEABLE: SP1_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62237[1] == outValue))
			Global_62237[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH") /* TUNEABLE: SP2_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62237[2] == outValue))
			Global_62237[2] = outValue;
	}

	return;
}

int func_37(eCharacter echParam0) // Position - 0x3D18 (15640)
{
	return Global_2349[echParam0 /*29*/].f_17;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x3D29 (15657)
{
	func_39();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_39() // Position - 0x3D42 (15682)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_40(character) && !func_33(14) || Global_113909)
			{
				if (Global_114963.f_2370.f_539.f_4321 != character && func_40(Global_114963.f_2370.f_539.f_4321))
					Global_114963.f_2370.f_539.f_4322 = Global_114963.f_2370.f_539.f_4321;
			
				Global_114963.f_2370.f_539.f_4323 = character;
				Global_114963.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114963.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114963.f_2370.f_539.f_4323 = Global_114963.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114963.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_40(eCharacter echParam0) // Position - 0x3E3F (15935)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x3E4B (15947)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x3E88 (16008)
{
	if (func_40(character))
		return func_43(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_43(eCharacter echParam0) // Position - 0x3EAD (16045)
{
	return Global_2349[echParam0 /*29*/];
}

void func_44() // Position - 0x3EBC (16060)
{
	Cam cam;

	cam = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, true, 2);
	CAM::SET_CAM_ACTIVE(cam, true);
	return;
}

BOOL func_45() // Position - 0x3EFA (16122)
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON)
		return true;

	return false;
}

void func_46(Vehicle* pveParam0) // Position - 0x3F13 (16147)
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

BOOL func_47(Ped pedParam0, float fParam1, float fParam2) // Position - 0x3F4B (16203)
{
	float num;
	float num2;

	num = fParam1 + (fParam2 / 2f);

	if (num > 360f)
		num = num - 360f;

	num2 = fParam1 - (fParam2 / 2f);

	if (num2 < 0f)
		num2 = num2 + 360f;

	if (!PED::IS_PED_INJURED(pedParam0))
		if (num > num2)
			if (ENTITY::GET_ENTITY_HEADING(pedParam0) < num && ENTITY::GET_ENTITY_HEADING(pedParam0) > num2)
				return true;
			else
				return false;
		else if (ENTITY::GET_ENTITY_HEADING(pedParam0) < num || ENTITY::GET_ENTITY_HEADING(pedParam0) > num2)
			return true;
		else
			return false;

	return false;
}

BOOL func_48() // Position - 0x3FEC (16364)
{
	if (func_49(1000))
	{
		CAM::DO_SCREEN_FADE_OUT(500);
	
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			BUILTIN::WAIT(0);
		}
	
		return true;
	}

	return false;
}

BOOL func_49(int iParam0) // Position - 0x401F (16415)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_50())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_50() // Position - 0x4069 (16489)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_51(Hash hParam0, int iParam1) // Position - 0x409B (16539)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

int func_52(var uParam0, char* sParam1, char* sParam2, var uParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8) // Position - 0x40BE (16574)
{
	var unk;
	var unk12;

	func_63(uParam0, _CHAR_NULL, sParam1, iParam7, iParam8, 0);

	if (iParam6 > 7)
		if (iParam6 < 12)
			iParam6 = 7;

	unk = 10;
	unk12 = 10;
	func_62(2, &unk, &unk12, sParam2, uParam3, sParam4, uParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_53(&unk, &unk12, iParam6, false);
}

int func_53(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x4117 (16663)
{
	int i;

	Global_23024 = 0;

	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam2 > Global_23025)
			{
				if (bParam3 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = false;
					Global_23019 = 0;
					Global_23020 = 0;
				}
				else
				{
					func_61();
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
	
		if (func_60(8, -1))
			return 0;
	
		Global_23099 = { Global_23093 };
		func_59();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24019 = Global_24020;
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_22642.f_370 = Global_24012;
		Global_23019 = Global_23020;
		Global_23021 = Global_23022;
	
		if (Global_23281 == false)
		{
			Global_23177[0 /*6*/] = { Global_23203[0 /*6*/] };
			Global_23177[1 /*6*/] = { Global_23203[1 /*6*/] };
			Global_23229[0 /*6*/] = { Global_23255[0 /*6*/] };
			Global_23229[1 /*6*/] = { Global_23255[1 /*6*/] };
			Global_23190[0 /*6*/] = { Global_23216[0 /*6*/] };
			Global_23190[1 /*6*/] = { Global_23216[1 /*6*/] };
			Global_23242[0 /*6*/] = { Global_23268[0 /*6*/] };
			Global_23242[1 /*6*/] = { Global_23268[1 /*6*/] };
		}
	
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, 0);
		
			if (bParam3)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21649.f_1 > 3)
					return 0;
			}
		
			if (Global_21615 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_57())
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80337)
				{
					if (Global_23281 == false)
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
			}
		
			if (func_56())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
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
			}
		
			func_55();
			Global_23033 = bParam3;
		}
	
		Global_23025 = iParam2;
	
		if (Global_23019 > 0)
		{
			for (i = 0; i < Global_23019; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&Global_22642.f_6[i /*6*/], uParam0->[i], 24);
				TEXT_LABEL_ASSIGN_STRING(&Global_22642.f_187[i /*6*/], uParam1->[i], 24);
			}
		}
	
		Global_21889 = 0;
		func_54();
		return 1;
	}

	if (Global_23023 == 5)
		return 0;

	if (iParam2 < Global_23025 || iParam2 == Global_23025)
		return 0;

	if (iParam2 == 2)
	{
	}
	else
	{
		func_61();
	}

	return 0;
}

void func_54() // Position - 0x4482 (17538)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21891[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23023 = 1;
	return;
}

void func_55() // Position - 0x44B3 (17587)
{
	Global_23076 = Global_23075;
	Global_23070 = Global_23071;
	Global_23117 = { Global_23105 };
	Global_23123 = { Global_23111 };
	Global_23078 = Global_23077;
	Global_23147 = { Global_23129 };
	Global_23153 = { Global_23135 };
	Global_23159 = { Global_23141 };
	Global_23165 = { Global_23171 };
	Global_8817 = Global_8818;
	Global_8819 = Global_8820;
	Global_23034 = Global_23035;
	Global_23036 = Global_23037;
	Global_23038 = { Global_23054 };
	Global_23027 = Global_23028;
	Global_24039 = false;
	Global_23072 = 0;
	Global_23073 = false;
	MISC::CLEAR_BIT(&Global_9503, 16);
	return;
}

BOOL func_56() // Position - 0x4548 (17736)
{
	if (Global_21649.f_1 == true || Global_21649.f_1 == false)
		return true;

	return false;
}

BOOL func_57() // Position - 0x456F (17775)
{
	int num;
	int weaponHash;

	if (Global_80337)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x4608 (17928)
{
	if (func_33(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[0 /*29*/])
				Global_21649 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[1 /*29*/])
				Global_21649 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[2 /*29*/])
				Global_21649 = CHAR_TREVOR;
			else
				Global_21649 = CHAR_MICHAEL;
	}
	else
	{
		Global_21649 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21649 == _CHAR_NULL)
			Global_21649 = CHAR_MULTIPLAYER;
	
		if (Global_80337)
			Global_21649 = CHAR_MULTIPLAYER;
	
		if (Global_21649 > CHAR_MULTIPLAYER)
			Global_21649 = CHAR_MULTIPLAYER;
	}

	return;
}

void func_59() // Position - 0x46AA (18090)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_22312[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22312[i /*10*/].f_1), "", 24);
		Global_22312[i /*10*/].f_7 = 0;
		Global_22312[i /*10*/].f_8 = 0;
	}

	Global_22312.f_161 = -99;
	Global_22312.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x4701 (18177)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677555.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677555.f_1048, iParam0);
}

void func_61() // Position - 0x4739 (18233)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21649.f_1 == 9 || Global_21648 == true)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
		Global_21649.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23023 = 6;
		return;
	}

	return;
}

void func_62(int iParam0, var uParam1, var uParam2, char* sParam3, var uParam4, char* sParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16) // Position - 0x4790 (18320)
{
	Global_23020 = iParam0;
	Global_23030 = false;
	Global_23037 = false;
	Global_23032 = false;
	Global_24014 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
	uParam1->[0] = sParam3;
	uParam2->[0] = uParam4;
	uParam1->[1] = sParam5;
	uParam2->[1] = uParam6;
	uParam1->[2] = iParam7;
	uParam2->[2] = iParam8;
	uParam1->[3] = iParam9;
	uParam2->[3] = iParam10;
	uParam1->[4] = iParam11;
	uParam2->[4] = iParam12;
	uParam1->[5] = iParam13;
	uParam2->[5] = iParam14;
	uParam1->[6] = iParam15;
	uParam2->[6] = iParam16;
	return;
}

void func_63(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x4818 (18456)
{
	Global_22477 = { *uParam0 };
	Global_8818 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23093, sParam2, 24);
	Global_24012 = iParam5;

	if (iParam3 == 0)
	{
		Global_24010 = 1;
		Global_24008 = 0;
	}
	else
	{
		Global_24010 = 0;
		Global_24008 = 1;
	}

	if (iParam4 == 0)
	{
		Global_24011 = 1;
		Global_24009 = 0;
	}
	else
	{
		Global_24011 = 0;
		Global_24009 = 1;
	}

	return;
}

BOOL func_64(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x486E (18542)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_65(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x48B5 (18613)
{
	Vehicle playersLastVehicle;
	Vector3 offsetFromEntityInWorldCoords;
	Vector3 outPosition;
	var minimum;
	float maximum;
	int num;
	int num2;
	int hit;
	var surfaceNormal;
	var endCoords;
	Vector3 vector;
	Vector3 vector2;
	var entityHit;
	int shapeTestHandle;

	num = 0;
	num2 = 1;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &minimum, &maximum);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, 3, &outPosition, 1, 1077936128, 0);

	if (BUILTIN::VDIST(vParam0, -3039.6548f, 602.4346f, 6.5719f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { -3045.49f, 604.46f, 7.02f };
		num = 8;
	}
	else if (BUILTIN::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { 278.97f, -1255.06f, 28.88f };
		num = 8;
	}

	while (num < 8)
	{
		switch (num)
		{
			case 0:
				if (BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f)) < BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_66(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_66(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 2;
						}
						else
						{
							num2 = num2 + 1;
							num = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 2;
						}
						else
						{
							num2 = num2 + 1;
							num = 0;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 2:
				if (BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f)) < BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_66(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_66(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 4;
						}
						else
						{
							num2 = num2 + 1;
							num = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 4;
						}
						else
						{
							num2 = num2 + 1;
							num = 2;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 4:
				if (BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f)) < BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_66(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_66(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 6;
						}
						else
						{
							num2 = num2 + 1;
							num = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 6;
						}
						else
						{
							num2 = num2 + 1;
							num = 4;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 6:
				if (BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f)) < BUILTIN::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_66(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_66(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 8;
						}
						else
						{
							num2 = num2 + 1;
							num = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 8;
						}
						else
						{
							num2 = num2 + 1;
							num = 6;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 8:
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_66(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6) // Position - 0x4EB6 (20150)
{
	float num;
	float value;
	float num2;
	float num3;
	var unk3;

	value = fParam3;
	num2 = BUILTIN::COS(value);
	num3 = BUILTIN::SIN(value);
	num = (fParam4 * num2) + (fParam4.f_1 * num3);
	num.f_1 = (fParam4.f_1 * num2) - (fParam4 * num3);
	unk3 = { uParam0 + num };
	return unk3;
}

BOOL func_67(Vehicle veParam0) // Position - 0x4F03 (20227)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL func_68(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x4F2D (20269)
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_69(Ped pedParam0, var uParam1, var uParam2, char* sParam3, char* sParam4) // Position - 0x4FA8 (20392)
{
	int num;
	int num2;
	int num3;
	float num4;
	float heading;
	int shapeTestHandle;
	int hit;
	var surfaceNormal;
	var endCoords;
	var animInitialOffsetPosition;
	Vector3 vector;
	var entityHit;

	num = 0;
	num2 = 0;
	num3 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = func_71(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	num4 = func_71(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	heading = func_71(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	vector = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
		animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	else
		animInitialOffsetPosition = { *uParam1 + { 0f, 5f, 5f } };

	while (num < 2)
	{
		switch (num)
		{
			case 0:
				if (num2 > 20)
				{
					uParam2->f_2 = func_70(ENTITY::GET_ENTITY_COORDS(pedParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false), uParam2->f_2, vector) };
					num = 2;
				}
				else
				{
					shapeTestHandle = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, animInitialOffsetPosition + { -1f, 0f, 0f }, 0.5f, 17, 0, 4);
					num = num + 1;
				}
				break;
		
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (endCoords.f_2 > uParam1->f_2 + 8.5f)
						{
							num = num + 1;
						}
						else
						{
							if (num2 <= 3)
							{
								heading = heading + 7.5f;
							}
							else
							{
								heading = num4 - (7.5f * (float)num3);
								num3 = num3 + 1;
							}
						
							*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), heading, vector) };
							num2 = num2 + 1;
							num = 0;
						}
					}
					else
					{
						if (num2 > 0)
							uParam2->f_2 = func_70(animInitialOffsetPosition + { -0.75f, 0f, 0f }, *uParam1, 1);
					
						num = num + 1;
					}
				}
				break;
		
			case 2:
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

float func_70(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x5160 (20832)
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

float func_71(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x51C5 (20933)
{
	var entityCoords;
	var entityCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };
	return func_70(entityCoords, entityCoords2, iParam2);
}

void func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x51F1 (20977)
{
	BOOL flag;
	float dx;
	float headingFromVector2d;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_73(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_73(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
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

BOOL func_73(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x52F2 (21234)
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

void func_74(int iParam0) // Position - 0x5379 (21369)
{
	if (func_79())
		return;

	if (!(Global_21649.f_1 == true))
	{
		if (func_78(0))
			func_75(iParam0);
	
		MISC::SET_BIT(&Global_9503, 2);
	}

	return;
}

void func_75(int iParam0) // Position - 0x53AC (21420)
{
	if (func_79())
		return;

	if (Global_21882)
		if (func_77())
			func_76(true, true);
		else
			func_76(false, false);

	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23023 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_56())
		Global_21649.f_1 = 3;

	return;
}

void func_76(BOOL bParam0, BOOL bParam1) // Position - 0x5436 (21558)
{
	if (bParam0)
	{
		if (func_78(0))
		{
			Global_21882 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
		
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == true)
	{
		Global_21882 = false;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
	}

	return;
}

BOOL func_77() // Position - 0x54AA (21674)
{
	return IS_BIT_SET(Global_1964670, 5);
}

BOOL func_78(int iParam0) // Position - 0x54B8 (21688)
{
	if (iParam0 == 1)
		if (Global_21649.f_1 > 3)
			if (IS_BIT_SET(Global_9502, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21649.f_1 > 3)
		return true;

	return false;
}

BOOL func_79() // Position - 0x550F (21775)
{
	return IS_BIT_SET(Global_1964670, 19);
}

void func_80() // Position - 0x551E (21790)
{
	Global_21889 = 0;
	func_81();
	return;
}

void func_81() // Position - 0x552E (21806)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}

	return;
}

BOOL func_82(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x554F (21839)
{
	func_84(bParam5, bParam6);
	func_83(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_83(Vehicle veParam0) // Position - 0x55A6 (21926)
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_84(BOOL bParam0, BOOL bParam1) // Position - 0x55D2 (21970)
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
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, 389, true);
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

void func_85(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5723 (22307)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_93(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_56())
				Global_21649.f_1 = 3;
		
			Global_23023 = 5;
		}
	
		func_92(true, bParam3, bParam2, false);
		Global_65069 = true;
		Global_77400 = PV_COMP_BERD;
		Global_80335 = PV_COMP_BERD;
	}
	else
	{
		func_93(0);
		HUD::THEFEED_RESUME();
		Global_65069 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_92(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_90(PLAYER::PLAYER_ID()) && !func_87(PLAYER::PLAYER_ID(), 0) && !func_86() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_90(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80335 = PV_COMP_HEAD;
	}

	return;
}

BOOL func_86() // Position - 0x5872 (22642)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

BOOL func_87(Player plParam0, int iParam1) // Position - 0x588C (22668)
{
	BOOL flag;

	if (!func_89(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_88(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_88(BOOL bParam0, BOOL bParam1) // Position - 0x58E5 (22757)
{
	eCharacter character;
	BOOL flag;

	flag = bParam0;

	if (flag == -1)
		flag = func_13();

	if (Global_1575075[flag] == true)
	{
		bParam1;
		character = CHAR_MIKE_FRANK_CONF;
	}
	else
	{
		character = Global_1574922[flag];
		bParam1;
	}

	return character;
}

BOOL func_89(Player plParam0) // Position - 0x5926 (22822)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_90(Player plParam0) // Position - 0x5948 (22856)
{
	if (func_87(plParam0, 0))
		return true;

	if (func_91())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_91() // Position - 0x5987 (22919)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_92(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5995 (22933)
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

void func_93(int iParam0) // Position - 0x59C8 (22984)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 13);
	else
		MISC::CLEAR_BIT(&Global_9502, 13);

	return;
}

void func_94() // Position - 0x59EB (23019)
{
	Global_21889 = 0;
	func_61();
	return;
}

BOOL func_95() // Position - 0x59FB (23035)
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_96() // Position - 0x5A1D (23069)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (func_95())
			return true;

	return false;
}

BOOL func_97(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A3E (23102)
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

BOOL func_98(int iParam0) // Position - 0x5B23 (23331)
{
	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_100(iParam0));
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x5B35 (23349)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_100(int iParam0) // Position - 0x5B48 (23368)
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Varios eventos ocurren en San Andreas todos los días. Estos eventos aparecerán en el radar cuando estés cerca.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Los íconos intermitentes azules y rojos indican situaciones en San Andreas en las que puedes participar.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*Si recuperas un artículo robado, puedes quedártelo o devolverlo a cambio de una recompensa.*/;
			break;
	}

	return str;
}

BOOL func_101() // Position - 0x5B8B (23435)
{
	switch (iLocal_133)
	{
		case 1:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -190.81525f, -801.3224f, 25.454014f, -214.8212f, -866.64716f, 35.0318f, 40f, false, true, 0))
				return true;
			break;
	
		case 2:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 270.58014f, -1290.9543f, 24.165716f, 270.499f, -1238.3113f, 34.52738f, 58.25f, false, true, 0))
				return true;
			break;
	
		case 3:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3038.9868f, 606.4774f, 2.589385f, -3057.0386f, 599.7103f, 12.709482f, 19.25f, false, true, 0))
				return true;
			break;
	
		case 4:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.85811f, 6619.894f, 30.31941f, 183.95216f, 6632.882f, 34.060883f, 22.25f, false, true, 0))
				return true;
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -9.663248f, -938.21674f, 24.290241f, 48.12534f, -959.4428f, 34.609818f, 7.5f, false, true, 0))
				return true;
			break;
	
		case 8:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 283.0487f, -923.3091f, 24.139559f, 301.367f, -871.6924f, 34.4707f, 6.75f, false, true, 0))
				return true;
			break;
	
		case 11:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1053.7991f, -772.76013f, 53.312317f, 1112.018f, -772.2864f, 60.161556f, 14.75f, false, true, 0))
				return true;
			break;
	
		case 16:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2097.2097f, -292.7766f, 8.141721f, -2101.9082f, -345.40997f, 18.232346f, 54.25f, false, true, 0))
				return true;
			break;
	
		case 17:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.68414f, -1117.7812f, 5.659806f, -820.5555f, -1080.5848f, 16.38764f, 29.5f, false, true, 0))
				return true;
			break;
	
		case 18:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.17456f, -820.053f, 18.067131f, -670.6583f, -821.2724f, 29.66125f, 8f, false, true, 0))
				return true;
			break;
	
		case 19:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -379.95554f, 6033.261f, 29.748749f, -394.29138f, 6047.678f, 33.998596f, 7f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -393.64215f, 6056.547f, 29.750107f, -402.48337f, 6047.8174f, 33.993122f, 17.5f, false, true, 0))
				return true;
			break;
	
		case 22:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.33798f, -833.5905f, 26.651785f, -330.661f, -827.2508f, 38.649826f, 16.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -294.1309f, -836.8602f, 26.72095f, -284.6938f, -814.23303f, 37.38612f, 11f, false, true, 0))
				return true;
			break;
	
		case 23:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.93619f, -689.096f, 28.569336f, -278.4698f, -682.0773f, 38.52502f, 9.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -253.3138f, -687.66284f, 28.561104f, -247.23668f, -703.1184f, 38.814396f, 9.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -255.67087f, -726.27423f, 28.518696f, -247.23668f, -703.1184f, 38.814396f, 9.5f, false, true, 0))
				return true;
			break;
	
		case 25:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 114.26407f, -9.324284f, 62.788185f, 75.47891f, 4.897117f, 73.96004f, 7f, false, true, 0))
				return true;
			break;
	
		case 30:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -544.52106f, -1200.0063f, 12.879658f, -509.39105f, -1216.7723f, 23.725426f, 41f, false, true, 0))
				return true;
			break;
	
		case 31:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2945.1323f, 491.4792f, 13.289896f, -2971.825f, 492.91013f, 18.067097f, 10f, false, true, 0))
				return true;
			break;
	
		default:
			break;
	}

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		return true;

	return false;
}

void func_102() // Position - 0x6066 (24678)
{
	var outValue;

	if (!bLocal_164)
	{
		if (bLocal_355)
		{
			func_110();
		}
		else
		{
			if (!PED::IS_PED_INJURED(pedLocal_116))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_116))
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_116, 25f, 25f, 25f, false, true, 0))
						bLocal_355 = true;
			else
				bLocal_355 = true;
		
			func_120(blLocal_120, &uLocal_131);
		}
	
		if (!bLocal_356)
		{
			if (bLocal_159)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_158))
				{
					func_51(joaat("RC_WALLETS_RECOVERED") /* TUNEABLE: RC_WALLETS_RECOVERED */, 1);
					STATS::STAT_GET_INT(joaat("RC_WALLETS_RECOVERED") /* TUNEABLE: RC_WALLETS_RECOVERED */, &outValue, -1);
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 250);
					func_103(2);
					bLocal_164 = true;
				}
				else if (HUD::DOES_BLIP_EXIST(blLocal_121))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(pkLocal_158)) > 150f)
						if (PED::IS_PED_INJURED(pedLocal_117))
							func_280();
						else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_117, true)) > 100f)
							func_280();
				}
			}
		}
	}

	return;
}

void func_103(int iParam0) // Position - 0x616F (24943)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114963.f_25004.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_100(iParam0), -1);
					Global_114963.f_25004.f_2 = Global_114963.f_25004.f_2 + 1;
					MISC::SET_BIT(&Global_114959, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_114959, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_100(iParam0), -1);
					Global_114963.f_25004.f_3 = Global_114963.f_25004.f_3 + 1;
					MISC::SET_BIT(&Global_114959, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_114959, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_100(iParam0), -1);
					Global_114963.f_25004.f_4 = Global_114963.f_25004.f_4 + 1;
					MISC::SET_BIT(&Global_114959, 2);
				}
			}
			break;
	}

	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x624A (25162)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_105(var uParam0) // Position - 0x6261 (25185)
{
	*uParam0 = -99;
	return;
}

Blip func_106(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x626F (25199)
{
	iParam2 = iParam2;
	return func_107(pedParam0, bParam1, 145);
}

Blip func_107(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x6285 (25221)
{
	Blip blip;

	blip = func_108(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2349[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2349[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_108(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x62CF (25295)
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

var func_109(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6373 (25459)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_110() // Position - 0x638A (25482)
{
	Hash pickupHash;
	int address;

	pickupHash = joaat("PICKUP_MONEY_PURSE");

	if (!bLocal_159)
	{
		MISC::SET_BIT(&address, 3);
		MISC::SET_BIT(&address, 4);
		MISC::SET_BIT(&address, 1);
		pkLocal_158 = OBJECT::CREATE_PICKUP(pickupHash, PED::GET_DEAD_PED_PICKUP_COORDS(pedLocal_116, 1067030938, 1069547520), address, iLocal_362, true, hLocal_170);
		bLocal_159 = true;
		blLocal_121 = func_111(pkLocal_158);
		_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_348, 4, 0, 0, 0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_120))
			HUD::REMOVE_BLIP(&blLocal_120);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117))
			TASK::CLEAR_PED_TASKS(pedLocal_117);
	}
	else
	{
		if (!bLocal_160)
		{
			if (!func_184(pedLocal_117, SCRIPT_TASK_PERFORM_SEQUENCE) && !PED::IS_PED_INJURED(pedLocal_117))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
			
				if (!ENTITY::IS_ENTITY_AT_COORD(pedLocal_117, uLocal_371, 0.5f, 0.5f, 0.5f, false, true, 0))
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_371, 1f, 20000, 1193033728, 1056964608);
			
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 1090519040, -2f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 1090519040, -2f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 1090519040, -2f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
			}
		}
	
		if (bLocal_160)
		{
			if (!bLocal_164)
			{
				if (!PED::IS_PED_INJURED(pedLocal_117))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_117, sLocal_162, "pickup_low", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_117, sLocal_162, "pickup_low") > 0.35f)
						{
							if (OBJECT::DOES_PICKUP_EXIST(pkLocal_158))
							{
								_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_349, 4, 0, 0, 0);
								OBJECT::REMOVE_PICKUP(pkLocal_158);
								PED::SET_PED_MONEY(pedLocal_117, iLocal_362);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_117, false);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_117);
								func_298(true);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_117, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
					{
						TASK::CLEAR_PED_TASKS(pedLocal_117);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
						TASK::TASK_PLAY_ANIM(0, sLocal_162, "pickup_low", 1090519040, -1056964608, -1, 0, 0, false, false, false);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, SLF_WHILE_NOT_IN_FOV, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
						PED::SET_PED_KEEP_TASK(pedLocal_117, true);
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(pedLocal_117))
		{
			if (OBJECT::DOES_PICKUP_EXIST(pkLocal_158))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_117, OBJECT::GET_PICKUP_COORDS(pkLocal_158), 10f, 10f, 7f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_117);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_158), 1f, 20000, 1f, 512, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_158), 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_162, "pickup_low", 1090519040, -1056964608, -1, 0, 0, false, false, false);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, SLF_WHILE_NOT_IN_FOV, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
					PED::SET_PED_KEEP_TASK(pedLocal_117, true);
					bLocal_160 = true;
				}
			}
		}
	}

	return;
}

Blip func_111(Pickup pkParam0) // Position - 0x6693 (26259)
{
	return func_112(pkParam0);
}

Blip func_112(Pickup pkParam0) // Position - 0x66A1 (26273)
{
	Blip blip;

	if (!OBJECT::DOES_PICKUP_EXIST(pkParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_PICKUP(pkParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	return blip;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x66D9 (26329)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_114() // Position - 0x66FA (26362)
{
	BOOL flag;
	int navmeshRouteResult;

	flag = false;

	switch (iLocal_126)
	{
		case 1:
		case 2:
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_116, PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_116);
				flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false) && PED::IS_PED_IN_VEHICLE(pedLocal_116, veLocal_134, false))
				if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(veLocal_134))
					if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_134))
						flag = true;
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false) || !func_184(pedLocal_116, SCRIPT_TASK_VEHICLE_MISSION))
				flag = true;
		
			if (!PED::IS_PED_FLEEING(pedLocal_116))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_VEHICLE_MISSION) == 7)
					flag = true;
		
			if (flag)
			{
				if (!bLocal_155)
				{
					if (PED::IS_PED_IN_VEHICLE(pedLocal_116, veLocal_134, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_123);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_123);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_116, iLocal_123);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_123);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_123);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_123);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_116, iLocal_123);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_123);
					}
				
					navmeshRouteResult = TASK::GET_NAVMESH_ROUTE_RESULT(pedLocal_116);
				
					if (navmeshRouteResult == 2)
					{
						TASK::CLEAR_PED_TASKS(pedLocal_116);
					
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
							TASK::TASK_COMBAT_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 0, 16);
					
						bLocal_155 = true;
					}
				}
			}
			break;
	}

	return;
}

BOOL func_115() // Position - 0x6888 (26760)
{
	if (!PED::IS_PED_INJURED(pedLocal_116))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_116, 180f, 180f, 50f, false, true, 0) || !ENTITY::IS_ENTITY_OCCLUDED(pedLocal_116))
		{
			func_116(blLocal_120, pedLocal_116, 180f, 1061158912, false);
			return true;
		}
		else
		{
			if (uLocal_176[2 /*10*/].f_7)
				func_187(&uLocal_176, 2);
		
			PED::DELETE_PED(&pedLocal_116);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false))
				if (ENTITY::IS_ENTITY_OCCLUDED(veLocal_134))
					VEHICLE::DELETE_VEHICLE(&veLocal_134);
		}
	}
	else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_116, false)) < 300f)
	{
		return true;
	}

	return false;
}

void func_116(Blip blParam0, Ped pedParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0x6935 (26933)
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = BUILTIN::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
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
			else if (ENTITY::IS_ENTITY_A_PED(pedParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = BUILTIN::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
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

void func_117(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x6A8E (27278)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_118(iParam2), 1);
	return;
}

char* func_118(int iParam0) // Position - 0x6AA5 (27301)
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

float func_119(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x6C9A (27802)
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

void func_120(Blip blParam0, var uParam1) // Position - 0x6CF8 (27896)
{
	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(blParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(blParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(blParam0, false);
				HUD::SET_BLIP_COLOUR(blParam0, 1);
			}
		
			*uParam1 = MISC::GET_GAME_TIMER();
		}
	
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_121(0))
			func_103(1);
	}

	return;
}

BOOL func_121(int iParam0) // Position - 0x6D56 (27990)
{
	return IS_BIT_SET(Global_114959, iParam0);
}

void func_122() // Position - 0x6D65 (28005)
{
	switch (iLocal_126)
	{
		case 1:
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false))
			{
				if (bLocal_355)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_116, veLocal_134) || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_VEHICLE_MISSION) == 1)
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_116, veLocal_134, uLocal_112, 8, 35f, 786469, 10f, 10f, true);
					else
						TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
				else
				{
					if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(veLocal_134))
						VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(veLocal_134, 0.1f, 1000, false, false, false, -1);
				
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_116, veLocal_134, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 8, 35f, 786469, 10f, 10f, true);
				}
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			break;
	
		case 4:
			if (!bLocal_355)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 182.61f, 6637.91f, 30.54f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 240.53f, 6694.1f, 28.62f, 3f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_116, iLocal_122);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			break;
	
		default:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -3044.11f, 594.34f, 6.73f, true) < 5f)
			{
				TASK::TASK_SMART_FLEE_COORD(pedLocal_116, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);
			}
			else if (bLocal_355)
			{
				TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(pedLocal_116, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 300f, -1, false, false);
			}
			break;
	}

	if (!PED::IS_PED_INJURED(pedLocal_116))
		PED::SET_PED_KEEP_TASK(pedLocal_116, true);

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6F5C (28508)
{
	func_63(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23030 = false;
	Global_23032 = false;
	Global_23037 = false;
	Global_24014 = 0;
	Global_24016 = false;
	Global_24020 = 0;
	Global_2883585 = 0;
	return func_124(sParam2, iParam3, false);
}

BOOL func_124(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x6FAA (28586)
{
	Global_23024 = 0;

	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam1 > Global_23025)
			{
				if (Global_23030 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = false;
					Global_23019 = 0;
					Global_23020 = 0;
					Global_23034 = false;
					Global_23033 = false;
					Global_21648 = false;
				}
				else
				{
					func_61();
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
	
		if (func_60(8, -1))
			return 0;
	
		Global_23099 = { Global_23093 };
		func_59();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_24019 = Global_24020;
		Global_22642.f_370 = Global_24012;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_23019 = Global_23020;
	
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21649.f_1 > 3)
					return 0;
			}
		
			if (Global_21615 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_57())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80337)
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
		
			if (func_56())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
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
			
				if (IS_BIT_SET(Global_9502, 9))
					return 0;
			}
		
			func_55();
			Global_23033 = bParam2;
		}
	
		Global_23025 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_54();
		func_125();
		return 1;
	}

	if (Global_23023 == 5)
		return 0;

	if (iParam1 < Global_23025 || iParam1 == Global_23025)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_61();
	}

	return 0;
}

void func_125() // Position - 0x7278 (29304)
{
	if (!func_126())
		return;

	if (Global_23029)
	{
		TEXT_LABEL_COPY(&(Global_1979099.f_1), { Global_22642 }, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}

	return;
}

BOOL func_126() // Position - 0x72AF (29359)
{
	if (!Global_262145.f_28486)
		return false;

	if (!Global_80337)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_127(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_127(Player plParam0) // Position - 0x7312 (29458)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_129(8))
			return true;
	
		if (Global_2733190.f_5975.f_1 > 0)
			return true;
	}

	return func_128(plParam0, 20);
}

BOOL func_128(Player plParam0, int iParam1) // Position - 0x7349 (29513)
{
	return IS_BIT_SET(Global_1892925[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_129(int iParam0) // Position - 0x7361 (29537)
{
	return IS_BIT_SET(Global_2733190.f_5964, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x7373 (29555)
{
	return -1;
}

BOOL func_131() // Position - 0x737C (29564)
{
	BOOL flag;
	Vector3 vector;
	Vector3 vector2;

	vector = { 6f, 6f, 6f };
	vector2 = { -6f, -6f, -6f };

	if (!PED::IS_PED_INJURED(pedLocal_117))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_117))
			{
				iLocal_128 = iLocal_128 + 1;
			
				if (iLocal_128 > 60)
					flag = true;
			}
			else
			{
				iLocal_128 = 0;
			}
		}
	
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_117, 31086, 0f, 0f, 0f), 2f, true))
			flag = true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_117, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_117, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			flag = true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_117, 31086, 0f, 0f, 0f), 12f))
			flag = true;
	
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_117, 31086, 0f, 0f, 0f), 50f))
			flag = true;
	}

	if (flag)
	{
		if (!func_133())
		{
		}
		else
		{
			flag = false;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_117, SCRIPT_TASK_COWER) != 1)
				if (func_132(pedLocal_117))
					TASK::TASK_COWER(pedLocal_117, 2000);
		}
	}

	return flag;
}

BOOL func_132(Ped pedParam0) // Position - 0x74CD (29901)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_133() // Position - 0x74ED (29933)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_116))
		if (func_119(pedLocal_117, pedLocal_116, true) < 22f)
			return true;

	return false;
}

BOOL func_134() // Position - 0x7515 (29973)
{
	BOOL flag;

	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_117))
	{
		if (PED::IS_PED_INJURED(pedLocal_117))
		{
			flag = true;
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_117, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_RAGDOLL(pedLocal_117))
			{
				flag = true;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_117);
			}
		
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_117, true), 1f, true))
				flag = true;
		
			if (func_135(pedLocal_117, false, 1116471296, 1126825984, false, true, false, false))
				flag = true;
		}
	}

	if (flag)
	{
		if (func_133())
		{
			flag = false;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_117, SCRIPT_TASK_COWER) != 1)
				if (func_132(pedLocal_117))
					TASK::TASK_COWER(pedLocal_117, 2000);
		}
		else if (!PED::IS_PED_INJURED(pedLocal_116))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_116, SCRIPT_TASK_SMART_FLEE_PED) == 7)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_AlwaysFlee, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_Aggressive, false);
				TASK::TASK_SMART_FLEE_PED(pedLocal_116, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
		}
	}

	return flag;
}

BOOL func_135(Ped pedParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x75FA (30202)
{
	float num;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (func_149(pedParam0, bParam1, bParam5, bParam6, bParam7))
			return true;
	
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				num = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			
				if ((num * num) + (num.f_1 * num.f_1) + (num.f_2 * num.f_2) <= 5f)
					return func_148(PLAYER::PLAYER_PED_ID(), pedParam0, iParam2);
			}
		}
	
		if (bParam4)
			return false;
		else if (func_136(pedParam0, iParam3))
			return true;
	}

	return false;
}

BOOL func_136(Ped pedParam0, int iParam1) // Position - 0x76B5 (30389)
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		if (func_147(pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, xSize, xSize, xSize, false, true, 0))
				if (func_137(pedParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_137(Ped pedParam0, int iParam1) // Position - 0x772B (30507)
{
	return func_138(pedParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

BOOL func_138(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x7743 (30531)
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_146(pedParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_145(&iLocal_66[num /*4*/]);
	
		return false;
	}

	if (!func_142(pedParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_141();
	
		if (num == -1)
			return false;
	
		iLocal_66[num /*4*/].f_1 = pedParam0;
		iLocal_66[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f) };
	flag = func_139(&iLocal_66[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_66[num /*4*/].f_3), pedParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_66[num /*4*/].f_3 < iParam4;
}

BOOL func_139(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Ped pedParam6, int iParam7) // Position - 0x7804 (30724)
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_140(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, pedParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_107)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_107)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_140(Ped pedParam0, int iParam1) // Position - 0x7930 (31024)
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_141() // Position - 0x79F5 (31221)
{
	int i;

	for (i = 0; i < iLocal_66; i = i + 1)
	{
		if (iLocal_66[i /*4*/] == 0 && iLocal_66[i /*4*/].f_1 == 0 && iLocal_66[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_142(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0x7A3F (31295)
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_144(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_144(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_143(entityForwardVector, unk);

	if (num <= BUILTIN::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_143(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x7AD0 (31440)
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_144(float fParam0, var uParam1, var uParam2) // Position - 0x7AF1 (31473)
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_145(var uParam0) // Position - 0x7B30 (31536)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_146(Ped pedParam0, Ped pedParam1) // Position - 0x7B4B (31563)
{
	int i;

	for (i = 0; i < iLocal_66; i = i + 1)
	{
		if (iLocal_66[i /*4*/].f_1 == pedParam0 && iLocal_66[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

BOOL func_147(Ped pedParam0) // Position - 0x7B8A (31626)
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

BOOL func_148(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x7BB2 (31666)
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > BUILTIN::COS(iParam2);
}

BOOL func_149(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7BF9 (31737)
{
	float radius;
	float num;
	int weaponHash;

	radius = 8f;
	num = 15f;

	if (bParam1 == false)
	{
		radius = 1.86f;
		num = 1.86f;
	}

	if (bParam2)
		radius = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == joaat("WEAPON_PETROLCAN"))
		{
			radius = 3f;
			num = 3f;
		}
	
		if (!bParam2)
		{
			if (func_153(pedParam0, bParam1, radius, num))
				return true;
		
			if (func_150(pedParam0, num, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), radius, true))
						return true;
			}
			else
			{
				if (bParam1)
				{
					radius = 1.86f;
					num = 1.86f;
				}
			
				if (func_153(pedParam0, bParam1, radius, num))
					return true;
			}
		
			if (func_150(pedParam0, num, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_150(Ped pedParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7CF4 (31988)
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	num = { entityCoords };
	entityCoords = entityCoords - fParam1;
	entityCoords.f_1 = entityCoords.f_1 - fParam1;
	entityCoords.f_2 = entityCoords.f_2 - fParam1;
	num = num + fParam1;
	num.f_1 = num.f_1 + fParam1;
	num.f_2 = num.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(pedParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
				if (func_151(pedParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_151(pedParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords, num, true))
			return true;
	}

	return false;
}

BOOL func_151(Ped pedParam0, float fParam1) // Position - 0x7E00 (32256)
{
	var outProjectile;
	var outCoords;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_GRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_BZGAS"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam0, joaat("WEAPON_MOLOTOV"), fParam1, &outCoords, &outProjectile, false))
		if (func_152(pedParam0, outCoords, 90f, 0))
			return true;

	return false;
}

BOOL func_152(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x7E95 (32405)
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_144(uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_144(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_143(entityForwardVector, unk);

	if (num <= BUILTIN::COS(fParam4 / 2f))
		return false;

	return true;
}

BOOL func_153(Ped pedParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0x7F23 (32547)
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, fParam3, fParam3, fParam3, false, true, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam2, true))
		return true;

	return false;
}

void func_154() // Position - 0x7F6B (32619)
{
	if (bLocal_159 || ENTITY::IS_ENTITY_DEAD(pedLocal_116, false))
		func_182(&uLocal_389, 0, false, false);
	else
		func_155(&uLocal_389, pedLocal_116, "ATM_CHASEHINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el ladrón.*/, 0, true, true, true);

	return;
}

void func_155(var uParam0, Ped pedParam1, char* sParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7FA3 (32675)
{
	func_156(uParam0, pedParam1, sParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_156(var uParam0, Ped pedParam1, char* sParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7FBD (32701)
{
	func_157(uParam0, pedParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_157(var uParam0, Ped pedParam1, float fParam2, float fParam3, float fParam4, char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x7FDA (32730)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_182(uParam0, 0, false, false);

	uParam0->f_6 = 2;
	func_158(uParam0, pedParam1, fParam2, sParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_158(var uParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4, char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x8014 (32788)
{
	char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrar.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_181();

	if (func_180(pedParam1) && ENTITY::IS_ENTITY_VISIBLE(pedParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_175(uParam0, bParam7, bParam9, false))
				func_172(uParam0, pedParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_162(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
							{
								_DISPLAY_HELP_TEXT(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/, string2))
									func_161(true);
							}
						}
					}
				}
			}
			else if (func_162(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/, string2))
								func_161(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_182(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_182(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_182(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_182(uParam0, string2, true, false);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_182(uParam0, string2, true, false);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_182(uParam0, string2, true, false);
		
			if (!func_175(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_160(uParam0))
					func_159(uParam0);
		}
	}
	else
	{
		func_182(uParam0, string2, false, false);
	}

	return;
}

void func_159(var uParam0) // Position - 0x8388 (33672)
{
	if (func_180(PLAYER::PLAYER_PED_ID()))
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

BOOL func_160(var uParam0) // Position - 0x83F1 (33777)
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

int func_161(BOOL bParam0) // Position - 0x841C (33820)
{
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_114963.f_10058.f_100 = Global_114963.f_10058.f_100 + 1;
		
			return Global_114963.f_10058.f_100;
	
		case 4:
			if (bParam0)
				Global_114963.f_10058.f_101 = Global_114963.f_10058.f_101 + 1;
		
			return Global_114963.f_10058.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_114963.f_10058.f_102 = Global_114963.f_10058.f_102 + 1;
		
			return Global_114963.f_10058.f_102;
	
		default:
			break;
	}

	return 3;
}

BOOL func_162(char* sParam0) // Position - 0x84C6 (33990)
{
	if (!func_163(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44921)
	{
		case 0:
		case 3:
			if (func_161(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_161(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_161(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_163(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x855F (34143)
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

	if (func_78(0))
		return false;

	if (func_171())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_77397)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return false;

	if (Global_62244)
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

	if (func_170() || func_169(*Global_4718592.f_197291) || func_168())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_166(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1963699)
		return false;

	if (func_164(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_164(ePedComponentType epctParam0) // Position - 0x87B8 (34744)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID;
		else if (Global_1575095 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID;

	return false;
}

ePedComponentType _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x881E (34846)
{
	ePedComponentType type;

	type = player;

	if (type != PV_COMP_INVALID)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return PV_COMP_HEAD;
		
			if (bUnk)
				if (type == Global_2673273.f_3)
					return Global_2673273.f_2;
				else if (Global_2658293[type /*468*/] != 4)
					return PV_COMP_HEAD;
		
			return PV_COMP_BERD;
		}
	}

	return PV_COMP_HEAD;
}

BOOL func_166(Vehicle veParam0, int iParam1) // Position - 0x887E (34942)
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

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x88E0 (35040)
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

BOOL func_168() // Position - 0x8965 (35173)
{
	return Global_2685152.f_20;
}

ePedComponentType func_169(int iParam0) // Position - 0x8973 (35187)
{
	return iParam0 == 51;
}

ePedComponentType func_170() // Position - 0x8980 (35200)
{
	return Global_2685152.f_19;
}

BOOL func_171() // Position - 0x898E (35214)
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

void func_172(var uParam0, Ped pedParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x89A3 (35235)
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1579271 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		func_182(uParam0, 0, false, false);

	if (func_64(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_173())
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

	CAM::SET_GAMEPLAY_ENTITY_HINT(pedParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_173() // Position - 0x8AB4 (35508)
{
	return func_174(PLAYER::PLAYER_ID());
}

BOOL func_174(Player plParam0) // Position - 0x8AC4 (35524)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_175(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8AE3 (35555)
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
					if (func_179(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_178(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_179(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_160(uParam0))
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
						if (!func_179(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_178(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_179(bParam1, bParam2, bParam3))
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
					if (!func_179(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_178(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_178(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_179(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_177(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_176(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_176(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_177(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_160(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_163(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_181();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_176(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8E4F (36431)
{
	if (!func_163(bParam0, bParam1, bParam2))
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

BOOL func_177(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8EA1 (36513)
{
	if (!func_163(bParam0, bParam1, bParam2))
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

BOOL func_178(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8EEA (36586)
{
	if (!func_163(bParam0, bParam1, bParam2))
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

BOOL func_179(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8F49 (36681)
{
	if (!func_163(bParam0, bParam1, bParam2))
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

BOOL func_180(Ped pedParam0) // Position - 0x8F9F (36767)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
			return true;

	return false;
}

void func_181() // Position - 0x8FFA (36858)
{
	MISC::SET_BIT(&Global_9503, 4);
	return;
}

void func_182(var uParam0, char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0x900A (36874)
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2733190.f_3788, 26))
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

	if (!bParam3)
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
			str = "CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrar.*/;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			HUD::CLEAR_HELP(true);

	return;
}

float func_183(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x90EA (37098)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

BOOL func_184(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9124 (37156)
{
	if (func_132(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

void func_185(char* sParam0) // Position - 0x9157 (37207)
{
	func_186(sParam0);
	return;
}

void func_186(char* sParam0) // Position - 0x9165 (37221)
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_187(var uParam0, int iParam1) // Position - 0x9178 (37240)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_188() // Position - 0x9195 (37269)
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_122);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_116, 750);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 8f, -8f, -1, 0, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 8f, -2f, -1, 0, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 8f, -2f, -1, 0, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_386, 8f, -2f, -1, 0, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_387, 8f, -2f, -1, 0, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(0, sLocal_385, sLocal_388, 8f, -2f, -1, 1, 0, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_122);
	TASK::TASK_PERFORM_SEQUENCE(pedLocal_117, iLocal_122);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_122);

	if (HUD::DOES_BLIP_EXIST(blLocal_119))
		HUD::REMOVE_BLIP(&blLocal_119);

	if (!HUD::DOES_BLIP_EXIST(blLocal_120))
		blLocal_120 = func_106(pedLocal_116, true, 0);

	HUD::SHOW_HEIGHT_ON_BLIP(blLocal_120, true);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	func_122();

	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(pedLocal_117, false), -2956.26f, 487.97f, 15.46f) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -203.72f, -861.8f, 29.27f, true) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 288.46f, -1256.71f, 28.44f, true) > 5f)
	{
		if (func_119(PLAYER::PLAYER_PED_ID(), pedLocal_117, true) < 50f)
		{
			_CONVERSATION_ADD_LINE(&uLocal_176, sLocal_352, sLocal_344, 3, 0, 0, 0);
			bLocal_154 = true;
		}
	}

	iLocal_127 = MISC::GET_GAME_TIMER();
	BUILTIN::SETTIMERA(0);

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);

	func_189(true);
	return;
}

int func_189(BOOL bParam0) // Position - 0x934C (37708)
{
	if (func_191())
	{
		Global_114953 = true;
		Global_114950 = MISC::GET_GAME_TIMER();
	
		if (func_190(Global_114952))
			func_103(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Evento aleatorio*/);
	
		if (bParam0 && func_190(Global_114952))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

BOOL func_190(BOOL bParam0) // Position - 0x939F (37791)
{
	switch (bParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

BOOL func_191() // Position - 0x93CE (37838)
{
	switch (func_192(&Global_33875, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_192(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x9404 (37892)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99939.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_196(0))
			return 0;
	
		Global_44885 = Global_44885 + 1;
		*uParam0 = Global_44885;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24430.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_44921 = iParam2;
		Global_44883 = *uParam0;
		Global_44884 = iParam4;
		Global_44882 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_44882 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_44882; i = i + 1)
			{
				if (Global_44888[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_44883 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_44882 == 8)
			return 0;
	
		Global_44885 = Global_44885 + 1;
		*uParam0 = Global_44885;
		Global_44888[Global_44882 /*4*/] = Global_44885;
		Global_44888[Global_44882 /*4*/].f_1 = iParam1;
		Global_44888[Global_44882 /*4*/].f_2 = iParam2;
		Global_44888[Global_44882 /*4*/].f_3 = 0;
		Global_44882 = Global_44882 + 1;
	
		if (iParam4 != 0)
			func_193(uParam0, iParam4);
	}

	return 2;
}

void func_193(var uParam0, int iParam1) // Position - 0x953B (38203)
{
	int i;

	if (Global_44882 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_44882; i = i + 1)
	{
		if (Global_44888[i /*4*/] == *uParam0)
			Global_44888[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x958A (38282)
{
	return func_195(iParam0, Global_44921);
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x959B (38299)
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

BOOL func_196(int iParam0) // Position - 0x977C (38780)
{
	if (Global_44921 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_197() // Position - 0x979E (38814)
{
	if (iLocal_363 == -1)
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_116))
				iLocal_363 = MISC::GET_GAME_TIMER();
	else if (MISC::GET_GAME_TIMER() > iLocal_363 + 1000)
		return true;

	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uLocal_112, 50f))
		return true;

	if (MISC::GET_GAME_TIMER() - iLocal_364 > 30000)
		if (!ENTITY::IS_ENTITY_OCCLUDED(pedLocal_116))
			return true;
		else
			func_280();

	if (HUD::DOES_BLIP_EXIST(blLocal_120))
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -3044.11f, 594.34f, 6.73f, true) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -712.9f, -819.32f, 22.73f, true) > 5f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 24.13f, -946.84f, 28.36f, true) > 5f)
			if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(pedLocal_116, false), 2.5f))
				return true;

	return false;
}

void func_198() // Position - 0x988C (39052)
{
	if (BUILTIN::VDIST(uLocal_112, -3044.06f, 594.93f, 6.74f) < 5f)
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_120))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 60f, 90f, 12f, false, true, 0))
				{
					blLocal_120 = func_106(pedLocal_116, true, 0);
					HUD::SHOW_HEIGHT_ON_BLIP(blLocal_120, false);
				}
			}
		}
		else
		{
			func_120(blLocal_120, &uLocal_131);
		}
	}
	else if (!HUD::DOES_BLIP_EXIST(blLocal_120))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_117, 90f, 90f, 8f, false, true, 0))
			{
				blLocal_120 = func_106(pedLocal_116, true, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_120, false);
			}
		}
	}
	else
	{
		func_120(blLocal_120, &uLocal_131);
	}

	if (iLocal_364 == -1)
		iLocal_364 = MISC::GET_GAME_TIMER();

	return;
}

BOOL func_199() // Position - 0x9977 (39287)
{
	Vector3 vector;
	Vector3 vector2;
	float radius;
	var animInitialOffsetRotation;

	vector = { uLocal_112 };
	vector2 = { 0f, 0f, fLocal_115 };
	radius = { 10f, 10f, 5f };

	if (iLocal_126 == 1)
	{
		func_223();
	
		if (BUILTIN::VDIST(uLocal_112, -203.758f, -861.738f, 29.2684f) < 5f)
		{
			uLocal_135 = { -197.9643f, -868.5554f, 28.2738f };
			fLocal_141 = 196f;
			uLocal_138 = { -187.5415f, -858.1728f, 28.1863f };
			fLocal_142 = 160.391f;
			uLocal_365 = { -259.0351f, -865.71185f, 28f };
			fLocal_368 = { -130.39812f, -908.80963f, 40f };
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("ATM_1");
			STREAMING::REQUEST_MODEL(hLocal_175);
		
			while (!STREAMING::HAS_MODEL_LOADED(hLocal_175))
			{
				if (func_210())
					func_280();
			
				BUILTIN::WAIT(0);
			}
		
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_175, true);
		}
		else
		{
			uLocal_135 = { -2968.5f, 494.48f, 14.82f };
			fLocal_141 = 55.24f;
			uLocal_138 = { -2973.03f, 496.38f, 14.96f };
			fLocal_142 = 3.18f;
			uLocal_365 = { -259.0351f, -865.71185f, 28f };
			fLocal_368 = { -130.39812f, -908.80963f, 40f };
			STREAMING::REQUEST_MODEL(hLocal_175);
		
			while (!STREAMING::HAS_MODEL_LOADED(hLocal_175))
			{
				if (func_210())
					func_280();
			
				BUILTIN::WAIT(0);
			}
		
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_175, true);
		}
	}
	else if (iLocal_126 == 2)
	{
		func_223();
		uLocal_135 = { 283.31f, -1249.51f, 28.95f };
		fLocal_141 = 78.25f;
		uLocal_138 = { 288.9906f, -1248.4432f, 28.2847f };
		fLocal_142 = 75.9756f;
		uLocal_365 = { 266.36426f, -1313.8293f, 28.591026f };
		fLocal_368 = { 265.14893f, -1215.9318f, 36.20192f };
		STREAMING::REQUEST_MODEL(hLocal_175);
	
		while (!STREAMING::HAS_MODEL_LOADED(hLocal_175))
		{
			if (func_210())
				func_280();
		
			BUILTIN::WAIT(0);
		}
	
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_175, true);
	}
	else if (iLocal_126 == 3)
	{
		func_223();
		uLocal_138 = { -1587.1504f, -539.9152f, 34.3644f };
		fLocal_142 = 327f;
		uLocal_365 = { -1596.2025f, -474.88443f, 32f };
		fLocal_368 = { -1595.5721f, -565.8368f, 48f };
	}
	else if (iLocal_126 == 4)
	{
		func_223();
		uLocal_135 = { 181.2355f, 6632.6274f, 30.5732f };
		fLocal_141 = 182f;
		uLocal_138 = { 200.0727f, 6630.5874f, 30.517f };
		fLocal_142 = 165f;
		uLocal_365 = { 178.18172f, 6660.375f, 31f };
		fLocal_368 = { 179.12494f, 6530.043f, 38f };
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.6606f, 31.5188f, false, true);
		STREAMING::REQUEST_MODEL(hLocal_175);
	
		while (!STREAMING::HAS_MODEL_LOADED(hLocal_175))
		{
			if (func_210())
				func_280();
		
			BUILTIN::WAIT(0);
		}
	
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_175, true);
	}
	else if (iLocal_126 == 5)
	{
		func_223();
	}

	if (func_201())
	{
		MISC::CLEAR_AREA(uLocal_112, radius, false, false, false, false);
		iLocal_124 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_112 - radius, uLocal_112 + radius, false, true, true, true, 1);
		pedLocal_117 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, hLocal_174, uLocal_112, fLocal_115, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_117, BF_Aggressive, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_117, BF_0x0036D422, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_117, BF_AlwaysFlee, false);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_117, PV_COMP_FEET, 1, 0, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_117, true, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_117, true);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_117, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_117, sLocal_384);
		PED::SET_PED_MONEY(pedLocal_117, 0);
	
		if (iLocal_132 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_117, PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_117, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_117, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedLocal_117, PV_COMP_LOWR, 0, 2, 0);
		}
	
		pedLocal_116 = PED::CREATE_PED(PED_TYPE_CRIMINAL, hLocal_173, uLocal_112, 0, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_AlwaysFlee, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_Aggressive, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_116, BF_0x66BB9FCC, true);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_116, 128, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_116, true, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_116, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_116, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_116, 281, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_116, 172, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_116, 137, true);
		PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(pedLocal_116);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_116, sLocal_383);
		PED::SET_PED_TARGET_LOSS_RESPONSE(pedLocal_116, 1);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_116, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_161, "b_atm_mugging", vector, vector2, 0, 2), false, false, true);
		animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_161, "b_atm_mugging", vector, vector2, 0, 2) };
		ENTITY::SET_ENTITY_HEADING(pedLocal_116, animInitialOffsetRotation.f_2);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedLocal_117))
		{
			if (PED::IS_PED_MALE(pedLocal_117))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_117, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@male", "idle_a", vector, vector2, 0, 2), false, false, true);
				animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@male", "idle_a", vector, vector2, 0, 2) };
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_117, PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@atmrobberygen@female", "idle_a", vector, vector2, 0, 2), false, false, true);
				animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("random@atmrobberygen@female", "idle_a", vector, vector2, 0, 2) };
			}
		
			ENTITY::SET_ENTITY_HEADING(pedLocal_117, animInitialOffsetRotation.f_2);
		}
	
		TASK::TASK_PLAY_ANIM(pedLocal_116, sLocal_161, "b_atm_mugging", 1000f, -4f, -1, 1, 0, false, false, false);
	
		if (PED::IS_PED_MALE(pedLocal_117))
		{
			TASK::TASK_PLAY_ANIM(pedLocal_117, "random@atmrobberygen@male", "idle_a", 1000f, -4f, -1, 1, 0, false, false, false);
			STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@female");
		}
		else
		{
			TASK::TASK_PLAY_ANIM(pedLocal_117, "random@atmrobberygen@female", "idle_a", 1000f, -4f, -1, 1, 0, false, false, false);
			STREAMING::REMOVE_ANIM_DICT("random@atmrobberygen@male");
		}
	
		PED::SET_PED_AS_ENEMY(pedLocal_116, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_117, true);
		WEAPON::GIVE_WEAPON_TO_PED(pedLocal_116, joaat("WEAPON_PISTOL"), -1, true, true);
		WEAPON::SET_PED_AMMO(pedLocal_116, joaat("WEAPON_PISTOL"), 34, false);
		WEAPON::SET_CURRENT_PED_WEAPON(pedLocal_116, joaat("WEAPON_PISTOL"), false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_116, true, 0);
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_341 = "MICHAEL";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_341 = "FRANKLIN";
				break;
		
			case CHAR_TREVOR:
				sLocal_341 = "TREVOR";
				break;
		}
	
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), sLocal_341, 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_176, 1, pedLocal_117, sLocal_343, 0, 1);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_176, 2, pedLocal_116, "ATMRobber", 0, 1);
	
		if (iLocal_126 == 1 || iLocal_126 == 2)
		{
			veLocal_134 = VEHICLE::CREATE_VEHICLE(hLocal_175, uLocal_135, fLocal_141, true, true, false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_134, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_134);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_134, true);
		
			if (iLocal_126 == 2)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_134, 0, false, false);
			}
			else if (iLocal_126 == 1)
			{
				PED::SET_PED_HELMET(pedLocal_116, false);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedLocal_116, KNOCKOFFVEHICLE_HARD);
			}
			else if (iLocal_126 == 4)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_134, 3);
			}
		}
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		return true;
	}
	else if (func_210())
	{
		func_280();
	}

	return false;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xA034 (41012)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80337)
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

BOOL func_201() // Position - 0xA0CF (41167)
{
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@male");
	STREAMING::REQUEST_ANIM_DICT("random@atmrobberygen@female");

	if (!bLocal_150)
	{
		func_209(&uLocal_401, 3);
		uLocal_401.f_146 = MISC::GET_FRAME_COUNT();
		func_208(&uLocal_401, hLocal_173);
		func_208(&uLocal_401, hLocal_174);
		func_208(&uLocal_401, hLocal_170);
		func_208(&uLocal_401, hLocal_171);
		func_206(&uLocal_401, sLocal_161);
		func_206(&uLocal_401, sLocal_385);
		func_206(&uLocal_401, sLocal_379);
		func_206(&uLocal_401, sLocal_162);
		bLocal_150 = true;
	}

	if (STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@male") && STREAMING::HAS_ANIM_DICT_LOADED("random@atmrobberygen@female") && func_202(&uLocal_401))
		return true;

	return false;
}

BOOL func_202(var uParam0) // Position - 0xA174 (41332)
{
	int i;

	if (!uParam0->f_145)
		return true;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return false;
		
			if (!func_203(&uParam0->[i /*18*/]))
				return false;
		}
	}

	uParam0->f_145 = 0;
	return true;
}

BOOL func_203(var uParam0) // Position - 0xA1D0 (41424)
{
	return func_204(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_204(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xA1E7 (41447)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_205(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(hParam2);
			
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
			
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
			
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
			
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(hParam2, sParam1);
			
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
			
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(iParam0, 27), -1);
			
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hParam2);
			
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(hParam2);
			
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
			
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

int func_205(int iParam0) // Position - 0xA2D2 (41682)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

void func_206(var uParam0, char* sParam1) // Position - 0xA2FB (41723)
{
	func_207(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_207(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4) // Position - 0xA30E (41742)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (iParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == iParam2)
						return;
			
				if (iParam1 != 4)
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0->[i /*18*/].f_2), sParam3))
							return;
			
				if (iParam1 == 9)
					return;
			}
		}
	}

	if (!uParam0->f_145)
		uParam0->f_145 = 1;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = iParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_208(var uParam0, Hash hParam1) // Position - 0xA3ED (41965)
{
	func_207(uParam0, 0, hParam1, "NULL", 0);
	return;
}

void func_209(var uParam0, int iParam1) // Position - 0xA401 (41985)
{
	if (iParam1 > 0)
		uParam0->f_147 = iParam1;

	return;
}

BOOL func_210() // Position - 0xA418 (42008)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_108) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
			return false;
	}

	if (func_218())
		return true;

	if (func_211(100f, true) != -1)
		return true;

	return false;
}

int func_211(float fParam0, BOOL bParam1) // Position - 0xA49E (42142)
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
		if (func_40(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_217();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114963.f_18583[num /*6*/], 2) && !IS_BIT_SET(Global_114963.f_18583[num /*6*/], 3))
				{
					func_212(num, &unk);
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

void func_212(int iParam0, var uParam1) // Position - 0xA54F (42319)
{
	switch (iParam0)
	{
		case 0:
			func_213(uParam1, "Abigail1", func_215(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 1:
			func_213(uParam1, "Abigail2", func_215(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 2:
			func_213(uParam1, "Barry1", func_215(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 3:
			func_213(uParam1, "Barry2", func_215(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 4:
			func_213(uParam1, "Barry3", func_215(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 5:
			func_213(uParam1, "Barry3A", func_215(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Las zonas donde puedes encontrar un vehículo con un botín oculto aparecen indicadas en el mapa. Recoge estos vehículos para Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 6:
			func_213(uParam1, "Barry3C", func_215(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 7:
			func_213(uParam1, "Barry4", func_215(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_214(iParam0), 0, 0);
			break;
	
		case 8:
			func_213(uParam1, "Dreyfuss1", func_215(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*Se reveló la identidad y el paradero del asesino.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 9:
			func_213(uParam1, "Epsilon1", func_215(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 10:
			func_213(uParam1, "Epsilon2", func_215(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 11:
			func_213(uParam1, "Epsilon3", func_215(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 12:
			func_213(uParam1, "Epsilon4", func_215(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 13:
			func_213(uParam1, "Epsilon5", func_215(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 14:
			func_213(uParam1, "Epsilon6", func_215(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 15:
			func_213(uParam1, "Epsilon7", func_215(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 16:
			func_213(uParam1, "Epsilon8", func_215(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 17:
			func_213(uParam1, "Extreme1", func_215(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 18:
			func_213(uParam1, "Extreme2", func_215(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 19:
			func_213(uParam1, "Extreme3", func_215(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 20:
			func_213(uParam1, "Extreme4", func_215(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 21:
			func_213(uParam1, "Fanatic1", func_215(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_214(iParam0), 1, 0);
			break;
	
		case 22:
			func_213(uParam1, "Fanatic2", func_215(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_214(iParam0), 1, 0);
			break;
	
		case 23:
			func_213(uParam1, "Fanatic3", func_215(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_214(iParam0), 0, 1);
			break;
	
		case 24:
			func_213(uParam1, "Hao1", func_215(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_214(iParam0), 0, 1);
			break;
	
		case 25:
			func_213(uParam1, "Hunting1", func_215(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 26:
			func_213(uParam1, "Hunting2", func_215(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 27:
			func_213(uParam1, "Josh1", func_215(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 28:
			func_213(uParam1, "Josh2", func_215(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 29:
			func_213(uParam1, "Josh3", func_215(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 30:
			func_213(uParam1, "Josh4", func_215(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 31:
			func_213(uParam1, "Maude1", func_215(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 32:
			func_213(uParam1, "Minute1", func_215(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 33:
			func_213(uParam1, "Minute2", func_215(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 34:
			func_213(uParam1, "Minute3", func_215(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 35:
			func_213(uParam1, "MrsPhilips1", func_215(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 36:
			func_213(uParam1, "MrsPhilips2", func_215(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 37:
			func_213(uParam1, "Nigel1", func_215(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 38:
			func_213(uParam1, "Nigel1A", func_215(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Se marcaron en el mapa las zonas en las que puedes encontrar objetos de famosos. Róbalos para Nigel y para la señora Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 39:
			func_213(uParam1, "Nigel1B", func_215(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
	
		case 40:
			func_213(uParam1, "Nigel1C", func_215(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
	
		case 41:
			func_213(uParam1, "Nigel1D", func_215(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_214(iParam0), 1, 1);
			break;
	
		case 42:
			func_213(uParam1, "Nigel2", func_215(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 43:
			func_213(uParam1, "Nigel3", func_215(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 1);
			break;
	
		case 44:
			func_213(uParam1, "Omega1", func_215(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 45:
			func_213(uParam1, "Omega2", func_215(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 46:
			func_213(uParam1, "Paparazzo1", func_215(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 47:
			func_213(uParam1, "Paparazzo2", func_215(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 48:
			func_213(uParam1, "Paparazzo3", func_215(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 49:
			func_213(uParam1, "Paparazzo3A", func_215(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Las zonas en las que puedes encontrar oportunidades para sacar fotos a famosos se marcaron en el mapa. Localiza y fotografía a estos famosos para Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 50:
			func_213(uParam1, "Paparazzo3B", func_215(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 51:
			func_213(uParam1, "Paparazzo4", func_215(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 52:
			func_213(uParam1, "Rampage1", func_215(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 54:
			func_213(uParam1, "Rampage3", func_215(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 55:
			func_213(uParam1, "Rampage4", func_215(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 56:
			func_213(uParam1, "Rampage5", func_215(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_214(iParam0), 0, 0);
			break;
	
		case 53:
			func_213(uParam1, "Rampage2", func_215(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_214(iParam0), 1, 0);
			break;
	
		case 57:
			func_213(uParam1, "TheLastOne", func_215(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 58:
			func_213(uParam1, "Tonya1", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Puedes encontrar extraños y locos por todo San Andreas en ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 59:
			func_213(uParam1, "Tonya2", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 60:
			func_213(uParam1, "Tonya3", func_215(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 61:
			func_213(uParam1, "Tonya4", func_215(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		case 62:
			func_213(uParam1, "Tonya5", func_215(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_214(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_213(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xB704 (46852)
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

int func_214(int iParam0) // Position - 0xB795 (46997)
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

struct<2> func_215(int iParam0) // Position - 0xBADB (47835)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_216(iParam0) };

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

struct<2> func_216(int iParam0) // Position - 0xBB12 (47890)
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

int func_217() // Position - 0xBF5E (48990)
{
	func_39();

	switch (Global_114963.f_2370.f_539.f_4321)
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

BOOL func_218() // Position - 0xBFA4 (49060)
{
	if (func_221() && !func_222())
		return true;

	if (func_220() && func_219())
		return true;

	return false;
}

BOOL func_219() // Position - 0xBFD6 (49110)
{
	return Global_114681 > 0;
}

BOOL func_220() // Position - 0xBFE4 (49124)
{
	if (Global_99383 != -1)
		return true;

	return false;
}

BOOL func_221() // Position - 0xBFF9 (49145)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 20);

	return false;
}

BOOL func_222() // Position - 0xC01E (49182)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

void func_223() // Position - 0xC03B (49211)
{
	int randomIntInRange;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (iLocal_132 == 0 && iLocal_126 == 5)
		iLocal_132 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	else if (iLocal_126 != 5)
		iLocal_132 = iLocal_126;

	switch (iLocal_132)
	{
		case 1:
			hLocal_173 = joaat("G_M_Y_ArmGoon_02");
			sLocal_383 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_01";
			hLocal_174 = joaat("A_F_M_Tourist_01");
			sLocal_384 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
			hLocal_175 = joaat("sanchez");
			sLocal_344 = "REAR1_ATTR";
			sLocal_345 = "REAR1_HELP";
			sLocal_346 = "REAR1_PROMPT";
			sLocal_347 = "REAR1_CHASE";
			sLocal_348 = "REAR1_FLEE";
			sLocal_349 = "REAR1_THX";
			sLocal_350 = "REAR1_DAMN";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_353 = "REAR1_REM";
					sLocal_351 = "REAR1_FKM";
					sLocal_342 = "REAR1_WM";
					sLocal_354 = "REAR1_GYM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_353 = "REAR1_REF";
					sLocal_351 = "REAR1_FKF";
					sLocal_342 = "REAR1_WF";
					sLocal_354 = "REAR1_GYF";
					break;
			
				case CHAR_TREVOR:
					sLocal_353 = "REAR1_RET";
					sLocal_351 = "REAR1_FKT";
					sLocal_342 = "REAR1_WT";
					sLocal_354 = "REAR1_GYT";
					break;
			}
		
			sLocal_343 = "ATMRobVictim1";
			sLocal_352 = "REAR1AU";
		
			if (iLocal_172 == 0)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			
				if (randomIntInRange == 0)
				{
					hLocal_170 = joaat("prop_ld_purse_01");
				}
				else if (randomIntInRange == 1)
				{
					hLocal_170 = joaat("prop_ld_wallet_01");
				}
				else if (randomIntInRange == 2)
				{
					flag = _GET_RANDOM_BOOL();
				
					if (flag)
						hLocal_170 = joaat("prop_ld_wallet_pickup");
					else
						hLocal_170 = joaat("prop_ld_purse_01");
				}
			
				iLocal_172 = 1;
			}
		
			sLocal_379 = "RANDOM@ATMROBBERY1";
			sLocal_380 = "Return_Wallet_Positive_A_Player";
			sLocal_381 = "Return_Wallet_Positive_A_Female";
			sLocal_382 = "Return_Wallet_Positive_A_Cam";
			sLocal_385 = "random@car_thief@waiting_ig_4";
			sLocal_386 = "waiting";
			sLocal_387 = "waiting";
			sLocal_388 = "waiting";
			break;
	
		case 2:
			hLocal_173 = joaat("G_M_Y_FamFor_01");
			sLocal_383 = "G_M_Y_FamFor_01_BLACK_MINI_01";
			hLocal_174 = joaat("A_M_Y_Hipster_02");
			sLocal_384 = "A_M_Y_Hipster_02_White_Full_01";
			hLocal_175 = joaat("ruiner");
			sLocal_344 = "REAR2_ATTR";
			sLocal_345 = "REAR2_HELP";
			sLocal_346 = "REAR2_PROMPT";
			sLocal_347 = "REAR2_CHASE";
			sLocal_348 = "REAR2_FLEE";
			sLocal_349 = "REAR2_THX";
			sLocal_350 = "REAR2_DAMN";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_353 = "REAR2_REM";
					sLocal_351 = "REAR2_FKM";
					sLocal_342 = "REAR2_WM";
					sLocal_354 = "REAR2_GYM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_353 = "REAR2_REF";
					sLocal_351 = "REAR2_FKF";
					sLocal_342 = "REAR2_WF";
					sLocal_354 = "REAR2_GYF";
					break;
			
				case CHAR_TREVOR:
					sLocal_353 = "REAR2_RET";
					sLocal_351 = "REAR2_FKT";
					sLocal_342 = "REAR2_WT";
					sLocal_354 = "REAR2_GYT";
					break;
			}
		
			sLocal_343 = "ATMRobVictim2";
			sLocal_352 = "REAR2AU";
			hLocal_170 = joaat("prop_ld_wallet_pickup");
			sLocal_379 = "RANDOM@ATMROBBERY2";
			sLocal_380 = "Return_Wallet_Positive_A_Player";
			sLocal_381 = "Return_Wallet_Positive_A_Male";
			sLocal_382 = "Return_Wallet_Positive_A_Cam";
			sLocal_385 = "RANDOM@BICYCLE_THIEF@IDLE_A";
			sLocal_386 = "IDLE_A";
			sLocal_387 = "IDLE_B";
			sLocal_388 = "IDLE_C";
			break;
	
		case 3:
			hLocal_174 = joaat("A_F_M_Tourist_01");
			sLocal_384 = "A_F_Y_Tourist_01_White_Mini_01";
			hLocal_173 = joaat("G_M_Y_SalvaGoon_02");
			sLocal_383 = "G_M_Y_SalvaGoon_02_SALVADORIAN_MINI_03";
			sLocal_344 = "REAR5_ATTR";
			sLocal_345 = "REAR5_HELP";
			sLocal_346 = "REAR5_PROMPT";
			sLocal_347 = "REAR5_CHASE";
			sLocal_348 = "REAR5_FLEE";
			sLocal_349 = "REAR5_THX";
			sLocal_350 = "REAR5_DAMN";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_353 = "REAR5_REM";
					sLocal_351 = "REAR5_FKM";
					sLocal_342 = "REAR5_WM";
					sLocal_354 = "REAR5_GYM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_353 = "REAR5_REF";
					sLocal_351 = "REAR5_FKF";
					sLocal_342 = "REAR5_WF";
					sLocal_354 = "REAR5_GYF";
					break;
			
				case CHAR_TREVOR:
					sLocal_353 = "REAR5_RET";
					sLocal_351 = "REAR5_FKT";
					sLocal_342 = "REAR5_WT";
					sLocal_354 = "REAR5_GYT";
					break;
			}
		
			sLocal_343 = "ATMRobVictim5";
			sLocal_352 = "REAR5AU";
		
			if (iLocal_172 == 0)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			
				if (randomIntInRange == 0)
				{
					hLocal_170 = joaat("prop_ld_purse_01");
				}
				else if (randomIntInRange == 1)
				{
					hLocal_170 = joaat("prop_ld_wallet_01");
				}
				else if (randomIntInRange == 2)
				{
					flag2 = _GET_RANDOM_BOOL();
				
					if (flag2)
						hLocal_170 = joaat("prop_ld_wallet_pickup");
					else
						hLocal_170 = joaat("prop_ld_wallet_01");
				}
			
				iLocal_172 = 1;
			}
		
			sLocal_379 = "RANDOM@ATMROBBERY3";
			sLocal_380 = "Return_Wallet_Positive_B_Player";
			sLocal_381 = "Return_Wallet_Positive_B_Female";
			sLocal_382 = "Return_Wallet_Positive_B_Cam";
			sLocal_385 = "random@car_thief@waiting_ig_4";
			sLocal_386 = "waiting";
			sLocal_387 = "waiting";
			sLocal_388 = "waiting";
			break;
	
		case 4:
			hLocal_174 = joaat("A_F_M_Tourist_01");
			sLocal_384 = "A_F_M_BevHills_02_WHITE_FULL_01";
			hLocal_175 = joaat("ruiner");
			hLocal_173 = joaat("G_M_Y_Azteca_01");
			sLocal_383 = "G_M_Y_Latino01_Latino_MINI_01";
			sLocal_344 = "REAR3_ATTR";
			sLocal_345 = "REAR3_HELP";
			sLocal_346 = "REAR3_PROMPT";
			sLocal_347 = "REAR3_CHASE";
			sLocal_348 = "REAR3_FLEE";
			sLocal_349 = "REAR3_THX";
			sLocal_350 = "REAR3_DAMN";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_353 = "REAR3_REM";
					sLocal_351 = "REAR3_FKM";
					sLocal_342 = "REAR3_WM";
					sLocal_354 = "REAR3_GYM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_353 = "REAR3_REF";
					sLocal_351 = "REAR3_FKF";
					sLocal_342 = "REAR3_WF";
					sLocal_354 = "REAR3_GYF";
					break;
			
				case CHAR_TREVOR:
					sLocal_353 = "REAR3_RET";
					sLocal_351 = "REAR3_FKT";
					sLocal_342 = "REAR3_WT";
					sLocal_354 = "REAR3_GYT";
					break;
			}
		
			sLocal_343 = "ATMRobVictim3";
			sLocal_352 = "REAR3AU";
		
			if (iLocal_172 == 0)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			
				if (randomIntInRange == 0)
				{
					hLocal_170 = joaat("prop_ld_purse_01");
				}
				else if (randomIntInRange == 1)
				{
					hLocal_170 = joaat("prop_ld_wallet_01");
				}
				else if (randomIntInRange == 2)
				{
					flag3 = _GET_RANDOM_BOOL();
				
					if (flag3)
						hLocal_170 = joaat("prop_ld_wallet_pickup");
					else
						hLocal_170 = joaat("prop_ld_purse_01");
				}
			
				iLocal_172 = 1;
			}
		
			sLocal_379 = "RANDOM@ATMROBBERY4";
			sLocal_380 = "Return_Wallet_Positive_C_Player";
			sLocal_381 = "Return_Wallet_Positive_C_Female";
			sLocal_382 = "Return_Wallet_Positive_C_Cam";
			sLocal_385 = "random@car_thief@waiting_ig_4";
			sLocal_386 = "waiting";
			sLocal_387 = "waiting";
			sLocal_388 = "waiting";
			break;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -203.72f, -861.8f, 29.27f, true) < 5f)
	{
		uLocal_371 = { -197.64f, -863.25f, 28.33f };
		fLocal_374 = 334.5007f;
		uLocal_375 = { -187.24f, -856.77f, 28.97f };
		fLocal_378 = 162.69f;
		iLocal_133 = 1;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 288.46f, -1256.71f, 28.44f, true) < 5f)
	{
		uLocal_371 = { 286.5f, -1256.73f, 28.29f };
		fLocal_374 = 167.3216f;
		uLocal_375 = { 250.55f, -1239.27f, 28.84f };
		fLocal_378 = 265.51f;
		iLocal_133 = 2;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -3044.11f, 594.34f, 6.73f, true) < 5f)
	{
		uLocal_371 = { -3044.66f, 595.7f, 6.59f };
		fLocal_374 = 296.7338f;
		uLocal_375 = { -3037.55f, 608.53f, 7.34f };
		fLocal_378 = 202.3f;
		iLocal_133 = 3;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 174.53f, 6637.64f, 30.57f, true) < 5f)
	{
		uLocal_371 = { 175.57f, 6636.58f, 30.57f };
		fLocal_374 = 260.4868f;
		uLocal_375 = { 188.97f, 6616.2f, 31.48f };
		fLocal_378 = 93.97f;
		iLocal_133 = 4;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 24.13f, -946.84f, 28.36f, true) < 5f)
	{
		uLocal_371 = { 23.65f, -948.26f, 28.36f };
		fLocal_374 = 258.8732f;
		uLocal_375 = { 22.19f, -955.82f, 28.94f };
		fLocal_378 = 70.66f;
		iLocal_133 = 6;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 296.13f, -894.01f, 28.23f, true) < 5f)
	{
		uLocal_371 = { 294.64f, -893.6f, 28.18f };
		fLocal_374 = 156.7222f;
		uLocal_375 = { 286.4f, -897.28f, 28.57f };
		fLocal_378 = 341.97f;
		iLocal_133 = 8;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 1077.69f, -775.73f, 57.21f, true) < 5f)
	{
		uLocal_371 = { 1077.64f, -773.86f, 57.09f };
		fLocal_374 = 275.6593f;
		uLocal_375 = { 1081.93f, -764.08f, 57.35f };
		fLocal_378 = 268.57f;
		iLocal_133 = 11;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -2072.88f, -317.19f, 12.32f, true) < 5f)
	{
		uLocal_371 = { -2074.93f, -316.75f, 12.16f };
		fLocal_374 = 157.3363f;
		uLocal_375 = { -2101.2f, -293.74f, 12.74f };
		fLocal_378 = 263.12f;
		iLocal_133 = 16;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -821.33f, -1082.43f, 10.14f, true) < 5f)
	{
		uLocal_371 = { -819.39f, -1084.12f, 10.03f };
		fLocal_374 = 236.6294f;
		uLocal_375 = { -803.18f, -1075.91f, 11.13f };
		fLocal_378 = 209.53f;
		iLocal_133 = 17;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -712.9f, -819.32f, 22.73f, true) < 5f)
	{
		uLocal_371 = { -712.88f, -820.47f, 22.61f };
		fLocal_374 = 268.2568f;
		uLocal_375 = { -721.63f, -826.84f, 22.82f };
		fLocal_378 = 93.14f;
		iLocal_133 = 18;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -387.12f, 6045.79f, 30.5f, true) < 5f)
	{
		uLocal_371 = { -389.5633f, 6042.153f, 30.4989f };
		fLocal_374 = 223.2838f;
		uLocal_375 = { -406.23f, 6045.69f, 31.06f };
		fLocal_378 = 229.52f;
		iLocal_133 = 19;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -301.84f, -830.39f, 31.38f, true) < 5f)
	{
		uLocal_371 = { -304.1459f, -837.4778f, 30.6799f };
		fLocal_374 = 286.139f;
		uLocal_375 = { -304.56f, -840.76f, 31.26f };
		fLocal_378 = 77.59f;
		iLocal_133 = 22;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -254.3f, -691.96f, 32.61f, true) < 5f)
	{
		uLocal_371 = { -253.51f, -689.26f, 32.57f };
		fLocal_374 = 209.9227f;
		uLocal_375 = { -250.91f, -684.01f, 33f };
		fLocal_378 = 230.65f;
		iLocal_133 = 23;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, 89.39f, 2f, 67.34f, true) < 5f)
	{
		uLocal_371 = { 88.7f, 0.01f, 67.38f };
		fLocal_374 = 71.0114f;
		uLocal_375 = { 91.35f, -7.07f, 67.82f };
		fLocal_378 = 70.28f;
		iLocal_133 = 25;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -526.42f, -1222.51f, 17.46f, true) < 5f)
	{
		uLocal_371 = { -530.11f, -1217.33f, 17.26f };
		fLocal_374 = 53.768f;
		uLocal_375 = { -522.45f, -1196.35f, 18.45f };
		fLocal_378 = 297.22f;
		iLocal_133 = 30;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_112, -2956.78f, 488.19f, 14.47f, true) < 5f)
	{
		uLocal_371 = { -2956.78f, 488.19f, 14.47f };
		fLocal_374 = 80.0912f;
		uLocal_375 = { -2974.34f, 491.96f, 15f };
		fLocal_378 = 1.95f;
		iLocal_133 = 31;
	}
	else
	{
		uLocal_371 = { uLocal_112 };
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0xCB94 (52116)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return 1;

	return 0;
}

BOOL func_225() // Position - 0xCBB2 (52146)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_218())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
			return false;

	if (func_211(100f, true) != -1)
		return true;

	return false;
}

BOOL func_226() // Position - 0xCC14 (52244)
{
	if (Global_114952 == func_227() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114953)
		return true;

	return false;
}

BOOL func_227() // Position - 0xCC3F (52287)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_228(unk);
	return num;
}

int func_228(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0xCC5C (52316)
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

void func_229(var uParam0) // Position - 0xCE36 (52790)
{
	int i;

	if (uParam0->f_145)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_146 + uParam0->f_147 || IS_BIT_SET(Global_102486.f_20, 2) || IS_BIT_SET(Global_102486.f_20, 13))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_230(&uParam0->[i /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_230(int* piParam0) // Position - 0xCEB4 (52916)
{
	func_231(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_231(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0xCECA (52938)
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_205(*piParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(hParam2);
				break;
		
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, IS_BIT_SET(*piParam0, 28));
				break;
		
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(*piParam0, 27), -1);
				break;
		
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(hParam2);
				break;
		
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, hParam2);
				break;
		
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	
		MISC::SET_BIT(piParam0, 29);
	}

	return;
}

void func_232(Blip blParam0, var uParam1) // Position - 0xCF9B (53147)
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
			num = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / 1000f);
		
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

void func_233() // Position - 0xD03A (53306)
{
	return;
}

void func_234() // Position - 0xD042 (53314)
{
	return;
}

void func_235(BOOL bParam0) // Position - 0xD04A (53322)
{
	if (bParam0 == -1)
		bParam0 = func_227();

	if (bParam0 == -1)
		return;

	func_237(bParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114949 = 0;
	func_236();
	return;
}

void func_236() // Position - 0xD080 (53376)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_237(BOOL bParam0) // Position - 0xD0BD (53437)
{
	Global_114952 = bParam0;
	return;
}

BOOL func_238(var uParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD0CB (53451)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_153557)
		return false;

	if (bParam3 == -1)
		bParam3 = func_227();

	if (bParam3 == -1)
		return false;

	if (bParam3 == 31 || bParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_108 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_222())
				return false;
		}
	
		if (!Global_114963.f_9094)
			return false;
	
		if (func_278(false))
			return false;
	
		if (func_218())
			return false;
	
		if (func_277())
			return false;
	
		if (Global_114952 != -1)
			return false;
	
		if (func_40(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_211(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_108.f_2 > 50f)
				return false;
	
		if (!func_276(bParam3))
			return false;
	
		if (func_40(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_275(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_275(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_40(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_274(bParam3, iParam4, 145))
				return false;
	
		if (!func_273(Global_114963.f_25004.f_43[bParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114954 < 150000)
			if (bParam3 != 30)
				return false;
	
		if (func_272())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_263(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_262(bParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && bParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (bParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_262(false, 0))
			return false;
	
		if (Global_33962)
			return false;
	
		if (func_276(30) && !func_262(30, 0))
			if (bParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_40(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114963.f_2370.f_539.f_2300[i /*3*/] };
				num = Global_114963.f_2370.f_539.f_2296[i];
			
				if (func_261(num))
					if (func_239(i))
						if (!func_64(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_239(eCharacter echParam0) // Position - 0xD465 (54373)
{
	int num;

	num = Global_114963.f_2370.f_539.f_2296[echParam0];
	return func_240(num);
}

BOOL func_240(int iParam0) // Position - 0xD486 (54406)
{
	return func_241(iParam0, 1);
}

int func_241(int iParam0, int iParam1) // Position - 0xD495 (54421)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_261(iParam0))
		return 0;

	func_242(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_242(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xD4E8 (54504)
{
	func_243(func_254(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_243(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xD506 (54534)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_253(iParam0, iParam1))
	{
		num = func_252(iParam1);
		num2 = func_250(iParam0);
		num3 = func_250(iParam0) - func_250(iParam1);
		num4 = func_252(iParam0) - func_252(iParam1);
		num5 = func_249(iParam0) - func_249(iParam1);
		num6 = func_248(iParam0) - func_248(iParam1);
		num7 = func_247(iParam0) - func_247(iParam1);
		num8 = func_246(iParam0) - func_246(iParam1);
	}
	else
	{
		num = func_252(iParam0);
		num2 = func_250(iParam1);
		num3 = func_250(iParam1) - func_250(iParam0);
		num4 = func_252(iParam1) - func_252(iParam0);
		num5 = func_249(iParam1) - func_249(iParam0);
		num6 = func_248(iParam1) - func_248(iParam0);
		num7 = func_247(iParam1) - func_247(iParam0);
		num8 = func_246(iParam1) - func_246(iParam0);
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
	
		num5 = num5 + func_245(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_244(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_244(float fParam0, float fParam1, float fParam2) // Position - 0xD707 (55047)
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

int func_245(int iParam0, int iParam1) // Position - 0xD749 (55113)
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

int func_246(int iParam0) // Position - 0xD7EB (55275)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_247(int iParam0) // Position - 0xD7FE (55294)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_248(int iParam0) // Position - 0xD811 (55313)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_249(int iParam0) // Position - 0xD824 (55332)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_250(int iParam0) // Position - 0xD836 (55350)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_251(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD858 (55384)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_252(int iParam0) // Position - 0xD86F (55407)
{
	return iParam0 & 15;
}

BOOL func_253(int iParam0, int iParam1) // Position - 0xD87C (55420)
{
	int num;
	int num2;

	if (!func_261(iParam1) || !func_261(iParam0))
		return 1;

	num = func_250(iParam0);
	num2 = func_250(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_252(iParam0);
	num2 = func_252(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_249(iParam0);
	num2 = func_249(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_248(iParam0);
	num2 = func_248(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_247(iParam0);
	num2 = func_247(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_246(iParam0);
	num2 = func_246(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_254() // Position - 0xD988 (55688)
{
	var unk;

	func_260(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_259(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_258(&unk, CLOCK::GET_CLOCK_HOURS());
	func_257(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_256(&unk, CLOCK::GET_CLOCK_MONTH());
	func_255(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_255(var uParam0, int iParam1) // Position - 0xD9CE (55758)
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

void func_256(var uParam0, int iParam1) // Position - 0xDA54 (55892)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_257(var uParam0, int iParam1) // Position - 0xDA87 (55943)
{
	int num;
	int num2;

	num = func_252(*uParam0);
	num2 = func_250(*uParam0);

	if (iParam1 < 1 || iParam1 > func_245(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_258(var uParam0, int iParam1) // Position - 0xDAD8 (56024)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_259(var uParam0, int iParam1) // Position - 0xDB12 (56082)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_260(var uParam0, int iParam1) // Position - 0xDB4D (56141)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_261(int iParam0) // Position - 0xDB89 (56201)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_246(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_247(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_248(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_250(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_252(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_249(iParam0);

	if (num6 < 1 || num6 > func_245(num5, num4))
		return false;

	return true;
}

BOOL func_262(BOOL bParam0, int iParam1) // Position - 0xDC65 (56421)
{
	if (IS_BIT_SET(Global_114963.f_25004.f_8[bParam0], iParam1))
		return true;

	return false;
}

BOOL func_263(int iParam0) // Position - 0xDC85 (56453)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_40(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_271() || Global_114010 || Global_33818 || func_270() || func_60(8, -1) || func_269() || func_268() || func_267() || func_266() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_271() || Global_33818 || func_270() || func_60(8, -1) || func_267() || func_269() || func_268() || func_266() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_271() || Global_114010 || Global_33818 || func_270() || func_60(8, -1) || func_267() || func_269() || func_268() || func_266() || Global_114963.f_7697.f_919[character] == 5 || Global_45468 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_271() || Global_114010 || Global_33818 || func_270() || func_60(8, -1) || func_269() || func_268() || func_266() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_271() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_60(8, -1) || func_266() || func_265() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_60(8, -1) || func_269() || func_268() || func_265() || func_264())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_271() || Global_33818 || func_270() || func_60(8, -1) || func_268() || func_267() || func_266() || Global_114963.f_7697.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_271() || func_268() || Global_114010 || Global_33818 || func_270() || Global_46147 || func_60(8, -1) || func_267() || func_265() || func_266() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_271() || Global_114010 || Global_33818 || func_270() || func_60(8, -1) || func_267() || func_265() || func_269() || func_268() || func_266())
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

BOOL func_264() // Position - 0xE3A2 (58274)
{
	return Global_102525.f_1;
}

BOOL func_265() // Position - 0xE3B0 (58288)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 13);

	return false;
}

BOOL func_266() // Position - 0xE3D3 (58323)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_267() // Position - 0xE3ED (58349)
{
	if (Global_80598)
		return true;
	else if (Global_65057 && !Global_65063)
		return true;

	return false;
}

BOOL func_268() // Position - 0xE417 (58391)
{
	return Global_102538.f_418 > 0;
}

BOOL func_269() // Position - 0xE428 (58408)
{
	return Global_102538.f_417 > 0;
}

ePedComponentType func_270() // Position - 0xE439 (58425)
{
	return Global_1575095;
}

BOOL func_271() // Position - 0xE445 (58437)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99939.f_44 == 1;

	return false;
}

BOOL func_272() // Position - 0xE461 (58465)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_273(int iParam0) // Position - 0xE489 (58505)
{
	return func_253(func_254(), iParam0);
}

BOOL func_274(BOOL bParam0, int iParam1, eCharacter echParam2) // Position - 0xE49B (58523)
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (bParam0)
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

int func_275(eCharacter echParam0) // Position - 0xE57F (58751)
{
	if (!func_40(echParam0))
		return 7;

	return Global_114963.f_7697.f_919[echParam0];
}

BOOL func_276(BOOL bParam0) // Position - 0xE5A3 (58787)
{
	BOOL flag;
	BOOL flag2;

	if (bParam0 == 31 || bParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	flag = bParam0;

	if (flag < 31)
	{
		flag2 = IS_BIT_SET(Global_114963.f_25004, flag);
	}
	else
	{
		flag = flag - 31;
		flag2 = IS_BIT_SET(Global_114963.f_25004.f_1, flag);
	}

	return flag2;
}

BOOL func_277() // Position - 0xE5FB (58875)
{
	Vehicle vehiclePedIsIn;

	if (Global_33967)
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

BOOL func_278(BOOL bParam0) // Position - 0xE63F (58943)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80586, 0);
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xE667 (58983)
{
	int profileSetting;

	if (Global_153848 == 2)
		return true;
	else if (Global_153848 == 3)
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

void func_280() // Position - 0xE71F (59167)
{
	if (bLocal_356)
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_134, false))
			if (VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(veLocal_134))
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(veLocal_134);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_116))
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_116);

	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);

	if (shLocal_130 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_130);

	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);

	if (!PED::IS_PED_INJURED(pedLocal_117))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_117, false);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_117, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_117);
	}

	if (iLocal_126 == 4)
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(179.5463f, 6625.689f, 30.2739f, 184.245f, 6635.6606f, 31.5188f, true, true);

	func_182(&uLocal_389, 0, false, false);

	if (func_226())
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);

	func_293(&uLocal_401, false);
	func_281(-1);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_124, false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_281(BOOL bParam0) // Position - 0xE7FC (59388)
{
	var name;

	if (bParam0 == -1)
		bParam0 = func_227();

	if (bParam0 == -1)
		return;

	if (func_226())
	{
		func_286(bParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114954 = MISC::GET_GAME_TIMER();
		func_285(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_284(Global_114952, true), 64);
	
		if (func_283(Global_114952) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_114951, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_114949, MISC::GET_GAME_TIMER() - Global_114950, 0);
	}
	else if (IS_BIT_SET(Global_114959, 0) && Global_114963.f_25004.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114959, 0);
	}

	func_282(&Global_33875);
	Global_114953 = false;
	func_237(-1);
	return;
}

void func_282(var uParam0) // Position - 0xE8AE (59566)
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_44883))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_44882 = 0;
	Global_44884 = 0;
	Global_44921 = 15;
	Global_65060 = false;
	Global_65061 = 0;
	return;
}

int func_283(BOOL bParam0) // Position - 0xE8EB (59627)
{
	int num;

	num = 1;

	switch (bParam0)
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

char* func_284(BOOL bParam0, BOOL bParam1) // Position - 0xE99C (59804)
{
	switch (bParam0)
	{
		case false:
			return "RE_ACCIDENT";
	
		case true:
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

void func_285(int iParam0) // Position - 0xEBE5 (60389)
{
	Global_45472 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_286(BOOL bParam0) // Position - 0xEBF7 (60407)
{
	func_287(bParam0, 0, func_292(bParam0));
	return;
}

void func_287(BOOL bParam0, int iParam1, int iParam2) // Position - 0xEC0C (60428)
{
	int unk;
	var unk2;

	unk = func_254();
	func_290(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_289(bParam0, &unk);
	unk2 = { func_288(&unk) };
	return;
}

struct<16> func_288(var uParam0) // Position - 0xEC3B (60475)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_248(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_247(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_246(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_249(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_252(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_250(*uParam0), 64);
	return unk;
}

void func_289(BOOL bParam0, var uParam1) // Position - 0xED0B (60683)
{
	Global_114963.f_25004.f_43[bParam0] = *uParam1;
	return;
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xED23 (60707)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_250(*uParam0);
	i = func_252(*uParam0);
	num2 = func_249(*uParam0);
	j = func_248(*uParam0);
	k = func_247(*uParam0);
	l = func_246(*uParam0);

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

	for (m = func_245(i, num); num2 > m; m = func_245(i, num))
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
	func_291(uParam0, l, k, j, num2, i, num);
	return;
}

void func_291(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xEEA5 (61093)
{
	func_260(uParam0, iParam1);
	func_259(uParam0, iParam2);
	func_258(uParam0, iParam3);
	func_256(uParam0, iParam5);
	func_257(uParam0, iParam4);
	func_255(uParam0, iParam6);
	return;
}

int func_292(BOOL bParam0) // Position - 0xEEDD (61149)
{
	int num;

	switch (bParam0)
	{
		case 23:
			num = 30;
			break;
	
		case false:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case true:
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

void func_293(var uParam0, BOOL bParam1) // Position - 0xF080 (61568)
{
	int i;

	if (!bParam1)
		func_295(uParam0);

	for (i = 0; i < 8; i = i + 1)
	{
		func_294(&uParam0->[i /*18*/]);
	}

	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
	return;
}

void func_294(var uParam0) // Position - 0xF0BB (61627)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_295(var uParam0) // Position - 0xF0D4 (61652)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_296(&uParam0->[i /*18*/]);
	}

	uParam0->f_145 = 1;
	return;
}

void func_296(var uParam0) // Position - 0xF10A (61706)
{
	func_297(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_297(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xF121 (61729)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_205(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
		
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
		
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(hParam2, IS_BIT_SET(iParam0, 26));
				break;
		
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_298(BOOL bParam0) // Position - 0xF1DB (61915)
{
	Global_114955 = { uLocal_112 };

	if (bParam0)
		func_313(3);

	func_302(1, 0);

	if (!bLocal_165)
		func_301();

	func_299();
	func_280();
	return;
}

void func_299() // Position - 0xF210 (61968)
{
	func_300();
	return;
}

int func_300() // Position - 0xF21D (61981)
{
	if (func_278(false))
		return 0;

	if (Global_102525.f_8)
		if (Global_102525.f_10 > 0)
			return 0;
	else if (Global_102525.f_10 > 1)
		return 0;

	Global_102525.f_10 = Global_102525.f_10 + 1;
	return 1;
}

int func_301() // Position - 0xF268 (62056)
{
	return 1;
}

void func_302(int iParam0, int iParam1) // Position - 0xF271 (62065)
{
	if (iParam0 == -1)
		iParam0 = func_227();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_283(iParam0))
	{
		func_312(iParam0, iParam1);
	
		if (!func_311(51))
		{
			func_308("RE_REWARD" /*Algunos eventos aleatorios recompensarán al jugador con mejoras de estadísticas o con dinero.*/, 1, 0, 4000, 10000, func_217(), 0, 138, 0);
			func_307(51);
		}
	
		if (func_190(iParam0))
			Global_114963.f_25004.f_2 = 3;
	
		if (func_306(iParam0, iParam1) != 322)
			func_303(func_306(iParam0, iParam1), uLocal_108, uLocal_108.f_1);
	
		Global_114951 = iParam1;
	
		if (Global_114949 == 0)
			if (Global_114952 == true || Global_114952 == 5 || Global_114952 == 11 || Global_114952 == 25)
				func_313(2);
			else if (Global_114952 == 26 || Global_114952 == 8 || Global_114952 == 17)
				func_313(7);
			else
				func_313(1);
	}

	return;
}

void func_303(int iParam0, var uParam1, var uParam2) // Position - 0xF375 (62325)
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

	if (Global_114963.f_10203[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114963.f_10203[iParam0 /*12*/].f_6 == 11 || Global_114963.f_10203[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114963.f_10203[iParam0 /*12*/].f_5 = 1;
		Global_114963.f_10203[iParam0 /*12*/].f_10 = uParam1;
		Global_114963.f_10203[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0") /* TUNEABLE: NUM_HIDDEN_PACKAGES_0, NUM_HIDDEN_PACKAGES_0 */, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1") /* TUNEABLE: NUM_HIDDEN_PACKAGES_1, NUM_HIDDEN_PACKAGES_1 */, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3") /* TUNEABLE: NUM_HIDDEN_PACKAGES_3, NUM_HIDDEN_PACKAGES_3 */, 50, 0);
	}

	if (flag)
		func_304();

	return;
}

void func_304() // Position - 0xF45B (62555)
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
	Global_114699 = 0;
	Global_114700 = 0;
	Global_114701 = 0;
	Global_114702 = 0;
	Global_114703 = 0;
	Global_114704 = 0;
	Global_114705 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114963.f_10203.f_3853;
	Global_114963.f_10203.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114963.f_10203[num /*12*/].f_5 == true)
		{
			switch (Global_114963.f_10203[num /*12*/].f_6)
			{
				case 1:
					Global_114699 = Global_114699 + 1;
					num2 = num2 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114700 = Global_114700 + 1;
					num3 = num3 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114701 = Global_114701 + 1;
					num4 = num4 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114702 = Global_114702 + 1;
					num5 = num5 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114703 = Global_114703 + 1;
					num6 = num6 + (Global_114963.f_10203[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114704 = Global_114704 + 1;
					num7 = num7 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114705 = Global_114705 + 1;
					num8 = num8 + Global_114963.f_10203[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114682 > 0)
		if (Global_114699 == Global_114682)
			num2 = 55f;

	if (Global_114683 > 0)
		if (Global_114700 == Global_114683)
			num3 = 10f;

	if (Global_114684 > 0)
		if (Global_114701 == Global_114684)
			num4 = 0f;

	if (Global_114685 > 0)
		if (Global_114702 == Global_114685)
			num5 = 10f;

	if (Global_114686 > 0)
	{
		if (Global_114703 == Global_114686 || (Global_114686 * 10) / Global_114703 < 41 || Global_114703 > Global_114689 || Global_114703 == Global_114689)
		{
			if (!IS_BIT_SET(Global_114963.f_10203.f_3856, 14))
			{
				if (Global_114703 == Global_114686)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, Global_114686, 0);
					MISC::SET_BIT(&(Global_114963.f_10203.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114687 > 0)
		if (Global_114704 == Global_114687)
			num7 = 15f;

	if (Global_114688 > 0)
		if (Global_114705 == Global_114688)
			num8 = 5f;

	Global_114963.f_10203.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114703 > Global_114689 || Global_114703 == Global_114689)
		value2 = Global_114689;
	else
		value2 = Global_114703;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED") /* TUNEABLE: NUM_MISSIONS_COMPLETED, NUM_MISSIONS_COMPLETED */, Global_114699, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE") /* TUNEABLE: NUM_MISSIONS_AVAILABLE */, Global_114682, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED") /* TUNEABLE: NUM_MINIGAMES_COMPLETED, NUM_MINIGAMES_COMPLETED */, Global_114700, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE") /* TUNEABLE: NUM_MINIGAMES_AVAILABLE */, Global_114683, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED") /* TUNEABLE: NUM_ODDJOBS_COMPLETED */, Global_114701, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE") /* TUNEABLE: NUM_ODDJOBS_AVAILABLE */, Global_114684, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED") /* TUNEABLE: NUM_RNDPEOPLE_COMPLETED, NUM_RNDPEOPLE_COMPLETED */, Global_114702, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE") /* TUNEABLE: NUM_RNDPEOPLE_AVAILABLE */, Global_114685, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE") /* TUNEABLE: NUM_RNDEVENTS_AVAILABLE */, Global_114689, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED") /* TUNEABLE: NUM_MISC_COMPLETED, NUM_MISC_COMPLETED */, Global_114705 + Global_114704, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE") /* TUNEABLE: NUM_MISC_AVAILABLE */, Global_114688 + Global_114687, true);
	Global_114706 = (Global_114699 * 100) / Global_114682;
	Global_114708 = ((Global_114701 + Global_114700) * 100) / (Global_114684 + Global_114683);
	Global_114707 = ((Global_114702 + value2) * 100) / (Global_114685 + Global_114689);
	Global_114709 = ((Global_114704 + Global_114705) * 100) / (Global_114687 + Global_114688);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE") /* TUNEABLE: TOTAL_PROGRESS_MADE */, Global_114963.f_10203.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS") /* TUNEABLE: PERCENT_STORY_MISSIONS */, Global_114706, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS") /* TUNEABLE: PERCENT_AMBIENT_MISSIONS */, Global_114707, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS") /* TUNEABLE: PERCENT_ODDJOBS */, Global_114708, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114963.f_10203.f_3853))
		func_34(13, BUILTIN::FLOOR(Global_114963.f_10203.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_305() == HUD_COLOUR_BLACK == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114697 = false;
			
				if (!Global_65063)
					func_300();
			}
		}
	}

	return;
}

eHudColour func_305() // Position - 0xF919 (63769)
{
	return Global_33815;
}

int func_306(int iParam0, int iParam1) // Position - 0xF924 (63780)
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

void func_307(int iParam0) // Position - 0xFC98 (64664)
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_114963.f_20419.f_150[i], offset);

	return;
}

void func_308(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xFCDA (64730)
{
	func_309(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_309(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xFCFB (64763)
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

	for (i = 0; i < Global_114963.f_20419.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_114963.f_20419[i /*16*/], sParam0))
			return;
	}

	if (Global_114963.f_20419.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_4), sParam1, 16);
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_9 = iParam5;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_11 = iParam6;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_12 = iParam2;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_13 = iParam7;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_14 = iParam8;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = -1;
	
		Global_114963.f_20419.f_145 = Global_114963.f_20419.f_145 + 1;
		func_310();
	}

	return;
}

void func_310() // Position - 0xFECE (65230)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_114963.f_20419.f_146[i] = false;
	}

	for (i = 0; i < Global_114963.f_20419.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_114963.f_20419[i /*16*/].f_11, 0))
			if (Global_114963.f_20419[i /*16*/].f_12 > Global_114963.f_20419.f_146[0])
				Global_114963.f_20419.f_146[0] = Global_114963.f_20419[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114963.f_20419[i /*16*/].f_11, 1))
			if (Global_114963.f_20419[i /*16*/].f_12 > Global_114963.f_20419.f_146[1])
				Global_114963.f_20419.f_146[1] = Global_114963.f_20419[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_114963.f_20419[i /*16*/].f_11, 2))
			if (Global_114963.f_20419[i /*16*/].f_12 > Global_114963.f_20419.f_146[2])
				Global_114963.f_20419.f_146[2] = Global_114963.f_20419[i /*16*/].f_12;
	}

	return;
}

BOOL func_311(int iParam0) // Position - 0xFFE5 (65509)
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_114963.f_20419.f_150[i], num);

	return false;
}

void func_312(int iParam0, int iParam1) // Position - 0x10026 (65574)
{
	MISC::SET_BIT(&Global_114963.f_25004.f_8[iParam0], iParam1);
	return;
}

void func_313(int iParam0) // Position - 0x10041 (65601)
{
	Global_114949 = iParam0;
	return;
}

