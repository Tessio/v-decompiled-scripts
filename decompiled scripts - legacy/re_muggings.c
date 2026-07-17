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
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	BOOL bLocal_71 = 0;
	BOOL bLocal_72 = 0;
	BOOL bLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	Ped pedLocal_79 = 0;
	Ped pedLocal_80 = 0;
	Object obLocal_81 = 0;
	Blip blLocal_82 = 0;
	Blip blLocal_83 = 0;
	Blip blLocal_84 = 0;
	Blip blLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	float fLocal_92 = 0f;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	Hash hLocal_100 = 0;
	Hash hLocal_101 = 0;
	Hash hLocal_102 = 0;
	Hash hLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	char* sLocal_120 = 0;
	char* sLocal_121 = 0;
	char* sLocal_122 = 0;
	char* sLocal_123 = 0;
	char* sLocal_124 = 0;
	char* sLocal_125 = 0;
	char* sLocal_126 = 0;
	char* sLocal_127 = 0;
	char* sLocal_128 = 0;
	char* sLocal_129 = 0;
	char* sLocal_130 = 0;
	char* sLocal_131 = 0;
	char* sLocal_132 = 0;
	char* sLocal_133 = 0;
	char* sLocal_134 = 0;
	char* sLocal_135 = 0;
	char* sLocal_136 = 0;
	char* sLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	float fLocal_145 = 0f;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	Cam caLocal_149 = 0;
	BOOL bLocal_150 = 0;
	BOOL bLocal_151 = 0;
	BOOL bLocal_152 = 0;
	BOOL bLocal_153 = 0;
	BOOL bLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	ScrHandle shLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	BOOL bLocal_165 = 0;
	BOOL bLocal_166 = 0;
	BOOL bLocal_167 = 0;
	int iLocal_168 = 0;
	BOOL bLocal_169 = 0;
	BOOL bLocal_170 = 0;
	BOOL bLocal_171 = 0;
	BOOL bLocal_172 = 0;
	BOOL bLocal_173 = 0;
	BOOL bLocal_174 = 0;
	BOOL bLocal_175 = 0;
	BOOL bLocal_176 = 0;
	BOOL bLocal_177 = 0;
	BOOL bLocal_178 = 0;
	BOOL bLocal_179 = 0;
	BOOL bLocal_180 = 0;
	int iLocal_181 = 0;
	float fLocal_182 = 0f;
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
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	BOOL bLocal_207 = 0;
	Pickup pkLocal_208 = 0;
	int iLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 16;
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
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	char* sLocal_376 = 0;
	char* sLocal_377 = 0;
	char* sLocal_378 = 0;
	char* sLocal_379 = 0;
	char* sLocal_380 = 0;
	char* sLocal_381 = 0;
	char* sLocal_382 = 0;
	char* sLocal_383 = 0;
	char* sLocal_384 = 0;
	char* sLocal_385 = 0;
	char* sLocal_386 = 0;
	char* sLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	char* sLocal_394 = 0;
	char* sLocal_395 = 0;
	int iLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 1000;
	var uLocal_407 = 1000;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 15;
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
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 1;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
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
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	iLocal_35 = 3;
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
	uLocal_108 = { -131.052f, -1627.0002f, 31.1755f };
	uLocal_111 = { 287.888f, -284.603f, 52.967f };
	uLocal_114 = { -319.66f, -832.28f, 31.61f };
	uLocal_117 = { 31f, -1019f, 28.5f };
	sLocal_137 = "";
	sLocal_376 = "RANDOM@MUGGING3";
	sLocal_377 = "pickup_object";
	sLocal_394 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_396 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_65 == 5 || iLocal_65 == 12)
		{
			func_300(25, iLocal_107);
			func_282();
		}
		else
		{
			func_282();
		}
	}

	uLocal_139 = { uScriptParam_0.f_1[0 /*3*/] };
	func_281(&uLocal_410, 3);
	func_280();

	if (iLocal_107 == 1 && func_279(55) && !func_278(55))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_237(uLocal_139, 25, iLocal_107, false, false))
		func_234(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	isPedInjured = false;

	while (true)
	{
		BUILTIN::WAIT(0);
		func_231(&uLocal_410);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		func_230(blLocal_82, &uLocal_409);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_166)
		{
			switch (iLocal_63)
			{
				case 0:
					if (func_216())
					{
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.0844f, 36.4128f, 10f, false, false, false, false, false, false, 0);
						bLocal_173 = true;
						iLocal_63 = 1;
					}
					else if (func_215())
					{
						func_282();
					}
					break;
			
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (shLocal_158 == 0)
							shLocal_158 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_MUGGING, uLocal_139, 0f);
					
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					
						switch (iLocal_65)
						{
							case 1:
								func_207();
								break;
						
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								switch (iLocal_66)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (PED::IS_PED_INJURED(pedLocal_80) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), false))
										{
											isPedInjured = PED::IS_PED_INJURED(pedLocal_79);
											!OBJECT::DOES_PICKUP_EXIST(pkLocal_208);
										
											if (isPedInjured == false && iLocal_107 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(pedLocal_79, 500, 1000, 0, false, false, false);
												TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
												PED::SET_PED_KEEP_TASK(pedLocal_79, true);
												func_206(1);
												func_201();
											}
										}
										else
										{
											func_171();
										}
									
										if (iLocal_686 == 1 && bLocal_166 == true)
											iLocal_65 = 4;
										else if (bLocal_166)
											iLocal_66 = 2;
										break;
								
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_170();
									
										if (bLocal_71 && !func_169())
											iLocal_66 = 4;
										break;
								
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (func_168())
											func_167();
									
										if (bLocal_172)
											iLocal_66 = 5;
									
										if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
											TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_80, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 4f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
										}
										break;
								
									case 5:
										func_164();
									
										if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_80, 0);
												TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
											}
										}
										break;
								}
							
								if (func_163())
									iLocal_65 = 11;
							
								bLocal_166;
								func_162();
							
								if (iLocal_66 == 0)
								{
									if (func_160())
									{
										if (iLocal_160 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(blLocal_83))
												HUD::REMOVE_BLIP(&blLocal_83);
										
											if (HUD::DOES_BLIP_EXIST(blLocal_82))
												HUD::REMOVE_BLIP(&blLocal_82);
										
											if (!HUD::DOES_BLIP_EXIST(blLocal_84))
												blLocal_84 = func_158(pkLocal_208);
										
											iLocal_65 = 4;
										}
										else
										{
											iLocal_65 = 3;
										}
									}
								
									if (func_157())
										func_156();
								}
							
								if (func_155())
								{
									func_154();
									func_153();
								
									if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_79, uLocal_201, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_160 = 2;
										iLocal_65 = 3;
									}
									else
									{
										iLocal_65 = 4;
									}
								}
							
								if (bLocal_166)
								{
									if (!PED::IS_PED_IN_COMBAT(pedLocal_80, 0))
									{
										func_151(blLocal_83, &uLocal_159);
									}
									else if (HUD::DOES_BLIP_EXIST(blLocal_83))
									{
										if (HUD::GET_BLIP_COLOUR(blLocal_83) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(blLocal_83, false);
											HUD::SET_BLIP_COLOUR(blLocal_83, 1);
										}
									}
								}
							
								if (func_150())
									iLocal_65 = 10;
								break;
						
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_149(true);
							
								if (func_168())
								{
									func_167();
									func_164();
								}
							
								if (func_163())
									iLocal_65 = 11;
							
								func_141();
								break;
						
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_149(true);
							
								if (!bLocal_169)
								{
									func_140(pedLocal_79, &uLocal_210);
									uLocal_210 = uLocal_210;
									func_139();
									func_138();
									func_137();
								
									if (func_136())
									{
										func_135();
										func_201();
									}
								
									if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_209)
										iLocal_65 = 12;
								}
							
								func_62();
								break;
						
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_61();
								break;
						
							case 3:
								func_60();
								break;
						
							case 11:
								func_59();
								break;
						
							case 6:
								if (func_163())
									iLocal_65 = 11;
							
								func_41();
								break;
						
							case 8:
								if (!PED::IS_PED_INJURED(pedLocal_79))
									if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
										iLocal_65 = 6;
									else
										func_282();
								break;
						
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
								{
									if (PED::IS_PED_INJURED(pedLocal_80))
									{
										if (HUD::DOES_BLIP_EXIST(blLocal_83))
											HUD::REMOVE_BLIP(&blLocal_83);
									
										if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
										{
											if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
												OBJECT::DELETE_OBJECT(&obLocal_81);
										
											func_40();
											bLocal_73 = true;
											func_141();
										}
									}
								}
								break;
						
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
									OBJECT::DELETE_OBJECT(&obLocal_81);
							
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_201();
								break;
						
							case 13:
								func_39();
								break;
						}
					}
				
					if (bLocal_77)
					{
						if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
								if (BUILTIN::VDIST(uLocal_201, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
									func_282();
					}
					else if (bLocal_166)
					{
						if (!PED::IS_PED_INJURED(pedLocal_80))
						{
							if (iLocal_65 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_80, true) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_80) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_80))
								{
									func_37(&uLocal_397, 0, false, false);
									iLocal_65 = 8;
								}
								else
								{
									func_4();
									func_3(blLocal_83, pedLocal_80, 100f, 1061158912, false);
								}
							}
						}
						else
						{
							func_37(&uLocal_397, 0, false, false);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
						if (!PED::IS_PED_INJURED(pedLocal_79))
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), true))
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_81, pedLocal_79))
										ENTITY::DETACH_ENTITY(obLocal_81, true, true);
				
					if (bLocal_167)
					{
						if (!bLocal_180)
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_80, true), ENTITY::GET_ENTITY_COORDS(pedLocal_79, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_80, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									bLocal_180 = true;
								}
							}
						}
					}
				
					if (bLocal_166 && !bLocal_167)
					{
						if (!PED::IS_PED_INJURED(pedLocal_80))
						{
							if (iLocal_107 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_80, SCRIPT_TASK_SMART_FLEE_PED) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_80);
									TASK::TASK_SMART_FLEE_PED(pedLocal_80, pedLocal_79, 200f, -1, false, false);
									PED::FORCE_PED_MOTION_STATE(pedLocal_80, joaat("MotionState_Run"), true, 0, false);
									bLocal_167 = true;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_80, SCRIPT_TASK_SMART_FLEE_PED) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_80);
								TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_80, joaat("MotionState_Run"), true, 0, false);
								bLocal_167 = true;
							}
						
							if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_80, joaat("ends_in_run")))
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_80, pedLocal_79, 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_80, joaat("MotionState_Run"), true, 0, false);
								bLocal_167 = true;
							}
						
							if (iLocal_107 == 1 || iLocal_107 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_80, sLocal_376, sLocal_386, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_80, sLocal_376, sLocal_386) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_80, joaat("MotionState_Run"), true, 0, false);
										bLocal_167 = true;
									}
								}
							
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_80, sLocal_376, sLocal_384, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_80, sLocal_376, sLocal_384) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_80, joaat("MotionState_Run"), true, 0, false);
										bLocal_167 = true;
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
			func_282();
		}
	}

	return;
}

void func_1() // Position - 0xA21 (2593)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
		if (PED::IS_PED_INJURED(pedLocal_79))
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
				if (PED::IS_PED_INJURED(pedLocal_80))
					func_282();

	if (PED::IS_PED_INJURED(pedLocal_79))
		if (HUD::DOES_BLIP_EXIST(blLocal_82))
			HUD::REMOVE_BLIP(&blLocal_82);

	if (PED::IS_PED_INJURED(pedLocal_80))
		if (HUD::DOES_BLIP_EXIST(blLocal_83))
			HUD::REMOVE_BLIP(&blLocal_83);

	if (!bLocal_178)
	{
		if (PED::IS_PED_INJURED(pedLocal_80))
		{
			func_2(&uLocal_211, 1);
			bLocal_178 = true;
		}
	}

	if (!bLocal_179)
	{
		if (PED::IS_PED_INJURED(pedLocal_79))
		{
			func_2(&uLocal_211, 2);
			bLocal_179 = true;
		}
	}

	return;
}

void func_2(var uParam0, int iParam1) // Position - 0xAB3 (2739)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_3(Blip blParam0, Ped pedParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0xAD0 (2768)
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

void func_4() // Position - 0xC29 (3113)
{
	if (!PED::IS_PED_INJURED(pedLocal_80) || !bLocal_150)
		func_5(&uLocal_397, pedLocal_80, 0, 0, true, true, true);
	else
		func_37(&uLocal_397, 0, false, false);

	return;
}

void func_5(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC5F (3167)
{
	func_6(uParam0, pedParam1, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_6(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC79 (3193)
{
	func_7(uParam0, pedParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_7(var uParam0, Ped pedParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xC96 (3222)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_37(uParam0, 0, false, false);

	uParam0->f_6 = 2;
	func_8(uParam0, pedParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_8(var uParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xCCF (3279)
{
	const char* string2;
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
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/, string2))
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
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/, string2))
								func_11(true);
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
						func_37(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_37(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_37(uParam0, string2, true, false);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_37(uParam0, string2, true, false);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_37(uParam0, string2, true, false);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_37(uParam0, string2, true, false);
		
			if (!func_29(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_10(uParam0))
					func_9(uParam0);
		}
	}
	else
	{
		func_37(uParam0, string2, false, false);
	}

	return;
}

void func_9(var uParam0) // Position - 0x103F (4159)
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

BOOL func_10(var uParam0) // Position - 0x10A8 (4264)
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

int func_11(BOOL bParam0) // Position - 0x10D3 (4307)
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

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x117D (4477)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_13(const char* sParam0) // Position - 0x1194 (4500)
{
	if (!func_14(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Presiona ~INPUT_VEH_CIN_CAM~ para centrarte en el objetivo.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_44921)
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

BOOL func_14(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x122C (4652)
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

	if (func_22() || func_21(*Global_4718592.f_197291) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_18(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1963699)
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_15(ePedComponentType epctParam0) // Position - 0x1485 (5253)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID;
		else if (Global_1575095 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2658293[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID;

	return false;
}

ePedComponentType _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x14EB (5355)
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

Player _INVALID_PLAYER_INDEX() // Position - 0x154B (5451)
{
	return -1;
}

BOOL func_18(Vehicle veParam0, int iParam1) // Position - 0x1554 (5460)
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

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x15B6 (5558)
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

BOOL func_20() // Position - 0x163B (5691)
{
	return Global_2685152.f_20;
}

ePedComponentType func_21(int iParam0) // Position - 0x1649 (5705)
{
	return iParam0 == 51;
}

ePedComponentType func_22() // Position - 0x1656 (5718)
{
	return Global_2685152.f_19;
}

BOOL func_23() // Position - 0x1664 (5732)
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

BOOL func_24(int iParam0) // Position - 0x1679 (5753)
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

void func_25(var uParam0, Ped pedParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x16D0 (5840)
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1579271 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		func_37(uParam0, 0, false, false);

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

BOOL func_26() // Position - 0x17E1 (6113)
{
	return func_27(PLAYER::PLAYER_ID());
}

BOOL func_27(Player plParam0) // Position - 0x17F1 (6129)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_28(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x1810 (6160)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_29(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1857 (6231)
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

BOOL func_30(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BC3 (7107)
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

BOOL func_31(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C15 (7189)
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

BOOL func_32(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C5E (7262)
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

BOOL func_33(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CBD (7357)
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

BOOL func_34(Ped pedParam0) // Position - 0x1D13 (7443)
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

void func_35() // Position - 0x1D6E (7534)
{
	MISC::SET_BIT(&Global_9503, 4);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x1D7E (7550)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, const char* sParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D91 (7569)
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

float func_38(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1E6F (7791)
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

void func_39() // Position - 0x1ECD (7885)
{
	func_282();
	return;
}

void func_40() // Position - 0x1ED9 (7897)
{
	if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
	{
		if (PED::IS_PED_INJURED(pedLocal_80))
			uLocal_201 = { PED::GET_DEAD_PED_PICKUP_COORDS(pedLocal_80, 1067030938, 1069547520) };
		else
			uLocal_201 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_80, true), 1067030938, 1069547520) };
	
		pkLocal_208 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), uLocal_201, iLocal_161, iLocal_209, true, hLocal_102);
		blLocal_84 = func_158(pkLocal_208);
		func_37(&uLocal_397, 0, false, false);
		bLocal_77 = true;
	}

	return;
}

void func_41() // Position - 0x1F4F (8015)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
	
		_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_127, 4, 0, 0, 0);
		bLocal_171 = true;
		PED::SET_PED_KEEP_TASK(pedLocal_79, true);
		BUILTIN::WAIT(0);
		func_282();
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x202C (8236)
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_43(sParam2, iParam3, false);
}

BOOL func_43(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x207A (8314)
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
					func_57();
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
	
		if (func_56(8, -1))
			return 0;
	
		Global_23099 = { Global_23093 };
		func_55();
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
			
				if (func_52())
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
		
			if (func_51())
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
		
			func_50();
			Global_23033 = bParam2;
		}
	
		Global_23025 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_49();
		func_44();
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
		func_57();
	}

	return 0;
}

void func_44() // Position - 0x2348 (9032)
{
	if (!func_45())
		return;

	if (Global_23029)
	{
		TEXT_LABEL_COPY(&(Global_1979099.f_1), { Global_22642 }, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}

	return;
}

BOOL func_45() // Position - 0x237F (9087)
{
	if (!Global_262145.f_28486)
		return false;

	if (!Global_80337)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_46(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_46(Player plParam0) // Position - 0x23E2 (9186)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_48(8))
			return true;
	
		if (Global_2733190.f_5975.f_1 > 0)
			return true;
	}

	return func_47(plParam0, 20);
}

BOOL func_47(Player plParam0, int iParam1) // Position - 0x2419 (9241)
{
	return IS_BIT_SET(Global_1892925[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_48(int iParam0) // Position - 0x2431 (9265)
{
	return IS_BIT_SET(Global_2733190.f_5964, iParam0);
}

void func_49() // Position - 0x2443 (9283)
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

void func_50() // Position - 0x2473 (9331)
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

BOOL func_51() // Position - 0x2508 (9480)
{
	if (Global_21649.f_1 == true || Global_21649.f_1 == false)
		return true;

	return false;
}

BOOL func_52() // Position - 0x252F (9519)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x25C8 (9672)
{
	if (func_54(14))
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

BOOL func_54(int iParam0) // Position - 0x266A (9834)
{
	return Global_44921 == iParam0;
}

void func_55() // Position - 0x2678 (9848)
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

BOOL func_56(int iParam0, int iParam1) // Position - 0x26CE (9934)
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

void func_57() // Position - 0x2706 (9990)
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

void func_58(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x275D (10077)
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

void func_59() // Position - 0x27B3 (10163)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_79);
		TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_79, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
			OBJECT::DELETE_OBJECT(&obLocal_81);
	
		BUILTIN::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_82))
			HUD::REMOVE_BLIP(&blLocal_82);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
	}

	if (PED::IS_PED_INJURED(pedLocal_80) || PED::IS_PED_INJURED(pedLocal_79))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_83))
			HUD::REMOVE_BLIP(&blLocal_83);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_82))
			HUD::REMOVE_BLIP(&blLocal_82);
	
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
			{
				bLocal_73 = true;
				func_141();
			}
			else
			{
				func_149(false);
				func_282();
			}
		}
		else
		{
			func_282();
		}
	}

	return;
}

void func_60() // Position - 0x286C (10348)
{
	BOOL flag;

	func_141();

	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
		OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208);

	if (iLocal_160 == 1)
	{
		if (!bLocal_68)
		{
			if (!PED::IS_PED_INJURED(pedLocal_80))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_80);
				TASK::TASK_COMBAT_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_80, true);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_79))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_79);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_208), 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
					}
				}
			}
		
			bLocal_68 = true;
		}
	}

	if (iLocal_160 == 2)
	{
		if (!bLocal_68)
		{
			if (!PED::IS_PED_INJURED(pedLocal_80))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_80);
				TASK::TASK_COMBAT_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_80, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_80);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_79))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_79, OBJECT::GET_PICKUP_COORDS(pkLocal_208), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_107 == 3)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_79);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_208), 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
									bLocal_68 = true;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_387, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_383, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_385, 3))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_79);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_208), 1f, 20000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
								bLocal_68 = true;
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
					if (iLocal_107 == 3)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_79);
							TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							PED::SET_PED_KEEP_TASK(pedLocal_79, true);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_82))
								HUD::REMOVE_BLIP(&blLocal_82);
						
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
							bLocal_68 = true;
							iLocal_65 = 9;
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_387, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_383, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, sLocal_385, 3))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_79);
						TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_79, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_82))
							HUD::REMOVE_BLIP(&blLocal_82);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
						bLocal_68 = true;
						iLocal_65 = 9;
					}
				}
			}
		}
	}

	if (iLocal_160 == 3)
	{
		if (!bLocal_68)
		{
			if (!PED::IS_PED_INJURED(pedLocal_80))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_80);
				TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_80, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_80);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_79))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_79);
				TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_79, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
			}
		
			bLocal_73 = true;
			bLocal_68 = true;
		}
	}

	if (iLocal_160 == 1 || iLocal_160 == 2)
	{
		if (!PED::IS_PED_INJURED(pedLocal_79))
		{
			if (bLocal_68)
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_377, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_79, sLocal_377, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
									{
										_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_126, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(pkLocal_208);
										bLocal_69 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_79);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_PLAY_ANIM(0, sLocal_377, "pickup_low", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							PED::SET_PED_KEEP_TASK(pedLocal_79, true);
						}
					}
					else if (bLocal_69)
					{
						PED::SET_PED_MONEY(pedLocal_79, iLocal_209);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
						func_206(3);
						func_201();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_79, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_82))
							HUD::REMOVE_BLIP(&blLocal_82);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
						bLocal_68 = true;
						iLocal_65 = 12;
					}
				}
				else if (bLocal_69)
				{
					PED::SET_PED_MONEY(pedLocal_79, iLocal_209);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
					func_206(3);
					func_201();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_79, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_82))
						HUD::REMOVE_BLIP(&blLocal_82);
				
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
					bLocal_68 = true;
					iLocal_65 = 12;
				}
			}
		}
		else
		{
			iLocal_65 = 9;
		}
	}

	return;
}

void func_61() // Position - 0x2D9F (11679)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_79);
		TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_79, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
	}

	return;
}

void func_62() // Position - 0x2DD6 (11734)
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

	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (!bLocal_169)
		{
			if (bLocal_170)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				num3 = 1;
			
				if (iLocal_107 == 1)
					if (entityCoords.f_2 > 33.5f)
						num3 = 0;
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 5f, 5f, 5f, false, true, 0) && num3 == 1)
				{
					if (func_126(2))
						HUD::CLEAR_HELP(true);
				
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_125(true, false, true))
						{
							if (!func_124())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_115(true, true, true, false, false, false, false);
								
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										while (!func_112(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_94, 1, 1056964608, false, true, false) || func_169())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											BUILTIN::WAIT(0);
										}
									
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
								
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								
									if (!PED::IS_PED_INJURED(pedLocal_79))
										PED::SET_PED_CAN_RAGDOLL(pedLocal_79, false);
								
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
									EVENT::REMOVE_SHOCKING_EVENT(shLocal_158);
								
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
										func_110();
								
									bLocal_169 = true;
									BUILTIN::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_108(ENTITY::GET_ENTITY_COORDS(pedLocal_79, true), &uLocal_93, &fLocal_94);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 15f, 15f, 15f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			
				if (iLocal_64 == 2)
					TASK::TASK_PLAY_ANIM(0, sLocal_394, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, false, false, false);
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
				PED::FORCE_PED_MOTION_STATE(pedLocal_79, joaat("MotionState_Walk"), false, 0, false);
				bLocal_170 = true;
			}
		}
	
		if (bLocal_169)
		{
			switch (iLocal_168)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							func_105(pedLocal_79, &uLocal_142, &fLocal_145, sLocal_378, sLocal_380);
						
							if (iLocal_107 == 1)
								if (fLocal_145.f_2 > 225f && fLocal_145.f_2 < 265f)
									if (fLocal_145.f_2 < 245f)
										fLocal_145.f_2 = 225f;
									else
										fLocal_145.f_2 = 265f;
								else if (fLocal_145.f_2 > 45f && fLocal_145.f_2 < 85f)
									if (fLocal_145.f_2 < 65f)
										fLocal_145.f_2 = 45f;
									else
										fLocal_145.f_2 = 85f;
						
							uLocal_142.f_2 = uLocal_142.f_2 + 2f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_142, &(uLocal_142.f_2), false, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_378, sLocal_380, uLocal_142, fLocal_145, 0f, 2) };
							vector = { animInitialOffsetPosition - uLocal_142 };
							vector.f_2 = 0f;
							num = BUILTIN::VMAG(vector);
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							num2 = uLocal_142.f_2 - animInitialOffsetPosition.f_2;
							fLocal_145 = MISC::ATAN2(num2, num);
						
							if (fLocal_145 > 30f || fLocal_145 < -30f)
								fLocal_145 = 0f;
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
							{
								playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &minimum, &maximum);
							
								if (ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, uLocal_142, maximum.f_1 + 1.5f, maximum.f_1 + 1.5f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_378, sLocal_380, uLocal_142, fLocal_145, 0, 2), maximum.f_1 + 1f, maximum.f_1 + 1f, 3f, false, true, 0))
								{
									if (iLocal_107 == 1)
									{
										if (fLocal_145.f_2 > 40f && fLocal_145.f_2 < 220f)
										{
											uLocal_97 = { -148.3897f, -1647.2146f, 31.5867f };
											fLocal_96 = 331.9427f;
										}
										else
										{
											uLocal_97 = { -129.5632f, -1622.2823f, 31.1122f };
											fLocal_96 = 148.9075f;
										}
									}
									else if (iLocal_107 == 3)
									{
										if (fLocal_145.f_2 > 160f && fLocal_145.f_2 < 340f)
										{
											uLocal_97 = { -319.709f, -837.0066f, 30.449f };
											fLocal_96 = 61.7986f;
										}
										else
										{
											uLocal_97 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_96 = 269.6216f;
										}
									}
									else if (iLocal_107 == 4)
									{
										if (fLocal_145.f_2 > 240f || fLocal_145.f_2 < 60f)
										{
											uLocal_97 = { 37.222f, -1005.0401f, 28.4648f };
											fLocal_96 = 156.7986f;
										}
										else
										{
											uLocal_97 = { 29.9887f, -1033.1838f, 28.3794f };
											fLocal_96 = 344.6216f;
										}
									}
									else
									{
										fLocal_96 = ENTITY::GET_ENTITY_HEADING(playersLastVehicle);
										uLocal_97 = { func_103(uLocal_142, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_378, sLocal_380, uLocal_142, fLocal_145, 0, 2)) };
									}
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
									{
										ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_97, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_96);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
									}
								}
							}
						}
					
						MISC::CLEAR_AREA_OF_OBJECTS(uLocal_142, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(uLocal_142, 20f, 0);
						MISC::CLEAR_AREA(uLocal_142, 2f, true, true, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						obLocal_81 = OBJECT::CREATE_OBJECT(hLocal_102, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_81, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					
						iLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_142, fLocal_145, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_148, false);
						caLocal_149 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_149, iLocal_148, sLocal_381, sLocal_378);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_148, sLocal_378, sLocal_379, 1000f, -8f, 0, 0, 1148846080, 0);
					
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_79);
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_79, iLocal_148, sLocal_378, sLocal_380, 1000f, -8f, 0, 0, 1148846080, 0);
						}
					
						CAM::SET_CAM_ACTIVE(caLocal_149, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_132, 4, 0, 0, 0);
						BUILTIN::SETTIMERA(0);
						iLocal_168 = iLocal_168 + 1;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_148) > 0.9f || func_101(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(caLocal_149, false);
						CAM::DESTROY_CAM(caLocal_149, false);
						func_100();
					
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_79);
							PED::SET_PED_MONEY(pedLocal_79, iLocal_209 - (iLocal_209 / 10));
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_378, sLocal_380, uLocal_142, fLocal_145, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(pedLocal_79, animInitialOffsetPosition, true, false, false, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_79, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_378, sLocal_380, uLocal_142, fLocal_145, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(pedLocal_79, animInitialOffsetPosition.f_2);
						
							if (iLocal_107 == 4)
							{
								if (func_99(animInitialOffsetPosition.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_79), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.7108f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_79), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
								TASK::TASK_WANDER_STANDARD(0, animInitialOffsetPosition.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							}
						
							PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_79, sLocal_395, 1048576000);
							PED::FORCE_PED_MOTION_STATE(pedLocal_79, joaat("MotionState_Walk"), true, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_79, true);
						}
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
							OBJECT::DELETE_OBJECT(&obLocal_81);
					
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							PED::SET_PED_MONEY(pedLocal_79, iLocal_209 - (iLocal_209 / 10));
							PED::SET_PED_CAN_RAGDOLL(pedLocal_79, true);
						}
					
						num4 = iLocal_209 / 100;
						num4 = num4 * 90;
						BUILTIN::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						func_65(_GET_CURRENT_PLAYER_CHARACTER(), 1, num4);
						func_64(joaat("RC_WALLETS_RETURNED") /* TUNEABLE: RC_WALLETS_RETURNED */, 1);
						func_206(3);
						func_201();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if (!PED::IS_PED_INJURED(pedLocal_79) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_81, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(obLocal_81, false, true);
							
								if (PED::IS_PED_MALE(pedLocal_79))
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_81, pedLocal_79, PED::GET_PED_BONE_INDEX(pedLocal_79, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								else
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_81, pedLocal_79, PED::GET_PED_BONE_INDEX(pedLocal_79, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							
								if (!bLocal_78)
									if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_126, 4, 0, 0, 0) || func_63())
										bLocal_78 = true;
							}
						}
					}
					else if (!bLocal_78)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_126, 4, 0, 0, 0) || func_63())
							bLocal_78 = true;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			}
		}
	}
	else
	{
		func_282();
	}

	return;
}

BOOL func_63() // Position - 0x373B (14139)
{
	if (Global_23023 == 4)
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			return 1;
		else
			return 0;

	return 0;
}

void func_64(Hash hParam0, int iParam1) // Position - 0x3760 (14176)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

int func_65(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3783 (14211)
{
	if (func_98(echParam0) == 3)
		return 0;

	if (func_98(echParam0) == 4)
		return 0;

	return func_66(func_98(echParam0), 0, iParam1, iParam2, false);
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x37B7 (14263)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_97();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_96(99, 1);
					func_64(joaat("SP0_MONEY_TOTAL_SPENT") /* TUNEABLE: SP0_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 1:
					func_64(joaat("SP1_MONEY_TOTAL_SPENT") /* TUNEABLE: SP1_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 2:
					func_64(joaat("SP2_MONEY_TOTAL_SPENT") /* TUNEABLE: SP2_MONEY_TOTAL_SPENT */, iParam3);
					break;
			}
		
			func_81(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_78(5))
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
							func_64(joaat("SP0_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					}
				
					if (func_78(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_64(joaat("SP0_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_64(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP0_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP1_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP2_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
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
							func_64(joaat("SP0_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP0_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 1:
							func_64(joaat("SP1_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP1_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 2:
							func_64(joaat("SP2_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP2_MONEY_SPENT_PROPERTY */, iParam3);
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
									func_64(joaat("SP0_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP0_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP1_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP2_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							}
						
							if (func_78(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP0_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP1_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP2_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_64(joaat("SP0_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP0_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 1:
									func_64(joaat("SP1_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP1_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 2:
									func_64(joaat("SP2_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP2_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							}
						
							func_77(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_96(95, iParam3);
					break;
			
				case 1:
					func_96(97, iParam3);
					break;
			
				case 2:
					func_96(96, iParam3);
					break;
			}
		
			func_96(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_69(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_69(num2);
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
					func_64(joaat("SP0_TOTAL_CASH_EARNED") /* TUNEABLE: SP0_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 1:
					func_64(joaat("SP1_TOTAL_CASH_EARNED") /* TUNEABLE: SP1_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 2:
					func_64(joaat("SP2_TOTAL_CASH_EARNED") /* TUNEABLE: SP2_TOTAL_CASH_EARNED */, iParam3);
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

	func_68(iParam0);

	if (Global_44921 == 15)
		func_67(false);

	return 1;
}

void func_67(BOOL bParam0) // Position - 0x3DB6 (15798)
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

void func_68(int iParam0) // Position - 0x403C (16444)
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

void func_69(int iParam0) // Position - 0x4096 (16534)
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
		func_72(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_72(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_72(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_72(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_72(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_72(8277, 0, -1, true);
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
	else if (IS_BIT_SET(Global_114963.f_20573.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_71() /*5574*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114963.f_20573.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_71() /*5574*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*Canjeaste tu promoción de ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_70(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_70(int iParam0) // Position - 0x420E (16910)
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

int func_71() // Position - 0x430F (17167)
{
	int num;

	num = 0;
	return num;
}

void func_72(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x431C (17180)
{
	Hash statName;

	if (iParam0 != 16764)
	{
		statName = func_73(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_73(int iParam0, int iParam1) // Position - 0x434A (17226)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_74(iParam1));
}

BOOL func_74(BOOL bParam0) // Position - 0x435F (17247)
{
	BOOL flag;
	BOOL flag2;

	flag = bParam0;

	if (flag == -1)
	{
		flag2 = func_75();
	
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

BOOL func_75() // Position - 0x4393 (17299)
{
	return Global_1574928;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x439F (17311)
{
	if (bParam2 == -1)
		bParam2 = func_75();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, bParam2);
	return;
}

void func_77(int iParam0) // Position - 0x43BD (17341)
{
	func_96(93, iParam0);
	func_96(29, iParam0);
	func_96(30, iParam0);
	return;
}

BOOL func_78(int iParam0) // Position - 0x43DD (17373)
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
		num = func_79(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_79(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_79(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_79(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_79(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_79(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114963.f_20573.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_71() /*5574*/].f_681.f_10, iParam0);
}

int func_79(int iParam0, int iParam1) // Position - 0x457D (17789)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_73(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, BOOL bParam1) // Position - 0x45AC (17836)
{
	if (bParam1 == -1)
		bParam1 = func_75();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, bParam1);
}

int func_81(BOOL bParam0) // Position - 0x45C8 (17864)
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
		func_95(27, value);
	}

	if (value < 200000000)
		return 0;

	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1) // Position - 0x467F (18047)
{
	if (iParam0 >= 78)
		return 0;

	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1) // Position - 0x469A (18074)
{
	if (func_54(14) && !func_94(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34066 != 0 && !Global_80337)
		return 0;

	if (func_93(&Global_4525223))
	{
		if (func_91(&Global_4525223, iParam0))
			return 0;
	
		if (func_84(&Global_4525223, iParam0))
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

BOOL func_84(var uParam0, int iParam1) // Position - 0x4737 (18231)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_54(14) && !func_94(iParam1))
		return false;

	if (func_91(uParam0, iParam1))
		return false;

	if (func_90(uParam0) < 0f)
		func_89(uParam0, 0);

	func_87(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_85(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_85(var uParam0, int iParam1) // Position - 0x47E8 (18408)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_54(14) && !func_94(iParam1))
		return 0;

	if (func_91(uParam0, iParam1))
		return 0;

	if (func_90(uParam0) < 0f)
		func_89(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_86(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_86(var uParam0, int iParam1) // Position - 0x4863 (18531)
{
	return uParam0->[iParam1] == 78;
}

void func_87(var uParam0) // Position - 0x4874 (18548)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_88(uParam0, i);
	}

	func_89(uParam0, Global_4525222 - 0.5f);
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x48A8 (18600)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_89(var uParam0, int iParam1) // Position - 0x48B8 (18616)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_90(var uParam0) // Position - 0x48D5 (18645)
{
	return uParam0->f_80;
}

BOOL func_91(var uParam0, int iParam1) // Position - 0x48E1 (18657)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1) // Position - 0x48F3 (18675)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_93(var uParam0) // Position - 0x4920 (18720)
{
	return uParam0->f_79 == 1;
}

BOOL func_94(int iParam0) // Position - 0x492E (18734)
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

BOOL func_95(int iParam0, int iParam1) // Position - 0x497E (18814)
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

void func_96(int iParam0, int iParam1) // Position - 0x49CF (18895)
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

void func_97() // Position - 0x4A2C (18988)
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

int func_98(eCharacter echParam0) // Position - 0x4AA1 (19105)
{
	return Global_2349[echParam0 /*29*/].f_17;
}

BOOL func_99(float fParam0, float fParam1, float fParam2) // Position - 0x4AB2 (19122)
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

void func_100() // Position - 0x4B27 (19239)
{
	Cam cam;

	cam = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, true, 2);
	CAM::SET_CAM_ACTIVE(cam, true);
	return;
}

BOOL func_101(int iParam0) // Position - 0x4B65 (19301)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_102())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_102() // Position - 0x4BAF (19375)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

Vector3 func_103(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4BE1 (19425)
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
						vector = { func_104(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_104(offsetFromEntityInWorldCoords, 0f, minimum) };
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
						vector = { func_104(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_104(offsetFromEntityInWorldCoords, 0f, minimum) };
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
						vector = { func_104(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_104(offsetFromEntityInWorldCoords, 0f, minimum) };
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
						vector = { func_104(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_104(offsetFromEntityInWorldCoords, 0f, minimum) };
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

Vector3 func_104(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6) // Position - 0x51E2 (20962)
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

void func_105(Ped pedParam0, var uParam1, var uParam2, char* sParam3, char* sParam4) // Position - 0x522F (21039)
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
	uParam2->f_2 = func_107(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	num4 = func_107(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	heading = func_107(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
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
					uParam2->f_2 = func_106(ENTITY::GET_ENTITY_COORDS(pedParam0, false), *uParam1, 1);
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
							uParam2->f_2 = func_106(animInitialOffsetPosition + { -0.75f, 0f, 0f }, *uParam1, 1);
					
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

float func_106(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x53E7 (21479)
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

float func_107(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x544C (21580)
{
	var entityCoords;
	var entityCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };
	return func_106(entityCoords, entityCoords2, iParam2);
}

void func_108(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5478 (21624)
{
	BOOL flag;
	float dx;
	float headingFromVector2d;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_109(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_109(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
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

BOOL func_109(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x5579 (21881)
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

void func_110() // Position - 0x5600 (22016)
{
	Global_21889 = 0;
	func_111();
	return;
}

void func_111() // Position - 0x5610 (22032)
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

BOOL func_112(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5631 (22065)
{
	func_114(bParam5, bParam6);
	func_113(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_113(Vehicle veParam0) // Position - 0x5688 (22152)
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_114(BOOL bParam0, BOOL bParam1) // Position - 0x56B4 (22196)
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

void func_115(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5805 (22533)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_123(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_51())
				Global_21649.f_1 = 3;
		
			Global_23023 = 5;
		}
	
		func_122(true, bParam3, bParam2, false);
		Global_65069 = true;
		Global_77400 = PV_COMP_BERD;
		Global_80335 = PV_COMP_BERD;
	}
	else
	{
		func_123(0);
		HUD::THEFEED_RESUME();
		Global_65069 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_122(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_120(PLAYER::PLAYER_ID()) && !func_117(PLAYER::PLAYER_ID(), 0) && !func_116() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_120(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80335 = PV_COMP_HEAD;
	}

	return;
}

BOOL func_116() // Position - 0x5954 (22868)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

BOOL func_117(Player plParam0, int iParam1) // Position - 0x596E (22894)
{
	BOOL flag;

	if (!func_119(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_118(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_118(BOOL bParam0, BOOL bParam1) // Position - 0x59C7 (22983)
{
	eCharacter character;
	BOOL flag;

	flag = bParam0;

	if (flag == -1)
		flag = func_75();

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

BOOL func_119(Player plParam0) // Position - 0x5A08 (23048)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_120(Player plParam0) // Position - 0x5A2A (23082)
{
	if (func_117(plParam0, 0))
		return true;

	if (func_121())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_121() // Position - 0x5A69 (23145)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_122(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5A77 (23159)
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

void func_123(int iParam0) // Position - 0x5AAA (23210)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 13);
	else
		MISC::CLEAR_BIT(&Global_9502, 13);

	return;
}

BOOL func_124() // Position - 0x5ACD (23245)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (func_169())
			return true;

	return false;
}

BOOL func_125(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5AEE (23278)
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

BOOL func_126(int iParam0) // Position - 0x5BD3 (23507)
{
	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_127(iParam0));
}

char* func_127(int iParam0) // Position - 0x5BE5 (23525)
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

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x5C27 (23591)
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH") /* TUNEABLE: SP0_TOTAL_CASH */, &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH") /* TUNEABLE: SP1_TOTAL_CASH */, &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH") /* TUNEABLE: SP2_TOTAL_CASH */, &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5C7F (23679)
{
	func_130();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_130() // Position - 0x5C98 (23704)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_131(character) && !func_54(14) || Global_113909)
			{
				if (Global_114963.f_2370.f_539.f_4321 != character && func_131(Global_114963.f_2370.f_539.f_4321))
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

BOOL func_131(eCharacter echParam0) // Position - 0x5D95 (23957)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x5DA1 (23969)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x5DDE (24030)
{
	if (func_131(character))
		return func_134(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_134(eCharacter echParam0) // Position - 0x5E03 (24067)
{
	return Global_2349[echParam0 /*29*/];
}

void func_135() // Position - 0x5E12 (24082)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_79, true);
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_136() // Position - 0x5E42 (24130)
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 3f, 3f, 3f };
	vector2 = { -3f, -3f, -3f };

	if (PED::IS_PED_INJURED(pedLocal_79))
	{
		return true;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f), 5f, true))
			return true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			return true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f), 3f))
			return true;
	}

	return false;
}

void func_137() // Position - 0x5F2B (24363)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_79, true)) > fLocal_182 + 50f)
			func_201();
		else if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_209)
			func_201();

	return;
}

void func_138() // Position - 0x5F76 (24438)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, Global_20, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}

	return;
}

void func_139() // Position - 0x5FBB (24507)
{
	float width;

	if (iLocal_107 == 1)
		width = 13f;

	if (iLocal_107 == 4)
		width = 5.75f;

	if (iLocal_107 == 1 || iLocal_107 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_183, uLocal_186, width, false, true, 0))
		{
			if (!bLocal_174)
			{
				if (!PED::IS_PED_INJURED(pedLocal_79))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_174 = true;
					bLocal_175 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_189, uLocal_192, width, false, true, 0))
		{
			if (!bLocal_175)
			{
				if (!PED::IS_PED_INJURED(pedLocal_79))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_175 = true;
					bLocal_174 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_195, uLocal_198, width, false, true, 0))
			if (!bLocal_176)
				if (!PED::IS_PED_INJURED(pedLocal_79))
					bLocal_176 = true;
	}

	if (!bLocal_177)
	{
		if (!PED::IS_PED_INJURED(pedLocal_79))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_125, 4, 0, 0, 0) || func_63())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					
						if (iLocal_64 == 2)
							TASK::TASK_PLAY_ANIM(0, sLocal_394, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, false, false, false);
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
						bLocal_177 = true;
					}
				}
			}
		}
	}

	return;
}

void func_140(Ped pedParam0, var uParam1) // Position - 0x613D (24893)
{
	float angle;

	angle = 65f;

	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_138);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
				BUILTIN::SETTIMERA(0);
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

void func_141() // Position - 0x61F5 (25077)
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_208))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
			fLocal_182 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_79, true));
	
		func_64(joaat("RC_WALLETS_RECOVERED") /* TUNEABLE: RC_WALLETS_RECOVERED */, 1);
		PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 250);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
			OBJECT::DELETE_OBJECT(&obLocal_81);
	
		func_144();
		func_143(&uLocal_409);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
			if (!PED::IS_PED_INJURED(pedLocal_79))
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_79, false);
	
		func_149(false);
		OBJECT::REMOVE_PICKUP(pkLocal_208);
	
		if (!bLocal_73)
		{
			iLocal_65 = 5;
			func_142(2);
		}
		else
		{
			iLocal_65 = 12;
		}
	}

	return;
}

void func_142(int iParam0) // Position - 0x628D (25229)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114963.f_25004.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_127(iParam0), -1);
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
					_DISPLAY_HELP_TEXT(func_127(iParam0), -1);
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
					_DISPLAY_HELP_TEXT(func_127(iParam0), -1);
					Global_114963.f_25004.f_4 = Global_114963.f_25004.f_4 + 1;
					MISC::SET_BIT(&Global_114959, 2);
				}
			}
			break;
	}

	return;
}

void func_143(var uParam0) // Position - 0x6368 (25448)
{
	*uParam0 = -99;
	return;
}

void func_144() // Position - 0x6376 (25462)
{
	blLocal_84 = 0;

	if (!HUD::DOES_BLIP_EXIST(blLocal_82))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
			blLocal_82 = func_145(pedLocal_79, false, 0);

	return;
}

Blip func_145(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x63A0 (25504)
{
	iParam2 = iParam2;
	return func_146(pedParam0, bParam1, 145);
}

Blip func_146(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x63B6 (25526)
{
	Blip blip;

	blip = func_147(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2349[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2349[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_147(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6400 (25600)
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

var func_148(BOOL bParam0, var uParam1, var uParam2) // Position - 0x64A4 (25764)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_149(BOOL bParam0) // Position - 0x64BB (25787)
{
	if (!PED::IS_PED_INJURED(pedLocal_79) && iLocal_107 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			}
		
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::CLEAR_PED_TASKS(pedLocal_79);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
	}

	return;
}

BOOL func_150() // Position - 0x65A1 (26017)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_81))
			if (!PED::IS_PED_INJURED(pedLocal_79))
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_81, pedLocal_79))
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 18f, 18f, 18f, false, true, 0))
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							return true;

	return false;
}

void func_151(Blip blParam0, var uParam1) // Position - 0x65FF (26111)
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
	
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_152(0))
			func_142(1);
	}

	return;
}

BOOL func_152(int iParam0) // Position - 0x665D (26205)
{
	return IS_BIT_SET(Global_114959, iParam0);
}

void func_153() // Position - 0x666C (26220)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 8f, 8f, 18f, false, true, 0) || ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_79))
			HUD::CLEAR_PRINTS();

	return;
}

void func_154() // Position - 0x66AD (26285)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_83))
		HUD::REMOVE_BLIP(&blLocal_83);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_81))
		{
			ENTITY::DETACH_ENTITY(obLocal_81, true, true);
			OBJECT::DELETE_OBJECT(&obLocal_81);
			func_40();
		}
	}
	else
	{
		func_40();
	}

	if (!PED::IS_PED_INJURED(pedLocal_80))
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_124, 4, 0, 0, 0) || func_63())
		{
			if (iLocal_64 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 1, false);
				TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_80, true);
		}
	}

	return;
}

BOOL func_155() // Position - 0x674C (26444)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), true))
			if (bLocal_166)
				return true;
	else if (bLocal_166)
		return true;

	return false;
}

void func_156() // Position - 0x6783 (26499)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_79);
		TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_79, true);
		BUILTIN::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
	}

	if (!PED::IS_PED_INJURED(pedLocal_80))
	{
		_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_129, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		PED::SET_PED_KEEP_TASK(pedLocal_80, true);
		BUILTIN::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_80);
	}

	return;
}

BOOL func_157() // Position - 0x681D (26653)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
		if (PED::IS_PED_RAGDOLL(pedLocal_79))
			return true;

	return false;
}

Blip func_158(Pickup pkParam0) // Position - 0x683D (26685)
{
	return func_159(pkParam0);
}

Blip func_159(Pickup pkParam0) // Position - 0x684B (26699)
{
	Blip blip;

	if (!OBJECT::DOES_PICKUP_EXIST(pkParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_PICKUP(pkParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	return blip;
}

BOOL func_160() // Position - 0x6883 (26755)
{
	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 18f, 18f, 18f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), true))
						{
							BUILTIN::SETTIMERB(0);
							iLocal_160 = 1;
							return true;
						}
					}
				}
			
				if (func_161())
				{
					BUILTIN::SETTIMERB(0);
					iLocal_160 = 2;
					return true;
				}
			
				if (PED::IS_PED_INJURED(pedLocal_80))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
						{
							if (!PED::IS_PED_INJURED(pedLocal_79))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_79);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_79, false);
							}
						}
					
						BUILTIN::SETTIMERB(0);
						iLocal_160 = 2;
						return true;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), true))
				{
					BUILTIN::SETTIMERB(0);
					iLocal_160 = 2;
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
					{
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_79);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_79, false);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_80))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_80);
						TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_80, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_80);
					}
				
					return true;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 5.3f, 5.3f, 6f, false, true, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79))
							{
								BUILTIN::SETTIMERB(0);
								iLocal_160 = 3;
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

BOOL func_161() // Position - 0x6A27 (27175)
{
	if (!PED::IS_PED_INJURED(pedLocal_80))
	{
		if (PED::CAN_PED_SEE_HATED_PED(pedLocal_80, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 20f, 20f, 20f, false, true, 0))
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_80) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_80))
					return true;
	
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			return true;
	
		if (PED::IS_PED_RAGDOLL(pedLocal_80))
			return true;
	}

	return false;
}

void func_162() // Position - 0x6AB1 (27313)
{
	if (bLocal_75)
	{
		if (!bLocal_76)
			if (!PED::IS_PED_INJURED(pedLocal_80))
				if (WEAPON::IS_PED_ARMED(pedLocal_80, 4))
					if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_129, 4, 0, 0, 0) || func_63() || func_63())
						bLocal_76 = true;
				else if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_124, 4, 0, 0, 0) || func_63() || func_63())
					bLocal_76 = true;
	}
	else if (func_161())
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_133, 4, 0, 0, 0) || func_63() || func_63())
		{
			if (WEAPON::IS_PED_ARMED(pedLocal_80, 4))
				TASK::TASK_COMBAT_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 0, 16);
			else
				func_154();
		
			bLocal_75 = true;
		}
	}

	return;
}

BOOL func_163() // Position - 0x6B7B (27515)
{
	int weaponHash;

	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 20f, 20f, 20f, false, true, 0))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79))
					return true;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
			if (weaponHash == joaat("WEAPON_STUNGUN"))
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(pedLocal_79, joaat("WEAPON_STUNGUN"), 0))
					return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}
	else
	{
		return true;
	}

	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f), 3f, true))
		return true;

	return false;
}

void func_164() // Position - 0x6C37 (27703)
{
	iLocal_64 == 2;

	if (!func_169())
	{
		if (BUILTIN::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(pedLocal_79))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_79))
				{
					func_165(pedLocal_79, "GENERIC_CURSE_MED", 24);
					BUILTIN::SETTIMERA(0);
				}
			}
		}
	}

	if (!bLocal_77)
		if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_80, true) > 200f)
			if (!ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_80) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_80))
				iLocal_65 = 8;

	return;
}

void func_165(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x6CB0 (27824)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_166(iParam2), 1);
	return;
}

char* func_166(int iParam0) // Position - 0x6CC7 (27847)
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

void func_167() // Position - 0x6EBC (28348)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (!bLocal_70)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
				iLocal_181 = 3;
				bLocal_70 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_79, sLocal_376, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
				iLocal_181 = 3;
				bLocal_70 = true;
			}
			else
			{
				bLocal_70 = true;
			}
		}
	
		if (bLocal_70)
		{
			if (!bLocal_153)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 7f, 7f, 7f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_79) == iLocal_181)
						{
							TASK::TASK_LOOK_AT_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_123, 4, 0, 0, 0);
							bLocal_172 = true;
							bLocal_153 = true;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(pedLocal_79, true);
						_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_123, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
						BUILTIN::SETTIMERA(0);
						bLocal_172 = true;
						bLocal_153 = true;
					}
				}
			}
		}
	}

	return;
}

BOOL func_168() // Position - 0x711D (28957)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 12f, 12f, 5f, false, true, 0))
			return true;

	return false;
}

BOOL func_169() // Position - 0x714F (29007)
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_170() // Position - 0x7171 (29041)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (!bLocal_151)
		{
			iLocal_155 = MISC::GET_GAME_TIMER();
			bLocal_151 = true;
		}
	
		if (bLocal_151)
		{
			iLocal_156 = MISC::GET_GAME_TIMER();
		
			if (!bLocal_71)
			{
				if (iLocal_156 - iLocal_155 > 500)
				{
					if (!func_169())
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_122, 4, 0, 0, 0) || func_63())
						{
							if (iLocal_64 == 2)
								if (!PED::IS_PED_INJURED(pedLocal_79))
									!PED::IS_PED_INJURED(pedLocal_80);
						
							if (iLocal_64 == 1)
								!PED::IS_PED_INJURED(pedLocal_79);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_82))
								HUD::REMOVE_BLIP(&blLocal_82);
						
							bLocal_71 = true;
						}
					}
				}
			}
		}
	}

	return;
}

void func_171() // Position - 0x720D (29197)
{
	float targetRadius;

	if (!bLocal_72)
	{
		if (iLocal_107 == 1)
			targetRadius = 1f;
	
		if (iLocal_107 == 2)
			targetRadius = 4f;
	
		if (iLocal_107 != 2)
		{
			if (!PED::IS_PED_INJURED(pedLocal_79) && !PED::IS_PED_INJURED(pedLocal_80))
			{
				if (!func_198())
					if (func_185())
						func_282();
			
				if (func_184())
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_85))
					{
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
							blLocal_85 = func_145(pedLocal_80, true, 0);
					
						func_176(true);
					}
				}
			
				if (func_175())
				{
					func_174();
				
					if (iLocal_107 == 3)
					{
						if (!bLocal_74)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_80, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_104, 1f, 20000, targetRadius, 4, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							bLocal_74 = true;
						}
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
						TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_79, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, false, false, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_104, pedLocal_79, 1f, false, 1.5f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_79, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
						BUILTIN::SETTIMERA(0);
						bLocal_72 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_107 == 1)
							sLocal_128 = sLocal_128;
					
						func_173();
						bLocal_72 = true;
						bLocal_166 = true;
						BUILTIN::SETTIMERA(0);
					}
				}
			}
		}
	}

	if (bLocal_72)
	{
		if (!bLocal_152)
		{
			if (BUILTIN::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 60f, 60f, 50f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_79, pedLocal_80, 0);
				
					bLocal_152 = true;
				}
				else
				{
					bLocal_152 = true;
				}
			}
		}
	
		if (bLocal_152 && !bLocal_150)
		{
			if (!PED::IS_PED_INJURED(pedLocal_79) && !PED::IS_PED_INJURED(pedLocal_80))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_121, 4, 0, 0, 0) || func_63())
				{
					TASK::CLEAR_PED_TASKS(pedLocal_79);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
					TASK::TASK_PLAY_ANIM(0, sLocal_376, "handsup_standing_enter", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_376, "handsup_standing_base", 8f, -4f, 7000, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_376, "handsup_standing_exit", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
					func_174();
					pkLocal_208 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_PURSE"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_79, 0f, 2.5f, 0f), 1067030938, 1069547520), iLocal_161, iLocal_209, true, hLocal_102);
					bLocal_150 = true;
				}
			}
		}
	
		if (bLocal_150)
		{
			if (PED::IS_PED_INJURED(pedLocal_80))
			{
				func_172();
			}
			else
			{
				switch (iLocal_684)
				{
					case 0:
						uLocal_687 = { OBJECT::GET_PICKUP_COORDS(pkLocal_208) - { 0f, 0f, 0.75f } };
					
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_80);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_687, pedLocal_79, 2f, false, 0.1f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							iLocal_685 = MISC::GET_GAME_TIMER();
						}
					
						iLocal_684 = 1;
						break;
				
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_80, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							uLocal_687 = { OBJECT::GET_PICKUP_COORDS(pkLocal_208) - { 0f, 0f, 0.75f } };
						
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_80, true), uLocal_687, true) > 1f)
								{
									iLocal_686 = 1;
									iLocal_684 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_80);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
									TASK::TASK_PLAY_ANIM(0, sLocal_377, "pickup_low", 8f, -4f, -1, 8224, 0, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
									iLocal_684 = 2;
								}
							}
							else
							{
								iLocal_684 = 4;
							}
						}
					
						if (MISC::GET_GAME_TIMER() - iLocal_685 > 15000)
						{
							iLocal_686 = 1;
							iLocal_684 = 4;
						}
						break;
				
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_80, sLocal_377, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_208))
							{
								OBJECT::REMOVE_PICKUP(pkLocal_208);
								iLocal_684 = 3;
							}
							else
							{
								iLocal_684 = 4;
							}
						}
						break;
				
					case 3:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_80, sLocal_377, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_80, sLocal_377, "pickup_low") > 0.58f || !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_80, sLocal_377, "pickup_low", 3))
							iLocal_684 = 4;
						break;
				
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, true, 1);
						TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_80, false, false);
						bLocal_166 = true;
						break;
				}
			}
		}
	}

	return;
}

void func_172() // Position - 0x76A3 (30371)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_82))
		HUD::REMOVE_BLIP(&blLocal_82);

	if (!HUD::DOES_BLIP_EXIST(blLocal_84))
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_208))
			blLocal_84 = func_158(pkLocal_208);

	iLocal_65 = 4;
	return;
}

void func_173() // Position - 0x76D8 (30424)
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (PED::IS_PED_FACING_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(pedLocal_80, sLocal_376, sLocal_384, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_64 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, sLocal_385, 8f, -8f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
		else if (iLocal_107 == 4)
		{
			iLocal_396 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.3917f, 28.4847f, 4f, 4f, 4f, 0f, false, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, sLocal_385, 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(pedLocal_80, sLocal_376, sLocal_386, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_64 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, sLocal_387, 8f, -8f, -1, 8, 0.1f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.6864f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
		else if (iLocal_107 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, sLocal_387, 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_376, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
		}
	}

	return;
}

void func_174() // Position - 0x7B46 (31558)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_85))
		HUD::REMOVE_BLIP(&blLocal_85);

	if (!HUD::DOES_BLIP_EXIST(blLocal_83))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
			blLocal_83 = func_145(pedLocal_80, true, 0);

	return;
}

BOOL func_175() // Position - 0x7B7C (31612)
{
	BOOL num;

	num = 0;

	if (iLocal_107 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.30515f, -1670.3619f, 53.730835f, -91.94043f, -1578.8281f, 24.96221f, 18f, false, false, 0))
			num = 1;
	else if (iLocal_107 == 2)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_80, true), true) < 30f)
			num = 1;
	else if (iLocal_107 == 4)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.326782f, -959.64435f, 38.444405f, 119.920845f, -1021.23083f, 21.857378f, 123.75f, false, true, 0))
			num = 1;
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
		num = 1;

	return num;
}

int func_176(BOOL bParam0) // Position - 0x7C56 (31830)
{
	if (func_178())
	{
		Global_114953 = true;
		Global_114950 = MISC::GET_GAME_TIMER();
	
		if (func_177(Global_114952))
			func_142(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Evento aleatorio*/);
	
		if (bParam0 && func_177(Global_114952))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

BOOL func_177(BOOL bParam0) // Position - 0x7CA9 (31913)
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

BOOL func_178() // Position - 0x7CD8 (31960)
{
	switch (func_179(&Global_33875, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_179(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x7D0E (32014)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99939.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_183(0))
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
			func_180(uParam0, iParam4);
	}

	return 2;
}

void func_180(var uParam0, int iParam1) // Position - 0x7E45 (32325)
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x7E94 (32404)
{
	return func_182(iParam0, Global_44921);
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x7EA5 (32421)
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

BOOL func_183(int iParam0) // Position - 0x8088 (32904)
{
	if (Global_44921 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_184() // Position - 0x80AA (32938)
{
	BOOL num;

	num = 0;

	if (iLocal_107 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.10301f, -1682.4211f, 53.693f, -83.53208f, -1567.5836f, 25.187452f, 40.75f, false, false, 0))
			num = 1;
	else if (iLocal_107 == 2)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.15063f, -296.19617f, 62.765713f, 210.46458f, -243.51062f, 46.13731f, 123.75f, false, true, 0))
			num = 1;
	else if (iLocal_107 == 3)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
			num = 1;

	return num;
}

BOOL func_185() // Position - 0x8160 (33120)
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_194())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_193())
			return false;

	if (func_186(100f, true) != -1)
		return true;

	return false;
}

int func_186(float fParam0, BOOL bParam1) // Position - 0x81C2 (33218)
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
		if (func_131(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_192();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_114963.f_18583[num /*6*/], 2) && !IS_BIT_SET(Global_114963.f_18583[num /*6*/], 3))
				{
					func_187(num, &unk);
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

void func_187(int iParam0, var uParam1) // Position - 0x8273 (33395)
{
	switch (iParam0)
	{
		case 0:
			func_188(uParam1, "Abigail1", func_190(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 1:
			func_188(uParam1, "Abigail2", func_190(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 2:
			func_188(uParam1, "Barry1", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 3:
			func_188(uParam1, "Barry2", func_190(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 4:
			func_188(uParam1, "Barry3", func_190(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 5:
			func_188(uParam1, "Barry3A", func_190(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Las zonas donde puedes encontrar un vehículo con un botín oculto aparecen indicadas en el mapa. Recoge estos vehículos para Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 6:
			func_188(uParam1, "Barry3C", func_190(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 7:
			func_188(uParam1, "Barry4", func_190(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_189(iParam0), 0, 0);
			break;
	
		case 8:
			func_188(uParam1, "Dreyfuss1", func_190(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*Se reveló la identidad y el paradero del asesino.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 9:
			func_188(uParam1, "Epsilon1", func_190(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 10:
			func_188(uParam1, "Epsilon2", func_190(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 11:
			func_188(uParam1, "Epsilon3", func_190(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 12:
			func_188(uParam1, "Epsilon4", func_190(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 13:
			func_188(uParam1, "Epsilon5", func_190(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 14:
			func_188(uParam1, "Epsilon6", func_190(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 15:
			func_188(uParam1, "Epsilon7", func_190(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 16:
			func_188(uParam1, "Epsilon8", func_190(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 17:
			func_188(uParam1, "Extreme1", func_190(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 18:
			func_188(uParam1, "Extreme2", func_190(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 19:
			func_188(uParam1, "Extreme3", func_190(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 20:
			func_188(uParam1, "Extreme4", func_190(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 21:
			func_188(uParam1, "Fanatic1", func_190(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_189(iParam0), 1, 0);
			break;
	
		case 22:
			func_188(uParam1, "Fanatic2", func_190(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_189(iParam0), 1, 0);
			break;
	
		case 23:
			func_188(uParam1, "Fanatic3", func_190(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_189(iParam0), 0, 1);
			break;
	
		case 24:
			func_188(uParam1, "Hao1", func_190(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_189(iParam0), 0, 1);
			break;
	
		case 25:
			func_188(uParam1, "Hunting1", func_190(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 26:
			func_188(uParam1, "Hunting2", func_190(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 27:
			func_188(uParam1, "Josh1", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 28:
			func_188(uParam1, "Josh2", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 29:
			func_188(uParam1, "Josh3", func_190(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 30:
			func_188(uParam1, "Josh4", func_190(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 31:
			func_188(uParam1, "Maude1", func_190(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 32:
			func_188(uParam1, "Minute1", func_190(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 33:
			func_188(uParam1, "Minute2", func_190(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 34:
			func_188(uParam1, "Minute3", func_190(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 35:
			func_188(uParam1, "MrsPhilips1", func_190(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 36:
			func_188(uParam1, "MrsPhilips2", func_190(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 37:
			func_188(uParam1, "Nigel1", func_190(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 38:
			func_188(uParam1, "Nigel1A", func_190(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Se marcaron en el mapa las zonas en las que puedes encontrar objetos de famosos. Róbalos para Nigel y para la señora Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 39:
			func_188(uParam1, "Nigel1B", func_190(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
	
		case 40:
			func_188(uParam1, "Nigel1C", func_190(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
	
		case 41:
			func_188(uParam1, "Nigel1D", func_190(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_189(iParam0), 1, 1);
			break;
	
		case 42:
			func_188(uParam1, "Nigel2", func_190(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 43:
			func_188(uParam1, "Nigel3", func_190(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 1);
			break;
	
		case 44:
			func_188(uParam1, "Omega1", func_190(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 45:
			func_188(uParam1, "Omega2", func_190(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 46:
			func_188(uParam1, "Paparazzo1", func_190(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 47:
			func_188(uParam1, "Paparazzo2", func_190(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 48:
			func_188(uParam1, "Paparazzo3", func_190(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 49:
			func_188(uParam1, "Paparazzo3A", func_190(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Las zonas en las que puedes encontrar oportunidades para sacar fotos a famosos se marcaron en el mapa. Localiza y fotografía a estos famosos para Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 50:
			func_188(uParam1, "Paparazzo3B", func_190(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 51:
			func_188(uParam1, "Paparazzo4", func_190(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 52:
			func_188(uParam1, "Rampage1", func_190(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 54:
			func_188(uParam1, "Rampage3", func_190(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 55:
			func_188(uParam1, "Rampage4", func_190(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 56:
			func_188(uParam1, "Rampage5", func_190(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_189(iParam0), 0, 0);
			break;
	
		case 53:
			func_188(uParam1, "Rampage2", func_190(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_189(iParam0), 1, 0);
			break;
	
		case 57:
			func_188(uParam1, "TheLastOne", func_190(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 58:
			func_188(uParam1, "Tonya1", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Puedes encontrar extraños y locos por todo San Andreas en ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 59:
			func_188(uParam1, "Tonya2", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 60:
			func_188(uParam1, "Tonya3", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 61:
			func_188(uParam1, "Tonya4", func_190(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		case 62:
			func_188(uParam1, "Tonya5", func_190(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_189(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_188(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x93E8 (37864)
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

int func_189(int iParam0) // Position - 0x9479 (38009)
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

struct<2> func_190(int iParam0) // Position - 0x97BF (38847)
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_191(iParam0) };

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

struct<2> func_191(int iParam0) // Position - 0x97F5 (38901)
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

int func_192() // Position - 0x9C40 (40000)
{
	func_130();

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

BOOL func_193() // Position - 0x9C86 (40070)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_194() // Position - 0x9CA3 (40099)
{
	if (func_197() && !func_193())
		return true;

	if (func_196() && func_195())
		return true;

	return false;
}

BOOL func_195() // Position - 0x9CD5 (40149)
{
	return Global_114681 > 0;
}

BOOL func_196() // Position - 0x9CE3 (40163)
{
	if (Global_99383 != -1)
		return true;

	return false;
}

BOOL func_197() // Position - 0x9CF8 (40184)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 20);

	return false;
}

BOOL func_198() // Position - 0x9D1B (40219)
{
	if (Global_114952 == func_199() && MISC::GET_RANDOM_EVENT_FLAG() && Global_114953)
		return true;

	return false;
}

BOOL func_199() // Position - 0x9D46 (40262)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_200(unk);
	return num;
}

int func_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x9D63 (40291)
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

void func_201() // Position - 0x9F3D (40765)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);

	func_300(25, iLocal_107);
	func_205();
	func_202();
	func_282();
	return;
}

void func_202() // Position - 0x9F6F (40815)
{
	func_203();
	return;
}

int func_203() // Position - 0x9F7C (40828)
{
	if (func_204(false))
		return 0;

	if (Global_102525.f_8)
		if (Global_102525.f_10 > 0)
			return 0;
	else if (Global_102525.f_10 > 1)
		return 0;

	Global_102525.f_10 = Global_102525.f_10 + 1;
	return 1;
}

BOOL func_204(BOOL bParam0) // Position - 0x9FC7 (40903)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80586, 0);
}

int func_205() // Position - 0x9FEF (40943)
{
	return 1;
}

void func_206(int iParam0) // Position - 0x9FF8 (40952)
{
	Global_114949 = iParam0;
	return;
}

void func_207() // Position - 0xA006 (40966)
{
	switch (iLocal_157)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_80))
				TASK::TASK_PLAY_ANIM(pedLocal_80, sLocal_376, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, false, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_79))
				TASK::TASK_PLAY_ANIM(pedLocal_79, sLocal_378, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, false, false, false);
		
			iLocal_157 = iLocal_157 + 1;
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (!PED::IS_PED_INJURED(pedLocal_80))
				{
					if (func_184())
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_85))
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
								blLocal_85 = func_145(pedLocal_80, true, 0);
						
							if (!func_198())
								func_176(true);
						}
					}
				
					if (func_175())
					{
						_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, "REMG2_ARG", 4, 0, 0, 0);
						func_174();
						iLocal_204 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						bLocal_207 = true;
						iLocal_157 = iLocal_157 + 1;
					}
				}
				else if (!PED::IS_PED_INJURED(pedLocal_79))
				{
					TASK::TASK_SMART_FLEE_COORD(pedLocal_79, uLocal_162, 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_79, true);
					BUILTIN::WAIT(0);
					func_213();
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_212())
					iLocal_157 = 4;
			
				if (func_161())
					iLocal_157 = 9;
			
				if (func_211())
					iLocal_157 = 6;
			
				if (func_210())
					iLocal_157 = 4;
			}
		
			if (!func_198())
				if (func_185())
					func_282();
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (!PED::IS_PED_INJURED(pedLocal_80))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 6f, 6f, 15f, false, true, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(pedLocal_80, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 3f, 3f, 15f, false, true, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), pedLocal_80, 65f))
							{
								iLocal_206 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_129, 4, 0, 0, 0);
								BUILTIN::SETTIMERB(0);
								iLocal_157 = iLocal_157 + 1;
							}
							else
							{
								iLocal_206 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_80, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_129, 4, 0, 0, 0);
								BUILTIN::SETTIMERB(0);
								iLocal_157 = iLocal_157 + 1;
							}
						}
					}
				}
			}
		
			if (func_212() || func_210())
				iLocal_157 = 4;
		
			if (func_161())
				iLocal_157 = 9;
		
			if (func_211())
				iLocal_157 = 6;
			break;
	
		case 3:
			if (iLocal_205 - iLocal_206 > 12500)
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					iLocal_157 = 4;
		
			if (iLocal_205 - iLocal_206 > 5500)
			{
				if (!bLocal_154)
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
					{
						if (!PED::IS_PED_INJURED(pedLocal_80))
						{
							_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_131, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_154 = true;
						
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
							{
								if (!PED::IS_PED_INJURED(pedLocal_79))
								{
									TASK::TASK_SMART_FLEE_COORD(pedLocal_79, uLocal_162, 250f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_79, true);
									BUILTIN::WAIT(0);
								}
							
								!PED::IS_PED_INJURED(pedLocal_79);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_82))
									HUD::REMOVE_BLIP(&blLocal_82);
							}
						}
					}
				}
			}
		
			if (bLocal_154)
			{
				iLocal_157 = 10;
			}
			else
			{
				if (func_212())
					iLocal_157 = 4;
			
				if (func_161())
					iLocal_157 = 9;
			
				if (func_211())
					iLocal_157 = 6;
			
				if (func_209())
					iLocal_157 = 9;
			
				if (func_210())
					iLocal_157 = 4;
			}
			break;
	
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (PED::IS_PED_INJURED(pedLocal_80) || func_38(PLAYER::PLAYER_PED_ID(), pedLocal_80, true) > 100f)
				{
					func_208();
					func_213();
				}
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
			{
				if (!PED::IS_PED_INJURED(pedLocal_79))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_79);
					
						if (!PED::IS_PED_INJURED(pedLocal_80))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_80, false), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							PED::SET_PED_KEEP_TASK(pedLocal_79, true);
						}
					
						bLocal_165 = true;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(pedLocal_79);
						TASK::TASK_SMART_FLEE_PED(pedLocal_79, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_79, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_82))
							HUD::REMOVE_BLIP(&blLocal_82);
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (!PED::IS_PED_INJURED(pedLocal_80))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_80);
					TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_80, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_83))
						HUD::REMOVE_BLIP(&blLocal_83);
				}
			}
		
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				func_110();
		
			BUILTIN::WAIT(0);
		
			if (!bLocal_165)
			{
				if (!PED::IS_PED_INJURED(pedLocal_80))
					_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, "REMG2_FKIT", 4, 0, 0, 0);
			
				func_282();
			}
			break;
	
		case 5:
			if (BUILTIN::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
				{
					if (!PED::IS_PED_INJURED(pedLocal_80))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_80, BF_AlwaysFlee, true);
						PED::SET_PED_RESET_FLAG(pedLocal_80, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
						PED::SET_PED_KEEP_TASK(pedLocal_80, true);
						BUILTIN::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_80);
						_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_130, 4, 0, 0, 0);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
				{
					if (!PED::IS_PED_INJURED(pedLocal_79))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_79);
							bLocal_165 = true;
						}
					}
				}
			
				if (!bLocal_165)
				{
					BUILTIN::WAIT(0);
					func_282();
				}
			}
			break;
	
		case 6:
			if (BUILTIN::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
					{
						if (!PED::IS_PED_INJURED(pedLocal_79))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_79);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							PED::SET_PED_KEEP_TASK(pedLocal_79, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_79);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
					{
						if (!PED::IS_PED_INJURED(pedLocal_80))
						{
							_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_131, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(pedLocal_80);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_80, iLocal_138);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
							PED::SET_PED_KEEP_TASK(pedLocal_80, true);
						}
					}
				}
			
				BUILTIN::WAIT(0);
				func_282();
			}
			break;
	
		case 7:
			BUILTIN::SETTIMERA(0);
			iLocal_157 = iLocal_157 + 1;
			break;
	
		case 8:
			if (BUILTIN::TIMERA() > 200)
				func_213();
			break;
	
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
			{
				if (!PED::IS_PED_INJURED(pedLocal_80))
				{
					PED::SET_PED_RESET_FLAG(pedLocal_80, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(pedLocal_80, 50f, 0);
				
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_110();
				
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_129, 4, 0, 0, 0);
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
			{
				if (!PED::IS_PED_INJURED(pedLocal_79))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_79);
					TASK::TASK_COWER(pedLocal_79, 2000);
					bLocal_165 = true;
				}
			}
			break;
	}

	if (iLocal_157 != 8 && bLocal_165)
		iLocal_157 = 7;

	iLocal_205 = MISC::GET_GAME_TIMER();

	if (bLocal_207 && !bLocal_154)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_80) && ENTITY::DOES_ENTITY_EXIST(pedLocal_80))
		{
			if (!PED::IS_PED_INJURED(pedLocal_79) && !PED::IS_PED_INJURED(pedLocal_80))
			{
				if (iLocal_205 - iLocal_204 > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 3f, 3f, 35f, false, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_80) && !func_169())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, "REMG2_FKIT", 4, 0, 0, 0) || func_63() || func_63())
					{
						PED::SET_PED_RESET_FLAG(pedLocal_80, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(pedLocal_80, PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f), false);
						TASK::CLEAR_PED_TASKS(pedLocal_79);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_79, 99, 0, 0);
						TASK::TASK_SMART_FLEE_COORD(pedLocal_80, uLocal_162, 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_80, true);
						func_282();
					}
				}
			}
		}
	}

	return;
}

void func_208() // Position - 0xA7FA (43002)
{
	Global_21889 = 0;
	func_57();
	return;
}

BOOL func_209() // Position - 0xA80A (43018)
{
	if (!PED::IS_PED_INJURED(pedLocal_79) && !PED::IS_PED_INJURED(pedLocal_80))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79))
			return true;
	
		ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_80, 2f, 2f, 2f, false, true, 0);
	}

	return false;
}

BOOL func_210() // Position - 0xA85D (43101)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 20f, 20f, 20f, false, true, 0))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79))
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					return true;
	else
		return true;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_80, false))
		if (func_161())
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;
	else
		return true;

	return false;
}

BOOL func_211() // Position - 0xA8EB (43243)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_79, 5.3f, 5.3f, 6f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_79, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(pedLocal_80))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_80))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79))
							{
								BUILTIN::SETTIMERB(0);
								return true;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_79))
					{
						BUILTIN::SETTIMERB(0);
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_212() // Position - 0xA9A9 (43433)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_79, false))
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_79, 31086, 0f, 0f, 0f), 5f, true))
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;

	return false;
}

void func_213() // Position - 0xA9E1 (43489)
{
	if (!PED::IS_PED_INJURED(pedLocal_79))
	{
		if (!PED::IS_PED_RAGDOLL(pedLocal_79))
		{
			if (func_198())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_COWER) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_110();
				
					if (!PED::IS_PED_INJURED(pedLocal_80))
						if (!PED::IS_PED_FLEEING(pedLocal_79))
							TASK::TASK_SMART_FLEE_PED(pedLocal_79, pedLocal_80, 150f, -1, false, false);
					else if (iLocal_64 == 3)
						if (!PED::IS_PED_FLEEING(pedLocal_79))
							TASK::TASK_SMART_FLEE_COORD(pedLocal_79, uLocal_139, 150f, -1, false, false);
				
					PED::SET_PED_KEEP_TASK(pedLocal_79, true);
					BUILTIN::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_211, sLocal_120, sLocal_126, 4, 0, 0, 0);
					BUILTIN::WAIT(0);
				
					if (iLocal_209 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_209 / 100) * 90);
						func_65(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_209);
						BUILTIN::WAIT(0);
						func_214(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_209 / 10, false, true);
					}
				
					func_206(3);
					func_201();
				}
			}
			else
			{
				func_282();
			}
		}
		else
		{
			func_282();
		}
	}
	else
	{
		func_282();
	}

	return;
}

void func_214(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAAEF (43759)
{
	int outValue;
	Hash statHash;

	if (func_98(echParam0) == 3)
		return;

	if (func_98(echParam0) == 4)
		return;

	func_66(func_98(echParam0), 1, iParam1, iParam2, false);

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

BOOL func_215() // Position - 0xABC1 (43969)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_60) < 75f * 75f)
			return true;
	
		if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_193())
			return false;
	}

	if (func_194())
		return true;

	if (func_186(100f, true) != -1)
		return true;

	return false;
}

BOOL func_216() // Position - 0xAC47 (44103)
{
	func_227();
	func_226(&uLocal_410, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_226(&uLocal_410, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_226(&uLocal_410, sLocal_394);
	func_226(&uLocal_410, sLocal_378);
	func_224(&uLocal_410, hLocal_100);
	func_224(&uLocal_410, hLocal_101);
	func_224(&uLocal_410, hLocal_102);
	func_226(&uLocal_410, sLocal_377);
	func_226(&uLocal_410, sLocal_376);
	func_226(&uLocal_410, sLocal_395);
	func_226(&uLocal_410, "RANDOM@BICYCLE_THIEF@IDLE_A");

	if (func_220(&uLocal_410))
	{
		func_217();
		return true;
	}

	return false;
}

void func_217() // Position - 0xACD4 (44244)
{
	pedLocal_79 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_100, uLocal_86, fLocal_92, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_79, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_79, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_79, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_79, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_79, 512, true);
	AUDIO::STOP_PED_SPEAKING(pedLocal_79, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(pedLocal_79);
	PED::SET_PED_MONEY(pedLocal_79, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_79, true);

	if (hLocal_100 == joaat("A_M_Y_GenStreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_UPPR, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_LOWR, 0, 2, 0);
	}

	if (hLocal_100 == joaat("A_M_Y_Business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_HAIR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_UPPR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_LOWR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_79, PV_COMP_ACCS, 0, 0, 0);
	}

	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &hLocal_103);
	pedLocal_80 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_101, uLocal_89, fLocal_95, true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_80, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_80, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_80, true, 0);
	WEAPON::GIVE_WEAPON_TO_PED(pedLocal_80, joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_80, BF_Aggressive, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_80, BF_AlwaysFlee, false);
	PED::SET_PED_DIES_WHEN_INJURED(pedLocal_80, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_80, 42, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_80, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_80, hLocal_103);
	AUDIO::STOP_PED_SPEAKING(pedLocal_80, true);

	if (!MISC::IS_STRING_NULL(sLocal_137))
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_79, sLocal_137);

	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_80, sLocal_136);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), hLocal_103);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), hLocal_103);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_103, joaat("CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_103, joaat("CIVFEMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_103, joaat("PLAYER"));

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_211, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
	
		case CHAR_FRANKLIN:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_211, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
	
		case CHAR_TREVOR:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_211, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_211, 1, pedLocal_80, sLocal_135, 0, 1);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_211, 2, pedLocal_79, sLocal_134, 0, 1);

	if (iLocal_64 == 2)
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_80, 1, false);

	if (iLocal_107 == 1 || iLocal_107 == 4)
		func_218();

	if (iLocal_107 == 3)
	{
		uLocal_142 = { -325.4189f, -828.8596f, 31.1f };
		fLocal_145 = { 0f, 0f, 180f };
		iLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_142, fLocal_145, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_80, iLocal_148, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}

	if (iLocal_107 == 4)
		PATHFIND::DISABLE_NAVMESH_IN_AREA({ 28.5315f, -1027.5654f, 37.1197f } - { 1f, 1f, 1f }, { 28.5315f, -1027.5654f, 37.1197f } + { 1f, 1f, 1f }, true);

	return;
}

void func_218() // Position - 0xAF95 (44949)
{
	var animInitialOffsetRotation;

	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_80, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_376, sLocal_382, uLocal_388, uLocal_391, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_376, sLocal_382, uLocal_388, uLocal_391, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_80, animInitialOffsetRotation.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_79, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_376, sLocal_383, uLocal_388, uLocal_391, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_376, sLocal_383, uLocal_388, uLocal_391, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_79, animInitialOffsetRotation.f_2);
	TASK::TASK_PLAY_ANIM(pedLocal_80, sLocal_376, sLocal_382, 1000f, -1000f, -1, 9, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(pedLocal_79, sLocal_376, sLocal_383, 1000f, -1000f, -1, 9, 0, false, false, false);
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xB08B (45195)
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

BOOL func_220(var uParam0) // Position - 0xB126 (45350)
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
		
			if (!func_221(&uParam0->[i /*18*/]))
				return false;
		}
	}

	uParam0->f_271 = 0;
	return true;
}

BOOL func_221(var uParam0) // Position - 0xB184 (45444)
{
	return func_222(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_222(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xB19B (45467)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_223(iParam0))
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

int func_223(int iParam0) // Position - 0xB286 (45702)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

void func_224(var uParam0, Hash hParam1) // Position - 0xB2AF (45743)
{
	func_225(uParam0, 0, hParam1, "NULL", 0);
	return;
}

void func_225(var uParam0, int iParam1, Hash hParam2, char* sParam3, int iParam4) // Position - 0xB2C3 (45763)
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

void func_226(var uParam0, char* sParam1) // Position - 0xB3A4 (45988)
{
	func_225(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_227() // Position - 0xB3B7 (46007)
{
	func_280();
	MISC::SET_BIT(&iLocal_161, 3);
	MISC::SET_BIT(&iLocal_161, 4);
	MISC::SET_BIT(&iLocal_161, 1);

	if (iLocal_107 == 1)
	{
		sLocal_376 = "RANDOM@MUGGING1";
		sLocal_382 = "STRUGGLE_Loop_A_Thief";
		sLocal_383 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_385 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_384 = "FLEE_BACKWARD_Thief";
		sLocal_387 = "FLEE_FORWARD_Shopkeeper";
		sLocal_386 = "FLEE_FORWARD_Thief";
		func_229();
		iLocal_209 = 200;
		iLocal_65 = 2;
		uLocal_162 = { -132.2607f, -1628.3357f, 31.2107f };
		hLocal_100 = joaat("A_M_Y_Business_02");
		hLocal_101 = joaat("G_M_Y_StrPunk_01");
		uLocal_86 = { -138.814f, -1635.9751f, 31.357f };
		fLocal_92 = 318.519f;
		uLocal_89 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_95 = 98f;
		uLocal_388 = { uLocal_86 };
		uLocal_391 = { 0f, 0f, fLocal_92 };
		uLocal_183 = { -103.89513f, -1593.239f, 30.491978f };
		uLocal_186 = { -89.29615f, -1575.4436f, 32.30938f };
		uLocal_189 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_192 = { -169.81827f, -1669.5555f, 33.941727f };
		uLocal_195 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_198 = { -103.89513f, -1593.239f, 30.491978f };
		fLocal_96 = 340.0645f;
		uLocal_97 = { -151.0793f, -1650.322f, 31.6504f };
		uLocal_104 = { -133.6872f, -1630.2448f, 31.2527f };
		hLocal_102 = joaat("prop_ld_wallet_pickup");
		sLocal_120 = "REMG1AU";
		sLocal_121 = "REMG1_VIC";
		sLocal_122 = "REMG1_SHT";
		sLocal_123 = "REMG1_ASK";
		sLocal_124 = "REMG1_DRP";
		sLocal_125 = "REMG1_OHY";
		sLocal_126 = "REMG1_THK";
		sLocal_127 = "REMG1_GIV";
		sLocal_128 = "REMG1_MUGA";
		sLocal_129 = "REMG1_WHO";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_132 = "REMG1_HOM";
				sLocal_133 = "REMG1_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_132 = "REMG1_HOF";
				sLocal_133 = "REMG1_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_132 = "REMG1_HOT";
				sLocal_133 = "REMG1_WAT";
				break;
		}
	
		sLocal_136 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_137 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_134 = "MuggedMan";
		sLocal_135 = "MuggerGang";
		bLocal_67 = true;
		sLocal_395 = "move_m@hurry@b";
	}

	if (iLocal_107 == 2)
	{
		sLocal_376 = "random@mugging2";
		sLocal_378 = "random@mugging2";
		iLocal_65 = 1;
		uLocal_162 = { 287.888f, -284.603f, 52.967f };
		hLocal_100 = joaat("A_F_Y_GenHot_01");
		hLocal_101 = joaat("G_M_Y_StrPunk_01");
		uLocal_86 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_92 = 260.7569f;
		uLocal_89 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_95 = 45f;
		fLocal_96 = 251f;
		uLocal_97 = { 297.4484f, -261.2914f, 53.0037f };
		hLocal_102 = joaat("prop_ld_handbag");
		sLocal_120 = "REMG2AU";
		sLocal_121 = "REMG2_VIC";
		sLocal_122 = "REMG2_SHT";
		sLocal_123 = "REMG2_ASK";
		sLocal_124 = "REMG2_DRP";
		sLocal_125 = "REMG2_OHY";
		sLocal_126 = "REMG2_THK";
		sLocal_127 = "REMG2_GIV";
		sLocal_129 = "REMG2_WHO";
		sLocal_130 = "REMG2_GUN";
		sLocal_131 = "REMG2_FUT";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_132 = "REMG2_HOM";
				sLocal_133 = "REMG2_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_132 = "REMG2_HOF";
				sLocal_133 = "REMG2_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_132 = "REMG2_HOT";
				sLocal_133 = "REMG2_WAT";
				break;
		}
	
		sLocal_136 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_134 = "MuggedYMan";
		sLocal_135 = "MuggerGang";
		bLocal_67 = true;
		sLocal_395 = "move_m@hurry@b";
	}

	if (iLocal_64 == 1)
	{
		func_228();
		iLocal_209 = 2000;
		iLocal_65 = 2;
	
		if (iLocal_107 == 3)
		{
			sLocal_376 = "RANDOM@MUGGING3";
			uLocal_162 = { -317.1964f, -824.0751f, 31.4284f };
			hLocal_100 = joaat("A_F_Y_Hipster_01");
			hLocal_101 = joaat("A_M_O_Tramp_01");
			uLocal_86 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_92 = 80.7161f;
			uLocal_89 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_95 = 336.5502f;
			fLocal_96 = 81.8694f;
			uLocal_97 = { -322.3941f, -835.7213f, 30.6001f };
			uLocal_104 = { -320.9667f, -832.1209f, 30.5979f };
			hLocal_102 = joaat("prop_ld_purse_01");
			sLocal_120 = "REMG3AU";
			sLocal_121 = "REMG3_VIC";
			sLocal_122 = "REMG3_SHT";
			sLocal_123 = "REMG3_ASK";
			sLocal_124 = "REMG3_DRP";
			sLocal_125 = "REMG3_OHY";
			sLocal_126 = "REMG3_THK";
			sLocal_127 = "REMG3_GIV";
			sLocal_128 = "REMG3_MUGB";
			sLocal_129 = "REMG3_WHO";
			sLocal_130 = "REMG3_GUN";
			sLocal_131 = "REMG3_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_132 = "REMG3_HOM";
					sLocal_133 = "REMG3_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_132 = "REMG3_HOF";
					sLocal_133 = "REMG3_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_132 = "REMG3_HOT";
					sLocal_133 = "REMG3_WAT";
					break;
			}
		
			sLocal_136 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_134 = "MUGGEDHIPSTER";
			sLocal_135 = "MuggerTramp";
			bLocal_67 = true;
			sLocal_395 = "move_f@hurry@a";
		}
	
		if (iLocal_107 == 4)
		{
			func_228();
			sLocal_376 = "RANDOM@MUGGING4";
			sLocal_382 = "STRUGGLE_Loop_B_Thief";
			sLocal_383 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_385 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_384 = "FLEE_BACKWARD_Thief";
			sLocal_387 = "FLEE_FORWARD_Shopkeeper";
			sLocal_386 = "FLEE_FORWARD_Thief";
			uLocal_162 = { 32.8802f, -1016.0609f, 28.4527f };
			hLocal_100 = joaat("A_F_M_Tourist_01");
			hLocal_101 = joaat("G_M_Y_ArmGoon_02");
			uLocal_86 = { 32.2169f, -1020.8641f, 28.456f };
			fLocal_92 = 159.1445f;
			uLocal_388 = { uLocal_86 };
			uLocal_391 = { 0f, 0f, fLocal_92 };
			uLocal_89 = { 38.1933f, -1023.5788f, 28.4889f };
			fLocal_95 = 60.1372f;
			fLocal_96 = 248f;
			uLocal_97 = { 42.5323f, -990.353f, 28.248f };
			uLocal_183 = { 38.151863f, -1001.48535f, 28.422756f };
			uLocal_186 = { 40.136692f, -995.2711f, 30.371975f };
			uLocal_189 = { 37.217583f, -1040.3536f, 28.41506f };
			uLocal_192 = { 19.914917f, -1036.814f, 30.280445f };
			uLocal_195 = { 28.4511f, -1035.7179f, 28.3329f };
			uLocal_198 = { 38.6536f, -1001.0728f, 28.407f };
			uLocal_104 = { 32.536f, -1020.2932f, 28.4576f };
			hLocal_102 = joaat("prop_ld_wallet_pickup");
			sLocal_120 = "REMG4AU";
			sLocal_121 = "REMG4_VIC";
			sLocal_122 = "REMG4_SHT";
			sLocal_123 = "REMG4_ASK";
			sLocal_124 = "REMG4_DRP";
			sLocal_125 = "REMG4_OHY";
			sLocal_126 = "REMG4_THK";
			sLocal_127 = "REMG4_GIV";
			sLocal_128 = "REMG4_MUGB";
			sLocal_129 = "REMG4_WHO";
			sLocal_130 = "REMG4_GUN";
			sLocal_131 = "REMG4_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_132 = "REMG4_HOM";
					sLocal_133 = "REMG4_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_132 = "REMG4_HOF";
					sLocal_133 = "REMG4_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_132 = "REMG4_HOT";
					sLocal_133 = "REMG4_WAT";
					break;
			}
		
			sLocal_136 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_134 = "MuggedWoman";
			sLocal_135 = "MuggerGang";
			bLocal_67 = true;
			sLocal_395 = "move_f@hurry@a";
		}
	}

	return;
}

void func_228() // Position - 0xBA46 (47686)
{
	sLocal_378 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_379 = "Return_Wallet_Positive_A_Player";
			sLocal_380 = "Return_Wallet_Positive_A_Female";
			sLocal_381 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_379 = "Return_Wallet_Positive_B_Player";
			sLocal_380 = "Return_Wallet_Positive_B_Female";
			sLocal_381 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_379 = "Return_Wallet_Positive_C_Player";
			sLocal_380 = "Return_Wallet_Positive_C_Female";
			sLocal_381 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_229() // Position - 0xBABA (47802)
{
	sLocal_378 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_379 = "Return_Wallet_Positive_A_Player";
			sLocal_380 = "Return_Wallet_Positive_A_Male";
			sLocal_381 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_379 = "Return_Wallet_Positive_B_Player";
			sLocal_380 = "Return_Wallet_Positive_B_Male";
			sLocal_381 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_379 = "Return_Wallet_Positive_C_Player";
			sLocal_380 = "Return_Wallet_Positive_C_Male";
			sLocal_381 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_230(Blip blParam0, var uParam1) // Position - 0xBB2E (47918)
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

void func_231(var uParam0) // Position - 0xBBCD (48077)
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_102486.f_20, 2) || IS_BIT_SET(Global_102486.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_232(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_232(int* piParam0) // Position - 0xBC4F (48207)
{
	func_233(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_233(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0xBC65 (48229)
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_223(*piParam0))
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

void func_234(BOOL bParam0) // Position - 0xBD36 (48438)
{
	if (bParam0 == -1)
		bParam0 = func_199();

	if (bParam0 == -1)
		return;

	func_236(bParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114949 = 0;
	func_235();
	return;
}

void func_235() // Position - 0xBD6C (48492)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_236(BOOL bParam0) // Position - 0xBDA9 (48553)
{
	Global_114952 = bParam0;
	return;
}

BOOL func_237(var uParam0, var uParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBDB7 (48567)
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_153557)
		return false;

	if (bParam3 == -1)
		bParam3 = func_199();

	if (bParam3 == -1)
		return false;

	if (bParam3 == 31 || bParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_60 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (BUILTIN::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_193())
				return false;
		}
	
		if (!Global_114963.f_9094)
			return false;
	
		if (func_204(false))
			return false;
	
		if (func_194())
			return false;
	
		if (func_276())
			return false;
	
		if (Global_114952 != -1)
			return false;
	
		if (func_131(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_186(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_60.f_2 > 50f)
				return false;
	
		if (!func_275(bParam3))
			return false;
	
		if (func_131(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_274(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_274(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_131(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_273(bParam3, iParam4, 145))
				return false;
	
		if (!func_272(Global_114963.f_25004.f_43[bParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_114954 < 150000)
			if (bParam3 != 30)
				return false;
	
		if (func_271())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_262(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_261(bParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_4 && bParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (bParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_261(false, 0))
			return false;
	
		if (Global_33962)
			return false;
	
		if (func_275(30) && !func_261(30, 0))
			if (bParam3 != 30)
				if (BUILTIN::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_131(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_114963.f_2370.f_539.f_2300[i /*3*/] };
				num = Global_114963.f_2370.f_539.f_2296[i];
			
				if (func_260(num))
					if (func_238(i))
						if (!func_28(vector, 0f, 0f, 0f, false))
							if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_238(eCharacter echParam0) // Position - 0xC152 (49490)
{
	int num;

	num = Global_114963.f_2370.f_539.f_2296[echParam0];
	return func_239(num);
}

BOOL func_239(int iParam0) // Position - 0xC173 (49523)
{
	return func_240(iParam0, 1);
}

int func_240(int iParam0, int iParam1) // Position - 0xC182 (49538)
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_260(iParam0))
		return 0;

	func_241(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_241(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC1D5 (49621)
{
	func_242(func_253(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_242(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC1F3 (49651)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_252(iParam0, iParam1))
	{
		num = func_251(iParam1);
		num2 = func_249(iParam0);
		num3 = func_249(iParam0) - func_249(iParam1);
		num4 = func_251(iParam0) - func_251(iParam1);
		num5 = func_248(iParam0) - func_248(iParam1);
		num6 = func_247(iParam0) - func_247(iParam1);
		num7 = func_246(iParam0) - func_246(iParam1);
		num8 = func_245(iParam0) - func_245(iParam1);
	}
	else
	{
		num = func_251(iParam0);
		num2 = func_249(iParam1);
		num3 = func_249(iParam1) - func_249(iParam0);
		num4 = func_251(iParam1) - func_251(iParam0);
		num5 = func_248(iParam1) - func_248(iParam0);
		num6 = func_247(iParam1) - func_247(iParam0);
		num7 = func_246(iParam1) - func_246(iParam0);
		num8 = func_245(iParam1) - func_245(iParam0);
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
	
		num5 = num5 + func_244(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_243(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

float func_243(float fParam0, float fParam1, float fParam2) // Position - 0xC3F4 (50164)
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

int func_244(int iParam0, int iParam1) // Position - 0xC436 (50230)
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

int func_245(int iParam0) // Position - 0xC4D8 (50392)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_246(int iParam0) // Position - 0xC4EB (50411)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_247(int iParam0) // Position - 0xC4FE (50430)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_248(int iParam0) // Position - 0xC511 (50449)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_249(int iParam0) // Position - 0xC523 (50467)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_250(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC545 (50501)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_251(int iParam0) // Position - 0xC55C (50524)
{
	return iParam0 & 15;
}

BOOL func_252(int iParam0, int iParam1) // Position - 0xC569 (50537)
{
	int num;
	int num2;

	if (!func_260(iParam1) || !func_260(iParam0))
		return 1;

	num = func_249(iParam0);
	num2 = func_249(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_251(iParam0);
	num2 = func_251(iParam1);

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
	else if (num < num2)
		return 0;

	num = func_245(iParam0);
	num2 = func_245(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_253() // Position - 0xC675 (50805)
{
	var unk;

	func_259(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_258(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_257(&unk, CLOCK::GET_CLOCK_HOURS());
	func_256(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_255(&unk, CLOCK::GET_CLOCK_MONTH());
	func_254(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_254(var uParam0, int iParam1) // Position - 0xC6BB (50875)
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

void func_255(var uParam0, int iParam1) // Position - 0xC741 (51009)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_256(var uParam0, int iParam1) // Position - 0xC774 (51060)
{
	int num;
	int num2;

	num = func_251(*uParam0);
	num2 = func_249(*uParam0);

	if (iParam1 < 1 || iParam1 > func_244(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_257(var uParam0, int iParam1) // Position - 0xC7C5 (51141)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_258(var uParam0, int iParam1) // Position - 0xC7FF (51199)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_259(var uParam0, int iParam1) // Position - 0xC83A (51258)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_260(int iParam0) // Position - 0xC876 (51318)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_245(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_246(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_247(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_249(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_251(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_248(iParam0);

	if (num6 < 1 || num6 > func_244(num5, num4))
		return false;

	return true;
}

BOOL func_261(BOOL bParam0, int iParam1) // Position - 0xC952 (51538)
{
	if (IS_BIT_SET(Global_114963.f_25004.f_8[bParam0], iParam1))
		return true;

	return false;
}

BOOL func_262(int iParam0) // Position - 0xC972 (51570)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_131(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_270() || Global_114010 || Global_33818 || func_269() || func_56(8, -1) || func_268() || func_267() || func_266() || func_265() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_270() || Global_33818 || func_269() || func_56(8, -1) || func_266() || func_268() || func_267() || func_265() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_270() || Global_114010 || Global_33818 || func_269() || func_56(8, -1) || func_266() || func_268() || func_267() || func_265() || Global_114963.f_7697.f_919[character] == 5 || Global_45468 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_270() || Global_114010 || Global_33818 || func_269() || func_56(8, -1) || func_268() || func_267() || func_265() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_270() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_56(8, -1) || func_265() || func_264() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_56(8, -1) || func_268() || func_267() || func_264() || func_263())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_270() || Global_33818 || func_269() || func_56(8, -1) || func_267() || func_266() || func_265() || Global_114963.f_7697.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_270() || func_267() || Global_114010 || Global_33818 || func_269() || Global_46147 || func_56(8, -1) || func_266() || func_264() || func_265() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_270() || Global_114010 || Global_33818 || func_269() || func_56(8, -1) || func_266() || func_264() || func_268() || func_267() || func_265())
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

BOOL func_263() // Position - 0xD08F (53391)
{
	return Global_102525.f_1;
}

BOOL func_264() // Position - 0xD09D (53405)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 13);

	return false;
}

BOOL func_265() // Position - 0xD0C0 (53440)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_266() // Position - 0xD0DA (53466)
{
	if (Global_80598)
		return true;
	else if (Global_65057 && !Global_65063)
		return true;

	return false;
}

BOOL func_267() // Position - 0xD104 (53508)
{
	return Global_102538.f_418 > 0;
}

BOOL func_268() // Position - 0xD115 (53525)
{
	return Global_102538.f_417 > 0;
}

ePedComponentType func_269() // Position - 0xD126 (53542)
{
	return Global_1575095;
}

BOOL func_270() // Position - 0xD132 (53554)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99939.f_44 == 1;

	return false;
}

BOOL func_271() // Position - 0xD14E (53582)
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_272(int iParam0) // Position - 0xD176 (53622)
{
	return func_252(func_253(), iParam0);
}

BOOL func_273(BOOL bParam0, int iParam1, eCharacter echParam2) // Position - 0xD188 (53640)
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

int func_274(eCharacter echParam0) // Position - 0xD26C (53868)
{
	if (!func_131(echParam0))
		return 7;

	return Global_114963.f_7697.f_919[echParam0];
}

BOOL func_275(BOOL bParam0) // Position - 0xD290 (53904)
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

BOOL func_276() // Position - 0xD2E8 (53992)
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

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xD32C (54060)
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

BOOL func_278(int iParam0) // Position - 0xD3E4 (54244)
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114963.f_18583[iParam0 /*6*/], 3);
}

BOOL func_279(int iParam0) // Position - 0xD40F (54287)
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114963.f_18583[iParam0 /*6*/], 0);
}

void func_280() // Position - 0xD43A (54330)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (BUILTIN::VDIST(uLocal_139, uLocal_108) < 20f)
		{
			iLocal_107 = 1;
			iLocal_64 = 2;
		}
	
		if (BUILTIN::VDIST(uLocal_139, uLocal_111) < 20f)
		{
			iLocal_107 = 2;
			iLocal_64 = 3;
		}
	
		if (BUILTIN::VDIST(uLocal_139, uLocal_114) < 20f)
		{
			iLocal_107 = 3;
			iLocal_64 = 1;
		}
	
		if (BUILTIN::VDIST(uLocal_139, uLocal_117) < 20f)
		{
			iLocal_107 = 4;
			iLocal_64 = 1;
		}
	}

	return;
}

void func_281(var uParam0, int iParam1) // Position - 0xD4B9 (54457)
{
	if (iParam1 > 0)
		uParam0->f_273 = iParam1;

	return;
}

void func_282() // Position - 0xD4D1 (54481)
{
	if (bLocal_173)
	{
		if (bLocal_67)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_100);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_101);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_102);
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_80))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				TASK::TASK_SMART_FLEE_PED(pedLocal_80, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		
			PED::SET_PED_KEEP_TASK(pedLocal_80, true);
		
			if (!bLocal_77)
				PED::SET_PED_MONEY(pedLocal_80, iLocal_209);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_79))
		{
			if (!PED::IS_PED_INJURED(pedLocal_79))
			{
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_79, true);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_WANDER_STANDARD) == 7 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_79, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_138);
				
					if (PED::IS_PED_DUCKING(pedLocal_79))
						TASK::TASK_TOGGLE_DUCK(0, 0);
				
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, uLocal_139, 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_138);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_79, iLocal_138);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_138);
					PED::SET_PED_KEEP_TASK(pedLocal_79, true);
				
					if (!bLocal_171 && !bLocal_165)
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							func_110();
				}
			}
		}
	
		BUILTIN::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_83))
			HUD::REMOVE_BLIP(&blLocal_83);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_82))
			HUD::REMOVE_BLIP(&blLocal_82);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_81))
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_81);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_84))
			HUD::REMOVE_BLIP(&blLocal_84);
	}

	if (iLocal_396 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_396))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_396);
	
		iLocal_396 = -1;
	}

	if (func_198())
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}

	func_37(&uLocal_397, 0, false, false);
	func_115(false, true, true, false, false, false, false);
	func_288(-1);
	func_283(&uLocal_410, false);

	if (shLocal_158 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_158);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_283(var uParam0, BOOL bParam1) // Position - 0xD677 (54903)
{
	int i;

	if (!bParam1)
		func_285(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_284(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_284(var uParam0) // Position - 0xD6BA (54970)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_285(var uParam0) // Position - 0xD6D3 (54995)
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_286(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_286(var uParam0) // Position - 0xD70A (55050)
{
	func_287(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_287(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xD721 (55073)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_223(iParam0))
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

void func_288(BOOL bParam0) // Position - 0xD7DB (55259)
{
	var name;

	if (bParam0 == -1)
		bParam0 = func_199();

	if (bParam0 == -1)
		return;

	if (func_198())
	{
		func_293(bParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114954 = MISC::GET_GAME_TIMER();
		func_292(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_291(Global_114952, true), 64);
	
		if (func_290(Global_114952) > 0)
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

	func_289(&Global_33875);
	Global_114953 = false;
	func_236(-1);
	return;
}

void func_289(var uParam0) // Position - 0xD88D (55437)
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

int func_290(BOOL bParam0) // Position - 0xD8CA (55498)
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

char* func_291(BOOL bParam0, BOOL bParam1) // Position - 0xD97B (55675)
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

void func_292(int iParam0) // Position - 0xDBC4 (56260)
{
	Global_45472 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_293(BOOL bParam0) // Position - 0xDBD6 (56278)
{
	func_294(bParam0, 0, func_299(bParam0));
	return;
}

void func_294(BOOL bParam0, int iParam1, int iParam2) // Position - 0xDBEB (56299)
{
	int unk;
	var unk2;

	unk = func_253();
	func_297(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_296(bParam0, &unk);
	unk2 = { func_295(&unk) };
	return;
}

struct<16> func_295(var uParam0) // Position - 0xDC1A (56346)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_247(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_246(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_245(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_248(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_251(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_249(*uParam0), 64);
	return unk;
}

void func_296(BOOL bParam0, var uParam1) // Position - 0xDCE9 (56553)
{
	Global_114963.f_25004.f_43[bParam0] = *uParam1;
	return;
}

void func_297(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDD01 (56577)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_249(*uParam0);
	i = func_251(*uParam0);
	num2 = func_248(*uParam0);
	j = func_247(*uParam0);
	k = func_246(*uParam0);
	l = func_245(*uParam0);

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

	for (m = func_244(i, num); num2 > m; m = func_244(i, num))
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
	func_298(uParam0, l, k, j, num2, i, num);
	return;
}

void func_298(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDE83 (56963)
{
	func_259(uParam0, iParam1);
	func_258(uParam0, iParam2);
	func_257(uParam0, iParam3);
	func_255(uParam0, iParam5);
	func_256(uParam0, iParam4);
	func_254(uParam0, iParam6);
	return;
}

int func_299(BOOL bParam0) // Position - 0xDEBB (57019)
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

void func_300(int iParam0, int iParam1) // Position - 0xE05E (57438)
{
	if (iParam0 == -1)
		iParam0 = func_199();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_290(iParam0))
	{
		func_310(iParam0, iParam1);
	
		if (!func_309(51))
		{
			func_306("RE_REWARD" /*Algunos eventos aleatorios recompensarán al jugador con mejoras de estadísticas o con dinero.*/, 1, 0, 4000, 10000, func_192(), 0, 138, 0);
			func_305(51);
		}
	
		if (func_177(iParam0))
			Global_114963.f_25004.f_2 = 3;
	
		if (func_304(iParam0, iParam1) != 322)
			func_301(func_304(iParam0, iParam1), uLocal_60, uLocal_60.f_1);
	
		Global_114951 = iParam1;
	
		if (Global_114949 == 0)
			if (Global_114952 == true || Global_114952 == 5 || Global_114952 == 11 || Global_114952 == 25)
				func_206(2);
			else if (Global_114952 == 26 || Global_114952 == 8 || Global_114952 == 17)
				func_206(7);
			else
				func_206(1);
	}

	return;
}

void func_301(int iParam0, var uParam1, var uParam2) // Position - 0xE162 (57698)
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
		func_302();

	return;
}

void func_302() // Position - 0xE248 (57928)
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
		func_95(13, BUILTIN::FLOOR(Global_114963.f_10203.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_303() == HUD_COLOUR_BLACK == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114697 = false;
			
				if (!Global_65063)
					func_203();
			}
		}
	}

	return;
}

eHudColour func_303() // Position - 0xE706 (59142)
{
	return Global_33815;
}

int func_304(int iParam0, int iParam1) // Position - 0xE711 (59153)
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

void func_305(int iParam0) // Position - 0xEA85 (60037)
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

void func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xEAC7 (60103)
{
	func_307(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_307(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xEAE7 (60135)
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
		func_308();
	}

	return;
}

void func_308() // Position - 0xECB9 (60601)
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

BOOL func_309(int iParam0) // Position - 0xEDD0 (60880)
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

void func_310(int iParam0, int iParam1) // Position - 0xEE10 (60944)
{
	MISC::SET_BIT(&Global_114963.f_25004.f_8[iParam0], iParam1);
	return;
}

