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
	int iLocal_45 = 0;
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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	BOOL bLocal_64 = 0;
	eViewMode evmLocal_65 = THIRD_PERSON_NEAR;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	BOOL bLocal_79 = 0;
	char* sLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	ePedComponentType epctLocal_87 = PV_COMP_HEAD;
	ePedComponentType epctLocal_88 = PV_COMP_HEAD;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	BOOL bLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	Ped pedLocal_113 = 0;
	Ped pedLocal_114 = 0;
	Vehicle veLocal_115 = 0;
	Vehicle veLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	Cam caLocal_119 = 0;
	Cam caLocal_120 = 0;
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
	var uLocal_139 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 1;
	var uLocal_305 = 0;
	var uLocal_306 = 3;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	Hash hLocal_324 = 0;
	var uLocal_325 = 4;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 4;
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
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	float fLocal_378 = 0f;
	var uLocal_379 = 0;
	float fLocal_380 = 0f;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
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
	var uLocal_427 = 15;
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
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 1;
	Ped pedScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 (0)
{
	BOOL flag;

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
	iLocal_45 = 3;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	uLocal_73 = { 0f, 0f, 0f };
	iLocal_91 = -1;
	iLocal_93 = -1;
	iLocal_94 = -1;
	iLocal_95 = -1;
	iLocal_96 = -1;
	iLocal_97 = -1;
	iLocal_98 = -1;
	iLocal_99 = -1;
	iLocal_101 = -1;
	iLocal_103 = -1;
	iLocal_104 = -1;
	iLocal_310 = -1;
	fLocal_378 = (0.05f + 0.275f) - 0.01f;
	fLocal_380 = 0f;

	if (Global_4)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_576(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (func_575(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_574(13) || func_574(14))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (!func_573() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_564();
			func_563(true);
			func_557(&uLocal_427);
		}
	}

	BUILTIN::WAIT(0);
	pedLocal_113 = pedScriptParam_0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_556();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, PLAYER::PLAYER_ID());
		func_549(0, -1, false);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}

	func_548();
	func_547(128);

	while (bLocal_79)
	{
		flag = true;
		func_544(&uLocal_427);
	
		if (func_573())
		{
			if (func_543(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_547(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		
			if (!func_543(1024) && func_543(2048))
				SCRIPT::TERMINATE_THIS_THREAD();
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
			{
				flag = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				flag = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
		}
	
		if (!func_573() || !func_543(2048))
		{
			func_536();
		
			if (func_573())
			{
				func_535();
			
				if (func_543(128))
					bLocal_79 = false;
			}
		
			if (func_530())
			{
				if (flag)
				{
					if (iLocal_311 > 0)
						func_525(&uLocal_427);
				
					func_523();
					func_521();
				
					switch (iLocal_311)
					{
						case 0:
							if (iLocal_310 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_113))
									iLocal_310 = func_520();
								else if (func_518())
									iLocal_310 = 4;
							}
							else if (func_513())
							{
								if (func_512())
									if (func_573())
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
											TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_113, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										else
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
									else
										TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_113, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
							
								iLocal_311 = 1;
								func_511("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
					
						case 1:
							if (func_510(iLocal_66, 4096))
								func_509();
						
							if (func_508())
							{
								iLocal_311 = 2;
								func_511("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
						
							if (func_503())
							{
								iLocal_311 = 3;
								func_501(&iLocal_66, 64);
								Global_33986 = true;
								func_511("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
					
						case 2:
							func_99(&uLocal_427);
							break;
					
						case 3:
							func_3();
							break;
					
						default:
							break;
					}
				}
			}
			else
			{
				func_2(false);
			}
		
			func_1();
		}
	
		BUILTIN::WAIT(0);
	}

	func_510(iLocal_66, 2);
	func_511(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_564();
	func_557(&uLocal_427);
	return;
}

void func_1() // Position - 0x365 (869)
{
	return;
}

void func_2(BOOL bParam0) // Position - 0x36D (877)
{
	if (bParam0)
		bLocal_79 = true;
	else
		bLocal_79 = false;

	return;
}

void func_3() // Position - 0x383 (899)
{
	if (iLocal_312 > 0)
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
			if (!PED::IS_PED_INJURED(pedLocal_114))
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
					func_98();

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_114) || ENTITY::IS_ENTITY_DEAD(pedLocal_114, false))
		func_97(15);

	switch (iLocal_312)
	{
		case 0:
			if (!(iLocal_313 == 0))
				iLocal_312 = 1;
			break;
	
		case 1:
			func_90();
			break;
	
		case 2:
			func_89();
			break;
	
		case 3:
			func_72();
			break;
	
		case 4:
			func_63();
			break;
	
		case 5:
			func_60();
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_114))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					iLocal_82 = MISC::GET_GAME_TIMER();
					iLocal_83 = iLocal_82 - iLocal_81;
				
					if (iLocal_83 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, pedLocal_114, 12f, 12f, 5f, false, true, 0))
					{
						func_511("prostitute WAITING TO END");
						func_98();
					}
				}
			}
			else
			{
				func_98();
			}
			break;
	
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_59(0), func_59(1), func_59(2), func_59(3)))
			{
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(func_59(0), func_59(1), func_59(2), func_59(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(pedLocal_114, veLocal_115, uLocal_107, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_115) * 0.65f, 0, 0, 786859, 4f, -1f);
				iLocal_312 = 8;
			}
			break;
	
		case 8:
			if (BUILTIN::VDIST2(uLocal_107, ENTITY::GET_ENTITY_COORDS(pedLocal_113, true)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_114, SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD) != 1)
			{
				iLocal_314 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_312 = 11;
			}
		
			if (func_56(pedLocal_114))
				func_97(15);
			break;
	
		case 11:
			func_4();
			break;
	
		case 12:
			func_97(15);
			break;
	
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113) && ENTITY::DOES_ENTITY_EXIST(veLocal_115))
				if (PED::IS_PED_IN_VEHICLE(pedLocal_113, veLocal_115, false))
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_114, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_114, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
							TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_113, 0, 16842752);
				else
					func_2(false);
			break;
	}

	return;
}

void func_4() // Position - 0x5C3 (1475)
{
	switch (iLocal_319)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(pedLocal_113, 0.916f);
		
			if (func_43(pedLocal_114))
			{
				func_41(&uLocal_136);
				iLocal_319 = 1;
			}
			break;
	
		case 1:
			if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_113, false)) < 22500f)
				func_39();
		
			func_36(veLocal_115);
		
			if (func_34(pedLocal_114))
			{
				_CONVERSATION_ADD_LINE(&uLocal_139, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_97(15);
			}
		
			if (func_7(&uLocal_136) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					func_5(&iLocal_66, 512);
					iLocal_319 = 3;
				}
			}
			break;
	
		case 3:
			func_97(15);
			break;
	
		case 5:
			func_97(15);
			break;
	}

	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x691 (1681)
{
	func_6(uParam0, iParam1);
	return;
}

void func_6(var uParam0, int iParam1) // Position - 0x6A1 (1697)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_7(int* piParam0) // Position - 0x6B6 (1718)
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_8(BOOL bParam0) // Position - 0x6F2 (1778)
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = BUILTIN::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_9(int* piParam0) // Position - 0x74A (1866)
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_10(int* piParam0) // Position - 0x757 (1879)
{
	return IS_BIT_SET(*piParam0, 1);
}

int _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x764 (1892)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23047 = false;
	Global_23049 = false;
	Global_23054 = false;
	Global_24031 = 0;
	Global_24033 = false;
	Global_24037 = 0;
	Global_2883585 = 0;
	return func_12(sParam2, iParam3, false);
}

int func_12(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x7B2 (1970)
{
	Global_23041 = 0;

	if (Global_23040 == 0 || Global_23042 == 2)
	{
		if (Global_23040 != 0)
		{
			if (iParam1 > Global_23042)
			{
				if (Global_23047 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21666.f_1 = 3;
					Global_23040 = 0;
					Global_23041 = 1;
					Global_23093 = false;
					Global_23036 = 0;
					Global_23037 = 0;
					Global_23051 = false;
					Global_23050 = false;
					Global_21665 = 0;
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
	
		Global_23116 = { Global_23110 };
		func_30();
		Global_22329 = { Global_22494 };
		Global_23046 = Global_23047;
		Global_23053 = Global_23054;
		Global_2883586 = Global_2883585;
		Global_23055 = { Global_23071 };
		Global_23048 = Global_23049;
		Global_24030 = Global_24031;
		Global_24038 = { Global_24044 };
		Global_24032 = Global_24033;
		Global_24034 = Global_24035;
		Global_24036 = Global_24037;
		Global_22659.f_370 = Global_24029;
		Global_22659.f_368 = Global_24027;
		Global_22659.f_369 = Global_24028;
		Global_23036 = Global_23037;
	
		if (Global_23046)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10341[Global_21666 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21666.f_1 > 3)
					return 0;
			}
		
			if (Global_21632 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_22())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80362)
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
		
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_21666.f_1)
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
		
			func_20();
			Global_23050 = bParam2;
		}
	
		Global_23042 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22659, sParam0, 24);
		Global_21906 = 0;
		func_19();
		func_13();
		return 1;
	}

	if (Global_23040 == 5)
		return 0;

	if (iParam1 < Global_23042 || iParam1 == Global_23042)
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

void func_13() // Position - 0xA80 (2688)
{
	if (!func_14())
		return;

	if (Global_23046)
	{
		TEXT_LABEL_COPY(&(Global_1980378.f_1), { Global_22659 }, 4);
		Global_1980378 = Global_8817;
		Global_1980378.f_6 = Global_23050;
	}

	return;
}

BOOL func_14() // Position - 0xAB7 (2743)
{
	if (!Global_262145.f_28524)
		return false;

	if (!Global_80362)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1893070[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_15(Player plParam0) // Position - 0xB1A (2842)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_17(8))
			return true;
	
		if (Global_2733326.f_6065.f_1 > 0)
			return true;
	}

	return func_16(plParam0, 20);
}

BOOL func_16(Player plParam0, int iParam1) // Position - 0xB51 (2897)
{
	return IS_BIT_SET(Global_1893070[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_17(int iParam0) // Position - 0xB69 (2921)
{
	return IS_BIT_SET(Global_2733326.f_6054, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0xB7B (2939)
{
	return -1;
}

void func_19() // Position - 0xB84 (2948)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21908[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23040 = 1;
	return;
}

void func_20() // Position - 0xBB6 (2998)
{
	Global_23093 = Global_23092;
	Global_23087 = Global_23088;
	Global_23134 = { Global_23122 };
	Global_23140 = { Global_23128 };
	Global_23095 = Global_23094;
	Global_23164 = { Global_23146 };
	Global_23170 = { Global_23152 };
	Global_23176 = { Global_23158 };
	Global_23182 = { Global_23188 };
	Global_8817 = Global_8818;
	Global_8819 = Global_8820;
	Global_23051 = Global_23052;
	Global_23053 = Global_23054;
	Global_23055 = { Global_23071 };
	Global_23044 = Global_23045;
	Global_24056 = false;
	Global_23089 = 0;
	Global_23090 = false;
	MISC::CLEAR_BIT(&Global_9503, 16);
	return;
}

BOOL func_21() // Position - 0xC4B (3147)
{
	if (Global_21666.f_1 == 1 || Global_21666.f_1 == 0)
		return true;

	return false;
}

BOOL func_22() // Position - 0xC72 (3186)
{
	int num;
	int weaponHash;

	if (Global_80362)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xD0B (3339)
{
	if (func_574(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[0 /*29*/])
				Global_21666 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[1 /*29*/])
				Global_21666 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114990.f_28060[2 /*29*/])
				Global_21666 = CHAR_TREVOR;
			else
				Global_21666 = CHAR_MICHAEL;
	}
	else
	{
		Global_21666 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21666 == _CHAR_NULL)
			Global_21666 = CHAR_MULTIPLAYER;
	
		if (Global_80362)
			Global_21666 = CHAR_MULTIPLAYER;
	
		if (Global_21666 > CHAR_MULTIPLAYER)
			Global_21666 = CHAR_MULTIPLAYER;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xDAD (3501)
{
	func_25();
	return Global_114990.f_2370.f_539.f_4321;
}

void func_25() // Position - 0xDC6 (3526)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114990.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_26(character) && !func_574(14) || Global_113936)
			{
				if (Global_114990.f_2370.f_539.f_4321 != character && func_26(Global_114990.f_2370.f_539.f_4321))
					Global_114990.f_2370.f_539.f_4322 = Global_114990.f_2370.f_539.f_4321;
			
				Global_114990.f_2370.f_539.f_4323 = character;
				Global_114990.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114990.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114990.f_2370.f_539.f_4323 = Global_114990.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114990.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_26(eCharacter echParam0) // Position - 0xEC3 (3779)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xECF (3791)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xF0C (3852)
{
	if (func_26(character))
		return func_29(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_29(eCharacter echParam0) // Position - 0xF31 (3889)
{
	return Global_2349[echParam0 /*29*/];
}

void func_30() // Position - 0xF40 (3904)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_22329[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22329[i /*10*/].f_1), "", 24);
		Global_22329[i /*10*/].f_7 = 0;
		Global_22329[i /*10*/].f_8 = 0;
	}

	Global_22329.f_161 = -99;
	Global_22329.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0xF98 (3992)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677608.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677608.f_1048, iParam0);
}

void func_32() // Position - 0xFD0 (4048)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24051 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21666.f_1 == 9 || Global_21665 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23040 = 6;
		Global_21666.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23040 = 6;
		return;
	}

	return;
}

void func_33(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1027 (4135)
{
	Global_22494 = { *uParam0 };
	Global_8818 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23110, sParam2, 24);
	Global_24029 = iParam5;

	if (iParam3 == 0)
	{
		Global_24027 = 1;
		Global_24025 = 0;
	}
	else
	{
		Global_24027 = 0;
		Global_24025 = 1;
	}

	if (iParam4 == 0)
	{
		Global_24028 = 1;
		Global_24026 = 0;
	}
	else
	{
		Global_24028 = 0;
		Global_24026 = 1;
	}

	return;
}

BOOL func_34(Ped pedParam0) // Position - 0x107D (4221)
{
	if (func_35())
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(pedParam0), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true))
			return true;

	return false;
}

BOOL func_35() // Position - 0x10A7 (4263)
{
	if (Global_24076)
		return true;

	return false;
}

void func_36(Vehicle veParam0) // Position - 0x10BD (4285)
{
	if (iLocal_314 != 1 && iLocal_314 != 2)
		return;

	if (func_38())
		func_37(&veParam0);

	return;
}

void func_37(var uParam0) // Position - 0x10E7 (4327)
{
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		vector = { 0f, 0f, -0.1f };
		vector2 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, vector, vector2, 0, true, true, true, true, false);
	}

	return;
}

BOOL func_38() // Position - 0x1122 (4386)
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_113, joaat("sex_bounce"));
}

void func_39() // Position - 0x1135 (4405)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_40();
	return;
}

void func_40() // Position - 0x1145 (4421)
{
	Global_24447.f_134 = 1;
	return;
}

void func_41(int* piParam0) // Position - 0x1153 (4435)
{
	func_42(piParam0, 0f);
	return;
}

void func_42(int* piParam0, float fParam1) // Position - 0x1162 (4450)
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_43(Ped pedParam0) // Position - 0x118D (4493)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_80))
	{
		sLocal_80 = func_51(pedParam0, false, false);
		return false;
	}

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80))
	{
		return false;
	}
	else
	{
		func_44(pedLocal_113, func_50(), true, BUILTIN::FLOOR(15000f * (1f + (BUILTIN::TO_FLOAT(iLocal_89) / 2f))), true);
	
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			func_44(pedParam0, func_50(), false, BUILTIN::FLOOR(15000f * (1f + (BUILTIN::TO_FLOAT(iLocal_89) / 2f))), true);
	
		func_511("anim_dict has loaded, triggering anims?");
		func_501(&iLocal_66, 512);
		return true;
	}

	return false;
}

void func_44(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x121C (4636)
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	char* animDict;
	int taskSequenceId;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return;

	evmLocal_65 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_49(false, true))
		if (evmLocal_65 != FIRST_PERSON)
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);

	flag = func_48(vehiclePedIsIn);
	animDict = func_51(pedParam0, false, false);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, animDict, func_45(0, bParam2, bParam1, flag), 8f, -8f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_45(1, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_45(2, bParam2, bParam1, flag), 8f, -4f, iParam3, 1, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_45(3, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_45(4, bParam2, bParam1, flag), 4f, -2f, -1, 0, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
	
		if (bParam4)
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

char* func_45(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1361 (4961)
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_47(18);
					else
						str = func_47(23);
				else if (bParam1)
					str = func_47(8);
				else
					str = func_47(13);
			else if (bParam2)
				if (bParam1)
					str = func_46(18);
				else
					str = func_46(23);
			else if (bParam1)
				str = func_46(8);
			else
				str = func_46(13);
			break;
	
		case 1:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_47(19);
					else
						str = func_47(24);
				else if (bParam1)
					str = func_47(9);
				else
					str = func_47(14);
			else if (bParam2)
				if (bParam1)
					str = func_46(19);
				else
					str = func_46(24);
			else if (bParam1)
				str = func_46(9);
			else
				str = func_46(14);
			break;
	
		case 2:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_47(20);
					else
						str = func_47(25);
				else if (bParam1)
					str = func_47(10);
				else
					str = func_47(15);
			else if (bParam2)
				if (bParam1)
					str = func_46(20);
				else
					str = func_46(25);
			else if (bParam1)
				str = func_46(10);
			else
				str = func_46(15);
			break;
	
		case 3:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_47(21);
					else
						str = func_47(26);
				else if (bParam1)
					str = func_47(11);
				else
					str = func_47(16);
			else if (bParam2)
				if (bParam1)
					str = func_46(21);
				else
					str = func_46(26);
			else if (bParam1)
				str = func_46(11);
			else
				str = func_46(16);
			break;
	
		case 4:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_47(22);
					else
						str = func_47(27);
				else if (bParam1)
					str = func_47(12);
				else
					str = func_47(17);
			else if (bParam2)
				if (bParam1)
					str = func_46(22);
				else
					str = func_46(27);
			else if (bParam1)
				str = func_46(12);
			else
				str = func_46(17);
			break;
	
		case 5:
			if (bParam3)
				if (bParam1)
					str = func_47(3);
				else
					str = func_47(2);
			else if (bParam1)
				str = func_46(3);
			else
				str = func_46(2);
			break;
	
		case 6:
			break;
	}

	return str;
}

char* func_46(int iParam0) // Position - 0x1643 (5699)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "into_proposition_male";
			break;
	
		case 1:
			str = "into_proposition_prostitute";
			break;
	
		case 2:
			str = "proposition_loop_male";
			break;
	
		case 3:
			str = "proposition_loop_prostitute";
			break;
	
		case 4:
			str = "proposition_to_exit_male";
			break;
	
		case 5:
			str = "prop_to_sit_alt_prostitute";
			break;
	
		case 6:
			str = "prop_to_sit_male";
			break;
	
		case 7:
			str = "prop_to_sit_prostitute";
			break;
	
		case 8:
			str = "proposition_to_sex_p1_prostitute";
			break;
	
		case 9:
			str = "proposition_to_sex_p2_prostitute";
			break;
	
		case 10:
			str = "sex_loop_prostitute";
			break;
	
		case 11:
			str = "sex_to_proposition_p1_prostitute";
			break;
	
		case 12:
			str = "sex_to_proposition_p2_prostitute";
			break;
	
		case 13:
			str = "proposition_to_sex_p1_male";
			break;
	
		case 14:
			str = "proposition_to_sex_p2_male";
			break;
	
		case 15:
			str = "sex_loop_male";
			break;
	
		case 16:
			str = "sex_to_proposition_p1_male";
			break;
	
		case 17:
			str = "sex_to_proposition_p2_male";
			break;
	
		case 18:
			str = "proposition_to_BJ_p1_prostitute";
			break;
	
		case 19:
			str = "proposition_to_BJ_p2_prostitute";
			break;
	
		case 20:
			str = "BJ_loop_prostitute";
			break;
	
		case 21:
			str = "BJ_to_proposition_p1_prostitute";
			break;
	
		case 22:
			str = "BJ_to_proposition_p2_prostitute";
			break;
	
		case 23:
			str = "proposition_to_BJ_p1_male";
			break;
	
		case 24:
			str = "proposition_to_BJ_p2_male";
			break;
	
		case 25:
			str = "BJ_loop_male";
			break;
	
		case 26:
			str = "BJ_to_proposition_p1_male";
			break;
	
		case 27:
			str = "BJ_to_proposition_p2_male";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_47(int iParam0) // Position - 0x1801 (6145)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "low_car_sit_to_prop_player";
			break;
	
		case 1:
			str = "low_car_sit_to_prop_female";
			break;
	
		case 2:
			str = "low_car_prop_loop_player";
			break;
	
		case 3:
			str = "low_car_prop_loop_female";
			break;
	
		case 4:
			str = "low_car_prop_to_leave_player";
			break;
	
		case 5:
			str = "low_car_prop_to_sit_alt_female";
			break;
	
		case 6:
			str = "low_car_prop_to_sit_player";
			break;
	
		case 7:
			str = "low_car_prop_to_sit_female";
			break;
	
		case 8:
			str = "low_car_prop_to_sex_p1_female";
			break;
	
		case 9:
			str = "low_car_prop_to_sex_p2_female";
			break;
	
		case 10:
			str = "low_car_sex_loop_female";
			break;
	
		case 11:
			str = "low_car_sex_to_prop_p1_female";
			break;
	
		case 12:
			str = "low_car_sex_to_prop_p2_female";
			break;
	
		case 13:
			str = "low_car_prop_to_sex_p1_player";
			break;
	
		case 14:
			str = "low_car_prop_to_sex_p2_player";
			break;
	
		case 15:
			str = "low_car_sex_loop_player";
			break;
	
		case 16:
			str = "low_car_sex_to_prop_p1_player";
			break;
	
		case 17:
			str = "low_car_sex_to_prop_p2_player";
			break;
	
		case 18:
			str = "low_car_prop_to_bj_p1_female";
			break;
	
		case 19:
			str = "low_car_prop_to_bj_p2_female";
			break;
	
		case 20:
			str = "low_car_bj_loop_female";
			break;
	
		case 21:
			str = "low_car_bj_to_prop_p1_female";
			break;
	
		case 22:
			str = "low_car_bj_to_prop_p2_female";
			break;
	
		case 23:
			str = "low_car_prop_to_bj_p1_player";
			break;
	
		case 24:
			str = "low_car_prop_to_bj_p2_player";
			break;
	
		case 25:
			str = "low_car_bj_loop_player";
			break;
	
		case 26:
			str = "low_car_bj_to_prop_p1_player";
			break;
	
		case 27:
			str = "low_car_bj_to_prop_p2_player";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_48(Vehicle veParam0) // Position - 0x19BF (6591)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return true;
		}
	}

	return false;
}

BOOL func_49(BOOL bParam0, BOOL bParam1) // Position - 0x1AC8 (6856)
{
	BOOL flag;

	flag = false;

	if (bParam0)
		flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON;

	if (bParam1)
		if (!flag)
			flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_VEHICLE) == FIRST_PERSON;

	return flag;
}

BOOL func_50() // Position - 0x1AF7 (6903)
{
	return iLocal_314 == 0;
}

char* func_51(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B04 (6916)
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_48(vehiclePedIsIn))
				if (!func_49(false, true) || bParam2 && !bParam1)
					return func_55();
				else
					return func_54();
			else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("vstr"))
				return "anim@mini@prostitutes@sex@veh_vstr@";
	}

	if (!func_49(false, true) || bParam2 && !bParam1)
		return func_53();

	return func_52();
}

char* func_52() // Position - 0x1B9E (7070)
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_53() // Position - 0x1BAA (7082)
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_54() // Position - 0x1BB6 (7094)
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_55() // Position - 0x1BC2 (7106)
{
	return "mini@prostitutes@sexlow_veh";
}

BOOL func_56(Ped pedParam0) // Position - 0x1BCE (7118)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		if (PED::IS_PED_BEING_JACKED(pedParam0) || !func_58(pedParam0, veLocal_115, -1))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
		
			if (_GET_RANDOM_BOOL())
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(pedParam0), false))
				TASK::TASK_COMBAT_PED(pedParam0, PED::GET_PEDS_JACKER(pedParam0), 0, 16);
			else
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
		}
	}

	return false;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x1C60 (7264)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_58(Ped pedParam0, Vehicle veParam1, int iParam2) // Position - 0x1C7E (7294)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, iParam2, false) == pedParam0)
				return true;

	return false;
}

float func_59(int iParam0) // Position - 0x1CBC (7356)
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };
	num = { uLocal_107 };

	if (iParam0 == 0)
		if (entityCoords < num)
			return entityCoords - 20f;
		else
			return num - 20f;

	if (iParam0 == 1)
		if (entityCoords.f_1 < num.f_1)
			return entityCoords.f_1 - 20f;
		else
			return num.f_1 - 20f;

	if (iParam0 == 2)
		if (entityCoords > num)
			return entityCoords + 20f;
		else
			return num + 20f;

	if (entityCoords.f_1 > num.f_1)
		return entityCoords.f_1 + 20f;

	return num.f_1 + 20f;
}

void func_60() // Position - 0x1D83 (7555)
{
	if (!PED::IS_PED_INJURED(pedLocal_114))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_113) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_113, veLocal_115, false))
						{
							func_511("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_115, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_114, iLocal_118);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
							uLocal_107 = { func_61(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true)) };
							STREAMING::REQUEST_ANIM_DICT(func_51(pedLocal_113, false, false));
							iLocal_312 = 7;
							iLocal_81 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				func_511("EXIT - OTHER OUT OF THE VEHICLE");
				func_98();
			}
		}
		else
		{
			func_511("EXIT - OTHER VEHICLE DEAD");
			func_98();
		}
	}
	else
	{
		func_511("EXIT - OTHER ped INJURED");
		func_98();
	}

	return;
}

Vector3 func_61(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1E54 (7764)
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (BUILTIN::VDIST2(vParam0, func_62(i)) < BUILTIN::VDIST2(vParam0, func_62(num)))
			num = i;
	}

	return func_62(num);
}

Vector3 func_62(int iParam0) // Position - 0x1E9C (7836)
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { -1449.0748f, -634.0139f, 29.094f };
			break;
	
		case 1:
			unk = { -1266.2913f, -1361.1747f, 3.222f };
			break;
	
		case 2:
			unk = { -227.0429f, 311.6679f, 91.1655f };
			break;
	
		case 3:
			unk = { -1310.9777f, -235.9881f, 41.1789f };
			break;
	
		case 4:
			unk = { -545.299f, -874.6625f, 26.1981f };
			break;
	
		case 5:
			unk = { -192.1116f, -1332.3854f, 30.3304f };
			break;
	
		case 6:
			unk = { 196.6188f, -1850.3964f, 26.2005f };
			break;
	
		case 7:
			unk = { 322.9744f, -1000.2299f, 28.2401f };
			break;
	
		case 8:
			unk = { 38.824f, -98.3984f, 55.2507f };
			break;
	
		case 9:
			unk = { -1800.7599f, -404.1213f, 43.8109f };
			break;
	
		case 10:
			unk = { 1421.3337f, -1618.8297f, 58.3324f };
			break;
	
		case 11:
			unk = { 983.5914f, -2360.14f, 29.5098f };
			break;
	
		case 12:
			unk = { 97.9046f, -2501.28f, 5.0001f };
			break;
	
		case 13:
			unk = { 1591.9209f, 6516.8413f, 16.3155f };
			break;
	
		case 14:
			unk = { 1278.7299f, 3624.059f, 32.0408f };
			break;
	
		case 15:
			unk = { 2464.6675f, 5526.8154f, 44.2143f };
			break;
	
		case 16:
			unk = { 2052.5796f, 4637.4766f, 39.642f };
			break;
	
		case 17:
			unk = { 1435.6084f, 4483.9507f, 49.2513f };
			break;
	
		case 18:
			unk = { 218.214f, 4439.288f, 66.9056f };
			break;
	
		case 19:
			unk = { 16.9496f, 3632.3499f, 39.2848f };
			break;
	
		case 20:
			unk = { 2.0464f, 3293.74f, 40.2594f };
			break;
	
		case 21:
			unk = { -1195.701f, 2639.13f, 15.1653f };
			break;
	
		case 22:
			unk = { -1663.6412f, 2477.778f, 30.9941f };
			break;
	
		case 23:
			unk = { -2505.643f, 3677.8252f, 12.1719f };
			break;
	
		case 24:
			unk = { -2179.2092f, 4264.236f, 47.9904f };
			break;
	
		case 25:
			unk = { -758.9616f, 5612.7803f, 29.4536f };
			break;
	
		case 26:
			unk = { -276.8032f, 6327.1885f, 31.4262f };
			break;
	
		case 27:
			unk = { 1483.8394f, 6366.199f, 22.6875f };
			break;
	
		case 28:
			unk = { 949.013f, 3551.7532f, 32.9687f };
			break;
	
		case 29:
			unk = { 180.9372f, 3051.7812f, 42.1131f };
			break;
	
		case 30:
			unk = { -462.9046f, 6115.419f, 28.8805f };
			break;
	
		case 31:
			unk = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}

	return unk;
}

void func_63() // Position - 0x222F (8751)
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_114))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_115);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_114, pedLocal_113, 15f, 15f, 5f, false, true, 0) && entitySpeed <= 1f)
				{
					func_70(pedLocal_113);
					iLocal_82 = MISC::GET_GAME_TIMER();
					iLocal_83 = iLocal_82 - iLocal_81;
				
					if (iLocal_83 >= iLocal_85)
					{
						if (func_573())
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_114))
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
						else
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
					
						iLocal_85 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
					
						if (iLocal_85 > 2500)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_113);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_115, -1, 0, 1f, 8388609, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, iLocal_118);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
							func_511("other GIVES MONEY");
							iLocal_312 = 5;
						}
						else
						{
							func_69();
							func_64();
						
							if (!PED::IS_PED_INJURED(pedLocal_114))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
								{
									if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_115, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_114, iLocal_118);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
										iLocal_81 = MISC::GET_GAME_TIMER();
									}
								}
							}
						
							func_511("prostitute REFUSED MONEY 2");
						
							if (func_573())
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_114))
									TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
							else
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
						
							iLocal_312 = 6;
						}
					}
				}
				else
				{
					if (func_573())
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_114))
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
					else
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
				
					func_98();
				}
			}
			else
			{
				func_511("EXIT - OTHER OUT OF THE VEHICLE");
			
				if (func_573())
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_114))
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
				else
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_114);
			
				func_98();
			}
		}
		else
		{
			func_511("EXIT - OTHER VEHICLE DEAD");
			func_98();
		}
	}
	else
	{
		func_511("EXIT - OTHER ped INJURED");
		func_98();
	}

	return;
}

BOOL func_64() // Position - 0x2421 (9249)
{
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_113) || PED::IS_PED_INJURED(pedLocal_113))
		return true;

	if (!func_573())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
		}
		else if (func_510(iLocal_66, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (func_510(iLocal_92, 524288))
				TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(7), 8f, -1.5f, -1, 0, 0, false, false, false);
		
			func_65(true);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			func_501(&iLocal_66, 16384);
			func_41(&uLocal_130);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
		}
	}

	switch (iLocal_71)
	{
		case 0:
			if (func_510(iLocal_66, 4194304))
				iLocal_71 = 1;
			break;
	
		case 1:
			if (func_510(iLocal_92, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(7), 8f, -1.5f, -1, 0, 0, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
					return false;
				}
			}
		
			iLocal_71 = 2;
			break;
	
		case 2:
			if (func_510(iLocal_92, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PLAY_ANIM) == 7)
					{
						func_65(false);
						iLocal_71 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				func_65(false);
				iLocal_71 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
			break;
	
		case 3:
			func_501(&iLocal_66, 16384);
			func_41(&uLocal_130);
			return true;
	}

	return false;
}

void func_65(BOOL bParam0) // Position - 0x25F1 (9713)
{
	Vector3 entityCoords;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(pedLocal_113) || TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_113) || PED::IS_PED_USING_SCENARIO(pedLocal_113, func_66(0)) || PED::IS_PED_USING_SCENARIO(pedLocal_113, func_66(1)))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };

	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_66(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_66(1), 20f, true))
	{
		if (bParam0)
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		else
			TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
	
		return;
	}

	if (!bParam0)
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_113, entityCoords, 20f, 0);
	else
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, entityCoords, 20f, 0);

	return;
}

char* func_66(int iParam0) // Position - 0x26B8 (9912)
{
	if (iParam0 == 0)
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";

	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_67(int iParam0) // Position - 0x26D2 (9938)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
	
		case 1:
			return "idle_a";
	
		case 2:
			return "idle_b";
	
		case 3:
			return "idle_c";
	
		case 4:
			return "idle_wait";
	
		case 5:
			return "idle_reject";
	
		case 8:
			return "idle_reject_loop_a";
	
		case 9:
			return "idle_reject_loop_b";
	
		case 10:
			return "idle_reject_loop_c";
	
		case 11:
			return "idle_outro";
	
		case 6:
			return "reject_2_idle";
	
		case 7:
			return "reject_outro";
	}

	return "";
}

char* func_68(int iParam0) // Position - 0x27A5 (10149)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "mini@hookers_spcrackhead";
			break;
	
		case 1:
			str = "mini@hookers_spcokehead";
			break;
	
		case 3:
		case 4:
			str = "mini@hookers_spfrench";
			break;
	
		case 2:
		default:
			str = "mini@hookers_spvanilla";
			break;
	}

	return str;
}

void func_69() // Position - 0x27F8 (10232)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_70(Ped pedParam0) // Position - 0x283F (10303)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (func_71(pedParam0))
			PED::SET_PED_RESET_FLAG(pedParam0, 109, true);

	return;
}

BOOL func_71(Ped pedParam0) // Position - 0x2863 (10339)
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_68(iLocal_310), func_67(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_68(iLocal_310), func_67(2), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_68(iLocal_310), func_67(3), 3))
			return true;

	return false;
}

void func_72() // Position - 0x28C2 (10434)
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_114))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_113) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, pedLocal_114, 20f, 20f, 10f, false, true, 0))
						{
							entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_115);
						
							if (entitySpeed <= 1f)
							{
								func_73(false);
								iLocal_81 = MISC::GET_GAME_TIMER();
								iLocal_85 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								func_511("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_312 = 4;
							}
						}
						else
						{
							func_511("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_98();
						}
					}
				}
			}
			else
			{
				func_511("EXIT - OTHER OUT OF THE VEHICLE");
				func_98();
			}
		}
		else
		{
			func_511("EXIT - OTHER VEHICLE DEAD");
			func_98();
		}
	}
	else
	{
		func_511("EXIT - OTHER ped INJURED");
		func_98();
	}

	return;
}

BOOL func_73(BOOL bParam0) // Position - 0x298F (10639)
{
	int randomIntInRange;
	int taskSequenceId;

	if (!func_573())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_113, "PROSTITUTE_GROUP", 0);
			func_88("PROSTITUTES_SOLICIT_SCENE");
		}
	
		func_74();
	
		if (func_510(iLocal_66, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(0), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(4), 2f, -2f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	switch (iLocal_70)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_113, "PROSTITUTE_GROUP", 0);
				func_88("PROSTITUTES_SOLICIT_SCENE");
			}
		
			func_74();
			iLocal_70 = 1;
			break;
	
		case 1:
			if (func_510(iLocal_66, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(0), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_70 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
				}
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_70 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
			break;
	
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(4), 2f, -2f, -1, 1, 0, false, false, false);
					iLocal_70 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
			break;
	
		case 4:
			iLocal_70 = 0;
			return true;
	}

	return false;
}

void func_74() // Position - 0x2B71 (11121)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
	{
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				if (!func_75(pedLocal_113))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case CHAR_FRANKLIN:
				if (!func_75(pedLocal_113))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case CHAR_TREVOR:
				if (!func_75(pedLocal_113))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		}
	}

	return;
}

BOOL func_75(Ped pedParam0) // Position - 0x2C34 (11316)
{
	int num;

	num = func_78(pedParam0);
	return func_76(num);
}

BOOL func_76(int iParam0) // Position - 0x2C4A (11338)
{
	if (func_77(iParam0) > 0)
		return true;

	return false;
}

int func_77(int iParam0) // Position - 0x2C61 (11361)
{
	int num;

	num = 0;

	if (iParam0 == -1)
		return 0;

	if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		num = Global_114990.f_10058.f_1[iParam0 /*11*/][0];
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
		num = Global_114990.f_10058.f_1[iParam0 /*11*/][1];
	else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
		num = Global_114990.f_10058.f_1[iParam0 /*11*/][2];

	return num;
}

int func_78(Ped pedParam0) // Position - 0x2CCC (11468)
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (func_77(i) > 0)
				if (func_84(pedParam0, i) && func_80(pedParam0, i) && func_79(pedParam0, i))
					return i;
		}
	}

	return -1;
}

BOOL func_79(Ped pedParam0, int iParam1) // Position - 0x2D27 (11559)
{
	if (PED::IS_PED_MODEL(pedParam0, Global_114990.f_10058.f_1[iParam1 /*11*/].f_10))
		return true;

	return false;
}

int func_80(Ped pedParam0, int iParam1) // Position - 0x2D4C (11596)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_81(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_81(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2D79 (11641)
{
	ePedComponentType componentId;

	componentId = func_83(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId) == func_82(iParam1, iParam2);
}

int func_82(int iParam0, int iParam1) // Position - 0x2D9A (11674)
{
	if (func_76(iParam0))
		return Global_114990.f_10058.f_1[iParam0 /*11*/].f_7[iParam1];

	return -1;
}

ePedComponentType func_83(int iParam0) // Position - 0x2DC2 (11714)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

int func_84(Ped pedParam0, int iParam1) // Position - 0x2DEB (11755)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_85(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_85(Ped pedParam0, int iParam1, int iParam2) // Position - 0x2E18 (11800)
{
	ePedComponentType componentId;

	componentId = func_87(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId) == func_86(iParam1, iParam2);
}

int func_86(int iParam0, int iParam1) // Position - 0x2E39 (11833)
{
	if (func_76(iParam0))
		return Global_114990.f_10058.f_1[iParam0 /*11*/].f_4[iParam1];

	return -1;
}

ePedComponentType func_87(int iParam0) // Position - 0x2E61 (11873)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

void func_88(char* sParam0) // Position - 0x2E8A (11914)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::START_AUDIO_SCENE(sParam0);

	return;
}

void func_89() // Position - 0x2EA3 (11939)
{
	float entitySpeed;
	var maximum;
	var minimum;
	var unk5;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_114))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_115);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_114, SCRIPT_TASK_VEHICLE_PARK) == 7 || entitySpeed <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_115), &minimum, &maximum);
					unk5 = { maximum - minimum };
					unk5 = { unk5 / { 2f, 2f, 2f } };
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_115, 0.2f, 0.2f, 0f) };
					offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_115, 0.2f, 0.2f, 0f) };
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };
				
					if (BUILTIN::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < BUILTIN::VDIST(entityCoords, offsetFromEntityInWorldCoords))
						offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };
				
					TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_114, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, iLocal_118);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
					func_511("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_312 = 3;
				}
				else
				{
					func_511("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_511("EXIT - OTHER OUT OF VEHICLE");
				func_98();
			}
		}
		else
		{
			func_511("EXIT - OTHER VEHICLE DEAD");
			func_98();
		}
	}
	else
	{
		func_511("EXIT - OTHER ped INJURED");
		func_98();
	}

	return;
}

void func_90() // Position - 0x2FF6 (12278)
{
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_114))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_114, veLocal_115, false))
			{
				if (func_92(&veLocal_115))
				{
					if (func_91(ENTITY::GET_ENTITY_COORDS(pedLocal_114, true), 1106247680))
						return;
				
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };
				
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &entityCoords, 8, 1077936128, 0))
					{
						PED::SET_DRIVER_ABILITY(pedLocal_114, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(pedLocal_114, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(pedLocal_114, 0.05f);
						TASK::TASK_VEHICLE_PARK(pedLocal_114, veLocal_115, entityCoords, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(pedLocal_114, pedLocal_113, -1, SLF_WHILE_NOT_IN_FOV, 4);
						func_511("OTHER TOLD TO PULL OVER");
						iLocal_312 = 2;
					}
				}
				else
				{
					func_511("EXIT - Vehicle is not suitable");
					func_97(15);
				}
			}
			else
			{
				func_511("EXIT - OTHER OUT OF THE VEHICLE");
				func_97(15);
			}
		}
		else
		{
			func_511("EXIT - OTHER VEHICLE DEAD");
			func_97(15);
		}
	}
	else
	{
		func_511("EXIT - OTHER ped INJURED");
		func_97(15);
	}

	return;
}

BOOL func_91(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x30EB (12523)
{
	if (func_573())
		return PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });

	return VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 }) || PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });
}

BOOL func_92(var uParam0) // Position - 0x3151 (12625)
{
	Hash entityModel;
	int vehicleNumberOfPassengers;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(*uParam0);
	
		if (func_96(entityModel, false) && func_94(*uParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0) > 0)
			{
				vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*uParam0, false, true);
			
				if (vehicleNumberOfPassengers == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0, false) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, 0, false) == pedLocal_113)
				{
					if (func_48(*uParam0))
					{
						if (!func_510(iLocal_66, 32768))
						{
							func_501(&iLocal_66, 32768);
						
							if (!func_510(iLocal_66, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_93());
								func_501(&iLocal_66, 8);
							}
						}
					}
					else
					{
						if (func_510(iLocal_66, 32768))
							func_5(&iLocal_66, 32768);
					
						if (func_510(iLocal_66, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_93()))
							{
								STREAMING::REMOVE_CLIP_SET(func_93());
								func_5(&iLocal_66, 8);
							}
						}
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

char* func_93() // Position - 0x3265 (12901)
{
	return "clipset@veh@low@ps@female@base";
}

int func_94(Vehicle veParam0) // Position - 0x3271 (12913)
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (func_95(ENTITY::GET_ENTITY_MODEL(veParam0)))
			return 0;
	
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			for (i = 0; i < 49; i = i + 1)
			{
				modType = i;
			
				if (modType != 17 && modType != 18 && modType != 19 && modType != 20 && modType != 21 && modType != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 16);
						hashKey = MISC::GET_HASH_KEY(&unk);
					
						if (hashKey != 0)
							if (hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Jaula de acrobacias*/))
								return 0;
					}
				}
			}
		}
	
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("peyote2"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4))
					return 0;
				break;
		
			case joaat("peyote3"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case 893780296:
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 1)
					return 0;
				break;
		
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case -1958428933:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1)
					return 0;
				break;
		
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("rt3000"):
			case 1730644782:
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 3)
					return 0;
				break;
		
			case 1748565021:
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 0)
					return 0;
				break;
		
			case -402415705:
				return 0;
		}
	
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
			case 252076350:
			case 1974176673:
			case 1969797967:
			case -695803320:
			case 117747890:
			case -708773194:
			case 1395235285:
			case -669515817:
			case -1354494188:
			case 234171168:
			case 1433728330:
			case 823386486:
			case 1507183032:
			case -1674546010:
			case 519902568:
			case -1781951273:
			case -11436892:
			case 423295170:
			case 960700016:
			case -1926204979:
			case 424822203:
			case -1807648339:
			case -932203039:
			case -1733329776:
			case -1108167726:
			case 1473468302:
			case -1064569826:
			case 1850225899:
				return 1;
		}
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("slamvan"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("weevil") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("brioso2"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("brioso3"))
			return 1;
	}

	return 0;
}

BOOL func_95(Hash hParam0) // Position - 0x37E8 (14312)
{
	switch (hParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return true;
	
		case -1233767450:
		case joaat("pranger"):
		case joaat("Police5"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case -1948949064:
		case 2042703219:
		case 1891140410:
		case joaat("POLICEB2"):
		case 287906327:
		case 617517171:
		case -39084089:
			return true;
	}

	return false;
}

int func_96(Hash hParam0, BOOL bParam1) // Position - 0x38A8 (14504)
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 0;

	if (func_95(hParam0))
		return 0;

	if (!bParam1)
		if (hParam0 == joaat("police") || hParam0 == joaat("police2") || hParam0 == joaat("police3") || hParam0 == joaat("police4") || hParam0 == joaat("fbi") || hParam0 == joaat("fbi2") || hParam0 == joaat("caddy") || hParam0 == joaat("caddy2"))
			return 0;

	if (hParam0 == joaat("issi2") || hParam0 == joaat("hotknife") || hParam0 == joaat("jb700") || hParam0 == joaat("jester") || hParam0 == joaat("jester2") || hParam0 == joaat("stromberg") || hParam0 == joaat("barrage") || hParam0 == joaat("kamacho") || hParam0 == joaat("gb200") || hParam0 == joaat("fagaloa") || hParam0 == joaat("tezeract") || hParam0 == joaat("swinger") || hParam0 == joaat("imperator") || hParam0 == joaat("locust") || hParam0 == joaat("schlagen") || hParam0 == joaat("outlaw") || hParam0 == joaat("comet7") || hParam0 == joaat("youga4") || hParam0 == joaat("sm722") || hParam0 == -1933242328 || hParam0 == -938068410)
		return 0;

	return 1;
}

void func_97(int iParam0) // Position - 0x3A99 (15001)
{
	iLocal_312 = iParam0;
	return;
}

void func_98() // Position - 0x3AA6 (15014)
{
	if (func_573())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_113);
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_113);
		TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
	}

	pedLocal_114 = 0;
	veLocal_115 = 0;
	TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_97(0);
	iLocal_313 = 0;
	iLocal_311 = 1;
	return;
}

void func_99(var uParam0) // Position - 0x3B13 (15123)
{
	if (!func_510(iLocal_66, 32))
		iLocal_311 = 1;

	if (iLocal_312 > 1 && iLocal_312 != 12)
	{
		if (!func_510(iLocal_66, 33554432))
		{
			if (func_573())
			{
				if (Global_1927397 || func_493())
				{
					func_492(false);
					func_501(&iLocal_66, 33554432);
				}
			}
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (func_510(iLocal_66, 1048576) || func_510(iLocal_66, 8192))
				{
					func_492(false);
					func_501(&iLocal_66, 33554432);
				}
			}
		}
	}

	switch (iLocal_312)
	{
		case 0:
			if (func_510(iLocal_66, 16384) || func_510(iLocal_66, 8388608))
			{
				if (!func_10(&uLocal_130))
					func_491(&uLocal_130);
			
				if (func_490(&uLocal_130, 25f))
				{
					func_5(&iLocal_66, 16384);
					func_5(&iLocal_66, 8388608);
				}
			}
			else if (iLocal_313 != 0 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_NO_MONEY" /*Necesitas más dinero para recoger una prostituta.*/))
			{
				func_65(false);
			
				switch (_GET_CURRENT_PLAYER_CHARACTER())
				{
					case CHAR_MICHAEL:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
				
					case CHAR_FRANKLIN:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
				
					case CHAR_TREVOR:
						_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
			
				iLocal_312 = 1;
			}
			else
			{
				func_487();
				iLocal_313 = 2;
			}
			break;
	
		case 1:
			func_474(uParam0);
			break;
	
		case 2:
			func_461(uParam0);
			break;
	
		case 3:
			func_460();
			break;
	
		case 4:
			func_448(uParam0);
			break;
	
		case 5:
			func_430();
			break;
	
		case 6:
			func_429(uParam0);
			break;
	
		case 7:
			func_408();
			func_400();
			break;
	
		case 8:
			func_397();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_236();
			func_235(uParam0);
			func_234(uParam0);
			func_233(uParam0);
		
			if (func_573())
				func_230(uParam0);
			break;
	
		case 9:
			func_227();
			break;
	
		case 10:
			func_224();
			break;
	
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			func_126();
			func_235(uParam0);
			func_234(uParam0);
			func_233(uParam0);
			func_123(uParam0);
		
			if (func_573())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, true);
				func_230(uParam0);
			}
			break;
	
		case 12:
			func_509();
			break;
	
		case 13:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_104();
			break;
	
		case 14:
			func_103();
			break;
	
		case 15:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_100(uParam0);
			break;
	}

	return;
}

void func_100(var uParam0) // Position - 0x3E02 (15874)
{
	if (!func_573())
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_51(PLAYER::PLAYER_PED_ID(), false, false), func_102(true), 3))
			return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, true))
		return;

	if (func_510(iLocal_66, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			func_5(&iLocal_66, 16);
		}
	}

	if (func_510(iLocal_66, 2))
	{
		func_101(1);
		func_511("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}

	func_564();

	if (func_573())
		func_557(uParam0);

	return;
}

void func_101(int iParam0) // Position - 0x3E97 (16023)
{
	return;
}

char* func_102(BOOL bParam0) // Position - 0x3E9F (16031)
{
	if (!func_510(iLocal_66, 32768))
		if (bParam0)
			return func_46(6);
		else
			return func_46(7);

	if (bParam0)
		return func_47(6);

	return func_47(7);
}

void func_103() // Position - 0x3EE5 (16101)
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_89 == 0)
		{
			if (func_510(iLocal_66, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_113, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_113, 196624, true);
			}
		
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_97(15);
		}
	}

	return;
}

void func_104() // Position - 0x3F38 (16184)
{
	switch (iLocal_320)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113) || func_122(&uLocal_124) > 4f)
			{
				func_117(pedLocal_113);
			
				if (func_77(func_78(pedLocal_113)) == 1)
				{
					iLocal_320 = 2;
				}
				else
				{
					func_116(&uLocal_124);
					func_115("PROS_RESPONSE" /*Elige la respuesta:~n~~INPUT_FRONTEND_X~ Repugnancia.~n~~INPUT_FRONTEND_ACCEPT~ Sarcasmo.~n~~INPUT_FRONTEND_CANCEL~ Simpatía.*/);
					iLocal_320 = 1;
				}
			}
			break;
	
		case 1:
			func_114();
		
			if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113) || func_113())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON);
				func_501(&iLocal_66, 2048);
			}
			else
			{
				if (!func_10(&uLocal_124))
					func_41(&uLocal_124);
			
				if (func_122(&uLocal_124) > 15f || iLocal_323 != 0)
				{
					HUD::CLEAR_HELP(true);
					func_112();
					iLocal_320 = 2;
				}
			}
			break;
	
		case 2:
			if (!func_113())
				iLocal_320 = 3;
			break;
	
		case 3:
			func_107(false);
			func_105();
			func_97(15);
			break;
	}

	return;
}

int func_105() // Position - 0x4034 (16436)
{
	if (func_106(false))
		return 0;

	if (Global_102550.f_8)
		if (Global_102550.f_10 > 0)
			return 0;
	else if (Global_102550.f_10 > 1)
		return 0;

	Global_102550.f_10 = Global_102550.f_10 + 1;
	return 1;
}

BOOL func_106(BOOL bParam0) // Position - 0x407F (16511)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80611, 0);
}

void func_107(BOOL bParam0) // Position - 0x40A7 (16551)
{
	if (!PED::IS_PED_INJURED(pedLocal_113))
		if (CAM::IS_SCREEN_FADED_OUT())
			PED::DELETE_PED(&pedLocal_113);
		else
			func_108(pedLocal_113, bParam0);

	return;
}

void func_108(Ped pedParam0, BOOL bParam1) // Position - 0x40D1 (16593)
{
	int taskSequenceId;
	float randomFloatInRange;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_51(PLAYER::PLAYER_PED_ID(), false, false), func_111(true), 3))
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_51(PLAYER::PLAYER_PED_ID(), false, false), func_102(true), 4f, -8f, -1, 0, 0, false, false, false);

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (func_573())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
		else
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
	
		if (func_510(iLocal_66, 33554432))
			TASK::CLEAR_PED_TASKS(pedParam0);
	
		if (bParam1)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
		
			if (randomFloatInRange <= 0.25f)
				func_501(&iLocal_66, 134217728);
		}
	
		if (func_510(iLocal_66, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(pedParam0, false)))
				{
					func_110(pedParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_51(pedParam0, false, false), func_111(false), 3))
						if (iLocal_89 > 0)
							TASK::TASK_PLAY_ANIM(0, func_51(pedParam0, false, false), func_102(false), 4f, -4f, -1, 0, 0, false, false, false);
						else
							TASK::TASK_PLAY_ANIM(0, func_51(pedParam0, false, false), func_109(false), 4f, -4f, -1, 0, 0, false, false, false);
				
					func_110(pedParam0, 1);
				}
			}
		
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		if (func_573())
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_113))
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_113)))
					PED::SET_PED_KEEP_TASK(pedParam0, true);
		else
			PED::SET_PED_KEEP_TASK(pedParam0, true);
	}

	return;
}

char* func_109(BOOL bParam0) // Position - 0x429F (17055)
{
	if (!func_510(iLocal_66, 32768))
		if (bParam0)
			return func_46(4);
		else
			return func_46(5);

	if (bParam0)
		return func_47(4);

	return func_47(5);
}

void func_110(Ped pedParam0, int iParam1) // Position - 0x42E5 (17125)
{
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedParam0, PED::GET_VEHICLE_PED_IS_IN(pedParam0, false), 0, false, false))
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	else
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);

	return;
}

char* func_111(BOOL bParam0) // Position - 0x4317 (17175)
{
	if (!func_510(iLocal_66, 32768))
		if (bParam0)
			return func_46(2);
		else
			return func_46(3);

	if (bParam0)
		return func_47(2);

	return func_47(3);
}

void func_112() // Position - 0x435D (17245)
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);

	if (randomIntInRange <= 333 && iLocal_323 == 0 || iLocal_323 == 3)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (randomIntInRange > 333 && randomIntInRange <= 666 && iLocal_323 == 0 || iLocal_323 == 1)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (iLocal_323 == 0 || iLocal_323 == 2)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_113() // Position - 0x4402 (17410)
{
	if (Global_23040 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_114() // Position - 0x4424 (17444)
{
	if (iLocal_323 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Lista de filtros*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_323 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Lista de filtros*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_323 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Lista de filtros*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_323 = 2;
		}
	}

	return;
}

void func_115(char* sParam0) // Position - 0x44CE (17614)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_116(int* piParam0) // Position - 0x44E4 (17636)
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

void func_117(Ped pedParam0) // Position - 0x44FA (17658)
{
	int num;

	num = func_78(pedParam0);

	if (num > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0);
	
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
		{
			func_119(pedParam0);
			func_118(num);
		}
	}

	return;
}

void func_118(int iParam0) // Position - 0x4535 (17717)
{
	int num;
	var unk;

	num = func_77(iParam0);

	if (num < 6)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "pbpro_H", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0 + 1, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "V", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		_CONVERSATION_ADD_LINE(&uLocal_139, "pbproau", &unk, 4, 0, 0, 0);
	}

	return;
}

void func_119(Ped pedParam0) // Position - 0x457D (17789)
{
	int num;

	num = func_78(pedParam0);

	if (num > -1)
	{
		func_121(&uLocal_139, 4);
		_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 6, pedParam0, func_120(num), 0, 1);
	}

	return;
}

char* func_120(int iParam0) // Position - 0x45AB (17835)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "Hooker1";
			break;
	
		case 1:
			str = "Hooker2";
			break;
	
		case 2:
			str = "Hooker3";
			break;
	
		case 3:
			str = "Hooker4";
			break;
	
		case 4:
			str = "Hooker5";
			break;
	
		case 5:
			str = "Hooker6";
			break;
	
		case 6:
			str = "Hooker7";
			break;
	
		case 7:
			str = "Hooker8";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

void func_121(var uParam0, int iParam1) // Position - 0x463A (17978)
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

float func_122(int* piParam0) // Position - 0x4657 (18007)
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_123(var uParam0) // Position - 0x4690 (18064)
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	if (!func_573())
		return;

	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					flag = true;
			
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false) != pedLocal_113)
					flag = true;
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehiclePedIsIn, false, true) > 2)
					flag = true;
			
				if (flag)
				{
					func_124(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_564();
					func_557(uParam0);
				}
			}
		}
	}

	return;
}

void func_124(BOOL bParam0) // Position - 0x471E (18206)
{
	var entityRotation;

	if (bParam0)
	{
		entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_116, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5.5f - entityRotation, 1065353216);
	}

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_125(&uLocal_330[0 /*7*/]);
	func_125(&uLocal_330[3 /*7*/]);
	func_125(&uLocal_330[2 /*7*/]);
	func_125(&uLocal_330[1 /*7*/]);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~*/))
		HUD::CLEAR_HELP(true);

	return;
}

void func_125(var uParam0) // Position - 0x47A2 (18338)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, false);
	}

	return;
}

void func_126() // Position - 0x47DA (18394)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false))
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(veLocal_116, true);

	if (iLocal_319 != 5)
	{
		if (!func_223(iLocal_93) && !func_223(iLocal_94) && !func_223(iLocal_95) && !func_223(iLocal_96) && !func_223(iLocal_97) && !func_223(iLocal_98) && !func_223(iLocal_99))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedLocal_113) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
				iLocal_319 = 5;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					iLocal_319 = 5;
		}
	}

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_217(0);

	switch (iLocal_319)
	{
		case 0:
			if (func_573())
				func_216(1089, -1);
		
			func_41(&uLocal_136);
			func_215(func_50(), func_510(iLocal_66, 32768));
			iLocal_319 = 1;
			func_511("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
	
		case 1:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_207();
			func_200();
			func_137();
		
			if (!func_49(false, true))
				func_136();
		
			if (func_7(&uLocal_136) > 1f)
			{
				if (func_135())
				{
					func_5(&iLocal_66, 512);
					iLocal_322 = 0;
					func_134("PROSTITUTES_SOLICIT_SCENE");
					func_134("PROSTITUTES_SEX_SCENE");
					func_134("PROSTITUTES_BJ_SCENE");
					func_134("PROSTITUTES_BJ_SPEECH_SCENE");
				
					if (iLocal_89 >= 3)
					{
						func_133();
						iLocal_319 = 5;
					}
					else
					{
						func_132();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_65);
						iLocal_319 = 3;
					}
				}
			}
			break;
	
		case 2:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			func_207();
		
			if (!func_49(false, true))
				func_136();
		
			if (func_49(false, true))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (func_7(&uLocal_136) > 1f)
			{
				if (func_135())
				{
					func_5(&iLocal_66, 512);
					iLocal_322 = 0;
					func_134("PROSTITUTES_SOLICIT_SCENE");
					func_134("PROSTITUTES_SEX_SCENE");
					func_134("PROSTITUTES_BJ_SCENE");
					func_134("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_89 = 3;
				
					if (iLocal_89 >= 3)
					{
						func_133();
						iLocal_319 = 5;
						func_116(&uLocal_121);
					}
				}
			}
			break;
	
		case 3:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
			{
				func_134("PROSTITUTES_SOLICIT_SCENE");
				func_134("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_318 = 0;
				iLocal_319 = 0;
				func_131();
				func_129();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_65);
				iLocal_312 = 8;
			}
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
			{
				if (iLocal_89 > 0)
				{
					if (func_128(pedLocal_113))
						func_127();
					else
						func_492(false);
				}
				else
				{
					func_511("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_492(true);
				}
			}
			break;
	}

	return;
}

void func_127() // Position - 0x4A8B (19083)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_89 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_128(pedLocal_113))
		{
			func_41(&uLocal_124);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON | 512);
			func_501(&iLocal_66, 2048);
			iLocal_312 = 13;
		}
	}

	return;
}

BOOL func_128(Ped pedParam0) // Position - 0x4AEE (19182)
{
	int num;

	num = func_78(pedParam0);

	if (num == -1)
		return false;

	return func_77(num) < 6;
}

void func_129() // Position - 0x4B10 (19216)
{
	func_130();

	if (!IS_BIT_SET(Global_1674277, 4))
		MISC::SET_BIT(&Global_1674277, 4);

	return;
}

void func_130() // Position - 0x4B2F (19247)
{
	MISC::CLEAR_BIT(&Global_1674277, 0);
	MISC::CLEAR_BIT(&Global_1674277, 1);
	return;
}

void func_131() // Position - 0x4B49 (19273)
{
	if (!Global_2673276.f_1023.f_10)
		Global_2673276.f_1023.f_10 = 1;

	return;
}

void func_132() // Position - 0x4B68 (19304)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_133() // Position - 0x4B95 (19349)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_134(char* sParam0) // Position - 0x4BC2 (19394)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::STOP_AUDIO_SCENE(sParam0);

	return;
}

BOOL func_135() // Position - 0x4BD9 (19417)
{
	if (iLocal_322 == 6)
		return true;

	return false;
}

void func_136() // Position - 0x4BED (19437)
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
	return;
}

void func_137() // Position - 0x4BFD (19453)
{
	float num;
	BOOL flag;
	BOOL flag2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(func_51(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_51(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);

	flag = func_50();
	flag2 = func_510(iLocal_66, 32768);

	if (!func_49(false, true))
		func_194(&iLocal_100);

	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_193(23, true);

	switch (iLocal_322)
	{
		case 0:
			func_5(&iLocal_66, 256);
		
			if (!func_49(false, true))
				func_187(&iLocal_100);
		
			func_186(pedLocal_113, 0);
		
			if (!func_573())
				func_185(flag, flag2);
		
			func_184(flag, flag2);
			iLocal_322 = 1;
			break;
	
		case 1:
			func_183(iLocal_93);
		
			if (func_223(iLocal_94))
			{
				if (!func_510(iLocal_67, 4))
				{
					if (!func_573())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_94) >= num)
						func_501(&iLocal_67, 4);
				}
			}
		
			if (func_223(iLocal_93))
			{
				if (!func_510(iLocal_67, 8))
				{
					if (!func_573())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_93) >= num)
						func_501(&iLocal_67, 8);
				}
			}
		
			if (func_510(iLocal_67, 4) && func_510(iLocal_67, 8))
			{
				if (!func_573())
					func_181(flag, flag2);
			
				func_180(flag, flag2);
				iLocal_322 = 2;
			}
			break;
	
		case 2:
			func_183(iLocal_95);
		
			if (func_223(iLocal_95))
			{
				if (!func_510(iLocal_67, 16))
				{
					if (!func_573())
						num = 0.98f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_95) >= num)
						func_501(&iLocal_67, 16);
				}
			}
		
			if (func_510(iLocal_67, 16))
			{
				if (!func_573())
					func_179(flag, flag2);
			
				func_178(flag, flag2);
				iLocal_322 = 3;
			}
			break;
	
		case 3:
			func_183(iLocal_96);
		
			if (func_223(iLocal_96))
			{
				if (!func_510(iLocal_67, 64))
				{
					if (!func_510(iLocal_66, 16777216))
					{
						if (!func_573())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_182(iLocal_96) >= num)
						{
							func_501(&iLocal_66, 16777216);
							iLocal_90 = iLocal_90 + 1;
						}
					}
					else
					{
						if (!func_573())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_182(iLocal_96) < num)
							func_5(&iLocal_66, 16777216);
					}
				
					if (iLocal_90 >= func_573() ? func_177() : func_172())
					{
						func_501(&iLocal_67, 64);
						func_5(&iLocal_66, 16777216);
					}
				}
			}
			else if (!func_510(iLocal_67, 64))
			{
				func_501(&iLocal_67, 64);
			}
		
			if (func_510(iLocal_67, 64))
			{
				if (!func_573())
					func_170(flag, flag2);
			
				func_169(flag, flag2);
				iLocal_322 = 4;
			}
			break;
	
		case 4:
			func_183(iLocal_97);
		
			if (func_223(iLocal_97))
			{
				if (!func_510(iLocal_67, 256))
				{
					if (!func_573())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_97) >= num)
						func_501(&iLocal_67, 256);
				}
			}
			else if (!func_510(iLocal_67, 256))
			{
				func_501(&iLocal_67, 256);
			}
		
			if (func_510(iLocal_67, 256))
			{
				if (!func_573())
					func_163(flag, flag2);
			
				func_161(flag, flag2);
				iLocal_322 = 5;
			}
			break;
	
		case 5:
			func_183(iLocal_98);
		
			if (func_223(iLocal_98))
			{
				if (!func_510(iLocal_67, 1024))
				{
					if (!func_573())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_98) >= num)
						func_501(&iLocal_67, 1024);
				}
			}
			else if (!func_510(iLocal_67, 1024))
			{
				func_501(&iLocal_67, 1024);
			}
		
			if (func_223(iLocal_99))
			{
				if (!func_510(iLocal_67, 2048))
				{
					if (!func_573())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_182(iLocal_99) >= num)
						func_501(&iLocal_67, 2048);
				}
			}
			else if (!func_510(iLocal_67, 2048))
			{
				func_501(&iLocal_67, 2048);
			}
		
			if (func_510(iLocal_67, 1024) && func_510(iLocal_67, 2048))
			{
				func_186(pedLocal_113, 0);
				TASK::TASK_PLAY_ANIM(pedLocal_113, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(iLocal_322, true, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_186(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(iLocal_322, false, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_124(true);
				iLocal_67 = 0;
				iLocal_90 = 0;
				iLocal_78 = 0;
				func_138();
				iLocal_322 = 6;
			}
			break;
	}

	return;
}

void func_138() // Position - 0x50F8 (20728)
{
	int num;

	if (iLocal_89 == 0 && !func_573())
	{
		if (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()) == CHAR_MICHAEL)
			func_160();
	
		func_155(296, 0, 0);
		num = func_78(pedLocal_113);
	
		if (num > -1)
			func_154(num);
		else
			func_146(pedLocal_113);
	}

	iLocal_89 = iLocal_89 + 1;
	func_139();
	return;
}

void func_139() // Position - 0x5151 (20817)
{
	switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()))
	{
		case CHAR_MICHAEL:
			Global_114990.f_10058.f_90[0] = Global_114990.f_10058.f_90[0] + 1;
			func_140(0, 1, 1);
			break;
	
		case CHAR_FRANKLIN:
			Global_114990.f_10058.f_90[1] = Global_114990.f_10058.f_90[1] + 1;
			func_140(1, 1, 1);
			break;
	
		case CHAR_TREVOR:
			Global_114990.f_10058.f_90[2] = Global_114990.f_10058.f_90[2] + 1;
			func_140(2, 1, 1);
			break;
	
		case CHAR_MULTIPLAYER:
			func_140(3, 1, 1);
			break;
	}

	return;
}

void func_140(int iParam0, int iParam1, int iParam2) // Position - 0x51F4 (20980)
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114990.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_114990.f_2370.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 18535;
		
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
		
			if (num2 != 18535)
			{
				num = func_145(num2, -1);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_141(num2, num, -1, true);
			}
			break;
	}

	return;
}

void func_141(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x52E2 (21218)
{
	Hash statName;

	if (iParam0 != 18535)
	{
		statName = func_142(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_142(int iParam0, int iParam1) // Position - 0x5310 (21264)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_143(iParam1));
}

int func_143(int iParam0) // Position - 0x5325 (21285)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_144();
	
		if (num2 > -1)
		{
			Global_2741717 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741717 = 1;
		}
	}

	return num;
}

int func_144() // Position - 0x5359 (21337)
{
	return Global_1574928;
}

int func_145(int iParam0, int iParam1) // Position - 0x5365 (21349)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 18535)
	{
		statHash = func_142(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_146(Ped pedParam0) // Position - 0x5394 (21396)
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	num = func_153();

	if (num == -1)
		return;

	func_154(num);
	PED::SET_PED_NAME_DEBUG(pedParam0, func_151(num));
	Global_114990.f_10058.f_1[num /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(pedParam0);

	for (i = 0; i < 2; i = i + 1)
	{
		num2 = i;
		num3 = func_150(pedParam0, num2);
		func_149(num, num2, num3);
	}

	for (i = 0; i < 2; i = i + 1)
	{
		num4 = i;
		num3 = func_148(pedParam0, num4);
		func_147(num, num4, num3);
	}

	return;
}

void func_147(int iParam0, int iParam1, int iParam2) // Position - 0x5433 (21555)
{
	if (iParam0 > -1)
		Global_114990.f_10058.f_1[iParam0 /*11*/].f_7[iParam1] = iParam2;

	return;
}

int func_148(Ped pedParam0, int iParam1) // Position - 0x5456 (21590)
{
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_83(iParam1));
}

void func_149(int iParam0, int iParam1, int iParam2) // Position - 0x546A (21610)
{
	if (iParam0 > -1)
		Global_114990.f_10058.f_1[iParam0 /*11*/].f_4[iParam1] = iParam2;

	return;
}

int func_150(Ped pedParam0, int iParam1) // Position - 0x548D (21645)
{
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_87(iParam1));
}

char* func_151(int iParam0) // Position - 0x54A1 (21665)
{
	return func_152(iParam0);
}

char* func_152(int iParam0) // Position - 0x54AF (21679)
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "UPRO BABS";
			break;
	
		case 1:
			str = "UPRO DANA";
			break;
	
		case 2:
			str = "UPRO LIZZIE";
			break;
	
		case 3:
			str = "UPRO AMANDA";
			break;
	
		case 4:
			str = "UPRO ASHLEY";
			break;
	
		case 5:
			str = "UPRO KRISTEN";
			break;
	
		case 6:
			str = "UPRO SASHA";
			break;
	
		case 7:
			str = "UPRO JACQUELINE";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

int func_153() // Position - 0x553E (21822)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (func_77(i) == 0)
			return i;
	}

	return -1;
}

void func_154(int iParam0) // Position - 0x5569 (21865)
{
	if (iParam0 > -1)
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
			Global_114990.f_10058.f_1[iParam0 /*11*/][0] = Global_114990.f_10058.f_1[iParam0 /*11*/][0] + 1;
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_FRANKLIN)
			Global_114990.f_10058.f_1[iParam0 /*11*/][1] = Global_114990.f_10058.f_1[iParam0 /*11*/][1] + 1;
		else if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_TREVOR)
			Global_114990.f_10058.f_1[iParam0 /*11*/][2] = Global_114990.f_10058.f_1[iParam0 /*11*/][2] + 1;

	return;
}

void func_155(int iParam0, int iParam1, int iParam2) // Position - 0x55FB (22011)
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

	if (Global_114990.f_10203[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114990.f_10203[iParam0 /*12*/].f_6 == 11 || Global_114990.f_10203[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_114990.f_10203[iParam0 /*12*/].f_5 = 1;
		Global_114990.f_10203[iParam0 /*12*/].f_10 = iParam1;
		Global_114990.f_10203[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0") /* TUNEABLE: NUM_HIDDEN_PACKAGES_0, NUM_HIDDEN_PACKAGES_0 */, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1") /* TUNEABLE: NUM_HIDDEN_PACKAGES_1, NUM_HIDDEN_PACKAGES_1 */, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3") /* TUNEABLE: NUM_HIDDEN_PACKAGES_3, NUM_HIDDEN_PACKAGES_3 */, 50, 0);
	}

	if (flag)
		func_156();

	return;
}

void func_156() // Position - 0x56E1 (22241)
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
	Global_114726 = 0;
	Global_114727 = 0;
	Global_114728 = 0;
	Global_114729 = 0;
	Global_114730 = 0;
	Global_114731 = 0;
	Global_114732 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_114990.f_10203.f_3853;
	Global_114990.f_10203.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_114990.f_10203[num /*12*/].f_5 == true)
		{
			switch (Global_114990.f_10203[num /*12*/].f_6)
			{
				case 1:
					Global_114726 = Global_114726 + 1;
					num2 = num2 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				case 3:
					Global_114727 = Global_114727 + 1;
					num3 = num3 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				case 5:
					Global_114728 = Global_114728 + 1;
					num4 = num4 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				case 7:
					Global_114729 = Global_114729 + 1;
					num5 = num5 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				case 9:
					Global_114730 = Global_114730 + 1;
					num6 = num6 + (Global_114990.f_10203[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114731 = Global_114731 + 1;
					num7 = num7 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				case 13:
					Global_114732 = Global_114732 + 1;
					num8 = num8 + Global_114990.f_10203[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_114709 > 0)
		if (Global_114726 == Global_114709)
			num2 = 55f;

	if (Global_114710 > 0)
		if (Global_114727 == Global_114710)
			num3 = 10f;

	if (Global_114711 > 0)
		if (Global_114728 == Global_114711)
			num4 = 0f;

	if (Global_114712 > 0)
		if (Global_114729 == Global_114712)
			num5 = 10f;

	if (Global_114713 > 0)
	{
		if (Global_114730 == Global_114713 || (Global_114713 * 10) / Global_114730 < 41 || Global_114730 > Global_114716 || Global_114730 == Global_114716)
		{
			if (!IS_BIT_SET(Global_114990.f_10203.f_3856, 14))
			{
				if (Global_114730 == Global_114713)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, Global_114713, 0);
					MISC::SET_BIT(&(Global_114990.f_10203.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_114714 > 0)
		if (Global_114731 == Global_114714)
			num7 = 15f;

	if (Global_114715 > 0)
		if (Global_114732 == Global_114715)
			num8 = 5f;

	Global_114990.f_10203.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_114730 > Global_114716 || Global_114730 == Global_114716)
		value2 = Global_114716;
	else
		value2 = Global_114730;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED") /* TUNEABLE: NUM_MISSIONS_COMPLETED, NUM_MISSIONS_COMPLETED */, Global_114726, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE") /* TUNEABLE: NUM_MISSIONS_AVAILABLE */, Global_114709, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED") /* TUNEABLE: NUM_MINIGAMES_COMPLETED, NUM_MINIGAMES_COMPLETED */, Global_114727, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE") /* TUNEABLE: NUM_MINIGAMES_AVAILABLE */, Global_114710, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED") /* TUNEABLE: NUM_ODDJOBS_COMPLETED */, Global_114728, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE") /* TUNEABLE: NUM_ODDJOBS_AVAILABLE */, Global_114711, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED") /* TUNEABLE: NUM_RNDPEOPLE_COMPLETED, NUM_RNDPEOPLE_COMPLETED */, Global_114729, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE") /* TUNEABLE: NUM_RNDPEOPLE_AVAILABLE */, Global_114712, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED") /* TUNEABLE: NUM_RNDEVENTS_COMPLETED, NUM_RNDEVENTS_COMPLETED */, value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE") /* TUNEABLE: NUM_RNDEVENTS_AVAILABLE */, Global_114716, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED") /* TUNEABLE: NUM_MISC_COMPLETED, NUM_MISC_COMPLETED */, Global_114732 + Global_114731, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE") /* TUNEABLE: NUM_MISC_AVAILABLE */, Global_114715 + Global_114714, true);
	Global_114733 = (Global_114726 * 100) / Global_114709;
	Global_114735 = ((Global_114728 + Global_114727) * 100) / (Global_114711 + Global_114710);
	Global_114734 = ((Global_114729 + value2) * 100) / (Global_114712 + Global_114716);
	Global_114736 = ((Global_114731 + Global_114732) * 100) / (Global_114714 + Global_114715);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE") /* TUNEABLE: TOTAL_PROGRESS_MADE */, Global_114990.f_10203.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS") /* TUNEABLE: PERCENT_STORY_MISSIONS */, Global_114733, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS") /* TUNEABLE: PERCENT_AMBIENT_MISSIONS */, Global_114734, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS") /* TUNEABLE: PERCENT_ODDJOBS */, Global_114735, true);

	if (value > 0f && BUILTIN::FLOOR(value) < BUILTIN::FLOOR(Global_114990.f_10203.f_3853))
		func_158(13, BUILTIN::FLOOR(Global_114990.f_10203.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80362)
		{
			if (func_157() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114724 = false;
			
				if (!Global_65080)
					func_105();
			}
		}
	}

	return;
}

int func_157() // Position - 0x5B9F (23455)
{
	return Global_33832;
}

BOOL func_158(int iParam0, int iParam1) // Position - 0x5BAA (23466)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x5BFB (23547)
{
	if (iParam2 == -1)
		iParam2 = func_144();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_160() // Position - 0x5C19 (23577)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i < 1)
			Global_98948[i] = Global_98948[i + 1];
		else
			Global_98948[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_161(BOOL bParam0, BOOL bParam1) // Position - 0x5C5A (23642)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_162(pedLocal_113, iLocal_98, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_162(PLAYER::PLAYER_PED_ID(), iLocal_99, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_162(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9) // Position - 0x5CD3 (23763)
{
	if (func_573())
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	else
		TASK::TASK_SYNCHRONIZED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);

	return;
}

void func_163(BOOL bParam0, BOOL bParam1) // Position - 0x5D03 (23811)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_165(&iLocal_98, 1, false, false);
	func_164(pedLocal_113, iLocal_98, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_165(&iLocal_99, 0, false, false);
	func_164(PLAYER::PLAYER_PED_ID(), iLocal_99, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

void func_164(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8) // Position - 0x5D8C (23948)
{
	if (func_573())
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);

	return;
}

void func_165(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5DB2 (23986)
{
	var unk;

	unk = { 0f, 0f, 0f };
	*uParam0 = func_168(unk, 0f, 0f, 0f, bParam3, bParam2, 2);

	if (iParam1 == 0)
		func_167(*uParam0, veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "seat_dside_f"));
	else if (iParam1 == 1)
		func_167(*uParam0, veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "seat_pside_f"));

	func_166(*uParam0, unk, 0f, 0f, 0f, false);
	return;
}

void func_166(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x5E18 (24088)
{
	if (!func_573())
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, vParam1, fParam4, bParam7);

	return;
}

void func_167(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x5E38 (24120)
{
	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		return;

	if (func_573())
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);
	else
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);

	return;
}

int func_168(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x5E6B (24171)
{
	int sceneID;

	if (func_573())
	{
		if (bParam6)
			bParam7 = false;
	
		sceneID = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vParam0, fParam3, iParam8, bParam6, bParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		sceneID = PED::CREATE_SYNCHRONIZED_SCENE(vParam0, fParam3, iParam8);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sceneID, bParam6);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(sceneID, bParam7);
	}

	return sceneID;
}

void func_169(BOOL bParam0, BOOL bParam1) // Position - 0x5EC6 (24262)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_162(pedLocal_113, iLocal_97, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_162(PLAYER::PLAYER_PED_ID(), iLocal_97, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_170(BOOL bParam0, BOOL bParam1) // Position - 0x5F3F (24383)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_165(&iLocal_97, 0, false, true);
	func_164(pedLocal_113, iLocal_97, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_164(PLAYER::PLAYER_PED_ID(), iLocal_97, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

var func_171(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5FBF (24511)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_172() // Position - 0x5FD6 (24534)
{
	int num;
	int num2;

	num = func_173();

	if (num < 48)
		num2 = 2;
	else if (num >= 48 && num < 85)
		num2 = 3;
	else
		num2 = 4;

	return num2;
}

int func_173() // Position - 0x600E (24590)
{
	if (func_573())
		return func_145(65, -1);

	return func_174(_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()), 1);
}

int func_174(eCharacter echParam0, int iParam1) // Position - 0x6037 (24631)
{
	var outValue;
	Hash statHash;

	statHash = func_175(echParam0, iParam1);
	STATS::STAT_GET_INT(statHash, &outValue, -1);
	return outValue;
}

Hash func_175(eCharacter echParam0, int iParam1) // Position - 0x6055 (24661)
{
	var unk;
	var unk2;

	func_176(echParam0, iParam1, &unk, &unk2);
	return unk;
}

void func_176(eCharacter echParam0, int iParam1, var uParam2, var uParam3) // Position - 0x606B (24683)
{
	switch (echParam0)
	{
		case CHAR_MICHAEL:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED") /* TUNEABLE: SP0_SPECIAL_ABILITY_UNLOCKED */;
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA") /* TUNEABLE: SP0_STAMINA */;
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY") /* TUNEABLE: SP0_LUNG_CAPACITY */;
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH") /* TUNEABLE: SP0_STRENGTH */;
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY") /* TUNEABLE: SP0_WHEELIE_ABILITY */;
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY") /* TUNEABLE: SP0_FLYING_ABILITY */;
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY") /* TUNEABLE: SP0_SHOOTING_ABILITY */;
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY") /* TUNEABLE: SP0_STEALTH_ABILITY */;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED") /* TUNEABLE: SP1_SPECIAL_ABILITY_UNLOCKED */;
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA") /* TUNEABLE: SP1_STAMINA */;
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY") /* TUNEABLE: SP1_LUNG_CAPACITY */;
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH") /* TUNEABLE: SP1_STRENGTH */;
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY") /* TUNEABLE: SP1_WHEELIE_ABILITY */;
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY") /* TUNEABLE: SP1_FLYING_ABILITY */;
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY") /* TUNEABLE: SP1_SHOOTING_ABILITY */;
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY") /* TUNEABLE: SP1_STEALTH_ABILITY */;
					break;
			}
			break;
	
		case CHAR_TREVOR:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED") /* TUNEABLE: SP2_SPECIAL_ABILITY_UNLOCKED */;
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA") /* TUNEABLE: SP2_STAMINA */;
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY") /* TUNEABLE: SP2_LUNG_CAPACITY */;
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH") /* TUNEABLE: SP2_STRENGTH */;
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY") /* TUNEABLE: SP2_WHEELIE_ABILITY */;
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY") /* TUNEABLE: SP2_FLYING_ABILITY */;
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY") /* TUNEABLE: SP2_SHOOTING_ABILITY */;
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY") /* TUNEABLE: SP2_STEALTH_ABILITY */;
					break;
			}
			break;
	
		case CHAR_MULTIPLAYER:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

int func_177() // Position - 0x62C2 (25282)
{
	int num;

	if (iLocal_314 != 0)
		if (iLocal_78 < 2)
			num = 3;
		else if (iLocal_78 == 2)
			num = 4;
		else if (iLocal_78 == 3)
			num = 5;
		else
			num = 6;
	else if (iLocal_78 < 3)
		num = 2;
	else
		num = 3;

	return num;
}

void func_178(BOOL bParam0, BOOL bParam1) // Position - 0x630C (25356)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_162(pedLocal_113, iLocal_96, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(2, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_162(PLAYER::PLAYER_PED_ID(), iLocal_96, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(2, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_179(BOOL bParam0, BOOL bParam1) // Position - 0x6385 (25477)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_165(&iLocal_96, 0, true, false);
	func_164(pedLocal_113, iLocal_96, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(2, true, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	func_164(PLAYER::PLAYER_PED_ID(), iLocal_96, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(2, false, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	return;
}

void func_180(BOOL bParam0, BOOL bParam1) // Position - 0x6405 (25605)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_162(pedLocal_113, iLocal_95, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_162(PLAYER::PLAYER_PED_ID(), iLocal_95, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_181(BOOL bParam0, BOOL bParam1) // Position - 0x647E (25726)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_165(&iLocal_95, 0, false, true);
	func_164(pedLocal_113, iLocal_95, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_164(PLAYER::PLAYER_PED_ID(), iLocal_95, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

float func_182(int iParam0) // Position - 0x64FE (25854)
{
	float synchronizedScenePhase;

	if (func_573())
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);

	return synchronizedScenePhase;
}

void func_183(int iParam0) // Position - 0x6526 (25894)
{
	if (!func_223(iParam0))
		return;

	return;
}

void func_184(BOOL bParam0, BOOL bParam1) // Position - 0x653B (25915)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_162(pedLocal_113, iLocal_93, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(0, true, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	func_162(PLAYER::PLAYER_PED_ID(), iLocal_94, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(0, false, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	return;
}

void func_185(BOOL bParam0, BOOL bParam1) // Position - 0x65B4 (26036)
{
	int num;

	num = 2052;

	if (func_573())
		num = 2056;

	func_165(&iLocal_93, 1, false, true);
	func_164(pedLocal_113, iLocal_93, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(0, true, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	func_165(&iLocal_94, 0, false, true);
	func_164(PLAYER::PLAYER_PED_ID(), iLocal_94, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_45(0, false, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	return;
}

void func_186(Ped pedParam0, int iParam1) // Position - 0x6635 (26165)
{
	if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_116, false))
		if (!func_573())
			PED::SET_PED_INTO_VEHICLE(pedParam0, veLocal_116, iParam1);
		else if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_116, false))
			TASK::TASK_ENTER_VEHICLE(pedParam0, veLocal_116, -1, iParam1, 2f, 16, 0);

	return;
}

void func_187(var uParam0) // Position - 0x667B (26235)
{
	float num;
	float num2;
	float entityRotation;
	float entityHeading;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	num = func_189(func_190(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "windscreen")));
	num2 = func_189(func_190(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "windscreen")));
	entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_116, 2) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_116);

	if (entityHeading >= 180f)
		num3 = entityHeading - 180f;
	else
		num3 = entityHeading + 180f;

	num4 = -7f - entityRotation.f_1;
	num5 = -5f - entityRotation;
	num6 = -2.5f + entityRotation;
	num7 = (0f - (0.7f * entityRotation)) + (0.3f * entityRotation.f_1);

	if (!CAM::DOES_CAM_EXIST(uLocal_330[2 /*7*/]))
		func_188(&uLocal_330[2 /*7*/], func_190(2), num4, entityRotation, num, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_330[1 /*7*/]))
		func_188(&uLocal_330[1 /*7*/], func_190(1), num7, -entityRotation.f_1, num2, 37.3f);

	if (!CAM::DOES_CAM_EXIST(uLocal_330[0 /*7*/]))
		func_188(&uLocal_330[0 /*7*/], func_190(0), num5, -entityRotation.f_1, num3, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_330[3 /*7*/]))
		func_188(&uLocal_330[3 /*7*/], func_190(3), num6, entityRotation.f_1, entityHeading, 45f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(uLocal_330[*uParam0 /*7*/], true);
	return;
}

void func_188(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Position - 0x67E6 (26598)
{
	uParam0->f_1 = { fParam4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, vParam1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

float func_189(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x6838 (26680)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

Vector3 func_190(int iParam0) // Position - 0x6852 (26706)
{
	var offsetFromEntityInWorldCoords;
	var minimum;
	var maximum;
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;

	!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false);
	!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_116), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_116, worldPositionOfEntityBone) };

	if (func_192(worldPositionOfEntityBone))
		offsetFromEntityGivenWorldCoords = { 0f, 0f, 1.1f };

	switch (iParam0)
	{
		case 0:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, 0f, maximum.f_1 + 1.4f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 1:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, 1.5f, maximum.f_1 + 1.2f, offsetFromEntityGivenWorldCoords.f_2 - 0.1f) };
			break;
	
		case 2:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, -3.7f, 0.7f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 3:
			offsetFromEntityInWorldCoords = { func_191() };
			break;
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_191() // Position - 0x6941 (26945)
{
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;
	var minimum;
	var maximum;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_116), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_116, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_116, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_116, worldPositionOfEntityBone) };

	if (func_192(worldPositionOfEntityBone))
		offsetFromEntityGivenWorldCoords = { 0f, 0f, 1.1f };

	offsetFromEntityGivenWorldCoords.f_2 = offsetFromEntityGivenWorldCoords.f_2 + 0.09f;
	minimum.f_1 = minimum.f_1 - 1f;
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, 0f, -MISC::ABSF(minimum.f_1), offsetFromEntityGivenWorldCoords.f_2);
}

BOOL func_192(float fParam0, var uParam1, var uParam2) // Position - 0x69BB (27067)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_193(int iParam0, BOOL bParam1) // Position - 0x69E5 (27109)
{
	if (bParam1)
		MISC::SET_BIT(&Global_34081, iParam0);
	else
		MISC::CLEAR_BIT(&Global_34081, iParam0);

	return;
}

void func_194(var uParam0) // Position - 0x6A07 (27143)
{
	if (!CAM::DOES_CAM_EXIST(uLocal_330[*uParam0 /*7*/]))
		return;

	if (!CAM::IS_CAM_RENDERING(uLocal_330[*uParam0 /*7*/]))
		return;

	CAM::SHAKE_CAM(uLocal_330[*uParam0 /*7*/], "HAND_SHAKE", 0.25f);

	if (!HUD::IS_PAUSE_MENU_ACTIVE())
		func_197(&uLocal_330[*uParam0 /*7*/]);

	if (func_196())
	{
		if (!func_573())
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~*/))
				func_115("PROS_CAM_OC" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~*/);
	}
	else
	{
		if (!func_573())
			if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~*/))
				func_115("PROS_CAM_TOG" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~*/);
	
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_NEXT_CAMERA) && !HUD::IS_PAUSE_MENU_ACTIVE() && !func_49(false, true))
		{
			func_195(uParam0);
			CAM::SET_CAM_ACTIVE(uLocal_330[*uParam0 /*7*/], true);
		}
	}

	return;
}

void func_195(var uParam0) // Position - 0x6AD2 (27346)
{
	if (*uParam0 < 3)
		*uParam0 = *uParam0 + 1;
	else if (*uParam0 == 3)
		*uParam0 = 0;

	if (*uParam0 == 0)
		if (func_510(iLocal_68, 16))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 1)
		if (func_510(iLocal_68, 128))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 2)
		if (func_510(iLocal_68, 64))
			*uParam0 = *uParam0 + 1;

	return;
}

BOOL func_196() // Position - 0x6B45 (27461)
{
	if (func_510(iLocal_68, 16) && func_510(iLocal_68, 64) && func_510(iLocal_68, 128))
		return true;

	return false;
}

void func_197(var uParam0) // Position - 0x6B77 (27511)
{
	var unk;
	float num;
	float num2;
	float num3;

	unk = 4;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	func_199(&unk[0], &unk[1], &unk[2], &unk[3], false, false);
	num.f_2 = -(BUILTIN::TO_FLOAT(unk[2]) / 127f) * 10f;
	num.f_1 = (-num.f_2 * 3f) / 10f;

	if (PAD::IS_LOOK_INVERTED())
		num = (BUILTIN::TO_FLOAT(unk[3]) / 127f) * 10f;
	else
		num = -(BUILTIN::TO_FLOAT(unk[3]) / 127f) * 10f;

	num2 = 30f * BUILTIN::TIMESTEP();
	num3 = { num };

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		uParam0->f_4 = func_198(uParam0->f_4 + (num3 * 0.05f), -3f, 3f);
		uParam0->f_4.f_1 = func_198(uParam0->f_4.f_1 + (num3.f_1 * 0.05f), -3f, 3f);
		uParam0->f_4.f_2 = func_198(uParam0->f_4.f_2 + (num3.f_2 * 0.05f), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = uParam0->f_4 + func_198((num3 - uParam0->f_4) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_1 = uParam0->f_4.f_1 + func_198((num3.f_1 - uParam0->f_4.f_1) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_2 = uParam0->f_4.f_2 + func_198((num3.f_2 - uParam0->f_4.f_2) * 0.05f * num2, -3f, 3f);
	}

	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
	return;
}

float func_198(float fParam0, float fParam1, float fParam2) // Position - 0x6D11 (27921)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_199(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6D38 (27960)
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X))
			*uParam0 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y))
			*uParam1 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X))
			*uParam2 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y))
			*uParam3 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		
			if (PAD::IS_MOUSE_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		}
	}

	return;
}

void func_200() // Position - 0x6E3C (28220)
{
	int localSceneFromNetworkId;
	float synchronizedScenePhase;

	if (!func_205())
	{
		if (func_204(pedLocal_113))
		{
			if (!func_510(iLocal_66, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			
				if (iLocal_89 == 1)
				{
					if (!func_573())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 252);
				}
				else if (iLocal_89 == 2)
				{
					if (!func_573())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 210);
				}
				else
				{
					if (!func_573())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 3000, 168);
				}
			
				func_501(&iLocal_66, 256);
			}
		}
	}
	else
	{
		switch (iLocal_315)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_113, joaat("sex_bounce")))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_116, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_202();
				}
				break;
		
			case 1:
			case 2:
				if (func_510(iLocal_66, 32768))
				{
					if (func_573())
						localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_96);
					else
						localSceneFromNetworkId = iLocal_96;
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					{
						synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId);
					
						if (synchronizedScenePhase > 0.01f && synchronizedScenePhase < 0.019f || synchronizedScenePhase > 0.093f && synchronizedScenePhase < 0.1f || synchronizedScenePhase > 0.165f && synchronizedScenePhase < 0.172f || synchronizedScenePhase > 0.231f && synchronizedScenePhase < 0.239f || synchronizedScenePhase > 0.308f && synchronizedScenePhase < 0.317f || synchronizedScenePhase > 0.37f && synchronizedScenePhase < 0.378f || synchronizedScenePhase > 0.437f && synchronizedScenePhase < 0.443f || synchronizedScenePhase > 0.507f && synchronizedScenePhase < 0.518f || synchronizedScenePhase > 0.58f && synchronizedScenePhase < 0.587f || synchronizedScenePhase > 0.651f && synchronizedScenePhase < 0.659f || synchronizedScenePhase > 0.72f && synchronizedScenePhase < 0.729f || synchronizedScenePhase > 0.788f && synchronizedScenePhase < 0.794f || synchronizedScenePhase > 0.862f && synchronizedScenePhase < 0.87f || synchronizedScenePhase > 0.937f && synchronizedScenePhase < 0.946f)
						{
							if (!func_543(512))
							{
								PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_116, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_202();
								func_201(512);
							}
						}
						else
						{
							func_547(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_113, joaat("sex_bounce")))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_116, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_202();
				}
				break;
		}
	}

	return;
}

void func_201(int iParam0) // Position - 0x7161 (29025)
{
	if (!func_510(iLocal_69, iParam0))
		func_501(&iLocal_69, iParam0);

	return;
}

void func_202() // Position - 0x717D (29053)
{
	int entityHealth;

	entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	entityHealth = entityHealth + 1 + iLocal_314;

	if (entityHealth > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
		entityHealth = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());

	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), entityHealth, 0, 0);
	func_203();
	return;
}

void func_203() // Position - 0x71C0 (29120)
{
	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		iLocal_76 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	return;
}

BOOL func_204(Ped pedParam0) // Position - 0x71E8 (29160)
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_55(), func_47(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_55(), func_47(21), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_53(), func_46(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_53(), func_46(21), 3);
}

BOOL func_205() // Position - 0x7246 (29254)
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_113, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_206(pedLocal_113, func_50(), true), 3);
}

char* func_206(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x726A (29290)
{
	char* str;
	Vehicle vehiclePedIsIn;

	str = "";

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_48(vehiclePedIsIn))
				if (bParam1)
					if (bParam2)
						str = func_47(20);
					else
						str = func_47(25);
				else if (bParam2)
					str = func_47(10);
				else
					str = func_47(15);
			else if (bParam1)
				if (bParam2)
					str = func_46(20);
				else
					str = func_46(25);
			else if (bParam2)
				str = func_46(10);
			else
				str = func_46(15);
	}

	return str;
}

void func_207() // Position - 0x7314 (29460)
{
	if (!func_205())
		return;

	if (func_573())
		func_212();

	if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		return;

	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
		func_208();

	return;
}

void func_208() // Position - 0x735E (29534)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_314 == 0)
			func_134("PROSTITUTES_BJ_SPEECH_SCENE");
	
		if (!func_10(&uLocal_124))
		{
			func_491(&uLocal_124);
		}
		else if (func_7(&uLocal_124) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!func_510(iLocal_66, 65536))
			{
				func_501(&iLocal_66, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_209(iLocal_315);
			}
			else
			{
				func_5(&iLocal_66, 65536);
				func_41(&uLocal_124);
			}
		}
	}

	return;
}

void func_209(int iParam0) // Position - 0x73FF (29695)
{
	switch (iParam0)
	{
		case 0:
			func_88("PROSTITUTES_BJ_SPEECH_SCENE");
		
			if (func_210(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	
		case 1:
		case 2:
			if (func_210(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	}

	return;
}

BOOL func_210(Player plParam0) // Position - 0x7486 (29830)
{
	if (!func_211(plParam0))
		return true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_2658296[plParam0 /*468*/].f_244;
}

BOOL func_211(Player plParam0) // Position - 0x74B6 (29878)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void func_212() // Position - 0x74D8 (29912)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (func_213(0.4f))
		func_201(4);

	if (func_543(4))
	{
		if (!func_10(&uLocal_127))
		{
			func_491(&uLocal_127);
		}
		else if (func_7(&uLocal_127) > 2f)
		{
			if (!func_543(16) && !func_213(0.4f))
			{
				func_201(16);
				iLocal_78 = iLocal_78 + 1;
			}
			else if (func_543(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
				{
					func_547(4);
					func_547(16);
					func_41(&uLocal_127);
				}
			}
		}
	}

	return;
}

BOOL func_213(float fParam0) // Position - 0x756F (30063)
{
	float playerLoudness;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		playerLoudness = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
	
		if (playerLoudness > fParam0)
			return true;
	}

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x759B (30107)
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
				if (type == Global_2673276.f_3)
					return Global_2673276.f_2;
				else if (Global_2658296[type /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_215(BOOL bParam0, BOOL bParam1) // Position - 0x75FB (30203)
{
	if (!func_573())
		return;

	func_185(bParam0, bParam1);
	func_181(bParam0, bParam1);
	func_179(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_163(bParam0, bParam1);
	return;
}

void func_216(int iParam0, int iParam1) // Position - 0x7636 (30262)
{
	int num;

	num = func_145(iParam0, func_143(iParam1));
	num = num + 1;
	func_141(iParam0, num, iParam1, true);
	return;
}

void func_217(int iParam0) // Position - 0x765D (30301)
{
	if (func_222())
		return;

	if (!(Global_21666.f_1 == 1))
	{
		if (func_221(0))
			func_218(iParam0);
	
		MISC::SET_BIT(&Global_9503, 2);
	}

	return;
}

void func_218(int iParam0) // Position - 0x7690 (30352)
{
	if (func_222())
		return;

	if (Global_21899)
		if (func_220())
			func_219(true, true);
		else
			func_219(false, false);

	if (Global_21666.f_1 == 10 || Global_21666.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23040 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_21())
		Global_21666.f_1 = 3;

	return;
}

void func_219(BOOL bParam0, BOOL bParam1) // Position - 0x771A (30490)
{
	if (bParam0)
	{
		if (func_221(0))
		{
			Global_21899 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21603);
		
			Global_21594 = { Global_21612[Global_21611 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21594);
		}
	}
	else if (Global_21899 == true)
	{
		Global_21899 = false;
		Global_21594 = { Global_21619[Global_21611 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21603);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21594);
	}

	return;
}

BOOL func_220() // Position - 0x778E (30606)
{
	return IS_BIT_SET(Global_1965230, 5);
}

BOOL func_221(int iParam0) // Position - 0x779C (30620)
{
	if (iParam0 == 1)
		if (Global_21666.f_1 > 3)
			if (IS_BIT_SET(Global_9502, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21666.f_1 > 3)
		return true;

	return false;
}

BOOL func_222() // Position - 0x77F3 (30707)
{
	return IS_BIT_SET(Global_1965230, 19);
}

BOOL func_223(int iParam0) // Position - 0x7802 (30722)
{
	BOOL isSynchronizedSceneRunning;

	if (func_573())
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);

	return isSynchronizedSceneRunning;
}

void func_224() // Position - 0x782A (30762)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_226(), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_225());
		func_564();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&pedLocal_113);
	}

	return;
}

float func_225() // Position - 0x7872 (30834)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 116.6356f;
	
		case CHAR_FRANKLIN:
			return 175.0504f;
	
		case CHAR_TREVOR:
			return 299.5673f;
	}

	return 0f;
}

Vector3 func_226() // Position - 0x78B7 (30903)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -820.4975f, 176.9618f, 70.6166f;
	
		case CHAR_FRANKLIN:
			return -14.6005f, -1444.6244f, 29.6472f;
	
		case CHAR_TREVOR:
			return 1979.9609f, 3816.0178f, 31.3641f;
	}

	return 0f, 0f, 0f;
}

void func_227() // Position - 0x791C (31004)
{
	int duration;

	if (func_229(&uLocal_121, 3f) && !CAM::IS_CAM_ACTIVE(caLocal_120))
	{
		duration = BUILTIN::FLOOR((func_228() - 2f) * 1000f);
		CAM::SET_CAM_ACTIVE(caLocal_119, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_120, caLocal_119, duration, 1, 1);
	}

	if (func_229(&uLocal_121, func_228()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_312 = 10;
	}

	return;
}

float func_228() // Position - 0x7978 (31096)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 10f;
	
		case CHAR_FRANKLIN:
			return 12f;
	
		case CHAR_TREVOR:
			return 10f;
	}

	return 0f;
}

BOOL func_229(int* piParam0, float fParam1) // Position - 0x79BD (31165)
{
	if (func_10(piParam0))
		if (func_7(piParam0) > fParam1)
			return true;

	return false;
}

void func_230(var uParam0) // Position - 0x79DF (31199)
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_DAMAGE_ENTITY:
				func_231(i, uParam0);
				break;
		}
	}

	return;
}

void func_231(int iParam0, var uParam1) // Position - 0x7A1E (31262)
{
	struct<13> eventData;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 13))
		func_232(&eventData, uParam1);

	return;
}

void func_232(var uParam0, var uParam1) // Position - 0x7A3C (31292)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_124(false);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_564();
						func_557(uParam1);
					}
				}
			}
		}
	}

	return;
}

void func_233(var uParam0) // Position - 0x7A9A (31386)
{
	int entityHealth;

	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(pedLocal_113);
		
			if (entityHealth - iLocal_77 < 0)
			{
				func_124(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_564();
				func_557(uParam0);
			}
		}
	}

	return;
}

void func_234(var uParam0) // Position - 0x7AE9 (31465)
{
	int entityHealth;

	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		
			if (entityHealth - iLocal_76 < 0)
			{
				func_124(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_564();
				func_557(uParam0);
			}
		}
	}

	return;
}

void func_235(var uParam0) // Position - 0x7B3C (31548)
{
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;

	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
			
				if (BUILTIN::VDIST2(uLocal_73, entityCoords) >= 4f)
				{
					func_124(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_564();
					func_557(uParam0);
				}
			}
		}
	}

	return;
}

void func_236() // Position - 0x7BAD (31661)
{
	int num;
	var unk;
	eViewMode followPedCamViewMode;
	var unk5;
	int num2;
	var unk6;
	var unk7;
	int pedMoney;

	if (!func_510(iLocal_66, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
	
		func_501(&iLocal_66, 16);
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_573())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_116))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_116, true);
				VEHICLE::SET_VEHICLE_LIGHTS(veLocal_116, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_116, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_116, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_116, true);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_116, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_116, true);
		}
	
		if (!func_396() || !PED::IS_PED_IN_VEHICLE(pedLocal_113, veLocal_116, false))
		{
			func_492(false);
			return;
		}
	}
	else
	{
		func_492(false);
		return;
	}

	func_217(0);

	if (!VEHICLE::IS_VEHICLE_STOPPED(veLocal_116) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_510(iLocal_66, 1024))
	{
		iLocal_312 = 7;
		func_394(true, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1);
		iLocal_318 = 0;
		func_511("WAITING FOR VEHICLE TO STOP ");
		return;
	}

	num = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);

	switch (iLocal_318)
	{
		case 0:
		case 1:
			if (func_573())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							return;
						}
					}
				}
			}
		
			func_393();
			func_392();
			func_203();
		
			if (func_389())
			{
				func_134("PROSTITUTES_DRIVE_SCENE");
				func_88("PROSTITUTES_PARKED_SCENE");
				func_388();
			
				if (func_573())
				{
					func_201(2);
				
					if (func_573())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
									VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
								}
							}
						}
					}
				}
			
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_113);
				iLocal_318 = 2;
			}
			break;
	
		case 2:
			if (func_387(iLocal_321))
			{
				func_386(&iLocal_321);
				func_5(&iLocal_92, 2);
			}
		
			func_384(pedLocal_113, false);
		
			if (func_384(PLAYER::PLAYER_PED_ID(), true))
			{
				if (func_382(&unk, 0))
				{
					evmLocal_65 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					followPedCamViewMode = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (followPedCamViewMode != FIRST_PERSON && evmLocal_65 == FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);
						else if (followPedCamViewMode == FIRST_PERSON && evmLocal_65 != FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(THIRD_PERSON_MEDIUM);
				
					func_369();
					iLocal_318 = 3;
					func_511("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					_DISPLAY_HELP_TEXT(&unk, -1);
					func_41(&uLocal_130);
					iLocal_314 = 3;
					iLocal_318 = 4;
				}
			}
			break;
	
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				return;
		
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
			func_349();
			func_307(true, -1, true, false, true, -1082130432, false, false, -1);
			func_306(&unk5, &num2, &unk6, &unk7, false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
			num = 0;
		
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::IS_USING_CURSOR(FRONTEND_CONTROL))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_ACCEPT, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_CANCEL, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_UP, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN, true);
					func_299(false, false, false, true);
					func_298(false, -1, true);
				
					if (func_297())
					{
						if (Global_4521350 != epctLocal_87)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							epctLocal_87 = Global_4521350;
							func_511("Player highlighted a new option using the mouse!");
						}
						else
						{
							num = 1;
						}
					}
				}
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 > 100 && MISC::GET_GAME_TIMER() - iLocal_106 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_511("DOWN pressed!");
			
				if (epctLocal_87 < epctLocal_88)
					epctLocal_87 = epctLocal_87 + 1;
				else
					epctLocal_87 = PV_COMP_HEAD;
			
				iLocal_106 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 < -100 && MISC::GET_GAME_TIMER() - iLocal_106 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_511("UP pressed!");
			
				if (epctLocal_87 > PV_COMP_HEAD)
					epctLocal_87 = epctLocal_87 - 1;
				else
					epctLocal_87 = epctLocal_88;
			
				iLocal_106 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || num == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Lista de filtros*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
				func_293();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_318 = 4;
			}
		
			func_292(epctLocal_87, true, 1);
			break;
	
		case 4:
			pedMoney = PED::GET_PED_MONEY(pedLocal_113);
		
			if (iLocal_314 == 3)
			{
				func_394(true, -1);
				func_291();
				func_290(false);
				iLocal_81 = MISC::GET_GAME_TIMER();
				func_134("PROSTITUTES_PARKED_SCENE");
				func_511("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_312 = 6;
			
				if (iLocal_89 > 0)
				{
					if (func_128(pedLocal_113))
						func_127();
					else
						func_492(false);
				
					return;
				}
				else
				{
					if (func_285() >= 20)
					{
						pedMoney = pedMoney + 20;
						func_238(20);
						PED::SET_PED_MONEY(pedLocal_113, pedMoney);
					}
				
					func_492(true);
					return;
				}
			}
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_51(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
			else
			{
				func_394(true, -1);
				func_291();
			
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_501(&iLocal_66, 1024);
					iLocal_314 = 3;
					func_511("AUSSIE VERSION IS TRUE!?!?!");
				}
			
				if (iLocal_314 != 3)
				{
					if (func_285() > func_237(iLocal_314))
					{
						func_238(func_237(iLocal_314));
						pedMoney = pedMoney + func_237(iLocal_314);
					}
				
					func_42(&uLocal_124, 14f - 4f);
					func_511("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_131();
					func_129();
					iLocal_312 = 11;
				}
			
				PED::SET_PED_MONEY(pedLocal_113, pedMoney);
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
			break;
	}

	return;
}

ePedComponentType func_237(int iParam0) // Position - 0x8229 (33321)
{
	if (MISC::IS_AUSSIE_VERSION())
		if (iParam0 == 0)
			return 70;
		else if (iParam0 == 1)
			return 70;
		else if (iParam0 == 2)
			return 70;
		else
			return 0;

	if (iParam0 == 0)
		return 50;

	if (iParam0 == 1)
		return 70;

	if (iParam0 == 2)
		return 100;

	return 0;
}

void func_238(ePedComponentType epctParam0) // Position - 0x8294 (33428)
{
	var unk;

	if (!func_573())
		func_251(_GET_CURRENT_PLAYER_CHARACTER(), 1, epctParam0);
	else if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		MONEY::NETWORK_SPENT_PROSTITUTES(epctParam0, false, false);
	else
		_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_PROSTITUTES"), epctParam0, &unk, false, false, false);

	return;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, ePedComponentType epctParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x82D6 (33494)
{
	int num;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return;

	num = 1;

	if (bParam4)
		num = 4;
	else if (bParam3)
		num = 2;
	else if (bParam5)
		num = 8;

	switch (hParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case 2115896461:
		case 797947947:
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
		case 571787049:
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_28044)
				func_240(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case -1426920838:
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_240(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_SALVAGE_YARD_CLAIM_VEH"):
		case 767920357:
		case 1238804234:
		case -2140508184:
		case 1678966150:
		case 1391075557:
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_28044)
				func_240(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_PREP"):
		case joaat("SERVICE_EARN_CHICKEN_FACTORY_RAID_FINALE"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_CHICKEN_FACTORY_RAID"):
		case joaat("SERVICE_EARN_WINTER_23_AWARD_SALVAGE_YARD"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_SALVAGE_VEHICLE"):
		case joaat("SERVICE_EARN_WEEKLY_OBJECTIVE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_TRUCK"):
		case 67714907:
		case joaat("SERVICE_EARN_AMBIENT_JOB_TOW_TRUCK_WORK"):
		case joaat("SERVICE_EARN_SALVAGE_YARD_SELL_VEH"):
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
		case 1288347381:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
		case -243568299:
		case 1226579288:
		case -2107356056:
		case -428381543:
		case 72361536:
		case -804351832:
		case 1570992221:
		case 565434243:
		case -1154756209:
		case 1496037489:
		case 1080388086:
		case 616397339:
		case 175159049:
		case -1950948893:
			func_240(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case -1919450538:
		case -1683562330:
			func_240(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	return;
}

int func_240(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6, int iParam7) // Position - 0x8CF4 (36084)
{
	BOOL flag;
	BOOL flag2;
	int i;
	BOOL flag3;
	int transactionId;
	BOOL flag4;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	flag2 = 1;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_144()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516982 = 1;
			return 0;
		}
	
		if (Global_2698567)
		{
			if (hParam3 == joaat("CATEGORY_WEAPON_AMMO") || hParam3 == joaat("CATEGORY_MART"))
			{
				Global_4516983 = 1;
				return 0;
			}
		}
	}

	flag3 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4515492[i /*84*/].f_65.f_2 == 0)
			flag3 = true;
	}

	if (!flag3)
		return 0;

	*uParam0 = 15;
	transactionId = 2147483647;

	if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&transactionId, hParam3, hParam4, hParam2, epctParam5, iParam6))
	{
		if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId))
		{
			*uParam0 = func_247(transactionId, iParam1, hParam4, hParam2, hParam3, epctParam5, false, iParam6, iParam7, 1, true);
		
			if (flag2 && !flag)
			{
			}
		
			if (flag)
			{
				if (*uParam0 != -1)
				{
					Global_4515492[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4515492[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
		
			Global_4516963 = true;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4516981 = 1;
			Global_4516984 = hParam4;
			Global_4516986 = hParam3;
			Global_4516987 = 1;
			Global_4516985 = epctParam5;
		}
	
		if (iParam7 & 8 != 0)
		{
			Global_4516984 = hParam4;
			Global_4516986 = hParam3;
			Global_4516987 = 1;
			Global_4516985 = epctParam5;
		}
	
		flag4 = false;
	
		if (flag4)
		{
			func_246(1, hParam4);
			Global_4516981 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_241(-1, hParam4, iParam6, epctParam5, -1);
	}

	return 0;
}

void func_241(int iParam0, Hash hParam1, int iParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x8EA1 (36513)
{
	switch (hParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_130.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_242(iParam0);

	return;
}

void func_242(int iParam0) // Position - 0x8ED9 (36569)
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_245(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4515492[iParam0 /*84*/].f_65);
	
		func_243(&Global_4515492[iParam0 /*84*/]);
	}

	return;
}

void func_243(ePedComponentType epctParam0) // Position - 0x8F2D (36653)
{
	epctParam0->f_65 = 0;
	epctParam0->f_65 = 2147483647;
	epctParam0->f_65.f_1 = 0;
	epctParam0->f_65.f_2 = 0;
	epctParam0->f_65.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	epctParam0->f_65.f_4 = joaat("SERVICE_INVALID");
	epctParam0->f_65.f_5 = 0;
	epctParam0->f_65.f_6 = joaat("CATEGORY_CLOTH");
	epctParam0->f_65.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*epctParam0 = 0;
	epctParam0->f_1 = 0;
	epctParam0->f_12 = 0;
	epctParam0->f_2 = 0;
	func_244(&(epctParam0->f_13));
	func_244(&(epctParam0->f_13.f_13));
	TEXT_LABEL_ASSIGN_STRING(&(epctParam0->f_13.f_26), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(epctParam0->f_13.f_34), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(epctParam0->f_13.f_40), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(epctParam0->f_13.f_44), "", 32);
	epctParam0->f_3 = 0;
	epctParam0->f_4 = 0;
	epctParam0->f_5 = 0;
	epctParam0->f_6 = 0;
	epctParam0->f_7 = 0;
	epctParam0->f_65.f_8 = 0;
	epctParam0->f_65.f_9 = 0;
	epctParam0->f_65.f_10 = 0;
	epctParam0->f_65.f_11 = 0;
	epctParam0->f_65.f_13 = 0;
	epctParam0->f_65.f_12 = 0;
	epctParam0->f_65.f_14 = 0;
	epctParam0->f_65.f_15 = 0;
	epctParam0->f_65.f_16 = 0;
	epctParam0->f_65.f_18 = 0;
	return;
}

void func_244(var uParam0) // Position - 0x9038 (36920)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	return;
}

BOOL func_245(int iParam0) // Position - 0x9080 (36992)
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4515492[iParam0 /*84*/].f_65.f_5 == 1;

	return false;
}

void func_246(BOOL bParam0, Hash hParam1) // Position - 0x90AB (37035)
{
	Global_2699796 = hParam1;
	Global_2699795 = bParam0;
	return;
}

int func_247(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x90BF (37055)
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4515492[i /*84*/].f_65.f_2 == 0)
		{
			if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				iParam0 = i + 900;
		
			Global_4515492[i /*84*/].f_65.f_2 = 1;
			Global_4515492[i /*84*/].f_65.f_1 = iParam5;
			Global_4515492[i /*84*/].f_65.f_3 = iParam1;
			Global_4515492[i /*84*/].f_65.f_4 = hParam2;
			Global_4515492[i /*84*/].f_65.f_7 = hParam3;
			Global_4515492[i /*84*/].f_65.f_5 = 0;
			Global_4515492[i /*84*/].f_65 = iParam0;
			Global_4515492[i /*84*/].f_65.f_6 = hParam4;
			Global_4515492[i /*84*/].f_65.f_11 = iParam8;
			Global_4515492[i /*84*/].f_65.f_10 = iParam7;
			Global_4515492[i /*84*/].f_65.f_13 = iParam9;
			Global_4515492[i /*84*/].f_65.f_12 = 0;
			Global_4515492[i /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4515492[i /*84*/].f_65.f_18 = 0;
			Global_4516963 = false;
		
			if (bParam6)
				Global_4515492[i /*84*/].f_65.f_5 = 1;
		
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
				func_248(Global_4515492[i /*84*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_248(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84) // Position - 0x91FC (37372)
{
	Hash eventData;
	int playerBits;

	if (iParam84 < 0)
		return;

	eventData.f_3 = 2147483647;
	eventData = -710178565;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = { uParam0.f_65 };
	eventData.f_3.f_32 = iParam84;
	playerBits = func_249(eventData.f_1);

	if (Global_262145.f_23804 && !Global_262145.f_23805)
		return;

	if (!(playerBits == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 36, playerBits, eventData);

	return;
}

int func_249(Player plParam0) // Position - 0x927F (37503)
{
	var address;

	if (func_211(plParam0))
		MISC::SET_BIT(&address, plParam0);

	return address;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x929A (37530)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

int func_251(eCharacter echParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x92B1 (37553)
{
	if (func_284(echParam0) == 3)
		return 0;

	if (func_284(echParam0) == 4)
		return 0;

	return func_252(func_284(echParam0), 0, iParam1, epctParam2, false);
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x92E5 (37605)
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_283();

	if (iParam3 < PV_COMP_BERD)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_282(99, 1);
					func_281(joaat("SP0_MONEY_TOTAL_SPENT") /* TUNEABLE: SP0_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 1:
					func_281(joaat("SP1_MONEY_TOTAL_SPENT") /* TUNEABLE: SP1_MONEY_TOTAL_SPENT */, iParam3);
					break;
			
				case 2:
					func_281(joaat("SP2_MONEY_TOTAL_SPENT") /* TUNEABLE: SP2_MONEY_TOTAL_SPENT */, iParam3);
					break;
			}
		
			func_267(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_265(5))
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
							func_281(joaat("SP0_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 1:
							func_281(joaat("SP1_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					
						case 2:
							func_281(joaat("SP2_MONEY_SPENT_ON_TATTOOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TATTOOS */, iParam3);
							break;
					}
				
					if (func_265(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_281(joaat("SP0_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP0_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 1:
							func_281(joaat("SP1_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP1_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					
						case 2:
							func_281(joaat("SP2_MONEY_SPENT_ON_TAXIS") /* TUNEABLE: SP2_MONEY_SPENT_ON_TAXIS */, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_281(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP0_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 1:
							func_281(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP1_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
							break;
					
						case 2:
							func_281(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS") /* TUNEABLE: SP2_MONEY_SPENT_IN_STRIP_CLUBS */, iParam3);
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
							func_281(joaat("SP0_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP0_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 1:
							func_281(joaat("SP1_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP1_MONEY_SPENT_PROPERTY */, iParam3);
							break;
					
						case 2:
							func_281(joaat("SP2_MONEY_SPENT_PROPERTY") /* TUNEABLE: SP2_MONEY_SPENT_PROPERTY */, iParam3);
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
									func_281(joaat("SP0_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP0_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 1:
									func_281(joaat("SP1_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP1_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							
								case 2:
									func_281(joaat("SP2_MONEY_SPENT_IN_CLOTHES") /* TUNEABLE: SP2_MONEY_SPENT_IN_CLOTHES */, iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_281(joaat("SP0_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP0_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 1:
									func_281(joaat("SP1_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP1_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							
								case 2:
									func_281(joaat("SP2_MONEY_SPENT_ON_HAIRDOS") /* TUNEABLE: SP2_MONEY_SPENT_ON_HAIRDOS */, iParam3);
									break;
							}
						
							if (func_265(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_281(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP0_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 1:
									func_281(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP1_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							
								case 2:
									func_281(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS") /* TUNEABLE: SP2_MONEY_SPENT_IN_BUYING_GUNS */, iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_281(joaat("SP0_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP0_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 1:
									func_281(joaat("SP1_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP1_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							
								case 2:
									func_281(joaat("SP2_MONEY_SPENT_CAR_MODS") /* TUNEABLE: SP2_MONEY_SPENT_CAR_MODS */, iParam3);
									break;
							}
						
							func_264(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_282(95, iParam3);
					break;
			
				case 1:
					func_282(97, iParam3);
					break;
			
				case 2:
					func_282(96, iParam3);
					break;
			}
		
			func_282(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = BUILTIN::FLOOR(num * BUILTIN::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_255(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_255(num2);
	}

	num6 = Global_62254[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_62254[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_62254[num3] = 2147483647;
				else
					Global_62254[num3] = Global_62254[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_281(joaat("SP0_TOTAL_CASH_EARNED") /* TUNEABLE: SP0_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 1:
					func_281(joaat("SP1_TOTAL_CASH_EARNED") /* TUNEABLE: SP1_TOTAL_CASH_EARNED */, iParam3);
					break;
			
				case 2:
					func_281(joaat("SP2_TOTAL_CASH_EARNED") /* TUNEABLE: SP2_TOTAL_CASH_EARNED */, iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_62254[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_62254[num3];
			Global_62254[num3] = Global_62254[num3] - iParam3;
		
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
		Global_114990.f_20573.f_233[num3 /*69*/].f_2[Global_114990.f_20573.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_114990.f_20573.f_233[num3 /*69*/].f_2[Global_114990.f_20573.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114990.f_20573.f_233[num3 /*69*/].f_2[Global_114990.f_20573.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114990.f_20573.f_233[num3 /*69*/] = Global_114990.f_20573.f_233[num3 /*69*/] + 1;
		Global_114990.f_20573.f_233[num3 /*69*/].f_1 = Global_114990.f_20573.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_114990.f_20573.f_233[num3 /*69*/].f_1 > 10)
			Global_114990.f_20573.f_233[num3 /*69*/].f_1 = 0;
	}

	func_254(iParam0);

	if (Global_44938 == 15)
		func_253(false);

	return 1;
}

void func_253(BOOL bParam0) // Position - 0x98E4 (39140)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/];
			Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_114990.f_20573.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_62262[i /*3*/][0] = Global_114990.f_20573[i];
		Global_62262.f_31[i /*3*/][0] = Global_114990.f_20573.f_11[i];
		Global_62262.f_62[i /*3*/][0] = Global_114990.f_20573.f_22[i];
		Global_62262.f_93[i /*3*/][0] = Global_114990.f_20573.f_33[i];
		Global_62262.f_124[i /*3*/][0] = Global_114990.f_20573.f_44[i];
		Global_62262.f_155[i /*3*/][0] = Global_114990.f_20573.f_55[i];
		Global_62262.f_186[i /*3*/][0] = Global_114990.f_20573.f_66[i];
		Global_62262.f_217[i /*3*/][0] = Global_114990.f_20573.f_77[i];
		Global_62262.f_248[i /*3*/][0] = Global_114990.f_20573.f_88[i];
	
		if (!bParam0)
		{
			Global_62262[i /*3*/][1] = Global_114990.f_20573[i];
			Global_62262.f_31[i /*3*/][1] = Global_114990.f_20573.f_11[i];
			Global_62262.f_62[i /*3*/][1] = Global_114990.f_20573.f_22[i];
			Global_62262.f_93[i /*3*/][1] = Global_114990.f_20573.f_33[i];
			Global_62262.f_124[i /*3*/][1] = Global_114990.f_20573.f_44[i];
			Global_62262.f_155[i /*3*/][1] = Global_114990.f_20573.f_55[i];
			Global_62262.f_186[i /*3*/][1] = Global_114990.f_20573.f_66[i];
			Global_62262.f_217[i /*3*/][1] = Global_114990.f_20573.f_77[i];
			Global_62262.f_248[i /*3*/][1] = Global_114990.f_20573.f_88[i];
		}
	}

	return;
}

void func_254(int iParam0) // Position - 0x9B66 (39782)
{
	int value;

	value = Global_62254[iParam0];

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

void func_255(int iParam0) // Position - 0x9BC0 (39872)
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
		func_141(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_141(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_141(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_141(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_141(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_141(8277, 0, -1, true);
		return;
	}

	if (func_263(iParam0))
	{
		func_141(func_262(iParam0), 0, -1, true);
		return;
	}

	if (func_261(iParam0))
	{
		num = _MPPLY_STAT_GET_INT(func_260(iParam0));
		_MPPLY_STAT_SET_INT(func_260(iParam0), num - 1);
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
		if (IS_BIT_SET(Global_114990.f_20573.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_114990.f_20573.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_114990.f_20573.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_257() /*5574*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_114990.f_20573.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_257() /*5574*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*Canjeaste tu promoción de ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_256(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_256(int iParam0) // Position - 0x9D8C (40332)
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
	
		case 39:
			return "COUPON_CAR_GEN9_MIGRATION";
	
		default:
			if (func_263(iParam0))
				return "HSW_COUP" /*Un repintado, pintura de diseño o alerón de vehículo gratis.*/;
		
			if (func_261(iParam0))
				return "HSWU_COUP" /*Una mejora de Hao's Special Works gratis.*/;
			break;
	}

	return "";
}

int func_257() // Position - 0x9EBF (40639)
{
	int num;

	num = 0;
	return num;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x9ECC (40652)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x9EE8 (40680)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_260(int iParam0) // Position - 0x9F06 (40710)
{
	switch (iParam0)
	{
		case 38:
			return joaat("MPPLY_DISCOUNT_HSW_UPGRADE") /* TUNEABLE: MPPLY_DISCOUNT_HSW_UPGRADE */;
	
		default:
		
	}

	return joaat("MPPLY_DISCOUNT_HSW_UPGRADE") /* TUNEABLE: MPPLY_DISCOUNT_HSW_UPGRADE */;
}

BOOL func_261(int iParam0) // Position - 0x9F28 (40744)
{
	switch (iParam0)
	{
		case 38:
			return true;
	}

	return false;
}

int func_262(int iParam0) // Position - 0x9F45 (40773)
{
	switch (iParam0)
	{
		case 18:
			return 16767;
	
		case 19:
			return 16768;
	
		case 20:
			return 16769;
	
		case 21:
			return 16770;
	
		case 22:
			return 16771;
	
		case 23:
			return 16772;
	
		case 24:
			return 16773;
	
		case 25:
			return 16774;
	
		case 26:
			return 16775;
	
		case 27:
			return 16776;
	
		case 28:
			return 16777;
	
		case 29:
			return 16778;
	
		case 30:
			return 16779;
	
		case 31:
			return 16780;
	
		case 32:
			return 16781;
	
		case 33:
			return 16782;
	
		case 34:
			return 16783;
	
		case 35:
			return 16784;
	
		case 36:
			return 16785;
	
		case 37:
			return 16786;
	}

	return 16767;
}

BOOL func_263(int iParam0) // Position - 0xA04A (41034)
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

void func_264(ePedComponentType epctParam0) // Position - 0xA0D9 (41177)
{
	func_282(93, epctParam0);
	func_282(29, epctParam0);
	func_282(30, epctParam0);
	return;
}

BOOL func_265(int iParam0) // Position - 0xA0F9 (41209)
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
		num = func_145(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_145(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_145(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_145(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_145(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_145(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (func_263(iParam0))
	{
		cloudTimeAsInt7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num7 = func_145(func_262(iParam0), -1);
	
		if (num7 == 0 || cloudTimeAsInt7 >= num7)
			return false;
	
		return true;
	}

	if (func_261(iParam0))
	{
		num8 = _MPPLY_STAT_GET_INT(func_260(iParam0));
	
		if (num8 <= 0)
			return false;
	
		return true;
	}

	if (iParam0 == 39)
		return _STAT_GET_PACKED_BOOL(7332, -1);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_114990.f_20573.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_257() /*5574*/].f_681.f_10, iParam0);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0xA304 (41732)
{
	if (iParam1 == -1)
		iParam1 = func_144();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_267(BOOL bParam0) // Position - 0xA320 (41760)
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
		func_158(27, value);
	}

	if (value < 200000000)
		return 0;

	func_268(27, 1);
	return 1;
}

int func_268(int iParam0, int iParam1) // Position - 0xA3D7 (41943)
{
	if (iParam0 >= 78)
		return 0;

	return func_269(iParam0, iParam1);
}

int func_269(int iParam0, int iParam1) // Position - 0xA3F2 (41970)
{
	if (func_574(14) && !func_280(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_34083 != 0 && !Global_80362)
		return 0;

	if (func_279(&Global_4525223))
	{
		if (func_277(&Global_4525223, iParam0))
			return 0;
	
		if (func_270(&Global_4525223, iParam0))
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

BOOL func_270(var uParam0, int iParam1) // Position - 0xA48F (42127)
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_574(14) && !func_280(iParam1))
		return false;

	if (func_277(uParam0, iParam1))
		return false;

	if (func_276(uParam0) < 0f)
		func_275(uParam0, 0);

	func_273(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_271(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_271(var uParam0, int iParam1) // Position - 0xA540 (42304)
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_574(14) && !func_280(iParam1))
		return 0;

	if (func_277(uParam0, iParam1))
		return 0;

	if (func_276(uParam0) < 0f)
		func_275(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_272(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_272(var uParam0, int iParam1) // Position - 0xA5BB (42427)
{
	return uParam0->[iParam1] == 78;
}

void func_273(var uParam0) // Position - 0xA5CC (42444)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_274(uParam0, i);
	}

	func_275(uParam0, Global_4525222 - 0.5f);
	return;
}

void func_274(var uParam0, int iParam1) // Position - 0xA600 (42496)
{
	uParam0->[iParam1] = 78;
	return;
}

void func_275(var uParam0, int iParam1) // Position - 0xA610 (42512)
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_276(var uParam0) // Position - 0xA62D (42541)
{
	return uParam0->f_80;
}

BOOL func_277(var uParam0, int iParam1) // Position - 0xA639 (42553)
{
	return func_278(uParam0, iParam1) != -1;
}

int func_278(var uParam0, int iParam1) // Position - 0xA64B (42571)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_279(var uParam0) // Position - 0xA678 (42616)
{
	return uParam0->f_79 == 1;
}

BOOL func_280(int iParam0) // Position - 0xA686 (42630)
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

void func_281(Hash hParam0, int iParam1) // Position - 0xA6D6 (42710)
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_282(int iParam0, ePedComponentType epctParam1) // Position - 0xA6F9 (42745)
{
	int outValue;

	if (epctParam1 < 1)
		return;

	if (Global_60822[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60822[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60822[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + epctParam1;
		STATS::STAT_SET_INT(Global_60822[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_283() // Position - 0xA756 (42838)
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH") /* TUNEABLE: SP0_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62254[0] == outValue))
			Global_62254[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH") /* TUNEABLE: SP1_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62254[1] == outValue))
			Global_62254[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH") /* TUNEABLE: SP2_TOTAL_CASH */, &outValue, -1);
	
		if (!(Global_62254[2] == outValue))
			Global_62254[2] = outValue;
	}

	return;
}

int func_284(eCharacter echParam0) // Position - 0xA7CB (42955)
{
	return Global_2349[echParam0 /*29*/].f_17;
}

ePedComponentType func_285() // Position - 0xA7DC (42972)
{
	if (func_573())
		return func_287(PLAYER::PLAYER_ID());

	return _GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER());
}

ePedComponentType _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0xA801 (43009)
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

ePedComponentType func_287(Player plParam0) // Position - 0xA859 (43097)
{
	int num;

	num = func_288(plParam0);
	return num;
}

int func_288(Player plParam0) // Position - 0xA86B (43115)
{
	if (plParam0 > -1)
		if (plParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_289(plParam0))
			return Global_1845347[plParam0 /*884*/].f_198.f_3;
		else
			return 0;

	return 0;
}

BOOL func_289(Player plParam0) // Position - 0xA8AE (43182)
{
	if (!func_211(plParam0))
		return false;

	return IS_BIT_SET(Global_2673276.f_1, plParam0);
}

void func_290(BOOL bParam0) // Position - 0xA8CD (43213)
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}

	return;
}

void func_291() // Position - 0xA8EA (43242)
{
	Global_24447.f_5 = 0;
	return;
}

void func_292(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0xA8F8 (43256)
{
	ePedComponentType i;
	int num;

	Global_24586.f_6342 = epctParam0;
	Global_24586.f_6477 = iParam2;

	if (Global_24586.f_6342 < Global_24586.f_6341)
	{
		Global_24586.f_6341 = Global_24586.f_6342;
	}
	else if (Global_24586.f_6332 && Global_24586.f_6342 > Global_24586.f_6343 || !Global_24586.f_6332 && Global_24586.f_6342 >= Global_24586.f_6341 + Global_24586.f_5828)
	{
		for (i = Global_24586.f_6341; i <= Global_24586.f_6342; i = i + 1)
		{
			if (i >= PV_COMP_HEAD && i < 127)
				if (Global_24586.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_24586.f_5828 && Global_24586.f_6341 < 128)
		{
			Global_24586.f_6341 = Global_24586.f_6341 + 1;
			num = 0;
		
			for (i = Global_24586.f_6341; i <= Global_24586.f_6342; i = i + 1)
			{
				if (i >= PV_COMP_HEAD && i < 127)
					if (Global_24586.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_24586.f_6331 = 0;
	Global_24586.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4521274.f_21), "", 16);
	}

	return;
}

void func_293() // Position - 0xAA4A (43594)
{
	if (epctLocal_87 == epctLocal_88)
	{
		iLocal_314 = 3;
	}
	else
	{
		iLocal_315 = uLocal_306[epctLocal_87];
		func_294();
	
		if (iLocal_315 == 0)
		{
			func_88("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_314 = 0;
		}
		else if (iLocal_315 == 1)
		{
			func_88("PROSTITUTES_SEX_SCENE");
			iLocal_314 = 1;
		}
		else if (iLocal_315 == 2)
		{
			func_88("PROSTITUTES_SEX_SCENE");
			iLocal_314 = 2;
		}
	}

	return;
}

void func_294() // Position - 0xAAB8 (43704)
{
	switch (iLocal_315)
	{
		case 0:
			func_296();
			break;
	
		case 1:
		case 2:
			func_295();
			break;
	}

	return;
}

void func_295() // Position - 0xAAE8 (43752)
{
	iLocal_63 = iLocal_63 + 1;
	bLocal_64 = true;
	return;
}

void func_296() // Position - 0xAAF9 (43769)
{
	iLocal_62 = iLocal_62 + 1;
	bLocal_64 = true;
	return;
}

BOOL func_297() // Position - 0xAB0A (43786)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (Global_4521350 > PV_COMP_INVALID)
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;

	return false;
}

int func_298(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0xAB31 (43825)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4521350 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4521350 = PV_COMP_INVALID;
			return 0;
		}
	}

	if (Global_4521350 > PV_COMP_INVALID || Global_4521350 == -3 || Global_4521350 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4521350 == PV_COMP_INVALID && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4521350 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}

	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_299(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAC11 (44049)
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	int num7;
	int num8;
	int num9;
	int num10;

	num3 = 0.034722f / 2f;
	num10 = -1;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		Global_4521350 = PV_COMP_INVALID;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_24583;
	x2 = x + Global_24585;
	y2 = Global_24586.f_6333;
	y = Global_24586.f_6333 - ((float)Global_24586.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_24586.f_6335 < 1)
		y = Global_24586.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_305();

	if (Global_4521350 == -6)
		return;

	Global_4521350 = PV_COMP_INVALID;
	num4 = Global_4521344;
	num5 = Global_4521345;

	if (Global_24586.f_6336 > Global_24586.f_6335)
	{
		if (Global_4521344 >= x && Global_4521344 <= x2 && Global_4521345 >= y2 && Global_4521345 < y2 + num3)
		{
			Global_4521350 = -2;
		
			if (bParam3)
				func_304(false);
		
			return;
		}
	
		if (Global_4521344 >= x && Global_4521344 <= x2 && Global_4521345 >= y2 + num3 && Global_4521345 < y2 + 0.034722f)
		{
			Global_4521350 = -3;
		
			if (bParam3)
				func_304(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = BUILTIN::FLOOR(num6 / 0.034722f);
	
		if (Global_24586.f_6336 == -1)
		{
			Global_4521350 = PV_COMP_HEAD;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_24586.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_300(num, num2 + ((float)num10 * 0.034722f), Global_24585, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4521350 = Global_24586.f_8865[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4521350 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4521350 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4521350 = -4;
		return;
	}

	Global_4521350 = PV_COMP_INVALID;
	return;
}

void func_300(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xAEBD (44733)
{
	GRAPHICS::DRAW_RECT(func_301(fParam0 + (iParam2 * 0.5f)), fParam1 + (fParam3 * 0.5f), func_301(iParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

float func_301(float fParam0) // Position - 0xAEF4 (44788)
{
	fParam0 = fParam0 * func_302();
	return fParam0;
}

float func_302() // Position - 0xAF07 (44807)
{
	return 1.7777778f / func_303();
}

float func_303() // Position - 0xAF19 (44825)
{
	return Global_24586.f_9245;
}

void func_304(BOOL bParam0) // Position - 0xAF27 (44839)
{
	float num;
	float num2;
	float num3;
	int num4;

	num3 = 0.034722f / 2f;

	if (bParam0)
		num4 = 48;
	else
		num4 = 210;

	num = Global_24583;
	num2 = Global_24586.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4521350 == -2)
		func_300(num, num2, Global_24585, num3, 255, 255, 255, num4);
	else if (Global_4521350 == -3)
		func_300(num, num2 + num3, Global_24585, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_305() // Position - 0xAFB0 (44976)
{
	Global_4521346 = Global_4521344;
	Global_4521347 = Global_4521345;
	Global_4521344 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4521345 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4521348 = Global_4521344 - Global_4521346;
	Global_4521349 = Global_4521345 - Global_4521347;
	return;
}

void func_306(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xAFF8 (45048)
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if ((float)*uParam0 == 0f && (float)*uParam1 == 0f)
		{
			*uParam0 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
			*uParam1 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
		}
	
		if ((float)*uParam2 == 0f && (float)*uParam3 == 0f)
		{
			*uParam2 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
			*uParam3 = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
		}
	}

	return;
}

void func_307(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0xB0CD (45261)
{
	int num;
	int r;
	int g;
	int b;
	int a;
	int i;
	ePedComponentType numberOfLinesForString;
	ePedComponentType j;
	int k;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int l;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	BOOL flag;
	BOOL flag2;
	float num24;
	float num25;
	float num26;
	float num27;
	float textureResolution;
	BOOL flag3;
	float x;
	float num28;
	float num29;
	float num30;
	float num31;
	int num32;
	int num33;
	int num34;
	int num35;
	float num36;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float num37;
	float num38;
	float num39;
	float num40;
	var unk3;
	var unk4;
	float num41;
	var unk5;
	var unk21;
	float num42;
	float size;
	float size2;
	ePedComponentType type;
	float num43;
	float num44;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num45;
	var text;
	float value;
	float value2;
	float num46;
	float num47;
	float num48;

	if (!func_348(&num, false, iParam1))
		return;

	num == -1;

	if (!func_346(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num38 = 0f;

	if (Global_24586)
		if (func_344(30, true, true, &num26, &num27, bParam7))
			num39 = num27 / num26;
		else
			Global_24586 = false;

	if (iParam5 == -1f)
		iParam5 = Global_24585;

	num38 = iParam5 * num39;

	if (MISC::GET_HASH_KEY(&(Global_24586.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num40 = Global_24584;
	else
		num40 = Global_24584 + num38 + 0.034722f + 0f;

	num41 = 1f;
	func_342(bParam7, &unk3, &unk4, &num41);

	if (bParam3)
	{
		if (Global_24586.f_5821 <= PV_COMP_BERD)
		{
			func_338(Global_24586.f_5821 + 1, "DFLT_MNU_OPT" /*Salir*/, 0, true, false, false, false);
			Global_24586.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_24586.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_24586.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num36 = Global_24584;
			}
			else
			{
				if (Global_24586)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk5, func_337(30), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk21, func_334(30, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_24586.f_7744[30 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_300(Global_24583, Global_24584, iParam5, num38, 0, 0, 0, 255);
						func_333(&unk5, &unk21, Global_24583 + (iParam5 * 0.5f), Global_24584 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						func_333(&unk5, &unk21, Global_24583 + (iParam5 * 0.5f), Global_24584 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_24586.f_9214)
				{
					r = Global_24586.f_9210;
					g = Global_24586.f_9211;
					b = Global_24586.f_9212;
					a = Global_24586.f_9213;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_300(Global_24583, Global_24584 + num38, iParam5, 0.034722f, r, g, b, a);
				num36 = Global_24584 + num38 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_24586.f_1)) != 0)
				{
					func_332();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24586.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_24586.f_74; l = l + 1)
					{
						if (Global_24586.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_24586.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_14[num8], Global_24586.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_24586.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24586.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24586.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24586.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24586.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24586.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					func_331(Global_24583 + 0.00390625f, Global_24584 + num38 + 0.00416664f, 0);
				}
			
				if (Global_24586.f_6338)
				{
					func_332();
					func_329((Global_24583 + iParam5) - 0.00390625f - func_330("CM_ITEM_COUNT" /*~1~/~1~*/, Global_24586.f_6339, Global_24586.f_6340), Global_24584 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~/~1~*/, Global_24586.f_6339, Global_24586.f_6340);
				}
				else if (Global_24586.f_6334 > Global_24586.f_5828)
				{
					if (Global_24586.f_6337 != 0)
					{
						func_332();
						func_329((Global_24583 + iParam5) - 0.00390625f - func_330("CM_ITEM_COUNT" /*~1~/~1~*/, Global_24586.f_6337, Global_24586.f_6336), Global_24584 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~/~1~*/, Global_24586.f_6337, Global_24586.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_24586.f_6341;
			num2 = 0;
			num42 = num36;
		
			if (Global_24586.f_9224)
			{
				r = Global_24586.f_9220;
				g = Global_24586.f_9221;
				b = Global_24586.f_9222;
				a = Global_24586.f_9223;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_24586.f_5828 && numberOfLinesForString <= Global_24586.f_5821)
			{
				if (numberOfLinesForString >= PV_COMP_HEAD)
				{
					if (Global_24586.f_6088[numberOfLinesForString])
					{
						if (Global_24586.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_24586.f_6341)
							num36 = num36 + 0.00277776f;
					
						num37 = 0.034722f;
					
						if (Global_24586.f_6348[numberOfLinesForString] != 0f)
							num37 = Global_24586.f_6348[numberOfLinesForString];
					
						num36 = num36 + num37;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			func_333("CommonMenu", "Gradient_Bgd", Global_24583 + (iParam5 * 0.5f), (num42 + ((num36 - num42) * 0.5f)) - 0.00138888f, iParam5, num36 - num42, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_24586.f_6334 > Global_24586.f_5828)
			{
				if (Global_24586.f_9229)
				{
					r = Global_24586.f_9225;
					g = Global_24586.f_9226;
					b = Global_24586.f_9227;
					a = Global_24586.f_9228;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_300(Global_24583, num36 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num41);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num41);
			
				if (Global_24586.f_9242)
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
				}
			
				func_333("CommonMenu", "shop_arrows_upANDdown", Global_24583 + (iParam5 * 0.5f), num36 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num41, (textureResolution.f_1 / 720f) * num41, 0f, r, g, b, a, false, 0);
				num36 = num36 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_24586.f_5241)) != 0 && Global_24586.f_5323 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24583 + 0.0046875f;
			
				if (Global_24586.f_5325 != 0)
				{
					func_344(Global_24586.f_5325, true, true, &num26, &num27, bParam7);
					x = (Global_24583 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_328(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24586.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24586.f_5319; l = l + 1)
				{
					if (Global_24586.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24586.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_5262[num8], Global_24586.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24586.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_300(Global_24583, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24586.f_9234)
				{
					r = Global_24586.f_9230;
					g = Global_24586.f_9231;
					b = Global_24586.f_9232;
					a = Global_24586.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_333("CommonMenu", "Gradient_Bgd", Global_24583 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_328(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24586.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24586.f_5319; l = l + 1)
				{
					if (Global_24586.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24586.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_5262[num8], Global_24586.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24586.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				func_331(x, num36 + 0.00277776f, 0);
			
				if (Global_24586.f_5325 != 0)
				{
					func_344(Global_24586.f_5325, true, true, &num26, &num27, bParam7);
					func_327(Global_24586.f_5325, true, &num32, &num33, &num34, &num35);
					func_333(func_337(Global_24586.f_5325), func_334(Global_24586.f_5325, true), Global_24583 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24586.f_5247)))
				{
					num36 = num36 + (0.00138888f * 6f);
					func_328(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24586.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24586.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_300(Global_24583, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_24586.f_9234)
					{
						r = Global_24586.f_9230;
						g = Global_24586.f_9231;
						b = Global_24586.f_9232;
						a = Global_24586.f_9233;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					func_333("CommonMenu", "Gradient_Bgd", Global_24583 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_328(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24586.f_5247));
					func_331(x, num36 + 0.00277776f, 0);
					num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_24586.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_24586.f_5324 > Global_24586.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_5241), "", 24);
						Global_24586.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24586.f_5247)))
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24583 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24586.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_328(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24586.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24586.f_5319; l = l + 1)
				{
					if (Global_24586.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24586.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_5262[num8], Global_24586.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24586.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24586.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24586.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_300(Global_24583, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24586.f_9234)
				{
					r = Global_24586.f_9230;
					g = Global_24586.f_9231;
					b = Global_24586.f_9232;
					a = Global_24586.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_333("CommonMenu", "Gradient_Bgd", Global_24583 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_328(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24586.f_5247));
				func_331(x, num36 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4521274.f_21)) != 0 && Global_4521274.f_65 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24583 + 0.0046875f;
			
				if (Global_4521274.f_67 != 0)
				{
					func_344(Global_4521274.f_67, true, true, &num26, &num27, bParam7);
					x = (Global_24583 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_328(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4521274.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4521274.f_61; l = l + 1)
				{
					if (Global_4521274.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521274.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4521274.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521274.f_34[num8], Global_4521274.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4521274.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_300(Global_24583, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24586.f_9234)
				{
					r = Global_24586.f_9230;
					g = Global_24586.f_9231;
					b = Global_24586.f_9232;
					a = Global_24586.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_333("CommonMenu", "Gradient_Bgd", Global_24583 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_328(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4521274.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4521274.f_61; l = l + 1)
				{
					if (Global_4521274.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521274.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4521274.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521274.f_34[num8], Global_4521274.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4521274.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4521274.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4521274.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				func_331(x, num36 + 0.00277776f, 0);
			
				if (Global_4521274.f_67 != 0)
				{
					func_344(Global_4521274.f_67, true, true, &num26, &num27, bParam7);
					func_327(Global_4521274.f_67, true, &num32, &num33, &num34, &num35);
					func_333(func_337(Global_4521274.f_67), func_334(Global_4521274.f_67, true), Global_24583 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4521274.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4521274.f_66 > Global_4521274.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4521274.f_21), "", 16);
						Global_4521274.f_65 = -1;
					}
				}
			}
		
			func_320(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_24586.f_6331)
		{
			num11 = 0;
			num15 = 0;
			num12 = 0;
			num13 = 0;
			num14 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			num5 = 0;
			num6 = 0;
			type = Global_24586.f_5821;
		
			if (Global_24586.f_6332)
				type = Global_24586.f_6335 - 1;
		
			num43 = 0f;
			num44 = 0f;
		
			for (j = PV_COMP_HEAD; j <= type; j = j + 1)
			{
				num37 = 0.034722f;
			
				if (Global_24586.f_6348[numberOfLinesForString] != 0f)
					num37 = Global_24586.f_6348[numberOfLinesForString];
			
				if (Global_24586.f_6332)
					numberOfLinesForString = Global_24586.f_8865[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_24586.f_6341 && num2 < Global_24586.f_5828)
				{
					flag2 = true;
				
					if (Global_24586.f_6342 == numberOfLinesForString)
						num44 = num43;
				
					if (Global_24586.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					num25 = num40 + num43 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_24586.f_6482[numberOfLinesForString] = num25;
				num24 = Global_24583 + 0.0046875f;
				flag3 = false;
				flag = Global_24586.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_24586.f_9236)
						HUD::GET_HUD_COLOUR(Global_24586.f_9235, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					func_333("CommonMenu", "Gradient_Nav", Global_24583 + (iParam5 * 0.5f), num40 + num44 + (0.00277776f * (float)num5) + (num37 * 0.5f), iParam5, num37, 0f, r2, g2, b2, a2, false, 0);
					Global_24586.f_6480 = num25;
				}
			
				for (k = 0; k < Global_24586.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_24586.f_5692[numberOfLinesForString], k) || Global_24586.f_5659[k] == 5)
					{
						if (Global_24586.f_6332)
						{
							num11 = Global_24586.f_8881[(num2 * Global_24586.f_5829) + k];
							num12 = Global_24586.f_8922[(num2 * Global_24586.f_5829) + k];
							num13 = Global_24586.f_8963[(num2 * Global_24586.f_5829) + k];
							num14 = Global_24586.f_9004[(num2 * Global_24586.f_5829) + k];
							num15 = Global_24586.f_9045[(num2 * Global_24586.f_5829) + k];
						}
						else
						{
							Global_24586.f_8881[(num2 * Global_24586.f_5829) + k] = num11;
							Global_24586.f_8922[(num2 * Global_24586.f_5829) + k] = num12;
							Global_24586.f_8963[(num2 * Global_24586.f_5829) + k] = num13;
							Global_24586.f_9004[(num2 * Global_24586.f_5829) + k] = num14;
							Global_24586.f_9045[(num2 * Global_24586.f_5829) + k] = num15;
						}
					
						num45 = 0;
						flag7 = false;
					
						if (Global_24586.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24586.f_6611[0])
							{
								flag7 = true;
								num45 = 0;
							}
						}
					
						if (Global_24586.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24586.f_6611[1])
							{
								flag7 = true;
								num45 = 1;
							}
						}
					
						if (Global_24586.f_5665[k] != -1f)
							num24 = Global_24583 + 0.0046875f + Global_24586.f_5665[k];
					
						if (k < 4 && Global_24586.f_5665[k + 1] != -1f && num24 < Global_24586.f_5665[k + 1])
							num31 = Global_24586.f_5665[k + 1] - num24;
						else
							num31 = (Global_24583 + Global_24585) - 0.0046875f - num24;
					
						if (Global_24586.f_5678[k] && Global_24586.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_24586.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_24586.f_6332)
									{
										num28 = 0f;
										num29 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_24586.f_2387[num16 /*5*/][l] == 5 || Global_24586.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_24586.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_24586.f_2130[num16])
												flag5 = true;
										
											func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, num45, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_24586.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24586.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697654[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_4726[num13 + num19], Global_24586.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_24586.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0)
											num28 = func_314(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_344(Global_24586.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													num29 = num29 + num26;
												
													if (l > 0)
														num29 = num29 - (0.00078125f * 4f);
												
													if (Global_24586.f_4984[num14 + l] == 2 || Global_24586.f_4984[num14 + l] == 56 || Global_24586.f_4984[num14 + l] == 66)
														num29 = num29 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_24586.f_5686[k] == 2)
											x = x + (num31 - (num28 + num29)) + (0.00078125f * 1f);
										else if (Global_24586.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - ((num28 + num29) * 0.5f));
									
										Global_24586.f_9086[(num2 * Global_24586.f_5829) + k] = x;
										Global_24586.f_9127[(num2 * Global_24586.f_5829) + k] = num28;
										Global_24586.f_9168[(num2 * Global_24586.f_5829) + k] = num29;
									
										if (Global_24586.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_24586.f_5686[m] == 2)
													Global_24586.f_9086[(num2 * Global_24586.f_5829) + m] = Global_24586.f_9086[(num2 * Global_24586.f_5829) + m] - Global_24586.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_24586.f_9086[(num2 * Global_24586.f_5829) + k];
										num28 = Global_24586.f_9127[(num2 * Global_24586.f_5829) + k];
										num29 = Global_24586.f_9168[(num2 * Global_24586.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_344(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24586.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_344(27, true, true, &num26, &num27, bParam7))
											{
												func_327(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(27), func_334(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_344(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_344(28, true, true, &num26, &num27, bParam7))
											{
												func_327(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(28), func_334(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24586.f_2387[num16 /*5*/][l] == 5 || Global_24586.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_24586.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_24586.f_2130[num16])
											flag5 = true;
									
										func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_24586.f_9240 && Global_24586.f_9241 == numberOfLinesForString)
											func_313(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_24586.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_24586.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697654[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_4726[num13 + num19], Global_24586.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_24586.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_24586.f_4984[num14 + num20] == 2 || Global_24586.f_4984[num14 + num20] == 56 || Global_24586.f_4984[num14 + num20] == 66)
											{
												if (func_344(Global_24586.f_4984[num14 + num20], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (func_344(Global_24586.f_4984[num14 + num20], flag, true, &num26, &num27, bParam7))
													{
														func_327(Global_24586.f_4984[num14 + num20], flag, &num32, &num33, &num34, &num35);
													
														if (i == 1)
															if (Global_24586.f_5686[k] == 2)
																func_333(func_337(Global_24586.f_4984[num14 + num20]), func_334(Global_24586.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_333(func_337(Global_24586.f_4984[num14 + num20]), func_334(Global_24586.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_24586.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_24586.f_5686[k] == 2)
										{
											func_331(num24 + x + (0.00078125f * 7f), num25, 0);
										}
										else
										{
											func_331(num24 + x, num25, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_24586.f_2130[num16])
														flag5 = true;
												
													func_317(false, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num46 = 0.0185f;
													num47 = 0.004f;
													num48 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num48 * 0.6f), num25 + (num46 * 0.75f), 0.0175f, 0.035f, BUILTIN::FLOOR(value), BUILTIN::FLOOR(value), BUILTIN::FLOOR(value), BUILTIN::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_6341 + num22);
													func_331(num24 - num48, num25 + num47, 0);
													num22 = num22 + 1;
												}
											}
										}
									}
								
									if (num20 > 0)
									{
										x = x + (6f * 0.00078125f);
									
										for (l = 0; l < num20; l = l + 1)
										{
											if (Global_24586.f_4984[num14 + l] != 2 && Global_24586.f_4984[num14 + l] != 56 && Global_24586.f_4984[num14 + l] != 66)
											{
												if (func_344(Global_24586.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (i == 1)
													{
														if (func_344(Global_24586.f_4984[num14 + l], flag, true, &num26, &num27, bParam7))
														{
															func_327(Global_24586.f_4984[num14 + l], flag, &num32, &num33, &num34, &num35);
														
															if (Global_24586.f_4984[num14 + l] == 31)
																func_333(func_337(Global_24586.f_4984[num14 + l]), func_334(Global_24586.f_4984[num14 + l], flag), Global_24583 + (num26 * 0.5f), (num25 + 0.00277776f + (num27 * 0.5f)) - (0.00078125f * 11f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else if (Global_24586.f_5686[k] == 2)
																func_333(func_337(Global_24586.f_4984[num14 + l]), func_334(Global_24586.f_4984[num14 + l], flag), ((num24 + x + num28) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_333(func_337(Global_24586.f_4984[num14 + l]), func_334(Global_24586.f_4984[num14 + l], flag), (num24 + x + num28) - (0.00078125f * 12f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
														}
													}
												
													x = x + (12f * 0.00078125f);
												}
											}
										}
									}
								}
							
								flag3 = true;
								num11 = num11 + 1;
							
								for (l = 0; l < 4; l = l + 1)
								{
									if (Global_24586.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_24586.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_24586.f_6332)
									{
										func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24586.f_9240 && Global_24586.f_9241 == numberOfLinesForString)
											func_313(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_4469[num12]);
										num28 = func_314(true);
										x = 0f;
									
										if (Global_24586.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24586.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24586.f_9086[(num2 * Global_24586.f_5829) + k] = x;
										Global_24586.f_9127[(num2 * Global_24586.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24586.f_9086[(num2 * Global_24586.f_5829) + k];
										num28 = Global_24586.f_9127[(num2 * Global_24586.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_344(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24586.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_344(27, true, true, &num26, &num27, bParam7))
											{
												func_327(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(27), func_334(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_344(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_344(28, true, true, &num26, &num27, bParam7))
											{
												func_327(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(28), func_334(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, false, false);
										func_311(num24 + x, num25, "NUMBER" /*~1~*/, Global_24586.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_24586.f_6332)
									{
										func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24586.f_9240 && Global_24586.f_9241 == numberOfLinesForString)
											func_313(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_4726[num13], Global_24586.f_4855[num13]);
										num28 = func_314(true);
										x = 0f;
									
										if (Global_24586.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24586.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24586.f_9086[(num2 * Global_24586.f_5829) + k] = x;
										Global_24586.f_9127[(num2 * Global_24586.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24586.f_9086[(num2 * Global_24586.f_5829) + k];
										num28 = Global_24586.f_9127[(num2 * Global_24586.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_344(27, true, false, &num26, &num27, false))
										{
											if (Global_24586.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_344(27, true, true, &num26, &num27, bParam7))
											{
												func_327(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(27), func_334(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_344(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_344(28, true, true, &num26, &num27, bParam7))
											{
												func_327(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_333(func_337(28), func_334(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									func_317(flag, Global_24586.f_1616[num16], Global_24586.f_1873[num16], flag7, 0, false, false);
									func_310(num24 + x, num25, "NUMBER" /*~1~*/, Global_24586.f_4726[num13], Global_24586.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_344(Global_24586.f_4984[num14], flag, false, &num26, &num27, bParam7))
									{
										if (!Global_24586.f_6332)
										{
											num29 = num26;
											x = 0f;
										
											if (Global_24586.f_5686[k] == 2)
												x = x + (num31 - num29) + (0.00078125f * 1f);
											else if (Global_24586.f_5686[k] == 0)
												x = x + (((num31 - num24) * 0.5f) - (num29 * 0.5f));
										
											Global_24586.f_9086[(num2 * Global_24586.f_5829) + k] = x;
											Global_24586.f_9168[(num2 * Global_24586.f_5829) + k] = num29;
										}
										else
										{
											x = Global_24586.f_9086[(num2 * Global_24586.f_5829) + k];
											num29 = Global_24586.f_9168[(num2 * Global_24586.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_344(27, true, false, &num26, &num27, bParam7))
											{
												if (Global_24586.f_5686[k] == 2)
													x = x - (num26 * 2f);
											
												num30 = num26 * 0.5f;
											
												if (func_344(27, true, true, &num26, &num27, bParam7))
												{
													func_327(27, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_333(func_337(27), func_334(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										
											if (func_344(28, true, false, &num26, &num27, bParam7))
											{
												x = x + num26;
												num30 = num26 * 0.5f;
											
												if (func_344(28, true, true, &num26, &num27, bParam7))
												{
													func_327(28, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_333(func_337(28), func_334(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_344(Global_24586.f_4984[num14], flag, true, &num26, &num27, bParam7))
											{
												func_327(Global_24586.f_4984[num14], flag, &num32, &num33, &num34, &num35);
												func_333(func_337(Global_24586.f_4984[num14]), func_334(Global_24586.f_4984[num14], flag), num24 + x + (num26 * 0.5f), (num25 - 0.00277776f) + (num37 * 0.5f), num26 * func_309(Global_24586.f_4984[num14]), num27 * func_309(Global_24586.f_4984[num14]), 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								}
							
								flag3 = true;
								num14 = num14 + 1;
								break;
						
							case 5:
								flag3 = true;
								break;
						}
					
						if (Global_24586.f_5659[k] == 5)
						{
							if (Global_24586.f_5671[k] > 0.05f)
								num24 = num24 + Global_24586.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_24586.f_5671[k];
						
							if (Global_24586.f_5678[k])
								if (func_344(27, true, true, &num26, &num27, bParam7))
									num24 = num24 - num26;
						}
					}
					else
					{
						num24 = num24 + Global_24586.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_24586.f_8865[num2] = numberOfLinesForString;
						Global_24586.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_24586.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_24586.f_6348[numberOfLinesForString] != 0f)
							num43 = num43 + Global_24586.f_6348[numberOfLinesForString];
						else
							num43 = num43 + 0.034722f;
					}
				
					if (!Global_24586.f_6331)
					{
						Global_24586.f_6088[numberOfLinesForString] = true;
					
						if (Global_24586.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_24586.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_24586.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_24586.f_6331)
			{
				Global_24586.f_6333 = num40 + num43 + (0.00277776f * (float)num5);
				Global_24586.f_6336 = num4;
				Global_24586.f_6334 = num3;
				Global_24586.f_6331 = 1;
			}
		}
	
		if (!Global_24586.f_6332)
		{
			Global_24586.f_6335 = num2;
			Global_24586.f_6332 = 1;
		}
	}

	Global_24586.f_6479 = num36;
	Global_24586.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_24586.f_6479);

	if (!Global_24586.f_9209)
		func_217(0);

	Global_24586.f_9209 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_308(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_308(int iParam0) // Position - 0xE28E (57998)
{
	Global_1679169.f_1163 = iParam0;
	return;
}

float func_309(int iParam0) // Position - 0xE29F (58015)
{
	switch (iParam0)
	{
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 40:
		case 41:
		case 39:
		case 58:
		case 48:
		case 49:
		case 50:
		case 55:
			return 0.85f;
	}

	return 1f;
}

void func_310(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0xE314 (58132)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_301(fParam0), fParam1, 0);
	return;
}

void func_311(float fParam0, float fParam1, char* sParam2, ePedComponentType epctParam3, int iParam4) // Position - 0xE337 (58167)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(epctParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_301(fParam0), fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0xE359 (58201)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_313(BOOL bParam0) // Position - 0xE36A (58218)
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_24586.f_9237[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_24586.f_9237[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

float func_314(BOOL bParam0) // Position - 0xE3B0 (58288)
{
	return func_315(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_315(float fParam0) // Position - 0xE3C2 (58306)
{
	fParam0 = fParam0 * func_316();
	return fParam0;
}

float func_316() // Position - 0xE3D5 (58325)
{
	return func_303() / 1.7777778f;
}

void func_317(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE3E7 (58343)
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_319(Global_24586.f_6614[iParam4], &r, &g, &b);
		
			if (r < 20 && g < 20 && b < 20)
			{
				if (bParam0 == false)
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			}
			else if (r > 230 && g > 230 && b > 230)
			{
				if (bParam0)
				{
					r = 0;
					g = 0;
					b = 0;
				}
			}
		
			HUD::SET_TEXT_COLOUR(r, g, b, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOWDARK, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, BUILTIN::FLOOR(255f * 0.8f));
		}
		else
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			HUD::SET_TEXT_COLOUR(r, g, b, a);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}

	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);

	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}

	func_318(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_318(float fParam0, float fParam1) // Position - 0xE595 (58773)
{
	HUD::SET_TEXT_WRAP(func_301(fParam0), func_301(fParam1));
	return;
}

void func_319(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xE5AD (58797)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
	
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
	
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
	
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
	
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
	
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
	
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
	
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
	
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
	
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
	
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
	
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
	
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
	
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
	
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
	
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
	
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
	
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
	
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
	
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
	
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
	
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
	
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
	
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
	
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
	
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
	
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}

	return;
}

void func_320(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0xE837 (59447)
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_348(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_346(bParam4, bParam8))
		return;

	if (func_325())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_323(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_24586.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_24586.f_5326; i = i + 1)
			{
				if (Global_24586.f_5625[i] != 402)
					TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24586.f_5625[i], true), 64);
				else if (Global_24586.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24586.f_5640[i], true), 64);
			}
		
			Global_24586.f_5327 = 0;
		}
	
		if (!Global_24586.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_24586.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_24586.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_24586.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_322(&Global_24586.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_24586.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_322(&Global_24586.f_5328[j /*16*/]);
					}
				
					if (Global_24586.f_5610[i] == -1)
					{
						func_321(&Global_24586.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_24586.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24586.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24586.f_5625[i] != 402 && IS_BIT_SET(Global_24586.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24586.f_5625[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4521274.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24586.f_5326);
				func_322(&Global_4521274);
			
				if (Global_4521274.f_20 == -1)
				{
					func_321(&(Global_4521274.f_16));
				}
				else
				{
					timestamp2 = Global_24586.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_24586.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24586.f_5327 = 1;
		}
	
		for (i = 0; i < Global_24586.f_5326; i = i + 1)
		{
			if (Global_24586.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24586.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4521274.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24586.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
			
				if (bParam5)
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				else
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	
		if (bParam6)
		{
			if (!Global_24586.f_9244)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_24586.f_9244 = 1;
			}
		}
		else if (Global_24586.f_9244)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_24586.f_9244 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_24586.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24586.f_6263[num /*10*/], Global_24586.f_5656, Global_24586.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24586.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_321(char* sParam0) // Position - 0xED3C (60732)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_322(char* sParam0) // Position - 0xED4E (60750)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_323(Player plParam0, int iParam1) // Position - 0xED5C (60764)
{
	BOOL flag;

	if (!func_211(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_324(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845347[plParam0 /*884*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_324(int iParam0, BOOL bParam1) // Position - 0xEDB5 (60853)
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_144();

	if (Global_1575077[num] == true)
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

BOOL func_325() // Position - 0xEDF6 (60918)
{
	var position;

	if (Global_21666.f_1 > 3)
		return true;

	if (func_326())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21611 == 0)
			if (position.f_1 > -119f)
				return true;
			else
				return false;
		else if (position.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_326() // Position - 0xEE64 (61028)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_327(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0xEE7E (61054)
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 29:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 16:
		case 4:
		case 17:
		case 27:
		case 28:
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 58:
		case 40:
		case 41:
		case 39:
		case 45:
		case 44:
		case 48:
		case 49:
		case 50:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 55:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 59:
			*piParam5 = 100;
			break;
	
		case 67:
			*piParam5 = 100;
			break;
	
		case 60:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	
		case 7:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_RED, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_328(float fParam0) // Position - 0xEFC0 (61376)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_318(fParam0, (Global_24583 + Global_24585) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_329(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0xF01F (61471)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_301(fParam0), fParam1, 0);
	return;
}

float func_330(char* sParam0, int iParam1, int iParam2) // Position - 0xF046 (61510)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_332();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_314(true);
}

void func_331(float fParam0, float fParam1, int iParam2) // Position - 0xF088 (61576)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_301(fParam0), fParam1, iParam2);
	return;
}

void func_332() // Position - 0xF09E (61598)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_24586.f_9219)
	{
		r = Global_24586.f_9215;
		g = Global_24586.f_9216;
		b = Global_24586.f_9217;
		a = Global_24586.f_9218;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_318(Global_24583 + 0.0046875f, (Global_24583 + Global_24585) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_333(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0xF128 (61736)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_301(fParam2), fParam3, func_301(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
	return;
}

char* func_334(int iParam0, BOOL bParam1) // Position - 0xF156 (61782)
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24586.f_7744[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24586.f_7744[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_335(&txdName);
		}
		else
		{
			return func_335(&Global_24586.f_7744[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 26:
			unk[0] = "MP_SpecItem_Cash";
			unk[1] = "MP_SpecItem_Cash";
			break;
	
		case 1:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 2:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 4:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 7:
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 8:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 9:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 10:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 21:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 15:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 16:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 17:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 27:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 28:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 29:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 30:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 32:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 34:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 56:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 57:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 59:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 60:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 63:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 64:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 65:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 67:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 66:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
			break;
	
		case 68:
			unk[0] = "Shop_Garage_Podium_Icon_B";
			unk[1] = "Shop_Garage_Podium_Icon_A";
			break;
	
		case 69:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 0:
			unk[0] = "";
			unk[1] = "";
			break;
	}

	if (bParam1)
		return unk[0];

	return unk[1];
}

char* func_335(char* sParam0) // Position - 0xF6BC (63164)
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0xF6C6 (63174)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_337(int iParam0) // Position - 0xF6DD (63197)
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24586.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24586.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_335(&txdName);
		}
		else
		{
			return func_335(&Global_24586.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 56)
		return "MPShopSale";

	return "CommonMenu";
}

void func_338(ePedComponentType epctParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xF752 (63314)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_24586.f_5821 > epctParam0)
		return;

	if (Global_24586.f_5821 >= 128)
		return;

	if (Global_24586.f_5823 >= 256)
		return;

	if (Global_24586.f_6346 < Global_24586.f_6344)
		return;

	if (Global_24586.f_5821 != epctParam0)
	{
		Global_24586.f_5821 = epctParam0;
		Global_24586.f_5822 = 0;
	}

	num = Global_24586.f_5659[Global_24586.f_5822];

	if (num != 1)
	{
		while (Global_24586.f_5822 < 4 && num != 1)
		{
			Global_24586.f_5822 = Global_24586.f_5822 + 1;
			num = Global_24586.f_5659[Global_24586.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_79[Global_24586.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_24586.f_1616[Global_24586.f_5823] = bParam3;
	Global_24586.f_1873[Global_24586.f_5823] = bParam4;
	Global_24586.f_2130[Global_24586.f_5823] = bParam6;
	Global_24586.f_5823 = Global_24586.f_5823 + 1;

	if (!bParam3)
		func_341(Global_24586.f_5821, true);
	else
		func_341(Global_24586.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_340(&Global_24586.f_79[Global_24586.f_5823 /*6*/]);
	
		if (Global_24586.f_5678[Global_24586.f_5822])
		{
			func_344(27, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_24586.f_5671[Global_24586.f_5822])
			Global_24586.f_5671[Global_24586.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_339(&Global_24586.f_79[Global_24586.f_5823 /*6*/]);
		
			if (num4 > Global_24586.f_6348[epctParam0])
				Global_24586.f_6348[epctParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_24586.f_5692[epctParam0], Global_24586.f_5822);
	Global_24586.f_5822 = Global_24586.f_5822 + 1;
	Global_24586.f_6347 = 1;
	Global_24586.f_6345 = Global_24586.f_5823 - 1;
	Global_24586.f_6346 = 0;
	Global_24586.f_6344 = iParam2;
	return;
}

float func_339(char* sParam0) // Position - 0xF96E (63854)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_340(char* sParam0) // Position - 0xF98A (63882)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_317(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_314(true);
}

void func_341(ePedComponentType epctParam0, BOOL bParam1) // Position - 0xF9C7 (63943)
{
	int num;

	num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(epctParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_24586.f_6618[num], epctParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_24586.f_6618[num], epctParam0 - (num * 32));

	return;
}

void func_342(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0xFA13 (64019)
{
	float num;
	float value;
	float aspectRatio;

	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(piParam1, piParam2);
		return;
	}

	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(piParam1, piParam2);
	num = BUILTIN::TO_FLOAT(*piParam1);
	value = BUILTIN::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_343(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = BUILTIN::ROUND(value * aspectRatio);
		*piParam2 = BUILTIN::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = BUILTIN::ROUND(num / *uParam3);
	*piParam2 = BUILTIN::ROUND(value / *uParam3);
	return;
}

BOOL func_343(int iParam0, int iParam1) // Position - 0xFA9B (64155)
{
	return BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_344(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0xFAB6 (64182)
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_337(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_334(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_342(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_345(iParam0) / num3;
		textureResolution = { textureResolution * { num4, num4, num4 } };
	
		if (!bParam2)
		{
			textureResolution = textureResolution - 2f;
			textureResolution.f_1 = textureResolution.f_1 - 2f;
		}
	
		if (iParam0 == 31)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 30 && MISC::GET_HASH_KEY(&Global_24586.f_7744[30 /*16*/]) == joaat("CREW_LOGO"))
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 31)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 30)
		{
			if (*uParam3 > Global_24585)
			{
				*uParam4 = *uParam4 * (Global_24585 / *uParam3);
				*uParam3 = Global_24585;
			}
		}
	
		return true;
	}

	return false;
}

float func_345(int iParam0) // Position - 0xFBE2 (64482)
{
	switch (iParam0)
	{
		case 34:
		case 4:
		case 12:
		case 32:
		case 21:
		case 16:
		case 11:
		case 13:
		case 14:
		case 33:
		case 10:
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 19:
		case 20:
		case 18:
		case 29:
		case 27:
		case 28:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 69:
		case 68:
			return 0.5f;
	
		case 66:
			return 0.8f;
	}

	return 1f;
}

BOOL func_346(BOOL bParam0, BOOL bParam1) // Position - 0xFCC8 (64712)
{
	if (Global_2673276.f_1762.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_31(8, -1) && func_347() != TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_80623 || Global_24586.f_9243 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_102563.f_1514)
		return false;

	return true;
}

eTransitionState func_347() // Position - 0xFD65 (64869)
{
	return Global_1575024;
}

BOOL func_348(var uParam0, BOOL bParam1, int iParam2) // Position - 0xFD71 (64881)
{
	var unk;
	Hash hashKey;
	int i;
	int num;

	if (iParam2 == -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	num = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_24586.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_24586.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_24586.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_349() // Position - 0xFE0E (65038)
{
	if (!func_387(iLocal_321))
	{
		iLocal_321 = func_367();
		func_358(&iLocal_321, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!func_510(iLocal_92, 2))
	{
		if (func_350(iLocal_321))
		{
			iLocal_321 = func_367();
			func_358(&iLocal_321, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			func_501(&iLocal_92, 2);
		}
	}
	else if (func_350(iLocal_321))
	{
		func_291();
		func_492(false);
	}

	return;
}

BOOL func_350(int iParam0) // Position - 0xFE88 (65160)
{
	return func_351(func_367(), iParam0);
}

BOOL func_351(int iParam0, int iParam1) // Position - 0xFE9A (65178)
{
	int num;
	int num2;

	if (!func_387(iParam1) || !func_387(iParam0))
		return 1;

	num = func_357(iParam0);
	num2 = func_357(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_356(iParam0);
	num2 = func_356(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_355(iParam0);
	num2 = func_355(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_354(iParam0);
	num2 = func_354(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_353(iParam0);
	num2 = func_353(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_352(iParam0);
	num2 = func_352(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_352(int iParam0) // Position - 0xFFA6 (65446)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_353(int iParam0) // Position - 0xFFB9 (65465)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_354(int iParam0) // Position - 0xFFCC (65484)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_355(int iParam0) // Position - 0xFFDF (65503)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_356(int iParam0) // Position - 0xFFF1 (65521)
{
	return iParam0 & 15;
}

int func_357(int iParam0) // Position - 0xFFFE (65534)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

void func_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x10022 (65570)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_357(*uParam0);
	i = func_356(*uParam0);
	num2 = func_355(*uParam0);
	j = func_354(*uParam0);
	k = func_353(*uParam0);
	l = func_352(*uParam0);

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

	for (m = func_366(i, num); num2 > m; m = func_366(i, num))
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
	func_359(uParam0, l, k, j, num2, i, num);
	return;
}

void func_359(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x101A4 (65956)
{
	func_365(uParam0, iParam1);
	func_364(uParam0, iParam2);
	func_363(uParam0, iParam3);
	func_362(uParam0, iParam5);
	func_361(uParam0, iParam4);
	func_360(uParam0, iParam6);
	return;
}

void func_360(var uParam0, int iParam1) // Position - 0x101DC (66012)
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

void func_361(var uParam0, int iParam1) // Position - 0x10262 (66146)
{
	int num;
	int num2;

	num = func_356(*uParam0);
	num2 = func_357(*uParam0);

	if (iParam1 < 1 || iParam1 > func_366(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_362(var uParam0, int iParam1) // Position - 0x102B3 (66227)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_363(var uParam0, int iParam1) // Position - 0x102E6 (66278)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_364(var uParam0, int iParam1) // Position - 0x10320 (66336)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_365(var uParam0, int iParam1) // Position - 0x1035B (66395)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_366(int iParam0, int iParam1) // Position - 0x10397 (66455)
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

int func_367() // Position - 0x10439 (66617)
{
	var unk;

	func_365(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_364(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_363(&unk, CLOCK::GET_CLOCK_HOURS());
	func_361(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_362(&unk, CLOCK::GET_CLOCK_MONTH());
	func_360(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x1047F (66687)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_369() // Position - 0x10496 (66710)
{
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;

	func_381(true);
	func_290(true);
	HUD::DISPLAY_RADAR(false);
	func_379(false, false);
	func_378(1, 1, 0, 0, 0);
	func_377(1, 2, 1, 1, 1);
	func_376("PROS_OPTS" /*Servicios disponibles*/);
	func_375(INPUT_FRONTEND_ACCEPT, "PROS_SELECT" /*Seleccionar*/, -1, false);
	epctLocal_88 = PV_COMP_HEAD;
	type = func_237(0);
	type2 = func_237(1);
	type3 = func_237(2);

	if (func_285() >= type)
	{
		func_338(epctLocal_88, "PROS_DOLLAR" /*$~1~*/, 1, 1, 0, false, 0);
		func_372(type, false);
		uLocal_306[epctLocal_88] = 0;
		epctLocal_88 = epctLocal_88 + 1;
	}

	if (func_285() >= type2 && func_371(veLocal_116))
	{
		func_338(epctLocal_88, "PROS_DOLLAR" /*$~1~*/, 1, true, false, false, false);
		func_372(type2, false);
		uLocal_306[epctLocal_88] = 1;
		epctLocal_88 = epctLocal_88 + 1;
	}

	if (func_285() >= type3 && func_371(veLocal_116))
	{
		func_338(epctLocal_88, "PROS_DOLLAR" /*$~1~*/, 1, true, false, false, false);
		func_372(type3, false);
		uLocal_306[epctLocal_88] = 2;
		epctLocal_88 = epctLocal_88 + 1;
	}

	func_338(epctLocal_88, "PROS_QUIT" /*Rechazar servicio*/, 0, true, false, false, false);
	epctLocal_87 = 0;
	func_292(epctLocal_87, true, 1);
	func_370();
	iLocal_106 = MISC::GET_GAME_TIMER();
	iLocal_318 = 3;
	return;
}

void func_370() // Position - 0x105B8 (67000)
{
	Global_24447.f_5 = 1;
	return;
}

BOOL func_371(Vehicle veParam0) // Position - 0x105C6 (67014)
{
	Hash entityModel;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (entityModel == joaat("infernus") || entityModel == joaat("voltic") || entityModel == joaat("stingergt") || entityModel == joaat("stinger") || entityModel == joaat("bullet") || entityModel == joaat("entityxf") || entityModel == joaat("feltzer3") || entityModel == joaat("granger") || entityModel == joaat("panto") || entityModel == joaat("phoenix") || entityModel == joaat("fmj") || entityModel == joaat("reaper") || entityModel == joaat("le7b") || entityModel == joaat("tyrus") || entityModel == joaat("infernus2"))
			return false;
	}

	return true;
}

void func_372(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x106B4 (67252)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_24586.f_5825 >= 256)
		return;

	if (Global_24586.f_6346 >= 4)
		return;

	if (Global_24586.f_6347 != 1)
		return;

	if (Global_24586.f_6346 >= Global_24586.f_6344)
		return;

	Global_24586.f_4469[Global_24586.f_5825] = epctParam0;
	Global_24586.f_5825 = Global_24586.f_5825 + 1;
	Global_24586.f_2387[Global_24586.f_6345 /*5*/][Global_24586.f_6346] = 2;
	Global_24586.f_6346 = Global_24586.f_6346 + 1;

	if (Global_24586.f_6346 >= Global_24586.f_6344)
	{
		num = func_374();
	
		if (Global_24586.f_5678[Global_24586.f_5822] && Global_24586.f_6346 == Global_24586.f_6344)
		{
			func_344(27, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_24586.f_5671[Global_24586.f_5822 - 1])
			Global_24586.f_5671[Global_24586.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_24586.f_6346 >= Global_24586.f_6344)
		{
			num3 = func_373();
		
			if (num3 > Global_24586.f_6348[Global_24586.f_5821])
				Global_24586.f_6348[Global_24586.f_5821] = num3;
		}
	}

	return;
}

float func_373() // Position - 0x107EF (67567)
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_24586.f_6346; i = i + 1)
	{
		if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_24586.f_4984[(Global_24586.f_5827 - num) + i] != 0)
			if (func_344(Global_24586.f_4984[(Global_24586.f_5827 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_374() // Position - 0x108A2 (67746)
{
	float num;
	var unk;
	var unk2;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int num6;
	int num7;
	int num8;
	int num9;

	for (i = 0; i < Global_24586.f_6346; i = i + 1)
	{
		if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 1)
		{
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 8)
		{
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 2)
		{
			num2 = num2 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 3)
		{
			num3 = num3 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 4)
		{
			num4 = num4 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 5)
		{
			num5 = num5 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 6)
		{
			num5 = num5 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 7)
		{
			num5 = num5 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 9)
		{
			num5 = num5 + 1;
		}
	}

	func_317(false, true, false, false, 0, num5 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_24586.f_79[Global_24586.f_6345 /*6*/]);

	for (i = 0; i < Global_24586.f_6346; i = i + 1)
	{
		if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 1)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[Global_24586.f_6345 + num6 /*6*/]);
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 8)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24586.f_79[Global_24586.f_6345 + num6 /*6*/]);
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24586.f_4469[(Global_24586.f_5825 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24586.f_4726[(Global_24586.f_5826 - num3) + num8], Global_24586.f_4855[(Global_24586.f_5826 - num3) + num8]);
		
			num8 = num8 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[(Global_24586.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697654[(Global_24586.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[(Global_24586.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24586.f_2387[Global_24586.f_6345 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697654[(Global_24586.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_24586.f_79[Global_24586.f_6345 /*6*/]) != 0)
		num = func_314(true);

	for (i = 0; i < num4; i = i + 1)
	{
		if (Global_24586.f_4984[(Global_24586.f_5827 - num4) + i] != 0)
		{
			func_344(Global_24586.f_4984[(Global_24586.f_5827 - num4) + i], true, false, &unk, &unk2, false);
			num = num + unk;
		}
	}

	return num;
}

void func_375(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x10CE9 (68841)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_24586.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4521274, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4521274.f_16), sParam1, 16);
		Global_4521274.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_24586.f_5655), Global_24586.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_5328[Global_24586.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_5553[Global_24586.f_5326 /*4*/], sParam1, 16);
	Global_24586.f_5610[Global_24586.f_5326] = iParam2;
	Global_24586.f_5625[Global_24586.f_5326] = ecaParam0;
	Global_24586.f_5640[Global_24586.f_5326] = 32;
	Global_24586.f_5326 = Global_24586.f_5326 + 1;
	return;
}

void func_376(char* sParam0) // Position - 0x10D9E (69022)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_1), sParam0, 16);
	Global_24586.f_74 = 0;
	Global_24586.f_75 = 0;
	Global_24586.f_76 = 0;
	Global_24586.f_77 = 0;
	Global_24586.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24586.f_5[i] = 0;
	}

	return;
}

void func_377(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x10DE9 (69097)
{
	Global_24586.f_5686[0] = iParam0;
	Global_24586.f_5686[1] = iParam1;
	Global_24586.f_5686[2] = iParam2;
	Global_24586.f_5686[3] = iParam3;
	Global_24586.f_5686[4] = iParam4;
	return;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x10E28 (69160)
{
	Global_24586.f_5659[0] = iParam0;
	Global_24586.f_5659[1] = iParam1;
	Global_24586.f_5659[2] = iParam2;
	Global_24586.f_5659[3] = iParam3;
	Global_24586.f_5659[4] = iParam4;
	Global_24586.f_5829 = 0;

	if (iParam0 != 0)
		Global_24586.f_5829 = Global_24586.f_5829 + 1;

	if (iParam1 != 0)
		Global_24586.f_5829 = Global_24586.f_5829 + 1;

	if (iParam2 != 0)
		Global_24586.f_5829 = Global_24586.f_5829 + 1;

	if (iParam3 != 0)
		Global_24586.f_5829 = Global_24586.f_5829 + 1;

	if (iParam4 != 0)
		Global_24586.f_5829 = Global_24586.f_5829 + 1;

	return;
}

void func_379(BOOL bParam0, BOOL bParam1) // Position - 0x10ED2 (69330)
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_24586.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2697654[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24586.f_4469[i] = PV_COMP_HEAD;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24586.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24586.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24586.f_5692[i] = 0;
		Global_24586.f_5830[i] = false;
		Global_24586.f_5959[i] = false;
		Global_24586.f_6482[i] = 0f;
		Global_24586.f_6088[i] = false;
		Global_24586.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_24586.f_5659[i] = 0;
		Global_24586.f_5671[i] = 0f;
		Global_24586.f_5665[i] = -1f;
		Global_24586.f_5678[i] = false;
		Global_24586.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_5553[i /*4*/], "", 16);
		Global_24586.f_5610[i] = -1;
		Global_24586.f_5625[i] = 402;
		Global_24586.f_5640[i] = 32;
	}

	for (i = 0; i < 70; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_7744[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_24586.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4521274.f_16), "", 16);
	Global_4521274.f_20 = -1;
	Global_24586 = false;
	Global_24586.f_5821 = 0;
	Global_24586.f_5822 = 0;
	Global_24586.f_5823 = 0;
	Global_24586.f_5825 = 0;
	Global_24586.f_5826 = 0;
	Global_24586.f_5827 = 0;
	Global_24586.f_5824 = 0;
	Global_24586.f_6477 = 0;
	Global_24586.f_6617 = 0;
	Global_24586.f_6342 = 0;
	Global_24586.f_6341 = 0;
	Global_24586.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_5241), "", 24);
	Global_24586.f_5319 = 0;
	Global_24586.f_5320 = 0;
	Global_24586.f_5321 = 0;
	Global_24586.f_5322 = 0;
	Global_24586.f_5323 = 0;
	Global_24586.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24586.f_5253[i] = 0;
	}

	Global_24586.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4521274.f_21), "", 16);
	Global_4521274.f_61 = 0;
	Global_4521274.f_62 = 0;
	Global_4521274.f_63 = 0;
	Global_4521274.f_64 = 0;
	Global_4521274.f_65 = 0;
	Global_4521274.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4521274.f_25[i] = 0;
	}

	Global_4521274.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_1), "", 16);
	Global_24586.f_5677 = 0f;
	Global_24586.f_74 = 0;
	Global_24586.f_75 = 0;
	Global_24586.f_76 = 0;
	Global_24586.f_77 = 0;
	Global_24586.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24586.f_5[i] = 0;
	}

	Global_24586.f_6347 = 0;
	Global_24586.f_6346 = 0;
	Global_24586.f_6344 = 0;
	Global_24586.f_6345 = 0;
	Global_24586.f_5326 = 0;
	Global_24586.f_5327 = 0;
	Global_24586.f_5828 = 10;
	Global_24586.f_5829 = 0;
	Global_24586.f_6479 = 0f;
	Global_24586.f_6480 = 0f;
	Global_24586.f_6331 = 0;
	Global_24586.f_6332 = 0;
	Global_24586.f_6333 = 0f;
	Global_24586.f_6334 = 0;
	Global_24586.f_6336 = 0;
	Global_24586.f_6335 = 0;
	Global_24586.f_6337 = 0;
	Global_24586.f_6338 = 0;
	Global_24586.f_6339 = 0;
	Global_24586.f_6340 = 0;
	Global_24586.f_9240 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_24586.f_6611[i] = -1;
		Global_24586.f_6614[i] = -1;
	}

	Global_24586.f_5684 = 0f;
	Global_24586.f_5655 = 0;
	Global_24586.f_5685 = 0;

	for (i = 0; i < Global_24586.f_6618; i = i + 1)
	{
		Global_24586.f_6618[i] = 0;
	}

	Global_24586.f_9219 = 0;
	Global_24586.f_9214 = 0;
	Global_24586.f_9224 = 0;
	Global_24586.f_9229 = 0;
	Global_24586.f_9234 = 0;
	Global_24586.f_9236 = 0;
	Global_24586.f_9242 = 0;
	Global_24586.f_9245 = func_380(false);
	Global_24583 = 0.05f;
	Global_24584 = 0.05f;
	Global_24585 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		Global_24585 = 0.225f * (1.7777778f / aspectRatio);

	return;
}

float func_380(BOOL bParam0) // Position - 0x113B4 (70580)
{
	float aspectRatio;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		aspectRatio = 1.7777778f;

	return aspectRatio;
}

void func_381(BOOL bParam0) // Position - 0x113DF (70623)
{
	if (!bParam0)
		Global_113627 = MISC::GET_GAME_TIMER() + 250;

	Global_113624 = bParam0;
	return;
}

BOOL func_382(char* sParam0, int iParam1) // Position - 0x113FD (70653)
{
	if (func_285() < func_237(iParam1))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, "PROS_NO_MONEY" /*Necesitas más dinero para recoger una prostituta.*/, 16);
		return false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_383(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, "PIM_HHIDCR" /*No está disponible si eres indispensable en un evento de modo Libre.*/, 16);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 16);
	return true;
}

BOOL func_383(Player plParam0) // Position - 0x11447 (70727)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1893070[player /*615*/].f_1, 0);

	return false;
}

BOOL func_384(Ped pedParam0, BOOL bParam1) // Position - 0x1146A (70762)
{
	int pedDrawableVariation;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_51(PLAYER::PLAYER_PED_ID(), false, false)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_111(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PLAY_ANIM) != 1)
	{
		if (func_573())
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!func_210(PLAYER::PLAYER_ID()))
				{
					pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
				
					if (!func_543(256))
					{
						func_201(256);
						iLocal_103 = pedDrawableVariation;
						iLocal_104 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, 1, 0, 0);
						func_201(1024);
					}
				}
			
				TASK::TASK_PLAY_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_385(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_385(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_385(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_385(bParam1), 3))
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_385(bParam1)) >= 0.95f)
				TASK::TASK_PLAY_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_111(bParam1), 8f, -2f, -1, 1, 0, false, false, false);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_51(PLAYER::PLAYER_PED_ID(), false, false), func_111(bParam1), 3))
			return true;
	}

	return false;
}

char* func_385(BOOL bParam0) // Position - 0x115FC (71164)
{
	if (!func_510(iLocal_66, 32768))
		if (bParam0)
			return func_46(0);
		else
			return func_46(1);

	if (bParam0)
		return func_47(0);

	return func_47(1);
}

void func_386(var uParam0) // Position - 0x11642 (71234)
{
	*uParam0 = -15;
	return;
}

BOOL func_387(int iParam0) // Position - 0x11650 (71248)
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_352(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_353(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_354(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_357(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_356(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_355(iParam0);

	if (num6 < 1 || num6 > func_366(num5, num4))
		return false;

	return true;
}

void func_388() // Position - 0x1172C (71468)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_113);

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		if (iLocal_89 < 1)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_389() // Position - 0x11777 (71543)
{
	if (func_390(0, -1, false) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1))
		return true;

	return false;
}

BOOL func_390(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1179D (71581)
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_348(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_24586.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24586.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_24586.f_6238[num /*4*/], 9);
		Global_24586.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_24586.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_24586.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24586.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24586.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_391(&Global_24586.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_391(int iParam0) // Position - 0x118AB (71851)
{
	switch (iParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(iParam0->f_1));
				iParam0->f_9 = 1;
			
				if (iParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
					{
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = 2;
					}
				}
			}
			else
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				iParam0->f_9 = 0;
			break;
	}

	return iParam0->f_9 == 2;
}

void func_392() // Position - 0x1194D (72013)
{
	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
		iLocal_77 = ENTITY::GET_ENTITY_HEALTH(pedLocal_113);

	return;
}

void func_393() // Position - 0x11971 (72049)
{
	Vehicle vehiclePedIsIn;

	if (!func_573())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				uLocal_73 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
	}

	return;
}

void func_394(BOOL bParam0, int iParam1) // Position - 0x119BA (72122)
{
	int num;

	if (!func_348(&num, false, iParam1))
		return;

	if (Global_24586.f_9244)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_24586.f_9244 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_24586.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24586.f_6231[num] = false;
	}

	if (Global_24586.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24586.f_6217[num] = false;
	}

	if (Global_24586.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24586.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_395(&Global_24586.f_6263[num /*10*/]);
		Global_24586.f_6324[num] = 0;
	}
	else
	{
		Global_24586.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_395(int iParam0) // Position - 0x11A80 (72320)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}

	return;
}

BOOL func_396() // Position - 0x11AAC (72364)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!(veLocal_116 == 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false) && !FIRE::IS_ENTITY_ON_FIRE(veLocal_116) && !ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_116))
					{
						if (func_92(&veLocal_116))
						{
							func_5(&iLocal_66, 1);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

void func_397() // Position - 0x11B21 (72481)
{
	if (iLocal_89 == 0)
	{
		if (!func_510(iLocal_68, 1) && !func_510(iLocal_68, 16))
			if (func_398(0))
				func_501(&iLocal_68, 1);
	
		if (!func_510(iLocal_68, 4) && !func_510(iLocal_68, 64))
			if (func_398(2))
				func_501(&iLocal_68, 4);
	
		if (!func_510(iLocal_68, 8) && !func_510(iLocal_68, 128))
			if (func_398(1))
				func_501(&iLocal_68, 8);
	}

	return;
}

BOOL func_398(int iParam0) // Position - 0x11BA9 (72617)
{
	Vector3 vector;
	Vector3 entityCoords;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	vector = { func_190(iParam0) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_116, true) };

	if (uLocal_325[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("tyrant"))
			uLocal_325[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.1f, 511, veLocal_116, 3);
		else if (ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("casco") || ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("feltzer3") || ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("fagaloa") || ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("warrener2") || ENTITY::GET_ENTITY_MODEL(veLocal_116) == joaat("turismo3") || ENTITY::GET_ENTITY_MODEL(veLocal_116) == -277011826 || ENTITY::GET_ENTITY_MODEL(veLocal_116) == -978456382)
			uLocal_325[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.15f, 511, veLocal_116, 3);
		else
			uLocal_325[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.25f, 511, veLocal_116, 3);
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_325[iParam0], &hit, &endCoords, &surfaceNormal, &entityHit))
		{
			case 2:
				uLocal_325[iParam0] = 0;
			
				if (hit != 0)
				{
					func_399(iParam0);
					return false;
				}
				else
				{
					return true;
				}
				break;
		
			case 1:
				break;
		
			case 0:
				uLocal_325[iParam0] = 0;
				break;
		}
	}

	return false;
}

void func_399(int iParam0) // Position - 0x11D18 (72984)
{
	switch (iParam0)
	{
		case 0:
			if (!func_510(iLocal_68, 16))
			{
				func_501(&iLocal_68, 16);
				func_5(&iLocal_68, 1);
			}
			break;
	
		case 1:
			if (!func_510(iLocal_68, 128))
			{
				func_501(&iLocal_68, 128);
				func_5(&iLocal_68, 8);
			}
			break;
	
		case 2:
			if (!func_510(iLocal_68, 64))
			{
				func_501(&iLocal_68, 64);
				func_5(&iLocal_68, 4);
			}
			break;
	
		case 3:
			if (!func_510(iLocal_68, 32))
			{
				func_501(&iLocal_68, 32);
				func_5(&iLocal_68, 2);
			}
			break;
	}

	return;
}

void func_400() // Position - 0x11DB8 (73144)
{
	if (func_405() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_312 = 9;
		func_403(pedLocal_113);
		func_403(PLAYER::PLAYER_PED_ID());
		func_401();
		func_41(&uLocal_121);
	}

	return;
}

void func_401() // Position - 0x11DF3 (73203)
{
	Vector3 vector;
	Vector3 vector2;

	if (!CAM::DOES_CAM_EXIST(caLocal_119))
		caLocal_119 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	if (!CAM::DOES_CAM_EXIST(caLocal_120))
		caLocal_120 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	func_402(&vector, &vector2);
	CAM::SET_CAM_COORD(caLocal_119, vector);
	CAM::SET_CAM_ROT(caLocal_119, vector.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_119, vector.f_6);
	CAM::SET_CAM_COORD(caLocal_120, vector2);
	CAM::SET_CAM_ROT(caLocal_120, vector2.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_120, vector2.f_6);
	CAM::SET_CAM_ACTIVE(caLocal_119, true);
	CAM::SET_CAM_ACTIVE(caLocal_120, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

void func_402(var uParam0, var uParam1) // Position - 0x11E89 (73353)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
	
		case CHAR_FRANKLIN:
			*uParam0 = { -20.162f, -1443.9158f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.9202f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
	
		case CHAR_TREVOR:
			*uParam0 = { 1972.2477f, 3804.8054f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.1941f, 3807.5408f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}

	return;
}

void func_403(Ped pedParam0) // Position - 0x11FC3 (73667)
{
	int taskSequenceId;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_404(), 1f, -1, 0.5f, 8192, 1193033728);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

Vector3 func_404() // Position - 0x12022 (73762)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -819.88f, 177.47f, 70.63f;
	
		case CHAR_FRANKLIN:
			return -14.57f, -1437.56f, 30.12f;
	
		case CHAR_TREVOR:
			return 1972.16f, 3817.47f, 32.43f;
	}

	return 0f, 0f, 0f;
}

BOOL func_405() // Position - 0x12087 (73863)
{
	return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_407()) < func_406() * func_406();
}

float func_406() // Position - 0x120AA (73898)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return 20.75f;
	
		case CHAR_FRANKLIN:
			return 10f;
	
		case CHAR_TREVOR:
			return 14f;
	}

	return 0f;
}

Vector3 func_407() // Position - 0x120EF (73967)
{
	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			return -827.04f, 172.26f, 69.48f;
	
		case CHAR_FRANKLIN:
			return -16.98f, -1451.59f, 29.57f;
	
		case CHAR_TREVOR:
			return 1983.22f, 3820.64f, 31.37f;
	}

	return 0f, 0f, 0f;
}

void func_408() // Position - 0x12154 (74068)
{
	func_349();
	func_423();

	if (!func_10(&uLocal_124))
		func_491(&uLocal_124);

	if (func_422())
		return;

	if (!func_10(&uLocal_133))
		func_491(&uLocal_133);

	if (func_396() && PED::IS_PED_IN_VEHICLE(pedLocal_113, veLocal_116, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_116) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veLocal_116))
		{
			if (func_415() && !func_405() && !func_414())
			{
				func_413();
			
				if (func_7(&uLocal_133) > 2.5f)
				{
					iLocal_102 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(veLocal_116, false), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(veLocal_116), false, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256 | 512);
					func_501(&iLocal_66, 2048);
					iLocal_117 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &hLocal_324);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_324, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_113, hLocal_324);
					func_511("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_66, 1024);
					iLocal_321 = -15;
					func_131();
					func_129();
					func_412();
					iLocal_100 = 3;
				
					if (func_49(false, true))
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				
					iLocal_312 = 8;
				}
			}
			else
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && func_7(&uLocal_124) > 15f && func_411())
				{
					if (!func_510(iLocal_67, 4096))
					{
						_DISPLAY_HELP_TEXT("PROS_SPOT" /*Ve a algún lugar más solitario.*/, -1);
						func_501(&iLocal_67, 4096);
					}
				
					func_410();
					func_41(&uLocal_124);
				}
			
				func_41(&uLocal_133);
			}
		}
		else
		{
			func_41(&uLocal_133);
			func_409();
		}
	}
	else if (!func_405())
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
			if (!PED::IS_PED_INJURED(pedLocal_113))
				TASK::CLEAR_PED_TASKS(pedLocal_113);
	
		func_492(false);
	}

	return;
}

void func_409() // Position - 0x1230A (74506)
{
	iLocal_68 = 0;
	uLocal_325[0] = 0;
	uLocal_325[1] = 0;
	uLocal_325[2] = 0;
	uLocal_325[3] = 0;
	return;
}

void func_410() // Position - 0x12331 (74545)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_411() // Position - 0x1235E (74590)
{
	if (!func_510(iLocal_68, 256))
		return true;

	return func_510(iLocal_68, 32);
}

void func_412() // Position - 0x1237F (74623)
{
	if (func_573())
	{
		PED::SET_PED_CONFIG_FLAG(pedLocal_113, 229, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_113, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_113, 115, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, true);
	}

	return;
}

void func_413() // Position - 0x123B0 (74672)
{
	Vector3 entityCoords;
	Vector3 offsetFromEntityInWorldCoords;
	float groundZ;
	int materialHash;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	if (!func_510(iLocal_66, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_101)
		{
			if (iLocal_117 == 0)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_116, true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
				entityCoords.f_2 = groundZ + 0.15f;
				offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, 0f, 0f, -2f) };
				iLocal_117 = SHAPETEST::START_SHAPE_TEST_CAPSULE(entityCoords, offsetFromEntityInWorldCoords, 2f, 511, veLocal_116, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_117, &hit, &endCoords, &surfaceNormal, &materialHash, &entityHit) == 2)
			{
				if (hit != 0)
					if (materialHash == -1447280105 || materialHash == 1925605558 || materialHash == 2128369009)
						func_41(&uLocal_133);
			
				iLocal_101 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_117 = 0;
			}
		}
	}

	return;
}

BOOL func_414() // Position - 0x1247B (74875)
{
	Vehicle vehiclePedIsIn;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, 0, false))
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				return true;

	return false;
}

BOOL func_415() // Position - 0x124C7 (74951)
{
	Entity outPed;
	Vector3 entityCoords;
	var unk3;
	Interior interiorFromEntity;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			veLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_66(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_66(1), 12f, false))
			return false;
	
		if (func_421())
			return false;
	
		if (func_420(veLocal_116, &unk3))
			if (!func_419(unk3))
				if (!func_418(entityCoords) || func_417(entityCoords))
					return false;
	
		if (func_91(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f * 0.5f))
			return false;
	
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_113, veLocal_116, 0, false, false))
			return false;
	
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
	
		if (PED::GET_CLOSEST_PED(entityCoords, 20f, true, true, &outPed, false, true, -1))
			if (ENTITY::DOES_ENTITY_EXIST(outPed))
				if (!ENTITY::IS_ENTITY_DEAD(outPed, false))
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(outPed, veLocal_116, 17))
						return false;
			else
				func_511("NO VEHICLES FOUND");
	
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	
		if (!(interiorFromEntity == 0))
		{
			func_511("IN AN INTERIOR");
			return false;
		}
	
		if (func_416())
			return false;
	}

	return true;
}

BOOL func_416() // Position - 0x1261B (75291)
{
	func_501(&iLocal_68, 256);

	if (!func_510(iLocal_68, 2))
	{
		if (func_398(3))
		{
			func_501(&iLocal_68, 2);
			func_5(&iLocal_68, 32);
		}
	
		return true;
	}
	else
	{
		func_397();
	}

	return false;
}

BOOL func_417(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1265A (75354)
{
	if (BUILTIN::VDIST(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || BUILTIN::VDIST(vParam0, -1453.3849f, -594.2627f, 29.7966f) <= 12f || BUILTIN::VDIST(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f || BUILTIN::VDIST(vParam0, -1493.1909f, -693.9906f, 26.0665f) <= 25f || BUILTIN::VDIST(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f || BUILTIN::VDIST(vParam0, -1388.642f, -1342.2657f, 3.1626f) <= 25f || BUILTIN::VDIST(vParam0, 50.2024f, -1392.3063f, 28.4166f) <= 12f || BUILTIN::VDIST(vParam0, 25.9811f, -1392.2893f, 28.3356f) <= 12f || BUILTIN::VDIST(vParam0, 10.0435f, -1391.5956f, 28.3074f) <= 12f || BUILTIN::VDIST(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
		return true;

	return false;
}

BOOL func_418(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x127C2 (75714)
{
	if (BUILTIN::VDIST(vParam0, -1582.7823f, 5168.163f, 18.5615f) <= 15f || BUILTIN::VDIST(vParam0, -1445.7297f, -640.8375f, 28.7804f) <= 15f || BUILTIN::VDIST(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f || BUILTIN::VDIST(vParam0, -273f, 317.8898f, 92.2549f) <= 15f || BUILTIN::VDIST(vParam0, -1627.9353f, -1083.4431f, 3.2819f) <= 40f || BUILTIN::VDIST(vParam0, -1661.0979f, -1057.7303f, 2.5729f) <= 40f || BUILTIN::VDIST(vParam0, -1518.3582f, -553.8981f, 32.1463f) <= 15f)
	{
		func_501(&iLocal_66, 2097152);
		return true;
	}

	func_5(&iLocal_66, 2097152);
	return false;
}

BOOL func_419(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x128D5 (75989)
{
	int nthClosestVehicleNodeId;

	nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 1, 1077936128, 0);
	PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);

	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeId))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
			if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
				return true;
		else if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 56.25f)
			return true;
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}
	else
	{
		nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 8, 1077936128, 0);
		PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);
	
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}

	return false;
}

BOOL func_420(Vehicle veParam0, Vector3* pvParam1) // Position - 0x129BB (76219)
{
	var unk;

	unk = 4;
	unk[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 2f, 0f, 0f) };
	unk[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, -2f, 0f, 0f) };
	unk[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, 2f, 0f) };
	unk[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, -2f, 0f) };

	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[0 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[1 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[2 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[3 /*3*/], pvParam1, 1077936128, 0))
		return true;

	return false;
}

BOOL func_421() // Position - 0x12A82 (76418)
{
	return Global_77414;
}

BOOL func_422() // Position - 0x12A8E (76430)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash2")) > 0)
		return true;

	return false;
}

void func_423() // Position - 0x12ABA (76474)
{
	if (!func_510(iLocal_66, 128))
	{
		func_424(39, true);
		func_424(40, true);
		func_424(41, true);
		func_424(42, true);
		func_424(43, true);
		func_424(44, true);
		func_501(&iLocal_66, 128);
	}

	return;
}

void func_424(int iParam0, BOOL bParam1) // Position - 0x12B00 (76544)
{
	if (bParam1)
		if (!func_428(iParam0, 2, true))
			func_427(iParam0, 2, true);
	else if (func_428(iParam0, 2, true))
		func_425(iParam0, 2, true);

	return;
}

void func_425(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12B37 (76599)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_102563.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_157() == 0)
		{
			address = func_145(func_426(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_141(func_426(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_114990.f_668[iParam0], iParam1);
	}

	return;
}

int func_426(int iParam0) // Position - 0x12BA7 (76711)
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
			return 14815;
	
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

	return 18535;
}

void func_427(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12F8B (77707)
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_102563.f_1442[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_157() == 0)
		{
			address = func_145(func_426(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_141(func_426(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_114990.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_428(int iParam0, int iParam1, BOOL bParam2) // Position - 0x12FFB (77819)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102563.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_157() == 0)
			return IS_BIT_SET(func_145(func_426(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114990.f_668[iParam0], iParam1);

	return false;
}

void func_429(var uParam0) // Position - 0x1305B (77915)
{
	if (func_510(iLocal_66, 2))
	{
		if (!func_64())
			return;
	
		func_101(1);
	}

	func_69();
	func_564();

	if (func_573())
		func_557(uParam0);

	return;
}

void func_430() // Position - 0x13092 (77970)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, false, true, 0) || func_510(iLocal_66, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
			PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, false))
			{
				ENTITY::SET_ENTITY_LOD_DIST(pedLocal_113, 50);
				PED::SET_PED_LOD_MULTIPLIER(pedLocal_113, 5f);
			
				if (func_510(iLocal_66, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						func_5(&iLocal_66, 16);
					}
				}
			
				veLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_113, veLocal_116) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_116, false))
					{
						func_511("***** prostitute IN VEHICLE****** ");
					
						if (func_510(iLocal_66, 8))
							if (STREAMING::HAS_CLIP_SET_LOADED(func_93()))
								if (func_447(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								else if (func_446(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								else if (func_445(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								else if (func_444(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								else if (func_443(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								else if (func_442(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								else if (func_441(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								else if (func_440(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								else if (func_439(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								else if (func_438(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								else if (func_437(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								else if (func_436(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								else if (func_435(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								else if (func_434(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								else if (func_433(veLocal_116))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								else
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_113, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
					
						if (func_573())
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, false, false);
						else
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, true, true);
					
						func_186(pedLocal_113, 0);
						func_410();
						iLocal_81 = MISC::GET_GAME_TIMER();
						func_41(&uLocal_124);
						iLocal_312 = 7;
					}
					else
					{
						func_511("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if (func_432(pedLocal_113, PLAYER::PLAYER_PED_ID(), true) > 11f || func_431(20f) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_116, false))
				{
					func_116(&uLocal_130);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, false))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_113);
						func_492(false);
						func_511("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_97(15);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false))
					{
						veLocal_116 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					else if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_113, veLocal_116, 0, false, false))
					{
						if (!func_113())
						{
							if (!func_510(iLocal_92, 1))
							{
								func_41(&uLocal_136);
								func_501(&iLocal_92, 1);
							}
							else if (func_7(&uLocal_136) > 20f)
							{
								func_127();
								func_511("prostitute couldn't get into the car");
								iLocal_312 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_510(iLocal_92, 1))
		{
			func_511("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(pedLocal_113);
			func_97(15);
		}
	}

	return;
}

BOOL func_431(float fParam0) // Position - 0x13448 (78920)
{
	if (!func_10(&uLocal_130))
		func_41(&uLocal_130);

	return func_122(&uLocal_130) > fParam0;
}

float func_432(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x13469 (78953)
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

BOOL func_433(Vehicle veParam0) // Position - 0x134C7 (79047)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ZENO"):
				return true;
		}
	}

	return false;
}

BOOL func_434(Vehicle veParam0) // Position - 0x134F2 (79090)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_IGNUS"):
				return true;
		}
	}

	return false;
}

BOOL func_435(Vehicle veParam0) // Position - 0x1351D (79133)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ZR350"):
				return true;
		}
	}

	return false;
}

BOOL func_436(Vehicle veParam0) // Position - 0x13548 (79176)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_PEYOTE2"):
				return true;
		}
	}

	return false;
}

BOOL func_437(Vehicle veParam0) // Position - 0x13573 (79219)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_NEO"):
				return true;
		}
	}

	return false;
}

BOOL func_438(Vehicle veParam0) // Position - 0x1359E (79262)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
				return true;
		}
	}

	return false;
}

BOOL func_439(Vehicle veParam0) // Position - 0x135C9 (79305)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ITALIGTO"):
				return true;
		}
	}

	return false;
}

BOOL func_440(Vehicle veParam0) // Position - 0x135F4 (79348)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_DOMINATOR3"):
				return true;
		}
	}

	return false;
}

BOOL func_441(Vehicle veParam0) // Position - 0x1361F (79391)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_TAIPAN"):
				return true;
		}
	}

	return false;
}

BOOL func_442(Vehicle veParam0) // Position - 0x13650 (79440)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_SC1"):
				return true;
		}
	}

	return false;
}

BOOL func_443(Vehicle veParam0) // Position - 0x1367B (79483)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS2"):
				return true;
		}
	}

	return false;
}

BOOL func_444(Vehicle veParam0) // Position - 0x136A6 (79526)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
				return true;
		}
	}

	return false;
}

BOOL func_445(Vehicle veParam0) // Position - 0x136D7 (79575)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
				return true;
		}
	}

	return false;
}

BOOL func_446(Vehicle veParam0) // Position - 0x13708 (79624)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_LE7B"):
				return true;
		}
	}

	return false;
}

BOOL func_447(Vehicle veParam0) // Position - 0x1373F (79679)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_LOW_TORERO2"):
				return true;
		}
	}

	return false;
}

void func_448(var uParam0) // Position - 0x137C4 (79812)
{
	int scriptTaskStatus;

	if (!func_457(false))
		return;

	if (!func_510(iLocal_66, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		func_501(&iLocal_66, 16);
	}

	if (!func_10(&uLocal_130))
		func_491(&uLocal_130);

	if (func_122(&uLocal_130) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_510(iLocal_92, 524288))
		{
			func_116(&uLocal_130);
			iLocal_312 = 6;
		}
		else if (func_456())
		{
			func_41(&uLocal_130);
			func_501(&iLocal_92, 524288);
		}
	}

	func_70(pedLocal_113);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0) || func_510(iLocal_92, 1) && !func_221(0) && !func_421())
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_113, veLocal_116, 0, false, false))
		{
			if (!func_113())
			{
				if (!func_510(iLocal_92, 1))
				{
					func_41(&uLocal_136);
					func_501(&iLocal_92, 1);
				}
				else if (func_7(&uLocal_136) > 10f)
				{
					func_69();
					TASK::CLEAR_PED_TASKS(pedLocal_113);
					func_511("prostitute couldn't get into the car");
					iLocal_312 = 6;
				}
			}
		}
		else
		{
			func_449();
		}
	}
	else if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Presiona ~INPUT_CONTEXT~ o toca tu claxon para invitar a la prostituta al vehículo.*/))
	{
		func_5(&iLocal_66, 1048576);
		func_487();
	
		if (func_573())
		{
			scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PLAY_ANIM);
		
			if (scriptTaskStatus != 1 && scriptTaskStatus != 0)
			{
				func_564();
				func_557(uParam0);
			}
		}
	}

	return;
}

void func_449() // Position - 0x1393F (80191)
{
	var unk;

	if (iLocal_312 != 5 && func_382(&unk, 0))
	{
		func_452();
	
		if (func_450(iLocal_91, true) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_501(&iLocal_66, 8192);
			func_41(&uLocal_130);
		}
	
		if (func_510(iLocal_66, 8192))
		{
			func_487();
			Global_33984 = true;
			Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_433 = 1;
			func_134("PROSTITUTES_SOLICIT_SCENE");
			func_88("PROSTITUTES_DRIVE_SCENE");
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_ENTER_VEHICLE) != 1 && !PED::IS_PED_IN_VEHICLE(pedLocal_113, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
					TASK::TASK_ENTER_VEHICLE(pedLocal_113, veLocal_116, -1, 0, 1f, 8388609, 0);
		
			sLocal_80 = func_51(PLAYER::PLAYER_PED_ID(), true, false);
			STREAMING::REQUEST_ANIM_DICT(sLocal_80);
			sLocal_80 = func_51(PLAYER::PLAYER_PED_ID(), false, true);
			STREAMING::REQUEST_ANIM_DICT(sLocal_80);
			func_41(&uLocal_124);
			iLocal_312 = 5;
		}
	}

	return;
}

BOOL func_450(int iParam0, BOOL bParam1) // Position - 0x13A3A (80442)
{
	int num;

	num = func_451(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_221(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_45713[num /*32*/] == true && Global_45713[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_45713[num /*32*/].f_29)
					return false;
		
			Global_45713[num /*32*/].f_5 = 1;
			Global_45713[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45713[num /*32*/] == false;
			Global_45713[num /*32*/].f_7;
		}
	}

	return false;
}

int func_451(int iParam0) // Position - 0x13AF2 (80626)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45713[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_452() // Position - 0x13B2D (80685)
{
	if (Global_33984)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
			return;
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
	
		if (!func_510(iLocal_66, 8192))
			if (iLocal_91 == -1)
				_CONTEXT_ADD_HELP_TEXT(&iLocal_91, 5, "PROS_ACCEPT" /*Presiona ~INPUT_CONTEXT~ o toca tu claxon para invitar a la prostituta al vehículo.*/, 0, 0, 0, 0);
	}
	else if (_CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(iLocal_91, 0))
	{
		func_487();
	}

	return;
}

BOOL _CONTEXT_IS_HELP_TEXT_BEING_DISPLAYED(int iParam0, int iParam1) // Position - 0x13B8F (80783)
{
	int num;
	BOOL flag;

	num = func_451(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_45713[num /*32*/].f_6)
		return false;

	flag = false;

	if (!Global_45713[num /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45713[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45908);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_45713[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45908);
	
		if (Global_45713[num /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_45713[num /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_45713[num /*32*/].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x13C44 (80964)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_455(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_45713[i /*32*/])
		{
			Global_45713[i /*32*/] = true;
			Global_45713[i /*32*/].f_1 = Global_45914;
			Global_45914 = Global_45914 + 1;
			Global_45713[i /*32*/].f_4 = 0;
			Global_45713[i /*32*/].f_29 = 0;
			Global_45713[i /*32*/].f_5 = 0;
			Global_45713[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45713[i /*32*/].f_8), sParam2, 16);
			Global_45713[i /*32*/].f_6 = iParam3;
			Global_45713[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45713[i /*32*/].f_7 = 0;
			Global_45713[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45713[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45713[i /*32*/].f_13), sParam4, 64);
				Global_45713[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45713[i /*32*/].f_12 = 0;
				Global_45713[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45713[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_455(var uParam0) // Position - 0x13D6F (81263)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_451(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_45713[num /*32*/])
		{
			Global_45713[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_456() // Position - 0x13DC6 (81350)
{
	int randomIntInRange;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_113) || PED::IS_PED_INJURED(pedLocal_113))
		return true;

	if (!func_573())
	{
		func_69();
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
		}
		else if (func_510(iLocal_66, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(5), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_68(iLocal_310), func_67(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			return false;
		}
	}

	switch (iLocal_72)
	{
		case 0:
			if (func_510(iLocal_66, 4194304))
			{
				func_69();
				iLocal_72 = 1;
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(5), 2f, -2f, -1, 0, 0, false, false, false);
				iLocal_72 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(pedLocal_113, func_68(iLocal_310), func_67(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
					iLocal_72 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
			break;
	
		case 3:
			iLocal_72 = 0;
			return true;
	}

	return false;
}

BOOL func_457(BOOL bParam0) // Position - 0x13F7D (81789)
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
		return false;

	func_510(iLocal_66, 8192);

	if (func_432(pedLocal_113, PLAYER::PLAYER_PED_ID(), true) > 11f)
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (func_573())
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true) > 1)
			return false;

	if (bParam0)
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 2f)
			return false;

	if (func_91(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true), 1106247680))
	{
		if (!func_510(iLocal_67, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			_DISPLAY_HELP_TEXT("PROS_COPS" /*Las prostitutas no te harán caso si hay policía cerca.*/, -1);
			func_501(&iLocal_67, 8192);
		}
	
		return false;
	}

	if (!func_396())
	{
		if (!func_573())
		{
			if (!bLocal_105 && !Global_114037 && _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
			{
				_DISPLAY_HELP_TEXT("PROS_CAR" /*No puedes recoger prostitutas en este vehículo.*/, -1);
				bLocal_105 = true;
			}
		
			func_458();
		}
		else if (!func_543(4096))
		{
			_DISPLAY_HELP_TEXT("PROS_CAR" /*No puedes recoger prostitutas en este vehículo.*/, -1);
			func_201(4096);
		}
	
		return false;
	}

	return true;
}

void func_458() // Position - 0x140AA (82090)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!func_510(iLocal_66, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_113))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_501(&iLocal_66, 1);
		}
	}

	return;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x140FB (82171)
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

void func_460() // Position - 0x14180 (82304)
{
	if (func_457(false))
	{
		func_449();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 && !func_510(iLocal_66, 8192))
		{
			if (func_73(true))
			{
				func_116(&uLocal_130);
				iLocal_81 = MISC::GET_GAME_TIMER();
				func_511("prostitute proposition player VEHICLE");
				iLocal_312 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_113);
		func_97(15);
	}

	return;
}

void func_461(var uParam0) // Position - 0x141E2 (82402)
{
	if (func_457(false))
	{
		func_449();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || func_510(iLocal_66, 8192))
		{
			iLocal_312 = 3;
		}
		else if (func_431(20f))
		{
			func_116(&uLocal_130);
			func_492(false);
		}
		else
		{
			func_462(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_113);
		func_97(15);
	}

	return;
}

void func_462(var uParam0) // Position - 0x1424B (82507)
{
	float num;
	var maximum;
	var minimum;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_116))
		return;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_116), &minimum, &maximum);
	num = { maximum - minimum };
	num = { num / { 2f, 2f, 2f } };
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, -(num + 0.2f), 0f, 0f) };
	offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_116, num + 0.2f, 0f, 0f) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };

	if (BUILTIN::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < BUILTIN::VDIST(entityCoords, offsetFromEntityInWorldCoords))
		offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_ENTER_VEHICLE) != 1 || !func_510(iLocal_66, 8192) && BUILTIN::VDIST2(uLocal_110, offsetFromEntityInWorldCoords) > 0f)
	{
		if (func_573())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_113))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, false, true);
		
			func_472(&uLocal_304, func_68(iLocal_310));
			func_466(uParam0, true);
			func_463(&uLocal_304, uParam0);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 1f, 8192, 1193033728);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_113, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		uLocal_110 = { offsetFromEntityInWorldCoords };
	}

	return;
}

void func_463(var uParam0, var uParam1) // Position - 0x14399 (82841)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			func_464(uParam1, uParam0->[i]);
	}

	return;
}

void func_464(var uParam0, const char* sParam1) // Position - 0x143CF (82895)
{
	func_465(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_465(var uParam0, int iParam1, int iParam2, const char* sParam3, int iParam4) // Position - 0x143E2 (82914)
{
	int i;

	for (i = 0; i < 15; i = i + 1)
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

	if (!uParam0->f_271)
		uParam0->f_271 = 1;

	for (i = 0; i < 15; i = i + 1)
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

void func_466(var uParam0, BOOL bParam1) // Position - 0x144C3 (83139)
{
	int i;

	if (!bParam1)
		func_468(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_467(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_467(var uParam0) // Position - 0x14506 (83206)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_468(var uParam0) // Position - 0x1451F (83231)
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_469(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_469(var uParam0) // Position - 0x14556 (83286)
{
	func_470(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_470(int iParam0, const char* sParam1, Hash hParam2) // Position - 0x1456D (83309)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_471(iParam0))
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

int func_471(int iParam0) // Position - 0x14627 (83495)
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

int func_472(var uParam0, char* sParam1) // Position - 0x14650 (83536)
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			if (MISC::ARE_STRINGS_EQUAL(uParam0->[i], sParam1))
				return 0;
	}

	num = func_473(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = sParam1;
	return 1;
}

int func_473(var uParam0) // Position - 0x146B5 (83637)
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_STRING_NULL(uParam0->[i]))
			return i;
	}

	return -1;
}

void func_474(var uParam0) // Position - 0x146E4 (83684)
{
	var string1;

	if (func_457(true))
	{
		if (!func_10(&uLocal_130))
			func_491(&uLocal_130);
	
		func_501(&iLocal_66, 4);
		Global_33985 = true;
		func_449();
	
		if (func_490(&uLocal_130, 2f) || func_510(iLocal_66, 8192))
		{
			func_501(&iLocal_66, 2);
		
			if (func_382(&string1, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_113, -1, SLF_WHILE_NOT_IN_FOV, 4);
				func_462(uParam0);
				func_501(&iLocal_66, 4);
				Global_33984 = true;
				Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_433 = 1;
				iLocal_312 = 2;
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(func_486(&string1), "PIM_HHIDCR" /*No está disponible si eres indispensable en un evento de modo Libre.*/))
				{
					_DISPLAY_HELP_TEXT_NO_SOUND(&string1, 30000);
					func_483(true);
				}
				else
				{
					_DISPLAY_HELP_TEXT(&string1, -1);
				}
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&string1) && MISC::ARE_STRINGS_EQUAL(&string1, "PROS_NO_MONEY" /*Necesitas más dinero para recoger una prostituta.*/))
					func_475();
			
				func_97(0);
				iLocal_313 = 0;
				func_501(&iLocal_66, 8388608);
				func_5(&iLocal_66, 4);
				Global_33984 = false;
				Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_433 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_66, 4);
		Global_33985 = false;
	}

	return;
}

void func_475() // Position - 0x14806 (83974)
{
	if (!func_543(64))
	{
		func_476(false, 31, 5);
		func_201(64);
	}

	return;
}

void func_476(BOOL bParam0, int iParam1, int iParam2) // Position - 0x14826 (84006)
{
	int instructionalKey;

	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_480(PLAYER::PLAYER_ID(), true, false))
		return;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE))
		return;

	if (HUD::GET_PAUSE_MENU_STATE() != 0)
		return;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return;

	if (func_479())
		return;

	if (!func_477())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || bParam0)
	{
		if (!Global_102563.f_1514 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			instructionalKey = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /*Alerta*/, "BRDISTEX" /*No dispones de fondos suficientes. Puedes añadir dólares de GTA a tu cuenta del juego.*/, instructionalKey, "BRSHETEX" /*¿Quieres visitar la tienda?*/, false, -1, 0, 0, true, 0);
			Global_2698456 = iParam1;
			Global_102563.f_1514 = 1;
			Global_102563.f_1515 = iParam2;
		}
	}

	return;
}

BOOL func_477() // Position - 0x14901 (84225)
{
	if (func_478())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_478() // Position - 0x14921 (84257)
{
	return Global_2697613;
}

BOOL func_479() // Position - 0x1492D (84269)
{
	return Global_2698567;
}

BOOL func_480(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14939 (84281)
{
	if (bParam1)
		if (func_481(plParam0))
			return true;

	!bParam2;

	if (Global_1845347[plParam0 /*884*/] == PV_COMP_INVALID)
		return false;

	return true;
}

BOOL func_481(Player plParam0) // Position - 0x1496B (84331)
{
	return func_482(plParam0);
}

BOOL func_482(Player plParam0) // Position - 0x14979 (84345)
{
	return IS_BIT_SET(Global_1845347[plParam0 /*884*/].f_11.f_1, 0);
}

void func_483(BOOL bParam0) // Position - 0x14990 (84368)
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_484())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);

	return;
}

BOOL func_484() // Position - 0x149BF (84415)
{
	return Global_2673276.f_2591[0 /*80*/].f_1 != 0;
}

void _DISPLAY_HELP_TEXT_NO_SOUND(const char* text, int iParam1) // Position - 0x149D5 (84437)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
	return;
}

const char* func_486(const char* sParam0) // Position - 0x149EC (84460)
{
	return sParam0;
}

void func_487() // Position - 0x149F6 (84470)
{
	if (iLocal_91 != -1)
		func_455(&iLocal_91);

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x14A0A (84490)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80362)
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x14AA5 (84645)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_490(int* piParam0, float fParam1) // Position - 0x14AB8 (84664)
{
	if (func_229(piParam0, fParam1))
	{
		func_116(piParam0);
		return true;
	}

	return false;
}

void func_491(int* piParam0) // Position - 0x14AD6 (84694)
{
	if (!func_10(piParam0))
		func_41(piParam0);

	return;
}

void func_492(BOOL bParam0) // Position - 0x14AEE (84718)
{
	BOOL flag;

	func_127();

	if (bParam0 || iLocal_89 == 0)
	{
		flag = true;
	
		if (func_573())
			flag = false;
	
		func_107(flag);
		func_97(14);
	}
	else
	{
		func_107(false);
		func_97(15);
	}

	return;
}

BOOL func_493() // Position - 0x14B30 (84784)
{
	if (func_500() || func_499() || func_498() || func_497() || func_494() || Global_2625197 || Global_2625197.f_1 != 0)
		return 1;

	return 0;
}

BOOL func_494() // Position - 0x14B84 (84868)
{
	if (func_496() || func_495())
		return Global_1845347[PLAYER::PLAYER_ID() /*884*/].f_96 == 8;

	return false;
}

BOOL func_495() // Position - 0x14BB1 (84913)
{
	return Global_2685155.f_763;
}

BOOL func_496() // Position - 0x14BC0 (84928)
{
	return IS_BIT_SET(Global_2685155.f_2, 11);
}

BOOL func_497() // Position - 0x14BD1 (84945)
{
	return IS_BIT_SET(Global_2685155, 5);
}

BOOL func_498() // Position - 0x14BDF (84959)
{
	return IS_BIT_SET(Global_2685155, 2);
}

BOOL func_499() // Position - 0x14BED (84973)
{
	return IS_BIT_SET(Global_2685155, 20);
}

BOOL func_500() // Position - 0x14BFC (84988)
{
	return Global_2685155.f_726;
}

void func_501(var uParam0, int iParam1) // Position - 0x14C0B (85003)
{
	func_502(uParam0, iParam1);
	return;
}

void func_502(var uParam0, int iParam1) // Position - 0x14C1B (85019)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_503() // Position - 0x14C2C (85036)
{
	if (Global_33986)
		return false;

	if (func_573())
		return false;

	if (!func_507())
		return false;

	if (func_504())
	{
		iLocal_313 = 4;
		return true;
	}

	return false;
}

BOOL func_504() // Position - 0x14C65 (85093)
{
	Hash entityModel;

	veLocal_115 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true), 15f, 0, 6);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_115) && !ENTITY::IS_ENTITY_DEAD(veLocal_115, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_115, false))
		{
			if (func_92(&veLocal_115) && !func_506(veLocal_115, true))
			{
				pedLocal_114 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_115, -1, false);
			
				if (!(pedLocal_114 == 0))
				{
					if (func_505(&pedLocal_114))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(veLocal_115);
					
						if (!(entityModel == joaat("taxi")) && !(entityModel == joaat("taxi")))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_114))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_114, true, false);
						
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veLocal_115))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_115, true, false);
						
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_114, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_114, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_115, false, 1);
							return true;
						}
					}
				}
			}
		}
	}

	veLocal_115 = 0;
	pedLocal_114 = 0;
	return false;
}

BOOL func_505(var uParam0) // Position - 0x14D3A (85306)
{
	if (!PED::IS_PED_INJURED(*uParam0))
		if (PED::IS_PED_MALE(*uParam0))
			return true;

	return false;
}

BOOL func_506(Vehicle veParam0, BOOL bParam1) // Position - 0x14D5C (85340)
{
	if (Global_80362)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Company_SUV" /*Camioneta de la empresa*/))
				return true;

	return false;
}

BOOL func_507() // Position - 0x14D9B (85403)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
		return false;

	return true;
}

BOOL func_508() // Position - 0x14DC1 (85441)
{
	if (!func_507() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_510(iLocal_66, 4096))
		return false;

	if (func_510(iLocal_66, 32))
	{
		iLocal_313 = 2;
		func_101(2);
		func_511("IS_CUSTOMER_A_PLAYER is TRUE");
		return true;
	}

	return false;
}

void func_509() // Position - 0x14E15 (85525)
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_113))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_SMART_FLEE_PED) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_113, 196628, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_113);
				TASK::TASK_SMART_FLEE_PED(pedLocal_113, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(pedLocal_113, true);
				func_97(15);
			}
		}
	}

	return;
}

BOOL func_510(int iParam0, int iParam1) // Position - 0x14E78 (85624)
{
	return iParam0 && iParam1 != false;
}

void func_511(char* sParam0) // Position - 0x14E87 (85639)
{
	return;
}

BOOL func_512() // Position - 0x14E8F (85647)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_ANY) == 1)
		return false;

	if (PED::IS_PED_USING_ANY_SCENARIO(pedLocal_113))
		return false;

	return true;
}

BOOL func_513() // Position - 0x14EC5 (85701)
{
	switch (iLocal_317)
	{
		case 0:
			if (!func_573())
			{
				func_472(&uLocal_304, func_68(iLocal_310));
				func_463(&uLocal_304, &uLocal_427);
				func_511("Moving to PROSTITUTE_INIT_STREAMING");
			}
		
			if (func_573())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
			}
		
			iLocal_317 = 1;
			break;
	
		case 1:
			if (!func_573())
			{
				if (func_514(&uLocal_427))
				{
					func_501(&iLocal_66, 4194304);
					func_511("Moving to PROSTITUTE_INIT_INIT");
					iLocal_317 = 2;
				}
			}
			else if (func_573())
			{
				func_501(&iLocal_66, 4194304);
				func_511("Moving to PROSTITUTE_INIT_INIT");
				iLocal_317 = 2;
			}
			break;
	
		case 2:
			iLocal_314 = 0;
			iLocal_86 = iLocal_314;
			func_5(&iLocal_66, 512);
			func_5(&iLocal_66, 1024);
			iLocal_313 = 0;
			pedLocal_114 = 0;
			veLocal_115 = 0;
			func_511("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_317 = 3;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_113))
			{
				if (!func_573())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_113, false);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 4, pedLocal_113, "Prostitutes", 0, 1);
					return true;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_113);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, false);
					_CONVERSATION_INITIALIZE_ACTOR(&uLocal_139, 4, pedLocal_113, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_113, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_113);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_514(var uParam0) // Position - 0x15029 (86057)
{
	return func_515(uParam0);
}

BOOL func_515(var uParam0) // Position - 0x15037 (86071)
{
	int i;

	if (!uParam0->f_271)
		return 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return 0;
		
			if (!func_516(&uParam0->[i /*18*/]))
				return 0;
		}
	}

	uParam0->f_271 = 0;
	return 1;
}

BOOL func_516(var uParam0) // Position - 0x15095 (86165)
{
	return func_517(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_517(int iParam0, const char* sParam1, Hash hParam2) // Position - 0x150AC (86188)
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_471(iParam0))
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

BOOL func_518() // Position - 0x15197 (86423)
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (_GET_CURRENT_PLAYER_CHARACTER() == CHAR_MICHAEL)
		{
			if (func_519(pedLocal_113, 537.0014f, 119.0252f, 96.0997f, true) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_113, true))
					if (func_573())
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, false, false);
					else
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, true, true);
			
				return true;
			}
		}
	}

	return false;
}

float func_519(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x151F7 (86519)
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

int func_520() // Position - 0x15231 (86577)
{
	if (PED::IS_PED_USING_SCENARIO(pedLocal_113, func_66(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_113, "amb@world_human_prostitute@crackhooker@base", "base"))
			return 0;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_113, "amb@world_human_prostitute@cokehead@base", "base"))
			return 1;
	}

	if (PED::IS_PED_USING_SCENARIO(pedLocal_113, func_66(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_113, "amb@world_human_prostitute@french@base", "base"))
			return 3;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_113, "amb@world_human_prostitute@hooker@base", "base"))
			return 2;
	}

	return -1;
}

void func_521() // Position - 0x152AA (86698)
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
		return;

	if (iLocal_311 != 3 && iLocal_311 != 4)
		func_522(PLAYER::PLAYER_PED_ID());
	else if (iLocal_311 == 3)
		func_522(pedLocal_114);

	return;
}

void func_522(Ped pedParam0) // Position - 0x152E9 (86761)
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	if (func_573())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedParam0);
			return;
		}
	}

	if (func_432(pedParam0, pedLocal_113, true) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_113, pedParam0))
		{
			if (func_573())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				{
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_113, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_113, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(pedLocal_113, pedParam0))
	{
		if (func_573())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
		else
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_113);
	}

	return;
}

void func_523() // Position - 0x1539D (86941)
{
	if (Global_33984)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_113, veLocal_116, false))
				func_524();
	
		return;
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_113, false) || !ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
	{
		if (Global_33988 != SCRIPT::GET_ID_OF_THIS_THREAD() && func_510(iLocal_66, 32))
			func_5(&iLocal_66, 32);
	
		return;
	}

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_33987 || Global_33987 == 0f && iLocal_313 != 4)
	{
		Global_33987 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		Global_33988 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_501(&iLocal_66, 32);
	}
	else if (Global_33988 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33987 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_113, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	else
	{
		func_5(&iLocal_66, 32);
	}

	return;
}

void func_524() // Position - 0x15496 (87190)
{
	if (func_573())
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			PED::SET_PED_RESET_FLAG(pedLocal_113, 323, true);
	else
		PED::SET_PED_RESET_FLAG(pedLocal_113, 323, true);

	return;
}

void func_525(var uParam0) // Position - 0x154C5 (87237)
{
	if (!(iLocal_312 == 12))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_529())
			{
				if (func_573())
				{
					func_124(false);
					PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_113, 196624, true);
				
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_113))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_113, true, false);
				
					TASK::TASK_SMART_FLEE_PED(pedLocal_113, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_113, true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_564();
					func_557(uParam0);
				}
				else
				{
					func_97(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_113, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_84 = iLocal_84 + 1;
			
				if (iLocal_84 >= 2)
				{
					func_511("prostitute CLASSED AS UNDER ATTACK");
					iLocal_312 = 12;
				}
				else
				{
					func_511("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_113);
				}
			}
			else if (func_527())
			{
				func_526();
				iLocal_312 = 12;
			}
		}
	}

	return;
}

void func_526() // Position - 0x155A3 (87459)
{
	if (PED::IS_PED_INJURED(pedLocal_113))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_113);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_113, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
	return;
}

BOOL func_527() // Position - 0x155CC (87500)
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!func_528())
		return false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return false;

	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return VEHICLE::IS_VEHICLE_SIREN_ON(vehiclePedIsIn);

	return false;
}

BOOL func_528() // Position - 0x15620 (87584)
{
	if (!func_573())
	{
		return true;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
				
					return true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}

	return false;
}

BOOL func_529() // Position - 0x156C6 (87750)
{
	Vector3 entityCoords;

	if (!func_510(iLocal_66, 4096))
	{
		if (func_432(pedLocal_113, PLAYER::PLAYER_PED_ID(), true) < 30f)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_113, true) };
		
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_EXPLOSION, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUNSHOT_FIRED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUN_FIGHT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_PED_SHOT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_PED_KILLED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_MELEE_ACTION, entityCoords, 30f) && !func_573() || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_573())
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, false);
			
				func_501(&iLocal_66, 4096);
				return true;
			}
		}
	}

	return false;
}

BOOL func_530() // Position - 0x157AA (87978)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113) && !ENTITY::IS_ENTITY_DEAD(pedLocal_113, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_573())
		{
			if (func_575(PLAYER::PLAYER_ID(), false))
			{
				func_511("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, false))
					func_107(false);
			
				func_97(15);
				return false;
			}
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_113))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, false))
			{
				if (!func_532(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_113, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, false, true, 0))
						{
							return true;
						}
						else
						{
							func_511("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_97(15);
						}
					}
				}
				else if (!(func_531() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					func_511("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_97(15);
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_312 == 0)
			{
				func_511("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_532(9) && !func_532(5))
			{
				return true;
			}
			else if (!(func_531() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_422()))
			{
				func_511("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_107(false);
				func_97(15);
			}
			else
			{
				return true;
			}
		}
		else
		{
			func_511("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
		func_511("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
		func_511("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		func_511("prostitute SCRIPT SHOULD EXIT - Player is dead");

	return false;
}

BOOL func_531() // Position - 0x1594D (88397)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_532(int iParam0) // Position - 0x15967 (88423)
{
	if (Global_44938 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x15989 (88457)
{
	return func_534(iParam0, Global_44938);
}

BOOL func_534(int iParam0, int iParam1) // Position - 0x1599A (88474)
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

void func_535() // Position - 0x15B7B (88955)
{
	int i;
	eEventType eventAtIndex;
	struct<3> eventData;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		if (eventAtIndex == EVENT_NETWORK_SCRIPT_EVENT)
		{
			SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 3);
		
			if (eventData == 666659573)
				if (eventData.f_1 == PLAYER::PLAYER_ID())
					func_201(128);
		}
	}

	return;
}

void func_536() // Position - 0x15BCF (89039)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		return;

	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 1)
		if (func_537(1, false, true))
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);

	return;
}

BOOL func_537(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15C0F (89103)
{
	return func_538(0, iParam0, true, bParam1, bParam2);
}

BOOL func_538(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x15C23 (89123)
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1690460, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_542(iParam0) - func_541(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_541(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_542(iParam0) - func_540(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_541(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_542(iParam0) - func_541(iParam0, true);
		}
	
		if (!bParam4 && Global_1845347[PLAYER::PLAYER_ID() /*884*/] != PV_COMP_UPPR)
			num2 = num2 - func_539(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_539(int iParam0) // Position - 0x15CE9 (89321)
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 10;
	
		case 2:
			return 10;
	}

	return 0;
}

int func_540(int iParam0) // Position - 0x15D23 (89379)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690460.f_1;
	
		case 1:
			return Global_1690460.f_2;
	
		case 2:
			return Global_1690460.f_3;
	}

	return 0;
}

int func_541(int iParam0, BOOL bParam1) // Position - 0x15D69 (89449)
{
	Player player;

	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2658296[player /*468*/].f_223;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			break;
	
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2658296[player /*468*/].f_224;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			break;
	
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2658296[player /*468*/].f_225;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			break;
	}

	return 0;
}

int func_542(int iParam0) // Position - 0x15E06 (89606)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690468;
	
		case 1:
			return Global_1690469;
	
		case 2:
			return Global_1690470;
	}

	return 0;
}

BOOL func_543(int iParam0) // Position - 0x15E46 (89670)
{
	return func_510(iLocal_69, iParam0);
}

void func_544(var uParam0) // Position - 0x15E56 (89686)
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_102511.f_20, 2) || IS_BIT_SET(Global_102511.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_545(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_545(int* piParam0) // Position - 0x15ED8 (89816)
{
	func_546(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_546(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0x15EEE (89838)
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_471(*piParam0))
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

void func_547(int iParam0) // Position - 0x15FBF (90047)
{
	if (func_510(iLocal_69, iParam0))
		func_5(&iLocal_69, iParam0);

	return;
}

void func_548() // Position - 0x15FDA (90074)
{
	func_2(false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_113))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
			func_2(true);
		else
			func_511("Prostitue: not continuing, prostitue is dead");
	else
		func_511("Prostitue: not continuing, prostitue doesn't exist");

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_2(false);
		func_511("Prostitue: not continuing, player isn't player or is dead");
	}

	return;
}

int func_549(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1603E (90174)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_555();
			else
				return 0;
	
		if (!func_552(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_555();
					else
						return 0;
			
				if (func_551())
					if (!bParam2)
						func_555();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_555();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_555();
				else
					return 0;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574669 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_555();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_555();
		else
			return 0;

	return 1;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x16154 (90452)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_551() // Position - 0x1616B (90475)
{
	return Global_2685155.f_721;
}

BOOL func_552(BOOL bParam0) // Position - 0x1617A (90490)
{
	if (bParam0 && Global_1575068)
		if (func_553())
			return false;
		else
			return true;

	return Global_1575068;
}

BOOL func_553() // Position - 0x161A6 (90534)
{
	if (func_554())
		return true;

	return Global_1575071;
}

BOOL func_554() // Position - 0x161C1 (90561)
{
	if (Global_1575068 || Global_1575075)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
			return true;

	return false;
}

void func_555() // Position - 0x161EC (90604)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_556() // Position - 0x161F8 (90616)
{
	func_201(1);
	return;
}

void func_557(var uParam0) // Position - 0x16205 (90629)
{
	func_562();

	if (func_49(false, true))
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (!PED::IS_PED_INJURED(pedLocal_113))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_113))
		{
			if (func_573() && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_SMART_FLEE_PED) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_0xF10822AA) != 1)
			{
				TASK::TASK_WANDER_STANDARD(pedLocal_113, 1193033728, 0);
			
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
					PED::SET_PED_KEEP_TASK(pedLocal_113, true);
			
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_113))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_113);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_113);
			}
			else
			{
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_113))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_113);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_113);
			}
		}
	}

	iLocal_66 = 0;

	if (func_510(iLocal_66, 64))
		Global_33986 = false;

	if (!PED::IS_PED_INJURED(pedLocal_114))
		TASK::CLEAR_PED_TASKS(pedLocal_114);

	pedLocal_114 = 0;
	iLocal_313 = 0;

	if (func_510(iLocal_66, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_66, 2048);

	if (!func_561())
	{
		func_560();
		func_559();
	}

	if (func_573())
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_102))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_102);

	veLocal_115 = 0;
	func_562();
	func_558();
	Global_33987 = 0f;

	if (!Global_1957909.f_6082 && !Global_1957909.f_6086)
		STREAMING::CLEAR_FOCUS();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_543(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, iLocal_103, iLocal_104, 0);
			func_201(1024);
		}
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Presiona ~INPUT_CONTEXT~ o toca tu claxon para invitar a la prostituta al vehículo.*/) && !Global_33984)
		HUD::CLEAR_HELP(true);

	if (Global_33988 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33984 = false;
		Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_433 = 0;
	}

	func_466(uParam0, false);

	if (func_573())
		func_201(2048);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	return;
}

void func_558() // Position - 0x163D4 (91092)
{
	return;
}

void func_559() // Position - 0x163DC (91100)
{
	if (IS_BIT_SET(Global_1674277, 4))
		MISC::CLEAR_BIT(&Global_1674277, 4);

	return;
}

void func_560() // Position - 0x163F6 (91126)
{
	if (Global_2673276.f_1023.f_10)
		Global_2673276.f_1023.f_10 = 0;

	return;
}

BOOL func_561() // Position - 0x16414 (91156)
{
	return IS_BIT_SET(Global_1965261, 3);
}

void func_562() // Position - 0x16422 (91170)
{
	return;
}

void func_563(BOOL bParam0) // Position - 0x1642A (91178)
{
	if (!PED::IS_PED_INJURED(pedLocal_113))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_113, false))
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_113, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_113, 0, 65536);
	
		if (bParam0)
			if (func_573())
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_113))
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_113))
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_113)))
							PED::SET_PED_KEEP_TASK(pedLocal_113, true);
			else
				PED::SET_PED_KEEP_TASK(pedLocal_113, true);
	}

	return;
}

void func_564() // Position - 0x1649C (91292)
{
	if (!func_573())
		if (iLocal_312 == 11 || iLocal_312 == 13)
			return;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_113, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_113))
		{
			func_97(0);
			iLocal_311 = 1;
		}
	
		if (func_573())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_113))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_113, false);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_113);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_113);
		}
	
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_113, 0);
	}

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_116, false) && !ENTITY::IS_ENTITY_DEAD(veLocal_116, false))
	{
		if (func_573())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_116))
			{
				if (Global_1845347[PLAYER::PLAYER_ID() /*884*/].f_260.f_39 <= PV_COMP_HEAD && !IS_BIT_SET(Global_1845347[PLAYER::PLAYER_ID() /*884*/].f_260.f_37, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_116, false);
					VEHICLE::SET_VEHICLE_LIGHTS(veLocal_116, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_116, false);
				}
			
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_116, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_116, false);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_116, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_116, false);
		}
	}

	func_572(iLocal_93);
	func_572(iLocal_94);
	func_572(iLocal_95);
	func_572(iLocal_96);
	func_572(iLocal_97);
	func_572(iLocal_98);
	func_572(iLocal_99);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	
		if (func_573() && iLocal_314 != 3 && func_510(iLocal_66, 2048))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}

	if (func_510(iLocal_66, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_66, 2048);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);

	if (!func_561())
	{
		func_560();
		func_559();
	}

	iLocal_313 = 0;

	if (func_510(iLocal_66, 4))
	{
		func_5(&iLocal_66, 4);
		Global_33984 = false;
		Global_33985 = false;
		Global_2658296[PLAYER::PLAYER_ID() /*468*/].f_433 = 0;
	}

	if (func_510(iLocal_66, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_93()))
			STREAMING::REMOVE_CLIP_SET(func_93());

	func_571();
	func_487();

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_ACCEPT" /*Presiona ~INPUT_CONTEXT~ o toca tu claxon para invitar a la prostituta al vehículo.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_TOG" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_RESPONSE" /*Elige la respuesta:~n~~INPUT_FRONTEND_X~ Repugnancia.~n~~INPUT_FRONTEND_ACCEPT~ Sarcasmo.~n~~INPUT_FRONTEND_CANCEL~ Simpatía.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PROS_CAM_OC" /*Usa ~INPUTGROUP_LOOK~ para mover la cámara.~n~*/))
	{
		func_5(&iLocal_66, 1048576);
		HUD::CLEAR_HELP(true);
	}

	func_381(false);
	HUD::DISPLAY_RADAR(true);

	if (func_510(iLocal_66, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_93()))
			STREAMING::REMOVE_CLIP_SET(func_93());

	func_134("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_124(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_565();

	if (func_573())
	{
		if (func_543(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veLocal_116))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_116))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_116, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_116, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_116, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(veLocal_116);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_116, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_116, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_116, false);
				}
			}
		}
	}

	func_193(23, false);
	iLocal_66 = 0;
	iLocal_68 = 0;
	return;
}

void func_565() // Position - 0x167D6 (92118)
{
	var unk;
	var unk18;

	if (!func_570())
		return;

	if (!bLocal_64)
		return;

	unk = 2;
	unk18 = 2;
	TEXT_LABEL_ASSIGN_STRING(&unk[0 /*8*/], "GameType", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[1 /*8*/], "Type", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk18[0 /*6*/], "SP", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk18[1 /*6*/], "????", 24);

	if (func_569(275, &unk18, &unk, 2, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_568(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_567(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_566(), 0f);
	}

	return;
}

int func_566() // Position - 0x1685B (92251)
{
	return iLocal_63;
}

int func_567() // Position - 0x16865 (92261)
{
	return iLocal_62;
}

int func_568() // Position - 0x1686F (92271)
{
	return 0;
}

BOOL func_569(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x16878 (92280)
{
	int num;
	int i;
	var gamerHandle;
	var clanDesc;

	!NETWORK::NETWORK_IS_SIGNED_ONLINE();

	if (!NETWORK::NETWORK_PLAYER_IS_CHEATER() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		num.f_2.f_1 = 4;
		num = iParam0;
	
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle))
						num.f_1 = clanDesc;
			}
		}
		else
		{
			num.f_1 = iParam4;
		}
	
		num.f_2 = iParam3;
	
		for (i = 0; i < iParam3; i = i + 1)
		{
			num.f_2.f_1[i /*16*/] = { uParam2->[i /*8*/] };
			TEXT_LABEL_COPY(&(num.f_2.f_1[i /*16*/].f_8), { uParam1->[i /*6*/] }, 8);
		}
	
		if (bParam5)
			Global_2097157.f_5 = { num };
	
		if (!bParam6)
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2694353.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1936071.f_10));
			else
				STATS::LEADERBOARDS2_WRITE_DATA(&num);
	
		return true;
	}

	NETWORK::NETWORK_PLAYER_IS_CHEATER();
	!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
	NETWORK::NETWORK_HAS_AGE_RESTRICTIONS();
	!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV();
	return false;
}

BOOL func_570() // Position - 0x169AC (92588)
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
		return true;

	return false;
}

void func_571() // Position - 0x169D2 (92626)
{
	if (func_510(iLocal_66, 128))
	{
		func_424(39, false);
		func_424(40, false);
		func_424(41, false);
		func_424(42, false);
		func_424(43, false);
		func_424(44, false);
		func_5(&iLocal_66, 128);
	}

	return;
}

void func_572(int iParam0) // Position - 0x16A17 (92695)
{
	if (func_573())
		if (func_223(iParam0))
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);

	return;
}

BOOL func_573() // Position - 0x16A35 (92725)
{
	return func_543(1);
}

BOOL func_574(int iParam0) // Position - 0x16A42 (92738)
{
	return Global_44938 == iParam0;
}

BOOL func_575(Player plParam0, BOOL bParam1) // Position - 0x16A50 (92752)
{
	Ped playerPed;
	int i;
	ePedComponentType type;
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			for (i = 0; i < 32; i = i + 1)
			{
				type = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (_NETWORK_IS_PLAYER_VALID(type, true, true))
					if (PLAYER::GET_PLAYER_PED(type) != playerPed)
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(type), vehiclePedIsIn, bParam1))
							return true;
			}
		}
	}

	return false;
}

BOOL func_576(Player plParam0, BOOL bParam1) // Position - 0x16AC6 (92870)
{
	if (bParam1)
		if (func_481(plParam0))
			return true;

	if (Global_1845347[plParam0 /*884*/] == PV_COMP_HAIR || Global_1845347[plParam0 /*884*/] == PV_COMP_BERD || Global_1845347[plParam0 /*884*/] == PV_COMP_HEAD || Global_1845347[plParam0 /*884*/] == PV_COMP_UPPR || Global_1845347[plParam0 /*884*/] == PV_COMP_ACCS)
		return true;

	return false;
}

