#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	eHudColour ehcLocal_2 = HUD_COLOUR_PURE_WHITE;
	eHudColour ehcLocal_3 = HUD_COLOUR_PURE_WHITE;
	eHudColour ehcLocal_4 = HUD_COLOUR_PURE_WHITE;
	eHudColour ehcLocal_5 = HUD_COLOUR_PURE_WHITE;
	eHudColour ehcLocal_6 = HUD_COLOUR_PURE_WHITE;
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
	char* sLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
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
	var uLocal_63 = 0;
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
	float fLocal_78 = 0f;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 17;
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
	var uLocal_104 = 17;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
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
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 200;
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
	var uLocal_345 = 200;
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
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
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
	var uLocal_554 = 32;
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
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	int iLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = -1;
	var uLocal_687 = -1;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = -1;
	var uLocal_695 = 16;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = -1;
	var uLocal_864 = -1;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = -1;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = -1;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = -1;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = -1;
	var uScriptParam_20 = -1;
#endregion

void main() // Position - 0x0 (0)
{
	ehcLocal_2 = 1;
	ehcLocal_3 = 134;
	ehcLocal_4 = 134;
	ehcLocal_5 = 1;
	ehcLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	sLocal_35 = "NULL";
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	fLocal_46 = 0f;
	fLocal_50 = -0.0375f;
	fLocal_51 = 0.17f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	fLocal_78 = (0.05f + 0.275f) - 0.01f;
	iLocal_143 = -1;
	iLocal_861 = -1;
	func_390(uScriptParam_0);

	while (true)
	{
		func_389();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_373();
	
		switch (func_372(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_371() == 2)
				{
					func_370();
					uLocal_549 = iLocal_128.f_7;
					uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
				else if (func_371() == 6)
				{
					uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				break;
		
			case 2:
				if (func_371() == 2)
					func_14();
				else if (func_371() == 6)
					uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				break;
		
			case 5:
				func_13(&(iLocal_128.f_12));
			
				if (func_12(&(iLocal_128.f_12)))
					uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				break;
		
			case 3:
				uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				[[fallthrough]];
		
			case 6:
				func_373();
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_371())
			{
				case 0:
					iLocal_128.f_2 = 2;
					break;
			
				case 2:
					func_3();
				
					if (func_1())
						iLocal_128.f_2 = 6;
					break;
			
				case 6:
					break;
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x1AA (426)
{
	if (func_2())
		return true;

	return false;
}

BOOL func_2() // Position - 0x1BE (446)
{
	return IS_BIT_SET(iLocal_128, 0);
}

void func_3() // Position - 0x1CA (458)
{
	int value;
	ePedComponentType type;
	ePedComponentType playerIndex;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_142 >= 32)
		{
			iLocal_142 = 0;
			iLocal_657 = 0;
			iLocal_143 = -1;
			MISC::CLEAR_BIT(&iLocal_656, 0);
			MISC::CLEAR_BIT(&iLocal_656, 1);
			MISC::CLEAR_BIT(&iLocal_656, 3);
			MISC::CLEAR_BIT(&iLocal_656, 4);
			MISC::CLEAR_BIT(&iLocal_656, 5);
		
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_550) || func_10(&uLocal_550, 5000, false))
				MISC::SET_BIT(&iLocal_656, 2);
		}
	
		value = iLocal_142;
	
		if (func_10(&(iLocal_128.f_8), 20000, false))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(value)))
			{
				playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(value));
			
				if (_NETWORK_IS_PLAYER_VALID(playerIndex, false, true))
				{
					if (!IS_BIT_SET(iLocal_128, 5))
					{
						if (!func_6(playerIndex, true, false))
						{
							if (IS_BIT_SET(uLocal_554[value /*3*/], 2))
							{
								if (!IS_BIT_SET(uLocal_554[value /*3*/], 3))
								{
									iLocal_657 = iLocal_657 + 1;
								
									if (iLocal_128.f_5 != value)
									{
										if (iLocal_143 == -1)
										{
											if (!IS_BIT_SET(iLocal_656, 1))
												MISC::SET_BIT(&iLocal_656, 1);
										
											if (!IS_BIT_SET(iLocal_656, 3))
												if (!IS_BIT_SET(uLocal_554[value /*3*/], 0))
													MISC::SET_BIT(&iLocal_656, 3);
										
											if (!IS_BIT_SET(iLocal_656, 4))
												if (!IS_BIT_SET(uLocal_554[value /*3*/], 1))
													MISC::SET_BIT(&iLocal_656, 4);
										
											iLocal_143 = value;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (IS_BIT_SET(iLocal_656, 2))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(value)))
			{
				playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(value));
				_NETWORK_IS_PLAYER_VALID(playerIndex, false, true);
			}
		}
	
		if (IS_BIT_SET(Global_2733190.f_900, 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(value)))
			{
				playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(value));
			
				if (_NETWORK_IS_PLAYER_VALID(playerIndex, false, true))
				{
					type = playerIndex;
				
					if (IS_BIT_SET(Global_2733190.f_901, type))
					{
						if (!_STOPWATCH_IS_INITIALIZED(&(iLocal_128.f_10)))
						{
							func_5(&(iLocal_128.f_10), false, false);
						}
						else if (func_10(&(iLocal_128.f_10), 10000, false))
						{
							if (!IS_BIT_SET(uLocal_554[value /*3*/], 0))
								MISC::SET_BIT(&iLocal_656, 3);
						
							if (!IS_BIT_SET(uLocal_554[value /*3*/], 1))
								MISC::SET_BIT(&iLocal_656, 4);
						
							MISC::CLEAR_BIT(&(Global_2733190.f_900), 1);
							MISC::SET_BIT(&iLocal_656, 5);
							_STOPWATCH_DESTROY(&(iLocal_128.f_10));
						}
					}
				}
			}
		}
	
		iLocal_142 = iLocal_142 + 1;
	
		if (iLocal_142 >= 32)
		{
			MISC::SET_BIT(&iLocal_656, 0);
		
			if (IS_BIT_SET(iLocal_656, 2))
			{
				MISC::CLEAR_BIT(&iLocal_656, 2);
				_STOPWATCH_DESTROY(&uLocal_550);
				func_5(&uLocal_550, false, false);
			}
		
			if (!IS_BIT_SET(iLocal_128, 5))
			{
				if (IS_BIT_SET(iLocal_656, 1) || IS_BIT_SET(iLocal_656, 5))
				{
					if (iLocal_657 >= 1 || IS_BIT_SET(iLocal_656, 5))
					{
						MISC::SET_BIT(&iLocal_128, 5);
					
						if (IS_BIT_SET(iLocal_656, 3))
							MISC::SET_BIT(&iLocal_128, 7);
					
						if (IS_BIT_SET(iLocal_656, 4))
							MISC::SET_BIT(&iLocal_128, 8);
					
						if (iLocal_143 > -1)
						{
							iLocal_128.f_5 = iLocal_143;
							NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_128.f_5));
						}
					
						if (IS_BIT_SET(iLocal_656, 5))
							MISC::SET_BIT(&iLocal_128, 9);
					
						MISC::CLEAR_BIT(&uLocal_655, 0);
					}
				}
			}
		}
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x499 (1177)
{
	uParam0->f_1 = 0;
	return;
}

void func_5(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4A6 (1190)
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

BOOL func_6(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4EB (1259)
{
	if (bParam1)
		if (func_7(epctParam0))
			return true;

	!bParam2;

	if (Global_1845298[epctParam0 /*881*/] == -1)
		return false;

	return true;
}

BOOL func_7(ePedComponentType epctParam0) // Position - 0x51D (1309)
{
	return func_8(epctParam0);
}

BOOL func_8(Player plParam0) // Position - 0x52B (1323)
{
	return IS_BIT_SET(Global_1845298[plParam0 /*881*/].f_11.f_1, 0);
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x542 (1346)
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

BOOL func_10(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5A2 (1442)
{
	if (iParam1 == -1)
		return true;

	func_5(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x600 (1536)
{
	return uParam0->f_1;
}

BOOL func_12(var uParam0) // Position - 0x60C (1548)
{
	if (uParam0->f_1)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
			return true;

	return false;
}

void func_13(var uParam0) // Position - 0x635 (1589)
{
	if (!uParam0->f_1)
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			func_5(uParam0, false, false);

	return;
}

void func_14() // Position - 0x654 (1620)
{
	func_15();

	switch (uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			break;
	}

	return;
}

void func_15() // Position - 0x679 (1657)
{
	int num;
	ePedComponentType type;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	BOOL flag;
	int num8;

	num = NETWORK::PARTICIPANT_ID_TO_INT();
	type = PV_COMP_HEAD;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
	{
		if (!func_6(PLAYER::PLAYER_ID(), true, false) && func_369() == 0)
		{
			if (!IS_BIT_SET(uLocal_554[num /*3*/], 2))
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_651))
					func_5(&uLocal_651, false, false);
				else if (func_10(&uLocal_651, 570000, false))
					MISC::SET_BIT(&uLocal_554[num /*3*/], 2);
		}
		else
		{
			if (IS_BIT_SET(uLocal_554[num /*3*/], 2))
			{
				_STOPWATCH_DESTROY(&uLocal_651);
				MISC::CLEAR_BIT(&uLocal_554[num /*3*/], 2);
			}
		
			if (IS_BIT_SET(Global_2733190.f_915, 24))
				MISC::CLEAR_BIT(&(Global_2733190.f_915), 24);
		}
	
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_653) || func_10(&uLocal_653, 600000, false))
		{
			func_370();
			_STOPWATCH_DESTROY(&uLocal_653);
			func_5(&uLocal_653, false, false);
		}
	
		if (!IS_BIT_SET(uLocal_554[num /*3*/], 3))
			if (func_368())
				MISC::SET_BIT(&uLocal_554[num /*3*/], 3);
		else if (!func_368())
			MISC::CLEAR_BIT(&uLocal_554[num /*3*/], 3);
	}

	if (IS_BIT_SET(Global_2733190.f_900, 2))
	{
		func_339(86, &iLocal_659, false);
	
		if (func_319(86, &iLocal_658, &uLocal_660, &(Global_2733190.f_916), 2))
		{
			if (!IS_BIT_SET(Global_2733190.f_916, 2))
			{
				type = func_315(17);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num2, false, true, false);
							Global_4515492[num2 /*84*/] = joaat("char_mp_gerald");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_mp_gerald"));
						}
					}
				}
			}
		
			func_300(97, true);
			iLocal_658 = 0;
			_STOPWATCH_DESTROY(&uLocal_660);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 2);
		}
	}
	else if (iLocal_659 != 0)
	{
		iLocal_659 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 3))
	{
		func_339(18, &iLocal_663, false);
	
		if (func_319(18, &iLocal_662, &uLocal_664, &(Global_2733190.f_916), 8))
		{
			if (!IS_BIT_SET(Global_2733190.f_916, 8))
			{
				type = func_315(18);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num3, false, true, false);
							Global_4515492[num3 /*84*/] = joaat("char_simeon");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_simeon"));
						}
					}
				}
			}
		
			func_300(99, true);
			iLocal_662 = 0;
			_STOPWATCH_DESTROY(&uLocal_664);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 3);
		}
	}
	else if (iLocal_663 != 0)
	{
		iLocal_663 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 0))
	{
		func_339(12, &iLocal_680, false);
	
		if (func_319(12, &iLocal_679, &uLocal_552, &(Global_2733190.f_915), 24))
		{
			if (!IS_BIT_SET(Global_2733190.f_915, 24))
			{
				type = func_315(15);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num4, false, true, false);
							Global_4515492[num4 /*84*/] = joaat("char_lester");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_lester"));
						}
					}
				}
			}
		
			func_300(88, true);
			iLocal_679 = 0;
			_STOPWATCH_DESTROY(&uLocal_552);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 0);
		}
	}
	else if (iLocal_680 != 0)
	{
		iLocal_680 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 6))
	{
		func_339(12, &uLocal_675, true);
	
		if (func_288(12, &iLocal_674, &uLocal_676, &Global_1935585, 9))
		{
			if (!IS_BIT_SET(Global_1935585, 9))
			{
				type = func_315(36);
			
				if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
				{
					if (type > PV_COMP_HEAD)
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num5, false, true, false);
							Global_4515492[num5 /*84*/] = joaat("char_lester");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_lester"));
						}
					}
				}
			}
		
			iLocal_674 = 0;
			_STOPWATCH_DESTROY(&uLocal_676);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 6);
		}
	}

	if (IS_BIT_SET(Global_2733190.f_900, 4))
	{
		func_339(31, &iLocal_667, false);
	
		if (func_319(31, &iLocal_666, &uLocal_668, &(Global_2733190.f_916), 9))
		{
			if (!IS_BIT_SET(Global_2733190.f_916, 9))
			{
				type = func_315(19);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num6, false, true, false);
							Global_4515492[num6 /*84*/] = joaat("char_martin");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_martin"));
						}
					}
				}
			}
		
			func_300(100, true);
			iLocal_666 = 0;
			_STOPWATCH_DESTROY(&uLocal_668);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 4);
		}
	}
	else if (iLocal_667 != 0)
	{
		iLocal_667 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 5))
	{
		func_339(20, &iLocal_671, false);
	
		if (func_319(20, &iLocal_670, &uLocal_672, &(Global_2733190.f_917), 18))
		{
			if (!IS_BIT_SET(Global_2733190.f_917, 18))
			{
				type = func_315(21);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num7, false, true, false);
							Global_4515492[num7 /*84*/] = joaat("char_ron");
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, joaat("char_ron"));
						}
					}
				}
			}
		
			func_300(106, true);
			iLocal_670 = 0;
			_STOPWATCH_DESTROY(&uLocal_672);
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 5);
		}
	}
	else if (iLocal_671 != 0)
	{
		iLocal_671 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 7))
	{
		if (func_16(&flag))
		{
			if (!flag)
			{
				type = func_315(64);
			
				if (type > PV_COMP_HEAD)
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY(type, false, true, false, -1, 0))
					{
						if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
						{
							_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_REQUEST_JOB"), type, &num8, false, true, false);
							Global_4515492[num8 /*84*/] = -1266520414;
						}
						else
						{
							func_302(-type, 1, 1, 0f);
							MONEY::NETWORK_SPENT_REQUEST_JOB(type, false, true, -1266520414);
						}
					}
				}
			}
		
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 7);
		}
	}
	else if (iLocal_671 != 0)
	{
		iLocal_671 = 0;
	}

	if (IS_BIT_SET(Global_2733190.f_900, 1))
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			MISC::CLEAR_BIT(&(Global_2733190.f_900), 1);

	return;
}

BOOL func_16(var uParam0) // Position - 0xCB7 (3255)
{
	var unk;

	switch (iLocal_860)
	{
		case 0:
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_872))
			{
				func_5(&uLocal_872, false, false);
			}
			else if (func_10(&uLocal_872, 10000, false))
			{
				_STOPWATCH_DESTROY(&uLocal_872);
				iLocal_860 = iLocal_860 + 1;
			}
			break;
	
		case 1:
			iLocal_861 = func_285(func_286(func_287()));
		
			if (iLocal_861 != -1)
			{
				iLocal_860 = iLocal_860 + 1;
			}
			else
			{
				*uParam0 = 1;
				iLocal_860 = 0;
				return true;
			}
			break;
	
		case 2:
			uLocal_862 = { func_282(iLocal_861) };
		
			if (func_281(&uLocal_862))
			{
				iLocal_860 = iLocal_860 + 1;
			}
			else
			{
				*uParam0 = 1;
				iLocal_860 = 0;
				return true;
			}
			break;
	
		case 3:
			func_17(&uLocal_862, true, false, false, true);
			iLocal_860 = 4;
			break;
	
		case 4:
			unk.f_1 = -1;
			unk.f_2 = -1;
			unk.f_9 = -1;
			uLocal_862 = { unk };
			*uParam0 = 0;
			iLocal_860 = 0;
			return true;
	}

	return false;
}

void func_17(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDBF (3519)
{
	int num;
	var unk;
	var unk4;
	var unk34;
	var unk39;
	int num2;
	int num3;
	ePedComponentType type;
	eCharacter character;
	var unk70;
	var unk86;
	int num4;
	var labelName;
	var unk105;

	num = 5;
	unk = { func_280(uParam0) };
	unk4 = { func_265(uParam0) };
	unk34 = { func_248(uParam0) };
	unk39 = { func_211(uParam0) };
	num2 = func_183(num, unk, unk4, unk34, unk39, *uParam0);

	if (num2 == -1)
		return;

	func_66(uParam0->f_3, true);

	if (!bParam1)
		return;

	num3 = func_65(*uParam0, true);
	type = func_64(uParam0);
	character = func_56(uParam0);
	unk70 = { func_55(uParam0, false) };
	TEXT_LABEL_ASSIGN_STRING(&unk86, "", 64);
	num4 = 16777215;

	if (bParam4)
		num4 = func_53(uParam0);

	func_20(num3, type, unk, uParam0->f_2, character, &unk70, &unk86, uParam0->f_3, bParam3, num4, 0);

	if (bParam2)
	{
		labelName = { func_18(character) };
		TEXT_LABEL_ASSIGN_STRING(&unk105, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&labelName), 32);
		STATS::PLAYSTATS_NPC_INVITE(&unk105);
	}

	return;
}

struct<4> func_18(eCharacter echParam0) // Position - 0xEAF (3759)
{
	return _GET_CHARACTER_NAME(echParam0);
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0xEBD (3773)
{
	return Global_2349[character /*29*/].f_3;
}

void func_20(int iParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, const char* sParam7, const char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, BOOL bParam15, int iParam16, int iParam17) // Position - 0xED0 (3792)
{
	BOOL flag;
	int num;
	BOOL flag2;
	var unk;
	ePedComponentType type;
	ePedComponentType type2;
	int num2;
	BOOL flag3;
	BOOL flag4;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (iParam6 == _CHAR_NULL)
		return;

	if (!bParam15)
		if (!func_52())
			return;

	if (!func_51(sParam7, sParam8))
		return;

	flag = true;
	num = func_50(iParam6, sParam7, flag);

	if (num != -1)
	{
		flag2 = false;
		func_47(num, flag2);
	}

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_9 = -1;
	func_46(&unk);

	if (func_44(&uParam9, &unk, false))
	{
		type = func_42(&unk);
		type2 = func_38(&unk);
	}

	num2 = iParam6;
	flag3 = false;
	flag4 = false;
	num3 = 0;
	num4 = 0;
	num5 = 0;
	num6 = 0;
	num7 = 0;
	num8 = 0;
	func_21(iParam0, epctParam1, uParam2, uParam5, num2, flag3, sParam7, sParam8, uParam9, type, iParam16, bParam15, flag4, num3, num4, num5, num6, num7, num8, type2, iParam17);
	return;
}

void func_21(int iParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, const char* sParam8, const char* sParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, ePedComponentType epctParam16, int iParam17, BOOL bParam18, BOOL bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, ePedComponentType epctParam26, int iParam27) // Position - 0xFA7 (4007)
{
	ePedComponentType type;
	int num;
	int num2;
	int i;
	int num3;
	BOOL flag;
	var gamerHandle;

	type = _INVALID_PLAYER_INDEX();
	num = 145;

	if (bParam7)
		type = PLAYER::INT_TO_PLAYERINDEX(iParam6);
	else
		num = iParam6;

	if (bParam7)
	{
		if (func_36())
		{
			func_32(type, true, false, false);
			return;
		}
	}

	num2 = Global_1688990;

	if (num2 >= 12)
		num2 = num2 - 1;

	for (i = num2 - 1; i >= 0; i = i - 1)
	{
		Global_2622518[num2 /*80*/] = { Global_2622518[i /*80*/] };
		num2 = num2 - 1;
	}

	Global_1688990 = Global_1688990 + 1;

	if (Global_1688990 > 12)
		Global_1688990 = 12;

	num3 = 0;
	Global_2622518[num3 /*80*/] = false;
	Global_2622518[num3 /*80*/].f_2 = 0;
	Global_2622518[num3 /*80*/].f_4 = 0;
	Global_2622518[num3 /*80*/].f_5 = bParam18;
	Global_2622518[num3 /*80*/].f_6 = { uParam2 };
	Global_2622518[num3 /*80*/].f_9 = type;
	Global_2622518[num3 /*80*/].f_10 = num;
	Global_2622518[num3 /*80*/].f_11 = bParam7;
	Global_2622518[num3 /*80*/].f_12 = iParam5;
	Global_2622518[num3 /*80*/].f_13 = iParam0;
	Global_2622518[num3 /*80*/].f_14 = epctParam1;
	Global_2622518[num3 /*80*/].f_62 = epctParam16;
	Global_2622518[num3 /*80*/].f_63 = epctParam26;
	Global_2622518[num3 /*80*/].f_75 = iParam27;
	Global_2622518[num3 /*80*/].f_15 = func_31(iParam5, &uParam10);
	Global_2622518[num3 /*80*/].f_16 = 0;
	Global_2622518[num3 /*80*/].f_16.f_1 = 0;
	Global_2622518[num3 /*80*/].f_16.f_2 = 0;
	Global_2622518[num3 /*80*/].f_19 = 1;
	Global_2622518[num3 /*80*/].f_20 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2622518[num3 /*80*/].f_21), sParam8, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2622518[num3 /*80*/].f_37), sParam9, 64);
	Global_2622518[num3 /*80*/].f_53 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 5000);
	Global_2622518[num3 /*80*/].f_54 = -1;
	Global_2622518[num3 /*80*/].f_55 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
	Global_2622518[num3 /*80*/].f_56 = { uParam10 };
	Global_2622518[num3 /*80*/].f_64 = iParam17;
	Global_2622518[num3 /*80*/].f_68 = iParam20;
	Global_2622518[num3 /*80*/].f_69 = iParam21;
	Global_2622518[num3 /*80*/].f_71 = iParam22;
	Global_2622518[num3 /*80*/].f_74 = iParam24;
	Global_2622518[num3 /*80*/].f_79 = iParam25;
	Global_2622518[num3 /*80*/].f_3 = func_27(num3);
	Global_2622518[num3 /*80*/].f_72 = iParam23;
	Global_2622518[num3 /*80*/].f_76 = func_26(type);
	Global_2622518[num3 /*80*/].f_77 = 0;

	if (Global_2622518[num3 /*80*/].f_5)
		Global_2622518[num3 /*80*/].f_73 = 0;
	else
		Global_2622518[num3 /*80*/].f_73 = Global_2625809;

	Global_2625809 = Global_2625809 + 1;
	Global_2622518[num3 /*80*/].f_70 = -1;

	if (bParam7)
		if (func_7(type))
			if (func_25(type))
				Global_2622518[num3 /*80*/].f_70 = Global_1845298[type /*881*/].f_97.f_36;

	if (iParam5 == 40)
		Global_2622518[num3 /*80*/].f_19 = 0;

	if (!bParam7)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2622518[num3 /*80*/].f_37)))
			Global_2622518[num3 /*80*/].f_19 = 0;

	if (bParam7)
	{
		if (Global_2622518[num3 /*80*/].f_13 == PV_COMP_HEAD)
		{
			if (Global_2622518[num3 /*80*/].f_14 == 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2622518[num3 /*80*/].f_37)))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2622518[num3 /*80*/].f_37), "[HEIST PREP CUTSCENE]"))
					{
						Global_2622518[num3 /*80*/].f_19 = 0;
						Global_2622518[num3 /*80*/].f_20 = 1;
					}
				}
			}
		}
	}

	func_24();

	if (bParam19)
	{
		Global_2622518[num3 /*80*/].f_65 = 1;
		Global_2622518[num3 /*80*/].f_66 = 0;
		Global_2622518[num3 /*80*/].f_67 = 0;
	}
	else
	{
		Global_2622518[num3 /*80*/].f_65 = 0;
		Global_2622518[num3 /*80*/].f_66 = 0;
		Global_2622518[num3 /*80*/].f_67 = 1;
	}

	Global_2622518[num3 /*80*/].f_78 = 0;

	if (func_23())
	{
		if (bParam7)
		{
			flag = true;
		
			if (flag)
			{
				gamerHandle = { GET_GAMER_HANDLE_PLAYER(type) };
				Global_2622518[num3 /*80*/].f_78 = !NETWORK::_NETWORK_HAS_PLAYER_PASSED_CHECK_TYPE(1, &gamerHandle);
			}
		}
	}

	return;
}

struct<13> GET_GAMER_HANDLE_PLAYER(ePedComponentType epctParam0) // Position - 0x13A0 (5024)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(epctParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_23() // Position - 0x13B7 (5047)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_24() // Position - 0x13CD (5069)
{
	Global_1688993 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
	return;
}

BOOL func_25(ePedComponentType epctParam0) // Position - 0x13E4 (5092)
{
	return IS_BIT_SET(Global_1845298[epctParam0 /*881*/].f_11.f_1, 1);
}

int func_26(ePedComponentType epctParam0) // Position - 0x13FB (5115)
{
	var gamerHandle;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return 0;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(epctParam0) };

	if (!NETWORK::NETWORK_IS_FRIEND(&gamerHandle))
		return 0;

	if (func_7(epctParam0))
		return 0;

	return 1;
}

int func_27(int iParam0) // Position - 0x1447 (5191)
{
	int i;
	BOOL flag;

	if (Global_1688990 == 0)
		return 0;

	i = 0;
	flag = false;

	for (i = 0; i < Global_1688990; i = i + 1)
	{
		if (!func_30(i))
		{
			if (i != iParam0)
			{
				if (Global_2622518[i /*80*/].f_13 == Global_2622518[iParam0 /*80*/].f_13 && Global_2622518[i /*80*/].f_12 == Global_2622518[iParam0 /*80*/].f_12 && func_29(Global_2622518[i /*80*/].f_6, Global_2622518[iParam0 /*80*/].f_6, 1056964608, false) && MISC::ARE_STRINGS_EQUAL(&(Global_2622518[i /*80*/].f_56), &(Global_2622518[iParam0 /*80*/].f_56)))
				{
					flag = false;
				
					if (!flag)
						if (func_28(iParam0) && !func_28(i))
							flag = true;
				
					if (Global_2622518[iParam0 /*80*/].f_11 && Global_2622518[i /*80*/].f_11 || !Global_2622518[iParam0 /*80*/].f_11 && !Global_2622518[i /*80*/].f_11)
						if (flag)
							Global_2622518[i /*80*/].f_3 = 1;
						else
							return 1;
				}
			}
		}
	}

	return 0;
}

BOOL func_28(int iParam0) // Position - 0x1573 (5491)
{
	return Global_2622518[iParam0 /*80*/].f_2;
}

BOOL func_29(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x1585 (5509)
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			return true;

	return false;
}

BOOL func_30(int iParam0) // Position - 0x1600 (5632)
{
	return Global_2622518[iParam0 /*80*/].f_3;
}

int func_31(Player plParam0, const char* sParam1) // Position - 0x1612 (5650)
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return -1;

	i = 0;

	switch (plParam0)
	{
		case 63:
			for (i = 0; i < 1518; i = i + 1)
			{
				if (IS_BIT_SET(Global_794989.f_4[i /*95*/].f_82, 13))
					if (MISC::ARE_STRINGS_EQUAL(&Global_794989.f_4[i /*95*/], sParam1))
						return Global_794989.f_4[i /*95*/].f_60;
			}
			break;
	
		case 62:
			for (i = 0; i < 300; i = i + 1)
			{
				if (IS_BIT_SET(Global_960530.f_1804[i /*95*/].f_82, 13))
					if (MISC::ARE_STRINGS_EQUAL(&Global_960530.f_1804[i /*95*/], sParam1))
						return Global_960530.f_1804[i /*95*/].f_60;
			}
			break;
	
		case 40:
			return 0;
	
		default:
			if (plParam0 == PLAYER::PLAYER_ID())
			{
				for (i = 0; i < 62; i = i + 1)
				{
					if (IS_BIT_SET(Global_995355.f_4[i /*95*/].f_82, 13))
						if (MISC::ARE_STRINGS_EQUAL(&Global_995355.f_4[i /*95*/], sParam1))
							return Global_995355.f_4[i /*95*/].f_60;
				}
			}
			break;
	}

	return 0;
}

void func_32(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1734 (5940)
{
	Hash eventData;
	var gamerHandle;
	int address;
	int address2;
	int address3;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return;

	eventData = 637164059;
	eventData.f_1 = PLAYER::PLAYER_ID();
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	eventData.f_3 = { gamerHandle };

	if (bParam1)
	{
		address = 0;
		MISC::SET_BIT(&address, 6);
		eventData.f_3.f_13 = address;
		eventData.f_3.f_19 = 0;
		eventData.f_3.f_20 = 0;
	}

	if (bParam2)
	{
		address2 = 0;
		MISC::SET_BIT(&address2, 0);
		eventData.f_3.f_13 = address2;
		eventData.f_3.f_19 = 1;
		eventData.f_3.f_20 = 0;
	}

	if (bParam3)
	{
		address3 = 0;
		MISC::SET_BIT(&address3, 0);
		eventData.f_3.f_13 = address3;
		eventData.f_3.f_19 = 1;
		eventData.f_3.f_20 = 1;
	}

	eventData.f_3.f_14 = func_35(PLAYER::PLAYER_ID());
	TEXT_LABEL_ASSIGN_STRING(&(eventData.f_3.f_15), "", 16);
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 24, func_33(epctParam0), eventData);
	return;
}

int func_33(ePedComponentType epctParam0) // Position - 0x1806 (6150)
{
	int address;

	if (func_34(epctParam0))
		MISC::SET_BIT(&address, epctParam0);

	return address;
}

BOOL func_34(ePedComponentType epctParam0) // Position - 0x1821 (6177)
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

ePedComponentType func_35(Player plParam0) // Position - 0x1843 (6211)
{
	if (func_34(plParam0))
		return Global_1845298[plParam0 /*881*/].f_198.f_6;

	return PV_COMP_HEAD;
}

BOOL func_36() // Position - 0x1865 (6245)
{
	return Global_1575047 == 10;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1874 (6260)
{
	return -1;
}

ePedComponentType func_38(var uParam0) // Position - 0x187D (6269)
{
	ePedComponentType type;
	int num;

	type = 0;
	num = func_39(uParam0);

	if (num == -1)
		return type;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_86;
	
		case 62:
			return type;
	
		default:
		
	}

	return type;
}

int func_39(var uParam0) // Position - 0x18C6 (6342)
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
		return -1;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return 9999;
	
		return -1;
	}

	i = 0;

	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794989.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_794989.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_794989.f_4[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 1518; i = i + 1)
			{
				if (IS_BIT_SET(Global_794989.f_4[i /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_794989.f_4[i /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 62:
			if (IS_BIT_SET(Global_960530.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (MISC::ARE_STRINGS_EQUAL(&Global_960530.f_1804[uParam0->f_1 /*95*/], &(uParam0->f_3)))
					return uParam0->f_1;
		
			if (!IS_BIT_SET(Global_960530.f_1804[uParam0->f_1 /*95*/].f_82, 13))
				if (Global_1573131.f_5)
					return -1;
		
			for (i = 0; i < 300; i = i + 1)
			{
				if (IS_BIT_SET(Global_960530.f_1804[i /*95*/].f_82, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Global_960530.f_1804[i /*95*/], &(uParam0->f_3)))
					{
						uParam0->f_1 = i;
						return i;
					}
				}
			}
		
			return -1;
	
		case 40:
			return uParam0->f_1;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (IS_BIT_SET(Global_995355.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (MISC::ARE_STRINGS_EQUAL(&Global_995355.f_4[uParam0->f_1 /*95*/], &(uParam0->f_3)))
				return uParam0->f_1;
	
		if (IS_BIT_SET(Global_995355.f_4[uParam0->f_1 /*95*/].f_82, 13))
			if (Global_1573131.f_5)
				return -1;
	
		for (i = 0; i < 62; i = i + 1)
		{
			if (IS_BIT_SET(Global_995355.f_4[i /*95*/].f_82, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_995355.f_4[i /*95*/], &(uParam0->f_3)))
				{
					uParam0->f_1 = i;
					return i;
				}
			}
		}
	
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}

	return -1;
}

BOOL func_40(var uParam0) // Position - 0x1B1C (6940)
{
	if (Global_2628568)
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628568.f_1), &(uParam0->f_3)))
			return true;

	return false;
}

BOOL func_41(int iParam0) // Position - 0x1B41 (6977)
{
	return iParam0 == 9999;
}

ePedComponentType func_42(var uParam0) // Position - 0x1B4F (6991)
{
	var unk;
	ePedComponentType num;
	int num2;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_11 = -1;
	unk.f_13 = -1;
	num = 0;
	num2 = func_39(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			unk = { func_43(uParam0) };
			return unk.f_1;
	
		case 62:
			return num;
	
		default:
		
	}

	return num;
}

struct<14> func_43(var uParam0) // Position - 0x1BBC (7100)
{
	var unk;
	int num;

	unk.f_2 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_11 = -1;
	unk.f_13 = -1;
	num = func_39(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_144215[num /*14*/];
	
		case 62:
			return Global_960530.f_30305[num /*14*/];
	
		default:
		
	}

	return unk;
}

BOOL func_44(const char* sParam0, var uParam1, BOOL bParam2) // Position - 0x1C39 (7225)
{
	int i;
	ePedComponentType type;
	int num;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	i = 0;
	type = PV_COMP_INVALID;
	num = 1518;

	if (!bParam2)
		num = 1500;

	for (i = 0; i < num; i = i + 1)
	{
		if (IS_BIT_SET(Global_794989.f_4[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_794989.f_4[i /*95*/], sParam0))
			{
				type = Global_794989.f_4[i /*95*/].f_71;
				*uParam1 = func_45(type);
				uParam1->f_1 = i;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794989.f_4[i /*95*/] };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 300; i = i + 1)
	{
		if (IS_BIT_SET(Global_960530.f_1804[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_960530.f_1804[i /*95*/], sParam0))
			{
				type = Global_960530.f_1804[i /*95*/].f_71;
				*uParam1 = func_45(type);
				uParam1->f_1 = i;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	for (i = 0; i < 62; i = i + 1)
	{
		if (IS_BIT_SET(Global_995355.f_4[i /*95*/].f_82, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Global_995355.f_4[i /*95*/], sParam0))
			{
				type = Global_995355.f_4[i /*95*/].f_71;
				*uParam1 = func_45(type);
				uParam1->f_1 = i;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return true;
			}
		}
	}

	return false;
}

int func_45(ePedComponentType epctParam0) // Position - 0x1DC9 (7625)
{
	switch (epctParam0)
	{
		case 15:
			return 246;
	
		case 14:
			return 247;
	
		case 122:
			return 251;
	
		case PV_COMP_JBIB:
			return 248;
	
		case 13:
			return 249;
	
		case PV_COMP_MAX:
			return 250;
	
		case PV_COMP_ACCS:
			return 253;
	
		case PV_COMP_BERD:
			return 254;
	
		case PV_COMP_HAND:
			return 252;
	
		case PV_COMP_FEET:
			return 255;
	
		case PV_COMP_UPPR:
			return 258;
	
		case PV_COMP_HEAD:
			return 256;
	
		case PV_COMP_HAIR:
			return 257;
	
		case 148:
			return 49;
	
		case 151:
			return 52;
	
		case 152:
			return 53;
	
		case 157:
			return 54;
	
		case 153:
			return 55;
	
		case 154:
			return 56;
	
		case 155:
			return 57;
	
		case 159:
			return 58;
	
		case 162:
			return 51;
	
		case 142:
			return 60;
	
		case 160:
			return 62;
	
		case 164:
			return 63;
	
		case 163:
			return 64;
	
		case 166:
			return 65;
	
		case 167:
			return 66;
	
		case 168:
			return 67;
	
		case 169:
			return 68;
	
		case 170:
			return 69;
	
		case 171:
			return 70;
	
		case 172:
			return 71;
	
		case 173:
			return 72;
	
		case 178:
			return 73;
	
		case 188:
			return 74;
	
		case 214:
			return 75;
	
		case 215:
			return 76;
	
		case 216:
			return 77;
	
		case 217:
			return 78;
	
		case 218:
			return 79;
	
		case 219:
			return 80;
	
		case 220:
			return 81;
	
		case 221:
			return 82;
	
		case 179:
			return 84;
	
		case 189:
			return 83;
	
		case 180:
			return 85;
	
		case 182:
			return 87;
	
		case 183:
			return 88;
	
		case 185:
			return 89;
	
		case 186:
			return 90;
	
		case 190:
			return 91;
	
		case 191:
			return 92;
	
		case 192:
			return 93;
	
		case 193:
			return 94;
	
		case 205:
			return 102;
	
		case 194:
			return 95;
	
		case 197:
			return 96;
	
		case 198:
			return 97;
	
		case 195:
			return 98;
	
		case 199:
			return 99;
	
		case 200:
			return 100;
	
		case 201:
			return 101;
	
		case 207:
			return 103;
	
		case 208:
			return 104;
	
		case 209:
			return 105;
	
		case 210:
			return 106;
	
		case 225:
			return 107;
	
		case 226:
			return 108;
	
		case 227:
			return 109;
	
		case 229:
			return 110;
	
		case 230:
			return 111;
	
		case 233:
			return 113;
	
		case 237:
			return 115;
	
		case 238:
			return 116;
	
		case 249:
			return 123;
	
		case 239:
			return 117;
	
		case 240:
			return 118;
	
		case 241:
			return 119;
	
		case 242:
			return 120;
	
		case 244:
			return 121;
	
		case 248:
			return 122;
	
		case 250:
			return 124;
	
		case 243:
			return 125;
	
		case 158:
			return 126;
	
		case 181:
			return 86;
	
		case 150:
			return 127;
	
		case 24:
			return 128;
	
		case 26:
			return 129;
	
		case 256:
			return 130;
	
		case 258:
			return 131;
	
		case 259:
			return 133;
	
		case 271:
			return 134;
	
		case 273:
			return 135;
	
		case 276:
			return 136;
	
		case 277:
			return 137;
	
		case 262:
			return 138;
	
		case 263:
			return 139;
	
		case 264:
			return 140;
	
		case 268:
			return 141;
	
		case 269:
			return 143;
	
		case 270:
			return 144;
	
		case 275:
			return 145;
	
		case 286:
			return 146;
	
		case 267:
			return 148;
	
		case 266:
			return 147;
	
		case 287:
			return 149;
	
		case 289:
			return 150;
	
		case 147:
			return 151;
	
		case 291:
			return 152;
	
		case 292:
			return 153;
	
		case 293:
			return 154;
	
		case 294:
			return 155;
	
		case 295:
			return 156;
	
		case 296:
			return 157;
	
		case 297:
			return 158;
	
		case 298:
			return 159;
	
		case 299:
			return 160;
	
		case 300:
			return 161;
	
		case 301:
			return 162;
	
		case 288:
			return 163;
	
		case 290:
			return 164;
	
		case 304:
			return 165;
	
		case 305:
			return 166;
	
		case 306:
			return 167;
	
		case 307:
			return 168;
	
		case 308:
			return 169;
	
		case 309:
			return 170;
	
		case 310:
			return 171;
	
		case 311:
			return 172;
	
		case 312:
			return 173;
	
		case 313:
			return 174;
	
		case 314:
			return 175;
	
		case 315:
			return 176;
	
		case 316:
			return 177;
	
		case 317:
			return 178;
	
		case 318:
			return 179;
	
		case 320:
			return 180;
	
		case 322:
			return 181;
	
		case 323:
			return 182;
	
		case 324:
			return 183;
	
		case 325:
			return 184;
	
		case 326:
			return 185;
	
		case 327:
			return 186;
	
		case 328:
			return 187;
	
		case 329:
			return 188;
	
		case 330:
			return 189;
	
		case 331:
			return 190;
	
		case 332:
			return 191;
	
		case 333:
			return 192;
	
		case 337:
			return 193;
	
		case 338:
			return 194;
	
		case 339:
			return 195;
	
		case 340:
			return 196;
	
		case 343:
			return 197;
	
		case 344:
			return 198;
	
		case 345:
			return 199;
	
		case 346:
			return 200;
	
		case 347:
			return 201;
	
		case 348:
			return 202;
	
		case 349:
			return 203;
	
		case 350:
			return 204;
	
		case 351:
			return 205;
	
		case 353:
			return 207;
	
		case 354:
			return 208;
	
		case 355:
			return 209;
	
		case 356:
			return 210;
	
		case 357:
			return 211;
	
		case 358:
			return 212;
	
		case 359:
			return 213;
	
		case 360:
			return 214;
	
		case 361:
			return 215;
	
		case 362:
			return 216;
	
		case 363:
			return 217;
	
		case 364:
			return 218;
	
		case 365:
			return 219;
	
		case 366:
			return 220;
	
		case 367:
			return 221;
	
		case 368:
			return 222;
	
		case 372:
			return 223;
	
		case 373:
			return 224;
	
		case 374:
			return 225;
	
		case 375:
			return 226;
	
		case 376:
			return 227;
	
		default:
		
	}

	return 0;
}

void func_46(int iParam0) // Position - 0x25C4 (9668)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_3), "", 24);
	iParam0->f_9 = -1;
	return;
}

void func_47(int iParam0, BOOL bParam1) // Position - 0x25E7 (9703)
{
	int i;
	int num;
	int j;

	if (iParam0 >= Global_1688990)
		return;

	if (bParam1)
	{
		if (func_28(iParam0))
		{
			i = 0;
		
			for (i = 0; i <= 11; i = i + 1)
			{
				if (Global_2622518[iParam0 /*80*/].f_11)
				{
					if (MISC::GET_GAME_TIMER() > Global_2625757[i /*4*/].f_2 || Global_2625757[i /*4*/].f_2 == 0)
					{
						if (Global_2622518[iParam0 /*80*/].f_2)
						{
							Global_2625757[i /*4*/] = Global_2622518[iParam0 /*80*/].f_9;
							Global_2625757[i /*4*/].f_1 = MISC::GET_HASH_KEY(&(Global_2622518[iParam0 /*80*/].f_56));
							Global_2625757[i /*4*/].f_2 = MISC::GET_GAME_TIMER() + 30000;
							i = 12;
						}
					}
				}
			}
		}
	}

	if (Global_2622518[iParam0 /*80*/].f_54 != -1)
		HUD::THEFEED_REMOVE_ITEM(Global_2622518[iParam0 /*80*/].f_54);

	if (!Global_2622518[iParam0 /*80*/].f_19)
		if (Global_2622518[iParam0 /*80*/].f_15 != 0)
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_2622518[iParam0 /*80*/].f_15);

	num = iParam0;

	for (j = num + 1; j < Global_1688990; j = j + 1)
	{
		Global_2622518[num /*80*/] = { Global_2622518[j /*80*/] };
		num = num + 1;
	}

	func_49(num);
	Global_1688990 = Global_1688990 - 1;

	if (Global_1688991)
		if (Global_1688989 > 0)
			func_48();

	return;
}

void func_48() // Position - 0x273E (10046)
{
	Global_1688991 = false;
	return;
}

void func_49(int iParam0) // Position - 0x274B (10059)
{
	Global_2622518[iParam0 /*80*/] = false;
	Global_2622518[iParam0 /*80*/].f_2 = 0;
	Global_2622518[iParam0 /*80*/].f_3 = 0;
	Global_2622518[iParam0 /*80*/].f_4 = 0;
	Global_2622518[iParam0 /*80*/].f_5 = 0;
	Global_2622518[iParam0 /*80*/].f_6 = { 0f, 0f, 0f };
	Global_2622518[iParam0 /*80*/].f_9 = _INVALID_PLAYER_INDEX();
	Global_2622518[iParam0 /*80*/].f_10 = 145;
	Global_2622518[iParam0 /*80*/].f_11 = 1;
	Global_2622518[iParam0 /*80*/].f_12 = 0;
	Global_2622518[iParam0 /*80*/].f_13 = -1;
	Global_2622518[iParam0 /*80*/].f_14 = -1;
	Global_2622518[iParam0 /*80*/].f_15 = 0;
	Global_2622518[iParam0 /*80*/].f_16 = 0;
	Global_2622518[iParam0 /*80*/].f_16.f_1 = 0;
	Global_2622518[iParam0 /*80*/].f_16.f_2 = 0;
	Global_2622518[iParam0 /*80*/].f_19 = 0;
	Global_2622518[iParam0 /*80*/].f_20 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2622518[iParam0 /*80*/].f_21), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2622518[iParam0 /*80*/].f_37), "", 64);
	Global_2622518[iParam0 /*80*/].f_54 = -1;
	Global_2622518[iParam0 /*80*/].f_64 = 16777215;
	Global_2622518[iParam0 /*80*/].f_65 = 0;
	Global_2622518[iParam0 /*80*/].f_66 = 0;
	Global_2622518[iParam0 /*80*/].f_67 = 0;
	Global_2622518[iParam0 /*80*/].f_68 = 0;
	Global_2622518[iParam0 /*80*/].f_69 = 0;
	Global_2622518[iParam0 /*80*/].f_70 = -1;
	Global_2622518[iParam0 /*80*/].f_71 = 0;
	Global_2622518[iParam0 /*80*/].f_72 = 0;
	Global_2622518[iParam0 /*80*/].f_73 = -1;
	Global_2622518[iParam0 /*80*/].f_74 = 0;
	Global_2622518[iParam0 /*80*/].f_76 = 0;
	Global_2622518[iParam0 /*80*/].f_77 = 0;
	Global_2622518[iParam0 /*80*/].f_78 = 0;
	Global_2622518[iParam0 /*80*/].f_79 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2622518[iParam0 /*80*/].f_53 = NETWORK::GET_NETWORK_TIME();
		Global_2622518[iParam0 /*80*/].f_55 = NETWORK::GET_NETWORK_TIME();
	}

	return;
}

int func_50(eCharacter echParam0, const char* sParam1, BOOL bParam2) // Position - 0x2915 (10517)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1688990; i = i + 1)
	{
		if (!Global_2622518[i /*80*/].f_11)
		{
			if (Global_2622518[i /*80*/].f_10 == echParam0)
			{
				if (!bParam2)
					return i;
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
					return i;
			
				if (MISC::ARE_STRINGS_EQUAL(sParam1, &(Global_2622518[i /*80*/].f_21)))
					return i;
			}
		}
	}

	return -1;
}

BOOL func_51(const char* sParam0, const char* sParam1) // Position - 0x2984 (10628)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			return false;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
			return false;

	return true;
}

BOOL func_52() // Position - 0x29BF (10687)
{
	return Global_1573131.f_4;
}

int func_53(var uParam0) // Position - 0x29CD (10701)
{
	int num;
	int num2;

	num = 16777215;

	if (func_54(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_62;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_62;
	
		return num;
	}

	num2 = func_39(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			if (Global_794989.f_4[num2 /*95*/].f_84 & 16777215 == 0)
				Global_794989.f_4[num2 /*95*/].f_84 = 16777215;
		
			return Global_794989.f_4[num2 /*95*/].f_84;
	
		case 62:
			if (Global_960530.f_1804[num2 /*95*/].f_84 & 16777215 == 0)
				Global_960530.f_1804[num2 /*95*/].f_84 = 16777215;
		
			return Global_960530.f_1804[num2 /*95*/].f_84;
	
		case 40:
			return num;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return num;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

BOOL func_54(var uParam0) // Position - 0x2AE0 (10976)
{
	int num;

	num = uParam0->f_9;

	if (num == -1)
		return false;

	if (!Global_2625811.f_356[num /*75*/])
		return false;

	if (!MISC::ARE_STRINGS_EQUAL(&(Global_2625811.f_356[num /*75*/].f_10), &(uParam0->f_3)))
		return false;

	if (!IS_BIT_SET(Global_2625811.f_356[num /*75*/].f_5, 3))
		return false;

	return true;
}

struct<16> func_55(var uParam0, BOOL bParam1) // Position - 0x2B40 (11072)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "UNKNOWN", 64);

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);

	if (!bParam1)
	{
		if (func_54(uParam0))
		{
			if (IS_BIT_SET(Global_1573916.f_1[uParam0->f_9 /*2*/], 0))
				return Global_2628702[uParam0->f_9 /*16*/];
		
			return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_12;
	
		return unk;
	}

	num = func_39(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_22;
	
		case 62:
			return Global_960530.f_1804[num /*95*/].f_22;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num /*95*/].f_22;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

eCharacter func_56(var uParam0) // Position - 0x2C62 (11362)
{
	int num;
	int num2;

	num = func_57(uParam0);

	if (num == 0)
		return 145;

	num2 = num;
	return num2;
}

int func_57(var uParam0) // Position - 0x2C83 (11395)
{
	int num;

	num = func_63(uParam0);
	return func_58(num);
}

int func_58(int iParam0) // Position - 0x2C99 (11417)
{
	int num;

	if (iParam0 == 0)
		return 0;

	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
			return 0;
	
		switch (iParam0)
		{
			case 10:
				return 12;
		
			case 17:
				return 19;
		
			case 18:
				return 20;
		
			case 28:
				return 31;
		
			case 75:
				return 12;
		
			default:
			
		}
	
		return iParam0;
	}

	num = func_59(iParam0);

	if (num == 145)
		return 0;

	return num;
}

int func_59(int iParam0) // Position - 0x2D1F (11551)
{
	int i;
	int num;

	if (iParam0 == 0)
		return 145;

	i = 0;
	num = 145;

	for (i = 0; i < 52; i = i + 1)
	{
		num = func_61(i);
	
		if (iParam0 == func_60(num))
			return num;
	}

	return 145;
}

int func_60(int iParam0) // Position - 0x2D66 (11622)
{
	switch (iParam0)
	{
		case 86:
			return joaat("gerald");
	
		case 19:
			return joaat("LAMAR");
	
		case 12:
			return joaat("lester");
	
		case 31:
			return joaat("martin");
	
		case 20:
			return joaat("ron");
	
		case 18:
			return joaat("simeon");
	
		case 2:
			return joaat("TREVOR");
	
		case 76:
			return joaat("AGENT14");
	
		case 22:
			return joaat("pa");
	
		case 53:
			return joaat("hao");
	
		case 34:
			return joaat("oscar");
	
		case 152:
			return joaat("lazlow");
	
		case 85:
			return joaat("merryweather");
	
		case 84:
			return joaat("brucie");
	
		case 0:
			return joaat("MICHAEL");
	
		case 1:
			return joaat("FRANKLIN");
	
		case 153:
			return joaat("englishdave");
	
		case 151:
			return joaat("tony");
	
		case 14:
			return joaat("JIMMY");
	
		case 15:
			return joaat("tracey");
	
		case 24:
			return joaat("wade");
	
		case 30:
			return joaat("dave");
	
		case 46:
			return joaat("rickie");
	
		case 47:
			return joaat("chef");
	
		case 54:
			return joaat("hunter");
	
		case 51:
			return joaat("cris");
	
		case 60:
			return joaat("marnie");
	
		case 62:
			return joaat("maude");
	
		case 66:
			return joaat("ashley");
	
		case 69:
			return joaat("omega");
	
		case 154:
			return joaat("paige");
	
		case 82:
			return joaat("ray");
	
		case 157:
			return joaat("agatha");
	
		case 79:
			return joaat("yachtcaptain");
	
		case 167:
			return joaat("miguelmadrazo");
	
		case 169:
			return joaat("pavel");
	
		case 171:
			return joaat("moodymann");
	
		case 172:
			return joaat("sessanta");
	
		case 173:
			return joaat("kdj");
	
		case 177:
			return -763093917;
	
		case 182:
			return joaat("ulp");
	
		case 188:
			return joaat("DAX");
	
		case 190:
			return 1275694316;
	
		case 197:
			return joaat("Vincent");
	
		case 201:
			return 250638691;
	
		case 204:
			return -1234961292;
	
		case 210:
			return -1788657550;
	
		case 212:
			return 264791695;
	
		case 218:
			return 279641106;
	
		case 213:
			return -1576170725;
	
		case 214:
			return -1273745624;
	
		case 219:
			return -1439537437;
	
		case 145:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_61(int iParam0) // Position - 0x3058 (12376)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_62(num);
	return num2;
}

int func_62(int iParam0) // Position - 0x306E (12398)
{
	switch (iParam0)
	{
		case 0:
			return 86;
	
		case 1:
			return 19;
	
		case 2:
			return 12;
	
		case 3:
			return 31;
	
		case 4:
			return 20;
	
		case 5:
			return 18;
	
		case 6:
			return 2;
	
		case 7:
			return 76;
	
		case 8:
			return 22;
	
		case 9:
			return 53;
	
		case 10:
			return 34;
	
		case 11:
			return 152;
	
		case 12:
			return 85;
	
		case 13:
			return 84;
	
		case 14:
			return 0;
	
		case 15:
			return 1;
	
		case 16:
			return 153;
	
		case 17:
			return 151;
	
		case 18:
			return 14;
	
		case 19:
			return 15;
	
		case 20:
			return 24;
	
		case 21:
			return 30;
	
		case 22:
			return 46;
	
		case 23:
			return 47;
	
		case 24:
			return 54;
	
		case 25:
			return 51;
	
		case 26:
			return 60;
	
		case 27:
			return 62;
	
		case 28:
			return 66;
	
		case 29:
			return 69;
	
		case 30:
			return 154;
	
		case 31:
			return 82;
	
		case 32:
			return 157;
	
		case 33:
			return 79;
	
		case 34:
			return 167;
	
		case 35:
			return 169;
	
		case 36:
			return 171;
	
		case 37:
			return 172;
	
		case 38:
			return 173;
	
		case 39:
			return 177;
	
		case 40:
			return 182;
	
		case 41:
			return 188;
	
		case 42:
			return 190;
	
		case 43:
			return 197;
	
		case 44:
			return 201;
	
		case 45:
			return 204;
	
		case 46:
			return 210;
	
		case 47:
			return 212;
	
		case 48:
			return 218;
	
		case 49:
			return 213;
	
		case 50:
			return 214;
	
		case 51:
			return 219;
	
		default:
		
	}

	return 19;
}

int func_63(var uParam0) // Position - 0x32B8 (12984)
{
	int num;
	int num2;

	num = 0;

	if (func_54(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_61;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_61;
	
		return num;
	}

	num2 = func_39(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num2 /*95*/].f_81;
	
		case 62:
			return Global_960530.f_1804[num2 /*95*/].f_81;
	
		case 40:
			return num;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num2 /*95*/].f_81;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

ePedComponentType func_64(var uParam0) // Position - 0x3386 (13190)
{
	ePedComponentType type;
	int num;

	type = -1;

	if (func_54(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_55;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_55;
	
		return type;
	}

	num = func_39(uParam0);

	if (num == -1)
		return type;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_74;
	
		case 62:
			return Global_960530.f_1804[num /*95*/].f_74;
	
		case 40:
			return type;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num /*95*/].f_74;
	else if (uParam0->f_2 < 32)
		return type;

	return type;
}

int func_65(int iParam0, BOOL bParam1) // Position - 0x3454 (13396)
{
	switch (iParam0)
	{
		case 246:
			return 15;
	
		case 253:
			return 8;
	
		case 247:
			return 14;
	
		case 251:
			return 122;
	
		case 254:
			return 1;
	
		case 252:
			return 5;
	
		case 255:
			return 6;
	
		case 248:
			return 11;
	
		case 256:
			return 0;
	
		case 257:
			return 2;
	
		case 249:
			return 13;
	
		case 258:
			return 3;
	
		case 250:
			return 12;
	
		case 49:
			return 148;
	
		case 52:
			return 151;
	
		case 53:
			return 152;
	
		case 54:
			return 157;
	
		case 55:
			return 153;
	
		case 56:
			return 154;
	
		case 57:
			return 155;
	
		case 58:
			return 159;
	
		case 51:
			return 162;
	
		case 60:
			return 142;
	
		case 62:
			return 160;
	
		case 63:
			return 164;
	
		case 64:
			return 163;
	
		case 65:
			return 166;
	
		case 66:
			return 167;
	
		case 67:
			return 168;
	
		case 68:
			return 169;
	
		case 69:
			return 170;
	
		case 70:
			return 171;
	
		case 71:
			return 172;
	
		case 72:
			return 173;
	
		case 73:
			return 178;
	
		case 74:
			return 188;
	
		case 75:
			return 214;
	
		case 76:
			return 215;
	
		case 77:
			return 216;
	
		case 78:
			return 217;
	
		case 79:
			return 218;
	
		case 80:
			return 219;
	
		case 81:
			return 220;
	
		case 82:
			return 221;
	
		case 84:
			return 179;
	
		case 83:
			return 189;
	
		case 85:
			return 180;
	
		case 87:
			return 182;
	
		case 88:
			return 183;
	
		case 89:
			return 185;
	
		case 90:
			return 186;
	
		case 91:
			return 190;
	
		case 92:
			return 191;
	
		case 93:
			return 192;
	
		case 94:
			return 193;
	
		case 102:
			return 205;
	
		case 95:
			return 194;
	
		case 96:
			return 197;
	
		case 97:
			return 198;
	
		case 99:
			return 199;
	
		case 100:
			return 200;
	
		case 101:
			return 201;
	
		case 103:
			return 207;
	
		case 104:
			return 208;
	
		case 105:
			return 209;
	
		case 106:
			return 210;
	
		case 98:
			return 195;
	
		case 107:
			return 225;
	
		case 108:
			return 226;
	
		case 109:
			return 227;
	
		case 110:
			return 229;
	
		case 111:
			return 230;
	
		case 113:
			return 233;
	
		case 115:
			return 237;
	
		case 116:
			return 238;
	
		case 117:
			return 239;
	
		case 118:
			return 240;
	
		case 119:
			return 241;
	
		case 120:
			return 242;
	
		case 121:
			return 244;
	
		case 122:
			return 248;
	
		case 123:
			return 249;
	
		case 124:
			return 250;
	
		case 125:
			return 243;
	
		case 126:
			return 158;
	
		case 86:
			return 181;
	
		case 127:
			return 150;
	
		case 128:
			return 24;
	
		case 129:
			return 26;
	
		case 130:
			return 256;
	
		case 131:
			return 258;
	
		case 133:
			return 259;
	
		case 134:
			return 271;
	
		case 135:
			return 273;
	
		case 136:
			return 276;
	
		case 137:
			return 277;
	
		case 138:
			return 262;
	
		case 139:
			return 263;
	
		case 140:
			return 264;
	
		case 141:
			return 268;
	
		case 143:
			return 269;
	
		case 144:
			return 270;
	
		case 145:
			return 275;
	
		case 146:
			return 286;
	
		case 148:
			return 267;
	
		case 147:
			return 266;
	
		case 151:
			return 147;
	
		case 149:
			return 287;
	
		case 152:
			return 291;
	
		case 153:
			return 292;
	
		case 154:
			return 293;
	
		case 155:
			return 294;
	
		case 156:
			return 295;
	
		case 157:
			return 296;
	
		case 158:
			return 297;
	
		case 159:
			return 298;
	
		case 160:
			return 299;
	
		case 161:
			return 300;
	
		case 162:
			return 301;
	
		case 163:
			return 288;
	
		case 164:
			return 290;
	
		case 165:
			return 304;
	
		case 166:
			return 305;
	
		case 167:
			return 306;
	
		case 168:
			return 307;
	
		case 169:
			return 308;
	
		case 170:
			return 309;
	
		case 171:
			return 310;
	
		case 172:
			return 311;
	
		case 173:
			return 312;
	
		case 174:
			return 313;
	
		case 175:
			return 314;
	
		case 176:
			return 315;
	
		case 177:
			return 316;
	
		case 178:
			return 317;
	
		case 179:
			return 318;
	
		case 180:
			return 320;
	
		case 181:
			return 322;
	
		case 182:
			return 323;
	
		case 183:
			return 324;
	
		case 184:
			return 325;
	
		case 185:
			return 326;
	
		case 186:
			return 327;
	
		case 187:
			return 328;
	
		case 188:
			return 329;
	
		case 189:
			return 330;
	
		case 190:
			return 331;
	
		case 191:
			return 332;
	
		case 192:
			return 333;
	
		case 193:
			return 337;
	
		case 194:
			return 338;
	
		case 195:
			return 339;
	
		case 196:
			return 340;
	
		case 197:
			return 343;
	
		case 198:
			return 344;
	
		case 199:
			return 345;
	
		case 200:
			return 346;
	
		case 201:
			return 347;
	
		case 202:
			return 348;
	
		case 203:
			return 349;
	
		case 204:
			return 350;
	
		case 205:
			return 351;
	
		case 206:
			return 352;
	
		case 207:
			return 353;
	
		case 208:
			return 354;
	
		case 209:
			return 355;
	
		case 210:
			return 356;
	
		case 211:
			return 357;
	
		case 212:
			return 358;
	
		case 213:
			return 359;
	
		case 214:
			return 360;
	
		case 215:
			return 361;
	
		case 216:
			return 362;
	
		case 217:
			return 363;
	
		case 218:
			return 364;
	
		case 219:
			return 365;
	
		case 220:
			return 366;
	
		case 221:
			return 367;
	
		case 222:
			return 368;
	
		case 223:
			return 372;
	
		case 224:
			return 373;
	
		case 225:
			return 374;
	
		case 226:
			return 375;
	
		case 227:
			return 376;
	
		default:
		
	}

	bParam1;
	return 379;
}

void func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x3CAB (15531)
{
	int i;
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
		return;

	i = 0;
	hashKey = MISC::GET_HASH_KEY(&uParam0);

	for (i = 0; i < Global_1573885; i = i + 1)
	{
		if (Global_4526250[i /*26*/].f_25 == hashKey)
		{
			func_67(i, bParam6);
			return;
		}
	}

	return;
}

void func_67(int iParam0, BOOL bParam1) // Position - 0x3CF9 (15609)
{
	if (func_182(iParam0))
	{
		if (bParam1)
			func_181(iParam0);
		else
			func_180(iParam0);
	
		func_70(iParam0);
	}

	func_68(iParam0);
	return;
}

void func_68(int iParam0) // Position - 0x3D2A (15658)
{
	if (func_69(iParam0))
	{
		Global_1573131.f_14 = 1;
		return;
	}

	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 16);
	Global_1573131.f_14 = 1;
	return;
}

BOOL func_69(int iParam0) // Position - 0x3D5C (15708)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 16);
}

void func_70(int iParam0) // Position - 0x3D71 (15729)
{
	var unk;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (func_179() == 999 || func_179() == -1)
		return;

	unk = { func_178(iParam0) };
	flag = func_182(iParam0);
	flag2 = func_177(iParam0);
	flag3 = func_166(unk, flag2);

	if (!flag3)
	{
		flag4 = true;
	
		if (flag4)
			if (Global_1573131.f_1 < func_163(&unk))
				flag3 = true;
	}

	flag5 = false;

	if (func_162(iParam0))
		if (func_150(&unk))
			flag5 = true;

	if (flag3)
		if (flag5)
			flag3 = false;

	flag6 = false;

	if (!flag3)
	{
		if (!func_149(iParam0))
		{
			flag6 = false;
		
			if (flag5)
				flag6 = true;
		
			if (!flag6)
				flag3 = true;
		}
	}

	if (func_148(iParam0))
	{
		if (flag3)
		{
			flag3 = false;
		}
		else if (func_147(iParam0))
		{
			func_146(iParam0);
			func_143(iParam0);
		}
	}

	if (func_142(iParam0))
		if (!func_141(iParam0))
			flag3 = true;

	if (func_131())
		if (Global_4525925 > 0)
			if (!func_130(iParam0))
				flag3 = true;

	if (func_129(iParam0))
		if (func_128(PLAYER::PLAYER_ID()) || func_127(iParam0) || func_123() || func_117())
			if (!flag3)
				flag3 = true;

	if (flag == flag3)
		return;

	if (flag3)
	{
		func_116(iParam0);
		func_115(iParam0, 1);
		return;
	}

	func_114(iParam0);

	if (func_107())
		func_71(iParam0, false, 1);

	return;
}

void func_71(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3EF3 (16115)
{
	BOOL flag;
	Blip blip;
	var unk;
	BOOL flag2;
	BOOL flag3;

	if (!bParam1)
		if (func_106(iParam0))
			return;

	if (func_182(iParam0))
		return;

	if (Global_4576606)
		if (!func_104(iParam0))
			return;

	if (func_103(iParam0))
		return;

	if (func_101(iParam0))
		return;

	if (!func_100(iParam0))
		return;

	if (func_99(iParam0))
	{
		flag = true;
	
		if (flag)
			return;
	}

	if (func_98(iParam0) || func_97(iParam0))
		return;

	if (func_131())
		if (Global_4525925 > 0)
			if (!func_130(iParam0))
				return;

	blip = func_96(iParam0);

	if (HUD::GET_BLIP_INFO_ID_DISPLAY(blip) != 0)
		return;

	if (!func_95())
		if (func_94(iParam0))
			HUD::SET_BLIP_DISPLAY(blip, 5);
		else
			HUD::SET_BLIP_DISPLAY(blip, 4);

	if (func_93(iParam0) || func_89(iParam0) && !func_87(PLAYER::PLAYER_ID(), true) && !func_82(PLAYER::PLAYER_ID()) || func_81())
		HUD::SET_BLIP_AS_SHORT_RANGE(blip, false);
	else
		HUD::SET_BLIP_AS_SHORT_RANGE(blip, true);

	if (func_80(iParam0))
	{
		unk = { func_178(iParam0) };
		flag2 = func_177(iParam0);
		flag3 = func_166(unk, flag2);
	
		if (!flag3)
		{
			func_77(iParam0);
			func_76(iParam0);
		}
	}

	if (func_75(iParam0))
		HUD::SHOW_TICK_ON_BLIP(blip, true);

	func_72(iParam0);
	return;
}

void func_72(int iParam0) // Position - 0x4071 (16497)
{
	int num;
	int num2;

	if (Global_1573124 && Global_1573125)
		return;

	num = func_74(iParam0);
	num2 = func_73(iParam0);

	if (!Global_1573124)
		if (num2 == 62 && num == 257)
			Global_1573124 = true;

	if (!Global_1573125)
		if (num2 == 62 && num == 254)
			Global_1573125 = true;

	return;
}

int func_73(int iParam0) // Position - 0x40DB (16603)
{
	return Global_4526250[iParam0 /*26*/].f_15.f_2;
}

int func_74(int iParam0) // Position - 0x40EF (16623)
{
	return Global_4526250[iParam0 /*26*/].f_15;
}

BOOL func_75(int iParam0) // Position - 0x4101 (16641)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 11);
}

void func_76(int iParam0) // Position - 0x4116 (16662)
{
	MISC::CLEAR_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 0);
	return;
}

void func_77(int iParam0) // Position - 0x412D (16685)
{
	int i;
	Vector3 vector;
	Blip blip;
	int num;
	Vector3 vector2;
	float distanceBetweenCoords;
	int num2;
	float num3;
	int num4;

	if (!Global_4526182)
		return;

	i = 0;
	vector = { 0f, 0f, 0f };

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		vector = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };

	blip = func_96(iParam0);

	if (blip == 0)
		return;

	num = func_74(iParam0);

	if (num == 0)
		return;

	vector2 = { func_78(iParam0) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, vector2, true);
	num2 = 0;
	num3 = 0f;
	num4 = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_4526182.f_2[i /*3*/].f_2 == 0)
		{
			if (num2 < 3)
			{
				Global_4526182.f_2[i /*3*/] = num;
				Global_4526182.f_2[i /*3*/].f_1 = distanceBetweenCoords;
				Global_4526182.f_2[i /*3*/].f_2 = blip;
				return;
			}
		
			if (distanceBetweenCoords < num3)
			{
				Global_4526182.f_2[num4 /*3*/] = num;
				Global_4526182.f_2[num4 /*3*/].f_1 = distanceBetweenCoords;
				Global_4526182.f_2[num4 /*3*/].f_2 = blip;
			}
		
			return;
		}
	
		if (Global_4526182.f_2[i /*3*/] == num)
		{
			if (Global_4526182.f_2[i /*3*/].f_2 == blip)
				return;
		
			if (Global_4526182.f_2[i /*3*/].f_1 > num3)
			{
				num3 = Global_4526182.f_2[i /*3*/].f_1;
				num4 = i;
			}
		
			num2 = num2 + 1;
		}
	}

	if (num2 == 0)
		return;

	if (distanceBetweenCoords < num3)
	{
		Global_4526182.f_2[num4 /*3*/] = num;
		Global_4526182.f_2[num4 /*3*/].f_1 = distanceBetweenCoords;
		Global_4526182.f_2[num4 /*3*/].f_2 = blip;
	}

	return;
}

Vector3 func_78(int iParam0) // Position - 0x42B4 (17076)
{
	return Global_4526250[iParam0 /*26*/].f_3;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x42C8 (17096)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

BOOL func_80(int iParam0) // Position - 0x42DB (17115)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 0);
}

BOOL func_81() // Position - 0x42EF (17135)
{
	return Global_2685152.f_768;
}

BOOL func_82(Player plParam0) // Position - 0x42FE (17150)
{
	if (func_86(plParam0))
		return true;

	if (func_83(plParam0))
		return true;

	return false;
}

BOOL func_83(Player plParam0) // Position - 0x4321 (17185)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_85(8))
			return true;
	
		if (Global_2733190.f_5975.f_1 > 0)
			return true;
	}

	return func_84(plParam0, 20);
}

BOOL func_84(Player plParam0, int iParam1) // Position - 0x4358 (17240)
{
	return IS_BIT_SET(Global_1892925[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_85(int iParam0) // Position - 0x4370 (17264)
{
	return IS_BIT_SET(Global_2733190.f_5964, iParam0);
}

BOOL func_86(Player plParam0) // Position - 0x4382 (17282)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1892925[player /*615*/].f_1, 7);

	return false;
}

BOOL func_87(Player plParam0, BOOL bParam1) // Position - 0x43A5 (17317)
{
	if (!func_34(plParam0))
		return false;

	if (!bParam1)
		if (func_88(plParam0))
			return false;

	return func_34(Global_1892925[plParam0 /*615*/].f_10);
}

BOOL func_88(ePedComponentType epctParam0) // Position - 0x43DD (17373)
{
	if (func_34(epctParam0))
		if (func_34(Global_1892925[epctParam0 /*615*/].f_10))
			return Global_1892925[epctParam0 /*615*/].f_10 == epctParam0;

	return false;
}

BOOL func_89(int iParam0) // Position - 0x4412 (17426)
{
	int num;
	int num2;

	num = func_92(iParam0);

	if (num == 6)
		return 0;

	num2 = func_90(iParam0, num);

	if (num2 == -1)
		return 0;

	return 1;
}

int func_90(int iParam0, int iParam1) // Position - 0x4441 (17473)
{
	int num;
	int i;

	num = func_91(iParam0);
	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		if (Global_4576507[iParam1 /*5*/].f_1[i /*3*/] == num)
			return i;
	}

	return -1;
}

int func_91(int iParam0) // Position - 0x447F (17535)
{
	return Global_4526250[iParam0 /*26*/];
}

int func_92(int iParam0) // Position - 0x448F (17551)
{
	int num;

	num = func_74(iParam0);

	switch (num)
	{
		case 256:
			return 0;
	
		case 254:
			return 1;
	
		case 257:
			return 2;
	
		case 258:
			return 3;
	
		case 253:
			return 4;
	
		default:
		
	}

	return 6;
}

BOOL func_93(int iParam0) // Position - 0x44D9 (17625)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 21);
}

BOOL func_94(int iParam0) // Position - 0x44EE (17646)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 5);
}

BOOL func_95() // Position - 0x4502 (17666)
{
	return Global_2647284.f_1870;
}

Blip func_96(int iParam0) // Position - 0x4511 (17681)
{
	return Global_4526250[iParam0 /*26*/].f_11;
}

BOOL func_97(int iParam0) // Position - 0x4523 (17699)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 25);
}

BOOL func_98(int iParam0) // Position - 0x4538 (17720)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 24);
}

BOOL func_99(int iParam0) // Position - 0x454D (17741)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 22);
}

BOOL func_100(int iParam0) // Position - 0x4562 (17762)
{
	if (IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 8))
		return false;

	return true;
}

BOOL func_101(int iParam0) // Position - 0x457F (17791)
{
	if (func_102(iParam0))
		return true;

	return false;
}

BOOL func_102(int iParam0) // Position - 0x4595 (17813)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 15);
}

BOOL func_103(int iParam0) // Position - 0x45AA (17834)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 5);
}

BOOL func_104(int iParam0) // Position - 0x45BE (17854)
{
	var unk;

	unk = { func_178(iParam0) };

	if (func_105(&unk))
		return true;

	return false;
}

BOOL func_105(var uParam0) // Position - 0x45DF (17887)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_ACCS;
}

BOOL func_106(int iParam0) // Position - 0x45FD (17917)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 4);
}

BOOL func_107() // Position - 0x4611 (17937)
{
	if (func_113())
		return false;

	if (func_112())
		return false;

	if (func_111())
		return false;

	if (func_7(PLAYER::PLAYER_ID()))
		return false;

	if (func_108(PLAYER::PLAYER_ID(), 0))
		return false;

	if (func_131())
		if (Global_4525925 <= 0)
			return false;

	return true;
}

BOOL func_108(Player plParam0, int iParam1) // Position - 0x466D (18029)
{
	BOOL flag;

	if (!func_34(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_109(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_109(int iParam0, BOOL bParam1) // Position - 0x46C6 (18118)
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_110();

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

int func_110() // Position - 0x4707 (18183)
{
	return Global_1574928;
}

BOOL func_111() // Position - 0x4713 (18195)
{
	return Global_1573131.f_8;
}

BOOL func_112() // Position - 0x4721 (18209)
{
	return Global_1573860[0 /*4*/] > 0;
}

BOOL func_113() // Position - 0x4732 (18226)
{
	return Global_1573131.f_26;
}

void func_114(int iParam0) // Position - 0x4740 (18240)
{
	MISC::CLEAR_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 6);
	return;
}

void func_115(int iParam0, int iParam1) // Position - 0x4757 (18263)
{
	Blip blip;

	blip = func_96(iParam0);
	HUD::SET_BLIP_DISPLAY(blip, 0);
	return;
}

void func_116(int iParam0) // Position - 0x476E (18286)
{
	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 6);
	return;
}

BOOL func_117() // Position - 0x4785 (18309)
{
	if (func_122(PLAYER::PLAYER_ID(), false) || func_119(PLAYER::PLAYER_ID(), false))
		if (func_118(PLAYER::PLAYER_ID()) || func_83(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

BOOL func_118(Player plParam0) // Position - 0x47C6 (18374)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_84(plParam0, 9);

	return false;
}

int func_119(Player plParam0, BOOL bParam1) // Position - 0x47E4 (18404)
{
	if (Global_1892925[plParam0 /*615*/].f_10.f_34 != -1 && func_120(Global_1892925[plParam0 /*615*/].f_10.f_34))
		return 1;

	if (bParam1 && Global_1892925[plParam0 /*615*/].f_10.f_33 != -1)
		if (func_120(Global_1892925[plParam0 /*615*/].f_10.f_33))
			return 1;

	return 0;
}

BOOL func_120(int iParam0) // Position - 0x484A (18506)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return true;
	
		default:
		
	}

	return func_121(iParam0, 0);
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x48A4 (18596)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
	
		default:
		
	}

	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
		
			default:
			
		}
	}

	return 0;
}

int func_122(Player plParam0, BOOL bParam1) // Position - 0x48F9 (18681)
{
	if (func_34(plParam0))
		if (Global_1892925[plParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892925[plParam0 /*615*/].f_10.f_33 != -1)
			return 1;

	return 0;
}

BOOL func_123() // Position - 0x493D (18749)
{
	if (func_126(PLAYER::PLAYER_ID()) == 129 || func_126(PLAYER::PLAYER_ID()) == 136 || func_125(PLAYER::PLAYER_ID(), 21) || func_125(PLAYER::PLAYER_ID(), 25))
		return true;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_kill_list")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_penned_in")) > 0)
		if (func_124(PLAYER::PLAYER_ID()) || func_86(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

BOOL func_124(Player plParam0) // Position - 0x49C5 (18885)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1892925[player /*615*/].f_1, 0);

	return false;
}

BOOL func_125(Player plParam0, int iParam1) // Position - 0x49E8 (18920)
{
	return IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_222, iParam1);
}

int func_126(Player plParam0) // Position - 0x49FE (18942)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1892925[player /*615*/];

	return -1;
}

BOOL func_127(int iParam0) // Position - 0x4A1D (18973)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 26);
}

BOOL func_128(Player plParam0) // Position - 0x4A32 (18994)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1892925[player /*615*/] != -1;

	return false;
}

BOOL func_129(int iParam0) // Position - 0x4A53 (19027)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 11);
}

BOOL func_130(int iParam0) // Position - 0x4A68 (19048)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 19);
}

BOOL func_131() // Position - 0x4A7D (19069)
{
	if (func_125(PLAYER::PLAYER_ID(), 8))
		return true;

	if (func_125(PLAYER::PLAYER_ID(), 10))
		return true;

	if (func_125(PLAYER::PLAYER_ID(), 12))
		return true;

	if (func_125(PLAYER::PLAYER_ID(), 14))
		return true;

	if (func_125(PLAYER::PLAYER_ID(), 13))
		return true;

	if (func_140())
		return true;

	if (func_139())
		return true;

	if (!func_138() && !func_137())
		if (!func_136())
			if (!func_132())
				return true;

	return false;
}

BOOL func_132() // Position - 0x4B17 (19223)
{
	int num;

	if (IS_BIT_SET(Global_2733190.f_917, 7))
		return true;

	num = func_133(1304, -1);

	if (IS_BIT_SET(num, 6))
	{
		MISC::SET_BIT(&(Global_2733190.f_917), 7);
		return true;
	}

	if (func_138())
		return true;

	if (func_137())
		return true;

	return false;
}

int func_133(int iParam0, int iParam1) // Position - 0x4B67 (19303)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_134(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_134(int iParam0, int iParam1) // Position - 0x4B96 (19350)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_135(iParam1));
}

int func_135(int iParam0) // Position - 0x4BAB (19371)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_110();
	
		if (num2 > -1)
		{
			Global_2741491 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741491 = 1;
		}
	}

	return num;
}

BOOL func_136() // Position - 0x4BDF (19423)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_140, 2);
}

BOOL func_137() // Position - 0x4BF6 (19446)
{
	return Global_1575083;
}

BOOL func_138() // Position - 0x4C02 (19458)
{
	return Global_1575085;
}

BOOL func_139() // Position - 0x4C0E (19470)
{
	if (IS_BIT_SET(Global_2733190.f_917, 28) && !IS_BIT_SET(Global_2733190.f_917, 29))
		return true;

	return false;
}

BOOL func_140() // Position - 0x4C38 (19512)
{
	return IS_BIT_SET(Global_2733190.f_918, 3);
}

BOOL func_141(int iParam0) // Position - 0x4C49 (19529)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 14);
}

BOOL func_142(int iParam0) // Position - 0x4C5E (19550)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 14);
}

void func_143(int iParam0) // Position - 0x4C73 (19571)
{
	if (func_145(iParam0))
		return;

	if (func_144(iParam0))
		return;

	MISC::CLEAR_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 7);
	return;
}

BOOL func_144(int iParam0) // Position - 0x4CA2 (19618)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 8);
}

BOOL func_145(int iParam0) // Position - 0x4CB7 (19639)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 9);
}

void func_146(int iParam0) // Position - 0x4CCC (19660)
{
	if (func_145(iParam0))
		return;

	MISC::CLEAR_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 8);
	return;
}

BOOL func_147(int iParam0) // Position - 0x4CF0 (19696)
{
	return Global_4526250[iParam0 /*26*/].f_6.f_4 == 16777215;
}

BOOL func_148(int iParam0) // Position - 0x4D09 (19721)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 7);
}

BOOL func_149(int iParam0) // Position - 0x4D1D (19741)
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_6.f_4, clockHours);
}

BOOL func_150(var uParam0) // Position - 0x4D3A (19770)
{
	int i;
	int num;
	BOOL flag;

	i = 0;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_9 = -1;
	flag = func_159(*uParam0, uParam0->f_1);

	for (i = 0; i < 16; i = i + 1)
	{
		if (!func_157(i))
		{
			num = { func_156(i) };
		
			if (num == *uParam0)
				if (flag == func_159(num, num.f_1))
					if (flag)
						if (MISC::ARE_STRINGS_EQUAL(&(num.f_3), &(uParam0->f_3)))
							return func_151(func_155(i));
					else if (num.f_1 == uParam0->f_1)
						return func_151(func_155(i));
		}
	}

	return false;
}

BOOL func_151(int iParam0) // Position - 0x4DE3 (19939)
{
	int num;

	if (iParam0 == 0)
		return 0;

	num = func_153(iParam0);

	if (num == -1)
		return 0;

	if (func_152(num))
		return 1;

	return 0;
}

BOOL func_152(int iParam0) // Position - 0x4E15 (19989)
{
	return IS_BIT_SET(Global_2655292[iParam0 /*41*/].f_40, 2);
}

int func_153(int iParam0) // Position - 0x4E29 (20009)
{
	int i;
	var unk;

	i = 0;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_9 = -1;
	unk.f_16 = -1;
	unk.f_19 = -1;
	unk.f_20 = -1;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!func_157(i))
		{
			unk = { func_154(i) };
		
			if (iParam0 == unk.f_17)
				return i;
		}
	}

	return -1;
}

struct<21> func_154(int iParam0) // Position - 0x4E94 (20116)
{
	return Global_2655292[iParam0 /*41*/].f_3;
}

int func_155(int iParam0) // Position - 0x4EA9 (20137)
{
	return Global_2655292[iParam0 /*41*/].f_3.f_17;
}

struct<10> func_156(int iParam0) // Position - 0x4EBD (20157)
{
	return Global_2655292[iParam0 /*41*/].f_3;
}

BOOL func_157(int iParam0) // Position - 0x4ED2 (20178)
{
	return func_158(iParam0);
}

BOOL func_158(int iParam0) // Position - 0x4EE0 (20192)
{
	return Global_2655292[iParam0 /*41*/] == 5;
}

BOOL func_159(int iParam0, int iParam1) // Position - 0x4EF2 (20210)
{
	return func_160(3, iParam0, iParam1);
}

BOOL func_160(int iParam0, int iParam1, int iParam2) // Position - 0x4F03 (20227)
{
	int num;

	num = func_161(iParam1, iParam2);

	if (num == -1)
		return false;

	return IS_BIT_SET(Global_1674882[num /*6*/], iParam0);
}

int func_161(int iParam0, int iParam1) // Position - 0x4F2A (20266)
{
	if (iParam1 == -1)
		iParam1 = 0;
	else if (iParam1 < 0)
		return Global_1675664[iParam0 /*6*/].f_2;
	else if (iParam1 >= Global_1675664[iParam0 /*6*/].f_1)
		return Global_1675664[iParam0 /*6*/].f_2;

	return Global_1675664[iParam0 /*6*/].f_2 + iParam1;
}

BOOL func_162(int iParam0) // Position - 0x4F7D (20349)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 16);
}

ePedComponentType func_163(var uParam0) // Position - 0x4F92 (20370)
{
	if (func_159(*uParam0, uParam0->f_1))
		return func_165(uParam0);

	return func_164(*uParam0);
}

ePedComponentType func_164(int iParam0) // Position - 0x4FB8 (20408)
{
	switch (iParam0)
	{
		case 3:
			return 5;
	
		default:
		
	}

	return 0;
}

ePedComponentType func_165(var uParam0) // Position - 0x4FD2 (20434)
{
	ePedComponentType type;
	int num;

	type = 0;

	if (func_54(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_57;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_57;
	
		return type;
	}

	num = func_39(uParam0);

	if (num == -1)
		return type;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_76;
	
		case 62:
			return Global_960530.f_1804[num /*95*/].f_76;
	
		case 40:
			return type;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num /*95*/].f_76;
	else if (uParam0->f_2 < 32)
		return type;

	return type;
}

BOOL func_166(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10) // Position - 0x50A0 (20640)
{
	int num;
	int num2;

	num = iParam0;

	if (func_179() == false)
	{
		num2 = func_65(num, true);
	
		if (num2 == -1)
			return 0;
	
		if (func_167(num2, bParam10, false))
			return 0;
	
		return 1;
	}

	return 0;
}

BOOL func_167(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x50DC (20700)
{
	int num;
	int num2;

	if (Global_262145.f_8420 == 1)
	{
		if (iParam0 == 67)
			return true;
	
		if (iParam0 == 74)
			return true;
	
		if (func_169(PLAYER::PLAYER_ID(), 85))
			if (iParam0 == 64 || iParam0 == 77 || iParam0 == 61 || iParam0 == 81 || iParam0 == 63 || iParam0 == 62)
				return true;
	
		if (iParam0 == 66 || iParam0 == 116 || iParam0 == 103 || iParam0 == 104 || iParam0 == 105 || iParam0 == 119 || iParam0 == 88 || iParam0 == 75 || iParam0 == 95 || iParam0 == 65 || iParam0 == 98)
			return true;
	}

	if (iParam0 < 0)
		return false;

	if (iParam0 == 31)
		if (Global_262145.f_4408 == 1)
			return true;

	if (func_138() || func_137())
		return true;

	num = iParam0;
	num2 = num / 32;
	num = num % 32;

	if (bParam1)
		if (iParam0 == 3)
			if (func_168())
				return true;
			else
				return false;

	if (iParam0 == 14)
		return true;

	if (bParam2)
		return false;

	return IS_BIT_SET(Global_1837021[num2], num);
}

BOOL func_168() // Position - 0x5252 (21074)
{
	int num;

	if (Global_1574613)
		return true;

	if (IS_BIT_SET(Global_2733190.f_917, 23))
		return true;

	if (func_138())
		return true;

	if (func_137())
		return true;

	num = func_133(1304, -1);

	if (IS_BIT_SET(num, 7))
	{
		MISC::SET_BIT(&(Global_2733190.f_917), 23);
		return true;
	}

	return false;
}

BOOL func_169(Player plParam0, int iParam1) // Position - 0x52AF (21167)
{
	if (!func_173())
		return false;

	if (func_172())
		return false;

	if (iParam1 == 86)
		return true;

	return func_170(&(Global_1845298[plParam0 /*881*/].f_821), func_171(iParam1));
}

BOOL func_170(ePedComponentType epctParam0, int iParam1) // Position - 0x52EF (21231)
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(epctParam0->[num2], num3);
}

int func_171(int iParam0) // Position - 0x5312 (21266)
{
	switch (iParam0)
	{
		case 86:
			return 0;
	
		case 19:
			return 1;
	
		case 12:
			return 2;
	
		case 31:
			return 3;
	
		case 20:
			return 4;
	
		case 18:
			return 5;
	
		case 2:
			return 6;
	
		case 76:
			return 7;
	
		case 22:
			return 8;
	
		case 53:
			return 9;
	
		case 34:
			return 10;
	
		case 152:
			return 11;
	
		case 85:
			return 12;
	
		case 84:
			return 13;
	
		case 0:
			return 14;
	
		case 1:
			return 15;
	
		case 153:
			return 16;
	
		case 151:
			return 17;
	
		case 14:
			return 18;
	
		case 15:
			return 19;
	
		case 24:
			return 20;
	
		case 30:
			return 21;
	
		case 46:
			return 22;
	
		case 47:
			return 23;
	
		case 54:
			return 24;
	
		case 51:
			return 25;
	
		case 60:
			return 26;
	
		case 62:
			return 27;
	
		case 66:
			return 28;
	
		case 69:
			return 29;
	
		case 154:
			return 30;
	
		case 82:
			return 31;
	
		case 157:
			return 32;
	
		case 167:
			return 34;
	
		case 169:
			return 35;
	
		case 171:
			return 36;
	
		case 172:
			return 37;
	
		case 173:
			return 38;
	
		case 177:
			return 39;
	
		case 182:
			return 40;
	
		case 188:
			return 41;
	
		case 190:
			return 42;
	
		case 197:
			return 43;
	
		case 201:
			return 44;
	
		default:
		
	}

	return 1;
}

BOOL func_172() // Position - 0x54FE (21758)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_144, 3);
}

BOOL func_173() // Position - 0x5515 (21781)
{
	if (!func_174())
		return false;

	return true;
}

BOOL func_174() // Position - 0x552A (21802)
{
	if (Global_1574613)
		return true;

	if (func_138())
		return true;

	if (func_137())
		return true;

	return func_175(120, -1);
}

BOOL func_175(int iParam0, int iParam1) // Position - 0x555A (21850)
{
	Hash statHash;
	int outValue;

	statHash = func_176(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_176(int iParam0, int iParam1) // Position - 0x557E (21886)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_135(iParam1));
}

BOOL func_177(int iParam0) // Position - 0x5593 (21907)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 18);
}

struct<10> func_178(int iParam0) // Position - 0x55A8 (21928)
{
	return Global_4526250[iParam0 /*26*/].f_15;
}

BOOL func_179() // Position - 0x55BD (21949)
{
	return Global_33815;
}

void func_180(int iParam0) // Position - 0x55C8 (21960)
{
	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 7);
	return;
}

void func_181(int iParam0) // Position - 0x55DF (21983)
{
	func_180(iParam0);
	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 8);
	return;
}

BOOL func_182(int iParam0) // Position - 0x55FD (22013)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 6);
}

int func_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, int iParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79) // Position - 0x5611 (22033)
{
	BOOL flag;
	int i;
	int num;
	int num2;
	BOOL flag2;
	int num3;
	BOOL flag3;
	var string1;

	if (uParam39.f_14)
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			return -1;

	if (iParam70 == 255)
	{
		if (Global_2634772 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam70.f_3)))
			{
				if (Global_2634772 == MISC::GET_HASH_KEY(&(iParam70.f_3)))
				{
					flag = true;
				
					if (!IS_BIT_SET(uParam34.f_4, CLOCK::GET_CLOCK_HOURS()))
						flag = false;
				
					i = 0;
				
					if (flag)
					{
						for (i = 0; i < 32; i = i + 1)
						{
							if (flag)
								if (Global_2656384.f_471[i /*7*/] != -1)
									if (MISC::GET_HASH_KEY(&(Global_2656384.f_471[i /*7*/].f_1)) == Global_2634772)
										flag = false;
						}
					}
				
					if (flag)
					{
						for (i = 0; i < 32; i = i + 1)
						{
							if (flag)
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_2656384.f_471.f_226[i /*7*/]))
									if (MISC::GET_HASH_KEY(&Global_2656384.f_471.f_226[i /*7*/]) == Global_2634772)
										flag = false;
						}
					}
				
					if (flag)
						return -1;
					else
						Global_2634772 = 0;
				}
			}
		}
	}

	num = -1;
	num2 = func_210(iParam0, uParam1, iParam70);

	if (num2 != -1)
	{
		if (iParam70.f_1 == 9999)
		{
			if (Global_4526250[num2 /*26*/].f_15.f_1 != 9999 && !func_209(num2))
			{
				num = func_91(num2);
				return num;
			}
		}
	
		if (Global_4526250[num2 /*26*/].f_15.f_1 == 9999 && iParam70.f_1 == 9999)
		{
			num = func_91(num2);
			return num;
		}
	
		if (Global_4526250[num2 /*26*/].f_15.f_1 == 9999 && uParam39.f_18)
		{
			num = func_91(num2);
			return num;
		}
	
		if (func_208(num2))
			func_207(num2);
	
		if (Global_4526250[num2 /*26*/].f_15.f_1 == 9999 || iParam70.f_1 == 9999)
			Global_4526250[num2 /*26*/].f_15.f_2 = iParam70.f_2;
	
		if (func_206(num2))
			if (!uParam39.f_2)
				MISC::CLEAR_BIT(&(Global_4526250[num2 /*26*/].f_12), 1);
	
		if (func_205(num2))
			if (!uParam39.f_3)
				MISC::CLEAR_BIT(&(Global_4526250[num2 /*26*/].f_12), 2);
	
		if (func_209(num2))
			if (!uParam39.f_18)
				MISC::CLEAR_BIT(&(Global_4526250[num2 /*26*/].f_12), 17);
	
		if (iParam70.f_1 == 9999)
			if (!IS_BIT_SET(Global_4526250[num2 /*26*/].f_12, 1))
				MISC::SET_BIT(&(Global_4526250[num2 /*26*/].f_12), 1);
	
		if (iParam70.f_1 == 9999)
			if (!IS_BIT_SET(Global_4526250[num2 /*26*/].f_12, 6))
				MISC::SET_BIT(&(Global_4526250[num2 /*26*/].f_12), 6);
	
		if (func_204(num2) == 9999 && iParam70.f_1 != 9999)
			if (uParam39.f_9)
				MISC::SET_BIT(&(Global_4526250[num2 /*26*/].f_12), 6);
			else
				MISC::CLEAR_BIT(&(Global_4526250[num2 /*26*/].f_12), 6);
	
		if (Global_4526250[num2 /*26*/].f_15.f_2 != iParam70.f_2)
		{
			if (func_204(num2) != 9999 && iParam70.f_1 != 9999 && !uParam39.f_18)
			{
				if (iParam70.f_2 == 63)
				{
					Global_4526250[num2 /*26*/].f_15.f_2 = iParam70.f_2;
					Global_4526250[num2 /*26*/].f_15.f_1 = iParam70.f_1;
				}
				else if (iParam70.f_2 == 62)
				{
					if (Global_4526250[num2 /*26*/].f_15.f_2 == 63)
					{
					}
					else
					{
						Global_4526250[num2 /*26*/].f_15.f_2 = iParam70.f_2;
						Global_4526250[num2 /*26*/].f_15.f_1 = iParam70.f_1;
					}
				}
				else
				{
					iParam70.f_2 < 32;
				}
			}
		}
	
		if (Global_4526250[num2 /*26*/].f_15.f_2 == iParam70.f_2)
		{
			if (func_204(num2) != iParam70.f_1)
			{
				flag2 = true;
			
				if (func_204(num2) == 9999 && uParam39.f_18)
					flag2 = false;
			
				if (flag2)
					Global_4526250[num2 /*26*/].f_15.f_1 = iParam70.f_1;
			}
		}
	
		if (uParam39.f_8)
			MISC::SET_BIT(&(Global_4526250[num2 /*26*/].f_13), 11);
	
		if (Global_4526250[num2 /*26*/].f_6.f_2 != uParam34.f_2)
			Global_4526250[num2 /*26*/].f_6.f_2 = uParam34.f_2;
	
		num = func_91(num2);
		return num;
	}

	if (iParam70 == 0)
		return -1;

	if (iParam0 == 10)
		iParam0 = 5;

	if (uParam34.f_2 < 0.5f)
		return -1;

	if (Global_1573885 >= 1932)
		return -1;

	num3 = Global_1573885;
	func_202(num3);
	Global_4526250[num3 /*26*/].f_1 = 0;
	Global_4526250[num3 /*26*/].f_2 = iParam0;
	Global_4526250[num3 /*26*/].f_3 = { uParam1 };
	Global_4526250[num3 /*26*/].f_6 = { uParam34 };
	Global_4526250[num3 /*26*/].f_15 = { iParam70 };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4526250[num3 /*26*/].f_15.f_3)))
		Global_4526250[num3 /*26*/].f_25 = 0;
	else
		Global_4526250[num3 /*26*/].f_25 = MISC::GET_HASH_KEY(&(Global_4526250[num3 /*26*/].f_15.f_3));

	Global_4526250[num3 /*26*/].f_11 = func_194(uParam4, uParam1, false);

	if (Global_4526250[num3 /*26*/].f_11 == 0)
	{
		func_202(num3);
		return -1;
	}

	flag3 = uParam39.f_19;

	if (func_166(iParam70, flag3) && func_192(iParam70))
		func_191(num3);
	else
		func_76(num3);

	func_190(num3, uParam39);
	num = func_189();
	Global_4526250[num3 /*26*/] = num;

	if (uParam39.f_14)
		func_188(num, uParam1, &uParam39);

	if (Global_1573860[5 /*4*/] > 0)
	{
		Global_1573860[5 /*4*/].f_2 = Global_1573860[5 /*4*/].f_2 + 1;
		Global_1573860[5 /*4*/] = Global_1573860[5 /*4*/] + 1;
	}
	else
	{
		Global_1573860[5 /*4*/] = 1;
		Global_1573860[5 /*4*/].f_1 = num3;
		Global_1573860[5 /*4*/].f_2 = num3;
		Global_1573860[5 /*4*/].f_3 = num3;
	}

	Global_1573885 = Global_1573885 + 1;

	if (func_187())
	{
		string1 = { func_186() };
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&string1))
		{
			if (MISC::ARE_STRINGS_EQUAL(&string1, &(iParam70.f_3)))
			{
				if (func_182(num3))
				{
					func_180(num3);
					func_70(num3);
				}
			
				func_184(num3);
			}
		}
	}

	return num;
}

void func_184(int iParam0) // Position - 0x5C27 (23591)
{
	if (func_141(iParam0))
	{
		func_185(iParam0);
		return;
	}

	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 14);
	func_185(iParam0);
	return;
}

void func_185(int iParam0) // Position - 0x5C57 (23639)
{
	Hash hash;

	hash = Global_4526250[iParam0 /*26*/].f_25;
	Global_4576584.f_7 = hash;
	Global_4576584.f_8 = MISC::GET_GAME_TIMER() + 300000;
	return;
}

struct<6> func_186() // Position - 0x5C82 (23682)
{
	return Global_2685152.f_889;
}

BOOL func_187() // Position - 0x5C93 (23699)
{
	return Global_2685152.f_720;
}

void func_188(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5CA2 (23714)
{
	int i;

	i = 0;

	for (i = 0; i < 85; i = i + 1)
	{
		if (Global_1573169[i /*8*/] == -1)
		{
			Global_1573169[i /*8*/] = iParam0;
			Global_1573169[i /*8*/].f_1 = { uParam4->f_24 };
			Global_1573169[i /*8*/].f_4 = { uParam4->f_27 };
			Global_1573169[i /*8*/].f_7 = uParam4->f_30;
			Global_4525926[i /*3*/] = { uParam1 };
			Global_1573850 = Global_1573850 + 1;
			return;
		}
	}

	return;
}

int func_189() // Position - 0x5D23 (23843)
{
	int num;

	num = Global_1573131;
	Global_1573131 = Global_1573131 + 1;
	return num;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31) // Position - 0x5D3D (23869)
{
	if (uParam1.f_1)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 3);

	if (uParam1.f_2)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 1);

	if (uParam1.f_3)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 2);

	if (uParam1.f_4)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 15);

	if (uParam1.f_5)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 0);

	if (uParam1.f_6)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 4);

	if (uParam1.f_7)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 5);

	if (uParam1.f_8)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 11);

	if (uParam1.f_9)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 6);

	if (uParam1.f_10)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 7);

	if (uParam1.f_11)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 8);

	if (uParam1.f_12)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 9);

	if (uParam1.f_13)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 10);

	if (uParam1.f_14)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 11);

	if (uParam1.f_15)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 16);

	if (uParam1.f_16)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 13);

	if (uParam1.f_17)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 14);

	if (uParam1.f_19)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 18);

	if (uParam1.f_18)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 17);

	if (uParam1.f_20)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 22);

	if (uParam1.f_21)
	{
		if (!uParam1.f_20)
		{
		}
		else
		{
			MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 23);
		}
	}

	if (uParam1.f_22)
	{
		if (!uParam1.f_20)
		{
		}
		else
		{
			MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 24);
		}
	}

	if (uParam1.f_23)
		MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_12), 25);

	Global_4526250[iParam0 /*26*/].f_14 = uParam1;
	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 6);
	return;
}

void func_191(int iParam0) // Position - 0x5F7F (24447)
{
	MISC::SET_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 0);
	return;
}

int func_192(int iParam0) // Position - 0x5F96 (24470)
{
	int num;

	if (func_179() == false)
	{
		num = func_65(iParam0, true);
	
		if (num == -1)
			return 0;
	
		return func_193(num);
	}

	return 0;
}

int func_193(int iParam0) // Position - 0x5FC3 (24515)
{
	switch (iParam0)
	{
		case 23:
		case 27:
		case 12:
		case 122:
		case 11:
		case 14:
		case 15:
		case 8:
		case 3:
		case 6:
			return 1;
	}

	return 0;
}

Blip func_194(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, BOOL bParam33) // Position - 0x6016 (24598)
{
	Vector3 vector;
	Blip blip;
	int num;

	if (!func_201(bParam0))
		return 0;

	vector = { uParam30 };

	if (!func_29(bParam0.f_27, 0f, 0f, 0f, 1056964608, false))
		vector = { bParam0.f_27 };

	blip = 0;

	if (bParam33)
		blip = HUD::ADD_BLIP_FOR_RADIUS(vector, 80f);
	else
		blip = HUD::ADD_BLIP_FOR_COORD(vector);

	if (blip == 0)
		return 0;

	if (!bParam33)
	{
		HUD::SET_BLIP_SCALE(blip, 1f);
		HUD::SET_BLIP_SPRITE(blip, bParam0.f_1);
	}

	if (bParam33)
		HUD::SET_BLIP_ALPHA(blip, 120);

	HUD::SHOW_HEIGHT_ON_BLIP(blip, false);

	if (bParam0.f_1 == 445 || bParam0.f_1 == 447 || bParam0.f_1 == 448 || bParam0.f_1 == 449 || bParam0.f_1 == 450 || bParam0.f_1 == 451 || bParam0.f_1 == 452 || bParam0.f_1 == 453 || bParam0.f_1 == 454)
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(blip, true);
		HUD::SET_BLIP_PRIORITY(blip, 10);
		HUD::SET_BLIP_FLASH_TIMER(blip, 10000);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, "FMMC_RSTAR_MSL" /*Lamar*/);
		num = func_196(0) - 1;
	
		if (num >= 0 && num <= 7)
			if (func_195(0, num) == bParam0.f_1)
				Global_1935371 = blip;
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(blip, bParam0);
		HUD::SET_BLIP_PRIORITY(blip, bParam0.f_25);
	}

	HUD::SET_BLIP_COLOUR(blip, bParam0.f_24);
	HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(blip, bParam0.f_26);
	HUD::SHOW_TICK_ON_BLIP(blip, false);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam0.f_2)))
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME(&(bParam0.f_2));
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(bParam0.f_8)))
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(bParam0.f_8));
	
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(blip);
	}

	HUD::SET_BLIP_DISPLAY(blip, 0);
	return blip;
}

int func_195(int iParam0, int iParam1) // Position - 0x61E1 (25057)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 447;
			
				case 1:
					return 448;
			
				case 2:
					return 449;
			
				case 3:
					return 450;
			
				case 4:
					return 451;
			
				case 5:
					return 452;
			
				case 6:
					return 453;
			
				case 7:
					return 454;
			
				default:
				
			}
		
			return 445;
	
		default:
		
	}

	return 445;
}

ePedComponentType func_196(int iParam0) // Position - 0x6266 (25190)
{
	ePedComponentType type;

	if (Global_1945508[iParam0 /*8*/] == PV_COMP_INVALID)
	{
		type = func_133(func_200(iParam0), -1);
	
		if (type == -1)
		{
			func_197(iParam0, 0);
			type = 0;
		}
	
		Global_1945508[iParam0 /*8*/] = type;
	}

	return Global_1945508[iParam0 /*8*/];
}

void func_197(int iParam0, ePedComponentType epctParam1) // Position - 0x62A9 (25257)
{
	Global_1945508[iParam0 /*8*/] = epctParam1;
	func_198(func_200(iParam0), epctParam1, -1);
	return;
}

void func_198(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x62C8 (25288)
{
	func_199(iParam0, epctParam1, iParam2, true);
	return;
}

void func_199(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3) // Position - 0x62DB (25307)
{
	Hash statName;

	if (iParam0 != 16764)
	{
		statName = func_134(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, epctParam1, bParam3);
	}

	return;
}

int func_200(int iParam0) // Position - 0x6309 (25353)
{
	switch (iParam0)
	{
		case 0:
			return 14816;
	
		default:
		
	}

	return 14816;
}

BOOL func_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29) // Position - 0x6327 (25383)
{
	if (uParam0.f_1 == -1)
		return false;

	return true;
}

void func_202(int iParam0) // Position - 0x633C (25404)
{
	var unk;

	if (HUD::DOES_BLIP_EXIST(Global_4526250[iParam0 /*26*/].f_11))
		HUD::REMOVE_BLIP(&(Global_4526250[iParam0 /*26*/].f_11));

	unk = -1;
	unk.f_2 = 10;
	unk.f_6.f_4 = 16777215;
	unk.f_14 = 3;
	unk.f_15.f_1 = -1;
	unk.f_15.f_2 = -1;
	unk.f_15.f_9 = -1;
	Global_4526250[iParam0 /*26*/] = { unk };
	Global_4526250[iParam0 /*26*/].f_3 = { 0f, 0f, 0f };
	func_203(&(Global_4526250[iParam0 /*26*/].f_6));
	func_46(&(Global_4526250[iParam0 /*26*/].f_15));
	return;
}

void func_203(var uParam0) // Position - 0x63D5 (25557)
{
	var unk;

	unk.f_4 = 16777215;
	*uParam0 = { unk };
	return;
}

int func_204(int iParam0) // Position - 0x63F1 (25585)
{
	return Global_4526250[iParam0 /*26*/].f_15.f_1;
}

BOOL func_205(int iParam0) // Position - 0x6405 (25605)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 2);
}

BOOL func_206(int iParam0) // Position - 0x6419 (25625)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 1);
}

void func_207(int iParam0) // Position - 0x642D (25645)
{
	MISC::CLEAR_BIT(&(Global_4526250[iParam0 /*26*/].f_13), 4);
	return;
}

BOOL func_208(int iParam0) // Position - 0x6444 (25668)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_13, 4);
}

BOOL func_209(int iParam0) // Position - 0x6458 (25688)
{
	return IS_BIT_SET(Global_4526250[iParam0 /*26*/].f_12, 17);
}

int func_210(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x646D (25709)
{
	int i;
	Hash hashKey;

	i = 0;
	hashKey = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam4.f_3)))
		hashKey = MISC::GET_HASH_KEY(&(iParam4.f_3));

	if (hashKey != 0)
	{
		for (i = 0; i < Global_1573885; i = i + 1)
		{
			if (!func_103(i))
			{
				if (Global_4526250[i /*26*/].f_25 == hashKey)
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_4526250[i /*26*/].f_15.f_3), &(iParam4.f_3)))
					{
						if (iParam4.f_1 == 9999)
						{
							return i;
						}
						else
						{
							if (Global_4526250[i /*26*/].f_15.f_1 == 9999)
								return i;
						
							return i;
						}
					}
				}
			}
		}
	
		return -1;
	}

	for (i = 0; i < Global_1573885; i = i + 1)
	{
		if (!func_103(i))
			if (Global_4526250[i /*26*/].f_2 == iParam0 && Global_4526250[i /*26*/].f_15 == iParam4 && Global_4526250[i /*26*/].f_15.f_1 == iParam4.f_1)
				if (func_29(Global_4526250[i /*26*/].f_3, uParam1, 1056964608, false))
					return i;
	}

	return -1;
}

struct<31> func_211(var uParam0) // Position - 0x6588 (25992)
{
	var unk;

	unk = 3;
	func_247(&unk);
	func_212(uParam0, &unk);
	unk.f_2 = 1;
	unk.f_9 = 1;
	return unk;
}

void func_212(var uParam0, var uParam1) // Position - 0x65B4 (26036)
{
	*uParam1 = func_246(uParam0);
	uParam1->f_10 = 1;
	uParam1->f_7 = func_243(uParam0);
	uParam1->f_11 = func_240(uParam0);
	uParam1->f_12 = func_225(uParam0);
	uParam1->f_16 = func_224(uParam0);
	uParam1->f_13 = func_223(uParam0);
	uParam1->f_4 = func_222(uParam0);
	uParam1->f_17 = func_217(uParam0);
	uParam1->f_15 = func_216(uParam0);
	uParam1->f_19 = func_214(uParam0);
	func_213(uParam0, uParam1);
	return;
}

void func_213(var uParam0, var uParam1) // Position - 0x662C (26156)
{
	ePedComponentType type;
	var unk;
	var unk4;
	float num;
	var unk7;
	float num2;
	float num3;

	switch (*uParam0)
	{
		case 255:
			break;
	
		default:
			return;
	}

	if (*uParam0 == 255)
	{
		type = func_64(uParam0);
	
		if (type < PV_COMP_HEAD || type >= Global_1018504.f_684)
			return;
	
		unk = { Global_1018504[type /*3*/] };
		unk4 = { Global_1018504.f_256[type /*3*/] };
		num = Global_1018504.f_512[type];
		unk7 = { 0f, 0f, 0f };
		num2 = 0.1f;
		num3 = -0.1f;
	
		if (func_29(unk, unk7, 1056964608, false) || func_29(unk4, unk7, 1056964608, false) || func_29(unk, unk4, num2, false) || num > num3 && num < num2)
			return;
	
		uParam1->f_14 = 1;
		uParam1->f_24 = { unk };
		uParam1->f_27 = { unk4 };
		uParam1->f_30 = num;
		return;
	}

	return;
}

BOOL func_214(var uParam0) // Position - 0x672F (26415)
{
	switch (*uParam0)
	{
		case 258:
			return func_215(uParam0);
	
		default:
		
	}

	return false;
}

BOOL func_215(var uParam0) // Position - 0x674F (26447)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return IS_BIT_SET(Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_63, 9);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return IS_BIT_SET(Global_2628568.f_1.f_63, 9);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return IS_BIT_SET(Global_794989.f_4[num /*95*/].f_82, 9);
	
		case 62:
			return IS_BIT_SET(Global_960530.f_1804[num /*95*/].f_82, 9);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_216(var uParam0) // Position - 0x681F (26655)
{
	switch (*uParam0)
	{
		case 255:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_217(var uParam0) // Position - 0x683A (26682)
{
	if (func_218(uParam0))
		return 1;

	return 0;
}

BOOL func_218(var uParam0) // Position - 0x6850 (26704)
{
	BOOL num;
	int num2;

	num = 0;

	if (func_54(uParam0))
		return func_219(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_219(uParam0);
	
		return num;
	}

	num2 = func_39(uParam0);

	if (num2 == -1)
		return num;

	switch (uParam0->f_2)
	{
		case 63:
			return func_219(uParam0);
	
		case 62:
			return func_219(uParam0);
	
		case 40:
			return num;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return num;
	else if (uParam0->f_2 < 32)
		return num;

	return num;
}

BOOL func_219(var uParam0) // Position - 0x68FA (26874)
{
	if (func_56(uParam0) != 145 && !func_221(uParam0) && !func_220(uParam0))
		return 1;

	return 0;
}

BOOL func_220(var uParam0) // Position - 0x692B (26923)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_TEEF;
}

BOOL func_221(var uParam0) // Position - 0x6948 (26952)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_BERD;
}

int func_222(var uParam0) // Position - 0x6965 (26981)
{
	switch (*uParam0)
	{
		case 255:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_223(var uParam0) // Position - 0x6980 (27008)
{
	switch (*uParam0)
	{
		case 255:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_224(var uParam0) // Position - 0x699B (27035)
{
	if (func_218(uParam0))
		return 1;

	return 0;
}

int func_225(var uParam0) // Position - 0x69B1 (27057)
{
	if (func_218(uParam0) || *uParam0 == 255)
		return 1;

	if (func_226(func_42(uParam0)))
		return 1;

	return 0;
}

BOOL func_226(ePedComponentType epctParam0) // Position - 0x69E4 (27108)
{
	switch (epctParam0)
	{
		case 1621511611:
			return true;
	
		default:
		
	}

	if (func_238(epctParam0) || func_236(epctParam0) || func_234(epctParam0) || func_232(epctParam0) || func_230(epctParam0) || func_229(epctParam0) || func_227(*Global_4718592.f_132931))
		return true;

	return false;
}

BOOL func_227(int iParam0) // Position - 0x6A5B (27227)
{
	int i;

	if (iParam0 == 0)
		return false;

	for (i = 0; i < 8; i = i + 1)
	{
		if (iParam0 == func_228(i))
			return true;
	}

	return false;
}

int func_228(int iParam0) // Position - 0x6A90 (27280)
{
	if (iParam0 != -1)
		return Global_262145.f_37061[iParam0];

	return -1;
}

BOOL func_229(ePedComponentType epctParam0) // Position - 0x6AAF (27311)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_36469[i])
			return true;
	}

	return false;
}

BOOL func_230(ePedComponentType epctParam0) // Position - 0x6AED (27373)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i < 6; i = i + 1)
	{
		if (epctParam0 == func_231(i))
			return true;
	}

	return false;
}

ePedComponentType func_231(int iParam0) // Position - 0x6B21 (27425)
{
	if (iParam0 != -1)
		return Global_262145.f_36457[iParam0];

	return -1;
}

BOOL func_232(ePedComponentType epctParam0) // Position - 0x6B40 (27456)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i < 6; i = i + 1)
	{
		if (epctParam0 == func_233(i))
			return true;
	}

	return false;
}

ePedComponentType func_233(int iParam0) // Position - 0x6B74 (27508)
{
	if (iParam0 != -1)
		return Global_262145.f_36061[iParam0];

	return -1;
}

BOOL func_234(ePedComponentType epctParam0) // Position - 0x6B93 (27539)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i < 6; i = i + 1)
	{
		if (epctParam0 == func_235(i))
			return true;
	}

	return false;
}

ePedComponentType func_235(int iParam0) // Position - 0x6BC7 (27591)
{
	if (iParam0 != -1)
		return Global_262145.f_35570[iParam0];

	return -1;
}

int func_236(ePedComponentType epctParam0) // Position - 0x6BE6 (27622)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (epctParam0 == func_237(i))
			return 1;
	}

	return 0;
}

ePedComponentType func_237(int iParam0) // Position - 0x6C1A (27674)
{
	if (iParam0 != -1)
		return Global_262145.f_33104[iParam0];

	return -1;
}

int func_238(ePedComponentType epctParam0) // Position - 0x6C39 (27705)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (epctParam0 == func_239(i))
			return 1;
	}

	return 0;
}

ePedComponentType func_239(int iParam0) // Position - 0x6C6D (27757)
{
	if (iParam0 != -1)
		return Global_262145.f_33077[iParam0];

	return -1;
}

int func_240(var uParam0) // Position - 0x6C8C (27788)
{
	if (func_218(uParam0) || func_242(uParam0) || func_241(uParam0))
		return 1;

	if (func_226(func_42(uParam0)))
		return 1;

	return 0;
}

BOOL func_241(var uParam0) // Position - 0x6CCB (27851)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return func_220(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_220(uParam0);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return func_220(uParam0);
	
		case 62:
			return func_220(uParam0);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

BOOL func_242(var uParam0) // Position - 0x6D75 (28021)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return func_221(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_221(uParam0);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			if (func_221(uParam0))
			{
				if (Global_794989.f_4[num /*95*/].f_81 == 0)
					Global_794989.f_4[num /*95*/].f_81 = 12;
			
				return true;
			}
		
			return false;
	
		case 62:
			return func_221(uParam0);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_243(var uParam0) // Position - 0x6E45 (28229)
{
	if (func_244(uParam0) || *uParam0 == 255)
		return 1;

	return 0;
}

BOOL func_244(var uParam0) // Position - 0x6E67 (28263)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return func_245(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_245(uParam0);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return func_245(uParam0);
	
		case 62:
			return func_245(uParam0);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return flag;
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

BOOL func_245(var uParam0) // Position - 0x6F11 (28433)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_UPPR;
}

int func_246(var uParam0) // Position - 0x6F2E (28462)
{
	switch (*uParam0)
	{
		case 255:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_247(var uParam0) // Position - 0x6F49 (28489)
{
	var unk;

	unk = 3;
	*uParam0 = { unk };
	uParam0->f_24 = { 0f, 0f, 0f };
	uParam0->f_27 = { 0f, 0f, 0f };
	return;
}

struct<5> func_248(var uParam0) // Position - 0x6F74 (28532)
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;

	num.f_4 = 16777215;
	func_264(&num);
	num2 = 3;
	num3 = 3;
	num4 = 0;
	num5 = 0f;
	num6 = 16777215;
	func_249(uParam0, &num2, &num3, &num4, &num5, &num6);
	num = num2;
	num.f_1 = num3;
	num.f_2 = num5;
	num.f_3 = num4;
	num.f_4 = num6;
	return num;
}

void func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x6FD0 (28624)
{
	BOOL flag;

	switch (*uParam0)
	{
		case 246:
			*uParam3 = 1;
			break;
	
		case 247:
			*uParam3 = 4;
			break;
	
		case 251:
			*uParam3 = 22;
			break;
	
		case 248:
			*uParam3 = 8;
			break;
	
		case 249:
			*uParam3 = 14;
			break;
	
		case 250:
			*uParam3 = 16;
			break;
	
		case 253:
			*uParam3 = 2;
			break;
	
		case 254:
			*uParam3 = func_263(uParam0);
			break;
	
		case 255:
			*uParam3 = 7;
			break;
	
		case 256:
			*uParam3 = func_258(uParam0);
			break;
	
		case 257:
			*uParam3 = func_257(uParam0);
			break;
	
		case 258:
			*uParam3 = 15;
			break;
	
		default:
			*uParam3 = 0;
			break;
	}

	flag = func_256(uParam0);
	*uParam1 = func_255(uParam0->f_2, flag);
	*uParam2 = func_254(uParam0->f_2, flag);
	*uParam4 = func_251(uParam0);
	*uParam5 = func_250(uParam0);
	return;
}

int func_250(var uParam0) // Position - 0x70CB (28875)
{
	if (func_218(uParam0) || func_242(uParam0) || func_241(uParam0))
		return 16777215;

	return func_53(uParam0);
}

float func_251(var uParam0) // Position - 0x7101 (28929)
{
	if (func_242(uParam0) || func_241(uParam0) || func_253(func_42(uParam0)))
		return 1.4f;

	return func_252(*uParam0);
}

float func_252(int iParam0) // Position - 0x713D (28989)
{
	switch (iParam0)
	{
		case 249:
		case 247:
		case 246:
		case 251:
			return 1.4f;
	
		default:
		
	}

	return 2.6f;
}

BOOL func_253(ePedComponentType epctParam0) // Position - 0x7171 (29041)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_262145.f_4708[i] == epctParam0)
			return 1;
	}

	return 0;
}

int func_254(Player plParam0, BOOL bParam1) // Position - 0x71AB (29099)
{
	switch (plParam0)
	{
		case 40:
			return iLocal_7;
	
		case 63:
			return iLocal_8;
	
		case 62:
			return iLocal_9;
	
		default:
		
	}

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (bParam1)
			return Global_4525919;
	
		return iLocal_10;
	}
	else if (plParam0 < 32)
	{
		return iLocal_11;
	}

	return 3;
}

eHudColour func_255(Player plParam0, BOOL bParam1) // Position - 0x7208 (29192)
{
	switch (plParam0)
	{
		case 40:
			return ehcLocal_2;
	
		case 63:
			return ehcLocal_3;
	
		case 62:
			return ehcLocal_4;
	
		default:
		
	}

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (bParam1)
			return Global_4525918;
	
		return ehcLocal_5;
	}
	else if (plParam0 < 32)
	{
		return ehcLocal_6;
	}

	return HUD_COLOUR_GREY;
}

BOOL func_256(var uParam0) // Position - 0x7265 (29285)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return flag;
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return flag;
	
		case 62:
			return flag;
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return IS_BIT_SET(Global_995355.f_4[num /*95*/].f_82, 16);
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

int func_257(var uParam0) // Position - 0x72FE (29438)
{
	ePedComponentType type;

	type = func_64(uParam0);

	switch (type)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
			return 12;
	
		case 18:
		case 19:
			return 36;
	
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
			return 20;
	
		case PV_COMP_MAX:
		case 13:
			return 19;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
			return 11;
	
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
			return 10;
	
		case 20:
		case 21:
		case 22:
		case 23:
			return 38;
	
		case 24:
		case 25:
			return 43;
	
		case 26:
			return 45;
	
		case 27:
			return 44;
	
		case 32:
			return 49;
	
		case 30:
		case 31:
			return 50;
	
		default:
		
	}

	return 13;
}

int func_258(var uParam0) // Position - 0x73E9 (29673)
{
	if (func_261(uParam0))
		return 23;

	if (func_259(uParam0))
		return 21;

	return 3;
}

BOOL func_259(var uParam0) // Position - 0x740E (29710)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return func_260(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_260(uParam0);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return func_260(uParam0);
	
		case 62:
			return func_260(uParam0);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return func_260(uParam0);
	else if (uParam0->f_2 < 32)
		return flag;

	return flag;
}

BOOL func_260(var uParam0) // Position - 0x74BC (29884)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_FEET;
}

BOOL func_261(var uParam0) // Position - 0x74D9 (29913)
{
	BOOL flag;
	int num;

	flag = 0;

	if (func_54(uParam0))
		return func_262(uParam0);

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return func_262(uParam0);
	
		return flag;
	}

	num = func_39(uParam0);

	if (num == -1)
		return flag;

	switch (uParam0->f_2)
	{
		case 63:
			return func_262(uParam0);
	
		case 62:
			return func_262(uParam0);
	
		case 40:
			return flag;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (Global_1575085)
			return func_262(uParam0);
	
		return IS_BIT_SET(Global_995355.f_4[num /*95*/].f_82, 7);
	}
	else if (uParam0->f_2 < 32)
	{
		return flag;
	}

	return flag;
}

BOOL func_262(var uParam0) // Position - 0x759F (30111)
{
	if (*uParam0 != 256)
		return false;

	return func_64(uParam0) == PV_COMP_HAND;
}

int func_263(var uParam0) // Position - 0x75BC (30140)
{
	ePedComponentType type;

	type = func_64(uParam0);

	switch (type)
	{
		case PV_COMP_HEAD:
			return 5;
	
		case PV_COMP_BERD:
			return 18;
	
		case PV_COMP_HAIR:
			return 17;
	
		case PV_COMP_UPPR:
			return 41;
	
		case PV_COMP_LOWR:
			return 42;
	
		default:
		
	}

	return 5;
}

void func_264(var uParam0) // Position - 0x760A (30218)
{
	func_203(uParam0);
	return;
}

struct<30> func_265(var uParam0) // Position - 0x7618 (30232)
{
	int num;
	int num2;
	int num3;
	var unk30;
	var unk36;
	int num4;
	int num5;
	int num6;
	BOOL flag;

	num = 1;
	num.f_1 = -1;
	num.f_25 = 5;
	func_279(&num);
	num2 = 17;
	num3 = 1;
	TEXT_LABEL_ASSIGN_STRING(&unk30, "", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk36, "", 64);
	num4 = 4;
	num5 = 0;
	num6 = 1;
	flag = false;
	func_267(uParam0, &num2, &num3, &unk30, &unk36, &num4, &num5, &flag);

	if (flag || func_266(*uParam0, uParam0->f_1))
		num6 = 0;

	num = num6;
	num.f_1 = num2;
	num.f_2 = { unk30 };
	num.f_8 = { unk36 };
	num.f_25 = num3;
	num.f_24 = num4;
	num.f_26 = num5;
	return num;
}

BOOL func_266(int iParam0, int iParam1) // Position - 0x76BC (30396)
{
	return func_160(5, iParam0, iParam1);
}

void func_267(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, var uParam6, var uParam7) // Position - 0x76CD (30413)
{
	BOOL flag;

	*uParam1 = 17;
	*uParam2 = 1;
	TEXT_LABEL_ASSIGN_STRING(sParam3, "", 24);
	TEXT_LABEL_ASSIGN_STRING(sParam4, "", 64);
	*uParam5 = 40;
	*uParam6 = 0;
	flag = false;

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		if (func_256(uParam0))
			flag = true;

	switch (uParam0->f_2)
	{
		case 40:
			*uParam5 = 4;
			break;
	
		case 63:
			*uParam5 = 3;
			break;
	
		case 62:
			*uParam5 = 3;
			break;
	
		default:
			if (uParam0->f_2 == PLAYER::PLAYER_ID())
				if (func_256(uParam0))
					*uParam5 = 5;
				else
					*uParam5 = 4;
			else if (uParam0->f_2 < 32)
				*uParam5 = 5;
			break;
	}

	switch (*uParam0)
	{
		case 246:
			*uParam1 = 311;
			*uParam2 = 1;
			return;
	
		case 253:
			if (uParam0->f_2 == 63)
			{
				*uParam1 = 94;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_BJ" /*Paracaidismo*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam1 = 94;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_BJ" /*Paracaidismo*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam1 = 94;
				*uParam2 = 3;
				*uParam6 = 1;
			
				if (flag)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_BM_BASE" /*Paracaidismo marcado*/, 24);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_PL_BASE" /*~a~ Paracaidismo*/, 24);
					TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				}
			}
		
			return;
	
		case 247:
			*uParam1 = 103;
			*uParam2 = 1;
			return;
	
		case 251:
			*uParam1 = 90;
			*uParam2 = 1;
			TEXT_LABEL_ASSIGN_STRING(sParam3, "HUD_MG_PILOT" /*Escuela de vuelo de San Andreas*/, 24);
			return;
	
		case 254:
			*uParam1 = func_274(func_64(uParam0));
		
			if (uParam0->f_2 == 63)
			{
				*uParam2 = 2;
				*sParam3 = { func_273(func_64(uParam0), true, false) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam2 = 2;
				*sParam3 = { func_273(func_64(uParam0), true, false) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam2 = 3;
				*sParam3 = { func_273(func_64(uParam0), false, flag) };
				TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				*uParam6 = 1;
			}
		
			return;
	
		case 255:
			*uParam5 = 1;
		
			if (uParam0->f_2 == 63)
			{
				*uParam1 = 406;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_GA" /*Ataque a banda*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam1 = 406;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_GA" /*Ataque a banda*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam1 = 406;
				*uParam2 = 3;
				*uParam6 = 1;
			
				if (flag)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_BM_GH" /*Ataque a banda marcado*/, 24);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_PL_GH" /*~a~ Ataque a banda*/, 24);
					TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				}
			}
		
			return;
	
		case 248:
			*uParam1 = 109;
			*uParam2 = 1;
			return;
	
		case 256:
			*uParam1 = func_272(func_64(uParam0), 0);
		
			if (uParam0->f_2 == 63)
			{
				if (func_64(uParam0) == PV_COMP_ACCS)
				{
					*uParam1 = func_271(MISC::GET_HASH_KEY(&(uParam0->f_3)), *uParam1);
					*uParam5 = 60;
					*uParam2 = 2;
					*uParam7 = 0;
				}
				else
				{
					*uParam2 = 2;
				}
			
				*sParam3 = { func_270(func_64(uParam0), true, false, 0) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam2 = 2;
				*sParam3 = { func_270(func_64(uParam0), true, false, 0) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam2 = 3;
				*uParam6 = 1;
				TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				*sParam3 = { func_270(func_64(uParam0), false, flag, 0) };
			}
		
			return;
	
		case 257:
			*uParam1 = func_269(func_64(uParam0));
		
			if (uParam0->f_2 == 63)
			{
				*uParam2 = 2;
				*sParam3 = { func_268(func_64(uParam0), true, false) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam2 = 2;
				*sParam3 = { func_268(func_64(uParam0), true, false) };
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam2 = 3;
				*sParam3 = { func_268(func_64(uParam0), false, flag) };
				TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				*uParam6 = 1;
			}
		
			return;
	
		case 249:
			*uParam1 = 119;
			*uParam2 = 1;
			return;
	
		case 258:
			if (uParam0->f_2 == 63)
			{
				*uParam1 = 305;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_HM" /*Supervivencia*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 == 62)
			{
				*uParam1 = 305;
				*uParam2 = 2;
				TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_RSTAR_HM" /*Supervivencia*/, 24);
				*uParam6 = 1;
			}
			else if (uParam0->f_2 < 32)
			{
				*uParam1 = 305;
				*uParam2 = 3;
				*uParam6 = 1;
			
				if (flag)
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_BM_HM" /*Supervivencia marcada*/, 24);
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(sParam3, "FMMC_PL_HM" /*~a~ Supervivencia*/, 24);
					TEXT_LABEL_ASSIGN_STRING(sParam4, func_275(uParam0), 64);
				}
			}
		
			return;
	
		case 250:
			*uParam1 = 122;
			*uParam2 = 1;
			return;
	
		default:
			return;
	}

	return;
}

struct<6> func_268(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7B41 (31553)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);

	switch (epctParam0)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_LR" /*Carrera terrestre marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_LR" /*Carrera terrestre*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_LR" /*~a~ Carrera terrestre*/, 24);
			return unk;
	
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_OFR" /*Carrera a pie marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_OFR" /*Carrera a pie*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_OFR" /*~a~ carrera a pie*/, 24);
			return unk;
	
		case PV_COMP_MAX:
		case 13:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_BR" /*Carrera de dos ruedas marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_BR" /*Carrera de motos*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_BR" /*~a~ carrera de motos*/, 24);
			return unk;
	
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_SR" /*Carrera acrobática marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_STR" /*Carrera acrobática*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_SR" /*~a~ Carrera acrobática*/, 24);
			return unk;
	
		case 18:
		case 19:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_TAR" /*Carrera de ataque al objetivo marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_TAR" /*Carrera de ataque al objetivo*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_TAR" /*~a~ Carrera de ataque al objetivo*/, 24);
			return unk;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_WR" /*Carrera marítima marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_WR" /*Carrera marítima*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_WR" /*~a~ Carrera marítima*/, 24);
			return unk;
	
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_AR" /*Carrera aérea marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_AR" /*Carrera aérea*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_AR" /*~a~ Carrera aérea*/, 24);
			return unk;
	
		case 20:
		case 21:
		case 22:
		case 23:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_AW" /*Carrera de arena marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTARAWR" /*Carrera de arena*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_AW" /*Carrera de arena ~a~*/, 24);
			return unk;
	
		case 24:
		case 25:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_OW" /*Carrera de ruedas descubiertas marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_OW" /*Ruedas descubiertas*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_OW" /*Carrera de ruedas descubiertas ~a~*/, 24);
			return unk;
	
		case 26:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_PU" /*Carrera de persecución marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_PU" /*Carrera de persecución*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_PU" /*Carrera de persecución ~a~*/, 24);
			return unk;
	
		case 27:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_ST" /*Carrera urbana marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_ST" /*Carrera urbana*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_ST" /*Carrera urbana ~a~*/, 24);
			return unk;
	
		case 30:
		case 31:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_DRR" /*Carrera de derrapes marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_DRR" /*Carrera de derrapes*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_DRR" /*Carrera de derrapes ~a~*/, 24);
			return unk;
	
		case 32:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_DRG" /*Carrera de aceleración marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_DRG" /*Carrera de aceleración*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_DRG" /*Carrera de aceleración ~a~*/, 24);
			return unk;
	
		default:
		
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_LR" /*Carrera terrestre*/, 24);
	return unk;
}

int func_269(ePedComponentType epctParam0) // Position - 0x7EBB (32443)
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
		case PV_COMP_BERD:
			return 315;
	
		case PV_COMP_FEET:
		case PV_COMP_TEEF:
			return 435;
	
		case 18:
		case 19:
			return 610;
	
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
			return 379;
	
		case PV_COMP_MAX:
		case 13:
			return 376;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
			return 316;
	
		case PV_COMP_LOWR:
		case PV_COMP_HAND:
			return 314;
	
		case 20:
		case 21:
		case 22:
		case 23:
			return 644;
	
		case 24:
		case 25:
			return 726;
	
		case 26:
			return 786;
	
		case 27:
			return 785;
	
		case 30:
		case 31:
			return 877;
	
		case 32:
			return 876;
	
		default:
		
	}

	return 309;
}

struct<6> func_270(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x7FB1 (32689)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);

	switch (epctParam0)
	{
		case PV_COMP_BERD:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MHST" /*Golpe*/, 24);
			return unk;
	
		case PV_COMP_TEEF:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_HP" /*Planeación*/, 24);
			return unk;
	
		case PV_COMP_HAND:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_LTS" /*UEEP marcado*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MLTS" /*Último equipo en pie*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_LTS" /*Último equipo en pie ~a~*/, 24);
			return unk;
	
		case PV_COMP_FEET:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_CTF" /*Captura marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MCTF" /*Captura*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_CTF" /*~a~ Captura*/, 24);
			return unk;
	
		case PV_COMP_ACCS:
			if (iParam3 == 0)
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MSL" /*Lamar*/, 24);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MS" /*Misión*/, 24);
		
			return unk;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MSA" /*Modo Adversario*/, 24);
			return unk;
	
		case 14:
			if (bParam2)
				TEXT_LABEL_ASSIGN_STRING(&unk, "PMC_BM_MSS" /*Contenido del creador de misiones marcado*/, 24);
			else if (bParam1)
				TEXT_LABEL_ASSIGN_STRING(&unk, "PMC_RSTAR_MCC" /*Cont. creador de misiones*/, 24);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "PMC_PL_MSS" /*Contenido del creador de misiones ~a~*/, 24);
		
			return unk;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_HEAD:
		case PV_COMP_LOWR:
		case PV_COMP_TASK:
		case 13:
			if (bParam2)
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_MISS" /*Misión marcada*/, 24);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MS" /*Misión*/, 24);
		
			return unk;
	
		default:
		
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_MS" /*Misión*/, 24);
	return unk;
}

int func_271(Hash hParam0, int iParam1) // Position - 0x816A (33130)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (hParam0 == Global_262145.f_9613[i] || hParam0 == MISC::GET_HASH_KEY(&Global_794989.f_4[Global_794989.f_165468[0 /*11*/][i] /*95*/]))
			return func_195(0, i);
	}

	return iParam1;
}

int func_272(ePedComponentType epctParam0, int iParam1) // Position - 0x81C7 (33223)
{
	switch (epctParam0)
	{
		case PV_COMP_BERD:
			return 59;
	
		case PV_COMP_TEEF:
			return 59;
	
		case PV_COMP_HAND:
			return 409;
	
		case PV_COMP_FEET:
			return 408;
	
		case 14:
			return 953;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_HEAD:
		case PV_COMP_LOWR:
		case PV_COMP_TASK:
		case 129:
			return 304;
	
		case PV_COMP_ACCS:
			if (iParam1 == 0)
				return 445;
			else
				return 304;
			break;
	}

	return 304;
}

struct<6> func_273(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2) // Position - 0x825B (33371)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 24);

	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_DM" /*Partida a muerte marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_DM" /*Partida a muerte*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_DM" /*~a~ Partida a muerte*/, 24);
			return unk;
	
		case PV_COMP_BERD:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_TDM" /*Partida a muerte por equipos marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_TDM" /*Partida a muerte por equipos*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_TDM" /*~a~ Partida a muerte por equipos*/, 24);
			return unk;
	
		case PV_COMP_HAIR:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_VDM" /*Partida a muerte con vehículos marcada*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_VDM" /*Partida a muerte con vehículos*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_VDM" /*~a~ Partida a muerte con vehículos*/, 24);
			return unk;
	
		case PV_COMP_UPPR:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_KOTH" /*Rey de la colina marcado*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_KOTH" /*Rey de la colina*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_KOTH" /*Rey de la colina ~a~*/, 24);
			return unk;
	
		case PV_COMP_LOWR:
			if (bParam2)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_BM_TKOTH" /*Rey de la colina por equipos marcado*/, 24);
				return unk;
			}
		
			if (bParam1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTR_TKOTH" /*Rey de la Colina por equipos*/, 24);
				return unk;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_PL_TKOTH" /*Rey de la colina por equipos ~a~*/, 24);
			return unk;
	
		default:
		
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "FMMC_RSTAR_DM" /*Partida a muerte*/, 24);
	return unk;
}

int func_274(ePedComponentType epctParam0) // Position - 0x83AD (33709)
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 310;
	
		case PV_COMP_BERD:
			return 378;
	
		case PV_COMP_HAIR:
			return 380;
	
		case PV_COMP_UPPR:
			return 674;
	
		case PV_COMP_LOWR:
			return 675;
	
		default:
		
	}

	return 310;
}

const char* func_275(var uParam0) // Position - 0x83FB (33787)
{
	ePedComponentType type;
	var unk;
	const char* str;

	if (func_278(uParam0->f_2))
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("FM_LOC_ROCKS" /*Rockstar*/);

	if (uParam0->f_2 < 32 && !func_41(uParam0->f_1))
	{
		type = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_2);
	
		if (_NETWORK_IS_PLAYER_VALID(type, false, true))
			return PLAYER::GET_PLAYER_NAME(type);
	}

	TEXT_LABEL_COPY(&unk, { func_277(uParam0) }, 6);
	str = "";

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		str = " ";
	else
		str = func_276(&unk);

	return str;
}

char* func_276(var uParam0) // Position - 0x847B (33915)
{
	return uParam0;
}

struct<16> func_277(var uParam0) // Position - 0x8485 (33925)
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "[UNKNOWN]", 64);

	if (func_54(uParam0))
	{
		TEXT_LABEL_COPY(&unk, { Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_6 }, 16);
		return unk;
	}

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
		{
			TEXT_LABEL_COPY(&unk, { Global_2628568.f_1.f_6 }, 16);
			return unk;
		}
	
		return unk;
	}

	num = func_39(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_6;
	
		case 62:
			TEXT_LABEL_COPY(&unk, { Global_960530.f_3[num /*6*/] }, 16);
			return unk;
	
		case 40:
			return unk;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num /*95*/].f_6;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

BOOL func_278(int iParam0) // Position - 0x8591 (34193)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return true;
	
		default:
		
	}

	return false;
}

void func_279(var uParam0) // Position - 0x85BD (34237)
{
	var unk;

	unk = 1;
	unk.f_1 = -1;
	unk.f_25 = 5;
	*uParam0 = { unk };
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_8), "", 64);
	uParam0->f_27 = { 0f, 0f, 0f };
	return;
}

Vector3 func_280(var uParam0) // Position - 0x85FB (34299)
{
	var unk;
	int num;

	unk = { 0f, 0f, 0f };

	if (func_54(uParam0))
		return Global_2625811.f_356[uParam0->f_9 /*75*/].f_10.f_44;

	if (func_41(uParam0->f_1))
	{
		if (func_40(uParam0))
			return Global_2628568.f_1.f_44;
	
		return unk;
	}

	num = func_39(uParam0);

	if (num == -1)
		return unk;

	switch (uParam0->f_2)
	{
		case 63:
			return Global_794989.f_4[num /*95*/].f_62;
	
		case 62:
			return Global_960530.f_1804[num /*95*/].f_62;
	
		default:
		
	}

	if (uParam0->f_2 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[num /*95*/].f_62;
	else if (uParam0->f_2 < 32)
		return unk;

	return unk;
}

BOOL func_281(var uParam0) // Position - 0x86D4 (34516)
{
	int num;

	num = func_39(uParam0);

	if (num == -1)
		return false;

	return true;
}

struct<10> func_282(int iParam0) // Position - 0x86EF (34543)
{
	int num;
	Player player;
	int num2;
	ePedComponentType type;

	num.f_1 = -1;
	num.f_2 = -1;
	num.f_9 = -1;
	func_46(&num);
	player = Global_2629410[iParam0 /*10*/].f_4;
	num2 = Global_2629410[iParam0 /*10*/].f_5;
	type = func_284(player, num2);
	num = func_45(type);
	num.f_1 = num2;
	num.f_2 = player;
	num.f_3 = { func_283(player, num2) };
	return num;
}

struct<6> func_283(Player plParam0, int iParam1) // Position - 0x875B (34651)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "UNKNOWN", 24);

	if (func_41(iParam1))
	{
		if (Global_2628568)
			return Global_2628568.f_1;
	
		return unk;
	}

	switch (plParam0)
	{
		case 63:
			unk = { Global_794989.f_4[iParam1 /*95*/] };
			return unk;
	
		case 62:
			unk = { Global_960530.f_1804[iParam1 /*95*/] };
			return unk;
	
		default:
		
	}

	if (plParam0 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[iParam1 /*95*/];
	else if (plParam0 < 32)
		return unk;

	return unk;
}

ePedComponentType func_284(Player plParam0, int iParam1) // Position - 0x87FE (34814)
{
	if (func_41(iParam1))
	{
		if (Global_2628568)
			return Global_2628568.f_1.f_53;
	
		return 379;
	}

	switch (plParam0)
	{
		case 63:
			return Global_794989.f_4[iParam1 /*95*/].f_71;
	
		case 62:
			return Global_960530.f_1804[iParam1 /*95*/].f_71;
	
		default:
		
	}

	if (plParam0 == PLAYER::PLAYER_ID())
		return Global_995355.f_4[iParam1 /*95*/].f_71;
	else if (plParam0 < 32)
		return 379;

	return 379;
}

int func_285(ePedComponentType epctParam0) // Position - 0x8887 (34951)
{
	int num;
	int i;

	num = -1;

	for (i = 0; i < 500; i = i + 1)
	{
		if (Global_2629410[i /*10*/].f_3 == epctParam0)
		{
			num = i;
			break;
		}
	}

	return num;
}

var func_286(int iParam0) // Position - 0x88BE (35006)
{
	return Global_262145.f_28854[iParam0];
}

int func_287() // Position - 0x88D1 (35025)
{
	return func_133(8976, -1);
}

BOOL func_288(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x88E1 (35041)
{
	ePedComponentType type;

	type == type;
	iParam0 == iParam0;

	switch (*uParam1)
	{
		case 0:
			if (!_STOPWATCH_IS_INITIALIZED(uParam2))
			{
				func_5(uParam2, false, false);
			}
			else if (func_10(uParam2, 10000, false))
			{
				iLocal_678 = -1;
				*uParam1 = *uParam1 + 1;
				MISC::CLEAR_BIT(iParam3, iParam4);
			}
			break;
	
		case 1:
			type = func_35(PLAYER::PLAYER_ID());
			iLocal_678 = Global_2733190.f_902;
		
			if (iLocal_678 != -1)
			{
				func_289(iLocal_678);
				*uParam1 = *uParam1 + 1;
			}
			else
			{
				MISC::SET_BIT(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
	
		case 99:
			return true;
	}

	return false;
}

void func_289(int iParam0) // Position - 0x898F (35215)
{
	if (Global_2635124 <= iParam0)
		return;

	if (func_299() != 0 && func_299() != 1)
		return;

	Global_2635533 = func_293(Global_2634773[iParam0 /*14*/].f_12);
	Global_2635534 = false;
	func_292(Global_2634773[iParam0 /*14*/].f_12);
	func_291(2, 0);

	if (IS_BIT_SET(Global_2635522, 19))
	{
		MISC::CLEAR_BIT(&Global_2635522, 19);
		func_290();
	}

	return;
}

void func_290() // Position - 0x89FD (35325)
{
	Global_2635535.f_2 = 0;
	Global_2635535.f_3 = 0;
	return;
}

void func_291(int iParam0, int iParam1) // Position - 0x8A13 (35347)
{
	Global_2635125 = iParam0;

	if (iParam0 != 0)
	{
		iParam1 != 0;
		return;
	}

	if (iParam1 == 0)
		iParam1 = 120000;

	Global_2635125.f_18 = iParam1;
	return;
}

void func_292(ePedComponentType epctParam0) // Position - 0x8A44 (35396)
{
	Global_2635125.f_2 = epctParam0;
	return;
}

ePedComponentType func_293(ePedComponentType epctParam0) // Position - 0x8A54 (35412)
{
	if (func_298(epctParam0))
		return 0;

	if (func_297(epctParam0))
		return 1;

	if (func_296(epctParam0))
		return 2;

	if (func_295(epctParam0))
		return 3;

	if (func_294(epctParam0))
		return 4;

	return -1;
}

BOOL func_294(ePedComponentType epctParam0) // Position - 0x8A9E (35486)
{
	return epctParam0 == Global_262145.f_9208;
}

BOOL func_295(ePedComponentType epctParam0) // Position - 0x8AB0 (35504)
{
	return epctParam0 == Global_262145.f_9202;
}

BOOL func_296(ePedComponentType epctParam0) // Position - 0x8AC2 (35522)
{
	return epctParam0 == Global_262145.f_9196;
}

BOOL func_297(ePedComponentType epctParam0) // Position - 0x8AD4 (35540)
{
	return epctParam0 == Global_262145.f_9189;
}

BOOL func_298(ePedComponentType epctParam0) // Position - 0x8AE6 (35558)
{
	return epctParam0 == Global_262145.f_9184;
}

int func_299() // Position - 0x8AF8 (35576)
{
	return Global_2635125;
}

void func_300(int iParam0, BOOL bParam1) // Position - 0x8B04 (35588)
{
	int num;

	num = 0;

	if (bParam1)
		num = -1;

	switch (iParam0)
	{
		case 59:
			Global_2359296[func_301() /*5574*/].f_681.f_19 = num;
			break;
	
		case 19:
			Global_2359296[func_301() /*5574*/].f_681.f_18 = num;
			break;
	
		case 74:
			Global_2359296[func_301() /*5574*/].f_681.f_12 = num;
			break;
	
		case 29:
			Global_2359296[func_301() /*5574*/].f_681.f_14 = num;
			break;
	
		case 8:
			Global_2359296[func_301() /*5574*/].f_681.f_15 = num;
			break;
	
		case 31:
			Global_2359296[func_301() /*5574*/].f_681.f_16 = num;
			break;
	
		case 3:
			Global_2359296[func_301() /*5574*/].f_681.f_20 = num;
			break;
	
		case 6:
			Global_2359296[func_301() /*5574*/].f_681.f_17 = num;
			break;
	
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[func_301() /*5574*/].f_681.f_23 = num;
			break;
	
		case 76:
			Global_2359296[func_301() /*5574*/].f_681.f_24 = num;
			break;
	
		case 93:
			Global_2359296[func_301() /*5574*/].f_681.f_25 = num;
			break;
	
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[func_301() /*5574*/].f_681.f_26 = num;
			break;
	
		case 65:
		case 75:
		case 95:
			Global_2359296[func_301() /*5574*/].f_681.f_27 = num;
			break;
	
		case 97:
			Global_2359296[func_301() /*5574*/].f_681.f_29 = num;
			break;
	
		case 88:
			Global_2359296[func_301() /*5574*/].f_681.f_28 = num;
			break;
	
		case 100:
			Global_2359296[func_301() /*5574*/].f_681.f_31 = num;
			break;
	
		case 106:
			Global_2359296[func_301() /*5574*/].f_681.f_32 = num;
			break;
	
		case 99:
			Global_2359296[func_301() /*5574*/].f_681.f_30 = num;
			break;
	}

	return;
}

int func_301() // Position - 0x8D43 (36163)
{
	int num;

	num = 0;
	return num;
}

void func_302(int iParam0, int iParam1, int iParam2, float fParam3) // Position - 0x8D50 (36176)
{
	int num;
	int num2;
	float num3;

	if (iParam1 < 1)
		iParam1 = 1;

	num = iParam0 * iParam1;
	fParam3 = 0f;

	if (num > 0)
	{
		num3 = 100f - fParam3;
		num2 = BUILTIN::FLOOR((float)num * (num3 / 100f));
	}
	else
	{
		num2 = num;
	}

	Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_4 = num2;
	Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_3 = Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_3 + num2;

	if (iParam2 == 1)
		func_303(num2, false);

	return;
}

void func_303(int iParam0, BOOL bParam1) // Position - 0x8DD3 (36307)
{
	bParam1;
	iParam0 = iParam0;
	return;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, ePedComponentType epctParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8DE4 (36324)
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
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_28024)
				func_305(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			func_305(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_28024)
				func_305(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			func_305(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case -1919450538:
		case -1683562330:
			func_305(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	return;
}

int func_305(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6, int iParam7) // Position - 0x97F6 (38902)
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
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_110()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516982 = true;
			return 0;
		}
	
		if (Global_2698550)
		{
			if (hParam3 == joaat("CATEGORY_WEAPON_AMMO") || hParam3 == joaat("CATEGORY_MART"))
			{
				Global_4516983 = true;
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
			*uParam0 = func_312(transactionId, iParam1, hParam4, hParam2, hParam3, epctParam5, false, iParam6, iParam7, 1, true);
		
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
			Global_4516981 = true;
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
			func_311(1, hParam4);
			Global_4516981 = false;
		}
	
		if (iParam7 & 4 != 0)
			func_306(-1, hParam4, iParam6, epctParam5, -1);
	}

	return 0;
}

void func_306(int iParam0, Hash hParam1, int iParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x99A3 (39331)
{
	switch (hParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_130.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_307(iParam0);

	return;
}

void func_307(int iParam0) // Position - 0x99DB (39387)
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_310(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4515492[iParam0 /*84*/].f_65);
	
		func_308(&Global_4515492[iParam0 /*84*/]);
	}

	return;
}

void func_308(ePedComponentType epctParam0) // Position - 0x9A2F (39471)
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
	func_309(&(epctParam0->f_13));
	func_309(&(epctParam0->f_13.f_13));
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

void func_309(var uParam0) // Position - 0x9B32 (39730)
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

BOOL func_310(int iParam0) // Position - 0x9B7A (39802)
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4515492[iParam0 /*84*/].f_65.f_5 == 1;

	return false;
}

void func_311(int iParam0, Hash hParam1) // Position - 0x9BA5 (39845)
{
	Global_2699778 = hParam1;
	Global_2699777 = iParam0;
	return;
}

int func_312(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, ePedComponentType epctParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x9BB9 (39865)
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
			Global_4515492[i /*84*/].f_65.f_1 = epctParam5;
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
				func_313(Global_4515492[i /*84*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_313(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84) // Position - 0x9CF6 (40182)
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
	playerBits = func_33(eventData.f_1);

	if (Global_262145.f_23800 && !Global_262145.f_23801)
		return;

	if (!(playerBits == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 36, playerBits, eventData);

	return;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x9D79 (40313)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

ePedComponentType func_315(int iParam0) // Position - 0x9D90 (40336)
{
	ePedComponentType type;

	type = PV_COMP_HEAD;

	if (func_318(iParam0) >= PV_COMP_HEAD)
		type = func_318(iParam0);
	else
		type = func_316(iParam0);

	return type;
}

ePedComponentType func_316(int iParam0) // Position - 0x9DBA (40378)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
	
		case 10:
			return 5000;
	
		case 11:
			return 8000;
	
		case 8:
			return 1000;
	
		case 0:
			return 500;
	
		case 9:
			return 250;
	
		case 13:
			return 1000;
	
		case 12:
			return 7500;
	
		case 2:
			return 1000;
	
		case 14:
			return 500;
	
		case 20:
			if (func_317())
				return 0;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
				return 200;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
				return 400;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
				return 600;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
				return 800;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
				return 1000;
			break;
	
		case 6:
			return 500;
	
		case 22:
			return 200;
	
		case 23:
			return 400;
	
		case 24:
			return 700;
	
		case 25:
			return 100;
	
		case 26:
			return 1000;
	
		case 57:
			return 700;
	
		case 35:
			return 5000;
	
		case 15:
			return 0;
	
		case 17:
			return 0;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 21:
			return 0;
	
		case 36:
			return 0;
	
		case 39:
			return 200;
	
		case 40:
			return 1000;
	
		case 41:
			return 750;
	
		case 42:
			return 0;
	}

	return 0;
}

BOOL func_317() // Position - 0x9FCC (40908)
{
	return IS_BIT_SET(func_133(6427, -1), 19);
}

ePedComponentType func_318(int iParam0) // Position - 0x9FDF (40927)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7262;
	
		case 10:
			return Global_262145.f_3836;
	
		case 11:
			return Global_262145.f_3837;
	
		case 8:
			return Global_262145.f_3834;
	
		case 0:
			return Global_262145.f_3831;
	
		case 9:
			return Global_262145.f_3835;
	
		case 13:
			return Global_262145.f_3839;
	
		case 12:
			return Global_262145.f_3838;
	
		case 2:
			return Global_262145.f_3832;
	
		case 14:
			return Global_262145.f_3840;
	
		case 20:
			if (func_317())
				return PV_COMP_HEAD;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
				return Global_262145.f_7269;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
				return Global_262145.f_7270;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
				return Global_262145.f_7271;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
				return Global_262145.f_7272;
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
				return Global_262145.f_7273;
			break;
	
		case 6:
			return Global_262145.f_3833;
	
		case 22:
			return Global_262145.f_3841;
	
		case 23:
			return Global_262145.f_3842;
	
		case 24:
			return Global_262145.f_3843;
	
		case 25:
			return Global_262145.f_3844;
	
		case 26:
			return Global_262145.f_3845;
	
		case 35:
			return Global_262145.f_7955;
	
		case 15:
			return Global_262145.f_7263;
	
		case 17:
			return Global_262145.f_7263;
	
		case 18:
			return Global_262145.f_7263;
	
		case 19:
			return Global_262145.f_7263;
	
		case 21:
			return Global_262145.f_7263;
	
		case 36:
			return Global_262145.f_8422;
	
		case 39:
			return PV_COMP_INVALID;
	
		case 40:
			return Global_262145.f_13415;
	
		case 41:
			return Global_262145.f_13416;
	
		case 42:
			return Global_262145.f_13417;
	
		case 43:
			return Global_262145.f_15925;
	
		case 44:
			return Global_262145.f_15926;
	
		case 57:
			return Global_262145.f_3843;
	
		case 58:
			return Global_262145.f_25461;
	
		case 62:
			return Global_262145.f_25462;
	
		case 63:
			return Global_262145.f_28849;
	
		case 64:
			return Global_262145.f_7263;
	
		case 71:
			return Global_262145.f_25462;
	
		case 72:
			return Global_262145.f_31200;
	
		case 73:
			return Global_262145.f_31202;
	
		case 74:
			return Global_262145.f_31204;
	}

	return PV_COMP_HEAD;
}

BOOL func_319(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0xA349 (41801)
{
	ePedComponentType type;

	switch (*uParam1)
	{
		case 0:
			if (!_STOPWATCH_IS_INITIALIZED(uParam2))
			{
				func_5(uParam2, false, false);
			}
			else if (func_10(uParam2, 10000, false))
			{
				*uParam1 = *uParam1 + 1;
				MISC::CLEAR_BIT(iParam3, iParam4);
			}
			break;
	
		case 1:
			type = func_35(PLAYER::PLAYER_ID());
			iLocal_684 = func_320(iParam0, type, false, 1);
		
			if (iLocal_684 != -1)
			{
				*uParam1 = *uParam1 + 1;
			}
			else
			{
				MISC::SET_BIT(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
	
		case 2:
			uLocal_685 = { func_282(iLocal_684) };
		
			if (func_281(&uLocal_685))
			{
				*uParam1 = *uParam1 + 1;
			}
			else
			{
				MISC::SET_BIT(iParam3, iParam4);
				*uParam1 = 99;
			}
			break;
	
		case 3:
			func_17(&uLocal_685, true, false, false, true);
			*uParam1 = 99;
			break;
	
		case 99:
			return true;
	}

	return false;
}

int func_320(int iParam0, ePedComponentType epctParam1, BOOL bParam2, int iParam3) // Position - 0xA432 (42034)
{
	int num;
	int num2;

	num = -1;
	num2 = 2;
	num = func_321(iParam0, epctParam1, num2, bParam2, iParam3);

	if (num != -1)
		return num;

	num2 = 1;
	num = func_321(iParam0, epctParam1, num2, bParam2, iParam3);

	if (num != -1)
		return num;

	num2 = 0;
	num = func_321(iParam0, epctParam1, num2, bParam2, iParam3);

	if (num != -1)
		return num;

	return -1;
}

int func_321(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xA498 (42136)
{
	int i;
	int num;
	var unk;
	int num2;
	int j;
	int num3;
	Player player;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;
	var unk502;
	int num7;
	int num8;
	BOOL flag3;
	BOOL flag4;
	int num9;
	int num10;
	int num11;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num12;
	BOOL flag8;
	float num13;
	float num14;
	float num15;
	float distanceBetweenCoords;
	Vector3 vector;
	int num16;
	var unk510;
	Vector3 vector2;
	var unk1013;
	int num17;
	ePedComponentType type;
	int k;
	int num18;
	BOOL flag9;
	float num19;
	int num20;
	BOOL flag10;
	int num21;
	int randomIntInRange;
	int endRange;

	if (iParam4 < 1)
		iParam4 = 1;

	i = 0;
	num = 0;
	unk = 500;

	for (i = 0; i < 500; i = i + 1)
	{
		if (func_336(i, iParam0, epctParam1, iParam2))
		{
			unk[num] = i;
			num = num + 1;
		}
	}

	if (num == 0)
		return -1;

	num2 = 0;
	j = 0;

	if (iParam2 == 2)
	{
		num3 = num;
		player = -1;
		num4 = -1;
		num5 = 16777215;
		flag = false;
		flag2 = false;
		num6 = 53;
		TEXT_LABEL_ASSIGN_STRING(&unk502, "", 24);
	
		for (j = 0; j < num3; j = j + 1)
		{
			player = Global_2629410[unk[j] /*10*/].f_4;
			num4 = Global_2629410[unk[j] /*10*/].f_5;
			flag = Global_2629410[unk[j] /*10*/].f_7;
			num6 = Global_2629410[unk[j] /*10*/];
			num5 = Global_2629410[unk[j] /*10*/].f_6;
			unk502 = { func_283(player, num4) };
		
			if (func_335(num5) && func_334(num5))
				flag2 = true;
		
			if (!flag && !func_333(&unk502) && !func_332(num6) && !func_331(num6) && flag2 && func_325(Global_2629410[unk[j] /*10*/].f_3))
			{
				unk[num2] = unk[j];
				num2 = num2 + 1;
			}
		}
	
		num = num2;
	}

	if (iParam2 == 1)
	{
		num7 = num;
		num8 = 16777215;
		flag3 = false;
		flag4 = false;
		num9 = 53;
	
		for (j = 0; j < num7; j = j + 1)
		{
			if (Global_2629410[unk[j] /*10*/].f_4 == 63)
				flag4 = IS_BIT_SET(Global_794989.f_4[Global_2629410[unk[j] /*10*/].f_5 /*95*/].f_82, 14);
		
			num8 = Global_2629410[unk[j] /*10*/].f_6;
			num9 = Global_2629410[unk[j] /*10*/];
		
			if (func_335(num8) && func_334(num8))
				flag3 = true;
		
			if (!flag4 && !func_332(num9) && !func_331(num9) && flag3 && func_325(Global_2629410[unk[j] /*10*/].f_3))
			{
				unk[num2] = unk[j];
				num2 = num2 + 1;
			}
		}
	
		num = num2;
	}

	if (iParam2 == 0)
	{
		num10 = num;
		num11 = 16777215;
		flag5 = false;
		flag6 = false;
		flag7 = false;
		num12 = 53;
	
		for (j = 0; j < num10; j = j + 1)
		{
			flag6 = Global_2629410[unk[j] /*10*/].f_8;
			flag7 = Global_2629410[unk[j] /*10*/].f_7;
			num11 = Global_2629410[unk[j] /*10*/].f_6;
			num12 = Global_2629410[unk[j] /*10*/];
		
			if (func_335(num11) && func_334(num11))
				flag5 = true;
		
			if (flag7 && !flag6 && !func_332(num12) && !func_331(num12) && flag5 && func_325(Global_2629410[unk[j] /*10*/].f_3))
			{
				unk[num2] = unk[j];
				num2 = num2 + 1;
			}
		}
	
		num = num2;
	}

	if (num == 0)
		return -1;

	flag8 = bParam3;
	num13 = 88888.8f;
	num14 = 20000f;
	num15 = 12000f;
	distanceBetweenCoords = 0f;
	vector = { 0f, 0f, 0f };
	num16 = 53;
	unk510 = 500;

	for (i = 0; i < 500; i = i + 1)
	{
		unk510[i] = num13;
	}

	vector2 = { 0f, 0f, 0f };

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
	{
		vector2 = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };
	
		for (i = 0; i < num; i = i + 1)
		{
			vector = { func_324(unk[i]) };
			num16 = Global_2629410[unk[i] /*10*/];
		
			if (!func_29(vector, 0f, 0f, 0f, 1056964608, false))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, vector2, true);
			
				if (func_323(num16))
					distanceBetweenCoords = distanceBetweenCoords + num14;
			}
			else
			{
				distanceBetweenCoords = 99999.9f;
			}
		
			unk510[i] = distanceBetweenCoords;
		}
	}
	else
	{
		flag8 = false;
		bParam3;
	}

	unk1013 = 96;
	num17 = 0;
	type = _INVALID_PLAYER_INDEX();
	k = 0;
	num18 = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (type != PLAYER::PLAYER_ID())
		{
			if (_NETWORK_IS_PLAYER_VALID(type, false, true))
			{
				for (k = 0; k < 3; k = k + 1)
				{
					num18 = func_322(type, k);
				
					if (num18 != 0)
					{
						unk1013[num17] = num18;
						num17 = num17 + 1;
					}
				}
			}
		}
	}

	flag9 = false;

	for (k = 0; k < num17; k = k + 1)
	{
		flag9 = true;
		i = 0;
	
		while (flag9)
		{
			if (unk1013[k] == Global_2629410[unk[i] /*10*/].f_2)
			{
				flag9 = false;
				unk510[i] = unk510[i] + num15;
			}
		
			if (flag9)
			{
				i = i + 1;
			
				if (i >= num)
					flag9 = false;
			}
		}
	}

	num19 = 0f;
	num20 = 0;

	if (flag8)
	{
		flag10 = true;
	
		while (flag10)
		{
			flag10 = false;
			num2 = 0;
			j = num2 + 1;
		
			while (j < num)
			{
				if (unk510[j] < unk510[num2])
				{
					flag10 = true;
					num19 = unk510[num2];
					num20 = unk[num2];
					unk510[num2] = unk510[j];
					unk[num2] = unk[j];
					unk510[j] = num19;
					unk[j] = num20;
				}
			
				j = j + 1;
				num2 = num2 + 1;
			}
		}
	
		for (i = 0; i < num; i = i + 1)
		{
		}
	}

	num21 = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk510[i] < num15)
			num21 = num21 + 1;
	}

	randomIntInRange = 0;
	endRange = 0;

	if (num > 1)
	{
		endRange = num;
	
		if (flag8)
		{
			if (iParam4 < endRange)
				endRange = iParam4;
		
			if (num21 > 0 && num21 < endRange)
				endRange = num21;
		}
	
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	}

	return unk[randomIntInRange];
}

int func_322(ePedComponentType epctParam0, int iParam1) // Position - 0xAB6E (43886)
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return 0;

	return Global_2658293[epctParam0 /*468*/].f_92.f_14.f_14[iParam1];
}

BOOL func_323(int iParam0) // Position - 0xAB99 (43929)
{
	int i;

	if (iParam0 == 53)
		return false;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_2634516[i /*13*/] == iParam0)
			return true;
	}

	return false;
}

Vector3 func_324(int iParam0) // Position - 0xABD3 (43987)
{
	var unk;

	unk = { func_282(iParam0) };
	return func_280(&unk);
}

BOOL func_325(ePedComponentType epctParam0) // Position - 0xABEC (44012)
{
	if (func_330(epctParam0) || func_253(epctParam0) || func_329(epctParam0) || func_326(epctParam0))
		return false;

	return true;
}

BOOL func_326(ePedComponentType epctParam0) // Position - 0xAC26 (44070)
{
	int i;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i < 23; i = i + 1)
	{
		if (epctParam0 == func_328(i) || epctParam0 == func_327(i))
			return true;
	}

	return false;
}

ePedComponentType func_327(int iParam0) // Position - 0xAC6B (44139)
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

ePedComponentType func_328(int iParam0) // Position - 0xAD07 (44295)
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

BOOL func_329(ePedComponentType epctParam0) // Position - 0xADEB (44523)
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (Global_262145.f_29498[i] == epctParam0)
			return true;
	}

	return false;
}

BOOL func_330(ePedComponentType epctParam0) // Position - 0xAE1B (44571)
{
	int i;

	for (i = 0; i < 21; i = i + 1)
	{
		if (Global_262145.f_6059[i] == epctParam0)
			return true;
	}

	return false;
}

BOOL func_331(int iParam0) // Position - 0xAE4B (44619)
{
	switch (Global_2635125)
	{
		case 0:
		case 1:
		case 10:
		case 11:
		case 12:
			return false;
	
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			break;
	
		default:
			return false;
	}

	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
			return false;
	
		case 2:
		case 6:
		case 7:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_332(int iParam0) // Position - 0xAEF5 (44789)
{
	if (iParam0 == 53)
		return false;

	return iParam0 == Global_2634560;
}

BOOL func_333(const char* sParam0) // Position - 0xAF0F (44815)
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_2634516[i /*13*/] != 53)
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_2634516[i /*13*/].f_1.f_3)))
				return true;
	}

	return false;
}

BOOL func_334(int iParam0) // Position - 0xAF60 (44896)
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockHours = clockHours + 1;

	if (clockHours >= 24)
		clockHours = 0;

	return IS_BIT_SET(iParam0, clockHours);
}

BOOL func_335(int iParam0) // Position - 0xAF83 (44931)
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();
	return IS_BIT_SET(iParam0, clockHours);
}

BOOL func_336(int iParam0, int iParam1, ePedComponentType epctParam2, int iParam3) // Position - 0xAF96 (44950)
{
	ePedComponentType type;
	ePedComponentType type2;
	BOOL flag;
	ePedComponentType type3;

	if (iParam0 >= Global_1574002)
		return false;

	type = PV_COMP_HEAD;
	type2 = epctParam2;

	switch (iParam3)
	{
		case 2:
			if (Global_2634411 > epctParam2)
				return false;
		
			type = Global_2634411;
			break;
	
		case 1:
			type = PV_COMP_HEAD;
			type2 = Global_2634411 - 1;
		
			if (type > type2)
				return false;
			break;
	
		case 0:
			type = PV_COMP_HEAD;
			break;
	
		default:
			return false;
	}

	flag = false;

	if (iParam1 != 145)
		flag = true;

	if (flag)
		if (func_338(iParam0) != iParam1)
			return false;

	type3 = func_337(iParam0);

	if (type3 < type)
		return false;

	if (type3 > type2)
		return false;

	return true;
}

ePedComponentType func_337(int iParam0) // Position - 0xB044 (45124)
{
	return Global_2629410[iParam0 /*10*/].f_1;
}

int func_338(int iParam0) // Position - 0xB056 (45142)
{
	return func_62(Global_2629410[iParam0 /*10*/]);
}

int func_339(int iParam0, var uParam1, BOOL bParam2) // Position - 0xB06A (45162)
{
	var unk;
	ePedComponentType type;

	switch (*uParam1)
	{
		case 0:
			func_366(iParam0);
			*uParam1 = *uParam1 + 1;
			break;
	
		case 1:
			if (!bParam2)
			{
				type = func_35(PLAYER::PLAYER_ID());
				iLocal_684 = func_320(iParam0, type, false, 1);
			
				if (iLocal_684 != -1)
					*uParam1 = 2;
				else
					*uParam1 = 50;
			}
			else if (func_362(iParam0))
			{
				*uParam1 = 2;
			}
			else
			{
				*uParam1 = 50;
			}
			break;
	
		case 2:
			unk = { func_361(iParam0, bParam2) };
		
			if (_CONVERSATION_ADD_LINE(&uLocal_695, "CT_AUD", &unk, 12, 0, 0, 0))
				*uParam1 = 99;
			break;
	
		case 50:
			unk = { func_340(iParam0) };
		
			if (_CONVERSATION_ADD_LINE(&uLocal_695, "CT_AUD", &unk, 12, 0, 0, 0))
				*uParam1 = 99;
			break;
	
		case 99:
			return 1;
	}

	return 0;
}

struct<4> func_340(int iParam0) // Position - 0xB14C (45388)
{
	var unk;

	switch (iParam0)
	{
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_Jobno", 16);
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_GJobno", 16);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_SJobno", 16);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_MJobno", 16);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_RJobno", 16);
			break;
	}

	return unk;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB1B4 (45492)
{
	func_360(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23030 = false;
	Global_23032 = 0;
	Global_23037 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
	return func_342(sParam2, iParam3, false);
}

BOOL func_342(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xB202 (45570)
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
					Global_23076 = 0;
					Global_23019 = 0;
					Global_23020 = 0;
					Global_23034 = 0;
					Global_23033 = false;
					Global_21648 = false;
				}
				else
				{
					func_359();
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
	
		if (func_358(8, -1))
			return 0;
	
		Global_23099 = { Global_23093 };
		func_357();
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
			
				if (func_348())
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
		
			if (func_347())
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
		
			func_346();
			Global_23033 = bParam2;
		}
	
		Global_23025 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_345();
		func_343();
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
		func_359();
	}

	return 0;
}

void func_343() // Position - 0xB4D0 (46288)
{
	if (!func_344())
		return;

	if (Global_23029)
	{
		TEXT_LABEL_COPY(&(Global_1979099.f_1), { Global_22642 }, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}

	return;
}

BOOL func_344() // Position - 0xB507 (46343)
{
	if (!Global_262145.f_28486)
		return false;

	if (!Global_80337)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_83(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

void func_345() // Position - 0xB56A (46442)
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

void func_346() // Position - 0xB59A (46490)
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

BOOL func_347() // Position - 0xB62F (46639)
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
		return true;

	return false;
}

BOOL func_348() // Position - 0xB656 (46678)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xB6EF (46831)
{
	if (func_356(14))
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

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xB791 (46993)
{
	func_351();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_351() // Position - 0xB7AA (47018)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_352(character) && !func_356(14) || Global_113909)
			{
				if (Global_114963.f_2370.f_539.f_4321 != character && func_352(Global_114963.f_2370.f_539.f_4321))
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

BOOL func_352(eCharacter echParam0) // Position - 0xB8A7 (47271)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xB8B3 (47283)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xB8F0 (47344)
{
	if (func_352(character))
		return func_355(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_355(eCharacter echParam0) // Position - 0xB915 (47381)
{
	return Global_2349[echParam0 /*29*/];
}

BOOL func_356(int iParam0) // Position - 0xB924 (47396)
{
	return Global_44921 == iParam0;
}

void func_357() // Position - 0xB932 (47410)
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

BOOL func_358(int iParam0, int iParam1) // Position - 0xB988 (47496)
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

void func_359() // Position - 0xB9C0 (47552)
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

void func_360(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xBA17 (47639)
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

struct<4> func_361(int iParam0, BOOL bParam1) // Position - 0xBA6D (47725)
{
	var unk;

	switch (iParam0)
	{
		case 12:
			if (!bParam1)
				TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_Job", 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_Lconf", 16);
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_GJob", 16);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_SJob", 16);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_MJob", 16);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_RJob", 16);
			break;
	}

	return unk;
}

BOOL func_362(int iParam0) // Position - 0xBAE6 (47846)
{
	ePedComponentType type;

	type = func_35(PLAYER::PLAYER_ID());
	return func_363(iParam0, type) != -1;
}

int func_363(int iParam0, ePedComponentType epctParam1) // Position - 0xBB02 (47874)
{
	var unk;
	int num;
	int endRange;
	int randomIntInRange;

	unk = 25;
	num = 0;
	endRange = func_364(iParam0, epctParam1, &unk, &num);

	if (endRange == 0)
		return -1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	return unk[randomIntInRange];
}

int func_364(int iParam0, ePedComponentType epctParam1, var uParam2, int* piParam3) // Position - 0xBB3A (47930)
{
	int i;
	int offset;
	int num;
	int j;
	ePedComponentType type;
	int offset2;
	int num2;
	BOOL flag;
	BOOL flag2;

	i = 0;

	for (i = 0; i < 25; i = i + 1)
	{
		uParam2->[i] = -1;
	}

	*piParam3 = 0;

	if (Global_2635124 == 0)
		return 0;

	if (Global_2635125 != 0 && Global_2635125 != 1)
		return 0;

	if (iParam0 != 12)
		return 0;

	offset = 0;

	for (i = 0; i < Global_2635124; i = i + 1)
	{
		if (Global_2634773[i /*14*/].f_13)
		{
			uParam2->[offset] = i;
		
			if (!func_365(i))
				MISC::SET_BIT(piParam3, offset);
			else
				MISC::CLEAR_BIT(piParam3, offset);
		
			offset = offset + 1;
		}
	}

	num = offset;

	if (num > 1)
	{
		j = 0;
		type = PV_COMP_HEAD;
		offset2 = 0;
		num2 = 0;
		flag = false;
		offset = 0;
		flag2 = true;
	
		for (j = 0; j < 5; j = j + 1)
		{
			offset2 = offset;
			type = PV_COMP_INVALID;
		
			switch (j)
			{
				case 0:
					type = Global_262145.f_9184;
					break;
			
				case 1:
					type = Global_262145.f_9189;
					break;
			
				case 2:
					type = Global_262145.f_9196;
					break;
			
				case 3:
					type = Global_262145.f_9202;
					break;
			
				case 4:
					type = Global_262145.f_9208;
					break;
			}
		
			flag2 = true;
		
			if (offset2 >= num || type == PV_COMP_INVALID)
				flag2 = false;
		
			while (flag2)
			{
				if (uParam2->[offset2] != -1)
				{
					if (type == Global_2634773[uParam2->[offset2] /*14*/].f_12)
					{
						if (offset2 != offset)
						{
							num2 = uParam2->[offset];
							uParam2->[offset] = uParam2->[offset2];
							uParam2->[offset2] = num2;
							flag = IS_BIT_SET(*piParam3, offset);
						
							if (IS_BIT_SET(*piParam3, offset2))
								MISC::SET_BIT(piParam3, offset);
							else
								MISC::CLEAR_BIT(piParam3, offset);
						
							if (flag)
								MISC::SET_BIT(piParam3, offset2);
							else
								MISC::CLEAR_BIT(piParam3, offset2);
						}
					
						offset = offset + 1;
						flag2 = false;
					}
				}
			
				if (flag2)
				{
					offset2 = offset2 + 1;
				
					if (offset2 >= num)
						flag2 = false;
				}
			}
		}
	}

	return num;
}

BOOL func_365(int iParam0) // Position - 0xBD3A (48442)
{
	ePedComponentType type;
	int i;

	type = Global_2634773[iParam0 /*14*/].f_12;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_2635515[i /*2*/] == type)
		{
			if (MISC::GET_GAME_TIMER() > Global_2635515[i /*2*/].f_1)
			{
				Global_2635515[i /*2*/].f_1 = 0;
				Global_2635515[i /*2*/] = PV_COMP_HEAD;
			}
			else
			{
				return true;
			}
		}
	}

	return false;
}

void func_366(int iParam0) // Position - 0xBD9D (48541)
{
	switch (iParam0)
	{
		case 12:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_695, 3, 0, "Lester", 0, 1);
			break;
	
		case 86:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_695, 3, 0, "Gerald", 0, 1);
			break;
	
		case 18:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_695, 3, 0, "Simeon", 0, 1);
			break;
	
		case 31:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_695, 3, 0, "Martin", 0, 1);
			break;
	
		case 20:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_695, 2, 0, "NervousRon", 0, 1);
			break;
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xBE24 (48676)
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

BOOL func_368() // Position - 0xBEBF (48831)
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

int func_369() // Position - 0xBED4 (48852)
{
	return Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_186;
}

void func_370() // Position - 0xBEE9 (48873)
{
	if (!IS_BIT_SET(uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0))
		if (func_167(8, false, false))
			MISC::SET_BIT(&uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0);

	if (!IS_BIT_SET(uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
		if (func_167(3, false, false))
			MISC::SET_BIT(&uLocal_554[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1);

	return;
}

int func_371() // Position - 0xBF40 (48960)
{
	return iLocal_128.f_2;
}

int func_372(int iParam0) // Position - 0xBF4C (48972)
{
	return uLocal_554[iParam0 /*3*/].f_1;
}

void func_373() // Position - 0xBF5D (48989)
{
	func_375();
	func_374();
	return;
}

void func_374() // Position - 0xBF6D (49005)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_375() // Position - 0xBF79 (49017)
{
	if (!func_381())
		return;

	if (!(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574767.f_9))
		return;

	func_376();
	return;
}

void func_376() // Position - 0xBFA6 (49062)
{
	func_378();
	func_377(false);
	return;
}

void func_377(BOOL bParam0) // Position - 0xBFB7 (49079)
{
	BOOL flag;

	flag = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574767 = 20;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1574767.f_1), "", 32);
	Global_1574767.f_9 = 0;

	if (flag)
	{
		Global_1574767.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574767.f_11 = NETWORK::GET_NETWORK_TIME();
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1574767.f_12), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1574767.f_16), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1574767.f_32), "", 64);
	Global_1574767.f_52 = 0;
	Global_1574767.f_53 = 0;
	Global_1574767.f_54 = 0;
	Global_1574767.f_55 = -1;
	Global_1574767.f_56 = 0;
	Global_1574767.f_59 = 0;

	if (bParam0)
		return;

	return;
}

void func_378() // Position - 0xC047 (49223)
{
	!func_380();

	if (func_381())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574767.f_12));
		func_379();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}

	return;
}

void func_379() // Position - 0xC070 (49264)
{
	switch (Global_1574767)
	{
		case 20:
			return;
	
		case 0:
			return;
	
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574767.f_52);
			return;
	
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574767.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574767.f_53);
			return;
	
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			return;
	
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_32));
			return;
	
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			return;
	
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			return;
	
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			return;
	
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			return;
	
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574767.f_16));
			return;
	
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_32));
			return;
	
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_32));
			return;
	
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_32));
			return;
	
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574767.f_16));
			return;
	
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_32));
			return;
	
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_32));
			return;
	
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_48));
			return;
	
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			return;
	
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_16));
			return;
	
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574767.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574767.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574767.f_32));
			return;
	
		default:
			return;
	}

	return;
}

BOOL func_380() // Position - 0xC2E2 (49890)
{
	if (!func_381())
		return false;

	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574767.f_12));
	func_379();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

BOOL func_381() // Position - 0xC308 (49928)
{
	if (Global_1574767 == 20)
		return false;

	return true;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0xC31E (49950)
{
	if (Global_1575066 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_388())
		return true;

	if (Global_2699678)
		return true;

	if (func_387())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_385())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0xC3A2 (50082)
{
	switch (func_179())
	{
		case false:
			return func_384();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_384() // Position - 0xC3D5 (50133)
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_385() // Position - 0xC3F9 (50169)
{
	return Global_2685152.f_726;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0xC408 (50184)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_387() // Position - 0xC41F (50207)
{
	return Global_2697072;
}

BOOL func_388() // Position - 0xC42B (50219)
{
	return Global_2685152.f_721;
}

void func_389() // Position - 0xC43A (50234)
{
	BUILTIN::WAIT(0);
	return;
}

void func_390(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0xC447 (50247)
{
	func_396(func_397(uParam0), uParam0);
	func_392(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_128, 14, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_554, 97, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (!_NETWORK_WAIT_FOR_HOST_BROADCAST_DATA())
		func_373();

	return;
}

BOOL _NETWORK_WAIT_FOR_HOST_BROADCAST_DATA() // Position - 0xC48A (50314)
{
	int num;

	num = 0;

	while (true)
	{
		num = num + 1;
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_388())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (num >= 3600)
			return false;
	
		BUILTIN::WAIT(0);
	}

	return false;
}

int func_392(int iParam0, int iParam1, BOOL bParam2) // Position - 0xC4E3 (50403)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_374();
			else
				return 0;
	
		if (!func_393(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_374();
					else
						return 0;
			
				if (func_388())
					if (!bParam2)
						func_374();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_374();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_374();
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
				func_374();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_374();
		else
			return 0;

	return 1;
}

BOOL func_393(BOOL bParam0) // Position - 0xC5F9 (50681)
{
	if (bParam0 && Global_1575066)
		if (func_394())
			return false;
		else
			return true;

	return Global_1575066;
}

BOOL func_394() // Position - 0xC625 (50725)
{
	if (func_395())
		return true;

	return Global_1575069;
}

BOOL func_395() // Position - 0xC640 (50752)
{
	if (Global_1575066 || Global_1575073)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
			return true;

	return false;
}

void func_396(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0xC66B (50795)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_374();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
	return;
}

int func_397(int iParam0) // Position - 0xC68A (50826)
{
	switch (iParam0)
	{
		case 3:
			return 2;
	
		case 1:
			return 32;
	
		case 32:
			return 32;
	
		case 33:
			return 32;
	
		case 34:
			return 32;
	
		case 35:
			return 32;
	
		case 36:
			return 32;
	
		case 37:
			return 32;
	
		case 38:
			return 32;
	
		case 39:
			return 32;
	
		case 40:
			return 32;
	
		case 41:
			return 32;
	
		case 42:
			return 32;
	
		case 43:
			return 32;
	
		case 44:
			return 32;
	
		case 45:
			return 32;
	
		case 46:
			return 32;
	
		case 47:
			return 32;
	
		case 48:
			return 32;
	
		case 49:
			return 32;
	
		case 50:
			return 4;
	
		case 51:
			return 32;
	
		case 52:
			return 32;
	
		case 53:
			return 32;
	
		case 54:
			return 32;
	
		case 55:
			return 32;
	
		case 56:
			return 32;
	
		case 57:
			return 32;
	
		case 58:
			return 32;
	
		case 59:
			return 32;
	
		case 60:
			return 32;
	
		case 61:
			return 32;
	
		case 62:
			return 32;
	
		case 63:
			return 32;
	
		case 64:
			return 4;
	
		case 65:
			return 32;
	
		case 66:
			return 4;
	
		case 67:
			return 4;
	
		case 68:
			return 32;
	
		case 69:
			return 32;
	
		case 70:
			return 4;
	
		case 71:
			return 32;
	
		case 72:
			return 32;
	
		case 73:
		case 74:
			return 4;
	
		case 75:
			return 32;
	
		case 76:
			return 32;
	
		case 77:
			return 32;
	
		case 78:
			return 32;
	
		case 79:
			return 32;
	
		case 80:
			return 32;
	
		case 81:
			return 32;
	
		case 82:
			return 32;
	
		case 84:
			return 32;
	
		case 83:
			return 32;
	
		case 85:
			return 32;
	
		case 86:
			return 8;
	
		case 87:
			return 32;
	
		case 88:
			return 32;
	
		case 89:
			return 32;
	
		case 90:
			return 32;
	
		case 91:
			return 8;
	
		case 92:
			return 32;
	
		case 93:
			return 8;
	
		case 94:
			return 8;
	
		case 102:
			return 8;
	
		case 95:
			return 8;
	
		case 96:
			return 32;
	
		case 97:
			return 32;
	
		case 98:
			return 32;
	
		case 99:
			return 8;
	
		case 100:
			return 32;
	
		case 101:
			return 32;
	
		case 103:
			return 32;
	
		case 104:
			return 32;
	
		case 105:
			return 32;
	
		case 106:
			return 8;
	
		case 107:
			return 8;
	
		case 108:
			return 8;
	
		case 109:
			return 8;
	
		case 110:
			return 8;
	
		case 111:
			return 8;
	
		case 112:
			return 8;
	
		case 113:
			return 8;
	
		case 114:
			return 32;
	
		case 115:
			return 8;
	
		case 116:
			return 8;
	
		case 117:
			return 8;
	
		case 118:
			return 8;
	
		case 119:
			return 32;
	
		case 120:
			return 32;
	
		case 121:
			return 32;
	
		case 122:
			return 32;
	
		case 123:
			return 8;
	
		case 124:
			return 8;
	
		case 125:
			return 8;
	
		case 126:
			return 8;
	
		case 12:
			return 32;
	
		case 4:
			return 16;
	
		case 13:
			return 32;
	
		case 5:
			return 16;
	
		case 6:
			return 2;
	
		case 8:
			return 2;
	
		case 9:
			return 2;
	
		case 7:
			return 16;
	
		case 10:
			return 2;
	
		case 11:
			return 4;
	
		case 15:
			return 32;
	
		case 16:
			return 32;
	
		case 27:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 18:
			return 32;
	
		case 28:
			return 32;
	
		case 29:
			return 2;
	
		case 30:
			return 32;
	
		case 31:
			return 32;
	
		case 17:
			return 2;
	
		case 228:
			return 32;
	
		case 229:
			return 32;
	
		case 19:
			return 32;
	
		case 22:
			return 32;
	
		case 23:
			return 32;
	
		case 24:
			return 32;
	
		case 20:
			return 2;
	
		case 0:
			return 0;
	
		case 21:
			return 32;
	
		case 240:
			return 32;
	
		case 241:
			return 32;
	
		case 230:
			return 32;
	
		case 231:
			return 32;
	
		case 235:
			return 32;
	
		case 233:
			return 32;
	
		case 234:
			return 32;
	
		case 238:
			return 32;
	
		case 239:
			return 32;
	
		case 236:
			return 32;
	
		case 237:
			return 32;
	
		case 242:
			return 32;
	
		case 243:
			return 32;
	
		case 244:
			return 32;
	
		case 245:
			return 32;
	
		case 246:
			return 2;
	
		case 251:
			return 1;
	
		case 247:
			return 2;
	
		case 248:
			return 4;
	
		case 249:
			return 2;
	
		case 250:
			return 2;
	
		case 232:
			return 1;
	
		case 252:
			return 2;
	
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
			return 0;
	
		case 276:
			return 1;
	
		case 259:
			return 4;
	
		case 262:
			return 4;
	
		case 263:
			return 1;
	
		case 264:
			return 1;
	
		case 272:
			return 1;
	
		case 266:
			return 2;
	
		case 273:
			return 1;
	
		case 267:
			return 1;
	
		case 265:
			return 2;
	
		case 268:
			return 8;
	
		case 269:
			return 8;
	
		case 270:
			return 8;
	
		case 271:
			return 8;
	
		case 274:
			return 1;
	
		case 275:
			return 2;
	
		case 142:
			return 8;
	
		case 148:
			return 1;
	
		case 170:
			return 1;
	
		case 179:
			return 1;
	
		case 196:
			return 1;
	
		case 206:
			return 32;
	
		case 260:
			return 16;
	
		case 261:
			return 32;
	
		default:
		
	}

	switch (func_398(func_65(iParam0, true)))
	{
		case 0:
			return 8;
	
		case 1:
			return 32;
	
		case 2:
			return 32;
	
		default:
		
	}

	return 0;
}

int func_398(int iParam0) // Position - 0xCE40 (52800)
{
	switch (iParam0)
	{
		case 150:
			return 1;
	
		case 24:
			return 2;
	
		case 26:
			return 2;
	
		case 256:
			return 0;
	
		case 258:
			return 0;
	
		case 259:
			return 2;
	
		case 271:
			return 0;
	
		case 273:
			return 2;
	
		case 276:
			return 0;
	
		case 277:
			return 0;
	
		case 262:
			return 0;
	
		case 263:
			return 0;
	
		case 264:
			return 0;
	
		case 269:
			return 2;
	
		case 270:
			return 2;
	
		case 275:
			return 2;
	
		case 268:
			return 2;
	
		case 286:
			return 2;
	
		case 267:
			return 0;
	
		case 266:
			return 2;
	
		case 287:
			return 2;
	
		case 289:
			return 2;
	
		case 147:
			return 2;
	
		case 291:
			return 0;
	
		case 292:
			return 0;
	
		case 293:
			return 0;
	
		case 294:
			return 0;
	
		case 295:
			return 0;
	
		case 296:
			return 0;
	
		case 297:
			return 0;
	
		case 298:
			return 0;
	
		case 299:
			return 0;
	
		case 300:
			return 0;
	
		case 301:
			return 0;
	
		case 288:
			return 2;
	
		case 290:
			return 2;
	
		case 304:
			return 0;
	
		case 305:
			return 0;
	
		case 306:
			return 0;
	
		case 307:
			return 0;
	
		case 308:
			return 0;
	
		case 309:
			return 0;
	
		case 310:
			return 2;
	
		case 311:
			return 2;
	
		case 312:
			return 2;
	
		case 320:
			return 2;
	
		case 313:
			return 2;
	
		case 314:
			return 0;
	
		case 315:
			return 0;
	
		case 316:
			return 0;
	
		case 317:
			return 0;
	
		case 318:
			return 0;
	
		case 322:
			return 0;
	
		case 323:
			return 2;
	
		case 324:
			return 0;
	
		case 325:
			return 0;
	
		case 326:
			return 0;
	
		case 327:
			return 0;
	
		case 328:
			return 0;
	
		case 329:
			return 0;
	
		case 330:
			return 0;
	
		case 331:
			return 0;
	
		case 332:
			return 0;
	
		case 333:
			return 0;
	
		case 337:
			return 0;
	
		case 338:
			return 0;
	
		case 339:
			return 0;
	
		case 340:
			return 0;
	
		case 343:
			return 0;
	
		case 344:
			return 0;
	
		case 345:
			return 0;
	
		case 346:
			return 0;
	
		case 347:
			return 0;
	
		case 348:
			return 0;
	
		case 349:
			return 0;
	
		case 350:
			return 0;
	
		case 351:
			return 0;
	
		case 353:
			return 2;
	
		case 354:
			return 0;
	
		case 355:
			return 0;
	
		case 356:
			return 0;
	
		case 357:
			return 0;
	
		case 358:
			return 0;
	
		case 359:
			return 0;
	
		case 360:
			return 0;
	
		case 361:
			return 0;
	
		case 362:
			return 0;
	
		case 363:
			return 0;
	
		case 364:
			return 0;
	
		case 365:
			return 2;
	
		case 366:
			return 2;
	
		case 367:
			return 2;
	
		case 368:
			return 0;
	
		case 372:
			return 0;
	
		case 373:
			return 0;
	
		case 374:
			return 0;
	
		case 375:
			return 0;
	
		case 376:
			return 0;
	
		default:
		
	}

	return -1;
}

