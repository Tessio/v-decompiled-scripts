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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	Ped pedLocal_60 = 0;
	Ped pedLocal_61 = 0;
	Object obLocal_62 = 0;
	Blip blLocal_63 = 0;
	Blip blLocal_64 = 0;
	Blip blLocal_65 = 0;
	Blip blLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	float fLocal_73 = 0f;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	Hash hLocal_81 = 0;
	Hash hLocal_82 = 0;
	Hash hLocal_83 = 0;
	Hash hLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
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
	char* sLocal_101 = 0;
	char* sLocal_102 = 0;
	char* sLocal_103 = 0;
	char* sLocal_104 = 0;
	char* sLocal_105 = 0;
	char* sLocal_106 = 0;
	char* sLocal_107 = 0;
	char* sLocal_108 = 0;
	char* sLocal_109 = 0;
	char* sLocal_110 = 0;
	char* sLocal_111 = 0;
	char* sLocal_112 = 0;
	char* sLocal_113 = 0;
	char* sLocal_114 = 0;
	char* sLocal_115 = 0;
	char* sLocal_116 = 0;
	char* sLocal_117 = 0;
	char* sLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	float fLocal_126 = 0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	Cam caLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
	BOOL bLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	ScrHandle shLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	BOOL bLocal_146 = 0;
	BOOL bLocal_147 = 0;
	BOOL bLocal_148 = 0;
	int iLocal_149 = 0;
	BOOL bLocal_150 = 0;
	BOOL bLocal_151 = 0;
	BOOL bLocal_152 = 0;
	BOOL bLocal_153 = 0;
	BOOL bLocal_154 = 0;
	BOOL bLocal_155 = 0;
	BOOL bLocal_156 = 0;
	BOOL bLocal_157 = 0;
	BOOL bLocal_158 = 0;
	BOOL bLocal_159 = 0;
	BOOL bLocal_160 = 0;
	BOOL bLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
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
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	BOOL bLocal_188 = 0;
	Pickup pkLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 16;
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
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	char* sLocal_357 = 0;
	char* sLocal_358 = 0;
	char* sLocal_359 = 0;
	char* sLocal_360 = 0;
	char* sLocal_361 = 0;
	char* sLocal_362 = 0;
	char* sLocal_363 = 0;
	char* sLocal_364 = 0;
	char* sLocal_365 = 0;
	char* sLocal_366 = 0;
	char* sLocal_367 = 0;
	char* sLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	char* sLocal_375 = 0;
	char* sLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 1000;
	var uLocal_388 = 1000;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 15;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
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

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL isPedInjured;

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
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_89 = { -131.052f, -1627.0002f, 31.1755f };
	uLocal_92 = { 287.888f, -284.603f, 52.967f };
	uLocal_95 = { -319.66f, -832.28f, 31.61f };
	uLocal_98 = { 31f, -1019f, 28.5f };
	sLocal_118 = "";
	sLocal_357 = "RANDOM@MUGGING3";
	sLocal_358 = "pickup_object";
	sLocal_375 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_377 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_299(25, iLocal_88);
			func_281();
		}
		else
		{
			func_281();
		}
	}

	uLocal_120 = { uScriptParam_0.f_1[0 /*3*/] };
	func_280(&uLocal_391, 3);
	func_279();

	if (iLocal_88 == 1 && func_278(55) && !func_277(55))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_236(uLocal_120, 25, iLocal_88, false, false))
		func_233(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	isPedInjured = false;

	while (true)
	{
		SYSTEM::WAIT(0);
		func_230(&uLocal_391);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		func_229(blLocal_63, &uLocal_390);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_147)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_215())
					{
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.0844f, 36.4128f, 10f, false, false, false, false, false, false, 0);
						bLocal_154 = true;
						iLocal_44 = 1;
					}
					else if (func_214())
					{
						func_281();
					}
					break;
			
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (shLocal_139 == 0)
							shLocal_139 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_MUGGING, uLocal_120, 0f);
					
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					
						switch (iLocal_46)
						{
							case 1:
								func_206();
								break;
						
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								switch (iLocal_47)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (PED::IS_PED_INJURED(pedLocal_61) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), false))
										{
											isPedInjured = PED::IS_PED_INJURED(pedLocal_60);
											!OBJECT::DOES_PICKUP_EXIST(pkLocal_189);
										
											if (isPedInjured == false && iLocal_88 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(pedLocal_60, 500, 1000, 0, false, false, false);
												TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
												PED::SET_PED_KEEP_TASK(pedLocal_60, true);
												func_205(1);
												func_200();
											}
										}
										else
										{
											func_170();
										}
									
										if (iLocal_667 == 1 && bLocal_147 == true)
											iLocal_46 = 4;
										else if (bLocal_147)
											iLocal_47 = 2;
										break;
								
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_169();
									
										if (bLocal_52 && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
											iLocal_47 = 4;
										break;
								
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (func_167())
											func_166();
									
										if (bLocal_153)
											iLocal_47 = 5;
									
										if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
											TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_61, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 4f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
										}
										break;
								
									case 5:
										func_163();
									
										if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_61, 0);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
											}
										}
										break;
								}
							
								if (func_162())
									iLocal_46 = 11;
							
								bLocal_147;
								func_161();
							
								if (iLocal_47 == 0)
								{
									if (func_159())
									{
										if (iLocal_141 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(blLocal_64))
												HUD::REMOVE_BLIP(&blLocal_64);
										
											if (HUD::DOES_BLIP_EXIST(blLocal_63))
												HUD::REMOVE_BLIP(&blLocal_63);
										
											if (!HUD::DOES_BLIP_EXIST(blLocal_65))
												blLocal_65 = func_157(pkLocal_189);
										
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
								
									if (func_156())
										func_155();
								}
							
								if (func_154())
								{
									func_153();
									func_152();
								
									if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_60, uLocal_182, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_141 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
							
								if (bLocal_147)
								{
									if (!PED::IS_PED_IN_COMBAT(pedLocal_61, 0))
									{
										func_150(blLocal_64, &uLocal_140);
									}
									else if (HUD::DOES_BLIP_EXIST(blLocal_64))
									{
										if (HUD::GET_BLIP_COLOUR(blLocal_64) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(blLocal_64, false);
											HUD::SET_BLIP_COLOUR(blLocal_64, 1);
										}
									}
								}
							
								if (func_149())
									iLocal_46 = 10;
								break;
						
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_148(true);
							
								if (func_167())
								{
									func_166();
									func_163();
								}
							
								if (func_162())
									iLocal_46 = 11;
							
								func_140();
								break;
						
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_148(true);
							
								if (!bLocal_150)
								{
									func_139(pedLocal_60, &uLocal_191);
									uLocal_191 = uLocal_191;
									func_138();
									func_137();
									func_136();
								
									if (func_135())
									{
										func_134();
										func_200();
									}
								
									if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_190)
										iLocal_46 = 12;
								}
							
								func_61();
								break;
						
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
						
							case 3:
								func_59();
								break;
						
							case 11:
								func_58();
								break;
						
							case 6:
								if (func_162())
									iLocal_46 = 11;
							
								func_41();
								break;
						
							case 8:
								if (!PED::IS_PED_INJURED(pedLocal_60))
									if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
										iLocal_46 = 6;
									else
										func_281();
								break;
						
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
								{
									if (PED::IS_PED_INJURED(pedLocal_61))
									{
										if (HUD::DOES_BLIP_EXIST(blLocal_64))
											HUD::REMOVE_BLIP(&blLocal_64);
									
										if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
										{
											if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
												OBJECT::DELETE_OBJECT(&obLocal_62);
										
											func_40();
											bLocal_54 = true;
											func_140();
										}
									}
								}
								break;
						
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
									OBJECT::DELETE_OBJECT(&obLocal_62);
							
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_200();
								break;
						
							case 13:
								func_39();
								break;
						}
					}
				
					if (bLocal_58)
					{
						if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
								if (SYSTEM::VDIST(uLocal_182, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
									func_281();
					}
					else if (bLocal_147)
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_61))
								{
									func_37(&uLocal_378, 0, false);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(blLocal_64, pedLocal_61, 100f, 1061158912, false);
								}
							}
						}
						else
						{
							func_37(&uLocal_378, 0, false);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
						if (!PED::IS_PED_INJURED(pedLocal_60))
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, pedLocal_60))
										ENTITY::DETACH_ENTITY(obLocal_62, true, true);
				
					if (bLocal_148)
					{
						if (!bLocal_161)
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									bLocal_161 = true;
								}
							}
						}
					}
				
					if (bLocal_147 && !bLocal_148)
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							if (iLocal_88 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_SMART_FLEE_PED) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_61);
									TASK::TASK_SMART_FLEE_PED(pedLocal_61, pedLocal_60, 200f, -1, false, false);
									PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
									bLocal_148 = true;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_SMART_FLEE_PED) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_61);
								TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
								bLocal_148 = true;
							}
						
							if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_61, joaat("ends_in_run")))
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_61, pedLocal_60, 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
								bLocal_148 = true;
							}
						
							if (iLocal_88 == 1 || iLocal_88 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_357, sLocal_367, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_357, sLocal_367) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
										bLocal_148 = true;
									}
								}
							
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_357, sLocal_365, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_357, sLocal_365) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
										bLocal_148 = true;
									}
								}
							}
						}
					}
				
					func_1();
					break;
			}
		}
		else
		{
			func_281();
		}
	}

	return;
}

void func_1() // Position - 0xA1F Hash - 0x9B970E97 ^0x565310D6
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
		if (PED::IS_PED_INJURED(pedLocal_60))
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
				if (PED::IS_PED_INJURED(pedLocal_61))
					func_281();

	if (PED::IS_PED_INJURED(pedLocal_60))
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);

	if (PED::IS_PED_INJURED(pedLocal_61))
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);

	if (!bLocal_159)
	{
		if (PED::IS_PED_INJURED(pedLocal_61))
		{
			func_2(&uLocal_192, 1);
			bLocal_159 = true;
		}
	}

	if (!bLocal_160)
	{
		if (PED::IS_PED_INJURED(pedLocal_60))
		{
			func_2(&uLocal_192, 2);
			bLocal_160 = true;
		}
	}

	return;
}

void func_2(var uParam0, int iParam1) // Position - 0xAB1 Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_3(Blip blParam0, Ped pedParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0xACE Hash - 0xBE866CF5 ^0x5FE08F9C
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
			else if (ENTITY::IS_ENTITY_A_PED(pedParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
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

void func_4() // Position - 0xC27 Hash - 0x6C375A5D ^0x4DA5F45C
{
	if (!PED::IS_PED_INJURED(pedLocal_61) || !bLocal_131)
		func_5(&uLocal_378, pedLocal_61, 0, 0, true, true, true);
	else
		func_37(&uLocal_378, 0, false);

	return;
}

void func_5(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC5C Hash - 0x9B421A1E ^0x9B421A1E
{
	func_6(uParam0, pedParam1, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_6(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC76 Hash - 0x85234EBF ^0x85234EBF
{
	func_7(uParam0, pedParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_7(var uParam0, Ped pedParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xC93 Hash - 0x811E56D5 ^0xAB2F569F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_37(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_8(uParam0, pedParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_8(var uParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xCCB Hash - 0xDAF9A1E8 ^0x9B7C725B
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
		func_35();

	if (func_34(pedParam1) && ENTITY::IS_ENTITY_VISIBLE(pedParam1))
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
			if (func_29(uParam0, bParam7, bParam9, false))
				func_25(uParam0, pedParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(string2))
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
									func_11(true);
							}
						}
					}
				}
			}
			else if (func_13(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_11(true);
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
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_37(uParam0, string2, true);
		
			if (!func_29(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_10(uParam0))
					func_9(uParam0);
		}
	}
	else
	{
		func_37(uParam0, string2, false);
	}

	return;
}

void func_9(var uParam0) // Position - 0x1034 Hash - 0x4809780E ^0xE141051F
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
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

BOOL func_10(var uParam0) // Position - 0x109D Hash - 0x98F74CA5 ^0xEF4CACA5
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

int func_11(BOOL bParam0) // Position - 0x10C8 Hash - 0xEA423090 ^0xE108A001
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

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x1172 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_13(const char* sParam0) // Position - 0x1189 Hash - 0x5165E7C1 ^0xC976EDB3
{
	if (!func_14(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44042)
	{
		case 0:
		case 3:
			if (func_11(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_11(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_11(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_14(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1221 Hash - 0x3D231FF2 ^0x1CCF6728
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

	if (func_24(0))
		return false;

	if (func_23())
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

	if (func_22() || func_21(*Global_4718592.f_185586) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_18(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1955929)
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_15(ePedComponentType epctParam0) // Position - 0x147A Hash - 0xA439E034 ^0x14CB4DD5
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID;
		else if (Global_1575083 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x14E0 Hash - 0x3FF6E4CA ^0xE6B59972
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

Player _INVALID_PLAYER_INDEX() // Position - 0x1540 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_18(Vehicle veParam0, int iParam1) // Position - 0x1549 Hash - 0xCE6C32C8 ^0x91687715
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

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x15AB Hash - 0x4E1330D6 ^0x886EF094
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

BOOL func_20() // Position - 0x1630 Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2684504.f_19;
}

BOOL func_21(int iParam0) // Position - 0x163E Hash - 0x6B8F9071 ^0x6B8F9071
{
	return iParam0 == 51;
}

BOOL func_22() // Position - 0x164B Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2684504.f_18;
}

BOOL func_23() // Position - 0x1659 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

BOOL func_24(int iParam0) // Position - 0x166E Hash - 0xE8921B44 ^0x4F063755
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

void func_25(var uParam0, Ped pedParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x16C5 Hash - 0x9F7B2F79 ^0x8B74986F
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1582021 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		func_37(uParam0, 0, false);

	if (func_28(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_26())
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

BOOL func_26() // Position - 0x17D5 Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_27(PLAYER::PLAYER_ID());
}

BOOL func_27(Player plParam0) // Position - 0x17E5 Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_28(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x1804 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_29(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x184B Hash - 0xA880205D ^0xE1080820
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
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_10(uParam0))
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
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
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
					if (!func_33(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_32(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_32(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_33(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_31(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_30(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_30(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_31(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_10(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_35();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_30(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BB7 Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_14(bParam0, bParam1, bParam2))
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

BOOL func_31(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C09 Hash - 0x3FCF0638 ^0x1EFD5267
{
	if (!func_14(bParam0, bParam1, bParam2))
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

BOOL func_32(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C52 Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_14(bParam0, bParam1, bParam2))
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

BOOL func_33(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CB1 Hash - 0xF22F9C98 ^0xCA2E1CBD
{
	if (!func_14(bParam0, bParam1, bParam2))
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

BOOL func_34(Ped pedParam0) // Position - 0x1D07 Hash - 0xF847883B ^0xE7694E14
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

void func_35() // Position - 0x1D62 Hash - 0x4941A993 ^0x296D04CD
{
	MISC::SET_BIT(&Global_8801, 4);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x1D72 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x1D85 Hash - 0xAF87CC41 ^0xD51EC663
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

float func_38(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1E5D Hash - 0x7B2C17A2 ^0xDF922C6D
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

void func_39() // Position - 0x1EBB Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_281();
	return;
}

void func_40() // Position - 0x1EC7 Hash - 0xB5D20083 ^0x7F105BFA
{
	if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
	{
		if (PED::IS_PED_INJURED(pedLocal_61))
			uLocal_182 = { PED::GET_DEAD_PED_PICKUP_COORDS(pedLocal_61, 1067030938, 1069547520) };
		else
			uLocal_182 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), 1067030938, 1069547520) };
	
		pkLocal_189 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), uLocal_182, iLocal_142, iLocal_190, true, hLocal_83);
		blLocal_65 = func_157(pkLocal_189);
		func_37(&uLocal_378, 0, false);
		bLocal_58 = true;
	}

	return;
}

void func_41() // Position - 0x1F3C Hash - 0x4EE17CFB ^0xF76C563A
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	
		_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_108, 4, 0, 0, 0);
		bLocal_152 = true;
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
		func_281();
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2019 Hash - 0x384540C1 ^0x384540C1
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_43(sParam2, iParam3, false);
}

BOOL func_43(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x2067 Hash - 0x77297D51 ^0x40DC584A
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
					func_56();
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
	
		if (func_55(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_54();
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
			
				if (func_51())
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
		
			if (func_50())
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
		
			func_49();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_48();
		func_44();
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
		func_56();
	}

	return 0;
}

void func_44() // Position - 0x2335 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_45())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_45() // Position - 0x236C Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_46(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_46(Player plParam0) // Position - 0x23CF Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_47(plParam0, 20);
}

BOOL func_47(Player plParam0, int iParam1) // Position - 0x23DF Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

void func_48() // Position - 0x23F7 Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_49() // Position - 0x2427 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_50() // Position - 0x24BC Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_51() // Position - 0x24E3 Hash - 0x9A999369 ^0x4033F7BF
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x257C Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_53(14))
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

BOOL func_53(int iParam0) // Position - 0x261E Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

void func_54() // Position - 0x262C Hash - 0x719867DD ^0xB196B20A
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

BOOL func_55(int iParam0, int iParam1) // Position - 0x2682 Hash - 0xA14C4D3F ^0xA6034F77
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

void func_56() // Position - 0x26BA Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_57(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2711 Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_58() // Position - 0x2767 Hash - 0x56548C0A ^0xEAFCF3A1
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			OBJECT::DELETE_OBJECT(&obLocal_62);
	
		SYSTEM::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	if (PED::IS_PED_INJURED(pedLocal_61) || PED::IS_PED_INJURED(pedLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
			{
				bLocal_54 = true;
				func_140();
			}
			else
			{
				func_148(false);
				func_281();
			}
		}
		else
		{
			func_281();
		}
	}

	return;
}

void func_59() // Position - 0x2820 Hash - 0x4B5C27EA ^0x95552F56
{
	BOOL flag;

	func_140();

	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
		OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189);

	if (iLocal_141 == 1)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					}
				}
			}
		
			bLocal_49 = true;
		}
	}

	if (iLocal_141 == 2)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_60, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_88 == 3)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_60);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
									bLocal_49 = true;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_368, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_364, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_366, 3))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_60);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								bLocal_49 = true;
							}
						}
						else
						{
							flag = true;
						}
					}
					else
					{
						flag = true;
					}
				}
				else
				{
					flag = true;
				}
			
				if (flag)
				{
					if (iLocal_88 == 3)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_63))
								HUD::REMOVE_BLIP(&blLocal_63);
						
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
							bLocal_49 = true;
							iLocal_46 = 9;
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_368, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_364, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_366, 3))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						bLocal_49 = true;
						iLocal_46 = 9;
					}
				}
			}
		}
	}

	if (iLocal_141 == 3)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_60);
				TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
			}
		
			bLocal_54 = true;
			bLocal_49 = true;
		}
	}

	if (iLocal_141 == 1 || iLocal_141 == 2)
	{
		if (!PED::IS_PED_INJURED(pedLocal_60))
		{
			if (bLocal_49)
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_358, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_60, sLocal_358, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
									{
										_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(pkLocal_189);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_PLAY_ANIM(0, sLocal_358, "pickup_low", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						PED::SET_PED_MONEY(pedLocal_60, iLocal_190);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						func_205(3);
						func_200();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						bLocal_49 = true;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					PED::SET_PED_MONEY(pedLocal_60, iLocal_190);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
					func_205(3);
					func_200();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_63))
						HUD::REMOVE_BLIP(&blLocal_63);
				
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
					bLocal_49 = true;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}

	return;
}

void func_60() // Position - 0x2D53 Hash - 0xE300F7B ^0xCBB7CD7
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	return;
}

void func_61() // Position - 0x2D8A Hash - 0x5AE8FA3B ^0x4177ACC
{
	Vehicle playersLastVehicle;
	Vector3 animInitialOffsetPosition;
	var minimum;
	var maximum;
	Vector3 vector;
	float num;
	float num2;
	var entityCoords;
	int num3;
	int num4;

	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_150)
		{
			if (bLocal_151)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				num3 = 1;
			
				if (iLocal_88 == 1)
					if (entityCoords.f_2 > 33.5f)
						num3 = 0;
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5f, 5f, 5f, false, true, 0) && num3 == 1)
				{
					if (func_125(2))
						HUD::CLEAR_HELP(true);
				
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_124(true, false, true))
						{
							if (!func_123())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_114(true, true, true, false, false, false, false);
								
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										while (!func_111(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_75, 1, 1056964608, false, true, false) || _CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
									
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
								
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								
									if (!PED::IS_PED_INJURED(pedLocal_60))
										PED::SET_PED_CAN_RAGDOLL(pedLocal_60, false);
								
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
									EVENT::REMOVE_SHOCKING_EVENT(shLocal_139);
								
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
										func_109();
								
									bLocal_150 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_107(ENTITY::GET_ENTITY_COORDS(pedLocal_60, true), &uLocal_74, &fLocal_75);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 15f, 15f, 15f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			
				if (iLocal_45 == 2)
					TASK::TASK_PLAY_ANIM(0, sLocal_375, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, false, false, false);
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				PED::FORCE_PED_MOTION_STATE(pedLocal_60, joaat("MotionState_Walk"), false, 0, false);
				bLocal_151 = true;
			}
		}
	
		if (bLocal_150)
		{
			switch (iLocal_149)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							func_104(pedLocal_60, &uLocal_123, &fLocal_126, sLocal_359, sLocal_361);
						
							if (iLocal_88 == 1)
								if (fLocal_126.f_2 > 225f && fLocal_126.f_2 < 265f)
									if (fLocal_126.f_2 < 245f)
										fLocal_126.f_2 = 225f;
									else
										fLocal_126.f_2 = 265f;
								else if (fLocal_126.f_2 > 45f && fLocal_126.f_2 < 85f)
									if (fLocal_126.f_2 < 65f)
										fLocal_126.f_2 = 45f;
									else
										fLocal_126.f_2 = 85f;
						
							uLocal_123.f_2 = uLocal_123.f_2 + 2f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_123, &(uLocal_123.f_2), false, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0f, 2) };
							vector = { animInitialOffsetPosition - uLocal_123 };
							vector.f_2 = 0f;
							num = SYSTEM::VMAG(vector);
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							num2 = uLocal_123.f_2 - animInitialOffsetPosition.f_2;
							fLocal_126 = MISC::ATAN2(num2, num);
						
							if (fLocal_126 > 30f || fLocal_126 < -30f)
								fLocal_126 = 0f;
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
							{
								playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &minimum, &maximum);
							
								if (ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, uLocal_123, maximum.f_1 + 1.5f, maximum.f_1 + 1.5f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0, 2), maximum.f_1 + 1f, maximum.f_1 + 1f, 3f, false, true, 0))
								{
									if (iLocal_88 == 1)
									{
										if (fLocal_126.f_2 > 40f && fLocal_126.f_2 < 220f)
										{
											uLocal_78 = { -148.3897f, -1647.2146f, 31.5867f };
											fLocal_77 = 331.9427f;
										}
										else
										{
											uLocal_78 = { -129.5632f, -1622.2823f, 31.1122f };
											fLocal_77 = 148.9075f;
										}
									}
									else if (iLocal_88 == 3)
									{
										if (fLocal_126.f_2 > 160f && fLocal_126.f_2 < 340f)
										{
											uLocal_78 = { -319.709f, -837.0066f, 30.449f };
											fLocal_77 = 61.7986f;
										}
										else
										{
											uLocal_78 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_77 = 269.6216f;
										}
									}
									else if (iLocal_88 == 4)
									{
										if (fLocal_126.f_2 > 240f || fLocal_126.f_2 < 60f)
										{
											uLocal_78 = { 37.222f, -1005.0401f, 28.4648f };
											fLocal_77 = 156.7986f;
										}
										else
										{
											uLocal_78 = { 29.9887f, -1033.1838f, 28.3794f };
											fLocal_77 = 344.6216f;
										}
									}
									else
									{
										fLocal_77 = ENTITY::GET_ENTITY_HEADING(playersLastVehicle);
										uLocal_78 = { func_102(uLocal_123, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0, 2)) };
									}
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
									{
										ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_78, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_77);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
									}
								}
							}
						}
					
						MISC::CLEAR_AREA_OF_OBJECTS(uLocal_123, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(uLocal_123, 20f, 0);
						MISC::CLEAR_AREA(uLocal_123, 2f, true, true, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						obLocal_62 = OBJECT::CREATE_OBJECT(hLocal_83, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					
						iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_123, fLocal_126, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_129, false);
						caLocal_130 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_130, iLocal_129, sLocal_362, sLocal_359);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_129, sLocal_359, sLocal_360, 1000f, -8f, 0, 0, 1148846080, 0);
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_60);
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_60, iLocal_129, sLocal_359, sLocal_361, 1000f, -8f, 0, 0, 1148846080, 0);
						}
					
						CAM::SET_CAM_ACTIVE(caLocal_130, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_113, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_149 = iLocal_149 + 1;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_129) > 0.9f || func_100(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(caLocal_130, false);
						CAM::DESTROY_CAM(caLocal_130, false);
						func_99();
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_60);
							PED::SET_PED_MONEY(pedLocal_60, iLocal_190 - (iLocal_190 / 10));
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(pedLocal_60, animInitialOffsetPosition, true, false, false, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_60, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(pedLocal_60, animInitialOffsetPosition.f_2);
						
							if (iLocal_88 == 4)
							{
								if (func_98(animInitialOffsetPosition.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.7108f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
								TASK::TASK_WANDER_STANDARD(0, animInitialOffsetPosition.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							}
						
							PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_60, sLocal_376, 1048576000);
							PED::FORCE_PED_MOTION_STATE(pedLocal_60, joaat("MotionState_Walk"), true, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
							OBJECT::DELETE_OBJECT(&obLocal_62);
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							PED::SET_PED_MONEY(pedLocal_60, iLocal_190 - (iLocal_190 / 10));
							PED::SET_PED_CAN_RAGDOLL(pedLocal_60, true);
						}
					
						num4 = iLocal_190 / 100;
						num4 = num4 * 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						func_64(_GET_CURRENT_PLAYER_CHARACTER(), 1, num4);
						func_63(joaat("RC_WALLETS_RETURNED"), 1);
						func_205(3);
						func_200();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(obLocal_62, false, true);
							
								if (PED::IS_PED_MALE(pedLocal_60))
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, pedLocal_60, PED::GET_PED_BONE_INDEX(pedLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								else
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, pedLocal_60, PED::GET_PED_BONE_INDEX(pedLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							
								if (!bLocal_59)
									if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0) || func_62())
										bLocal_59 = true;
							}
						}
					}
					else if (!bLocal_59)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0) || func_62())
							bLocal_59 = true;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			}
		}
	}
	else
	{
		func_281();
	}

	return;
}

BOOL func_62() // Position - 0x36EF Hash - 0x2F9B8AEE ^0xE0051D68
{
	if (Global_22286 == 4)
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			return 1;
		else
			return 0;

	return 0;
}

void func_63(Hash hParam0, int iParam1) // Position - 0x3714 Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

int func_64(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3737 Hash - 0x24B6CAA3 ^0x24B6CAA3
{
	if (func_97(echParam0) == 3)
		return 0;

	if (func_97(echParam0) == 4)
		return 0;

	return func_65(func_97(echParam0), 0, iParam1, iParam2, false);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x376B Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_96();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_95(99, 1);
					func_63(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_63(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_63(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_80(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_77(5))
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
							func_63(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_77(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_63(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_63(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_77(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_76(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
			
				case 1:
					func_95(97, iParam3);
					break;
			
				case 2:
					func_95(96, iParam3);
					break;
			}
		
			func_95(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_68(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_68(num2);
	}

	num6 = Global_61340[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_61340[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_61340[num3] = 2147483647;
				else
					Global_61340[num3] = Global_61340[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_63(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_63(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_63(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_61340[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_61340[num3];
			Global_61340[num3] = Global_61340[num3] - iParam3;
		
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
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113969.f_20567.f_233[num3 /*69*/].f_2[Global_113969.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113969.f_20567.f_233[num3 /*69*/] = Global_113969.f_20567.f_233[num3 /*69*/] + 1;
		Global_113969.f_20567.f_233[num3 /*69*/].f_1 = Global_113969.f_20567.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113969.f_20567.f_233[num3 /*69*/].f_1 > 10)
			Global_113969.f_20567.f_233[num3 /*69*/].f_1 = 0;
	}

	func_67(iParam0);

	if (Global_44042 == 15)
		func_66(false);

	return 1;
}

void func_66(BOOL bParam0) // Position - 0x3D6A Hash - 0xB232D28E ^0x40CAA0C6
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/];
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113969.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_61348[i /*3*/][0] = Global_113969.f_20567[i];
		Global_61348.f_31[i /*3*/][0] = Global_113969.f_20567.f_11[i];
		Global_61348.f_62[i /*3*/][0] = Global_113969.f_20567.f_22[i];
		Global_61348.f_93[i /*3*/][0] = Global_113969.f_20567.f_33[i];
		Global_61348.f_124[i /*3*/][0] = Global_113969.f_20567.f_44[i];
		Global_61348.f_155[i /*3*/][0] = Global_113969.f_20567.f_55[i];
		Global_61348.f_186[i /*3*/][0] = Global_113969.f_20567.f_66[i];
		Global_61348.f_217[i /*3*/][0] = Global_113969.f_20567.f_77[i];
		Global_61348.f_248[i /*3*/][0] = Global_113969.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_61348[i /*3*/][1] = Global_113969.f_20567[i];
			Global_61348.f_31[i /*3*/][1] = Global_113969.f_20567.f_11[i];
			Global_61348.f_62[i /*3*/][1] = Global_113969.f_20567.f_22[i];
			Global_61348.f_93[i /*3*/][1] = Global_113969.f_20567.f_33[i];
			Global_61348.f_124[i /*3*/][1] = Global_113969.f_20567.f_44[i];
			Global_61348.f_155[i /*3*/][1] = Global_113969.f_20567.f_55[i];
			Global_61348.f_186[i /*3*/][1] = Global_113969.f_20567.f_66[i];
			Global_61348.f_217[i /*3*/][1] = Global_113969.f_20567.f_77[i];
			Global_61348.f_248[i /*3*/][1] = Global_113969.f_20567.f_88[i];
		}
	}

	return;
}

void func_67(int iParam0) // Position - 0x3FEC Hash - 0xF89D2184 ^0xB8EE77DB
{
	int value;

	value = Global_61340[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_68(int iParam0) // Position - 0x404A Hash - 0x3705FAD4 ^0x3705FAD4
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
		func_71(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_71(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_71(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_71(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_71(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_71(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_113969.f_20567.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113969.f_20567.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_70() /*5570*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113969.f_20567.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_70() /*5570*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x41C2 Hash - 0xA17D549C ^0x15755EF
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
	
		default:
			break;
	}

	return "";
}

int func_70() // Position - 0x42C3 Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_71(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x42D0 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_72(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_72(int iParam0, int iParam1) // Position - 0x42FE Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_73(iParam1));
}

int func_73(int iParam0) // Position - 0x4313 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_74();
	
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

int func_74() // Position - 0x4347 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4353 Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_74();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_76(int iParam0) // Position - 0x4371 Hash - 0x35B495B7 ^0x35B495B7
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
	return;
}

BOOL func_77(int iParam0) // Position - 0x4391 Hash - 0xA882C352 ^0xA882C352
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
		num = func_78(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_78(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_78(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_78(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_78(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_78(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113969.f_20567.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_70() /*5570*/].f_681.f_10, iParam0);
}

int func_78(int iParam0, int iParam1) // Position - 0x4531 Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_72(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x4560 Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_74();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_80(BOOL bParam0) // Position - 0x457C Hash - 0xDC114C70 ^0xC626A2DE
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_94(27, value);
	}

	if (value < 200000000)
		return 0;

	func_81(27, 1);
	return 1;
}

int func_81(int iParam0, int iParam1) // Position - 0x4633 Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_82(iParam0, iParam1);
}

int func_82(int iParam0, int iParam1) // Position - 0x464E Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_53(14) && !func_93(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_33199 != 0 && !Global_79389)
		return 0;

	if (func_92(&Global_4543384))
	{
		if (func_90(&Global_4543384, iParam0))
			return 0;
	
		if (func_83(&Global_4543384, iParam0))
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

BOOL func_83(var uParam0, int iParam1) // Position - 0x46EB Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_53(14) && !func_93(iParam1))
		return false;

	if (func_90(uParam0, iParam1))
		return false;

	if (func_89(uParam0) < 0f)
		func_88(uParam0, 0);

	func_86(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_84(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_84(var uParam0, int iParam1) // Position - 0x479C Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_53(14) && !func_93(iParam1))
		return 0;

	if (func_90(uParam0, iParam1))
		return 0;

	if (func_89(uParam0) < 0f)
		func_88(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_85(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_85(var uParam0, int iParam1) // Position - 0x4817 Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_86(var uParam0) // Position - 0x4828 Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_87(uParam0, i);
	}

	func_88(uParam0, Global_4543383 - 0.5f);
	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x485C Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x486C Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_89(var uParam0) // Position - 0x4889 Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_90(var uParam0, int iParam1) // Position - 0x4895 Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_91(uParam0, iParam1) != -1;
}

int func_91(var uParam0, int iParam1) // Position - 0x48A7 Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_92(var uParam0) // Position - 0x48D4 Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_93(int iParam0) // Position - 0x48E2 Hash - 0x5000025C ^0x5000025C
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

BOOL func_94(int iParam0, int iParam1) // Position - 0x4932 Hash - 0x77E0C72A ^0x80DA2A54
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

void func_95(int iParam0, int iParam1) // Position - 0x4983 Hash - 0xE9A65642 ^0xF9847A54
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59908[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59908[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59908[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59908[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_96() // Position - 0x49E0 Hash - 0xFD5B61DC ^0x7C6336B1
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61340[0] == outValue))
			Global_61340[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61340[1] == outValue))
			Global_61340[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_61340[2] == outValue))
			Global_61340[2] = outValue;
	}

	return;
}

int func_97(eCharacter echParam0) // Position - 0x4A55 Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2169[echParam0 /*29*/].f_17;
}

BOOL func_98(float fParam0, float fParam1, float fParam2) // Position - 0x4A66 Hash - 0x142F7A4A ^0x142F7A4A
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

void func_99() // Position - 0x4ADB Hash - 0x93BEF0BB ^0x1B158CC
{
	Cam cam;

	cam = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, true, 2);
	CAM::SET_CAM_ACTIVE(cam, true);
	return;
}

BOOL func_100(int iParam0) // Position - 0x4B19 Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_101())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_101() // Position - 0x4B63 Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

Vector3 func_102(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4B95 Hash - 0xCC19B9A5 ^0xE50E4CBA
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

	if (SYSTEM::VDIST(vParam0, -3039.6548f, 602.4346f, 6.5719f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { -3045.49f, 604.46f, 7.02f };
		num = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { 278.97f, -1255.06f, 28.88f };
		num = 8;
	}

	while (num < 8)
	{
		switch (num)
		{
			case 0:
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
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
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
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
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
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
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
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
	
		SYSTEM::WAIT(0);
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_103(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6) // Position - 0x5196 Hash - 0x8E885180 ^0x57B062D3
{
	float num;
	float value;
	float num2;
	float num3;
	var unk3;

	value = fParam3;
	num2 = SYSTEM::COS(value);
	num3 = SYSTEM::SIN(value);
	num = (fParam4 * num2) + (fParam4.f_1 * num3);
	num.f_1 = (fParam4.f_1 * num2) - (fParam4 * num3);
	unk3 = { uParam0 + num };
	return unk3;
}

void func_104(Ped pedParam0, var uParam1, var uParam2, char* sParam3, char* sParam4) // Position - 0x51E3 Hash - 0xDB81DBE3 ^0xCC27ED20
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
	uParam2->f_2 = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	num4 = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	heading = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
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
					uParam2->f_2 = func_105(ENTITY::GET_ENTITY_COORDS(pedParam0, false), *uParam1, 1);
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
							uParam2->f_2 = func_105(animInitialOffsetPosition + { -0.75f, 0f, 0f }, *uParam1, 1);
					
						num = num + 1;
					}
				}
				break;
		
			case 2:
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

float func_105(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x539B Hash - 0x9F66817B ^0x1A614DC8
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

float func_106(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x5400 Hash - 0xEEDD0661 ^0xB3D59927
{
	var entityCoords;
	var entityCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };
	return func_105(entityCoords, entityCoords2, iParam2);
}

void func_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x542C Hash - 0x7B97391D ^0x9AF8EB5F
{
	BOOL flag;
	float dx;
	float headingFromVector2d;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_108(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_108(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
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

BOOL func_108(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x552D Hash - 0x910E6355 ^0xC68C334A
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

void func_109() // Position - 0x55B4 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21152 = 0;
	func_110();
	return;
}

void func_110() // Position - 0x55C4 Hash - 0xF6D04E68 ^0x80AE5309
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

BOOL func_111(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x55E5 Hash - 0xEF9D4F61 ^0xC848BDEA
{
	func_113(bParam5, bParam6);
	func_112(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_112(Vehicle veParam0) // Position - 0x563C Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_113(BOOL bParam0, BOOL bParam1) // Position - 0x5668 Hash - 0xC86614C6 ^0xCD39041A
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

void func_114(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x57B9 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_122(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_50())
				Global_20930.f_1 = 3;
		
			Global_22286 = 5;
		}
	
		func_121(true, bParam3, bParam2, false);
		Global_64172 = true;
		Global_76501 = true;
		Global_79387 = true;
	}
	else
	{
		func_122(0);
		HUD::THEFEED_RESUME();
		Global_64172 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_121(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID()) && !func_116(PLAYER::PLAYER_ID(), 0) && !func_115() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_119(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_79387 = false;
	}

	return;
}

BOOL func_115() // Position - 0x5906 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

BOOL func_116(Player plParam0, int iParam1) // Position - 0x5920 Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_118(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_117(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_117(int iParam0, BOOL bParam1) // Position - 0x5979 Hash - 0x1DCD393E ^0x1DCD393E
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_74();

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

BOOL func_118(Player plParam0) // Position - 0x59BA Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_119(Player plParam0) // Position - 0x59DC Hash - 0x68897CDD ^0x7A533860
{
	if (func_116(plParam0, 0))
		return true;

	if (func_120())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_120() // Position - 0x5A1B Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_121(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5A29 Hash - 0x3167F4C7 ^0xCE6B9B6A
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

void func_122(int iParam0) // Position - 0x5A5C Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 13);
	else
		MISC::CLEAR_BIT(&Global_8800, 13);

	return;
}

BOOL func_123() // Position - 0x5A7F Hash - 0xAE7ACCE7 ^0x248F8BD7
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			return true;

	return false;
}

BOOL func_124(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5AA0 Hash - 0xF0D380FF ^0x29DD7336
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

BOOL func_125(int iParam0) // Position - 0x5B85 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_126(iParam0));
}

char* func_126(int iParam0) // Position - 0x5B97 Hash - 0x8B1302A6 ^0xE81E2A0
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

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x5BD9 Hash - 0x263E14E9 ^0x46FE135B
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5C31 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_129();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_129() // Position - 0x5C4A Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_130(character) && !func_53(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_130(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_130(eCharacter echParam0) // Position - 0x5D47 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x5D53 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x5D90 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_130(character))
		return func_133(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_133(eCharacter echParam0) // Position - 0x5DB5 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

void func_134() // Position - 0x5DC4 Hash - 0xE3DF5FA ^0x805AB187
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_135() // Position - 0x5DF4 Hash - 0x8496CC08 ^0x45E487C4
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 3f, 3f, 3f };
	vector2 = { -3f, -3f, -3f };

	if (PED::IS_PED_INJURED(pedLocal_60))
	{
		return true;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 5f, true))
			return true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			return true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 3f))
			return true;
	}

	return false;
}

void func_136() // Position - 0x5EDD Hash - 0x1C806C4C ^0x9E5C686B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true)) > fLocal_163 + 50f)
			func_200();
		else if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_190)
			func_200();

	return;
}

void func_137() // Position - 0x5F28 Hash - 0x80529C8 ^0x11207585
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, Global_20, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}

	return;
}

void func_138() // Position - 0x5F6D Hash - 0xE863900 ^0xB4DC57F2
{
	float width;

	if (iLocal_88 == 1)
		width = 13f;

	if (iLocal_88 == 4)
		width = 5.75f;

	if (iLocal_88 == 1 || iLocal_88 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_164, uLocal_167, width, false, true, 0))
		{
			if (!bLocal_155)
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_155 = true;
					bLocal_156 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_170, uLocal_173, width, false, true, 0))
		{
			if (!bLocal_156)
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_156 = true;
					bLocal_155 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_176, uLocal_179, width, false, true, 0))
			if (!bLocal_157)
				if (!PED::IS_PED_INJURED(pedLocal_60))
					bLocal_157 = true;
	}

	if (!bLocal_158)
	{
		if (!PED::IS_PED_INJURED(pedLocal_60))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_106, 4, 0, 0, 0) || func_62())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					
						if (iLocal_45 == 2)
							TASK::TASK_PLAY_ANIM(0, sLocal_375, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, false, false, false);
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						bLocal_158 = true;
					}
				}
			}
		}
	}

	return;
}

void func_139(Ped pedParam0, var uParam1) // Position - 0x60EF Hash - 0xAF96896B ^0xCFCA7455
{
	float angle;

	angle = 65f;

	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				SYSTEM::SETTIMERA(0);
				*uParam1 = *uParam1 + 1;
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), angle))
					*uParam1 = *uParam1 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), angle))
					*uParam1 = 0;
			break;
	}

	return;
}

void func_140() // Position - 0x61A7 Hash - 0x2A4D7EF9 ^0xBF21D6A8
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_189))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
			fLocal_163 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true));
	
		func_63(joaat("RC_WALLETS_RECOVERED"), 1);
		PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 250);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			OBJECT::DELETE_OBJECT(&obLocal_62);
	
		func_143();
		func_142(&uLocal_390);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			if (!PED::IS_PED_INJURED(pedLocal_60))
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
	
		func_148(false);
		OBJECT::REMOVE_PICKUP(pkLocal_189);
	
		if (!bLocal_54)
		{
			iLocal_46 = 5;
			func_141(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}

	return;
}

void func_141(int iParam0) // Position - 0x623F Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_126(iParam0), -1);
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
					_DISPLAY_HELP_TEXT(func_126(iParam0), -1);
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
					_DISPLAY_HELP_TEXT(func_126(iParam0), -1);
					Global_113969.f_24998.f_4 = Global_113969.f_24998.f_4 + 1;
					MISC::SET_BIT(&Global_113965, 2);
				}
			}
			break;
	}

	return;
}

void func_142(var uParam0) // Position - 0x631A Hash - 0xEE73B491 ^0x5CAB0245
{
	*uParam0 = -99;
	return;
}

void func_143() // Position - 0x6328 Hash - 0x534F0E1 ^0x66C0F1A6
{
	blLocal_65 = 0;

	if (!HUD::DOES_BLIP_EXIST(blLocal_63))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
			blLocal_63 = func_144(pedLocal_60, false, 0);

	return;
}

Blip func_144(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x6352 Hash - 0xDAE0482B ^0xDAE0482B
{
	iParam2 = iParam2;
	return func_145(pedParam0, bParam1, 145);
}

Blip func_145(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x6368 Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_146(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2169[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2169[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_146(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x63B2 Hash - 0x2E5A72B ^0x64F26CC0
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

var func_147(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6456 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_148(BOOL bParam0) // Position - 0x646D Hash - 0xAE8F1E8 ^0x86197B04
{
	if (!PED::IS_PED_INJURED(pedLocal_60) && iLocal_88 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			}
		
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::CLEAR_PED_TASKS(pedLocal_60);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}

	return;
}

BOOL func_149() // Position - 0x6553 Hash - 0x4A9F6B34 ^0xD8E45CBA
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_62))
			if (!PED::IS_PED_INJURED(pedLocal_60))
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, pedLocal_60))
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 18f, 18f, 18f, false, true, 0))
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							return true;

	return false;
}

void func_150(Blip blParam0, var uParam1) // Position - 0x65B1 Hash - 0xE50655DD ^0x9FA3F606
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
	
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_151(0))
			func_141(1);
	}

	return;
}

BOOL func_151(int iParam0) // Position - 0x660F Hash - 0xAA29B344 ^0xAA29B344
{
	return IS_BIT_SET(Global_113965, iParam0);
}

void func_152() // Position - 0x661E Hash - 0x8D064A35 ^0xC5259F7
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 8f, 8f, 18f, false, true, 0) || ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_60))
			HUD::CLEAR_PRINTS();

	return;
}

void func_153() // Position - 0x665F Hash - 0x697BC42B ^0x9CC72B67
{
	if (HUD::DOES_BLIP_EXIST(blLocal_64))
		HUD::REMOVE_BLIP(&blLocal_64);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_62))
		{
			ENTITY::DETACH_ENTITY(obLocal_62, true, true);
			OBJECT::DELETE_OBJECT(&obLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}

	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_105, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_45 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 1, false);
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		}
	}

	return;
}

BOOL func_154() // Position - 0x66FE Hash - 0x2F6A50DF ^0xAA13E4F9
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
			if (bLocal_147)
				return true;
	else if (bLocal_147)
		return true;

	return false;
}

void func_155() // Position - 0x6735 Hash - 0x4F616B78 ^0x4811CC07
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
	}

	return;
}

BOOL func_156() // Position - 0x67CF Hash - 0x62CE4D2C ^0x423F371D
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (PED::IS_PED_RAGDOLL(pedLocal_60))
			return true;

	return false;
}

Blip func_157(Pickup pkParam0) // Position - 0x67EF Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_158(pkParam0);
}

Blip func_158(Pickup pkParam0) // Position - 0x67FD Hash - 0x42B7DDF3 ^0xA5D225DC
{
	Blip blip;

	if (!OBJECT::DOES_PICKUP_EXIST(pkParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_PICKUP(pkParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	return blip;
}

BOOL func_159() // Position - 0x6835 Hash - 0xFDCB6DD8 ^0x13C05F67
{
	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 18f, 18f, 18f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_141 = 1;
							return true;
						}
					}
				}
			
				if (func_160())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_141 = 2;
					return true;
				}
			
				if (PED::IS_PED_INJURED(pedLocal_61))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
						{
							if (!PED::IS_PED_INJURED(pedLocal_60))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_60);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
							}
						}
					
						SYSTEM::SETTIMERB(0);
						iLocal_141 = 2;
						return true;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_141 = 2;
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_61);
						TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
					}
				
					return true;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_141 = 3;
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_160() // Position - 0x69D9 Hash - 0x4B7F4D08 ^0x9FDF7F19
{
	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		if (PED::CAN_PED_SEE_HATED_PED(pedLocal_61, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 20f, 20f, 20f, false, true, 0))
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61))
					return true;
	
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			return true;
	
		if (PED::IS_PED_RAGDOLL(pedLocal_61))
			return true;
	}

	return false;
}

void func_161() // Position - 0x6A63 Hash - 0x31556232 ^0x4B853F2D
{
	if (bLocal_56)
	{
		if (!bLocal_57)
			if (!PED::IS_PED_INJURED(pedLocal_61))
				if (WEAPON::IS_PED_ARMED(pedLocal_61, 4))
					if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0) || func_62() || func_62())
						bLocal_57 = true;
				else if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_105, 4, 0, 0, 0) || func_62() || func_62())
					bLocal_57 = true;
	}
	else if (func_160())
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_114, 4, 0, 0, 0) || func_62() || func_62())
		{
			if (WEAPON::IS_PED_ARMED(pedLocal_61, 4))
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
			else
				func_153();
		
			bLocal_56 = true;
		}
	}

	return;
}

BOOL func_162() // Position - 0x6B2D Hash - 0x3732D92F ^0x802CE349
{
	int weaponHash;

	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 20f, 20f, 20f, false, true, 0))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
					return true;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
			if (weaponHash == joaat("WEAPON_STUNGUN"))
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(pedLocal_60, joaat("WEAPON_STUNGUN"), 0))
					return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}
	else
	{
		return true;
	}

	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 3f, true))
		return true;

	return false;
}

void func_163() // Position - 0x6BE9 Hash - 0x41B7DB4D ^0xF7544BD6
{
	iLocal_45 == 2;

	if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_60))
				{
					func_164(pedLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}

	if (!bLocal_58)
		if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 200f)
			if (!ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_61))
				iLocal_46 = 8;

	return;
}

void func_164(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x6C62 Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x6C79 Hash - 0xA17D549C ^0x804C35E3
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

void func_166() // Position - 0x6E6E Hash - 0x2E4D0BD7 ^0xE21A4FC8
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_51)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				iLocal_162 = 3;
				bLocal_51 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				iLocal_162 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
	
		if (bLocal_51)
		{
			if (!bLocal_134)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 7f, 7f, 7f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_60) == iLocal_162)
						{
							TASK::TASK_LOOK_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_104, 4, 0, 0, 0);
							bLocal_153 = true;
							bLocal_134 = true;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(pedLocal_60, true);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_104, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						SYSTEM::SETTIMERA(0);
						bLocal_153 = true;
						bLocal_134 = true;
					}
				}
			}
		}
	}

	return;
}

BOOL func_167() // Position - 0x70CF Hash - 0xB143735F ^0x2A0BC3D6
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 12f, 12f, 5f, false, true, 0))
			return true;

	return false;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x7101 Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_169() // Position - 0x7123 Hash - 0xC68EE3BF ^0x7F28E752
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_132)
		{
			iLocal_136 = MISC::GET_GAME_TIMER();
			bLocal_132 = true;
		}
	
		if (bLocal_132)
		{
			iLocal_137 = MISC::GET_GAME_TIMER();
		
			if (!bLocal_52)
			{
				if (iLocal_137 - iLocal_136 > 500)
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_103, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_45 == 2)
								if (!PED::IS_PED_INJURED(pedLocal_60))
									!PED::IS_PED_INJURED(pedLocal_61);
						
							if (iLocal_45 == 1)
								!PED::IS_PED_INJURED(pedLocal_60);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_63))
								HUD::REMOVE_BLIP(&blLocal_63);
						
							bLocal_52 = true;
						}
					}
				}
			}
		}
	}

	return;
}

void func_170() // Position - 0x71BF Hash - 0xF3093AFA ^0x990FBD6B
{
	float targetRadius;

	if (!bLocal_53)
	{
		if (iLocal_88 == 1)
			targetRadius = 1f;
	
		if (iLocal_88 == 2)
			targetRadius = 4f;
	
		if (iLocal_88 != 2)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (!func_197())
					if (func_184())
						func_281();
			
				if (func_183())
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_66))
					{
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
							blLocal_66 = func_144(pedLocal_61, true, 0);
					
						func_175(true);
					}
				}
			
				if (func_174())
				{
					func_173();
				
					if (iLocal_88 == 3)
					{
						if (!bLocal_55)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_61, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_85, 1f, 20000, targetRadius, 4, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							bLocal_55 = true;
						}
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_60, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, false, false, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_85, pedLocal_60, 1f, false, 1.5f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_60, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_88 == 1)
							sLocal_109 = sLocal_109;
					
						func_172();
						bLocal_53 = true;
						bLocal_147 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}

	if (bLocal_53)
	{
		if (!bLocal_133)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 60f, 60f, 50f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, pedLocal_61, 0);
				
					bLocal_133 = true;
				}
				else
				{
					bLocal_133 = true;
				}
			}
		}
	
		if (bLocal_133 && !bLocal_131)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_102, 4, 0, 0, 0) || func_62())
				{
					TASK::CLEAR_PED_TASKS(pedLocal_60);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_enter", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_base", 8f, -4f, 7000, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_exit", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					func_173();
					pkLocal_189 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_PURSE"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_60, 0f, 2.5f, 0f), 1067030938, 1069547520), iLocal_142, iLocal_190, true, hLocal_83);
					bLocal_131 = true;
				}
			}
		}
	
		if (bLocal_131)
		{
			if (PED::IS_PED_INJURED(pedLocal_61))
			{
				func_171();
			}
			else
			{
				switch (iLocal_665)
				{
					case 0:
						uLocal_668 = { OBJECT::GET_PICKUP_COORDS(pkLocal_189) - { 0f, 0f, 0.75f } };
					
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_668, pedLocal_60, 2f, false, 0.1f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							iLocal_666 = MISC::GET_GAME_TIMER();
						}
					
						iLocal_665 = 1;
						break;
				
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							uLocal_668 = { OBJECT::GET_PICKUP_COORDS(pkLocal_189) - { 0f, 0f, 0.75f } };
						
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), uLocal_668, true) > 1f)
								{
									iLocal_667 = 1;
									iLocal_665 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_61);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_PLAY_ANIM(0, sLocal_358, "pickup_low", 8f, -4f, -1, 8224, 0, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
									iLocal_665 = 2;
								}
							}
							else
							{
								iLocal_665 = 4;
							}
						}
					
						if (MISC::GET_GAME_TIMER() - iLocal_666 > 15000)
						{
							iLocal_667 = 1;
							iLocal_665 = 4;
						}
						break;
				
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_358, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
							{
								OBJECT::REMOVE_PICKUP(pkLocal_189);
								iLocal_665 = 3;
							}
							else
							{
								iLocal_665 = 4;
							}
						}
						break;
				
					case 3:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_358, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_358, "pickup_low") > 0.58f || !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_358, "pickup_low", 3))
							iLocal_665 = 4;
						break;
				
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, true, 1);
						TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_61, false, false);
						bLocal_147 = true;
						break;
				}
			}
		}
	}

	return;
}

void func_171() // Position - 0x7655 Hash - 0xED236EF ^0x85FC85FD
{
	if (HUD::DOES_BLIP_EXIST(blLocal_63))
		HUD::REMOVE_BLIP(&blLocal_63);

	if (!HUD::DOES_BLIP_EXIST(blLocal_65))
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
			blLocal_65 = func_157(pkLocal_189);

	iLocal_46 = 4;
	return;
}

void func_172() // Position - 0x768A Hash - 0xE7F5E743 ^0x1166DE48
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (PED::IS_PED_FACING_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_365, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_366, 8f, -8f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (iLocal_88 == 4)
		{
			iLocal_377 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.3917f, 28.4847f, 4f, 4f, 4f, 0f, false, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_366, 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_367, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_368, 8f, -8f, -1, 8, 0.1f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.6864f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (iLocal_88 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_368, 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}

	return;
}

void func_173() // Position - 0x7AF8 Hash - 0x9F4AB18F ^0xDF3BFCAE
{
	if (HUD::DOES_BLIP_EXIST(blLocal_66))
		HUD::REMOVE_BLIP(&blLocal_66);

	if (!HUD::DOES_BLIP_EXIST(blLocal_64))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
			blLocal_64 = func_144(pedLocal_61, true, 0);

	return;
}

BOOL func_174() // Position - 0x7B2E Hash - 0x793E98B7 ^0x914EAB47
{
	BOOL num;

	num = 0;

	if (iLocal_88 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.30515f, -1670.3619f, 53.730835f, -91.94043f, -1578.8281f, 24.96221f, 18f, false, false, 0))
			num = 1;
	else if (iLocal_88 == 2)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), true) < 30f)
			num = 1;
	else if (iLocal_88 == 4)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.326782f, -959.64435f, 38.444405f, 119.920845f, -1021.23083f, 21.857378f, 123.75f, false, true, 0))
			num = 1;
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
		num = 1;

	return num;
}

int func_175(BOOL bParam0) // Position - 0x7C08 Hash - 0x3A78A0E1 ^0x128779E7
{
	if (func_177())
	{
		Global_113959 = true;
		Global_113956 = MISC::GET_GAME_TIMER();
	
		if (func_176(Global_113958))
			func_141(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_176(Global_113958))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

BOOL func_176(int iParam0) // Position - 0x7C5B Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_177() // Position - 0x7C8A Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_178(&Global_33008, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_178(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x7CC0 Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98991.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_182(0))
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
			func_179(uParam0, iParam4);
	}

	return 2;
}

void func_179(var uParam0, int iParam1) // Position - 0x7DF7 Hash - 0x6AC97785 ^0x6AC97785
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x7E46 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_181(iParam0, Global_44042);
}

BOOL func_181(int iParam0, int iParam1) // Position - 0x7E57 Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_182(int iParam0) // Position - 0x8038 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_183() // Position - 0x805A Hash - 0x793E98B7 ^0x914EAB47
{
	BOOL num;

	num = 0;

	if (iLocal_88 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.10301f, -1682.4211f, 53.693f, -83.53208f, -1567.5836f, 25.187452f, 40.75f, false, false, 0))
			num = 1;
	else if (iLocal_88 == 2)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.15063f, -296.19617f, 62.765713f, 210.46458f, -243.51062f, 46.13731f, 123.75f, false, true, 0))
			num = 1;
	else if (iLocal_88 == 3)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
			num = 1;

	return num;
}

BOOL func_184() // Position - 0x8110 Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_193())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
			return false;

	if (func_185(100f, true) != -1)
		return true;

	return false;
}

int func_185(float fParam0, BOOL bParam1) // Position - 0x8172 Hash - 0xA169FFDC ^0x284941E0
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
		if (func_130(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_191();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113969.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_113969.f_18577[num /*6*/], 3))
				{
					func_186(num, &unk);
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

void func_186(int iParam0, var uParam1) // Position - 0x8223 Hash - 0xCF1528B4 ^0x5D57EFCC
{
	switch (iParam0)
	{
		case 0:
			func_187(uParam1, "Abigail1", func_189(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 1:
			func_187(uParam1, "Abigail2", func_189(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 2:
			func_187(uParam1, "Barry1", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 3:
			func_187(uParam1, "Barry2", func_189(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 4:
			func_187(uParam1, "Barry3", func_189(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 5:
			func_187(uParam1, "Barry3A", func_189(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 6:
			func_187(uParam1, "Barry3C", func_189(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 7:
			func_187(uParam1, "Barry4", func_189(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_188(iParam0), 0, 0);
			break;
	
		case 8:
			func_187(uParam1, "Dreyfuss1", func_189(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 9:
			func_187(uParam1, "Epsilon1", func_189(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 10:
			func_187(uParam1, "Epsilon2", func_189(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 11:
			func_187(uParam1, "Epsilon3", func_189(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 12:
			func_187(uParam1, "Epsilon4", func_189(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 13:
			func_187(uParam1, "Epsilon5", func_189(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 14:
			func_187(uParam1, "Epsilon6", func_189(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 15:
			func_187(uParam1, "Epsilon7", func_189(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 16:
			func_187(uParam1, "Epsilon8", func_189(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 17:
			func_187(uParam1, "Extreme1", func_189(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 18:
			func_187(uParam1, "Extreme2", func_189(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 19:
			func_187(uParam1, "Extreme3", func_189(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 20:
			func_187(uParam1, "Extreme4", func_189(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 21:
			func_187(uParam1, "Fanatic1", func_189(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_188(iParam0), 1, 0);
			break;
	
		case 22:
			func_187(uParam1, "Fanatic2", func_189(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_188(iParam0), 1, 0);
			break;
	
		case 23:
			func_187(uParam1, "Fanatic3", func_189(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_188(iParam0), 0, 1);
			break;
	
		case 24:
			func_187(uParam1, "Hao1", func_189(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_188(iParam0), 0, 1);
			break;
	
		case 25:
			func_187(uParam1, "Hunting1", func_189(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 26:
			func_187(uParam1, "Hunting2", func_189(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 27:
			func_187(uParam1, "Josh1", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 28:
			func_187(uParam1, "Josh2", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 29:
			func_187(uParam1, "Josh3", func_189(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 30:
			func_187(uParam1, "Josh4", func_189(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 31:
			func_187(uParam1, "Maude1", func_189(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 32:
			func_187(uParam1, "Minute1", func_189(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 33:
			func_187(uParam1, "Minute2", func_189(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 34:
			func_187(uParam1, "Minute3", func_189(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 35:
			func_187(uParam1, "MrsPhilips1", func_189(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 36:
			func_187(uParam1, "MrsPhilips2", func_189(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 37:
			func_187(uParam1, "Nigel1", func_189(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 38:
			func_187(uParam1, "Nigel1A", func_189(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 39:
			func_187(uParam1, "Nigel1B", func_189(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
	
		case 40:
			func_187(uParam1, "Nigel1C", func_189(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
	
		case 41:
			func_187(uParam1, "Nigel1D", func_189(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_188(iParam0), 1, 1);
			break;
	
		case 42:
			func_187(uParam1, "Nigel2", func_189(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 43:
			func_187(uParam1, "Nigel3", func_189(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 1);
			break;
	
		case 44:
			func_187(uParam1, "Omega1", func_189(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 45:
			func_187(uParam1, "Omega2", func_189(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 46:
			func_187(uParam1, "Paparazzo1", func_189(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 47:
			func_187(uParam1, "Paparazzo2", func_189(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 48:
			func_187(uParam1, "Paparazzo3", func_189(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 49:
			func_187(uParam1, "Paparazzo3A", func_189(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 50:
			func_187(uParam1, "Paparazzo3B", func_189(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 51:
			func_187(uParam1, "Paparazzo4", func_189(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 52:
			func_187(uParam1, "Rampage1", func_189(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 54:
			func_187(uParam1, "Rampage3", func_189(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 55:
			func_187(uParam1, "Rampage4", func_189(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 56:
			func_187(uParam1, "Rampage5", func_189(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_188(iParam0), 0, 0);
			break;
	
		case 53:
			func_187(uParam1, "Rampage2", func_189(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_188(iParam0), 1, 0);
			break;
	
		case 57:
			func_187(uParam1, "TheLastOne", func_189(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 58:
			func_187(uParam1, "Tonya1", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 59:
			func_187(uParam1, "Tonya2", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 60:
			func_187(uParam1, "Tonya3", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 61:
			func_187(uParam1, "Tonya4", func_189(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		case 62:
			func_187(uParam1, "Tonya5", func_189(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_188(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_187(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x9398 Hash - 0x340E6E87 ^0xA591C803
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

int func_188(int iParam0) // Position - 0x9429 Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_189(int iParam0) // Position - 0x976F Hash - 0x49BA4072 ^0x1FDE8EAC
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_190(iParam0) };

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

struct<2> func_190(int iParam0) // Position - 0x97A5 Hash - 0x37A0347F ^0xA5AE98BC
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

int func_191() // Position - 0x9BF0 Hash - 0x35BC7314 ^0x35BC7314
{
	func_129();

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

BOOL func_192() // Position - 0x9C36 Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_193() // Position - 0x9C53 Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_196() && !func_192())
		return true;

	if (func_195() && func_194())
		return true;

	return false;
}

BOOL func_194() // Position - 0x9C85 Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113687 > 0;
}

BOOL func_195() // Position - 0x9C93 Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_98435 != -1)
		return true;

	return false;
}

BOOL func_196() // Position - 0x9CA8 Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

BOOL func_197() // Position - 0x9CCB Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113958 == func_198() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113959)
		return true;

	return false;
}

int func_198() // Position - 0x9CF6 Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_199(unk);
	return num;
}

int func_199(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x9D13 Hash - 0x6DA57317 ^0x57A32A43
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

void func_200() // Position - 0x9EED Hash - 0x2BF5CDB9 ^0x8DC5AE39
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);

	func_299(25, iLocal_88);
	func_204();
	func_201();
	func_281();
	return;
}

void func_201() // Position - 0x9F1F Hash - 0xD765C186 ^0xD765C186
{
	func_202();
	return;
}

int func_202() // Position - 0x9F2C Hash - 0x9482CBBF ^0x8B17A994
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x9F77 Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

int func_204() // Position - 0x9F9F Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_205(int iParam0) // Position - 0x9FA8 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113955 = iParam0;
	return;
}

void func_206() // Position - 0x9FB6 Hash - 0x719310E9 ^0xC2EDAF18
{
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_61))
				TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, false, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
				TASK::TASK_PLAY_ANIM(pedLocal_60, sLocal_359, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, false, false, false);
		
			iLocal_138 = iLocal_138 + 1;
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					if (func_183())
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_66))
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
								blLocal_66 = func_144(pedLocal_61, true, 0);
						
							if (!func_197())
								func_175(true);
						}
					}
				
					if (func_174())
					{
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_ARG", 4, 0, 0, 0);
						func_173();
						iLocal_185 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						bLocal_188 = true;
						iLocal_138 = iLocal_138 + 1;
					}
				}
				else if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_143, 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					SYSTEM::WAIT(0);
					func_212();
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_211())
					iLocal_138 = 4;
			
				if (func_160())
					iLocal_138 = 9;
			
				if (func_210())
					iLocal_138 = 6;
			
				if (func_209())
					iLocal_138 = 4;
			}
		
			if (!func_197())
				if (func_184())
					func_281();
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 6f, 6f, 15f, false, true, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(pedLocal_61, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 3f, 3f, 15f, false, true, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), pedLocal_61, 65f))
							{
								iLocal_187 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								iLocal_187 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
			}
		
			if (func_211() || func_209())
				iLocal_138 = 4;
		
			if (func_160())
				iLocal_138 = 9;
		
			if (func_210())
				iLocal_138 = 6;
			break;
	
		case 3:
			if (iLocal_186 - iLocal_187 > 12500)
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					iLocal_138 = 4;
		
			if (iLocal_186 - iLocal_187 > 5500)
			{
				if (!bLocal_135)
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_112, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_135 = true;
						
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
							{
								if (!PED::IS_PED_INJURED(pedLocal_60))
								{
									TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_143, 250f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_60, true);
									SYSTEM::WAIT(0);
								}
							
								!PED::IS_PED_INJURED(pedLocal_60);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_63))
									HUD::REMOVE_BLIP(&blLocal_63);
							}
						}
					}
				}
			}
		
			if (bLocal_135)
			{
				iLocal_138 = 10;
			}
			else
			{
				if (func_211())
					iLocal_138 = 4;
			
				if (func_160())
					iLocal_138 = 9;
			
				if (func_210())
					iLocal_138 = 6;
			
				if (func_208())
					iLocal_138 = 9;
			
				if (func_209())
					iLocal_138 = 4;
			}
			break;
	
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (PED::IS_PED_INJURED(pedLocal_61) || func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 100f)
				{
					func_207();
					func_212();
				}
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
					
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_61, false), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					
						bLocal_146 = true;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_61);
					TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_64))
						HUD::REMOVE_BLIP(&blLocal_64);
				}
			}
		
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				func_109();
		
			SYSTEM::WAIT(0);
		
			if (!bLocal_146)
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_FKIT", 4, 0, 0, 0);
			
				func_281();
			}
			break;
	
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
				{
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_AlwaysFlee, true);
						PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_111, 4, 0, 0, 0);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
				{
					if (!PED::IS_PED_INJURED(pedLocal_60))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							bLocal_146 = true;
						}
					}
				}
			
				if (!bLocal_146)
				{
					SYSTEM::WAIT(0);
					func_281();
				}
			}
			break;
	
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_112, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(pedLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						}
					}
				}
			
				SYSTEM::WAIT(0);
				func_281();
			}
			break;
	
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_138 = iLocal_138 + 1;
			break;
	
		case 8:
			if (SYSTEM::TIMERA() > 200)
				func_212();
			break;
	
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(pedLocal_61, 50f, 0);
				
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_109();
				
					SYSTEM::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_60);
					TASK::TASK_COWER(pedLocal_60, 2000);
					bLocal_146 = true;
				}
			}
			break;
	}

	if (iLocal_138 != 8 && bLocal_146)
		iLocal_138 = 7;

	iLocal_186 = MISC::GET_GAME_TIMER();

	if (bLocal_188 && !bLocal_135)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61) && ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (iLocal_186 - iLocal_185 > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 3f, 3f, 35f, false, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_FKIT", 4, 0, 0, 0) || func_62() || func_62())
					{
						PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(pedLocal_61, PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), false);
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_60, 99, 0, 0);
						TASK::TASK_SMART_FLEE_COORD(pedLocal_61, uLocal_143, 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						func_281();
					}
				}
			}
		}
	}

	return;
}

void func_207() // Position - 0xA7AA Hash - 0xC536DD5 ^0xC536DD5
{
	Global_21152 = 0;
	func_56();
	return;
}

BOOL func_208() // Position - 0xA7BA Hash - 0xAED28F73 ^0x15CA49D0
{
	if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60))
			return true;
	
		ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 2f, 2f, 2f, false, true, 0);
	}

	return false;
}

BOOL func_209() // Position - 0xA80D Hash - 0xB8538764 ^0xE7F7AAD8
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 20f, 20f, 20f, false, true, 0))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					return true;
	else
		return true;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
		if (func_160())
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;
	else
		return true;

	return false;
}

BOOL func_210() // Position - 0xA89B Hash - 0x587CBCEA ^0x6745E4EE
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return true;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_211() // Position - 0xA959 Hash - 0xCE2A0264 ^0x35A21849
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 5f, true))
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;

	return false;
}

void func_212() // Position - 0xA991 Hash - 0xC17CFD41 ^0x3F3D32A8
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!PED::IS_PED_RAGDOLL(pedLocal_60))
		{
			if (func_197())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_COWER) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_109();
				
					if (!PED::IS_PED_INJURED(pedLocal_61))
						if (!PED::IS_PED_FLEEING(pedLocal_60))
							TASK::TASK_SMART_FLEE_PED(pedLocal_60, pedLocal_61, 150f, -1, false, false);
					else if (iLocal_45 == 3)
						if (!PED::IS_PED_FLEEING(pedLocal_60))
							TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_120, 150f, -1, false, false);
				
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					SYSTEM::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
				
					if (iLocal_190 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_190 / 100) * 90);
						func_64(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_190);
						SYSTEM::WAIT(0);
						func_213(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_190 / 10, false, true);
					}
				
					func_205(3);
					func_200();
				}
			}
			else
			{
				func_281();
			}
		}
		else
		{
			func_281();
		}
	}
	else
	{
		func_281();
	}

	return;
}

void func_213(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAA9F Hash - 0xD1775FEC ^0xD1775FEC
{
	int outValue;
	Hash statHash;

	if (func_97(echParam0) == 3)
		return;

	if (func_97(echParam0) == 4)
		return;

	func_65(func_97(echParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
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
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
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

BOOL func_214() // Position - 0xAB71 Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_41) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
			return false;
	}

	if (func_193())
		return true;

	if (func_185(100f, true) != -1)
		return true;

	return false;
}

BOOL func_215() // Position - 0xABF7 Hash - 0xA5AFF926 ^0xAA71DFFD
{
	func_226();
	func_225(&uLocal_391, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_225(&uLocal_391, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_225(&uLocal_391, sLocal_375);
	func_225(&uLocal_391, sLocal_359);
	func_223(&uLocal_391, hLocal_81);
	func_223(&uLocal_391, hLocal_82);
	func_223(&uLocal_391, hLocal_83);
	func_225(&uLocal_391, sLocal_358);
	func_225(&uLocal_391, sLocal_357);
	func_225(&uLocal_391, sLocal_376);
	func_225(&uLocal_391, "RANDOM@BICYCLE_THIEF@IDLE_A");

	if (func_219(&uLocal_391))
	{
		func_216();
		return true;
	}

	return false;
}

void func_216() // Position - 0xAC84 Hash - 0x5B15BBE9 ^0x45036E01
{
	pedLocal_60 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_81, uLocal_67, fLocal_73, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_60, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_60, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 512, true);
	AUDIO::STOP_PED_SPEAKING(pedLocal_60, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(pedLocal_60);
	PED::SET_PED_MONEY(pedLocal_60, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_60, true);

	if (hLocal_81 == joaat("A_M_Y_GenStreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_UPPR, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_LOWR, 0, 2, 0);
	}

	if (hLocal_81 == joaat("A_M_Y_Business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HAIR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_UPPR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_LOWR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_ACCS, 0, 0, 0);
	}

	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &hLocal_84);
	pedLocal_61 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_82, uLocal_70, fLocal_76, true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_61, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_61, true, 0);
	WEAPON::GIVE_WEAPON_TO_PED(pedLocal_61, joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_Aggressive, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_AlwaysFlee, false);
	PED::SET_PED_DIES_WHEN_INJURED(pedLocal_61, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_61, 42, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_61, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_61, hLocal_84);
	AUDIO::STOP_PED_SPEAKING(pedLocal_61, true);

	if (!MISC::IS_STRING_NULL(sLocal_118))
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_60, sLocal_118);

	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_61, sLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), hLocal_84);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), hLocal_84);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_84, joaat("CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_84, joaat("CIVFEMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_84, joaat("PLAYER"));

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
	
		case CHAR_FRANKLIN:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
	
		case CHAR_TREVOR:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 1, pedLocal_61, sLocal_116, 0, 1);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 2, pedLocal_60, sLocal_115, 0, 1);

	if (iLocal_45 == 2)
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 1, false);

	if (iLocal_88 == 1 || iLocal_88 == 4)
		func_217();

	if (iLocal_88 == 3)
	{
		uLocal_123 = { -325.4189f, -828.8596f, 31.1f };
		fLocal_126 = { 0f, 0f, 180f };
		iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_123, fLocal_126, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_61, iLocal_129, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}

	if (iLocal_88 == 4)
		PATHFIND::DISABLE_NAVMESH_IN_AREA({ 28.5315f, -1027.5654f, 37.1197f } - { 1f, 1f, 1f }, { 28.5315f, -1027.5654f, 37.1197f } + { 1f, 1f, 1f }, true);

	return;
}

void func_217() // Position - 0xAF45 Hash - 0xC8747D35 ^0x66A50534
{
	var animInitialOffsetRotation;

	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_357, sLocal_363, uLocal_369, uLocal_372, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_357, sLocal_363, uLocal_369, uLocal_372, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_61, animInitialOffsetRotation.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_60, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_357, sLocal_364, uLocal_369, uLocal_372, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_357, sLocal_364, uLocal_369, uLocal_372, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_60, animInitialOffsetRotation.f_2);
	TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_363, 1000f, -1000f, -1, 9, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(pedLocal_60, sLocal_357, sLocal_364, 1000f, -1000f, -1, 9, 0, false, false, false);
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xB03B Hash - 0x6C235EE0 ^0x9E57F206
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

BOOL func_219(var uParam0) // Position - 0xB0D6 Hash - 0x4A1C6408 ^0x4A1C6408
{
	int i;

	if (!uParam0->f_271)
		return true;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return false;
		
			if (!func_220(&uParam0->[i /*18*/]))
				return false;
		}
	}

	uParam0->f_271 = 0;
	return true;
}

BOOL func_220(var uParam0) // Position - 0xB134 Hash - 0x5F04044A ^0x85C2A33D
{
	return func_221(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_221(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xB14B Hash - 0x8008FEBF ^0xF0538B20
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_222(iParam0))
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

int func_222(int iParam0) // Position - 0xB236 Hash - 0x3A85B246 ^0x3A85B246
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

void func_223(var uParam0, Hash hParam1) // Position - 0xB25F Hash - 0xEFFAD567 ^0xEFFAD567
{
	func_224(uParam0, 0, hParam1, "NULL", 0);
	return;
}

void func_224(var uParam0, int iParam1, Hash hParam2, char* sParam3, int iParam4) // Position - 0xB273 Hash - 0x1EECD4C7 ^0x1EECD4C7
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (hParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == hParam2)
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

	if (!uParam0->f_271)
		uParam0->f_271 = 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = hParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_225(var uParam0, char* sParam1) // Position - 0xB354 Hash - 0xEEA0A797 ^0xEEA0A797
{
	func_224(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_226() // Position - 0xB367 Hash - 0xFA8DC7BD ^0x44764CF4
{
	func_279();
	MISC::SET_BIT(&iLocal_142, 3);
	MISC::SET_BIT(&iLocal_142, 4);
	MISC::SET_BIT(&iLocal_142, 1);

	if (iLocal_88 == 1)
	{
		sLocal_357 = "RANDOM@MUGGING1";
		sLocal_363 = "STRUGGLE_Loop_A_Thief";
		sLocal_364 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_366 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_365 = "FLEE_BACKWARD_Thief";
		sLocal_368 = "FLEE_FORWARD_Shopkeeper";
		sLocal_367 = "FLEE_FORWARD_Thief";
		func_228();
		iLocal_190 = 200;
		iLocal_46 = 2;
		uLocal_143 = { -132.2607f, -1628.3357f, 31.2107f };
		hLocal_81 = joaat("A_M_Y_Business_02");
		hLocal_82 = joaat("G_M_Y_StrPunk_01");
		uLocal_67 = { -138.814f, -1635.9751f, 31.357f };
		fLocal_73 = 318.519f;
		uLocal_70 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_76 = 98f;
		uLocal_369 = { uLocal_67 };
		uLocal_372 = { 0f, 0f, fLocal_73 };
		uLocal_164 = { -103.89513f, -1593.239f, 30.491978f };
		uLocal_167 = { -89.29615f, -1575.4436f, 32.30938f };
		uLocal_170 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_173 = { -169.81827f, -1669.5555f, 33.941727f };
		uLocal_176 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_179 = { -103.89513f, -1593.239f, 30.491978f };
		fLocal_77 = 340.0645f;
		uLocal_78 = { -151.0793f, -1650.322f, 31.6504f };
		uLocal_85 = { -133.6872f, -1630.2448f, 31.2527f };
		hLocal_83 = joaat("prop_ld_wallet_pickup");
		sLocal_101 = "REMG1AU";
		sLocal_102 = "REMG1_VIC";
		sLocal_103 = "REMG1_SHT";
		sLocal_104 = "REMG1_ASK";
		sLocal_105 = "REMG1_DRP";
		sLocal_106 = "REMG1_OHY";
		sLocal_107 = "REMG1_THK";
		sLocal_108 = "REMG1_GIV";
		sLocal_109 = "REMG1_MUGA";
		sLocal_110 = "REMG1_WHO";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_113 = "REMG1_HOM";
				sLocal_114 = "REMG1_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_113 = "REMG1_HOF";
				sLocal_114 = "REMG1_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_113 = "REMG1_HOT";
				sLocal_114 = "REMG1_WAT";
				break;
		}
	
		sLocal_117 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_118 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_115 = "MuggedMan";
		sLocal_116 = "MuggerGang";
		bLocal_48 = true;
		sLocal_376 = "move_m@hurry@b";
	}

	if (iLocal_88 == 2)
	{
		sLocal_357 = "random@mugging2";
		sLocal_359 = "random@mugging2";
		iLocal_46 = 1;
		uLocal_143 = { 287.888f, -284.603f, 52.967f };
		hLocal_81 = joaat("A_F_Y_GenHot_01");
		hLocal_82 = joaat("G_M_Y_StrPunk_01");
		uLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_73 = 260.7569f;
		uLocal_70 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_76 = 45f;
		fLocal_77 = 251f;
		uLocal_78 = { 297.4484f, -261.2914f, 53.0037f };
		hLocal_83 = joaat("prop_ld_handbag");
		sLocal_101 = "REMG2AU";
		sLocal_102 = "REMG2_VIC";
		sLocal_103 = "REMG2_SHT";
		sLocal_104 = "REMG2_ASK";
		sLocal_105 = "REMG2_DRP";
		sLocal_106 = "REMG2_OHY";
		sLocal_107 = "REMG2_THK";
		sLocal_108 = "REMG2_GIV";
		sLocal_110 = "REMG2_WHO";
		sLocal_111 = "REMG2_GUN";
		sLocal_112 = "REMG2_FUT";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_113 = "REMG2_HOM";
				sLocal_114 = "REMG2_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_113 = "REMG2_HOF";
				sLocal_114 = "REMG2_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_113 = "REMG2_HOT";
				sLocal_114 = "REMG2_WAT";
				break;
		}
	
		sLocal_117 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_115 = "MuggedYMan";
		sLocal_116 = "MuggerGang";
		bLocal_48 = true;
		sLocal_376 = "move_m@hurry@b";
	}

	if (iLocal_45 == 1)
	{
		func_227();
		iLocal_190 = 2000;
		iLocal_46 = 2;
	
		if (iLocal_88 == 3)
		{
			sLocal_357 = "RANDOM@MUGGING3";
			uLocal_143 = { -317.1964f, -824.0751f, 31.4284f };
			hLocal_81 = joaat("A_F_Y_Hipster_01");
			hLocal_82 = joaat("A_M_O_Tramp_01");
			uLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_73 = 80.7161f;
			uLocal_70 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_76 = 336.5502f;
			fLocal_77 = 81.8694f;
			uLocal_78 = { -322.3941f, -835.7213f, 30.6001f };
			uLocal_85 = { -320.9667f, -832.1209f, 30.5979f };
			hLocal_83 = joaat("prop_ld_purse_01");
			sLocal_101 = "REMG3AU";
			sLocal_102 = "REMG3_VIC";
			sLocal_103 = "REMG3_SHT";
			sLocal_104 = "REMG3_ASK";
			sLocal_105 = "REMG3_DRP";
			sLocal_106 = "REMG3_OHY";
			sLocal_107 = "REMG3_THK";
			sLocal_108 = "REMG3_GIV";
			sLocal_109 = "REMG3_MUGB";
			sLocal_110 = "REMG3_WHO";
			sLocal_111 = "REMG3_GUN";
			sLocal_112 = "REMG3_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_113 = "REMG3_HOM";
					sLocal_114 = "REMG3_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_113 = "REMG3_HOF";
					sLocal_114 = "REMG3_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_113 = "REMG3_HOT";
					sLocal_114 = "REMG3_WAT";
					break;
			}
		
			sLocal_117 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_115 = "MUGGEDHIPSTER";
			sLocal_116 = "MuggerTramp";
			bLocal_48 = true;
			sLocal_376 = "move_f@hurry@a";
		}
	
		if (iLocal_88 == 4)
		{
			func_227();
			sLocal_357 = "RANDOM@MUGGING4";
			sLocal_363 = "STRUGGLE_Loop_B_Thief";
			sLocal_364 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_366 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_365 = "FLEE_BACKWARD_Thief";
			sLocal_368 = "FLEE_FORWARD_Shopkeeper";
			sLocal_367 = "FLEE_FORWARD_Thief";
			uLocal_143 = { 32.8802f, -1016.0609f, 28.4527f };
			hLocal_81 = joaat("A_F_M_Tourist_01");
			hLocal_82 = joaat("G_M_Y_ArmGoon_02");
			uLocal_67 = { 32.2169f, -1020.8641f, 28.456f };
			fLocal_73 = 159.1445f;
			uLocal_369 = { uLocal_67 };
			uLocal_372 = { 0f, 0f, fLocal_73 };
			uLocal_70 = { 38.1933f, -1023.5788f, 28.4889f };
			fLocal_76 = 60.1372f;
			fLocal_77 = 248f;
			uLocal_78 = { 42.5323f, -990.353f, 28.248f };
			uLocal_164 = { 38.151863f, -1001.48535f, 28.422756f };
			uLocal_167 = { 40.136692f, -995.2711f, 30.371975f };
			uLocal_170 = { 37.217583f, -1040.3536f, 28.41506f };
			uLocal_173 = { 19.914917f, -1036.814f, 30.280445f };
			uLocal_176 = { 28.4511f, -1035.7179f, 28.3329f };
			uLocal_179 = { 38.6536f, -1001.0728f, 28.407f };
			uLocal_85 = { 32.536f, -1020.2932f, 28.4576f };
			hLocal_83 = joaat("prop_ld_wallet_pickup");
			sLocal_101 = "REMG4AU";
			sLocal_102 = "REMG4_VIC";
			sLocal_103 = "REMG4_SHT";
			sLocal_104 = "REMG4_ASK";
			sLocal_105 = "REMG4_DRP";
			sLocal_106 = "REMG4_OHY";
			sLocal_107 = "REMG4_THK";
			sLocal_108 = "REMG4_GIV";
			sLocal_109 = "REMG4_MUGB";
			sLocal_110 = "REMG4_WHO";
			sLocal_111 = "REMG4_GUN";
			sLocal_112 = "REMG4_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_113 = "REMG4_HOM";
					sLocal_114 = "REMG4_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_113 = "REMG4_HOF";
					sLocal_114 = "REMG4_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_113 = "REMG4_HOT";
					sLocal_114 = "REMG4_WAT";
					break;
			}
		
			sLocal_117 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_115 = "MuggedWoman";
			sLocal_116 = "MuggerGang";
			bLocal_48 = true;
			sLocal_376 = "move_f@hurry@a";
		}
	}

	return;
}

void func_227() // Position - 0xB9F6 Hash - 0x376B1001 ^0x73BF03F5
{
	sLocal_359 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_360 = "Return_Wallet_Positive_A_Player";
			sLocal_361 = "Return_Wallet_Positive_A_Female";
			sLocal_362 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_360 = "Return_Wallet_Positive_B_Player";
			sLocal_361 = "Return_Wallet_Positive_B_Female";
			sLocal_362 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_360 = "Return_Wallet_Positive_C_Player";
			sLocal_361 = "Return_Wallet_Positive_C_Female";
			sLocal_362 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_228() // Position - 0xBA6A Hash - 0x376B1001 ^0x2D0EC7CF
{
	sLocal_359 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_360 = "Return_Wallet_Positive_A_Player";
			sLocal_361 = "Return_Wallet_Positive_A_Male";
			sLocal_362 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_360 = "Return_Wallet_Positive_B_Player";
			sLocal_361 = "Return_Wallet_Positive_B_Male";
			sLocal_362 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_360 = "Return_Wallet_Positive_C_Player";
			sLocal_361 = "Return_Wallet_Positive_C_Male";
			sLocal_362 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_229(Blip blParam0, var uParam1) // Position - 0xBADE Hash - 0x54F8B7E9 ^0xFC9A9E73
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

void func_230(var uParam0) // Position - 0xBB7D Hash - 0x4AFB60B6 ^0x76DE031D
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_101533.f_20, 2) || IS_BIT_SET(Global_101533.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_231(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_231(int* piParam0) // Position - 0xBBFF Hash - 0x67977513 ^0x7F0883FC
{
	func_232(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_232(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0xBC15 Hash - 0xCB81CA4C ^0xCD422589
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_222(*piParam0))
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

void func_233(int iParam0) // Position - 0xBCE6 Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_198();

	if (iParam0 == -1)
		return;

	func_235(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113955 = 0;
	func_234();
	return;
}

void func_234() // Position - 0xBD1C Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_235(int iParam0) // Position - 0xBD59 Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113958 = iParam0;
	return;
}

BOOL func_236(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBD67 Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152557)
		return false;

	if (iParam3 == -1)
		iParam3 = func_198();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_41 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_192())
				return false;
		}
	
		if (!Global_113969.f_9088)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_193())
			return false;
	
		if (func_275())
			return false;
	
		if (Global_113958 != -1)
			return false;
	
		if (func_130(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_185(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_41.f_2 > 50f)
				return false;
	
		if (!func_274(iParam3))
			return false;
	
		if (func_130(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_273(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_273(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_130(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_272(iParam3, iParam4, 145))
				return false;
	
		if (!func_271(Global_113969.f_24998.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113960 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_270())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_261(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_260(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_260(0, 0))
			return false;
	
		if (Global_33095)
			return false;
	
		if (func_274(30) && !func_260(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_130(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_113969.f_2366.f_539.f_2300[i /*3*/] };
				num = Global_113969.f_2366.f_539.f_2296[i];
			
				if (func_259(num))
					if (func_237(i))
						if (!func_28(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_237(eCharacter echParam0) // Position - 0xC102 Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113969.f_2366.f_539.f_2296[echParam0];
	return func_238(num);
}

BOOL func_238(int iParam0) // Position - 0xC123 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_239(iParam0, 1);
}

int func_239(int iParam0, int iParam1) // Position - 0xC132 Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_259(iParam0))
		return 0;

	func_240(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_240(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC185 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_241(func_252(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_241(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC1A3 Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_251(iParam0, iParam1))
	{
		num = func_250(iParam1);
		num2 = func_248(iParam0);
		num3 = func_248(iParam0) - func_248(iParam1);
		num4 = func_250(iParam0) - func_250(iParam1);
		num5 = func_247(iParam0) - func_247(iParam1);
		num6 = func_246(iParam0) - func_246(iParam1);
		num7 = func_245(iParam0) - func_245(iParam1);
		num8 = func_244(iParam0) - func_244(iParam1);
	}
	else
	{
		num = func_250(iParam0);
		num2 = func_248(iParam1);
		num3 = func_248(iParam1) - func_248(iParam0);
		num4 = func_250(iParam1) - func_250(iParam0);
		num5 = func_247(iParam1) - func_247(iParam0);
		num6 = func_246(iParam1) - func_246(iParam0);
		num7 = func_245(iParam1) - func_245(iParam0);
		num8 = func_244(iParam1) - func_244(iParam0);
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
	
		num5 = num5 + func_243(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_242(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_242(float fParam0, float fParam1, float fParam2) // Position - 0xC3A4 Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_243(int iParam0, int iParam1) // Position - 0xC3E6 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_244(int iParam0) // Position - 0xC488 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_245(int iParam0) // Position - 0xC49B Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_246(int iParam0) // Position - 0xC4AE Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_247(int iParam0) // Position - 0xC4C1 Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_248(int iParam0) // Position - 0xC4D3 Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_249(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC4F5 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_250(int iParam0) // Position - 0xC50C Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_251(int iParam0, int iParam1) // Position - 0xC519 Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_259(iParam1) || !func_259(iParam0))
		return 1;

	num = func_248(iParam0);
	num2 = func_248(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_250(iParam0);
	num2 = func_250(iParam1);

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
	else if (num < num2)
		return 0;

	num = func_245(iParam0);
	num2 = func_245(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_244(iParam0);
	num2 = func_244(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_252() // Position - 0xC625 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_258(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_257(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_256(&unk, CLOCK::GET_CLOCK_HOURS());
	func_255(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_254(&unk, CLOCK::GET_CLOCK_MONTH());
	func_253(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_253(var uParam0, int iParam1) // Position - 0xC66B Hash - 0x15B9927E ^0x4A4674
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

void func_254(var uParam0, int iParam1) // Position - 0xC6F1 Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_255(var uParam0, int iParam1) // Position - 0xC724 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_250(*uParam0);
	num2 = func_248(*uParam0);

	if (iParam1 < 1 || iParam1 > func_243(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_256(var uParam0, int iParam1) // Position - 0xC775 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_257(var uParam0, int iParam1) // Position - 0xC7AF Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_258(var uParam0, int iParam1) // Position - 0xC7EA Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_259(int iParam0) // Position - 0xC826 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_244(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_245(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_246(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_248(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_250(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_247(iParam0);

	if (num6 < 1 || num6 > func_243(num5, num4))
		return false;

	return true;
}

BOOL func_260(int iParam0, int iParam1) // Position - 0xC902 Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113969.f_24998.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_261(int iParam0) // Position - 0xC922 Hash - 0x97844555 ^0xADCD6DAA
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_130(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_269() || Global_113016 || Global_32951 || func_268() || func_55(8, -1) || func_267() || func_266() || func_265() || func_264() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_269() || Global_32951 || func_268() || func_55(8, -1) || func_265() || func_267() || func_266() || func_264() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_269() || Global_113016 || Global_32951 || func_268() || func_55(8, -1) || func_265() || func_267() || func_266() || func_264() || Global_113969.f_7691.f_919[character] == 5 || Global_44589 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_269() || Global_113016 || Global_32951 || func_268() || func_55(8, -1) || func_267() || func_266() || func_264() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_269() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_55(8, -1) || func_264() || func_263() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_55(8, -1) || func_267() || func_266() || func_263() || func_262())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_269() || Global_32951 || func_268() || func_55(8, -1) || func_266() || func_265() || func_264() || Global_113969.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_269() || func_266() || Global_113016 || Global_32951 || func_268() || Global_45250 || func_55(8, -1) || func_265() || func_263() || func_264() || Global_113969.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_269() || Global_113016 || Global_32951 || func_268() || func_55(8, -1) || func_265() || func_263() || func_267() || func_266() || func_264())
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

BOOL func_262() // Position - 0xD03F Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_101572.f_1;
}

BOOL func_263() // Position - 0xD04D Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 13);

	return false;
}

BOOL func_264() // Position - 0xD070 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_265() // Position - 0xD08A Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_266() // Position - 0xD0B4 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_267() // Position - 0xD0C5 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_393 > 0;
}

BOOL func_268() // Position - 0xD0D6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575083;
}

BOOL func_269() // Position - 0xD0E2 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98991.f_44 == 1;

	return false;
}

BOOL func_270() // Position - 0xD0FE Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_271(int iParam0) // Position - 0xD126 Hash - 0xCDB90269 ^0xCDB90269
{
	return func_251(func_252(), iParam0);
}

BOOL func_272(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xD138 Hash - 0xBEEFD79C ^0xBEEFD79C
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

int func_273(eCharacter echParam0) // Position - 0xD21C Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_130(echParam0))
		return 7;

	return Global_113969.f_7691.f_919[echParam0];
}

BOOL func_274(int iParam0) // Position - 0xD240 Hash - 0xF2A54181 ^0xF2A54181
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

BOOL func_275() // Position - 0xD298 Hash - 0xB72C022E ^0x452A7B6D
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xD2DC Hash - 0x44DD83CC ^0x7B62A376
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

BOOL func_277(int iParam0) // Position - 0xD394 Hash - 0x5ADD7F05 ^0x5ADD7F05
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113969.f_18577[iParam0 /*6*/], 3);
}

BOOL func_278(int iParam0) // Position - 0xD3BF Hash - 0x5D95A044 ^0x5D95A044
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113969.f_18577[iParam0 /*6*/], 0);
}

void func_279() // Position - 0xD3EA Hash - 0x5588BC47 ^0x5A8512BD
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(uLocal_120, uLocal_89) < 20f)
		{
			iLocal_88 = 1;
			iLocal_45 = 2;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_92) < 20f)
		{
			iLocal_88 = 2;
			iLocal_45 = 3;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_95) < 20f)
		{
			iLocal_88 = 3;
			iLocal_45 = 1;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_98) < 20f)
		{
			iLocal_88 = 4;
			iLocal_45 = 1;
		}
	}

	return;
}

void func_280(var uParam0, int iParam1) // Position - 0xD469 Hash - 0xB6B5AC51 ^0xB6B5AC51
{
	if (iParam1 > 0)
		uParam0->f_273 = iParam1;

	return;
}

void func_281() // Position - 0xD481 Hash - 0x1AB264EF ^0x5F386838
{
	if (bLocal_154)
	{
		if (bLocal_48)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_81);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_82);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_83);
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_61))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		
			PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		
			if (!bLocal_58)
				PED::SET_PED_MONEY(pedLocal_61, iLocal_190);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
		{
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_60, true);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_WANDER_STANDARD) == 7 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				
					if (PED::IS_PED_DUCKING(pedLocal_60))
						TASK::TASK_TOGGLE_DUCK(0, 0);
				
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, uLocal_120, 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				
					if (!bLocal_152 && !bLocal_146)
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							func_109();
				}
			}
		}
	
		SYSTEM::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_62);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_65))
			HUD::REMOVE_BLIP(&blLocal_65);
	}

	if (iLocal_377 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_377))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_377);
	
		iLocal_377 = -1;
	}

	if (func_197())
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}

	func_37(&uLocal_378, 0, false);
	func_114(false, true, true, false, false, false, false);
	func_287(-1);
	func_282(&uLocal_391, false);

	if (shLocal_139 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_139);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_282(var uParam0, BOOL bParam1) // Position - 0xD626 Hash - 0xA2C979D7 ^0xA2C979D7
{
	int i;

	if (!bParam1)
		func_284(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_283(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_283(var uParam0) // Position - 0xD669 Hash - 0xF945F393 ^0x417057A1
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_284(var uParam0) // Position - 0xD682 Hash - 0x74F4F0FB ^0x74F4F0FB
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_285(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_285(var uParam0) // Position - 0xD6B9 Hash - 0x700CF0BD ^0x203ACD8D
{
	func_286(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_286(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xD6D0 Hash - 0x2AE0929C ^0x571E5810
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_222(iParam0))
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

void func_287(int iParam0) // Position - 0xD78A Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_198();

	if (iParam0 == -1)
		return;

	if (func_197())
	{
		func_292(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113960 = MISC::GET_GAME_TIMER();
		func_291(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_290(Global_113958, true), 64);
	
		if (func_289(Global_113958) > 0)
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

	func_288(&Global_33008);
	Global_113959 = false;
	func_235(-1);
	return;
}

void func_288(var uParam0) // Position - 0xD83C Hash - 0x995C9E2 ^0x995C9E2
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

int func_289(int iParam0) // Position - 0xD879 Hash - 0xAA02DAD0 ^0xAA02DAD0
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

char* func_290(int iParam0, BOOL bParam1) // Position - 0xD92A Hash - 0x959319CB ^0x90C53E46
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

void func_291(int iParam0) // Position - 0xDB73 Hash - 0xC0234809 ^0x4FD853DC
{
	Global_44593 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_292(int iParam0) // Position - 0xDB85 Hash - 0x881273A8 ^0x881273A8
{
	func_293(iParam0, 0, func_298(iParam0));
	return;
}

void func_293(int iParam0, int iParam1, int iParam2) // Position - 0xDB9A Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_252();
	func_296(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_295(iParam0, &unk);
	unk2 = { func_294(&unk) };
	return;
}

struct<16> func_294(var uParam0) // Position - 0xDBC9 Hash - 0xB55EE866 ^0x22D1E1C9
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_246(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_245(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_244(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_247(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_250(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_248(*uParam0), 64);
	return unk;
}

void func_295(int iParam0, var uParam1) // Position - 0xDC98 Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
	return;
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDCB0 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_248(*uParam0);
	i = func_250(*uParam0);
	num2 = func_247(*uParam0);
	j = func_246(*uParam0);
	k = func_245(*uParam0);
	l = func_244(*uParam0);

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

	for (m = func_243(i, num); num2 > m; m = func_243(i, num))
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
	func_297(uParam0, l, k, j, num2, i, num);
	return;
}

void func_297(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDE32 Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_258(uParam0, iParam1);
	func_257(uParam0, iParam2);
	func_256(uParam0, iParam3);
	func_254(uParam0, iParam5);
	func_255(uParam0, iParam4);
	func_253(uParam0, iParam6);
	return;
}

int func_298(int iParam0) // Position - 0xDE6A Hash - 0x4219564C ^0x4219564C
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

void func_299(int iParam0, int iParam1) // Position - 0xE00D Hash - 0x207C13D1 ^0xB1F4670
{
	if (iParam0 == -1)
		iParam0 = func_198();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_289(iParam0))
	{
		func_309(iParam0, iParam1);
	
		if (!func_308(51))
		{
			func_305("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_191(), 0, 138, 0);
			func_304(51);
		}
	
		if (func_176(iParam0))
			Global_113969.f_24998.f_2 = 3;
	
		if (func_303(iParam0, iParam1) != 322)
			func_300(func_303(iParam0, iParam1), uLocal_41, uLocal_41.f_1);
	
		Global_113957 = iParam1;
	
		if (Global_113955 == 0)
			if (Global_113958 == 1 || Global_113958 == 5 || Global_113958 == 11 || Global_113958 == 25)
				func_205(2);
			else if (Global_113958 == 26 || Global_113958 == 8 || Global_113958 == 17)
				func_205(7);
			else
				func_205(1);
	}

	return;
}

void func_300(int iParam0, var uParam1, var uParam2) // Position - 0xE111 Hash - 0xEC2439E7 ^0x1B67A713
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
		func_301();

	return;
}

void func_301() // Position - 0xE1F7 Hash - 0x9F269E94 ^0x9F269E94
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
		func_94(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_302() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = false;
			
				if (!Global_64166)
					func_202();
			}
		}
	}

	return;
}

int func_302() // Position - 0xE6B5 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

int func_303(int iParam0, int iParam1) // Position - 0xE6C0 Hash - 0xE97012CD ^0x68FBF85A
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

void func_304(int iParam0) // Position - 0xEA34 Hash - 0x12249850 ^0x46987D7A
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

void func_305(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xEA76 Hash - 0xFA14711 ^0xFA14711
{
	func_306(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_306(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xEA96 Hash - 0x2DEFD20B ^0x2F7188BE
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
		func_307();
	}

	return;
}

void func_307() // Position - 0xEC68 Hash - 0xCF8881D1 ^0x40507183
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

BOOL func_308(int iParam0) // Position - 0xED7F Hash - 0x3F44A899 ^0x7041C53
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

void func_309(int iParam0, int iParam1) // Position - 0xEDBF Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113969.f_24998.f_8[iParam0], iParam1);
	return;
}

