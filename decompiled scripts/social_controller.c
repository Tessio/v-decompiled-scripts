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
	int iLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
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
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	Hash hLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	BOOL bLocal_76 = 0;
	BOOL bLocal_77 = 0;
	BOOL bLocal_78 = 0;
	BOOL bLocal_79 = 0;
	int iLocal_80 = 0;
	BOOL bLocal_81 = 0;
	BOOL bLocal_82 = 0;
	BOOL bLocal_83 = 0;
	BOOL bLocal_84 = 0;
	int iLocal_85 = 0;
	BOOL bLocal_86 = 0;
	BOOL bLocal_87 = 0;
	int iLocal_88 = 0;
	ePedComponentType epctLocal_89 = PV_COMP_HEAD;
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
	BOOL bLocal_102 = 0;
	BOOL bLocal_103 = 0;
	BOOL bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 3;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 3;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 3;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	var uLocal_129 = 0;
	BOOL bLocal_130 = 0;
	BOOL bLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 3;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 6;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 6;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	BOOL bLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
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
	var uLocal_245 = 1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = -1;
	var uLocal_250 = -1;
	var uLocal_251 = 2;
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
	var uLocal_264 = 2;
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
	BOOL bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	BOOL bLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 8;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	fLocal_63 = 0f;
	iLocal_67 = -1;
	iLocal_68 = -1;
	iLocal_69 = 21;
	iLocal_71 = 2;
	bLocal_77 = true;
	bLocal_78 = true;
	bLocal_81 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_108 = MISC::GET_GAME_TIMER();
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (func_576())
		{
		}
		else
		{
			func_572();
			func_531();
			func_530();
		
			switch (iLocal_70)
			{
				case 0:
					func_528();
					break;
			
				case 1:
					func_198();
					func_193();
					func_25(&uLocal_157);
					func_22();
					func_10();
				
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						func_2();
					break;
			
				case 2:
					func_1();
					break;
			}
		}
	}

	return;
}

void func_1() // Position - 0x12B Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x137 Hash - 0xF070C85A ^0x49A34632
{
	if (!_STOPWATCH_IS_INITIALIZED(&uLocal_324))
	{
		_STOPWATCH_INITIALIZE(&uLocal_324, false, false);
	}
	else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_324, 7200000, false))
	{
		if (func_6(0))
		{
			if (func_5(PLAYER::PLAYER_ID()))
			{
				if (!func_4())
				{
					_STOPWATCH_DESTROY(&uLocal_324);
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SC_PLAY_REM" /*Enter a Rockstar Tournament for a chance to win numerous in-game prizes! Launch the Qualification Playlist from the Online Menu for a chance to compete.*/);
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
		}
	}

	return;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x194 Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

BOOL func_4() // Position - 0x1A1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575083;
}

BOOL func_5(Player plParam0) // Position - 0x1AD Hash - 0xAC1BEADC ^0x1667B2C1
{
	return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_140, 6);
}

BOOL func_6(int iParam0) // Position - 0x1C2 Hash - 0x1B04F1B9 ^0x2C93687E
{
	return Global_1928632.f_16[iParam0 /*44*/].f_4;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x1D6 Hash - 0x154EA353 ^0xBFA672B0
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

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x234 Hash - 0x6F79B86B ^0x7B76DD66
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

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x279 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_10() // Position - 0x285 Hash - 0x8510E5EB ^0x6AA5351B
{
	int i;
	var unk;
	int num;
	int j;
	BOOL flag;
	var plateData;
	int plateIndex;
	int count;
	int k;
	const char* plate;
	var plateData2;

	switch (iLocal_328)
	{
		case 0:
			if (Global_110663 && !bLocal_326 && !Global_262145.f_10615)
			{
				iLocal_329 = -1;
			
				for (i = 0; i < Global_110651; i = i + 1)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_110651[i /*4*/]))
						iLocal_329 = i;
				}
			
				if (iLocal_329 != -1)
					iLocal_328 = iLocal_328 + 1;
				else
					Global_110663 = false;
			}
		
			if (!Global_110663 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _STAT_GET_PACKED_BOOL(3763, -1) && !bLocal_331 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_332)) > 25000)
			{
				uLocal_333[0] = _STAT_GET_PACKED_INT(1362, -1);
				uLocal_333[1] = _STAT_GET_PACKED_INT(1363, -1);
				uLocal_333[2] = _STAT_GET_PACKED_INT(1364, -1);
				uLocal_333[3] = _STAT_GET_PACKED_INT(1365, -1);
				uLocal_333[4] = _STAT_GET_PACKED_INT(1366, -1);
				uLocal_333[5] = _STAT_GET_PACKED_INT(1367, -1);
				uLocal_333[6] = _STAT_GET_PACKED_INT(1368, -1);
				uLocal_333[7] = _STAT_GET_PACKED_INT(1369, -1);
				func_19(&unk, &uLocal_333, -1);
				func_16(&unk);
				bLocal_331 = false;
			}
			break;
	
		case 1:
			if (iLocal_330 == 0)
			{
				SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&Global_110651[iLocal_329 /*4*/], &iLocal_330);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_330))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_330))
				{
					case 0:
						flag = false;
						num = Global_110499;
					
						for (j = 0; j < num; j = j + 1)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_110499[j /*4*/]))
							{
								if (MISC::GET_HASH_KEY(&Global_110499[j /*4*/]) == MISC::GET_HASH_KEY(&Global_110651[iLocal_329 /*4*/]))
								{
									flag = true;
									j = num + 1;
								}
							}
						}
					
						if (flag)
							iLocal_328 = 3;
						else
							iLocal_328 = 2;
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&Global_110651[iLocal_329 /*4*/], "", 16);
					
						if (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_330) == 2)
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								_STAT_SET_PACKED_BOOL(3763, false, -1);
					
						iLocal_328 = 0;
						break;
				}
			
				iLocal_330 = 0;
			}
			break;
	
		case 2:
			if (iLocal_330 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(&plateData, "", 64);
			
				if (Global_110660[iLocal_329])
				{
					func_13(&plateData, "SPPlate", false);
					func_13(&plateData, "MPPlate", true);
				}
				else
				{
					func_13(&plateData, "SPPlate", true);
				}
			
				SOCIALCLUB::SC_LICENSEPLATE_ADD(&Global_110651[iLocal_329 /*4*/], &plateData, &iLocal_330);
			}
			else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_IS_PENDING(iLocal_330))
			{
				switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ADD_STATUS(iLocal_330))
				{
					case 0:
						bLocal_326 = true;
						iLocal_328 = 0;
						TEXT_LABEL_ASSIGN_STRING(&Global_110651[iLocal_329 /*4*/], "", 16);
						iLocal_330 = 0;
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							_STAT_SET_PACKED_BOOL(3763, false, -1);
						break;
				
					default:
						iLocal_330 = 0;
						iLocal_328 = 0;
						TEXT_LABEL_ASSIGN_STRING(&Global_110651[iLocal_329 /*4*/], "", 16);
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							bLocal_331 = true;
							iLocal_332 = NETWORK::GET_NETWORK_TIME();
						}
						break;
				}
			
				iLocal_330 = 0;
			}
			break;
	
		case 3:
			if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_330))
			{
				if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_330))
				{
					plateIndex = -1;
					count = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_330);
				
					for (k = 0; k < count; k = k + 1)
					{
						plate = SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_330, k);
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(plate) && MISC::GET_HASH_KEY(plate) == MISC::GET_HASH_KEY(&Global_110651[iLocal_329 /*4*/]))
						{
							plateIndex = k;
							k = count + 1;
						}
					}
				
					if (plateIndex != -1)
					{
						TEXT_LABEL_ASSIGN_STRING(&plateData2, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_330, plateIndex), 64);
					
						if (Global_110660[iLocal_329])
						{
							func_13(&plateData2, "SPPlate", false);
							func_13(&plateData2, "MPPlate", true);
						}
						else if (!func_11(&plateData2, "MPPlate"))
						{
							func_13(&plateData2, "SPPlate", true);
						}
					
						SOCIALCLUB::SC_LICENSEPLATE_SET_PLATE_DATA(plate, plate, &plateData2);
					
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							_STAT_SET_PACKED_BOOL(3763, false, -1);
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						bLocal_331 = true;
						iLocal_332 = NETWORK::GET_NETWORK_TIME();
					}
				
					bLocal_326 = true;
					iLocal_328 = 0;
					TEXT_LABEL_ASSIGN_STRING(&Global_110651[iLocal_329 /*4*/], "", 16);
					iLocal_330 = 0;
				}
			}
			else
			{
				SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_330);
			}
			break;
	}

	return;
}

BOOL func_11(const char* sParam0, char* sParam1) // Position - 0x68E Hash - 0xF137D819 ^0x3CC4CC26
{
	int num;
	int i;
	Hash hashKey;

	num = 10;
	func_12(sParam0, &num);
	hashKey = MISC::GET_HASH_KEY(sParam1);

	for (i = 0; i < num; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&num[i /*8*/]))
			if (MISC::GET_HASH_KEY(&num[i /*8*/]) == hashKey)
				return true;
	}

	return false;
}

void func_12(const char* sParam0, var uParam1) // Position - 0x6E1 Hash - 0x80B3D7DF ^0x64ACB4E2
{
	int lengthOfLiteralString;
	int position;
	var unk;
	var unk3;
	BOOL flag;
	int num;
	int i;

	lengthOfLiteralString = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);

	TEXT_LABEL_ASSIGN_STRING(&unk3, "", 32);
	flag = lengthOfLiteralString != 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&uParam1->[i /*8*/], "", 32);
	}

	while (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, position, position + 1), 8);
		position = position + 1;
	
		if (MISC::GET_HASH_KEY(&unk) == joaat(",") || position >= lengthOfLiteralString)
		{
			if (MISC::GET_HASH_KEY(&unk) != joaat(","))
				TEXT_LABEL_APPEND_STRING(&unk3, &unk, 32);
		
			if (num < *uParam1)
			{
				uParam1->[num /*8*/] = { unk3 };
				num = num + 1;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&unk3, "", 32);
		}
		else
		{
			TEXT_LABEL_APPEND_STRING(&unk3, &unk, 32);
		}
	
		if (position >= lengthOfLiteralString)
			flag = false;
	}

	return;
}

void func_13(const char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x7AC Hash - 0x78060303 ^0x7905E6FF
{
	int num;
	int i;
	Hash hashKey;
	Hash hashKey2;
	BOOL flag;

	if (bParam2)
	{
	}

	num = 10;
	func_12(sParam0, &num);
	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);
	hashKey = MISC::GET_HASH_KEY(sParam1);

	for (i = 0; i < num; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&num[i /*8*/]))
		{
			hashKey2 = MISC::GET_HASH_KEY(&num[i /*8*/]);
		
			if (hashKey2 != hashKey)
			{
				if (flag)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, ",", 64);
					flag = false;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &num[i /*8*/], 64);
				flag = true;
			}
		}
	}

	if (bParam2)
	{
		if (flag)
		{
			TEXT_LABEL_APPEND_STRING(sParam0, ",", 64);
			flag = false;
		}
	
		TEXT_LABEL_APPEND_STRING(sParam0, sParam1, 64);
		flag = true;
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x846 Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_15();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_15() // Position - 0x864 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int func_16(const char* sParam0) // Position - 0x870 Hash - 0x56276657 ^0x99D77459
{
	int i;
	var unk;
	int j;
	int lengthOfLiteralString;

	unk = 8;
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);

	for (i = 0; i < Global_110651; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_110651[i /*4*/]))
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_110651[i /*4*/], sParam0, 16);
			Global_110660[i] = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
			Global_110663 = true;
			Global_110664 = true;
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				for (j = 0; j < 8; j = j + 1)
				{
					if (j < lengthOfLiteralString)
						unk[j] = func_18(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, j, j + 1));
					else
						unk[j] = func_18("");
				}
			
				func_17(1362, unk[0], -1);
				func_17(1363, unk[1], -1);
				func_17(1364, unk[2], -1);
				func_17(1365, unk[3], -1);
				func_17(1366, unk[4], -1);
				func_17(1367, unk[5], -1);
				func_17(1368, unk[6], -1);
				func_17(1369, unk[7], -1);
				_STAT_SET_PACKED_BOOL(3763, true, -1);
			}
		
			return 1;
		}
	}

	for (i = 0; i < Global_110651; i = i + 1)
	{
	}

	return 0;
}

void func_17(int iParam0, int iParam1, int iParam2) // Position - 0x99E Hash - 0x4C8CAB3D ^0xBFF357A2
{
	if (iParam2 == -1)
		iParam2 = func_15();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_18(const char* sParam0) // Position - 0x9C6 Hash - 0xA9E728F8 ^0x51426C2A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 37;

	if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("A"))
		return 0;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("B"))
		return 1;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("C"))
		return 2;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("D"))
		return 3;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("E"))
		return 4;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("F"))
		return 5;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("G"))
		return 6;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("H"))
		return 7;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("I"))
		return 8;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("J"))
		return 9;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("K"))
		return 10;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("L"))
		return 11;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("M"))
		return 12;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("N"))
		return 13;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("O"))
		return 14;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("P"))
		return 15;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Q"))
		return 16;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("R"))
		return 17;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("S"))
		return 18;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("T"))
		return 19;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("U"))
		return 20;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("V"))
		return 21;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("W"))
		return 22;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("X"))
		return 23;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Y"))
		return 24;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("Z"))
		return 25;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("0"))
		return 26;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("1"))
		return 27;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("2"))
		return 28;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("3"))
		return 29;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("4"))
		return 30;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("5"))
		return 31;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("6"))
		return 32;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("7"))
		return 33;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("8"))
		return 34;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY("9"))
		return 35;
	else if (MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(" "))
		return 36;

	return 37;
}

void func_19(char* sParam0, var uParam1, int iParam2) // Position - 0xD4B Hash - 0x49490994 ^0x9E43A42B
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 16);

	for (i = 0; i <= 7; i = i + 1)
	{
		if (i == iParam2 && SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) > 0f)
		{
			TEXT_LABEL_APPEND_STRING(sParam0, " ", 16);
		}
		else
		{
			switch (uParam1->[i])
			{
				case 0:
					TEXT_LABEL_APPEND_STRING(sParam0, "A", 16);
					break;
			
				case 1:
					TEXT_LABEL_APPEND_STRING(sParam0, "B", 16);
					break;
			
				case 2:
					TEXT_LABEL_APPEND_STRING(sParam0, "C", 16);
					break;
			
				case 3:
					TEXT_LABEL_APPEND_STRING(sParam0, "D", 16);
					break;
			
				case 4:
					TEXT_LABEL_APPEND_STRING(sParam0, "E", 16);
					break;
			
				case 5:
					TEXT_LABEL_APPEND_STRING(sParam0, "F", 16);
					break;
			
				case 6:
					TEXT_LABEL_APPEND_STRING(sParam0, "G", 16);
					break;
			
				case 7:
					TEXT_LABEL_APPEND_STRING(sParam0, "H", 16);
					break;
			
				case 8:
					TEXT_LABEL_APPEND_STRING(sParam0, "I", 16);
					break;
			
				case 9:
					TEXT_LABEL_APPEND_STRING(sParam0, "J", 16);
					break;
			
				case 10:
					TEXT_LABEL_APPEND_STRING(sParam0, "K", 16);
					break;
			
				case 11:
					TEXT_LABEL_APPEND_STRING(sParam0, "L", 16);
					break;
			
				case 12:
					TEXT_LABEL_APPEND_STRING(sParam0, "M", 16);
					break;
			
				case 13:
					TEXT_LABEL_APPEND_STRING(sParam0, "N", 16);
					break;
			
				case 14:
					TEXT_LABEL_APPEND_STRING(sParam0, "O", 16);
					break;
			
				case 15:
					TEXT_LABEL_APPEND_STRING(sParam0, "P", 16);
					break;
			
				case 16:
					TEXT_LABEL_APPEND_STRING(sParam0, "Q", 16);
					break;
			
				case 17:
					TEXT_LABEL_APPEND_STRING(sParam0, "R", 16);
					break;
			
				case 18:
					TEXT_LABEL_APPEND_STRING(sParam0, "S", 16);
					break;
			
				case 19:
					TEXT_LABEL_APPEND_STRING(sParam0, "T", 16);
					break;
			
				case 20:
					TEXT_LABEL_APPEND_STRING(sParam0, "U", 16);
					break;
			
				case 21:
					TEXT_LABEL_APPEND_STRING(sParam0, "V", 16);
					break;
			
				case 22:
					TEXT_LABEL_APPEND_STRING(sParam0, "W", 16);
					break;
			
				case 23:
					TEXT_LABEL_APPEND_STRING(sParam0, "X", 16);
					break;
			
				case 24:
					TEXT_LABEL_APPEND_STRING(sParam0, "Y", 16);
					break;
			
				case 25:
					TEXT_LABEL_APPEND_STRING(sParam0, "Z", 16);
					break;
			
				case 26:
					TEXT_LABEL_APPEND_STRING(sParam0, "0", 16);
					break;
			
				case 27:
					TEXT_LABEL_APPEND_STRING(sParam0, "1", 16);
					break;
			
				case 28:
					TEXT_LABEL_APPEND_STRING(sParam0, "2", 16);
					break;
			
				case 29:
					TEXT_LABEL_APPEND_STRING(sParam0, "3", 16);
					break;
			
				case 30:
					TEXT_LABEL_APPEND_STRING(sParam0, "4", 16);
					break;
			
				case 31:
					TEXT_LABEL_APPEND_STRING(sParam0, "5", 16);
					break;
			
				case 32:
					TEXT_LABEL_APPEND_STRING(sParam0, "6", 16);
					break;
			
				case 33:
					TEXT_LABEL_APPEND_STRING(sParam0, "7", 16);
					break;
			
				case 34:
					TEXT_LABEL_APPEND_STRING(sParam0, "8", 16);
					break;
			
				case 35:
					TEXT_LABEL_APPEND_STRING(sParam0, "9", 16);
					break;
			
				case 36:
					TEXT_LABEL_APPEND_STRING(sParam0, " ", 16);
					break;
			
				default:
					TEXT_LABEL_APPEND_STRING(sParam0, "", 16);
					break;
			}
		}
	}

	return;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0xFF6 Hash - 0x6099A833 ^0x79D555BB
{
	if (iParam1 == -1)
		iParam1 = func_15();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x1012 Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_15();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_22() // Position - 0x102E Hash - 0x6A808FCF ^0x6A808FCF
{
	int num;
	int i;
	int count;
	var unk;

	if (Global_110664 && !bLocal_326)
	{
		bLocal_326 = true;
		Global_110664 = false;
	}

	if (bLocal_326 && iLocal_328 == 0 && !bLocal_87 && !Global_262145.f_10614 && iLocal_70 != 0)
	{
		num = 0;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		num = num + func_23("orderCount_sp0");
		num = num + func_23("orderCount_sp1");
		num = num + func_23("orderCount_sp2");
		num = num + func_23("orderCount_mp0");
		num = num + func_23("orderCount_mp1");
		num = num + func_23("orderCount_mp2");
		num = num + func_23("orderCount_mp3");
		num = num + func_23("orderCount_mp4");
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		num = num;
	
		if (SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_VALID(iLocal_330))
		{
			if (!SOCIALCLUB::SC_LICENSEPLATE_GET_CHECK_IS_PENDING(iLocal_330))
			{
				count = Global_110499;
			
				for (i = 0; i < count; i = i + 1)
				{
					TEXT_LABEL_ASSIGN_STRING(&Global_110499[i /*4*/], "", 16);
					Global_110620[i] = false;
				}
			
				count = SOCIALCLUB::SC_LICENSEPLATE_GET_COUNT(iLocal_330);
				Global_110665 = count >= Global_110499;
			
				for (i = 0; i < count; i = i + 1)
				{
					if (i < Global_110499)
					{
						TEXT_LABEL_ASSIGN_STRING(&Global_110499[i /*4*/], SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE(iLocal_330, i), 16);
						TEXT_LABEL_ASSIGN_STRING(&unk, SOCIALCLUB::SC_LICENSEPLATE_GET_PLATE_DATA(iLocal_330, i), 64);
					
						if (func_11(&unk, "MPPlate") || func_11(&unk, "NoDelete") || i == 0)
							Global_110620[i] = true;
					}
				}
			
				iLocal_330 = 0;
				bLocal_326 = false;
				Global_110666 = true;
			}
		}
		else
		{
			SOCIALCLUB::SC_LICENSEPLATE_CHECK_STRING("TEST", &iLocal_330);
		}
	}

	return;
}

ePedComponentType func_23(char* sParam0) // Position - 0x11DA Hash - 0x6E01F166 ^0xE15AF9B
{
	return APP::APP_GET_INT(func_24(sParam0));
}

char* func_24(char* sParam0) // Position - 0x11EC Hash - 0x73DCA1E1 ^0xA9F84178
{
	Hash hashKey;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	if (MISC::GET_HASH_KEY("uid") == hashKey)
		return "0";

	if (MISC::GET_HASH_KEY("carModel") == hashKey)
		return "1";

	if (MISC::GET_HASH_KEY("playerSlot") == hashKey)
		return "2";

	if (MISC::GET_HASH_KEY("playerRank") == hashKey)
		return "3";

	if (MISC::GET_HASH_KEY("playerGangR") == hashKey)
		return "4";

	if (MISC::GET_HASH_KEY("playerGangG") == hashKey)
		return "5";

	if (MISC::GET_HASH_KEY("playerGangB") == hashKey)
		return "6";

	if (MISC::GET_HASH_KEY("carColour1") == hashKey)
		return "7";

	if (MISC::GET_HASH_KEY("carColour2") == hashKey)
		return "8";

	if (MISC::GET_HASH_KEY("carPlateBack") == hashKey)
		return "9";

	if (MISC::GET_HASH_KEY("windowTint") == hashKey)
		return "10";

	if (MISC::GET_HASH_KEY("bulletProofTyres") == hashKey)
		return "11";

	if (MISC::GET_HASH_KEY("carEngine") == hashKey)
		return "12";

	if (MISC::GET_HASH_KEY("carBrakes") == hashKey)
		return "13";

	if (MISC::GET_HASH_KEY("carExhaust") == hashKey)
		return "14";

	if (MISC::GET_HASH_KEY("carWheel") == hashKey)
		return "15";

	if (MISC::GET_HASH_KEY("carHorn1") == hashKey)
		return "16";

	if (MISC::GET_HASH_KEY("carHorn2") == hashKey)
		return "17";

	if (MISC::GET_HASH_KEY("carHorn3") == hashKey)
		return "18";

	if (MISC::GET_HASH_KEY("carHorn4") == hashKey)
		return "19";

	if (MISC::GET_HASH_KEY("carHorn5") == hashKey)
		return "20";

	if (MISC::GET_HASH_KEY("carHorn6") == hashKey)
		return "21";

	if (MISC::GET_HASH_KEY("carHorn7") == hashKey)
		return "22";

	if (MISC::GET_HASH_KEY("carHorn8") == hashKey)
		return "23";

	if (MISC::GET_HASH_KEY("carHorn9") == hashKey)
		return "24";

	if (MISC::GET_HASH_KEY("tyreSmoke") == hashKey)
		return "25";

	if (MISC::GET_HASH_KEY("tyreSmokeColourRed") == hashKey)
		return "26";

	if (MISC::GET_HASH_KEY("tyreSmokeColourGreen") == hashKey)
		return "27";

	if (MISC::GET_HASH_KEY("tyreSmokeColourBlue") == hashKey)
		return "28";

	if (MISC::GET_HASH_KEY("carHorn") == hashKey)
		return "29";

	if (MISC::GET_HASH_KEY("carArmour") == hashKey)
		return "30";

	if (MISC::GET_HASH_KEY("carTurbo") == hashKey)
		return "31";

	if (MISC::GET_HASH_KEY("carSuspension") == hashKey)
		return "32";

	if (MISC::GET_HASH_KEY("carXenonLights") == hashKey)
		return "33";

	if (MISC::GET_HASH_KEY("carWheelType") == hashKey)
		return "34";

	if (MISC::GET_HASH_KEY("carUnlocked") == hashKey)
		return "35";

	if (MISC::GET_HASH_KEY("carColour1Unlocked") == hashKey)
		return "36";

	if (MISC::GET_HASH_KEY("carColour2Unlocked") == hashKey)
		return "37";

	if (MISC::GET_HASH_KEY("tyreSmokeColourEnabled") == hashKey)
		return "38";

	if (MISC::GET_HASH_KEY("carEngineCount") == hashKey)
		return "39";

	if (MISC::GET_HASH_KEY("carBrakesCount") == hashKey)
		return "40";

	if (MISC::GET_HASH_KEY("carExhaustCount") == hashKey)
		return "41";

	if (MISC::GET_HASH_KEY("carWheelCount") == hashKey)
		return "42";

	if (MISC::GET_HASH_KEY("carHornCount") == hashKey)
		return "43";

	if (MISC::GET_HASH_KEY("carArmourCount") == hashKey)
		return "44";

	if (MISC::GET_HASH_KEY("carSuspensionCount") == hashKey)
		return "45";

	if (MISC::GET_HASH_KEY("carColoursUnlocked0") == hashKey)
		return "46";

	if (MISC::GET_HASH_KEY("carColoursUnlocked1") == hashKey)
		return "47";

	if (MISC::GET_HASH_KEY("carColoursUnlocked2") == hashKey)
		return "48";

	if (MISC::GET_HASH_KEY("carColoursUnlocked3") == hashKey)
		return "49";

	if (MISC::GET_HASH_KEY("carColoursUnlocked4") == hashKey)
		return "50";

	if (MISC::GET_HASH_KEY("carColoursUnlocked5") == hashKey)
		return "51";

	if (MISC::GET_HASH_KEY("carPriceModifier") == hashKey)
		return "52";

	if (MISC::GET_HASH_KEY("carType") == hashKey)
		return "53";

	if (MISC::GET_HASH_KEY("playerGang") == hashKey)
		return "54";

	if (MISC::GET_HASH_KEY("unlockBitset1") == hashKey)
		return "55";

	if (MISC::GET_HASH_KEY("unlockBitset2") == hashKey)
		return "56";

	if (MISC::GET_HASH_KEY("orderCount_sp0") == hashKey)
		return "57";

	if (MISC::GET_HASH_KEY("orderCount_sp1") == hashKey)
		return "58";

	if (MISC::GET_HASH_KEY("orderCount_sp2") == hashKey)
		return "59";

	if (MISC::GET_HASH_KEY("orderCount_mp0") == hashKey)
		return "60";

	if (MISC::GET_HASH_KEY("orderCount_mp1") == hashKey)
		return "61";

	if (MISC::GET_HASH_KEY("orderCount_mp2") == hashKey)
		return "62";

	if (MISC::GET_HASH_KEY("orderCount_mp3") == hashKey)
		return "63";

	if (MISC::GET_HASH_KEY("orderCount_mp4") == hashKey)
		return "64";

	if (MISC::GET_HASH_KEY("spDiscount") == hashKey)
		return "65";

	if (MISC::GET_HASH_KEY("mpDiscount") == hashKey)
		return "66";

	if (MISC::GET_HASH_KEY("carColour1Group") == hashKey)
		return "67";

	if (MISC::GET_HASH_KEY("carColour2Group") == hashKey)
		return "68";

	if (MISC::GET_HASH_KEY("unlockBitset3") == hashKey)
		return "69";

	if (MISC::GET_HASH_KEY("playerName") == hashKey)
		return "70";

	if (MISC::GET_HASH_KEY("newItemUnlocks") == hashKey)
		return "72";

	if (MISC::GET_HASH_KEY("playerNameSP") == hashKey)
		return "73";

	if (MISC::GET_HASH_KEY("playerNameMP") == hashKey)
		return "74";

	return sParam0;
}

void func_25(var uParam0) // Position - 0x17B4 Hash - 0x94CE74A1 ^0xB7E244A6
{
	BOOL flag;

	flag = false;

	if (!_STOPWATCH_IS_INITIALIZED(&(uParam0->f_10)))
		_STOPWATCH_INITIALIZE(&(uParam0->f_10), false, false);
	else if (_STOPWATCH_HAS_TIME_PASSED(&(uParam0->f_10), func_192(), false))
		if (!uParam0->f_165)
			flag = true;

	func_55(uParam0, flag);

	if (func_54() && func_51())
		func_26(uParam0);

	if (flag)
	{
		if (uParam0->f_165)
		{
			_STOPWATCH_DESTROY(&(uParam0->f_10));
			uParam0->f_165 = 0;
		}
	}

	return;
}

void func_26(var uParam0) // Position - 0x182A Hash - 0x9B7DCD7A ^0x6724413C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam0 = 0;
		return;
	}

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return;

	if (!CAM::IS_SCREEN_FADED_IN())
		return;

	if (uParam0->f_1 != func_15())
		*uParam0 = 0;

	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_1 != func_15())
			{
				uParam0->f_2 = func_49(1080, -1);
				uParam0->f_3 = func_49(150, -1);
				uParam0->f_4 = func_49(151, -1);
				uParam0->f_5 = func_49(113, -1);
				uParam0->f_6 = func_47(11, -1);
				uParam0->f_7 = func_44(32, -1);
				uParam0->f_8 = func_44(0, -1);
			
				if (func_41(10))
					MISC::SET_BIT(&(uParam0->f_9), 0);
			
				if (func_38(10))
					MISC::SET_BIT(&(uParam0->f_9), 1);
			
				if (func_35(10))
					MISC::SET_BIT(&(uParam0->f_9), 2);
			
				if (func_32(10))
					MISC::SET_BIT(&(uParam0->f_9), 3);
			
				if (func_41(11))
					MISC::SET_BIT(&(uParam0->f_9), 4);
			
				if (func_38(11))
					MISC::SET_BIT(&(uParam0->f_9), 5);
			
				if (func_35(11))
					MISC::SET_BIT(&(uParam0->f_9), 6);
			
				if (func_32(11))
					MISC::SET_BIT(&(uParam0->f_9), 7);
			
				if (func_41(60))
					MISC::SET_BIT(&(uParam0->f_9), 8);
			
				if (func_38(60))
					MISC::SET_BIT(&(uParam0->f_9), 9);
			
				if (func_35(60))
					MISC::SET_BIT(&(uParam0->f_9), 10);
			
				if (func_32(60))
					MISC::SET_BIT(&(uParam0->f_9), 11);
			
				if (func_27(23))
					MISC::SET_BIT(&(uParam0->f_9), 15);
			
				if (func_41(61))
					MISC::SET_BIT(&(uParam0->f_9), 16);
			
				if (func_38(61))
					MISC::SET_BIT(&(uParam0->f_9), 17);
			
				if (func_35(61))
					MISC::SET_BIT(&(uParam0->f_9), 18);
			
				if (func_32(61))
					MISC::SET_BIT(&(uParam0->f_9), 19);
			
				if (func_41(62))
					MISC::SET_BIT(&(uParam0->f_9), 20);
			
				if (func_38(62))
					MISC::SET_BIT(&(uParam0->f_9), 21);
			
				if (func_35(62))
					MISC::SET_BIT(&(uParam0->f_9), 22);
			
				if (func_32(62))
					MISC::SET_BIT(&(uParam0->f_9), 23);
			
				if (func_41(63))
					MISC::SET_BIT(&(uParam0->f_9), 24);
			
				if (func_38(63))
					MISC::SET_BIT(&(uParam0->f_9), 25);
			
				if (func_35(63))
					MISC::SET_BIT(&(uParam0->f_9), 26);
			
				if (func_32(63))
					MISC::SET_BIT(&(uParam0->f_9), 27);
			
				uParam0->f_1 = func_15();
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 1:
			if (!IS_BIT_SET(uParam0->f_9, 0))
			{
				if (func_41(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 0);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 1))
			{
				if (func_38(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 1);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 2))
			{
				if (func_35(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 2);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 3))
			{
				if (func_32(10))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_50_VEHICLES_BLOWNUP"), func_47(10, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 3);
				}
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 2:
			if (!IS_BIT_SET(uParam0->f_9, 4))
			{
				if (func_41(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 4);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 5))
			{
				if (func_38(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 5);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 6))
			{
				if (func_35(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 6);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 7))
			{
				if (func_32(11))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_VEHICLES_JACKEDR"), func_47(11, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 7);
				}
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 3:
			if (!IS_BIT_SET(uParam0->f_9, 8))
			{
				if (func_41(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 8);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 9))
			{
				if (func_38(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 9);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 10))
			{
				if (func_35(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 10);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 11))
			{
				if (func_32(60))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMTIME5STARWANTED"), func_47(60, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 11);
				}
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 4:
			if (!IS_BIT_SET(uParam0->f_9, 15))
			{
				if (func_27(23))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_FLOAT(joaat("MP0_AWD_FMFURTHESTWHEELIE"), func_44(32, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 15);
				}
			}
		
			if (!IS_BIT_SET(uParam0->f_9, 16))
			{
				if (func_41(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 16);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 17))
			{
				if (func_38(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 17);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 18))
			{
				if (func_35(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 18);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 19))
			{
				if (func_32(61))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"), func_47(61, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 19);
				}
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 5:
			if (!IS_BIT_SET(uParam0->f_9, 20))
			{
				if (func_41(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 20);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 21))
			{
				if (func_38(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 21);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 22))
			{
				if (func_35(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 22);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 23))
			{
				if (func_32(62))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"), func_47(62, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 23);
				}
			}
		
			*uParam0 = *uParam0 + 1;
			break;
	
		case 6:
			if (!IS_BIT_SET(uParam0->f_9, 24))
			{
				if (func_41(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 24);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 25))
			{
				if (func_38(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 25);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 26))
			{
				if (func_35(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 26);
				}
			}
			else if (!IS_BIT_SET(uParam0->f_9, 27))
			{
				if (func_32(63))
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"), func_47(63, -1), 0);
					MISC::SET_BIT(&(uParam0->f_9), 27);
				}
			}
		
			*uParam0 = 0;
			break;
	}

	return;
}

BOOL func_27(int iParam0) // Position - 0x1FD0 Hash - 0x4D49281D ^0x4D49281D
{
	ePedComponentType type;
	int num;

	type = func_29(iParam0);
	num = iParam0;
	return IS_BIT_SET(type, func_28(num));
}

int func_28(int iParam0) // Position - 0x1FED Hash - 0x9042BAD4 ^0x9042BAD4
{
	return iParam0 % 32;
}

ePedComponentType func_29(int iParam0) // Position - 0x1FFA Hash - 0xBB7329A4 ^0x3B7DCA20
{
	switch (func_30(iParam0))
	{
		case 765:
			return func_49(765, -1);
	
		case 766:
			return func_49(766, -1);
	
		case 767:
			return func_49(767, -1);
	
		case 8734:
			return func_49(8734, -1);
	
		case 9538:
			return func_49(9538, -1);
	
		case 11805:
			return func_49(11805, -1);
	
		default:
		
	}

	return PV_COMP_HEAD;
}

int func_30(int iParam0) // Position - 0x2074 Hash - 0xE07AE818 ^0x577DA42
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	switch (num2)
	{
		case 0:
			return 765;
	
		case 1:
			return 766;
	
		case 2:
			return 767;
	
		case 3:
			return 8734;
	
		case 4:
			return 9538;
	
		case 5:
			return 11805;
	}

	return 14835;
}

int func_31(int iParam0) // Position - 0x20EC Hash - 0x195EBE32 ^0x195EBE32
{
	return iParam0 / 32;
}

BOOL func_32(int iParam0) // Position - 0x20F9 Hash - 0x4D49281D ^0x4D49281D
{
	ePedComponentType type;
	int num;

	type = func_33(iParam0);
	num = iParam0;
	return IS_BIT_SET(type, func_28(num));
}

ePedComponentType func_33(int iParam0) // Position - 0x2116 Hash - 0xBB7329A4 ^0xE8CDF20
{
	switch (func_34(iParam0))
	{
		case 758:
			return func_49(758, -1);
	
		case 759:
			return func_49(759, -1);
	
		case 760:
			return func_49(760, -1);
	
		case 761:
			return func_49(761, -1);
	
		case 8735:
			return func_49(8735, -1);
	
		case 12315:
			return func_49(12315, -1);
	
		default:
		
	}

	return PV_COMP_HEAD;
}

int func_34(int iParam0) // Position - 0x2190 Hash - 0xE07AE818 ^0x87BF4E0F
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	switch (num2)
	{
		case 0:
			return 758;
	
		case 1:
			return 759;
	
		case 2:
			return 760;
	
		case 3:
			return 761;
	
		case 4:
			return 8735;
	
		case 5:
			return 12315;
	}

	return 14835;
}

BOOL func_35(int iParam0) // Position - 0x2208 Hash - 0x4D49281D ^0x4D49281D
{
	ePedComponentType type;
	int num;

	type = func_36(iParam0);
	num = iParam0;
	return IS_BIT_SET(type, func_28(num));
}

ePedComponentType func_36(int iParam0) // Position - 0x2225 Hash - 0xBB7329A4 ^0x85408EB1
{
	switch (func_37(iParam0))
	{
		case 768:
			return func_49(768, -1);
	
		case 769:
			return func_49(769, -1);
	
		case 770:
			return func_49(770, -1);
	
		case 771:
			return func_49(771, -1);
	
		case 8733:
			return func_49(8733, -1);
	
		case 12314:
			return func_49(12314, -1);
	
		default:
		
	}

	return PV_COMP_HEAD;
}

int func_37(int iParam0) // Position - 0x229F Hash - 0xE07AE818 ^0x90021C1
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	switch (num2)
	{
		case 0:
			return 768;
	
		case 1:
			return 769;
	
		case 2:
			return 770;
	
		case 3:
			return 771;
	
		case 4:
			return 8733;
	
		case 5:
			return 12314;
	}

	return 14835;
}

BOOL func_38(int iParam0) // Position - 0x2317 Hash - 0x4D49281D ^0x4D49281D
{
	ePedComponentType type;
	int num;

	type = func_39(iParam0);
	num = iParam0;
	return IS_BIT_SET(type, func_28(num));
}

ePedComponentType func_39(int iParam0) // Position - 0x2334 Hash - 0xBB7329A4 ^0x36DC4704
{
	switch (func_40(iParam0))
	{
		case 778:
			return func_49(778, -1);
	
		case 779:
			return func_49(779, -1);
	
		case 780:
			return func_49(780, -1);
	
		case 781:
			return func_49(781, -1);
	
		case 8731:
			return func_49(8731, -1);
	
		case 12313:
			return func_49(12313, -1);
	
		default:
		
	}

	return PV_COMP_HEAD;
}

int func_40(int iParam0) // Position - 0x23AE Hash - 0xE07AE818 ^0x8AB5E57B
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	switch (num2)
	{
		case 0:
			return 778;
	
		case 1:
			return 779;
	
		case 2:
			return 780;
	
		case 3:
			return 781;
	
		case 4:
			return 8731;
	
		case 5:
			return 12313;
	}

	return 14835;
}

BOOL func_41(int iParam0) // Position - 0x2426 Hash - 0x4D49281D ^0x4D49281D
{
	ePedComponentType type;
	int num;

	type = func_42(iParam0);
	num = iParam0;
	return IS_BIT_SET(type, func_28(num));
}

ePedComponentType func_42(int iParam0) // Position - 0x2443 Hash - 0xBB7329A4 ^0x730E6480
{
	switch (func_43(iParam0))
	{
		case 788:
			return func_49(788, -1);
	
		case 789:
			return func_49(789, -1);
	
		case 790:
			return func_49(790, -1);
	
		case 791:
			return func_49(791, -1);
	
		case 8729:
			return func_49(8729, -1);
	
		case 12312:
			return func_49(12312, -1);
	
		default:
		
	}

	return PV_COMP_HEAD;
}

int func_43(int iParam0) // Position - 0x24BD Hash - 0xE07AE818 ^0x85B6D04C
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	switch (num2)
	{
		case 0:
			return 788;
	
		case 1:
			return 789;
	
		case 2:
			return 790;
	
		case 3:
			return 791;
	
		case 4:
			return 8729;
	
		case 5:
			return 12312;
	}

	return 14835;
}

float func_44(int iParam0, int iParam1) // Position - 0x2535 Hash - 0xF2F05532 ^0xFBCBE74A
{
	Hash statHash;
	float outValue;

	statHash = func_45(iParam0, iParam1);

	if (STATS::STAT_GET_FLOAT(statHash, &outValue, -1))
		return outValue;

	return 0f;
}

Hash func_45(int iParam0, int iParam1) // Position - 0x2559 Hash - 0x2DB666AE ^0xA0BA86C4
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(1, iParam0, func_46(iParam1));
}

int func_46(int iParam0) // Position - 0x256E Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_15();
	
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

int func_47(int iParam0, int iParam1) // Position - 0x25A2 Hash - 0x5137F6D6 ^0x4CA951A0
{
	Hash statHash;
	int outValue;

	statHash = func_48(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_48(int iParam0, int iParam1) // Position - 0x25C6 Hash - 0x44FC0648 ^0x78F4F029
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_46(iParam1));
}

ePedComponentType func_49(int iParam0, int iParam1) // Position - 0x25DC Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_50(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_50(int iParam0, int iParam1) // Position - 0x260B Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_46(iParam1));
}

BOOL func_51() // Position - 0x2620 Hash - 0x8E091D62 ^0x230252DD
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

BOOL IS_XBOX_PLATFORM() // Position - 0x2687 Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x269D Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_54() // Position - 0x26B3 Hash - 0xEE3A5EA7 ^0x2E0A24B
{
	if (IS_PLAYSTATION_PLATFORM())
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == false)
			return true;
	else if (IS_XBOX_PLATFORM())
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == false)
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			return true;

	return false;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x26FA Hash - 0x40A3303 ^0x5691A617
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_PRESENCE_STAT_UPDATE:
				func_191(i);
				func_185(i, uParam0, bParam1);
				break;
		
			case EVENT_NETWORK_CLAN_RANK_CHANGE:
				func_183(i, uParam0, bParam1);
				break;
		
			case EVENT_NETWORK_INBOX_MSGS_RCVD:
				Global_2738935.f_5078 = 1;
				break;
		
			case EVENT_0x03C0D0BB:
				break;
		
			case EVENT_0xC5857F28:
				func_182(i, uParam0, bParam1);
				break;
		
			case EVENT_0x6B39C3C7:
				break;
		
			case EVENT_NETWORK_CLAN_KICKED:
				func_181(i, uParam0, bParam1);
				break;
		
			case EVENT_NETWORK_PRESENCE_EMAIL:
				func_180(uParam0, bParam1);
				break;
		}
	}

	if (!Global_79389)
		if (Global_113912 > 0)
			func_170();

	func_56(uParam0, bParam1);
	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x27CA Hash - 0x93C90D18 ^0x177D48FE
{
	int totalNumMessages;
	int i;
	Hash messageTypeAtIndex;
	var out;
	var out2;
	var out3;
	var outData;
	BOOL flag;
	var unk157;
	int num;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return;

	if (!CAM::IS_SCREEN_FADED_IN())
		return;

	if (func_4())
		return;

	totalNumMessages = SOCIALCLUB::SC_INBOX_GET_TOTAL_NUM_MESSAGES();
	i = 0;
	flag.f_16 = 1;
	flag.f_20 = -1;
	flag.f_21 = -1;
	flag.f_22 = 2;
	flag.f_35 = 2;
	unk157.f_65 = -1;
	unk157.f_66 = -1;
	unk157.f_67 = 2;
	num = 0;

	switch (uParam0->f_166)
	{
		case 0:
			if (bParam1)
			{
				for (i = 0; i < totalNumMessages; i = i + 1)
				{
					if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(i))
					{
						if (func_54() && func_51())
						{
							messageTypeAtIndex = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(i);
						
							if (func_169(messageTypeAtIndex))
							{
								switch (messageTypeAtIndex)
								{
									case joaat("crew_message"):
										if (MISC::GET_PROFILE_SETTING(802) == 1)
										{
											SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(i);
											SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "msg", &out);
											SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
										}
										break;
								
									case joaat("gs_award"):
										func_168(i, 0);
										break;
								}
							}
						}
						else
						{
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
						}
					}
				}
			}
		
			uParam0->f_166 = uParam0->f_166 + 1;
			break;
	
		case 1:
			for (i = 0; i < totalNumMessages; i = i + 1)
			{
				if (!SOCIALCLUB::SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(i))
				{
					messageTypeAtIndex = SOCIALCLUB::SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(i);
				
					switch (messageTypeAtIndex)
					{
						case joaat("crew_message"):
							if (bParam1)
							{
								if (func_54() && func_51())
								{
									if (MISC::GET_PROFILE_SETTING(802) == 1)
									{
										SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(i);
										SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "msg", &out);
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
								}
							}
							break;
					
						case joaat("StatUpdate"):
							break;
					
						case joaat("mission_verified"):
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_165())
									{
										if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
										{
											if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
											{
												if (func_54() && func_51())
												{
													SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(i);
													func_117(0, "XPT_MISSVER" /*RP for verified mission: ~1~.*/, joaat("XPTYPE_SOCIALCLUB"), 475954354, 5000, 1, -1, false);
													SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "msg", &out);
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
												}
												else
												{
													SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
												}
											
												uParam0->f_165 = 1;
											}
										}
									}
								}
							}
							break;
					
						case joaat("rockstar_message"):
							if (func_54() && func_51() && Global_262145.f_24845)
							{
								SOCIALCLUB::SC_INBOX_MESSAGE_DO_APPLY(i);
								SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "msg", &out);
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
							}
							else
							{
								SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
							}
							break;
					
						case 563149281:
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_54() && func_51())
									{
										if (func_116() == 0 && !func_115() && !func_114() && !func_113() && !func_112() && !func_111() && !func_110() && !func_109() && !func_108() && func_165() && func_103() && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 8 && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 9 && !func_101(PLAYER::PLAYER_ID()) && !func_100() && !func_98(PLAYER::PLAYER_ID(), true, false) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_97() && !Global_1919038)
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_UGCDATA(i, &(uParam0->f_13)))
											{
												if (func_83(&flag, &(uParam0->f_13), &unk157, &num))
												{
													if (flag)
													{
														if (uParam0->f_13.f_58)
														{
														}
													
														func_80(&(uParam0->f_13.f_10), uParam0->f_13.f_8, uParam0->f_13.f_55, uParam0->f_13.f_56, &(unk157.f_22));
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
														uParam0->f_165 = 1;
													}
													else
													{
														SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
													}
												}
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
								}
							}
							break;
					
						case -89752472:
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									if (func_54() && func_51())
									{
										if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "mn", &out3))
										{
											if (SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(i, "gtag", &out2))
											{
												func_79("SC_PUBLISH" /*~a~ published the Job "~a~".*/, &out2, &out3, HUD_COLOUR_PURE_WHITE, false);
												SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
												uParam0->f_165 = 1;
											}
										}
									}
									else
									{
										SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
									}
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
								}
							}
							break;
					
						case 1662919852:
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
							break;
					
						case joaat("bounty"):
							if (bParam1)
							{
								if (!uParam0->f_165)
								{
									SOCIALCLUB::SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(i, &outData);
								
									if (IS_BIT_SET(outData.f_16, 2))
									{
										if (func_54() && func_51())
											func_77("FM_TXT_BNTY7" /*~a~ survived the $~1~ Bounty you placed on them.*/, &outData, outData.f_17, HUD_COLOUR_PURE_WHITE, false);
									
										func_70("LESTER", "3", 12, "CT_AUD", "MPCT_BNTFL");
									}
									else if (IS_BIT_SET(outData.f_16, 0))
									{
										func_70("LESTER", "3", 12, "CT_AUD", "MPCT_BNTSuc");
									
										if (func_54() && func_51())
											func_67("FM_TXT_BNTY5" /*The $~1~ Bounty on ~a~ has been claimed by ~a~.*/, &outData, &(outData.f_8), outData.f_17, HUD_COLOUR_PURE_WHITE);
									}
								
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
									uParam0->f_165 = 1;
								}
								else
								{
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
								}
							}
							break;
					
						case -775483672:
							if (func_54() && func_51())
								if (bParam1)
									if (!uParam0->f_165)
										_THEFEED_SHOW_MESSAGE("SC_WON_TOURN" /*Congratulations! Your Tournament Winners T-shirt can be purchased in any Clothes Shop.*/, false);
						
							func_57(151, true, -1, true);
							SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
							break;
					
						case joaat("gs_award"):
							func_168(i, 0);
							break;
					
						default:
							if (bParam1)
								if (MISC::GET_HASH_KEY(SOCIALCLUB::SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(i)) != joaat("COUPON"))
									SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(i);
							break;
					}
				}
			}
		
			if (uParam0->f_165)
				uParam0->f_166 = 0;
			break;
	}

	return;
}

void func_57(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2D8C Hash - 0xC00D48A9 ^0x169717F7
{
	Hash statName;

	statName = func_58(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, bParam3);

	return;
}

Hash func_58(int iParam0, int iParam1) // Position - 0x2DAF Hash - 0x1D62A43E ^0x33D7B335
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_46(iParam1));
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x2DC4 Hash - 0x1D302AB2 ^0xA49F216C
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

void func_60(int iParam0, char* sParam1, int iParam2, char* sParam3, Hash hParam4, Hash hParam5, Hash hParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x2DFC Hash - 0xD30C28A6 ^0x34D37D69
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_63(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_61(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1937329.f_5[num /*53*/] = iParam0;
		Global_1937329.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1937329.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[num /*53*/].f_2[0] = hParam4;
		Global_1937329.f_5[num /*53*/].f_2[1] = hParam5;
		Global_1937329.f_5[num /*53*/].f_2[2] = hParam6;
		Global_1937329.f_5[num /*53*/].f_7 = iParam7;
		Global_1937329.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1937329.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937329.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937329.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1937329.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_61(int iParam0) // Position - 0x2F04 Hash - 0xA7898F03 ^0xA3D88B74
{
	int i;

	for (i = 0; i <= Global_1937329 - 1; i = i + 1)
	{
		if (iParam0 > Global_1937329.f_5[i /*53*/].f_1)
		{
			func_62(i);
			return i;
		}
	}

	Global_1937329 = Global_1937329 + 1;

	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}

	return Global_1937329 - 1;
}

void func_62(int iParam0) // Position - 0x2F66 Hash - 0x29ABAA16 ^0xEC85F5D7
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1937329.f_5[i /*53*/] = { Global_1937329.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL func_63(ePedComponentType epctParam0, int iParam1) // Position - 0x2F9F Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_65(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_64(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845281[epctParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

eCharacter func_64(int iParam0, BOOL bParam1) // Position - 0x2FF8 Hash - 0x1DCD393E ^0x1DCD393E
{
	eCharacter character;
	int num;

	num = iParam0;

	if (num == -1)
		num = func_15();

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

BOOL func_65(ePedComponentType epctParam0) // Position - 0x3039 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x305B Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_67(char* sParam0, char* sParam1, char* sParam2, Hash hParam3, eHudColour ehcParam4) // Position - 0x306C Hash - 0x17188464 ^0xA5AFCA5D
{
	int num;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));

	if (!(ehcParam4 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);

	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam2));

	if (!(ehcParam4 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);

	HUD::ADD_TEXT_COMPONENT_INTEGER(hParam3);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(42, sParam0, 1, sParam1, hParam3, 0, 0, 0f, 1, sParam2, 0, 0);
	return num;
}

const char* func_68(char* sParam0) // Position - 0x30D2 Hash - 0xA33ED2A1 ^0xCF0A674F
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>~s~", 64);
	return func_69(&unk);
}

const char* func_69(var uParam0) // Position - 0x30F6 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_70(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4) // Position - 0x3100 Hash - 0x6CC6C1C0 ^0x6CC6C1C0
{
	func_71(sParam0, sParam1, iParam2, sParam3, sParam4, "");
	return;
}

void func_71(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5) // Position - 0x3119 Hash - 0xDD9ABBE9 ^0xDD9ABBE9
{
	int num;

	num = 0;

	if (func_72(num, sParam0, sParam1, iParam2, sParam3, sParam4, sParam5, 0))
		return;

	return;
}

BOOL func_72(int iParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7) // Position - 0x313D Hash - 0x924AEECC ^0x32CCB067
{
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 1)
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 7)
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam5) > 15)
		return false;

	if (iParam0 == 1)
		return false;

	if (iParam7 < 0)
		iParam7 = 0;

	num = iParam0;

	if (func_76(num))
		return false;

	func_75(num, false);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[num /*24*/].f_1), sParam1, 24);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[num /*24*/].f_7), sParam2, 8);
	Global_1663588.f_15[num /*24*/].f_9 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[num /*24*/].f_10), sParam4, 8);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[num /*24*/].f_12), sParam5, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[num /*24*/].f_18), sParam6, 24);
	func_74(num, iParam7);
	func_73(num);
	return true;
}

void func_73(int iParam0) // Position - 0x324B Hash - 0x1555F227 ^0x2BA7A62
{
	MISC::SET_BIT(&Global_1663588.f_15[iParam0 /*24*/], 0);
	return;
}

void func_74(int iParam0, int iParam1) // Position - 0x3262 Hash - 0x9E238871 ^0x47A80B25
{
	Global_1663588.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1663588.f_15[iParam0 /*24*/].f_17 = 1;
	return;
}

void func_75(int iParam0, BOOL bParam1) // Position - 0x328D Hash - 0xD8C59CB9 ^0xDD8EBBF3
{
	Global_1663588.f_15[iParam0 /*24*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[iParam0 /*24*/].f_1), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[iParam0 /*24*/].f_7), "", 8);
	Global_1663588.f_15[iParam0 /*24*/].f_9 = 145;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[iParam0 /*24*/].f_10), "", 8);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[iParam0 /*24*/].f_12), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_15[iParam0 /*24*/].f_18), "", 24);
	Global_1663588.f_15[iParam0 /*24*/].f_17 = 0;

	if (bParam1)
		return;

	return;
}

BOOL func_76(int iParam0) // Position - 0x3318 Hash - 0xD196A48D ^0xC8582935
{
	return IS_BIT_SET(Global_1663588.f_15[iParam0 /*24*/], 1);
}

int func_77(char* sParam0, char* sParam1, Hash hParam2, eHudColour ehcParam3, BOOL bParam4) // Position - 0x332C Hash - 0x5DA2D62C ^0xE6D313D1
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));

	if (!(ehcParam3 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam3);

	HUD::ADD_TEXT_COMPONENT_INTEGER(hParam2);

	if (bParam4)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
	}
	else
	{
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(29, sParam0, 1, sParam1, hParam2, 0, 0, 0, 1, 0, 0, 0);
	return num;
}

struct<16> func_78(char* sParam0) // Position - 0x339F Hash - 0x77FE523A ^0x44D13E1
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

int func_79(char* sParam0, char* sParam1, const char* sParam2, eHudColour ehcParam3, BOOL bParam4) // Position - 0x33CA Hash - 0x5DA2D62C ^0x7A3D1A3C
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));

	if (!(ehcParam3 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam3);

	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam2);

	if (bParam4)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
	}
	else
	{
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(31, sParam0, 1, sParam2, 0, 0, 0, 0f, 0, sParam1, 0, 0);
	return num;
}

void func_80(char* sParam0, Hash hParam1, int iParam2, int iParam3, const char* sParam4) // Position - 0x343D Hash - 0x46420294 ^0x9D29211D
{
	switch (iParam2)
	{
		case 3:
			func_82("SC_BTRSCR_SUR" /*~a~ beat your best score in the Survival ~a~ with a score of ~1~.*/, sParam0, sParam4, hParam1, HUD_COLOUR_PURE_WHITE, false);
			break;
	
		case 1:
			switch (iParam3)
			{
				case 0:
				case 3:
					func_82("SC_BTRSCR_DMN" /*~a~ beat your best score in the standard Deathmatch ~a~ with a score of ~1~.*/, sParam0, sParam4, hParam1, HUD_COLOUR_PURE_WHITE, false);
					break;
			
				case 1:
				case 4:
					func_82("SC_BTRSCR_DMT" /*~a~ beat your best score in the Team Deathmatch ~a~ with a score of ~1~.*/, sParam0, sParam4, hParam1, HUD_COLOUR_PURE_WHITE, false);
					break;
			
				case 2:
					func_82("SC_BTRSCR_DMV" /*~a~ beat your best score in the Vehicle Deathmatch ~a~ with a score of ~1~.*/, sParam0, sParam4, hParam1, HUD_COLOUR_PURE_WHITE, false);
					break;
			}
			break;
	
		case 2:
			switch (iParam3)
			{
				case 0:
					func_81("SC_BTRSCR_RACN" /*~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~.*/, sParam0, hParam1, sParam4, false);
					break;
			
				case 1:
					func_81("SC_BTRSCR_RACG" /*~a~ beat your best lap time in the GTA Race ~a~ with a time of ~a~.*/, sParam0, hParam1, sParam4, false);
					break;
			
				case 2:
					func_81("SC_BTRSCR_RACR" /*~a~ beat your best lap time in the Rally Race ~a~ with a time of ~a~.*/, sParam0, hParam1, sParam4, false);
					break;
			
				case 3:
					func_81("SC_BTRSCR_RACN" /*~a~ beat your best lap time in the Non-Contact Race ~a~ with a time of ~a~.*/, sParam0, hParam1, sParam4, false);
					break;
			}
			break;
	
		case 8:
			func_81("SC_BTRSCR_BJP" /*~a~ beat your best time in the Parachute Jump ~a~ with a time of ~a~.*/, sParam0, hParam1, sParam4, false);
			break;
	
		case 0:
			func_82("SC_BTRSCR_SUR" /*~a~ beat your best score in the Survival ~a~ with a score of ~1~.*/, sParam0, sParam4, hParam1, HUD_COLOUR_PURE_WHITE, false);
			break;
	}

	return;
}

int func_81(char* sParam0, char* sParam1, Hash hParam2, const char* sParam3, BOOL bParam4) // Position - 0x3577 Hash - 0xC0B0DD90 ^0x1D01FB80
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam2, 7);

	if (bParam4)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
	}
	else
	{
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(18, sParam0, 1, sParam1, hParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return num;
}

int func_82(char* sParam0, char* sParam1, const char* sParam2, Hash hParam3, eHudColour ehcParam4, BOOL bParam5) // Position - 0x35E4 Hash - 0x21B1D345 ^0xB6A82D4A
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));

	if (!(ehcParam4 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);

	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(hParam3);

	if (bParam5)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
	}
	else
	{
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(30, sParam0, 1, sParam1, hParam3, 0, 0, 0f, 0, sParam2, 0, 0);
	return num;
}

BOOL func_83(var uParam0, const char* sParam1, char* sParam2, var uParam3) // Position - 0x365E Hash - 0x53829708 ^0xD96EE8AD
{
	switch (uParam0->f_3)
	{
		case 0:
			*uParam0 = 0;
		
			if (func_100())
				return false;
		
			func_96();
			func_95();
		
			if (func_94())
			{
				*uParam0 = 0;
				return true;
			}
			else
			{
				NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(false);
			}
		
			func_93(uParam0, 1);
			break;
	
		case 1:
			if (NETWORK::UGC_GET_GET_BY_CONTENT_ID(sParam1, func_92(0)))
				func_93(uParam0, 4);
			break;
	
		case 4:
			if (NETWORK::UGC_HAS_GET_FINISHED())
			{
				uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
			
				if (NETWORK::UGC_DID_GET_SUCCEED())
				{
				}
				else
				{
					func_91(uParam0, true, true);
					uParam0->f_40 = NETWORK::UGC_GET_QUERY_RESULT();
					*uParam0 = 0;
					return true;
				}
			
				if (NETWORK::UGC_GET_CONTENT_NUM() > 0)
				{
					if (DATAFILE::DATAFILE_SELECT_UGC_DATA(0, 0))
					{
						func_84(sParam2, 0, uParam3);
						func_91(uParam0, true, true);
						*uParam0 = 1;
						return true;
					}
				}
				else
				{
					func_91(uParam0, true, true);
					*uParam0 = 0;
					return true;
				}
			}
			break;
	}

	return false;
}

void func_84(char* sParam0, int iParam1, var uParam2) // Position - 0x3749 Hash - 0x976D7B07 ^0x4C696785
{
	Any* fileDict;
	Any* dict;
	int dict2;
	int contentLanguage;

	fileDict = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	dict = DATAFILE::DATADICT_GET_DICT(fileDict, "mission");
	dict2 = DATAFILE::DATADICT_GET_DICT(dict, "gen");
	TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	TEXT_LABEL_ASSIGN_STRING(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { func_90(dict2) };
	sParam0->f_59 = { func_89(dict2, "cam") };
	sParam0->f_62 = { func_88(dict2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(dict2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(dict2, "subtype");
	sParam0->f_80 = DATAFILE::DATADICT_GET_INT(dict2, "adverm");
	sParam0->f_88 = DATAFILE::DATADICT_GET_INT(dict2, "trntype");
	sParam0->f_79 = DATAFILE::DATADICT_GET_INT(dict2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(dict2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(dict2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(dict2, "num");
	sParam0->f_73 = func_87(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(dict2, "charcon");
	*uParam2 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));

	if (func_86(*uParam2))
		sParam0->f_68 = 8;

	if (func_85() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4270)
			sParam0->f_71 = Global_262145.f_4270;
	
		if (sParam0->f_69 > Global_262145.f_4270)
			sParam0->f_69 = Global_262145.f_4270;
	}

	if (!func_94())
	{
		contentLanguage = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
	
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(contentLanguage))
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		else
			sParam0->f_54 = -1;
	}

	if (DATAFILE::DATADICT_GET_TYPE(dict2, "ltm") == 2)
		sParam0->f_78 = DATAFILE::DATADICT_GET_INT(dict2, "ltm");

	MISC::SET_BIT(&(sParam0->f_76), 13);
	func_95();
	return;
}

int func_85() // Position - 0x38FE Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

BOOL func_86(ePedComponentType epctParam0) // Position - 0x3909 Hash - 0xD1C49931 ^0xD1C49931
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9530[i])
			return true;
	}

	return false;
}

int func_87(float fParam0, int iParam1) // Position - 0x3939 Hash - 0x4A9DA2C2 ^0x10D9F1
{
	int num;

	if (iParam1 == 0)
		return -1;

	num = SYSTEM::ROUND(fParam0 * 100f);

	if (num < 0)
		num = -1;

	return num;
}

Vector3 func_88(int iParam0) // Position - 0x3964 Hash - 0xEB2803D8 ^0x668EC957
{
	float _float;

	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 3)
		_float = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camp");
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camp") == 2)
		_float = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camp"));

	if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 3)
		_float.f_2 = DATAFILE::DATADICT_GET_FLOAT(iParam0, "camh");
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, "camh") == 2)
		_float.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(iParam0, "camh"));

	return _float;
}

Vector3 func_89(int iParam0, char* sParam1) // Position - 0x39EA Hash - 0x983814C7 ^0xFD3AB797
{
	float vector;
	Any* dict;

	if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 5)
	{
		vector = { DATAFILE::DATADICT_GET_VECTOR(iParam0, sParam1) };
	}
	else if (DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 6)
	{
		dict = DATAFILE::DATADICT_GET_DICT(iParam0, sParam1);
	
		if (DATAFILE::DATADICT_GET_TYPE(dict, "x") == 2)
			vector = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "x"));
		else
			vector = DATAFILE::DATADICT_GET_FLOAT(dict, "x");
	
		if (DATAFILE::DATADICT_GET_TYPE(dict, "y") == 2)
			vector.f_1 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "y"));
		else
			vector.f_1 = DATAFILE::DATADICT_GET_FLOAT(dict, "y");
	
		if (DATAFILE::DATADICT_GET_TYPE(dict, "z") == 2)
			vector.f_2 = SYSTEM::TO_FLOAT(DATAFILE::DATADICT_GET_INT(dict, "z"));
		else
			vector.f_2 = DATAFILE::DATADICT_GET_FLOAT(dict, "z");
	}

	return vector;
}

Vector3 func_90(int iParam0) // Position - 0x3AB6 Hash - 0x20EF7F0D ^0x2FC2C0E5
{
	Vector3 vector;

	if (iParam0 == 0)
		return 0f, 0f, 0f;

	vector = { func_89(iParam0, "start") };

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -2233.327f, 2436.1338f, -14.65155f, -2229.5598f, 2399.5764f, 11.997612f, 24f, false, true))
		vector = { -2303.54f, 2428.09f, 2.02f };

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 603.6218f, 5573.0464f, 694.484f, 594.23785f, 5542.7915f, 727.479f, 33.5f, false, true))
		vector = { 502.6f, 5537.06f, 777.05f };

	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 1152.8f, -1516.8f, 31.84f, 1152.9f, -1524.2f, 35.84f, 5f, false, true) && DATAFILE::DATADICT_GET_INT(iParam0, "type") == 2)
		vector = { 1170.661f, -1519.95f, 33.818f };

	return vector;
}

void func_91(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3BB2 Hash - 0x5739E26C ^0xEF6926EC
{
	var unk;

	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_11 = 0;
	uParam0->f_31 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_16 = 1;
	uParam0->f_16 = 1;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = -1;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_29 = 0;
	Global_1835451[0] = 0;
	Global_1835451[1] = 0;
	uParam0->f_40 = 0;

	if (bParam2)
		uParam0->f_41 = { unk };

	if (bParam1)
		func_93(uParam0, 0);

	return;
}

char* func_92(int iParam0) // Position - 0x3C4B Hash - 0xF7EB2862 ^0xEE9343E1
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
	
		case 1:
			return "playlist";
	
		case 2:
			return "lifeinvaderpost";
	
		case 3:
			return "photo";
	
		case 4:
			return "challenge";
	
		default:
		
	}

	return "gta5mission";
}

void func_93(var uParam0, int iParam1) // Position - 0x3C9F Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

BOOL func_94() // Position - 0x3CAD Hash - 0x4228A1C2 ^0xF41AB6A4
{
	return Global_1835433.f_5;
}

void func_95() // Position - 0x3CBB Hash - 0x7650948C ^0xC126DC8B
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
		DATAFILE::DATAFILE_DELETE(0);

	return;
}

void func_96() // Position - 0x3CD1 Hash - 0x814DE5A2 ^0xA7C89ED5
{
	if (func_94())
		NETWORK::UGC_CLEAR_OFFLINE_QUERY();
	else
		NETWORK::UGC_CLEAR_QUERY_RESULTS();

	return;
}

BOOL func_97() // Position - 0x3CEB Hash - 0xEDAE0057 ^0x5A1A7786
{
	return IS_BIT_SET(Global_2684504.f_2, 11);
}

BOOL func_98(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3CFC Hash - 0xBF1A1A60 ^0x8B22074E
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_33, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_33, 1))
			return true;

	if (bParam2)
		if (Global_2657971[plParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x3D60 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_100() // Position - 0x3D69 Hash - 0x37E8E006 ^0xA801A216
{
	if (NETWORK::UGC_IS_CREATING())
		return true;
	else if (NETWORK::UGC_IS_GETTING())
		return true;
	else if (NETWORK::UGC_IS_MODIFYING())
		return true;

	return false;
}

BOOL func_101(Player plParam0) // Position - 0x3D99 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_102(plParam0);
}

BOOL func_102(Player plParam0) // Position - 0x3DA7 Hash - 0x1ACBF981 ^0x51A073B
{
	return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_11.f_1, 0);
}

BOOL func_103() // Position - 0x3DBE Hash - 0x6D428626 ^0x6D428626
{
	if (!func_104())
		return 0;

	return 1;
}

BOOL func_104() // Position - 0x3DD3 Hash - 0xABE6E929 ^0xABE6E929
{
	if (Global_1574612)
		return true;

	if (func_107())
		return true;

	if (func_106())
		return true;

	return func_105(120, -1);
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x3E03 Hash - 0x5137F6D6 ^0x3B535546
{
	Hash statHash;
	BOOL outValue;

	statHash = func_58(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

BOOL func_106() // Position - 0x3E27 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575071;
}

BOOL func_107() // Position - 0x3E33 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575073;
}

BOOL func_108() // Position - 0x3E3F Hash - 0xC0D430F0 ^0xA043502A
{
	if (!Global_2625315 && !Global_2625315.f_1 && !Global_2625315.f_2)
		return false;

	if (!Global_2625315.f_23)
		return true;

	return false;
}

BOOL func_109() // Position - 0x3E7A Hash - 0x4228A1C2 ^0xF41AB6A4
{
	return Global_1573131.f_5;
}

BOOL func_110() // Position - 0x3E88 Hash - 0x84748B7F ^0x711FABA2
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2);
}

BOOL func_111() // Position - 0x3EA0 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_708;
}

BOOL func_112() // Position - 0x3EAF Hash - 0x14C33082 ^0x14C33082
{
	return IS_BIT_SET(Global_2684504, 21);
}

BOOL func_113() // Position - 0x3EBE Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_2684504, 19);
}

BOOL func_114() // Position - 0x3ECD Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_2693440.f_1;
}

BOOL func_115() // Position - 0x3EDB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_693;
}

int func_116() // Position - 0x3EEA Hash - 0xFD2601BF ^0x4CBB655E
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193;
}

ePedComponentType func_117(int iParam0, char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x3EFF Hash - 0x5E89A3EE ^0x5E89A3EE
{
	return func_118(iParam0, sParam1, hParam2, hParam3, iParam4, iParam5, iParam6, bParam7);
}

ePedComponentType func_118(int iParam0, char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x3F1B Hash - 0x52DDE953 ^0x52DDE953
{
	ePedComponentType type;

	type = func_119(iParam0, 0, sParam1, iParam4, iParam5, false, iParam6, true, hParam2, hParam3, bParam7);
	return type;
}

ePedComponentType func_119(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7, Hash hParam8, Hash hParam9, BOOL bParam10) // Position - 0x3F3E Hash - 0x9E017036 ^0x67B7CCB7
{
	var unk;
	ePedComponentType value;
	ePedComponentType type;
	float value2;

	type = func_153();
	func_152(sParam2);

	if (func_151())
	{
		if (iParam4 < 1)
			iParam4 = 1;
	
		value = SYSTEM::ROUND((float)iParam3 * ((float)iParam4 + unk));
		value = func_149(value);
		value2 = SYSTEM::TO_FLOAT(value) * Global_262145.f_1;
		value = SYSTEM::ROUND(value2);
	
		if (bParam10)
			value = func_148(&value);
	
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_145(false, &value);
					break;
			
				case 3:
					func_145(true, &value);
					break;
			
				case 1:
					func_139(&value);
					break;
			}
		}
	
		if (value > Global_262145.f_13369)
			return PV_COMP_HEAD;
	
		if (iParam1 == 0)
		{
			if (value > type)
			{
				if (iParam0 == 1)
					value = type;
			
				if (iParam0 == 2 || iParam0 == 3)
					value = type;
			}
		}
	
		if (bParam7)
		{
			func_138(1165, value, -1);
		
			if (iParam1 == 0)
			{
				func_128(func_137(PLAYER::PLAYER_ID()) + value, hParam9, 0);
				hParam8 == 0;
				hParam9 == 0;
				STATS::PLAYSTATS_AWARD_XP(value, hParam8, hParam9);
			
				if (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_2 != -1)
					func_138(1166, value, -1);
			
				func_124(value);
			}
		}
	
		bParam5;
	
		if (bParam7)
			if (iParam6 == -1)
				func_120(func_122(PLAYER::PLAYER_ID()) + value);
			else
				func_120(func_122(PLAYER::PLAYER_ID()) + iParam6);
	}

	return value;
}

void func_120(int iParam0) // Position - 0x40AD Hash - 0xBE7C32AA ^0x7762DBF9
{
	if (func_151())
	{
		Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_5 = iParam0;
		_MPPLY_STAT_SET_INT(joaat("MPPLY_GLOBALXP"), iParam0);
	}

	return;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x40D8 Hash - 0x269D56BD ^0xD3DD91B4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int func_122(ePedComponentType epctParam0) // Position - 0x40F4 Hash - 0xCC711ADD ^0xB317E2D9
{
	if (epctParam0 > PV_COMP_INVALID)
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
			if (epctParam0 == PLAYER::PLAYER_ID())
				return _MPPLY_STAT_GET_INT(joaat("MPPLY_GLOBALXP"));
			else
				return Global_1845281[epctParam0 /*883*/].f_206.f_5;
		else
			return _MPPLY_STAT_GET_INT(joaat("MPPLY_GLOBALXP"));

	return 0;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x4145 Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

void func_124(ePedComponentType epctParam0) // Position - 0x4163 Hash - 0xA3A3FBCE ^0xD1757F3C
{
	var gamerHandle;
	int num;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
		{
			num = func_125(func_126(&gamerHandle));
		
			if (num == 0)
				_MPPLY_STAT_SET_INT(joaat("MPPLY_CREW_LOCAL_XP_0"), _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_LOCAL_XP_0")) + epctParam0);
			else if (num == 1)
				_MPPLY_STAT_SET_INT(joaat("MPPLY_CREW_LOCAL_XP_1"), _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_LOCAL_XP_1")) + epctParam0);
			else if (num == 2)
				_MPPLY_STAT_SET_INT(joaat("MPPLY_CREW_LOCAL_XP_2"), _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_LOCAL_XP_2")) + epctParam0);
			else if (num == 3)
				_MPPLY_STAT_SET_INT(joaat("MPPLY_CREW_LOCAL_XP_3"), _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_LOCAL_XP_3")) + epctParam0);
			else if (num == 4)
				_MPPLY_STAT_SET_INT(joaat("MPPLY_CREW_LOCAL_XP_4"), _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_LOCAL_XP_4")) + epctParam0);
		}
	}

	return;
}

int func_125(int iParam0) // Position - 0x422D Hash - 0xD04113E3 ^0xC97BA645
{
	if (iParam0 == _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_0_ID")))
		return 0;
	else if (iParam0 == _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_1_ID")))
		return 1;
	else if (iParam0 == _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_2_ID")))
		return 2;
	else if (iParam0 == _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_3_ID")))
		return 3;
	else if (iParam0 == _MPPLY_STAT_GET_INT(joaat("MPPLY_CREW_4_ID")))
		return 4;
	else
		return -1;

	return -1;
}

int func_126(Any* panParam0) // Position - 0x42A3 Hash - 0x38A7EEA7 ^0x1E985B38
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam0))
			return Global_2696114;

	return Global_2696114;
}

struct<13> GET_GAMER_HANDLE_PLAYER(ePedComponentType epctParam0) // Position - 0x42C6 Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(epctParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_128(ePedComponentType epctParam0, Hash hParam1, int iParam2) // Position - 0x42DD Hash - 0x2622A835 ^0x600A20E
{
	if (func_151())
	{
		if (epctParam0 >= 1787576850)
			epctParam0 = 1787576850;
	
		if (Global_262145.f_10095 == 0 && hParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (epctParam0 < func_49(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(epctParam0, joaat("XPTYPE_ERROR"), hParam1);
					return;
				}
				else if (epctParam0 == func_49(640, -1))
				{
					return;
				}
			}
		}
	
		if (Global_262145.f_10094 == 0)
		{
			if (epctParam0 == PV_COMP_HEAD)
			{
				STATS::PLAYSTATS_AWARD_XP(epctParam0, -1158693853, -1345423847);
			
				if (iParam2 == 0)
					return;
			}
		}
	
		if (Global_262145.f_10094 == 0)
		{
			if (epctParam0 < PV_COMP_HEAD)
			{
				STATS::PLAYSTATS_AWARD_XP(epctParam0, joaat("XPTYPE_ERROR_NEGATIVE"), hParam1);
				return;
			}
		}
	
		if (func_136(PLAYER::PLAYER_ID()))
		{
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_1 = epctParam0;
			Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_6 = func_133(epctParam0, true);
		}
	
		func_132(640, epctParam0, -1, true);
		func_132(641, func_133(epctParam0, true), -1, true);
		func_129(-1109644434, 7, false);
	}

	return;
}

void func_129(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x43EF Hash - 0xA5060797 ^0xA5060797
{
	int num;

	if (func_131(iParam1, bParam2))
	{
		num = func_130();
		Global_2696066[num] = iParam1;
		Global_2696077[num] = bParam0;
	}

	return;
}

int func_130() // Position - 0x441C Hash - 0x6BB290B9 ^0x6BB290B9
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2696066[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_131(int iParam0, BOOL bParam1) // Position - 0x4451 Hash - 0x53FB4C13 ^0x53FB4C13
{
	if (Global_1575071)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !Global_1575083 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

void func_132(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3) // Position - 0x44D7 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_50(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, epctParam1, bParam3);
	}

	return;
}

ePedComponentType func_133(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x4505 Hash - 0xF691E39 ^0xF691E39
{
	bParam1;
	return func_134(epctParam0, 0);
}

ePedComponentType func_134(ePedComponentType epctParam0, int iParam1) // Position - 0x4519 Hash - 0xDF9AED47 ^0xE2775504
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (func_135(num) == epctParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_135(num) < epctParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

// Unhandled jump detected. Output should be considered invalid
ePedComponentType func_135(int iParam0) // Position - 0x45D4 Hash - 0xC61E502D ^0xB6C40432
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return PV_COMP_HEAD;
		
			case 2:
				return 800;
		
			case 3:
				return 2100;
		
			case 4:
				return 3800;
		
			case 5:
				return 6100;
		
			case 6:
				return 9500;
		
			case 7:
				return 12500;
		
			case 8:
				return 16000;
		
			case 9:
				return 19800;
		
			case 10:
				return 24000;
		
			case 11:
				return 28500;
		
			case 12:
				return 33400;
		
			case 13:
				return 38700;
		
			case 14:
				return 44200;
		
			case 15:
				return 50200;
		
			case 16:
				return 56400;
		
			case 17:
				return 63000;
		
			case 18:
				return 69900;
		
			case 19:
				return 77100;
		
			case 20:
				return 84700;
		
			case 21:
				return 92500;
		
			case 22:
				return 100700;
		
			case 23:
				return 109200;
		
			case 24:
				return 118000;
		
			case 25:
				return 127100;
		
			case 26:
				return 136500;
		
			case 27:
				return 146200;
		
			case 28:
				return 156200;
		
			case 29:
				return 166500;
		
			case 30:
				return 177100;
		
			case 31:
				return 188000;
		
			case 32:
				return 199200;
		
			case 33:
				return 210700;
		
			case 34:
				return 222400;
		
			case 35:
				return 234500;
		
			case 36:
				return 246800;
		
			case 37:
				return 259400;
		
			case 38:
				return 272300;
		
			case 39:
				return 285500;
		
			case 40:
				return 299000;
		
			case 41:
				return 312700;
		
			case 42:
				return 326800;
		
			case 43:
				return 341000;
		
			case 44:
				return 355600;
		
			case 45:
				return 370500;
		
			case 46:
				return 385600;
		
			case 47:
				return 401000;
		
			case 48:
				return 416600;
		
			case 49:
				return 432600;
		
			case 50:
				return 448800;
		
			case 51:
				return 465200;
		
			case 52:
				return 482000;
		
			case 53:
				return 499000;
		
			case 54:
				return 516300;
		
			case 55:
				return 533800;
		
			case 56:
				return 551600;
		
			case 57:
				return 569600;
		
			case 58:
				return 588000;
		
			case 59:
				return 606500;
		
			case 60:
				return 625400;
		
			case 61:
				return 644500;
		
			case 62:
				return joaat("pyro_sub_bass_synth");
		
			case 63:
				return 683400;
		
			case 64:
				return 703300;
		
			case 65:
				return 723400;
		
			case 66:
				return 743800;
		
			case 67:
				return 764500;
		
			case 68:
				return 785400;
		
			case 69:
				return 806500;
		
			case 70:
				return 827900;
		
			case 71:
				return 849600;
		
			case 72:
				return 871500;
		
			case 73:
				return 893600;
		
			case 74:
				return 916000;
		
			case 75:
				return 938700;
		
			case 76:
				return 961600;
		
			case 77:
				return 984700;
		
			case 78:
				return 1008100;
		
			case 79:
				return 1031800;
		
			case 80:
				return 1055700;
		
			case 81:
				return 1079800;
		
			case 82:
				return 1104200;
		
			case 83:
				return 1128800;
		
			case 84:
				return 1153700;
		
			case 85:
				return 1178800;
		
			case 86:
				return 1204200;
		
			case 87:
				return 1229800;
		
			case 88:
				return 1255600;
		
			case 89:
				return 1281700;
		
			case 90:
				return 1308100;
		
			case 91:
				return 1334600;
		
			case 92:
				return 1361400;
		
			case 93:
				return 1388500;
		
			case 94:
				return 1415800;
		
			case 95:
				return 1443300;
		
			case 96:
				return 1471100;
		
			case 97:
				return 1499100;
		
			case 98:
				return 1527300;
		
			case 99:
				return 1555800;
		
			default:
				goto 0x534;
		}
	}
	else
	{
		num = iParam0 - 99;
		num2 = (num * (num + 1)) / 2;
		return 1555800 + (num * 28500) + (num2 * 50);
	}

	return 1555800;
}

BOOL func_136(Player plParam0) // Position - 0x4B0F Hash - 0x392A396A ^0x1DEEBA83
{
	if (!func_65(plParam0))
		return false;

	return IS_BIT_SET(Global_2672855.f_1, plParam0);
}

ePedComponentType func_137(Player plParam0) // Position - 0x4B2E Hash - 0xA3072EF4 ^0x9ADDCC12
{
	if (Global_1574633.f_9 == 0)
		if (plParam0 > -1)
			if (plParam0 == PLAYER::PLAYER_ID())
				return func_49(640, -1);
			else if (func_136(plParam0))
				return Global_1845281[plParam0 /*883*/].f_206.f_1;
	else
		return func_49(640, -1);

	return PV_COMP_HEAD;
}

void func_138(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x4B85 Hash - 0x7143C29F ^0x7143C29F
{
	ePedComponentType type;

	type = func_49(iParam0, func_46(iParam2));
	type = type + epctParam1;
	func_132(iParam0, type, iParam2, true);
	return;
}

void func_139(var uParam0) // Position - 0x4BAD Hash - 0xC20225DE ^0xC8F4B07C
{
	int i;
	int playerTeam;
	int num;
	BOOL flag;
	Player player;
	ePedComponentType playerIndex;
	int num2;
	int num3;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	for (i = 0; i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS(); i = i + 1)
	{
		player = PLAYER::INT_TO_PARTICIPANTINDEX(i);
	
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
		{
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
		
			if (PLAYER::GET_PLAYER_TEAM(playerIndex) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(playerIndex) == playerTeam || func_142(PLAYER::GET_PLAYER_TEAM(playerIndex), playerTeam, 0, -1))
				{
					num = num + 1;
				
					if (playerIndex != PLAYER::PLAYER_ID())
						if (func_141(PLAYER::PLAYER_ID(), playerIndex))
							flag = true;
				}
			}
		}
	}

	if (flag)
		num2 = SYSTEM::ROUND(func_140(*uParam0, 100) * 10f * Global_262145.f_3922);

	if (num > 4)
		num = 4;

	if (num >= 2)
		num3 = SYSTEM::ROUND(func_140(*uParam0, 100) * 20f * Global_262145.f_3920);

	*uParam0 = *uParam0 + num2;
	*uParam0 = *uParam0 + num3;
	return;
}

float func_140(int iParam0, int iParam1) // Position - 0x4C99 Hash - 0xB7CFCEFD ^0xD9C1C49F
{
	float num;
	float num2;
	float num3;

	num = SYSTEM::TO_FLOAT(iParam0);
	num2 = SYSTEM::TO_FLOAT(iParam1);
	num3 = num / num2;
	return num3;
}

BOOL func_141(Player plParam0, ePedComponentType epctParam1) // Position - 0x4CBA Hash - 0x4B2E9FD ^0xDE2AD648
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707308 = { GET_GAMER_HANDLE_PLAYER(plParam0) };
		Global_2707321 = { GET_GAMER_HANDLE_PLAYER(epctParam1) };
	
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707308))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707321))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707238, 35, &Global_2707308);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707273, 35, &Global_2707321);
			
				if (Global_2707238 == Global_2707273)
					return true;
			}
		}
	}

	return false;
}

BOOL func_142(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4D27 Hash - 0xB71E36C3 ^0xB71E36C3
{
	int num;
	int num2;

	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
			return true;
	
		return false;
	}

	if (iParam0 > -1 && iParam1 > -1 && iParam0 == iParam1)
		return true;

	if (iParam0 > -1 && iParam0 < 4 && iParam1 > -1 && iParam1 < 4)
	{
		num = Global_1058116.f_14[iParam0];
	
		if (iParam3 != -1)
			num = iParam3;
	
		if (num < 17 && num > -1)
		{
			if (IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, num))
			{
				num2 = Global_1058116.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_143(iParam0, num, iParam1, num2) || !func_143(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_143(iParam0, num, iParam1, num2) || !func_143(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_143(iParam0, num, iParam1, num2) || !func_143(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_143(iParam0, num, iParam1, num2) || !func_143(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[num], 12 + iParam1);
							break;
					}
				}
			}
		}
	}

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3541, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3541, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3541, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3541, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_143(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5072 Hash - 0x4A3D8974 ^0x4A3D8974
{
	BOOL num;
	ePedComponentType type;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	ePedComponentType i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		type = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(type, true, true) || func_63(type, 0) || IS_BIT_SET(Global_2657971[type /*465*/].f_200, 2) || func_144(type))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(type) != iParam2)
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(type);
		
			if (PED::IS_PED_INJURED(playerPed))
			{
			}
			else
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playerPed);
			
				if (entityModel2 == joaat("MP_F_Freemode_01") || entityModel2 == joaat("MP_M_Freemode_01"))
					if (entityModel == joaat("MP_F_Freemode_01") || entityModel == joaat("MP_M_Freemode_01"))
						return true;
					else
						return false;
				else if (entityModel2 != entityModel)
					return false;
			}
		}
	}

	return num;
}

BOOL func_144(ePedComponentType epctParam0) // Position - 0x519E Hash - 0x5D66E846 ^0x96BDA51B
{
	return IS_BIT_SET(Global_1845281[epctParam0 /*883*/].f_36.f_18, 14);
}

void func_145(BOOL bParam0, var uParam1) // Position - 0x51B6 Hash - 0xC06DC6D3 ^0x322A8914
{
	ePedComponentType i;
	int num;
	BOOL flag;
	Player player;
	ePedComponentType playerIndex;
	int num2;
	int num3;

	if (bParam0)
	{
		for (i = 0; i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS(); i = i + 1)
		{
			player = i;
		
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(player))
			{
				playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(player);
			
				if (_NETWORK_IS_PLAYER_VALID(playerIndex, false, true))
				{
					if (playerIndex != PLAYER::PLAYER_ID())
					{
						num = num + 1;
					
						if (func_141(PLAYER::PLAYER_ID(), playerIndex))
							flag = true;
					}
				}
			}
		}
	}
	else
	{
		for (i = 0; i < 32; i = i + 1)
		{
			playerIndex = i;
		
			if (_NETWORK_IS_PLAYER_VALID(playerIndex, true, true))
			{
				if (playerIndex != PLAYER::PLAYER_ID())
				{
					if (func_146(PLAYER::PLAYER_ID(), playerIndex) <= 20f)
					{
						num = num + 1;
					
						if (func_141(PLAYER::PLAYER_ID(), playerIndex))
							flag = true;
					}
				}
			}
		}
	}

	if (flag)
		num2 = SYSTEM::ROUND(func_140(*uParam1, 100) * 10f * Global_262145.f_3922);

	if (num > 4)
		num = 4;

	if (num >= 1)
		num3 = SYSTEM::ROUND(func_140(*uParam1, 100) * 20f * Global_262145.f_3920);

	*uParam1 = *uParam1 + num2;
	*uParam1 = *uParam1 + num3;
	return;
}

float func_146(Player plParam0, ePedComponentType epctParam1) // Position - 0x52CE Hash - 0xE648ACD3 ^0x683AC7B8
{
	return SYSTEM::VDIST(_GET_PLAYER_COORDS(plParam0), _GET_PLAYER_COORDS(epctParam1));
}

Vector3 _GET_PLAYER_COORDS(ePedComponentType epctParam0) // Position - 0x52EA Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(epctParam0), false);
}

ePedComponentType func_148(var uParam0) // Position - 0x52FD Hash - 0xACE6F701 ^0x85923A5E
{
	int num;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
		return *uParam0;

	num = SYSTEM::ROUND(func_140(*uParam0, 100) * 25f);
	*uParam0 = *uParam0 + num;
	return *uParam0;
}

ePedComponentType func_149(int iParam0) // Position - 0x5334 Hash - 0xC21D4DE7 ^0x9C01EBD6
{
	if (iParam0 < PV_COMP_HEAD)
		if (MISC::ABSI(iParam0) > func_137(PLAYER::PLAYER_ID()))
			iParam0 = -func_137(PLAYER::PLAYER_ID());

	if (func_150(8000, false, 0) > PV_COMP_HEAD)
		if (func_150(8000, false, 0) < iParam0 + func_137(PLAYER::PLAYER_ID()))
			iParam0 = func_150(8000, false, 0) - func_137(PLAYER::PLAYER_ID());

	return iParam0;
}

ePedComponentType func_150(int iParam0, BOOL bParam1, int iParam2) // Position - 0x5398 Hash - 0xA1A7F1E4 ^0x8E7F9034
{
	iParam2 == 0;
	bParam1;

	if (iParam0 >= 8000)
		iParam0 = 8000;

	return func_135(iParam0);
}

BOOL func_151() // Position - 0x53BE Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_152(char* sParam0) // Position - 0x53C7 Hash - 0xCD27307A ^0x31682FC7
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

int func_153() // Position - 0x53FF Hash - 0xC61B5E3D ^0xF4A99937
{
	int num;

	if (func_163(PLAYER::PLAYER_ID()) || func_162(PLAYER::PLAYER_ID()))
		if (Global_262145.f_10125 > 16000)
			num = 16000;
		else
			num = Global_262145.f_10125;
	else if (func_159() || func_155(PLAYER::PLAYER_ID()))
		if (Global_262145.f_22930 > 16000)
			num = 16000;
		else
			num = Global_262145.f_22930;
	else if (func_154(*Global_4718592.f_185586))
		if (Global_262145.f_7169 > 36000)
			num = 36000;
		else
			num = Global_262145.f_7169;
	else if (Global_262145.f_7168 > 36000)
		num = 36000;
	else
		num = Global_262145.f_7168;

	return num;
}

BOOL func_154(int iParam0) // Position - 0x54CD Hash - 0x96081E74 ^0x96081E74
{
	return iParam0 == 89;
}

BOOL func_155(ePedComponentType epctParam0) // Position - 0x54DA Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_156(func_157(epctParam0));
}

int func_156(ePedComponentType epctParam0) // Position - 0x54EC Hash - 0x5000025C ^0x5000025C
{
	switch (epctParam0)
	{
		case 233:
			return 1;
	
		default:
		
	}

	return 0;
}

ePedComponentType func_157(ePedComponentType epctParam0) // Position - 0x5506 Hash - 0x5EA8DF5A ^0xEE8D593B
{
	if (func_65(epctParam0))
		if (func_158(epctParam0, false))
			return Global_1887305[epctParam0 /*610*/].f_10.f_33;

	return PV_COMP_INVALID;
}

BOOL func_158(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x5532 Hash - 0x3654624B ^0x97E7BA1
{
	if (func_65(epctParam0))
		if (Global_1887305[epctParam0 /*610*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1887305[epctParam0 /*610*/].f_10.f_32 != PV_COMP_INVALID)
			return true;

	return false;
}

BOOL func_159() // Position - 0x5576 Hash - 0xDA2E4073 ^0xBA045E42
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return func_161();

	return func_160(*Global_4718592.f_127178);
}

BOOL func_160(ePedComponentType epctParam0) // Position - 0x559A Hash - 0x4813BA45 ^0x4813BA45
{
	int i;

	if (epctParam0 == 0)
		return 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_262145.f_4707[i] == epctParam0)
			return 1;
	}

	return 0;
}

BOOL func_161() // Position - 0x55D4 Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2684504.f_19;
}

BOOL func_162(Player plParam0) // Position - 0x55E2 Hash - 0xA3F2BD37 ^0x597BFEBA
{
	return Global_2657971[plParam0 /*465*/].f_122 == 2;
}

BOOL func_163(Player plParam0) // Position - 0x55F7 Hash - 0x405E6C93 ^0xDC830F0E
{
	return Global_2657971[plParam0 /*465*/].f_122 == 7;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x560C Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_165() // Position - 0x566C Hash - 0x65EF086C ^0x65EF086C
{
	if (func_167() && func_166(0))
		return true;

	return false;
}

BOOL func_166(int iParam0) // Position - 0x568A Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1574538[iParam0];
}

BOOL func_167() // Position - 0x569A Hash - 0x129F0515 ^0x129F0515
{
	return func_166(func_15() + 1);
}

void func_168(int iParam0, int iParam1) // Position - 0x56AC Hash - 0x55E5DA18 ^0xD12C6CFE
{
	BOOL inventory;
	BOOL playerbalance;
	int out;
	var out2;
	BOOL dataBool;
	var out3;
	int out4;
	int num;
	var unk31;

	inventory = false;
	playerbalance = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_2697753, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &out);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &out2);
	dataBool = SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2697753);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &out3);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &out4);
	SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iParam0);

	if (out != 0)
	{
		if (out == -99)
		{
			Global_2697735 = -99;
			Global_2697734 = out;
		}
		else if (out < 0)
		{
			Global_2697735 = -1;
			Global_2697734 = out;
		}
		else if (out > 0)
		{
			Global_2697735 = 1;
			Global_2697734 = out;
		}
	
		playerbalance = true;
	}

	if (MISC::ARE_STRINGS_EQUAL(&out3, "[]") == false)
		Global_2697771 = true;

	if (out4 > 0)
		Global_2697772 = out4;

	if (iParam1 == 0)
	{
		if (func_85() == 0)
		{
			if (dataBool == true)
			{
				NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk31);
			
				if (num == 8)
					NETSHOPPING::NET_GAMESERVER_START_SESSION_RESTART(inventory, playerbalance);
			}
		}
	}

	return;
}

BOOL func_169(Hash hParam0) // Position - 0x57AB Hash - 0x32E20FB6 ^0x4769C84D
{
	if (hParam0 == joaat("crew_message"))
		return true;

	if (hParam0 == joaat("gs_award"))
		return true;

	return false;
}

void func_170() // Position - 0x57D0 Hash - 0x4F66E030 ^0x377E85FA
{
	int i;

	Global_113910 = MISC::GET_GAME_TIMER();

	if (Global_113910 - Global_113911 > Global_113716)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (Global_113904[i] == 1)
			{
				Global_113912 = Global_113912 - 1;
			
				if (Global_113912 < 0)
					Global_113912 = 0;
			
				Global_113904[i] = 0;
				func_171(Global_113717[i /*36*/], Global_113898[i]);
				i = 5;
				Global_113911 = MISC::GET_GAME_TIMER();
			}
		}
	}

	return;
}

void func_171(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36) // Position - 0x5850 Hash - 0xFCFBC02A ^0x3DF83450
{
	var sender;
	var sender2;
	var sender3;

	iParam36 = func_178(iParam0);

	if (iParam36 != -1)
	{
		if (MISC::GET_PROFILE_SETTING(803) == 1)
			if (func_54())
				func_174(iParam0, iParam36);
	}
	else
	{
		switch (iParam0)
		{
			case joaat("TOTAL_PROGRESS_MADE"):
				if (MISC::GET_PROFILE_SETTING(803) == 1)
				{
					if (func_54())
					{
						HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_F100PC_COMP" /*...completed GTAV~n~100 percent.*/);
						TEXT_LABEL_ASSIGN_STRING(&sender, "<C>", 64);
						TEXT_LABEL_APPEND_STRING(&sender, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
						TEXT_LABEL_APPEND_STRING(&sender, &(iParam0.f_1), 64);
						TEXT_LABEL_APPEND_STRING(&sender, "...", 64);
						TEXT_LABEL_APPEND_STRING(&sender, "</C>", 64);
						HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
						Global_113911 = MISC::GET_GAME_TIMER();
					}
				}
				break;
		
			case joaat("SP_VEHICLE_MODELS_DRIVEN"):
				if (iParam0.f_17 == 200)
				{
					Global_113910 = MISC::GET_GAME_TIMER();
				
					if (Global_113910 - Global_113911 > Global_113716)
					{
						if (MISC::GET_PROFILE_SETTING(803) == 1)
						{
							if (func_54())
							{
								HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_DRIVEN_ALL_VEH" /*...has driven all vehicles in San Andreas.*/);
								TEXT_LABEL_ASSIGN_STRING(&sender2, "<C>", 64);
								TEXT_LABEL_APPEND_STRING(&sender2, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
								TEXT_LABEL_APPEND_STRING(&sender2, &(iParam0.f_1), 64);
								TEXT_LABEL_APPEND_STRING(&sender2, "...", 64);
								TEXT_LABEL_APPEND_STRING(&sender2, "</C>", 64);
								HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender2, 0);
								Global_113911 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else
					{
						func_173(iParam0, -1);
					}
				}
				break;
		
			case joaat("NUM_RNDEVENTS_COMPLETED"):
				Global_113910 = MISC::GET_GAME_TIMER();
			
				if (Global_113910 - Global_113911 > Global_113716)
				{
					if (MISC::GET_PROFILE_SETTING(803) == 1)
					{
						if (func_54())
						{
							HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_RNDEV_COMP" /*...has completed all Random Events in San Andreas.*/);
							TEXT_LABEL_ASSIGN_STRING(&sender3, "<C>", 64);
							TEXT_LABEL_APPEND_STRING(&sender3, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
							TEXT_LABEL_APPEND_STRING(&sender3, &(iParam0.f_1), 64);
							TEXT_LABEL_APPEND_STRING(&sender3, "...", 64);
							TEXT_LABEL_APPEND_STRING(&sender3, "</C>", 64);
							HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender3, 0);
							Global_113911 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_173(iParam0, -1);
				}
				break;
		
			case joaat("NUM_HIDDEN_PACKAGES_0"):
				if (iParam0.f_17 == 50)
					func_172(iParam0, "CELL_FEED_LETTER_SCRAPS" /*...has collected all Letter Scraps.*/);
				break;
		
			case joaat("NUM_HIDDEN_PACKAGES_1"):
				if (iParam0.f_17 == 50)
					func_172(iParam0, "CELL_FEED_SPACESHIP_PARTS" /*...has collected all Spaceship Parts.*/);
				break;
		
			case joaat("NUM_HIDDEN_PACKAGES_3"):
				if (iParam0.f_17 == 50)
					func_172(iParam0, "CELL_FEED_SONAR_COLL" /*...has found all Sonar Collectibles.*/);
				break;
		
			case joaat("SP0_DIST_DRIVING_CAR"):
				if (iParam0.f_18 == 500f)
					func_172(iParam0, "CELL_FEED_DRIVEN_500" /*...has driven more than 500 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 5000f)
					func_172(iParam0, "CELL_FEED_DRIVEN_5000" /*...has driven more than 5000 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 50000f)
					func_172(iParam0, "CELL_FEED_DRIVEN_50000" /*...has driven more than 50000 miles in San Andreas.*/);
				break;
		
			case joaat("SP0_DIST_DRIVING_PLANE"):
				if (iParam0.f_18 == 500f)
					func_172(iParam0, "CELL_FEED_FLOWN_500" /*...has flown more than 500 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 5000f)
					func_172(iParam0, "CELL_FEED_FLOWN_5000" /*...has flown more than 5000 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 50000f)
					func_172(iParam0, "CELL_FEED_FLOWN_50000" /*...has flown more than 50000 miles in San Andreas.*/);
				break;
		
			case joaat("SP0_DIST_RUNNING"):
				if (iParam0.f_18 == 50f)
					func_172(iParam0, "CELL_FEED_RAN_50" /*...has run more than 50 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 100f)
					func_172(iParam0, "CELL_FEED_RAN_100" /*...has run more than 100 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 1000f)
					func_172(iParam0, "CELL_FEED_RAN_1000" /*...has run more than 1000 miles in San Andreas.*/);
				break;
		
			case joaat("SP0_DIST_SWIMMING"):
				if (iParam0.f_18 == 50f)
					func_172(iParam0, "CELL_FEED_SWAM_50" /*...has swum more than 50 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 100f)
					func_172(iParam0, "CELL_FEED_SWAM_100" /*...has swum more than 100 miles in San Andreas.*/);
			
				if (iParam0.f_18 == 1000f)
					func_172(iParam0, "CELL_FEED_SWAM_1000" /*...has swum more than 1000 miles in San Andreas.*/);
				break;
		
			case joaat("SP0_BUSTED"):
				if (iParam0.f_17 == 10)
					func_172(iParam0, "CELL_FEED_BUSTED_10" /*...has been busted 10 times.*/);
			
				if (iParam0.f_17 == 25)
					func_172(iParam0, "CELL_FEED_BUSTED_25" /*...has been busted 25 times.*/);
			
				if (iParam0.f_17 == 50)
					func_172(iParam0, "CELL_FEED_BUSTED_50" /*...has been busted 50 times.*/);
			
				if (iParam0.f_17 == 100)
					func_172(iParam0, "CELL_FEED_BUSTED_100" /*...has been busted 100 times.*/);
			
				if (iParam0.f_17 == 250)
					func_172(iParam0, "CELL_FEED_BUSTED_250" /*...has been busted 250 times.*/);
				break;
		
			case joaat("SP0_DEATHS"):
				if (iParam0.f_17 == 10)
					func_172(iParam0, "CELL_FEED_WASTED_10" /*...has been wasted 10 times.*/);
			
				if (iParam0.f_17 == 25)
					func_172(iParam0, "CELL_FEED_WASTED_25" /*...has been wasted 25 times.*/);
			
				if (iParam0.f_17 == 50)
					func_172(iParam0, "CELL_FEED_WASTED_50" /*...has been wasted 50 times.*/);
			
				if (iParam0.f_17 == 100)
					func_172(iParam0, "CELL_FEED_WASTED_100" /*...has been wasted 100 times.*/);
			
				if (iParam0.f_17 == 250)
					func_172(iParam0, "CELL_FEED_WASTED_250" /*...has been wasted 250 times.*/);
				break;
		
			case joaat("SP0_SHOTS"):
				if (iParam0.f_17 == 1000000)
					func_172(iParam0, "CELL_FEED_SHOTS_1ML" /*...has fired their 1 millionth round of ammunition.*/);
			
				if (iParam0.f_17 == 2000000)
					func_172(iParam0, "CELL_FEED_SHOTS_2ML" /*...has fired their 2 millionth round of ammunition.*/);
			
				if (iParam0.f_17 == 3000000)
					func_172(iParam0, "CELL_FEED_SHOTS_3ML" /*...has fired their 3 millionth round of ammunition.*/);
			
				if (iParam0.f_17 == 4000000)
					func_172(iParam0, "CELL_FEED_SHOTS_4ML" /*...has fired their 4 millionth round of ammunition.*/);
			
				if (iParam0.f_17 == 5000000)
					func_172(iParam0, "CELL_FEED_SHOTS_5ML" /*...has fired their 5 millionth round of ammunition.*/);
				break;
		
			case joaat("SP0_STARS_EVADED"):
				if (iParam0.f_17 == 5)
					func_172(iParam0, "CELL_FEED_5STARS_WL" /*...has just evaded a 5 star Wanted Level.*/);
				break;
		
			case joaat("SP0_CROUCHED"):
				if (iParam0.f_17 == 10)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 0))
					{
						func_172(iParam0, "CELL_FEED_WEB_CAR" /*...has just purchased a car online.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 0);
					}
				}
			
				if (iParam0.f_17 == 20)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 1))
					{
						func_172(iParam0, "CELL_FEED_WEB_RHINO" /*...has just purchased a Rhino online.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 1);
					}
				}
			
				if (iParam0.f_17 == 30)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 2))
					{
						func_172(iParam0, "CELL_FEED_WEB_BUZZARD" /*...has just purchased a Buzzard online.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 2);
					}
				}
				break;
		
			case joaat("SP0_CROUCHED_AND_SHOT"):
				if (iParam0.f_17 == 10)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 3))
					{
						func_172(iParam0, "CELL_FEED_STOCK_INV" /*...has invested a large sum in the stock market.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 3);
					}
				}
			
				if (iParam0.f_17 == 20)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 4))
					{
						func_172(iParam0, "CELL_FEED_STOCK_WIN" /*...has had a big win playing the stock market.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 4);
					}
				}
			
				if (iParam0.f_17 == 30)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 5))
					{
						func_172(iParam0, "CELL_FEED_STOCK_LOSS" /*...has suffered a major loss playing the stock market.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 5);
					}
				}
				break;
		
			case joaat("SP0_WATER_CANNON_KILLS"):
				if (iParam0.f_17 == 25)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 10))
					{
						func_172(iParam0, "CELL_FEED_STNJ_25" /*...has completed 25 percent of the stunt jumps in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 10);
					}
				}
			
				if (iParam0.f_17 == 50)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 11))
					{
						func_172(iParam0, "CELL_FEED_STNJ_50" /*...has completed 50 percent of the stunt jumps in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 11);
					}
				}
			
				if (iParam0.f_17 == 75)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 12))
					{
						func_172(iParam0, "CELL_FEED_STNJ_75" /*...has completed 75 percent of the stunt jumps in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 12);
					}
				}
			
				if (iParam0.f_17 == 100)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 13))
					{
						func_172(iParam0, "CELL_FEED_STNJ_100" /*...has completed 100 percent of the stunt jumps in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 13);
					}
				}
				break;
		
			case joaat("SP0_WATER_CANNON_DEATHS"):
				if (iParam0.f_17 == 25)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 6))
					{
						func_172(iParam0, "CELL_FEED_UTB_25" /*...has completed 25 percent of Under The Bridges in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 6);
					}
				}
			
				if (iParam0.f_17 == 50)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 7))
					{
						func_172(iParam0, "CELL_FEED_UTB_50" /*...has completed 50 percent of Under The Bridges in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 7);
					}
				}
			
				if (iParam0.f_17 == 75)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 8))
					{
						func_172(iParam0, "CELL_FEED_UTB_75" /*...has completed 75 percent of Under The Bridges in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 8);
					}
				}
			
				if (iParam0.f_17 == 100)
				{
					if (!IS_BIT_SET(Global_113969.f_10197.f_3856, 9))
					{
						func_172(iParam0, "CELL_FEED_UTB_100" /*...has completed 100 percent of Under The Bridges in San Andreas.*/);
						MISC::SET_BIT(&(Global_113969.f_10197.f_3856), 9);
					}
				}
				break;
		}
	}

	return;
}

void func_172(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, char* sParam36) // Position - 0x606B Hash - 0x75504080 ^0x584B94A1
{
	var sender;

	if (MISC::GET_PROFILE_SETTING(803) == 1)
	{
		if (func_54())
		{
			Global_113910 = MISC::GET_GAME_TIMER();
		
			if (Global_113910 - Global_113911 > Global_113716)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam36);
				TEXT_LABEL_ASSIGN_STRING(&sender, "<C>", 64);
				TEXT_LABEL_APPEND_STRING(&sender, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&sender, &(uParam0.f_1), 64);
				TEXT_LABEL_APPEND_STRING(&sender, "...", 64);
				TEXT_LABEL_APPEND_STRING(&sender, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
				Global_113911 = MISC::GET_GAME_TIMER();
			}
		}
	}

	return;
}

void func_173(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36) // Position - 0x60E5 Hash - 0x360B960D ^0x360B960D
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_113904[i] == 0)
		{
			Global_113717[i /*36*/] = { uParam0 };
			Global_113898[i] = iParam36;
			Global_113904[i] = 1;
			Global_113912 = Global_113912 + 1;
		
			if (Global_113912 > 5)
				Global_113912 = 5;
		
			i = 5;
		}
	}

	return;
}

void func_174(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, int iParam36) // Position - 0x6148 Hash - 0x91917D17 ^0xDD944024
{
	int num;
	var labelName;
	var string1;
	var sender;
	var sender2;

	if (func_54())
	{
		TEXT_LABEL_COPY(&labelName, { func_177(iParam36) }, 16);
		TEXT_LABEL_ASSIGN_STRING(&string1, "NO_BLURB_REQ", 24);
	
		switch (iParam36)
		{
			case 53:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_PROLOGUE" /*...has fumbled a heist.*/, 24);
				break;
		
			case 44:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_LESTER1" /*...has discovered social networking is dangerous.*/, 24);
				break;
		
			case 20:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_FAMILY4" /*...has reunited with an old friend.*/, 24);
				break;
		
			case 75:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_DOCKH2B" /*...has explored the depths and discovered a great treasure.*/, 24);
				break;
		
			case 38:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_FIB4" /*...has performed a classic blitz play.*/, 24);
				break;
		
			case 93:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_RURALH2" /*...was a big hit at Paleto Bay's Chicken Festival.*/, 24);
				break;
		
			case 69:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_AGENCYH3A" /*...has just responded to a 911.*/, 24);
				break;
		
			case 70:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_AGENCYH3B" /*...has dropped in on the Bureau.*/, 24);
				break;
		
			case 47:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_MICHAEL2" /*...has discovered an abattoir where the meat certainly ain't fresh.*/, 24);
				break;
		
			case 42:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_FRANKLIN2" /*...has saved a homeboy with a little help from his friends.*/, 24);
				break;
		
			case 84:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_FINALEH2A" /*...has brought traffic to a standstill.*/, 24);
				break;
		
			case 85:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_FINALEH2B" /*...has tunneled to victory.*/, 24);
				break;
		
			case 24:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_ENDCHOICE" /*...has made an extreme choice and faced the consequences.*/, 24);
				break;
		
			case 25:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_ENDCHOICE" /*...has made an extreme choice and faced the consequences.*/, 24);
				break;
		
			case 27:
				TEXT_LABEL_ASSIGN_STRING(&string1, "CELL_F_ENDCHOICE" /*...has made an extreme choice and faced the consequences.*/, 24);
				break;
		}
	
		Global_113910 = MISC::GET_GAME_TIMER();
	
		if (Global_113910 - Global_113911 > Global_113716)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&string1, "NO_BLURB_REQ"))
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&string1);
				TEXT_LABEL_ASSIGN_STRING(&sender, "<C>", 64);
				TEXT_LABEL_APPEND_STRING(&sender, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				TEXT_LABEL_APPEND_STRING(&sender, &(uParam0.f_1), 64);
				TEXT_LABEL_APPEND_STRING(&sender, "...", 64);
				TEXT_LABEL_APPEND_STRING(&sender, "</C>", 64);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
			}
			else if (func_176(iParam36))
			{
				num = func_175(iParam36);
			
				if (uParam0.f_17 > num)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_FEED_BEAT_MIS_SCORE" /*...beat your high score in the Story mission "~a~".*/);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&labelName);
					TEXT_LABEL_ASSIGN_STRING(&sender2, "<C>", 64);
					TEXT_LABEL_APPEND_STRING(&sender2, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
					TEXT_LABEL_APPEND_STRING(&sender2, &(uParam0.f_1), 64);
					TEXT_LABEL_APPEND_STRING(&sender2, "...", 64);
					TEXT_LABEL_APPEND_STRING(&sender2, "</C>", 64);
					HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender2, 0);
				}
			}
		
			Global_113911 = MISC::GET_GAME_TIMER();
		}
		else
		{
			func_173(uParam0, iParam36);
		}
	}

	return;
}

int func_175(int iParam0) // Position - 0x6352 Hash - 0xC69036C ^0x28AE8EC9
{
	return Global_113969.f_9088.f_330[iParam0 /*6*/].f_4;
}

BOOL func_176(int iParam0) // Position - 0x636A Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

struct<2> func_177(int iParam0) // Position - 0x6396 Hash - 0x30519E21 ^0xDB1F7B4C
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_", 8);
	TEXT_LABEL_APPEND_STRING(&unk, &(Global_92301[iParam0 /*34*/].f_8), 8);

	if (iParam0 == 90)
	{
		switch (Global_113969.f_9088.f_99.f_205[7])
		{
			case 1:
				TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
				break;
		
			case 2:
				TEXT_LABEL_APPEND_STRING(&unk, "B", 8);
				break;
		
			default:
				TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
				break;
		}
	}

	return unk;
}

int func_178(Hash hParam0) // Position - 0x63FC Hash - 0x5F01CE ^0x8948D74A
{
	int i;
	int num;

	for (i = 0; i < 94; i = i + 1)
	{
		num = i;
	
		if (!IS_BIT_SET(Global_92301[num /*34*/].f_15, 6))
			if (func_179(num) == hParam0)
				return num;
	}

	return -1;
}

Hash func_179(int iParam0) // Position - 0x643C Hash - 0x16A96018 ^0x26C06578
{
	var unk;

	if (!IS_BIT_SET(Global_92301[iParam0 /*34*/].f_15, 7))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "FL_CO_", 16);
		TEXT_LABEL_APPEND_STRING(&unk, &(Global_92301[iParam0 /*34*/].f_8), 16);
	
		if (iParam0 == 90)
			if (Global_113969.f_9088.f_99.f_205[7] == 2)
				TEXT_LABEL_APPEND_STRING(&unk, "B", 16);
			else
				TEXT_LABEL_APPEND_STRING(&unk, "A", 16);
	
		return MISC::GET_HASH_KEY(&unk);
	}

	return joaat("CITIES_PASSED");
}

void func_180(var uParam0, BOOL bParam1) // Position - 0x64A2 Hash - 0xF9AD8BA4 ^0xBB2BF125
{
	if (!func_54())
		return;

	if (!bParam1)
		return;

	if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam0->f_165 == 0)
	{
		uParam0->f_165 = 1;
	}
	else
	{
		MISC::GET_PROFILE_SETTING(803) != 1;
		uParam0->f_165 == 1;
	}

	return;
}

void func_181(int iParam0, var uParam1, BOOL bParam2) // Position - 0x64F0 Hash - 0x1F6C7758 ^0x1D9D6109
{
	struct<2> eventData;

	if (!func_54() || !func_51())
		return;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 2))
	{
		if (!bParam2)
			return;
	
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_165 == 0)
		{
			if (eventData.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TA" /*You have been kicked from your active Crew.*/);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWKICK_TI" /*You have been kicked from an inactive Crew.*/);
				HUD::END_TEXT_COMMAND_THEFEED_POST_MPTICKER(false, true);
			}
		}
	}

	return;
}

void func_182(int iParam0, var uParam1, BOOL bParam2) // Position - 0x6566 Hash - 0x1F6C7758 ^0x1D9D6109
{
	struct<2> eventData;

	if (!func_54() || !func_51())
		return;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 2))
	{
		if (!bParam2)
			return;
	
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_165 == 0)
		{
			if (eventData.f_1)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /*You have left your Crew.*/);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CREWLEFT_TA" /*You have left your Crew.*/);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
	}

	return;
}

void func_183(int iParam0, var uParam1, BOOL bParam2) // Position - 0x65DC Hash - 0xA43A1FFB ^0x6FEA31B5
{
	var memberDesc;
	struct<11> eventData;
	int localMembershipsCount;
	int i;
	var unk45;

	if (!func_54() || !func_51())
		return;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 11))
	{
		if (!bParam2)
			return;
	
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_165 == 0)
		{
			localMembershipsCount = NETWORK::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT();
		
			for (i = 0; i < localMembershipsCount; i = i + 1)
			{
				NETWORK::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&memberDesc, i);
			
				if (memberDesc == eventData)
				{
					if (eventData.f_2)
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HIGHER_RANK" /*a higher rank*/), 32);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("LOWER_RANK" /*a lower rank*/), 32);
				
					if (MISC::ARE_STRINGS_EQUAL(&(eventData.f_3), "Rank4"))
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK4" /*Muscle*/), 32);
				
					if (MISC::ARE_STRINGS_EQUAL(&(eventData.f_3), "Rank3"))
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK3" /*Representative*/), 32);
				
					if (MISC::ARE_STRINGS_EQUAL(&(eventData.f_3), "Rank2"))
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK2" /*Lieutenant*/), 32);
				
					if (MISC::ARE_STRINGS_EQUAL(&(eventData.f_3), "Rank1"))
						TEXT_LABEL_ASSIGN_STRING(&unk45, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CREW_RANK1" /*Commissioner*/), 32);
				
					if (eventData.f_2)
						func_184("CREWPROM" /*You have been promoted to ~a~ status in the hierarchy of Crew ~a~.*/, &unk45, &(memberDesc.f_1));
					else
						func_184("CREWDEMO" /*You have been demoted to ~a~ status in the hierarchy of Crew ~a~.*/, &unk45, &(memberDesc.f_1));
				
					uParam1->f_165 = 1;
				}
			}
		}
	}

	return;
}

int func_184(char* sParam0, const char* sParam1, const char* sParam2) // Position - 0x670F Hash - 0x843AE1DA ^0x9EEB3135
{
	int num;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_60(33, sParam0, 1, sParam1, 0, 0, 0, 0f, 0, sParam2, 0, 0);
	return num;
}

void func_185(int iParam0, var uParam1, BOOL bParam2) // Position - 0x674A Hash - 0xC1787554 ^0x4DE733E3
{
	int num;
	struct<36> eventData;
	BOOL flag;
	var unk128;
	var unk217;

	if (!func_54())
		return;

	if (!func_165())
		return;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 36))
	{
		if (!bParam2)
			return;
	
		if (MISC::GET_PROFILE_SETTING(803) == 1 && uParam1->f_165 == 0)
		{
			switch (eventData)
			{
				case joaat("MP0_AWD_50_VEHICLES_BLOWNUP"):
				case joaat("MP1_AWD_50_VEHICLES_BLOWNUP"):
					num = func_47(10, -1);
				
					if (eventData.f_17 > num)
					{
						if (eventData.f_17 > 1)
							func_190("SCFEED_13" /*~a~ has blown up ~1~ vehicles in GTA Online. You've blown up ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						else
							func_190("SCFEED_13b" /*~a~ has blown up ~1~ vehicle in GTA Online. You've blown up ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
					
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_AWD_VEHICLES_JACKEDR"):
				case joaat("MP1_AWD_VEHICLES_JACKEDR"):
					num = func_47(11, -1);
				
					if (eventData.f_17 > num)
					{
						if (eventData.f_17 > 1)
							func_190("SCFEED_10" /*~a~ has stolen ~1~ vehicles in GTA Online. You've stolen ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						else
							func_190("SCFEED_10b" /*~a~ has stolen ~1~ vehicle in GTA Online. You've stolen ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
					
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_AWD_FMTIME5STARWANTED"):
				case joaat("MP1_AWD_FMTIME5STARWANTED"):
					num = func_47(60, -1);
				
					if (eventData.f_17 > num)
					{
						func_190("SCFEED_4" /*~a~ survived a 5 star Wanted Level for ~1~ minutes in GTA Online. Your best time is ~1~ minutes.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_AWD_FMFURTHESTWHEELIE"):
				case joaat("MP1_AWD_FMFURTHESTWHEELIE"):
					num = SYSTEM::ROUND(func_44(32, -1));
				
					if (eventData.f_17 > num)
					{
						if (func_189(PLAYER::PLAYER_ID()) == 133 && func_188(PLAYER::PLAYER_ID()) == 4)
						{
						}
						else
						{
							if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
								func_190("SCFEED_5" /*~a~ did a wheelie for ~1~m in GTA Online. Your furthest distance is ~1~m.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
							else
								func_190("SCFEED_5b" /*~a~ did a wheelie for ~1~ft in GTA Online. Your furthest distance is ~1~ft.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						
							uParam1->f_165 = 1;
						}
					}
					break;
			
				case joaat("MP0_AWD_FMDRIVEWITHOUTCRASH"):
				case joaat("MP1_AWD_FMDRIVEWITHOUTCRASH"):
					num = func_47(61, -1);
				
					if (eventData.f_17 > num)
					{
						func_190("SCFEED_6" /*~a~ drove without crashing for ~1~ minutes in GTA Online. Your best time is ~1~ minutes.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_AWD_FMMOSTFLIPSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTFLIPSINONEVEHICLE"):
					num = func_47(62, -1);
				
					if (eventData.f_17 > num)
					{
						if (eventData.f_17 > 1)
							func_190("SCFEED_7" /*~a~ did ~1~ flips in 1 jump in GTA Online. Your highest amount is ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						else
							func_190("SCFEED_7b" /*~a~ did ~1~ flip in 1 jump in GTA Online. Your highest amount is ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
					
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_AWD_FMMOSTSPINSINONEVEHICLE"):
				case joaat("MP1_AWD_FMMOSTSPINSINONEVEHICLE"):
					num = func_47(63, -1);
				
					if (eventData.f_17 > num)
					{
						if (eventData.f_17 > 1)
							func_190("SCFEED_8" /*~a~ did ~1~ spins in 1 jump in GTA Online. Your highest amount is ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
						else
							func_190("SCFEED_8b" /*~a~ did ~1~ spin in 1 jump in GTA Online. Your highest amount is ~1~.*/, &(eventData.f_1), eventData.f_17, num, HUD_COLOUR_PURE_WHITE, true);
					
						uParam1->f_165 = 1;
					}
					break;
			
				case joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"):
				case joaat("MP1_CHAR_FM_RACE_RECORD_TIMES") /* collision: MPPLY_ARENAWARSPSTAT_INT54 */:
					if (func_116() == 0 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_115() && !func_114() && !func_113() && !func_112() && !func_111() && !func_110() && !func_109() && !func_108() && func_165() && func_103() && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 8 && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_96 != 9 && !func_101(PLAYER::PLAYER_ID()) && !func_100() && !func_98(PLAYER::PLAYER_ID(), true, false))
					{
						flag.f_16 = 1;
						flag.f_20 = -1;
						flag.f_21 = -1;
						flag.f_22 = 2;
						flag.f_35 = 2;
						unk128.f_65 = -1;
						unk128.f_66 = -1;
						unk128.f_67 = 2;
					
						if (func_83(&flag, &(eventData.f_20), &unk128, &unk217))
						{
							if (flag)
							{
								func_187("SCFEED_11" /*~a~ set a Race World Record on ~a~ with the time: ~a~.*/, &(eventData.f_1), eventData.f_17, &(unk128.f_22), true, 2f);
							
								if (!func_186(false))
									AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
							
								uParam1->f_165 = 1;
							}
						}
					}
					break;
			}
		}
	}

	return;
}

BOOL func_186(BOOL bParam0) // Position - 0x6B6A Hash - 0x1CCCE169 ^0x1CCCE169
{
	bParam0;
	return Global_1575055;
}

int func_187(char* sParam0, char* sParam1, Hash hParam2, const char* sParam3, BOOL bParam4, float fParam5) // Position - 0x6B7B Hash - 0xA1AEEB9B ^0x402B8468
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(hParam2, 2055);

	if (bParam4)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, "", fParam5);
	}
	else
	{
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(18, sParam0, 1, sParam1, hParam2, 0, 0, 0f, 0, sParam3, 0, 0);
	return num;
}

int func_188(Player plParam0) // Position - 0x6BEE Hash - 0xD75395B5 ^0xD75395B5
{
	if (func_189(plParam0) == 133)
		return Global_2738935.f_5167;

	return -1;
}

ePedComponentType func_189(Player plParam0) // Position - 0x6C0F Hash - 0x8EC56FC1 ^0x8EC56FC1
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1887305[player /*610*/];

	return PV_COMP_INVALID;
}

int func_190(char* sParam0, char* sParam1, int iParam2, int iParam3, eHudColour ehcParam4, BOOL bParam5) // Position - 0x6C2E Hash - 0x39E8EA87 ^0x2397DE8E
{
	int num;
	var sender;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_68(sParam1));

	if (!(ehcParam4 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);

	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);

	if (!(ehcParam4 == HUD_COLOUR_PURE_WHITE))
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);

	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);

	if (bParam5)
	{
		sender = { func_78(sParam1) };
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, &sender, 0);
	}
	else
	{
		HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}

	func_60(40, sParam0, 1, sParam1, iParam2, iParam3, 0, 0, 1, 0, 0, 0);
	return num;
}

void func_191(int iParam0) // Position - 0x6CB5 Hash - 0x8E7A8FFF ^0xF9FD7A3A
{
	struct<36> eventData;
	int num;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 36))
		func_171(eventData, num);

	return;
}

int func_192() // Position - 0x6CD9 Hash - 0x60E77836 ^0xD24FEC1
{
	switch (MISC::GET_PROFILE_SETTING(807))
	{
		case 0:
			return 0;
	
		case 1:
			return 60000;
	
		case 2:
			return 120000;
	
		case 3:
			return 180000;
	
		case 4:
			return 240000;
	
		case 5:
			return 300000;
	
		case 6:
			return 600000;
	
		case 7:
			return 900000;
	
		case 8:
			return 1800000;
	
		case 9:
			return 3600000;
	
		default:
		
	}

	return 300000;
}

void func_193() // Position - 0x6D70 Hash - 0xDC11FDAF ^0xEF2290DF
{
	if (!bLocal_130)
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_128))
		{
			if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_128))
			{
				if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_128))
				{
					iLocal_128 = 0;
					bLocal_130 = true;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						Global_2359296[func_195() /*5570*/].f_593.f_56 = { func_196() };
					else
						Global_113969.f_20121.f_267 = { func_196() };
				
					iLocal_128 = 0;
					bLocal_130 = true;
				}
			}
		}
		else if (func_194(&uLocal_124, &uLocal_129))
		{
			SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&uLocal_124, &iLocal_128);
		}
		else
		{
			iLocal_128 = 0;
			bLocal_130 = true;
		}
	}

	return;
}

BOOL func_194(var uParam0, var uParam1) // Position - 0x6DF9 Hash - 0x78C9D9BE ^0x325585F9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113969.f_20121.f_261)
	{
		*uParam0 = { Global_113969.f_20121.f_267 };
		*uParam1 = Global_113969.f_20121.f_271;
		return true;
	}

	return false;
}

int func_195() // Position - 0x6E3A Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

struct<4> func_196() // Position - 0x6E47 Hash - 0x279EA3EF ^0x4797459A
{
	var unk;
	int randomIntInRange;
	int i;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);

	for (i = 0; i <= 7; i = i + 1)
	{
		if (i < 2)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			TEXT_LABEL_APPEND_STRING(&unk, func_197(randomIntInRange), 16);
		}
		else if (i < 5)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(10, 36);
			TEXT_LABEL_APPEND_STRING(&unk, func_197(randomIntInRange), 16);
		}
		else
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
			TEXT_LABEL_APPEND_STRING(&unk, func_197(randomIntInRange), 16);
		}
	}

	return unk;
}

char* func_197(int iParam0) // Position - 0x6EB7 Hash - 0xA53FE542 ^0xA53FE542
{
	if (iParam0 == 0)
		return "0";

	if (iParam0 == 1)
		return "1";

	if (iParam0 == 2)
		return "2";

	if (iParam0 == 3)
		return "3";

	if (iParam0 == 4)
		return "4";

	if (iParam0 == 5)
		return "5";

	if (iParam0 == 6)
		return "6";

	if (iParam0 == 7)
		return "7";

	if (iParam0 == 8)
		return "8";

	if (iParam0 == 9)
		return "9";

	if (iParam0 == 10)
		return "A";

	if (iParam0 == 11)
		return "B";

	if (iParam0 == 12)
		return "C";

	if (iParam0 == 13)
		return "D";

	if (iParam0 == 14)
		return "E";

	if (iParam0 == 15)
		return "F";

	if (iParam0 == 16)
		return "G";

	if (iParam0 == 17)
		return "H";

	if (iParam0 == 18)
		return "I";

	if (iParam0 == 19)
		return "J";

	if (iParam0 == 20)
		return "K";

	if (iParam0 == 21)
		return "L";

	if (iParam0 == 22)
		return "M";

	if (iParam0 == 23)
		return "N";

	if (iParam0 == 24)
		return "O";

	if (iParam0 == 25)
		return "P";

	if (iParam0 == 26)
		return "Q";

	if (iParam0 == 27)
		return "R";

	if (iParam0 == 28)
		return "S";

	if (iParam0 == 29)
		return "T";

	if (iParam0 == 30)
		return "U";

	if (iParam0 == 31)
		return "V";

	if (iParam0 == 32)
		return "W";

	if (iParam0 == 33)
		return "X";

	if (iParam0 == 34)
		return "Y";

	if (iParam0 == 35)
		return "Z";

	return "A";
}

void func_198() // Position - 0x708E Hash - 0x5F1900A4 ^0x47CF59CD
{
	BOOL flag;
	BOOL flag2;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_527(PLAYER::PLAYER_ID()))
		return;

	if (iLocal_88 == 0)
	{
		func_526();
	
		if (bLocal_84)
			return;
	
		func_525();
	}

	func_492();

	if (bLocal_87)
		return;

	func_484();
	func_481();
	flag = bLocal_86;
	flag2 = iLocal_72 == 0 && !bLocal_87 && !bLocal_84;

	if (bLocal_86)
		bLocal_86 = false;
	else
		iLocal_72 = (iLocal_72 + 1) % Global_262145.f_31857;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_72 < 20)
		{
			if (!flag)
			{
				hLocal_73 = hLocal_73 + 1;
			
				if (hLocal_73 >= 10)
				{
					hLocal_73 = 0;
					bLocal_76 = !bLocal_76;
				}
			}
		
			iLocal_75 = Global_2359296[func_195() /*5570*/].f_593.f_63[hLocal_73] - 1;
		
			if (bLocal_76)
				if (func_480(iLocal_75, &iLocal_74))
					func_205(CHAR_MULTIPLAYER);
			else if (Global_2359296[func_195() /*5570*/].f_593.f_63[hLocal_73] == 0)
				func_204(hLocal_73);
		}
	}
	else
	{
		switch (iLocal_72)
		{
			case 0:
				func_205(CHAR_MICHAEL);
				break;
		
			case 1:
				func_205(CHAR_FRANKLIN);
				break;
		
			case 2:
				func_205(CHAR_TREVOR);
				break;
		
			case 3:
				func_199();
				break;
		}
	}

	if (flag2)
	{
		if (bLocal_104)
		{
			if (SYSTEM::TIMERA() > 5000)
			{
				APP::APP_SET_APP("car");
				APP::APP_SAVE_DATA();
				APP::APP_CLOSE_APP();
				bLocal_104 = false;
			}
		}
	}

	return;
}

void func_199() // Position - 0x71E8 Hash - 0xF2ADCBEB ^0x9923E379
{
	int _int;
	int _int2;
	int _int3;
	int cloudTimeAsInt;
	int _int4;
	int num;
	int num2;
	int value;
	BOOL outValue;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (func_203())
		return;

	if (Global_33094)
	{
		if (!bLocal_102)
		{
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_202("chopKilled", MISC::GET_RANDOM_INT_IN_RANGE(0, 65535));
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			bLocal_102 = true;
		}
	}
	else
	{
		bLocal_102 = false;
	}

	APP::APP_SET_APP("dog");
	APP::APP_SET_BLOCK("saveData");

	if (APP::APP_DATA_VALID())
	{
		_int = APP::APP_GET_INT("happinessTimer");
	
		if (_int == 0)
			_int = &func_6;
	
		_int2 = APP::APP_GET_INT("happinessDecrement");
	
		if (_int2 == 0)
			_int2 = 1;
	
		_int3 = APP::APP_GET_INT("time_stamp");
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	
		if (cloudTimeAsInt == 0)
			cloudTimeAsInt = _int3;
	
		_int4 = APP::APP_GET_INT("happiness");
		num = cloudTimeAsInt - _int3;
		num2 = (num / _int) * _int2;
		value = func_201(_int4 - num2, 0, 100);
		Global_113969.f_20121.f_254 = SYSTEM::TO_FLOAT(value);
		Global_113969.f_20121.f_254.f_1 = APP::APP_GET_FLOAT("cleanliness");
		Global_113969.f_20121.f_254.f_2 = APP::APP_GET_FLOAT("hunger");
		Global_113969.f_20121.f_254.f_3 = func_23("trainingLevel");
		Global_113969.f_20121.f_254.f_4 = func_23("collar");
		Global_113969.f_20121.f_254.f_5 = 1;
		Global_113969.f_20121.f_254 > 50f;
		Global_113969.f_20121.f_254.f_2 > 50f;
		Global_113969.f_20121.f_263 = func_23("usedApp") != PV_COMP_HEAD;
	
		if (STATS::STAT_GET_BOOL(joaat("CHOP_APP_USED"), &outValue, -1))
			if (!outValue)
				if (Global_113969.f_20121.f_263)
					STATS::STAT_SET_BOOL(joaat("CHOP_APP_USED"), true, true);
	}

	APP::APP_CLOSE_BLOCK();
	APP::APP_CLOSE_APP();

	if (Global_113969.f_20121.f_264)
	{
		APP::APP_SET_APP("dog");
		APP::APP_SET_BLOCK("saveData");
	
		if (func_200(6))
			func_202("chopSafeHouse", PV_COMP_BERD);
		else
			func_202("chopSafeHouse", PV_COMP_HEAD);
	
		APP::APP_SAVE_DATA();
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_113969.f_20121.f_264 = 0;
	}

	return;
}

BOOL func_200(int iParam0) // Position - 0x73F0 Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113969.f_7232[iParam0], 0);
}

int func_201(int iParam0, int iParam1, int iParam2) // Position - 0x7405 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_202(char* sParam0, ePedComponentType epctParam1) // Position - 0x742A Hash - 0xD081EBCC ^0x9F2162EF
{
	APP::APP_SET_INT(func_24(sParam0), epctParam1);
	return;
}

BOOL func_203() // Position - 0x743E Hash - 0x1CB029D8 ^0x1CB029D8
{
	if (Global_44042 == 15)
		return false;

	return true;
}

void func_204(Hash hParam0) // Position - 0x7453 Hash - 0xA2BEC677 ^0xD5AA9D0
{
	var blockName;

	if (!Global_2359296[func_195() /*5570*/].f_593.f_41[hParam0])
	{
		APP::APP_SET_APP("car");
		TEXT_LABEL_ASSIGN_STRING(&blockName, "multiplayer", 16);
		TEXT_LABEL_APPEND_INT(&blockName, func_15(), 16);
		APP::APP_SET_BLOCK(&blockName);
		TEXT_LABEL_ASSIGN_STRING(&blockName, "vehicle", 16);
		TEXT_LABEL_APPEND_INT(&blockName, hParam0, 16);
		APP::APP_SET_BLOCK(&blockName);
		func_202("carUnlocked", PV_COMP_HEAD);
		APP::APP_CLOSE_BLOCK();
		bLocal_104 = true;
		SYSTEM::SETTIMERA(0);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		Global_2359296[func_195() /*5570*/].f_593.f_41[hParam0] = true;
	}

	return;
}

void func_205(eCharacter echParam0) // Position - 0x74D6 Hash - 0xB26A1716 ^0xF2096FAB
{
	BOOL flag;
	int i;
	Hash hash;
	Hash hash2;
	ePedComponentType r;
	ePedComponentType g;
	ePedComponentType b;
	var a;
	var blockName;
	var blockName2;
	var blockName3;
	ePedComponentType model;
	ePedComponentType modelHash;
	int num;
	int j;
	ePedComponentType type;
	Hash hash3;
	Hash hash4;
	BOOL flag2;
	var blockName4;
	int k;
	BOOL flag3;
	var unk198;
	var unk199;
	var unk200;
	ePedComponentType type2;
	BOOL flag4;
	BOOL flag5;
	var unk207;
	BOOL flag6;
	Hash hash5;
	Hash hash6;
	int value;
	int value2;
	int num2;
	int num3;
	ePedComponentType address;

	model.f_33 = 5;

	if (echParam0 == CHAR_MICHAEL)
	{
		hash = 0;
		TEXT_LABEL_ASSIGN_STRING(&blockName, "singleplayer0", 24);
		TEXT_LABEL_ASSIGN_STRING(&blockName2, "sp0_order", 24);
		model = { Global_113969.f_20121[0 /*43*/] };
		modelHash = { Global_113969.f_20121.f_130[0 /*41*/] };
	}
	else if (echParam0 == CHAR_FRANKLIN)
	{
		hash = 1;
		TEXT_LABEL_ASSIGN_STRING(&blockName, "singleplayer1", 24);
		TEXT_LABEL_ASSIGN_STRING(&blockName2, "sp1_order", 24);
		model = { Global_113969.f_20121[1 /*43*/] };
		modelHash = { Global_113969.f_20121.f_130[1 /*41*/] };
	}
	else if (echParam0 == CHAR_TREVOR)
	{
		hash = 2;
		TEXT_LABEL_ASSIGN_STRING(&blockName, "singleplayer2", 24);
		TEXT_LABEL_ASSIGN_STRING(&blockName2, "sp2_order", 24);
		model = { Global_113969.f_20121[2 /*43*/] };
		modelHash = { Global_113969.f_20121.f_130[2 /*41*/] };
	}
	else if (echParam0 == CHAR_MULTIPLAYER)
	{
		hash2 = func_15();
		hash = 3 + hash2;
		TEXT_LABEL_ASSIGN_STRING(&blockName, "multiplayer", 24);
		TEXT_LABEL_APPEND_INT(&blockName, hash2, 24);
		TEXT_LABEL_ASSIGN_STRING(&blockName2, "mp", 24);
		TEXT_LABEL_APPEND_INT(&blockName2, hash2, 24);
		TEXT_LABEL_APPEND_STRING(&blockName2, "_order", 24);
	
		if (func_479(iLocal_74, &num))
			func_478(&model, num);
		else
			func_478(&model, 0);
	
		modelHash = { Global_2359296[func_195() /*5570*/].f_593 };
		TEXT_LABEL_ASSIGN_STRING(&blockName3, "vehicle", 24);
		TEXT_LABEL_APPEND_INT(&blockName3, hLocal_73, 24);
	}
	else
	{
		return;
	}

	if (bLocal_103 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && bLocal_79)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			bLocal_103 = false;
		}
		else
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_202("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_202("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
		
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_202("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
		
			for (j = 0; j < Global_113969.f_20121; j = j + 1)
			{
				if (!Global_113969.f_20121[j /*43*/].f_41)
				{
					Global_113969.f_20121[j /*43*/].f_40 = 0;
				
					if (Global_113969.f_20121[j /*43*/] != PV_COMP_HEAD && Global_113969.f_20121[j /*43*/].f_29 != 0)
						Global_113969.f_20121[j /*43*/].f_40 = 1;
					else
						Global_113969.f_20121.f_273[j] = false;
				}
			}
		
			bLocal_103 = false;
		}
	
		if (echParam0 >= CHAR_TREVOR)
		{
			bLocal_103 = false;
			bLocal_79 = false;
		}
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_113969.f_20121.f_273[echParam0])
		{
			if (!func_477(0) && !func_477(3) && !func_477(2) || !func_176(0))
			{
				if (echParam0 == CHAR_FRANKLIN || echParam0 == CHAR_MICHAEL && func_176(0) && func_476(echParam0) && !Global_113969.f_9088.f_99.f_58[135] || echParam0 == CHAR_TREVOR && func_176(0) && func_476(echParam0) && !Global_113969.f_9088.f_99.f_58[136])
				{
					APP::APP_SET_APP("car");
					APP::APP_SET_BLOCK(&blockName);
					APP::APP_CLEAR_BLOCK();
					type.f_11 = 12;
					type.f_31 = 49;
					type.f_81 = 2;
					func_475(echParam0, &type, 1);
					func_474(type.f_5, type.f_7, -1, true, &hash3);
					func_474(type.f_6, -1, -1, false, &hash4);
					func_202("carUnlocked", 1);
					func_202("carModel", type);
					func_202("tyreSmokeColourEnabled", 1);
					func_202("tyreSmokeColourRed", 255);
					func_202("tyreSmokeColourGreen", 255);
					func_202("tyreSmokeColourBlue", 255);
				
					if (type == joaat("buffalo2"))
					{
						func_473("carType", "sport");
						func_202("carEngineCount", 5);
						func_202("carBrakesCount", 4);
						func_202("carExhaustCount", 6);
						func_202("carWheelCount", 26);
						func_202("carHornCount", 5);
						func_202("carArmourCount", 6);
						func_202("carSuspensionCount", 5);
						func_202("carHorn1", joaat("WASHINGTON_MULTI_HORN"));
						func_202("carHorn2", joaat("PHANTOM_HORN"));
						func_202("carHorn3", joaat("SIRENS_AIRHORN"));
						func_202("carHorn4", -1751761149);
						func_202("carHorn5", 1732399718);
						func_472("carPriceModifier", 3.25f);
						func_202("carColour1", hash3);
						func_202("carColour2", hash4);
						func_202("carColour1Unlocked", 1);
						func_202("carColour2Unlocked", 1);
					}
					else if (type == joaat("bodhi2"))
					{
						func_473("carType", "car");
						func_202("carEngineCount", 5);
						func_202("carBrakesCount", 4);
						func_202("carExhaustCount", 1);
						func_202("carWheelCount", 26);
						func_202("carHornCount", 5);
						func_202("carArmourCount", 6);
						func_202("carSuspensionCount", 1);
						func_202("carHorn1", joaat("TURISMO_MULTI_HORN"));
						func_202("carHorn2", joaat("PHANTOM_HORN"));
						func_202("carHorn3", joaat("SIRENS_AIRHORN"));
						func_202("carHorn4", -1751761149);
						func_202("carHorn5", 1732399718);
						func_472("carPriceModifier", 1f);
						func_202("carColour1", hash3);
						func_202("carColour1Unlocked", 1);
					}
					else if (type == joaat("tailgater"))
					{
						func_473("carType", "car");
						func_202("carEngineCount", 5);
						func_202("carBrakesCount", 5);
						func_202("carExhaustCount", 5);
						func_202("carWheelCount", 26);
						func_202("carHornCount", 5);
						func_202("carArmourCount", 6);
						func_202("carSuspensionCount", 5);
						func_202("carHorn1", joaat("EXT_MUTLI_HORN"));
						func_202("carHorn2", joaat("PHANTOM_HORN"));
						func_202("carHorn3", joaat("SIRENS_AIRHORN"));
						func_202("carHorn4", -1751761149);
						func_202("carHorn5", 1732399718);
						func_472("carPriceModifier", 1f);
						func_202("carColour1", hash3);
						func_202("carColour2", hash4);
						func_202("carColour1Unlocked", 1);
						func_202("carColour2Unlocked", 1);
					}
				
					APP::APP_CLOSE_BLOCK();
					uLocal_90 = { blockName };
					uLocal_96 = { blockName3 };
					epctLocal_89 = type;
					bLocal_87 = true;
					bLocal_104 = true;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_APP();
					Global_113969.f_20121.f_273[echParam0] = true;
				}
			}
		}
		else if (echParam0 == CHAR_MICHAEL && Global_113969.f_9088.f_99.f_58[135] || echParam0 == CHAR_TREVOR && Global_113969.f_9088.f_99.f_58[136])
		{
			Global_113969.f_20121[echParam0 /*43*/].f_41 = 1;
			Global_113969.f_20121.f_273[echParam0] = false;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flag2 = false;
	
		if (iLocal_132 == 0)
			flag2 = _MPPLY_STAT_GET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_0"));
		else if (iLocal_132 == 1)
			flag2 = _MPPLY_STAT_GET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_1"));
		else if (iLocal_132 == 2)
			flag2 = _MPPLY_STAT_GET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_2"));
		else if (iLocal_132 == 3)
			flag2 = _MPPLY_STAT_GET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_3"));
		else if (iLocal_132 == 4)
			flag2 = _MPPLY_STAT_GET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_4"));
	
		if (flag2 && !func_470(iLocal_132))
		{
			APP::APP_SET_APP("car");
			TEXT_LABEL_ASSIGN_STRING(&blockName4, "multiplayer", 16);
			TEXT_LABEL_APPEND_INT(&blockName4, iLocal_132, 16);
			APP::APP_SET_BLOCK(&blockName4);
		
			for (k = 0; k < 10; k = k + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&blockName4, "vehicle", 16);
				TEXT_LABEL_APPEND_INT(&blockName4, k, 16);
				APP::APP_SET_BLOCK(&blockName4);
				func_202("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
			}
		
			APP::APP_CLOSE_BLOCK();
			bLocal_104 = true;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
		
			if (iLocal_132 == 0)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_0"), false);
			else if (iLocal_132 == 1)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_1"), false);
			else if (iLocal_132 == 2)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_2"), false);
			else if (iLocal_132 == 3)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_3"), false);
			else if (iLocal_132 == 4)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_4"), false);
		}
	
		iLocal_132 = iLocal_132 + 1;
	
		if (iLocal_132 > 4)
			iLocal_132 = 0;
	}

	if (!bLocal_87)
	{
		if (model.f_42)
		{
			uLocal_90 = { blockName };
			uLocal_96 = { blockName3 };
			epctLocal_89 = model;
			bLocal_87 = true;
			bLocal_104 = true;
			SYSTEM::SETTIMERA(0);
			model.f_42 = 0;
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_2359296[func_195() /*5570*/].f_593.f_52 = 0;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			if (SYSTEM::TIMERB() > 5000)
			{
				flag3 = false;
			
				if (iLocal_133 == 0)
				{
					func_468(&unk198);
					flag3 = unk198 != uLocal_135[0];
					iLocal_133 = iLocal_133 + 1;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_133 == 1)
				{
					func_424(&unk199);
					flag3 = unk199 != uLocal_135[1];
					iLocal_133 = iLocal_133 + 1;
					SYSTEM::SETTIMERB(0);
				}
				else if (iLocal_133 == 2)
				{
					unk200 = 6;
				
					if (func_414(&unk200, iLocal_134) == -1)
					{
						iLocal_134 = 0;
						iLocal_133 = iLocal_133 + 1;
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						flag3 = IS_BIT_SET(unk200[iLocal_134 / 32], iLocal_134 % 32) != IS_BIT_SET(uLocal_147[iLocal_134 / 32], iLocal_134 % 32);
						iLocal_134 = iLocal_134 + 1;
						SYSTEM::SETTIMERB(4900);
					}
				}
			
				if (flag3)
				{
					uLocal_90 = { blockName };
					uLocal_96 = { blockName3 };
					epctLocal_89 = model;
					bLocal_87 = true;
					bLocal_104 = true;
					SYSTEM::SETTIMERA(0);
				}
			
				if (iLocal_133 > 2)
					iLocal_133 = 0;
			}
		}
	}

	if (modelHash.f_33)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_85() == 0)
			{
				type2 = Global_2359296[func_195() /*5570*/].f_593.f_62;
			
				if (Global_1586521[type2 /*142*/].f_66 == modelHash)
				{
					if (modelHash.f_37)
					{
						modelHash.f_38 = 0;
					
						if (iLocal_107 == 0)
						{
							if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_105))
							{
								if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_105))
								{
									if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_105))
									{
										iLocal_105 = 0;
										modelHash.f_37 = 0;
									}
									else
									{
										modelHash.f_38 = 1;
										iLocal_105 = 0;
										modelHash.f_37 = 0;
									}
								}
							}
							else
							{
								SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_2359296[func_195() /*5570*/].f_593.f_28), &iLocal_105);
							}
						}
						else if (iLocal_107 == 1)
						{
							if (iLocal_106 == 0)
							{
								SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_2359296[func_195() /*5570*/].f_593.f_28), &iLocal_106);
							}
							else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_106))
							{
								switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_106))
								{
									case 0:
										iLocal_106 = 0;
										modelHash.f_37 = 0;
										break;
								
									default:
										modelHash.f_38 = 1;
										iLocal_106 = 0;
										modelHash.f_37 = 0;
										break;
								}
							}
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
					}
					else if (func_413(PLAYER::PLAYER_ID(), true, false))
					{
					}
					else if (!func_165())
					{
					}
					else if (modelHash.f_38)
					{
						if (func_412(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP2" /*The plate you ordered is inappropriate. Please choose another and try again.*/, false, 0))
						{
							modelHash.f_33 = 0;
							modelHash.f_36 = 0;
							modelHash.f_35 = 0;
							modelHash.f_34 = 0;
						}
					}
					else if (bLocal_121)
					{
						modelHash.f_39 = 0;
					
						if (bLocal_123)
						{
							if (!func_398(&modelHash, type2))
								bLocal_121 = false;
						
							bLocal_123 = false;
						}
						else if (modelHash.f_27 > 0 && !MONEY::NETWORK_CAN_SPEND_MONEY(modelHash.f_27, false, true, false, -1, 0))
						{
							modelHash.f_39 = 1;
							bLocal_121 = false;
						}
						else
						{
							if (!bLocal_122)
							{
								func_396(&modelHash, false);
								MISC::SET_BIT(&(Global_1586521[type2 /*142*/].f_103), 14);
								bLocal_122 = true;
								func_373(type2, &Global_1586521[type2 /*142*/], true, -1, false, false);
								func_129(407109726, 3, false);
							}
						
							if (func_296(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP1" /*Your Los Santos Customs order has been processed for your ~a~.*/, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(modelHash), false, -99, 0, 0, false, 0))
							{
								flag4 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= modelHash.f_27;
								flag5 = !flag4 && MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
							
								if (modelHash.f_27 > 0)
									MONEY::NETWORK_BUY_ITEM(modelHash.f_27, modelHash, 8, 1, flag4, "CMOD_MAIN_0", MISC::GET_HASH_KEY(func_295(39, 0, false)), MISC::GET_HASH_KEY("CMOD_MAIN_0"), 0, flag5);
							
								modelHash.f_33 = 0;
								modelHash.f_36 = 1;
								modelHash.f_35 = 1;
								bLocal_121 = false;
								func_396(&modelHash, true);
								func_294(&modelHash, 3);
								MISC::SET_BIT(&(Global_1586521[type2 /*142*/].f_103), 14);
								func_373(type2, &Global_1586521[type2 /*142*/], true, -1, false, false);
								func_129(407109726, 3, false);
							}
						}
					}
					else if (modelHash.f_39)
					{
						if (func_296(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP3" /*We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money.*/, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(modelHash), false, -99, 0, 0, false, 0))
						{
							modelHash.f_33 = 0;
							modelHash.f_36 = 1;
							modelHash.f_35 = 0;
							modelHash.f_34 = 0;
						}
					}
					else if (func_296(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP" /*Drop by Los Santos Customs to have your ~a~ order fulfilled.*/, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(modelHash), false, -99, 0, 0, false, 0))
					{
						modelHash.f_33 = 0;
						modelHash.f_36 = 1;
						modelHash.f_35 = 0;
					}
				
					bLocal_86 = true;
				}
				else
				{
					modelHash.f_33 = 0;
					modelHash.f_36 = 0;
					modelHash.f_35 = 0;
					modelHash.f_34 = 0;
				}
			}
		}
		else if (echParam0 == _GET_CURRENT_PLAYER_CHARACTER())
		{
			if (Global_113969.f_2366.f_539.f_2407[0 /*295*/][echParam0 /*98*/] == modelHash || Global_113969.f_2366.f_539.f_2407[1 /*295*/][echParam0 /*98*/] == modelHash || Global_113969.f_2366.f_539.f_2407[2 /*295*/][echParam0 /*98*/] == modelHash || Global_113969.f_2366.f_539.f_2407[3 /*295*/][echParam0 /*98*/] == modelHash || echParam0 == CHAR_FRANKLIN && modelHash == joaat("buffalo2") && !Global_113969.f_20121.f_281[echParam0] || echParam0 == CHAR_MICHAEL && modelHash == joaat("tailgater") && !Global_113969.f_20121.f_281[echParam0] || echParam0 == CHAR_TREVOR && modelHash == joaat("bodhi2") && !Global_113969.f_20121.f_281[echParam0])
			{
				if (modelHash.f_37)
				{
					modelHash.f_38 = 0;
				
					if (iLocal_107 == 0)
					{
						if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(iLocal_105))
						{
							if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(iLocal_105))
							{
								if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(iLocal_105))
								{
									iLocal_105 = 0;
									modelHash.f_37 = 0;
								}
								else
								{
									modelHash.f_38 = 1;
									iLocal_105 = 0;
									modelHash.f_37 = 0;
								}
							}
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&(Global_113969.f_20121.f_130[echParam0 /*41*/].f_28), &iLocal_105);
						}
					}
					else if (iLocal_107 == 1)
					{
						if (iLocal_106 == 0)
						{
							SOCIALCLUB::SC_LICENSEPLATE_ISVALID(&(Global_113969.f_20121.f_130[echParam0 /*41*/].f_28), &iLocal_106);
						}
						else if (!SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(iLocal_106))
						{
							switch (SOCIALCLUB::SC_LICENSEPLATE_GET_ISVALID_STATUS(iLocal_106))
							{
								case 0:
									iLocal_106 = 0;
									modelHash.f_37 = 0;
									break;
							
								default:
									modelHash.f_38 = 1;
									iLocal_106 = 0;
									modelHash.f_37 = 0;
									break;
							}
						}
					}
				}
				else if (modelHash.f_38)
				{
					if (!func_477(0) && !func_477(3) && !func_477(2))
					{
						if (_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP2" /*The plate you ordered is inappropriate. Please choose another and try again.*/, 2, 0, 0, 0, 0, true, 0, 1))
						{
							modelHash.f_33 = 0;
							modelHash.f_36 = 0;
							modelHash.f_35 = 0;
							modelHash.f_34 = 0;
						}
					}
				}
				else if (uLocal_109[echParam0])
				{
					uLocal_109[echParam0] = 0;
					modelHash.f_39 = 0;
					modelHash.f_34 = 0;
				
					if (!func_284(modelHash.f_27) && echParam0 != CHAR_FRANKLIN || Global_113969.f_20121.f_281[echParam0])
					{
						modelHash.f_39 = 1;
					}
					else
					{
						modelHash.f_33 = 0;
						modelHash.f_36 = 1;
						modelHash.f_35 = 1;
						modelHash.f_34 = uLocal_113[echParam0];
					}
				
					uLocal_113[echParam0] = 0;
				}
				else if (modelHash.f_39)
				{
					if (!func_477(0) && !func_477(3) && !func_477(2))
					{
						if (func_265(_CHAR_LS_CUSTOMS_2, "SOCIAL_CARAPP3" /*We could not process your Los Santos Customs order due to lack of funds. Drop by one of our garages with your ~a~ when you have enough money.*/, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113969.f_20121.f_130[echParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, true, 0, 1, 0, 0, 0))
						{
							modelHash.f_33 = 0;
							modelHash.f_36 = 1;
							modelHash.f_35 = 0;
							modelHash.f_34 = 0;
						}
					}
				}
				else if (!func_477(0) && !func_477(3) && !func_477(2))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk207, "SOCIAL_CARAPP" /*Drop by Los Santos Customs to have your ~a~ order fulfilled.*/, 16);
				
					if (echParam0 == CHAR_FRANKLIN && !Global_113969.f_20121.f_281[echParam0])
						TEXT_LABEL_ASSIGN_STRING(&unk207, "SOCIAL_FREE" /*Drop by Los Santos Customs to have your ~a~ order fulfilled. This one's on the house.*/, 16);
				
					if (func_265(_CHAR_LS_CUSTOMS_2, &unk207, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_113969.f_20121.f_130[echParam0 /*41*/])), -99, "NULL", 1, 0, 0, 0, 0, true, 0, 1, 0, 0, 0))
					{
						modelHash.f_33 = 0;
						modelHash.f_36 = 1;
						modelHash.f_35 = 0;
						modelHash.f_34 = 0;
						func_264();
					}
				}
			
				bLocal_86 = true;
			}
			else
			{
				modelHash.f_33 = 0;
				modelHash.f_36 = 0;
				modelHash.f_35 = 0;
				modelHash.f_34 = 0;
			}
		}
	}

	flag6 = true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (echParam0 != CHAR_MULTIPLAYER || !func_261(39) || func_260() || func_98(PLAYER::PLAYER_ID(), true, false))
			flag6 = false;
	else if (!func_259(echParam0) || func_260())
		flag6 = false;

	if (flag6 && !modelHash.f_33)
	{
		for (i = 0; i < 2; i = i + 1)
		{
			if (i == 0)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&blockName2);
			
				if (APP::APP_DATA_VALID())
				{
					hash5 = func_23("uid");
				
					if (hash5 != 0 && hash5 != modelHash.f_26 && func_23("character") == hash && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_23("vehicle") == hLocal_73)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
						}
					
						modelHash.f_26 = hash5;
						modelHash = func_23("carModel");
					
						if (!STREAMING::IS_MODEL_A_VEHICLE(modelHash))
							if (echParam0 == CHAR_MICHAEL)
								modelHash = func_258(CHAR_MICHAEL, 1);
							else if (echParam0 == CHAR_FRANKLIN)
								modelHash = func_258(CHAR_FRANKLIN, 1);
							else if (echParam0 == CHAR_TREVOR)
								modelHash = func_258(CHAR_TREVOR, 1);
							else
								modelHash = joaat("buffalo2");
					
						modelHash.f_27 = func_23("cost");
						modelHash.f_1 = func_23("carColour1");
						modelHash.f_2 = func_23("carColour2");
						modelHash.f_3 = func_23("carColour1Group");
						modelHash.f_4 = func_23("carColour2Group");
						modelHash.f_5 = func_23("windowTint");
						modelHash.f_18 = func_257(func_23("bulletProofTyres"));
						modelHash.f_9 = func_23("carEngine");
						modelHash.f_10 = func_23("carBrakes");
						modelHash.f_13 = func_23("carExhaust");
						modelHash.f_11 = func_23("carWheel");
						modelHash.f_6 = func_23("tyreSmokeColourRed");
						modelHash.f_7 = func_23("tyreSmokeColourGreen");
						modelHash.f_8 = func_23("tyreSmokeColourBlue");
						modelHash.f_16 = func_23("carHorn");
						modelHash.f_15 = func_23("carArmour");
						modelHash.f_19 = func_23("carTurbo");
						modelHash.f_14 = func_23("carSuspension");
						modelHash.f_17 = func_23("carXenonLights");
						modelHash.f_20 = func_23("tyreSmoke");
						modelHash.f_12 = model.f_10;
						flag = true;
					
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							if (!uLocal_117[echParam0] && MISC::GET_GAME_TIMER() - iLocal_108 < 20000)
							{
								uLocal_109[echParam0] = 1;
							}
							else if (!func_176(0) && func_256(1, 0) == 0 && Global_113969.f_9088 || _IS_MISSION_REPEAT_ACTIVE(false) && IS_BIT_SET(Global_113969.f_9088.f_2[27 /*3*/], 1) || _IS_MISSION_REPEAT_ACTIVE(false))
							{
								uLocal_109[echParam0] = 1;
								uLocal_113[echParam0] = 1;
							}
							else if (echParam0 == CHAR_MICHAEL && modelHash == joaat("tailgater") || echParam0 == CHAR_FRANKLIN && modelHash == joaat("buffalo2") || echParam0 == CHAR_FRANKLIN && modelHash == joaat("bagger") || echParam0 == CHAR_TREVOR && modelHash == joaat("bodhi2"))
							{
								if (func_256(echParam0, modelHash) == 0)
								{
									uLocal_109[echParam0] = 1;
									uLocal_113[echParam0] = 1;
								}
							}
						
							!uLocal_109[echParam0];
						}
					}
				
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						uLocal_117[echParam0] = 1;
				}
			
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else if (i == 1 && flag)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("plate");
			
				if (APP::APP_DATA_VALID())
				{
					modelHash.f_32 = func_23("carPlateBack");
				
					if (modelHash.f_32 > 4)
					{
						if (modelHash.f_32 == 6 || modelHash.f_32 == 12 && !func_254(modelHash.f_32, -1))
						{
						}
						else
						{
							modelHash.f_32 = 0;
							modelHash.f_32 = func_23("carPlateBack");
						}
					}
				
					TEXT_LABEL_ASSIGN_STRING(&(modelHash.f_28), func_253("carPlateText"), 16);
				}
			
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				modelHash.f_33 = 1;
				modelHash.f_37 = 1;
				modelHash.f_39 = 0;
				modelHash.f_35 = 0;
				modelHash.f_40 = 0;
			
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					STATS::STAT_SET_BOOL(joaat("CAR_MOD_APP_USED"), true, true);
					func_252(135, 1);
					Global_113969.f_20121.f_262 = 1;
				}
				else
				{
					Global_2359296[func_195() /*5570*/].f_593.f_62 = iLocal_75;
					func_57(99, true, -1, true);
				}
			
				bLocal_326 = true;
			}
		}
	}

	if (!model.f_41 && flag6 && model.f_40)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!func_250(&model))
			{
				bLocal_86 = true;
				return;
			}
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
	
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		hash6 = func_249();
	
		if (hash6 == 0)
			hash6 = func_249();
	
		func_202("appUID", hash6);
		Global_113969.f_20121.f_272 = hash6;
		value = 0;
		value2 = 0;
	
		if (func_165())
			if (func_221())
				value2 = value2 + Global_262145.f_128;
	
		func_472("spDiscount", 1f - (SYSTEM::TO_FLOAT(value) / 100f));
		func_472("mpDiscount", 1f - (SYSTEM::TO_FLOAT(value2) / 100f));
	
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_202("playerName", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				func_202("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
			else
				func_202("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
		}
	
		APP::APP_CLOSE_BLOCK();
		APP::APP_SET_BLOCK(&blockName);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			APP::APP_SET_BLOCK(&blockName3);
	
		if (!func_220(model))
		{
			func_202("carUnlocked", 0);
		}
		else
		{
			func_202("carUnlocked", 1);
		
			if (model == joaat("sanchez") || model == joaat("faggio2") || model == joaat("dune") || model == joaat("bfinjection") || !func_219(model.f_10))
				model.f_27 = 0;
		
			if (func_218(model, 1))
				model.f_30 = 0;
		
			if (model == joaat("lectro") || model == joaat("vindicator"))
				model.f_28 = 0;
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (model == joaat("patriot"))
					model.f_26 = 0;
			
				if (model == joaat("prairie"))
					if (model.f_26 > 1)
						model.f_26 = 1;
			}
		
			num2 = func_215(&model);
			model.f_9 = num2;
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_202("playerSlot", hash2);
				func_202("playerRank", func_214(PLAYER::PLAYER_ID()));
			
				switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
				{
					case joaat("MP_M_Freemode_01"):
					case joaat("MP_F_Freemode_01"):
						func_473("playerGang", "None" /*None*/);
						HUD::GET_HUD_COLOUR(HUD_COLOUR_FREEMODE, &r, &g, &b, &a);
						break;
				}
			
				func_202("playerGangR", r);
				func_202("playerGangG", g);
				func_202("playerGangB", b);
			}
		
			if (!STREAMING::IS_MODEL_A_VEHICLE(model))
			{
				func_202("carModel", PV_COMP_INVALID);
				func_202("carUnlocked", PV_COMP_HEAD);
			}
			else
			{
				func_202("carModel", model);
			}
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (model.f_39)
				{
					case 0:
						if (VEHICLE::IS_THIS_MODEL_A_CAR(model))
							func_473("carType", "car");
						else
							func_473("carType", "bike");
						break;
				
					case 1:
						func_473("carType", "sport");
						break;
				
					case 2:
						func_473("carType", "suv");
						break;
				
					case 3:
						func_473("carType", "special");
						break;
				}
			}
			else
			{
				num3 = func_208(model);
			
				switch (num3)
				{
					case 0:
						func_473("carType", "car");
						break;
				
					case 1:
						func_473("carType", "sport");
						break;
				
					case 2:
						func_473("carType", "suv");
						break;
				
					case 3:
						func_473("carType", "special");
						break;
				
					case 4:
						func_473("carType", "bike");
						break;
				
					case 5:
						func_473("carType", "special");
						break;
				
					case 6:
						func_473("carType", "car");
						break;
				
					case 7:
						func_473("carType", "special");
						break;
				
					case 10:
						func_473("carType", "special");
						break;
				
					case 11:
						func_473("carType", "car");
						break;
				
					case 28:
						func_473("carType", "car");
						break;
				
					case 26:
						func_473("carType", "special");
						break;
				
					case 27:
						func_473("carType", "special");
						break;
				
					case 29:
						func_473("carType", "special");
						break;
				
					case 30:
						func_473("carType", "special");
						break;
				
					case 31:
						func_473("carType", "special");
						break;
				
					case 32:
						func_473("carType", "special");
						break;
				
					default:
						func_473("carType", "special");
						break;
				}
			}
		
			func_202("carColour1", model.f_1);
			func_202("carColour2", model.f_2);
			func_202("windowTint", model.f_3);
			func_202("bulletProofTyres", func_207(model.f_16));
			func_202("carEngine", model.f_7);
			func_202("carBrakes", model.f_8);
			func_202("carExhaust", model.f_11);
			func_202("carWheel", model.f_9);
			func_202("tyreSmokeColourRed", model.f_4);
			func_202("tyreSmokeColourGreen", model.f_5);
			func_202("tyreSmokeColourBlue", model.f_6);
			func_202("carHorn", model.f_14);
			func_202("carArmour", model.f_13);
			func_202("carTurbo", model.f_17);
			func_202("carSuspension", model.f_12);
			func_202("carXenonLights", model.f_15);
			func_202("tyreSmoke", model.f_18);
			func_202("tyreSmoke", model.f_18);
			func_202("carWheelType", model.f_10);
			func_202("carEngineCount", model.f_24);
			func_202("carBrakesCount", model.f_25);
			func_202("carExhaustCount", model.f_26);
			func_202("carWheelCount", model.f_27);
			func_202("carHornCount", model.f_28);
			func_202("carArmourCount", model.f_29);
			func_202("carSuspensionCount", model.f_30);
			func_202("carHorn1", model.f_33[0]);
			func_202("carHorn2", model.f_33[1]);
			func_202("carHorn3", model.f_33[2]);
			func_202("carHorn4", model.f_33[3]);
			func_202("carHorn5", model.f_33[4]);
			func_472("carPriceModifier", model.f_31);
		
			if (!IS_BIT_SET(model.f_32, 0) || model == joaat("sovereign"))
				func_202("carColour1Unlocked", PV_COMP_HEAD);
			else
				func_202("carColour1Unlocked", PV_COMP_BERD);
		
			if (!IS_BIT_SET(model.f_32, 1) || model == joaat("sovereign"))
				func_202("carColour2Unlocked", PV_COMP_HEAD);
			else
				func_202("carColour2Unlocked", PV_COMP_BERD);
		
			address = PV_COMP_HEAD;
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || IS_BIT_SET(Global_1586521[iLocal_75 /*142*/].f_103, 17))
				MISC::SET_BIT(&address, 0);
		
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || IS_BIT_SET(Global_1586521[iLocal_75 /*142*/].f_103, 18))
				MISC::SET_BIT(&address, 1);
		
			func_202("newItemUnlocks", address);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			APP::APP_CLOSE_BLOCK();
	
		APP::APP_CLOSE_BLOCK();
		uLocal_90 = { blockName };
		uLocal_96 = { blockName3 };
		epctLocal_89 = model;
		bLocal_87 = true;
		APP::APP_SET_BLOCK("plate");
		func_202("carPlateBack", model.f_23);
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
		model.f_40 = 0;
		bLocal_104 = true;
		SYSTEM::SETTIMERA(0);
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Global_113969.f_20121.f_277[echParam0] = true;
		}
		else
		{
			if (hash2 == 0)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_0"), true);
			else if (hash2 == 1)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_1"), true);
			else if (hash2 == 2)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_2"), true);
			else if (hash2 == 3)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_3"), true);
			else if (hash2 == 4)
				_MPPLY_STAT_SET_BOOL(joaat("MPPLY_CARAPP_DATA_SENT_4"), true);
		
			Global_2359296[func_195() /*5570*/].f_593.f_41[hLocal_73] = false;
		}
	}

	switch (echParam0)
	{
		case CHAR_MICHAEL:
		case CHAR_FRANKLIN:
		case CHAR_TREVOR:
			Global_113969.f_20121[echParam0 /*43*/] = { model };
			Global_113969.f_20121.f_130[echParam0 /*41*/] = { modelHash };
			break;
	
		case CHAR_MULTIPLAYER:
			func_206(&model);
			Global_2359296[func_195() /*5570*/].f_593 = { modelHash };
			break;
	}

	return;
}

void func_206(var uParam0) // Position - 0x90CE Hash - 0x9E82EE0F ^0x7107C8BD
{
	if (uParam0->f_40)
		MISC::SET_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 25);
	else
		MISC::CLEAR_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 25);

	if (uParam0->f_41)
		MISC::SET_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 26);
	else
		MISC::CLEAR_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 26);

	return;
}

ePedComponentType func_207(BOOL bParam0) // Position - 0x912A Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return PV_COMP_BERD;

	return PV_COMP_HEAD;
}

int func_208(ePedComponentType epctParam0) // Position - 0x913C Hash - 0x98FCF995 ^0x98FCF995
{
	switch (epctParam0)
	{
		case joaat("virgo2"):
			return 10;
	
		case joaat("slamvan3"):
			return 11;
	}

	switch (epctParam0)
	{
		case joaat("sultanrs"):
			return 6;
	
		case joaat("banshee2"):
			return 7;
	}

	switch (epctParam0)
	{
		case joaat("btype3"):
			return 5;
	}

	switch (epctParam0)
	{
		case joaat("faction3"):
			return 3;
	
		case joaat("minivan2"):
			return 0;
	
		case joaat("sabregt2"):
			return 0;
	
		case joaat("slamvan3"):
			return 0;
	
		case joaat("tornado5"):
			return 0;
	
		case joaat("virgo2"):
			return 3;
	
		case joaat("virgo3"):
			return 3;
	}

	switch (epctParam0)
	{
		case joaat("fcr"):
			return 0;
	
		case joaat("diablous"):
			return 0;
	
		case joaat("diablous2"):
			return 28;
	
		case joaat("fcr2"):
			return 28;
	
		case joaat("italigtb"):
			return 3;
	
		case joaat("specter"):
			return 3;
	
		case joaat("nero"):
			return 3;
	
		case joaat("italigtb2"):
			return 27;
	
		case joaat("specter2"):
			return 27;
	
		case joaat("nero2"):
			return 27;
	
		case joaat("comet3"):
			return 26;
	
		case joaat("elegy"):
			return 26;
	
		case joaat("youga3"):
			return 27;
	
		case joaat("gauntlet5"):
			return 27;
	
		case joaat("manana2"):
			return 27;
	
		case joaat("peyote3"):
			return 27;
	
		case joaat("yosemite3"):
			return 27;
	
		case joaat("glendale2"):
			return 27;
	}

	switch (epctParam0)
	{
		case joaat("apc"):
			return 29;
	
		case joaat("halftrack"):
			return 29;
	
		case joaat("trailersmall2"):
			return 29;
	
		case joaat("deluxo"):
			return 29;
	
		case joaat("stromberg"):
			return 29;
	
		case joaat("caracara"):
			return 29;
	
		case joaat("dune3"):
			return 30;
	
		case joaat("insurgent3"):
			return 30;
	
		case joaat("tampa3"):
			return 30;
	
		case joaat("technical3"):
			return 30;
	
		case joaat("oppressor"):
			return 31;
	
		case joaat("oppressor2"):
			return 31;
	
		case joaat("phantom3"):
			return 32;
	
		case joaat("hauler2"):
			return 32;
	
		case joaat("trailerlarge"):
			return 32;
	
		case joaat("barrage"):
			return 35;
	
		case joaat("mule4"):
			return 37;
	
		case joaat("speedo4"):
		case joaat("speedo5"):
			return 36;
	
		case joaat("pounder2"):
			return 36;
	
		case joaat("rcbandito"):
			return 39;
	
		case joaat("minitank"):
			return 36;
	
		case joaat("jb7002"):
			return 36;
	}

	if (func_213(epctParam0))
		return 33;
	else if (func_212(epctParam0))
		return 34;
	else if (func_211(epctParam0))
		return 38;

	switch (epctParam0)
	{
		case joaat("vigilante"):
			return 31;
	}

	if (func_210(epctParam0) || epctParam0 == -1576586413)
		return 38;

	if (func_209(epctParam0))
		return 3;

	if (VEHICLE::IS_THIS_MODEL_A_BIKE(epctParam0))
		return 4;

	switch (epctParam0)
	{
		case joaat("adder"):
			return 3;
	
		case joaat("airbus"):
			return 0;
	
		case joaat("akuma"):
			return 4;
	
		case joaat("alpha"):
			return 3;
	
		case joaat("annihilator"):
			return 0;
	
		case joaat("asea"):
			return 0;
	
		case joaat("asterope"):
			return 0;
	
		case joaat("baller2"):
			return 2;
	
		case joaat("banshee"):
			return 3;
	
		case joaat("barracks"):
			return 0;
	
		case joaat("bati"):
			return 4;
	
		case joaat("bati2"):
			return 4;
	
		case joaat("besra"):
			return 0;
	
		case joaat("bfinjection"):
			return 0;
	
		case joaat("bifta"):
			return 0;
	
		case joaat("bison"):
			return 2;
	
		case joaat("blade"):
			return 3;
	
		case joaat("blazer"):
			return 0;
	
		case joaat("blazer3"):
			return 0;
	
		case joaat("bmx"):
			return 0;
	
		case joaat("bobcatxl"):
			return 2;
	
		case joaat("bodhi2"):
			return 0;
	
		case joaat("btype"):
			return 0;
	
		case joaat("buffalo"):
			return 0;
	
		case joaat("buffalo2"):
			return 1;
	
		case joaat("bullet"):
			return 3;
	
		case joaat("bus"):
			return 0;
	
		case joaat("buzzard"):
			return 0;
	
		case joaat("carbonizzare"):
			return 3;
	
		case joaat("carbonrs"):
			return 3;
	
		case joaat("cavalcade"):
			return 2;
	
		case joaat("cavalcade2"):
			return 2;
	
		case joaat("cheetah"):
			return 3;
	
		case joaat("coach"):
			return 0;
	
		case joaat("cogcabrio"):
			return 3;
	
		case joaat("comet2"):
			return 3;
	
		case joaat("coquette"):
			return 3;
	
		case joaat("coquette2"):
			return 1;
	
		case joaat("cruiser"):
			return 0;
	
		case joaat("crusader"):
			return 0;
	
		case joaat("cuban800"):
			return 0;
	
		case joaat("dilettante"):
			return 0;
	
		case joaat("dilettante2"):
			return 0;
	
		case joaat("dominator"):
			return 1;
	
		case joaat("dominator2"):
			return 1;
	
		case joaat("double"):
			return 4;
	
		case joaat("dubsta3"):
			return 3;
	
		case joaat("dump"):
			return 0;
	
		case joaat("dune"):
			return 0;
	
		case joaat("duster"):
			return 0;
	
		case joaat("elegy2"):
			return 3;
	
		case joaat("entityxf"):
			return 3;
	
		case joaat("exemplar"):
			return 3;
	
		case joaat("f620"):
			return 1;
	
		case joaat("faggio2"):
			return 4;
	
		case joaat("felon"):
			return 0;
	
		case joaat("felon2"):
			return 0;
	
		case joaat("feltzer2"):
			return 3;
	
		case joaat("frogger"):
			return 0;
	
		case joaat("frogger2"):
			return 0;
	
		case joaat("fugitive"):
			return 0;
	
		case joaat("fusilade"):
			return 1;
	
		case joaat("gauntlet"):
			return 0;
	
		case joaat("gauntlet2"):
			return 0;
	
		case joaat("glendale"):
			return 3;
	
		case joaat("granger"):
			return 2;
	
		case joaat("gresley"):
			return 2;
	
		case joaat("hexer"):
			return 4;
	
		case joaat("hotknife"):
			return 3;
	
		case joaat("huntley"):
			return 1;
	
		case joaat("hydra"):
			return 0;
	
		case joaat("infernus"):
			return 3;
	
		case joaat("ingot"):
			return 0;
	
		case joaat("intruder"):
			return 0;
	
		case joaat("issi2"):
			return 0;
	
		case joaat("jackal"):
			return 1;
	
		case joaat("jb700"):
			return 3;
	
		case joaat("jester"):
			return 3;
	
		case joaat("jester2"):
			return 3;
	
		case joaat("jetmax"):
			return 0;
	
		case joaat("journey"):
			return 0;
	
		case joaat("kalahari"):
			return 0;
	
		case joaat("khamelion"):
			return 3;
	
		case joaat("landstalker"):
			return 2;
	
		case joaat("luxor"):
			return 0;
	
		case joaat("mammatus"):
			return 0;
	
		case joaat("marquis"):
			return 0;
	
		case joaat("massacro"):
			return 3;
	
		case joaat("massacro2"):
			return 3;
	
		case joaat("maverick"):
			return 0;
	
		case joaat("mesa"):
			return 2;
	
		case joaat("mesa2"):
			return 2;
	
		case joaat("mesa3"):
			return 2;
	
		case joaat("miljet"):
			return 0;
	
		case joaat("minivan"):
			return 0;
	
		case joaat("monroe"):
			return 3;
	
		case joaat("monster"):
			return 0;
	
		case joaat("mule"):
			return 0;
	
		case joaat("mule2"):
			return 0;
	
		case joaat("mule3"):
			return 0;
	}

	switch (epctParam0)
	{
		case joaat("nemesis"):
			return 4;
	
		case joaat("ninef"):
			return 3;
	
		case joaat("ninef2"):
			return 3;
	
		case joaat("oracle"):
			return 1;
	
		case joaat("oracle2"):
			return 1;
	
		case joaat("panto"):
			return 3;
	
		case joaat("paradise"):
			return 0;
	
		case joaat("pcj"):
			return 4;
	
		case joaat("penumbra"):
			return 1;
	
		case joaat("picador"):
			return 0;
	
		case joaat("pigalle"):
			return 3;
	
		case joaat("premier"):
			return 0;
	
		case joaat("primo"):
			return 0;
	
		case joaat("radi"):
			return 0;
	
		case joaat("rancherxl"):
			return 2;
	
		case joaat("rancherxl2"):
			return 2;
	
		case joaat("rapidgt"):
			return 3;
	
		case joaat("ratloader"):
			return 2;
	
		case joaat("ratloader2"):
			return 2;
	
		case joaat("rebel"):
			return 2;
	
		case joaat("rebel2"):
			return 2;
	
		case joaat("regina"):
			return 0;
	
		case joaat("rentalbus"):
			return 0;
	
		case joaat("rhapsody"):
			return 3;
	
		case joaat("rhino"):
			return 0;
	
		case joaat("rocoto"):
			return 2;
	
		case joaat("ruffian"):
			return 4;
	
		case joaat("rumpo"):
			return 0;
	
		case joaat("sadler"):
			return 2;
	
		case joaat("sanchez"):
			return 4;
	
		case joaat("sanchez2"):
			return 4;
	
		case joaat("sandking"):
			return 2;
	
		case joaat("sandking2"):
			return 2;
	
		case joaat("schafter2"):
			return 1;
	
		case joaat("schwarzer"):
			return 1;
	
		case joaat("scorcher"):
			return 0;
	
		case joaat("seashark"):
			return 0;
	
		case joaat("seminole"):
			return 2;
	
		case joaat("sentinel"):
			return 1;
	
		case joaat("sentinel2"):
			return 1;
	
		case joaat("shamal"):
			return 0;
	
		case joaat("sovereign"):
			return 4;
	
		case joaat("speeder"):
			return 0;
	
		case joaat("squalo"):
			return 0;
	
		case joaat("stanier"):
			return 0;
	
		case joaat("stinger"):
			return 3;
	
		case joaat("stingergt"):
			return 3;
	
		case joaat("stratum"):
			return 0;
	
		case joaat("stretch"):
			return 0;
	
		case joaat("stunt"):
			return 0;
	
		case joaat("suntrap"):
			return 0;
	
		case joaat("superd"):
			return 3;
	
		case joaat("surano"):
			return 3;
	
		case joaat("surfer"):
			return 0;
	
		case joaat("surge"):
			return 0;
	
		case joaat("tailgater"):
			return 0;
	
		case joaat("thrust"):
			return 4;
	
		case joaat("titan"):
			return 0;
	
		case joaat("tribike"):
			return 4;
	
		case joaat("tribike2"):
			return 4;
	
		case joaat("tribike3"):
			return 4;
	
		case joaat("tropic"):
			return 0;
	
		case joaat("turismor"):
			return 3;
	
		case joaat("vacca"):
			return 3;
	
		case joaat("vader"):
			return 4;
	
		case joaat("valkyrie"):
			return 0;
	
		case joaat("velum"):
			return 0;
	
		case joaat("vestra"):
			return 0;
	
		case joaat("vigero"):
			return 1;
	
		case joaat("voltic"):
			return 3;
	
		case joaat("warrener"):
			return 3;
	
		case joaat("washington"):
			return 0;
	
		case joaat("youga"):
			return 2;
	
		case joaat("zentorno"):
			return 3;
	
		case joaat("zion"):
			return 1;
	
		case joaat("zion2"):
			return 1;
	
		case joaat("ztype"):
			return 3;
	
		case joaat("swift"):
			return 0;
	
		case joaat("innovation"):
			return 4;
	
		case joaat("hakuchou"):
			return 4;
	
		case joaat("furoregt"):
			return 0;
	
		case joaat("kuruma"):
			return 3;
	
		case joaat("blista2"):
			return 0;
	
		case joaat("blista3"):
			return 0;
	
		case joaat("buffalo3"):
			return 1;
	
		case joaat("dodo"):
			return 0;
	
		case joaat("dominator"):
			return 1;
	
		case joaat("dominator2"):
			return 1;
	
		case joaat("dukes"):
			return 1;
	
		case joaat("dukes2"):
			return 0;
	
		case joaat("marshall"):
			return 0;
	
		case joaat("stalion"):
			return 0;
	
		case joaat("stalion2"):
			return 0;
	
		case joaat("submersible"):
			return 0;
	
		case joaat("submersible2"):
			return 0;
	}

	switch (epctParam0)
	{
		case joaat("bagger"):
			return 4;
	
		case joaat("baller"):
			return 2;
	
		case joaat("bjxl"):
			return 2;
	
		case joaat("blista"):
			return 0;
	
		case joaat("blista2"):
			return 0;
	
		case joaat("buccaneer"):
			return 0;
	
		case joaat("daemon"):
			return 4;
	
		case joaat("dloader"):
			return 0;
	
		case joaat("fq2"):
			return 0;
	
		case joaat("habanero"):
			return 0;
	
		case joaat("manana"):
			return 0;
	
		case joaat("patriot"):
			return 2;
	
		case joaat("peyote"):
			return 0;
	
		case joaat("phoenix"):
			return 0;
	
		case joaat("prairie"):
			return 0;
	
		case joaat("sabregt"):
			return 0;
	
		case joaat("serrano"):
			return 2;
	
		case joaat("speedo"):
			return 0;
	
		case joaat("speedo2"):
			return 0;
	
		case joaat("voodoo2"):
			return 0;
	
		case joaat("romero"):
			return 0;
	
		case joaat("surfer2"):
			return 0;
	
		case joaat("emperor2"):
			return 0;
	
		case joaat("dubsta2"):
			return 2;
	
		case joaat("blazer2"):
			return 0;
	
		case joaat("oracle2"):
			return 1;
	
		case joaat("cavalcade2"):
			return 2;
	
		case joaat("dubsta"):
			return 2;
	
		case joaat("rapidgt2"):
			return 1;
	
		case joaat("boxville4"):
			return 0;
	
		case joaat("mesa"):
			return 2;
	}

	switch (epctParam0)
	{
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
	
		case joaat("contender"):
			return 2;
	}

	return 0;
}

BOOL func_209(ePedComponentType epctParam0) // Position - 0xA07B Hash - 0xD2F3F42B ^0xD2F3F42B
{
	switch (epctParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return true;
	
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return true;
	
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return true;
	
		case joaat("faction3"):
		case joaat("virgo2"):
			return true;
	
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return true;
	
		case joaat("tampa"):
			return true;
	
		case joaat("banshee2"):
			return true;
	
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return true;
	
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return true;
	
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return true;
	
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return true;
	
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return true;
	
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return true;
	
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return true;
	
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return true;
	}

	switch (epctParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return true;
	}

	switch (epctParam0)
	{
		case joaat("yosemite2"):
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("vectre"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return true;
	}

	switch (epctParam0)
	{
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("conada"):
		case joaat("omnisegt"):
		case -1249788006:
		case -1035489563:
		case -1627077503:
		case 1748565021:
		case 2100457220:
		case 996383885:
		case -131348178:
		case 268758436:
		case 1550581940:
		case -1933242328:
		case -461850249:
		case 1336514315:
		case -654498607:
		case -979292575:
		case -1763675285:
		case -536105557:
		case joaat("turismo3"):
		case -1479935577:
		case -1681653521:
		case -1696319096:
		case joaat("driftremus"):
		case joaat("drifteuros"):
		case joaat("driftfuto"):
		case joaat("driftjester"):
		case joaat("driftzr350"):
		case -465825307:
		case -441209695:
		case -1233767450:
		case -1029730482:
		case -478639183:
		case joaat("Police5"):
		case joaat("police4"):
		case 372621319:
		case -741120335:
		case joaat("baller8"):
		case -768044142:
		case -178442374:
		case -1372798934:
		case joaat("riot"):
		case 728350375:
		case -842765535:
		case -1240172147:
		case -143587026:
		case 1690421418:
		case 258105345:
		case 1249425552:
		case 1452003510:
		case -986656474:
		case 1737348074:
		case 1307736079:
		case -223461503:
		case 1121330119:
		case -1628000569:
		case -946047670:
		case 1579902654:
		case -773802025:
		case 1968807591:
		case -1896488056:
		case -1958428933:
		case -999594302:
		case 1881415402:
			return true;
	}

	return false;
}

BOOL func_210(ePedComponentType epctParam0) // Position - 0xAEDA Hash - 0xE48228D0 ^0xE48228D0
{
	switch (epctParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case 669204833:
		case 1076201208:
		case 1447690049:
		case 165968051:
		case joaat("coureur"):
		case joaat("monstrociti"):
		case -38879449:
		case joaat("turismo3"):
		case joaat("baller8"):
		case 167522317:
		case 1121330119:
		case -946047670:
			return true;
	}

	return false;
}

BOOL func_211(ePedComponentType epctParam0) // Position - 0xAF69 Hash - 0x5000025C ^0x5000025C
{
	switch (epctParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_212(ePedComponentType epctParam0) // Position - 0xB055 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (epctParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case -1659004814:
		case joaat("streamer216"):
		case 239897677:
			return true;
	}

	return false;
}

BOOL func_213(ePedComponentType epctParam0) // Position - 0xB0AE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (epctParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
		case joaat("avenger3"):
			return true;
	}

	return false;
}

ePedComponentType func_214(Player plParam0) // Position - 0xB143 Hash - 0x7E91FE3E ^0x7E91FE3E
{
	ePedComponentType type;

	type = func_137(plParam0);

	if (type < PV_COMP_HEAD)
		return PV_COMP_HEAD;

	return func_134(type, 0);
}

int func_215(var uParam0) // Position - 0xB164 Hash - 0x5F2F50D6 ^0xFDA878E8
{
	int num;

	num = func_216(uParam0);
	return (uParam0->f_9 % num) + (iLocal_154 * num);
}

int func_216(var uParam0) // Position - 0xB181 Hash - 0xC75D148A ^0x1C16CDC7
{
	switch (uParam0->f_10)
	{
		case 8:
			return 31;
	
		case 9:
			return 31;
	
		case 10:
			if (func_217(*uParam0))
				return 20;
			break;
	
		case 11:
			return 30;
	
		case 12:
			return 30;
	}

	return uParam0->f_27 - 1;
}

BOOL func_217(Hash hParam0) // Position - 0xB1E8 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_218(ePedComponentType epctParam0, int iParam1) // Position - 0xB214 Hash - 0xFE274898 ^0xFE274898
{
	switch (epctParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
	
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
				return false;
			else
				return true;
			break;
	
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
				return false;
			else
				return true;
			break;
	
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
				return false;
			else
				return true;
			break;
	
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
				return false;
			else
				return true;
			break;
	
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
				return false;
			else
				return true;
			break;
	
		case joaat("faction3"):
			if (!Global_262145.f_14704)
				return false;
			else
				return true;
			break;
	
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return true;
	}

	return false;
}

BOOL func_219(int iParam0) // Position - 0xB5F3 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return true;
	}

	return false;
}

BOOL func_220(ePedComponentType epctParam0) // Position - 0xB63A Hash - 0xDCB1A35 ^0xDF3DD2BA
{
	if (epctParam0 == PV_COMP_HEAD)
		return false;

	switch (epctParam0)
	{
		case joaat("police"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("riot"):
		case joaat("sheriff"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("firetruk"):
		case joaat("taxi"):
		case joaat("lguard"):
		case joaat("ripley"):
		case joaat("dilettante2"):
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("burrito"):
		case joaat("rumpo2"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("scorcher"):
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("fixter"):
		case joaat("caddy"):
		case joaat("forklift"):
		case joaat("caddy2"):
		case joaat("crusader"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("mower"):
		case joaat("tornado4"):
		case joaat("docktug"):
		case joaat("stretch"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("benson"):
		case joaat("pounder"):
		case joaat("submersible"):
		case joaat("monster"):
		case joaat("technical"):
		case joaat("phantom2"):
		case joaat("wastelander"):
		case joaat("boxville5"):
		case joaat("terbyte"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("kosatka"):
		case joaat("deluxo"):
			return false;
	
		default:
			if (func_211(epctParam0))
				return false;
			break;
	}

	if (VEHICLE::IS_THIS_MODEL_A_HELI(epctParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(epctParam0))
		return false;

	return true;
}

BOOL func_221() // Position - 0xB7E6 Hash - 0xDDF841F0 ^0x2F3D530C
{
	int value;
	int value2;
	float num;

	if (MISC::IS_PC_VERSION())
		return false;

	if (func_165())
	{
		if (func_224())
		{
			value = func_223();
			value2 = func_222();
			num = (SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f;
		
			if (num > (float)Global_262145.f_127 && value >= 8)
				return true;
		}
	}

	return false;
}

int func_222() // Position - 0xB844 Hash - 0xD310CEAF ^0x459D5FAC
{
	int num;

	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_FRIENDLY"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_HELPFUL"));
	return num;
}

int func_223() // Position - 0xB86A Hash - 0x441B52F5 ^0xAB7EF48B
{
	int num;

	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_LANGUAGE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_GRIEFING"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_FRIENDLY"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_HELPFUL"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_UGC"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_OFFENSIVE_TAGPLATE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_EXPLOITS"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_VC_ANNOYINGME"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_VC_HATE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_NAME"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_MOTTO"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_STATUS"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_BAD_CREW_EMBLEM"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_PLAYERMADE_TITLE"));
	num = num + _MPPLY_STAT_GET_INT(joaat("MPPLY_PLAYERMADE_DESC"));
	return num;
}

BOOL func_224() // Position - 0xB946 Hash - 0x6C4FB78D ^0x39683114
{
	var year;
	var unk7;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	unk7 = { func_248(joaat("MPPLY_STARTED_MP")) };

	if (func_225(unk7, year, 7))
		return true;

	return false;
}

BOOL func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0xB98A Hash - 0xF565A5F5 ^0x5E3CCA4C
{
	int num;
	int num2;

	num = func_246(uParam7);
	num2 = func_236(uParam0, iParam14);

	if (num2 == -15)
		return false;

	if (func_226(num, num2) == 1)
		return true;

	return false;
}

int func_226(int iParam0, int iParam1) // Position - 0xB9C5 Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_234(iParam1) || !func_234(iParam0))
		return 1;

	num = func_232(iParam0);
	num2 = func_232(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_231(iParam0);
	num2 = func_231(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_230(iParam0);
	num2 = func_230(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_229(iParam0);
	num2 = func_229(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_228(iParam0);
	num2 = func_228(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_227(iParam0);
	num2 = func_227(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_227(int iParam0) // Position - 0xBAD1 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_228(int iParam0) // Position - 0xBAE4 Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_229(int iParam0) // Position - 0xBAF7 Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_230(int iParam0) // Position - 0xBB0A Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_231(int iParam0) // Position - 0xBB1C Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

int func_232(int iParam0) // Position - 0xBB29 Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_233(BOOL bParam0, var uParam1, var uParam2) // Position - 0xBB4B Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_234(int iParam0) // Position - 0xBB62 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_227(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_228(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_229(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_232(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_231(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_230(iParam0);

	if (num6 < 1 || num6 > func_235(num5, num4))
		return false;

	return true;
}

int func_235(int iParam0, int iParam1) // Position - 0xBC3E Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xBCE0 Hash - 0xF2723682 ^0xF2723682
{
	var unk;
	var unk2;
	var unk3;

	if (func_245(uParam0) == 0)
	{
		unk = func_246(uParam0);
		unk2 = unk;
		func_237(&unk2, 0, 0, 0, iParam7, 0, 0);
	
		if (iParam7 == 0)
			unk2 = unk;
	
		return unk2;
	}

	return unk3;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xBD20 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_232(*uParam0);
	i = func_231(*uParam0);
	num2 = func_230(*uParam0);
	j = func_229(*uParam0);
	k = func_228(*uParam0);
	l = func_227(*uParam0);

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

	for (m = func_235(i, num); num2 > m; m = func_235(i, num))
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
	func_238(uParam0, l, k, j, num2, i, num);
	return;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xBEA2 Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_244(uParam0, iParam1);
	func_243(uParam0, iParam2);
	func_242(uParam0, iParam3);
	func_241(uParam0, iParam5);
	func_240(uParam0, iParam4);
	func_239(uParam0, iParam6);
	return;
}

void func_239(var uParam0, int iParam1) // Position - 0xBEDA Hash - 0x15B9927E ^0x4A4674
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

void func_240(var uParam0, int iParam1) // Position - 0xBF60 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_231(*uParam0);
	num2 = func_232(*uParam0);

	if (iParam1 < 1 || iParam1 > func_235(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_241(var uParam0, int iParam1) // Position - 0xBFB1 Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_242(var uParam0, int iParam1) // Position - 0xBFE4 Hash - 0xA6098A95 ^0x7B843D2A
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_243(var uParam0, int iParam1) // Position - 0xC020 Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_244(var uParam0, int iParam1) // Position - 0xC05B Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC097 Hash - 0xF9EEC617 ^0x2258CCF1
{
	if (iParam0 == 0 && iParam0.f_1 == 0 && iParam0.f_2 == 0 && iParam0.f_3 == 0 && iParam0.f_4 == 0 && iParam0.f_5 == 0 && iParam0.f_6 == 0)
		return 1;

	return 0;
}

var func_246(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC0ED Hash - 0x9F6F37DE ^0x78F6B3C5
{
	var unk;

	if (iParam0 > 0)
		func_239(&unk, iParam0);

	if (iParam0.f_1 > 0)
		func_241(&unk, func_247(iParam0.f_1));

	if (iParam0.f_2 > 0)
		func_240(&unk, iParam0.f_2);

	if (iParam0.f_3 > 0)
		func_242(&unk, iParam0.f_3);

	if (iParam0.f_4 > 0)
		func_243(&unk, iParam0.f_4);

	if (iParam0.f_5 > 0)
		func_244(&unk, iParam0.f_5);

	return unk;
}

int func_247(int iParam0) // Position - 0xC163 Hash - 0x8F784873 ^0x8F784873
{
	if (iParam0 < 1)
		return 0;

	if (iParam0 > 12)
		return 0;

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
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	}

	return 0;
}

struct<7> func_248(Hash hParam0) // Position - 0xC228 Hash - 0x2D2D830D ^0x8EF20162
{
	Hash statHash;
	var unk;
	var outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_DATE(statHash, &outValue, 7, -1))
		return outValue;

	return unk;
}

Hash func_249() // Position - 0xC24C Hash - 0xB5F2236D ^0x55A2CA3A
{
	var address;
	int i;

	for (i = 0; i < 32; i = i + 1)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_250(var uParam0) // Position - 0xC27B Hash - 0x1FA2F988 ^0x9DDAFC87
{
	Vehicle vehicle;

	if (!func_220(*uParam0))
		return true;

	if (bLocal_156)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_155)) < 1500)
			return false;

	bLocal_156 = false;
	STREAMING::REQUEST_MODEL(*uParam0);

	if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		return false;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		vehicle = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f + (float)PLAYER::PLAYER_ID() * 10, 4977.6084f, 1222.0242f, 0f, false, false, false);
	else
		vehicle = VEHICLE::CREATE_VEHICLE(*uParam0, 660.3092f, 4977.6084f, 1222.0242f, 0f, false, false, false);

	if (VEHICLE::GET_NUM_MOD_KITS(vehicle) > 0)
		VEHICLE::SET_VEHICLE_MOD_KIT(vehicle, 0);

	VEHICLE::SET_VEHICLE_WHEEL_TYPE(vehicle, Global_1586521[iLocal_75 /*142*/].f_69);
	uParam0->f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(vehicle);
	uParam0->f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(vehicle, 14, 0);
	uParam0->f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(vehicle, 14, 1);
	uParam0->f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(vehicle, 14, 2);
	uParam0->f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(vehicle, 14, 3);
	uParam0->f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 11) + 1;
	uParam0->f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 12) + 1;
	uParam0->f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 4) + 1;
	uParam0->f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 14) + 1;
	uParam0->f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 16) + 1;
	uParam0->f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 15) + 1;
	uParam0->f_31 = func_251(vehicle);
	uParam0->f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(vehicle);
	uParam0->f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(vehicle);
	uParam0->f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(vehicle, 23) + 1;
	iLocal_154 = VEHICLE::GET_VEHICLE_MOD_VARIATION(vehicle, 23);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (*uParam0 == joaat("patriot"))
			uParam0->f_26 = 0;
	
		if (*uParam0 == joaat("prairie"))
			if (uParam0->f_26 > 1)
				uParam0->f_26 = 1;
	}

	VEHICLE::DELETE_VEHICLE(&vehicle);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam0);
	bLocal_156 = true;
	iLocal_155 = NETWORK::GET_NETWORK_TIME();
	SYSTEM::SETTIMERA(0);
	return true;
}

float func_251(Vehicle veParam0) // Position - 0xC455 Hash - 0xCD7B116B ^0x2AAA08A7
{
	int num;
	int num2;
	int num3;
	int num4;
	int value;
	int value2;
	float num5;

	num = 100000;
	num2 = 65000;
	num3 = 50000;
	num4 = 20000;
	value = 20000;
	value2 = value;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 3)
			value2 = num;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 1)
			value2 = num2;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 2)
			value2 = num3;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 0)
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				value2 = num4;
			else
				value2 = value;

	num5 = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value);
	return num5;
}

void func_252(int iParam0, int iParam1) // Position - 0xC505 Hash - 0xE9A65642 ^0xF9847A54
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

const char* func_253(char* sParam0) // Position - 0xC562 Hash - 0x6E01F166 ^0x5C36E138
{
	return APP::APP_GET_STRING(func_24(sParam0));
}

BOOL func_254(int iParam0, int iParam1) // Position - 0xC574 Hash - 0xEDDA30FA ^0x5CD64DD7
{
	int num;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	num = _MPPLY_STAT_GET_INT(-2022317060);

	switch (iParam0)
	{
		case 12:
			if (!Global_262145.f_29658 && !IS_BIT_SET(num, 0))
				return true;
			break;
	
		case 6:
			if (!Global_262145.f_29659 && !IS_BIT_SET(num, 1))
				return true;
			break;
	
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (iParam1 != iParam0)
				return true;
			break;
	}

	return false;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xC60B Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

int func_256(eCharacter echParam0, ePedComponentType epctParam1) // Position - 0xC633 Hash - 0xFDFD2515 ^0x6EAA1AFD
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98844[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98844[i], false))
			if (Global_98854[i] == echParam0)
				if (epctParam1 == 0 || epctParam1 == ENTITY::GET_ENTITY_MODEL(Global_98844[i]))
					num = num + 1;
	}

	return num;
}

BOOL func_257(ePedComponentType epctParam0) // Position - 0xC6A3 Hash - 0xB4A7C86A ^0xB4A7C86A
{
	return epctParam0 == PV_COMP_BERD;
}

ePedComponentType func_258(eCharacter echParam0, int iParam1) // Position - 0xC6AF Hash - 0x3C1119CD ^0x1010ECAE
{
	int num;

	if (func_259(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_475(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

BOOL func_259(eCharacter echParam0) // Position - 0xC6F1 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

BOOL func_260() // Position - 0xC6FD Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_261(int iParam0) // Position - 0xC70E Hash - 0xA85A6891 ^0xA85A6891
{
	return func_262(iParam0, 0, false);
}

BOOL func_262(int iParam0, int iParam1, BOOL bParam2) // Position - 0xC71E Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_101585.f_1414[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_85() == 0)
			return IS_BIT_SET(func_49(func_263(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_113969.f_668[iParam0], iParam1);

	return false;
}

int func_263(int iParam0) // Position - 0xC77E Hash - 0x28E83966 ^0x9E37924F
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

int func_264() // Position - 0xCB26 Hash - 0x9482CBBF ^0x8B17A994
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

BOOL func_265(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0xCB71 Hash - 0x8FEA9C14 ^0xBAFE3E0F
{
	int num;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
	
		case 1:
			sParam16 = "NULL";
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	MISC::CLEAR_BIT(&Global_8800, 10);
	num = 3;

	if (func_267(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9487 = echParam0;
			TEXT_LABEL_ASSIGN_STRING(&Global_9488, sParam5, 64);
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
	
		return 1;
	}

	return 0;
}

struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0xCC1D Hash - 0x5D6A4A13 ^0x32291975
{
	return Global_2169[character /*29*/].f_3;
}

int func_267(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0xCC30 Hash - 0x56140E21 ^0x6722A9E7
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
			if (Global_20930 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20930 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20930 == CHAR_FRANKLIN)
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
	
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == true)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
			return 0;
	}

	if (func_282() == 0)
	{
		func_280();
		return 0;
	}

	func_279(Global_23353);
	TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_14144[Global_23353 /*104*/], sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}

	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = iParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = iParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = iParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = iParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);

	if (IS_BIT_SET(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = true;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = true;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = true;
		Global_9506 = 4;
		func_278(0);
		func_278(2);
		func_278(1);
	}
	else
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = true;
				break;
		
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = true;
				break;
		
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = true;
				break;
		
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = true;
				break;
		}
	
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					func_278(0);
					Global_9506 = 0;
					break;
			
				case CHAR_FRANKLIN:
					func_278(1);
					Global_9506 = 1;
					break;
			
				case CHAR_TREVOR:
					func_278(2);
					Global_9506 = 2;
					break;
			
				case CHAR_MULTIPLAYER:
					func_278(3);
					Global_9506 = 3;
					break;
			
				default:
					Global_9506 = 4;
					break;
			}
		}
	}

	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
			
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
			
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
			
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
			}
		}
	}

	Global_23355[Global_23353] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20873)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_4())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
	}

	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_277(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_273(1);
			func_277(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1971482 != -1 && echParam0 == Global_1971482)
		num2 = 1;

	func_268(echParam0, sParam1, num2, func_272(PLAYER::PLAYER_ID()));
	return 1;
}

void func_268(eCharacter echParam0, char* sParam1, BOOL bParam2, ePedComponentType epctParam3) // Position - 0xD10B Hash - 0x8EDEEA2A ^0x9CE88A61
{
	eCharacter character;

	if (!func_269())
		return;

	character = echParam0;
	character.f_1 = 1654525105;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = epctParam3;
	character.f_6 = Global_1971465.f_7;
	character.f_7 = Global_1971465.f_8;
	character.f_8 = Global_1971465.f_9;
	character.f_9 = Global_1971465.f_10;
	character.f_10 = Global_1971465.f_11;
	character.f_11 = Global_1971465.f_12;
	character.f_12 = Global_1971465.f_13;
	character.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1971482 = -1;

	return;
}

BOOL func_269() // Position - 0xD1A6 Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_270(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_270(Player plParam0) // Position - 0xD209 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_271(plParam0, 20);
}

BOOL func_271(Player plParam0, int iParam1) // Position - 0xD219 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

ePedComponentType func_272(Player plParam0) // Position - 0xD231 Hash - 0xD56839EF ^0xE2816EA0
{
	return Global_1845281[plParam0 /*883*/].f_206.f_6;
}

void func_273(int iParam0) // Position - 0xD246 Hash - 0x19E6533E ^0xF46758E8
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

	Global_23354 = 0;
	Global_9405 = iParam0;
	func_276();

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
	
		if (func_477(14))
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == false)
						{
							Global_9333[i] = num;
						
							if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value = 42;
									Global_21149 = 1;
								}
								else
								{
									value = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						
							if (Global_2696167)
								if (num == 14)
									func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
						
							Global_9369[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
		else
		{
			while (num < 34)
			{
				if (iParam0 == Global_8807[num /*15*/].f_11)
				{
					if (i == Global_8807[num /*15*/].f_4)
					{
						if (Global_9369[i] == false)
						{
							Global_9333[i] = num;
						
							if (num == 1)
							{
								for (j = 0; j < 35; j = j + 1)
								{
									if (Global_113969.f_14144[j /*104*/].f_24 != 0)
										if (Global_113969.f_14144[j /*104*/].f_28 == 0)
											if (Global_113969.f_14144[j /*104*/].f_99[Global_20930] == true)
												Global_23354 = Global_23354 + 1;
								}
							
								func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 7)
							{
								if (Global_79389)
								{
									value2 = 0;
									value2 = Global_4541818;
								
									for (k = 0; k < 12; k = k + 1)
									{
										if (Global_4541819[k /*104*/].f_24 != 0)
											if (Global_4541819[k /*104*/].f_28 == 0)
												if (Global_4541819[k /*104*/].f_99[Global_20930] == true)
													value2 = value2 + 1;
									}
								
									func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case CHAR_MICHAEL:
											value3 = Global_45261;
											break;
									
										case CHAR_FRANKLIN:
											value3 = Global_45262;
											break;
									
										case CHAR_TREVOR:
											value3 = Global_45263;
											break;
									
										default:
											break;
									}
								
									func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
								}
							}
							else if (num == 14)
							{
								func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else if (num == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 2)
							{
								if (IS_BIT_SET(Global_8801, 6))
									value4 = 42;
								else
									value4 = 255;
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 3)
							{
								if (IS_BIT_SET(Global_8801, 3))
								{
									value5 = 42;
									Global_21149 = 1;
								}
								else
								{
									value5 = 255;
									Global_21149 = 0;
								}
							
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (num == 23 && MISC::ARE_STRINGS_EQUAL(&Global_8807[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[num /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_275(&Global_8807[num /*15*/]);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[num /*15*/].f_10 == 57 && num == 23)
							{
								value6 = 0;
								value6 = Global_1882108.f_1;
								func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
							else
							{
								func_274(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8807[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8807[num /*15*/], 0, 0, 0, 0);
							}
						
							Global_9369[i] = true;
						}
					}
				}
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_274(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0xD7C9 Hash - 0x39E054FF ^0x41D02682
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
		func_275(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_275(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_275(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_275(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_275(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_275(char* sParam0) // Position - 0xD87C Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_276() // Position - 0xD88E Hash - 0xA8B082D2 ^0xA8B082D2
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		Global_9369[i] = false;
	}

	return;
}

void func_277(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xD8B1 Hash - 0x5F496D0E ^0x86F8205
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

void func_278(int iParam0) // Position - 0xD914 Hash - 0x82B5D42C ^0xE58ED58A
{
	var unk;
	var unk2;

	unk = Global_113969.f_14054[iParam0 /*20*/].f_8;
	unk = unk;
	unk2 = unk2;
	return;
}

void func_279(int iParam0) // Position - 0xD933 Hash - 0x3B4AC1F3 ^0x87B359AA
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
	Global_113969.f_14144[iParam0 /*104*/].f_18 = clockSeconds;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = num;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_280() // Position - 0xD9C5 Hash - 0xC4D8B21 ^0xF60D6219
{
	int num;
	int num2;
	int num3;

	if (Global_79389)
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
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_281(Global_113969.f_14144[num3 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			Global_23353 = num3;
	
		num3 = num3 + 1;
	}

	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
	return;
}

BOOL func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0xDA90 Hash - 0x87F973EB ^0x688F177D
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

int func_282() // Position - 0xDB7B Hash - 0xC20166C6 ^0x2C188830
{
	int num;
	int num2;
	int i;

	if (Global_79389)
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
		if (Global_113969.f_14144[i /*104*/].f_24 == 0)
		{
			Global_23353 = i;
			return 1;
		}
	}

	i = num;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_113969.f_14144[i /*104*/].f_24 == 0 || Global_113969.f_14144[i /*104*/].f_24 == 1)
			if (!func_281(Global_113969.f_14144[i /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
				Global_23353 = i;
	
		Global_113969.f_14144[i /*104*/].f_24 == 2;
		i = i + 1;
	}

	if (Global_23353 == 34)
		return 0;

	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = false;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = false;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = false;
	return 1;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0xDCE3 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_477(14))
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

BOOL func_284(int iParam0) // Position - 0xDD85 Hash - 0xF3A009D0 ^0x1FDE09DC
{
	if (iParam0 == 0)
		return true;

	if (func_286(true))
		if (Global_79389)
			if (MONEY::NETWORK_CAN_SPEND_MONEY(iParam0, false, true, false, -1, 0))
				return true;
		else if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) >= iParam0)
			return true;

	return false;
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0xDDCD Hash - 0x263E14E9 ^0x46FE135B
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

BOOL func_286(BOOL bParam0) // Position - 0xDE25 Hash - 0x4B492B9 ^0x14282FF3
{
	if (Global_79389)
		return _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), bParam0, !func_287(true));

	return !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
}

BOOL func_287(BOOL bParam0) // Position - 0xDE53 Hash - 0x9F6065F5 ^0x8877B3CA
{
	if (bParam0)
		return Global_2684504.f_787.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2684504.f_787.f_31;

	return Global_2684504.f_787.f_28;
}

BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0xDE8F Hash - 0x2EDA5ECE ^0x16D5CF7
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	MISC::CLEAR_BIT(&Global_8800, 10);
	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_267(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { _GET_CHARACTER_NAME(echParam0) };
			Global_9487 = echParam0;
			MISC::SET_BIT(&Global_8800, 1);
			MISC::SET_BIT(&Global_8800, 7);
		}
	
		return 1;
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xDF1E Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_290();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_290() // Position - 0xDF37 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_259(character) && !func_477(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_259(Global_113969.f_2366.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xE034 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xE071 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_259(character))
		return func_293(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_293(eCharacter echParam0) // Position - 0xE096 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

void func_294(var uParam0, int iParam1) // Position - 0xE0A5 Hash - 0xA45FBAC4 ^0xC62AB3CA
{
	uParam0->f_36 = 0;
	uParam0->f_35 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2359296[func_195() /*5570*/].f_593.f_54 = 1;
		Global_2359296[func_195() /*5570*/].f_593.f_55 = 1;
		Global_2359296[func_195() /*5570*/].f_593.f_60 = uParam0->f_32;
		Global_2359296[func_195() /*5570*/].f_593.f_56 = { uParam0->f_28 };
		Global_2359296[func_195() /*5570*/].f_593.f_61 = Global_2359296[func_195() /*5570*/].f_593.f_61 + 1;
	}
	else
	{
		Global_113969.f_20121.f_265 = 1;
		Global_113969.f_20121.f_266 = iParam1;
		Global_113969.f_20121.f_261 = 1;
		Global_113969.f_20121.f_271 = uParam0->f_32;
		Global_113969.f_20121.f_267 = { uParam0->f_28 };
	
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2)
		{
			Global_113969.f_20121.f_281[iParam1] = true;
			Global_113969.f_20121.f_285[iParam1] = Global_113969.f_20121.f_285[iParam1] + 1;
			STATS::STAT_INCREMENT(joaat("SP_CAR_APP_ORDER_COUNT"), 1f);
		}
	}

	return;
}

char* func_295(int iParam0, int iParam1, BOOL bParam2) // Position - 0xE1C5 Hash - 0x6BC80F8B ^0x42F7E717
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM" /*Empty Shop*/;
	
		case 0:
			return "S_H_01" /*Bob Mulét Hair & Beauty*/;
	
		case 1:
			return "S_H_02" /*Herr Kutz Barber*/;
	
		case 2:
			return "S_H_03" /*Beachcombover Barbers*/;
	
		case 3:
			return "S_H_04" /*O'Sheas Barbers*/;
	
		case 4:
			return "S_H_05" /*Herr Kutz Barber*/;
	
		case 5:
			return "S_H_06" /*Hair On Hawick Barbers*/;
	
		case 6:
			return "S_H_07" /*Herr Kutz Barber*/;
	
		case 7:
			return "S_CL_01" /*Discount Store*/;
	
		case 8:
			return "S_CL_02" /*Discount Store*/;
	
		case 9:
			return "S_CL_03" /*Binco Clothing*/;
	
		case 10:
			return "S_CL_04" /*Discount Store*/;
	
		case 11:
			return "S_CL_05" /*Discount Store*/;
	
		case 12:
			return "S_CL_06" /*Binco Clothing*/;
	
		case 13:
			return "S_CL_07" /*Discount Store*/;
	
		case 14:
			return "S_CM_01" /*Suburban*/;
	
		case 15:
			return "S_CM_03" /*Suburban*/;
	
		case 16:
			return "S_CM_04" /*Suburban*/;
	
		case 17:
			return "S_CM_05" /*Suburban*/;
	
		case 18:
			return "S_CH_01" /*Ponsonbys*/;
	
		case 19:
			return "S_CH_02" /*Ponsonbys*/;
	
		case 20:
			return "S_CH_03" /*Ponsonbys*/;
	
		case 21:
			return "S_CA_01" /*Vespucci Movie Masks*/;
	
		case 22:
			return "S_T_01" /*Blazing Tattoo*/;
	
		case 23:
			return "S_T_02" /*Alamo Tattoo Studio*/;
	
		case 24:
			return "S_T_03" /*Paleto Tattoo Studio*/;
	
		case 25:
			return "S_T_04" /*The Pit*/;
	
		case 26:
			return "S_T_05" /*Los Santos Tattoos*/;
	
		case 27:
			return "S_T_06" /*Ink Inc Tattoos*/;
	
		case 28:
			return "S_G_01" /*Ammu-Nation*/;
	
		case 29:
			return "S_G_02" /*Ammu-Nation*/;
	
		case 30:
			return "S_G_03" /*Ammu-Nation*/;
	
		case 31:
			return "S_G_04" /*Ammu-Nation*/;
	
		case 32:
			return "S_G_05" /*Ammu-Nation*/;
	
		case 33:
			return "S_G_06" /*Ammu-Nation*/;
	
		case 34:
			return "S_G_07" /*Ammu-Nation*/;
	
		case 35:
			return "S_G_08" /*Ammu-Nation*/;
	
		case 36:
			return "S_G_09" /*Ammu-Nation*/;
	
		case 37:
			return "S_G_10" /*Ammu-Nation*/;
	
		case 38:
			return "S_G_11" /*Ammu-Nation*/;
	
		case 39:
			return "S_MO_01" /*Los Santos Customs*/;
	
		case 40:
			return "S_MO_05" /*Los Santos Customs*/;
	
		case 41:
			return "S_MO_06" /*Los Santos Customs*/;
	
		case 42:
			return "S_MO_07" /*Beeker's Garage*/;
	
		case 43:
			return "S_MO_08" /*Los Santos Customs*/;
	
		case 44:
			return "S_MO_09" /*Benny's Original Motor Works*/;
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return "S_MO_10" /*Custom Mod Shop*/;
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return "S_MO_B" /*Bunker Vehicle Workshop*/;
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return "S_MO_T" /*Weapon & Vehicle Workshop*/;
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return "S_MO_HA" /*Hangar Aircraft Workshop*/;
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return "S_MO_AOC" /*Vehicle Workshop*/;
					break;
			}
		
			return "S_MO_11" /*Custom Auto Shop*/;
	
		case 46:
			return "S_G_12" /*MOC Armory*/;
	
		case 47:
			return "S_G_13" /*Avenger Armory*/;
	
		case 48:
			return "S_G_14" /*Terrorbyte Armory*/;
	
		case 49:
			return "S_G_15" /*Arena Armory*/;
	
		case 52:
			return "S_G_16" /*Arcade Armory*/;
	
		case 53:
			return "S_G_17" /*Kosatka Armory*/;
	
		case 50:
			return "S_H_08" /*Penthouse Barber*/;
	
		case 51:
			return "S_CL_09" /*Casino Store*/;
	
		case 54:
			return "S_T_07" /*LS Car Meet Tattoos*/;
	
		case 55:
			return "S_CL_10" /*Merch Shop*/;
	
		case 56:
			return "S_G_18" /*Fixer Armory*/;
	
		case 57:
			return "S_CL_11" /*Record A Studios*/;
	
		case 58:
			return "S_G_19";
	
		case 59:
			return "S_G_20";
	
		case 60:
			return "S_G_21";
	}

	return "SHOP_NAME_EMPTY";
}

BOOL func_296(eCharacter echParam0, char* sParam1, const char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, const char* sParam6, BOOL bParam7, int iParam8) // Position - 0xE771 Hash - 0x6368857A ^0x6368857A
{
	var unk;
	int num;

	unk = 16;
	num = 2;

	if (bParam7)
		num = 5;

	return func_297(&unk, echParam0, func_372(), sParam1, num, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, PV_COMP_INVALID);
}

BOOL func_297(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, const char* sParam7, BOOL bParam8, int iParam9, const char* sParam10, const char* sParam11, ePedComponentType epctParam12) // Position - 0xE7AA Hash - 0x271FFDB4 ^0x6BAE3E05
{
	Hash hashKey;
	Hash hash;
	Hash hashKey2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		return false;

	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
		return false;

	hashKey = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	hash = func_371(sParam2, sParam3);
	hashKey2 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		hashKey2 = MISC::GET_HASH_KEY(sParam7);

	if (func_370(hashKey, hash, hashKey2))
		return true;

	if (!func_364(iParam6))
		return false;

	if (func_361(hashKey, hash, hashKey2))
	{
		if (func_360())
			return false;
	
		func_359();
		return func_304(uParam0, echParam1, epctParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}

	if (!func_303(iParam4))
		return false;

	func_298(hashKey, hash, hashKey2, sParam3, iParam4, iParam5, iParam6);
	return false;
}

void func_298(Hash hParam0, Hash hParam1, Hash hParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xE88F Hash - 0xE1AF224E ^0x3B5D9AD
{
	Global_1663588.f_40.f_1 = hParam0;
	Global_1663588.f_40.f_2 = hParam1;
	Global_1663588.f_40.f_3 = hParam2;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = iParam6;
	func_299(iParam4);
	func_359();
	Global_1663588.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
	return;
}

void func_299(int iParam0) // Position - 0xE8FC Hash - 0x9571876D ^0x9571876D
{
	if (func_302(iParam0))
	{
		func_301();
		return;
	}

	func_300();
	return;
}

void func_300() // Position - 0xE918 Hash - 0x3AA4899D ^0x12465727
{
	Global_1663588.f_40.f_10 = 0;
	return;
}

void func_301() // Position - 0xE929 Hash - 0xE3CE35BD ^0xF463D8B9
{
	Global_1663588.f_40.f_10 = 1;
	return;
}

BOOL func_302(int iParam0) // Position - 0xE93A Hash - 0x90A8253B ^0x90A8253B
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return true;
	
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_303(int iParam0) // Position - 0xE982 Hash - 0x73D363B3 ^0x5B9E98D9
{
	return iParam0 > Global_1663588.f_40.f_8;
}

BOOL func_304(var uParam0, eCharacter echParam1, ePedComponentType epctParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, const char* sParam8, BOOL bParam9, int iParam10, const char* sParam11, const char* sParam12) // Position - 0xE995 Hash - 0xB9E0AEEC ^0xF118669E
{
	var unk;

	func_358();

	if (iParam6 == 5)
		iParam6 = 0;

	if (iParam5 == 8)
		return func_355(uParam0, sParam3, sParam4);

	if (iParam5 == 4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_226" /*Accept?*/, 16);
		return func_352(uParam0, echParam1, sParam3, sParam4, &unk);
	}

	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
			return func_355(uParam0, sParam3, sParam4);
	
		return func_334(uParam0, echParam1, sParam3, sParam4, iParam7);
	}

	if (iParam5 == 5)
		return func_333(echParam1, epctParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 2)
		return func_330(echParam1, epctParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 3)
		return func_329(echParam1, epctParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	if (iParam5 == 6)
		return func_305(echParam1, epctParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);

	return false;
}

BOOL func_305(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xEA8F Hash - 0xC2697845 ^0xD073606E
{
	BOOL flag;

	func_328();
	flag = true;

	if (func_307(echParam0, epctParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_306(120000);
		return 1;
	}

	return 0;
}

void func_306(int iParam0) // Position - 0xEAC6 Hash - 0xD1EDE2FD ^0xC582508F
{
	Global_1663588.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663588.f_40.f_12 = 1;
	return;
}

BOOL func_307(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0xEAE9 Hash - 0xE78EB5B0 ^0xDCBC83B
{
	ePedComponentType type;
	int num;
	const char* playerName;
	int num2;
	char* string1;
	int num3;
	int num4;
	BOOL flag;
	int num5;
	int num6;
	int num7;
	int num8;
	BOOL flag2;

	type = _INVALID_PLAYER_INDEX();
	num = 0;

	if (echParam0 == _CHAR_NULL)
	{
		type = epctParam1;
		playerName = PLAYER::GET_PLAYER_NAME(type);
		num = func_322(type);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
				return 0;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_321(sParam5, bParam6, &num2);
	num3 = func_319(iParam7, &num2);
	num4 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		num4 = num4 + 1;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			num4 = num4 + 1;
	}

	if (MISC::ARE_STRINGS_EQUAL(string1, " "))
		string1 = "";

	flag = true;
	num5 = 0;
	num6 = 0;
	num7 = 1;
	num8 = 0;

	if (bParam3)
	{
		num6 = 1;
		num7 = 2;
		num8 = 1;
	
		if (IS_BIT_SET(iParam4, 1))
			num5 = 1;
	}

	if (IS_BIT_SET(iParam4, 2))
		num7 = 2;

	flag2 = false;

	if (!(num2 == 0) || !MISC::IS_STRING_NULL_OR_EMPTY(playerName))
		flag2 = func_318(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = func_311(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return 0;

	if (IS_BIT_SET(iParam4, 0))
		func_310();

	func_328();
	func_309();
	func_308();
	return 1;
}

void func_308() // Position - 0xEC31 Hash - 0x97718D07 ^0xC93D5BC6
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
	return;
}

void func_309() // Position - 0xEC49 Hash - 0x199E2610 ^0xE70E8F8F
{
	Global_1663588.f_40 = 3;
	return;
}

void func_310() // Position - 0xEC58 Hash - 0x24F7F234 ^0xBE76B4C8
{
	MISC::SET_BIT(&Global_8800, 8);
	return;
}

BOOL func_311(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9) // Position - 0xEC69 Hash - 0x3F8A95C2 ^0xE6A3965C
{
	int num;
	char* str;
	int num2;
	char* str2;
	int num3;
	char* str3;
	char* str4;
	int num4;

	num = 0;
	str = "NULL";
	num2 = -99;
	str2 = "NULL";
	num3 = 0;
	str3 = "NULL";
	str4 = "NULL";
	num4 = 3;

	if (func_312(echParam0, sParam1, iParam2, num, str, str2, num2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, num3, str3, str4, num4) == 1)
	{
		if (bParam7 == true)
		{
			Global_9507 = iParam6;
			MISC::SET_BIT(&Global_4543084, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_312(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0xECD5 Hash - 0x56140E21 ^0x6722A9E7
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
			if (Global_20930 == CHAR_MICHAEL)
				num = 0;
			else
				num = 1;
			break;
	
		case 2:
			if (Global_20930 == CHAR_TREVOR)
				num = 0;
			else
				num = 1;
			break;
	
		case 1:
			if (Global_20930 == CHAR_FRANKLIN)
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
	
		if (Global_4543069 == 1)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
			return 0;
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
			return 0;
	}

	if (func_317() == 0)
	{
		func_315();
		return 0;
	}

	func_314(Global_4543068);
	TEXT_LABEL_ASSIGN_STRING(&Global_4541819[Global_4543068 /*104*/], sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = echParam0;

	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}

	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = iParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = iParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = iParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = iParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = true;
			break;
	
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = true;
			break;
	
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = true;
			break;
	
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = true;
			break;
	}

	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case CHAR_MICHAEL:
				func_278(0);
				break;
		
			case CHAR_FRANKLIN:
				func_278(1);
				break;
		
			case CHAR_TREVOR:
				func_278(2);
				break;
		
			case CHAR_MULTIPLAYER:
				func_278(3);
				break;
		
			default:
				break;
		}
	}

	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
		
			case 0:
				Global_4543069 = 1;
				break;
		
			case 2:
				Global_4543069 = 1;
				break;
		
			case 1:
				Global_4543069 = 1;
				break;
		}
	}

	Global_23355[Global_4543068] = 0;

	if (bParam10)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20873)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case CHAR_MICHAEL:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
			
				case CHAR_TREVOR:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
			
				case CHAR_FRANKLIN:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
			
				default:
					TEXT_LABEL_ASSIGN_STRING(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
			}
		}
	
		if (!(Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1))
			if (!func_4())
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
	}

	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_277(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_273(1);
			func_277(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}

	if (Global_1971482 != -1 && echParam0 == Global_1971482)
		num2 = 1;

	func_313(echParam0, sParam1, num2, func_272(PLAYER::PLAYER_ID()));
	return 1;
}

void func_313(eCharacter echParam0, char* sParam1, BOOL bParam2, ePedComponentType epctParam3) // Position - 0xF0C2 Hash - 0x8EDEEA2A ^0xE21A25E8
{
	eCharacter character;

	if (!func_269())
		return;

	character = echParam0;
	character.f_1 = -1180597171;
	character.f_2 = MISC::GET_HASH_KEY(sParam1);
	character.f_3 = 0;
	character.f_4 = bParam2;
	character.f_5 = epctParam3;
	character.f_6 = Global_1971465.f_7;
	character.f_7 = Global_1971465.f_8;
	character.f_8 = Global_1971465.f_9;
	character.f_9 = Global_1971465.f_10;
	character.f_10 = Global_1971465.f_11;
	character.f_11 = Global_1971465.f_12;
	character.f_12 = Global_1971465.f_13;
	character.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&character);

	if (bParam2)
		Global_1971482 = -1;

	return;
}

void func_314(int iParam0) // Position - 0xF15D Hash - 0xF909653C ^0x9959A42E
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
	Global_4541819[iParam0 /*104*/].f_18 = clockSeconds;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = clockMinutes;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = clockHours;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = clockDayOfMonth;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = num;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = clockYear;
	return;
}

void func_315() // Position - 0xF1DD Hash - 0x930240D5 ^0xE0561C1B
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = 10;
	num3 = num;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;

	while (num3 < num2)
	{
		if (!func_316(Global_4541819[num3 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			Global_4543068 = num3;
	
		num3 = num3 + 1;
	}

	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
	return;
}

BOOL func_316(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0xF287 Hash - 0x87F973EB ^0x688F177D
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

int func_317() // Position - 0xF372 Hash - 0xA20CD6DA ^0xEA2CF9A5
{
	int num;
	int num2;
	int i;

	num = 0;
	num2 = 10;

	for (i = num; i < num2; i = i + 1)
	{
		if (Global_4541819[i /*104*/].f_24 == 0)
		{
			Global_4543068 = i;
			return 1;
		}
	}

	i = num;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;

	while (i < num2)
	{
		if (Global_4541819[i /*104*/].f_24 == 0 || Global_4541819[i /*104*/].f_24 == 1)
			if (!func_316(Global_4541819[i /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
				Global_4543068 = i;
	
		i = i + 1;
	}

	if (Global_4543068 == 11)
		return 0;

	Global_4541819[Global_4543068 /*104*/].f_99[0] = false;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = false;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = false;
	return 1;
}

BOOL func_318(eCharacter echParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12, int iParam13, int iParam14, const char* sParam15, const char* sParam16) // Position - 0xF49D Hash - 0xC28945DD ^0xC28945DD
{
	int num;

	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
	
		case 1:
			sParam16 = "NULL";
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	num = 3;

	if (func_312(echParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, num) == 1)
	{
		if (bParam11 == true)
		{
			Global_9507 = iParam10;
			MISC::SET_BIT(&Global_4543084, 0);
		}
	
		return 1;
	}

	return 0;
}

int func_319(int iParam0, var uParam1) // Position - 0xF51F Hash - 0xA7D7303E ^0x540D36E6
{
	if (iParam0 == -99)
		return -99;

	func_320(2, uParam1);
	return iParam0;
}

void func_320(int iParam0, var uParam1) // Position - 0xF53E Hash - 0x10976FAF ^0x10976FAF
{
	BOOL flag;
	BOOL flag2;

	if (iParam0 == 0)
		return;

	flag = false;
	flag2 = false;

	switch (iParam0)
	{
		case 1:
			flag = true;
			break;
	
		case 2:
			flag2 = true;
			break;
	
		default:
			return;
	}

	if (flag)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
		
			case 0:
				*uParam1 = 1;
				break;
		
			case 2:
				*uParam1 = 3;
				break;
		
			default:
				return;
		}
	
		return;
	}

	if (flag2)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
		
			case 0:
				*uParam1 = 2;
				break;
		
			case 1:
				*uParam1 = 3;
				break;
		
			default:
				return;
		}
	
		return;
	}

	return;
}

char* func_321(const char* sParam0, BOOL bParam1, var uParam2) // Position - 0xF5EF Hash - 0xB38D7897 ^0x36F90B0E
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return sLocal_19;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_19))
		return sLocal_19;

	func_320(1, uParam2);

	if (bParam1)
		return sParam0;

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_322(ePedComponentType epctParam0) // Position - 0xF62C Hash - 0x42191E90 ^0xD8949AAB
{
	int num;

	num = func_325(epctParam0);

	if (num == -1)
	{
		func_323(epctParam0, true);
		return 0;
	}

	Global_1681225[num /*5*/].f_4 = 1;
	return Global_1681225[num /*5*/].f_2;
}

void func_323(ePedComponentType epctParam0, BOOL bParam1) // Position - 0xF662 Hash - 0x33266C8B ^0x1B02BD98
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return;

	if (func_325(epctParam0) != -1)
		return;

	if (Global_1681388)
		if (epctParam0 == Global_1681388.f_1)
			return;

	if (func_324(epctParam0))
		return;

	if (Global_1681426 >= 32)
		return;

	Global_1681393[Global_1681426] = epctParam0;
	Global_1681426 = Global_1681426 + 1;
	bParam1;
	return;
}

BOOL func_324(ePedComponentType epctParam0) // Position - 0xF6CE Hash - 0x37274923 ^0x37274923
{
	int i;

	i = 0;

	for (i = 0; i < Global_1681426; i = i + 1)
	{
		if (Global_1681393[i] == epctParam0)
			return true;
	}

	return false;
}

int func_325(ePedComponentType epctParam0) // Position - 0xF700 Hash - 0x83D3907 ^0x83D3907
{
	int i;

	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return -1;

	if (Global_1681386 == 0)
		return -1;

	i = 0;

	for (i = 0; i < Global_1681386; i = i + 1)
	{
		if (Global_1681225[i /*5*/].f_1 == epctParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[i /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[i /*5*/].f_2))
				return i;
		
			func_326(i);
			return -1;
		}
	}

	return -1;
}

void func_326(int iParam0) // Position - 0xF77F Hash - 0x33A262D8 ^0xDB63268
{
	var txdString2;
	var txdString1;
	int num;
	int i;

	if (iParam0 >= Global_1681386)
		return;

	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		TEXT_LABEL_ASSIGN_STRING(&txdString2, "CHAR_DEFAULT", 64);
	
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&txdString1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&txdString1, &txdString1, &txdString2, &txdString2);
		}
	
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}

	num = iParam0;

	for (i = num + 1; i < Global_1681386; i = i + 1)
	{
		Global_1681225[num /*5*/] = { Global_1681225[i /*5*/] };
		num = num + 1;
	}

	func_327(&Global_1681225[num /*5*/]);
	Global_1681386 = Global_1681386 - 1;
	return;
}

void func_327(BOOL bParam0) // Position - 0xF835 Hash - 0xCB5CC50E ^0x69BEE3EF
{
	*bParam0 = 0;
	bParam0->f_1 = _INVALID_PLAYER_INDEX();
	bParam0->f_2 = 0;
	bParam0->f_4 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		bParam0->f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

void func_328() // Position - 0xF862 Hash - 0xF5D50883 ^0xFFDD531D
{
	Global_1663588.f_40.f_9 = 4;
	return;
}

BOOL func_329(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xF873 Hash - 0x27581FA3 ^0x27581FA3
{
	BOOL flag;

	func_328();
	flag = false;
	return func_307(echParam0, epctParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_330(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xF89A Hash - 0x67BFD21C ^0x67BFD21C
{
	BOOL flag;

	flag = false;
	return func_331(echParam0, epctParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

BOOL func_331(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, BOOL bParam3, int iParam4, const char* sParam5, BOOL bParam6, int iParam7, const char* sParam8, const char* sParam9) // Position - 0xF8BD Hash - 0xE78EB5B0 ^0xDCBC83B
{
	ePedComponentType type;
	int num;
	const char* playerName;
	int num2;
	char* string1;
	int num3;
	int num4;
	BOOL flag;
	int num5;
	int num6;
	int num7;
	int num8;
	BOOL flag2;

	type = _INVALID_PLAYER_INDEX();
	num = 0;

	if (echParam0 == _CHAR_NULL)
	{
		type = epctParam1;
		playerName = PLAYER::GET_PLAYER_NAME(type);
		num = func_322(type);
	
		if (num == 0)
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
				return false;
	
		Global_23347 = num;
	}
	else
	{
		playerName = "";
	}

	num2 = 0;
	string1 = func_321(sParam5, bParam6, &num2);
	num3 = func_319(iParam7, &num2);
	num4 = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		num4 = num4 + 1;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
			num4 = num4 + 1;
	}

	if (MISC::ARE_STRINGS_EQUAL(string1, " "))
		string1 = "";

	flag = true;
	num5 = 0;
	num6 = 0;
	num7 = 1;
	num8 = 0;

	if (bParam3)
	{
		num6 = 1;
		num7 = 2;
		num8 = 1;
	
		if (IS_BIT_SET(iParam4, 1))
			num5 = 1;
	}

	if (IS_BIT_SET(iParam4, 2))
		num7 = 2;

	flag2 = false;

	if (!(num2 == 0) || !MISC::IS_STRING_NULL_OR_EMPTY(playerName))
		flag2 = func_265(echParam0, sParam2, num7, string1, num3, playerName, num2, num8, 1, num6, 0, flag, num5, 0, num4, sParam8, sParam9);
	else
		flag2 = _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(echParam0, sParam2, num7, num8, 1, num6, 0, flag, num5, 0);

	if (!flag2)
		return false;

	if (IS_BIT_SET(iParam4, 0))
		func_310();

	func_332();
	func_309();
	func_308();
	return true;
}

void func_332() // Position - 0xFA0A Hash - 0x224427C7 ^0xC9B61A06
{
	Global_1663588.f_40.f_9 = 3;
	return;
}

BOOL func_333(eCharacter echParam0, ePedComponentType epctParam1, char* sParam2, int iParam3, const char* sParam4, BOOL bParam5, int iParam6, const char* sParam7, const char* sParam8) // Position - 0xFA1B Hash - 0x9414179B ^0x61C38AC6
{
	BOOL flag;

	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	func_332();
	flag = true;

	if (func_331(echParam0, epctParam1, sParam2, flag, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_306(120000);
		return 1;
	}

	return 0;
}

BOOL func_334(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4) // Position - 0xFA6D Hash - 0x37F91C69 ^0x1A92344A
{
	BOOL flag;
	int num;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
			return 0;

	flag = false;
	num = 12;

	if (IS_BIT_SET(iParam4, 7))
		num = 9;

	if (IS_BIT_SET(iParam4, 4))
		flag = func_351(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);
	else
		flag = func_340(uParam0, echParam1, sParam2, sParam3, num, 0, 0, true);

	if (flag)
	{
		if (IS_BIT_SET(iParam4, 3))
			func_339(1);
	
		if (IS_BIT_SET(iParam4, 5))
			func_338(1);
	
		func_337();
		func_309();
		func_336();
		func_335();
		return 1;
	}

	return 0;
}

void func_335() // Position - 0xFB04 Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_2749373 = 0;
	return;
}

void func_336() // Position - 0xFB11 Hash - 0x19592FC1 ^0xA086E834
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
	return;
}

void func_337() // Position - 0xFB29 Hash - 0xE3CE35BD ^0x3AA4201A
{
	Global_1663588.f_40.f_9 = 1;
	return;
}

void func_338(int iParam0) // Position - 0xFB3A Hash - 0x5C3492FF ^0xC3B1628B
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8802, 0);
	else
		MISC::CLEAR_BIT(&Global_8802, 0);

	return;
}

void func_339(int iParam0) // Position - 0xFB5B Hash - 0x4B31E0FF ^0x55B48205
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 20);
	else
		MISC::CLEAR_BIT(&Global_8800, 20);

	return;
}

BOOL func_340(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xFB7E Hash - 0xC865AAA7 ^0xC865AAA7
{
	func_350(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = false;
	Global_22293 = true;
	Global_22300 = false;
	Global_22295 = false;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = false;
	Global_22340 = false;
	Global_2883585 = 0;
	return func_341(sParam3, iParam4, bParam7);
}

BOOL func_341(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xFBCC Hash - 0x77297D51 ^0x40DC584A
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
					func_349();
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
	
		if (func_348(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_347();
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
			
				if (func_346())
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
		
			if (func_345())
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
		
			func_344();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_343();
		func_342();
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
		func_349();
	}

	return 0;
}

void func_342() // Position - 0xFE9A Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_269())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

void func_343() // Position - 0xFED1 Hash - 0x7D91B4EA ^0x7D0D712F
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

void func_344() // Position - 0xFF02 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_345() // Position - 0xFF97 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return 1;

	return 0;
}

BOOL func_346() // Position - 0xFFBE Hash - 0xDC66AE99 ^0x967F35E0
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

void func_347() // Position - 0x10058 Hash - 0xB34EC637 ^0x7CB3B479
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

BOOL func_348(int iParam0, int iParam1) // Position - 0x100AF Hash - 0xA14C4D3F ^0xA6034F77
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

void func_349() // Position - 0x100E7 Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_350(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1013E Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_351(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x10194 Hash - 0xFCEBC461 ^0xFCEBC461
{
	func_350(uParam0, echParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = true;
	Global_22293 = true;
	Global_22300 = false;
	Global_22295 = false;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = false;
	Global_22340 = false;
	Global_2883585 = 0;
	return func_341(sParam3, iParam4, bParam7);
}

BOOL func_352(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x101E2 Hash - 0x8D566BBE ^0x7046E64E
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		return 0;

	if (func_354(uParam0, echParam1, sParam2, sParam3, 9, sParam4, 0, 0, true))
	{
		func_353();
		func_337();
		func_309();
		func_336();
		func_335();
		return 1;
	}

	return 0;
}

void func_353() // Position - 0x10234 Hash - 0x8D222CF ^0x8D222CF
{
	Global_23304 = 0;
	return;
}

BOOL func_354(var uParam0, eCharacter echParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x10240 Hash - 0x181E79B6 ^0x181E79B6
{
	func_350(uParam0, echParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = false;
	Global_22293 = true;
	Global_22300 = false;
	Global_22295 = true;
	Global_23277 = 0;
	Global_23279 = false;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = true;
	Global_22340 = false;
	TEXT_LABEL_ASSIGN_STRING(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_341(sParam3, iParam4, bParam8);
}

BOOL func_355(var uParam0, char* sParam1, char* sParam2) // Position - 0x10295 Hash - 0x1E116D4C ^0x1E116D4C
{
	if (_CONVERSATION_ADD_LINE(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_356();
		func_309();
		func_336();
		return 1;
	}

	return 0;
}

void func_356() // Position - 0x102C0 Hash - 0x387A0527 ^0x32D7AF4B
{
	Global_1663588.f_40.f_9 = 2;
	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x102D1 Hash - 0x384540C1 ^0x384540C1
{
	func_350(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_341(sParam2, iParam3, false);
}

void func_358() // Position - 0x1031F Hash - 0x357CA211 ^0x3FE2DF93
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
	return;
}

void func_359() // Position - 0x10345 Hash - 0xD4ABC353 ^0xBADDC1AA
{
	Global_1663588.f_40 = 1;
	return;
}

BOOL func_360() // Position - 0x10354 Hash - 0x85407566 ^0x31A014F4
{
	return Global_1663588.f_40 == 1;
}

BOOL func_361(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x10364 Hash - 0xB95F48B9 ^0xE2000D9D
{
	if (!func_362(hParam0))
		return 0;

	if (Global_1663588.f_40.f_2 != hParam1)
		return 0;

	if (hParam2 != 0)
		if (Global_1663588.f_40.f_3 != hParam2)
			return 0;

	return 1;
}

BOOL func_362(Hash hParam0) // Position - 0x103A3 Hash - 0xB633306A ^0x8BF4AC42
{
	if (!func_363())
		return false;

	if (!(Global_1663588.f_40.f_1 == hParam0))
		return false;

	return true;
}

BOOL func_363() // Position - 0x103CB Hash - 0xEEC92669 ^0xABDE88F2
{
	if (Global_1663588.f_40 == 0)
		return false;

	return true;
}

BOOL func_364(int iParam0) // Position - 0x103E2 Hash - 0x201095D5 ^0xF9DAC225
{
	if (func_369())
		return false;

	if (func_368())
		return false;

	if (func_367(0))
		return false;

	if (Global_1574633.f_18 != 0)
		return false;

	if (Global_1928440 || func_366())
		return false;

	if (!IS_BIT_SET(iParam0, 6))
		if (func_365())
			return false;

	return true;
}

BOOL func_365() // Position - 0x10443 Hash - 0x2AAF3F3E ^0x41C36A81
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1680101);
}

BOOL func_366() // Position - 0x10457 Hash - 0xF00B1C81 ^0xF00B1C81
{
	if (Global_4521801.f_945 > -1)
		return 1;

	return 0;
}

BOOL func_367(int iParam0) // Position - 0x1046F Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_368() // Position - 0x104C6 Hash - 0x198EDDD5 ^0x6A882A2
{
	return Global_1663588.f_40 == 3;
}

BOOL func_369() // Position - 0x104D6 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_345();
}

BOOL func_370(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x104E2 Hash - 0xF5A08F4D ^0xF5A08F4D
{
	if (!func_368())
		return false;

	return func_361(hParam0, hParam1, hParam2);
}

Hash func_371(char* sParam0, char* sParam1) // Position - 0x10500 Hash - 0x13A99D9 ^0x93869AC0
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_372() // Position - 0x1051A Hash - 0x306ACA3A ^0x49DE294A
{
	return "TXTMSG";
}

int func_373(ePedComponentType epctParam0, var uParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x10526 Hash - 0x545987EB ^0x89609320
{
	int i;
	int num;
	ePedComponentType cloudTimeAsInt;

	if (bParam2)
	{
		!bParam4;
		Global_2359296[func_195() /*5570*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}

	if (func_395(epctParam0))
		return 1;

	!bParam4;
	num = func_394(1411, epctParam0);
	func_17(num, uParam1->f_138, iParam3);
	!bParam4;
	num = func_394(1412, epctParam0);
	func_17(num, uParam1->f_139, iParam3);
	!bParam4;

	if (func_393(epctParam0))
	{
	}
	else
	{
		num = func_394(1413, epctParam0);
		func_17(num, *uParam1, iParam3);
		!bParam4;
	
		for (i = 0; i < 49; i = i + 1)
		{
			if (i < 25)
			{
				num = func_394(1414, epctParam0) + i;
				func_17(num, uParam1->f_9[i], iParam3);
			}
			else
			{
				num = func_392(epctParam0) + (i - 25);
				func_17(num, uParam1->f_9[i], iParam3);
			}
		}
	
		i = 0;
	
		for (i = 0; i < 2; i = i + 1)
		{
			num = func_394(1439, epctParam0) + i;
			func_17(num, uParam1->f_59[i], iParam3);
		}
	}

	num = func_394(1441, epctParam0);
	func_17(num, uParam1->f_62, iParam3);
	!bParam4;
	num = func_394(1442, epctParam0);
	func_17(num, uParam1->f_63, iParam3);
	!bParam4;
	num = func_394(1443, epctParam0);
	func_17(num, uParam1->f_64, iParam3);
	!bParam4;

	if (func_393(epctParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_394(1444, epctParam0);
		func_17(num, uParam1->f_65, iParam3);
		!bParam4;
	}

	num = func_394(1445, epctParam0);
	func_17(num, uParam1->f_67, iParam3);

	if (func_393(epctParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_394(1446, epctParam0);
		func_17(num, uParam1->f_68, iParam3);
	}

	num = func_394(1447, epctParam0);
	func_17(num, uParam1->f_69, iParam3);
	!bParam4;
	num = func_394(1448, epctParam0);
	func_17(num, uParam1->f_70, -1);
	num = func_394(1449, epctParam0);
	func_17(num, uParam1->f_71, iParam3);
	num = func_394(1450, epctParam0);
	func_17(num, uParam1->f_72, iParam3);
	num = func_394(1451, epctParam0);
	func_17(num, uParam1->f_73, iParam3);
	num = func_394(1452, epctParam0);
	func_17(num, uParam1->f_5, iParam3);
	num = func_394(1453, epctParam0);
	func_17(num, uParam1->f_6, iParam3);
	num = func_394(1454, epctParam0);
	func_17(num, uParam1->f_7, iParam3);
	num = func_394(1455, epctParam0);
	func_17(num, uParam1->f_8, iParam3);

	if (func_393(epctParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_394(3880, epctParam0);
		func_17(num, uParam1->f_74, iParam3);
		num = func_394(3881, epctParam0);
		func_17(num, uParam1->f_75, iParam3);
		num = func_394(3882, epctParam0);
		func_17(num, uParam1->f_76, iParam3);
		num = func_391(epctParam0);
		func_17(num, uParam1->f_97, iParam3);
		num = func_390(epctParam0);
		func_17(num, uParam1->f_99, iParam3);
		num = func_389(epctParam0);
		func_17(num, uParam1->f_98, iParam3);
		num = func_377(epctParam0, false);
		func_17(num, uParam1->f_102, iParam3);
	}

	cloudTimeAsInt = Global_2359296[func_195() /*5570*/].f_681.f_1275;

	if (bParam5)
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	func_132(1629, cloudTimeAsInt, iParam3, true);
	!bParam4;
	func_132(func_375(1, epctParam0), uParam1->f_103, iParam3, true);
	!bParam4;
	func_132(func_375(2, epctParam0), uParam1->f_104, iParam3, true);
	!bParam4;
	func_132(func_375(3, epctParam0), uParam1->f_105, iParam3, true);
	!bParam4;
	func_132(func_375(4, epctParam0), uParam1->f_66, iParam3, true);
	func_132(func_375(5, epctParam0), uParam1->f_77, iParam3, true);
	!bParam4;
	func_132(func_375(7, epctParam0), uParam1->f_140, iParam3, true);

	if (!func_393(epctParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_374(func_375(6, epctParam0), &(uParam1->f_1), iParam3);
			!bParam4;
		}
		else
		{
			!bParam4;
		}
	}

	!bParam4;
	return 1;
}

void func_374(int iParam0, const char* sParam1, int iParam2) // Position - 0x10982 Hash - 0xF20CC64E ^0x3437932
{
	Hash statName;

	statName = func_50(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_LICENSE_PLATE(statName, sParam1);

	return;
}

int func_375(int iParam0, ePedComponentType epctParam1) // Position - 0x109A3 Hash - 0x7784C9D8 ^0xD82AA01B
{
	if (epctParam1 >= 363)
	{
		return func_376(iParam0, epctParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1630;
				
					case PV_COMP_BERD:
						return 1637;
				
					case PV_COMP_HAIR:
						return 1644;
				
					case PV_COMP_UPPR:
						return 1651;
				
					case PV_COMP_LOWR:
						return 1658;
				
					case PV_COMP_HAND:
						return 1665;
				
					case PV_COMP_FEET:
						return 1672;
				
					case PV_COMP_TEEF:
						return 1679;
				
					case PV_COMP_ACCS:
						return 1686;
				
					case PV_COMP_TASK:
						return 1693;
				
					case PV_COMP_DECL:
						return 1700;
				
					case PV_COMP_JBIB:
						return 1706;
				
					case PV_COMP_MAX:
						return 1712;
				
					case 13:
						return 1718;
				
					case 14:
						return 1797;
				
					case 15:
						return 1804;
				
					case 16:
						return 1811;
				
					case 17:
						return 1818;
				
					case 18:
						return 1825;
				
					case 19:
						return 1832;
				
					case 20:
						return 1839;
				
					case 21:
						return 1846;
				
					case 22:
						return 1853;
				
					case 23:
						return 1860;
				
					case 24:
						return 1866;
				
					case 25:
						return 1872;
				
					case 26:
						return 2167;
				
					case 27:
						return 2174;
				
					case 28:
						return 2181;
				
					case 29:
						return 2188;
				
					case 30:
						return 2195;
				
					case 31:
						return 2202;
				
					case 32:
						return 2209;
				
					case 33:
						return 2216;
				
					case 34:
						return 2223;
				
					case 35:
						return 2230;
				
					case 36:
						return 2237;
				
					case 37:
						return 2243;
				
					case 38:
						return 2249;
				
					case 39:
						return 2831;
				
					case 40:
						return 2838;
				
					case 41:
						return 2845;
				
					case 42:
						return 2852;
				
					case 43:
						return 2859;
				
					case 44:
						return 2866;
				
					case 45:
						return 2873;
				
					case 46:
						return 2880;
				
					case 47:
						return 2887;
				
					case 48:
						return 2894;
				
					case 49:
						return 2901;
				
					case 50:
						return 2907;
				
					case 51:
						return 2913;
				
					case 52:
						return 2955;
				
					case 53:
						return 2962;
				
					case 54:
						return 2969;
				
					case 55:
						return 2976;
				
					case 56:
						return 2983;
				
					case 57:
						return 2990;
				
					case 58:
						return 2997;
				
					case 59:
						return 3004;
				
					case 60:
						return 3011;
				
					case 61:
						return 3018;
				
					case 62:
						return 3025;
				
					case 63:
						return 3031;
				
					case 64:
						return 3037;
				
					case 65:
						return 3238;
				
					case 66:
						return 3246;
				
					case 67:
						return 3254;
				
					case 68:
						return 3262;
				
					case 69:
						return 3270;
				
					case 70:
						return 3278;
				
					case 71:
						return 3286;
				
					case 72:
						return 3294;
				
					case 73:
						return 3302;
				
					case 74:
						return 3310;
				
					case 75:
						return 3318;
				
					case 76:
						return 3326;
				
					case 77:
						return 3334;
				
					case 78:
						return 3342;
				
					case 79:
						return 3350;
				
					case 80:
						return 3358;
				
					case 81:
						return 3366;
				
					case 82:
						return 3374;
				
					case 83:
						return 3382;
				
					case 84:
						return 3390;
				
					case 85:
						return 3398;
				
					case 86:
						return 3405;
				
					case 87:
						return 3412;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4034;
				
					case 89:
						return 4042;
				
					case 90:
						return 4050;
				
					case 91:
						return 4058;
				
					case 92:
						return 4066;
				
					case 93:
						return 4074;
				
					case 94:
						return 4082;
				
					case 95:
						return 4090;
				
					case 96:
						return 4098;
				
					case 97:
						return 4106;
				
					case 98:
						return &_STAT_GET_PACKED_BOOL;
				
					case 99:
						return 4122;
				
					case 100:
						return 4130;
				
					case 101:
						return 4138;
				
					case 102:
						return 4146;
				
					case 103:
						return 4154;
				
					case 104:
						return 4162;
				
					case 105:
						return 4170;
				
					case 106:
						return 4178;
				
					case 107:
						return 4186;
				
					case 108:
						return 4194;
				
					case 109:
						return 4202;
				
					case 110:
						return 4210;
				
					case 111:
						return 4218;
				
					case 112:
						return 4226;
				
					case 113:
						return 4234;
				
					case 114:
						return 4242;
				
					case 115:
						return 4250;
				
					case 116:
						return 4258;
				
					case 117:
						return 4266;
				
					case 118:
						return 4274;
				
					case 119:
						return 4282;
				
					case 120:
						return 4290;
				
					case 121:
						return 4298;
				
					case 122:
						return 4306;
				
					case 123:
						return 4314;
				
					case 124:
						return 4322;
				
					case 125:
						return 4330;
				
					case 126:
						return 4338;
				
					case 127:
						return 4346;
				
					case 128:
						return 4354;
				
					case 129:
						return 4362;
				
					case 130:
						return 4370;
				
					case 131:
						return 4378;
				
					case 132:
						return 4386;
				
					case 133:
						return 4394;
				
					case 134:
						return 4402;
				
					case 135:
						return 4410;
				
					case 136:
						return 4418;
				
					case 137:
						return 4426;
				
					case 138:
						return 4434;
				
					case 139:
						return 4442;
				
					case 140:
						return 4450;
				
					case 141:
						return 4458;
				
					case 142:
						return 4466;
				
					case 143:
						return 4474;
				
					case 144:
						return 4482;
				
					case 145:
						return 4490;
				
					case 146:
						return 4498;
				
					case 147:
						return 4506;
				
					case 148:
						return 4514;
				
					case 149:
						return 4522;
				
					case 150:
						return 4530;
				
					case 151:
						return 4538;
				
					case 152:
						return 4546;
				
					case 153:
						return 4554;
				
					case 154:
						return 4562;
				
					case 155:
						return &func_23;
				
					case 156:
						return 4578;
				
					case 157:
						return 4586;
				
					case 158:
						return 5479;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5928;
				
					case 160:
						return 5935;
				
					case 161:
						return 5942;
				
					case 162:
						return 5949;
				
					case 163:
						return 5956;
				
					case 164:
						return 5963;
				
					case 165:
						return 5970;
				
					case 166:
						return 5977;
				
					case 167:
						return 5984;
				
					case 168:
						return 5991;
				
					case 169:
						return 5998;
				
					case 170:
						return 6005;
				
					case 171:
						return 6012;
				
					case 172:
						return 6019;
				
					case 173:
						return 6026;
				
					case 174:
						return 6033;
				
					case 175:
						return 6040;
				
					case 176:
						return 6047;
				
					case 177:
						return 6054;
				
					case 178:
						return 6061;
				
					case 179:
						return &func_25;
				
					case 180:
						return 6075;
				
					case 181:
						return 6082;
				
					case 182:
						return 6089;
				
					case 183:
						return 6096;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6173;
				
					case 185:
						return 6180;
				
					case 186:
						return 6187;
				
					case 187:
						return 6194;
				
					case 188:
						return 6201;
				
					case 189:
						return 6208;
				
					case 190:
						return 6215;
				
					case 191:
						return 6222;
				
					case 192:
						return 6229;
				
					case 193:
						return 6236;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6570;
				
					case 195:
						return 6577;
				
					case 196:
						return 6584;
				
					case 197:
						return 6591;
				
					case 198:
						return 6598;
				
					case 199:
						return 6605;
				
					case 200:
						return 6612;
				
					case 201:
						return 6619;
				
					case 202:
						return 6626;
				
					case 203:
						return 6633;
				
					case 204:
						return 6640;
				
					case 205:
						return 6647;
				
					case 206:
						return 6654;
				
					case 207:
						return 6661;
				
					case 208:
						return 6668;
				
					case 209:
						return 6675;
				
					case 210:
						return 6682;
				
					case 211:
						return 6689;
				
					case 212:
						return 6696;
				
					case 213:
						return 6703;
				
					case 214:
						return 6710;
				
					case 215:
						return 6717;
				
					case 216:
						return 6724;
				
					case 217:
						return 6731;
				
					case 218:
						return 6738;
				
					case 219:
						return 6745;
				
					case 220:
						return 6752;
				
					case 221:
						return 6759;
				
					case 222:
						return 6766;
				
					case 223:
						return 6773;
				
					case 224:
						return 6780;
				
					case 225:
						return 6787;
				
					case 226:
						return 6794;
				
					case 227:
						return 6801;
				
					case 228:
						return 6808;
				
					case 229:
						return 6815;
				
					case 230:
						return 6822;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7292;
				
					case 232:
						return 7299;
				
					case 233:
						return 7306;
				
					case 234:
						return 7313;
				
					case 235:
						return 7320;
				
					case 236:
						return 7327;
				
					case 237:
						return 7334;
				
					case 238:
						return 7341;
				
					case 239:
						return 7348;
				
					case 240:
						return 7355;
				
					case 241:
						return 7362;
				
					case 242:
						return 7369;
				
					case 243:
						return 7376;
				
					case 244:
						return 7383;
				
					case 245:
						return 7390;
				
					case 246:
						return 7397;
				
					case 247:
						return 7404;
				
					case 248:
						return 7411;
				
					case 249:
						return 7418;
				
					case 250:
						return 7425;
				
					case 251:
						return 7432;
				
					case 252:
						return 7439;
				
					case 253:
						return 7446;
				
					case 254:
						return 7453;
				
					case 255:
						return 7460;
				
					case 256:
						return 7467;
				
					case 257:
						return 7474;
				
					case 258:
						return 7481;
				
					case 259:
						return 7488;
				
					case 260:
						return 7495;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8015;
				
					case 262:
						return 8022;
				
					case 263:
						return 8029;
				
					case 264:
						return 8036;
				
					case 265:
						return 8043;
				
					case 266:
						return 8050;
				
					case 267:
						return 8057;
				
					case 268:
						return 8064;
				
					case 269:
						return 8071;
				
					case 270:
						return 8078;
				
					case 271:
						return 8539;
				
					case 272:
						return 8546;
				
					case 273:
						return 8553;
				
					case 274:
						return 8560;
				
					case 275:
						return 8567;
				
					case 276:
						return 8574;
				
					case 277:
						return 8581;
				
					case 278:
						return 8588;
				
					case 279:
						return 8595;
				
					case 280:
						return 8602;
				
					case 281:
						return 8986;
				
					case 282:
						return 8993;
				
					case 283:
						return 9000;
				
					case 284:
						return 9007;
				
					case 285:
						return 9014;
				
					case 286:
						return 9021;
				
					case 287:
						return 9028;
				
					case 288:
						return 9035;
				
					case 289:
						return 9042;
				
					case 290:
						return 9049;
				
					case 291:
						return 9056;
				
					case 292:
						return 9062;
				
					case 293:
						return 9068;
				
					case 294:
						return 9074;
				
					case 295:
						return 9081;
				
					case 296:
						return 9088;
				
					case 297:
						return 9095;
				
					case 298:
						return 9102;
				
					case 299:
						return 9109;
				
					case 300:
						return 9116;
				
					case 301:
						return 9123;
				
					case 302:
						return 9130;
				
					case 303:
						return 9137;
				
					case 304:
						return 9144;
				
					case 305:
						return 9150;
				
					case 306:
						return 9156;
				
					case 307:
						return 9637;
				
					case 308:
						return 9644;
				
					case 309:
						return 9651;
				
					case 310:
						return 9658;
				
					case 311:
						return 9665;
				
					case 312:
						return 9672;
				
					case 313:
						return 9679;
				
					case 314:
						return 9686;
				
					case 315:
						return 9693;
				
					case 316:
						return 9700;
				
					case 317:
						return 9922;
				
					case 318:
						return 9929;
				
					case 319:
						return 9936;
				
					case 320:
						return 9943;
				
					case 321:
						return 9950;
				
					case 322:
						return 9957;
				
					case 323:
						return 9964;
				
					case 324:
						return 9971;
				
					case 325:
						return &func_55;
				
					case 326:
						return 9985;
				
					case 327:
						return 9992;
				
					case 328:
						return 9999;
				
					case 329:
						return 10006;
				
					case 330:
						return 10013;
				
					case 331:
						return 10020;
				
					case 332:
						return 10027;
				
					case 333:
						return 10034;
				
					case 334:
						return 10041;
				
					case 335:
						return 10048;
				
					case 336:
						return 10055;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10448;
				
					case 338:
						return 10455;
				
					case 339:
						return 10462;
				
					case 340:
						return 10469;
				
					case 341:
						return 10476;
				
					case 342:
						return 10483;
				
					case 343:
						return 10490;
				
					case 344:
						return 10497;
				
					case 345:
						return 10504;
				
					case 346:
						return 10511;
				
					case 347:
						return 10518;
				
					case 348:
						return 10524;
				
					case 349:
						return 10530;
				
					case 350:
						return 10536;
				
					case 351:
						return 10543;
				
					case 352:
						return 10550;
				
					case 353:
						return 10557;
				
					case 354:
						return 10564;
				
					case 355:
						return 10571;
				
					case 356:
						return 10578;
				
					case 357:
						return 10585;
				
					case 358:
						return 10592;
				
					case 359:
						return 10599;
				
					case 360:
						return 10606;
				
					case 361:
						return 10612;
				
					case 362:
						return 10618;
				
					default:
						break;
				}
				break;
		
			case 2:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1631;
				
					case PV_COMP_BERD:
						return 1638;
				
					case PV_COMP_HAIR:
						return 1645;
				
					case PV_COMP_UPPR:
						return 1652;
				
					case PV_COMP_LOWR:
						return 1659;
				
					case PV_COMP_HAND:
						return 1666;
				
					case PV_COMP_FEET:
						return 1673;
				
					case PV_COMP_TEEF:
						return 1680;
				
					case PV_COMP_ACCS:
						return 1687;
				
					case PV_COMP_TASK:
						return 1694;
				
					case PV_COMP_DECL:
						return 1701;
				
					case PV_COMP_JBIB:
						return 1707;
				
					case PV_COMP_MAX:
						return 1713;
				
					case 13:
						return 1719;
				
					case 14:
						return 1798;
				
					case 15:
						return 1805;
				
					case 16:
						return 1812;
				
					case 17:
						return 1819;
				
					case 18:
						return 1826;
				
					case 19:
						return 1833;
				
					case 20:
						return 1840;
				
					case 21:
						return 1847;
				
					case 22:
						return 1854;
				
					case 23:
						return 1861;
				
					case 24:
						return 1867;
				
					case 25:
						return 1873;
				
					case 26:
						return 2168;
				
					case 27:
						return 2175;
				
					case 28:
						return 2182;
				
					case 29:
						return 2189;
				
					case 30:
						return 2196;
				
					case 31:
						return 2203;
				
					case 32:
						return 2210;
				
					case 33:
						return 2217;
				
					case 34:
						return 2224;
				
					case 35:
						return 2231;
				
					case 36:
						return 2238;
				
					case 37:
						return 2244;
				
					case 38:
						return 2250;
				
					case 39:
						return 2832;
				
					case 40:
						return 2839;
				
					case 41:
						return 2846;
				
					case 42:
						return 2853;
				
					case 43:
						return 2860;
				
					case 44:
						return 2867;
				
					case 45:
						return 2874;
				
					case 46:
						return 2881;
				
					case 47:
						return 2888;
				
					case 48:
						return 2895;
				
					case 49:
						return 2902;
				
					case 50:
						return 2908;
				
					case 51:
						return 2914;
				
					case 52:
						return 2956;
				
					case 53:
						return 2963;
				
					case 54:
						return 2970;
				
					case 55:
						return 2977;
				
					case 56:
						return 2984;
				
					case 57:
						return 2991;
				
					case 58:
						return 2998;
				
					case 59:
						return 3005;
				
					case 60:
						return 3012;
				
					case 61:
						return 3019;
				
					case 62:
						return 3026;
				
					case 63:
						return 3032;
				
					case 64:
						return 3038;
				
					case 65:
						return 3239;
				
					case 66:
						return 3247;
				
					case 67:
						return 3255;
				
					case 68:
						return 3263;
				
					case 69:
						return 3271;
				
					case 70:
						return 3279;
				
					case 71:
						return 3287;
				
					case 72:
						return 3295;
				
					case 73:
						return 3303;
				
					case 74:
						return 3311;
				
					case 75:
						return 3319;
				
					case 76:
						return 3327;
				
					case 77:
						return 3335;
				
					case 78:
						return 3343;
				
					case 79:
						return 3351;
				
					case 80:
						return 3359;
				
					case 81:
						return 3367;
				
					case 82:
						return 3375;
				
					case 83:
						return 3383;
				
					case 84:
						return 3391;
				
					case 85:
						return 3399;
				
					case 86:
						return 3406;
				
					case 87:
						return 3413;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4035;
				
					case 89:
						return 4043;
				
					case 90:
						return 4051;
				
					case 91:
						return 4059;
				
					case 92:
						return 4067;
				
					case 93:
						return 4075;
				
					case 94:
						return 4083;
				
					case 95:
						return 4091;
				
					case 96:
						return 4099;
				
					case 97:
						return 4107;
				
					case 98:
						return 4115;
				
					case 99:
						return 4123;
				
					case 100:
						return 4131;
				
					case 101:
						return 4139;
				
					case 102:
						return 4147;
				
					case 103:
						return 4155;
				
					case 104:
						return 4163;
				
					case 105:
						return 4171;
				
					case 106:
						return 4179;
				
					case 107:
						return 4187;
				
					case 108:
						return 4195;
				
					case 109:
						return 4203;
				
					case 110:
						return 4211;
				
					case 111:
						return 4219;
				
					case 112:
						return 4227;
				
					case 113:
						return 4235;
				
					case 114:
						return 4243;
				
					case 115:
						return 4251;
				
					case 116:
						return 4259;
				
					case 117:
						return 4267;
				
					case 118:
						return 4275;
				
					case 119:
						return 4283;
				
					case 120:
						return 4291;
				
					case 121:
						return 4299;
				
					case 122:
						return 4307;
				
					case 123:
						return 4315;
				
					case 124:
						return 4323;
				
					case 125:
						return 4331;
				
					case 126:
						return 4339;
				
					case 127:
						return 4347;
				
					case 128:
						return 4355;
				
					case 129:
						return 4363;
				
					case 130:
						return 4371;
				
					case 131:
						return 4379;
				
					case 132:
						return 4387;
				
					case 133:
						return 4395;
				
					case 134:
						return 4403;
				
					case 135:
						return 4411;
				
					case 136:
						return 4419;
				
					case 137:
						return 4427;
				
					case 138:
						return 4435;
				
					case 139:
						return 4443;
				
					case 140:
						return 4451;
				
					case 141:
						return 4459;
				
					case 142:
						return 4467;
				
					case 143:
						return 4475;
				
					case 144:
						return 4483;
				
					case 145:
						return 4491;
				
					case 146:
						return 4499;
				
					case 147:
						return 4507;
				
					case 148:
						return 4515;
				
					case 149:
						return 4523;
				
					case 150:
						return 4531;
				
					case 151:
						return 4539;
				
					case 152:
						return 4547;
				
					case 153:
						return 4555;
				
					case 154:
						return 4563;
				
					case 155:
						return 4571;
				
					case 156:
						return 4579;
				
					case 157:
						return 4587;
				
					case 158:
						return 5480;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5929;
				
					case 160:
						return 5936;
				
					case 161:
						return 5943;
				
					case 162:
						return 5950;
				
					case 163:
						return 5957;
				
					case 164:
						return 5964;
				
					case 165:
						return 5971;
				
					case 166:
						return 5978;
				
					case 167:
						return 5985;
				
					case 168:
						return 5992;
				
					case 169:
						return 5999;
				
					case 170:
						return 6006;
				
					case 171:
						return 6013;
				
					case 172:
						return 6020;
				
					case 173:
						return 6027;
				
					case 174:
						return 6034;
				
					case 175:
						return 6041;
				
					case 176:
						return 6048;
				
					case 177:
						return 6055;
				
					case 178:
						return 6062;
				
					case 179:
						return 6069;
				
					case 180:
						return 6076;
				
					case 181:
						return 6083;
				
					case 182:
						return 6090;
				
					case 183:
						return 6097;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6174;
				
					case 185:
						return 6181;
				
					case 186:
						return 6188;
				
					case 187:
						return 6195;
				
					case 188:
						return 6202;
				
					case 189:
						return 6209;
				
					case 190:
						return 6216;
				
					case 191:
						return 6223;
				
					case 192:
						return 6230;
				
					case 193:
						return 6237;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6571;
				
					case 195:
						return 6578;
				
					case 196:
						return 6585;
				
					case 197:
						return 6592;
				
					case 198:
						return 6599;
				
					case 199:
						return 6606;
				
					case 200:
						return 6613;
				
					case 201:
						return 6620;
				
					case 202:
						return 6627;
				
					case 203:
						return 6634;
				
					case 204:
						return 6641;
				
					case 205:
						return 6648;
				
					case 206:
						return 6655;
				
					case 207:
						return 6662;
				
					case 208:
						return 6669;
				
					case 209:
						return 6676;
				
					case 210:
						return 6683;
				
					case 211:
						return 6690;
				
					case 212:
						return 6697;
				
					case 213:
						return 6704;
				
					case 214:
						return 6711;
				
					case 215:
						return 6718;
				
					case 216:
						return 6725;
				
					case 217:
						return 6732;
				
					case 218:
						return 6739;
				
					case 219:
						return 6746;
				
					case 220:
						return 6753;
				
					case 221:
						return 6760;
				
					case 222:
						return 6767;
				
					case 223:
						return 6774;
				
					case 224:
						return 6781;
				
					case 225:
						return 6788;
				
					case 226:
						return 6795;
				
					case 227:
						return 6802;
				
					case 228:
						return 6809;
				
					case 229:
						return 6816;
				
					case 230:
						return 6823;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7293;
				
					case 232:
						return 7300;
				
					case 233:
						return 7307;
				
					case 234:
						return 7314;
				
					case 235:
						return 7321;
				
					case 236:
						return 7328;
				
					case 237:
						return 7335;
				
					case 238:
						return 7342;
				
					case 239:
						return 7349;
				
					case 240:
						return 7356;
				
					case 241:
						return 7363;
				
					case 242:
						return 7370;
				
					case 243:
						return 7377;
				
					case 244:
						return 7384;
				
					case 245:
						return 7391;
				
					case 246:
						return 7398;
				
					case 247:
						return 7405;
				
					case 248:
						return 7412;
				
					case 249:
						return 7419;
				
					case 250:
						return 7426;
				
					case 251:
						return 7433;
				
					case 252:
						return 7440;
				
					case 253:
						return 7447;
				
					case 254:
						return 7454;
				
					case 255:
						return 7461;
				
					case 256:
						return 7468;
				
					case 257:
						return 7475;
				
					case 258:
						return 7482;
				
					case 259:
						return 7489;
				
					case 260:
						return 7496;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8016;
				
					case 262:
						return 8023;
				
					case 263:
						return 8030;
				
					case 264:
						return 8037;
				
					case 265:
						return 8044;
				
					case 266:
						return 8051;
				
					case 267:
						return 8058;
				
					case 268:
						return 8065;
				
					case 269:
						return 8072;
				
					case 270:
						return 8079;
				
					case 271:
						return 8540;
				
					case 272:
						return 8547;
				
					case 273:
						return 8554;
				
					case 274:
						return 8561;
				
					case 275:
						return 8568;
				
					case 276:
						return 8575;
				
					case 277:
						return 8582;
				
					case 278:
						return 8589;
				
					case 279:
						return 8596;
				
					case 280:
						return 8603;
				
					case 281:
						return 8987;
				
					case 282:
						return 8994;
				
					case 283:
						return 9001;
				
					case 284:
						return 9008;
				
					case 285:
						return 9015;
				
					case 286:
						return 9022;
				
					case 287:
						return 9029;
				
					case 288:
						return 9036;
				
					case 289:
						return 9043;
				
					case 290:
						return 9050;
				
					case 291:
						return 9057;
				
					case 292:
						return 9063;
				
					case 293:
						return 9069;
				
					case 294:
						return 9075;
				
					case 295:
						return 9082;
				
					case 296:
						return 9089;
				
					case 297:
						return 9096;
				
					case 298:
						return 9103;
				
					case 299:
						return 9110;
				
					case 300:
						return 9117;
				
					case 301:
						return 9124;
				
					case 302:
						return 9131;
				
					case 303:
						return 9138;
				
					case 304:
						return 9145;
				
					case 305:
						return 9151;
				
					case 306:
						return 9157;
				
					case 307:
						return 9638;
				
					case 308:
						return 9645;
				
					case 309:
						return 9652;
				
					case 310:
						return 9659;
				
					case 311:
						return 9666;
				
					case 312:
						return 9673;
				
					case 313:
						return 9680;
				
					case 314:
						return 9687;
				
					case 315:
						return 9694;
				
					case 316:
						return 9701;
				
					case 317:
						return 9923;
				
					case 318:
						return 9930;
				
					case 319:
						return 9937;
				
					case 320:
						return 9944;
				
					case 321:
						return 9951;
				
					case 322:
						return 9958;
				
					case 323:
						return 9965;
				
					case 324:
						return 9972;
				
					case 325:
						return 9979;
				
					case 326:
						return 9986;
				
					case 327:
						return 9993;
				
					case 328:
						return 10000;
				
					case 329:
						return 10007;
				
					case 330:
						return 10014;
				
					case 331:
						return 10021;
				
					case 332:
						return 10028;
				
					case 333:
						return 10035;
				
					case 334:
						return 10042;
				
					case 335:
						return 10049;
				
					case 336:
						return 10056;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10449;
				
					case 338:
						return 10456;
				
					case 339:
						return 10463;
				
					case 340:
						return 10470;
				
					case 341:
						return 10477;
				
					case 342:
						return 10484;
				
					case 343:
						return 10491;
				
					case 344:
						return 10498;
				
					case 345:
						return 10505;
				
					case 346:
						return 10512;
				
					case 347:
						return 10519;
				
					case 348:
						return 10525;
				
					case 349:
						return 10531;
				
					case 350:
						return 10537;
				
					case 351:
						return 10544;
				
					case 352:
						return 10551;
				
					case 353:
						return 10558;
				
					case 354:
						return 10565;
				
					case 355:
						return 10572;
				
					case 356:
						return 10579;
				
					case 357:
						return 10586;
				
					case 358:
						return 10593;
				
					case 359:
						return 10600;
				
					case 360:
						return 10607;
				
					case 361:
						return 10613;
				
					case 362:
						return 10619;
				
					default:
						break;
				}
				break;
		
			case 3:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1632;
				
					case PV_COMP_BERD:
						return 1639;
				
					case PV_COMP_HAIR:
						return 1646;
				
					case PV_COMP_UPPR:
						return 1653;
				
					case PV_COMP_LOWR:
						return 1660;
				
					case PV_COMP_HAND:
						return 1667;
				
					case PV_COMP_FEET:
						return 1674;
				
					case PV_COMP_TEEF:
						return 1681;
				
					case PV_COMP_ACCS:
						return 1688;
				
					case PV_COMP_TASK:
						return 1695;
				
					case PV_COMP_DECL:
						return 1702;
				
					case PV_COMP_JBIB:
						return 1708;
				
					case PV_COMP_MAX:
						return 1714;
				
					case 13:
						return 1720;
				
					case 14:
						return 1799;
				
					case 15:
						return 1806;
				
					case 16:
						return 1813;
				
					case 17:
						return 1820;
				
					case 18:
						return 1827;
				
					case 19:
						return 1834;
				
					case 20:
						return 1841;
				
					case 21:
						return 1848;
				
					case 22:
						return 1855;
				
					case 23:
						return 1862;
				
					case 24:
						return 1868;
				
					case 25:
						return 1874;
				
					case 26:
						return 2169;
				
					case 27:
						return 2176;
				
					case 28:
						return 2183;
				
					case 29:
						return 2190;
				
					case 30:
						return 2197;
				
					case 31:
						return 2204;
				
					case 32:
						return 2211;
				
					case 33:
						return 2218;
				
					case 34:
						return 2225;
				
					case 35:
						return 2232;
				
					case 36:
						return 2239;
				
					case 37:
						return 2245;
				
					case 38:
						return 2251;
				
					case 39:
						return 2833;
				
					case 40:
						return 2840;
				
					case 41:
						return 2847;
				
					case 42:
						return 2854;
				
					case 43:
						return 2861;
				
					case 44:
						return 2868;
				
					case 45:
						return 2875;
				
					case 46:
						return 2882;
				
					case 47:
						return 2889;
				
					case 48:
						return 2896;
				
					case 49:
						return 2903;
				
					case 50:
						return 2909;
				
					case 51:
						return 2915;
				
					case 52:
						return 2957;
				
					case 53:
						return 2964;
				
					case 54:
						return 2971;
				
					case 55:
						return 2978;
				
					case 56:
						return 2985;
				
					case 57:
						return 2992;
				
					case 58:
						return 2999;
				
					case 59:
						return 3006;
				
					case 60:
						return 3013;
				
					case 61:
						return 3020;
				
					case 62:
						return 3027;
				
					case 63:
						return 3033;
				
					case 64:
						return 3039;
				
					case 65:
						return 3240;
				
					case 66:
						return 3248;
				
					case 67:
						return 3256;
				
					case 68:
						return 3264;
				
					case 69:
						return 3272;
				
					case 70:
						return 3280;
				
					case 71:
						return 3288;
				
					case 72:
						return 3296;
				
					case 73:
						return 3304;
				
					case 74:
						return 3312;
				
					case 75:
						return 3320;
				
					case 76:
						return 3328;
				
					case 77:
						return 3336;
				
					case 78:
						return 3344;
				
					case 79:
						return 3352;
				
					case 80:
						return 3360;
				
					case 81:
						return 3368;
				
					case 82:
						return 3376;
				
					case 83:
						return 3384;
				
					case 84:
						return 3392;
				
					case 85:
						return 3400;
				
					case 86:
						return 3407;
				
					case 87:
						return 3414;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4036;
				
					case 89:
						return 4044;
				
					case 90:
						return 4052;
				
					case 91:
						return 4060;
				
					case 92:
						return 4068;
				
					case 93:
						return 4076;
				
					case 94:
						return 4084;
				
					case 95:
						return 4092;
				
					case 96:
						return 4100;
				
					case 97:
						return 4108;
				
					case 98:
						return 4116;
				
					case 99:
						return 4124;
				
					case 100:
						return 4132;
				
					case 101:
						return 4140;
				
					case 102:
						return 4148;
				
					case 103:
						return 4156;
				
					case 104:
						return 4164;
				
					case 105:
						return 4172;
				
					case 106:
						return 4180;
				
					case 107:
						return 4188;
				
					case 108:
						return 4196;
				
					case 109:
						return 4204;
				
					case 110:
						return joaat("twi_01");
				
					case 111:
						return 4220;
				
					case 112:
						return 4228;
				
					case 113:
						return 4236;
				
					case 114:
						return 4244;
				
					case 115:
						return 4252;
				
					case 116:
						return 4260;
				
					case 117:
						return 4268;
				
					case 118:
						return 4276;
				
					case 119:
						return 4284;
				
					case 120:
						return 4292;
				
					case 121:
						return 4300;
				
					case 122:
						return 4308;
				
					case 123:
						return 4316;
				
					case 124:
						return 4324;
				
					case 125:
						return 4332;
				
					case 126:
						return 4340;
				
					case 127:
						return 4348;
				
					case 128:
						return 4356;
				
					case 129:
						return 4364;
				
					case 130:
						return 4372;
				
					case 131:
						return 4380;
				
					case 132:
						return 4388;
				
					case 133:
						return 4396;
				
					case 134:
						return 4404;
				
					case 135:
						return 4412;
				
					case 136:
						return 4420;
				
					case 137:
						return 4428;
				
					case 138:
						return 4436;
				
					case 139:
						return 4444;
				
					case 140:
						return 4452;
				
					case 141:
						return 4460;
				
					case 142:
						return 4468;
				
					case 143:
						return 4476;
				
					case 144:
						return 4484;
				
					case 145:
						return 4492;
				
					case 146:
						return 4500;
				
					case 147:
						return 4508;
				
					case 148:
						return 4516;
				
					case 149:
						return 4524;
				
					case 150:
						return 4532;
				
					case 151:
						return 4540;
				
					case 152:
						return 4548;
				
					case 153:
						return 4556;
				
					case 154:
						return 4564;
				
					case 155:
						return 4572;
				
					case 156:
						return 4580;
				
					case 157:
						return &func_24;
				
					case 158:
						return 5481;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5930;
				
					case 160:
						return 5937;
				
					case 161:
						return 5944;
				
					case 162:
						return 5951;
				
					case 163:
						return 5958;
				
					case 164:
						return 5965;
				
					case 165:
						return 5972;
				
					case 166:
						return 5979;
				
					case 167:
						return 5986;
				
					case 168:
						return 5993;
				
					case 169:
						return 6000;
				
					case 170:
						return 6007;
				
					case 171:
						return 6014;
				
					case 172:
						return 6021;
				
					case 173:
						return 6028;
				
					case 174:
						return 6035;
				
					case 175:
						return 6042;
				
					case 176:
						return 6049;
				
					case 177:
						return 6056;
				
					case 178:
						return 6063;
				
					case 179:
						return 6070;
				
					case 180:
						return 6077;
				
					case 181:
						return 6084;
				
					case 182:
						return 6091;
				
					case 183:
						return 6098;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6175;
				
					case 185:
						return 6182;
				
					case 186:
						return 6189;
				
					case 187:
						return 6196;
				
					case 188:
						return 6203;
				
					case 189:
						return 6210;
				
					case 190:
						return 6217;
				
					case 191:
						return 6224;
				
					case 192:
						return 6231;
				
					case 193:
						return 6238;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6572;
				
					case 195:
						return 6579;
				
					case 196:
						return 6586;
				
					case 197:
						return 6593;
				
					case 198:
						return 6600;
				
					case 199:
						return 6607;
				
					case 200:
						return 6614;
				
					case 201:
						return 6621;
				
					case 202:
						return 6628;
				
					case 203:
						return 6635;
				
					case 204:
						return 6642;
				
					case 205:
						return 6649;
				
					case 206:
						return 6656;
				
					case 207:
						return 6663;
				
					case 208:
						return 6670;
				
					case 209:
						return 6677;
				
					case 210:
						return 6684;
				
					case 211:
						return 6691;
				
					case 212:
						return 6698;
				
					case 213:
						return 6705;
				
					case 214:
						return 6712;
				
					case 215:
						return 6719;
				
					case 216:
						return 6726;
				
					case 217:
						return 6733;
				
					case 218:
						return 6740;
				
					case 219:
						return 6747;
				
					case 220:
						return 6754;
				
					case 221:
						return 6761;
				
					case 222:
						return 6768;
				
					case 223:
						return 6775;
				
					case 224:
						return 6782;
				
					case 225:
						return 6789;
				
					case 226:
						return 6796;
				
					case 227:
						return 6803;
				
					case 228:
						return 6810;
				
					case 229:
						return 6817;
				
					case 230:
						return 6824;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7294;
				
					case 232:
						return 7301;
				
					case 233:
						return 7308;
				
					case 234:
						return 7315;
				
					case 235:
						return 7322;
				
					case 236:
						return 7329;
				
					case 237:
						return 7336;
				
					case 238:
						return 7343;
				
					case 239:
						return 7350;
				
					case 240:
						return 7357;
				
					case 241:
						return 7364;
				
					case 242:
						return 7371;
				
					case 243:
						return 7378;
				
					case 244:
						return 7385;
				
					case 245:
						return 7392;
				
					case 246:
						return 7399;
				
					case 247:
						return 7406;
				
					case 248:
						return 7413;
				
					case 249:
						return 7420;
				
					case 250:
						return 7427;
				
					case 251:
						return 7434;
				
					case 252:
						return 7441;
				
					case 253:
						return 7448;
				
					case 254:
						return 7455;
				
					case 255:
						return 7462;
				
					case 256:
						return 7469;
				
					case 257:
						return 7476;
				
					case 258:
						return 7483;
				
					case 259:
						return 7490;
				
					case 260:
						return 7497;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8017;
				
					case 262:
						return 8024;
				
					case 263:
						return 8031;
				
					case 264:
						return 8038;
				
					case 265:
						return 8045;
				
					case 266:
						return 8052;
				
					case 267:
						return 8059;
				
					case 268:
						return 8066;
				
					case 269:
						return 8073;
				
					case 270:
						return 8080;
				
					case 271:
						return 8541;
				
					case 272:
						return 8548;
				
					case 273:
						return 8555;
				
					case 274:
						return 8562;
				
					case 275:
						return 8569;
				
					case 276:
						return 8576;
				
					case 277:
						return 8583;
				
					case 278:
						return 8590;
				
					case 279:
						return 8597;
				
					case 280:
						return 8604;
				
					case 281:
						return 8988;
				
					case 282:
						return 8995;
				
					case 283:
						return 9002;
				
					case 284:
						return 9009;
				
					case 285:
						return 9016;
				
					case 286:
						return 9023;
				
					case 287:
						return 9030;
				
					case 288:
						return 9037;
				
					case 289:
						return 9044;
				
					case 290:
						return 9051;
				
					case 291:
						return 9058;
				
					case 292:
						return 9064;
				
					case 293:
						return 9070;
				
					case 294:
						return 9076;
				
					case 295:
						return 9083;
				
					case 296:
						return 9090;
				
					case 297:
						return 9097;
				
					case 298:
						return 9104;
				
					case 299:
						return 9111;
				
					case 300:
						return 9118;
				
					case 301:
						return 9125;
				
					case 302:
						return 9132;
				
					case 303:
						return 9139;
				
					case 304:
						return 9146;
				
					case 305:
						return 9152;
				
					case 306:
						return 9158;
				
					case 307:
						return 9639;
				
					case 308:
						return 9646;
				
					case 309:
						return 9653;
				
					case 310:
						return 9660;
				
					case 311:
						return 9667;
				
					case 312:
						return 9674;
				
					case 313:
						return 9681;
				
					case 314:
						return 9688;
				
					case 315:
						return 9695;
				
					case 316:
						return 9702;
				
					case 317:
						return 9924;
				
					case 318:
						return 9931;
				
					case 319:
						return 9938;
				
					case 320:
						return 9945;
				
					case 321:
						return 9952;
				
					case 322:
						return 9959;
				
					case 323:
						return 9966;
				
					case 324:
						return 9973;
				
					case 325:
						return 9980;
				
					case 326:
						return 9987;
				
					case 327:
						return 9994;
				
					case 328:
						return 10001;
				
					case 329:
						return 10008;
				
					case 330:
						return 10015;
				
					case 331:
						return 10022;
				
					case 332:
						return 10029;
				
					case 333:
						return 10036;
				
					case 334:
						return 10043;
				
					case 335:
						return 10050;
				
					case 336:
						return 10057;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10450;
				
					case 338:
						return 10457;
				
					case 339:
						return 10464;
				
					case 340:
						return 10471;
				
					case 341:
						return 10478;
				
					case 342:
						return 10485;
				
					case 343:
						return 10492;
				
					case 344:
						return 10499;
				
					case 345:
						return 10506;
				
					case 346:
						return 10513;
				
					case 347:
						return 10520;
				
					case 348:
						return 10526;
				
					case 349:
						return 10532;
				
					case 350:
						return 10538;
				
					case 351:
						return 10545;
				
					case 352:
						return 10552;
				
					case 353:
						return 10559;
				
					case 354:
						return 10566;
				
					case 355:
						return 10573;
				
					case 356:
						return 10580;
				
					case 357:
						return 10587;
				
					case 358:
						return 10594;
				
					case 359:
						return 10601;
				
					case 360:
						return 10608;
				
					case 361:
						return 10614;
				
					case 362:
						return 10620;
				
					default:
						break;
				}
				break;
		
			case 4:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1633;
				
					case PV_COMP_BERD:
						return 1640;
				
					case PV_COMP_HAIR:
						return 1647;
				
					case PV_COMP_UPPR:
						return 1654;
				
					case PV_COMP_LOWR:
						return 1661;
				
					case PV_COMP_HAND:
						return 1668;
				
					case PV_COMP_FEET:
						return 1675;
				
					case PV_COMP_TEEF:
						return 1682;
				
					case PV_COMP_ACCS:
						return 1689;
				
					case PV_COMP_TASK:
						return 1696;
				
					case PV_COMP_DECL:
						return 1703;
				
					case PV_COMP_JBIB:
						return 1709;
				
					case PV_COMP_MAX:
						return 1715;
				
					case 13:
						return 1721;
				
					case 14:
						return 1800;
				
					case 15:
						return 1807;
				
					case 16:
						return 1814;
				
					case 17:
						return 1821;
				
					case 18:
						return 1828;
				
					case 19:
						return 1835;
				
					case 20:
						return 1842;
				
					case 21:
						return 1849;
				
					case 22:
						return 1856;
				
					case 23:
						return 1863;
				
					case 24:
						return 1869;
				
					case 25:
						return 1875;
				
					case 26:
						return 2170;
				
					case 27:
						return 2177;
				
					case 28:
						return 2184;
				
					case 29:
						return 2191;
				
					case 30:
						return 2198;
				
					case 31:
						return 2205;
				
					case 32:
						return 2212;
				
					case 33:
						return 2219;
				
					case 34:
						return 2226;
				
					case 35:
						return 2233;
				
					case 36:
						return 2240;
				
					case 37:
						return 2246;
				
					case 38:
						return 2252;
				
					case 39:
						return 2834;
				
					case 40:
						return 2841;
				
					case 41:
						return 2848;
				
					case 42:
						return 2855;
				
					case 43:
						return 2862;
				
					case 44:
						return 2869;
				
					case 45:
						return 2876;
				
					case 46:
						return 2883;
				
					case 47:
						return 2890;
				
					case 48:
						return 2897;
				
					case 49:
						return 2904;
				
					case 50:
						return 2910;
				
					case 51:
						return 2916;
				
					case 52:
						return 2958;
				
					case 53:
						return 2965;
				
					case 54:
						return 2972;
				
					case 55:
						return 2979;
				
					case 56:
						return 2986;
				
					case 57:
						return 2993;
				
					case 58:
						return 3000;
				
					case 59:
						return 3007;
				
					case 60:
						return 3014;
				
					case 61:
						return 3021;
				
					case 62:
						return 3028;
				
					case 63:
						return 3034;
				
					case 64:
						return 3040;
				
					case 65:
						return 3241;
				
					case 66:
						return 3249;
				
					case 67:
						return 3257;
				
					case 68:
						return 3265;
				
					case 69:
						return 3273;
				
					case 70:
						return 3281;
				
					case 71:
						return 3289;
				
					case 72:
						return 3297;
				
					case 73:
						return 3305;
				
					case 74:
						return 3313;
				
					case 75:
						return 3321;
				
					case 76:
						return 3329;
				
					case 77:
						return 3337;
				
					case 78:
						return 3345;
				
					case 79:
						return 3353;
				
					case 80:
						return 3361;
				
					case 81:
						return 3369;
				
					case 82:
						return 3377;
				
					case 83:
						return 3385;
				
					case 84:
						return 3393;
				
					case 85:
						return 3401;
				
					case 86:
						return 3408;
				
					case 87:
						return 3415;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4037;
				
					case 89:
						return 4045;
				
					case 90:
						return 4053;
				
					case 91:
						return 4061;
				
					case 92:
						return 4069;
				
					case 93:
						return 4077;
				
					case 94:
						return 4085;
				
					case 95:
						return 4093;
				
					case 96:
						return 4101;
				
					case 97:
						return 4109;
				
					case 98:
						return 4117;
				
					case 99:
						return 4125;
				
					case 100:
						return 4133;
				
					case 101:
						return 4141;
				
					case 102:
						return 4149;
				
					case 103:
						return 4157;
				
					case 104:
						return 4165;
				
					case 105:
						return 4173;
				
					case 106:
						return 4181;
				
					case 107:
						return 4189;
				
					case 108:
						return 4197;
				
					case 109:
						return 4205;
				
					case 110:
						return 4213;
				
					case 111:
						return 4221;
				
					case 112:
						return 4229;
				
					case 113:
						return 4237;
				
					case 114:
						return 4245;
				
					case 115:
						return 4253;
				
					case 116:
						return 4261;
				
					case 117:
						return 4269;
				
					case 118:
						return 4277;
				
					case 119:
						return 4285;
				
					case 120:
						return 4293;
				
					case 121:
						return 4301;
				
					case 122:
						return 4309;
				
					case 123:
						return 4317;
				
					case 124:
						return 4325;
				
					case 125:
						return 4333;
				
					case 126:
						return 4341;
				
					case 127:
						return 4349;
				
					case 128:
						return 4357;
				
					case 129:
						return 4365;
				
					case 130:
						return 4373;
				
					case 131:
						return 4381;
				
					case 132:
						return 4389;
				
					case 133:
						return 4397;
				
					case 134:
						return 4405;
				
					case 135:
						return 4413;
				
					case 136:
						return 4421;
				
					case 137:
						return 4429;
				
					case 138:
						return 4437;
				
					case 139:
						return 4445;
				
					case 140:
						return 4453;
				
					case 141:
						return 4461;
				
					case 142:
						return 4469;
				
					case 143:
						return 4477;
				
					case 144:
						return 4485;
				
					case 145:
						return 4493;
				
					case 146:
						return 4501;
				
					case 147:
						return 4509;
				
					case 148:
						return 4517;
				
					case 149:
						return 4525;
				
					case 150:
						return 4533;
				
					case 151:
						return 4541;
				
					case 152:
						return 4549;
				
					case 153:
						return 4557;
				
					case 154:
						return 4565;
				
					case 155:
						return 4573;
				
					case 156:
						return 4581;
				
					case 157:
						return 4589;
				
					case 158:
						return 5482;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5931;
				
					case 160:
						return 5938;
				
					case 161:
						return 5945;
				
					case 162:
						return 5952;
				
					case 163:
						return 5959;
				
					case 164:
						return 5966;
				
					case 165:
						return 5973;
				
					case 166:
						return 5980;
				
					case 167:
						return 5987;
				
					case 168:
						return 5994;
				
					case 169:
						return 6001;
				
					case 170:
						return 6008;
				
					case 171:
						return 6015;
				
					case 172:
						return 6022;
				
					case 173:
						return 6029;
				
					case 174:
						return 6036;
				
					case 175:
						return 6043;
				
					case 176:
						return 6050;
				
					case 177:
						return 6057;
				
					case 178:
						return 6064;
				
					case 179:
						return 6071;
				
					case 180:
						return 6078;
				
					case 181:
						return 6085;
				
					case 182:
						return 6092;
				
					case 183:
						return 6099;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6176;
				
					case 185:
						return 6183;
				
					case 186:
						return 6190;
				
					case 187:
						return 6197;
				
					case 188:
						return 6204;
				
					case 189:
						return 6211;
				
					case 190:
						return 6218;
				
					case 191:
						return 6225;
				
					case 192:
						return 6232;
				
					case 193:
						return 6239;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6573;
				
					case 195:
						return 6580;
				
					case 196:
						return 6587;
				
					case 197:
						return 6594;
				
					case 198:
						return 6601;
				
					case 199:
						return 6608;
				
					case 200:
						return 6615;
				
					case 201:
						return 6622;
				
					case 202:
						return 6629;
				
					case 203:
						return 6636;
				
					case 204:
						return 6643;
				
					case 205:
						return 6650;
				
					case 206:
						return 6657;
				
					case 207:
						return 6664;
				
					case 208:
						return 6671;
				
					case 209:
						return 6678;
				
					case 210:
						return 6685;
				
					case 211:
						return 6692;
				
					case 212:
						return 6699;
				
					case 213:
						return 6706;
				
					case 214:
						return 6713;
				
					case 215:
						return 6720;
				
					case 216:
						return 6727;
				
					case 217:
						return 6734;
				
					case 218:
						return 6741;
				
					case 219:
						return 6748;
				
					case 220:
						return 6755;
				
					case 221:
						return 6762;
				
					case 222:
						return 6769;
				
					case 223:
						return 6776;
				
					case 224:
						return 6783;
				
					case 225:
						return 6790;
				
					case 226:
						return 6797;
				
					case 227:
						return 6804;
				
					case 228:
						return 6811;
				
					case 229:
						return 6818;
				
					case 230:
						return 6825;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7295;
				
					case 232:
						return 7302;
				
					case 233:
						return 7309;
				
					case 234:
						return 7316;
				
					case 235:
						return 7323;
				
					case 236:
						return 7330;
				
					case 237:
						return 7337;
				
					case 238:
						return 7344;
				
					case 239:
						return 7351;
				
					case 240:
						return 7358;
				
					case 241:
						return 7365;
				
					case 242:
						return 7372;
				
					case 243:
						return joaat("PRI2_HIJLF");
				
					case 244:
						return 7386;
				
					case 245:
						return 7393;
				
					case 246:
						return 7400;
				
					case 247:
						return 7407;
				
					case 248:
						return 7414;
				
					case 249:
						return 7421;
				
					case 250:
						return 7428;
				
					case 251:
						return 7435;
				
					case 252:
						return 7442;
				
					case 253:
						return 7449;
				
					case 254:
						return 7456;
				
					case 255:
						return 7463;
				
					case 256:
						return 7470;
				
					case 257:
						return 7477;
				
					case 258:
						return 7484;
				
					case 259:
						return 7491;
				
					case 260:
						return 7498;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8018;
				
					case 262:
						return 8025;
				
					case 263:
						return 8032;
				
					case 264:
						return 8039;
				
					case 265:
						return 8046;
				
					case 266:
						return 8053;
				
					case 267:
						return 8060;
				
					case 268:
						return 8067;
				
					case 269:
						return 8074;
				
					case 270:
						return 8081;
				
					case 271:
						return 8542;
				
					case 272:
						return 8549;
				
					case 273:
						return 8556;
				
					case 274:
						return 8563;
				
					case 275:
						return 8570;
				
					case 276:
						return 8577;
				
					case 277:
						return 8584;
				
					case 278:
						return 8591;
				
					case 279:
						return 8598;
				
					case 280:
						return 8605;
				
					case 281:
						return 8989;
				
					case 282:
						return 8996;
				
					case 283:
						return 9003;
				
					case 284:
						return 9010;
				
					case 285:
						return 9017;
				
					case 286:
						return 9024;
				
					case 287:
						return 9031;
				
					case 288:
						return 9038;
				
					case 289:
						return 9045;
				
					case 290:
						return 9052;
				
					case 291:
						return 9059;
				
					case 292:
						return 9065;
				
					case 293:
						return 9071;
				
					case 294:
						return 9077;
				
					case 295:
						return 9084;
				
					case 296:
						return 9091;
				
					case 297:
						return 9098;
				
					case 298:
						return 9105;
				
					case 299:
						return 9112;
				
					case 300:
						return 9119;
				
					case 301:
						return 9126;
				
					case 302:
						return 9133;
				
					case 303:
						return 9140;
				
					case 304:
						return 9147;
				
					case 305:
						return 9153;
				
					case 306:
						return 9159;
				
					case 307:
						return 9640;
				
					case 308:
						return 9647;
				
					case 309:
						return 9654;
				
					case 310:
						return 9661;
				
					case 311:
						return 9668;
				
					case 312:
						return 9675;
				
					case 313:
						return 9682;
				
					case 314:
						return 9689;
				
					case 315:
						return 9696;
				
					case 316:
						return 9703;
				
					case 317:
						return 9925;
				
					case 318:
						return 9932;
				
					case 319:
						return 9939;
				
					case 320:
						return 9946;
				
					case 321:
						return 9953;
				
					case 322:
						return 9960;
				
					case 323:
						return 9967;
				
					case 324:
						return 9974;
				
					case 325:
						return 9981;
				
					case 326:
						return 9988;
				
					case 327:
						return 9995;
				
					case 328:
						return 10002;
				
					case 329:
						return 10009;
				
					case 330:
						return 10016;
				
					case 331:
						return 10023;
				
					case 332:
						return 10030;
				
					case 333:
						return 10037;
				
					case 334:
						return 10044;
				
					case 335:
						return 10051;
				
					case 336:
						return 10058;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10451;
				
					case 338:
						return 10458;
				
					case 339:
						return 10465;
				
					case 340:
						return 10472;
				
					case 341:
						return 10479;
				
					case 342:
						return 10486;
				
					case 343:
						return 10493;
				
					case 344:
						return 10500;
				
					case 345:
						return 10507;
				
					case 346:
						return 10514;
				
					case 347:
						return 10521;
				
					case 348:
						return 10527;
				
					case 349:
						return 10533;
				
					case 350:
						return 10539;
				
					case 351:
						return 10546;
				
					case 352:
						return 10553;
				
					case 353:
						return 10560;
				
					case 354:
						return 10567;
				
					case 355:
						return 10574;
				
					case 356:
						return 10581;
				
					case 357:
						return 10588;
				
					case 358:
						return 10595;
				
					case 359:
						return 10602;
				
					case 360:
						return 10609;
				
					case 361:
						return 10615;
				
					case 362:
						return 10621;
				
					default:
						break;
				}
				break;
		
			case 5:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1634;
				
					case PV_COMP_BERD:
						return 1641;
				
					case PV_COMP_HAIR:
						return 1648;
				
					case PV_COMP_UPPR:
						return 1655;
				
					case PV_COMP_LOWR:
						return 1662;
				
					case PV_COMP_HAND:
						return 1669;
				
					case PV_COMP_FEET:
						return 1676;
				
					case PV_COMP_TEEF:
						return 1683;
				
					case PV_COMP_ACCS:
						return 1690;
				
					case PV_COMP_TASK:
						return 1697;
				
					case PV_COMP_DECL:
						return 1704;
				
					case PV_COMP_JBIB:
						return 1710;
				
					case PV_COMP_MAX:
						return 1716;
				
					case 13:
						return 1722;
				
					case 14:
						return 1801;
				
					case 15:
						return 1808;
				
					case 16:
						return 1815;
				
					case 17:
						return 1822;
				
					case 18:
						return 1829;
				
					case 19:
						return 1836;
				
					case 20:
						return 1843;
				
					case 21:
						return 1850;
				
					case 22:
						return 1857;
				
					case 23:
						return 1864;
				
					case 24:
						return 1870;
				
					case 25:
						return 1876;
				
					case 26:
						return 2171;
				
					case 27:
						return 2178;
				
					case 28:
						return 2185;
				
					case 29:
						return 2192;
				
					case 30:
						return 2199;
				
					case 31:
						return 2206;
				
					case 32:
						return 2213;
				
					case 33:
						return 2220;
				
					case 34:
						return 2227;
				
					case 35:
						return 2234;
				
					case 36:
						return 2241;
				
					case 37:
						return 2247;
				
					case 38:
						return 2253;
				
					case 39:
						return 2835;
				
					case 40:
						return 2842;
				
					case 41:
						return 2849;
				
					case 42:
						return 2856;
				
					case 43:
						return 2863;
				
					case 44:
						return 2870;
				
					case 45:
						return 2877;
				
					case 46:
						return 2884;
				
					case 47:
						return 2891;
				
					case 48:
						return 2898;
				
					case 49:
						return 2905;
				
					case 50:
						return 2911;
				
					case 51:
						return 2917;
				
					case 52:
						return 2959;
				
					case 53:
						return 2966;
				
					case 54:
						return 2973;
				
					case 55:
						return 2980;
				
					case 56:
						return 2987;
				
					case 57:
						return 2994;
				
					case 58:
						return 3001;
				
					case 59:
						return 3008;
				
					case 60:
						return 3015;
				
					case 61:
						return 3022;
				
					case 62:
						return 3029;
				
					case 63:
						return 3035;
				
					case 64:
						return 3041;
				
					case 65:
						return 3242;
				
					case 66:
						return 3250;
				
					case 67:
						return 3258;
				
					case 68:
						return 3266;
				
					case 69:
						return 3274;
				
					case 70:
						return 3282;
				
					case 71:
						return 3290;
				
					case 72:
						return 3298;
				
					case 73:
						return 3306;
				
					case 74:
						return 3314;
				
					case 75:
						return 3322;
				
					case 76:
						return 3330;
				
					case 77:
						return 3338;
				
					case 78:
						return 3346;
				
					case 79:
						return 3354;
				
					case 80:
						return 3362;
				
					case 81:
						return 3370;
				
					case 82:
						return 3378;
				
					case 83:
						return 3386;
				
					case 84:
						return 3394;
				
					case 85:
						return 3402;
				
					case 86:
						return 3409;
				
					case 87:
						return 3416;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4038;
				
					case 89:
						return 4046;
				
					case 90:
						return 4054;
				
					case 91:
						return 4062;
				
					case 92:
						return 4070;
				
					case 93:
						return 4078;
				
					case 94:
						return &_STAT_GET_PACKED_INT;
				
					case 95:
						return 4094;
				
					case 96:
						return 4102;
				
					case 97:
						return 4110;
				
					case 98:
						return 4118;
				
					case 99:
						return 4126;
				
					case 100:
						return 4134;
				
					case 101:
						return &func_22;
				
					case 102:
						return 4150;
				
					case 103:
						return 4158;
				
					case 104:
						return 4166;
				
					case 105:
						return 4174;
				
					case 106:
						return 4182;
				
					case 107:
						return 4190;
				
					case 108:
						return 4198;
				
					case 109:
						return 4206;
				
					case 110:
						return 4214;
				
					case 111:
						return 4222;
				
					case 112:
						return 4230;
				
					case 113:
						return 4238;
				
					case 114:
						return 4246;
				
					case 115:
						return 4254;
				
					case 116:
						return 4262;
				
					case 117:
						return 4270;
				
					case 118:
						return 4278;
				
					case 119:
						return 4286;
				
					case 120:
						return 4294;
				
					case 121:
						return 4302;
				
					case 122:
						return 4310;
				
					case 123:
						return 4318;
				
					case 124:
						return 4326;
				
					case 125:
						return 4334;
				
					case 126:
						return 4342;
				
					case 127:
						return 4350;
				
					case 128:
						return 4358;
				
					case 129:
						return 4366;
				
					case 130:
						return 4374;
				
					case 131:
						return 4382;
				
					case 132:
						return 4390;
				
					case 133:
						return 4398;
				
					case 134:
						return 4406;
				
					case 135:
						return 4414;
				
					case 136:
						return 4422;
				
					case 137:
						return 4430;
				
					case 138:
						return 4438;
				
					case 139:
						return 4446;
				
					case 140:
						return 4454;
				
					case 141:
						return 4462;
				
					case 142:
						return 4470;
				
					case 143:
						return 4478;
				
					case 144:
						return 4486;
				
					case 145:
						return 4494;
				
					case 146:
						return 4502;
				
					case 147:
						return 4510;
				
					case 148:
						return 4518;
				
					case 149:
						return 4526;
				
					case 150:
						return 4534;
				
					case 151:
						return 4542;
				
					case 152:
						return 4550;
				
					case 153:
						return 4558;
				
					case 154:
						return 4566;
				
					case 155:
						return 4574;
				
					case 156:
						return 4582;
				
					case 157:
						return 4590;
				
					case 158:
						return 5483;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5932;
				
					case 160:
						return 5939;
				
					case 161:
						return 5946;
				
					case 162:
						return 5953;
				
					case 163:
						return 5960;
				
					case 164:
						return 5967;
				
					case 165:
						return 5974;
				
					case 166:
						return 5981;
				
					case 167:
						return 5988;
				
					case 168:
						return 5995;
				
					case 169:
						return 6002;
				
					case 170:
						return 6009;
				
					case 171:
						return 6016;
				
					case 172:
						return 6023;
				
					case 173:
						return 6030;
				
					case 174:
						return 6037;
				
					case 175:
						return 6044;
				
					case 176:
						return 6051;
				
					case 177:
						return 6058;
				
					case 178:
						return 6065;
				
					case 179:
						return 6072;
				
					case 180:
						return 6079;
				
					case 181:
						return 6086;
				
					case 182:
						return 6093;
				
					case 183:
						return 6100;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6177;
				
					case 185:
						return 6184;
				
					case 186:
						return 6191;
				
					case 187:
						return 6198;
				
					case 188:
						return 6205;
				
					case 189:
						return 6212;
				
					case 190:
						return 6219;
				
					case 191:
						return 6226;
				
					case 192:
						return 6233;
				
					case 193:
						return 6240;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6574;
				
					case 195:
						return 6581;
				
					case 196:
						return 6588;
				
					case 197:
						return 6595;
				
					case 198:
						return 6602;
				
					case 199:
						return 6609;
				
					case 200:
						return 6616;
				
					case 201:
						return 6623;
				
					case 202:
						return 6630;
				
					case 203:
						return 6637;
				
					case 204:
						return 6644;
				
					case 205:
						return 6651;
				
					case 206:
						return 6658;
				
					case 207:
						return 6665;
				
					case 208:
						return 6672;
				
					case 209:
						return 6679;
				
					case 210:
						return 6686;
				
					case 211:
						return 6693;
				
					case 212:
						return 6700;
				
					case 213:
						return 6707;
				
					case 214:
						return 6714;
				
					case 215:
						return 6721;
				
					case 216:
						return 6728;
				
					case 217:
						return 6735;
				
					case 218:
						return 6742;
				
					case 219:
						return 6749;
				
					case 220:
						return 6756;
				
					case 221:
						return 6763;
				
					case 222:
						return 6770;
				
					case 223:
						return 6777;
				
					case 224:
						return 6784;
				
					case 225:
						return 6791;
				
					case 226:
						return 6798;
				
					case 227:
						return 6805;
				
					case 228:
						return 6812;
				
					case 229:
						return 6819;
				
					case 230:
						return 6826;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7296;
				
					case 232:
						return 7303;
				
					case 233:
						return 7310;
				
					case 234:
						return 7317;
				
					case 235:
						return 7324;
				
					case 236:
						return 7331;
				
					case 237:
						return 7338;
				
					case 238:
						return 7345;
				
					case 239:
						return 7352;
				
					case 240:
						return 7359;
				
					case 241:
						return 7366;
				
					case 242:
						return 7373;
				
					case 243:
						return 7380;
				
					case 244:
						return 7387;
				
					case 245:
						return 7394;
				
					case 246:
						return 7401;
				
					case 247:
						return 7408;
				
					case 248:
						return 7415;
				
					case 249:
						return 7422;
				
					case 250:
						return 7429;
				
					case 251:
						return 7436;
				
					case 252:
						return 7443;
				
					case 253:
						return 7450;
				
					case 254:
						return 7457;
				
					case 255:
						return 7464;
				
					case 256:
						return 7471;
				
					case 257:
						return 7478;
				
					case 258:
						return 7485;
				
					case 259:
						return 7492;
				
					case 260:
						return 7499;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8019;
				
					case 262:
						return 8026;
				
					case 263:
						return 8033;
				
					case 264:
						return 8040;
				
					case 265:
						return 8047;
				
					case 266:
						return 8054;
				
					case 267:
						return 8061;
				
					case 268:
						return 8068;
				
					case 269:
						return 8075;
				
					case 270:
						return 8082;
				
					case 271:
						return 8543;
				
					case 272:
						return 8550;
				
					case 273:
						return 8557;
				
					case 274:
						return 8564;
				
					case 275:
						return 8571;
				
					case 276:
						return 8578;
				
					case 277:
						return 8585;
				
					case 278:
						return &func_34;
				
					case 279:
						return 8599;
				
					case 280:
						return 8606;
				
					case 281:
						return 8990;
				
					case 282:
						return 8997;
				
					case 283:
						return 9004;
				
					case 284:
						return 9011;
				
					case 285:
						return 9018;
				
					case 286:
						return 9025;
				
					case 287:
						return 9032;
				
					case 288:
						return 9039;
				
					case 289:
						return 9046;
				
					case 290:
						return 9053;
				
					case 291:
						return 9060;
				
					case 292:
						return 9066;
				
					case 293:
						return 9072;
				
					case 294:
						return 9078;
				
					case 295:
						return 9085;
				
					case 296:
						return 9092;
				
					case 297:
						return 9099;
				
					case 298:
						return 9106;
				
					case 299:
						return 9113;
				
					case 300:
						return 9120;
				
					case 301:
						return 9127;
				
					case 302:
						return &func_40;
				
					case 303:
						return 9141;
				
					case 304:
						return 9148;
				
					case 305:
						return 9154;
				
					case 306:
						return 9160;
				
					case 307:
						return 9641;
				
					case 308:
						return 9648;
				
					case 309:
						return 9655;
				
					case 310:
						return 9662;
				
					case 311:
						return 9669;
				
					case 312:
						return 9676;
				
					case 313:
						return 9683;
				
					case 314:
						return 9690;
				
					case 315:
						return 9697;
				
					case 316:
						return 9704;
				
					case 317:
						return 9926;
				
					case 318:
						return 9933;
				
					case 319:
						return 9940;
				
					case 320:
						return 9947;
				
					case 321:
						return 9954;
				
					case 322:
						return 9961;
				
					case 323:
						return 9968;
				
					case 324:
						return 9975;
				
					case 325:
						return 9982;
				
					case 326:
						return 9989;
				
					case 327:
						return 9996;
				
					case 328:
						return 10003;
				
					case 329:
						return 10010;
				
					case 330:
						return 10017;
				
					case 331:
						return 10024;
				
					case 332:
						return 10031;
				
					case 333:
						return 10038;
				
					case 334:
						return 10045;
				
					case 335:
						return 10052;
				
					case 336:
						return 10059;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10452;
				
					case 338:
						return 10459;
				
					case 339:
						return 10466;
				
					case 340:
						return 10473;
				
					case 341:
						return 10480;
				
					case 342:
						return 10487;
				
					case 343:
						return 10494;
				
					case 344:
						return 10501;
				
					case 345:
						return 10508;
				
					case 346:
						return 10515;
				
					case 347:
						return 10522;
				
					case 348:
						return 10528;
				
					case 349:
						return 10534;
				
					case 350:
						return 10540;
				
					case 351:
						return 10547;
				
					case 352:
						return 10554;
				
					case 353:
						return 10561;
				
					case 354:
						return 10568;
				
					case 355:
						return 10575;
				
					case 356:
						return 10582;
				
					case 357:
						return 10589;
				
					case 358:
						return 10596;
				
					case 359:
						return 10603;
				
					case 360:
						return 10610;
				
					case 361:
						return 10616;
				
					case 362:
						return 10622;
				
					default:
						break;
				}
				break;
		
			case 6:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1636;
				
					case PV_COMP_BERD:
						return 1643;
				
					case PV_COMP_HAIR:
						return 1650;
				
					case PV_COMP_UPPR:
						return 1657;
				
					case PV_COMP_LOWR:
						return 1664;
				
					case PV_COMP_HAND:
						return 1671;
				
					case PV_COMP_FEET:
						return &func_11;
				
					case PV_COMP_TEEF:
						return 1685;
				
					case PV_COMP_ACCS:
						return 1692;
				
					case PV_COMP_TASK:
						return 1699;
				
					case 13:
						return 1724;
				
					case 14:
						return 1803;
				
					case 15:
						return 1810;
				
					case 16:
						return 1817;
				
					case 17:
						return 1824;
				
					case 18:
						return 1831;
				
					case 19:
						return 1838;
				
					case 20:
						return 1845;
				
					case 21:
						return 1852;
				
					case 22:
						return 1859;
				
					case 26:
						return 2173;
				
					case 27:
						return 2180;
				
					case 28:
						return 2187;
				
					case 29:
						return 2194;
				
					case 30:
						return 2201;
				
					case 31:
						return 2208;
				
					case 32:
						return 2215;
				
					case 33:
						return 2222;
				
					case 34:
						return 2229;
				
					case 35:
						return 2236;
				
					case 39:
						return 2837;
				
					case 40:
						return 2844;
				
					case 41:
						return 2851;
				
					case 42:
						return 2858;
				
					case 43:
						return 2865;
				
					case 44:
						return 2872;
				
					case 45:
						return 2879;
				
					case 46:
						return 2886;
				
					case 47:
						return 2893;
				
					case 48:
						return 2900;
				
					case 52:
						return 2961;
				
					case 53:
						return 2968;
				
					case 54:
						return 2975;
				
					case 55:
						return 2982;
				
					case 56:
						return 2989;
				
					case 57:
						return 2996;
				
					case 58:
						return 3003;
				
					case 59:
						return 3010;
				
					case 60:
						return 3017;
				
					case 61:
						return 3024;
				
					case 65:
						return 3245;
				
					case 66:
						return 3253;
				
					case 67:
						return 3261;
				
					case 68:
						return 3269;
				
					case 69:
						return 3277;
				
					case 70:
						return 3285;
				
					case 71:
						return 3293;
				
					case 72:
						return 3301;
				
					case 73:
						return 3309;
				
					case 74:
						return 3317;
				
					case 75:
						return 3325;
				
					case 76:
						return 3333;
				
					case 77:
						return 3341;
				
					case 78:
						return 3349;
				
					case 79:
						return 3357;
				
					case 80:
						return 3365;
				
					case 81:
						return 3373;
				
					case 82:
						return 3381;
				
					case 83:
						return 3389;
				
					case 84:
						return 3397;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4041;
				
					case 89:
						return 4049;
				
					case 90:
						return 4057;
				
					case 91:
						return 4065;
				
					case 92:
						return 4073;
				
					case 93:
						return 4081;
				
					case 94:
						return 4089;
				
					case 95:
						return 4097;
				
					case 96:
						return 4105;
				
					case 97:
						return 4113;
				
					case 98:
						return 4121;
				
					case 99:
						return 4129;
				
					case 100:
						return 4137;
				
					case 101:
						return 4145;
				
					case 102:
						return 4153;
				
					case 103:
						return 4161;
				
					case 104:
						return 4169;
				
					case 105:
						return 4177;
				
					case 106:
						return 4185;
				
					case 107:
						return 4193;
				
					case 108:
						return 4201;
				
					case 109:
						return 4209;
				
					case 110:
						return 4217;
				
					case 111:
						return 4225;
				
					case 112:
						return 4233;
				
					case 113:
						return 4241;
				
					case 114:
						return 4249;
				
					case 115:
						return 4257;
				
					case 116:
						return 4265;
				
					case 117:
						return 4273;
				
					case 118:
						return 4281;
				
					case 119:
						return 4289;
				
					case 120:
						return 4297;
				
					case 121:
						return 4305;
				
					case 122:
						return 4313;
				
					case 123:
						return 4321;
				
					case 124:
						return 4329;
				
					case 125:
						return 4337;
				
					case 126:
						return 4345;
				
					case 127:
						return 4353;
				
					case 128:
						return 4361;
				
					case 129:
						return 4369;
				
					case 130:
						return 4377;
				
					case 131:
						return 4385;
				
					case 132:
						return 4393;
				
					case 133:
						return 4401;
				
					case 134:
						return 4409;
				
					case 135:
						return 4417;
				
					case 136:
						return 4425;
				
					case 137:
						return 4433;
				
					case 138:
						return 4441;
				
					case 139:
						return 4449;
				
					case 140:
						return 4457;
				
					case 141:
						return 4465;
				
					case 142:
						return 4473;
				
					case 143:
						return 4481;
				
					case 144:
						return 4489;
				
					case 145:
						return 4497;
				
					case 146:
						return 4505;
				
					case 147:
						return 4513;
				
					case 148:
						return 4521;
				
					case 149:
						return 4529;
				
					case 150:
						return 4537;
				
					case 151:
						return 4545;
				
					case 152:
						return 4553;
				
					case 153:
						return 4561;
				
					case 154:
						return 4569;
				
					case 155:
						return 4577;
				
					case 156:
						return 4585;
				
					case 157:
						return 4593;
				
					case 158:
						return 5486;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5934;
				
					case 160:
						return 5941;
				
					case 161:
						return 5948;
				
					case 162:
						return 5955;
				
					case 163:
						return 5962;
				
					case 164:
						return 5969;
				
					case 165:
						return 5976;
				
					case 166:
						return 5983;
				
					case 167:
						return 5990;
				
					case 168:
						return 5997;
				
					case 169:
						return 6004;
				
					case 170:
						return 6011;
				
					case 171:
						return 6018;
				
					case 172:
						return 6025;
				
					case 173:
						return 6032;
				
					case 174:
						return 6039;
				
					case 175:
						return 6046;
				
					case 176:
						return 6053;
				
					case 177:
						return 6060;
				
					case 178:
						return 6067;
				
					case 179:
						return 6074;
				
					case 180:
						return 6081;
				
					case 181:
						return 6088;
				
					case 182:
						return 6095;
				
					case 183:
						return 6102;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6179;
				
					case 185:
						return &func_26;
				
					case 186:
						return 6193;
				
					case 187:
						return 6200;
				
					case 188:
						return 6207;
				
					case 189:
						return 6214;
				
					case 190:
						return 6221;
				
					case 191:
						return 6228;
				
					case 192:
						return 6235;
				
					case 193:
						return 6242;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6576;
				
					case 195:
						return 6583;
				
					case 196:
						return 6590;
				
					case 197:
						return 6597;
				
					case 198:
						return 6604;
				
					case 199:
						return 6611;
				
					case 200:
						return 6618;
				
					case 201:
						return 6625;
				
					case 202:
						return 6632;
				
					case 203:
						return 6639;
				
					case 204:
						return 6646;
				
					case 205:
						return 6653;
				
					case 206:
						return 6660;
				
					case 207:
						return 6667;
				
					case 208:
						return 6674;
				
					case 209:
						return 6681;
				
					case 210:
						return 6688;
				
					case 211:
						return 6695;
				
					case 212:
						return 6702;
				
					case 213:
						return 6709;
				
					case 214:
						return 6716;
				
					case 215:
						return 6723;
				
					case 216:
						return 6730;
				
					case 217:
						return 6737;
				
					case 218:
						return 6744;
				
					case 219:
						return 6751;
				
					case 220:
						return 6758;
				
					case 221:
						return 6765;
				
					case 222:
						return 6772;
				
					case 223:
						return 6779;
				
					case 224:
						return 6786;
				
					case 225:
						return 6793;
				
					case 226:
						return 6800;
				
					case 227:
						return 6807;
				
					case 228:
						return 6814;
				
					case 229:
						return 6821;
				
					case 230:
						return 6828;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7298;
				
					case 232:
						return 7305;
				
					case 233:
						return 7312;
				
					case 234:
						return 7319;
				
					case 235:
						return 7326;
				
					case 236:
						return 7333;
				
					case 237:
						return 7340;
				
					case 238:
						return 7347;
				
					case 239:
						return 7354;
				
					case 240:
						return 7361;
				
					case 241:
						return 7368;
				
					case 242:
						return 7375;
				
					case 243:
						return 7382;
				
					case 244:
						return 7389;
				
					case 245:
						return 7396;
				
					case 246:
						return 7403;
				
					case 247:
						return 7410;
				
					case 248:
						return 7417;
				
					case 249:
						return 7424;
				
					case 250:
						return 7431;
				
					case 251:
						return 7438;
				
					case 252:
						return 7445;
				
					case 253:
						return 7452;
				
					case 254:
						return 7459;
				
					case 255:
						return 7466;
				
					case 256:
						return 7473;
				
					case 257:
						return 7480;
				
					case 258:
						return 7487;
				
					case 259:
						return 7494;
				
					case 260:
						return 7501;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8021;
				
					case 262:
						return 8028;
				
					case 263:
						return 8035;
				
					case 264:
						return 8042;
				
					case 265:
						return 8049;
				
					case 266:
						return 8056;
				
					case 267:
						return 8063;
				
					case 268:
						return 8070;
				
					case 269:
						return 8077;
				
					case 270:
						return 8084;
				
					case 271:
						return 8545;
				
					case 272:
						return 8552;
				
					case 273:
						return 8559;
				
					case 274:
						return 8566;
				
					case 275:
						return 8573;
				
					case 276:
						return 8580;
				
					case 277:
						return 8587;
				
					case 278:
						return 8594;
				
					case 279:
						return 8601;
				
					case 280:
						return 8608;
				
					case 281:
						return 8992;
				
					case 282:
						return 8999;
				
					case 283:
						return 9006;
				
					case 284:
						return 9013;
				
					case 285:
						return 9020;
				
					case 286:
						return 9027;
				
					case 287:
						return 9034;
				
					case 288:
						return 9041;
				
					case 289:
						return 9048;
				
					case 290:
						return 9055;
				
					case 294:
						return 9080;
				
					case 295:
						return 9087;
				
					case 296:
						return 9094;
				
					case 297:
						return 9101;
				
					case 298:
						return 9108;
				
					case 299:
						return 9115;
				
					case 300:
						return 9122;
				
					case 301:
						return 9129;
				
					case 302:
						return 9136;
				
					case 303:
						return 9143;
				
					case 307:
						return 9643;
				
					case 308:
						return 9650;
				
					case 309:
						return 9657;
				
					case 310:
						return 9664;
				
					case 311:
						return 9671;
				
					case 312:
						return 9678;
				
					case 313:
						return 9685;
				
					case 314:
						return &func_49;
				
					case 315:
						return 9699;
				
					case 316:
						return 9706;
				
					case 317:
						return 9928;
				
					case 318:
						return 9935;
				
					case 319:
						return 9942;
				
					case 320:
						return 9949;
				
					case 321:
						return 9956;
				
					case 322:
						return 9963;
				
					case 323:
						return 9970;
				
					case 324:
						return 9977;
				
					case 325:
						return 9984;
				
					case 326:
						return 9991;
				
					case 327:
						return 9998;
				
					case 328:
						return 10005;
				
					case 329:
						return 10012;
				
					case 330:
						return 10019;
				
					case 331:
						return 10026;
				
					case 332:
						return 10033;
				
					case 333:
						return 10040;
				
					case 334:
						return 10047;
				
					case 335:
						return 10054;
				
					case 336:
						return 10061;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10454;
				
					case 338:
						return 10461;
				
					case 339:
						return 10468;
				
					case 340:
						return 10475;
				
					case 341:
						return 10482;
				
					case 342:
						return 10489;
				
					case 343:
						return 10496;
				
					case 344:
						return 10503;
				
					case 345:
						return 10510;
				
					case 346:
						return 10517;
				
					case 350:
						return 10542;
				
					case 351:
						return 10549;
				
					case 352:
						return 10556;
				
					case 353:
						return 10563;
				
					case 354:
						return 10570;
				
					case 355:
						return 10577;
				
					case 356:
						return 10584;
				
					case 357:
						return 10591;
				
					case 358:
						return 10598;
				
					case 359:
						return 10605;
				
					default:
						break;
				}
				break;
		
			case 7:
				switch (epctParam1)
				{
					case PV_COMP_HEAD:
						return 1635;
				
					case PV_COMP_BERD:
						return 1642;
				
					case PV_COMP_HAIR:
						return 1649;
				
					case PV_COMP_UPPR:
						return 1656;
				
					case PV_COMP_LOWR:
						return 1663;
				
					case PV_COMP_HAND:
						return 1670;
				
					case PV_COMP_FEET:
						return 1677;
				
					case PV_COMP_TEEF:
						return 1684;
				
					case PV_COMP_ACCS:
						return 1691;
				
					case PV_COMP_TASK:
						return 1698;
				
					case PV_COMP_DECL:
						return 1705;
				
					case PV_COMP_JBIB:
						return 1711;
				
					case PV_COMP_MAX:
						return 1717;
				
					case 13:
						return 1723;
				
					case 14:
						return 1802;
				
					case 15:
						return 1809;
				
					case 16:
						return 1816;
				
					case 17:
						return 1823;
				
					case 18:
						return 1830;
				
					case 19:
						return 1837;
				
					case 20:
						return 1844;
				
					case 21:
						return 1851;
				
					case 22:
						return 1858;
				
					case 23:
						return 1865;
				
					case 24:
						return 1871;
				
					case 25:
						return 1877;
				
					case 26:
						return 2172;
				
					case 27:
						return 2179;
				
					case 28:
						return 2186;
				
					case 29:
						return 2193;
				
					case 30:
						return 2200;
				
					case 31:
						return 2207;
				
					case 32:
						return 2214;
				
					case 33:
						return 2221;
				
					case 34:
						return 2228;
				
					case 35:
						return 2235;
				
					case 36:
						return 2242;
				
					case 37:
						return 2248;
				
					case 38:
						return 2254;
				
					case 39:
						return 2836;
				
					case 40:
						return 2843;
				
					case 41:
						return 2850;
				
					case 42:
						return 2857;
				
					case 43:
						return 2864;
				
					case 44:
						return 2871;
				
					case 45:
						return 2878;
				
					case 46:
						return 2885;
				
					case 47:
						return 2892;
				
					case 48:
						return 2899;
				
					case 49:
						return 2906;
				
					case 50:
						return 2912;
				
					case 51:
						return 2918;
				
					case 52:
						return 2960;
				
					case 53:
						return 2967;
				
					case 54:
						return 2974;
				
					case 55:
						return 2981;
				
					case 56:
						return 2988;
				
					case 57:
						return 2995;
				
					case 58:
						return 3002;
				
					case 59:
						return 3009;
				
					case 60:
						return 3016;
				
					case 61:
						return 3023;
				
					case 62:
						return 3030;
				
					case 63:
						return 3036;
				
					case 64:
						return 3042;
				
					case 65:
						return 3243;
				
					case 66:
						return 3251;
				
					case 67:
						return 3259;
				
					case 68:
						return 3267;
				
					case 69:
						return 3275;
				
					case 70:
						return 3283;
				
					case 71:
						return 3291;
				
					case 72:
						return 3299;
				
					case 73:
						return 3307;
				
					case 74:
						return 3315;
				
					case 75:
						return 3323;
				
					case 76:
						return 3331;
				
					case 77:
						return 3340;
				
					case 78:
						return 3348;
				
					case 79:
						return 3355;
				
					case 80:
						return 3363;
				
					case 81:
						return 3371;
				
					case 82:
						return 3379;
				
					case 83:
						return 3387;
				
					case 84:
						return 3395;
				
					case 85:
						return &func_19;
				
					case 86:
						return joaat("TNFUD_GO2_2A");
				
					case 87:
						return 3417;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 88:
						return 4039;
				
					case 89:
						return 4047;
				
					case 90:
						return 4055;
				
					case 91:
						return 4063;
				
					case 92:
						return 4071;
				
					case 93:
						return 4079;
				
					case 94:
						return 4087;
				
					case 95:
						return 4095;
				
					case 96:
						return 4103;
				
					case 97:
						return 4111;
				
					case 98:
						return 4119;
				
					case 99:
						return 4127;
				
					case 100:
						return 4136;
				
					case 101:
						return 4144;
				
					case 102:
						return 4151;
				
					case 103:
						return 4159;
				
					case 104:
						return 4167;
				
					case 105:
						return 4175;
				
					case 106:
						return 4183;
				
					case 107:
						return 4191;
				
					case 108:
						return 4199;
				
					case 109:
						return 4207;
				
					case 110:
						return 4215;
				
					case 111:
						return 4223;
				
					case 112:
						return 4231;
				
					case 113:
						return 4239;
				
					case 114:
						return 4247;
				
					case 115:
						return 4255;
				
					case 116:
						return 4263;
				
					case 117:
						return 4271;
				
					case 118:
						return 4279;
				
					case 119:
						return 4287;
				
					case 120:
						return 4296;
				
					case 121:
						return 4304;
				
					case 122:
						return 4311;
				
					case 123:
						return 4319;
				
					case 124:
						return 4327;
				
					case 125:
						return 4335;
				
					case 126:
						return 4343;
				
					case 127:
						return 4351;
				
					case 128:
						return 4359;
				
					case 129:
						return 4367;
				
					case 130:
						return 4375;
				
					case 131:
						return 4383;
				
					case 132:
						return 4391;
				
					case 133:
						return 4399;
				
					case 134:
						return 4407;
				
					case 135:
						return 4415;
				
					case 136:
						return 4423;
				
					case 137:
						return 4431;
				
					case 138:
						return 4439;
				
					case 139:
						return 4447;
				
					case 140:
						return 4456;
				
					case 141:
						return 4464;
				
					case 142:
						return 4471;
				
					case 143:
						return 4479;
				
					case 144:
						return 4487;
				
					case 145:
						return 4495;
				
					case 146:
						return 4503;
				
					case 147:
						return 4511;
				
					case 148:
						return 4519;
				
					case 149:
						return 4527;
				
					case 150:
						return 4535;
				
					case 151:
						return 4543;
				
					case 152:
						return 4551;
				
					case 153:
						return 4559;
				
					case 154:
						return 4567;
				
					case 155:
						return 4575;
				
					case 156:
						return 4583;
				
					case 157:
						return 4591;
				
					case 158:
						return 5484;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 159:
						return 5933;
				
					case 160:
						return 5940;
				
					case 161:
						return 5947;
				
					case 162:
						return 5954;
				
					case 163:
						return 5961;
				
					case 164:
						return 5968;
				
					case 165:
						return 5975;
				
					case 166:
						return 5982;
				
					case 167:
						return 5989;
				
					case 168:
						return 5996;
				
					case 169:
						return 6003;
				
					case 170:
						return 6010;
				
					case 171:
						return 6017;
				
					case 172:
						return 6024;
				
					case 173:
						return 6031;
				
					case 174:
						return 6038;
				
					case 175:
						return 6045;
				
					case 176:
						return 6052;
				
					case 177:
						return 6059;
				
					case 178:
						return 6066;
				
					case 179:
						return 6073;
				
					case 180:
						return 6080;
				
					case 181:
						return 6087;
				
					case 182:
						return 6094;
				
					case 183:
						return 6101;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 184:
						return 6178;
				
					case 185:
						return 6185;
				
					case 186:
						return 6192;
				
					case 187:
						return 6199;
				
					case 188:
						return 6206;
				
					case 189:
						return 6213;
				
					case 190:
						return 6220;
				
					case 191:
						return 6227;
				
					case 192:
						return 6234;
				
					case 193:
						return 6241;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 194:
						return 6575;
				
					case 195:
						return 6582;
				
					case 196:
						return 6589;
				
					case 197:
						return 6596;
				
					case 198:
						return 6603;
				
					case 199:
						return 6610;
				
					case 200:
						return 6617;
				
					case 201:
						return 6624;
				
					case 202:
						return 6631;
				
					case 203:
						return 6638;
				
					case 204:
						return 6645;
				
					case 205:
						return 6652;
				
					case 206:
						return 6659;
				
					case 207:
						return 6666;
				
					case 208:
						return 6673;
				
					case 209:
						return 6680;
				
					case 210:
						return 6687;
				
					case 211:
						return 6694;
				
					case 212:
						return 6701;
				
					case 213:
						return 6708;
				
					case 214:
						return 6715;
				
					case 215:
						return 6722;
				
					case 216:
						return 6729;
				
					case 217:
						return 6736;
				
					case 218:
						return 6743;
				
					case 219:
						return 6750;
				
					case 220:
						return 6757;
				
					case 221:
						return 6764;
				
					case 222:
						return 6771;
				
					case 223:
						return 6778;
				
					case 224:
						return 6785;
				
					case 225:
						return 6792;
				
					case 226:
						return 6799;
				
					case 227:
						return 6806;
				
					case 228:
						return 6813;
				
					case 229:
						return 6820;
				
					case 230:
						return 6827;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 231:
						return 7297;
				
					case 232:
						return 7304;
				
					case 233:
						return 7311;
				
					case 234:
						return 7318;
				
					case 235:
						return 7325;
				
					case 236:
						return 7332;
				
					case 237:
						return 7339;
				
					case 238:
						return 7346;
				
					case 239:
						return 7353;
				
					case 240:
						return 7360;
				
					case 241:
						return 7367;
				
					case 242:
						return 7374;
				
					case 243:
						return 7381;
				
					case 244:
						return 7388;
				
					case 245:
						return 7395;
				
					case 246:
						return 7402;
				
					case 247:
						return 7409;
				
					case 248:
						return 7416;
				
					case 249:
						return 7423;
				
					case 250:
						return 7430;
				
					case 251:
						return 7437;
				
					case 252:
						return 7444;
				
					case 253:
						return 7451;
				
					case 254:
						return 7458;
				
					case 255:
						return 7465;
				
					case 256:
						return 7472;
				
					case 257:
						return 7479;
				
					case 258:
						return 7486;
				
					case 259:
						return 7493;
				
					case 260:
						return 7500;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 261:
						return 8020;
				
					case 262:
						return 8027;
				
					case 263:
						return 8034;
				
					case 264:
						return 8041;
				
					case 265:
						return 8048;
				
					case 266:
						return 8055;
				
					case 267:
						return 8062;
				
					case 268:
						return 8069;
				
					case 269:
						return 8076;
				
					case 270:
						return 8083;
				
					case 271:
						return 8544;
				
					case 272:
						return 8551;
				
					case 273:
						return 8558;
				
					case 274:
						return 8565;
				
					case 275:
						return 8572;
				
					case 276:
						return 8579;
				
					case 277:
						return 8586;
				
					case 278:
						return 8593;
				
					case 279:
						return 8600;
				
					case 280:
						return 8607;
				
					case 281:
						return 8991;
				
					case 282:
						return 8998;
				
					case 283:
						return 9005;
				
					case 284:
						return &func_39;
				
					case 285:
						return 9019;
				
					case 286:
						return 9026;
				
					case 287:
						return 9033;
				
					case 288:
						return 9040;
				
					case 289:
						return 9047;
				
					case 290:
						return 9054;
				
					case 291:
						return 9061;
				
					case 292:
						return 9067;
				
					case 293:
						return 9073;
				
					case 294:
						return 9079;
				
					case 295:
						return 9086;
				
					case 296:
						return 9093;
				
					case 297:
						return 9100;
				
					case 298:
						return 9107;
				
					case 299:
						return 9114;
				
					case 300:
						return 9121;
				
					case 301:
						return 9128;
				
					case 302:
						return 9135;
				
					case 303:
						return 9142;
				
					case 304:
						return 9149;
				
					case 305:
						return 9155;
				
					case 306:
						return 9161;
				
					case 307:
						return 9642;
				
					case 308:
						return 9649;
				
					case 309:
						return 9656;
				
					case 310:
						return 9663;
				
					case 311:
						return &func_48;
				
					case 312:
						return 9677;
				
					case 313:
						return 9684;
				
					case 314:
						return 9691;
				
					case 315:
						return 9698;
				
					case 316:
						return 9705;
				
					case 317:
						return 9927;
				
					case 318:
						return 9934;
				
					case 319:
						return 9941;
				
					case 320:
						return 9948;
				
					case 321:
						return 9955;
				
					case 322:
						return 9962;
				
					case 323:
						return 9969;
				
					case 324:
						return 9976;
				
					case 325:
						return 9983;
				
					case 326:
						return 9990;
				
					case 327:
						return 9997;
				
					case 328:
						return 10004;
				
					case 329:
						return 10011;
				
					case 330:
						return 10018;
				
					case 331:
						return 10025;
				
					case 332:
						return 10032;
				
					case 333:
						return 10039;
				
					case 334:
						return 10046;
				
					case 335:
						return 10053;
				
					case 336:
						return 10060;
				
					default:
					
				}
			
				switch (epctParam1)
				{
					case 337:
						return 10453;
				
					case 338:
						return 10460;
				
					case 339:
						return 10467;
				
					case 340:
						return 10474;
				
					case 341:
						return 10481;
				
					case 342:
						return 10488;
				
					case 343:
						return 10495;
				
					case 344:
						return 10502;
				
					case 345:
						return 10509;
				
					case 346:
						return 10516;
				
					case 347:
						return 10523;
				
					case 348:
						return 10529;
				
					case 349:
						return 10535;
				
					case 350:
						return 10541;
				
					case 351:
						return 10548;
				
					case 352:
						return 10555;
				
					case 353:
						return 10562;
				
					case 354:
						return 10569;
				
					case 355:
						return 10576;
				
					case 356:
						return 10583;
				
					case 357:
						return 10590;
				
					case 358:
						return 10597;
				
					case 359:
						return 10604;
				
					case 360:
						return 10611;
				
					case 361:
						return 10617;
				
					case 362:
						return 10623;
				
					default:
						break;
				}
				break;
		}
	}

	return 1630;
}

int func_376(int iParam0, ePedComponentType epctParam1) // Position - 0x18148 Hash - 0x5E3D5C7B ^0xB59EB643
{
	if (func_395(epctParam1))
		return 14835;

	switch (iParam0)
	{
		case 1:
			switch (epctParam1)
			{
				case 363:
					return 11436;
			
				case 364:
					return 11443;
			
				case 365:
					return 11450;
			
				case 366:
					return 11457;
			
				case 367:
					return 11464;
			
				case 368:
					return 11471;
			
				case 369:
					return 11478;
			
				case 370:
					return 11485;
			
				case 371:
					return 11492;
			
				case 372:
					return 11499;
			
				case 373:
					return 11506;
			
				case 374:
					return 11513;
			
				case 375:
					return 11520;
			
				case 376:
					return 11527;
			
				case 377:
					return 11534;
			
				case 378:
					return 11541;
			
				case 379:
					return 11548;
			
				case 380:
					return 11555;
			
				case 381:
					return 11562;
			
				case 382:
					return 11569;
			
				case 383:
					return 11576;
			
				case 384:
					return 11583;
			
				case 385:
					return 11590;
			
				case 386:
					return 11597;
			
				case 387:
					return 11604;
			
				case 388:
					return 11611;
			
				case 389:
					return 11618;
			
				case 390:
					return 11625;
			
				case 391:
					return 11632;
			
				case 392:
					return 11639;
			
				case 393:
					return 11646;
			
				case 394:
					return 11653;
			
				case 395:
					return &func_57;
			
				case 396:
					return 11667;
			
				case 397:
					return 11674;
			
				case 398:
					return 11681;
			
				case 399:
					return 11688;
			
				case 400:
					return &func_58;
			
				case 401:
					return 11702;
			
				case 402:
					return 11709;
			
				case 403:
					return &_THEFEED_SHOW_MESSAGE;
			
				case &_STOPWATCH_DESTROY:
					return 11723;
			
				case 405:
					return 11730;
			
				case 406:
					return 11737;
			
				case 407:
					return 11744;
			
				case 408:
					return 11751;
			
				case 409:
					return 11758;
			
				case 410:
					return 11765;
			
				case 411:
					return &func_60;
			
				case 412:
					return 11779;
			
				case 413:
					return 11786;
			
				case 414:
					return 11793;
			
				case 515:
					return 12261;
			
				case 516:
					return 12268;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (epctParam1)
			{
				case 363:
					return 11437;
			
				case 364:
					return 11444;
			
				case 365:
					return 11451;
			
				case 366:
					return 11458;
			
				case 367:
					return 11465;
			
				case 368:
					return 11472;
			
				case 369:
					return 11479;
			
				case 370:
					return 11486;
			
				case 371:
					return 11493;
			
				case 372:
					return 11500;
			
				case 373:
					return 11507;
			
				case 374:
					return 11514;
			
				case 375:
					return 11521;
			
				case 376:
					return 11528;
			
				case 377:
					return 11535;
			
				case 378:
					return 11542;
			
				case 379:
					return 11549;
			
				case 380:
					return 11556;
			
				case 381:
					return 11563;
			
				case 382:
					return 11570;
			
				case 383:
					return 11577;
			
				case 384:
					return 11584;
			
				case 385:
					return 11591;
			
				case 386:
					return 11598;
			
				case 387:
					return 11605;
			
				case 388:
					return 11612;
			
				case 389:
					return 11619;
			
				case 390:
					return 11626;
			
				case 391:
					return 11633;
			
				case 392:
					return 11640;
			
				case 393:
					return 11647;
			
				case 394:
					return 11654;
			
				case 395:
					return 11661;
			
				case 396:
					return 11668;
			
				case 397:
					return 11675;
			
				case 398:
					return 11682;
			
				case 399:
					return 11689;
			
				case 400:
					return 11696;
			
				case 401:
					return 11703;
			
				case 402:
					return 11710;
			
				case 403:
					return 11717;
			
				case &_STOPWATCH_DESTROY:
					return 11724;
			
				case 405:
					return 11731;
			
				case 406:
					return 11738;
			
				case 407:
					return 11745;
			
				case 408:
					return 11752;
			
				case 409:
					return 11759;
			
				case 410:
					return 11766;
			
				case 411:
					return 11773;
			
				case 412:
					return 11780;
			
				case 413:
					return 11787;
			
				case 414:
					return 11794;
			
				case 515:
					return 12262;
			
				case 516:
					return 12269;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (epctParam1)
			{
				case 363:
					return 11438;
			
				case 364:
					return 11445;
			
				case 365:
					return 11452;
			
				case 366:
					return 11459;
			
				case 367:
					return 11466;
			
				case 368:
					return 11473;
			
				case 369:
					return 11480;
			
				case 370:
					return 11487;
			
				case 371:
					return 11494;
			
				case 372:
					return 11501;
			
				case 373:
					return 11508;
			
				case 374:
					return 11515;
			
				case 375:
					return 11522;
			
				case 376:
					return 11529;
			
				case 377:
					return 11536;
			
				case 378:
					return 11543;
			
				case 379:
					return 11550;
			
				case 380:
					return 11557;
			
				case 381:
					return 11564;
			
				case 382:
					return 11571;
			
				case 383:
					return 11578;
			
				case 384:
					return 11585;
			
				case 385:
					return 11592;
			
				case 386:
					return 11599;
			
				case 387:
					return 11606;
			
				case 388:
					return 11613;
			
				case 389:
					return 11620;
			
				case 390:
					return 11627;
			
				case 391:
					return 11634;
			
				case 392:
					return 11641;
			
				case 393:
					return 11648;
			
				case 394:
					return 11655;
			
				case 395:
					return 11662;
			
				case 396:
					return 11669;
			
				case 397:
					return 11676;
			
				case 398:
					return 11683;
			
				case 399:
					return 11690;
			
				case 400:
					return 11697;
			
				case 401:
					return 11704;
			
				case 402:
					return 11711;
			
				case 403:
					return 11718;
			
				case &_STOPWATCH_DESTROY:
					return 11725;
			
				case 405:
					return 11732;
			
				case 406:
					return 11739;
			
				case 407:
					return 11746;
			
				case 408:
					return 11753;
			
				case 409:
					return 11760;
			
				case 410:
					return 11767;
			
				case 411:
					return 11774;
			
				case 412:
					return 11781;
			
				case 413:
					return 11788;
			
				case 414:
					return 11795;
			
				case 515:
					return 12263;
			
				case 516:
					return 12270;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (epctParam1)
			{
				case 363:
					return 11439;
			
				case 364:
					return 11446;
			
				case 365:
					return 11453;
			
				case 366:
					return 11460;
			
				case 367:
					return 11467;
			
				case 368:
					return 11474;
			
				case 369:
					return 11481;
			
				case 370:
					return 11488;
			
				case 371:
					return 11495;
			
				case 372:
					return 11502;
			
				case 373:
					return 11509;
			
				case 374:
					return 11516;
			
				case 375:
					return 11523;
			
				case 376:
					return 11530;
			
				case 377:
					return 11537;
			
				case 378:
					return 11544;
			
				case 379:
					return 11551;
			
				case 380:
					return 11558;
			
				case 381:
					return 11565;
			
				case 382:
					return 11572;
			
				case 383:
					return 11579;
			
				case 384:
					return 11586;
			
				case 385:
					return 11593;
			
				case 386:
					return 11600;
			
				case 387:
					return 11607;
			
				case 388:
					return 11614;
			
				case 389:
					return 11621;
			
				case 390:
					return 11628;
			
				case 391:
					return 11635;
			
				case 392:
					return 11642;
			
				case 393:
					return 11649;
			
				case 394:
					return 11656;
			
				case 395:
					return 11663;
			
				case 396:
					return 11670;
			
				case 397:
					return 11677;
			
				case 398:
					return 11684;
			
				case 399:
					return 11691;
			
				case 400:
					return 11698;
			
				case 401:
					return 11705;
			
				case 402:
					return 11712;
			
				case 403:
					return 11719;
			
				case &_STOPWATCH_DESTROY:
					return 11726;
			
				case 405:
					return 11733;
			
				case 406:
					return 11740;
			
				case 407:
					return 11747;
			
				case 408:
					return 11754;
			
				case 409:
					return 11761;
			
				case 410:
					return 11768;
			
				case 411:
					return 11775;
			
				case 412:
					return 11782;
			
				case 413:
					return 11789;
			
				case 414:
					return 11796;
			
				case 515:
					return 12264;
			
				case 516:
					return 12271;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (epctParam1)
			{
				case 363:
					return 11440;
			
				case 364:
					return 11447;
			
				case 365:
					return 11454;
			
				case 366:
					return 11461;
			
				case 367:
					return 11468;
			
				case 368:
					return 11475;
			
				case 369:
					return 11482;
			
				case 370:
					return 11489;
			
				case 371:
					return 11496;
			
				case 372:
					return 11503;
			
				case 373:
					return 11510;
			
				case 374:
					return 11517;
			
				case 375:
					return 11524;
			
				case 376:
					return 11531;
			
				case 377:
					return 11538;
			
				case 378:
					return 11545;
			
				case 379:
					return 11552;
			
				case 380:
					return 11559;
			
				case 381:
					return 11566;
			
				case 382:
					return 11573;
			
				case 383:
					return 11580;
			
				case 384:
					return 11587;
			
				case 385:
					return 11594;
			
				case 386:
					return 11601;
			
				case 387:
					return 11608;
			
				case 388:
					return 11615;
			
				case 389:
					return 11622;
			
				case 390:
					return 11629;
			
				case 391:
					return 11636;
			
				case 392:
					return 11643;
			
				case 393:
					return 11650;
			
				case 394:
					return 11657;
			
				case 395:
					return 11664;
			
				case 396:
					return 11671;
			
				case 397:
					return 11678;
			
				case 398:
					return 11685;
			
				case 399:
					return 11692;
			
				case 400:
					return 11699;
			
				case 401:
					return 11706;
			
				case 402:
					return 11713;
			
				case 403:
					return 11720;
			
				case &_STOPWATCH_DESTROY:
					return 11727;
			
				case 405:
					return 11734;
			
				case 406:
					return 11741;
			
				case 407:
					return 11748;
			
				case 408:
					return 11755;
			
				case 409:
					return 11762;
			
				case 410:
					return 11769;
			
				case 411:
					return 11776;
			
				case 412:
					return 11783;
			
				case 413:
					return 11790;
			
				case 414:
					return 11797;
			
				case 515:
					return 12265;
			
				case 516:
					return 12272;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (epctParam1)
			{
				case 363:
					return 11442;
			
				case 364:
					return 11449;
			
				case 365:
					return 11456;
			
				case 366:
					return 11463;
			
				case 367:
					return 11470;
			
				case 368:
					return 11477;
			
				case 369:
					return 11484;
			
				case 370:
					return 11491;
			
				case 371:
					return 11498;
			
				case 372:
					return 11505;
			
				case 373:
					return 11512;
			
				case 374:
					return 11519;
			
				case 375:
					return 11526;
			
				case 376:
					return 11533;
			
				case 377:
					return 11540;
			
				case 378:
					return 11547;
			
				case 379:
					return 11554;
			
				case 380:
					return 11561;
			
				case 381:
					return 11568;
			
				case 382:
					return 11575;
			
				case 383:
					return 11582;
			
				case 384:
					return 11589;
			
				case 385:
					return 11596;
			
				case 386:
					return 11603;
			
				case 387:
					return 11610;
			
				case 388:
					return 11617;
			
				case 389:
					return 11624;
			
				case 390:
					return 11631;
			
				case 391:
					return 11638;
			
				case 392:
					return 11645;
			
				case 393:
					return 11652;
			
				case 394:
					return 11659;
			
				case 395:
					return 11666;
			
				case 396:
					return 11673;
			
				case 397:
					return 11680;
			
				case 398:
					return 11687;
			
				case 399:
					return 11694;
			
				case 400:
					return 11701;
			
				case 401:
					return 11708;
			
				case 402:
					return 11715;
			
				case 403:
					return 11722;
			
				case &_STOPWATCH_DESTROY:
					return 11729;
			
				case 405:
					return 11736;
			
				case 406:
					return 11743;
			
				case 407:
					return 11750;
			
				case 408:
					return 11757;
			
				case 409:
					return 11764;
			
				case 410:
					return 11771;
			
				case 411:
					return 11778;
			
				case 412:
					return 11785;
			
				case 413:
					return 11792;
			
				case 414:
					return 11799;
			
				case 515:
					return 12267;
			
				case 516:
					return 12274;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (epctParam1)
			{
				case 363:
					return 11441;
			
				case 364:
					return 11448;
			
				case 365:
					return 11455;
			
				case 366:
					return 11462;
			
				case 367:
					return 11469;
			
				case 368:
					return 11476;
			
				case 369:
					return 11483;
			
				case 370:
					return 11490;
			
				case 371:
					return 11497;
			
				case 372:
					return 11504;
			
				case 373:
					return 11511;
			
				case 374:
					return 11518;
			
				case 375:
					return 11525;
			
				case 376:
					return 11532;
			
				case 377:
					return 11539;
			
				case 378:
					return 11546;
			
				case 379:
					return 11553;
			
				case 380:
					return 11560;
			
				case 381:
					return 11567;
			
				case 382:
					return 11574;
			
				case 383:
					return 11581;
			
				case 384:
					return 11588;
			
				case 385:
					return 11595;
			
				case 386:
					return 11602;
			
				case 387:
					return 11609;
			
				case 388:
					return 11616;
			
				case 389:
					return 11623;
			
				case 390:
					return 11630;
			
				case 391:
					return 11637;
			
				case 392:
					return 11644;
			
				case 393:
					return 11651;
			
				case 394:
					return 11658;
			
				case 395:
					return 11665;
			
				case 396:
					return 11672;
			
				case 397:
					return 11679;
			
				case 398:
					return 11686;
			
				case 399:
					return 11693;
			
				case 400:
					return 11700;
			
				case 401:
					return 11707;
			
				case 402:
					return 11714;
			
				case 403:
					return 11721;
			
				case &_STOPWATCH_DESTROY:
					return 11728;
			
				case 405:
					return 11735;
			
				case 406:
					return 11742;
			
				case 407:
					return 11749;
			
				case 408:
					return 11756;
			
				case 409:
					return 11763;
			
				case 410:
					return 11770;
			
				case 411:
					return 11777;
			
				case 412:
					return 11784;
			
				case 413:
					return 11791;
			
				case 414:
					return 11798;
			
				case 515:
					return 12266;
			
				case 516:
					return 12273;
			
				default:
					break;
			}
			break;
	}

	return 1630;
}

int func_377(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x19391 Hash - 0x5FE7B2F8 ^0xAD4758BE
{
	if (func_395(epctParam0))
		return 0;

	if (epctParam0 <= 38)
		if (epctParam0 < PV_COMP_DECL)
			if (bParam1)
				return joaat("twi_01") + epctParam0;
			else
				return 31488 + epctParam0;
		else if (epctParam0 > PV_COMP_MAX && epctParam0 < 23)
			if (bParam1)
				return (joaat("twi_01") + epctParam0) - 3;
			else
				return (31488 + epctParam0) - 3;
		else if (epctParam0 > 25 && epctParam0 < 36)
			if (bParam1)
				return (joaat("twi_01") + epctParam0) - 6;
			else
				return (31488 + epctParam0) - 6;
	else if (epctParam0 > 38 && epctParam0 < 49)
		return (6015 + epctParam0) - 39;
	else if (epctParam0 > 51 && epctParam0 < 62)
		return (7252 + epctParam0) - 52;
	else if (epctParam0 > 64 && epctParam0 < 85)
		return (9310 + epctParam0) - 65;
	else if (epctParam0 >= 281 && epctParam0 < 291)
		return (30134 + epctParam0) - 281;
	else if (epctParam0 >= 294 && epctParam0 < 304)
		return 30134 + (epctParam0 - 281 - 3);
	else if (epctParam0 < func_378(11))
		return (15084 + epctParam0) - 88;
	else if (epctParam0 <= 157)
		return (15084 + epctParam0) - 88;
	else if (epctParam0 == 158)
		return 15361;
	else if (epctParam0 < 184)
		return (18036 + epctParam0) - 159;
	else if (epctParam0 < 194)
		return (18953 + epctParam0) - 184;
	else if (epctParam0 < 231)
		return (21942 + epctParam0) - 194;
	else if (epctParam0 < 261)
		return (24535 + epctParam0) - 231;
	else if (epctParam0 < 271)
		return (26319 + epctParam0) - 261;
	else if (epctParam0 < 281)
		return (28039 + epctParam0) - 271;
	else if (epctParam0 > 306 && epctParam0 < 317)
		return (31488 + 30 + epctParam0) - 307;
	else if (epctParam0 >= 317 && epctParam0 < 337)
		return (34036 + epctParam0) - 317;
	else if (epctParam0 >= 337 && epctParam0 < 347)
		return (36528 + epctParam0) - 337;
	else if (epctParam0 >= 350 && epctParam0 < 360)
		return 36528 + (epctParam0 - 337 - 3);
	else if (epctParam0 >= 363 && epctParam0 <= 414)
		return 41004 + (epctParam0 - 363);
	else if (epctParam0 >= 415 && epctParam0 < 515)
		return (50100 + epctParam0) - 415;
	else if (epctParam0 >= 515 && epctParam0 < 517)
		return (51536 + epctParam0) - 515;

	return 0;
}

ePedComponentType func_378(int iParam0) // Position - 0x196B1 Hash - 0xCF87EEB8 ^0xCF87EEB8
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 108;
	
		case 9:
			return 128;
	
		case 10:
			return 148;
	
		case 11:
			return 156;
	
		case 6:
			return 75;
	
		case 7:
			return 88;
	
		case 5:
			return -1;
	
		case 12:
			return 179;
	
		case 13:
			return 186;
	
		case 14:
			return 192;
	
		case 15:
			return 202;
	
		case 16:
			return 212;
	
		case 17:
			return 222;
	
		case 18:
			return 236;
	
		case 19:
			return 246;
	
		case 20:
			return 256;
	
		case 21:
			return 268;
	
		case 22:
			return 278;
	
		case 23:
			return 294;
	
		case 24:
			return 307;
	
		case 25:
			return 317;
	
		case 26:
			return 337;
	
		case 27:
			return 350;
	
		case 28:
			return 363;
	
		case 29:
			return 413;
	
		case 31:
			return 517;
	}

	if (func_388(iParam0))
	{
		num = func_387(iParam0);
		return func_386(num);
	}

	return func_379(iParam0, -1, true) * (iParam0 + 1);
}

int func_379(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1985D Hash - 0xCD6FCBEB ^0xCD6FCBEB
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_382(iParam1, false, false))
				return 20;
			else if (func_381(iParam1))
				return 0;
			else if (func_380(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return 20;
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 == 132)
				return 2;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312298[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312298[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312298[iParam1 /*1951*/].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return 20;
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	
		case 31:
			return 2;
	}

	return 0;
}

BOOL func_380(int iParam0, int iParam1) // Position - 0x19B3F Hash - 0x32D9FCC4 ^0x32D9FCC4
{
	if (iParam1 == -1)
	{
		switch (iParam0)
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
		switch (iParam0)
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
		switch (iParam0)
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

BOOL func_381(int iParam0) // Position - 0x19C1C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_382(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19C4B Hash - 0xDD5D533B ^0xA76EC056
{
	if (bParam2)
		return func_383(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_383(PLAYER::PLAYER_ID(), false))
			return false;
	
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

BOOL func_383(Player plParam0, BOOL bParam1) // Position - 0x19D26 Hash - 0x40436B78 ^0x330A684F
{
	if (Global_1845110 != _INVALID_PLAYER_INDEX())
	{
		if (!func_385(Global_1845110))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845110)
				if (IS_BIT_SET(Global_2657971[Global_1845110 /*465*/].f_200, 24) || func_384(Global_1845110))
					return true;
	}

	return IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 24);
}

BOOL func_384(ePedComponentType epctParam0) // Position - 0x19D8C Hash - 0x9AF12B5E ^0x60F1E84F
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657971[epctParam0 /*465*/].f_200, 9);

	return false;
}

BOOL func_385(ePedComponentType epctParam0) // Position - 0x19DAF Hash - 0x96A3BD5A ^0x96A3BD5A
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845281[epctParam0 /*883*/].f_268.f_391, 2);

	return false;
}

int func_386(int iParam0) // Position - 0x19DD8 Hash - 0x7929990 ^0x275DAF28
{
	switch (iParam0)
	{
		case 0:
			return 157;
	
		case 2:
			return 224;
	
		case 1:
			return 227;
	
		case 3:
			return 279;
	
		default:
		
	}

	return -1;
}

int func_387(int iParam0) // Position - 0x19E15 Hash - 0xB721049B ^0x624C1585
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

BOOL func_388(int iParam0) // Position - 0x19E3B Hash - 0xC6F10977 ^0x1359C4F8
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_389(ePedComponentType epctParam0) // Position - 0x19E5C Hash - 0x5992B4A ^0xCAB5A9F0
{
	if (func_395(epctParam0))
		return 0;

	if (epctParam0 < PV_COMP_DECL)
		return 7263 + epctParam0;
	else if (epctParam0 > PV_COMP_MAX && epctParam0 < 23)
		return 7263 + (epctParam0 - 3);
	else if (epctParam0 > 25 && epctParam0 < 36)
		return 7263 + (epctParam0 - 6);
	else if (epctParam0 > 38 && epctParam0 < 49)
		return 7263 + (epctParam0 - 9);
	else if (epctParam0 > 51 && epctParam0 < 62)
		return (7263 + epctParam0) - 12;
	else if (epctParam0 > 64 && epctParam0 < 85)
		return (9330 + epctParam0) - 65;
	else if (epctParam0 >= 281 && epctParam0 < 291)
		return (30154 + epctParam0) - 281;
	else if (epctParam0 >= 294 && epctParam0 < 304)
		return 30154 + (epctParam0 - 281 - 3);
	else if (epctParam0 < func_378(11))
		return (15154 + epctParam0) - 88;
	else if (epctParam0 <= 157)
		return (15154 + epctParam0) - 88;
	else if (epctParam0 == 158)
		return 15362;
	else if (epctParam0 < 184)
		return (18061 + epctParam0) - 159;
	else if (epctParam0 < 194)
		return (18963 + epctParam0) - 184;
	else if (epctParam0 < 231)
		return (21979 + epctParam0) - 194;
	else if (epctParam0 < 261)
		return (24565 + epctParam0) - 231;
	else if (epctParam0 < 271)
		return (26329 + epctParam0) - 261;
	else if (epctParam0 < 281)
		return (28049 + epctParam0) - 271;
	else if (epctParam0 > 306 && epctParam0 < 317)
		return (31528 + epctParam0) - 307;
	else if (epctParam0 >= 317 && epctParam0 < 337)
		return (34056 + epctParam0) - 317;
	else if (epctParam0 >= 337 && epctParam0 < 347)
		return (36548 + epctParam0) - 337;
	else if (epctParam0 >= 350 && epctParam0 < 360)
		return 36548 + (epctParam0 - 337 - 3);
	else if (epctParam0 >= 363 && epctParam0 <= 414)
		return (41056 + epctParam0) - 363;
	else if (epctParam0 >= 415 && epctParam0 < 515)
		return (50200 + epctParam0) - 415;
	else if (epctParam0 >= 515 && epctParam0 < 517)
		return (51538 + epctParam0) - 515;

	return 0;
}

int func_390(ePedComponentType epctParam0) // Position - 0x1A13C Hash - 0x5992B4A ^0x8E6A50EF
{
	if (func_395(epctParam0))
		return 0;

	if (epctParam0 < PV_COMP_DECL)
		return 5975 + epctParam0;
	else if (epctParam0 > PV_COMP_MAX && epctParam0 < 23)
		return 5975 + (epctParam0 - 3);
	else if (epctParam0 > 25 && epctParam0 < 36)
		return 5975 + (epctParam0 - 6);
	else if (epctParam0 > 38 && epctParam0 < 49)
		return 5975 + (epctParam0 - 9);
	else if (epctParam0 > 51 && epctParam0 < 62)
		return (7242 + epctParam0) - 52;
	else if (epctParam0 > 64 && epctParam0 < 85)
		return (9290 + epctParam0) - 65;
	else if (epctParam0 >= 281 && epctParam0 < 291)
		return (30114 + epctParam0) - 281;
	else if (epctParam0 >= 294 && epctParam0 < 304)
		return 30114 + (epctParam0 - 281 - 3);
	else if (epctParam0 < func_378(11))
		return (15014 + epctParam0) - 88;
	else if (epctParam0 <= 157)
		return (15014 + epctParam0) - 88;
	else if (epctParam0 == 158)
		return 15360;
	else if (epctParam0 < 184)
		return (18011 + epctParam0) - 159;
	else if (epctParam0 < 194)
		return (18943 + epctParam0) - 184;
	else if (epctParam0 < 231)
		return (21905 + epctParam0) - 194;
	else if (epctParam0 < 261)
		return (24505 + epctParam0) - 231;
	else if (epctParam0 < 271)
		return (26309 + epctParam0) - 261;
	else if (epctParam0 < 281)
		return (28029 + epctParam0) - 271;
	else if (epctParam0 > 306 && epctParam0 < 317)
		return (31478 + epctParam0) - 307;
	else if (epctParam0 >= 317 && epctParam0 < 337)
		return (34016 + epctParam0) - 317;
	else if (epctParam0 >= 337 && epctParam0 < 347)
		return (36508 + epctParam0) - 337;
	else if (epctParam0 >= 350 && epctParam0 < 360)
		return 36508 + (epctParam0 - 337 - 3);
	else if (epctParam0 >= 363 && epctParam0 <= 414)
		return (40952 + epctParam0) - 363;
	else if (epctParam0 >= 415 && epctParam0 < 515)
		return (50000 + epctParam0) - 415;
	else if (epctParam0 >= 515 && epctParam0 < 517)
		return (51534 + epctParam0) - 515;

	return 0;
}

int func_391(ePedComponentType epctParam0) // Position - 0x1A41C Hash - 0x5992B4A ^0x8291E3F9
{
	if (func_395(epctParam0))
		return 0;

	if (epctParam0 < PV_COMP_DECL)
		return 5935 + epctParam0;
	else if (epctParam0 > PV_COMP_MAX && epctParam0 < 23)
		return 5935 + (epctParam0 - 3);
	else if (epctParam0 > 25 && epctParam0 < 36)
		return 5935 + (epctParam0 - 6);
	else if (epctParam0 > 38 && epctParam0 < 49)
		return 5935 + (epctParam0 - 9);
	else if (epctParam0 > 51 && epctParam0 < 62)
		return (7232 + epctParam0) - 52;
	else if (epctParam0 > 64 && epctParam0 < 85)
		return (9270 + epctParam0) - 65;
	else if (epctParam0 >= 281 && epctParam0 < 291)
		return (30094 + epctParam0) - 281;
	else if (epctParam0 >= 294 && epctParam0 < 304)
		return 30094 + (epctParam0 - 281 - 3);
	else if (epctParam0 < func_378(11))
		return (14944 + epctParam0) - 88;
	else if (epctParam0 <= 157)
		return (14944 + epctParam0) - 88;
	else if (epctParam0 == 158)
		return 15359;
	else if (epctParam0 < 184)
		return (17986 + epctParam0) - 159;
	else if (epctParam0 < 194)
		return (18933 + epctParam0) - 184;
	else if (epctParam0 < 231)
		return (21868 + epctParam0) - 194;
	else if (epctParam0 < 261)
		return (24475 + epctParam0) - 231;
	else if (epctParam0 < 271)
		return (26299 + epctParam0) - 261;
	else if (epctParam0 < 281)
		return (28019 + epctParam0) - 271;
	else if (epctParam0 > 306 && epctParam0 < 317)
		return (31468 + epctParam0) - 307;
	else if (epctParam0 >= 317 && epctParam0 < 337)
		return (33996 + epctParam0) - 317;
	else if (epctParam0 >= 337 && epctParam0 < 347)
		return (36488 + epctParam0) - 337;
	else if (epctParam0 >= 350 && epctParam0 < 360)
		return 36488 + (epctParam0 - 337 - 3);
	else if (epctParam0 >= 363 && epctParam0 <= 414)
		return (40900 + epctParam0) - 363;
	else if (epctParam0 >= 415 && epctParam0 < 515)
		return (49900 + epctParam0) - 415;
	else if (epctParam0 >= 515 && epctParam0 < 517)
		return (51532 + epctParam0) - 515;

	return 0;
}

int func_392(ePedComponentType epctParam0) // Position - 0x1A6FC Hash - 0xF955952E ^0xAD79F81E
{
	int num;

	if (func_395(epctParam0))
		return 0;

	num = 4424 - 4400;

	if (epctParam0 < PV_COMP_DECL)
		return 4400 + (epctParam0 * num);
	else if (epctParam0 > PV_COMP_MAX && epctParam0 < 23)
		return 4640 + ((epctParam0 - 13) * num);
	else if (epctParam0 > 25 && epctParam0 < 36)
		return 4880 + ((epctParam0 - 26) * num);
	else if (epctParam0 > 38 && epctParam0 < 49)
		return 5120 + ((epctParam0 - 39) * num);
	else if (epctParam0 > 51 && epctParam0 < 62)
		return 6414 + ((epctParam0 - 52) * num);
	else if (epctParam0 > 64 && epctParam0 < 85)
		return 7682 + ((epctParam0 - 65) * num);
	else if (epctParam0 >= 281 && epctParam0 < 291)
		return 29534 + ((epctParam0 - 281) * num);
	else if (epctParam0 >= 294 && epctParam0 < 304)
		return 29774 + ((epctParam0 - 294) * num);
	else if (epctParam0 < func_378(11))
		return 9554 + ((epctParam0 - 88) * num);
	else if (epctParam0 <= 157)
		return 9554 + ((epctParam0 - 88) * num);
	else if (epctParam0 == 158)
		return &func_91;
	else if (epctParam0 < 184)
		return 16061 + ((epctParam0 - 159) * num);
	else if (epctParam0 < 194)
		return 18163 + ((epctParam0 - 184) * num);
	else if (epctParam0 < 231)
		return 19019 + ((epctParam0 - 194) * num);
	else if (epctParam0 < 261)
		return 22195 + ((epctParam0 - 231) * num);
	else if (epctParam0 < 271)
		return 25539 + ((epctParam0 - 261) * num);
	else if (epctParam0 < 281)
		return 27259 + ((epctParam0 - 271) * num);
	else if (epctParam0 > 306 && epctParam0 < 317)
		return 31188 + ((epctParam0 - 307) * num);
	else if (epctParam0 >= 317 && epctParam0 < 337)
		return 33436 + ((epctParam0 - 317) * num);
	else if (epctParam0 >= 337 && epctParam0 < 347)
		return 35928 + ((epctParam0 - 337) * num);
	else if (epctParam0 >= 350 && epctParam0 < 360)
		return 36168 + ((epctParam0 - 350) * num);
	else if (epctParam0 >= 363 && epctParam0 <= 414)
		return 39444 + ((epctParam0 - 363) * num);
	else if (epctParam0 >= 415 && epctParam0 < 515)
		return 47100 + ((epctParam0 - 415) * num);
	else if (epctParam0 >= 515 && epctParam0 < 517)
		return 51476 + ((epctParam0 - 515) * num);

	return 0;
}

BOOL func_393(ePedComponentType epctParam0) // Position - 0x1AA28 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (epctParam0)
	{
		case PV_COMP_DECL:
		case PV_COMP_JBIB:
		case PV_COMP_MAX:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return true;
	}

	return false;
}

int func_394(int iParam0, ePedComponentType epctParam1) // Position - 0x1AAF3 Hash - 0x35A80149 ^0xA9A3B962
{
	int num;

	if (func_395(epctParam1))
		return 0;

	if (iParam0 == 3880 || iParam0 == 3881 || iParam0 == 3882)
	{
		if (epctParam1 < PV_COMP_DECL)
			num = iParam0 + (epctParam1 * 3);
		else if (epctParam1 < 23)
			if (iParam0 == 3880)
				num = 3910 + ((epctParam1 - 13) * 3);
			else if (iParam0 == 3881)
				num = 3911 + ((epctParam1 - 13) * 3);
			else if (iParam0 == 3882)
				num = 3912 + ((epctParam1 - 13) * 3);
		else if (epctParam1 < 36)
			if (iParam0 == 3880)
				num = 3946 + ((epctParam1 - 26) * 3);
			else if (iParam0 == 3881)
				num = 3947 + ((epctParam1 - 26) * 3);
			else if (iParam0 == 3882)
				num = 3948 + ((epctParam1 - 26) * 3);
		else if (epctParam1 < 49)
			if (iParam0 == 3880)
				num = 5855 + ((epctParam1 - 39) * 3);
			else if (iParam0 == 3881)
				num = 5856 + ((epctParam1 - 39) * 3);
			else if (iParam0 == 3882)
				num = 5857 + ((epctParam1 - 39) * 3);
		else if (epctParam1 < 62)
			if (iParam0 == 3880)
				num = 7149 + ((epctParam1 - 52) * 3);
			else if (iParam0 == 3881)
				num = 7150 + ((epctParam1 - 52) * 3);
			else if (iParam0 == 3882)
				num = 7151 + ((epctParam1 - 52) * 3);
		else if (epctParam1 < 85)
			if (iParam0 == 3880)
				num = 9107 + ((epctParam1 - 65) * 3);
			else if (iParam0 == 3881)
				num = 9108 + ((epctParam1 - 65) * 3);
			else if (iParam0 == 3882)
				num = 9109 + ((epctParam1 - 65) * 3);
		else if (epctParam1 < func_378(11))
			if (iParam0 == 3880)
				num = 14384 + ((epctParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((epctParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((epctParam1 - 88) * 3);
		else if (epctParam1 <= 157)
			if (iParam0 == 3880)
				num = 14384 + ((epctParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((epctParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((epctParam1 - 88) * 3);
		else if (epctParam1 == 158)
			if (iParam0 == 3880)
				num = 15351;
			else if (iParam0 == 3881)
				num = 15352;
			else if (iParam0 == 3882)
				num = 15353;
		else if (epctParam1 < 184)
			if (iParam0 == 3880)
				num = 17786 + ((epctParam1 - 159) * 3);
			else if (iParam0 == 3881)
				num = 17787 + ((epctParam1 - 159) * 3);
			else if (iParam0 == 3882)
				num = 17788 + ((epctParam1 - 159) * 3);
		else if (epctParam1 < 194)
			if (iParam0 == 3880)
				num = 18853 + ((epctParam1 - 184) * 3);
			else if (iParam0 == 3881)
				num = 18854 + ((epctParam1 - 184) * 3);
			else if (iParam0 == 3882)
				num = 18855 + ((epctParam1 - 184) * 3);
		else if (epctParam1 < 231)
			if (iParam0 == 3880)
				num = 21572 + ((epctParam1 - 194) * 3);
			else if (iParam0 == 3881)
				num = 21573 + ((epctParam1 - 194) * 3);
			else if (iParam0 == 3882)
				num = 21574 + ((epctParam1 - 194) * 3);
		else if (epctParam1 < 261)
			if (iParam0 == 3880)
				num = 24265 + ((epctParam1 - 231) * 3);
			else if (iParam0 == 3881)
				num = 24266 + ((epctParam1 - 231) * 3);
			else if (iParam0 == 3882)
				num = 24267 + ((epctParam1 - 231) * 3);
		else if (epctParam1 < 271)
			if (iParam0 == 3880)
				num = 26229 + ((epctParam1 - 261) * 3);
			else if (iParam0 == 3881)
				num = 26230 + ((epctParam1 - 261) * 3);
			else if (iParam0 == 3882)
				num = 26231 + ((epctParam1 - 261) * 3);
		else if (epctParam1 < 281)
			if (iParam0 == 3880)
				num = 27949 + ((epctParam1 - 271) * 3);
			else if (iParam0 == 3881)
				num = 27950 + ((epctParam1 - 271) * 3);
			else if (iParam0 == 3882)
				num = 27951 + ((epctParam1 - 271) * 3);
		else if (epctParam1 < 291)
			if (iParam0 == 3880)
				num = 29474 + ((epctParam1 - 281) * 3);
			else if (iParam0 == 3881)
				num = 29475 + ((epctParam1 - 281) * 3);
			else if (iParam0 == 3882)
				num = 29476 + ((epctParam1 - 281) * 3);
		else if (epctParam1 < 304)
			if (iParam0 == 3880)
				num = 29504 + ((epctParam1 - 294) * 3);
			else if (iParam0 == 3881)
				num = 29505 + ((epctParam1 - 294) * 3);
			else if (iParam0 == 3882)
				num = 29506 + ((epctParam1 - 294) * 3);
		else if (epctParam1 > 306 && epctParam1 < 317)
			if (iParam0 == 3880)
				num = 31158 + ((epctParam1 - 307) * 3);
			else if (iParam0 == 3881)
				num = 31159 + ((epctParam1 - 307) * 3);
			else if (iParam0 == 3882)
				num = 31160 + ((epctParam1 - 307) * 3);
		else if (epctParam1 >= 317 && epctParam1 < 337)
			if (iParam0 == 3880)
				num = 33376 + ((epctParam1 - 317) * 3);
			else if (iParam0 == 3881)
				num = 33377 + ((epctParam1 - 317) * 3);
			else if (iParam0 == 3882)
				num = 33378 + ((epctParam1 - 317) * 3);
		else if (epctParam1 >= 337 && epctParam1 < 347)
			if (iParam0 == 3880)
				num = 35868 + ((epctParam1 - 337) * 3);
			else if (iParam0 == 3881)
				num = 35869 + ((epctParam1 - 337) * 3);
			else if (iParam0 == 3882)
				num = 35870 + ((epctParam1 - 337) * 3);
		else if (epctParam1 >= 350 && epctParam1 < 360)
			if (iParam0 == 3880)
				num = 35898 + ((epctParam1 - 350) * 3);
			else if (iParam0 == 3881)
				num = 35899 + ((epctParam1 - 350) * 3);
			else if (iParam0 == 3882)
				num = 35900 + ((epctParam1 - 350) * 3);
		else if (epctParam1 >= 363 && epctParam1 <= 414)
			if (iParam0 == 3880)
				num = 39288 + ((epctParam1 - 363) * 3);
			else if (iParam0 == 3881)
				num = 39289 + ((epctParam1 - 363) * 3);
			else if (iParam0 == 3882)
				num = 39290 + ((epctParam1 - 363) * 3);
		else if (epctParam1 >= 415 && epctParam1 < 515)
			if (iParam0 == 3880)
				num = 46800 + ((epctParam1 - 415) * 3);
			else if (iParam0 == 3881)
				num = 46801 + ((epctParam1 - 415) * 3);
			else if (iParam0 == 3882)
				num = 46802 + ((epctParam1 - 415) * 3);
		else if (epctParam1 >= 515 && epctParam1 < 517)
			if (iParam0 == 3880)
				num = 51470 + ((epctParam1 - 515) * 3);
			else if (iParam0 == 3881)
				num = 51471 + ((epctParam1 - 515) * 3);
			else if (iParam0 == 3882)
				num = 51472 + ((epctParam1 - 515) * 3);
	}
	else if (epctParam1 < PV_COMP_DECL)
	{
		num = iParam0 + (epctParam1 * (1456 - 1411));
	}
	else if (epctParam1 >= PV_COMP_DECL && epctParam1 <= PV_COMP_MAX)
	{
		num = (epctParam1 - 10) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 1861;
		else if (iParam0 == 1412)
			num = num + 1862;
		else if (iParam0 == 1441)
			num = num + 1863;
		else if (iParam0 == 1442)
			num = num + 1864;
		else if (iParam0 == 1443)
			num = num + 1865;
		else if (iParam0 == 1445)
			num = num + 1866;
		else if (iParam0 == 1447)
			num = num + 1867;
		else if (iParam0 == 1448)
			num = num + 1868;
		else if (iParam0 == 1449)
			num = num + 1869;
		else if (iParam0 == 1450)
			num = num + 1870;
		else if (iParam0 == 1451)
			num = num + 1871;
		else if (iParam0 == 1452)
			num = num + 1872;
		else if (iParam0 == 1453)
			num = num + 1873;
		else if (iParam0 == 1454)
			num = num + 1874;
		else if (iParam0 == 1455)
			num = num + 1875;
	}
	else if (epctParam1 < 23)
	{
		num = 1906 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 13) * (1456 - 1411));
	}
	else if (epctParam1 >= 23 && epctParam1 <= 25)
	{
		num = (epctParam1 - 23) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2356;
		else if (iParam0 == 1412)
			num = num + 2357;
		else if (iParam0 == 1441)
			num = num + 2358;
		else if (iParam0 == 1442)
			num = num + 2359;
		else if (iParam0 == 1443)
			num = num + 2360;
		else if (iParam0 == 1445)
			num = num + 2361;
		else if (iParam0 == 1447)
			num = num + 2362;
		else if (iParam0 == 1448)
			num = num + 2363;
		else if (iParam0 == 1449)
			num = num + 2364;
		else if (iParam0 == 1450)
			num = num + 2365;
		else if (iParam0 == 1451)
			num = num + 2366;
		else if (iParam0 == 1452)
			num = num + 2367;
		else if (iParam0 == 1453)
			num = num + 2368;
		else if (iParam0 == 1454)
			num = num + 2369;
		else if (iParam0 == 1455)
			num = num + 2370;
	}
	else if (epctParam1 < 36)
	{
		num = 2405 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 26) * (1456 - 1411));
	}
	else if (epctParam1 >= 36 && epctParam1 <= 38)
	{
		num = (epctParam1 - 36) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2855;
		else if (iParam0 == 1412)
			num = num + 2856;
		else if (iParam0 == 1441)
			num = num + 2857;
		else if (iParam0 == 1442)
			num = num + 2858;
		else if (iParam0 == 1443)
			num = num + 2859;
		else if (iParam0 == 1445)
			num = num + 2860;
		else if (iParam0 == 1447)
			num = num + 2861;
		else if (iParam0 == 1448)
			num = num + 2862;
		else if (iParam0 == 1449)
			num = num + 2863;
		else if (iParam0 == 1450)
			num = num + 2864;
		else if (iParam0 == 1451)
			num = num + 2865;
		else if (iParam0 == 1452)
			num = num + 2866;
		else if (iParam0 == 1453)
			num = num + 2867;
		else if (iParam0 == 1454)
			num = num + 2868;
		else if (iParam0 == 1455)
			num = num + 2869;
	}
	else if (epctParam1 < 49)
	{
		num = 5360 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 39) * (1456 - 1411));
	}
	else if (epctParam1 >= 49 && epctParam1 <= 51)
	{
		num = (epctParam1 - 49) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 5810;
		else if (iParam0 == 1412)
			num = num + 5811;
		else if (iParam0 == 1441)
			num = num + 5812;
		else if (iParam0 == 1442)
			num = num + 5813;
		else if (iParam0 == 1443)
			num = num + 5814;
		else if (iParam0 == 1445)
			num = num + 5815;
		else if (iParam0 == 1447)
			num = num + 5816;
		else if (iParam0 == 1448)
			num = num + 5817;
		else if (iParam0 == 1449)
			num = num + 5818;
		else if (iParam0 == 1450)
			num = num + 5819;
		else if (iParam0 == 1451)
			num = num + 5820;
		else if (iParam0 == 1452)
			num = num + 5821;
		else if (iParam0 == 1453)
			num = num + 5822;
		else if (iParam0 == 1454)
			num = num + 5823;
		else if (iParam0 == 1455)
			num = num + 5824;
	}
	else if (epctParam1 < 62)
	{
		num = 6654 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 52) * (1456 - 1411));
	}
	else if (epctParam1 >= 62 && epctParam1 <= 64)
	{
		num = (epctParam1 - 62) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 7104;
		else if (iParam0 == 1412)
			num = num + 7105;
		else if (iParam0 == 1441)
			num = num + 7106;
		else if (iParam0 == 1442)
			num = num + 7107;
		else if (iParam0 == 1443)
			num = num + 7108;
		else if (iParam0 == 1445)
			num = num + 7109;
		else if (iParam0 == 1447)
			num = num + 7110;
		else if (iParam0 == 1448)
			num = num + 7111;
		else if (iParam0 == 1449)
			num = num + 7112;
		else if (iParam0 == 1450)
			num = num + 7113;
		else if (iParam0 == 1451)
			num = num + 7114;
		else if (iParam0 == 1452)
			num = num + 7115;
		else if (iParam0 == 1453)
			num = num + 7116;
		else if (iParam0 == 1454)
			num = num + 7117;
		else if (iParam0 == 1455)
			num = num + 7118;
	}
	else if (epctParam1 < 85)
	{
		num = 8162 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 65) * (1456 - 1411));
	}
	else if (epctParam1 >= 85 && epctParam1 <= 87)
	{
		num = (epctParam1 - 85) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 9062;
		else if (iParam0 == 1412)
			num = num + 9063;
		else if (iParam0 == 1441)
			num = num + 9064;
		else if (iParam0 == 1442)
			num = num + 9065;
		else if (iParam0 == 1443)
			num = num + 9066;
		else if (iParam0 == 1445)
			num = num + 9067;
		else if (iParam0 == 1447)
			num = num + 9068;
		else if (iParam0 == 1448)
			num = num + 9069;
		else if (iParam0 == 1449)
			num = num + 9070;
		else if (iParam0 == 1450)
			num = num + 9071;
		else if (iParam0 == 1451)
			num = num + 9072;
		else if (iParam0 == 1452)
			num = num + 9073;
		else if (iParam0 == 1453)
			num = num + 9074;
		else if (iParam0 == 1454)
			num = num + 9075;
		else if (iParam0 == 1455)
			num = num + 9076;
	}
	else if (epctParam1 < func_378(11))
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - func_378(7)) * (1456 - 1411));
	}
	else if (epctParam1 <= 157)
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - func_378(7)) * (1456 - 1411));
	}
	else if (epctParam1 == 158)
	{
		num = 15306 - 1411;
		num = num + iParam0;
	}
	else if (epctParam1 < 184)
	{
		num = 16661 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 159) * (1456 - 1411));
	}
	else if (epctParam1 < 194)
	{
		num = 18403 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 184) * (1456 - 1411));
	}
	else if (epctParam1 < 231)
	{
		num = 19907 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 194) * (1456 - 1411));
	}
	else if (epctParam1 < 261)
	{
		num = 22915 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 231) * (1456 - 1411));
	}
	else if (epctParam1 < 271)
	{
		num = 25779 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 261) * (1456 - 1411));
	}
	else if (epctParam1 < 281)
	{
		num = 27499 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 271) * (1456 - 1411));
	}
	else if (epctParam1 < 291)
	{
		num = 28484 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 281) * (1456 - 1411));
	}
	else if (epctParam1 >= 291 && epctParam1 <= 293)
	{
		num = (epctParam1 - 291) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 28934;
		else if (iParam0 == 1412)
			num = num + 28935;
		else if (iParam0 == 1441)
			num = num + 28936;
		else if (iParam0 == 1442)
			num = num + 28937;
		else if (iParam0 == 1443)
			num = num + 28938;
		else if (iParam0 == 1445)
			num = num + 28939;
		else if (iParam0 == 1447)
			num = num + 28940;
		else if (iParam0 == 1448)
			num = num + 28941;
		else if (iParam0 == 1449)
			num = num + 28942;
		else if (iParam0 == 1450)
			num = num + 28943;
		else if (iParam0 == 1451)
			num = num + 28944;
		else if (iParam0 == 1452)
			num = num + 28945;
		else if (iParam0 == 1453)
			num = num + 28946;
		else if (iParam0 == 1454)
			num = num + 28947;
		else if (iParam0 == 1455)
			num = num + 28948;
	}
	else if (epctParam1 < 304)
	{
		num = 28979 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 294) * (1456 - 1411));
	}
	else if (epctParam1 >= 304 && epctParam1 <= 306)
	{
		num = (epctParam1 - 304) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 29429;
		else if (iParam0 == 1412)
			num = num + 29430;
		else if (iParam0 == 1441)
			num = num + 29431;
		else if (iParam0 == 1442)
			num = num + 29432;
		else if (iParam0 == 1443)
			num = num + 29433;
		else if (iParam0 == 1445)
			num = num + 29434;
		else if (iParam0 == 1447)
			num = num + 29435;
		else if (iParam0 == 1448)
			num = num + 29436;
		else if (iParam0 == 1449)
			num = num + 29437;
		else if (iParam0 == 1450)
			num = num + 29438;
		else if (iParam0 == 1451)
			num = num + 29439;
		else if (iParam0 == 1452)
			num = num + 29440;
		else if (iParam0 == 1453)
			num = num + 29441;
		else if (iParam0 == 1454)
			num = num + 29442;
		else if (iParam0 == 1455)
			num = num + 29443;
	}
	else if (epctParam1 > 306 && epctParam1 < 317)
	{
		num = 30708 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 307) * (1456 - 1411));
	}
	else if (epctParam1 >= 317 && epctParam1 < 337)
	{
		num = 32476 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 317) * (1456 - 1411));
	}
	else if (epctParam1 < 347)
	{
		num = 34878 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 337) * (1456 - 1411));
	}
	else if (epctParam1 >= 347 && epctParam1 <= 349)
	{
		num = (epctParam1 - 347) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35328;
		else if (iParam0 == 1412)
			num = num + 35329;
		else if (iParam0 == 1441)
			num = num + 35330;
		else if (iParam0 == 1442)
			num = num + 35331;
		else if (iParam0 == 1443)
			num = num + 35332;
		else if (iParam0 == 1445)
			num = num + 35333;
		else if (iParam0 == 1447)
			num = num + 35334;
		else if (iParam0 == 1448)
			num = num + 35335;
		else if (iParam0 == 1449)
			num = num + 35336;
		else if (iParam0 == 1450)
			num = num + 35337;
		else if (iParam0 == 1451)
			num = num + 35338;
		else if (iParam0 == 1452)
			num = num + 35339;
		else if (iParam0 == 1453)
			num = num + 35340;
		else if (iParam0 == 1454)
			num = num + 35341;
		else if (iParam0 == 1455)
			num = num + 35342;
	}
	else if (epctParam1 < 360)
	{
		num = 35373 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 350) * (1456 - 1411));
	}
	else if (epctParam1 >= 360 && epctParam1 <= 362)
	{
		num = (epctParam1 - 360) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35823;
		else if (iParam0 == 1412)
			num = num + 35824;
		else if (iParam0 == 1441)
			num = num + 35825;
		else if (iParam0 == 1442)
			num = num + 35826;
		else if (iParam0 == 1443)
			num = num + 35827;
		else if (iParam0 == 1445)
			num = num + 35828;
		else if (iParam0 == 1447)
			num = num + 35829;
		else if (iParam0 == 1448)
			num = num + 35830;
		else if (iParam0 == 1449)
			num = num + 35831;
		else if (iParam0 == 1450)
			num = num + 35832;
		else if (iParam0 == 1451)
			num = num + 35833;
		else if (iParam0 == 1452)
			num = num + 35834;
		else if (iParam0 == 1453)
			num = num + 35835;
		else if (iParam0 == 1454)
			num = num + 35836;
		else if (iParam0 == 1455)
			num = num + 35837;
	}
	else if (epctParam1 >= 363 && epctParam1 <= 414)
	{
		num = 36948 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 363) * (1456 - 1411));
	}
	else if (epctParam1 >= 415 && epctParam1 < 515)
	{
		num = 42300 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 415) * (1456 - 1411));
	}
	else if (epctParam1 >= 515 && epctParam1 < 517)
	{
		num = 51380 - 1411;
		num = num + iParam0;
		num = num + ((epctParam1 - 515) * (1456 - 1411));
	}

	return num;
}

BOOL func_395(ePedComponentType epctParam0) // Position - 0x1C34F Hash - 0xC6F10977 ^0x1DAE1C26
{
	if (epctParam0 >= 415 && epctParam0 < 515)
		return true;

	return false;
}

int func_396(var uParam0, BOOL bParam1) // Position - 0x1C370 Hash - 0x81B83DB6 ^0x8377CBBD
{
	ePedComponentType type;
	var unk;
	var unk2;
	var unk6;
	var unk7;
	var unk8;

	type = Global_2359296[func_195() /*5570*/].f_593.f_62;

	if (*uParam0 == Global_1586521[type /*142*/].f_66 && uParam0->f_36 && uParam0->f_35)
	{
		Global_1586521[type /*142*/].f_1 = { uParam0->f_28 };
		Global_1586521[type /*142*/] = uParam0->f_32;
	
		if (func_397(uParam0->f_1, &unk2, &unk, &unk6, &unk7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1586521[type /*142*/].f_77), 13);
			Global_1586521[type /*142*/].f_5 = unk6;
			Global_1586521[type /*142*/].f_7 = unk7;
			Global_1586521[type /*142*/].f_138 = unk;
		}
	
		if (func_397(uParam0->f_2, &unk2, &unk, &unk6, &unk7) && *uParam0 != joaat("sovereign"))
		{
			MISC::CLEAR_BIT(&(Global_1586521[type /*142*/].f_77), 12);
			Global_1586521[type /*142*/].f_6 = unk6;
			Global_1586521[type /*142*/].f_139 = unk;
		}
	
		if (uParam0->f_18)
			MISC::SET_BIT(&(Global_1586521[type /*142*/].f_77), 9);
		else
			MISC::CLEAR_BIT(&(Global_1586521[type /*142*/].f_77), 9);
	
		Global_1586521[type /*142*/].f_62 = uParam0->f_6;
		Global_1586521[type /*142*/].f_63 = uParam0->f_7;
		Global_1586521[type /*142*/].f_64 = uParam0->f_8;
	
		if (uParam0->f_5 == -1)
			Global_1586521[type /*142*/].f_65 = 0;
		else
			Global_1586521[type /*142*/].f_65 = uParam0->f_5;
	
		if (uParam0->f_13 != -1)
			Global_1586521[type /*142*/].f_9[4] = uParam0->f_13;
	
		if (uParam0->f_9 != -1)
			Global_1586521[type /*142*/].f_9[11] = uParam0->f_9;
	
		if (uParam0->f_10 != -1)
			Global_1586521[type /*142*/].f_9[12] = uParam0->f_10;
	
		if (uParam0->f_16 != -1 && uParam0->f_16 < 9)
			Global_1586521[type /*142*/].f_9[14] = uParam0->f_16;
	
		if (uParam0->f_14 != -1)
			Global_1586521[type /*142*/].f_9[15] = uParam0->f_14;
	
		if (uParam0->f_15 != -1)
			Global_1586521[type /*142*/].f_9[16] = uParam0->f_15;
	
		if (uParam0->f_11 != -1 && func_219(uParam0->f_12))
		{
			Global_1586521[type /*142*/].f_9[23] = uParam0->f_11;
			Global_1586521[type /*142*/].f_69 = -1;
		}
	
		if (uParam0->f_19 != -1)
			Global_1586521[type /*142*/].f_9[18] = uParam0->f_19;
	
		if (uParam0->f_17 != -1)
			Global_1586521[type /*142*/].f_9[22] = uParam0->f_17;
	
		if (uParam0->f_20 != -1)
			Global_1586521[type /*142*/].f_9[20] = uParam0->f_20;
	
		if (func_480(type, &unk8))
		{
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1586521[type /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1586521[type /*142*/].f_103), 26);
			}
		}
	
		return 1;
	}

	return 0;
}

BOOL func_397(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1C63F Hash - 0xFAD9B0FF ^0xCA2AB0A4
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR BLACK_STEEL" /*Brushed Black Steel*/, 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHROME" /*Chrome*/, 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREY" /*Gray*/, 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_GREY" /*Light Gray*/, 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "Purple" /*Schafter Purple*/, 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_RED" /*Dark Red*/, 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREEN" /*Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOR" /*Forest Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOIL" /*Foliage Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_OD" /*Olive Drab*/, 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DIRT" /*Dark Earth*/, 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DESERT" /*Desert Tan*/, 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_STEEL" /*Brushed Steel*/, 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_ALUMINIUM" /*Brushed Aluminum*/, 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_P" /*Pure Gold*/, 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_S" /*Brushed Gold*/, 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}

	return *uParam2 != -1;
}

BOOL func_398(var uParam0, ePedComponentType epctParam1) // Position - 0x1DB31 Hash - 0xD01A7DE8 ^0x8A78022F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	var unk;
	int num10;
	var unk2;
	int num11;
	int num12;
	var unk6;
	var unk7;
	var unk8;

	num = 0;
	num3 = Global_1586521[epctParam1 /*142*/].f_5;
	num4 = Global_1586521[epctParam1 /*142*/].f_6;
	num5 = Global_1586521[epctParam1 /*142*/].f_7;
	num6 = Global_1586521[epctParam1 /*142*/].f_65;

	if (num6 == -1)
		num6 = 0;

	if (uParam0->f_5 == -1)
		uParam0->f_5 = 0;

	num12 = 0;

	if (func_411(uParam0->f_1, &num7, &num8))
	{
		if (num7 != -1 && num8 != -1 && num7 != num3 || num8 != num5)
		{
			func_397(uParam0->f_1, &unk2, &num10, &num7, &num8);
		
			if (num10 == 0)
				num11 = 0;
			else if (num10 == 1)
				num11 = 1;
			else if (num10 == 2)
				num11 = 3;
			else if (num10 == 3)
				num11 = 4;
			else if (num10 == 4)
				num11 = 5;
		
			num12 = func_402(&unk2, num11, true, true, false, 0, false);
			num = num + num12;
		}
	}

	if (func_411(uParam0->f_2, &num9, &unk))
	{
		if (num9 != -1 && num9 != num4)
		{
			func_397(uParam0->f_2, &unk2, &num10, &num7, &num8);
		
			if (num10 == 0)
				num11 = 0;
			else if (num10 == 1)
				num11 = 1;
			else if (num10 == 2)
				num11 = 3;
			else if (num10 == 3)
				num11 = 4;
			else if (num10 == 4)
				num11 = 5;
		
			num12 = func_402(&unk2, num11, false, true, false, false, false);
			num = num + num12;
		}
	}

	if (uParam0->f_32 != Global_1586521[epctParam1 /*142*/])
		if (uParam0->f_32 == 3)
			num = num + 200;
		else if (uParam0->f_32 == 0)
			num = num + 200;
		else if (uParam0->f_32 == 4)
			num = num + 200;
		else if (uParam0->f_32 == 2)
			num = num + 300;
		else if (uParam0->f_32 == 1)
			num = num + 600;

	if (!IS_BIT_SET(Global_1586521[epctParam1 /*142*/].f_77, 9))
		if (uParam0->f_18)
			num = num + 25000;

	unk6 = Global_1586521[epctParam1 /*142*/].f_62;
	unk7 = Global_1586521[epctParam1 /*142*/].f_63;
	unk8 = Global_1586521[epctParam1 /*142*/].f_64;

	if (uParam0->f_6 != unk6 || uParam0->f_7 != unk7 || uParam0->f_8 != unk8)
	{
		switch (func_399(uParam0->f_6, uParam0->f_7, uParam0->f_8))
		{
			case 1:
				num = num + 1500;
				break;
		
			case 2:
				num = num + 5000;
				break;
		
			case 3:
				num = num + 10000;
				break;
		
			case 4:
				num = num + 12500;
				break;
		
			case 6:
				num = num + 15000;
				break;
		
			case 8:
				num = num + 20000;
				break;
		
			case 5:
				num = num + 14000;
				break;
		
			case 7:
				num = num + 17500;
				break;
		
			case 9:
				num = num + Global_262145.f_8317;
				break;
		
			case 10:
				num = num + Global_262145.f_8318;
				break;
		
			case 11:
				num = num + Global_262145.f_8444;
				break;
		}
	}

	if (uParam0->f_5 != num6)
		if (uParam0->f_5 == 0)
			num = num + 500;
		else if (uParam0->f_5 == 1)
			num = num + 5000;
		else if (uParam0->f_5 == 2)
			num = num + 3500;
		else if (uParam0->f_5 == 3)
			num = num + 1500;
		else if (uParam0->f_5 == 5)
			num = num + Global_262145.f_8312;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[11];

	if (uParam0->f_9 != num2 && uParam0->f_9 != -1)
		if (uParam0->f_9 == 0)
			num = num + 500;
		else if (uParam0->f_9 == 1)
			num = num + 1800;
		else if (uParam0->f_9 == 2)
			num = num + 2500;
		else if (uParam0->f_9 == 3)
			num = num + 3600;
		else if (uParam0->f_9 == 4)
			num = num + 6700;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[12];

	if (uParam0->f_10 != num2 && uParam0->f_10 != -1)
		if (uParam0->f_10 == 0)
			num = num + 200;
		else if (uParam0->f_10 == 1)
			num = num + 4000;
		else if (uParam0->f_10 == 2)
			num = num + 5400;
		else if (uParam0->f_10 == 3)
			num = num + 7000;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[4];

	if (uParam0->f_13 != num2 && uParam0->f_13 != -1)
		if (uParam0->f_13 == 0)
			num = num + 260;
		else if (uParam0->f_13 == 1)
			num = num + 750;
		else if (uParam0->f_13 == 2)
			num = num + 1800;
		else if (uParam0->f_13 == 3)
			num = num + 3000;
		else if (uParam0->f_13 == 4)
			num = num + 9550;
		else if (uParam0->f_13 == 5)
			num = num + 9750;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[23];
	uParam0->f_11 != num2 && uParam0->f_11 != -1;
	num2 = Global_1586521[epctParam1 /*142*/].f_9[14];

	if (uParam0->f_16 != num2 && uParam0->f_16 != -1)
		if (uParam0->f_16 == 0)
			num = num + 500;
		else if (uParam0->f_16 == 1)
			num = num + 2000;
		else if (uParam0->f_16 == 2)
			num = num + 3000;
		else if (uParam0->f_16 == 3)
			num = num + 5000;
		else if (uParam0->f_16 == 4)
			num = num + 10000;
		else if (uParam0->f_16 == 5)
			num = num + 12500;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[16];

	if (uParam0->f_15 != num2 && uParam0->f_15 != -1)
		if (uParam0->f_15 == 0)
			num = num + 200;
		else if (uParam0->f_15 == 1)
			num = num + 3600;
		else if (uParam0->f_15 == 2)
			num = num + 6000;
		else if (uParam0->f_15 == 3)
			num = num + 9600;
		else if (uParam0->f_15 == 4)
			num = num + 16800;
		else if (uParam0->f_15 == 5)
			num = num + 24000;

	num2 = Global_1586521[epctParam1 /*142*/].f_9[15];

	if (uParam0->f_14 != num2 && uParam0->f_14 != -1)
		if (uParam0->f_14 == 0)
			num = num + 200;
		else if (uParam0->f_14 == 1)
			num = num + 1000;
		else if (uParam0->f_14 == 2)
			num = num + 2000;
		else if (uParam0->f_14 == 3)
			num = num + 3400;
		else if (uParam0->f_14 == 4)
			num = num + 4400;

	if (uParam0->f_17 != -1)
		if (uParam0->f_17 != 1 && Global_1586521[epctParam1 /*142*/].f_9[22] > 0)
			num = num + 100;
		else if (uParam0->f_17 == 1 && Global_1586521[epctParam1 /*142*/].f_9[22] <= 0)
			num = num + 2000;

	if (uParam0->f_19 != -1)
		if (uParam0->f_19 != 1 && Global_1586521[epctParam1 /*142*/].f_9[18] > 0)
			num = num + 1000;
		else if (uParam0->f_19 == 1 && Global_1586521[epctParam1 /*142*/].f_9[18] <= 0)
			num = num + 24000;

	return uParam0->f_27 >= num;
}

int func_399(int iParam0, int iParam1, int iParam2) // Position - 0x1E279 Hash - 0x35A47CE2 ^0x35A47CE2
{
	int r;
	int g;
	int b;
	var a;
	int r2;
	int g2;
	int b2;
	var a2;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 255)
		return 1;

	if (iParam0 == 0 && iParam1 == 0 && iParam2 == 0)
		return 11;

	if (iParam0 == 255 && iParam1 == 127 && iParam2 == 0)
		return 6;

	if (iParam0 == 252 && iParam1 == 238 && iParam2 == 0)
		return 4;

	if (iParam0 == 0 && iParam1 == 174 && iParam2 == 239)
		return 3;

	if (iParam0 == 226 && iParam1 == 6 && iParam2 == 6)
		return 8;

	if (iParam0 == 20 && iParam1 == 20 && iParam2 == 20)
		return 2;

	if (iParam0 == Global_1576240 && iParam1 == Global_1576241 && iParam2 == Global_1576242)
		return 12;

	if (iParam0 == 1 && iParam1 == 1 && iParam2 == 1)
		return 0;

	if (func_401())
	{
		HUD::GET_HUD_COLOUR(HUD_COLOUR_PURPLE, &r, &g, &b, &a);
	
		if (iParam0 == r && iParam1 == g && iParam2 == b)
			return 5;
	
		HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r, &g, &b, &a);
	
		if (iParam0 == r && iParam1 == g && iParam2 == b)
			return 7;
	
		if (iParam0 == 114 && iParam1 == 204 && iParam2 == 114 || iParam0 == 102 && iParam1 == 152 && iParam2 == 104)
			return 7;
	}

	if (func_400())
	{
		HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, &r2, &g2, &b2, &a2);
	
		if (iParam0 == r2 && iParam1 == g2 && iParam2 == b2)
			return 9;
	
		HUD::GET_HUD_COLOUR(HUD_COLOUR_BRONZE, &r2, &g2, &b2, &a2);
	
		if (iParam0 == r2 && iParam1 == g2 && iParam2 == b2)
			return 10;
	}

	return 1;
}

BOOL func_400() // Position - 0x1E4A7 Hash - 0x11DC3931 ^0x27DC47F4
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

BOOL func_401() // Position - 0x1E4B8 Hash - 0x11DC3931 ^0xCE2E5F3C
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_402(const char* sParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1E4C9 Hash - 0x70A27CDD ^0x70A27CDD
{
	int value;

	value = 0;

	switch (iParam1)
	{
		case 1:
			value = func_410(sParam0);
		
			if (func_407())
			{
				if (bParam4 || bParam5 || bParam6)
				{
				}
				else
				{
					value = 0;
				}
			}
			break;
	
		case 4:
			value = func_406(sParam0);
			break;
	
		case 0:
			value = func_405(sParam0);
			break;
	
		case 3:
			value = func_404(sParam0);
			break;
	
		case 5:
			value = 25000;
			break;
	
		case 2:
			value = func_403(sParam0);
			break;
	}

	if (bParam3 && !bParam2)
		value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 2f);

	if (bParam4)
		value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_15082);

	if (bParam5)
		value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_15083);

	if (bParam6)
		value = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) * Global_262145.f_15084);

	return value;
}

int func_403(const char* sParam0) // Position - 0x1E5C8 Hash - 0x586F326 ^0xD502098F
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BLACK"):
			return 2520;
	
		case joaat("BLACK_GRAPHITE"):
			return 2430;
	
		case joaat("GRAPHITE"):
			return 2370;
	
		case joaat("ANTHR_BLACK"):
			return 2490;
	
		case joaat("BLACK_STEEL"):
			return 2580;
	
		case joaat("DARK_SILVER"):
			return 2340;
	
		case joaat("SILVER"):
			return 2460;
	
		case joaat("BLUE_SILVER"):
			return 3200;
	
		case joaat("ROLLED_STEEL"):
			return 2340;
	
		case joaat("SHADOW_SILVER"):
			return 2580;
	
		case joaat("STONE_SILVER"):
			return 2610;
	
		case joaat("MIDNIGHT_SILVER"):
			return 2700;
	
		case joaat("CAST_IRON_SIL"):
			return 2640;
	
		case joaat("RED"):
			return 4200;
	
		case joaat("TORINO_RED"):
			return 15250;
	
		case joaat("FORMULA_RED"):
			return 15000;
	
		case joaat("LAVA_RED"):
			return 19550;
	
		case joaat("BLAZE_RED"):
			return 5400;
	
		case joaat("GRACE_RED"):
			return 2850;
	
		case joaat("GARNET_RED"):
			return 2670;
	
		case joaat("SUNSET_RED"):
			return 18100;
	
		case joaat("CABERNET_RED"):
			return 16240;
	
		case joaat("WINE_RED"):
			return 8200;
	
		case joaat("CANDY_RED"):
			return 19800;
	
		case joaat("HOT PINK"):
			return 20000;
	
		case joaat("PINK"):
			return 19200;
	
		case joaat("SALMON_PINK"):
			return 17600;
	
		case joaat("SUNRISE_ORANGE"):
			return 15800;
	
		case joaat("ORANGE"):
			return 15480;
	
		case joaat("BRIGHT_ORANGE"):
			return 15620;
	
		case joaat("GOLD"):
			return 3500;
	
		case joaat("BRONZE"):
			return 3450;
	
		case joaat("YELLOW"):
			return 15590;
	
		case joaat("RACE_YELLOW"):
			return 15860;
	
		case joaat("FLUR_YELLOW"):
			return 16000;
	
		case joaat("DARK_GREEN"):
			return 2610;
	
		case joaat("RACING_GREEN"):
			return 15760;
	
		case joaat("SEA_GREEN"):
			return 2850;
	
		case joaat("OLIVE_GREEN"):
			return 2550;
	
		case joaat("BRIGHT_GREEN"):
			return 15970;
	
		case joaat("PETROL_GREEN"):
			return 16850;
	
		case joaat("LIME_GREEN"):
			return 20000;
	
		case joaat("MIDNIGHT_BLUE"):
			return 7500;
	
		case joaat("GALAXY_BLUE"):
			return 3030;
	
		case joaat("DARK_BLUE"):
			return 2790;
	
		case joaat("SAXON_BLUE"):
			return 2700;
	
		case joaat("BLUE"):
			return 3840;
	
		case joaat("MARINER_BLUE"):
			return 2610;
	
		case joaat("HARBOR_BLUE"):
			return 2520;
	
		case joaat("DIAMOND_BLUE"):
			return 15700;
	
		case joaat("SURF_BLUE"):
			return 3900;
	
		case joaat("NAUTICAL_BLUE"):
			return 3610;
	
		case joaat("RACING_BLUE"):
			return 15340;
	
		case joaat("ULTRA_BLUE"):
			return 18750;
	
		case joaat("LIGHT_BLUE"):
			return 3450;
	
		case joaat("CHOCOLATE_BROWN"):
			return 6300;
	
		case joaat("BISON_BROWN"):
			return 5800;
	
		case joaat("CREEK_BROWN"):
			return 2340;
	
		case joaat("UMBER_BROWN"):
			return 2430;
	
		case joaat("MAPLE_BROWN"):
			return 2550;
	
		case joaat("BEECHWOOD_BROWN"):
			return 2700;
	
		case joaat("SIENNA_BROWN"):
			return 2760;
	
		case joaat("SADDLE_BROWN"):
			return 2490;
	
		case joaat("MOSS_BROWN"):
			return 2580;
	
		case joaat("WOODBEECH_BROWN"):
			return 2700;
	
		case joaat("STRAW_BROWN"):
			return 2640;
	
		case joaat("SANDY_BROWN"):
			return 2610;
	
		case joaat("BLEECHED_BROWN"):
			return 2340;
	
		case joaat("PURPLE"):
			return 5650;
	
		case joaat("SPIN_PURPLE"):
			return 10000;
	
		case joaat("MIGHT_PURPLE"):
			return 9400;
	
		case joaat("BRIGHT_PURPLE"):
			return 20000;
	
		case joaat("CREAM"):
			return 2340;
	
		case joaat("WHITE"):
			return 2430;
	
		case joaat("FROST_WHITE"):
			return 2610;
	}

	return 0;
}

int func_404(const char* sParam0) // Position - 0x1EA60 Hash - 0x586F326 ^0x676C8AB9
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BLACK"):
			return 2200;
	
		case joaat("GREY"):
			return 2050;
	
		case joaat("LIGHT_GREY"):
			return 2000;
	
		case joaat("WHITE"):
			return 2120;
	
		case joaat("BLUE"):
			return 14250;
	
		case joaat("DARK_BLUE"):
			return 2150;
	
		case joaat("MIDNIGHT_BLUE"):
			return 10000;
	
		case joaat("MIGHT_PURPLE"):
			return 13750;
	
		case joaat("PURPLE"):
			return 17000;
	
		case joaat("RED"):
			return 12500;
	
		case joaat("DARK_RED"):
			return 15000;
	
		case joaat("ORANGE"):
			return 14000;
	
		case joaat("YELLOW"):
			return 11600;
	
		case joaat("LIME_GREEN"):
			return 17500;
	
		case joaat("GREEN"):
			return 2130;
	
		case joaat("MATTE_FOR"):
			return 2150;
	
		case joaat("MATTE_FOIL"):
			return 2100;
	
		case joaat("MATTE_OD"):
			return 2250;
	
		case joaat("MATTE_DIRT"):
			return 2240;
	
		case joaat("MATTE_DESERT"):
			return 2170;
	}

	return 0;
}

int func_405(const char* sParam0) // Position - 0x1EBBF Hash - 0x586F326 ^0xF90FB327
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BLACK"):
			return 1400;
	
		case joaat("BLACK_GRAPHITE"):
			return 1350;
	
		case joaat("GRAPHITE"):
			return 1320;
	
		case joaat("ANTHR_BLACK"):
			return 1380;
	
		case joaat("BLACK_STEEL"):
			return 1440;
	
		case joaat("DARK_SILVER"):
			return 1300;
	
		case joaat("SILVER"):
			return 1370;
	
		case joaat("BLUE_SILVER"):
			return 1340;
	
		case joaat("ROLLED_STEEL"):
			return 1300;
	
		case joaat("SHADOW_SILVER"):
			return 1430;
	
		case joaat("STONE_SILVER"):
			return 1450;
	
		case joaat("MIDNIGHT_SILVER"):
			return 1500;
	
		case joaat("CAST_IRON_SIL"):
			return 1470;
	
		case joaat("RED"):
			return 1530;
	
		case joaat("TORINO_RED"):
			return 9260;
	
		case joaat("FORMULA_RED"):
			return 8890;
	
		case joaat("LAVA_RED"):
			return 14500;
	
		case joaat("BLAZE_RED"):
			return 5000;
	
		case joaat("GRACE_RED"):
			return 1590;
	
		case joaat("GARNET_RED"):
			return 1480;
	
		case joaat("SUNSET_RED"):
			return 13250;
	
		case joaat("CABERNET_RED"):
			return 12000;
	
		case joaat("WINE_RED"):
			return 13000;
	
		case joaat("CANDY_RED"):
			return 14750;
	
		case joaat("HOT PINK"):
			return 15000;
	
		case joaat("PINK"):
			return 13750;
	
		case joaat("SALMON_PINK"):
			return 13000;
	
		case joaat("SUNRISE_ORANGE"):
			return 11000;
	
		case joaat("ORANGE"):
			return 7500;
	
		case joaat("BRIGHT_ORANGE"):
			return 9000;
	
		case joaat("GOLD"):
			return 1650;
	
		case joaat("BRONZE"):
			return 1550;
	
		case joaat("YELLOW"):
			return 8500;
	
		case joaat("RACE_YELLOW"):
			return 11500;
	
		case joaat("FLUR_YELLOW"):
			return 12000;
	
		case joaat("DARK_GREEN"):
			return 1450;
	
		case joaat("RACING_GREEN"):
			return 10500;
	
		case joaat("SEA_GREEN"):
			return 1580;
	
		case joaat("OLIVE_GREEN"):
			return 1420;
	
		case joaat("BRIGHT_GREEN"):
			return 12000;
	
		case joaat("PETROL_GREEN"):
			return 13000;
	
		case joaat("LIME_GREEN"):
			return 15000;
	
		case joaat("MIDNIGHT_BLUE"):
			return 12250;
	
		case joaat("GALAXY_BLUE"):
			return 1690;
	
		case joaat("DARK_BLUE"):
			return 1550;
	
		case joaat("SAXON_BLUE"):
			return 1500;
	
		case joaat("BLUE"):
			return 1430;
	
		case joaat("MARINER_BLUE"):
			return 1450;
	
		case joaat("HARBOR_BLUE"):
			return 1400;
	
		case joaat("DIAMOND_BLUE"):
			return 10890;
	
		case joaat("SURF_BLUE"):
			return 1530;
	
		case joaat("NAUTICAL_BLUE"):
			return 1480;
	
		case joaat("RACING_BLUE"):
			return 7500;
	
		case joaat("ULTRA_BLUE"):
			return 13750;
	
		case joaat("LIGHT_BLUE"):
			return 1350;
	
		case joaat("CHOCOLATE_BROWN"):
			return 11250;
	
		case joaat("BISON_BROWN"):
			return 10000;
	
		case joaat("CREEK_BROWN"):
			return 1300;
	
		case joaat("UMBER_BROWN"):
			return 1350;
	
		case joaat("MAPLE_BROWN"):
			return 1420;
	
		case joaat("BEECHWOOD_BROWN"):
			return 1500;
	
		case joaat("SIENNA_BROWN"):
			return 1530;
	
		case joaat("SADDLE_BROWN"):
			return 1380;
	
		case joaat("MOSS_BROWN"):
			return 1430;
	
		case joaat("WOODBEECH_BROWN"):
			return 1500;
	
		case joaat("STRAW_BROWN"):
			return 1470;
	
		case joaat("SANDY_BROWN"):
			return 1450;
	
		case joaat("BLEECHED_BROWN"):
			return 1300;
	
		case joaat("PURPLE"):
			return 7500;
	
		case joaat("SPIN_PURPLE"):
			return 14250;
	
		case joaat("MIGHT_PURPLE"):
			return 13750;
	
		case joaat("BRIGHT_PURPLE"):
			return 15000;
	
		case joaat("CREAM"):
			return 1300;
	
		case joaat("WHITE"):
			return 1350;
	
		case joaat("FROST_WHITE"):
			return 1450;
	}

	return 0;
}

int func_406(const char* sParam0) // Position - 0x1F057 Hash - 0x586F326 ^0xFCA52A06
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BR_STEEL"):
			return 12500;
	
		case joaat("BR BLACK_STEEL"):
			return 11500;
	
		case joaat("BR_ALUMINIUM"):
			return 10250;
	
		case joaat("GOLD_P"):
			return Global_262145.f_8409;
	
		case joaat("GOLD_S"):
			return Global_262145.f_8410;
	}

	return 0;
}

BOOL func_407() // Position - 0x1F0DD Hash - 0x84DEC354 ^0xA2252968
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (!func_408(PLAYER::PLAYER_ID()))
		return false;

	if (Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_11 != PLAYER::PLAYER_ID())
		return false;

	return true;
}

BOOL func_408(ePedComponentType epctParam0) // Position - 0x1F12C Hash - 0xA4C8B8D7 ^0xCD666882
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 22;

	return false;
}

int func_409(ePedComponentType epctParam0) // Position - 0x1F173 Hash - 0xEE599357 ^0xEE599357
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
	}

	return -1;
}

int func_410(const char* sParam0) // Position - 0x1F673 Hash - 0x586F326 ^0x3F0CC8B0
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BLACK"):
			return 840;
	
		case joaat("BLACK_GRAPHITE"):
			return 810;
	
		case joaat("GRAPHITE"):
			return 790;
	
		case joaat("ANTHR_BLACK"):
			return 830;
	
		case joaat("BLACK_STEEL"):
			return 860;
	
		case joaat("DARK_SILVER"):
			return 780;
	
		case joaat("SILVER"):
			return 820;
	
		case joaat("BLUE_SILVER"):
			return 800;
	
		case joaat("ROLLED_STEEL"):
			return 780;
	
		case joaat("SHADOW_SILVER"):
			return 860;
	
		case joaat("STONE_SILVER"):
			return 870;
	
		case joaat("MIDNIGHT_SILVER"):
			return 900;
	
		case joaat("CAST_IRON_SIL"):
			return 880;
	
		case joaat("RED"):
			return 920;
	
		case joaat("TORINO_RED"):
			return 5600;
	
		case joaat("FORMULA_RED"):
			return 5200;
	
		case joaat("LAVA_RED"):
			return 11600;
	
		case joaat("BLAZE_RED"):
			return 3800;
	
		case joaat("GRACE_RED"):
			return 950;
	
		case joaat("GARNET_RED"):
			return 890;
	
		case joaat("SUNSET_RED"):
			return 10600;
	
		case joaat("CABERNET_RED"):
			return 9600;
	
		case joaat("WINE_RED"):
			return 10400;
	
		case joaat("CANDY_RED"):
			return 12150;
	
		case joaat("HOT PINK"):
			return 12500;
	
		case joaat("PINK"):
			return 11000;
	
		case joaat("SALMON_PINK"):
			return 10400;
	
		case joaat("SUNRISE_ORANGE"):
			return 8800;
	
		case joaat("ORANGE"):
			return 4500;
	
		case joaat("BRIGHT_ORANGE"):
			return 5400;
	
		case joaat("GOLD"):
			return 990;
	
		case joaat("BRONZE"):
			return 930;
	
		case joaat("YELLOW"):
			return 5100;
	
		case joaat("RACE_YELLOW"):
			return 9200;
	
		case joaat("FLUR_YELLOW"):
			return 9600;
	
		case joaat("DARK_GREEN"):
			return 870;
	
		case joaat("RACING_GREEN"):
			return 8400;
	
		case joaat("SEA_GREEN"):
			return 950;
	
		case joaat("OLIVE_GREEN"):
			return 850;
	
		case joaat("BRIGHT_GREEN"):
			return 9600;
	
		case joaat("PETROL_GREEN"):
			return 10400;
	
		case joaat("LIME_GREEN"):
			return 12500;
	
		case joaat("MIDNIGHT_BLUE"):
			return 9800;
	
		case joaat("GALAXY_BLUE"):
			return 1010;
	
		case joaat("DARK_BLUE"):
			return 930;
	
		case joaat("SAXON_BLUE"):
			return 900;
	
		case joaat("BLUE"):
			return 860;
	
		case joaat("MARINER_BLUE"):
			return 870;
	
		case joaat("HARBOR_BLUE"):
			return 840;
	
		case joaat("DIAMOND_BLUE"):
			return 8650;
	
		case joaat("SURF_BLUE"):
			return 920;
	
		case joaat("NAUTICAL_BLUE"):
			return 890;
	
		case joaat("RACING_BLUE"):
			return 4500;
	
		case joaat("ULTRA_BLUE"):
			return 11000;
	
		case joaat("LIGHT_BLUE"):
			return 810;
	
		case joaat("CHOCOLATE_BROWN"):
			return 9050;
	
		case joaat("BISON_BROWN"):
			return 8000;
	
		case joaat("CREEK_BROWN"):
			return 780;
	
		case joaat("UMBER_BROWN"):
			return 810;
	
		case joaat("MAPLE_BROWN"):
			return 850;
	
		case joaat("BEECHWOOD_BROWN"):
			return 900;
	
		case joaat("SIENNA_BROWN"):
			return 920;
	
		case joaat("SADDLE_BROWN"):
			return 830;
	
		case joaat("MOSS_BROWN"):
			return 860;
	
		case joaat("WOODBEECH_BROWN"):
			return 900;
	
		case joaat("STRAW_BROWN"):
			return 880;
	
		case joaat("SANDY_BROWN"):
			return 870;
	
		case joaat("BLEECHED_BROWN"):
			return 780;
	
		case joaat("PURPLE"):
			return 4500;
	
		case joaat("SPIN_PURPLE"):
			return 11400;
	
		case joaat("MIGHT_PURPLE"):
			return 11000;
	
		case joaat("BRIGHT_PURPLE"):
			return 12500;
	
		case joaat("CREAM"):
			return 780;
	
		case joaat("WHITE"):
			return 810;
	
		case joaat("FROST_WHITE"):
			return 870;
	}

	return 0;
}

BOOL func_411(int iParam0, var uParam1, var uParam2) // Position - 0x1FB0B Hash - 0x3AE2649E ^0x3AE2649E
{
	var unk;
	var unk2;

	func_397(iParam0, &unk2, &unk, uParam1, uParam2);
	return *uParam1 != -1 && *uParam2 != -1;
}

BOOL func_412(eCharacter echParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0x1FB31 Hash - 0x3F6523D4 ^0x17CF7561
{
	const char* str;
	BOOL flag;
	int num;

	str = 0;
	flag = false;
	num = -99;
	return func_296(echParam0, sParam1, str, flag, num, str, str, bParam2, iParam3);
}

BOOL func_413(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FB5A Hash - 0x326C99FC ^0x326C99FC
{
	if (bParam1)
		if (func_101(plParam0))
			return true;

	!bParam2;

	if (Global_1845281[plParam0 /*883*/] == PV_COMP_INVALID)
		return false;

	return true;
}

int func_414(var uParam0, int iParam1) // Position - 0x1FB8C Hash - 0x5299517A ^0x5299517A
{
	int num;
	BOOL flag;
	int num2;
	var unk;
	var unk5;
	var unk6;
	int num3;

	num = 0;

	if (iParam1 != -1)
		num = iParam1;

	flag = false;

	while (iParam1 == -1 || iParam1 == num && func_397(num, &unk, &num2, &unk5, &unk6))
	{
		flag = true;
		num3 = func_423(&unk);
	
		if (num2 == 0)
			if (func_415(0, num3, true, 0))
				MISC::SET_BIT(&uParam0->[num / 32], num % 32);
		else if (num2 == 1)
			if (func_415(1, num3, true, 0))
				MISC::SET_BIT(&uParam0->[num / 32], num % 32);
		else if (num2 == 2)
			if (func_415(3, num3, true, 0))
				MISC::SET_BIT(&uParam0->[num / 32], num % 32);
		else if (num2 == 3)
			if (func_415(4, num3, true, 0))
				MISC::SET_BIT(&uParam0->[num / 32], num % 32);
		else if (num2 == 4)
			if (func_415(5, num3, true, 0))
				MISC::SET_BIT(&uParam0->[num / 32], num % 32);
	
		num = num + 1;
	}

	if (!flag)
		return -1;

	return iParam1;
}

BOOL func_415(int iParam0, int iParam1, BOOL bParam2, Entity eParam3) // Position - 0x1FCAC Hash - 0xD4433E3 ^0xC603B070
{
	int num;

	if (func_422(PLAYER::PLAYER_ID()))
		return true;

	if (func_421(PLAYER::PLAYER_ID()))
		return true;

	if (iParam1 == 0)
		return true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(eParam3))
	{
		switch (ENTITY::GET_ENTITY_MODEL(eParam3))
		{
			case joaat("phantom3"):
			case joaat("hauler2"):
			case joaat("trailerlarge"):
			case joaat("avenger"):
			case joaat("avenger3"):
			case joaat("riot2"):
			case joaat("chernobog"):
			case joaat("khanjali"):
			case joaat("barrage"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("terbyte"):
			case joaat("oppressor2"):
			case joaat("speedo4"):
			case joaat("speedo5"):
			case joaat("rcbandito"):
			case joaat("minitank"):
			case -1035489563:
			case joaat("youga3"):
			case -1627077503:
				return true;
		
			default:
				if (func_420(ENTITY::GET_ENTITY_MODEL(eParam3)) || func_211(ENTITY::GET_ENTITY_MODEL(eParam3)))
					return true;
			
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(eParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(eParam3)))
					return true;
				break;
		}
	}

	if (iParam0 == 4)
		if (iParam1 == 32 || iParam1 == 91)
			return func_133(func_419(PLAYER::PLAYER_ID(), true), false) >= 100;

	num = func_418(iParam0, iParam1, bParam2);

	if (num != 0)
		return func_416(iParam0, num);

	return true;
}

BOOL func_416(int iParam0, int iParam1) // Position - 0x1FE0E Hash - 0x64DCBFF5 ^0x5400BA8C
{
	switch (iParam1)
	{
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 166:
		case 167:
		case 168:
		case 169:
		case 137:
			if (func_133(func_419(PLAYER::PLAYER_ID(), true), false) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 148:
		case 149:
		case 150:
		case 151:
			if (func_47(38, -1) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 152:
		case 153:
		case 154:
			if (func_49(154, -1) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_49(161, -1) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 159:
		case 160:
		case 161:
			if (func_49(162, -1) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 162:
		case 163:
		case 164:
		case 165:
			if (func_49(819, -1) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 133:
			return 1;
	
		case 134:
			return 1;
	
		case 135:
			if (func_47(51, -1) >= 1 || func_47(52, -1) >= 1)
				return 1;
			else
				return 0;
			break;
	
		case 170:
			if (func_133(func_419(PLAYER::PLAYER_ID(), true), false) >= func_417(iParam0, iParam1))
				return 1;
			else
				return 0;
			break;
	
		case 136:
			if (func_47(58, -1) >= 1)
				return 1;
			else
				return 0;
			break;
	}

	return 0;
}

ePedComponentType func_417(int iParam0, int iParam1) // Position - 0x20044 Hash - 0x71435871 ^0x71435871
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
		
			case 136:
				return 1;
		
			case 137:
				return 1;
		
			case 169:
				return 1;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
		
			case 170:
				return 100;
		}
	}

	switch (iParam1)
	{
		case 148:
			return 5;
	
		case 149:
			return 10;
	
		case 150:
			return 25;
	
		case 151:
			return 50;
	
		case 155:
			return 5;
	
		case 156:
			return 10;
	
		case 157:
			return 25;
	
		case 158:
			return 50;
	
		case 152:
			return 5;
	
		case 153:
			return 10;
	
		case 154:
			return 25;
	
		case 159:
			return 25;
	
		case 160:
			return 50;
	
		case 161:
			return 100;
	
		case 162:
			return 5;
	
		case 163:
			return 10;
	
		case 164:
			return 25;
	
		case 165:
			return 50;
	}

	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
		
			case 139:
				return 9;
		
			case 140:
				return 11;
		
			case 141:
				return 13;
		
			case 142:
				return 15;
		
			case 143:
				return 17;
		
			case 144:
				return 19;
		
			case 145:
				return 21;
		
			case 146:
				return 23;
		
			case 147:
				return 25;
		
			case 166:
				return 1;
		
			case 167:
				return 1;
		
			case 168:
				return 1;
		
			default:
			
		}
	}

	return 0;
}

int func_418(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20282 Hash - 0xA8CCA0BE ^0xA8CCA0BE
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 1:
			case 75:
			case 48:
			case 15:
			case 30:
			case 78:
			case 77:
			case 34:
			case 46:
			case 80:
				if (bParam2)
					return 134;
				else
					return 169;
				break;
		
			case 87:
			case 90:
			case 86:
			case 88:
			case 89:
				return 136;
		
			case 70:
			case 72:
			case 43:
			case 44:
			case 79:
				return 137;
		}
	}

	if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (bParam2)
					return 133;
				else
					return 166;
				break;
		}
	}

	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
					return 167;
				break;
		}
	}

	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
			case 6:
			case 8:
			case 14:
			case 15:
			case 21:
			case 30:
			case 35:
			case 40:
			case 41:
			case 48:
			case 50:
			case 56:
			case 59:
			case 64:
			case 69:
			case 73:
			case 75:
				if (!bParam2)
					return 168;
				break;
		}
	}

	if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 81:
			case 82:
			case 83:
				return 135;
		
			case 32:
			case 91:
				return 170;
		}
	}

	switch (iParam1)
	{
		case 58:
			return 148;
	
		case 44:
			return 149;
	
		case 55:
			return 150;
	
		case 25:
			return 151;
	
		case 29:
			return 152;
	
		case 85:
			return 153;
	
		case 43:
			return 154;
	
		case 23:
			return 155;
	
		case 38:
			return 156;
	
		case 71:
			return 157;
	
		case 26:
			return 158;
	
		case 24:
			return 159;
	
		case 42:
			return 160;
	
		case 18:
			return 161;
	
		case 62:
			return 162;
	
		case 12:
			return 163;
	
		case 32:
			return 164;
	
		case 84:
			return 165;
	}

	switch (iParam0)
	{
		case 1:
		case 2:
		case 0:
			switch (iParam1)
			{
				case 2:
				case 3:
				case 4:
				case 5:
					return 138;
			
				case 9:
				case 10:
				case 11:
				case 13:
					return 139;
			
				case 16:
				case 17:
				case 19:
				case 20:
					return 140;
			
				case 22:
				case 27:
				case 28:
				case 31:
					return 141;
			
				case 33:
				case 34:
				case 37:
				case 39:
					return 142;
			
				case 45:
				case 46:
				case 47:
				case 49:
					return 143;
			
				case 51:
				case 52:
				case 53:
				case 54:
					return 144;
			
				case 57:
				case 60:
				case 61:
				case 63:
					return 145;
			
				case 65:
				case 66:
				case 67:
				case 68:
					return 146;
			
				case 70:
				case 72:
				case 74:
				case 76:
					return 147;
			}
			break;
	}

	return 0;
}

ePedComponentType func_419(Player plParam0, BOOL bParam1) // Position - 0x20772 Hash - 0x20818560 ^0x20818560
{
	bParam1;
	return func_137(plParam0);
}

BOOL func_420(Hash hParam0) // Position - 0x20785 Hash - 0xBEB8E0BB ^0xBEB8E0BB
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
			return true;
	}

	return false;
}

BOOL func_421(ePedComponentType epctParam0) // Position - 0x20815 Hash - 0xB3E29AC5 ^0x984252B0
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 26;

	return false;
}

BOOL func_422(ePedComponentType epctParam0) // Position - 0x2085C Hash - 0x440D1C81 ^0x7AFACF65
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (func_408(epctParam0) && Global_2657971[epctParam0 /*465*/].f_322.f_11 == epctParam0)
			return 1;

	return 0;
}

int func_423(const char* sParam0) // Position - 0x20891 Hash - 0x4A991920 ^0xFE5D89C5
{
	Hash hashKey;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
		return 0;

	hashKey = MISC::GET_HASH_KEY(sParam0);

	switch (hashKey)
	{
		case joaat("BLACK"):
			return 1;
	
		case joaat("BLACK_GRAPHITE"):
			return 2;
	
		case joaat("GRAPHITE"):
			return 3;
	
		case joaat("ANTHR_BLACK"):
			return 4;
	
		case joaat("BLACK_STEEL"):
			return 5;
	
		case joaat("DARK_SILVER"):
			return 6;
	
		case joaat("SILVER_STEEL"):
			return 7;
	
		case joaat("SILVER"):
			return 8;
	
		case joaat("BLUE_SILVER"):
			return 9;
	
		case joaat("ROLLED_STEEL"):
			return 10;
	
		case joaat("SHADOW_SILVER"):
			return 11;
	
		case joaat("STONE_SILVER"):
			return 12;
	
		case joaat("MIDNIGHT_SILVER"):
			return 13;
	
		case joaat("CAST_IRON_SIL"):
			return 14;
	
		case joaat("RED"):
			return 15;
	
		case joaat("TORINO_RED"):
			return 16;
	
		case joaat("FORMULA_RED"):
			return 17;
	
		case joaat("LAVA_RED"):
			return 18;
	
		case joaat("BLAZE_RED"):
			return 19;
	
		case joaat("GRACE_RED"):
			return 20;
	
		case joaat("GARNET_RED"):
			return 21;
	
		case joaat("SUNSET_RED"):
			return 22;
	
		case joaat("WINE_RED"):
			return 23;
	
		case joaat("CABERNET_RED"):
			return 24;
	
		case joaat("CANDY_RED"):
			return 25;
	
		case joaat("HOT PINK"):
			return 26;
	
		case joaat("PINK"):
			return 27;
	
		case joaat("SALMON_PINK"):
			return 28;
	
		case joaat("SUNRISE_ORANGE"):
			return 29;
	
		case joaat("ORANGE"):
			return 30;
	
		case joaat("BRIGHT_ORANGE"):
			return 31;
	
		case joaat("GOLD"):
			return 32;
	
		case joaat("BRONZE"):
			return 33;
	
		case joaat("YELLOW"):
			return 34;
	
		case joaat("RACE_YELLOW"):
			return 35;
	
		case joaat("RACE_YELLOW1"):
			return 36;
	
		case joaat("DARK_GREEN"):
			return 37;
	
		case joaat("RACING_GREEN"):
			return 38;
	
		case joaat("SEA_GREEN"):
			return 39;
	
		case joaat("OLIVE_GREEN"):
			return 40;
	
		case joaat("BRIGHT_GREEN"):
			return 41;
	
		case joaat("PETROL_GREEN"):
			return 42;
	
		case joaat("LIME_GREEN"):
			return 43;
	
		case joaat("MIDNIGHT_BLUE"):
			return 44;
	
		case joaat("GALAXY_BLUE"):
			return 45;
	
		case joaat("DARK_BLUE"):
			return 46;
	
		case joaat("SAXON_BLUE"):
			return 47;
	
		case joaat("BLUE"):
			return 48;
	
		case joaat("MARINER_BLUE"):
			return 49;
	
		case joaat("HARBOR_BLUE"):
			return 50;
	
		case joaat("DIAMOND_BLUE"):
			return 51;
	
		case joaat("SURF_BLUE"):
			return 52;
	
		case joaat("NAUTICAL_BLUE"):
			return 53;
	
		case joaat("RACING_BLUE"):
			return 54;
	
		case joaat("ULTRA_BLUE"):
			return 55;
	
		case joaat("LIGHT_BLUE"):
			return 56;
	
		case joaat("CHOCOLATE_BROWN"):
			return 57;
	
		case joaat("BISON_BROWN"):
			return 58;
	
		case joaat("CREEK_BROWN"):
			return 59;
	
		case joaat("UMBER_BROWN"):
			return 60;
	
		case joaat("MAPLE_BROWN"):
			return 61;
	
		case joaat("BEECHWOOD_BROWN"):
			return 62;
	
		case joaat("SIENNA_BROWN"):
			return 63;
	
		case joaat("SADDLE_BROWN"):
			return 64;
	
		case joaat("MOSS_BROWN"):
			return 65;
	
		case joaat("WOODBEECH_BROWN"):
			return 66;
	
		case joaat("STRAW_BROWN"):
			return 67;
	
		case joaat("SANDY_BROWN"):
			return 68;
	
		case joaat("BLEECHED_BROWN"):
			return 69;
	
		case joaat("PURPLE"):
			return 70;
	
		case joaat("SPIN_PURPLE"):
			return 71;
	
		case joaat("MIGHT_PURPLE"):
			return 72;
	
		case joaat("BRIGHT_PURPLE"):
			return 73;
	
		case joaat("CREAM"):
			return 74;
	
		case joaat("WHITE"):
			return 75;
	
		case joaat("FROST_WHITE"):
			return 76;
	
		case joaat("GREY"):
			return 77;
	
		case joaat("LIGHT_GREY"):
			return 78;
	
		case joaat("DARK_RED"):
			return 79;
	
		case joaat("GREEN"):
			return 80;
	
		case joaat("BR_STEEL"):
			return 81;
	
		case joaat("BR BLACK_STEEL"):
			return 82;
	
		case joaat("BR_ALUMINIUM"):
			return 83;
	
		case joaat("CHROME"):
			return 84;
	
		case joaat("FLUR_YELLOW"):
			return 85;
	
		case joaat("MATTE_OD"):
			return 86;
	
		case joaat("MATTE_FOR"):
			return 87;
	
		case joaat("MATTE_FOIL"):
			return 88;
	
		case joaat("MATTE_DESERT"):
			return 89;
	
		case joaat("MATTE_DIRT"):
			return 90;
	
		case joaat("GOLD_S"):
			return 91;
	
		case joaat("GOLD_P"):
			return 32;
	}

	return 0;
}

void func_424(int* piParam0) // Position - 0x20DC5 Hash - 0xA61F1CE8 ^0x1727565D
{
	*piParam0 = 0;

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 0);

	if (func_425(5, -1, 0, -1))
		MISC::SET_BIT(piParam0, 1);

	if (func_425(6, -1, 0, -1))
		MISC::SET_BIT(piParam0, 2);

	if (func_425(7, -1, 0, -1))
		MISC::SET_BIT(piParam0, 3);

	if (func_425(8, -1, 0, -1))
		MISC::SET_BIT(piParam0, 4);

	if (func_425(29, -1, 0, -1))
		MISC::SET_BIT(piParam0, 5);

	if (func_425(30, -1, 0, -1))
		MISC::SET_BIT(piParam0, 6);

	if (func_425(31, -1, 0, -1))
		MISC::SET_BIT(piParam0, 7);

	if (func_425(32, -1, 0, -1))
		MISC::SET_BIT(piParam0, 8);

	if (func_425(33, -1, 0, -1))
		MISC::SET_BIT(piParam0, 9);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 10);

	if (func_425(81, -1, 0, -1))
		MISC::SET_BIT(piParam0, 11);

	if (func_425(51, -1, 0, -1))
		MISC::SET_BIT(piParam0, 12);

	if (func_425(61, -1, 0, -1))
		MISC::SET_BIT(piParam0, 13);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 14);

	if (func_425(34, -1, 0, -1))
		MISC::SET_BIT(piParam0, 15);

	if (func_425(35, -1, 0, -1))
		MISC::SET_BIT(piParam0, 16);

	if (func_425(36, -1, 0, -1))
		MISC::SET_BIT(piParam0, 17);

	if (func_425(37, -1, 0, -1))
		MISC::SET_BIT(piParam0, 18);

	if (func_400())
		MISC::SET_BIT(piParam0, 19);

	return;
}

BOOL func_425(int iParam0, int iParam1, Vehicle veParam2, int iParam3) // Position - 0x20F4E Hash - 0x59AD256A ^0xC748D8A2
{
	Hash entityModel;

	if (func_467(iParam1, iParam3))
		return true;

	if (func_466())
		return true;

	if (func_465(iParam1, iParam3) && func_422(PLAYER::PLAYER_ID()))
		return true;

	if (iParam0 == -1)
		return true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return IS_BIT_SET(Global_113969.f_2366.f_539.f_2241[iParam0 / 32], iParam0 % 32);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam2) && !ENTITY::IS_ENTITY_DEAD(veParam2, false))
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam2);
	
		if (func_464(iParam1, iParam3))
			if (entityModel == joaat("phantom3") || entityModel == joaat("hauler2"))
				return true;
			else if (entityModel == joaat("trailerlarge"))
				if (iParam0 == 85 || iParam0 == 86 || iParam0 == 87)
					return true;
	
		if (func_463(iParam1, iParam3))
			if (entityModel == -1576586413 || entityModel == 1384502824)
				return true;
	
		if (func_462(iParam1, iParam3))
			if (entityModel == joaat("avenger") || entityModel == joaat("avenger3"))
				return true;
	
		if (func_461(iParam1, iParam3))
			if (entityModel == joaat("oppressor2"))
				return true;
	
		if (func_460(iParam1, iParam3))
			return true;
	
		if (func_459(iParam1, iParam3))
			if (entityModel == joaat("vigilante"))
				if (iParam0 == 85 || iParam0 == 86)
					return true;
	
		switch (entityModel)
		{
			case joaat("monster3"):
			case joaat("bruiser"):
			case joaat("bruiser2"):
			case joaat("bruiser3"):
			case joaat("impaler2"):
			case joaat("impaler3"):
			case joaat("impaler4"):
			case joaat("issi4"):
			case joaat("deathbike"):
			case joaat("deathbike2"):
			case joaat("deathbike3"):
			case joaat("dominator"):
			case joaat("dominator2"):
			case joaat("dominator4"):
			case joaat("dominator5"):
			case joaat("dominator6"):
			case joaat("slamvan4"):
			case joaat("imperator"):
			case joaat("zr380"):
			case joaat("cerberus"):
			case joaat("scarab"):
			case joaat("brutus"):
			case joaat("imperator2"):
			case joaat("imperator3"):
			case joaat("zr3802"):
			case joaat("zr3803"):
			case joaat("cerberus2"):
			case joaat("scarab2"):
			case joaat("brutus2"):
			case joaat("cerberus3"):
			case joaat("scarab3"):
			case joaat("brutus3"):
			case joaat("slamvan5"):
			case joaat("slamvan6"):
			case joaat("monster4"):
			case joaat("monster5"):
			case joaat("issi5"):
			case joaat("issi6"):
			case joaat("rcbandito"):
				return true;
		}
	
		if (iParam0 == 85 || iParam0 == 86 || iParam0 == 87 || iParam0 == 88)
			if (func_432(veParam2) || func_431(entityModel))
				return true;
	
		if (iParam0 == 77 || iParam0 == 78)
			if (entityModel == joaat("thruster"))
				return true;
	
		if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
			if (entityModel == joaat("oppressor2"))
				return true;
	
		if (iParam0 == 72 || iParam0 == 73 || iParam0 == 74 || iParam0 == 75)
			if (entityModel == joaat("barrage") || func_431(entityModel))
				return true;
	
		if (iParam0 == 21 || iParam0 == 22 || iParam0 == 23)
			if (func_431(entityModel))
				return true;
		else if (iParam0 == 95 || iParam0 == 96)
			if (func_431(entityModel) || func_210(entityModel) && !func_430(entityModel))
				return true;
	
		if (iParam0 == 17 || iParam0 == 18 || iParam0 == 19 || iParam0 == 20 || iParam0 == 62 || iParam0 == 63 || iParam0 == 64)
			if (func_431(entityModel))
				return true;
	}

	if (func_85() == 0)
		return func_426(iParam0, -1);

	return true;
}

BOOL func_426(int iParam0, int iParam1) // Position - 0x2136F Hash - 0x6EBFDAD0 ^0x6EBFDAD0
{
	int num;
	int num2;

	num = func_427(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_28(num2));
}

int func_427(int iParam0, int iParam1) // Position - 0x2138E Hash - 0xCC2D4398 ^0xCC2D4398
{
	int num;

	num = func_49(func_428(iParam0), iParam1);
	return num;
}

int func_428(int iParam0) // Position - 0x213A6 Hash - 0xF08C5B2E ^0xA4BC8B65
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_31(num);

	if (func_85() == 0 || func_429() == 0 || func_85() == 999 && func_429() == 999)
	{
		switch (num2)
		{
			case 0:
				return 730;
		
			case 1:
				return 731;
		
			case 2:
				return 732;
		
			case 3:
				return 733;
		
			case 4:
				return 734;
		
			case 5:
				return 735;
		
			case 6:
				return 736;
		}
	}

	return 14835;
}

int func_429() // Position - 0x21460 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32949;
}

BOOL func_430(Hash hParam0) // Position - 0x2146B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
			return true;
	}

	return false;
}

BOOL func_431(Hash hParam0) // Position - 0x2149A Hash - 0x60BBC37B ^0x536B228
{
	if (hParam0 == joaat("mule4") || hParam0 == joaat("pounder2") || hParam0 == joaat("speedo4") || hParam0 == joaat("terbyte"))
		return 1;

	return 0;
}

BOOL func_432(Vehicle veParam0) // Position - 0x214DC Hash - 0xA5DB5D66 ^0x69EED3AC
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (func_453(veParam0))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
		return false;

	if (func_442(veParam0, false))
		return true;

	if (func_440(PLAYER::PLAYER_ID()) && !func_437(ENTITY::GET_ENTITY_MODEL(veParam0)) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("openwheel1")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("openwheel2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("formula")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("formula2")))
		return false;

	if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("oppressor2")))
		return false;

	if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("thruster")))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
		if (DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			if (!func_433(veParam0))
				return true;

	if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Thruster"))
		if (DECORATOR::DECOR_GET_INT(veParam0, "Player_Thruster") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			if (!func_433(veParam0))
				return true;

	return false;
}

BOOL func_433(Vehicle veParam0) // Position - 0x21621 Hash - 0x3A8B7756 ^0x27EBD90E
{
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_435(veParam0) || func_434(entityModel))
			return true;
	
		switch (entityModel)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
			case joaat("speedo5"):
				return true;
		}
	}

	return false;
}

BOOL func_434(Hash hParam0) // Position - 0x2169E Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("brickade"):
		case joaat("dune"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("boxville5"):
		case -842765535:
		case 728350375:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_435(Vehicle veParam0) // Position - 0x216FA Hash - 0xBF677DFF ^0xBA899DB9
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return true;
	
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (func_436(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case joaat("minitank"):
		case joaat("burrito2"):
			return true;
	
		case -1576586413:
			if (func_421(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case -1627077503:
			return true;
	}

	return false;
}

BOOL func_436(ePedComponentType epctParam0) // Position - 0x217C2 Hash - 0x796267EB ^0x3C8CE6D9
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 13;

	return false;
}

BOOL func_437(Hash hParam0) // Position - 0x21809 Hash - 0xA3849A68 ^0x6E64A3CE
{
	BOOL flag;

	if (hParam0 == joaat("oppressor2"))
		return false;

	flag = false;

	if (hParam0 == joaat("riot2") || hParam0 == joaat("chernobog") || hParam0 == joaat("khanjali"))
		if (!*Global_262145.f_33331)
			flag = true;

	if (!func_439(PLAYER::PLAYER_ID()) && hParam0 != joaat("thruster") && hParam0 != joaat("avenger") && hParam0 != func_438(true) && !flag)
		return false;

	return true;
}

Hash func_438(BOOL bParam0) // Position - 0x2189A Hash - 0x9AA99395 ^0x67DFE72D
{
	if (bParam0)
		return joaat("avenger3");

	return joaat("avenger");
}

BOOL func_439(Player plParam0) // Position - 0x218B4 Hash - 0xB97D25CA ^0xB97D25CA
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_311, 2);

	return false;
}

BOOL func_440(ePedComponentType epctParam0) // Position - 0x218DA Hash - 0x6AB0796B ^0x665081DB
{
	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (func_441(epctParam0) && Global_2657971[epctParam0 /*465*/].f_322.f_11 == epctParam0)
		return true;

	return false;
}

BOOL func_441(ePedComponentType epctParam0) // Position - 0x21913 Hash - 0x3B8D0381 ^0x44C14AC2
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 9;

	return false;
}

BOOL func_442(Vehicle veParam0, BOOL bParam1) // Position - 0x2195A Hash - 0x75473DE8 ^0xBB71153A
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_444(ENTITY::GET_ENTITY_MODEL(veParam0), 0))
				if (Global_2738935.f_307 == veParam0)
					return true;
				else if (func_443(veParam0) != -1 && !bParam1)
					return true;
			break;
	}

	return false;
}

int func_443(Vehicle veParam0) // Position - 0x219B5 Hash - 0x1C915FC3 ^0xC34A4318
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			if (Global_2672855.f_231[i] == veParam0)
				return i;
		}
	}

	return -1;
}

BOOL func_444(Hash hParam0, int iParam1) // Position - 0x219EE Hash - 0xD8F8F78 ^0xD8F8F78
{
	if (iParam1 == 0)
		if (func_218(hParam0, 0))
			return true;

	switch (hParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_452();
	
		case joaat("sabregt"):
			if (Global_262145.f_14701)
				return func_451();
			break;
	
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14702)
				return func_451();
			break;
	
		case joaat("virgo3"):
			if (Global_262145.f_14700)
				return func_451();
			break;
	
		case joaat("minivan"):
			if (Global_262145.f_14703)
				return func_451();
			break;
	
		case joaat("slamvan"):
			if (Global_262145.f_14705)
				return func_451();
			break;
	
		case joaat("sultan"):
		case joaat("banshee"):
			return func_450();
	
		case joaat("comet2"):
			if (Global_262145.f_18948)
				return func_449();
			break;
	
		case joaat("diablous"):
			if (Global_262145.f_18950)
				return func_449();
			break;
	
		case joaat("fcr"):
			if (Global_262145.f_18954)
				return func_449();
			break;
	
		case joaat("elegy2"):
			if (Global_262145.f_18951)
				return func_449();
			break;
	
		case joaat("nero"):
			if (Global_262145.f_18958)
				return func_449();
			break;
	
		case joaat("italigtb"):
			if (Global_262145.f_18956)
				return func_449();
			break;
	
		case joaat("specter"):
			if (Global_262145.f_18961)
				return func_449();
			break;
	
		case joaat("technical"):
			if (Global_262145.f_20834)
				return func_448();
			break;
	
		case joaat("insurgent"):
			if (Global_262145.f_20835)
				return func_448();
			break;
	
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_447();
	
		case joaat("glendale"):
			if (func_447() || func_446())
				return true;
			break;
	
		case joaat("impaler"):
			return func_447();
	
		case joaat("issi3"):
			return func_447();
	
		case joaat("gargoyle"):
			return func_447();
	
		case joaat("dominator"):
			return func_447();
	
		case joaat("dominator2"):
			return func_447();
	
		case joaat("imperator"):
			return func_447();
	
		case joaat("imperator2"):
			return func_447();
	
		case joaat("imperator3"):
			return func_447();
	
		case joaat("deathbike"):
			return func_447();
	
		case joaat("deathbike2"):
			return func_447();
	
		case joaat("deathbike3"):
			return func_447();
	
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return func_447();
	
		case joaat("youga2"):
			if (Global_262145.f_28833)
				return func_446();
			break;
	
		case joaat("gauntlet3"):
			if (Global_262145.f_29162)
				return func_446();
			break;
	
		case joaat("manana"):
			if (Global_262145.f_28832)
				return func_446();
			break;
	
		case joaat("peyote"):
			if (Global_262145.f_29161)
				return func_446();
			break;
	
		case joaat("yosemite"):
			if (Global_262145.f_29160)
				return func_446();
			break;
	}

	switch (hParam0)
	{
		case joaat("tenf"):
			if (Global_262145.f_32429)
				return func_445();
			break;
	
		case joaat("weevil"):
			if (Global_262145.f_32428)
				return func_445();
			break;
	
		case joaat("brioso2"):
			if (Global_262145.f_32421)
				return func_445();
			break;
	
		case joaat("sentinel3"):
			if (Global_262145.f_32430)
				return func_445();
			break;
	}

	return false;
}

BOOL func_445() // Position - 0x21E61 Hash - 0x11DC3931 ^0x876AD057
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}

BOOL func_446() // Position - 0x21E72 Hash - 0x11DC3931 ^0xAC641598
{
	return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}

BOOL func_447() // Position - 0x21E83 Hash - 0x11DC3931 ^0x3EBF9FF6
{
	return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}

BOOL func_448() // Position - 0x21E94 Hash - 0x11DC3931 ^0x309FFA9B
{
	return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}

BOOL func_449() // Position - 0x21EA5 Hash - 0x11DC3931 ^0xAE129F72
{
	return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}

BOOL func_450() // Position - 0x21EB6 Hash - 0x11DC3931 ^0x88C0156C
{
	return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}

BOOL func_451() // Position - 0x21EC7 Hash - 0x11DC3931 ^0xDC89318D
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}

BOOL func_452() // Position - 0x21ED8 Hash - 0x11DC3931 ^0x2629586D
{
	return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

BOOL func_453(Vehicle veParam0) // Position - 0x21EE9 Hash - 0xEDA47CC8 ^0x5F29FF17
{
	if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
	{
		if (func_457() || func_456(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_98(PLAYER::PLAYER_ID(), true, false) && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_35 > PV_COMP_HEAD || IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 14) || IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 11))
			return false;
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
				if (DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
					if (func_455() != PV_COMP_INVALID && func_455() < 517)
						if (!func_454(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) != Global_1586521[func_455() /*142*/].f_66)
							return true;
					else
						return true;
	}

	return false;
}

BOOL func_454(Vehicle veParam0) // Position - 0x21FE2 Hash - 0xFBF8DA3E ^0xFBF8DA3E
{
	if (Global_2738935.f_301 == veParam0)
		return true;

	return false;
}

ePedComponentType func_455() // Position - 0x21FFB Hash - 0x4F0334D6 ^0xD7FBBA68
{
	return Global_2359296[func_195() /*5570*/].f_681.f_2;
}

BOOL func_456(ePedComponentType epctParam0) // Position - 0x22013 Hash - 0x3BED6F11 ^0x3BED6F11
{
	if (epctParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
		return IS_BIT_SET(Global_2657971[epctParam0 /*465*/].f_322, 3);

	return false;
}

BOOL func_457() // Position - 0x22044 Hash - 0x4B5A576F ^0x4B5A576F
{
	return func_458() != PV_COMP_INVALID;
}

ePedComponentType func_458() // Position - 0x22052 Hash - 0xEAE183ED ^0x84867848
{
	return Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_322.f_8;
}

BOOL func_459(int iParam0, int iParam1) // Position - 0x2206A Hash - 0x569CD4B8 ^0x569CD4B8
{
	if (iParam0 == 45)
		if (iParam1 == 10)
			return true;

	return false;
}

BOOL func_460(int iParam0, int iParam1) // Position - 0x22085 Hash - 0x631BA415 ^0x631BA415
{
	if (iParam0 == 45)
		if (iParam1 == 12)
			return true;

	return false;
}

BOOL func_461(int iParam0, int iParam1) // Position - 0x220A0 Hash - 0x9578FA7A ^0x9578FA7A
{
	if (iParam0 == 45)
		if (iParam1 == 16)
			return true;

	return false;
}

BOOL func_462(int iParam0, int iParam1) // Position - 0x220BB Hash - 0xAD39D7F0 ^0xAD39D7F0
{
	if (iParam0 == 45)
		if (iParam1 == 14)
			return true;

	return false;
}

BOOL func_463(int iParam0, int iParam1) // Position - 0x220D6 Hash - 0x2A3540C5 ^0x2A3540C5
{
	if (iParam0 == 45)
		if (iParam1 == 21)
			return true;

	return false;
}

BOOL func_464(int iParam0, int iParam1) // Position - 0x220F1 Hash - 0x1764C162 ^0x1764C162
{
	if (iParam0 == 45)
		if (iParam1 == 11)
			return true;

	return false;
}

BOOL func_465(int iParam0, int iParam1) // Position - 0x2210C Hash - 0xF2E62F76 ^0xF2E62F76
{
	if (iParam0 == 45)
		if (iParam1 == 19)
			return true;

	return false;
}

BOOL func_466() // Position - 0x22127 Hash - 0xC79BF757 ^0xC79BF757
{
	return IS_BIT_SET(Global_104513, 10);
}

BOOL func_467(int iParam0, int iParam1) // Position - 0x22136 Hash - 0xEEC9CDF0 ^0xEEC9CDF0
{
	if (iParam0 == 45)
	{
		switch (iParam1)
		{
			case 1:
			case 2:
			case 3:
				return true;
		
			default:
			
		}
	}

	return false;
}

void func_468(int* piParam0) // Position - 0x22163 Hash - 0xC50D4483 ^0x582ED00F
{
	*piParam0 = 0;

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 0);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 1);

	if (func_425(43, -1, 0, -1))
		MISC::SET_BIT(piParam0, 2);

	if (func_425(44, -1, 0, -1))
		MISC::SET_BIT(piParam0, 3);

	if (func_425(45, -1, 0, -1))
		MISC::SET_BIT(piParam0, 4);

	if (func_425(55, -1, 0, -1))
		MISC::SET_BIT(piParam0, 5);

	if (func_425(56, -1, 0, -1))
		MISC::SET_BIT(piParam0, 6);

	if (func_425(57, -1, 0, -1))
		MISC::SET_BIT(piParam0, 7);

	if (func_425(58, -1, 0, -1))
		MISC::SET_BIT(piParam0, 8);

	if (func_425(59, -1, 0, -1))
		MISC::SET_BIT(piParam0, 9);

	if (func_425(60, -1, 0, -1))
		MISC::SET_BIT(piParam0, 10);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 11);

	if (func_425(47, -1, 0, -1))
		MISC::SET_BIT(piParam0, 12);

	if (func_425(48, -1, 0, -1))
		MISC::SET_BIT(piParam0, 13);

	if (func_425(49, -1, 0, -1))
		MISC::SET_BIT(piParam0, 14);

	if (func_425(50, -1, 0, -1))
		MISC::SET_BIT(piParam0, 15);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 16);

	if (func_425(13, -1, 0, -1))
		MISC::SET_BIT(piParam0, 17);

	if (func_425(14, -1, 0, -1))
		MISC::SET_BIT(piParam0, 18);

	if (func_425(15, -1, 0, -1))
		MISC::SET_BIT(piParam0, 19);

	if (func_425(16, -1, 0, -1))
		MISC::SET_BIT(piParam0, 20);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 21);

	if (func_425(77, -1, 0, -1))
		MISC::SET_BIT(piParam0, 22);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 23);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 24);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 25);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 26);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 27);

	if (func_425(-1, -1, 0, -1))
		MISC::SET_BIT(piParam0, 28);

	if (func_425(46, -1, 0, -1))
		MISC::SET_BIT(piParam0, 29);

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x223B4 Hash - 0x269D56BD ^0xB104E3E4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

BOOL func_470(int iParam0) // Position - 0x223D0 Hash - 0xD923E572 ^0xD923E572
{
	if (func_105(76, iParam0) == true)
		return true;

	return false;
}

BOOL _MPPLY_STAT_GET_BOOL(Hash hParam0) // Position - 0x223EC Hash - 0x4F1C0EC ^0xB4ADB2C9
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return 0;
}

void func_472(char* sParam0, float fParam1) // Position - 0x2240A Hash - 0xD081EBCC ^0xE6D60CCF
{
	APP::APP_SET_FLOAT(func_24(sParam0), fParam1);
	return;
}

void func_473(char* sParam0, char* sParam1) // Position - 0x2241E Hash - 0xD081EBCC ^0xBE3E550C
{
	APP::APP_SET_STRING(func_24(sParam0), sParam1);
	return;
}

int func_474(int iParam0, int iParam1, int iParam2, BOOL bParam3, var uParam4) // Position - 0x22432 Hash - 0x926DDB09 ^0x926DDB09
{
	int i;
	int num;
	var unk;
	int num2;
	int num3;

	for (i = 0; func_397(i, &unk, &num, &num2, &num3); i = i + 1)
	{
		if (iParam0 == num2 && !bParam3 || iParam1 == num3 && iParam2 == num || iParam2 == -1 || iParam2 == 255)
		{
			*uParam4 = i;
			return 1;
		}
	}

	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

void func_475(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x224A5 Hash - 0xF92B8944 ^0xD11BCD5C
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case 0:
			num = joaat("tailgater");
		
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case 2:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113969.f_9088.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_113969.f_9088.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_476(eCharacter echParam0) // Position - 0x22701 Hash - 0xD066DC61 ^0xD066DC61
{
	if (func_259(echParam0))
		if (Global_113969.f_9088 || Global_4 || _IS_MISSION_REPEAT_ACTIVE(false))
			return Global_113969.f_2366.f_539.f_2348[echParam0];
		else
			return true;

	return false;
}

BOOL func_477(int iParam0) // Position - 0x2274F Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

void func_478(var uParam0, int iParam1) // Position - 0x2275D Hash - 0x5623AF01 ^0x20221771
{
	*uParam0 = Global_1586521[iParam1 /*142*/].f_66;
	uParam0->f_3 = Global_1586521[iParam1 /*142*/].f_65;
	uParam0->f_4 = Global_1586521[iParam1 /*142*/].f_62;
	uParam0->f_5 = Global_1586521[iParam1 /*142*/].f_63;
	uParam0->f_6 = Global_1586521[iParam1 /*142*/].f_64;
	uParam0->f_10 = Global_1586521[iParam1 /*142*/].f_69;
	uParam0->f_16 = IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_77, 9);
	uParam0->f_19 = { Global_1586521[iParam1 /*142*/].f_1 };
	uParam0->f_23 = Global_1586521[iParam1 /*142*/];
	uParam0->f_7 = Global_1586521[iParam1 /*142*/].f_9[11];
	uParam0->f_8 = Global_1586521[iParam1 /*142*/].f_9[12];
	uParam0->f_9 = Global_1586521[iParam1 /*142*/].f_9[23];
	uParam0->f_11 = Global_1586521[iParam1 /*142*/].f_9[4];
	uParam0->f_12 = Global_1586521[iParam1 /*142*/].f_9[15];
	uParam0->f_13 = Global_1586521[iParam1 /*142*/].f_9[16];
	uParam0->f_14 = Global_1586521[iParam1 /*142*/].f_9[14];
	uParam0->f_15 = Global_1586521[iParam1 /*142*/].f_9[22];
	uParam0->f_18 = Global_1586521[iParam1 /*142*/].f_9[20];
	uParam0->f_17 = Global_1586521[iParam1 /*142*/].f_9[18];
	uParam0->f_40 = IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_103, 25);
	uParam0->f_41 = IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_103, 26);
	func_474(Global_1586521[iParam1 /*142*/].f_5, Global_1586521[iParam1 /*142*/].f_7, Global_1586521[iParam1 /*142*/].f_138, true, &(uParam0->f_1));
	func_474(Global_1586521[iParam1 /*142*/].f_6, -1, Global_1586521[iParam1 /*142*/].f_139, false, &(uParam0->f_2));

	if (IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_77, 13))
		uParam0->f_1 = -1;

	if (IS_BIT_SET(Global_1586521[iParam1 /*142*/].f_77, 12))
		uParam0->f_2 = -1;

	uParam0->f_42 = Global_2359296[func_195() /*5570*/].f_593.f_52;
	return;
}

BOOL func_479(int iParam0, var uParam1) // Position - 0x22941 Hash - 0x9B024D2C ^0x9A0808FE
{
	int i;
	int num;

	for (i = 0; i < 517; i = i + 1)
	{
		if (func_480(i, &num))
		{
			if (num == iParam0)
			{
				*uParam1 = i;
				return true;
			}
		}
	}

	return false;
}

BOOL func_480(ePedComponentType epctParam0, var uParam1) // Position - 0x22979 Hash - 0xB7CA8BAB ^0xB7CA8BAB
{
	int num;

	*uParam1 = -1;
	num = 0;

	if (epctParam0 >= 0 && epctParam0 <= 9)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 13 && epctParam0 <= 22)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 26 && epctParam0 <= 35)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 39 && epctParam0 <= 48)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 52 && epctParam0 <= 61)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 65 && epctParam0 <= 74 || epctParam0 >= 75 && epctParam0 <= 84)
		*uParam1 = epctParam0 - num;

	num = num + 3;

	if (epctParam0 >= 88 && epctParam0 <= 107 || epctParam0 >= 108 && epctParam0 <= 127 || epctParam0 >= 128 && epctParam0 <= 147 || epctParam0 >= 148 && epctParam0 <= 155)
		*uParam1 = epctParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 20;

	if (epctParam0 >= 179 && epctParam0 <= 185)
		*uParam1 = epctParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (epctParam0 >= 191 && epctParam0 <= 221)
		*uParam1 = epctParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (epctParam0 >= 227 && epctParam0 <= 235)
		*uParam1 = epctParam0 - num;

	num = num + 1;

	if (epctParam0 >= 237 && epctParam0 <= 245)
		*uParam1 = epctParam0 - num;

	num = num + 1;

	if (epctParam0 >= 247 && epctParam0 <= 255)
		*uParam1 = epctParam0 - num;

	num = num + 1;
	num = num + 1;

	if (epctParam0 >= 258 && epctParam0 <= 267)
		*uParam1 = epctParam0 - num;

	num = num + 1;
	num = num + 1;

	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return false;
	}

	return *uParam1 != -1;
}

void func_481() // Position - 0x22BEC Hash - 0xACEC655D ^0x7B63EC44
{
	int num;
	int i;
	int num2;
	var unk;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
	{
		num = func_195();
	
		if (func_483(num))
		{
			for (i = 0; i < 10; i = i + 1)
			{
				num2 = Global_2359296[num /*5570*/].f_593.f_74[i] - 1;
			
				if (num2 >= 0 && Global_1586521[num2 /*142*/].f_66 != PV_COMP_HEAD && !IS_BIT_SET(Global_1586521[num2 /*142*/].f_103, 1) || IS_BIT_SET(Global_1586521[num2 /*142*/].f_103, 2) && func_220(Global_1586521[num2 /*142*/].f_66))
					if (func_480(num2, &unk))
						if (!IS_BIT_SET(Global_1586521[num2 /*142*/].f_103, 26))
							MISC::SET_BIT(&(Global_1586521[num2 /*142*/].f_103), 25);
			}
		
			Global_2359296[num /*5570*/].f_593.f_53 = 0;
			func_482(num, false);
		}
	}

	return;
}

void func_482(int iParam0, BOOL bParam1) // Position - 0x22CD3 Hash - 0x605905C7 ^0x14B8CFCD
{
	switch (iParam0)
	{
		case 0:
			bLocal_82 = bParam1;
			_STAT_SET_PACKED_BOOL(2921, bParam1, -1);
			break;
	
		case 1:
			bLocal_83 = bParam1;
			_STAT_SET_PACKED_BOOL(2922, bParam1, -1);
			break;
	}

	return;
}

BOOL func_483(int iParam0) // Position - 0x22D10 Hash - 0x492F5B75 ^0x492F5B75
{
	switch (iParam0)
	{
		case 0:
			return bLocal_82;
	
		case 1:
			return bLocal_83;
	}

	return false;
}

void func_484() // Position - 0x22D3C Hash - 0x428B700A ^0x72396072
{
	ePedComponentType i;
	int j;
	ePedComponentType type;
	int num;
	int num2;
	int num3;
	BOOL flag;
	var unk;
	BOOL flag2;
	int num4;
	BOOL flag3;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	unk = 10;

	for (i = 0; i < 10; i = i + 1)
	{
		unk[i] = Global_2359296[func_195() /*5570*/].f_593.f_74[i];
	}

	switch (iLocal_327)
	{
		case 0:
			flag = false;
		
			if (!func_485(PLAYER::PLAYER_ID(), true))
			{
				for (i = 0; i < 10; i = i + 1)
				{
					type = Global_2359296[func_195() /*5570*/].f_593.f_74[i] - 1;
				
					if (type >= PV_COMP_HEAD && Global_1586521[type /*142*/].f_66 == PV_COMP_HEAD || IS_BIT_SET(Global_1586521[type /*142*/].f_103, 1) && !IS_BIT_SET(Global_1586521[type /*142*/].f_103, 2))
					{
						Global_2359296[func_195() /*5570*/].f_593.f_74[i] = 0;
						unk[i] = 0;
					
						for (j = 0; j < 10; j = j + 1)
						{
							if (Global_2359296[func_195() /*5570*/].f_593.f_63[j] == type + 1)
								Global_2359296[func_195() /*5570*/].f_593.f_63[j] = 0;
						}
					
						flag = true;
					}
				}
			}
		
			if (flag)
			{
				j = 0;
			
				for (i = 0; i < 10; i = i + 1)
				{
					if (unk[i] != 0)
					{
						Global_2359296[func_195() /*5570*/].f_593.f_74[j] = unk[i];
						j = j + 1;
					}
				}
			
				for (i = j; i <= 9; i = i + 1)
				{
					Global_2359296[func_195() /*5570*/].f_593.f_74[i] = 0;
				}
			}
		
			iLocal_327 = iLocal_327 + 1;
			break;
	
		case 1:
			type = PV_COMP_INVALID;
		
			if (Global_2359296[func_195() /*5570*/].f_681.f_2 != Global_2359296[func_195() /*5570*/].f_593.f_85 && Global_2359296[func_195() /*5570*/].f_681.f_2 != PV_COMP_INVALID && Global_1586521[Global_2359296[func_195() /*5570*/].f_681.f_2 /*142*/].f_66 != PV_COMP_HEAD && !IS_BIT_SET(Global_1586521[Global_2359296[func_195() /*5570*/].f_681.f_2 /*142*/].f_103, 1) || IS_BIT_SET(Global_1586521[Global_2359296[func_195() /*5570*/].f_681.f_2 /*142*/].f_103, 2))
			{
				type = Global_2359296[func_195() /*5570*/].f_681.f_2;
				Global_2359296[func_195() /*5570*/].f_593.f_85 = type;
			}
			else if (Global_2359296[func_195() /*5570*/].f_593.f_86 != 0)
			{
				type = Global_2359296[func_195() /*5570*/].f_593.f_86 - 1;
				Global_2359296[func_195() /*5570*/].f_593.f_86 = 0;
			}
		
			if (type != PV_COMP_INVALID)
			{
				flag2 = false;
			
				for (i = 0; i < 10; i = i + 1)
				{
					if (Global_2359296[func_195() /*5570*/].f_593.f_63[i] == type + 1)
						flag2 = true;
				}
			
				if (!flag2)
				{
					num4 = -1;
				
					for (i = 0; i < 10; i = i + 1)
					{
						if (Global_2359296[func_195() /*5570*/].f_593.f_74[i] > 0)
							num4 = i;
					}
				
					if (num4 < 9)
						num4 = num4 + 1;
				
					for (i = 0; i < 10; i = i + 1)
					{
						if (Global_2359296[func_195() /*5570*/].f_593.f_63[i] == Global_2359296[func_195() /*5570*/].f_593.f_74[num4])
						{
							Global_2359296[func_195() /*5570*/].f_593.f_63[i] = type + 1;
							i = 11;
						}
					}
				}
			
				Global_2359296[func_195() /*5570*/].f_593.f_74[0] = type + 1;
				j = 1;
			
				for (i = 0; i < 10; i = i + 1)
				{
					if (unk[i] != 0 && unk[i] != type + 1 && j < 10)
					{
						Global_2359296[func_195() /*5570*/].f_593.f_74[j] = unk[i];
						j = j + 1;
					}
				}
			
				for (i = j; i <= 9; i = i + 1)
				{
					Global_2359296[func_195() /*5570*/].f_593.f_74[i] = 0;
				}
			}
			else if (Global_110667)
			{
				num = 0;
				num3 = -1;
			
				for (i = 0; i <= 9; i = i + 1)
				{
					if (Global_2359296[func_195() /*5570*/].f_593.f_74[i] == 0)
					{
						if (num3 == -1)
							num3 = i;
					
						num = num + 1;
					}
				}
			
				if (num > 0)
				{
					num2 = 0;
				
					for (i = 0; i <= 516; i = i + 1)
					{
						if (func_480(i, &j) && Global_1586521[i /*142*/].f_66 != PV_COMP_HEAD && !IS_BIT_SET(Global_1586521[i /*142*/].f_103, 1) || IS_BIT_SET(Global_1586521[i /*142*/].f_103, 2) && func_220(Global_1586521[i /*142*/].f_66))
							num2 = num2 + 1;
					
						if (num2 > 10 - num)
							break;
					}
				
					if (num2 > 10 - num)
					{
						for (i = 0; i <= 516; i = i + 1)
						{
							if (func_480(i, &j) && Global_1586521[i /*142*/].f_66 != PV_COMP_HEAD && !IS_BIT_SET(Global_1586521[i /*142*/].f_103, 1) || IS_BIT_SET(Global_1586521[i /*142*/].f_103, 2) && func_220(Global_1586521[i /*142*/].f_66))
							{
								flag3 = false;
							
								for (j = 0; j < 10; j = j + 1)
								{
									if (Global_2359296[func_195() /*5570*/].f_593.f_63[j] == i + 1)
									{
										flag3 = true;
										j = 11;
									}
								}
							
								if (!flag3)
								{
									type = i;
									i = 518;
								}
							}
						}
					
						if (type != PV_COMP_INVALID)
						{
							for (i = PV_COMP_HEAD; i < PV_COMP_DECL; i = i + 1)
							{
								if (Global_2359296[func_195() /*5570*/].f_593.f_63[i] == Global_2359296[func_195() /*5570*/].f_593.f_74[num3])
								{
									Global_2359296[func_195() /*5570*/].f_593.f_63[i] = type + 1;
									i = PV_COMP_JBIB;
								}
							}
						
							Global_2359296[func_195() /*5570*/].f_593.f_74[num3] = type + 1;
						}
					}
				}
			}
		
			iLocal_327 = iLocal_327 + 1;
			break;
	
		default:
			iLocal_327 = iLocal_327 + 1;
			break;
	}

	if (iLocal_327 > Global_262145.f_31858)
		iLocal_327 = 0;

	return;
}

BOOL func_485(Player plParam0, BOOL bParam1) // Position - 0x2337E Hash - 0x6A5902D8 ^0x43BBDD7B
{
	if (func_486(plParam0, bParam1, -1))
		if (IS_BIT_SET(Global_1845281[plParam0 /*883*/].f_268.f_33, 3))
			return true;

	return false;
}

BOOL func_486(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x233AA Hash - 0xDAF96BD9 ^0x6898185F
{
	if (Global_1845281[epctParam0 /*883*/].f_268.f_35 > PV_COMP_HEAD)
		if (bParam1)
			if (IS_BIT_SET(Global_1845281[epctParam0 /*883*/].f_268.f_33, 0))
				return true;
		else
			return true;

	if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
	{
		if (iParam2 == -1 || func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) != iParam2)
		{
			if (bParam1)
				return func_487(epctParam0) == epctParam0;
		
			return true;
		}
	}

	return false;
}

ePedComponentType func_487(ePedComponentType epctParam0) // Position - 0x23431 Hash - 0xF9B95C37 ^0xF9B95C37
{
	int num;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return epctParam0;

	if (func_491(epctParam0) != PV_COMP_INVALID)
	{
		num = func_409(func_491(epctParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (func_489(epctParam0, false))
				return func_488(epctParam0);
		
			return epctParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return Global_2657971[epctParam0 /*465*/].f_322.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

ePedComponentType func_488(ePedComponentType epctParam0) // Position - 0x234C0 Hash - 0xF661080E ^0xC5B0B69A
{
	if (func_65(epctParam0))
		return Global_1887305[epctParam0 /*610*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_489(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x234E3 Hash - 0xB4CE8E51 ^0xDD439BF7
{
	if (!func_65(epctParam0))
		return false;

	if (!bParam1)
		if (func_490(epctParam0))
			return false;

	return func_65(Global_1887305[epctParam0 /*610*/].f_10);
}

BOOL func_490(ePedComponentType epctParam0) // Position - 0x2351B Hash - 0xC62FC261 ^0xD6778B42
{
	if (func_65(epctParam0))
		if (func_65(Global_1887305[epctParam0 /*610*/].f_10))
			return Global_1887305[epctParam0 /*610*/].f_10 == epctParam0;

	return false;
}

ePedComponentType func_491(ePedComponentType epctParam0) // Position - 0x23550 Hash - 0x406DDACB ^0x4B0F2818
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8;
		else if (Global_1575083 || Global_2635563.f_2980 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2657971[epctParam0 /*465*/].f_322.f_8;

	return PV_COMP_INVALID;
}

void func_492() // Position - 0x235BF Hash - 0x538A9682 ^0x9F821D7
{
	Hash hash;
	int i;
	int num;
	BOOL flag;

	switch (iLocal_88)
	{
		case 0:
			if (bLocal_87)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					func_509(0, false);
			
				func_468(&hash);
				APP::APP_SET_APP("car");
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_SET_BLOCK(&uLocal_90);
					APP::APP_SET_BLOCK("mpUnlocks");
				}
				else
				{
					APP::APP_SET_BLOCK("spUnlocks");
				}
			
				func_202("unlockBitset1", hash);
				uLocal_135[0] = hash;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_BLOCK();
				}
				else
				{
					APP::APP_CLOSE_BLOCK();
				}
			
				APP::APP_CLOSE_APP();
				iLocal_88 = iLocal_88 + 1;
			}
			break;
	
		case 1:
			func_424(&hash);
			APP::APP_SET_APP("car");
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_BLOCK(&uLocal_90);
				APP::APP_SET_BLOCK("mpUnlocks");
			}
			else
			{
				APP::APP_SET_BLOCK("spUnlocks");
			}
		
			func_202("unlockBitset2", hash);
			uLocal_135[1] = hash;
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
			}
			else
			{
				APP::APP_CLOSE_BLOCK();
			}
		
			APP::APP_CLOSE_APP();
		
			for (i = 0; i < 6; i = i + 1)
			{
				uLocal_140[i] = 0;
			}
		
			iLocal_139 = 0;
			iLocal_88 = iLocal_88 + 1;
			break;
	
		case 2:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				while (num < 25 && !flag)
				{
					if (func_414(&uLocal_140, iLocal_139) == -1)
					{
						flag = true;
						iLocal_88 = iLocal_88 + 1;
					}
				
					iLocal_139 = iLocal_139 + 1;
					num = num + 1;
				}
			}
			else
			{
				iLocal_88 = iLocal_88 + 1;
			}
			break;
	
		case 3:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK(&uLocal_90);
				APP::APP_SET_BLOCK(&uLocal_96);
				func_202("carColoursUnlocked0", uLocal_140[0]);
				uLocal_147[0] = uLocal_140[0];
				func_202("carColoursUnlocked1", uLocal_140[1]);
				uLocal_147[1] = uLocal_140[1];
				func_202("carColoursUnlocked2", uLocal_140[2]);
				uLocal_147[2] = uLocal_140[2];
				func_202("carColoursUnlocked3", uLocal_140[3]);
				uLocal_147[3] = uLocal_140[3];
				func_202("carColoursUnlocked4", uLocal_140[4]);
				uLocal_147[4] = uLocal_140[4];
				func_202("carColoursUnlocked5", uLocal_140[5]);
				uLocal_147[5] = uLocal_140[5];
				func_493(&hash);
				func_202("unlockBitset3", hash);
				uLocal_135[2] = hash;
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
			else
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("spUnlocks");
				func_414(&uLocal_140, -1);
				func_202("carColoursUnlocked0", uLocal_140[0]);
				uLocal_147[0] = uLocal_140[0];
				func_202("carColoursUnlocked1", uLocal_140[1]);
				uLocal_147[1] = uLocal_140[1];
				func_202("carColoursUnlocked2", uLocal_140[2]);
				uLocal_147[2] = uLocal_140[2];
				func_202("carColoursUnlocked3", uLocal_140[3]);
				uLocal_147[3] = uLocal_140[3];
				func_202("carColoursUnlocked4", uLocal_140[4]);
				uLocal_147[4] = uLocal_140[4];
				func_202("carColoursUnlocked5", uLocal_140[5]);
				uLocal_147[5] = uLocal_140[5];
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
			}
		
			iLocal_88 = iLocal_88 + 1;
			break;
	
		case 4:
			bLocal_87 = false;
			iLocal_88 = 0;
			break;
	}

	return;
}

void func_493(int* piParam0) // Position - 0x238A9 Hash - 0xE2704B4B ^0xB7A2CD55
{
	if (func_494(18, 1) || func_425(61, -1, 0, -1))
		MISC::SET_BIT(piParam0, 0);

	if (func_494(11, 0))
		MISC::SET_BIT(piParam0, 1);

	if (func_494(11, 1) || func_425(47, -1, 0, -1))
		MISC::SET_BIT(piParam0, 2);

	if (func_494(11, 2) || func_425(48, -1, 0, -1))
		MISC::SET_BIT(piParam0, 3);

	if (func_494(11, 3) || func_425(49, -1, 0, -1))
		MISC::SET_BIT(piParam0, 4);

	if (func_494(11, 4) || func_425(50, -1, 0, -1))
		MISC::SET_BIT(piParam0, 5);

	if (func_494(12, 0))
		MISC::SET_BIT(piParam0, 6);

	if (func_494(12, 1) || func_425(13, -1, 0, -1))
		MISC::SET_BIT(piParam0, 7);

	if (func_494(12, 2) || func_425(14, -1, 0, -1))
		MISC::SET_BIT(piParam0, 8);

	if (func_494(12, 3) || func_425(15, -1, 0, -1))
		MISC::SET_BIT(piParam0, 9);

	if (func_494(12, 4) || func_425(16, -1, 0, -1))
		MISC::SET_BIT(piParam0, 10);

	if (func_494(4, 0))
		MISC::SET_BIT(piParam0, 11);

	if (func_494(4, 1) || func_425(77, -1, 0, -1))
		MISC::SET_BIT(piParam0, 12);

	return;
}

BOOL func_494(int iParam0, int iParam1) // Position - 0x23A27 Hash - 0x6C93A0EA ^0x6C93A0EA
{
	var unk;

	if (func_497(epctLocal_89, iParam0, iParam1, &unk))
		return func_495(unk);

	return true;
}

BOOL func_495(var uParam0) // Position - 0x23A48 Hash - 0x7D2B8F98 ^0xE3270C5D
{
	ePedComponentType type;
	ePedComponentType type2;

	type = func_49(819, -1);
	type2 = func_496(uParam0);

	if (type2 == -1)
		return 1;
	else if (type >= type2)
		return 1;

	return 0;
}

int func_496(int iParam0) // Position - 0x23A7B Hash - 0xC01CD60F ^0xC01CD60F
{
	switch (iParam0)
	{
		case 4:
			return 1;
	
		case 2:
			return 1;
	
		case 1:
			return 1;
	
		case 9:
			return 2;
	
		case 10:
			return 2;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 5:
			return 3;
	
		case 3:
			return 3;
	
		case 6:
			return 4;
	
		case 7:
			return 4;
	
		case 8:
			return 4;
	
		case 40:
			return 5;
	
		case 38:
			return 5;
	
		case 37:
			return 5;
	
		case 46:
			return 6;
	
		case 45:
			return 6;
	
		case 47:
			return 6;
	
		case 48:
			return 7;
	
		case 41:
			return 7;
	
		case 39:
			return 7;
	
		case 42:
			return 8;
	
		case 43:
			return 8;
	
		case 44:
			return 8;
	
		case 16:
			return 9;
	
		case 14:
			return 9;
	
		case 13:
			return 9;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 23:
			return 10;
	
		case 24:
			return 11;
	
		case 17:
			return 11;
	
		case 15:
			return 11;
	
		case 18:
			return 12;
	
		case 19:
			return 12;
	
		case 20:
			return 12;
	
		case 27:
			return 13;
	
		case 26:
			return 13;
	
		case 25:
			return 13;
	
		case 32:
			return 14;
	
		case 34:
			return 14;
	
		case 35:
			return 14;
	
		case 36:
			return 15;
	
		case 28:
			return 15;
	
		case 33:
			return 15;
	
		case 29:
			return 16;
	
		case 30:
			return 16;
	
		case 31:
			return 16;
	
		case 52:
			return 17;
	
		case 50:
			return 17;
	
		case 49:
			return 17;
	
		case 57:
			return 18;
	
		case 58:
			return 18;
	
		case 59:
			return 18;
	
		case 60:
			return 19;
	
		case 53:
			return 19;
	
		case 51:
			return 19;
	
		case 54:
			return 20;
	
		case 55:
			return 20;
	
		case 56:
			return 20;
	
		case 85:
			return 21;
	
		case 86:
			return 21;
	
		case 87:
			return 21;
	
		case 88:
			return 22;
	
		case 89:
			return 22;
	
		case 90:
			return 22;
	
		case 91:
			return 23;
	
		case 92:
			return 23;
	
		case 93:
			return 23;
	
		case 94:
			return 24;
	
		case 95:
			return 24;
	
		case 96:
			return 24;
	
		case 97:
			return 25;
	
		case 98:
			return 25;
	
		case 99:
			return 25;
	
		case 100:
			return 26;
	
		case 101:
			return 26;
	
		case 102:
			return 26;
	
		case 103:
			return 27;
	
		case 104:
			return 27;
	
		case 105:
			return 27;
	
		case 106:
			return 28;
	
		case 107:
			return 28;
	
		case 108:
			return 28;
	
		case 64:
			return 29;
	
		case 62:
			return 29;
	
		case 61:
			return 29;
	
		case 69:
			return 30;
	
		case 70:
			return 30;
	
		case 71:
			return 30;
	
		case 72:
			return 31;
	
		case 65:
			return 31;
	
		case 63:
			return 31;
	
		case 66:
			return 32;
	
		case 67:
			return 32;
	
		case 68:
			return 32;
	
		case 109:
			return 33;
	
		case 110:
			return 33;
	
		case 111:
			return 33;
	
		case 112:
			return 34;
	
		case 113:
			return 34;
	
		case 114:
			return 34;
	
		case 115:
			return 35;
	
		case 116:
			return 35;
	
		case 117:
			return 35;
	
		case 118:
			return 36;
	
		case 119:
			return 36;
	
		case 120:
			return 36;
	
		case 121:
			return 37;
	
		case 122:
			return 37;
	
		case 123:
			return 37;
	
		case 124:
			return 38;
	
		case 125:
			return 38;
	
		case 126:
			return 38;
	
		case 127:
			return 39;
	
		case 128:
			return 39;
	
		case 129:
			return 39;
	
		case 131:
			return 40;
	
		case 130:
			return 40;
	
		case 132:
			return 40;
	
		case 76:
			return 41;
	
		case 74:
			return 41;
	
		case 73:
			return 41;
	
		case 81:
			return 42;
	
		case 82:
			return 42;
	
		case 83:
			return 42;
	
		case 84:
			return 43;
	
		case 77:
			return 43;
	
		case 75:
			return 43;
	
		case 78:
			return 44;
	
		case 79:
			return 44;
	
		case 80:
			return 44;
	
		default:
		
	}

	return -1;
}

BOOL func_497(ePedComponentType epctParam0, int iParam1, int iParam2, var uParam3) // Position - 0x24022 Hash - 0x1FD907A5 ^0xBDF7FF42
{
	int num;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	num = func_498(epctParam0);
	*uParam3 = 0;

	if (iParam1 == 11)
		if (IS_BIT_SET(num, 0))
			if (iParam2 == 1)
				*uParam3 = 1;
			else if (iParam2 == 2)
				*uParam3 = 25;
			else if (iParam2 == 3)
				*uParam3 = 61;
			else if (iParam2 >= 4)
				*uParam3 = 73;
		else if (IS_BIT_SET(num, 1))
			if (iParam2 == 1)
				*uParam3 = 2;
			else if (iParam2 == 2)
				*uParam3 = 26;
			else if (iParam2 == 3)
				*uParam3 = 62;
			else if (iParam2 >= 4)
				*uParam3 = 74;
		else if (IS_BIT_SET(num, 2))
			if (iParam2 == 1)
				*uParam3 = 3;
			else if (iParam2 == 2)
				*uParam3 = 33;
			else if (iParam2 == 3)
				*uParam3 = 63;
			else if (iParam2 >= 4)
				*uParam3 = 75;
		else if (IS_BIT_SET(num, 3))
			if (iParam2 == 1)
				*uParam3 = 4;
			else if (iParam2 == 2)
				*uParam3 = 27;
			else if (iParam2 == 3)
				*uParam3 = 64;
			else if (iParam2 >= 4)
				*uParam3 = 76;
		else if (IS_BIT_SET(num, 4))
			if (iParam2 == 1)
				*uParam3 = 5;
			else if (iParam2 == 2)
				*uParam3 = 28;
			else if (iParam2 == 3)
				*uParam3 = 65;
			else if (iParam2 >= 4)
				*uParam3 = 77;
		else if (IS_BIT_SET(num, 5))
			if (iParam2 == 1)
				*uParam3 = 6;
			else if (iParam2 == 2)
				*uParam3 = 29;
			else if (iParam2 == 3)
				*uParam3 = 66;
			else if (iParam2 >= 4)
				*uParam3 = 78;
		else if (IS_BIT_SET(num, 6))
			if (iParam2 == 1)
				*uParam3 = 7;
			else if (iParam2 == 2)
				*uParam3 = 30;
			else if (iParam2 == 3)
				*uParam3 = 67;
			else if (iParam2 >= 4)
				*uParam3 = 79;
		else if (IS_BIT_SET(num, 7))
			if (iParam2 == 1)
				*uParam3 = 8;
			else if (iParam2 == 2)
				*uParam3 = 31;
			else if (iParam2 == 3)
				*uParam3 = 68;
			else if (iParam2 >= 4)
				*uParam3 = 80;
		else if (IS_BIT_SET(num, 8))
			if (iParam2 == 1)
				*uParam3 = 9;
			else if (iParam2 == 2)
				*uParam3 = 32;
			else if (iParam2 == 3)
				*uParam3 = 69;
			else if (iParam2 >= 4)
				*uParam3 = 81;
		else if (IS_BIT_SET(num, 9))
			if (iParam2 == 1)
				*uParam3 = 10;
			else if (iParam2 == 2)
				*uParam3 = 34;
			else if (iParam2 == 3)
				*uParam3 = 70;
			else if (iParam2 >= 4)
				*uParam3 = 82;
		else if (IS_BIT_SET(num, 11))
			if (iParam2 == 1)
				*uParam3 = 11;
			else if (iParam2 == 2)
				*uParam3 = 35;
			else if (iParam2 == 3)
				*uParam3 = 71;
			else if (iParam2 >= 4)
				*uParam3 = 83;
		else if (IS_BIT_SET(num, 12))
			if (iParam2 == 1)
				*uParam3 = 12;
			else if (iParam2 == 2)
				*uParam3 = 36;
			else if (iParam2 == 3)
				*uParam3 = 72;
			else if (iParam2 >= 4)
				*uParam3 = 84;
	else if (iParam1 == 18)
		if (IS_BIT_SET(num, 0))
			if (iParam2 == 1)
				*uParam3 = 49;
		else if (IS_BIT_SET(num, 1))
			if (iParam2 == 1)
				*uParam3 = 50;
		else if (IS_BIT_SET(num, 2))
			if (iParam2 == 1)
				*uParam3 = 51;
		else if (IS_BIT_SET(num, 3))
			if (iParam2 == 1)
				*uParam3 = 52;
		else if (IS_BIT_SET(num, 4))
			if (iParam2 == 1)
				*uParam3 = 53;
		else if (IS_BIT_SET(num, 5))
			if (iParam2 == 1)
				*uParam3 = 54;
		else if (IS_BIT_SET(num, 6))
			if (iParam2 == 1)
				*uParam3 = 55;
		else if (IS_BIT_SET(num, 7))
			if (iParam2 == 1)
				*uParam3 = 56;
		else if (IS_BIT_SET(num, 8))
			if (iParam2 == 1)
				*uParam3 = 57;
		else if (IS_BIT_SET(num, 9))
			if (iParam2 == 1)
				*uParam3 = 58;
		else if (IS_BIT_SET(num, 11))
			if (iParam2 == 1)
				*uParam3 = 59;
		else if (IS_BIT_SET(num, 12))
			if (iParam2 == 1)
				*uParam3 = 60;
	else if (iParam1 == 13)
		if (IS_BIT_SET(num, 0))
			if (iParam2 == 1)
				*uParam3 = 37;
			else if (iParam2 == 2)
				*uParam3 = 87;
			else if (iParam2 == 3 || iParam2 > 4)
				*uParam3 = 111;
		else if (IS_BIT_SET(num, 1))
			if (iParam2 == 1)
				*uParam3 = 38;
			else if (iParam2 == 2)
				*uParam3 = 86;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 110;
		else if (IS_BIT_SET(num, 2))
			if (iParam2 == 1)
				*uParam3 = 39;
			else if (iParam2 == 2)
				*uParam3 = 93;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 117;
		else if (IS_BIT_SET(num, 3))
			if (iParam2 == 1)
				*uParam3 = 40;
			else if (iParam2 == 2)
				*uParam3 = 85;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 109;
		else if (IS_BIT_SET(num, 4))
			if (iParam2 == 1)
				*uParam3 = 41;
			else if (iParam2 == 2)
				*uParam3 = 92;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 116;
		else if (IS_BIT_SET(num, 5))
			if (iParam2 == 1)
				*uParam3 = 42;
			else if (iParam2 == 2)
				*uParam3 = 94;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 118;
		else if (IS_BIT_SET(num, 6))
			if (iParam2 == 1)
				*uParam3 = 43;
			else if (iParam2 == 2)
				*uParam3 = 95;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 119;
		else if (IS_BIT_SET(num, 7))
			if (iParam2 == 1)
				*uParam3 = 44;
			else if (iParam2 == 2)
				*uParam3 = 96;
			else if (iParam2 == 3)
				*uParam3 = 120;
			else if (iParam2 >= 4)
				*uParam3 = 120;
		else if (IS_BIT_SET(num, 8))
			if (iParam2 == 1)
				*uParam3 = 45;
			else if (iParam2 == 2)
				*uParam3 = 88;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 112;
		else if (IS_BIT_SET(num, 9))
			if (iParam2 == 1)
				*uParam3 = 46;
			else if (iParam2 == 2)
				*uParam3 = 89;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 113;
		else if (IS_BIT_SET(num, 11))
			if (iParam2 == 1)
				*uParam3 = 47;
			else if (iParam2 == 2)
				*uParam3 = 90;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 114;
		else if (IS_BIT_SET(num, 12))
			if (iParam2 == 1)
				*uParam3 = 48;
			else if (iParam2 == 2)
				*uParam3 = 91;
			else if (iParam2 == 3 || iParam2 >= 4)
				*uParam3 = 115;
	else if (iParam1 == 12)
		if (IS_BIT_SET(num, 0))
			if (iParam2 == 1)
				*uParam3 = 13;
			else if (iParam2 == 2)
				*uParam3 = 99;
			else if (iParam2 >= 3)
				*uParam3 = 123;
		else if (IS_BIT_SET(num, 1))
			if (iParam2 == 1)
				*uParam3 = 14;
			else if (iParam2 == 2)
				*uParam3 = 98;
			else if (iParam2 >= 3)
				*uParam3 = 122;
		else if (IS_BIT_SET(num, 2))
			if (iParam2 == 1)
				*uParam3 = 15;
			else if (iParam2 == 2)
				*uParam3 = 105;
			else if (iParam2 >= 3)
				*uParam3 = 129;
		else if (IS_BIT_SET(num, 3))
			if (iParam2 == 1)
				*uParam3 = 16;
			else if (iParam2 == 2)
				*uParam3 = 97;
			else if (iParam2 >= 3)
				*uParam3 = 121;
		else if (IS_BIT_SET(num, 4))
			if (iParam2 == 1)
				*uParam3 = 17;
			else if (iParam2 == 2)
				*uParam3 = 104;
			else if (iParam2 >= 3)
				*uParam3 = 128;
		else if (IS_BIT_SET(num, 5))
			if (iParam2 == 1)
				*uParam3 = 18;
			else if (iParam2 == 2)
				*uParam3 = 106;
			else if (iParam2 >= 3)
				*uParam3 = 130;
		else if (IS_BIT_SET(num, 6))
			if (iParam2 == 1)
				*uParam3 = 19;
			else if (iParam2 == 2)
				*uParam3 = 107;
			else if (iParam2 >= 3)
				*uParam3 = 131;
		else if (IS_BIT_SET(num, 7))
			if (iParam2 == 1)
				*uParam3 = 20;
			else if (iParam2 == 2)
				*uParam3 = 108;
			else if (iParam2 >= 3)
				*uParam3 = 132;
		else if (IS_BIT_SET(num, 8))
			if (iParam2 == 1)
				*uParam3 = 21;
			else if (iParam2 == 2)
				*uParam3 = 100;
			else if (iParam2 >= 3)
				*uParam3 = 124;
		else if (IS_BIT_SET(num, 9))
			if (iParam2 == 1)
				*uParam3 = 22;
			else if (iParam2 == 2)
				*uParam3 = 101;
			else if (iParam2 >= 3)
				*uParam3 = 125;
		else if (IS_BIT_SET(num, 11))
			if (iParam2 == 1)
				*uParam3 = 23;
			else if (iParam2 == 2)
				*uParam3 = 102;
			else if (iParam2 >= 3)
				*uParam3 = 126;
		else if (IS_BIT_SET(num, 12))
			if (iParam2 == 1)
				*uParam3 = 24;
			else if (iParam2 == 2)
				*uParam3 = 103;
			else if (iParam2 >= 3)
				*uParam3 = 127;

	return *uParam3 != 0;
}

int func_498(ePedComponentType epctParam0) // Position - 0x24978 Hash - 0xB1206801 ^0x7DD8C871
{
	var address;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_499(epctParam0, i, false))
			MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_499(ePedComponentType epctParam0, int iParam1, BOOL bParam2) // Position - 0x249A9 Hash - 0x1E935DE7 ^0x1E935DE7
{
	if (bParam2)
		return true;

	if (func_508(epctParam0) && iParam1 != 19)
		return false;

	switch (iParam1)
	{
		case 15:
		case 16:
			if (func_507(epctParam0) || func_506(epctParam0))
				return true;
			break;
	
		case 17:
			if (func_211(epctParam0))
				return true;
			break;
	
		case 18:
			if (func_217(epctParam0))
				return true;
			break;
	
		case 19:
			if (func_508(epctParam0))
				return true;
			break;
	
		case 20:
			if (func_505(epctParam0) && !func_504(epctParam0))
				return true;
			break;
	
		case 21:
			break;
	
		case 22:
			break;
	
		case 23:
			break;
	
		case 24:
			break;
	
		case 25:
			if (func_504(epctParam0))
				return true;
			break;
	
		default:
			if (func_501(epctParam0, iParam1))
			{
				return true;
			}
			else if (iParam1 == 14)
			{
			}
			else if (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(epctParam0) == func_500(iParam1))
			{
				return true;
			}
			break;
	}

	return false;
}

int func_500(int iParam0) // Position - 0x24AD1 Hash - 0xEE599357 ^0xEE599357
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
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 18:
			return 22;
	}

	return 0;
}

BOOL func_501(Hash hParam0, int iParam1) // Position - 0x24BAB Hash - 0xB0FD433 ^0xB0FD433
{
	int num;
	int i;

	num = func_503(iParam1);

	for (i = 0; i < num; i = i + 1)
	{
		if (func_502(iParam1, i) == hParam0)
			return true;
	}

	return false;
}

Hash func_502(int iParam0, int iParam1) // Position - 0x24BE0 Hash - 0x4F62D50D ^0x5ABFC1A5
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("adder");
			
				case 1:
					return joaat("bullet");
			
				case 2:
					return joaat("cheetah");
			
				case 3:
					return joaat("entityxf");
			
				case 4:
					return joaat("infernus");
			
				case 5:
					return joaat("vacca");
			
				case 6:
					return joaat("voltic");
			
				case 7:
					return joaat("banshee2");
			
				case 8:
					return joaat("fmj");
			
				case 9:
					return joaat("osiris");
			
				case 10:
					return joaat("pfister811");
			
				case 11:
					return joaat("prototipo");
			
				case 12:
					return joaat("reaper");
			
				case 13:
					return joaat("sultanrs");
			
				case 14:
					return joaat("t20");
			
				case 15:
					return joaat("turismor");
			
				case 16:
					return joaat("zentorno");
			
				case 17:
					return joaat("le7b");
			
				case 18:
					return joaat("tyrus");
			
				case 19:
					return joaat("sheava");
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("ninef2");
			
				case 1:
					return joaat("banshee");
			
				case 2:
					return joaat("carbonizzare");
			
				case 3:
					return joaat("comet2");
			
				case 4:
					return joaat("coquette");
			
				case 5:
					return joaat("feltzer2");
			
				case 6:
					return joaat("fusilade");
			
				case 7:
					return joaat("rapidgt2");
			
				case 8:
					return joaat("sultan");
			
				case 9:
					return joaat("alpha");
			
				case 10:
					return joaat("bestiagts");
			
				case 11:
					return joaat("blista2");
			
				case 12:
					return joaat("blista3");
			
				case 13:
					return joaat("buffalo");
			
				case 14:
					return joaat("buffalo2");
			
				case 15:
					return joaat("buffalo3");
			
				case 16:
					return joaat("carbonizzare");
			
				case 17:
					return joaat("elegy2");
			
				case 18:
					return joaat("feltzer3");
			
				case 19:
					return joaat("furoregt");
			
				case 20:
					return joaat("futo");
			
				case 21:
					return joaat("jester");
			
				case 22:
					return joaat("jester2");
			
				case 23:
					return joaat("khamelion");
			
				case 24:
					return joaat("kuruma");
			
				case 25:
					return joaat("kuruma2");
			
				case 26:
					return joaat("massacro");
			
				case 27:
					return joaat("massacro2");
			
				case 28:
					return joaat("ninef");
			
				case 29:
					return joaat("penumbra");
			
				case 30:
					return joaat("rapidgt");
			
				case 31:
					return joaat("schwarzer");
			
				case 32:
					return joaat("seven70");
			
				case 33:
					return joaat("surano");
			
				case 34:
					return joaat("verlierer2");
			
				case 35:
					return joaat("tropos");
			
				case 36:
					return joaat("tampa2");
			
				case 37:
					return joaat("omnis");
			
				case 38:
					return joaat("lynx");
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("cogcabrio");
			
				case 1:
					return joaat("exemplar");
			
				case 2:
					return joaat("f620");
			
				case 3:
					return joaat("felon");
			
				case 4:
					return joaat("felon2");
			
				case 5:
					return joaat("jackal");
			
				case 6:
					return joaat("oracle");
			
				case 7:
					return joaat("oracle2");
			
				case 8:
					return joaat("sentinel");
			
				case 9:
					return joaat("sentinel2");
			
				case 10:
					return joaat("windsor");
			
				case 11:
					return joaat("windsor2");
			
				case 12:
					return joaat("zion");
			
				case 13:
					return joaat("zion2");
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("buccaneer");
			
				case 1:
					return joaat("dominator");
			
				case 2:
					return joaat("gauntlet");
			
				case 3:
					return joaat("phoenix");
			
				case 4:
					return joaat("picador");
			
				case 5:
					return joaat("ruiner");
			
				case 6:
					return joaat("sabregt");
			
				case 7:
					return joaat("vigero");
			
				case 8:
					return joaat("blade");
			
				case 9:
					return joaat("buccaneer2");
			
				case 10:
					return joaat("chino");
			
				case 11:
					return joaat("chino2");
			
				case 12:
					return joaat("coquette3");
			
				case 13:
					return joaat("dominator2");
			
				case 14:
					return joaat("dukes");
			
				case 15:
					return joaat("dukes2");
			
				case 16:
					return joaat("faction");
			
				case 17:
					return joaat("faction2");
			
				case 18:
					return joaat("faction3");
			
				case 19:
					return joaat("gauntlet2");
			
				case 20:
					return joaat("hotknife");
			
				case 21:
					return joaat("lurcher");
			
				case 22:
					return joaat("moonbeam");
			
				case 23:
					return joaat("moonbeam2");
			
				case 24:
					return joaat("nightshade");
			
				case 25:
					return joaat("ratloader");
			
				case 26:
					return joaat("ratloader2");
			
				case 27:
					return joaat("sabregt2");
			
				case 28:
					return joaat("slamvan");
			
				case 29:
					return joaat("slamvan2");
			
				case 30:
					return joaat("slamvan3");
			
				case 31:
					return joaat("stalion");
			
				case 32:
					return joaat("stalion2");
			
				case 33:
					return joaat("tampa");
			
				case 34:
					return joaat("virgo");
			
				case 35:
					return joaat("virgo2");
			
				case 36:
					return joaat("virgo3");
			
				case 37:
					return joaat("voodoo");
			
				case 38:
					return joaat("voodoo2");
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("jb700");
			
				case 1:
					return joaat("monroe");
			
				case 2:
					return joaat("stinger");
			
				case 3:
					return joaat("ztype");
			
				case 4:
					return joaat("btype");
			
				case 5:
					return joaat("btype2");
			
				case 6:
					return joaat("btype3");
			
				case 7:
					return joaat("casco");
			
				case 8:
					return joaat("coquette2");
			
				case 9:
					return joaat("mamba");
			
				case 10:
					return joaat("manana");
			
				case 11:
					return joaat("peyote");
			
				case 12:
					return joaat("pigalle");
			
				case 13:
					return joaat("stinger");
			
				case 14:
					return joaat("stingergt");
			
				case 15:
					return joaat("tornado");
			
				case 16:
					return joaat("tornado2");
			
				case 17:
					return joaat("tornado3");
			
				case 18:
					return joaat("tornado4");
			
				case 19:
					return joaat("tornado5");
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("asea");
			
				case 1:
					return joaat("asterope");
			
				case 2:
					return joaat("fugitive");
			
				case 3:
					return joaat("premier");
			
				case 4:
					return joaat("primo");
			
				case 5:
					return joaat("schafter2");
			
				case 6:
					return joaat("stanier");
			
				case 7:
					return joaat("superd");
			
				case 8:
					return joaat("surge");
			
				case 9:
					return joaat("tailgater");
			
				case 10:
					return joaat("washington");
			
				case 11:
					return joaat("cog55");
			
				case 12:
					return joaat("cognoscenti");
			
				case 13:
					return joaat("cognoscenti2");
			
				case 14:
					return joaat("emperor");
			
				case 15:
					return joaat("emperor2");
			
				case 16:
					return joaat("emperor3");
			
				case 17:
					return joaat("glendale");
			
				case 18:
					return joaat("asea2");
			
				case 19:
					return joaat("cog552");
			
				case 20:
					return joaat("ingot");
			
				case 21:
					return joaat("intruder");
			
				case 22:
					return joaat("limo2");
			
				case 23:
					return joaat("primo2");
			
				case 24:
					return joaat("regina");
			
				case 25:
					return joaat("romero");
			
				case 26:
					return joaat("schafter3");
			
				case 27:
					return joaat("schafter4");
			
				case 28:
					return joaat("schafter5");
			
				case 29:
					return joaat("schafter6");
			
				case 30:
					return joaat("stratum");
			
				case 31:
					return joaat("stretch");
			
				case 32:
					return joaat("warrener");
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("baller");
			
				case 1:
					return joaat("baller2");
			
				case 2:
					return joaat("bjxl");
			
				case 3:
					return joaat("cavalcade");
			
				case 4:
					return joaat("cavalcade2");
			
				case 5:
					return joaat("crusader");
			
				case 6:
					return joaat("dubsta");
			
				case 7:
					return joaat("granger");
			
				case 8:
					return joaat("gresley");
			
				case 9:
					return joaat("landstalker");
			
				case 10:
					return joaat("mesa");
			
				case 11:
					return joaat("pranger");
			
				case 12:
					return joaat("radi");
			
				case 13:
					return joaat("seminole");
			
				case 14:
					return joaat("serrano");
			
				case 15:
					return joaat("baller3");
			
				case 16:
					return joaat("baller4");
			
				case 17:
					return joaat("baller5");
			
				case 18:
					return joaat("baller6");
			
				case 19:
					return joaat("dubsta2");
			
				case 20:
					return joaat("fq2");
			
				case 21:
					return joaat("habanero");
			
				case 22:
					return joaat("huntley");
			
				case 23:
					return joaat("mesa2");
			
				case 24:
					return joaat("patriot");
			
				case 25:
					return joaat("rocoto");
			
				case 26:
					return joaat("xls");
			
				case 27:
					return joaat("xls2");
			
				case 28:
					return joaat("contender");
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("blista");
			
				case 1:
					return joaat("dilettante");
			
				case 2:
					return joaat("issi2");
			
				case 3:
					return joaat("prairie");
			
				case 4:
					return joaat("dilettante2");
			
				case 5:
					return joaat("panto");
			
				case 6:
					return joaat("rhapsody");
			
				case 7:
					return joaat("brioso");
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("bfinjection");
			
				case 1:
					return joaat("baller");
			
				case 2:
					return joaat("blazer");
			
				case 3:
					return joaat("dloader");
			
				case 4:
					return joaat("dune");
			
				case 5:
					return joaat("patriot");
			
				case 6:
					return joaat("sanchez");
			
				case 7:
					return joaat("sandking");
			
				case 8:
					return joaat("paradise");
			
				case 9:
					return joaat("sanchez2");
			
				case 10:
					return joaat("guardian");
			
				case 11:
					return joaat("bifta");
			
				case 12:
					return joaat("blazer2");
			
				case 13:
					return joaat("blazer3");
			
				case 14:
					return joaat("bodhi2");
			
				case 15:
					return joaat("brawler");
			
				case 16:
					return joaat("dubsta3");
			
				case 17:
					return joaat("insurgent2");
			
				case 18:
					return joaat("kalahari");
			
				case 19:
					return joaat("marshall");
			
				case 20:
					return joaat("mesa3");
			
				case 21:
					return joaat("monster");
			
				case 22:
					return joaat("rancherxl");
			
				case 23:
					return joaat("rancherxl2");
			
				case 24:
					return joaat("rebel");
			
				case 25:
					return joaat("rebel2");
			
				case 26:
					return joaat("sandking2");
			
				case 28:
					return joaat("trophytruck");
			
				case 29:
					return joaat("trophytruck2");
			
				case 30:
					return joaat("bf400");
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("bulldozer");
			
				case 1:
					return joaat("cutter");
			
				case 2:
					return joaat("dump");
			
				case 3:
					return joaat("handler");
			
				case 4:
					return joaat("mixer");
			
				case 5:
					return joaat("flatbed");
			
				case 6:
					return joaat("guardian");
			
				case 7:
					return joaat("mixer2");
			
				case 8:
					return joaat("rubble");
			
				case 9:
					return joaat("tiptruck");
			
				case 10:
					return joaat("tiptruck2");
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return joaat("airtug");
			
				case 1:
					return joaat("caddy");
			
				case 2:
					return joaat("faggio2");
			
				case 3:
					return joaat("tractor2");
			
				case 4:
					return joaat("forklift");
			
				case 5:
					return joaat("mower");
			
				case 6:
					return joaat("ripley");
			
				case 7:
					return joaat("armytanker");
			
				case 8:
					return joaat("sadler");
			
				case 9:
					return joaat("sadler2");
			
				case 10:
					return joaat("scrap");
			
				case 11:
					return joaat("towtruck");
			
				case 12:
					return joaat("towtruck2");
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return joaat("boxville");
			
				case 1:
					return joaat("burrito2");
			
				case 2:
					return joaat("camper");
			
				case 3:
					return joaat("speedo2");
			
				case 4:
					return joaat("journey");
			
				case 5:
					return joaat("pony");
			
				case 6:
					return joaat("rumpo");
			
				case 7:
					return joaat("surfer");
			
				case 8:
					return joaat("taco");
			
				case 9:
					return joaat("youga");
			
				case 10:
					return joaat("bison");
			
				case 11:
					return joaat("bison2");
			
				case 12:
					return joaat("bison3");
			
				case 13:
					return joaat("bobcatxl");
			
				case 14:
					return joaat("boxville2");
			
				case 15:
					return joaat("boxville3");
			
				case 16:
					return joaat("boxville4");
			
				case 17:
					return joaat("burrito");
			
				case 18:
					return joaat("burrito3");
			
				case 19:
					return joaat("burrito4");
			
				case 20:
					return joaat("burrito5");
			
				case 21:
					return joaat("gburrito");
			
				case 22:
					return joaat("gburrito2");
			
				case 23:
					return joaat("minivan");
			
				case 24:
					return joaat("minivan2");
			
				case 25:
					return joaat("paradise");
			
				case 26:
					return joaat("pony2");
			
				case 27:
					return joaat("rumpo2");
			
				case 28:
					return joaat("rumpo3");
			
				case 29:
					return joaat("speedo");
			
				case 30:
					return joaat("surfer2");
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("akuma");
			
				case 1:
					return joaat("bagger");
			
				case 2:
					return joaat("bati");
			
				case 3:
					return joaat("bati2");
			
				case 4:
					return joaat("blazer");
			
				case 5:
					return joaat("daemon");
			
				case 6:
					return joaat("double");
			
				case 7:
					return joaat("nemesis");
			
				case 8:
					return joaat("pcj");
			
				case 9:
					return joaat("ruffian");
			
				case 10:
					return joaat("sanchez");
			
				case 11:
					return joaat("sanchez2");
			
				case 12:
					return joaat("vader");
			
				case 13:
					return joaat("carbonrs");
			
				case 14:
					return joaat("enduro");
			
				case 15:
					return joaat("faggio2");
			
				case 16:
					return joaat("hakuchou");
			
				case 17:
					return joaat("hexer");
			
				case 18:
					return joaat("innovation");
			
				case 19:
					return joaat("lectro");
			
				case 20:
					return joaat("sovereign");
			
				case 21:
					return joaat("thrust");
			
				case 22:
					return joaat("vindicator");
			
				case 23:
					return joaat("gargoyle");
			
				case 24:
					return joaat("cliffhanger");
			
				case 25:
					return joaat("bf400");
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					return joaat("bmx");
			
				case 1:
					return joaat("cruiser");
			
				case 2:
					return joaat("scorcher");
			
				case 3:
					return joaat("tribike");
			
				case 4:
					return joaat("tribike2");
			
				case 5:
					return joaat("tribike3");
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_503(int iParam0) // Position - 0x25E40 Hash - 0x917CB244 ^0x917CB244
{
	switch (iParam0)
	{
		case 7:
			return 20;
	
		case 6:
			return 39;
	
		case 3:
			return 14;
	
		case 4:
			return 39;
	
		case 5:
			return 20;
	
		case 1:
			return 32;
	
		case 2:
			return 29;
	
		case 0:
			return 8;
	
		case 9:
			return 31;
	
		case 10:
			return 11;
	
		case 11:
			return 13;
	
		case 12:
			return 31;
	
		case 8:
			return 26;
	
		case 13:
			return 6;
	
		default:
		
	}

	return 39;
}

BOOL func_504(ePedComponentType epctParam0) // Position - 0x25EEA Hash - 0x5000025C ^0x5000025C
{
	switch (epctParam0)
	{
		case -1696319096:
		case -1681653521:
		case joaat("drifteuros"):
		case joaat("driftfuto"):
		case joaat("driftjester"):
		case joaat("driftremus"):
		case joaat("driftzr350"):
		case -1479935577:
		case 1690421418:
		case -143587026:
		case 258105345:
		case -986656474:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_505(ePedComponentType epctParam0) // Position - 0x25F46 Hash - 0x5000025C ^0x5000025C
{
	switch (epctParam0)
	{
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("driftremus"):
		case joaat("drifteuros"):
		case joaat("driftfuto"):
		case joaat("driftjester"):
		case joaat("driftzr350"):
		case 258105345:
			return true;
	
		default:
		
	}

	return false;
}

int func_506(Hash hParam0) // Position - 0x25FE4 Hash - 0x98D83A5B ^0x98D83A5B
{
	switch (hParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("paragon2"):
		case joaat("toreador"):
		case joaat("avenger3"):
			return 1;
	
		default:
		
	}

	if (func_211(hParam0))
		return 1;

	return 0;
}

int func_507(int iParam0) // Position - 0x260C5 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_508(ePedComponentType epctParam0) // Position - 0x26115 Hash - 0x5000025C ^0x5000025C
{
	switch (epctParam0)
	{
		case joaat("veto"):
		case joaat("veto2"):
			return true;
	
		default:
		
	}

	return false;
}

void func_509(int iParam0, BOOL bParam1) // Position - 0x26135 Hash - 0x87083E21 ^0x87083E21
{
	int i;

	if (bParam1)
	{
		func_518(39, true, false);
		func_518(40, true, false);
		func_518(41, true, false);
		func_518(42, true, false);
		func_518(43, true, false);
	}

	func_510(1, iParam0, 0);
	func_510(2, iParam0, 1);
	func_510(3, iParam0, 2);
	func_510(4, iParam0, 3);
	func_510(103, iParam0, 3);
	func_510(5, iParam0, 0);
	func_510(6, iParam0, 0);
	func_510(7, iParam0, 0);
	func_510(8, iParam0, 0);
	func_510(9, iParam0, 0);
	func_510(10, iParam0, 0);
	func_510(11, iParam0, 0);
	func_510(12, iParam0, 0);
	func_510(13, iParam0, 0);
	func_510(14, iParam0, 2);
	func_510(15, iParam0, 3);
	func_510(16, iParam0, 3);
	func_510(17, iParam0, 0);
	func_510(18, iParam0, 1);
	func_510(19, iParam0, 2);
	func_510(20, iParam0, 2);
	func_510(101, iParam0, 3);
	func_510(102, iParam0, 3);
	func_510(21, iParam0, 0);
	func_510(22, iParam0, 1);
	func_510(23, iParam0, 2);
	func_510(24, iParam0, 3);
	func_510(25, iParam0, 0);
	func_510(26, iParam0, 1);
	func_510(27, iParam0, 2);
	func_510(28, iParam0, 3);
	func_510(29, iParam0, 0);
	func_510(30, iParam0, 0);
	func_510(31, iParam0, 1);
	func_510(32, iParam0, 2);
	func_510(33, iParam0, 3);
	func_510(34, iParam0, 0);
	func_510(35, iParam0, 0);
	func_510(36, iParam0, 0);
	func_510(37, iParam0, 0);
	func_510(38, iParam0, 0);
	func_510(39, iParam0, 0);
	func_510(40, iParam0, 0);
	func_510(41, iParam0, 0);
	func_510(42, iParam0, 0);
	func_510(43, iParam0, 0);
	func_510(44, iParam0, 2);
	func_510(45, iParam0, 3);
	func_510(99, iParam0, 1);
	func_510(46, iParam0, 1);
	func_510(55, iParam0, 0);
	func_510(60, iParam0, 0);
	func_510(59, iParam0, 1);
	func_510(58, iParam0, 1);
	func_510(56, iParam0, 2);
	func_510(57, iParam0, 3);
	func_510(47, iParam0, 0);
	func_510(48, iParam0, 1);
	func_510(49, iParam0, 2);
	func_510(50, iParam0, 3);
	func_510(51, iParam0, 0);
	func_510(52, iParam0, 1);
	func_510(53, iParam0, 2);
	func_510(54, iParam0, 3);
	func_510(106, iParam0, 3);
	func_510(61, iParam0, 0);
	func_510(62, iParam0, 1);
	func_510(63, iParam0, 1);
	func_510(64, iParam0, 2);
	func_510(65, iParam0, 2);
	func_510(66, iParam0, 0);
	func_510(67, iParam0, 1);
	func_510(68, iParam0, 2);
	func_510(69, iParam0, 3);
	func_510(70, iParam0, 3);
	func_510(71, iParam0, 3);
	func_510(72, iParam0, 0);
	func_510(73, iParam0, 0);
	func_510(74, iParam0, 1);
	func_510(75, iParam0, 2);
	func_510(76, iParam0, 3);
	func_510(77, iParam0, 0);
	func_510(78, iParam0, 1);
	func_510(79, iParam0, 2);
	func_510(80, iParam0, 3);
	func_510(100, iParam0, 3);
	func_510(81, iParam0, 0);
	func_510(82, iParam0, 1);
	func_510(83, iParam0, 2);
	func_510(84, iParam0, 3);
	func_510(105, iParam0, 3);
	func_510(85, iParam0, 0);
	func_510(86, iParam0, 0);
	func_510(87, iParam0, 0);
	func_510(88, iParam0, 0);
	func_510(104, iParam0, 0);
	func_510(91, iParam0, 0);
	func_510(92, iParam0, 1);
	func_510(93, iParam0, 2);
	func_510(94, iParam0, 3);
	func_510(95, iParam0, 0);
	func_510(96, iParam0, 1);
	func_510(97, iParam0, 2);
	func_510(98, iParam0, 3);

	if (iParam0 >= 3)
	{
		for (i = 0; i < 90; i = i + 1)
		{
			func_510(i, iParam0, 3);
		}
	}

	return;
}

void func_510(int iParam0, int iParam1, int iParam2) // Position - 0x2652D Hash - 0x4F10230E ^0x4F10230E
{
	int i;

	if (iParam1 >= iParam2)
	{
		if (!IS_BIT_SET(Global_113969.f_2366.f_539.f_2241[iParam0 / 32], iParam0 % 32))
		{
			for (i = 0; i < Global_113969.f_20121; i = i + 1)
			{
				Global_113969.f_20121[i /*43*/].f_42 = 1;
			}
		
			MISC::SET_BIT(&Global_113969.f_2366.f_539.f_2241[iParam0 / 32], iParam0 % 32);
		
			if (iParam2 == 0)
				func_511(0, iParam0, "", 0, 0, 2);
		}
	}

	return;
}

void func_511(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x265B0 Hash - 0xD30805EE ^0xD30805EE
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int j;
	int num9;
	int num10;
	int num11;
	int offset;

	if (func_517(iParam0) && func_425(iParam1, -1, 0, -1))
	{
		if (iParam5 == 8 && iParam4 == 2)
			iParam3 = iParam3 - 20;
	
		if (iParam5 == 15 && iParam3 > 21 && !func_516(iParam0))
			iParam3 = iParam3 - 21;
	
		if (iParam0 == joaat("oppressor2"))
			if (iParam5 == 23)
				if (iParam3 > 2)
					iParam3 = iParam3 - 26;
		else if (iParam0 == joaat("strikeforce"))
			if (iParam5 == 18)
				if (iParam3 > 2)
					iParam3 = iParam3 - 26;
	
		if (iParam5 == 58 && iParam4 == 2)
			if (MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG" /*Low Grip Tires*/))
				if (func_505(iParam0) && func_515(PLAYER::PLAYER_ID()))
					if (!_STAT_GET_PACKED_BOOL(31778, -1))
						_STAT_SET_PACKED_BOOL(31778, true, -1);
	}

	if (iParam1 == -1)
	{
		if (!func_517(iParam0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == 0)
				{
					for (i = 0; i < 306; i = i + 1)
					{
						num = i * 3;
						num2 = func_514(MISC::GET_HASH_KEY(sParam2));
					
						if (num2 != -1)
							MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_2693[num + (num2 / 32)], num2 % 32);
					}
				}
				else
				{
					num3 = func_513(iParam0);
				
					if (num3 != -1)
					{
						num4 = num3 * 3;
						num5 = func_514(MISC::GET_HASH_KEY(sParam2));
					
						if (num5 != -1)
							MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_2693[num4 + (num5 / 32)], num5 % 32);
					}
				
					num6 = func_512(iParam0, iParam3, iParam4, iParam5);
				
					if (num6 > 0)
						MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_3612[num6 / 32], num6 % 32);
				}
			}
		
			return;
		}
		else if (func_425(iParam1, -1, 0, -1) || iParam1 == -1)
		{
			num7 = func_512(iParam0, iParam3, iParam4, iParam5);
		
			if (num7 > 0)
				MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_3612[num7 / 32], num7 % 32);
		}
	}
	else if (func_517(iParam0) && func_425(iParam1, -1, 0, -1))
	{
		num8 = func_512(iParam0, iParam3, iParam4, iParam5);
	
		if (num8 > 0)
			MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_3612[num8 / 32], num8 % 32);
	}

	if (iParam0 == 0)
	{
		for (j = 0; j < 306; j = j + 1)
		{
			if (func_425(iParam1, -1, 0, -1))
			{
				num9 = (j * 4) + (iParam1 / 32);
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_47[num9], iParam1 % 32);
				else
					MISC::SET_BIT(&Global_113969.f_668.f_90[num9], iParam1 % 32);
			}
		}
	}
	else if (func_425(iParam1, -1, 0, -1))
	{
		num10 = func_513(iParam0);
	
		if (num10 != -1)
		{
			num11 = (num10 * 4) + (iParam1 / 32);
			offset = iParam1 % 32;
		
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (iParam0 == joaat("avarus") || iParam0 == joaat("chimera") || iParam0 == joaat("esskey") && iParam1 == 1 || iParam1 == 72 || iParam1 == 66 && iParam0 == joaat("esskey"))
					offset = offset - 1;
			
				if (iParam0 == joaat("specter2") && iParam1 == 21 || iParam1 == 72)
					offset = offset - 1;
			
				if (iParam0 == joaat("trailerlarge") && iParam1 == 85)
					offset = offset + 1;
			
				if (iParam0 == joaat("bombushka") && iParam1 == 21)
					offset = offset - 1;
			
				if (offset >= 0)
					MISC::SET_BIT(&Global_2359296[func_195() /*5570*/].f_681.f_47[num11], offset);
			}
			else
			{
				MISC::SET_BIT(&Global_113969.f_668.f_90[num11], offset);
			}
		}
	}

	return;
}

int func_512(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x269B3 Hash - 0xABBBDBAA ^0xEB08E360
{
	int num;

	num = 0;

	if (iParam0 == joaat("btype2"))
	{
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 51;
	}

	if (iParam0 == joaat("lurcher"))
	{
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	}
	else
	{
		num = num + 49;
	}

	if (iParam0 == joaat("faction2"))
	{
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 75 && iParam1 >= 2 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 268;
	}

	if (iParam0 == joaat("buccaneer2"))
	{
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 75 && iParam1 >= 2 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	}
	else
	{
		num = num + 319;
	}

	if (iParam0 == joaat("chino2"))
	{
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 315;
	}

	if (iParam0 == joaat("moonbeam2"))
	{
		if (iParam3 == 6 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 68 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 69 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 308;
	}

	if (iParam0 == joaat("primo2"))
	{
		if (iParam3 == 80 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 81 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	}
	else
	{
		num = num + 309;
	}

	if (iParam0 == joaat("voodoo"))
	{
		if (iParam3 == 79 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 81 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 82 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 6 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 76 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 75 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 91 && iParam2 == 0 || iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 92 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 70 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 62 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 74 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 326;
	}

	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("buccaneer"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("chino"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("moonbeam"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("primo"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("voodoo2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("sultan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("banshee"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	}
	else
	{
		num = num + 17;
	}

	if (iParam0 == joaat("banshee2"))
	{
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 65)
		{
			if (Global_262145.f_12029)
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
					return num + iParam1;
			
				num = num + 46;
			}
			else
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
					return num + iParam1;
			
				num = num + 46;
			}
		}
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 8;
	}
	else
	{
		num = num + 114;
	}

	if (iParam0 == joaat("sultanrs"))
	{
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 65)
		{
			if (Global_262145.f_12029)
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
					return num + iParam1;
			
				num = num + 46;
			}
			else
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
					return num + iParam1;
			
				num = num + 46;
			}
		}
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 221;
	}

	if (iParam0 == joaat("btype3"))
	{
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 93 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 94 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 16;
	}

	if (iParam0 == joaat("faction"))
	{
		if (iParam3 == 61 && iParam1 == 1)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("sabregt"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("tornado"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("tornado2"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("tornado3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("virgo3"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("minivan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("slamvan"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("faction3"))
	{
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 65)
		{
			if (Global_262145.f_12029)
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
					return num + iParam1;
			
				num = num + 46;
			}
			else
			{
				if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
					return num + iParam1;
			
				num = num + 46;
			}
		}
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	}
	else
	{
		num = num + 272;
	}

	if (iParam0 == joaat("minivan2"))
	{
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	}
	else
	{
		num = num + 281;
	}

	if (iParam0 == joaat("sabregt2"))
	{
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 0 || iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 234;
	}

	if (iParam0 == joaat("slamvan3"))
	{
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	}
	else
	{
		num = num + 315;
	}

	if (iParam0 == joaat("tornado5"))
	{
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 91 && iParam2 == 3 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	}
	else
	{
		num = num + 382;
	}

	if (iParam0 == joaat("virgo2"))
	{
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (Global_262145.f_12029)
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 45)
				return num + iParam1;
		
			num = num + 46;
		}
		else
		{
			if (iParam3 == 65 && iParam1 >= 1 && iParam1 <= 21)
				return num + iParam1;
		
			num = num + 46;
		}
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 0 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	}
	else
	{
		num = num + 290;
	}

	if (iParam0 == joaat("avarus"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("chimera"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("daemon2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("zombiea"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("zombieb"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("sanctus"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("wolfsbane"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 28)
			return num + iParam1;
	
		num = num + 29;
	}
	else
	{
		num = num + 29;
	}

	if (iParam0 == joaat("blazer4"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("youga2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 20;
	}

	if (iParam0 == joaat("fcr2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	}
	else
	{
		num = num + 59;
	}

	if (iParam0 == joaat("diablous2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("nightblade"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("faggio3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("faggio"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("defiler"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("esskey"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("hakuchou2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("manchez"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("vortex"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 13;
	}

	if (iParam0 == joaat("apc"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("halftrack"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("dune3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("tampa3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("nightshark"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("trailersmall2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("oppressor"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("insurgent3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("technical3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("ardent"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("specter2"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 116;
	}

	if (iParam0 == joaat("comet3"))
	{
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 200;
	}

	if (iParam0 == joaat("elegy"))
	{
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 91 && iParam2 == 1 && iParam1 == 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 91 && iParam2 == 2 && iParam1 >= 0 && iParam1 <= 67)
			return num + iParam1;
	
		num = num + 68;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 == 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 252;
	}

	if (iParam0 == joaat("italigtb2"))
	{
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	}
	else
	{
		num = num + 122;
	}

	if (iParam0 == joaat("nero2"))
	{
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 67 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 92 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 48)
			return num + iParam1;
	
		num = num + 49;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 == 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	}
	else
	{
		num = num + 105;
	}

	if (iParam0 == joaat("starling"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("nokota"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("rogue"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("molotok"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("bombushka"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("tula"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("hunter"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("seabreeze"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("alphaz1"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("havok"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("retinue"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("microlight"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("visione"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 9;
	}

	if (iParam0 == joaat("comet4"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("barrage"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("avenger") || iParam0 == joaat("avenger3"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("gb200"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 53;
	}

	if (iParam0 == joaat("fagaloa"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 65;
	}

	if (iParam0 == joaat("michelli"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 58;
	}

	if (iParam0 == joaat("ellie"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 27;
	}

	if (iParam0 == joaat("issi3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 114;
	}

	if (iParam0 == joaat("tezeract"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 43;
	}

	if (iParam0 == joaat("flashgt"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 56;
	}

	if (iParam0 == joaat("caracara"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("cheburek"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 62;
	}

	if (iParam0 == joaat("dominator3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 19)
			return num + iParam1;
	
		num = num + 20;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 115;
	}

	if (iParam0 == joaat("tyrant"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 12;
	}

	if (iParam0 == joaat("taipan"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	}
	else
	{
		num = num + 47;
	}

	if (iParam0 == joaat("entity2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	}
	else
	{
		num = num + 26;
	}

	if (iParam0 == joaat("hotring"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 31)
			return num + iParam1;
	
		num = num + 32;
	}
	else
	{
		num = num + 32;
	}

	if (iParam0 == joaat("jester3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 77;
	}

	if (iParam0 == joaat("stafford"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	}
	else
	{
		num = num + 8;
	}

	if (iParam0 == joaat("speedo4"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 31;
	}

	if (iParam0 == joaat("speedo5"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 31;
	}

	if (iParam0 == joaat("mule4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 32;
	}

	if (iParam0 == joaat("pounder2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 35;
	}

	if (iParam0 == joaat("swinger"))
	{
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 55;
	}

	if (iParam0 == joaat("patriot2"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 43;
	}

	if (iParam0 == joaat("oppressor2"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 39;
	}

	if (iParam0 == joaat("menacer"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 21)
			return num + iParam1;
	
		num = num + 22;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 115;
	}

	if (iParam0 == joaat("freecrawler"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 61;
	}

	if (iParam0 == joaat("scramjet"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("strikeforce"))
	{
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	}
	else
	{
		num = num + 30;
	}

	if (iParam0 == joaat("patriot"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("prairie"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 11;
	}

	if (iParam0 == joaat("clique"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 43;
	}

	if (iParam0 == joaat("deveste"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 48;
	}

	if (iParam0 == joaat("deviant"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 66;
	}

	if (iParam0 == joaat("impaler"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 39;
	}

	if (iParam0 == joaat("schlagen"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 86;
	}

	if (iParam0 == joaat("toros"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 96;
	}

	if (iParam0 == joaat("vamos"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 67;
	}

	if (iParam0 == joaat("tulip"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 45;
	}

	if (iParam0 == joaat("impaler2"))
	{
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 59 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 75;
	}

	if (iParam0 == joaat("italigto"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	}
	else
	{
		num = num + 77;
	}

	if (iParam0 == joaat("dominator4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("scarab"))
	{
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 90;
	}

	if (iParam0 == joaat("cerberus"))
	{
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 76;
	}

	if (iParam0 == joaat("cerberus2"))
	{
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 80;
	}

	if (iParam0 == joaat("bruiser"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 69;
	}

	if (iParam0 == joaat("monster3"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	}
	else
	{
		num = num + 46;
	}

	if (iParam0 == joaat("slamvan4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 59;
	}

	if (iParam0 == joaat("imperator"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 79;
	}

	if (iParam0 == joaat("zr380"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 63;
	}

	if (iParam0 == joaat("issi4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 123;
	}

	if (iParam0 == joaat("deathbike"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 23;
	}

	if (iParam0 == joaat("brutus"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 70;
	}

	if (iParam0 == joaat("zr3802"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 86;
	}

	if (iParam0 == joaat("dominator5"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 69;
	}

	if (iParam0 == joaat("deathbike2"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 40;
	}

	if (iParam0 == joaat("issi6"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 98;
	}

	if (iParam0 == joaat("zr3803"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 63;
	}

	if (iParam0 == joaat("dominator6"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("deathbike3"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 14;
	}

	if (iParam0 == joaat("rcbandito"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	}
	else
	{
		num = num + 39;
	}

	if (iParam0 == joaat("monster5"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 55;
	}

	if (iParam0 == joaat("scarab2"))
	{
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 108;
	}

	if (iParam0 == joaat("impaler3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 50;
	}

	if (iParam0 == joaat("impaler4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	}
	else
	{
		num = num + 69;
	}

	if (iParam0 == joaat("brutus3"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 72;
	}

	if (iParam0 == joaat("monster4"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 62;
	}

	if (iParam0 == joaat("bruiser2"))
	{
		if (iParam3 == 45 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 73;
	}

	if (iParam0 == joaat("bruiser3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	}
	else
	{
		num = num + 75;
	}

	if (iParam0 == joaat("issi5"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 129;
	}

	if (iParam0 == joaat("cerberus3"))
	{
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 76;
	}

	if (iParam0 == joaat("slamvan5"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	}
	else
	{
		num = num + 66;
	}

	if (iParam0 == joaat("imperator2"))
	{
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 68;
	}

	if (iParam0 == joaat("imperator3"))
	{
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 69;
	}

	if (iParam0 == joaat("brutus2"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 68;
	}

	if (iParam0 == joaat("scarab3"))
	{
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 90;
	}

	if (iParam0 == joaat("slamvan6"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 78 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 59;
	}

	if (iParam0 == joaat("caracara2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 58;
	}

	if (iParam0 == joaat("drafter"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("dynasty"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 81;
	}

	if (iParam0 == joaat("gauntlet3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 87;
	}

	if (iParam0 == joaat("gauntlet4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 86;
	}

	if (iParam0 == joaat("hellion"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 94;
	}

	if (iParam0 == joaat("issi7"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 65;
	}

	if (iParam0 == joaat("krieger"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 37;
	}

	if (iParam0 == joaat("locust"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 70;
	}

	if (iParam0 == joaat("nebula"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 61;
	}

	if (iParam0 == joaat("neo"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 87;
	}

	if (iParam0 == joaat("novak"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 53;
	}

	if (iParam0 == joaat("s80"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 32;
	}

	if (iParam0 == joaat("thrax"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 80;
	}

	if (iParam0 == joaat("zion3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 78;
	}

	if (iParam0 == joaat("zorrusso"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 38;
	}

	if (iParam0 == joaat("emerus"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 23)
			return num + iParam1;
	
		num = num + 24;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 72;
	}

	if (iParam0 == joaat("peyote"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("peyote2"))
	{
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	}
	else
	{
		num = num + 57;
	}

	if (iParam0 == joaat("rrocket"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 16;
	}

	if (iParam0 == joaat("jugular"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 54;
	}

	if (iParam0 == joaat("paragon"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("paragon2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("rebla"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 94;
	}

	if (iParam0 == joaat("imorgon"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 24)
			return num + iParam1;
	
		num = num + 25;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 125;
	}

	if (iParam0 == joaat("asbo"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 93;
	}

	if (iParam0 == joaat("sugoi"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 100;
	}

	if (iParam0 == joaat("komoda"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 24)
			return num + iParam1;
	
		num = num + 25;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 115;
	}

	if (iParam0 == joaat("zhaba"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 30)
			return num + iParam1;
	
		num = num + 31;
	}
	else
	{
		num = num + 87;
	}

	if (iParam0 == joaat("vstr"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 83;
	}

	if (iParam0 == joaat("everon"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 81;
	}

	if (iParam0 == joaat("sultan2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 102;
	}

	if (iParam0 == joaat("kanjo"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	}
	else
	{
		num = num + 275;
	}

	if (iParam0 == joaat("outlaw"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 21;
	}

	if (iParam0 == joaat("formula"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 47;
	}

	if (iParam0 == joaat("stryder"))
	{
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 23;
	}

	if (iParam0 == joaat("jb7002"))
	{
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 5;
	}

	if (iParam0 == joaat("vagrant"))
	{
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 30)
			return num + iParam1;
	
		num = num + 31;
	}
	else
	{
		num = num + 60;
	}

	if (iParam0 == joaat("retinue2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 25 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 64;
	}

	if (iParam0 == joaat("yosemite2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 51 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 71;
	}

	if (iParam0 == joaat("furia"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 84;
	}

	if (iParam0 == joaat("formula2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 39;
	}

	if (iParam0 == joaat("minitank"))
	{
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 15;
	}

	if (iParam0 == joaat("gauntlet5"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 17)
			return num + iParam1;
	
		num = num + 18;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 22 && iParam1 <= 23)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 59 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 54 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	}
	else
	{
		num = num + 207;
	}

	if (iParam0 == joaat("manana2"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 79 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 65 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 21)
			return num + iParam1;
	
		num = num + 22;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	}
	else
	{
		num = num + 204;
	}

	if (iParam0 == joaat("manana"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("yosemite"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("dukes3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 59 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 26)
			return num + iParam1;
	
		num = num + 27;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	}
	else
	{
		num = num + 114;
	}

	if (iParam0 == joaat("club"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 54 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 22 && iParam1 <= 27)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	}
	else
	{
		num = num + 85;
	}

	if (iParam0 == joaat("youga3"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 43 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 24 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 7 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 91 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 66 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	}
	else
	{
		num = num + 182;
	}

	if (iParam0 == joaat("peyote3"))
	{
		if (iParam3 == 91 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 65 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 21)
			return num + iParam1;
	
		num = num + 22;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 45 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 207;
	}

	if (iParam0 == joaat("glendale2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 75 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 91 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 65 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 21)
			return num + iParam1;
	
		num = num + 22;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 72 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 73 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 62 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 63 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	}
	else
	{
		num = num + 207;
	}

	if (iParam0 == joaat("yosemite3"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 43 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 7 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 74 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 84 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	
		if (iParam3 == 65 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 21)
			return num + iParam1;
	
		num = num + 22;
	
		if (iParam3 == 90 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 69 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 70 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 71 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 83 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 51 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 80 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 81 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 82 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 76 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 77 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 68 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	}
	else
	{
		num = num + 264;
	}

	if (iParam0 == joaat("seminole2"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 43 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	}
	else
	{
		num = num + 75;
	}

	if (iParam0 == joaat("penumbra2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 22)
			return num + iParam1;
	
		num = num + 23;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 19 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 145;
	}

	if (iParam0 == joaat("glendale"))
	{
		if (iParam3 == 61 && iParam1 == 0)
			return num + iParam1;
	
		num = num + 1;
	}
	else
	{
		num = num + 1;
	}

	if (iParam0 == joaat("landstalker2"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	}
	else
	{
		num = num + 62;
	}

	if (iParam0 == joaat("coquette4"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 54 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 60;
	}

	if (iParam0 == joaat("openwheel1"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 28;
	}

	if (iParam0 == joaat("openwheel2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 57;
	}

	if (iParam0 == joaat("tigon"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 51;
	}

	if (iParam0 == joaat("brioso2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 52 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 61;
	}

	if (iParam0 == joaat("manchez2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 45;
	}

	if (iParam0 == joaat("seasparrow2"))
	{
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	}
	else
	{
		num = num + 3;
	}

	if (iParam0 == joaat("slamtruck"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 95 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 18)
			return num + iParam1;
	
		num = num + 19;
	}
	else
	{
		num = num + 59;
	}

	if (iParam0 == joaat("italirsx"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 112;
	}

	if (iParam0 == joaat("toreador"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 36 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 58;
	}

	if (iParam0 == joaat("winky"))
	{
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 14 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 7 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 29)
			return num + iParam1;
	
		num = num + 30;
	}
	else
	{
		num = num + 86;
	}

	if (iParam0 == joaat("weevil"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	
		if (iParam3 == 39 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 1)
			return num + iParam1;
	
		num = num + 2;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 22 && iParam1 <= 27)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	}
	else
	{
		num = num + 117;
	}

	if (iParam0 == joaat("squaddie"))
	{
		if (iParam3 == 6 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 13)
			return num + iParam1;
	
		num = num + 14;
	
		if (iParam3 == 8 && iParam2 == 2 && iParam1 >= 1 && iParam1 <= 8)
			return num + iParam1;
	
		num = num + 9;
	
		if (iParam3 == 44 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 5)
			return num + iParam1;
	
		num = num + 6;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 19)
			return num + iParam1;
	
		num = num + 20;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 14)
			return num + iParam1;
	
		num = num + 15;
	
		if (iParam3 == 32 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 7)
			return num + iParam1;
	
		num = num + 8;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 16)
			return num + iParam1;
	
		num = num + 17;
	
		if (iParam3 == 40 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 9)
			return num + iParam1;
	
		num = num + 10;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 159;
	}

	if (iParam0 == joaat("veto"))
	{
		if (iParam3 == 8 && iParam2 == 1 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	}
	else
	{
		num = num + 55;
	}

	if (iParam0 == joaat("alkonost"))
	{
		if (iParam3 == 18 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 10)
			return num + iParam1;
	
		num = num + 11;
	}
	else
	{
		num = num + 19;
	}

	if (iParam0 == joaat("annihilator2"))
	{
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 24;
	}

	if (iParam0 == joaat("veto2"))
	{
		if (iParam3 == 46 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 23 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 12)
			return num + iParam1;
	
		num = num + 13;
	
		if (iParam3 == 15 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 4)
			return num + iParam1;
	
		num = num + 5;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 30)
			return num + iParam1;
	
		num = num + 31;
	}
	else
	{
		num = num + 69;
	}

	if (iParam0 == joaat("verus"))
	{
		if (iParam3 == 41 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 12 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 3)
			return num + iParam1;
	
		num = num + 4;
	
		if (iParam3 == 9 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 7 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 2)
			return num + iParam1;
	
		num = num + 3;
	
		if (iParam3 == 26 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 6)
			return num + iParam1;
	
		num = num + 7;
	
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 20)
			return num + iParam1;
	
		num = num + 21;
	}
	else
	{
		num = num + 42;
	}

	if (iParam0 == joaat("kuruma"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 15)
			return num + iParam1;
	
		num = num + 16;
	}
	else
	{
		num = num + 16;
	}

	if (iParam0 == joaat("hermes"))
	{
		if (iParam3 == 85 && iParam2 == 0 && iParam1 >= 1 && iParam1 <= 11)
			return num + iParam1;
	
		num = num + 12;
	}
	else
	{
		num = num + 12;
	}

	num > 20000;
	return 0;
}

int func_513(int iParam0) // Position - 0x3DD63 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case joaat("adder"):
			return 0;
	
		case joaat("akuma"):
			return 1;
	
		case joaat("asea"):
			return 2;
	
		case joaat("asterope"):
			return 3;
	
		case joaat("bagger"):
			return 4;
	
		case joaat("baller"):
			return 5;
	
		case joaat("banshee"):
		case joaat("banshee2"):
			return 6;
	
		case joaat("bati"):
			return 7;
	
		case joaat("bati2"):
			return 8;
	
		case joaat("bfinjection"):
			return 9;
	
		case joaat("bison"):
			return 10;
	
		case joaat("bison2"):
			return 11;
	
		case joaat("bison3"):
			return 12;
	
		case joaat("bjxl"):
			return 13;
	
		case joaat("btype"):
			return 14;
	
		case joaat("blazer"):
			return 15;
	
		case joaat("blazer2"):
			return 15;
	
		case joaat("blazer3"):
			return 15;
	
		case joaat("blista"):
			return 16;
	
		case joaat("bobcatxl"):
			return 17;
	
		case joaat("bodhi2"):
			return 18;
	
		case joaat("boxville"):
			return 19;
	
		case joaat("boxville2"):
			return 20;
	
		case joaat("boxville3"):
			return 21;
	
		case joaat("buccaneer"):
		case joaat("buccaneer2"):
			return 22;
	
		case joaat("buffalo"):
			return 23;
	
		case joaat("buffalo2"):
			return 24;
	
		case joaat("bullet"):
			return 25;
	
		case joaat("burrito"):
			return 26;
	
		case joaat("paradise"):
			return 27;
	
		case joaat("bifta"):
			return 28;
	
		case joaat("kalahari"):
			return 29;
	
		case joaat("carbonizzare"):
			return 30;
	
		case joaat("carbonrs"):
			return 31;
	
		case joaat("cavalcade"):
			return 32;
	
		case joaat("cavalcade2"):
			return 33;
	
		case joaat("cheetah"):
			return 34;
	
		case joaat("cogcabrio"):
			return 35;
	
		case joaat("comet2"):
			return 36;
	
		case joaat("coquette"):
		case joaat("coquette2"):
			return 37;
	
		case joaat("daemon"):
			return 38;
	
		case joaat("dilettante"):
			return 39;
	
		case joaat("dominator"):
			return 40;
	
		case joaat("double"):
			return 41;
	
		case joaat("dubsta"):
			return 42;
	
		case joaat("dubsta2"):
			return 43;
	
		case joaat("elegy2"):
			return 44;
	
		case joaat("emperor"):
			return 45;
	
		case joaat("emperor2"):
			return 46;
	
		case joaat("emperor3"):
			return 47;
	
		case joaat("entityxf"):
			return 48;
	
		case joaat("exemplar"):
			return 49;
	
		case joaat("f620"):
			return 50;
	
		case joaat("faggio2"):
			return 51;
	
		case joaat("felon"):
			return 52;
	
		case joaat("felon2"):
			return 53;
	
		case joaat("feltzer2"):
			return 54;
	
		case joaat("fq2"):
			return 55;
	
		case joaat("fugitive"):
			return 56;
	
		case joaat("fusilade"):
			return 57;
	
		case joaat("futo"):
			return 58;
	
		case joaat("gauntlet"):
			return 59;
	
		case joaat("gburrito"):
			return 60;
	
		case joaat("granger"):
			return 61;
	
		case joaat("gresley"):
			return 62;
	
		case joaat("habanero"):
			return 63;
	
		case joaat("hexer"):
			return 64;
	
		case joaat("hotknife"):
			return 65;
	
		case joaat("infernus"):
			return 66;
	
		case joaat("ingot"):
			return 67;
	
		case joaat("intruder"):
			return 68;
	
		case joaat("issi2"):
			return 69;
	
		case joaat("jackal"):
			return 70;
	
		case joaat("jb700"):
			return 71;
	
		case joaat("khamelion"):
			return 72;
	
		case joaat("landstalker"):
			return 73;
	
		case joaat("lguard"):
			return 74;
	
		case joaat("manana"):
			return 75;
	
		case joaat("mesa"):
			return 76;
	
		case joaat("minivan"):
		case joaat("minivan2"):
			return 77;
	
		case joaat("monroe"):
			return 78;
	
		case joaat("nemesis"):
			return 79;
	
		case joaat("ninef"):
			return 80;
	
		case joaat("ninef2"):
			return 81;
	
		case joaat("oracle"):
			return 82;
	
		case joaat("oracle2"):
			return 83;
	
		case joaat("patriot"):
			return 84;
	
		case joaat("pcj"):
			return 85;
	
		case joaat("penumbra"):
			return 86;
	
		case joaat("peyote"):
			return 87;
	
		case joaat("phoenix"):
			return 88;
	
		case joaat("prairie"):
			return 89;
	
		case joaat("pranger"):
			return 90;
	
		case joaat("premier"):
			return 91;
	
		case joaat("primo"):
		case joaat("primo2"):
			return 92;
	
		case joaat("radi"):
			return 93;
	
		case joaat("rancherxl"):
			return 94;
	
		case joaat("rancherxl2"):
			return 95;
	
		case joaat("rapidgt"):
			return 96;
	
		case joaat("rapidgt2"):
			return 97;
	
		case joaat("ratloader"):
			return 98;
	
		case joaat("rebel"):
			return 99;
	
		case joaat("rebel2"):
			return 100;
	
		case joaat("regina"):
			return 101;
	
		case joaat("rocoto"):
			return 102;
	
		case joaat("ruffian"):
			return 103;
	
		case joaat("ruiner"):
			return 104;
	
		case joaat("rumpo"):
			return 105;
	
		case joaat("sabregt"):
		case joaat("sabregt2"):
			return 106;
	
		case joaat("sadler"):
			return 107;
	
		case joaat("sanchez"):
			return 108;
	
		case joaat("sandking"):
			return 109;
	
		case joaat("sandking2"):
			return 110;
	
		case joaat("schafter2"):
			return 111;
	
		case joaat("schwarzer"):
			return 112;
	
		case joaat("seminole"):
			return 113;
	
		case joaat("sentinel"):
			return 114;
	
		case joaat("sentinel2"):
			return 115;
	
		case joaat("serrano"):
			return 116;
	
		case joaat("speedo"):
			return 117;
	
		case joaat("speedo2"):
			return 118;
	
		case joaat("stanier"):
			return 119;
	
		case joaat("stinger"):
			return 120;
	
		case joaat("stingergt"):
			return 121;
	
		case joaat("stratum"):
			return 122;
	
		case joaat("stretch"):
			return 123;
	
		case joaat("sultan"):
		case joaat("sultanrs"):
			return 124;
	
		case joaat("superd"):
			return 125;
	
		case joaat("surano"):
			return 126;
	
		case joaat("surge"):
			return 127;
	
		case joaat("tailgater"):
			return 128;
	
		case joaat("jester"):
			return 129;
	
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("tornado5"):
			return 133;
	
		case joaat("vacca"):
			return 134;
	
		case joaat("vader"):
			return 135;
	
		case joaat("vigero"):
			return 136;
	
		case joaat("voltic"):
			return 137;
	
		case joaat("voodoo2"):
		case joaat("voodoo"):
			return 138;
	
		case joaat("washington"):
			return 139;
	
		case joaat("youga"):
			return 140;
	
		case joaat("zion"):
			return 141;
	
		case joaat("zion2"):
			return 142;
	
		case joaat("ztype"):
			return 143;
	
		case joaat("massacro"):
			return 144;
	
		case joaat("turismor"):
			return 145;
	
		case joaat("zentorno"):
			return 146;
	
		case joaat("huntley"):
			return 147;
	
		case joaat("alpha"):
			return 148;
	
		case joaat("cruiser"):
			return 149;
	
		case joaat("surfer"):
			return 150;
	
		case joaat("faction"):
		case joaat("faction2"):
			return 151;
	
		case joaat("chino"):
		case joaat("chino2"):
			return 152;
	
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 153;
	
		case joaat("btype2"):
			return 154;
	
		case joaat("lurcher"):
			return 155;
	
		case joaat("btype3"):
			return 156;
	
		case joaat("faction3"):
			return 157;
	
		case joaat("slamvan"):
		case joaat("slamvan2"):
		case joaat("slamvan3"):
			return 158;
	
		case joaat("virgo2"):
			return 159;
	
		case joaat("virgo3"):
			return 160;
	
		case joaat("bestiagts"):
			return 161;
	
		case joaat("brickade"):
			return 162;
	
		case joaat("fmj"):
			return 163;
	
		case joaat("nimbus"):
			return 164;
	
		case joaat("pfister811"):
			return 165;
	
		case joaat("prototipo"):
			return 166;
	
		case joaat("rumpo3"):
			return 167;
	
		case joaat("seven70"):
			return 168;
	
		case joaat("tug"):
			return 169;
	
		case joaat("volatus"):
			return 170;
	
		case joaat("windsor2"):
			return 171;
	
		case joaat("xls"):
			return 172;
	
		case joaat("xls2"):
			return 173;
	
		case joaat("reaper"):
			return 174;
	
		case joaat("le7b"):
			return 175;
	}

	switch (iParam0)
	{
		case joaat("buffalo3"):
			return 176;
	
		case joaat("dominator2"):
			return 177;
	
		case joaat("gauntlet2"):
			return 178;
	
		case joaat("stalion2"):
			return 179;
	
		case joaat("omnis"):
			return 180;
	
		case joaat("tropos"):
			return 181;
	
		case joaat("brioso"):
			return 182;
	
		case joaat("trophytruck"):
			return 183;
	
		case joaat("trophytruck2"):
			return 184;
	
		case joaat("contender"):
			return 185;
	
		case joaat("cliffhanger"):
			return 186;
	
		case joaat("bf400"):
			return 187;
	
		case joaat("tyrus"):
			return 188;
	
		case joaat("rallytruck"):
			return 189;
	
		case joaat("tampa2"):
			return 190;
	
		case joaat("gargoyle"):
			return 191;
	
		case joaat("lynx"):
			return 192;
	
		case joaat("sheava"):
			return 193;
	
		case joaat("avarus"):
			return 194;
	
		case joaat("chimera"):
			return 195;
	
		case joaat("daemon2"):
			return 196;
	
		case joaat("defiler"):
			return 197;
	
		case joaat("esskey"):
			return 198;
	
		case joaat("nightblade"):
			return 199;
	
		case joaat("ratbike"):
			return 200;
	
		case joaat("zombiea"):
			return 202;
	
		case joaat("zombieb"):
			return 203;
	
		case joaat("shotaro"):
			return 204;
	
		case joaat("raptor"):
			return 205;
	
		case joaat("hakuchou2"):
			return 206;
	
		case joaat("blazer4"):
			return 207;
	
		case joaat("sanctus"):
			return 208;
	
		case joaat("vortex"):
			return 209;
	
		case joaat("manchez"):
			return 210;
	
		case joaat("tornado6"):
			return 211;
	
		case joaat("youga2"):
			return 212;
	
		case joaat("wolfsbane"):
			return 213;
	
		case joaat("faggio3"):
			return 214;
	
		case joaat("faggio"):
			return 215;
	
		case joaat("dune5"):
			return 216;
	
		case joaat("phantom2"):
			return 217;
	
		case joaat("technical2"):
			return 218;
	
		case joaat("blazer5"):
			return 219;
	
		case joaat("boxville5"):
			return 220;
	
		case joaat("wastelander"):
			return 221;
	
		case joaat("ruiner2"):
			return 222;
	
		case joaat("voltic2"):
			return 223;
	
		case joaat("penetrator"):
			return 224;
	
		case joaat("tempesta"):
			return 225;
	
		case joaat("italigtb2"):
			return 226;
	
		case joaat("nero2"):
			return 227;
	
		case joaat("diablous2"):
			return 228;
	
		case joaat("fcr2"):
			return 229;
	
		case joaat("elegy"):
			return 230;
	
		case joaat("comet3"):
			return 232;
	
		case joaat("specter2"):
			return 232;
	
		case joaat("nero"):
			return 233;
	
		case joaat("italigtb"):
			return 234;
	
		case joaat("fcr"):
			return 235;
	
		case joaat("specter"):
			return 236;
	
		case joaat("diablous"):
			return 237;
	
		case joaat("infernus2"):
			return 238;
	
		case joaat("gp1"):
			return 239;
	
		case joaat("ruston"):
			return 240;
	
		case joaat("turismo2"):
			return 241;
	
		case joaat("cheetah2"):
			return 242;
	
		case joaat("torero"):
			return 243;
	
		case joaat("vagner"):
			return 244;
	
		case joaat("xa21"):
			return 245;
	
		case joaat("nightshark"):
			return 246;
	
		case joaat("ardent"):
			return 247;
	
		case joaat("tampa3"):
			return 248;
	
		case joaat("apc"):
			return 249;
	
		case joaat("dune3"):
			return 250;
	
		case joaat("halftrack"):
			return 251;
	
		case joaat("oppressor"):
			return 252;
	
		case joaat("trailersmall2"):
			return 253;
	
		case joaat("insurgent3"):
			return 254;
	
		case joaat("technical3"):
			return 255;
	
		case joaat("hauler2"):
			return 256;
	
		case joaat("phantom3"):
			return 257;
	
		case joaat("trailerlarge"):
			return 258;
	
		case joaat("lazer"):
			return 259;
	
		case joaat("microlight"):
			return 260;
	
		case joaat("mogul"):
			return 261;
	
		case joaat("rogue"):
			return 262;
	
		case joaat("starling"):
			return 263;
	
		case joaat("seabreeze"):
			return 264;
	
		case joaat("tula"):
			return 265;
	
		case joaat("pyro"):
			return 266;
	
		case joaat("molotok"):
			return 267;
	
		case joaat("nokota"):
			return 268;
	
		case joaat("bombushka"):
			return 269;
	
		case joaat("hunter"):
			return 270;
	
		case joaat("havok"):
			return 271;
	
		case joaat("howard"):
			return 272;
	
		case joaat("alphaz1"):
			return 273;
	
		case joaat("cyclone"):
			return 274;
	
		case joaat("visione"):
			return 275;
	
		case joaat("vigilante"):
			return 276;
	
		case joaat("retinue"):
			return 277;
	
		case joaat("rapidgt3"):
			return 278;
	
		case joaat("deluxo"):
			return 277;
	
		case joaat("stromberg"):
			return 278;
	
		case joaat("riot2"):
			return 279;
	
		case joaat("chernobog"):
			return 280;
	
		case joaat("khanjali"):
			return 281;
	
		case joaat("akula"):
			return 282;
	
		case joaat("thruster"):
			return 283;
	
		case joaat("avenger"):
			return 284;
	
		case joaat("barrage"):
			return 285;
	
		case joaat("volatol"):
			return 286;
	
		case joaat("comet4"):
			return 287;
	
		case joaat("neon"):
			return 288;
	
		case joaat("streiter"):
			return 289;
	
		case joaat("sentinel3"):
			return 290;
	
		case joaat("yosemite"):
			return 291;
	
		case joaat("hustler"):
			return 292;
	
		case joaat("riata"):
			return 293;
	
		case joaat("revolter"):
			return 294;
	
		case joaat("hermes"):
			return 295;
	
		case joaat("comet5"):
			return 296;
	
		case joaat("z190"):
			return 297;
	
		case joaat("viseris"):
			return 298;
	
		case joaat("kamacho"):
			return 299;
	
		case joaat("autarch"):
			return 300;
	
		case joaat("pariah"):
			return 301;
	
		case joaat("raiden"):
			return 302;
	
		case joaat("sc1"):
			return 303;
	
		case joaat("gt500"):
			return 304;
	
		case joaat("savestra"):
			return 305;
	}

	return -1;
}

int func_514(Hash hParam0) // Position - 0x3EEC8 Hash - 0xEE599357 ^0xEE599357
{
	switch (hParam0)
	{
		case joaat("CMOD_TYR_10"):
		case joaat("CMOD_SMOKE_10"):
			return 0;
	
		case joaat("CMOD_TYR_11"):
		case joaat("CMOD_SMOKE_11"):
			return 1;
	
		case joaat("HORN_CLAS1"):
		case joaat("CMOD_SMOKE_4"):
			return 2;
	
		case joaat("HORN_CLAS2"):
		case joaat("CMOD_SMOKE_5"):
			return 3;
	
		case joaat("HORN_CLAS3"):
		case joaat("CMOD_SMOKE_6"):
			return 4;
	
		case joaat("HORN_CLAS4"):
		case joaat("CMOD_SMOKE_7"):
			return 5;
	
		case joaat("HORN_CLAS5"):
			return 6;
	
		case joaat("HORN_CLAS6"):
		case joaat("CMOD_SMOKE_3"):
			return 7;
	
		case joaat("HORN_CLAS7"):
		case joaat("CMOD_SMOKE_8"):
			return 8;
	
		case joaat("HORN_CNOTE_C0") /* collision: HORN_CNOTE_C0 */:
			return 9;
	
		case joaat("HORN_CNOTE_D0") /* collision: HORN_CNOTE_D0 */:
			return 10;
	
		case joaat("HORN_CNOTE_E0") /* collision: HORN_CNOTE_E0 */:
			return 11;
	
		case joaat("HORN_CNOTE_F0") /* collision: HORN_CNOTE_F0 */:
			return 12;
	
		case joaat("HORN_CNOTE_G0") /* collision: HORN_CNOTE_G0 */:
			return 13;
	
		case joaat("HORN_CNOTE_A0") /* collision: HORN_CNOTE_A0 */:
			return 14;
	
		case joaat("HORN_CNOTE_B0") /* collision: HORN_CNOTE_B0 */:
			return 15;
	
		case joaat("HORN_CNOTE_C1") /* collision: HORN_CNOTE_C1 */:
			return 16;
	
		case joaat("CMOD_WIN_5"):
			return 17;
	
		case joaat("CMOD_TYR_12"):
		case joaat("CMOD_SMOKE_12"):
			return 18;
	
		case joaat("CMOD_TYR_13"):
		case joaat("CMOD_SMOKE_13"):
			return 19;
	
		case joaat("HORN_HIPS1"):
			return 20;
	
		case joaat("HORN_HIPS2"):
			return 22;
	
		case joaat("HORN_HIPS3"):
			return 22;
	
		case joaat("HORN_HIPS4"):
			return 23;
	
		case joaat("HORN_INDI_1"):
			return 24;
	
		case joaat("HORN_INDI_2"):
			return 25;
	
		case joaat("HORN_INDI_3"):
			return 26;
	
		case joaat("HORN_INDI_4"):
			return 27;
	
		case joaat("CMOD_TYR_PAT"):
			return 28;
	
		case joaat("HORN_LUXE1"):
			return 29;
	
		case joaat("HORN_LUXE2"):
			return 30;
	
		case joaat("HORN_LUXE3"):
			return 31;
	
		case joaat("HORN_LOWRDER1"):
			return 32;
	
		case joaat("HORN_LOWRDER2"):
			return 33;
	
		case joaat("HORN_HWEEN1"):
			return 34;
	
		case joaat("HORN_HWEEN2"):
			return 35;
	
		case joaat("HORN_XM15_1"):
			return 36;
	
		case joaat("HORN_XM15_2"):
			return 37;
	
		case joaat("HORN_XM15_3"):
			return 38;
	}

	return -1;
}

BOOL func_515(ePedComponentType epctParam0) // Position - 0x3F12E Hash - 0x296323FE ^0xE202EC26
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2657971[epctParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[epctParam0 /*465*/].f_322.f_8) == 23;

	return false;
}

BOOL func_516(int iParam0) // Position - 0x3F175 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("club"):
		case joaat("gauntlet5"):
		case joaat("weevil"):
		case joaat("zr350"):
		case joaat("remus"):
		case joaat("dominator7"):
		case joaat("tailgater2"):
		case joaat("previon"):
		case joaat("rt3000"):
		case joaat("driftremus"):
		case joaat("driftzr350"):
		case -223461503:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_517(int iParam0) // Position - 0x3F1D1 Hash - 0xE8CA8A7 ^0xE8CA8A7
{
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("pounder2"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("oppressor2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("zr380"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case -1233767450:
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("club"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
		case joaat("dukes3"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("astron"):
		case joaat("baller7"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("reever"):
		case joaat("shinobi"):
		case joaat("iwagen"):
			return true;
	}

	switch (iParam0)
	{
		case joaat("tornado5"):
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("omnisegt"):
		case 1384502824:
		case -1576586413:
		case -1249788006:
		case -1386336041:
		case -1035489563:
		case -1627077503:
		case 1748565021:
		case 2100457220:
		case 996383885:
		case -131348178:
		case 268758436:
		case 1076201208:
		case 669204833:
		case 1550581940:
		case -1933242328:
		case -461850249:
		case 1336514315:
		case -654498607:
		case -979292575:
		case -1763675285:
		case -1659004814:
		case -536105557:
		case 1447690049:
		case 165968051:
		case joaat("streamer216"):
		case joaat("monstrociti"):
		case joaat("coureur"):
		case joaat("speedo5"):
		case 239897677:
		case -897824023:
		case -1983622024:
		case joaat("turismo3"):
		case -38879449:
		case -1479935577:
		case -1681653521:
		case -1696319096:
		case joaat("driftremus"):
		case joaat("drifteuros"):
		case joaat("driftfuto"):
		case joaat("driftjester"):
		case joaat("driftzr350"):
		case -465825307:
		case -441209695:
		case -1029730482:
		case -478639183:
		case 372621319:
		case -741120335:
		case joaat("baller8"):
		case -768044142:
		case -178442374:
		case 167522317:
		case -1372798934:
		case -1240172147:
		case -223461503:
		case -143587026:
		case 1690421418:
		case 258105345:
		case 1249425552:
		case -986656474:
		case 1737348074:
		case 1307736079:
		case 1452003510:
		case 1121330119:
		case -1628000569:
		case -946047670:
		case 1579902654:
		case -773802025:
		case 1968807591:
		case -1896488056:
		case -1958428933:
		case -999594302:
		case 1881415402:
			return true;
	}

	return false;
}

void func_518(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3F892 Hash - 0xFFA103FE ^0xE48C38E1
{
	if (bParam1)
	{
		if (!func_262(iParam0, 0, false))
		{
			if (bParam2 && Global_101585.f_18[iParam0])
			{
				if (func_524(iParam0) == 3 && !func_523(iParam0))
				{
					func_522(iParam0);
					func_521(iParam0, 0, false);
					func_520(iParam0, 1, false);
					func_519(iParam0);
				}
				else
				{
					func_521(iParam0, 1, false);
					func_519(iParam0);
				}
			}
			else
			{
				func_521(iParam0, 0, false);
				func_520(iParam0, 1, false);
				func_519(iParam0);
			}
		}
		else
		{
			func_520(iParam0, 1, false);
			func_519(iParam0);
		}
	}
	else if (func_262(iParam0, 0, false))
	{
		func_520(iParam0, 0, false);
		func_520(iParam0, 1, false);
		func_519(iParam0);
	}

	return;
}

void func_519(int iParam0) // Position - 0x3F951 Hash - 0x5DB312F1 ^0x10640CD5
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
	return;
}

void func_520(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3F96B Hash - 0x9D8964AD ^0x8B4A734
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
		if (func_85() == 0)
		{
			address = func_49(func_263(iParam0), -1);
			MISC::CLEAR_BIT(&address, iParam1);
			func_132(func_263(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

void func_521(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3F9DB Hash - 0x9D8964AD ^0x494B9556
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
		if (func_85() == 0)
		{
			address = func_49(func_263(iParam0), -1);
			MISC::SET_BIT(&address, iParam1);
			func_132(func_263(iParam0), address, -1, true);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113969.f_668[iParam0], iParam1);
	}

	return;
}

void func_522(int iParam0) // Position - 0x3FA4B Hash - 0xEED7D53 ^0xC8D67880
{
	if (Global_101585.f_18[iParam0])
	{
		func_521(iParam0, 10, true);
		func_521(iParam0, 19, true);
	}

	return;
}

BOOL func_523(int iParam0) // Position - 0x3FA72 Hash - 0xBE61F0FD ^0xBE61F0FD
{
	return func_262(iParam0, 5, true);
}

int func_524(int iParam0) // Position - 0x3FA82 Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	}

	return 6;
}

void func_525() // Position - 0x3FDB8 Hash - 0x2B038723 ^0xFA031206
{
	BOOL flag;
	int num;
	Hash hash;
	int i;
	int j;
	var blockName;
	BOOL flag2;
	BOOL num2;
	Hash hash2;
	int k;
	int l;
	var blockName2;

	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			flag = false;
			num = 0;
		
			if (bLocal_78)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				hash = func_23("playerNameMP");
			
				if (hash != 0 && hash != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
					num = 1;
			
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				bLocal_78 = false;
			}
		
			if (num || iLocal_80)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_202("playerNameMP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				flag = true;
				func_482(0, true);
				func_482(1, true);
				iLocal_80 = 0;
				APP::APP_CLOSE_BLOCK();
			
				if (flag)
				{
					for (i = 0; i < 5; i = i + 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&blockName, "multiplayer", 16);
						TEXT_LABEL_APPEND_INT(&blockName, i, 16);
						APP::APP_SET_BLOCK(&blockName);
					
						for (j = 0; j < 10; j = j + 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&blockName, "vehicle", 16);
							TEXT_LABEL_APPEND_INT(&blockName, j, 16);
							APP::APP_SET_BLOCK(&blockName);
							func_202("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
						}
					
						APP::APP_CLOSE_BLOCK();
					}
				}
			
				APP::APP_CLOSE_APP();
			}
		}
		else
		{
			flag2 = false;
			num2 = false;
		
			if (bLocal_77)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				hash2 = func_23("playerNameSP");
			
				if (hash2 != 0 && hash2 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())))
					num2 = true;
			
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				bLocal_77 = false;
			}
		
			if (num2 || bLocal_79)
			{
				APP::APP_SET_APP("car");
				APP::APP_SET_BLOCK("appdata");
				func_202("playerNameSP", MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID())));
				bLocal_103 = true;
				bLocal_79 = false;
				flag2 = true;
				APP::APP_CLOSE_BLOCK();
			
				if (flag2)
				{
					for (k = 0; k < 5; k = k + 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&blockName2, "multiplayer", 16);
						TEXT_LABEL_APPEND_INT(&blockName2, k, 16);
						APP::APP_SET_BLOCK(&blockName2);
					
						for (l = 0; l < 10; l = l + 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&blockName2, "vehicle", 16);
							TEXT_LABEL_APPEND_INT(&blockName2, l, 16);
							APP::APP_SET_BLOCK(&blockName2);
							func_202("carUnlocked", 0);
							APP::APP_CLOSE_BLOCK();
						}
					
						APP::APP_CLOSE_BLOCK();
					}
				}
			
				APP::APP_CLOSE_APP();
			}
		}
	}

	return;
}

void func_526() // Position - 0x3FFB8 Hash - 0x186AA1F9 ^0xC8B26513
{
	int num;
	var blockName;
	var blockName2;
	int i;
	var unk7;
	int j;
	var unk13;
	int k;

	num = func_195();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!Global_2359296[num /*5570*/].f_593.f_53)
		{
			APP::APP_SET_APP("car");
			TEXT_LABEL_ASSIGN_STRING(&blockName, "multiplayer", 16);
			TEXT_LABEL_APPEND_INT(&blockName, func_15(), 16);
			APP::APP_SET_BLOCK(&blockName);
		
			for (i = 0; i < 10; i = i + 1)
			{
				TEXT_LABEL_ASSIGN_STRING(&blockName, "vehicle", 16);
				TEXT_LABEL_APPEND_INT(&blockName, i, 16);
				APP::APP_SET_BLOCK(&blockName);
				func_202("carUnlocked", 0);
				APP::APP_CLOSE_BLOCK();
			}
		
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			TEXT_LABEL_ASSIGN_STRING(&unk7, "orderCount_mp", 24);
			TEXT_LABEL_APPEND_INT(&unk7, func_15(), 24);
			func_202(&unk7, 0);
			APP::APP_CLOSE_BLOCK();
			bLocal_104 = true;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			Global_2359296[num /*5570*/].f_593.f_53 = 1;
		}
	
		if (iLocal_75 >= 0 && IS_BIT_SET(Global_1586521[iLocal_75 /*142*/].f_103, 26))
		{
			for (j = 0; j < 10; j = j + 1)
			{
				if (Global_2359296[num /*5570*/].f_593.f_63[j] - 1 == iLocal_75)
				{
					APP::APP_SET_APP("car");
					TEXT_LABEL_ASSIGN_STRING(&blockName, "multiplayer", 16);
					TEXT_LABEL_APPEND_INT(&blockName, func_15(), 16);
					APP::APP_SET_BLOCK(&blockName);
					TEXT_LABEL_ASSIGN_STRING(&blockName, "vehicle", 16);
					TEXT_LABEL_APPEND_INT(&blockName, j, 16);
					APP::APP_SET_BLOCK(&blockName);
					func_202("carUnlocked", 0);
					APP::APP_CLOSE_BLOCK();
					bLocal_104 = true;
					SYSTEM::SETTIMERA(0);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					MISC::CLEAR_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 25);
					MISC::CLEAR_BIT(&(Global_1586521[iLocal_75 /*142*/].f_103), 26);
				}
			}
		}
	
		switch (iLocal_85)
		{
			case 0:
				if (Global_2359296[num /*5570*/].f_593.f_54)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_84 = true;
					iLocal_85 = iLocal_85 + 1;
				}
				else
				{
					bLocal_84 = false;
				}
				break;
		
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
						Global_2359296[num /*5570*/].f_593.f_54 = 0;
				
					APP::APP_SET_APP("car");
					TEXT_LABEL_ASSIGN_STRING(&blockName2, "mp", 16);
					TEXT_LABEL_APPEND_INT(&blockName2, func_15(), 16);
					TEXT_LABEL_APPEND_STRING(&blockName2, "_order", 16);
					APP::APP_SET_BLOCK(&blockName2);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					TEXT_LABEL_ASSIGN_STRING(&unk13, "orderCount_mp", 24);
					TEXT_LABEL_APPEND_INT(&unk13, func_15(), 24);
					func_202(&unk13, Global_2359296[num /*5570*/].f_593.f_61);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_85 = 0;
				}
				break;
		}
	}
	else
	{
		if (!Global_113969.f_20121.f_260)
		{
			APP::APP_SET_APP("car");
			APP::APP_SET_BLOCK("singleplayer0");
			func_202("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("singleplayer2");
			func_202("carUnlocked", 0);
			APP::APP_CLOSE_BLOCK();
			APP::APP_SET_BLOCK("appdata");
			func_202("orderCount_sp0", 0);
			func_202("orderCount_sp1", 0);
			func_202("orderCount_sp2", 0);
			APP::APP_CLOSE_BLOCK();
			bLocal_104 = true;
			SYSTEM::SETTIMERA(0);
			APP::APP_CLOSE_APP();
			APP::APP_SET_APP("dog");
			APP::APP_SET_BLOCK("saveData");
			func_202("chopSafeHouse", 0);
			APP::APP_SAVE_DATA();
			APP::APP_CLOSE_BLOCK();
			APP::APP_CLOSE_APP();
			Global_113969.f_20121.f_273[0] = false;
			Global_113969.f_20121.f_273[1] = false;
			Global_113969.f_20121.f_273[2] = false;
			Global_113969.f_20121.f_260 = 1;
		}
	
		for (k = 0; k < 3; k = k + 1)
		{
			if (Global_113969.f_20121[k /*43*/].f_41)
			{
				APP::APP_SET_APP("car");
				TEXT_LABEL_ASSIGN_STRING(&blockName, "singleplayer", 16);
				TEXT_LABEL_APPEND_INT(&blockName, k, 16);
				APP::APP_SET_BLOCK(&blockName);
				func_202("carUnlocked", 0);
				bLocal_104 = true;
				SYSTEM::SETTIMERA(0);
				APP::APP_CLOSE_BLOCK();
				APP::APP_CLOSE_APP();
				Global_113969.f_20121.f_273[k] = false;
				Global_113969.f_20121[k /*43*/].f_41 = 0;
				Global_113969.f_20121[k /*43*/].f_40 = 0;
				Global_113969.f_20121[k /*43*/] = PV_COMP_HEAD;
				Global_113969.f_20121.f_273[k] = false;
			}
		}
	
		switch (iLocal_85)
		{
			case 0:
				if (Global_113969.f_20121.f_265)
				{
					APP::APP_DELETE_APP_DATA("car");
					bLocal_84 = true;
					iLocal_85 = iLocal_85 + 1;
				}
				else
				{
					bLocal_84 = false;
				}
				break;
		
			case 1:
				if (APP::APP_GET_DELETED_FILE_STATUS() != 1)
				{
					if (APP::APP_GET_DELETED_FILE_STATUS() != 3)
						Global_113969.f_20121.f_265 = 0;
				
					APP::APP_SET_APP("car");
					TEXT_LABEL_ASSIGN_STRING(&blockName2, "sp", 16);
					TEXT_LABEL_APPEND_INT(&blockName2, Global_113969.f_20121.f_266, 16);
					TEXT_LABEL_APPEND_STRING(&blockName2, "_order", 16);
					APP::APP_SET_BLOCK(&blockName2);
					APP::APP_CLEAR_BLOCK();
					APP::APP_CLOSE_BLOCK();
					APP::APP_SET_BLOCK("appdata");
					func_202("orderCount_sp0", Global_113969.f_20121.f_285[0]);
					func_202("orderCount_sp1", Global_113969.f_20121.f_285[1]);
					func_202("orderCount_sp2", Global_113969.f_20121.f_285[2]);
					APP::APP_CLOSE_BLOCK();
					APP::APP_CLOSE_APP();
					iLocal_85 = 0;
				}
				break;
		}
	}

	return;
}

BOOL func_527(Player plParam0) // Position - 0x40429 Hash - 0xB2831D42 ^0xB48111E7
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != PV_COMP_INVALID)
				return func_409(Global_2657971[plParam0 /*465*/].f_322.f_8) == 11;

	return false;
}

void func_528() // Position - 0x40470 Hash - 0x9AF5FF1F ^0x1E22B6E6
{
	int i;
	int num;
	int j;

	if (!APP::APP_HAS_SYNCED_DATA("car"))
		return;

	if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
	{
		bLocal_81 = false;
		return;
	}
	else
	{
		if (!bLocal_81)
		{
			bLocal_79 = 1;
			iLocal_80 = 1;
			bLocal_77 = true;
			bLocal_78 = true;
			Global_110664 = true;
		}
	
		bLocal_81 = true;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_85() != 0)
			return;
	
		if (!func_165())
			return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_85() == 0)
			iLocal_71 = 1;
	
		if (!Global_2359296[func_195() /*5570*/].f_593.f_87)
		{
			for (i = 9; i >= 0; i = i + -1)
			{
				Global_2359296[func_195() /*5570*/].f_593.f_63[i] = i + 1;
				Global_2359296[func_195() /*5570*/].f_593.f_74[i] = i + 1;
				Global_2359296[func_195() /*5570*/].f_593.f_41[i] = false;
			}
		
			Global_2359296[func_195() /*5570*/].f_593.f_85 = -1;
			Global_2359296[func_195() /*5570*/].f_593.f_87 = 1;
		}
	
		bLocal_82 = _STAT_GET_PACKED_BOOL(2921, -1);
		bLocal_83 = _STAT_GET_PACKED_BOOL(2922, -1);
	
		if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
		{
			if (!_STAT_GET_PACKED_BOOL(3612, -1))
			{
				func_482(0, 1);
				func_482(1, true);
				_STAT_SET_PACKED_BOOL(3612, true, -1);
			}
		}
		else if (_STAT_GET_PACKED_BOOL(3612, -1))
		{
			_STAT_SET_PACKED_BOOL(3612, false, -1);
		}
	}
	else
	{
		iLocal_71 = 0;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2359296[func_195() /*5570*/].f_593.f_36)
			bLocal_326 = true;
	
		if (func_105(187, -1))
		{
			bLocal_326 = true;
			func_57(187, false, -1, true);
		}
	
		if (!Global_262145.f_10613 && !Global_110666)
			bLocal_326 = true;
	}
	else if (Global_113969.f_20121.f_130[0 /*41*/].f_36 || Global_113969.f_20121.f_130[1 /*41*/].f_36 || Global_113969.f_20121.f_130[2 /*41*/].f_36)
	{
		bLocal_326 = true;
	}

	iLocal_85 = 0;
	hLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_75 = 0;
	bLocal_130 = false;
	bLocal_87 = false;
	iLocal_88 = 0;

	if (!bLocal_131 || Global_110498)
	{
		Global_113969.f_20121.f_264 = 1;
		bLocal_103 = false;
		APP::APP_SET_APP("car");
		APP::APP_SET_BLOCK("appdata");
		num = func_23("appUID");
	
		if (num != Global_113969.f_20121.f_272)
			bLocal_103 = true;
	
		APP::APP_CLOSE_BLOCK();
		APP::APP_CLOSE_APP();
	
		for (j = 0; j < Global_113969.f_20121.f_130; j = j + 1)
		{
			uLocal_109[j] = 0;
			uLocal_113[j] = 0;
			uLocal_117[j] = 0;
		}
	
		bLocal_121 = false;
	}

	Global_110498 = false;
	bLocal_131 = true;
	iLocal_70 = 1;
	return;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x406F7 Hash - 0x44DD83CC ^0x7B62A376
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

void func_530() // Position - 0x407AF Hash - 0x36BFCA00 ^0x3D275F1E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_110668)
		NETWORK::NETWORK_BAIL(49, 0, 0);

	return;
}

void func_531() // Position - 0x407CF Hash - 0x9669702C ^0x9669702C
{
	func_537();

	switch (iLocal_65)
	{
		case 0:
			func_536();
			break;
	
		case 1:
			func_534();
			break;
	
		case 2:
			func_532();
			break;
	}

	return;
}

void func_532() // Position - 0x40809 Hash - 0x79A44F4A ^0x79A44F4A
{
	func_533(0);

	if (Global_262144)
		Global_262144 = false;

	return;
}

void func_533(int iParam0) // Position - 0x40822 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_65 = iParam0;
	return;
}

void func_534() // Position - 0x4082E Hash - 0xC6FC6E7D ^0xC74C4155
{
	struct<2> args;

	switch (iLocal_66)
	{
		case 0:
			iLocal_68 = iLocal_67;
			SCRIPT::REQUEST_SCRIPT("tuneables_processing");
		
			if (SCRIPT::HAS_SCRIPT_LOADED("tuneables_processing") && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(DEFAULT) > 0)
			{
				args = func_535(iLocal_67);
				args.f_1 = func_535(iLocal_69);
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("tuneables_processing", &args, 2, DEFAULT);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("tuneables_processing");
				iLocal_66 = iLocal_66 + 1;
			}
			break;
	
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tuneables_processing")) == 0)
			{
				func_533(2);
				iLocal_66 = 0;
			}
			break;
	}

	return;
}

int func_535(int iParam0) // Position - 0x408BB Hash - 0x6C1D4A2D ^0x6C1D4A2D
{
	if (iParam0 >= 22)
		return 28 + (iParam0 - 22);

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 15;
	
		case 4:
			return 16;
	
		case 5:
			return 9;
	
		case 6:
			return 10;
	
		case 7:
			return 11;
	
		case 8:
			return 12;
	
		case 9:
			return 13;
	
		case 10:
			return 14;
	
		case 11:
			return 17;
	
		case 12:
			return 18;
	
		case 13:
			return 19;
	
		case 18:
			return 26;
	
		case 14:
			return 20;
	
		case 15:
			return 21;
	
		case 16:
			return 22;
	
		case 19:
			return 23;
	
		case 17:
			return 24;
	
		case 20:
			return 25;
	
		case 21:
			return 27;
	
		default:
		
	}

	return 0;
}

void func_536() // Position - 0x409CC Hash - 0x1AC1F94C ^0x1AC1F94C
{
	if (iLocal_67 != iLocal_68 || Global_262144)
	{
		Global_262144 = false;
		func_533(1);
	}

	return;
}

void func_537() // Position - 0x409F0 Hash - 0xFC04E772 ^0x9069CB42
{
	ePedComponentType type;
	int contentModifierListId;
	int* year;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115() && !func_571() && func_85() == -1)
	{
		iLocal_67 = 0;
		iLocal_69 = 21;
	}
	else
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && func_570())
			return;
	
		if (Global_1943216)
			return;
	
		iLocal_67 = 1;
		iLocal_69 = 21;
		type = func_569(PLAYER::PLAYER_ID());
	
		if (type != PV_COMP_INVALID)
		{
			contentModifierListId = -1;
		
			if (func_101(PLAYER::PLAYER_ID()))
				contentModifierListId = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_1048576.f_44)));
		
			if (contentModifierListId == -1)
				contentModifierListId = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(MISC::GET_HASH_KEY(&(Global_4718592.f_127465)));
		
			iLocal_69 = func_568(contentModifierListId);
		
			if (type == PV_COMP_HEAD)
				if (func_413(PLAYER::PLAYER_ID(), false, false) && func_546(*Global_4718592.f_127178, *Global_4718592.f_185586))
					iLocal_67 = 20;
				else if (func_545(PLAYER::PLAYER_ID()))
					iLocal_67 = 12;
				else if (func_544(PLAYER::PLAYER_ID()))
					iLocal_67 = 13;
				else if (func_543(PLAYER::PLAYER_ID()))
					iLocal_67 = 14;
				else if (func_542(PLAYER::PLAYER_ID()))
					iLocal_67 = 16;
				else if (func_541(PLAYER::PLAYER_ID()))
					iLocal_67 = 15;
				else if (func_540(PLAYER::PLAYER_ID()))
					iLocal_67 = 19;
				else if (func_539(PLAYER::PLAYER_ID()) || func_538(PLAYER::PLAYER_ID()))
					iLocal_67 = 18;
				else
					iLocal_67 = 3;
		
			if (type == PV_COMP_UPPR)
				iLocal_67 = 4;
		
			if (type == PV_COMP_BERD || Global_1836671)
				iLocal_67 = 2;
		
			if (type == PV_COMP_HAIR)
			{
				iLocal_67 = 5;
			
				if (*Global_4718592.f_117195 == 0 || *Global_4718592.f_117195 == 1)
					iLocal_67 = 5;
			
				if (*Global_4718592.f_117195 == 6 || *Global_4718592.f_117195 == 7 || *Global_4718592.f_117195 == 18 || *Global_4718592.f_117195 == 19)
					iLocal_67 = 10;
			
				if (*Global_4718592.f_117195 == 2 || *Global_4718592.f_117195 == 3)
					iLocal_67 = 9;
			
				if (*Global_4718592.f_117195 == 4 || *Global_4718592.f_117195 == 5)
					iLocal_67 = 8;
			
				if (*Global_4718592.f_117195 == 8 || *Global_4718592.f_117195 == 9 || Global_1836698)
					iLocal_67 = 11;
			
				if (*Global_4718592.f_117195 == 12 || *Global_4718592.f_117195 == 13)
					if (*Global_4718592.f_117198 == 8)
						iLocal_67 = 6;
					else
						iLocal_67 = 7;
			}
		
			if (type == PV_COMP_ACCS)
				iLocal_67 = 11;
		}
	
		if (func_4())
		{
			iLocal_67 = 1;
			iLocal_69 = 21;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115() && !func_571() && !(func_85() == -1) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (Global_2693456 > 10000)
			{
				CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
			
				if (year > Global_2693449 || year.f_1 > Global_2693449.f_1 || year.f_2 > Global_2693449.f_2)
				{
					CLOCK::GET_POSIX_TIME(&Global_2693449, &(Global_2693449.f_1), &(Global_2693449.f_2), &(Global_2693449.f_3), &(Global_2693449.f_4), &(Global_2693449.f_5));
					func_533(1);
					Global_2693456 = 0;
				}
			
				Global_2693456 = 0;
			}
			else
			{
				Global_2693456 = Global_2693456 + 1;
			}
		}
	}

	return;
}

BOOL func_538(Player plParam0) // Position - 0x40D8C Hash - 0x405E6C93 ^0xDC830F0E
{
	return Global_2657971[plParam0 /*465*/].f_122 == 7;
}

BOOL func_539(Player plParam0) // Position - 0x40DA1 Hash - 0xA3F2BD37 ^0x597BFEBA
{
	return Global_2657971[plParam0 /*465*/].f_122 == 2;
}

BOOL func_540(Player plParam0) // Position - 0x40DB6 Hash - 0xD5E02C4A ^0xBCD138C7
{
	return Global_2657971[plParam0 /*465*/].f_122 == 8;
}

BOOL func_541(Player plParam0) // Position - 0x40DCC Hash - 0x7C09C220 ^0x273E788D
{
	return Global_2657971[plParam0 /*465*/].f_122 == 3;
}

BOOL func_542(Player plParam0) // Position - 0x40DE1 Hash - 0x27D3696B ^0x364F08C2
{
	return Global_2657971[plParam0 /*465*/].f_122 == 4;
}

BOOL func_543(Player plParam0) // Position - 0x40DF6 Hash - 0xDCBFF60C ^0x441C9842
{
	return Global_2657971[plParam0 /*465*/].f_122 == 1;
}

BOOL func_544(Player plParam0) // Position - 0x40E0B Hash - 0x7B6883DE ^0x8DEE4FC7
{
	return Global_2657971[plParam0 /*465*/].f_122 == 5;
}

BOOL func_545(Player plParam0) // Position - 0x40E20 Hash - 0x114BF537 ^0x4F764D86
{
	return Global_2657971[plParam0 /*465*/].f_122 == 6;
}

BOOL func_546(ePedComponentType epctParam0, int iParam1) // Position - 0x40E35 Hash - 0x2C57C416 ^0x2C57C416
{
	if (iParam1 > 0)
		return 1;

	if (func_567(epctParam0) || func_566(epctParam0) || func_565(epctParam0) || func_564(epctParam0, true) || func_563(epctParam0) || func_562(epctParam0) || func_561(epctParam0) || func_560(epctParam0) || func_559(epctParam0) || func_558(epctParam0) || func_557(epctParam0) || func_556(epctParam0) || func_555(epctParam0) || func_554(epctParam0) || func_553(epctParam0) || func_552(epctParam0) || func_551(epctParam0) || func_550(epctParam0) || func_549(epctParam0) || func_548(iParam1) || func_547(iParam1))
		return 1;

	return 0;
}

BOOL func_547(int iParam0) // Position - 0x40F46 Hash - 0xB8D4E795 ^0xB8D4E795
{
	return iParam0 == 65;
}

BOOL func_548(int iParam0) // Position - 0x40F53 Hash - 0xD4BA6F02 ^0xD4BA6F02
{
	return iParam0 == 57;
}

BOOL func_549(ePedComponentType epctParam0) // Position - 0x40F60 Hash - 0xC99E75CE ^0x67D285EC
{
	int i;

	if (*Global_4718592.f_185586 == 30)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9724[i])
			return true;
	}

	return false;
}

BOOL func_550(ePedComponentType epctParam0) // Position - 0x40FAD Hash - 0xA7E1F0C5 ^0x646864C9
{
	int i;

	if (*Global_4718592.f_185586 == 35)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9757[i])
			return true;
	}

	return false;
}

BOOL func_551(ePedComponentType epctParam0) // Position - 0x40FFA Hash - 0x6580B8CE ^0x2D959032
{
	int i;

	if (*Global_4718592.f_185586 == 31)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9746[i])
			return true;
	}

	return false;
}

BOOL func_552(ePedComponentType epctParam0) // Position - 0x41047 Hash - 0xA4CF4D61 ^0xABE7A48D
{
	int i;

	if (*Global_4718592.f_185586 == 34)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9735[i])
			return true;
	}

	return false;
}

BOOL func_553(ePedComponentType epctParam0) // Position - 0x41094 Hash - 0xE4B74A5B ^0x48CF140A
{
	int i;

	if (*Global_4718592.f_185586 == 29)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 11; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9711[i])
			return true;
	}

	return false;
}

BOOL func_554(ePedComponentType epctParam0) // Position - 0x410E1 Hash - 0xA42797CA ^0xB496C8C
{
	int i;

	if (*Global_4718592.f_185586 == 27)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9700[i])
			return true;
	}

	return false;
}

BOOL func_555(ePedComponentType epctParam0) // Position - 0x4112E Hash - 0xE358C6ED ^0x99E6DA48
{
	int i;

	if (*Global_4718592.f_185586 == 28)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9689[i])
			return true;
	}

	return false;
}

BOOL func_556(ePedComponentType epctParam0) // Position - 0x4117B Hash - 0xB64D23CA ^0x6AF7F989
{
	int i;

	if (*Global_4718592.f_185586 == 46)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9678[i])
			return true;
	}

	return false;
}

BOOL func_557(ePedComponentType epctParam0) // Position - 0x411C8 Hash - 0x97752A06 ^0x2AD98535
{
	int i;

	if (*Global_4718592.f_185586 == 32)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9581[i])
			return true;
	}

	return false;
}

BOOL func_558(ePedComponentType epctParam0) // Position - 0x41215 Hash - 0x4A9CC01A ^0x1EED2DF1
{
	int i;

	if (*Global_4718592.f_185586 == 33)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9603[i])
			return true;
	}

	return false;
}

BOOL func_559(ePedComponentType epctParam0) // Position - 0x41262 Hash - 0x9C50B0AB ^0x175DBCCB
{
	int i;

	if (*Global_4718592.f_185586 == 86)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9592[i])
			return true;
	}

	return false;
}

BOOL func_560(ePedComponentType epctParam0) // Position - 0x412AF Hash - 0x14BFBF0E ^0x47791E90
{
	int i;

	if (*Global_4718592.f_185586 == 84)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9570[i])
			return true;
	}

	return false;
}

BOOL func_561(ePedComponentType epctParam0) // Position - 0x412FC Hash - 0x9DC5D4ED ^0x3356940B
{
	int i;

	if (*Global_4718592.f_185586 == 25)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9559[i])
			return true;
	}

	return false;
}

BOOL func_562(ePedComponentType epctParam0) // Position - 0x41349 Hash - 0x3362C7A4 ^0xB189F2C9
{
	int i;

	if (*Global_4718592.f_185586 == 85)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9548[i])
			return true;
	}

	return false;
}

BOOL func_563(ePedComponentType epctParam0) // Position - 0x41396 Hash - 0x3A714DDB ^0x5F3821C4
{
	int i;

	if (*Global_4718592.f_185586 == 21)
		return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9514[i])
			return true;
	}

	return false;
}

BOOL func_564(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x413E2 Hash - 0x50146D54 ^0x649EA032
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_185586 == 65)
			return true;

	if (epctParam0 == PV_COMP_HEAD)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (epctParam0 == Global_262145.f_9522[i])
			return true;
	}

	return false;
}

BOOL func_565(ePedComponentType epctParam0) // Position - 0x41433 Hash - 0x1E95E590 ^0xB919AF0D
{
	if (*Global_4718592.f_185586 == 18)
		return true;

	if (epctParam0 == Global_262145.f_9509 || epctParam0 == Global_262145.f_9510 || epctParam0 == Global_262145.f_9511 || epctParam0 == Global_262145.f_9512 || epctParam0 == Global_262145.f_9513)
		return true;

	return false;
}

int func_566(ePedComponentType epctParam0) // Position - 0x414A0 Hash - 0x34ED5677 ^0xB1AB63AF
{
	if (*Global_4718592.f_185586 == 20)
		return 1;

	if (epctParam0 == Global_262145.f_9504 || epctParam0 == Global_262145.f_9505 || epctParam0 == Global_262145.f_9506 || epctParam0 == Global_262145.f_9507 || epctParam0 == Global_262145.f_9508)
		return 1;

	return 0;
}

int func_567(ePedComponentType epctParam0) // Position - 0x4150D Hash - 0xEA5FFDB7 ^0xDFC9B0D5
{
	if (*Global_4718592.f_185586 == 19)
		return 1;

	if (epctParam0 == Global_262145.f_9497 || epctParam0 == Global_262145.f_9498 || epctParam0 == Global_262145.f_9499 || epctParam0 == Global_262145.f_9500 || epctParam0 == Global_262145.f_9501 || epctParam0 == Global_262145.f_9502 || epctParam0 == Global_262145.f_9503)
		return 1;

	return 0;
}

int func_568(int iParam0) // Position - 0x4159A Hash - 0xB0092DC9 ^0xB0092DC9
{
	if (iParam0 >= 0)
		return 22 + iParam0;

	return 21;
}

ePedComponentType func_569(Player plParam0) // Position - 0x415B2 Hash - 0xDAE9F12D ^0xDAE9F12D
{
	return Global_1845281[plParam0 /*883*/];
}

BOOL func_570() // Position - 0x415C3 Hash - 0xE7B418EC ^0x48168035
{
	return IS_BIT_SET(Global_2684504.f_43.f_4, 0);
}

BOOL func_571() // Position - 0x415D5 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_694;
}

void func_572() // Position - 0x415E4 Hash - 0x3566DE0B ^0x6645268D
{
	if (iLocal_70 != 0 && iLocal_71 != 2)
	{
		if (iLocal_71 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				iLocal_71 = 2;
		}
		else if (iLocal_71 == 1)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_115() && !func_573())
				iLocal_71 = 2;
		
			if (func_85() != 0)
				iLocal_71 = 2;
		}
	
		if (!APP::APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT())
			iLocal_71 = 2;
	
		if (Global_110498)
			iLocal_71 = 2;
	
		if (iLocal_71 == 2)
			iLocal_70 = 0;
	}

	return;
}

BOOL func_573() // Position - 0x4165D Hash - 0x41025EF1 ^0x41025EF1
{
	if (func_112() || func_111() || func_115() || func_575() || func_574())
		return true;

	return false;
}

BOOL func_574() // Position - 0x41699 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_846;
}

BOOL func_575() // Position - 0x416A8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_695;
}

BOOL func_576() // Position - 0x416B7 Hash - 0x9FFBCA6 ^0x9FFBCA6
{
	if (Global_1575011 == TRANSITION_STATE_DLC_INTRO_BINK)
		return true;

	return false;
}

