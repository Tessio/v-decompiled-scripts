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
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	ePedComponentType epctLocal_99 = PV_COMP_HEAD;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
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
	var uLocal_115 = 5;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 32;
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
	int iLocal_256 = 0;
	Blip blLocal_257 = 0;
	int iLocal_258 = 0;
	Blip blLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	ePedComponentType epctLocal_263 = PV_COMP_HEAD;
	BOOL bLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
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
	var uLocal_295 = -1134206910;
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
	var uLocal_307 = 5;
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
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	BOOL bLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_59 = (0.05f + 0.275f) - 0.01f;
	fLocal_65 = 0f;
	iLocal_98 = 10;
	epctLocal_99 = PV_COMP_BERD;
	iLocal_261 = 1;
	iLocal_269 = -1;
	iLocal_272 = -1;
	iLocal_330 = -1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_676(uScriptParam_0))
			func_669();
	
		if (!MISC::IS_PC_VERSION())
			if (func_668())
				func_669();
	
		if (Global_61704 || Global_76855)
			func_669();
	}

	while (true)
	{
		func_667();
		iLocal_265 = 0;
		iLocal_266 = 0;
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_669();
	
		if (!func_619(0, 0, 0))
			func_669();
	
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_337)
			func_669();
	
		if (func_608(false))
			uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 2;
	
		switch (func_607(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				func_602(0);
				func_600(0, -1, false);
			
				if (!func_668())
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				else if (func_599(&uLocal_273, 5000, false))
					func_669();
			
				if (func_598() == 4)
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				break;
		
			case 1:
				if (func_598() == 1)
					func_33();
				else if (func_598() == 0)
					if (func_668())
						func_669();
				else if (func_598() == 4)
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
			
				if (func_28())
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				break;
		
			case 3:
				func_26(&(iLocal_100.f_23));
			
				if (func_25(&(iLocal_100.f_23)))
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				break;
		
			case 2:
				uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				[[fallthrough]];
		
			case 4:
				func_669();
				break;
		}
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_598())
			{
				case 0:
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CONTEXT, true);
					iLocal_100 = 1;
					break;
			
				case 1:
					func_23();
					func_3();
				
					if (func_1())
						iLocal_100 = 4;
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL func_1() // Position - 0x25F (607)
{
	if (func_2())
		return true;

	return false;
}

BOOL func_2() // Position - 0x273 (627)
{
	if (iLocal_100.f_22 == 0)
		if (IS_BIT_SET(iLocal_100.f_1, 3))
			return true;

	return false;
}

void func_3() // Position - 0x291 (657)
{
	switch (iLocal_100.f_22)
	{
		case 0:
			if (func_14())
			{
				HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
				func_4(iLocal_100.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
				iLocal_100.f_22 = 1;
			}
			break;
	
		case 1:
			iLocal_100.f_13 = NETWORK::GET_NETWORK_TIME();
			iLocal_100.f_22 = 2;
			break;
	
		case 2:
			if (iLocal_100.f_2 != -1)
				iLocal_100.f_22 = 3;
			break;
	
		case 3:
			iLocal_100.f_22 = 4;
			break;
	
		case 4:
			break;
	}

	return;
}

void func_4(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x31B (795)
{
	Hash eventData;

	eventData = -221407512;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam3;
	eventData.f_4 = { uParam0 };

	if (!(iParam4 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 14, iParam4, eventData);

	return;
}

int func_5(int iParam0, int iParam1) // Position - 0x35A (858)
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, true, true) && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			if (PLAYER::GET_PLAYER_TEAM(player) == iParam0 || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_HEAD && func_6(iParam0, PLAYER::GET_PLAYER_TEAM(player), 0, -1))
				if (player != PLAYER::PLAYER_ID())
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(player), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true) <= (float)iParam1)
						MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_6(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x400 (1024)
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
			if (IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26680, num))
			{
				num2 = Global_1058116.f_14[iParam1];
			
				if (num2 < 17 && num2 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_7(iParam0, num, iParam1, num2) || !func_7(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26682[num], 0 + iParam1);
							break;
					
						case 1:
							if (!func_7(iParam0, num, iParam1, num2) || !func_7(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26682[num], 4 + iParam1);
							break;
					
						case 2:
							if (!func_7(iParam0, num, iParam1, num2) || !func_7(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26682[num], 8 + iParam1);
							break;
					
						case 3:
							if (!func_7(iParam0, num, iParam1, num2) || !func_7(iParam1, num2, iParam0, num))
								return IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26682[num], 12 + iParam1);
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
					return IS_BIT_SET(Global_4718592.f_3554, 0);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 1);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 2);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 3);
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 4);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 5);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 6);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 7);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 8);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 9);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 10);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 11);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4718592.f_3554, 12);
			
				case 1:
					return IS_BIT_SET(Global_4718592.f_3554, 13);
			
				case 2:
					return IS_BIT_SET(Global_4718592.f_3554, 14);
			
				case 3:
					return IS_BIT_SET(Global_4718592.f_3554, 15);
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_7(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x74B (1867)
{
	BOOL num;
	ePedComponentType type;
	Ped playerPed;
	Hash entityModel;
	Hash entityModel2;
	ePedComponentType i;

	if (iParam0 == iParam2)
		return true;

	if (!IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_26681, iParam1))
		return false;

	if (!IS_BIT_SET(Global_4718592.f_3605[iParam2 /*26949*/].f_26681, iParam3))
		return false;

	num = 1;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		entityModel2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());

	i = 0;

	for (i = 0; i <= 31; i = i + 1)
	{
		type = i;
	
		if (!_NETWORK_IS_PLAYER_VALID(type, true, true) || func_9(type, 0) || IS_BIT_SET(Global_2658019[type /*467*/].f_202, 2) || func_8(type))
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

BOOL func_8(ePedComponentType epctParam0) // Position - 0x877 (2167)
{
	return IS_BIT_SET(Global_1845274[epctParam0 /*877*/].f_36.f_18, 14);
}

BOOL func_9(ePedComponentType epctParam0, int iParam1) // Position - 0x88F (2191)
{
	BOOL flag;

	if (!func_12(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_10(-1, false) == 8;
	else
		flag = Global_1845274[epctParam0 /*877*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

int func_10(int iParam0, BOOL bParam1) // Position - 0x8E8 (2280)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_11();

	if (Global_1575068[num2] == true)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574921[num2];
		bParam1;
	}

	return num;
}

int func_11() // Position - 0x929 (2345)
{
	return Global_1574927;
}

BOOL func_12(ePedComponentType epctParam0) // Position - 0x935 (2357)
{
	Player player;

	player = epctParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x957 (2391)
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
				if (type == Global_2672967.f_3)
					return Global_2672967.f_2;
				else if (Global_2658019[type /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_14() // Position - 0x9B7 (2487)
{
	if (func_20())
		return false;

	if (uLocal_307.f_14 != 4)
		return false;

	if (IS_BIT_SET(iLocal_100.f_1, 7) && !IS_BIT_SET(iLocal_100.f_1, 9))
		return false;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f)
		return false;

	if (func_16(func_17(), 0f, 0f, 0f, false) || func_16(func_17(), 0f, 0f, -2000f, false))
		return false;

	if (func_15() || iLocal_265)
	{
		if (iLocal_100.f_14 >= 2)
		{
			if (iLocal_100.f_15[2] <= 0 || iLocal_100.f_15[2] > iLocal_98 && !HUD::IS_WAYPOINT_ACTIVE() && !IS_BIT_SET(iLocal_100.f_1, 10))
			{
				return false;
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				return true;
			}
		}
	}

	return false;
}

int func_15() // Position - 0xA9B (2715)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
		return 1;

	return 0;
}

BOOL func_16(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xAEF (2799)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_17() // Position - 0xB36 (2870)
{
	float blipInfoIdCoord;

	switch (iLocal_100.f_15[2])
	{
		case 0:
			if (HUD::IS_WAYPOINT_ACTIVE())
			{
				blipInfoIdCoord = { HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) };
				blipInfoIdCoord.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA(blipInfoIdCoord - 5f, blipInfoIdCoord.f_1 - 5f, blipInfoIdCoord + 5f, blipInfoIdCoord.f_1 + 5f);
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, blipInfoIdCoord, true) > 1000f)
				{
					if (!IS_BIT_SET(iLocal_100.f_1, 7))
					{
						func_19();
						HUD::SET_MINIMAP_BLOCK_WAYPOINT(true);
						MISC::SET_BIT(&(iLocal_100.f_1), 7);
					}
				
					return blipInfoIdCoord;
				}
			}
		
			return iLocal_100.f_10;
	
		case 1:
			func_19();
			return 15.072f, -1121.5132f, 27.8034f;
	
		case 2:
			if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD && !IS_BIT_SET(Global_2740191.f_1864, 24))
			{
				func_19();
				return func_18(11, 0);
			}
			else
			{
				func_19();
				return Global_2740191.f_261;
			}
			break;
	
		case 3:
			func_19();
			return -1151.0372f, -1620.8402f, 3.2754f + 3f;
	
		case 4:
			func_19();
			return 132.931f, -1305.7456f, 28.1664f;
	
		case 5:
			func_19();
			return 2054.093f, 3935.84f, 32.1771f;
	
		case 6:
			func_19();
			return 514.7371f, 5532.3853f, 774.9705f;
	
		case 7:
			func_19();
			return -1340.3629f, -3041.9187f, 12.9444f;
	
		case 8:
			func_19();
			return -2352.0706f, 3423.6538f, 27.8667f;
	
		case 9:
			func_19();
			return 54.7835f, 7243.3877f, 1.5166f;
	
		case 10:
			func_19();
			return 675.3948f, 1203.2501f, 322.2605f;
	}

	func_19();
	return 0f, 0f, -2000f;
}

Vector3 func_18(int iParam0, int iParam1) // Position - 0xD3B (3387)
{
	switch (iParam0)
	{
		case 11:
			return -1380.08f, 55.63f, 52.68f;
	
		case 122:
			return -1154.8163f, -2716.453f, 18.8923f;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					return 16.3823f, -1099.9557f, 28.797f;
			
				case 1:
					return 817.6979f, -2161.9824f, 28.619f;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1162.5516f, -1628.3932f, 3.3739f;
			
				case 1:
					return 479.8226f, -234.8953f, 52.7934f;
			
				case 2:
					return -1237.3899f, 333.6207f, 78.9863f;
			
				case 3:
					return -2870.1614f, 9.0811f, 10.6081f;
			
				case 4:
					return -939.5128f, -1255.6967f, 6.9671f;
			
				case 5:
					return -1618.9148f, 249.326f, 58.5552f;
			
				case 6:
					return -1369.9988f, -117.22f, 49.7046f;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return 906.98f, -166.2f, 73.12f;
			
				case 1:
					return 1440.432f, -2215.5957f, 60.133f;
			
				case 2:
					return -83.8271f, -1330.8877f, 28.2913f;
			
				case 3:
					return 366.4715f, -2446.2266f, 5.1129f;
			
				case 4:
					return 1222.72f, 2721.2f, 37.0042f;
			
				case 5:
					return 1051.4794f, 2667.2903f, 38.5509f;
			
				case 6:
					return 273.371f, 2607.7676f, 43.7028f;
			
				case 7:
					return -180.53f, 6298.76f, 30.49f;
			
				case 8:
					return 1687.1375f, 4966.838f, 42.0569f;
			
				case 9:
					return 2343.9714f, 3134.054f, 47.2088f;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 1994.7828f, 3049.323f, 46.1123f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

void func_19() // Position - 0xFA3 (4003)
{
	if (IS_BIT_SET(iLocal_100.f_1, 7))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
	
		MISC::CLEAR_BIT(&(iLocal_100.f_1), 7);
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
	}

	if (IS_BIT_SET(iLocal_100.f_1, 8))
	{
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		MISC::CLEAR_BIT(&(iLocal_100.f_1), 8);
	}

	if (IS_BIT_SET(iLocal_100.f_1, 9))
		MISC::CLEAR_BIT(&(iLocal_100.f_1), 9);

	return;
}

BOOL func_20() // Position - 0xFFD (4093)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return true;

	if (func_22(8, -1))
		return true;

	if (func_21(0))
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0x102B (4139)
{
	if (iParam0 == 1)
		if (Global_21239.f_1 > 3)
			if (IS_BIT_SET(Global_9075, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21239.f_1 > 3)
		return true;

	return false;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0x1082 (4226)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673898.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673898.f_1048, iParam0);
}

void func_23() // Position - 0x10BA (4282)
{
	int i;
	int num;
	float num2;
	float distanceBetweenCoords;
	int num3;
	ePedComponentType type;
	ePedComponentType playerIndex;
	Ped playerPed;

	num2 = 999999f;
	MISC::SET_BIT(&(iLocal_100.f_1), 2);
	MISC::SET_BIT(&(iLocal_100.f_1), 1);
	MISC::CLEAR_BIT(&(iLocal_100.f_1), 0);
	MISC::SET_BIT(&(iLocal_100.f_1), 3);
	MISC::SET_BIT(&(iLocal_100.f_1), 6);
	iLocal_100.f_14 = 0;

	if (iLocal_100.f_22 == 0)
		iLocal_125 = 0;

	for (i = 0; i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS(); i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
		{
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i));
			playerPed = PLAYER::GET_PLAYER_PED(playerIndex);
			iLocal_100.f_14 = iLocal_100.f_14 + 1;
		
			if (IS_BIT_SET(iLocal_100.f_1, 3))
				if (ENTITY::IS_ENTITY_AT_COORD(playerPed, iLocal_100.f_4, 350f, 350f, 350f, false, true, 0))
					MISC::CLEAR_BIT(&(iLocal_100.f_1), 3);
		
			if (_NETWORK_IS_PLAYER_VALID(playerIndex, true, true))
			{
				MISC::CLEAR_BIT(&(iLocal_100.f_1), 2);
				MISC::SET_BIT(&(iLocal_100.f_1), 0);
			
				if (Global_2740191.f_28.f_81 == 1 && Global_2740191.f_28.f_46 == 0)
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(playerPed, true), iLocal_100.f_7, true);
				
					if (distanceBetweenCoords < num2)
					{
						if (func_24(playerPed))
						{
							num2 = distanceBetweenCoords;
							iLocal_100.f_2 = i;
						}
					}
				}
			
				if (iLocal_100.f_22 == 0)
				{
					iLocal_125 = iLocal_125 + uLocal_127[i /*4*/].f_2;
				}
				else if (iLocal_100.f_22 == 2)
				{
					type = playerIndex;
					num3 = Global_2740191.f_28.f_47[type];
				
					if (Global_2740191.f_28.f_46 == 1)
					{
						if (func_599(&uLocal_346, 750, false))
						{
							if (num3 != 0)
							{
								if (num3 < num || num == 0)
								{
									num = num3;
									iLocal_100.f_2 = i;
								}
							}
						}
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(iLocal_100.f_1), 1);
			}
		}
	}

	if (iLocal_100.f_22 == 0)
	{
		if (iLocal_125 > Global_262145.f_166)
			iLocal_125 = Global_262145.f_166;
	
		if (iLocal_100.f_3 != iLocal_125)
		{
			iLocal_260 = 1;
			iLocal_100.f_3 = iLocal_125;
		}
	
		if (iLocal_100.f_3 < BUILTIN::ROUND(50f * Global_262145.f_168))
			iLocal_100.f_3 = BUILTIN::ROUND(50f * Global_262145.f_168);
	}

	return;
}

BOOL func_24(Ped pedParam0) // Position - 0x12B4 (4788)
{
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;
	int i;
	Player playerIndexFromPed;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		{
			for (i = 0; i < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehiclePedIsIn) + 1; i = i + 1)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, i - 1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				{
					if (!PED::IS_PED_INJURED(pedInVehicleSeat))
					{
						if (PED::IS_PED_A_PLAYER(pedInVehicleSeat))
						{
							playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedInVehicleSeat);
						
							if (playerIndexFromPed != NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam0))
								if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(playerIndexFromPed))
									if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(playerIndexFromPed)))
										return false;
							else
								return true;
						}
					}
				}
			}
		}
	}

	return true;
}

BOOL func_25(var uParam0) // Position - 0x1350 (4944)
{
	if (uParam0->f_1)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
			return true;

	return false;
}

void func_26(var uParam0) // Position - 0x1379 (4985)
{
	if (!uParam0->f_1)
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			func_27(uParam0, false, false);

	return;
}

void func_27(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1398 (5016)
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

BOOL func_28() // Position - 0x13DD (5085)
{
	if (iLocal_100.f_22 == 0)
	{
		if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			return true;
	
		if (func_32() != 0)
			return true;
	
		if (func_31())
			return true;
	
		if (Global_1574975 == true)
			return true;
	
		if (Global_1836514 == true)
			return true;
	
		if (Global_61704)
			return true;
	
		if (Global_76855)
			return true;
	
		if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			return true;
	
		if (IS_BIT_SET(Global_2740191.f_4735, 16))
		{
			MISC::CLEAR_BIT(&(Global_2740191.f_4735), 16);
			return true;
		}
	
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iLocal_100.f_4, 350f, 350f, 350f, false, true, 0))
		{
			if (!func_16(func_17(), 0f, 0f, 0f, false) && !func_16(func_17(), 0f, 0f, -2000f, false))
				return true;
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iLocal_100.f_4, 300f, 300f, 300f, false, true, 0))
		{
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_341))
				func_27(&uLocal_341, false, false);
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_341))
		{
			_STOPWATCH_DESTROY(&uLocal_341);
			HUD::CLEAR_HELP(true);
		}
	}

	return false;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x150F (5391)
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x151C (5404)
{
	return uParam0->f_1;
}

BOOL func_31() // Position - 0x1528 (5416)
{
	return Global_101969.f_400 > 0;
}

int func_32() // Position - 0x1539 (5433)
{
	return Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_185;
}

void func_33() // Position - 0x154E (5454)
{
	int num;
	int num2;
	Player player;
	var unk;

	switch (uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			func_602(0);
			func_597();
			func_596();
			func_595(&uLocal_331);
			func_592();
			NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
		
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			{
				if (!IS_BIT_SET(iLocal_256, 4))
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_257))
					{
						num = func_590(PLAYER::PLAYER_ID());
						num2 = func_588(iLocal_100.f_4, iLocal_100.f_7);
					
						if (MONEY::NETWORK_CAN_SPEND_MONEY(num2, false, false, false, -1, 0))
							if (num < num2)
								if (num > 0)
									uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = num;
								else
									uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = 0;
							else
								uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = num2;
						else
							uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = 0;
					
						iLocal_260 = 1;
						MISC::SET_BIT(&iLocal_256, 4);
					}
					else
					{
						uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = BUILTIN::ROUND(50f * Global_262145.f_168);
					}
				}
			
				func_311();
				player = PLAYER::PLAYER_ID();
			
				if (IS_BIT_SET(Global_1882449[player /*201*/].f_17, 0))
					func_669();
			}
		
			if (iLocal_100.f_22 > 0)
			{
				if (func_310())
					func_309();
			
				func_308();
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
				func_305(true, -1);
				uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			break;
	
		case 1:
			func_602(0);
			func_595(&uLocal_331);
		
			if (!IS_BIT_SET(iLocal_256, 3))
			{
				if (uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
				{
					if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
					{
						_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"), uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, &unk, false, false, false);
					}
					else
					{
						func_291(-uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 0);
						MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, "RaceToPoint", false, false);
					}
				}
			
				HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
				func_290(true);
				func_289(true);
				uLocal_279 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Global_2740191.f_28.f_80 = 1;
				func_288(2, true);
			
				if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD)
				{
					Global_1845274[PLAYER::PLAYER_ID() /*877*/] = 32;
					Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 = 32;
				}
			
				func_279(2, 0, true);
				MISC::SET_BIT(&iLocal_256, 3);
			}
		
			if (iLocal_100.f_22 > 1 && func_278(&uLocal_331))
			{
				if (func_267(&uLocal_331, true, 0, true, 3, true, 1, false))
				{
					uLocal_331.f_1 = 0;
					func_266(&(uLocal_331.f_2));
					func_265(&uLocal_331);
					Global_2740191.f_28.f_80 = 0;
					HUD::SET_MISSION_NAME(true, "R2P_MENU" /*IMPROMPTU RACE*/);
					uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
				}
				else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_279, 7.5f, 7.5f, 7.5f, false, true, 0))
				{
					uLocal_331.f_1 = 0;
					func_266(&(uLocal_331.f_2));
					func_265(&uLocal_331);
					MISC::SET_BIT(&iLocal_256, 7);
					_SHOW_BANNER(27, "R2P_DQBIG" /*Disqualified*/, "R2P_DQSTR" /*Impromptu Race*/, 1, -1, 2, 1, 0);
					func_669();
				}
			}
			break;
	
		case 2:
			func_596();
			func_262();
		
			if (iLocal_100.f_2 > -1)
				uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			break;
	
		case 3:
			func_34();
			break;
	
		case 4:
			func_669();
			break;
	}

	return;
}

void func_34() // Position - 0x1852 (6226)
{
	int num;
	ePedComponentType type;
	ePedComponentType amount;
	int num2;

	if (!IS_BIT_SET(iLocal_256, 1))
	{
		num = -1;
		num.f_1 = -1;
		num.f_2 = -1;
		num.f_4 = { iLocal_100.f_4 };
		num.f_7 = { iLocal_100.f_7 };
	
		if (iLocal_100.f_2 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			type = func_261(12030, -1) + 1;
			func_257(12030, type, -1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
		
			if (iLocal_125 > Global_262145.f_166)
				iLocal_125 = Global_262145.f_166;
		
			if (iLocal_100.f_3 < BUILTIN::ROUND(50f * Global_262145.f_168))
				iLocal_100.f_3 = BUILTIN::ROUND(50f * Global_262145.f_168);
		
			amount = iLocal_100.f_3;
			func_240(&amount, 1);
		
			if (amount > PV_COMP_HEAD)
			{
				if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				{
					_NETSHOPPING_PROCESS_TRANSACTION(joaat("SERVICE_EARN_JOBS"), amount, &num2, false, false, false);
					TEXT_LABEL_ASSIGN_STRING(&(Global_4537182[num2 /*84*/].f_13.f_26), "mg_race_to_point", 32);
				}
				else
				{
					func_291(amount, 0);
					MONEY::NETWORK_EARN_FROM_JOB(amount, "mg_race_to_point");
				}
			}
		
			func_191(0, PLAYER::PLAYER_PED_ID(), "XPT_MEDIUMT", joaat("XPTYPE_COMPLETE"), 883210409, BUILTIN::ROUND(150f * Global_262145.f_3942), 1, -1, 0, false, 0);
			func_190(25, iLocal_100.f_3, "R2P_IWSTR" /*Impromptu Race: $~1~*/, 0, 1, -1, -1082130432, 2, 0);
			num.f_3 = 1;
			STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 150, iLocal_100.f_3, &num);
			func_187(joaat("MPPLY_RACE_2_POINT_WINS"), 1);
			func_185(54, 1, -1);
		}
		else
		{
			func_166(26, "R2P_ILSTR" /*Impromptu Race*/, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_100.f_2))), 1, -1, 0, 2);
			num.f_3 = 0;
			STATS::PLAYSTATS_RACE_TO_POINT_MISSION_DONE(32, 0, 0, &num);
		
			if (iLocal_100.f_2 != -1)
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_100.f_2)))
					func_111("R2P_PWTIC" /*~a~ ~s~won the Impromptu Race.*/, NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_100.f_2)), false, false, false, true, false);
		
			func_187(joaat("MPPLY_RACE_2_POINT_LOST"), 1);
		}
	
		if (HUD::DOES_BLIP_EXIST(blLocal_257))
			HUD::REMOVE_BLIP(&blLocal_257);
	
		GRAPHICS::DELETE_CHECKPOINT(iLocal_258);
		func_39(42023, true);
		func_37(21);
		func_35();
		MISC::SET_BIT(&iLocal_256, 1);
	}
	else if (func_599(&uLocal_339, 7500, false))
	{
		uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 4;
	}

	return;
}

void func_35() // Position - 0x1A62 (6754)
{
	int num;

	num = func_36(50);
	Global_2645394[num /*83*/] = 50;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645394[num /*83*/].f_18[0 /*16*/], "-StraightIntoFreemode", 64);
	return;
}

int func_36(int iParam0) // Position - 0x1A8E (6798)
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645394[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645394[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_37(ePedComponentType epctParam0) // Position - 0x1ADB (6875)
{
	int i;

	if (Global_262145.f_9094)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_2359296[func_38() /*5571*/].f_681.f_4245[i /*3*/] == epctParam0)
		{
			if (Global_1574745.f_1[i] == PV_COMP_INVALID)
			{
				Global_1574745.f_1[i] = epctParam0;
				Global_1574745 = true;
				return;
			}
		}
	}

	return;
}

int func_38() // Position - 0x1B3E (6974)
{
	int num;

	num = 0;
	return num;
}

void func_39(int iParam0, BOOL bParam1) // Position - 0x1B4B (6987)
{
	BOOL flag;
	int num;

	if (*Global_262145.f_35149)
	{
		_STAT_SET_PACKED_BOOL(iParam0, bParam1, -1);
		return;
	}

	flag = true;
	num.f_2 = -1;
	num = func_109(iParam0);

	if (!func_107(num, bParam1 == _STAT_GET_PACKED_BOOL(iParam0, -1)))
	{
		flag = false;
	}
	else
	{
		num.f_1 = func_106(num);
	
		if (num.f_1 == 4)
			flag = false;
	
		if (flag && !func_104(iParam0, &num))
			flag = false;
	}

	_STAT_SET_PACKED_BOOL(iParam0, bParam1, -1);

	if (flag)
		func_40(&num);

	return;
}

void func_40(var uParam0) // Position - 0x1BDB (7131)
{
	uParam0->f_6 = func_87(*uParam0, uParam0->f_2);

	if (uParam0->f_6 > uParam0->f_2.f_1)
	{
		func_81(*uParam0);
	
		if (uParam0->f_2.f_1 == 0 && uParam0->f_6 > 0 && uParam0->f_2.f_2 > 1)
			func_79(uParam0->f_2);
	}

	if (uParam0->f_6 >= uParam0->f_2.f_2)
	{
		func_75(uParam0->f_2);
	
		if (func_67(*uParam0, uParam0->f_1, false, false))
		{
			func_50(*uParam0, uParam0->f_1);
			uParam0->f_7 = 1;
		
			if (!Global_2740191.f_7134.f_1 && func_106(*uParam0) >= uParam0->f_1)
			{
				Global_2740191.f_7134.f_1 = 1;
				Global_2740191.f_7134.f_2 = 1;
			}
		
			func_47();
		}
	
		func_46(*uParam0);
	}
	else if (func_41(uParam0))
	{
		func_46(*uParam0);
	}

	return;
}

BOOL func_41(var uParam0) // Position - 0x1CBF (7359)
{
	var unk;
	BOOL flag;

	unk = 10;
	flag = false;
	func_45(*uParam0, uParam0->f_2, &unk, &flag);

	if (uParam0->f_6 <= uParam0->f_2.f_1)
		return false;

	if (!flag)
		if (func_44(&unk, uParam0->f_2.f_1, uParam0->f_6, &(uParam0->f_2.f_3)))
			if (func_42(*uParam0, uParam0->f_2, uParam0->f_2.f_3))
				return false;
		else
			return false;

	return true;
}

BOOL func_42(var uParam0, var uParam1, var uParam2) // Position - 0x1D2F (7471)
{
	int num;

	num = func_43(uParam0, uParam1, uParam2);

	if (num != 54820)
		return _STAT_GET_PACKED_BOOL(num, -1);

	return false;
}

int func_43(int iParam0, int iParam1, int iParam2) // Position - 0x1D57 (7511)
{
	switch (iParam0)
	{
		case 18:
			switch (iParam1)
			{
				case 196:
					switch (iParam2)
					{
						case 0:
							return 41871;
					
						case 1:
							return 41872;
					
						case 2:
							return 41873;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 170:
					switch (iParam2)
					{
						case 0:
							return 41984;
					
						case 1:
							return 41985;
					
						case 2:
							return 41986;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 157:
					switch (iParam2)
					{
						case 0:
							return 41990;
					
						case 1:
							return 41991;
					
						case 2:
							return 41992;
					
						case 3:
							return 41993;
					}
					break;
			}
			break;
	}

	return 54820;
}

BOOL func_44(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1E70 (7792)
{
	int num;
	int i;

	num = 0;
	i = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		num = uParam0->[i];
	
		if (num != 0)
		{
			if (iParam1 < num && iParam2 >= num)
			{
				*uParam3 = i;
				return true;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x1EC2 (7874)
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_3[0] > 0)
		{
			for (j = 0; j < 10; j = j + 1)
			{
				uParam2->[j] = Global_1985099.f_1[i /*14*/].f_3[j];
			}
		
			return;
		}
	}

	uParam2->[0] = 1;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 82:
					*uParam3 = 1;
					break;
			
				case 76:
					uParam2->[0] = 10;
					break;
			
				case 77:
					uParam2->[0] = 100000;
					break;
			
				case 79:
					uParam2->[0] = 500000;
					break;
			
				case 81:
					uParam2->[0] = 14;
					break;
			
				case 83:
					uParam2->[0] = 2000000;
					break;
			
				case 84:
					uParam2->[0] = 500000;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 88:
				case 89:
				case 91:
				case 96:
					*uParam3 = 1;
					break;
			
				case 90:
					uParam2->[0] = 25000;
					break;
			
				case 92:
					uParam2->[0] = 2;
					break;
			
				case 94:
					uParam2->[0] = 9;
					break;
			
				case 95:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 97:
					uParam2->[0] = 100000;
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 4:
				case 6:
					*uParam3 = 1;
					break;
			
				case 5:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 101:
				case 102:
					*uParam3 = 1;
					break;
			
				case 103:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 104:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 105:
					uParam2->[0] = 3;
					break;
			
				case 106:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 107:
					uParam2->[0] = 10;
					break;
			
				case 108:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 24;
					break;
			
				case 109:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					break;
			
				case 110:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 12:
					*uParam3 = 1;
					break;
			
				case 13:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 15:
					uParam2->[0] = 9;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 116:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					uParam2->[3] = 250000;
					break;
			
				case 117:
				case 118:
				case 122:
					*uParam3 = 1;
					break;
			
				case 120:
					uParam2->[0] = 10;
					break;
			
				case 121:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					break;
			
				case 123:
					uParam2->[1] = 500000;
					uParam2->[2] = 1000000;
					uParam2->[3] = 2500000;
					uParam2->[4] = 5000000;
					uParam2->[5] = 10000000;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 301:
					*uParam3 = 1;
					break;
			
				case 302:
					uParam2->[0] = 15;
					break;
			
				case 303:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 304:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					break;
			
				case 183:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 184:
					*uParam3 = 1;
					break;
			
				case 185:
					*uParam3 = 1;
					break;
			
				case 186:
					*uParam3 = 1;
					break;
			
				case 187:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 188:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
					break;
			
				case 324:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			
				case 326:
					uParam2->[0] = 10;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 329:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 200;
					uParam2->[4] = 250;
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					break;
			
				case 340:
					*uParam3 = 1;
					break;
			
				case 341:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 342:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 343:
					*uParam3 = 1;
					break;
			
				case 344:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					*uParam3 = 1;
					break;
			
				case 125:
					break;
			
				case 126:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 127:
				case 128:
					*uParam3 = 1;
					break;
			
				case 129:
					uParam2->[1] = 250000;
					uParam2->[2] = 500000;
					uParam2->[3] = 1000000;
					break;
			
				case 130:
					*uParam3 = 1;
					break;
			
				case 131:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 132:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 133:
					*uParam3 = 1;
					break;
			
				case 134:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 135:
					*uParam3 = 1;
					break;
			
				case 136:
					uParam2->[1] = 2500000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					*uParam3 = 1;
					break;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					break;
			
				case 365:
					uParam2->[0] = 6;
					break;
			
				case 366:
					uParam2->[1] = 8;
					break;
			
				case 367:
					*uParam3 = 1;
					break;
			
				case 368:
					*uParam3 = 1;
					break;
			
				case 369:
					uParam2->[1] = 6;
					uParam2->[2] = 10;
					uParam2->[3] = 12;
					break;
			
				case 370:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 371:
					*uParam3 = 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 141:
				case 142:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 144:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 145:
					*uParam3 = 1;
					break;
			
				case 146:
					uParam2->[0] = 10;
					break;
			
				case 147:
				case 148:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 149:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 232:
				case 233:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 234:
					*uParam3 = 1;
					break;
			
				case 237:
					uParam2->[0] = 10;
					break;
			
				case 238:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 239:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					break;
			
				case 240:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 259:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 261:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 262:
					uParam2->[1] = 5;
					uParam2->[2] = 7;
					break;
			
				case 263:
					uParam2->[0] = 15;
					break;
			
				case 264:
					*uParam3 = 1;
					break;
			
				case 265:
					uParam2->[0] = 6;
					break;
			
				case 266:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 271:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 273:
					*uParam3 = 1;
					break;
			
				case 276:
					uParam2->[0] = 15;
					break;
			
				case 277:
					*uParam3 = 1;
					break;
			
				case 278:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			
				case 279:
					uParam2->[1] = 50000;
					uParam2->[2] = 100000;
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 247:
					uParam2->[1] = 2;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 248:
				case 251:
				case 252:
					*uParam3 = 1;
					break;
			
				case 250:
					uParam2->[0] = 11;
					break;
			
				case 253:
					uParam2->[1] = 5;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					uParam2->[4] = 100;
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 288:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 14;
					break;
			
				case 289:
					uParam2->[0] = 11;
					break;
			
				case 290:
				case 291:
					*uParam3 = 1;
					break;
			
				case 292:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 309:
				case 310:
				case 312:
				case 313:
					*uParam3 = 1;
					break;
			
				case 308:
					uParam2->[1] = 5;
					break;
			
				case 311:
					uParam2->[0] = 15;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 152:
					uParam2->[1] = 5;
					break;
			
				case 156:
				case 161:
					*uParam3 = 1;
					break;
			
				case 157:
					uParam2->[1] = 10000;
					uParam2->[2] = 50000;
					uParam2->[3] = 100000;
					uParam2->[4] = 250000;
					break;
			
				case 158:
				case 160:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					break;
			
				case 159:
					uParam2->[0] = 8;
					break;
			
				case 162:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 167:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 169:
					uParam2->[0] = 11;
					uParam2->[1] = 20;
					uParam2->[2] = 25;
					break;
			
				case 170:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			
				case 172:
					uParam2->[0] = 26;
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					break;
			
				case 173:
					uParam2->[1] = 50;
					uParam2->[2] = 100;
					uParam2->[3] = 250;
					uParam2->[4] = 500;
					uParam2->[5] = 1000;
					break;
			
				case 174:
					*uParam3 = 1;
					break;
			
				case 175:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					uParam2->[3] = 5000000;
					uParam2->[4] = 10000000;
					uParam2->[5] = 25000000;
					uParam2->[6] = 50000000;
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 194:
				case 197:
				case 198:
				case 199:
					*uParam3 = 1;
					break;
			
				case 195:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 196:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					uParam2->[3] = 40;
					break;
			
				case 200:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 25;
					uParam2->[4] = 50;
					break;
			
				case 201:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 208:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 13;
					break;
			
				case 209:
					*uParam3 = 1;
					break;
			
				case 210:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 211:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					break;
			
				case 212:
					uParam2->[1] = 1000000;
					uParam2->[2] = 2500000;
					break;
			
				case 213:
					uParam2->[1] = 100000;
					uParam2->[2] = 250000;
					uParam2->[3] = 500000;
					break;
			
				case 214:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 221:
				case 223:
				case 224:
				case 225:
					*uParam3 = 1;
					break;
			
				case 226:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					uParam2->[4] = 200;
					uParam2->[5] = 250;
					break;
			
				case 227:
					uParam2->[1] = 1000000;
					uParam2->[2] = 5000000;
					uParam2->[3] = 10000000;
					uParam2->[4] = 25000000;
					uParam2->[5] = 50000000;
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 331:
				case 332:
					*uParam3 = 1;
					break;
			
				case 333:
				case 334:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 335:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					uParam2->[3] = 15;
					uParam2->[4] = 20;
					break;
			
				case 336:
				case 337:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 316:
					*uParam3 = 1;
					break;
			
				case 317:
					uParam2->[1] = 5;
					uParam2->[2] = 10;
					break;
			
				case 318:
					uParam2->[1] = 10;
					uParam2->[2] = 20;
					break;
			
				case 319:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					break;
			
				case 320:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 354:
				case 357:
					*uParam3 = 1;
					break;
			
				case 355:
					uParam2->[0] = 10;
					break;
			
				case 356:
					uParam2->[1] = 25;
					uParam2->[2] = 50;
					uParam2->[3] = 100;
					break;
			
				case 358:
					uParam2->[1] = 10;
					uParam2->[2] = 25;
					uParam2->[3] = 50;
					break;
			}
			break;
	}

	return;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x313C (12604)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == uParam0.f_2)
		{
			if (uParam0.f_6 >= Global_2740191.f_7134.f_10[i /*8*/].f_6)
				Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
		
			return;
		}
		else if (Global_2740191.f_7134.f_10[i /*8*/].f_2 == -1)
		{
			Global_2740191.f_7134.f_10[i /*8*/] = { uParam0 };
			return;
		}
	}

	return;
}

void func_47() // Position - 0x31CC (12748)
{
	int num;
	BOOL flag;

	num = func_48();
	flag = false;

	if (num >= 5 && !_STAT_GET_PACKED_BOOL(41806, -1))
	{
		_STAT_SET_PACKED_BOOL(41806, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_5", 16);
		Global_2740191.f_7134.f_5 = 5;
		flag = true;
	}

	if (num >= 10 && !_STAT_GET_PACKED_BOOL(41807, -1))
	{
		_STAT_SET_PACKED_BOOL(41807, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_1", 16);
		Global_2740191.f_7134.f_5 = 10;
		flag = true;
	}

	if (num >= 15 && !_STAT_GET_PACKED_BOOL(41808, -1))
	{
		_STAT_SET_PACKED_BOOL(41808, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_15", 16);
		Global_2740191.f_7134.f_5 = 15;
		flag = true;
	}

	if (num >= 20 && !_STAT_GET_PACKED_BOOL(41809, -1))
	{
		_STAT_SET_PACKED_BOOL(41809, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_0", 16);
		Global_2740191.f_7134.f_5 = 20;
		flag = true;
	}

	if (num >= 25 && !_STAT_GET_PACKED_BOOL(41810, -1))
	{
		_STAT_SET_PACKED_BOOL(41810, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_SCM_O_7", 16);
		Global_2740191.f_7134.f_5 = 25;
		flag = true;
	}

	if (num >= 30 && !_STAT_GET_PACKED_BOOL(42053, -1))
	{
		_STAT_SET_PACKED_BOOL(42053, true, -1);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2740191.f_7134.f_6), "CLO_X7M_O_2", 16);
		Global_2740191.f_7134.f_5 = 30;
		flag = true;
	}

	if (flag)
		Global_2740191.f_7134.f_4 = 1;

	return;
}

int func_48() // Position - 0x3359 (13145)
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	ePedComponentType type;
	int num3;

	num = 0;
	i = 0;
	num2 = 0;
	type = PV_COMP_HEAD;

	for (i = 0; i < 5; i = i + 1)
	{
		type = func_261(func_49(i), -1);
	
		for (j = 0; j < 8; j = j + 1)
		{
			num2 = 0;
		
			for (k = 0; k < 4; k = k + 1)
			{
				num3 = (j * 4) + k;
			
				if (IS_BIT_SET(type, num3))
					num2 = num2 + 1;
			}
		
			if (num2 == 4)
				num = num + 1;
		}
	}

	return num;
}

int func_49(int iParam0) // Position - 0x33D9 (13273)
{
	switch (iParam0)
	{
		case 0:
			return 15562;
	
		case 1:
			return 15563;
	
		case 2:
			return 15564;
	
		case 3:
			return 15565;
	
		case 4:
			return 17293;
	
		default:
		
	}

	return 17293;
}

void func_50(int iParam0, int iParam1) // Position - 0x3427 (13351)
{
	int num;
	ePedComponentType address;
	int offset;

	num = func_66(iParam0);
	address = func_261(num, -1);
	offset = func_64(iParam0, iParam1);

	if (!IS_BIT_SET(address, offset))
	{
		func_57(iParam0, iParam1);
		MISC::SET_BIT(&address, offset);
		func_54(num, address, -1, true);
	}

	func_51(iParam0, iParam1);
	return;
}

void func_51(int iParam0, int iParam1) // Position - 0x3478 (13432)
{
	int num;
	int offset;

	num = func_52(iParam0);
	offset = func_64(iParam0, iParam1);

	if (!IS_BIT_SET(Global_1668419.f_33[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_33[num], offset);
		Global_1668419.f_42 = Global_1668419.f_42 + 1;
	}

	if (!IS_BIT_SET(Global_1668419.f_27[num], offset))
	{
		MISC::SET_BIT(&Global_1668419.f_27[num], offset);
		Global_1668419.f_41 = Global_1668419.f_41 + 1;
	}

	if (iParam1 != 3 && iParam1 != 4)
	{
		if (!IS_BIT_SET(Global_1668419.f_27[num], offset + 1))
		{
			MISC::SET_BIT(&Global_1668419.f_27[num], offset + 1);
			Global_1668419.f_41 = Global_1668419.f_41 + 1;
		}
	}

	return;
}

int func_52(int iParam0) // Position - 0x3533 (13619)
{
	return func_53(iParam0) / 8;
}

int func_53(int iParam0) // Position - 0x3544 (13636)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 3;
	
		case 6:
			return 4;
	
		case 7:
			return 5;
	
		case 8:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 16:
			return 10;
	
		case 17:
			return 11;
	
		case 18:
			return 12;
	
		case 19:
			return 13;
	
		case 20:
			return 14;
	
		case 21:
			return 15;
	
		case 22:
			return 16;
	
		case 23:
			return 17;
	
		case 24:
			return 18;
	
		case 25:
			return 19;
	
		case 26:
			return 20;
	
		case 27:
			return 21;
	
		case 28:
			return 22;
	
		case 29:
			return 23;
	
		case 30:
			return 24;
	
		case 31:
			return 25;
	
		case 32:
			return 26;
	
		case 33:
			return 27;
	
		case 12:
			return 28;
	
		case 1:
			return 29;
	
		case 11:
			return 30;
	
		case 10:
			return 31;
	
		case 0:
			return 32;
	
		case 9:
			return 33;
	
		default:
		
	}

	return 0;
}

void func_54(int iParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3) // Position - 0x36C2 (14018)
{
	Hash statName;

	if (iParam0 != 17296)
	{
		statName = func_55(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, epctParam1, bParam3);
	}

	return;
}

Hash func_55(int iParam0, int iParam1) // Position - 0x36F0 (14064)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_56(iParam1));
}

int func_56(int iParam0) // Position - 0x3705 (14085)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_11();
	
		if (num2 > -1)
		{
			Global_2752424 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2752424 = 1;
		}
	}

	return num;
}

void func_57(int iParam0, int iParam1) // Position - 0x3739 (14137)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num2;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_62();
	hash = func_61();
	hash2 = func_60(iParam1);
	hash3 = func_58(iParam0);
	num2 = -1;
	STATS::_PLAYSTATS_PH_ACTIVITY(entityCoords, num, hash, hash2, hash3, num2);
	return;
}

Hash func_58(int iParam0) // Position - 0x378C (14220)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "PROGRESS_HUB_PACK_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_59(iParam0), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_59(int iParam0) // Position - 0x37AC (14252)
{
	switch (iParam0)
	{
		case 0:
			return "FIELD_HANGAR";
	
		case 1:
			return "CHICKEN_FACTORY_RAID";
	
		case 2:
			return "PROJECT_OVERTHROW";
	
		case 3:
			return "OPERATION_PAPER_TRAIL";
	
		case 4:
			return "SUPERYACHT_LIFE";
	
		case 5:
			return "GERALDS_LAST_PLAY";
	
		case 6:
			return "PREMIUM_DELUXE_REPO_WORK";
	
		case 7:
			return "MADRAZO_DISPATCH_SERVICES";
	
		case 8:
			return "LOWRIDERS";
	
		case 9:
			return "BUSINESS_TYCOON";
	
		case 10:
			return "HACKER_DEN";
	
		case 11:
			return "BAIL_OFFICE";
	
		case 12:
			return "SALVAGE_YARD";
	
		case 13:
			return "LOS_SANTOS_DRUG_WARS";
	
		case 14:
			return "THE_CONTRACT";
	
		case 15:
			return "AFTER_HOURS";
	
		case 16:
			return "SMUGGLERS_RUN";
	
		case 17:
			return "GUNRUNNING";
	
		case 18:
			return "IMPORT_EXPORT";
	
		case 19:
			return "BIKERS";
	
		case 20:
			return "FAIFAF";
	
		case 21:
			return "LOS_SANTOS_TUNERS";
	
		case 22:
			return "DIAMOND_CASINO";
	
		case 23:
			return "CAYO_PERICO_HEIST";
	
		case 24:
			return "DIAMOND_CASINO_HEIST";
	
		case 25:
			return "DOOMSDAY_HEIST";
	
		case 26:
			return "HEISTS";
	
		case 27:
			return "ARENA_WAR";
	
		case 28:
			return "ADVERSARY_MODES";
	
		case 29:
			return "SURVIVALS";
	
		case 30:
			return "RACING";
	
		case 31:
			return "DEATHMATCHES";
	
		case 32:
			return "VEHICLE_ENTHUSIAST";
	
		case 33:
			return "WEAPONS_EXPERT";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_60(int iParam0) // Position - 0x3979 (14713)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_1");
	
		case 1:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_2");
	
		case 2:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_3");
	
		case 3:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_4");
	
		case 4:
			return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_MAX");
	
		default:
		
	}

	return MISC::GET_HASH_KEY("***INVALID***");
}

Hash func_61() // Position - 0x39E5 (14821)
{
	return MISC::GET_HASH_KEY("PROGRESS_HUB_TIER_COMPLETED");
}

int func_62() // Position - 0x39F5 (14837)
{
	if (Global_1668418 == 0)
		func_63();

	return Global_1668418;
}

void func_63() // Position - 0x3A0D (14861)
{
	Global_1668418 = MISC::GET_HASH_KEY(NETWORK::GET_CLOUD_TIME_AS_STRING()) + NETWORK::GET_CLOUD_TIME_AS_INT() + NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) + MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
	return;
}

int func_64(int iParam0, int iParam1) // Position - 0x3A3C (14908)
{
	if (iParam1 == 4)
		iParam1 = 3;

	return (func_65(iParam0) * 4) + iParam1;
}

int func_65(int iParam0) // Position - 0x3A58 (14936)
{
	return func_53(iParam0) % 8;
}

int func_66(int iParam0) // Position - 0x3A69 (14953)
{
	int num;

	num = func_52(iParam0);
	return func_49(num);
}

BOOL func_67(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3A7F (14975)
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	int i;
	int num4;

	flag = true;
	num = func_106(iParam0);

	if (num > iParam1)
		return true;

	if (bParam2)
		return false;

	num2 = func_73(iParam0, iParam1, 0);
	num3 = (num2 + func_70(iParam0, iParam1)) - 1;
	i = 0;

	for (i = num2; i <= num3; i = i + 1)
	{
		num4 = i;
	
		if (func_68(iParam0, num4))
			func_75(num4);
		else
			flag = false;
	
		if (!bParam3 && !flag)
			return false;
	}

	if (flag)
	{
		func_50(iParam0, iParam1);
		return true;
	}

	return false;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x3B1C (15132)
{
	ePedComponentType type;
	ePedComponentType type2;

	type = func_69(iParam0, iParam1);
	type2 = func_87(iParam0, iParam1);
	return type2 >= type;
}

ePedComponentType func_69(int iParam0, int iParam1) // Position - 0x3B3D (15165)
{
	int i;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_2 > PV_COMP_HEAD)
			return Global_1985099.f_1[i /*14*/].f_2;
	}

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
				case 73:
				case 74:
				case 75:
				case 78:
				case 80:
					return PV_COMP_BERD;
			
				case 82:
					return PV_COMP_FEET;
			
				case 76:
					return PV_COMP_DECL;
			
				case 77:
					return 100000;
			
				case 79:
					return 500000;
			
				case 81:
					return 14;
			
				case 83:
					return 2000000;
			
				case 84:
					return 500000;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
				case 86:
				case 87:
				case 93:
					return PV_COMP_BERD;
			
				case 88:
					return PV_COMP_HAND;
			
				case 89:
				case 92:
					return PV_COMP_HAIR;
			
				case 90:
					return 25000;
			
				case 91:
				case 96:
					return PV_COMP_LOWR;
			
				case 94:
					return PV_COMP_TASK;
			
				case 95:
					return 25;
			
				case 97:
					return 100000;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 7:
					return PV_COMP_BERD;
			
				case 4:
				case 6:
					return PV_COMP_FEET;
			
				case 5:
					return 5000000;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
				case 99:
				case 100:
					return PV_COMP_BERD;
			
				case 101:
					return PV_COMP_HAND;
			
				case 102:
					return PV_COMP_HAIR;
			
				case 103:
					return 250000;
			
				case 104:
				case 107:
					return PV_COMP_DECL;
			
				case 105:
					return PV_COMP_UPPR;
			
				case 106:
					return 25;
			
				case 108:
					return 24;
			
				case 109:
					return 1000000;
			
				case 110:
					return 5000000;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
				case 9:
				case 10:
				case 11:
				case 14:
					return PV_COMP_BERD;
			
				case 12:
					return PV_COMP_HAIR;
			
				case 13:
					return 5000000;
			
				case 15:
					return PV_COMP_TASK;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
				case 112:
				case 113:
				case 114:
				case 115:
				case 119:
					return PV_COMP_BERD;
			
				case 116:
					return 250000;
			
				case 117:
				case 118:
				case 122:
					return PV_COMP_HAND;
			
				case 120:
					return PV_COMP_DECL;
			
				case 121:
					return 2500000;
			
				case 123:
					return 10000000;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
				case 294:
				case 295:
				case 296:
				case 297:
				case 298:
				case 299:
				case 300:
					return PV_COMP_BERD;
			
				case 301:
					return PV_COMP_HAND;
			
				case 302:
					return 15;
			
				case 303:
					return 50000000;
			
				case 304:
					return PV_COMP_HAND;
			
				case 305:
					return PV_COMP_BERD;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
				case 17:
				case 19:
					return PV_COMP_BERD;
			
				case 18:
				case 20:
				case 21:
				case 22:
				case 23:
					return PV_COMP_FEET;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
				case 177:
				case 178:
				case 179:
				case 180:
				case 181:
				case 182:
					return PV_COMP_BERD;
			
				case 183:
					return 25;
			
				case 184:
					return PV_COMP_HAND;
			
				case 185:
					return PV_COMP_ACCS;
			
				case 186:
					return 18;
			
				case 187:
					return 25;
			
				case 188:
					return 25000000;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
				case 325:
				case 327:
				case 328:
				case 323:
					return PV_COMP_BERD;
			
				case 324:
					return 50;
			
				case 326:
					return 100;
			
				case 329:
					return 250;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
				case 339:
				case 345:
					return PV_COMP_BERD;
			
				case 340:
					return PV_COMP_HAND;
			
				case 341:
					return PV_COMP_DECL;
			
				case 342:
					return 20;
			
				case 343:
					return 25;
			
				case 344:
					return 50;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					return PV_COMP_FEET;
			
				case 125:
					return PV_COMP_BERD;
			
				case 126:
					return PV_COMP_DECL;
			
				case 127:
				case 128:
					return PV_COMP_HAND;
			
				case 129:
					return 1000000;
			
				case 130:
					return PV_COMP_DECL;
			
				case 131:
					return 25;
			
				case 132:
					return 100;
			
				case 133:
					return 24;
			
				case 134:
					return 100;
			
				case 135:
					return PV_COMP_JBIB;
			
				case 136:
					return 10000000;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
				case 25:
				case 27:
					return PV_COMP_BERD;
			
				case 26:
				case 28:
				case 29:
				case 30:
				case 31:
					return PV_COMP_FEET;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
				case 33:
				case 35:
					return PV_COMP_BERD;
			
				case 34:
				case 36:
				case 37:
				case 38:
				case 39:
					return PV_COMP_FEET;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
				case 41:
				case 43:
					return PV_COMP_BERD;
			
				case 42:
				case 44:
				case 45:
				case 46:
				case 47:
					return PV_COMP_FEET;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
				case 49:
				case 51:
					return PV_COMP_BERD;
			
				case 50:
				case 52:
				case 53:
				case 54:
				case 55:
					return PV_COMP_ACCS;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
				case 57:
				case 59:
					return PV_COMP_BERD;
			
				case 58:
				case 60:
				case 61:
				case 62:
				case 63:
					return PV_COMP_FEET;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
				case 65:
				case 67:
					return PV_COMP_BERD;
			
				case 66:
				case 68:
				case 69:
				case 70:
				case 71:
					return PV_COMP_ACCS;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					return PV_COMP_HAND;
			
				case 360:
				case 361:
				case 362:
				case 363:
				case 364:
					return PV_COMP_BERD;
			
				case 365:
					return PV_COMP_FEET;
			
				case 366:
					return PV_COMP_ACCS;
			
				case 367:
					return PV_COMP_DECL;
			
				case 368:
					return PV_COMP_DECL;
			
				case 369:
					return PV_COMP_MAX;
			
				case 370:
					return 50;
			
				case 371:
					return PV_COMP_HAND;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
				case 138:
				case 139:
				case 140:
				case 143:
					return PV_COMP_BERD;
			
				case 141:
				case 142:
				case 146:
					return PV_COMP_DECL;
			
				case 144:
					return 25;
			
				case 145:
					return PV_COMP_FEET;
			
				case 147:
				case 148:
					return 100;
			
				case 149:
					return 5000000;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
				case 229:
				case 230:
				case 231:
				case 235:
				case 236:
					return PV_COMP_BERD;
			
				case 232:
				case 233:
				case 237:
					return PV_COMP_DECL;
			
				case 234:
					return PV_COMP_ACCS;
			
				case 238:
					return 25;
			
				case 239:
					return 5000000;
			
				case 240:
					return 100;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
				case 255:
				case 256:
				case 257:
				case 258:
				case 260:
					return PV_COMP_BERD;
			
				case 259:
					return PV_COMP_DECL;
			
				case 261:
					return 25;
			
				case 262:
					return PV_COMP_TEEF;
			
				case 263:
					return 15;
			
				case 264:
					return PV_COMP_HAND;
			
				case 265:
					return PV_COMP_FEET;
			
				case 266:
					return 50000000;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
				case 268:
				case 269:
				case 270:
				case 272:
				case 275:
					return PV_COMP_BERD;
			
				case 271:
					return 25;
			
				case 273:
					return PV_COMP_UPPR;
			
				case 274:
					return PV_COMP_BERD;
			
				case 276:
					return 15;
			
				case 277:
					return PV_COMP_LOWR;
			
				case 278:
					return 50000000;
			
				case 279:
					return 100000;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
				case 242:
				case 243:
				case 244:
				case 245:
				case 246:
				case 249:
					return PV_COMP_BERD;
			
				case 247:
					return 13;
			
				case 248:
				case 251:
				case 252:
					return PV_COMP_FEET;
			
				case 250:
					return PV_COMP_JBIB;
			
				case 253:
					return 100;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
				case 281:
				case 282:
				case 283:
				case 284:
				case 285:
				case 286:
				case 287:
					return PV_COMP_BERD;
			
				case 288:
					return 14;
			
				case 289:
					return PV_COMP_DECL;
			
				case 290:
				case 291:
					return PV_COMP_UPPR;
			
				case 292:
					return 15;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
				case 307:
					return PV_COMP_BERD;
			
				case 308:
					return PV_COMP_HAND;
			
				case 309:
					return 25;
			
				case 310:
					return PV_COMP_TASK;
			
				case 311:
					return 15;
			
				case 312:
					return 20;
			
				case 313:
					return 50;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
				case 151:
				case 153:
				case 154:
				case 155:
					return PV_COMP_BERD;
			
				case 152:
					return PV_COMP_HAND;
			
				case 156:
					return PV_COMP_LOWR;
			
				case 157:
					return Global_262145.f_23684;
			
				case 158:
				case 160:
					return 25;
			
				case 159:
					return PV_COMP_ACCS;
			
				case 161:
					return PV_COMP_DECL;
			
				case 162:
					return 50000000;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
				case 164:
				case 165:
				case 166:
				case 168:
				case 171:
					return PV_COMP_BERD;
			
				case 167:
					return PV_COMP_DECL;
			
				case 169:
					return 25;
			
				case 170:
					return 50;
			
				case 172:
					return 100;
			
				case 173:
					return 1000;
			
				case 174:
					return PV_COMP_ACCS;
			
				case 175:
					return 50000000;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
				case 190:
				case 191:
				case 192:
				case 193:
					return PV_COMP_BERD;
			
				case 194:
					return PV_COMP_HAND;
			
				case 197:
				case 199:
					return PV_COMP_ACCS;
			
				case 198:
					return PV_COMP_DECL;
			
				case 195:
					return 25;
			
				case 196:
					return 40;
			
				case 200:
					return 50;
			
				case 201:
					return 25000000;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
				case 203:
				case 204:
				case 205:
				case 206:
				case 207:
					return PV_COMP_BERD;
			
				case 208:
					return 13;
			
				case 209:
					return PV_COMP_HAND;
			
				case 210:
					return PV_COMP_DECL;
			
				case 211:
					return 25000000;
			
				case 212:
					return 2500000;
			
				case 214:
					return 50;
			
				case 213:
					return 500000;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
				case 216:
				case 217:
				case 218:
				case 219:
				case 220:
				case 222:
					return PV_COMP_BERD;
			
				case 221:
					return PV_COMP_JBIB;
			
				case 223:
					return PV_COMP_HAND;
			
				case 224:
					return PV_COMP_DECL;
			
				case 225:
					return PV_COMP_FEET;
			
				case 226:
					return 250;
			
				case 227:
					return 50000000;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					return PV_COMP_BERD;
			
				case 331:
				case 332:
					return PV_COMP_HAND;
			
				case 333:
				case 334:
					return 25;
			
				case 335:
					return 20;
			
				case 336:
				case 337:
					return 50;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
				case 315:
				case 321:
					return PV_COMP_BERD;
			
				case 316:
					return PV_COMP_HAND;
			
				case 317:
					return PV_COMP_DECL;
			
				case 318:
					return 20;
			
				case 319:
					return 25;
			
				case 320:
					return 50;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
				case 347:
				case 348:
				case 349:
				case 350:
				case 351:
				case 352:
				case 353:
					return PV_COMP_BERD;
			
				case 354:
					return PV_COMP_HAND;
			
				case 355:
					return PV_COMP_DECL;
			
				case 356:
					return 100;
			
				case 357:
					return 15;
			
				case 358:
					return 50;
			}
			break;
	}

	return 123456789;
}

// Unhandled jump detected. Output should be considered invalid
int func_70(int iParam0, int iParam1) // Position - 0x4C8B (19595)
{
	if (func_71(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				return 3;
		
			case 1:
				return 3;
		
			case 2:
				return 3;
		
			case 3:
				return 4;
		
			default:
				goto 0x6F;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return 1;
		
			case 1:
				return 2;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_71(int iParam0) // Position - 0x4CFE (19710)
{
	int num;

	num = func_72(iParam0);

	switch (num)
	{
		case 0:
		case 4:
			return false;
	
		default:
		
	}

	return true;
}

int func_72(int iParam0) // Position - 0x4D26 (19750)
{
	switch (iParam0)
	{
		case 26:
		case 25:
		case 24:
		case 23:
			return 3;
	
		case 28:
		case 31:
		case 30:
		case 29:
		case 27:
			return 4;
	
		case 20:
		case 19:
		case 18:
		case 17:
		case 16:
		case 15:
		case 14:
		case 13:
		case 12:
		case 11:
		case 10:
		case 9:
			return 1;
	
		case 8:
		case 7:
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			return 0;
	
		case 22:
		case 21:
			return 2;
	
		case 33:
		case 32:
			return 5;
	}

	return 5;
}

int func_73(int iParam0, int iParam1, int iParam2) // Position - 0x4E2C (20012)
{
	int num;
	int i;
	int num2;

	num = iParam0;
	i = 0;
	num2 = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_74(i);
		}
	}

	num = iParam1;
	i = 0;

	if (num != 0)
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = num2 + func_70(iParam0, i);
		}
	}

	num2 = num2 + iParam2;
	return num2;
}

int func_74(int iParam0) // Position - 0x4E98 (20120)
{
	if (func_71(iParam0))
		return 13;

	return 8;
}

void func_75(int iParam0) // Position - 0x4EB3 (20147)
{
	int num;
	int num2;
	int offset;

	num = func_78(iParam0);
	num2 = func_77(num);
	offset = func_76(num);
	MISC::SET_BIT(&Global_1668419.f_8[num2], offset);
	Global_1668419.f_40 = Global_1668419.f_40 + 1;
	return;
}

int func_76(int iParam0) // Position - 0x4EF1 (20209)
{
	return iParam0 % 32;
}

int func_77(int iParam0) // Position - 0x4EFE (20222)
{
	return iParam0 / 32;
}

int func_78(int iParam0) // Position - 0x4F0B (20235)
{
	switch (iParam0)
	{
		case 16:
			return 0;
	
		case 17:
			return 1;
	
		case 18:
			return 2;
	
		case 19:
			return 3;
	
		case 20:
			return 4;
	
		case 21:
			return 5;
	
		case 22:
			return 6;
	
		case 23:
			return 7;
	
		case 24:
			return 8;
	
		case 25:
			return 9;
	
		case 26:
			return 10;
	
		case 27:
			return 11;
	
		case 28:
			return 12;
	
		case 29:
			return 13;
	
		case 30:
			return 14;
	
		case 31:
			return 15;
	
		case 32:
			return 16;
	
		case 33:
			return 17;
	
		case 34:
			return 18;
	
		case 35:
			return 19;
	
		case 36:
			return 20;
	
		case 37:
			return 21;
	
		case 38:
			return 22;
	
		case 39:
			return 23;
	
		case 40:
			return 24;
	
		case 41:
			return 25;
	
		case 42:
			return 26;
	
		case 43:
			return 27;
	
		case 44:
			return 28;
	
		case 45:
			return 29;
	
		case 46:
			return 30;
	
		case 47:
			return 31;
	
		case 48:
			return 32;
	
		case 49:
			return 33;
	
		case 50:
			return 34;
	
		case 51:
			return 35;
	
		case 52:
			return 36;
	
		case 53:
			return 37;
	
		case 54:
			return 38;
	
		case 55:
			return 39;
	
		case 56:
			return 40;
	
		case 57:
			return 41;
	
		case 58:
			return 42;
	
		case 59:
			return 43;
	
		case 60:
			return 44;
	
		case 61:
			return 45;
	
		case 62:
			return 46;
	
		case 63:
			return 47;
	
		case 64:
			return 48;
	
		case 65:
			return 49;
	
		case 66:
			return 50;
	
		case 67:
			return 51;
	
		case 68:
			return 52;
	
		case 69:
			return 53;
	
		case 70:
			return 54;
	
		case 71:
			return 55;
	
		case 124:
			return 56;
	
		case 125:
			return 57;
	
		case 126:
			return 58;
	
		case 127:
			return 59;
	
		case 128:
			return 60;
	
		case 129:
			return 61;
	
		case 130:
			return 62;
	
		case 131:
			return 63;
	
		case 132:
			return 64;
	
		case 133:
			return 65;
	
		case 134:
			return 66;
	
		case 135:
			return 67;
	
		case 136:
			return 68;
	
		case 137:
			return 69;
	
		case 138:
			return 70;
	
		case 139:
			return 71;
	
		case 140:
			return 72;
	
		case 141:
			return 73;
	
		case 142:
			return 74;
	
		case 143:
			return 75;
	
		case 144:
			return 76;
	
		case 145:
			return 77;
	
		case 146:
			return 78;
	
		case 147:
			return 79;
	
		case 148:
			return 80;
	
		case 149:
			return 81;
	
		case 150:
			return 82;
	
		case 151:
			return 83;
	
		case 152:
			return 84;
	
		case 153:
			return 85;
	
		case 154:
			return 86;
	
		case 155:
			return 87;
	
		case 156:
			return 88;
	
		case 157:
			return 89;
	
		case 158:
			return 90;
	
		case 159:
			return 91;
	
		case 160:
			return 92;
	
		case 161:
			return 93;
	
		case 162:
			return 94;
	
		case 163:
			return 95;
	
		case 164:
			return 96;
	
		case 165:
			return 97;
	
		case 166:
			return 98;
	
		case 167:
			return 99;
	
		case 168:
			return 100;
	
		case 169:
			return 101;
	
		case 170:
			return 102;
	
		case 171:
			return 103;
	
		case 172:
			return 104;
	
		case 173:
			return 105;
	
		case 174:
			return 106;
	
		case 175:
			return 107;
	
		case 176:
			return 108;
	
		case 177:
			return 109;
	
		case 178:
			return 110;
	
		case 179:
			return 111;
	
		case 180:
			return 112;
	
		case 181:
			return 113;
	
		case 182:
			return 114;
	
		case 183:
			return 115;
	
		case 184:
			return 116;
	
		case 185:
			return 117;
	
		case 186:
			return 118;
	
		case 187:
			return 119;
	
		case 188:
			return 120;
	
		case 189:
			return 121;
	
		case 190:
			return 122;
	
		case 191:
			return 123;
	
		case 192:
			return 124;
	
		case 193:
			return 125;
	
		case 194:
			return 126;
	
		case 195:
			return 127;
	
		case 196:
			return 128;
	
		case 197:
			return 129;
	
		case 198:
			return 130;
	
		case 199:
			return 131;
	
		case 200:
			return 132;
	
		case 201:
			return 133;
	
		case 202:
			return 134;
	
		case 203:
			return 135;
	
		case 204:
			return 136;
	
		case 205:
			return 137;
	
		case 206:
			return 138;
	
		case 207:
			return 139;
	
		case 208:
			return 140;
	
		case 209:
			return 141;
	
		case 210:
			return 142;
	
		case 211:
			return 143;
	
		case 212:
			return 144;
	
		case 213:
			return 145;
	
		case 214:
			return 146;
	
		case 215:
			return 147;
	
		case 216:
			return 148;
	
		case 217:
			return 149;
	
		case 218:
			return 150;
	
		case 219:
			return 151;
	
		case 220:
			return 152;
	
		case 221:
			return 153;
	
		case 222:
			return 154;
	
		case 223:
			return 155;
	
		case 224:
			return 156;
	
		case 225:
			return 157;
	
		case 226:
			return 158;
	
		case 227:
			return 159;
	
		case 228:
			return 160;
	
		case 229:
			return 161;
	
		case 230:
			return 162;
	
		case 231:
			return 163;
	
		case 232:
			return 164;
	
		case 233:
			return 165;
	
		case 234:
			return 166;
	
		case 235:
			return 167;
	
		case 236:
			return 168;
	
		case 237:
			return 169;
	
		case 238:
			return 170;
	
		case 239:
			return 171;
	
		case 240:
			return 172;
	
		case 241:
			return 173;
	
		case 242:
			return 174;
	
		case 243:
			return 175;
	
		case 244:
			return 176;
	
		case 245:
			return 177;
	
		case 246:
			return 178;
	
		case 247:
			return 179;
	
		case 248:
			return 180;
	
		case 249:
			return 181;
	
		case 250:
			return 182;
	
		case 251:
			return 183;
	
		case 252:
			return 184;
	
		case 253:
			return 185;
	
		case 254:
			return 186;
	
		case 255:
			return 187;
	
		case 256:
			return 188;
	
		case 257:
			return 189;
	
		case 258:
			return 190;
	
		default:
		
	}

	switch (iParam0)
	{
		case 259:
			return 191;
	
		case 260:
			return 192;
	
		case 261:
			return 193;
	
		case 262:
			return 194;
	
		case 263:
			return 195;
	
		case 264:
			return 196;
	
		case 265:
			return 197;
	
		case 266:
			return 198;
	
		case 267:
			return 199;
	
		case 268:
			return 200;
	
		case 269:
			return 201;
	
		case 270:
			return 202;
	
		case 271:
			return 203;
	
		case 272:
			return 204;
	
		case 273:
			return 205;
	
		case 274:
			return 206;
	
		case 275:
			return 207;
	
		case 276:
			return 208;
	
		case 277:
			return 209;
	
		case 278:
			return 210;
	
		case 279:
			return 211;
	
		case 280:
			return 212;
	
		case 281:
			return 213;
	
		case 282:
			return 214;
	
		case 283:
			return 215;
	
		case 284:
			return 216;
	
		case 285:
			return 217;
	
		case 286:
			return 218;
	
		case 287:
			return 219;
	
		case 288:
			return 220;
	
		case 289:
			return 221;
	
		case 290:
			return 222;
	
		case 291:
			return 223;
	
		case 292:
			return 224;
	
		case 293:
			return 225;
	
		case 294:
			return 226;
	
		case 295:
			return 227;
	
		case 296:
			return 228;
	
		case 297:
			return 229;
	
		case 298:
			return 230;
	
		case 299:
			return 231;
	
		case 300:
			return 232;
	
		case 301:
			return 233;
	
		case 302:
			return 234;
	
		case 303:
			return 235;
	
		case 304:
			return 236;
	
		case 305:
			return 237;
	
		case 306:
			return 238;
	
		case 307:
			return 239;
	
		case 308:
			return 240;
	
		case 309:
			return 241;
	
		case 310:
			return 242;
	
		case 311:
			return 243;
	
		case 312:
			return 244;
	
		case 313:
			return 245;
	
		case 314:
			return 246;
	
		case 315:
			return 247;
	
		case 316:
			return 248;
	
		case 317:
			return 249;
	
		case 318:
			return 250;
	
		case 319:
			return 251;
	
		case 320:
			return 252;
	
		case 321:
			return 253;
	
		case 322:
			return 254;
	
		case 323:
			return 255;
	
		case 324:
			return 256;
	
		case 325:
			return 257;
	
		case 326:
			return 258;
	
		case 327:
			return 259;
	
		case 328:
			return 260;
	
		case 329:
			return 261;
	
		case 330:
			return 262;
	
		case 331:
			return 263;
	
		case 332:
			return 264;
	
		case 333:
			return 265;
	
		case 334:
			return 266;
	
		case 335:
			return 267;
	
		case 336:
			return 268;
	
		case 337:
			return 269;
	
		case 338:
			return 270;
	
		case 339:
			return 271;
	
		case 340:
			return 272;
	
		case 341:
			return 273;
	
		case 342:
			return 274;
	
		case 343:
			return 275;
	
		case 344:
			return 276;
	
		case 345:
			return 277;
	
		case 346:
			return 278;
	
		case 347:
			return 279;
	
		case 348:
			return 280;
	
		case 349:
			return 281;
	
		case 350:
			return 282;
	
		case 351:
			return 283;
	
		case 352:
			return 284;
	
		case 353:
			return 285;
	
		case 354:
			return 286;
	
		case 355:
			return 287;
	
		case 356:
			return 288;
	
		case 357:
			return 289;
	
		case 358:
			return 290;
	
		case 359:
			return 291;
	
		case 360:
			return 292;
	
		case 361:
			return 293;
	
		case 362:
			return 294;
	
		case 363:
			return 295;
	
		case 364:
			return 296;
	
		case 365:
			return 297;
	
		case 366:
			return 298;
	
		case 367:
			return 299;
	
		case 368:
			return 300;
	
		case 369:
			return 301;
	
		case 370:
			return 302;
	
		case 371:
			return 303;
	
		case 111:
			return 304;
	
		case 112:
			return 305;
	
		case 113:
			return 306;
	
		case 114:
			return 307;
	
		case 115:
			return 308;
	
		case 116:
			return 309;
	
		case 117:
			return 310;
	
		case 118:
			return 311;
	
		case 119:
			return 312;
	
		case 120:
			return 313;
	
		case 121:
			return 314;
	
		case 122:
			return 315;
	
		case 123:
			return 316;
	
		case 8:
			return 317;
	
		case 9:
			return 318;
	
		case 10:
			return 319;
	
		case 11:
			return 320;
	
		case 12:
			return 321;
	
		case 13:
			return 322;
	
		case 14:
			return 323;
	
		case 15:
			return 324;
	
		case 98:
			return 325;
	
		case 99:
			return 326;
	
		case 100:
			return 327;
	
		case 101:
			return 328;
	
		case 102:
			return 329;
	
		case 103:
			return 330;
	
		case 104:
			return 331;
	
		case 105:
			return 332;
	
		case 106:
			return 333;
	
		case 107:
			return 334;
	
		case 108:
			return 335;
	
		case 109:
			return 336;
	
		case 110:
			return 337;
	
		case 85:
			return 338;
	
		case 86:
			return 339;
	
		case 87:
			return 340;
	
		case 88:
			return 341;
	
		case 89:
			return 342;
	
		case 90:
			return 343;
	
		case 91:
			return 344;
	
		case 92:
			return 345;
	
		case 93:
			return 346;
	
		case 94:
			return 347;
	
		case 95:
			return 348;
	
		case 96:
			return 349;
	
		case 97:
			return 350;
	
		case 0:
			return 351;
	
		case 1:
			return 352;
	
		case 2:
			return 353;
	
		case 3:
			return 354;
	
		case 4:
			return 355;
	
		case 5:
			return 356;
	
		case 6:
			return 357;
	
		case 7:
			return 358;
	
		case 72:
			return 359;
	
		case 73:
			return 360;
	
		case 74:
			return 361;
	
		case 75:
			return 362;
	
		case 76:
			return 363;
	
		case 77:
			return 364;
	
		case 78:
			return 365;
	
		case 79:
			return 366;
	
		case 80:
			return 367;
	
		case 81:
			return 368;
	
		case 82:
			return 369;
	
		case 83:
			return 370;
	
		case 84:
			return 371;
	
		default:
		
	}

	return 0;
}

void func_79(var uParam0) // Position - 0x5F8A (24458)
{
	int num;
	int num2;
	int num3;
	int offset;

	num = func_78(uParam0);
	num2 = func_80(num);

	if (num2 != -1)
	{
		num3 = func_77(num2);
		offset = func_76(num2);
		MISC::SET_BIT(&Global_1668419[num3], offset);
	}

	return;
}

int func_80(int iParam0) // Position - 0x5FC6 (24518)
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		case 4:
			return 1;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 4;
	
		case 10:
			return 5;
	
		case 12:
			return 6;
	
		case 13:
			return 7;
	
		case 14:
			return 8;
	
		case 15:
			return 9;
	
		case 18:
			return 10;
	
		case 20:
			return 11;
	
		case 21:
			return 12;
	
		case 22:
			return 13;
	
		case 23:
			return 14;
	
		case 26:
			return 15;
	
		case 28:
			return 16;
	
		case 29:
			return 17;
	
		case 30:
			return 18;
	
		case 31:
			return 19;
	
		case 34:
			return 20;
	
		case 36:
			return 21;
	
		case 37:
			return 22;
	
		case 38:
			return 23;
	
		case 39:
			return 24;
	
		case 42:
			return 25;
	
		case 44:
			return 26;
	
		case 45:
			return 27;
	
		case 46:
			return 28;
	
		case 47:
			return 29;
	
		case 50:
			return 30;
	
		case 52:
			return 31;
	
		case 53:
			return 32;
	
		case 54:
			return 33;
	
		case 55:
			return 34;
	
		case 56:
			return 35;
	
		case 58:
			return 36;
	
		case 59:
			return 37;
	
		case 60:
			return 38;
	
		case 61:
			return 39;
	
		case 62:
			return 40;
	
		case 63:
			return 41;
	
		case 64:
			return 42;
	
		case 65:
			return 43;
	
		case 66:
			return 44;
	
		case 67:
			return 45;
	
		case 68:
			return 46;
	
		case 73:
			return 47;
	
		case 74:
			return 48;
	
		case 76:
			return 49;
	
		case 77:
			return 50;
	
		case 78:
			return 51;
	
		case 79:
			return 52;
	
		case 80:
			return 53;
	
		case 81:
			return 54;
	
		case 84:
			return 55;
	
		case 88:
			return 56;
	
		case 89:
			return 57;
	
		case 90:
			return 58;
	
		case 91:
			return 59;
	
		case 92:
			return 60;
	
		case 93:
			return 61;
	
		case 94:
			return 62;
	
		case 99:
			return 63;
	
		case 101:
			return 64;
	
		case 102:
			return 65;
	
		case 104:
			return 66;
	
		case 105:
			return 67;
	
		case 106:
			return 68;
	
		case 107:
			return 69;
	
		case 115:
			return 70;
	
		case 116:
			return 71;
	
		case 117:
			return 72;
	
		case 118:
			return 73;
	
		case 119:
			return 74;
	
		case 120:
			return 75;
	
		case 126:
			return 76;
	
		case 127:
			return 77;
	
		case 128:
			return 78;
	
		case 129:
			return 79;
	
		case 130:
			return 80;
	
		case 131:
			return 81;
	
		case 132:
			return 82;
	
		case 133:
			return 83;
	
		case 140:
			return 84;
	
		case 141:
			return 85;
	
		case 142:
			return 86;
	
		case 143:
			return 87;
	
		case 144:
			return 88;
	
		case 145:
			return 89;
	
		case 146:
			return 90;
	
		case 153:
			return 91;
	
		case 155:
			return 92;
	
		case 156:
			return 93;
	
		case 157:
			return 94;
	
		case 158:
			return 95;
	
		case 159:
			return 96;
	
		case 164:
			return 97;
	
		case 165:
			return 98;
	
		case 166:
			return 99;
	
		case 169:
			return 100;
	
		case 170:
			return 101;
	
		case 171:
			return 102;
	
		case 172:
			return 103;
	
		case 179:
			return 104;
	
		case 180:
			return 105;
	
		case 182:
			return 106;
	
		case 183:
			return 107;
	
		case 184:
			return 108;
	
		case 185:
			return 109;
	
		case 191:
			return 110;
	
		case 193:
			return 111;
	
		case 194:
			return 112;
	
		case 195:
			return 113;
	
		case 196:
			return 114;
	
		case 197:
			return 115;
	
		case 198:
			return 116;
	
		case 203:
			return 117;
	
		case 205:
			return 118;
	
		case 208:
			return 119;
	
		case 209:
			return 120;
	
		case 210:
			return 121;
	
		case 211:
			return 122;
	
		case 220:
			return 123;
	
		case 221:
			return 124;
	
		case 222:
			return 125;
	
		case 223:
			return 126;
	
		case 224:
			return 127;
	
		case 233:
			return 128;
	
		case 234:
			return 129;
	
		case 235:
			return 130;
	
		case 236:
			return 131;
	
		case 240:
			return 132;
	
		case 241:
			return 133;
	
		case 242:
			return 134;
	
		case 243:
			return 135;
	
		case 244:
			return 136;
	
		case 245:
			return 137;
	
		case 248:
			return 138;
	
		case 249:
			return 139;
	
		case 250:
			return 140;
	
		case 251:
			return 141;
	
		case 252:
			return 142;
	
		case 256:
			return 143;
	
		case 258:
			return 144;
	
		case 261:
			return 145;
	
		case 263:
			return 146;
	
		case 264:
			return 147;
	
		case 265:
			return 148;
	
		case 266:
			return 149;
	
		case 267:
			return 150;
	
		case 268:
			return 151;
	
		case 269:
			return 152;
	
		case 272:
			return 153;
	
		case 273:
			return 154;
	
		case 274:
			return 155;
	
		case 275:
			return 156;
	
		case 276:
			return 157;
	
		case 286:
			return 158;
	
		case 287:
			return 159;
	
		case 288:
			return 160;
	
		case 289:
			return 161;
	
		case 290:
			return 162;
	
		case 291:
			return 163;
	
		case 297:
			return 164;
	
		case 298:
			return 165;
	
		case 299:
			return 166;
	
		case 300:
			return 167;
	
		case 301:
			return 168;
	
		case 302:
			return 169;
	
		case 303:
			return 170;
	
		case 309:
			return 171;
	
		case 310:
			return 172;
	
		case 311:
			return 173;
	
		case 313:
			return 174;
	
		case 314:
			return 175;
	
		case 315:
			return 176;
	
		case 316:
			return 177;
	
		case 321:
			return 178;
	
		case 322:
			return 179;
	
		case 324:
			return 180;
	
		case 328:
			return 181;
	
		case 329:
			return 182;
	
		case 330:
			return 183;
	
		case 331:
			return 184;
	
		case 332:
			return 185;
	
		case 333:
			return 186;
	
		case 334:
			return 187;
	
		case 335:
			return 188;
	
		case 336:
			return 189;
	
		case 337:
			return 190;
	}

	switch (iParam0)
	{
		case 341:
			return 191;
	
		case 342:
			return 192;
	
		case 343:
			return 193;
	
		case 344:
			return 194;
	
		case 345:
			return 195;
	
		case 347:
			return 196;
	
		case 348:
			return 197;
	
		case 349:
			return 198;
	
		case 350:
			return 199;
	
		case 355:
			return 200;
	
		case 356:
			return 201;
	
		case 357:
			return 202;
	
		case 363:
			return 203;
	
		case 364:
			return 204;
	
		case 366:
			return 205;
	
		case 368:
			return 206;
	
		case 369:
			return 207;
	
		case 370:
			return 208;
	
		case 371:
			return 209;
	}

	return -1;
}

void func_81(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x6B51 (27473)
{
	var entityCoords;
	int num;
	Hash hash;
	Hash hash2;
	Any any;
	Any any2;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	num = func_62();
	hash = func_86(uParam0.f_6 >= uParam0.f_2.f_2);
	hash2 = func_82(uParam0, uParam0.f_1, uParam0.f_2);
	any = uParam0.f_6;
	any2 = uParam0.f_2.f_2;
	STATS::_PLAYSTATS_PH_ACTIVITY(entityCoords, num, hash, hash2, any, any2);
	return;
}

Hash func_82(int iParam0, var uParam1, int iParam2) // Position - 0x6BBA (27578)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "P_HUB_OBJ_", 64);

	switch (func_72(iParam0))
	{
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "H_", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SM_", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "B_", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "CM_", 64);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SS_", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "M_", 64);
			break;
	}

	switch (iParam0)
	{
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "SUMMER2023", 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "PAPERTRAIL", 64);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "SUPERYACHT", 64);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "GERALDS", 64);
			break;
	
		case 6:
			TEXT_LABEL_APPEND_STRING(&unk, "SIMEON", 64);
			break;
	
		case 7:
			TEXT_LABEL_APPEND_STRING(&unk, "MADRAZO", 64);
			break;
	
		case 8:
			TEXT_LABEL_APPEND_STRING(&unk, "LOWRIDERS", 64);
			break;
	
		case 13:
			TEXT_LABEL_APPEND_STRING(&unk, "LSDW", 64);
			break;
	
		case 14:
			TEXT_LABEL_APPEND_STRING(&unk, "CONTRACT", 64);
			break;
	
		case 15:
			TEXT_LABEL_APPEND_STRING(&unk, "AFTERHOURS", 64);
			break;
	
		case 16:
			TEXT_LABEL_APPEND_STRING(&unk, "SMUGGLER", 64);
			break;
	
		case 17:
			TEXT_LABEL_APPEND_STRING(&unk, "GUNRUNNING", 64);
			break;
	
		case 18:
			TEXT_LABEL_APPEND_STRING(&unk, "IMPORTEXPORT", 64);
			break;
	
		case 19:
			TEXT_LABEL_APPEND_STRING(&unk, "BIKERS", 64);
			break;
	
		case 20:
			TEXT_LABEL_APPEND_STRING(&unk, "FAIFAF", 64);
			break;
	
		case 21:
			TEXT_LABEL_APPEND_STRING(&unk, "TUNERS", 64);
			break;
	
		case 22:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 23:
			TEXT_LABEL_APPEND_STRING(&unk, "CAYOPERICO", 64);
			break;
	
		case 24:
			TEXT_LABEL_APPEND_STRING(&unk, "DIAMONDCASINO", 64);
			break;
	
		case 25:
			TEXT_LABEL_APPEND_STRING(&unk, "DOOMSDAY", 64);
			break;
	
		case 26:
			TEXT_LABEL_APPEND_STRING(&unk, "HEISTS", 64);
			break;
	
		case 27:
			TEXT_LABEL_APPEND_STRING(&unk, "ARENAWAR", 64);
			break;
	
		case 28:
			TEXT_LABEL_APPEND_STRING(&unk, "ADVERSARY", 64);
			break;
	
		case 29:
			TEXT_LABEL_APPEND_STRING(&unk, "SURVIVALS", 64);
			break;
	
		case 30:
			TEXT_LABEL_APPEND_STRING(&unk, "RACING", 64);
			break;
	
		case 31:
			TEXT_LABEL_APPEND_STRING(&unk, "DEATHMATCHES", 64);
			break;
	
		case 32:
			TEXT_LABEL_APPEND_STRING(&unk, "VEHICLE", 64);
			break;
	
		case 33:
			TEXT_LABEL_APPEND_STRING(&unk, "WEAPON", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "CHICKEN", 64);
			break;
	
		case 12:
			TEXT_LABEL_APPEND_STRING(&unk, "SALVAGE", 64);
			break;
	
		case 11:
			TEXT_LABEL_APPEND_STRING(&unk, "BAIL_OFFICE", 64);
			break;
	
		case 10:
			TEXT_LABEL_APPEND_STRING(&unk, "HACKER_DEN", 64);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "FIELD_HANGAR", 64);
			break;
	
		case 9:
			TEXT_LABEL_APPEND_STRING(&unk, "BUSINESS_TYCOON", 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_85(uParam1), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OBJ_", 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_83((iParam2 - func_73(iParam0, uParam1, 0)) + 1), 64);
	return MISC::GET_HASH_KEY(&unk);
}

char* func_83(int iParam0) // Position - 0x6EBA (28346)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 16);
	return func_84(&unk);
}

char* func_84(var uParam0) // Position - 0x6ED6 (28374)
{
	return uParam0;
}

char* func_85(int iParam0) // Position - 0x6EE0 (28384)
{
	switch (iParam0)
	{
		case 0:
			return "TIER_1";
	
		case 1:
			return "TIER_2";
	
		case 2:
			return "TIER_3";
	
		case 3:
			return "TIER_4";
	
		case 4:
			return "TIER_MAX";
	
		default:
		
	}

	return "***INVALID***";
}

Hash func_86(BOOL bParam0) // Position - 0x6F34 (28468)
{
	if (bParam0)
		return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_COMPLETED");

	return MISC::GET_HASH_KEY("PROGRESS_HUB_OBJECTIVE_UPDATED");
}

ePedComponentType func_87(int iParam0, int iParam1) // Position - 0x6F57 (28503)
{
	int i;
	ePedComponentType type;
	BOOL flag;
	int j;

	i = 0;

	for (i = 0; i < Global_1985099; i = i + 1)
	{
		if (Global_1985099.f_1[i /*14*/] == iParam1 && Global_1985099.f_1[i /*14*/].f_1 > PV_COMP_HEAD)
			return Global_1985099.f_1[i /*14*/].f_1;
	}

	type = PV_COMP_HEAD;
	flag = false;

	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 72:
					if (_STAT_GET_PACKED_BOOL(54653, -1))
						type = PV_COMP_BERD;
					break;
			
				case 73:
					flag = func_261(13035, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 74:
					flag = _STAT_GET_PACKED_INT(24928, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 75:
					flag = func_261(13037, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 76:
					type = _STAT_GET_PACKED_INT(24928, -1);
					break;
			
				case 77:
					type = func_261(13040, -1);
					break;
			
				case 78:
					flag = func_261(13036, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 79:
					type = func_261(13066, -1);
					break;
			
				case 80:
					if (_STAT_GET_PACKED_BOOL(28313, -1) || _STAT_GET_PACKED_BOOL(28314, -1) || _STAT_GET_PACKED_BOOL(28315, -1) || _STAT_GET_PACKED_BOOL(28316, -1) || _STAT_GET_PACKED_BOOL(28317, -1) || _STAT_GET_PACKED_BOOL(28318, -1))
						type = PV_COMP_BERD;
					break;
			
				case 81:
					type = _STAT_GET_PACKED_INT(24929, -1);
					break;
			
				case 82:
					if (_STAT_GET_PACKED_BOOL(28313, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28314, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28315, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28316, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28317, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28318, -1))
						type = type + 1;
					break;
			
				case 83:
					type = func_261(13066, -1);
					break;
			
				case 84:
					type = func_261(13040, -1);
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 85:
					flag = func_261(12442, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 86:
					if (_STAT_GET_PACKED_BOOL(9539, -1))
						type = PV_COMP_BERD;
					break;
			
				case 87:
					flag = _STAT_GET_PACKED_INT(24903, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 88:
					type = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 89:
					type = _STAT_GET_PACKED_INT(24904, -1);
					break;
			
				case 90:
					type = func_261(12459, -1);
					break;
			
				case 91:
					flag = func_261(12444, -1);
				
					if (IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 6))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 7) || IS_BIT_SET(flag, 8))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 9) || IS_BIT_SET(flag, 10))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 11) || IS_BIT_SET(flag, 12))
						type = type + 1;
					break;
			
				case 92:
					if (_STAT_GET_PACKED_BOOL(9549, -1))
					{
						type = PV_COMP_HAIR;
					}
					else
					{
						type = type + func_102(_STAT_GET_PACKED_BOOL(9547, -1));
						type = type + func_102(_STAT_GET_PACKED_BOOL(9548, -1));
					
						if (type == PV_COMP_HAIR)
							_STAT_SET_PACKED_BOOL(9549, true, -1);
					}
					break;
			
				case 93:
					if (_STAT_GET_PACKED_BOOL(9542, -1))
						type = PV_COMP_BERD;
					break;
			
				case 94:
					type = _STAT_GET_PACKED_INT(24905, -1);
					break;
			
				case 95:
					type = _STAT_GET_PACKED_INT(24903, -1);
					break;
			
				case 96:
					if (_STAT_GET_PACKED_BOOL(9543, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9544, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9545, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(9546, -1))
						type = type + 1;
					break;
			
				case 97:
					type = func_261(12459, -1);
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					if (_STAT_GET_PACKED_BOOL(51280, -1))
						type = PV_COMP_BERD;
					break;
			
				case 1:
					if (_STAT_GET_PACKED_BOOL(51285, -1))
						type = PV_COMP_BERD;
					break;
			
				case 2:
					if (_STAT_GET_PACKED_BOOL(51278, -1))
						type = PV_COMP_BERD;
					break;
			
				case 3:
					if (_STAT_GET_PACKED_BOOL(51286, -1) || _STAT_GET_PACKED_BOOL(51287, -1) || _STAT_GET_PACKED_BOOL(51288, -1) || _STAT_GET_PACKED_BOOL(51289, -1) || _STAT_GET_PACKED_BOOL(51290, -1) || _STAT_GET_PACKED_BOOL(51291, -1))
						type = PV_COMP_BERD;
					break;
			
				case 4:
					if (_STAT_GET_PACKED_BOOL(51286, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51287, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51288, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51289, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51290, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51291, -1))
						type = type + 1;
					break;
			
				case 5:
					type = func_261(12460, -1);
					break;
			
				case 6:
					if (_STAT_GET_PACKED_BOOL(51292, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51293, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51294, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51295, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51296, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51297, -1))
						type = type + 1;
					break;
			
				case 7:
					if (_STAT_GET_PACKED_BOOL(51279, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 98:
					flag = func_261(12241, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 99:
					if (_STAT_GET_PACKED_BOOL(9537, -1))
						type = PV_COMP_BERD;
					break;
			
				case 100:
					if (_STAT_GET_PACKED_BOOL(7639, -1))
						type = PV_COMP_BERD;
					break;
			
				case 101:
					type = _STAT_GET_PACKED_INT(7669, -1);
					break;
			
				case 102:
					type = _STAT_GET_PACKED_INT(7672, -1);
					break;
			
				case 103:
					type = func_261(12307, -1);
					break;
			
				case 104:
					type = _STAT_GET_PACKED_INT(7670, -1);
					break;
			
				case 105:
					type = _STAT_GET_PACKED_INT(7674, -1);
					break;
			
				case 106:
					type = _STAT_GET_PACKED_INT(7671, -1);
					break;
			
				case 107:
					type = _STAT_GET_PACKED_INT(26809, -1);
					break;
			
				case 108:
					flag = func_261(12308, -1);
					j = 0;
				
					for (j = 0; j < 24; j = j + 1)
					{
						if (IS_BIT_SET(flag, j))
							type = type + 1;
					}
					break;
			
				case 109:
					type = func_261(12253, -1);
					break;
			
				case 110:
					type = func_261(12307, -1);
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 111:
					flag = func_261(12032, -1);
				
					if (flag > false)
						type = PV_COMP_BERD;
					break;
			
				case 112:
					if (_STAT_GET_PACKED_BOOL(42038, -1))
						type = PV_COMP_BERD;
					break;
			
				case 113:
					if (_STAT_GET_PACKED_BOOL(42041, -1))
						type = PV_COMP_BERD;
					break;
			
				case 114:
					if (_STAT_GET_PACKED_BOOL(42044, -1))
						type = PV_COMP_BERD;
					break;
			
				case 115:
					if (_STAT_GET_PACKED_BOOL(42045, -1))
						type = PV_COMP_BERD;
					break;
			
				case 116:
					type = func_261(12044, -1);
					type = type + func_261(12042, -1);
					break;
			
				case 117:
					if (_STAT_GET_PACKED_BOOL(42042, -1))
					{
						type = PV_COMP_HAND;
					}
					else
					{
						flag = func_261(12033, -1);
					
						if (IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 6))
							type = type + 1;
					
						if (IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 7))
							type = type + 1;
					
						if (IS_BIT_SET(flag, 3) || IS_BIT_SET(flag, 8))
							type = type + 1;
					
						if (IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 9))
							type = type + 1;
					
						if (IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 10))
							type = type + 1;
					
						if (type == PV_COMP_HAND)
							_STAT_SET_PACKED_BOOL(42042, true, -1);
					}
					break;
			
				case 118:
					type = func_261(12045, -1);
					break;
			
				case 119:
					if (_STAT_GET_PACKED_BOOL(42046, -1))
						type = PV_COMP_BERD;
					break;
			
				case 120:
					type = _STAT_GET_PACKED_INT(51052, -1);
					break;
			
				case 121:
					type = func_261(12044, -1);
					type = type + func_261(12042, -1);
					break;
			
				case 122:
					if (_STAT_GET_PACKED_BOOL(42047, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42048, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42049, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42050, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42051, -1))
						type = type + 1;
					break;
			
				case 123:
					type = func_261(12043, -1);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 8:
					if (_STAT_GET_PACKED_BOOL(28272, -1))
						type = PV_COMP_BERD;
					break;
			
				case 9:
					if (_STAT_GET_PACKED_BOOL(28287, -1))
						type = PV_COMP_BERD;
					break;
			
				case 10:
					if (_STAT_GET_PACKED_BOOL(28286, -1))
						type = PV_COMP_BERD;
					break;
			
				case 11:
					if (_STAT_GET_PACKED_BOOL(28285, -1))
						type = PV_COMP_BERD;
					break;
			
				case 12:
					if (_STAT_GET_PACKED_BOOL(28284, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28283, -1))
						type = type + 1;
					break;
			
				case 13:
					type = func_261(12187, -1);
					break;
			
				case 14:
					if (_STAT_GET_PACKED_BOOL(28282, -1))
						type = PV_COMP_BERD;
					break;
			
				case 15:
					if (_STAT_GET_PACKED_BOOL(28273, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28274, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28275, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28276, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28277, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28278, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28279, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28280, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(28281, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 16:
					flag = func_261(11950, -1);
				
					if (IS_BIT_SET(flag, 0) || IS_BIT_SET(flag, 6) || IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 7) || IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 8) || IS_BIT_SET(flag, 3) || IS_BIT_SET(flag, 9) || IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 10) || IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 11))
						type = PV_COMP_BERD;
					break;
			
				case 17:
					if (_STAT_GET_PACKED_BOOL(41566, -1))
						type = PV_COMP_BERD;
					break;
			
				case 18:
					flag = func_261(11950, -1);
				
					if (IS_BIT_SET(flag, 0) || IS_BIT_SET(flag, 6))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 7))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 8))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 3) || IS_BIT_SET(flag, 9))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 10))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 11))
						type = type + 1;
					break;
			
				case 19:
					if (_STAT_GET_PACKED_BOOL(41706, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(2, 20) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41706, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 20:
					if (_STAT_GET_PACKED_BOOL(41567, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41568, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41569, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41570, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41571, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41572, -1))
						type = type + 1;
					break;
			
				case 21:
					if (_STAT_GET_PACKED_BOOL(41573, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41574, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41575, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41576, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41577, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41578, -1))
						type = type + 1;
					break;
			
				case 22:
					if (_STAT_GET_PACKED_BOOL(41579, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41580, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41581, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41582, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41583, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41584, -1))
						type = type + 1;
					break;
			
				case 23:
					if (_STAT_GET_PACKED_BOOL(41585, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41586, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41587, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41588, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41589, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41590, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 176:
					if (func_261(5448, -1) > false)
						type = PV_COMP_BERD;
					break;
			
				case 177:
					if (func_261(5453, -1) > true)
						type = PV_COMP_BERD;
					break;
			
				case 178:
					if (_STAT_GET_PACKED_INT(9359, -1) > 0)
						type = PV_COMP_BERD;
					break;
			
				case 179:
					if (_STAT_GET_PACKED_BOOL(36870, -1))
						type = PV_COMP_BERD;
					break;
			
				case 180:
					if (func_261(5465, -1) > false)
						type = PV_COMP_BERD;
					break;
			
				case 181:
					if (func_261(5457, -1) >= true || func_261(5455, -1) >= true)
						type = PV_COMP_BERD;
					break;
			
				case 182:
					flag = func_261(5395, -1);
				
					if (IS_BIT_SET(flag, 0) && IS_BIT_SET(flag, 1) && IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 3) && IS_BIT_SET(flag, 4) && IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 6) && IS_BIT_SET(flag, 7) && IS_BIT_SET(flag, 8) || IS_BIT_SET(flag, 9) && IS_BIT_SET(flag, 10) && IS_BIT_SET(flag, 11) || IS_BIT_SET(flag, 12) && IS_BIT_SET(flag, 13) && IS_BIT_SET(flag, 14) || IS_BIT_SET(flag, 15) && IS_BIT_SET(flag, 16) && IS_BIT_SET(flag, 17))
						type = PV_COMP_BERD;
					break;
			
				case 183:
					type = func_261(5453, -1);
					break;
			
				case 184:
					type = func_101();
					break;
			
				case 185:
					if (_STAT_GET_PACKED_BOOL(36831, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36832, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36833, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36834, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36835, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36836, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36837, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36838, -1))
						type = type + 1;
					break;
			
				case 186:
					flag = func_261(5395, -1);
					type = func_99(flag);
					break;
			
				case 187:
					type = _STAT_GET_PACKED_INT(9359, -1);
					break;
			
				case 188:
					type = func_261(5459, -1);
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 322:
					if (func_261(12031, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 323:
					if (_STAT_GET_PACKED_BOOL(41672, -1))
						type = PV_COMP_BERD;
					break;
			
				case 324:
					type = func_261(11922, -1);
					break;
			
				case 325:
					if (func_97(48, -1) >= 10)
						type = PV_COMP_BERD;
					break;
			
				case 326:
					if (_STAT_GET_PACKED_BOOL(41673, -1))
					{
						type = 100;
					}
					else
					{
						type = func_261(11947, -1);
					
						if (type >= 100)
							_STAT_SET_PACKED_BOOL(41673, true, -1);
					}
					break;
			
				case 327:
					type = _STAT_GET_PACKED_BOOL(41332, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 328:
					type = _STAT_GET_PACKED_BOOL(41331, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 329:
					type = func_261(11922, -1);
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 338:
					if (func_261(1209, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 339:
					if (func_261(11921, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 340:
					type = func_97(40, -1) + func_97(41, -1);
					break;
			
				case 341:
					type = func_261(11920, -1);
					break;
			
				case 342:
					type = func_97(40, -1) + func_97(41, -1);
					break;
			
				case 343:
					type = func_261(11965, -1);
					break;
			
				case 344:
					type = func_97(40, -1) + func_97(41, -1);
					break;
			
				case 345:
					if (_STAT_GET_PACKED_BOOL(36922, -1))
					{
						type = PV_COMP_BERD;
					}
					else
					{
						type = func_261(11919, -1);
					
						if (type >= PV_COMP_HAND)
						{
							_STAT_SET_PACKED_BOOL(36922, true, -1);
							type = PV_COMP_BERD;
						}
						else
						{
							type = PV_COMP_HEAD;
						}
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 124:
					flag = func_261(12462, -1);
				
					if (IS_BIT_SET(flag, 0) || IS_BIT_SET(flag, 11))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 12))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 13))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 3) || IS_BIT_SET(flag, 14))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 15))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 16))
						type = type + 1;
					break;
			
				case 125:
					if (_STAT_GET_PACKED_BOOL(42037, -1))
						type = PV_COMP_BERD;
					break;
			
				case 126:
					type = func_261(11811, -1);
					break;
			
				case 127:
					flag = func_261(12462, -1);
				
					if (IS_BIT_SET(flag, 6) || IS_BIT_SET(flag, 17))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 7) || IS_BIT_SET(flag, 18))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 8) || IS_BIT_SET(flag, 19))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 9) || IS_BIT_SET(flag, 20))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 10) || IS_BIT_SET(flag, 21))
						type = type + 1;
					break;
			
				case 128:
					flag = func_261(10872, -1);
				
					if (IS_BIT_SET(flag, 20))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 21))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 22))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 23))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 24))
						type = type + 1;
					break;
			
				case 129:
					type = func_261(11815, -1);
					break;
			
				case 130:
					flag = func_261(10872, -1);
				
					if (IS_BIT_SET(flag, 0))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 20) && IS_BIT_SET(flag, 21) && IS_BIT_SET(flag, 22) && IS_BIT_SET(flag, 23) && IS_BIT_SET(flag, 24))
						type = type + 1;
				
					if (func_261(11811, -1) >= 10)
						type = type + 1;
				
					if (func_261(11813, -1) >= 10)
						type = type + 1;
				
					if (_STAT_GET_PACKED_INT(41241, -1) >= 5)
						type = type + 1;
				
					flag = func_261(12462, -1);
				
					if (IS_BIT_SET(flag, 5))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 10))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 26))
						type = type + 1;
				
					if (func_261(11815, -1) >= 1000000)
						type = type + 1;
				
					if (type == PV_COMP_TASK)
						type = type + 1;
					break;
			
				case 131:
					type = func_261(11928, -1);
					break;
			
				case 132:
					type = func_261(11927, -1);
					break;
			
				case 133:
					type = _STAT_GET_PACKED_INT(42084, -1);
					break;
			
				case 134:
					type = func_261(11811, -1);
					break;
			
				case 135:
					if (_STAT_GET_PACKED_BOOL(41660, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41661, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41662, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41663, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41664, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41665, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41666, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41667, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41668, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41669, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41670, -1))
						type = type + 1;
					break;
			
				case 136:
					type = func_261(11815, -1);
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 24:
					if (func_261(10394, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 25:
					if (_STAT_GET_PACKED_BOOL(41333, -1) || _STAT_GET_PACKED_BOOL(41334, -1) || _STAT_GET_PACKED_BOOL(41335, -1) || _STAT_GET_PACKED_BOOL(41336, -1) || _STAT_GET_PACKED_BOOL(41337, -1) || _STAT_GET_PACKED_BOOL(41338, -1))
						type = PV_COMP_BERD;
					break;
			
				case 26:
					flag = func_261(10394, -1);
				
					if (IS_BIT_SET(flag, 0) || IS_BIT_SET(flag, 7))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 8))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 2) || IS_BIT_SET(flag, 9))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 3) || IS_BIT_SET(flag, 10))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 11))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 5) || IS_BIT_SET(flag, 12))
						type = type + 1;
					break;
			
				case 27:
					if (_STAT_GET_PACKED_BOOL(41707, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(3, 28) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41707, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 28:
					if (_STAT_GET_PACKED_BOOL(41339, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41340, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41341, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41342, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41343, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41344, -1))
						type = type + 1;
					break;
			
				case 29:
					if (_STAT_GET_PACKED_BOOL(41345, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41346, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41347, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41348, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41349, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41350, -1))
						type = type + 1;
					break;
			
				case 30:
					if (_STAT_GET_PACKED_BOOL(41351, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41352, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41353, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41354, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41355, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41356, -1))
						type = type + 1;
					break;
			
				case 31:
					if (_STAT_GET_PACKED_BOOL(41357, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41358, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41359, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41360, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41361, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41362, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 32:
					if (func_261(8977, -1) > false)
						type = PV_COMP_BERD;
					break;
			
				case 33:
					if (_STAT_GET_PACKED_BOOL(41379, -1))
						type = PV_COMP_BERD;
					break;
			
				case 34:
					flag = func_261(8977, -1);
				
					if (IS_BIT_SET(flag, 4) || IS_BIT_SET(flag, 5))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 6) || IS_BIT_SET(flag, 7))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 8) || IS_BIT_SET(flag, 9))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 10) || IS_BIT_SET(flag, 11))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 12) || IS_BIT_SET(flag, 13))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 14) || IS_BIT_SET(flag, 15))
						type = type + 1;
					break;
			
				case 35:
					if (_STAT_GET_PACKED_BOOL(41708, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(4, 36) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41708, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 36:
					if (_STAT_GET_PACKED_BOOL(41380, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41381, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41382, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41383, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41384, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41385, -1))
						type = type + 1;
					break;
			
				case 37:
					if (_STAT_GET_PACKED_BOOL(41386, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41387, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41388, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41389, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41390, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41391, -1))
						type = type + 1;
					break;
			
				case 38:
					if (_STAT_GET_PACKED_BOOL(41392, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41393, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41394, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41395, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41396, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41397, -1))
						type = type + 1;
					break;
			
				case 39:
					if (_STAT_GET_PACKED_BOOL(41398, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41399, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41400, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41401, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41402, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41403, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 40:
					if (_STAT_GET_PACKED_BOOL(41404, -1) || _STAT_GET_PACKED_BOOL(41405, -1) || _STAT_GET_PACKED_BOOL(41406, -1) || _STAT_GET_PACKED_BOOL(41407, -1) || _STAT_GET_PACKED_BOOL(41408, -1) || _STAT_GET_PACKED_BOOL(41409, -1))
						type = PV_COMP_BERD;
					break;
			
				case 41:
					if (_STAT_GET_PACKED_BOOL(41410, -1))
						type = PV_COMP_BERD;
					break;
			
				case 42:
					if (_STAT_GET_PACKED_BOOL(41404, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41405, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41406, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41407, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41408, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41409, -1))
						type = type + 1;
					break;
			
				case 43:
					if (_STAT_GET_PACKED_BOOL(41709, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(5, 44) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41709, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 44:
					if (_STAT_GET_PACKED_BOOL(41411, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41412, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41413, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41414, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41415, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41416, -1))
						type = type + 1;
					break;
			
				case 45:
					if (_STAT_GET_PACKED_BOOL(41417, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41418, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41419, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41420, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41421, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41422, -1))
						type = type + 1;
					break;
			
				case 46:
					if (_STAT_GET_PACKED_BOOL(41423, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41424, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41425, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41426, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41427, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41428, -1))
						type = type + 1;
					break;
			
				case 47:
					if (_STAT_GET_PACKED_BOOL(41429, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41430, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41431, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41432, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41433, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41434, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 48:
					if (_STAT_GET_PACKED_BOOL(41436, -1) || _STAT_GET_PACKED_BOOL(41437, -1) || _STAT_GET_PACKED_BOOL(41438, -1) || _STAT_GET_PACKED_BOOL(41439, -1) || _STAT_GET_PACKED_BOOL(41440, -1) || _STAT_GET_PACKED_BOOL(41441, -1) || _STAT_GET_PACKED_BOOL(41442, -1) || _STAT_GET_PACKED_BOOL(41443, -1))
						type = PV_COMP_BERD;
					break;
			
				case 49:
					if (_STAT_GET_PACKED_BOOL(41435, -1))
						type = PV_COMP_BERD;
					break;
			
				case 50:
					if (_STAT_GET_PACKED_BOOL(41436, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41437, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41438, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41439, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41440, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41441, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41442, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41443, -1))
						type = type + 1;
					break;
			
				case 51:
					if (_STAT_GET_PACKED_BOOL(41705, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(6, 52) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41705, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 52:
					if (_STAT_GET_PACKED_BOOL(41444, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41445, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41446, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41447, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41448, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41449, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41450, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41451, -1))
						type = type + 1;
					break;
			
				case 53:
					if (_STAT_GET_PACKED_BOOL(41452, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41453, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41454, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41455, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41456, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41457, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41458, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41459, -1))
						type = type + 1;
					break;
			
				case 54:
					if (_STAT_GET_PACKED_BOOL(41460, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41461, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41462, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41463, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41464, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41465, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41466, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41467, -1))
						type = type + 1;
					break;
			
				case 55:
					if (_STAT_GET_PACKED_BOOL(41468, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41469, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41470, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41471, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41472, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41473, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41474, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41475, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 56:
					if (_STAT_GET_PACKED_BOOL(41476, -1) || _STAT_GET_PACKED_BOOL(41477, -1) || _STAT_GET_PACKED_BOOL(41478, -1) || _STAT_GET_PACKED_BOOL(41479, -1) || _STAT_GET_PACKED_BOOL(41480, -1) || _STAT_GET_PACKED_BOOL(41481, -1))
						type = PV_COMP_BERD;
					break;
			
				case 57:
					if (_STAT_GET_PACKED_BOOL(41506, -1))
						type = PV_COMP_BERD;
					break;
			
				case 58:
					if (_STAT_GET_PACKED_BOOL(41476, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41477, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41478, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41479, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41480, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41481, -1))
						type = type + 1;
					break;
			
				case 59:
					if (_STAT_GET_PACKED_BOOL(41710, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(7, 60) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41710, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 60:
					if (_STAT_GET_PACKED_BOOL(41482, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41483, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41484, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41485, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41486, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41487, -1))
						type = type + 1;
					break;
			
				case 61:
					if (_STAT_GET_PACKED_BOOL(41488, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41489, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41490, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41491, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41492, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41493, -1))
						type = type + 1;
					break;
			
				case 62:
					if (_STAT_GET_PACKED_BOOL(41494, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41495, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41496, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41497, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41498, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41499, -1))
						type = type + 1;
					break;
			
				case 63:
					if (_STAT_GET_PACKED_BOOL(41500, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41501, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41502, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41503, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41504, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41505, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
					if (_STAT_GET_PACKED_BOOL(42015, -1) || _STAT_GET_PACKED_BOOL(42016, -1) || _STAT_GET_PACKED_BOOL(42017, -1) || _STAT_GET_PACKED_BOOL(42018, -1) || _STAT_GET_PACKED_BOOL(42019, -1) || _STAT_GET_PACKED_BOOL(42020, -1) || _STAT_GET_PACKED_BOOL(42021, -1) || _STAT_GET_PACKED_BOOL(42022, -1))
						type = PV_COMP_BERD;
					break;
			
				case 65:
					if (_STAT_GET_PACKED_BOOL(41539, -1))
						type = PV_COMP_BERD;
					break;
			
				case 66:
					if (_STAT_GET_PACKED_BOOL(42015, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42016, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42017, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42018, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42019, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42020, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42021, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42022, -1))
						type = type + 1;
					break;
			
				case 67:
					if (_STAT_GET_PACKED_BOOL(41711, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_87(8, 68) > PV_COMP_HEAD)
					{
						_STAT_SET_PACKED_BOOL(41711, true, -1);
						type = PV_COMP_BERD;
					}
					break;
			
				case 68:
					if (_STAT_GET_PACKED_BOOL(41507, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41508, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41509, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41510, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41511, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41512, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41513, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41514, -1))
						type = type + 1;
					break;
			
				case 69:
					if (_STAT_GET_PACKED_BOOL(41515, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41516, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41517, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41518, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41519, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41520, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41521, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41522, -1))
						type = type + 1;
					break;
			
				case 70:
					if (_STAT_GET_PACKED_BOOL(41523, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41524, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41525, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41526, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41527, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41528, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41529, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41530, -1))
						type = type + 1;
					break;
			
				case 71:
					if (_STAT_GET_PACKED_BOOL(41531, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41532, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41533, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41534, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41535, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41536, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41537, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41538, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 359:
					if (_STAT_GET_PACKED_BOOL(36934, -1))
					{
						type = PV_COMP_HAND;
					}
					else
					{
						type = _STAT_GET_PACKED_INT(41248, -1);
					
						if (type >= PV_COMP_HAND)
						{
							_STAT_SET_PACKED_BOOL(36934, true, -1);
							type = PV_COMP_HAND;
						}
					}
					break;
			
				case 360:
					if (_STAT_GET_PACKED_BOOL(36935, -1))
						type = PV_COMP_BERD;
					break;
			
				case 361:
					if (_STAT_GET_PACKED_BOOL(36936, -1))
						type = PV_COMP_BERD;
					break;
			
				case 362:
					if (_STAT_GET_PACKED_BOOL(36937, -1))
						type = PV_COMP_BERD;
					break;
			
				case 363:
					type = _STAT_GET_PACKED_BOOL(36938, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 364:
					type = _STAT_GET_PACKED_BOOL(36920, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 365:
					type = func_99(func_261(11964, -1));
					break;
			
				case 366:
					type = func_93();
					break;
			
				case 367:
					if (_STAT_GET_PACKED_BOOL(36942, -1))
					{
						type = PV_COMP_DECL;
					}
					else if (_STAT_GET_PACKED_BOOL(36946, -1))
					{
						type = func_92();
						_STAT_SET_PACKED_BOOL(36946, false, -1);
					}
					else
					{
						type = func_90();
					}
					break;
			
				case 368:
					type = func_261(11963, -1);
					break;
			
				case 369:
					type = func_101();
					break;
			
				case 370:
					if (_STAT_GET_PACKED_BOOL(36941, -1))
					{
						type = 50;
					}
					else
					{
						type = _STAT_GET_PACKED_INT(41248, -1);
					
						if (type >= 50)
						{
							_STAT_SET_PACKED_BOOL(36941, true, -1);
							type = 50;
						}
					}
					break;
			
				case 371:
					if (_STAT_GET_PACKED_BOOL(15456, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15457, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15458, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15459, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15460, -1))
						type = type + 1;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 137:
					type = _STAT_GET_PACKED_BOOL(28257, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 138:
					if (func_261(9910, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 139:
					if (IS_BIT_SET(func_261(9905, -1), 0))
						type = PV_COMP_BERD;
					break;
			
				case 140:
					if (func_88(128, -1) || func_88(129, -1) || func_88(130, -1))
						type = PV_COMP_BERD;
					break;
			
				case 141:
					type = func_97(118, -1);
					break;
			
				case 142:
					type = func_261(9910, -1);
					break;
			
				case 143:
					if (IS_BIT_SET(func_261(9905, -1), 2))
						type = PV_COMP_BERD;
					break;
			
				case 144:
					type = func_261(11930, -1);
					break;
			
				case 145:
					if (func_88(134, -1))
						type = type + 1;
				
					if (func_88(135, -1))
						type = type + 1;
				
					if (func_88(136, -1))
						type = type + 1;
				
					if (func_88(140, -1))
						type = type + 1;
				
					if (func_88(141, -1))
						type = type + 1;
				
					if (func_88(142, -1))
						type = type + 1;
					break;
			
				case 146:
					type = _STAT_GET_PACKED_INT(42085, -1);
					break;
			
				case 147:
					type = func_261(11931, -1);
					break;
			
				case 148:
					type = func_261(11930, -1);
					break;
			
				case 149:
					type = func_261(9911, -1);
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 228:
					if (func_261(9631, -1) == PV_COMP_BERD && _STAT_GET_PACKED_BOOL(31737, -1))
						type = PV_COMP_BERD;
					break;
			
				case 229:
					if (_STAT_GET_PACKED_BOOL(41870, -1))
					{
						type = PV_COMP_BERD;
					}
					else if (func_97(111, -1) > PV_COMP_HEAD)
					{
						type = PV_COMP_BERD;
						_STAT_SET_PACKED_BOOL(41870, true, -1);
					}
					break;
			
				case 230:
					type = _STAT_GET_PACKED_BOOL(31753, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 231:
					if (func_261(9620, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 232:
					type = func_97(112, -1);
					break;
			
				case 233:
					type = func_97(107, -1);
					break;
			
				case 234:
					type = func_99(func_261(9620, -1));
					break;
			
				case 235:
					type = _STAT_GET_PACKED_BOOL(32397, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 236:
					type = func_88(114, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 237:
					type = _STAT_GET_PACKED_INT(30226, -1);
					break;
			
				case 238:
					type = func_261(9622, -1);
					break;
			
				case 239:
					type = func_261(11932, -1);
					break;
			
				case 240:
					type = func_97(107, -1);
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 254:
					type = _STAT_GET_PACKED_BOOL(30309, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 255:
					type = _STAT_GET_PACKED_BOOL(30522, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 256:
					if (IS_BIT_SET(func_261(9526, -1), 0) || IS_BIT_SET(func_261(9511, -1), 1))
						type = PV_COMP_BERD;
					break;
			
				case 257:
					if (IS_BIT_SET(func_261(9511, -1), 1))
						type = PV_COMP_BERD;
					break;
			
				case 258:
					if (func_261(9586, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 259:
					type = func_97(100, -1);
					break;
			
				case 260:
					type = _STAT_GET_PACKED_BOOL(41677, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 261:
					type = func_261(11933, -1);
					break;
			
				case 262:
					type = func_99(func_261(9586, -1));
					break;
			
				case 263:
					type = _STAT_GET_PACKED_INT(42094, -1);
					break;
			
				case 264:
					flag = func_261(9511, -1);
				
					if (IS_BIT_SET(flag, 7))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 8))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 9))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 11))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 6))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 10))
						type = type + 1;
					break;
			
				case 265:
					if (func_261(9544, -1) > false)
						type = type + 1;
				
					if (func_261(9545, -1) > false)
						type = type + 1;
				
					if (func_261(9546, -1) > false)
						type = type + 1;
				
					if (func_261(9547, -1) > false)
						type = type + 1;
				
					if (func_261(9548, -1) > false)
						type = type + 1;
				
					if (func_261(9549, -1) > false)
						type = type + 1;
					break;
			
				case 266:
					type = func_261(11926, -1);
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 267:
					flag = func_261(8726, -1);
				
					if (func_99(flag) > PV_COMP_BERD || IS_BIT_SET(flag, 1))
						type = PV_COMP_BERD;
					break;
			
				case 268:
					if (_STAT_GET_PACKED_BOOL(28270, -1))
						type = PV_COMP_BERD;
					break;
			
				case 269:
					if (_STAT_GET_PACKED_BOOL(36842, -1))
						type = PV_COMP_BERD;
					break;
			
				case 270:
					if (IS_BIT_SET(func_261(8726, -1), 10))
						type = PV_COMP_BERD;
					break;
			
				case 271:
					type = func_97(88, -1);
					break;
			
				case 272:
					if (_STAT_GET_PACKED_BOOL(32399, -1))
						type = PV_COMP_BERD;
					break;
			
				case 273:
					flag = func_261(8726, -1);
				
					if (IS_BIT_SET(flag, 11))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 12))
						type = type + 1;
				
					if (IS_BIT_SET(flag, 13))
						type = type + 1;
					break;
			
				case 274:
					if (func_88(64, -1))
						type = PV_COMP_BERD;
					break;
			
				case 275:
					if (_STAT_GET_PACKED_BOOL(42025, -1))
						type = PV_COMP_BERD;
					break;
			
				case 276:
					type = _STAT_GET_PACKED_INT(42086, -1);
					break;
			
				case 277:
					if (_STAT_GET_PACKED_BOOL(41678, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41679, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41680, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41681, -1))
						type = type + 1;
					break;
			
				case 278:
					type = func_261(11925, -1);
					break;
			
				case 279:
					type = func_97(90, -1);
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 241:
					if (_STAT_GET_PACKED_BOOL(27089, -1))
						type = PV_COMP_BERD;
					break;
			
				case 242:
					if (_STAT_GET_PACKED_BOOL(27090, -1))
						type = PV_COMP_BERD;
					break;
			
				case 243:
					flag = func_261(8283, -1);
				
					if (IS_BIT_SET(flag, 6) || IS_BIT_SET(flag, 12))
						type = PV_COMP_BERD;
					break;
			
				case 244:
					flag = func_261(8283, -1);
				
					if (IS_BIT_SET(flag, 11) || IS_BIT_SET(flag, 17))
						type = PV_COMP_BERD;
					break;
			
				case 245:
					if (_STAT_GET_PACKED_BOOL(36916, -1))
						type = PV_COMP_BERD;
					break;
			
				case 246:
					if (func_97(87, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 247:
					if (_STAT_GET_PACKED_BOOL(36844, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36845, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36846, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36847, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36848, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36849, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36850, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36851, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36852, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36853, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36854, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36855, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36856, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36857, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36858, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36859, -1))
						type = type + 1;
					break;
			
				case 248:
					if (_STAT_GET_PACKED_BOOL(41548, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41549, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41550, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41551, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41552, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41553, -1))
						type = type + 1;
					break;
			
				case 249:
					if (_STAT_GET_PACKED_BOOL(41868, -1))
						type = PV_COMP_BERD;
					break;
			
				case 250:
					type = _STAT_GET_PACKED_INT(42093, -1);
					break;
			
				case 251:
					if (_STAT_GET_PACKED_BOOL(41560, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41561, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41562, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41563, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41564, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41565, -1))
						type = type + 1;
					break;
			
				case 252:
					if (_STAT_GET_PACKED_BOOL(41554, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41555, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41556, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41557, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41558, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41559, -1))
						type = type + 1;
					break;
			
				case 253:
					type = func_97(87, -1);
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 280:
					if (_STAT_GET_PACKED_BOOL(18139, -1))
						type = PV_COMP_BERD;
					break;
			
				case 281:
					if (_STAT_GET_PACKED_BOOL(36861, -1))
						type = PV_COMP_BERD;
					break;
			
				case 282:
					flag = func_261(5664, -1);
				
					if (IS_BIT_SET(flag, 0) || IS_BIT_SET(flag, 1) || IS_BIT_SET(flag, 2))
						type = PV_COMP_BERD;
					break;
			
				case 283:
					if (_STAT_GET_PACKED_BOOL(41712, -1))
						type = PV_COMP_BERD;
					break;
			
				case 284:
					if (_STAT_GET_PACKED_BOOL(36862, -1))
						type = PV_COMP_BERD;
					break;
			
				case 285:
					if (_STAT_GET_PACKED_BOOL(41713, -1))
						type = PV_COMP_BERD;
					break;
			
				case 286:
					if (_STAT_GET_PACKED_BOOL(36863, -1))
						type = PV_COMP_BERD;
					break;
			
				case 287:
					if (_STAT_GET_PACKED_BOOL(41714, -1))
						type = PV_COMP_BERD;
					break;
			
				case 288:
					type = func_261(11935, -1);
					break;
			
				case 289:
					type = _STAT_GET_PACKED_INT(42087, -1);
					break;
			
				case 290:
					if (_STAT_GET_PACKED_BOOL(41685, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41690, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41696, -1))
						type = type + 1;
					break;
			
				case 291:
					if (_STAT_GET_PACKED_BOOL(41697, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41698, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41699, -1))
						type = type + 1;
					break;
			
				case 292:
					type = func_261(11924, -1);
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 306:
					if (_STAT_GET_PACKED_BOOL(25009, -1))
						type = PV_COMP_BERD;
					break;
			
				case 307:
					if (func_261(7864, -1) > PV_COMP_HEAD || func_261(7865, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
				
					if (_STAT_GET_PACKED_BOOL(41647, -1) || _STAT_GET_PACKED_BOOL(41648, -1) || _STAT_GET_PACKED_BOOL(41649, -1) || _STAT_GET_PACKED_BOOL(41650, -1) || _STAT_GET_PACKED_BOOL(41651, -1) || _STAT_GET_PACKED_BOOL(41652, -1) || _STAT_GET_PACKED_BOOL(41653, -1) || _STAT_GET_PACKED_BOOL(41654, -1) || _STAT_GET_PACKED_BOOL(41655, -1))
						type = PV_COMP_BERD;
					break;
			
				case 308:
					type = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 309:
					type = func_261(7852, -1);
					break;
			
				case 310:
					if (_STAT_GET_PACKED_BOOL(41647, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41648, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41649, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41650, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41651, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41652, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41653, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41654, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41655, -1))
						type = type + 1;
					break;
			
				case 311:
					type = _STAT_GET_PACKED_INT(42088, -1);
					break;
			
				case 312:
					type = _STAT_GET_PACKED_INT(22063, -1);
					break;
			
				case 313:
					type = func_261(7852, -1);
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 150:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						type = PV_COMP_BERD;
					break;
			
				case 151:
					if (func_261(7231, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 152:
					type = func_261(12010, -1);
					break;
			
				case 153:
					if (_STAT_GET_PACKED_BOOL(22082, -1) || _STAT_GET_PACKED_BOOL(22083, -1) || _STAT_GET_PACKED_BOOL(15533, -1))
						type = PV_COMP_BERD;
					break;
			
				case 154:
					type = _STAT_GET_PACKED_BOOL(36868, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 155:
					if (_STAT_GET_PACKED_BOOL(36944, -1))
						type = PV_COMP_BERD;
					break;
			
				case 156:
					if (_STAT_GET_PACKED_BOOL(22067, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(22082, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(22083, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(15533, -1))
						type = type + 1;
					break;
			
				case 157:
					if (_STAT_GET_PACKED_BOOL(41989, -1))
						type = Global_262145.f_23684;
					else
						type = func_261(7212, -1);
					break;
			
				case 158:
					type = func_261(7231, -1);
					break;
			
				case 159:
					type = _STAT_GET_PACKED_INT(42089, -1);
					break;
			
				case 160:
					type = func_261(7230, -1);
					break;
			
				case 161:
					type = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(func_261(12025, -1) / 60));
					break;
			
				case 162:
					type = func_261(7234, -1);
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 163:
					if (_STAT_GET_PACKED_BOOL(15966, -1))
						type = PV_COMP_BERD;
					break;
			
				case 164:
					if (func_261(6116, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 165:
					if (_STAT_GET_PACKED_BOOL(41676, -1))
						type = PV_COMP_BERD;
					break;
			
				case 166:
					if (_STAT_GET_PACKED_BOOL(32398, -1))
						type = PV_COMP_BERD;
					break;
			
				case 167:
					type = func_261(6116, -1);
					break;
			
				case 168:
					if (func_261(6118, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 169:
					type = func_261(6116, -1);
					break;
			
				case 170:
					if (_STAT_GET_PACKED_BOOL(41987, -1))
						type = 50;
					else
						type = func_261(6104, -1);
					break;
			
				case 171:
					type = _STAT_GET_PACKED_BOOL(36924, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 172:
					type = func_261(6116, -1);
					break;
			
				case 173:
					type = func_261(11959, -1);
					break;
			
				case 174:
					if (_STAT_GET_PACKED_BOOL(36925, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36926, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36927, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36928, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36929, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36930, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36931, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36932, -1))
						type = type + 1;
					break;
			
				case 175:
					type = func_261(6119, -1);
					type = type + func_261(6120, -1);
					break;
			}
			break;
	
		case 18:
			switch (iParam1)
			{
				case 189:
					if (func_261(5303, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 190:
					if (func_261(5332, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 191:
					if (_STAT_GET_PACKED_BOOL(42029, -1) || _STAT_GET_PACKED_BOOL(42030, -1) || _STAT_GET_PACKED_BOOL(42031, -1) || _STAT_GET_PACKED_BOOL(42032, -1) || _STAT_GET_PACKED_BOOL(42033, -1) || _STAT_GET_PACKED_BOOL(42034, -1) || _STAT_GET_PACKED_BOOL(42035, -1) || _STAT_GET_PACKED_BOOL(42036, -1))
						type = type + 1;
					break;
			
				case 192:
					if (_STAT_GET_PACKED_BOOL(41874, -1) || _STAT_GET_PACKED_BOOL(41875, -1) || _STAT_GET_PACKED_BOOL(41876, -1) || _STAT_GET_PACKED_BOOL(41877, -1) || _STAT_GET_PACKED_BOOL(41878, -1) || _STAT_GET_PACKED_BOOL(41879, -1) || _STAT_GET_PACKED_BOOL(41880, -1) || _STAT_GET_PACKED_BOOL(41881, -1) || _STAT_GET_PACKED_BOOL(41882, -1) || _STAT_GET_PACKED_BOOL(41883, -1))
						type = PV_COMP_BERD;
					break;
			
				case 193:
					if (func_261(11941, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 194:
					type = func_261(11940, -1);
					break;
			
				case 195:
					type = func_261(5332, -1);
					break;
			
				case 196:
					if (_STAT_GET_PACKED_BOOL(41988, -1))
						type = 40;
					else
						type = _STAT_GET_PACKED_INT(42095, -1);
					break;
			
				case 197:
					if (_STAT_GET_PACKED_BOOL(42029, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42030, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42031, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42032, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42033, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42034, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42035, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42036, -1))
						type = type + 1;
					break;
			
				case 198:
					if (_STAT_GET_PACKED_BOOL(41874, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41875, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41876, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41877, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41878, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41879, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41880, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41881, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41882, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41883, -1))
						type = type + 1;
					break;
			
				case 199:
					if (_STAT_GET_PACKED_BOOL(41540, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41541, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41542, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41543, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41544, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41545, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41546, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41547, -1))
						type = type + 1;
					break;
			
				case 200:
					type = func_261(11941, -1);
					break;
			
				case 201:
					type = func_261(5333, -1);
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 202:
					type = _STAT_GET_PACKED_BOOL(36871, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 203:
					type = _STAT_GET_PACKED_BOOL(36872, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 204:
					if (_STAT_GET_PACKED_BOOL(36875, -1) || _STAT_GET_PACKED_BOOL(36884, -1) || _STAT_GET_PACKED_BOOL(36885, -1) || _STAT_GET_PACKED_BOOL(36877, -1) || _STAT_GET_PACKED_BOOL(36880, -1) || _STAT_GET_PACKED_BOOL(36878, -1) || _STAT_GET_PACKED_BOOL(36883, -1) || _STAT_GET_PACKED_BOOL(36876, -1) || _STAT_GET_PACKED_BOOL(36882, -1) || _STAT_GET_PACKED_BOOL(36881, -1) || _STAT_GET_PACKED_BOOL(36879, -1) || _STAT_GET_PACKED_BOOL(36887, -1) || _STAT_GET_PACKED_BOOL(36886, -1))
						type = type + 1;
					break;
			
				case 205:
					type = _STAT_GET_PACKED_BOOL(36873, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 206:
					if (_STAT_GET_PACKED_BOOL(42001, -1))
						type = PV_COMP_BERD;
					break;
			
				case 207:
					if (_STAT_GET_PACKED_BOOL(36874, -1))
						type = PV_COMP_BERD;
					break;
			
				case 208:
					if (_STAT_GET_PACKED_BOOL(36875, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36876, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36877, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36878, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36879, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36880, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36881, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36882, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36883, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36884, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36885, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36886, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36887, -1))
						type = type + 1;
					break;
			
				case 209:
					if (func_261(3913, -1) > PV_COMP_HEAD || func_261(3903, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_261(3946, -1) > PV_COMP_HEAD || func_261(3932, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_261(3948, -1) > PV_COMP_HEAD || func_261(3936, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_261(3950, -1) > PV_COMP_HEAD || func_261(3940, -1) > PV_COMP_HEAD)
						type = type + 1;
				
					if (func_261(3952, -1) > PV_COMP_HEAD || func_261(3944, -1) > PV_COMP_HEAD)
						type = type + 1;
					break;
			
				case 210:
					type = func_261(10411, -1);
					break;
			
				case 211:
					type = type + func_261(3954, -1);
					type = type + func_261(3955, -1);
					type = type + func_261(3956, -1);
					type = type + func_261(3957, -1);
					type = type + func_261(3958, -1);
					break;
			
				case 212:
					type = func_261(11943, -1);
					break;
			
				case 213:
					type = func_261(11969, -1);
					break;
			
				case 214:
					type = func_261(11942, -1);
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 215:
					type = _STAT_GET_PACKED_BOOL(36888, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 216:
					type = _STAT_GET_PACKED_BOOL(36889, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 217:
					if (_STAT_GET_PACKED_BOOL(36892, -1) || _STAT_GET_PACKED_BOOL(36893, -1) || _STAT_GET_PACKED_BOOL(36894, -1) || _STAT_GET_PACKED_BOOL(36895, -1) || _STAT_GET_PACKED_BOOL(36896, -1) || _STAT_GET_PACKED_BOOL(36897, -1) || _STAT_GET_PACKED_BOOL(36898, -1) || _STAT_GET_PACKED_BOOL(36899, -1) || _STAT_GET_PACKED_BOOL(36900, -1) || _STAT_GET_PACKED_BOOL(36901, -1) || _STAT_GET_PACKED_BOOL(36902, -1) || _STAT_GET_PACKED_BOOL(36903, -1) || _STAT_GET_PACKED_BOOL(36904, -1) || _STAT_GET_PACKED_BOOL(36905, -1) || _STAT_GET_PACKED_BOOL(36906, -1) || _STAT_GET_PACKED_BOOL(36907, -1) || _STAT_GET_PACKED_BOOL(36908, -1) || _STAT_GET_PACKED_BOOL(36909, -1) || _STAT_GET_PACKED_BOOL(36910, -1) || _STAT_GET_PACKED_BOOL(36911, -1) || _STAT_GET_PACKED_BOOL(36912, -1) || _STAT_GET_PACKED_BOOL(36913, -1) || _STAT_GET_PACKED_BOOL(36945, -1) || _STAT_GET_PACKED_BOOL(36914, -1) || _STAT_GET_PACKED_BOOL(36915, -1))
						type = type + 1;
					break;
			
				case 218:
					type = _STAT_GET_PACKED_BOOL(36890, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 219:
					if (func_261(3639, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 220:
					if (func_261(3667, -1) > PV_COMP_HEAD)
						type = PV_COMP_BERD;
					break;
			
				case 221:
					if (_STAT_GET_PACKED_BOOL(7559, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7589, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7592, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7577, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7568, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7583, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7571, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7574, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7586, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7562, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(7553, -1))
						type = type + 1;
					break;
			
				case 222:
					type = _STAT_GET_PACKED_BOOL(36891, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 223:
				case 224:
					if (_STAT_GET_PACKED_BOOL(36892, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36893, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36894, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36895, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36896, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36897, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36898, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36899, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36900, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36901, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36902, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36903, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36904, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36905, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36906, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36907, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36908, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36909, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36910, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36911, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36912, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36913, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36945, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36914, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36915, -1))
						type = type + 1;
					break;
			
				case 225:
					if (_STAT_GET_PACKED_BOOL(36860, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36839, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36841, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36843, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36864, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36865, -1))
						type = type + 1;
					break;
			
				case 226:
					type = type + func_261(11970, -1);
					break;
			
				case 227:
					type = func_261(3671, -1);
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 330:
					if (func_261(1210, -1) > PV_COMP_HEAD || _STAT_GET_PACKED_BOOL(42023, -1))
						type = PV_COMP_BERD;
					break;
			
				case 331:
					if (_STAT_GET_PACKED_BOOL(41363, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41364, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41365, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41366, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41367, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41368, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41369, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41370, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41371, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41372, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41373, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41374, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41375, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41376, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41377, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41378, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42026, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42027, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42028, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42150, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(42151, -1))
						type = type + 1;
					break;
			
				case 332:
					type = func_261(819, -1);
					type = type + func_261(12029, -1);
					type = type + func_261(12030, -1);
					break;
			
				case 333:
					type = func_261(819, -1);
					type = type + func_261(12029, -1);
					type = type + func_261(12030, -1);
					break;
			
				case 334:
					type = type + func_99(func_261(11929, -1));
					type = type + func_99(func_261(11966, -1));
					type = type + func_99(func_261(11967, -1));
					type = type + func_99(func_261(11968, -1));
					break;
			
				case 335:
					type = _STAT_GET_PACKED_INT(41246, -1);
					break;
			
				case 336:
					type = func_261(12026, -1);
					break;
			
				case 337:
					type = func_261(819, -1);
					type = type + func_261(12029, -1);
					type = type + func_261(12030, -1);
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 314:
					if (_STAT_GET_PACKED_BOOL(41594, -1) || _STAT_GET_PACKED_BOOL(41595, -1) || _STAT_GET_PACKED_BOOL(41596, -1) || _STAT_GET_PACKED_BOOL(41597, -1) || _STAT_GET_PACKED_BOOL(41598, -1) || _STAT_GET_PACKED_BOOL(41599, -1) || _STAT_GET_PACKED_BOOL(41600, -1) || _STAT_GET_PACKED_BOOL(41601, -1) || _STAT_GET_PACKED_BOOL(41602, -1) || _STAT_GET_PACKED_BOOL(41603, -1) || _STAT_GET_PACKED_BOOL(41604, -1) || _STAT_GET_PACKED_BOOL(41605, -1) || _STAT_GET_PACKED_BOOL(41606, -1) || _STAT_GET_PACKED_BOOL(41607, -1) || _STAT_GET_PACKED_BOOL(41608, -1) || _STAT_GET_PACKED_BOOL(41609, -1) || _STAT_GET_PACKED_BOOL(41610, -1) || _STAT_GET_PACKED_BOOL(41611, -1) || _STAT_GET_PACKED_BOOL(41612, -1) || _STAT_GET_PACKED_BOOL(41613, -1) || _STAT_GET_PACKED_BOOL(41614, -1) || _STAT_GET_PACKED_BOOL(41615, -1) || _STAT_GET_PACKED_BOOL(41616, -1) || _STAT_GET_PACKED_BOOL(41617, -1) || _STAT_GET_PACKED_BOOL(41618, -1) || _STAT_GET_PACKED_BOOL(41619, -1) || _STAT_GET_PACKED_BOOL(41620, -1) || _STAT_GET_PACKED_BOOL(41621, -1) || _STAT_GET_PACKED_BOOL(41622, -1) || _STAT_GET_PACKED_BOOL(41623, -1) || _STAT_GET_PACKED_BOOL(41624, -1) || _STAT_GET_PACKED_BOOL(41625, -1) || _STAT_GET_PACKED_BOOL(41626, -1) || _STAT_GET_PACKED_BOOL(41627, -1) || _STAT_GET_PACKED_BOOL(41628, -1) || _STAT_GET_PACKED_BOOL(41629, -1) || _STAT_GET_PACKED_BOOL(41630, -1) || _STAT_GET_PACKED_BOOL(41631, -1) || _STAT_GET_PACKED_BOOL(41632, -1) || _STAT_GET_PACKED_BOOL(41633, -1) || _STAT_GET_PACKED_BOOL(41634, -1) || _STAT_GET_PACKED_BOOL(41635, -1) || _STAT_GET_PACKED_BOOL(41636, -1) || _STAT_GET_PACKED_BOOL(41637, -1) || _STAT_GET_PACKED_BOOL(41638, -1) || _STAT_GET_PACKED_BOOL(41639, -1) || _STAT_GET_PACKED_BOOL(41640, -1) || _STAT_GET_PACKED_BOOL(41641, -1) || _STAT_GET_PACKED_BOOL(41642, -1) || _STAT_GET_PACKED_BOOL(41643, -1) || _STAT_GET_PACKED_BOOL(41644, -1) || _STAT_GET_PACKED_BOOL(41645, -1) || _STAT_GET_PACKED_BOOL(41646, -1) || _STAT_GET_PACKED_BOOL(41656, -1) || _STAT_GET_PACKED_BOOL(51339, -1))
						type = PV_COMP_BERD;
					break;
			
				case 315:
					if (_STAT_GET_PACKED_BOOL(36840, -1))
						type = PV_COMP_BERD;
					break;
			
				case 316:
				case 318:
				case 320:
					type = func_261(11917, -1);
					break;
			
				case 317:
				case 319:
					if (_STAT_GET_PACKED_BOOL(41594, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41595, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41596, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41597, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41598, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41599, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41600, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41601, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41602, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41603, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41604, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41605, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41606, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41607, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41608, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41609, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41610, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41611, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41612, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41613, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41614, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41615, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41616, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41617, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41618, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41619, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41620, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41621, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41622, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41623, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41624, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41625, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41626, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41627, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41628, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41629, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41630, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41631, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41632, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41633, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41634, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41635, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41636, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41637, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41638, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41639, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41640, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41641, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41642, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41643, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41644, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41645, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41646, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41656, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(51339, -1))
						type = type + 1;
					break;
			
				case 321:
					if (_STAT_GET_PACKED_BOOL(36921, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 293:
					if (_STAT_GET_PACKED_BOOL(36867, -1))
						type = PV_COMP_BERD;
					break;
			
				case 294:
					if (_STAT_GET_PACKED_BOOL(36933, -1))
						type = PV_COMP_BERD;
					break;
			
				case 295:
					if (_STAT_GET_PACKED_BOOL(41700, -1))
						type = PV_COMP_BERD;
					break;
			
				case 296:
					if (_STAT_GET_PACKED_BOOL(41715, -1))
						type = PV_COMP_BERD;
					break;
			
				case 297:
					if (_STAT_GET_PACKED_BOOL(41716, -1))
						type = PV_COMP_BERD;
					break;
			
				case 298:
					if (_STAT_GET_PACKED_BOOL(41717, -1))
						type = PV_COMP_BERD;
					break;
			
				case 299:
					if (_STAT_GET_PACKED_BOOL(41718, -1))
						type = PV_COMP_BERD;
					break;
			
				case 300:
					if (_STAT_GET_PACKED_BOOL(41719, -1))
						type = PV_COMP_BERD;
					break;
			
				case 301:
					type = _STAT_GET_PACKED_INT(42100, -1);
					break;
			
				case 302:
					type = _STAT_GET_PACKED_INT(42090, -1);
					break;
			
				case 303:
					type = func_261(11923, -1);
					break;
			
				case 304:
					if (_STAT_GET_PACKED_BOOL(41701, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41702, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41703, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41704, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(36917, -1))
						type = type + 1;
					break;
			
				case 305:
					if (_STAT_GET_PACKED_BOOL(42000, -1))
						type = PV_COMP_BERD;
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 346:
					type = _STAT_GET_PACKED_BOOL(41864, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 347:
					if (_STAT_GET_PACKED_BOOL(42014, -1))
						type = PV_COMP_BERD;
					break;
			
				case 348:
					type = _STAT_GET_PACKED_BOOL(41865, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 349:
					type = _STAT_GET_PACKED_BOOL(41863, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 350:
					type = _STAT_GET_PACKED_BOOL(41840, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 351:
					type = _STAT_GET_PACKED_BOOL(41839, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 352:
					type = _STAT_GET_PACKED_BOOL(41841, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 353:
					type = _STAT_GET_PACKED_BOOL(41838, -1) ? PV_COMP_BERD : 0;
					break;
			
				case 354:
					type = _STAT_GET_PACKED_INT(42092, -1);
					break;
			
				case 355:
					type = _STAT_GET_PACKED_INT(42091, -1);
					break;
			
				case 356:
					type = func_261(11975, -1);
				
					if (type > 100)
						type = 99;
				
					if (_STAT_GET_PACKED_BOOL(41866, -1))
						type = type + 1;
					break;
			
				case 357:
					if (_STAT_GET_PACKED_BOOL(41842, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41843, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41844, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41845, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41846, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41847, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41848, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41849, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41850, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41851, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41852, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41853, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41854, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41855, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41856, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41857, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41858, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41859, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41860, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41861, -1))
						type = type + 1;
				
					if (_STAT_GET_PACKED_BOOL(41862, -1))
						type = type + 1;
					break;
			
				case 358:
					type = func_261(11974, -1);
					break;
			}
			break;
	
		default:
			type = PV_COMP_HEAD;
			break;
	}

	if (type < PV_COMP_HEAD)
		type = func_69(iParam0, iParam1);

	return type;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0xC7E6 (51174)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_89(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_89(int iParam0, int iParam1) // Position - 0xC80A (51210)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_56(iParam1));
}

ePedComponentType func_90() // Position - 0xC820 (51232)
{
	int num;
	BOOL flag;

	num = _STAT_GET_PACKED_INT(41244, -1);

	if (num == 0)
		return 0;

	flag = func_261(11960, -1);

	if (Global_2740191.f_6950.f_3 - flag >= 2)
	{
		func_91(41244, false, -1);
		return 0;
	}

	return num;
}

void func_91(int iParam0, BOOL bParam1, int iParam2) // Position - 0xC867 (51303)
{
	if (iParam2 == -1)
		iParam2 = func_11();

	if (bParam1 < 0)
		bParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, bParam1, iParam2);
	return;
}

ePedComponentType func_92() // Position - 0xC88F (51343)
{
	BOOL flag;
	BOOL flag2;

	flag = _STAT_GET_PACKED_INT(41244, -1);
	flag2 = func_261(11960, -1);

	if (Global_2740191.f_6950.f_3 - flag2 >= 2)
	{
		flag = true;
	}
	else if (Global_2740191.f_6950.f_3 - flag2 == 1)
	{
		flag = flag + 1;
	
		if (flag == 10)
			_STAT_SET_PACKED_BOOL(36942, true, -1);
	}

	func_91(41244, flag, -1);
	func_54(11960, Global_2740191.f_6950.f_3, -1, true);
	return flag;
}

ePedComponentType func_93() // Position - 0xC908 (51464)
{
	BOOL address;
	int i;
	Hash weaponHash;
	int num;

	address = _STAT_GET_PACKED_INT(41242, -1);
	i = 0;

	for (i = 0; i < 103; i = i + 1)
	{
		weaponHash = func_95(i);
		num = func_94(i);
	
		if (num == 17296)
		{
		}
		else if (IS_BIT_SET(func_261(num, -1), i % 32))
		{
			switch (WEAPON::GET_WEAPONTYPE_GROUP(weaponHash))
			{
				case joaat("GROUP_MELEE"):
					MISC::SET_BIT(&address, 0);
					break;
			
				case joaat("GROUP_PISTOL"):
					MISC::SET_BIT(&address, 1);
					break;
			
				case joaat("GROUP_MG"):
				case joaat("GROUP_SMG"):
					MISC::SET_BIT(&address, 2);
					break;
			
				case joaat("GROUP_RIFLE"):
					MISC::SET_BIT(&address, 3);
					break;
			
				case joaat("GROUP_SHOTGUN"):
					MISC::SET_BIT(&address, 4);
					break;
			
				case joaat("GROUP_SNIPER"):
					MISC::SET_BIT(&address, 5);
					break;
			
				case joaat("GROUP_HEAVY"):
					MISC::SET_BIT(&address, 6);
					break;
			
				case joaat("GROUP_THROWN"):
					MISC::SET_BIT(&address, 7);
					break;
			}
		}
	}

	func_91(41242, address, -1);
	return func_99(address);
}

int func_94(int iParam0) // Position - 0xC9FE (51710)
{
	iParam0 = iParam0 / 32;

	switch (iParam0)
	{
		case 0:
			return 800;
	
		case 1:
			return 801;
	
		case 2:
			return 2420;
	
		case 3:
			return 10276;
	
		case 4:
			return 12213;
	
		case 5:
			return 12301;
	}

	return 17296;
}

Hash func_95(int iParam0) // Position - 0xCA71 (51825)
{
	switch (iParam0)
	{
		case 34:
			return joaat("WEAPON_KNIFE");
	
		case 1:
			return joaat("WEAPON_PISTOL");
	
		case 2:
			return joaat("WEAPON_COMBATPISTOL");
	
		case 3:
			return joaat("WEAPON_APPISTOL");
	
		case 5:
			return joaat("WEAPON_SMG");
	
		case 7:
			return joaat("WEAPON_MICROSMG");
	
		case 8:
			return joaat("WEAPON_ASSAULTRIFLE");
	
		case 9:
			return joaat("WEAPON_CARBINERIFLE");
	
		case 11:
			return joaat("WEAPON_ADVANCEDRIFLE");
	
		case 12:
			return joaat("WEAPON_MG");
	
		case 13:
			return joaat("WEAPON_COMBATMG");
	
		case 15:
			return joaat("WEAPON_STICKYBOMB");
	
		case 16:
			return joaat("WEAPON_GRENADE");
	
		case 17:
			return joaat("WEAPON_SMOKEGRENADE");
	
		case 60:
			return joaat("WEAPON_PROXMINE");
	
		case 18:
			return joaat("WEAPON_REMOTESNIPER");
	
		case 20:
			return joaat("WEAPON_SNIPERRIFLE");
	
		case 21:
			return joaat("WEAPON_HEAVYSNIPER");
	
		case 56:
			return joaat("WEAPON_MARKSMANRIFLE");
	
		case 22:
			return joaat("WEAPON_PUMPSHOTGUN");
	
		case 24:
			return joaat("WEAPON_ASSAULTSHOTGUN");
	
		case 25:
			return joaat("WEAPON_SAWNOFFSHOTGUN");
	
		case 55:
			return joaat("WEAPON_HEAVYSHOTGUN");
	
		case 26:
			return joaat("WEAPON_GRENADELAUNCHER");
	
		case 27:
			return joaat("WEAPON_RPG");
	
		case 28:
			return joaat("WEAPON_MINIGUN");
	
		case 61:
			return joaat("WEAPON_HOMINGLAUNCHER");
	
		case 31:
			return joaat("WEAPON_STUNGUN");
	
		case 33:
			return joaat("GADGET_PARACHUTE");
	
		case 35:
			return joaat("WEAPON_NIGHTSTICK");
	
		case 43:
			return joaat("WEAPON_PETROLCAN");
	
		case 45:
			return joaat("WEAPON_BOTTLE");
	
		case 46:
			return joaat("WEAPON_SPECIALCARBINE");
	
		case 47:
			return joaat("WEAPON_SNSPISTOL");
	
		case 48:
			return joaat("WEAPON_BULLPUPRIFLE");
	
		case 49:
			return joaat("WEAPON_HEAVYPISTOL");
	
		case 23:
			return joaat("WEAPON_BULLPUPSHOTGUN");
	
		case 50:
			return joaat("WEAPON_GUSENBERG");
	
		case 51:
			return joaat("WEAPON_DAGGER");
	
		case 52:
			return joaat("WEAPON_VINTAGEPISTOL");
	
		case 57:
			return joaat("WEAPON_FLAREGUN");
	
		case 53:
			return joaat("WEAPON_MUSKET");
	
		case 54:
			return joaat("WEAPON_FIREWORK");
	
		case 58:
			return joaat("WEAPON_HATCHET");
	
		case 59:
			return joaat("WEAPON_RAILGUN");
	
		case 64:
			return joaat("WEAPON_COMBATPDW");
	
		case 62:
			return joaat("WEAPON_KNUCKLE");
	
		case 63:
			return joaat("WEAPON_MARKSMANPISTOL");
	
		case 65:
			return joaat("WEAPON_MACHETE");
	
		case 68:
			return joaat("WEAPON_MACHINEPISTOL");
	
		case 66:
			return joaat("WEAPON_DBSHOTGUN");
	
		case 67:
			return joaat("WEAPON_COMPACTRIFLE");
	
		case 69:
			return joaat("WEAPON_FLASHLIGHT");
	
		case 70:
			return joaat("WEAPON_REVOLVER");
	
		case 71:
			return joaat("WEAPON_SWITCHBLADE");
	
		case 36:
			return joaat("WEAPON_HAMMER");
	
		case 4:
			return joaat("WEAPON_PISTOL50");
	
		case 6:
			return joaat("WEAPON_ASSAULTSMG");
	
		case 41:
			return joaat("WEAPON_MOLOTOV");
	
		case 39:
			return joaat("WEAPON_GOLFCLUB");
	
		case 38:
			return joaat("WEAPON_CROWBAR");
	
		case 37:
			return joaat("WEAPON_BAT");
	
		case 72:
			return joaat("WEAPON_AUTOSHOTGUN");
	
		case 73:
			return joaat("WEAPON_MINISMG");
	
		case 74:
			return joaat("WEAPON_COMPACTLAUNCHER");
	
		case 75:
			return joaat("WEAPON_BATTLEAXE");
	
		case 76:
			return joaat("WEAPON_PIPEBOMB");
	
		case 77:
			return joaat("WEAPON_POOLCUE");
	
		case 78:
			return joaat("WEAPON_WRENCH");
	
		case 79:
			return joaat("WEAPON_DOUBLEACTION");
	
		case 80:
			return joaat("WEAPON_STONE_HATCHET");
	
		case 81:
			return joaat("WEAPON_RAYPISTOL");
	
		case 82:
			return joaat("WEAPON_RAYCARBINE");
	
		case 83:
			return joaat("WEAPON_RAYMINIGUN");
	
		case 84:
			return joaat("WEAPON_NAVYREVOLVER");
	
		case 85:
			return joaat("WEAPON_CERAMICPISTOL");
	
		case 86:
			return joaat("WEAPON_COMBATSHOTGUN");
	
		case 88:
			return joaat("WEAPON_MILITARYRIFLE");
	
		case 87:
			return joaat("WEAPON_GADGETPISTOL");
	
		case 10:
			return joaat("WEAPON_HEAVYRIFLE");
	
		case 89:
			return joaat("WEAPON_EMPLAUNCHER");
	
		case 90:
			return joaat("WEAPON_FERTILIZERCAN");
	
		case 91:
			return joaat("WEAPON_STUNGUN_MP");
	
		case 92:
			return joaat("WEAPON_METALDETECTOR");
	
		case 93:
			return joaat("WEAPON_TACTICALRIFLE");
	
		case 94:
			return joaat("WEAPON_PRECISIONRIFLE");
	
		case 95:
			return 465894841;
	
		case 96:
			return 1703483498;
	
		case 97:
			return -22923932;
	
		case 98:
			return 350597077;
	
		case 99:
			return joaat("WEAPON_BATTLERIFLE");
	
		case 101:
			return -624951259;
	
		case 102:
			return -1916886713;
	}

	return joaat("WEAPON_UNARMED");
}

var func_96(BOOL bParam0, var uParam1, var uParam2) // Position - 0xD0B2 (53426)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

ePedComponentType func_97(int iParam0, int iParam1) // Position - 0xD0C9 (53449)
{
	Hash statHash;
	int outValue;

	statHash = func_98(iParam0, iParam1);

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

Hash func_98(int iParam0, int iParam1) // Position - 0xD0ED (53485)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_56(iParam1));
}

ePedComponentType func_99(ePedComponentType epctParam0) // Position - 0xD103 (53507)
{
	int num;
	BOOL flag;

	flag = epctParam0;

	if (flag < false)
	{
		num = 1;
		func_100(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

void func_100(var uParam0, int iParam1) // Position - 0xD143 (53571)
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

ePedComponentType func_101() // Position - 0xD158 (53592)
{
	int num;
	int num2;

	num2 = 0;
	num = func_261(2828, -1);

	if (_STAT_GET_PACKED_BOOL(42002, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 19))
	{
		_STAT_SET_PACKED_BOOL(42002, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42003, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 20))
	{
		_STAT_SET_PACKED_BOOL(42003, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42006, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 21))
	{
		_STAT_SET_PACKED_BOOL(42006, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42007, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 22))
	{
		_STAT_SET_PACKED_BOOL(42007, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42005, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 23))
	{
		_STAT_SET_PACKED_BOOL(42005, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42004, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 24))
	{
		_STAT_SET_PACKED_BOOL(42004, true, -1);
		num2 = num2 + 1;
	}

	num = func_261(5631, -1);

	if (_STAT_GET_PACKED_BOOL(42012, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 5))
	{
		_STAT_SET_PACKED_BOOL(42012, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42011, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 6))
	{
		_STAT_SET_PACKED_BOOL(42011, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42008, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 7))
	{
		_STAT_SET_PACKED_BOOL(42008, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42013, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 8))
	{
		_STAT_SET_PACKED_BOOL(42013, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42009, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 9))
	{
		_STAT_SET_PACKED_BOOL(42009, true, -1);
		num2 = num2 + 1;
	}

	if (_STAT_GET_PACKED_BOOL(42010, -1))
	{
		num2 = num2 + 1;
	}
	else if (IS_BIT_SET(num, 10))
	{
		_STAT_SET_PACKED_BOOL(42010, true, -1);
		num2 = num2 + 1;
	}

	func_91(41247, num2, -1);
	return num2;
}

int func_102(BOOL bParam0) // Position - 0xD39D (54173)
{
	if (bParam0)
		return 1;

	return 0;
}

int _STAT_GET_PACKED_INT(int iParam0, int iParam1) // Position - 0xD3AF (54191)
{
	if (iParam1 == -1)
		iParam1 = func_11();

	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

BOOL func_104(int iParam0, var uParam1) // Position - 0xD3CB (54219)
{
	int i;

	for (i = uParam1->f_1; i <= 4; i = i + 1)
	{
		uParam1->f_2 = func_105(iParam0, *uParam1, i);
	
		if (uParam1->f_2 != -1)
		{
			uParam1->f_2.f_2 = func_69(*uParam1, uParam1->f_2);
			uParam1->f_2.f_1 = func_87(*uParam1, uParam1->f_2);
		
			if (uParam1->f_2.f_1 >= uParam1->f_2.f_2)
			{
				uParam1->f_2 = -1;
			}
			else
			{
				uParam1->f_1 = i;
				return true;
			}
		}
	}

	return false;
}

int func_105(int iParam0, int iParam1, int iParam2) // Position - 0xD443 (54339)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 54653:
							return 72;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 28313:
						case 28314:
						case 28315:
						case 28316:
						case 28317:
						case 28318:
							return 80;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 28313:
						case 28314:
						case 28315:
						case 28316:
						case 28317:
						case 28318:
							return 82;
					}
					break;
			}
			break;
	
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 51280:
							return 0;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 51285:
							return 1;
					
						case 51278:
							return 2;
					}
					break;
			
				case 2:
					if (func_102(_STAT_GET_PACKED_BOOL(51286, -1)) + func_102(_STAT_GET_PACKED_BOOL(51287, -1)) + func_102(_STAT_GET_PACKED_BOOL(51288, -1)) + func_102(_STAT_GET_PACKED_BOOL(51289, -1)) + func_102(_STAT_GET_PACKED_BOOL(51290, -1)) + func_102(_STAT_GET_PACKED_BOOL(51291, -1)) == 1)
						return 3;
				
					switch (iParam0)
					{
						case 51286:
						case 51287:
						case 51288:
						case 51289:
						case 51290:
						case 51291:
							return 4;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 51292:
						case 51293:
						case 51294:
						case 51295:
						case 51296:
						case 51297:
							return 6;
					
						case 51279:
							return 7;
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9539:
							return 86;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9547:
						case 9548:
							return 92;
					
						case 9542:
							return 93;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9543:
						case 9544:
						case 9545:
						case 9546:
							return 96;
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9537:
							return 99;
					
						case 7639:
							return 100;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28272:
							return 8;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 28287:
							return 9;
					
						case 28286:
							return 10;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 28285:
							return 11;
					
						case 28284:
						case 28283:
							return 12;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 28282:
							return 14;
					
						case 28273:
						case 28274:
						case 28275:
						case 28276:
						case 28277:
						case 28278:
						case 28279:
						case 28280:
						case 28281:
							return 15;
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42038:
							return 112;
					
						case 42041:
							return 113;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 42044:
							return 114;
					
						case 42045:
							return 115;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42046:
							return 119;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 42047:
						case 42048:
						case 42049:
						case 42050:
						case 42051:
							return 122;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41566:
							return 17;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41706:
							return 19;
					
						case 41567:
						case 41568:
						case 41569:
						case 41570:
						case 41571:
						case 41572:
							return 20;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41573:
						case 41574:
						case 41575:
						case 41576:
						case 41577:
						case 41578:
							return 21;
					
						case 41579:
						case 41580:
						case 41581:
						case 41582:
						case 41583:
						case 41584:
							return 22;
					
						case 41585:
						case 41586:
						case 41587:
						case 41588:
						case 41589:
						case 41590:
							return 23;
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42037:
							return 125;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41660:
						case 41661:
						case 41662:
						case 41663:
						case 41664:
						case 41665:
						case 41666:
						case 41667:
						case 41668:
						case 41669:
						case 41670:
							return 135;
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 36870:
							return 179;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36831:
						case 36832:
						case 36833:
						case 36834:
						case 36835:
						case 36836:
						case 36837:
						case 36838:
							return 185;
					}
					break;
			}
			break;
	
		case 29:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41672:
							return 323;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41332:
							return 327;
					
						case 41331:
							return 328;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41333:
						case 41334:
						case 41335:
						case 41336:
						case 41337:
						case 41338:
							return 25;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41707:
							return 27;
					
						case 41339:
						case 41340:
						case 41341:
						case 41342:
						case 41343:
						case 41344:
							return 28;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41345:
						case 41346:
						case 41347:
						case 41348:
						case 41349:
						case 41350:
							return 29;
					
						case 41351:
						case 41352:
						case 41353:
						case 41354:
						case 41355:
						case 41356:
							return 30;
					
						case 41357:
						case 41358:
						case 41359:
						case 41360:
						case 41361:
						case 41362:
							return 31;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 41379:
							return 33;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41708:
							return 35;
					
						case 41380:
						case 41381:
						case 41382:
						case 41383:
						case 41384:
						case 41385:
							return 36;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41386:
						case 41387:
						case 41388:
						case 41389:
						case 41390:
						case 41391:
							return 37;
					
						case 41392:
						case 41393:
						case 41394:
						case 41395:
						case 41396:
						case 41397:
							return 38;
					
						case 41398:
						case 41399:
						case 41400:
						case 41401:
						case 41402:
						case 41403:
							return 39;
					}
					break;
			}
			break;
	
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41404:
						case 41405:
						case 41406:
						case 41407:
						case 41408:
						case 41409:
							return 40;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41410:
							return 41;
					
						case 41404:
						case 41405:
						case 41406:
						case 41407:
						case 41408:
						case 41409:
							return 42;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41709:
							return 43;
					
						case 41411:
						case 41412:
						case 41413:
						case 41414:
						case 41415:
						case 41416:
							return 44;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41417:
						case 41418:
						case 41419:
						case 41420:
						case 41421:
						case 41422:
							return 45;
					
						case 41423:
						case 41424:
						case 41425:
						case 41426:
						case 41427:
						case 41428:
							return 46;
					
						case 41429:
						case 41430:
						case 41431:
						case 41432:
						case 41433:
						case 41434:
							return 47;
					}
					break;
			}
			break;
	
		case 6:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41436:
						case 41437:
						case 41438:
						case 41439:
						case 41440:
						case 41441:
						case 41442:
						case 41443:
							return 48;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41435:
							return 49;
					
						case 41436:
						case 41437:
						case 41438:
						case 41439:
						case 41440:
						case 41441:
						case 41442:
						case 41443:
							return 50;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41705:
							return 51;
					
						case 41444:
						case 41445:
						case 41446:
						case 41447:
						case 41448:
						case 41449:
						case 41450:
						case 41451:
							return 52;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41452:
						case 41453:
						case 41454:
						case 41455:
						case 41456:
						case 41457:
						case 41458:
						case 41459:
							return 53;
					
						case 41460:
						case 41461:
						case 41462:
						case 41463:
						case 41464:
						case 41465:
						case 41466:
						case 41467:
							return 54;
					
						case 41468:
						case 41469:
						case 41470:
						case 41471:
						case 41472:
						case 41473:
						case 41474:
						case 41475:
							return 55;
					}
					break;
			}
			break;
	
		case 7:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41476:
						case 41477:
						case 41478:
						case 41479:
						case 41480:
						case 41481:
							return 56;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41506:
							return 57;
					
						case 41476:
						case 41477:
						case 41478:
						case 41479:
						case 41480:
						case 41481:
							return 58;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41710:
							return 59;
					
						case 41482:
						case 41483:
						case 41484:
						case 41485:
						case 41486:
						case 41487:
							return 60;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41488:
						case 41489:
						case 41490:
						case 41491:
						case 41492:
						case 41493:
							return 61;
					
						case 41494:
						case 41495:
						case 41496:
						case 41497:
						case 41498:
						case 41499:
							return 62;
					
						case 41500:
						case 41501:
						case 41502:
						case 41503:
						case 41504:
						case 41505:
							return 63;
					}
					break;
			}
			break;
	
		case 8:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42015:
						case 42016:
						case 42017:
						case 42018:
						case 42019:
						case 42020:
						case 42021:
						case 42022:
							return 64;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41539:
							return 65;
					
						case 42015:
						case 42016:
						case 42017:
						case 42018:
						case 42019:
						case 42020:
						case 42021:
						case 42022:
							return 66;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41711:
							return 67;
					
						case 41507:
						case 41508:
						case 41509:
						case 41510:
						case 41511:
						case 41512:
						case 41513:
						case 41514:
							return 68;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41515:
						case 41516:
						case 41517:
						case 41518:
						case 41519:
						case 41520:
						case 41521:
						case 41522:
							return 69;
					
						case 41523:
						case 41524:
						case 41525:
						case 41526:
						case 41527:
						case 41528:
						case 41529:
						case 41530:
							return 70;
					
						case 41531:
						case 41532:
						case 41533:
						case 41534:
						case 41535:
						case 41536:
						case 41537:
						case 41538:
							return 71;
					}
					break;
			}
			break;
	
		case 33:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36935:
							return 360;
					
						case 36936:
							return 361;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36937:
							return 362;
					
						case 36938:
							return 363;
					
						case 36920:
							return 364;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36946:
							return 367;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 15456:
						case 15457:
						case 15458:
						case 15459:
						case 15460:
							return 371;
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28257:
							return 137;
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 31737:
							return 228;
					
						case 41870:
							return 229;
					
						case 31753:
							return 230;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 32397:
							return 235;
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 30309:
							return 254;
					
						case 30522:
							return 255;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41677:
							return 260;
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 28270:
							return 268;
					
						case 36842:
							return 269;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 32399:
							return 272;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42025:
							return 275;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41678:
						case 41679:
						case 41680:
						case 41681:
							return 277;
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 27089:
							return 241;
					
						case 27090:
							return 242;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36916:
							return 245;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36844:
						case 36845:
						case 36846:
						case 36847:
						case 36848:
						case 36849:
						case 36850:
						case 36851:
						case 36852:
						case 36853:
						case 36854:
						case 36855:
						case 36856:
						case 36857:
						case 36858:
						case 36859:
							return 247;
					
						case 41548:
						case 41549:
						case 41550:
						case 41551:
						case 41552:
						case 41553:
							return 248;
					
						case 41868:
							return 249;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41560:
						case 41561:
						case 41562:
						case 41563:
						case 41564:
						case 41565:
							return 251;
					
						case 41554:
						case 41555:
						case 41556:
						case 41557:
						case 41558:
						case 41559:
							return 252;
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 18139:
							return 280;
					
						case 36861:
							return 281;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41712:
							return 283;
					
						case 36862:
							return 284;
					
						case 41713:
							return 285;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36863:
							return 286;
					
						case 41714:
							return 287;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41685:
						case 41690:
						case 41696:
							return 290;
					
						case 41697:
						case 41698:
						case 41699:
							return 291;
					}
					break;
			}
			break;
	
		case 27:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 25009:
							return 306;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41647:
						case 41648:
						case 41649:
						case 41650:
						case 41651:
						case 41652:
						case 41653:
						case 41654:
						case 41655:
							return 307;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41647:
						case 41648:
						case 41649:
						case 41650:
						case 41651:
						case 41652:
						case 41653:
						case 41654:
						case 41655:
							return 310;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 22067:
							return 150;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36944:
							return 155;
					
						case 36868:
							return 154;
					
						case 22082:
						case 22083:
						case 15533:
							return 153;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 22067:
						case 22082:
						case 22083:
						case 15533:
							return 156;
					
						case 41989:
							return 157;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 15966:
							return 163;
					
						case 41676:
							return 165;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 32398:
							return 166;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36924:
							return 171;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36925:
						case 36926:
						case 36927:
						case 36928:
						case 36929:
						case 36930:
						case 36931:
						case 36932:
							return 174;
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42029:
						case 42030:
						case 42031:
						case 42032:
						case 42033:
						case 42034:
						case 42035:
						case 42036:
							return 191;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41874:
						case 41875:
						case 41876:
						case 41877:
						case 41878:
						case 41879:
						case 41880:
						case 41881:
						case 41882:
						case 41883:
							return 192;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 42029:
						case 42030:
						case 42031:
						case 42032:
						case 42033:
						case 42034:
						case 42035:
						case 42036:
							return 197;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41874:
						case 41875:
						case 41876:
						case 41877:
						case 41878:
						case 41879:
						case 41880:
						case 41881:
						case 41882:
						case 41883:
							return 198;
					
						case 41540:
						case 41541:
						case 41542:
						case 41543:
						case 41544:
						case 41545:
						case 41546:
						case 41547:
							return 199;
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36871:
							return 202;
					
						case 36872:
							return 203;
					
						case 36875:
						case 36884:
						case 36885:
						case 36877:
						case 36880:
						case 36878:
						case 36883:
						case 36876:
						case 36882:
						case 36881:
						case 36879:
						case 36887:
						case 36886:
							return 204;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36873:
							return 205;
					
						case 42001:
							return 206;
					
						case 36874:
							return 207;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 36875:
						case 36884:
						case 36885:
						case 36877:
						case 36880:
						case 36878:
						case 36883:
						case 36876:
						case 36882:
						case 36881:
						case 36879:
						case 36887:
						case 36886:
							return 208;
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36888:
							return 215;
					
						case 36889:
							return 216;
					
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 217;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 36890:
							return 218;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 7559:
						case 7589:
						case 7592:
						case 7577:
						case 7568:
						case 7583:
						case 7571:
						case 7574:
						case 7586:
						case 7562:
						case 7553:
							return 221;
					
						case 36891:
							return 222;
					
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 223;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 36892:
						case 36893:
						case 36894:
						case 36895:
						case 36896:
						case 36897:
						case 36898:
						case 36899:
						case 36900:
						case 36901:
						case 36902:
						case 36903:
						case 36904:
						case 36905:
						case 36906:
						case 36907:
						case 36908:
						case 36909:
						case 36910:
						case 36911:
						case 36912:
						case 36913:
						case 36945:
						case 36914:
						case 36915:
							return 224;
					
						case 36860:
						case 36839:
						case 36841:
						case 36843:
						case 36864:
						case 36865:
							return 225;
					}
					break;
			}
			break;
	
		case 30:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 42023:
							return 330;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41363:
						case 41364:
						case 41365:
						case 41366:
						case 41367:
						case 41368:
						case 41369:
						case 41370:
						case 41371:
						case 41372:
						case 41373:
						case 41374:
						case 41375:
						case 41376:
						case 41377:
						case 41378:
						case 42026:
						case 42027:
						case 42028:
						case 42150:
						case 42151:
							return 331;
					}
					break;
			}
			break;
	
		case 28:
			switch (iParam0)
			{
				case 41594:
				case 41595:
				case 41596:
				case 41597:
				case 41598:
				case 41599:
				case 41600:
				case 41601:
				case 41602:
				case 41603:
				case 41604:
				case 41605:
				case 41606:
				case 41607:
				case 41608:
				case 41609:
				case 41610:
				case 41611:
				case 41612:
				case 41613:
				case 41614:
				case 41615:
				case 41616:
				case 41617:
				case 41618:
				case 41619:
				case 41620:
				case 41621:
				case 41622:
				case 41623:
				case 41624:
				case 41625:
				case 41626:
				case 41627:
				case 41628:
				case 41629:
				case 41630:
				case 41631:
				case 41632:
				case 41633:
				case 41634:
				case 41635:
				case 41636:
				case 41637:
				case 41638:
				case 41639:
				case 41640:
				case 41641:
				case 41642:
				case 41643:
				case 41644:
				case 41645:
				case 41646:
				case 41656:
				case 51339:
					switch (iParam2)
					{
						case 0:
							return 314;
					
						case 2:
							return 317;
					
						case 3:
							return 319;
					}
					break;
			
				case 36840:
					switch (iParam2)
					{
						case 1:
							return 315;
					}
					break;
			
				case 36921:
					switch (iParam2)
					{
						case 3:
							return 321;
					}
					break;
			}
			break;
	
		case 26:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 36867:
							return 293;
					
						case 36933:
							return 294;
					
						case 41700:
							return 295;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41715:
							return 296;
					
						case 41716:
							return 297;
					
						case 41717:
							return 298;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41718:
							return 299;
					
						case 41719:
							return 300;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41701:
						case 41702:
						case 41703:
						case 41704:
						case 36917:
							return 304;
					
						case 42000:
							return 305;
					}
					break;
			}
			break;
	
		case 32:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 41864:
							return 346;
					
						case 42014:
							return 347;
					
						case 41865:
							return 348;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 41863:
							return 349;
					
						case 41840:
							return 350;
					
						case 41839:
							return 351;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 41841:
							return 352;
					
						case 41838:
							return 353;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 41866:
							return 356;
					
						case 41842:
						case 41843:
						case 41844:
						case 41845:
						case 41846:
						case 41847:
						case 41848:
						case 41849:
						case 41850:
						case 41851:
						case 41852:
						case 41853:
						case 41854:
						case 41855:
						case 41856:
						case 41857:
						case 41858:
						case 41859:
						case 41860:
						case 41861:
						case 41862:
							return 357;
					}
					break;
			}
			break;
	}

	return -1;
}

int func_106(int iParam0) // Position - 0xF527 (62759)
{
	int num;
	int num2;
	int num3;
	int i;

	num = func_66(iParam0);
	num2 = func_261(num, -1);
	num3 = func_64(iParam0, 0);

	for (i = 0; i < 4; i = i + 1)
	{
		if (!IS_BIT_SET(num2, num3 + i))
			return i;
	}

	return 4;
}

BOOL func_107(int iParam0, BOOL bParam1) // Position - 0xF56D (62829)
{
	if (iParam0 == -1)
		return false;

	if (bParam1)
		return false;

	return true;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0xF589 (62857)
{
	if (iParam1 == -1)
		iParam1 = func_11();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_109(int iParam0) // Position - 0xF5A5 (62885)
{
	switch (iParam0)
	{
		case 54653:
		case 28313:
		case 28314:
		case 28315:
		case 28316:
		case 28317:
		case 28318:
			return 9;
	
		case 51280:
		case 51285:
		case 51278:
		case 51286:
		case 51287:
		case 51288:
		case 51289:
		case 51290:
		case 51291:
		case 51292:
		case 51293:
		case 51294:
		case 51295:
		case 51296:
		case 51297:
		case 51279:
			return 0;
	
		case 9539:
		case 9547:
		case 9548:
		case 9542:
		case 9543:
		case 9544:
		case 9545:
		case 9546:
			return 10;
	
		case 9537:
		case 7639:
			return 11;
	
		case 28272:
		case 28287:
		case 28286:
		case 28285:
		case 28284:
		case 28283:
		case 28282:
		case 28273:
		case 28274:
		case 28275:
		case 28276:
		case 28277:
		case 28278:
		case 28279:
		case 28280:
		case 28281:
			return 1;
	
		case 42038:
		case 42041:
		case 42044:
		case 42045:
		case 42046:
		case 42047:
		case 42048:
		case 42049:
		case 42050:
		case 42051:
			return 12;
	
		case 41567:
		case 41568:
		case 41569:
		case 41570:
		case 41571:
		case 41572:
		case 41573:
		case 41574:
		case 41575:
		case 41576:
		case 41577:
		case 41578:
		case 41579:
		case 41580:
		case 41581:
		case 41582:
		case 41583:
		case 41584:
		case 41585:
		case 41586:
		case 41587:
		case 41588:
		case 41589:
		case 41590:
		case 41706:
		case 41566:
			return 2;
	}

	switch (iParam0)
	{
		case 41660:
		case 41661:
		case 41662:
		case 41663:
		case 41664:
		case 41665:
		case 41666:
		case 41667:
		case 41668:
		case 41669:
		case 41670:
		case 42037:
			return 13;
	
		case 41333:
		case 41334:
		case 41335:
		case 41336:
		case 41337:
		case 41338:
		case 41339:
		case 41340:
		case 41341:
		case 41342:
		case 41343:
		case 41344:
		case 41345:
		case 41346:
		case 41347:
		case 41348:
		case 41349:
		case 41350:
		case 41351:
		case 41352:
		case 41353:
		case 41354:
		case 41355:
		case 41356:
		case 41357:
		case 41358:
		case 41359:
		case 41360:
		case 41361:
		case 41362:
		case 41707:
			return 3;
	
		case 41379:
		case 41380:
		case 41381:
		case 41382:
		case 41383:
		case 41384:
		case 41385:
		case 41386:
		case 41387:
		case 41388:
		case 41389:
		case 41390:
		case 41391:
		case 41392:
		case 41393:
		case 41394:
		case 41395:
		case 41396:
		case 41397:
		case 41398:
		case 41399:
		case 41400:
		case 41401:
		case 41402:
		case 41403:
		case 41708:
			return 4;
	
		case 41404:
		case 41405:
		case 41406:
		case 41407:
		case 41408:
		case 41409:
		case 41410:
		case 41411:
		case 41412:
		case 41413:
		case 41414:
		case 41415:
		case 41416:
		case 41417:
		case 41418:
		case 41419:
		case 41420:
		case 41421:
		case 41422:
		case 41423:
		case 41424:
		case 41425:
		case 41426:
		case 41427:
		case 41428:
		case 41429:
		case 41430:
		case 41431:
		case 41432:
		case 41433:
		case 41434:
		case 41709:
			return 5;
	
		case 41436:
		case 41437:
		case 41438:
		case 41439:
		case 41440:
		case 41441:
		case 41442:
		case 41443:
		case 41435:
		case 41444:
		case 41445:
		case 41446:
		case 41447:
		case 41448:
		case 41449:
		case 41450:
		case 41451:
		case 41452:
		case 41453:
		case 41454:
		case 41455:
		case 41456:
		case 41457:
		case 41458:
		case 41459:
		case 41460:
		case 41461:
		case 41462:
		case 41463:
		case 41464:
		case 41465:
		case 41466:
		case 41467:
		case 41468:
		case 41469:
		case 41470:
		case 41471:
		case 41472:
		case 41473:
		case 41474:
		case 41475:
		case 41705:
			return 6;
	}

	switch (iParam0)
	{
		case 41476:
		case 41477:
		case 41478:
		case 41479:
		case 41480:
		case 41481:
		case 41506:
		case 41482:
		case 41483:
		case 41484:
		case 41485:
		case 41486:
		case 41487:
		case 41488:
		case 41489:
		case 41490:
		case 41491:
		case 41492:
		case 41493:
		case 41494:
		case 41495:
		case 41496:
		case 41497:
		case 41498:
		case 41499:
		case 41500:
		case 41501:
		case 41502:
		case 41503:
		case 41504:
		case 41505:
		case 41710:
			return 7;
	
		case 41539:
		case 42015:
		case 42016:
		case 42017:
		case 42018:
		case 42019:
		case 42020:
		case 42021:
		case 42022:
		case 41507:
		case 41508:
		case 41509:
		case 41510:
		case 41511:
		case 41512:
		case 41513:
		case 41514:
		case 41515:
		case 41516:
		case 41517:
		case 41518:
		case 41519:
		case 41520:
		case 41521:
		case 41522:
		case 41523:
		case 41524:
		case 41525:
		case 41526:
		case 41527:
		case 41528:
		case 41529:
		case 41530:
		case 41531:
		case 41532:
		case 41533:
		case 41534:
		case 41535:
		case 41536:
		case 41537:
		case 41538:
		case 41711:
			return 8;
	
		case 36870:
		case 36831:
		case 36832:
		case 36833:
		case 36834:
		case 36835:
		case 36836:
		case 36837:
		case 36838:
			return 17;
	
		case 41332:
		case 41331:
		case 41672:
			return 29;
	}

	switch (iParam0)
	{
		case 36935:
		case 36937:
		case 36938:
		case 15456:
		case 15457:
		case 15458:
		case 15459:
		case 15460:
		case 36920:
		case 36946:
		case 36936:
			return 33;
	
		case 28257:
			return 14;
	
		case 31737:
		case 31753:
		case 32397:
		case 41870:
			return 21;
	
		case 30309:
		case 30522:
		case 41677:
			return 23;
	
		case 41678:
		case 41679:
		case 41680:
		case 41681:
		case 36842:
		case 32399:
		case 28270:
		case 42025:
			return 24;
	
		case 27089:
		case 27090:
		case 36916:
		case 41548:
		case 41549:
		case 41550:
		case 41551:
		case 41552:
		case 41553:
		case 41560:
		case 41561:
		case 41562:
		case 41563:
		case 41564:
		case 41565:
		case 41554:
		case 41555:
		case 41556:
		case 41557:
		case 41558:
		case 41559:
		case 36844:
		case 36845:
		case 36846:
		case 36847:
		case 36848:
		case 36849:
		case 36850:
		case 36851:
		case 36852:
		case 36853:
		case 36854:
		case 36855:
		case 36856:
		case 36857:
		case 36858:
		case 36859:
		case 41868:
			return 22;
	
		case 41685:
		case 41690:
		case 41696:
		case 41697:
		case 41698:
		case 41699:
		case 36861:
		case 36862:
		case 36863:
		case 41712:
		case 41713:
		case 41714:
		case 18139:
			return 25;
	}

	switch (iParam0)
	{
		case 41647:
		case 41648:
		case 41649:
		case 41650:
		case 41651:
		case 41652:
		case 41653:
		case 41654:
		case 41655:
		case 25009:
			return 27;
	
		case 22067:
		case 36944:
		case 36868:
		case 22082:
		case 22083:
		case 15533:
		case 41989:
			return 15;
	
		case 15966:
		case 41676:
		case 32398:
		case 36924:
		case 36925:
		case 36926:
		case 36927:
		case 36928:
		case 36929:
		case 36930:
		case 36931:
		case 36932:
			return 16;
	
		case 41540:
		case 41541:
		case 41542:
		case 41543:
		case 41544:
		case 41545:
		case 41546:
		case 41547:
		case 41874:
		case 41875:
		case 41876:
		case 41877:
		case 41878:
		case 41879:
		case 41880:
		case 41881:
		case 41882:
		case 41883:
		case 42029:
		case 42030:
		case 42031:
		case 42032:
		case 42033:
		case 42034:
		case 42035:
		case 42036:
			return 18;
	
		case 36875:
		case 36884:
		case 36885:
		case 36877:
		case 36880:
		case 36878:
		case 36883:
		case 36876:
		case 36882:
		case 36881:
		case 36879:
		case 36887:
		case 36886:
		case 36873:
		case 36874:
		case 36871:
		case 36872:
		case 42001:
			return 19;
	
		case 36890:
		case 36891:
		case 36888:
		case 36889:
		case 36860:
		case 36839:
		case 36841:
		case 36843:
		case 36864:
		case 36865:
		case 7559:
		case 7589:
		case 7592:
		case 7577:
		case 7568:
		case 7583:
		case 7571:
		case 7574:
		case 7586:
		case 7562:
		case 7553:
		case 36892:
		case 36893:
		case 36894:
		case 36895:
		case 36896:
		case 36897:
		case 36898:
		case 36899:
		case 36900:
		case 36901:
		case 36902:
		case 36903:
		case 36904:
		case 36905:
		case 36906:
		case 36907:
		case 36908:
		case 36909:
		case 36910:
		case 36911:
		case 36912:
		case 36913:
		case 36945:
		case 36914:
		case 36915:
			return 20;
	}

	switch (iParam0)
	{
		case 41363:
		case 41364:
		case 41365:
		case 41366:
		case 41367:
		case 41368:
		case 41369:
		case 41370:
		case 41371:
		case 41372:
		case 41373:
		case 41374:
		case 41375:
		case 41376:
		case 41377:
		case 41378:
		case 42023:
		case 42026:
		case 42027:
		case 42028:
		case 42150:
		case 42151:
			return 30;
	
		case 41594:
		case 41595:
		case 41596:
		case 41597:
		case 41598:
		case 41599:
		case 41600:
		case 41601:
		case 41602:
		case 41603:
		case 41604:
		case 41605:
		case 41606:
		case 41607:
		case 41608:
		case 41609:
		case 41610:
		case 41611:
		case 41612:
		case 41613:
		case 41614:
		case 41615:
		case 41616:
		case 41617:
		case 41618:
		case 41619:
		case 41620:
		case 41621:
		case 41622:
		case 41623:
		case 41624:
		case 41625:
		case 41626:
		case 41627:
		case 41628:
		case 41629:
		case 41630:
		case 41631:
		case 41632:
		case 41633:
		case 41634:
		case 41635:
		case 41636:
		case 41637:
		case 41638:
		case 41639:
		case 41640:
		case 41641:
		case 41642:
		case 41643:
		case 41644:
		case 41645:
		case 41646:
		case 41656:
		case 51339:
		case 36840:
		case 36921:
			return 28;
	
		case 36867:
		case 36933:
		case 41700:
		case 41701:
		case 41702:
		case 41703:
		case 41704:
		case 36917:
		case 41715:
		case 41716:
		case 41717:
		case 41718:
		case 41719:
		case 42000:
			return 26;
	
		case 41864:
		case 41865:
		case 41840:
		case 41839:
		case 41841:
		case 41838:
		case 41866:
		case 41863:
		case 41842:
		case 41843:
		case 41844:
		case 41845:
		case 41846:
		case 41847:
		case 41848:
		case 41849:
		case 41850:
		case 41851:
		case 41852:
		case 41853:
		case 41854:
		case 41855:
		case 41856:
		case 41857:
		case 41858:
		case 41859:
		case 41860:
		case 41861:
		case 41862:
		case 42014:
			return 32;
	}

	return -1;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1060C (67084)
{
	if (iParam2 == -1)
		iParam2 = func_11();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_111(char* sParam0, ePedComponentType epctParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1062A (67114)
{
	int num;
	int playerTeam;
	var playerName;
	BOOL isLeader;
	BOOL flag;

	num = -1;
	playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam1);

	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), epctParam1) || bParam3)
	{
		if (func_12(epctParam1))
		{
			if (!bParam2)
				TEXT_LABEL_ASSIGN_STRING(&playerName, PLAYER::GET_PLAYER_NAME(epctParam1), 64);
			else
				TEXT_LABEL_ASSIGN_STRING(&playerName, PLAYER::GET_PLAYER_NAME(epctParam1), 64);
		
			MISC::IS_STRING_NULL_OR_EMPTY(&playerName);
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		
			if (playerTeam != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && playerTeam < 4)
				if (Global_4718592.f_132409[playerTeam] != PV_COMP_INVALID)
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_164(playerTeam, epctParam1, false));
				else
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_120(epctParam1, -2, true, false, false));
			else
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_120(epctParam1, -2, true, false, false));
		
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(&playerName));
		
			if (!bParam4)
			{
				num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2707987 = { GET_GAMER_HANDLE_PLAYER(epctParam1) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707917, 35, &Global_2707987))
				{
					isLeader = false;
				
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2707917.f_22), "Leader") && Global_2707917.f_30 == 0)
						isLeader = true;
				
					if (Global_2707917.f_21 > 0)
						flag = false;
					else
						flag = true;
				
					if (bParam5)
					{
						if (bParam6)
							playerName = { func_116(&playerName) };
					
						num = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(flag, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707917, 35), &(Global_2707917.f_17), Global_2707917.f_30, isLeader, false, Global_2707917, &playerName, Global_1576246, Global_1576247, Global_1576248);
					}
					else
					{
						num = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(flag, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2707917, 35), &(Global_2707917.f_17), Global_2707917.f_30, isLeader, false, Global_2707917, Global_1576246, Global_1576247, Global_1576248);
					}
				}
				else
				{
					num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
		
			func_112(14, sParam0, 1, &playerName, false, false, false, 0, 1, 0, 0, 0);
		}
	}

	return num;
}

void func_112(int iParam0, char* sParam1, int iParam2, char* sParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0x107F6 (67574)
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_9(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_113(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1940171.f_5[num /*53*/] = iParam0;
		Global_1940171.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1940171.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1940171.f_5[num /*53*/].f_2[0] = bParam4;
		Global_1940171.f_5[num /*53*/].f_2[1] = bParam5;
		Global_1940171.f_5[num /*53*/].f_2[2] = bParam6;
		Global_1940171.f_5[num /*53*/].f_7 = iParam7;
		Global_1940171.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1940171.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1940171.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_113(int iParam0) // Position - 0x108FE (67838)
{
	int i;

	for (i = 0; i <= Global_1940171 - 1; i = i + 1)
	{
		if (iParam0 > Global_1940171.f_5[i /*53*/].f_1)
		{
			func_114(i);
			return i;
		}
	}

	Global_1940171 = Global_1940171 + 1;

	if (Global_1940171 > 5)
	{
		Global_1940171 = 5;
		return Global_1940171;
	}

	return Global_1940171 - 1;
}

void func_114(int iParam0) // Position - 0x10960 (67936)
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1940171.f_5[i /*53*/] = { Global_1940171.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x10999 (67993)
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_116(char* sParam0) // Position - 0x109AA (68010)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>", 64);
	return unk;
}

struct<13> GET_GAMER_HANDLE_PLAYER(ePedComponentType epctParam0) // Position - 0x109D5 (68053)
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(epctParam0, &gamerHandle, 13);
	return gamerHandle;
}

const char* func_118(char* sParam0) // Position - 0x109EC (68076)
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "<C>", 64);
	TEXT_LABEL_APPEND_STRING(&unk, sParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "</C>~s~", 64);
	return func_119(&unk);
}

const char* func_119(var uParam0) // Position - 0x10A10 (68112)
{
	return uParam0;
}

ePedComponentType func_120(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10A1A (68122)
{
	int playerTeam;
	Ped ped;

	if (!func_12(epctParam0))
		return PV_COMP_BERD;

	if (func_162(epctParam0) && !bParam4)
		if (bParam2)
			return PV_COMP_HEAD;
		else
			return PV_COMP_BERD;

	if (iParam1 == -2)
	{
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	
		if (playerTeam > -1 && playerTeam < 4)
			if (Global_4718592.f_132409[playerTeam] != PV_COMP_INVALID)
				iParam1 = playerTeam;
	}

	if (func_162(PLAYER::PLAYER_ID()) || func_161() && func_160() && !IS_BIT_SET(Global_2740191.f_4735, 31) && !bParam4)
	{
		ped = func_159();
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			if (PED::IS_PED_A_PLAYER(ped))
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped) != -1)
					if (_NETWORK_IS_PLAYER_VALID(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), false, true))
						if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
							if (Global_4718592.f_132409[iParam1] != PV_COMP_INVALID)
								return func_164(iParam1, epctParam0, false);
							else
								return func_133(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
						else
							return func_133(epctParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped), iParam1, bParam2, bParam3);
			else if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
				if (Global_4718592.f_132409[iParam1] != PV_COMP_INVALID)
					return func_164(iParam1, epctParam0, false);
				else
					return func_121(false, -1, false);
			else
				return func_121(false, -1, false);
	}

	if (iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION() && iParam1 < 4)
		if (Global_4718592.f_132409[iParam1] != PV_COMP_INVALID)
			return func_164(iParam1, epctParam0, false);
		else
			return func_133(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);

	return func_133(epctParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

ePedComponentType func_121(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x10C05 (68613)
{
	return func_122(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

ePedComponentType func_122(ePedComponentType epctParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x10C1B (68635)
{
	int playerTeam;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
		return 3;

	playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);

	if (func_132() || func_131() && func_129() && Global_1685416.f_1)
		if (bParam1)
			return func_128(iParam2, playerTeam);
		else
			return func_128(playerTeam, playerTeam);

	if (bParam1)
	{
		if (iParam2 > -1)
			if (func_6(playerTeam, iParam2, 0, -1) && !IS_BIT_SET(Global_4718592.f_16, 18))
				if (playerTeam == iParam2)
					return func_127(true);
				else
					return func_127(false);
			else if (bParam3)
				return 28;
			else if (IS_BIT_SET(Global_4718592.f_4, 20))
				return func_123(playerTeam, iParam2, true, 4);
			else
				return func_123(playerTeam, iParam2, false, 4);
	
		return 28;
	}

	if (playerTeam == iParam2 || iParam2 == -1)
		return func_127(true);

	return func_127(false);
}

// Unhandled jump detected. Output should be considered invalid
int func_123(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10D1D (68893)
{
	int num;

	num = func_126(iParam0, iParam1, iParam3);

	if (func_124(*Global_4718592.f_138116, true, true))
		if (num == 1)
			num = 0;

	if (bParam2)
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			case 3:
				return 31;
		
			case 4:
				return 32;
		
			case 5:
				return 33;
		
			case 6:
				return 34;
		
			case 7:
				return 35;
		
			case 8:
				return 36;
		
			case 9:
				return 37;
		
			case 10:
				return 38;
		
			case 11:
				return 39;
		
			case 12:
				return 40;
		
			case 13:
				return 41;
		
			case 14:
				return 42;
		
			case 15:
				return 43;
		
			default:
				goto 0x114;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				return 28;
		
			case 1:
				return 29;
		
			case 2:
				return 30;
		
			default:
			
		}
	}

	return 28;
}

BOOL func_124(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10E36 (69174)
{
	int i;

	if (bParam1)
		if (*Global_4718592.f_197275 == 65)
			return true;

	if (bParam2)
		if (func_125(*Global_4718592.f_197275, false))
			return true;

	if (hParam0 == 0)
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (hParam0 == Global_262145.f_9526[i])
			return true;
	}

	return false;
}

BOOL func_125(int iParam0, BOOL bParam1) // Position - 0x10EA2 (69282)
{
	if (iParam0 == 93)
		if (bParam1)
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
				return true;
		else
			return true;

	return false;
}

int func_126(int iParam0, int iParam1, int iParam2) // Position - 0x10ECE (69326)
{
	int i;
	int num;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (i == iParam1)
			return num;
		else if (!(iParam0 == i))
			if (!func_6(iParam0, i, 0, -1))
				num = num + 1;
	}

	return -1;
}

ePedComponentType func_127(BOOL bParam0) // Position - 0x10F16 (69398)
{
	if (bParam0)
		return 118;

	return 116;
}

int func_128(int iParam0, int iParam1) // Position - 0x10F2D (69421)
{
	if (iParam0 == -1)
		iParam0 = func_126(iParam1, iParam0, 4);

	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		default:
		
	}

	return 28;
}

BOOL func_129() // Position - 0x10F7B (69499)
{
	if (func_130())
		return true;

	return IS_BIT_SET(*Global_4718592.f_202175, 4);
}

BOOL func_130() // Position - 0x10F9A (69530)
{
	return IS_BIT_SET(*Global_4718592.f_190071, 12);
}

BOOL func_131() // Position - 0x10FAF (69551)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return IS_BIT_SET(*Global_4718592.f_202175, 0);

	return IS_BIT_SET(*Global_4718592.f_202175, 0) || Global_1922740 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0;
}

BOOL func_132() // Position - 0x10FF6 (69622)
{
	if (func_130() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	return false;
}

ePedComponentType func_133(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x11013 (69651)
{
	int playerTeam;
	BOOL flag;
	ePedComponentType type;
	int num;
	int num2;

	if (iParam2 == -2)
		playerTeam = PLAYER::GET_PLAYER_TEAM(epctParam0);
	else
		playerTeam = iParam2;

	if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 148)
		flag = true;

	type = epctParam0;

	if (type > PV_COMP_INVALID)
		if (Global_1845274[type /*877*/] == 148)
			flag = true;

	if (!flag)
	{
		if (playerTeam != -1)
		{
			if (func_143())
			{
				num = func_138(epctParam0);
			
				if (!(num == -1))
					return func_136(num);
			}
		
			if (func_135(epctParam1, epctParam0, playerTeam, 0) && !IS_BIT_SET(Global_4718592.f_16, 18) || func_6(PLAYER::GET_PLAYER_TEAM(epctParam1), PLAYER::GET_PLAYER_TEAM(epctParam0), 0, -1) && IS_BIT_SET(Global_4718592.f_16, 23) && !IS_BIT_SET(Global_4718592.f_16, 18))
				return func_127(true);
			else if (IS_BIT_SET(Global_4718592.f_16, 26))
				return func_134(true);
			else
				return func_122(epctParam1, true, playerTeam, bParam4);
		}
		else if (Global_1836744 || Global_1836734 || Global_1845274[epctParam0 /*877*/] == PV_COMP_HEAD)
		{
			if (epctParam0 == epctParam1 || Global_1836744 == true && Global_1836754 == false)
				return func_127(true);
			else
				return func_122(epctParam1, true, playerTeam, bParam4);
		}
	
		if (Global_1836738 && Global_1836208.f_14 == epctParam0)
			return 28;
	}

	num2 = func_138(epctParam0);

	if (!(num2 == -1))
		return func_136(num2);

	if (bParam3)
		return PV_COMP_HEAD;

	return PV_COMP_BERD;
}

ePedComponentType func_134(BOOL bParam0) // Position - 0x111AB (70059)
{
	if (bParam0)
		return 119;

	return 116;
}

BOOL func_135(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x111C2 (70082)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && PLAYER::GET_PLAYER_TEAM(epctParam1) == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(epctParam1);
	}
	else
	{
		if (iParam3 == 0)
			if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && iParam2 == -1)
				return false;
	
		return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
	}

	return PLAYER::GET_PLAYER_TEAM(epctParam0) == iParam2;
}

ePedComponentType func_136(int iParam0) // Position - 0x1123A (70202)
{
	int num;

	if (iParam0 > -1)
	{
		num = func_137(iParam0);
	
		switch (num)
		{
			case 0:
				return 192;
		
			case 1:
				return 193;
		
			case 2:
				return 194;
		
			case 3:
				return 195;
		
			case 4:
				return 196;
		
			case 5:
				return 197;
		
			case 6:
				return 198;
		
			case 7:
				return 199;
		
			case 8:
				return 200;
		
			case 9:
				return 201;
		
			case 10:
				return 202;
		
			case 11:
				return 203;
		
			case 12:
				return 204;
		
			case 13:
				return 205;
		
			case 14:
				return 206;
		
			default:
			
		}
	}

	return 1;
}

int func_137(int iParam0) // Position - 0x112FD (70397)
{
	return Global_2648932.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_138(ePedComponentType epctParam0) // Position - 0x11314 (70420)
{
	if (func_12(epctParam0))
		if (func_141(epctParam0, true))
			return Global_2648932.f_818.f_11[func_139(epctParam0)];

	return -1;
}

ePedComponentType func_139(ePedComponentType epctParam0) // Position - 0x11344 (70468)
{
	if (func_12(epctParam0))
		return Global_1888882[epctParam0 /*611*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

Player _INVALID_PLAYER_INDEX() // Position - 0x11367 (70503)
{
	return -1;
}

BOOL func_141(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x11370 (70512)
{
	if (!func_12(epctParam0))
		return false;

	if (!bParam1)
		if (func_142(epctParam0))
			return false;

	return func_12(Global_1888882[epctParam0 /*611*/].f_10);
}

BOOL func_142(ePedComponentType epctParam0) // Position - 0x113A8 (70568)
{
	if (func_12(epctParam0))
		if (func_12(Global_1888882[epctParam0 /*611*/].f_10))
			return Global_1888882[epctParam0 /*611*/].f_10 == epctParam0;

	return false;
}

BOOL func_143() // Position - 0x113DD (70621)
{
	if (func_158() || func_157() || func_156() || func_155() || func_154() || func_152() || func_150() || func_147() || func_144())
		return true;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_37, 1))
		return true;

	return false;
}

BOOL func_144() // Position - 0x11459 (70745)
{
	return func_145(*Global_4718592.f_138116);
}

BOOL func_145(int iParam0) // Position - 0x1146F (70767)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_146(i))
			return 1;
	}

	return 0;
}

int func_146(int iParam0) // Position - 0x114A3 (70819)
{
	if (iParam0 != -1)
		return Global_262145.f_36059[iParam0];

	return -1;
}

BOOL func_147() // Position - 0x114C2 (70850)
{
	return func_148(*Global_4718592.f_138116);
}

BOOL func_148(int iParam0) // Position - 0x114D8 (70872)
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (iParam0 == func_149(i))
			return 1;
	}

	return 0;
}

int func_149(int iParam0) // Position - 0x1150C (70924)
{
	if (iParam0 != -1)
		return Global_262145.f_33489[iParam0];

	return -1;
}

BOOL func_150() // Position - 0x1152B (70955)
{
	return func_151(*Global_4718592.f_138116);
}

BOOL func_151(Hash hParam0) // Position - 0x11541 (70977)
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_262145.f_31217[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_152() // Position - 0x1157A (71034)
{
	return func_153(*Global_4718592.f_138116);
}

BOOL func_153(Hash hParam0) // Position - 0x11590 (71056)
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_30384[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_154() // Position - 0x115CA (71114)
{
	return Global_2684748.f_24;
}

BOOL func_155() // Position - 0x115D8 (71128)
{
	return Global_2684748.f_21;
}

BOOL func_156() // Position - 0x115E6 (71142)
{
	return Global_2684748.f_19;
}

BOOL func_157() // Position - 0x115F4 (71156)
{
	return Global_2684748.f_18;
}

BOOL func_158() // Position - 0x11602 (71170)
{
	return Global_2684748.f_17;
}

Ped func_159() // Position - 0x11610 (71184)
{
	return Global_2621446.f_2;
}

BOOL func_160() // Position - 0x1161E (71198)
{
	return IS_BIT_SET(Global_2621446, 4);
}

BOOL func_161() // Position - 0x1162C (71212)
{
	return IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_18, 14);
}

BOOL func_162(ePedComponentType epctParam0) // Position - 0x11646 (71238)
{
	if (func_9(epctParam0, 0))
		return true;

	if (func_163())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658019[epctParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

BOOL func_163() // Position - 0x11685 (71301)
{
	return IS_BIT_SET(Global_2621446, 3);
}

ePedComponentType func_164(int iParam0, ePedComponentType epctParam1, BOOL bParam2) // Position - 0x11693 (71315)
{
	ePedComponentType type;
	int num;
	int num2;

	num = Global_1058116.f_14[iParam0];

	if (func_143())
	{
		num2 = func_138(epctParam1);
	
		if (!(num2 == -1))
			return func_136(num2);
	}

	if (num > -1 && num < 17)
		if (IS_BIT_SET(Global_4718592.f_3605[iParam0 /*26949*/].f_8609[num], 24))
			return 18;

	if (iParam0 > -1 && epctParam1 != _INVALID_PLAYER_INDEX())
	{
		if (Global_4718592.f_132409[iParam0] != PV_COMP_INVALID && Global_4718592.f_132409[iParam0] <= PV_COMP_LOWR)
			if (Global_4718592.f_132409[iParam0] == PV_COMP_HEAD)
				type = 15;
			else if (Global_4718592.f_132409[iParam0] == PV_COMP_BERD)
				type = 18;
			else if (Global_4718592.f_132409[iParam0] == PV_COMP_HAIR)
				type = 24;
			else if (Global_4718592.f_132409[iParam0] == PV_COMP_LOWR)
				if (IS_BIT_SET(Global_4718592.f_16, 29))
					type = 21;
				else
					type = PV_COMP_FEET;
			else
				type = Global_4718592.f_132409[iParam0];
		else
			type = func_122(epctParam1, !bParam2, iParam0, false);
	
		if (IS_BIT_SET(Global_4718592.f_22, 13))
			type = func_165(iParam0);
	
		if (IS_BIT_SET(Global_4718592.f_25, 29))
			type = PV_COMP_HEAD;
	
		if (IS_BIT_SET(Global_4718592.f_16, 26) && !func_6(iParam0, PLAYER::GET_PLAYER_TEAM(epctParam1), 0, -1))
			type = func_134(true);
	}
	else
	{
		type = PV_COMP_BERD;
	}

	return type;
}

ePedComponentType func_165(int iParam0) // Position - 0x11813 (71699)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = *Global_4718592.f_197467;
			break;
	
		case 1:
			num = *Global_4718592.f_197468;
			break;
	
		case 2:
			num = *Global_4718592.f_197469;
			break;
	
		case 3:
			num = *Global_4718592.f_197470;
			break;
	}

	switch (num)
	{
		case 0:
			return 15;
	
		case 1:
			return 21;
	
		case 2:
			return 24;
	
		case 3:
			return 18;
	
		case 4:
			return 6;
	
		case 5:
			return 9;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 12;
	
		case 9:
			return 2;
	
		default:
		
	}

	return 2;
}

int func_166(int iParam0, char* sParam1, const char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6) // Position - 0x118E8 (71912)
{
	var unk;

	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1082130432;
	unk.f_16 = 1;
	unk.f_71 = 1;
	unk.f_72 = 2;
	unk.f_79 = -1;
	func_184(iParam0, &unk, -1, sParam1, sParam5);
	TEXT_LABEL_ASSIGN_STRING(&(unk.f_25), sParam2, 64);
	unk.f_71 = iParam3;
	unk.f_6 = iParam4;
	unk.f_72 = iParam6;
	return func_167(&unk);
}

int func_167(var uParam0) // Position - 0x1195A (72026)
{
	int i;

	if (uParam0->f_1 == 1)
		if (Global_2672967.f_2912)
			return 0;

	func_183(uParam0, uParam0->f_17);
	func_180(uParam0);

	if (func_156())
		func_180(uParam0);

	if (func_179(uParam0->f_1))
	{
		func_172();
	
		if (Global_2672967.f_2590[0 /*80*/].f_2 == 0)
		{
			Global_2672967.f_2590[0 /*80*/] = { *uParam0 };
		
			if (func_171(uParam0->f_69, 8192))
				Global_1931279 = true;
		
			return 1;
		}
	
		if (Global_2672967.f_2590[0 /*80*/].f_1 == 13 || Global_2672967.f_2590[0 /*80*/].f_1 == 53 || Global_2672967.f_2590[0 /*80*/].f_1 == 54 || Global_2672967.f_2590[0 /*80*/].f_1 == 58)
			Global_2672967.f_2590[0 /*80*/].f_2 = 5;
	
		for (i = 2; i >= 1; i = i + -1)
		{
			Global_2672967.f_2590[i + 1 /*80*/] = { Global_2672967.f_2590[i /*80*/] };
		}
	
		Global_2672967.f_2590[1 /*80*/] = { *uParam0 };
		return 1;
	}

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_2672967.f_2590[i /*80*/].f_2 == 0)
		{
			Global_2672967.f_2590[i /*80*/] = { *uParam0 };
		
			if (i == 0)
				func_172();
		
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_169(&(Global_2672967.f_2590[i /*80*/].f_69), 2);
				Global_2672967.f_2590[i /*80*/].f_2 = 5;
			}
		
			if (uParam0->f_1 == 86 && !func_171(uParam0->f_69, 128))
			{
				if (func_168(Global_2672967.f_2590[i /*80*/].f_1))
				{
					Global_2672967.f_2590[i /*80*/].f_2 = 5;
					func_169(&(Global_2672967.f_2590[i /*80*/].f_69), 1);
				}
			}
		}
	}

	return 0;
}

BOOL func_168(int iParam0) // Position - 0x11B3F (72511)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return true;
	
		default:
		
	}

	return false;
}

void func_169(int iParam0, int iParam1) // Position - 0x11BC5 (72645)
{
	func_170(iParam0, iParam1);
	return;
}

void func_170(var uParam0, int iParam1) // Position - 0x11BD5 (72661)
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_171(int iParam0, int iParam1) // Position - 0x11BE6 (72678)
{
	return iParam0 && iParam1 != false;
}

void func_172() // Position - 0x11BF5 (72693)
{
	BOOL flag;

	if (Global_2672967.f_2913)
		return;

	if (!Global_80037)
	{
		Global_80037 = true;
		flag = true;
	}
	else if (Global_80038)
	{
		Global_80038 = false;
		flag = true;
	}

	func_173();

	if (flag)
		Global_80037 = false;

	return;
}

void func_173() // Position - 0x11C3A (72762)
{
	Global_2672967.f_2914 = 0;
	Global_2672967.f_2914.f_582 = 0;
	func_177(&(Global_2672967.f_2914.f_1));
	Global_2672967.f_2914.f_1.f_1 = 0;
	func_174(&(Global_2672967.f_2914.f_1), 1);
	return;
}

void func_174(var uParam0, int iParam1) // Position - 0x11C7C (72828)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}

	if (uParam0->f_566 || iParam1 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}

	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}

	if (!Global_80037)
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
			if (!Global_80039)
				if (CAM::IS_SCREEN_FADED_OUT() && !func_176(false))
					CAM::DO_SCREEN_FADE_IN(800);

	func_175(0);
	return;
}

void func_175(BOOL bParam0) // Position - 0x11D2B (73003)
{
	Global_80029 = bParam0;
	Global_80030 = bParam0;
	return;
}

BOOL func_176(BOOL bParam0) // Position - 0x11D3F (73023)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80017, 0);
}

void func_177(var uParam0) // Position - 0x11D67 (73063)
{
	func_178(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
	return;
}

void func_178(var uParam0) // Position - 0x11D91 (73105)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
	return;
}

BOOL func_179(int iParam0) // Position - 0x11E10 (73232)
{
	if (iParam0 == 3 || iParam0 == 4 || iParam0 == 5 || iParam0 == 6 || iParam0 == 11 || iParam0 == 12 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30 || iParam0 == 24 || iParam0 == 32 || iParam0 == 31 || iParam0 == 26 || iParam0 == 25 || iParam0 == 56 || iParam0 == 7 || iParam0 == 8 || iParam0 == 9 || iParam0 == 10 || iParam0 == 104 || iParam0 == 100 || iParam0 == 103 || iParam0 == 105 || iParam0 == 110 || iParam0 == 111)
		return true;

	return false;
}

void func_180(var uParam0) // Position - 0x11F28 (73512)
{
	if (func_182(uParam0->f_1))
		uParam0->f_72 = func_181();

	return;
}

int func_181() // Position - 0x11F43 (73539)
{
	return 21;
}

BOOL func_182(int iParam0) // Position - 0x11F4D (73549)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return true;
	
		default:
		
	}

	return false;
}

void func_183(var uParam0, ePedComponentType epctParam1) // Position - 0x11FDF (73695)
{
	if (func_182(uParam0->f_1))
		uParam0->f_73 = 1;

	if (epctParam1 == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(epctParam1, false, true))
		return;

	if (func_168(uParam0->f_1))
		if (uParam0->f_71 == 1)
			uParam0->f_73 = func_120(epctParam1, -2, false, false, false);

	return;
}

void func_184(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4) // Position - 0x12036 (73782)
{
	uParam1->f_17 = _INVALID_PLAYER_INDEX();
	uParam1->f_18 = _INVALID_PLAYER_INDEX();
	uParam1->f_19 = _INVALID_PLAYER_INDEX();
	uParam1->f_20 = _INVALID_PLAYER_INDEX();
	uParam1->f_1 = iParam0;
	uParam1->f_2 = 1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_21), sParam4, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_25), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_41), "", 64);
	return;
}

void func_185(int iParam0, int iParam1, int iParam2) // Position - 0x120B6 (73910)
{
	ePedComponentType type;

	type = func_97(iParam0, func_56(iParam2));
	type = type + iParam1;
	func_186(iParam0, type, iParam2);
	return;
}

void func_186(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x120DD (73949)
{
	Hash statName;

	statName = func_98(iParam0, iParam2);
	STATS::STAT_SET_INT(statName, epctParam1, true);
	return;
}

void func_187(Hash hParam0, int iParam1) // Position - 0x120F9 (73977)
{
	int num;

	num = _MPPLY_STAT_GET_INT(hParam0);
	num = num + iParam1;
	_MPPLY_STAT_SET_INT(hParam0, num);
	return;
}

void _MPPLY_STAT_SET_INT(Hash hParam0, int iParam1) // Position - 0x12118 (74008)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, true);

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x12134 (74036)
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_190(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x12152 (74066)
{
	var unk;

	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1082130432;
	unk.f_16 = 1;
	unk.f_71 = 1;
	unk.f_72 = 2;
	unk.f_79 = -1;
	func_184(iParam0, &unk, iParam1, sParam2, sParam3);
	unk.f_71 = iParam4;
	unk.f_6 = iParam5;
	unk.f_7 = iParam6;
	unk.f_72 = iParam7;

	if (iParam8 != 0)
		func_169(&(unk.f_69), iParam8);

	return func_167(&unk);
}

ePedComponentType func_191(int iParam0, Ped pedParam1, char* sParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, char* sParam8, BOOL bParam9, int iParam10) // Position - 0x121D3 (74195)
{
	return func_192(iParam0, pedParam1, sParam2, hParam3, hParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

ePedComponentType func_192(int iParam0, Ped pedParam1, char* sParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, char* sParam8, BOOL bParam9, int iParam10) // Position - 0x121F5 (74229)
{
	ePedComponentType type;
	Ped pedIndexFromEntityIndex;

	type = func_202(iParam0, sParam2, hParam3, hParam4, iParam5, iParam6, iParam7, bParam9);

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(Global_4718592.f_40, 19) || func_125(*Global_4718592.f_197275, true))
		return type;

	if (hParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || hParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(pedParam1))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);
				func_198(PED::GET_PED_BONE_COORDS(pedIndexFromEntityIndex, 31086, 0f, 0f, 0f), type, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_193(pedParam1, type, sParam8, iParam10);
	}

	return type;
}

void func_193(Ped pedParam0, ePedComponentType epctParam1, char* sParam2, int iParam3) // Position - 0x1229D (74397)
{
	var unk;

	unk = { func_196(pedParam0, true) };

	if (pedParam0 == func_195(PLAYER::PLAYER_PED_ID()))
		func_194(1);

	func_198(unk, epctParam1, 0, sParam2, iParam3);
	return;
}

void func_194(int iParam0) // Position - 0x122D1 (74449)
{
	Global_2672967.f_1758 = iParam0;
	return;
}

Ped func_195(Ped pedParam0) // Position - 0x122E2 (74466)
{
	return pedParam0;
}

Vector3 func_196(Ped pedParam0, BOOL bParam1) // Position - 0x122EC (74476)
{
	Vector3 offsetFromEntityInWorldCoords;
	var gameplayCamRot;
	float entityHeading;
	var minimum;
	var maximum;
	float zOffset;

	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };

	if (pedParam0 == func_197(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON)
		offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedParam0, 0f, 8f, -0.2f) };
	else
		offsetFromEntityInWorldCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	entityHeading = 0f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(pedParam0);
	
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON)
			entityHeading = gameplayCamRot.f_2;
	}

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(pedParam0), &minimum, &maximum);

	if (bParam1)
		zOffset = maximum.f_2 + 0.18f;
	else
		zOffset = minimum.f_2 + 0.18f;

	offsetFromEntityInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(offsetFromEntityInWorldCoords, entityHeading, 0f, 0f, zOffset) };
	return offsetFromEntityInWorldCoords;
}

Ped func_197(Ped pedParam0) // Position - 0x123B0 (74672)
{
	return pedParam0;
}

void func_198(var uParam0, var uParam1, var uParam2, ePedComponentType epctParam3, int iParam4, char* sParam5, int iParam6) // Position - 0x123BA (74682)
{
	int i;
	int num;

	if (epctParam3 != PV_COMP_HEAD)
	{
		num = -1;
	
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_2672967.f_1157[i /*30*/].f_6 == 0 || Global_2672967.f_1157[i /*30*/].f_6 == 7)
			{
				num = i;
				i = 20;
			}
		}
	
		if (num != -1)
		{
			Global_2672967.f_1157[num /*30*/] = { uParam0 };
			Global_2672967.f_1157[num /*30*/].f_6 = 1;
			Global_2672967.f_1157[num /*30*/].f_4 = func_201(Global_2672967.f_1157[num /*30*/], &Global_1574479, &Global_1574480);
			Global_2672967.f_1157[num /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672967.f_1157[num /*30*/].f_3 = epctParam3;
			Global_2672967.f_1157[num /*30*/].f_8 = iParam4;
			Global_2672967.f_1157[num /*30*/].f_9 = func_200();
			Global_2672967.f_1157[num /*30*/].f_10 = func_199();
			TEXT_LABEL_ASSIGN_STRING(&(Global_2672967.f_1157[num /*30*/].f_22), sParam5, 16);
			Global_2672967.f_1157[num /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}

	return;
}

int func_199() // Position - 0x124D1 (74961)
{
	if (Global_2672967.f_1758)
	{
		Global_2672967.f_1758 = 0;
		return 1;
	}

	Global_2672967.f_1758 = 0;
	return 0;
}

var func_200() // Position - 0x124FB (75003)
{
	var unk;

	unk = Global_2672967.f_1760;
	Global_2672967.f_1760 = 1;
	return unk;
}

float func_201(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4) // Position - 0x12516 (75030)
{
	float distanceBetweenCoords;
	float num;
	float num2;
	float num3;

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);

	if (distanceBetweenCoords < 5f)
	{
		*fParam3 = 0.402f;
		*fParam4 = 0.476f;
		return 0f;
	}

	if (distanceBetweenCoords > 20f)
	{
		*fParam3 = 0.212f;
		*fParam4 = 0.286f;
		return 1f;
	}

	num = 1f - ((distanceBetweenCoords - 5f) / (20f - 5f));
	num2 = num * (0.402f - 0.212f);
	num3 = num * (0.476f - 0.286f);
	*fParam3 = num2 + 0.212f;
	*fParam4 = num3 + 0.286f;
	return num;
}

ePedComponentType func_202(int iParam0, char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x125AF (75183)
{
	ePedComponentType type;

	type = func_203(iParam0, 0, sParam1, iParam4, iParam5, false, iParam6, true, hParam2, hParam3, bParam7);
	return type;
}

ePedComponentType func_203(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7, Hash hParam8, Hash hParam9, BOOL bParam10) // Position - 0x125D2 (75218)
{
	var unk;
	ePedComponentType value;
	ePedComponentType type;
	float value2;

	type = func_230();
	func_229(sParam2);

	if (func_228())
	{
		if (iParam4 < 1)
			iParam4 = 1;
	
		value = BUILTIN::ROUND((float)iParam3 * ((float)iParam4 + unk));
		value = func_226(value);
		value2 = BUILTIN::TO_FLOAT(value) * Global_262145.f_1;
		value = BUILTIN::ROUND(value2);
	
		if (bParam10)
			value = func_225(&value);
	
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_222(false, &value);
					break;
			
				case 3:
					func_222(true, &value);
					break;
			
				case 1:
					func_219(&value);
					break;
			}
		}
	
		if (value > Global_262145.f_13373)
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
			func_218(1165, value, -1);
		
			if (iParam1 == 0)
			{
				func_209(func_217(PLAYER::PLAYER_ID()) + value, hParam9, 0);
				hParam8 == 0;
				hParam9 == 0;
				STATS::PLAYSTATS_AWARD_XP(value, hParam8, hParam9);
			
				if (Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 != -1)
					func_218(1166, value, -1);
			
				func_206(value);
			}
		}
	
		bParam5;
	
		if (bParam7)
			if (iParam6 == -1)
				func_204(func_205(PLAYER::PLAYER_ID()) + value);
			else
				func_204(func_205(PLAYER::PLAYER_ID()) + iParam6);
	}

	return value;
}

void func_204(int iParam0) // Position - 0x12740 (75584)
{
	if (func_228())
	{
		Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_5 = iParam0;
		_MPPLY_STAT_SET_INT(joaat("MPPLY_GLOBALXP"), iParam0);
	}

	return;
}

int func_205(ePedComponentType epctParam0) // Position - 0x1276B (75627)
{
	if (epctParam0 > PV_COMP_INVALID)
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
			if (epctParam0 == PLAYER::PLAYER_ID())
				return _MPPLY_STAT_GET_INT(joaat("MPPLY_GLOBALXP"));
			else
				return Global_1845274[epctParam0 /*877*/].f_198.f_5;
		else
			return _MPPLY_STAT_GET_INT(joaat("MPPLY_GLOBALXP"));

	return 0;
}

void func_206(ePedComponentType epctParam0) // Position - 0x127BC (75708)
{
	var gamerHandle;
	int num;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };

	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
		{
			num = func_207(func_208(&gamerHandle));
		
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

int func_207(int iParam0) // Position - 0x12886 (75910)
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

int func_208(Any* panParam0) // Position - 0x128FC (76028)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam0))
			return Global_2696497;

	return Global_2696497;
}

void func_209(ePedComponentType epctParam0, Hash hParam1, int iParam2) // Position - 0x1291F (76063)
{
	if (func_228())
	{
		if (epctParam0 >= 1787576850)
			epctParam0 = 1787576850;
	
		if (Global_262145.f_10099 == 0 && hParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (epctParam0 < func_261(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(epctParam0, joaat("XPTYPE_ERROR"), hParam1);
					return;
				}
				else if (epctParam0 == func_261(640, -1))
				{
					return;
				}
			}
		}
	
		if (Global_262145.f_10098 == 0)
		{
			if (epctParam0 == PV_COMP_HEAD)
			{
				STATS::PLAYSTATS_AWARD_XP(epctParam0, -1158693853, -1345423847);
			
				if (iParam2 == 0)
					return;
			}
		}
	
		if (Global_262145.f_10098 == 0)
		{
			if (epctParam0 < PV_COMP_HEAD)
			{
				STATS::PLAYSTATS_AWARD_XP(epctParam0, joaat("XPTYPE_ERROR_NEGATIVE"), hParam1);
				return;
			}
		}
	
		if (func_216(PLAYER::PLAYER_ID()))
		{
			Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_1 = epctParam0;
			Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_6 = func_213(epctParam0, true);
		}
	
		func_54(640, epctParam0, -1, true);
		func_54(641, func_213(epctParam0, true), -1, true);
		func_210(-1109644434, 7, false);
	}

	return;
}

void func_210(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x12A31 (76337)
{
	int num;

	if (func_212(iParam1, bParam2))
	{
		num = func_211();
		Global_2696447[num] = iParam1;
		Global_2696458[num] = bParam0;
	}

	return;
}

int func_211() // Position - 0x12A5E (76382)
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2696447[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_212(int iParam0, BOOL bParam1) // Position - 0x12A93 (76435)
{
	if (Global_1575076)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !Global_1575088 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

ePedComponentType func_213(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x12B19 (76569)
{
	bParam1;
	return func_214(epctParam0, 0);
}

int func_214(ePedComponentType epctParam0, int iParam1) // Position - 0x12B2D (76589)
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
	
		if (func_215(num) == epctParam0)
		{
			value = num;
			value2 = num;
		}
		else if (func_215(num) < epctParam0)
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
	
		value3 = ((BUILTIN::TO_FLOAT(value) - BUILTIN::TO_FLOAT(value2)) / 2f) + BUILTIN::TO_FLOAT(value2);
		num = BUILTIN::ROUND(value3);
	}

	return 8000;
}

ePedComponentType func_215(int iParam0) // Position - 0x12BE8 (76776)
{
	int num;
	int num2;

	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 0;
		
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

BOOL func_216(ePedComponentType epctParam0) // Position - 0x1312C (78124)
{
	if (!func_12(epctParam0))
		return false;

	return IS_BIT_SET(Global_2672967.f_1, epctParam0);
}

ePedComponentType func_217(ePedComponentType epctParam0) // Position - 0x1314B (78155)
{
	if (Global_1574634.f_9 == 0)
		if (epctParam0 > PV_COMP_INVALID)
			if (epctParam0 == PLAYER::PLAYER_ID())
				return func_261(640, -1);
			else if (func_216(epctParam0))
				return Global_1845274[epctParam0 /*877*/].f_198.f_1;
	else
		return func_261(640, -1);

	return PV_COMP_HEAD;
}

void func_218(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x131A2 (78242)
{
	ePedComponentType type;

	type = func_261(iParam0, func_56(iParam2));
	type = type + epctParam1;
	func_54(iParam0, type, iParam2, true);
	return;
}

void func_219(var uParam0) // Position - 0x131CA (78282)
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
				if (PLAYER::GET_PLAYER_TEAM(playerIndex) == playerTeam || func_6(PLAYER::GET_PLAYER_TEAM(playerIndex), playerTeam, 0, -1))
				{
					num = num + 1;
				
					if (playerIndex != PLAYER::PLAYER_ID())
						if (func_221(PLAYER::PLAYER_ID(), playerIndex))
							flag = true;
				}
			}
		}
	}

	if (flag)
		num2 = BUILTIN::ROUND(func_220(*uParam0, 100) * 10f * Global_262145.f_3922);

	if (num > 4)
		num = 4;

	if (num >= 2)
		num3 = BUILTIN::ROUND(func_220(*uParam0, 100) * 20f * Global_262145.f_3920);

	*uParam0 = *uParam0 + num2;
	*uParam0 = *uParam0 + num3;
	return;
}

float func_220(int iParam0, int iParam1) // Position - 0x132B6 (78518)
{
	float num;
	float num2;
	float num3;

	num = BUILTIN::TO_FLOAT(iParam0);
	num2 = BUILTIN::TO_FLOAT(iParam1);
	num3 = num / num2;
	return num3;
}

BOOL func_221(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x132D7 (78551)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2707987 = { GET_GAMER_HANDLE_PLAYER(epctParam0) };
		Global_2708000 = { GET_GAMER_HANDLE_PLAYER(epctParam1) };
	
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2707987))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708000))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707917, 35, &Global_2707987);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2707952, 35, &Global_2708000);
			
				if (Global_2707917 == Global_2707952)
					return true;
			}
		}
	}

	return false;
}

void func_222(BOOL bParam0, var uParam1) // Position - 0x13344 (78660)
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
					
						if (func_221(PLAYER::PLAYER_ID(), playerIndex))
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
					if (func_223(PLAYER::PLAYER_ID(), playerIndex) <= 20f)
					{
						num = num + 1;
					
						if (func_221(PLAYER::PLAYER_ID(), playerIndex))
							flag = true;
					}
				}
			}
		}
	}

	if (flag)
		num2 = BUILTIN::ROUND(func_220(*uParam1, 100) * 10f * Global_262145.f_3922);

	if (num > 4)
		num = 4;

	if (num >= 1)
		num3 = BUILTIN::ROUND(func_220(*uParam1, 100) * 20f * Global_262145.f_3920);

	*uParam1 = *uParam1 + num2;
	*uParam1 = *uParam1 + num3;
	return;
}

float func_223(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x1345C (78940)
{
	return BUILTIN::VDIST(_GET_PLAYER_COORDS(epctParam0), _GET_PLAYER_COORDS(epctParam1));
}

Vector3 _GET_PLAYER_COORDS(ePedComponentType epctParam0) // Position - 0x13478 (78968)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(epctParam0), false);
}

ePedComponentType func_225(var uParam0) // Position - 0x1348B (78987)
{
	int num;

	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
		return *uParam0;

	num = BUILTIN::ROUND(func_220(*uParam0, 100) * 25f);
	*uParam0 = *uParam0 + num;
	return *uParam0;
}

ePedComponentType func_226(int iParam0) // Position - 0x134C2 (79042)
{
	if (iParam0 < PV_COMP_HEAD)
		if (MISC::ABSI(iParam0) > func_217(PLAYER::PLAYER_ID()))
			iParam0 = -func_217(PLAYER::PLAYER_ID());

	if (func_227(8000, false, 0) > PV_COMP_HEAD)
		if (func_227(8000, false, 0) < iParam0 + func_217(PLAYER::PLAYER_ID()))
			iParam0 = func_227(8000, false, 0) - func_217(PLAYER::PLAYER_ID());

	return iParam0;
}

ePedComponentType func_227(int iParam0, BOOL bParam1, int iParam2) // Position - 0x13526 (79142)
{
	iParam2 == 0;
	bParam1;

	if (iParam0 >= 8000)
		iParam0 = 8000;

	return func_215(iParam0);
}

BOOL func_228() // Position - 0x1354C (79180)
{
	return true;
}

BOOL func_229(char* sParam0) // Position - 0x13555 (79189)
{
	if (MISC::IS_STRING_NULL(sParam0))
		return true;
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
		return true;

	return false;
}

int func_230() // Position - 0x1358F (79247)
{
	int num;

	if (func_239(PLAYER::PLAYER_ID()) || func_238(PLAYER::PLAYER_ID()))
		if (Global_262145.f_10129 > 16000)
			num = 16000;
		else
			num = Global_262145.f_10129;
	else if (func_236() || func_232(PLAYER::PLAYER_ID()))
		if (Global_262145.f_22934 > 16000)
			num = 16000;
		else
			num = Global_262145.f_22934;
	else if (func_231(*Global_4718592.f_197275))
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

BOOL func_231(int iParam0) // Position - 0x1365D (79453)
{
	return iParam0 == 89;
}

BOOL func_232(Player plParam0) // Position - 0x1366A (79466)
{
	return func_233(func_234(plParam0));
}

int func_233(ePedComponentType epctParam0) // Position - 0x1367C (79484)
{
	switch (epctParam0)
	{
		case 233:
			return 1;
	
		default:
		
	}

	return 0;
}

ePedComponentType func_234(Player plParam0) // Position - 0x13696 (79510)
{
	if (func_12(plParam0))
		if (func_235(plParam0, false))
			return Global_1888882[plParam0 /*611*/].f_10.f_33;

	return PV_COMP_INVALID;
}

BOOL func_235(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x136C2 (79554)
{
	if (func_12(epctParam0))
		if (Global_1888882[epctParam0 /*611*/].f_10.f_33 != PV_COMP_INVALID || bParam1 && Global_1888882[epctParam0 /*611*/].f_10.f_32 != PV_COMP_INVALID)
			return true;

	return false;
}

BOOL func_236() // Position - 0x13706 (79622)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return func_156();

	return func_237(*Global_4718592.f_138116);
}

BOOL func_237(Hash hParam0) // Position - 0x1372A (79658)
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_262145.f_4707[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_238(Player plParam0) // Position - 0x13764 (79716)
{
	return Global_2658019[plParam0 /*467*/].f_123 == 2;
}

BOOL func_239(Player plParam0) // Position - 0x13779 (79737)
{
	return Global_2658019[plParam0 /*467*/].f_123 == 7;
}

void func_240(var uParam0, int iParam1) // Position - 0x1378E (79758)
{
	BOOL flag;

	if (*uParam0 > 0)
	{
		if (!func_256())
		{
			if (func_255(false))
			{
				if (!func_251(false))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(_GET_BOSS_OF_LOCAL_PLAYER()))
					{
						if (func_249() == 100)
						{
							flag = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							flag = (*uParam0 / 100) * func_249();
							*uParam0 = *uParam0 - flag;
						}
					
						func_247(&flag, false);
					
						if (iParam1 == 1)
							func_246("GB_BCUT_TICK1" /*You paid ~a~ ~s~a $~1~ ~s~cut.*/, _GET_BOSS_OF_LOCAL_PLAYER(), flag, HUD_COLOUR_PURE_WHITE, false, true);
					
						func_245(20);
						func_241(_GET_BOSS_OF_LOCAL_PLAYER(), flag, 1);
					}
				}
			}
		}
	}

	return;
}

void func_241(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x1382E (79918)
{
	Hash eventData;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
	{
		eventData = -1141119736;
		eventData.f_1 = PLAYER::PLAYER_ID();
		eventData.f_3 = bParam1;
		eventData.f_5 = iParam2;
		eventData.f_6 = func_244(epctParam0);
		func_243(&(eventData.f_7), &(eventData.f_8));
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 9, func_242(epctParam0), eventData);
	}

	return;
}

int func_242(ePedComponentType epctParam0) // Position - 0x13886 (80006)
{
	int address;

	if (func_12(epctParam0))
		MISC::SET_BIT(&address, epctParam0);

	return address;
}

void func_243(var uParam0, var uParam1) // Position - 0x138A1 (80033)
{
	*uParam0 = Global_1918514.f_9;
	*uParam1 = Global_1918514.f_10;
	return;
}

int func_244(ePedComponentType epctParam0) // Position - 0x138BB (80059)
{
	return Global_1888882[epctParam0 /*611*/].f_513;
}

void func_245(int iParam0) // Position - 0x138CF (80079)
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_2740191.f_5272.f_7[num], offset);
	return;
}

int func_246(char* sParam0, ePedComponentType epctParam1, BOOL bParam2, eHudColour ehcParam3, BOOL bParam4, BOOL bParam5) // Position - 0x138F8 (80120)
{
	int num;
	var unk;

	num = -1;

	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), epctParam1) || bParam5)
	{
		if (!bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, PLAYER::GET_PLAYER_NAME(epctParam1), 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, PLAYER::GET_PLAYER_NAME(epctParam1), 64);
	
		MISC::IS_STRING_NULL_OR_EMPTY(&unk);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_120(epctParam1, -2, true, false, false));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_118(&unk));
	
		if (!(ehcParam3 == HUD_COLOUR_PURE_WHITE))
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam3);
	
		HUD::ADD_TEXT_COMPONENT_INTEGER(bParam2);
		num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_112(27, sParam0, 1, &unk, bParam2, false, false, 0, 1, 0, 0, 0);
	}

	return num;
}

void func_247(var uParam0, BOOL bParam1) // Position - 0x13990 (80272)
{
	int num;
	int num2;

	if (bParam1)
		num2 = func_248(true);
	else
		num2 = func_248(false);

	num = (*uParam0 / 100) * num2;
	*uParam0 = *uParam0 - num;
	return;
}

int func_248(BOOL bParam0) // Position - 0x139C2 (80322)
{
	if (bParam0)
		return BUILTIN::ROUND(0.05f * 100f);

	return Global_262145.f_12847;
}

int func_249() // Position - 0x139E8 (80360)
{
	return Global_262145.f_12846;
}

ePedComponentType _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x139F7 (80375)
{
	return Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_251(BOOL bParam0) // Position - 0x13A0C (80396)
{
	return func_252(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_252(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x13A1E (80414)
{
	return func_253(epctParam0, bParam1, 1);
}

int func_253(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x13A2F (80431)
{
	ePedComponentType type;

	if (!func_12(epctParam0))
		return 0;

	if (!bParam1)
		if (func_254(epctParam0, iParam2))
			return 0;

	type = Global_1888882[epctParam0 /*611*/].f_10;

	if (func_12(type) && Global_1888882[type /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_254(ePedComponentType epctParam0, int iParam1) // Position - 0x13A8B (80523)
{
	if (func_12(epctParam0))
		if (func_12(Global_1888882[epctParam0 /*611*/].f_10))
			if (Global_1888882[epctParam0 /*611*/].f_10 == epctParam0 && Global_1888882[epctParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

BOOL func_255(BOOL bParam0) // Position - 0x13ADA (80602)
{
	return func_141(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_256() // Position - 0x13AEC (80620)
{
	return func_142(PLAYER::PLAYER_ID());
}

void func_257(int iParam0, ePedComponentType epctParam1, int iParam2) // Position - 0x13AFC (80636)
{
	BOOL flag;
	int num;

	if (*Global_262145.f_35149)
	{
		func_54(iParam0, epctParam1, iParam2, true);
		return;
	}

	flag = true;
	num.f_2 = -1;
	num = func_260(iParam0);

	if (!func_107(num, epctParam1 == func_261(iParam0, -1)))
	{
		flag = false;
	}
	else
	{
		num.f_1 = func_106(num);
	
		if (num.f_1 == 4)
			flag = false;
	
		if (flag && !func_258(iParam0, &num))
			flag = false;
	}

	func_54(iParam0, epctParam1, iParam2, true);

	if (flag)
		func_40(&num);

	return;
}

BOOL func_258(int iParam0, var uParam1) // Position - 0x13B90 (80784)
{
	int i;

	for (i = uParam1->f_1; i <= 4; i = i + 1)
	{
		uParam1->f_2 = func_259(iParam0, *uParam1, i);
	
		if (uParam1->f_2 != -1)
		{
			uParam1->f_2.f_2 = func_69(*uParam1, uParam1->f_2);
			uParam1->f_2.f_1 = func_87(*uParam1, uParam1->f_2);
		
			if (uParam1->f_2.f_1 >= uParam1->f_2.f_2)
			{
				uParam1->f_2 = -1;
			}
			else
			{
				uParam1->f_1 = i;
				return true;
			}
		}
	}

	return false;
}

int func_259(int iParam0, int iParam1, int iParam2) // Position - 0x13C08 (80904)
{
	switch (iParam1)
	{
		case 9:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 13035:
							return 73;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 13037:
							return 75;
					
						case 13040:
							return 77;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 13036:
							return 78;
					
						case 13066:
							return 79;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 13066:
							return 83;
					
						case 13040:
							return 84;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 0:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 12460:
							return 5;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12442:
							return 85;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12459:
							return 90;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 12444:
							return 91;
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12459:
							return 97;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12241:
							return 98;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12307:
							return 103;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12308:
							return 108;
					
						case 12253:
							return 109;
					
						case 12307:
							return 110;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 12187:
							return 13;
					}
					break;
			}
			break;
	
		case 12:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12032:
							return 111;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12042:
						case 12044:
							return 116;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 12033:
							return 117;
					
						case 12045:
							return 118;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12042:
						case 12044:
							return 121;
					
						case 12043:
							return 123;
					}
					break;
			}
			break;
	
		case 26:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 11923:
							return 303;
					}
					break;
			}
			break;
	
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 11950:
							return 16;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11950:
							return 18;
					}
					break;
			}
			break;
	
		case 17:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5448:
							return 176;
					
						case 5453:
							return 177;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 5465:
							return 180;
					
						case 5457:
						case 5455:
							return 181;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 5395:
							return 182;
					
						case 5453:
							return 183;
					
						case 2828:
						case 5631:
							return 184;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 5395:
							return 186;
					
						case 5459:
							return 188;
					}
					break;
			}
			break;
	
		case 29:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12031:
							return 322;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11922:
							return 324;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11947:
							return 326;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11922:
							return 329;
					}
					break;
			}
			break;
	
		case 31:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 1209:
							return 338;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11921:
							return 339;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11920:
							return 341;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11965:
							return 343;
					
						case 11919:
							return 345;
					}
					break;
			}
			break;
	
		case 13:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 12462:
							return 124;
					
						case 11811:
							return 126;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 12462:
							return 127;
					
						case 10872:
							return 128;
					
						case 11815:
							return 129;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11813:
						case 12462:
							return 130;
					
						case 11928:
							return 131;
					
						case 11927:
							return 132;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11811:
							return 134;
					
						case 11815:
							return 136;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 10394:
							return 24;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 10394:
							return 26;
					}
					break;
			}
			break;
	
		case 4:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8977:
							return 32;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8977:
							return 34;
					}
					break;
			}
			break;
	
		case 33:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 800:
						case 801:
						case 2420:
						case 10276:
						case 12213:
						case 12301:
							return 366;
					
						case 11964:
							return 365;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 2828:
						case 5631:
							return 369;
					
						case 11963:
							return 368;
					}
					break;
			}
			break;
	
		case 14:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9910:
							return 138;
					
						case 9905:
							return 139;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9910:
							return 142;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9905:
							return 143;
					
						case 11930:
							return 144;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11931:
							return 147;
					
						case 11930:
							return 148;
					
						case 9911:
							return 149;
					}
					break;
			}
			break;
	
		case 21:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9631:
							return 228;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9620:
							return 231;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9620:
							return 234;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9622:
							return 238;
					
						case 11932:
							return 239;
					}
					break;
			}
			break;
	
		case 23:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 9526:
						case 9511:
							return 256;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 9511:
							return 257;
					
						case 9586:
							return 258;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 9586:
							return 262;
					
						case 11933:
							return 261;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 9511:
							return 264;
					
						case 9544:
						case 9545:
						case 9546:
						case 9547:
						case 9548:
						case 9549:
							return 265;
					
						case 11926:
							return 266;
					}
					break;
			}
			break;
	
		case 24:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8726:
							return 267;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8726:
							return 270;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 8726:
							return 273;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11925:
							return 278;
					}
					break;
			}
			break;
	
		case 22:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 8283:
							return 243;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 8283:
							return 244;
					}
					break;
			}
			break;
	
		case 25:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5664:
							return 282;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11935:
							return 288;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11924:
							return 292;
					}
					break;
			}
			break;
	
		case 27:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 7852:
							return 309;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 7852:
							return 313;
					}
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 7231:
							return 151;
					
						case 12010:
							return 152;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 7231:
							return 158;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 7230:
							return 160;
					
						case 12025:
							return 161;
					
						case 7234:
							return 162;
					}
					break;
			}
			break;
	
		case 16:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 6116:
							return 164;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 6116:
							return 167;
					
						case 6118:
							return 168;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 6116:
							return 169;
					
						case 6104:
							return 170;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 6116:
							return 172;
					
						case 11959:
							return 173;
					
						case 6119:
						case 6120:
							return 175;
					}
					break;
			}
			break;
	
		case 18:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 5303:
							return 189;
					
						case 5332:
							return 190;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 11941:
							return 193;
					
						case 11940:
							return 194;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 5332:
							return 195;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11941:
							return 200;
					
						case 5333:
							return 201;
					}
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 2:
					switch (iParam0)
					{
						case 3913:
						case 3946:
						case 3948:
						case 3950:
						case 3952:
						case 3903:
						case 3932:
						case 3936:
						case 3940:
						case 3944:
							return 209;
					
						case 10411:
							return 210;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 3954:
						case 3955:
						case 3956:
						case 3957:
						case 3958:
							return 211;
					
						case 11943:
							return 212;
					
						case 11969:
							return 213;
					
						case 11942:
							return 214;
					}
					break;
			}
			break;
	
		case 20:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 3639:
							return 219;
					
						case 3667:
							return 220;
					}
					break;
			
				case 2:
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11970:
							return 226;
					
						case 3671:
							return 227;
					}
					break;
			}
			break;
	
		case 30:
			switch (iParam2)
			{
				case 0:
					switch (iParam0)
					{
						case 1210:
							return 330;
					}
					break;
			
				case 1:
					switch (iParam0)
					{
						case 819:
						case 12029:
						case 12030:
							return 332;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 819:
						case 12029:
						case 12030:
							return 333;
					
						case 11929:
						case 11966:
						case 11967:
						case 11968:
							return 334;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 12026:
							return 336;
					
						case 819:
						case 12029:
						case 12030:
							return 337;
					}
					break;
			}
			break;
	
		case 28:
			switch (iParam2)
			{
				case 1:
					switch (iParam0)
					{
						case 11917:
							return 316;
					}
					break;
			
				case 2:
					switch (iParam0)
					{
						case 11917:
							return 318;
					}
					break;
			
				case 3:
					switch (iParam0)
					{
						case 11917:
							return 320;
					}
					break;
			}
			break;
	
		case 32:
			switch (iParam2)
			{
				case 3:
					switch (iParam0)
					{
						case 11975:
							return 356;
					
						case 11974:
							return 358;
					}
					break;
			}
			break;
	}

	return -1;
}

int func_260(int iParam0) // Position - 0x14BF5 (84981)
{
	switch (iParam0)
	{
		case 13035:
		case 13037:
		case 13040:
		case 13036:
		case 13066:
			return 9;
	
		case 12460:
			return 0;
	
		case 12442:
		case 12459:
		case 12444:
			return 10;
	
		case 12241:
		case 12307:
		case 12308:
		case 12253:
			return 11;
	
		case 12187:
			return 1;
	
		case 12032:
		case 12033:
		case 12042:
		case 12043:
		case 12044:
		case 12045:
			return 12;
	
		case 2828:
		case 5631:
			if (_STAT_GET_PACKED_INT(41247, -1) < 5)
				return 17;
			else
				return 33;
			break;
	
		case 11923:
			return 26;
	
		case 5448:
		case 5453:
		case 5465:
		case 5457:
		case 5455:
		case 5395:
		case 5459:
			return 17;
	
		case 12031:
		case 11922:
		case 11947:
			return 29;
	
		case 1209:
		case 11921:
		case 11920:
		case 11919:
		case 11965:
			return 31;
	
		case 11811:
		case 11813:
		case 11815:
		case 12462:
		case 10872:
		case 11928:
		case 11927:
			return 13;
	
		case 10394:
			return 3;
	
		case 8977:
			return 4;
	
		case 800:
		case 801:
		case 2420:
		case 10276:
		case 12213:
		case 12301:
		case 11964:
		case 11963:
			return 33;
	
		case 11950:
			return 2;
	
		case 9910:
		case 9905:
		case 9911:
		case 11930:
		case 11931:
			return 14;
	
		case 9631:
		case 9620:
		case 9622:
		case 11932:
			return 21;
	
		case 9526:
		case 9511:
		case 9586:
		case 11926:
		case 11933:
		case 9544:
		case 9545:
		case 9546:
		case 9547:
		case 9548:
		case 9549:
			return 23;
	
		case 8726:
		case 11925:
			return 24;
	
		case 8283:
			return 22;
	
		case 11935:
		case 5664:
		case 11924:
			return 25;
	
		case 7852:
			return 27;
	
		case 12010:
		case 7231:
		case 7230:
		case 7234:
		case 12025:
			return 15;
	
		case 6116:
		case 6118:
		case 6104:
		case 6119:
		case 6120:
		case 11959:
			return 16;
	
		case 5303:
		case 5332:
		case 5333:
		case 11941:
		case 11940:
			return 18;
	
		case 3913:
		case 3946:
		case 3948:
		case 3950:
		case 3952:
		case 3903:
		case 3932:
		case 3936:
		case 3940:
		case 3944:
		case 3954:
		case 3955:
		case 3956:
		case 3957:
		case 3958:
		case 11943:
		case 11942:
		case 11969:
		case 10411:
			return 19;
	
		case 3639:
		case 3667:
		case 11970:
		case 3671:
			return 20;
	
		case 1210:
		case 819:
		case 12029:
		case 11929:
		case 11966:
		case 11967:
		case 11968:
		case 12026:
		case 12030:
			return 30;
	
		case 11917:
			return 28;
	
		case 11974:
		case 11975:
			return 32;
	}

	return -1;
}

ePedComponentType func_261(int iParam0, int iParam1) // Position - 0x15031 (86065)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 17296)
	{
		statHash = func_55(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_262() // Position - 0x15060 (86112)
{
	if (!IS_BIT_SET(iLocal_256, 5))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iLocal_100.f_7 + { (20f / 2f) + 4f, 0f, 0f }, 7f, 7f, 20f, false, true, 0))
		{
			if (func_24(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_343 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_100.f_13);
				func_263(iLocal_343, func_242(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				MISC::SET_BIT(&iLocal_256, 5);
			}
		}
	}
	else if (func_599(&uLocal_344, 250, false))
	{
		func_263(iLocal_343, func_242(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
		_STOPWATCH_DESTROY(&uLocal_344);
	}

	return;
}

void func_263(int iParam0, int iParam1) // Position - 0x150F7 (86263)
{
	Hash eventData;

	eventData = -852946413;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam0;

	if (!(iParam1 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 4, iParam1, eventData);

	return;
}

int _SHOW_BANNER(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1512B (86315)
{
	var unk;

	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1082130432;
	unk.f_16 = 1;
	unk.f_71 = 1;
	unk.f_72 = 2;
	unk.f_79 = -1;
	func_184(iParam0, &unk, -1, sParam2, sParam1);
	unk.f_71 = iParam3;
	unk.f_6 = iParam4;
	unk.f_72 = iParam5;
	unk.f_16 = iParam6;

	if (iParam7 != 0)
		func_169(&(unk.f_69), iParam7);

	return func_167(&unk);
}

void func_265(int* piParam0) // Position - 0x151AB (86443)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	return;
}

void func_266(var uParam0) // Position - 0x151BD (86461)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_267(var uParam0, BOOL bParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x151D3 (86483)
{
	char* audioName;
	char* audioName2;
	char* audioRef;
	float value;
	int num;
	int r;
	int g;
	int b;
	var a;
	int num2;
	BOOL flag;
	int r2;
	int g2;
	int b2;
	var a2;

	if (bParam7)
		func_277(&(uParam0->f_2), true);

	if (!func_276(&(uParam0->f_2)))
		func_274(&(uParam0->f_2));

	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);

	if (iParam4 > 3)
		iParam4 = 3;
	else if (iParam4 < 0)
		iParam4 = 0;

	if (bParam5)
	{
		audioName = "3_2_1";
		audioName2 = "GO";
		audioRef = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		audioName = "3_2_1";
		audioName2 = "GO";
		audioRef = "321_GO_LOW_VOL_SOUNDSET";
	}

	if (bParam7)
	{
		if (func_276(&(uParam0->f_2)))
		{
			if (func_273(&(uParam0->f_2)))
			{
				value = uParam0->f_2.f_2;
			}
			else
			{
				value = func_272(true) - uParam0->f_2.f_1;
			
				if (value < 0f)
				{
					value = 0f;
					func_266(&(uParam0->f_2));
				
					if (func_171(uParam0->f_1, 1))
					{
						func_169(&(uParam0->f_1), 8);
						HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r, &g, &b, &a);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
						func_271("CNTDWN_GO" /*Go!*/);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(r);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(g);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(b);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						return true;
					}
				
					func_274(&(uParam0->f_2));
				}
			}
		}
		else
		{
			value = uParam0->f_2.f_1;
		}
	
		num = BUILTIN::FLOOR(value);
	}
	else
	{
		num = BUILTIN::FLOOR(func_270(&(uParam0->f_2)));
	}

	num2 = num - iParam4;
	flag = false;

	if (!func_171(uParam0->f_1, 8))
	{
		if (num2 >= -3 && !func_171(uParam0->f_1, 1))
		{
			func_169(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, audioName, audioRef, true);
			func_269(uParam0, num2);
		}
		else if (num2 >= -2 && !func_171(uParam0->f_1, 2))
		{
			func_169(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, audioName, audioRef, true);
			func_269(uParam0, num2);
		}
		else if (num2 >= -1 && !func_171(uParam0->f_1, 4))
		{
			func_169(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, audioName, audioRef, true);
			func_269(uParam0, num2);
		}
		else if (num2 >= -1 && !func_171(uParam0->f_1, 16))
		{
			if (MISC::ABSF(func_270(&(uParam0->f_2)) - (float)iParam4) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_169(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, audioName2, audioRef, true);
				}
			}
		}
		else if (num2 >= 0 && !func_171(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
				AUDIO::PLAY_SOUND_FRONTEND(-1, audioName2, audioRef, true);
		
			func_169(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r2, &g2, &b2, &a2);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			func_271("CNTDWN_GO" /*Go!*/);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(r2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(g2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(b2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (!bParam1)
				flag = true;
		}
	}
	else if (num2 == 1)
	{
		flag = true;
	}

	if (iParam2 && func_268() || num > 5)
		flag = true;

	if (flag)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_266(&(uParam0->f_2));
		}
	
		return true;
	}

	return false;
}

int func_268() // Position - 0x154F3 (87283)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return 0;

	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return 1;

	return 0;
}

void func_269(var uParam0, int iParam1) // Position - 0x15525 (87333)
{
	int r;
	int g;
	int b;
	var a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER" /*~1~*/);
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(r);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(g);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(b);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

float func_270(var uParam0) // Position - 0x1557D (87421)
{
	if (func_276(uParam0))
		if (func_273(uParam0))
			return uParam0->f_2;
		else
			return func_272(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

void func_271(char* sParam0) // Position - 0x155B9 (87481)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

float func_272(BOOL bParam0) // Position - 0x155CB (87499)
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

BOOL func_273(var uParam0) // Position - 0x15623 (87587)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_274(int* piParam0) // Position - 0x15630 (87600)
{
	func_275(piParam0, 0f);
	return;
}

void func_275(int* piParam0, float fParam1) // Position - 0x1563F (87615)
{
	piParam0->f_1 = func_272(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_276(var uParam0) // Position - 0x1566A (87658)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_277(int* piParam0, BOOL bParam1) // Position - 0x15677 (87671)
{
	if (bParam1)
		MISC::SET_BIT(piParam0, 4);
	else
		MISC::CLEAR_BIT(piParam0, 4);

	if (IS_BIT_SET(*piParam0, 4))
	{
	}

	return;
}

BOOL func_278(var uParam0) // Position - 0x156A0 (87712)
{
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
}

void func_279(int iParam0, int iParam1, BOOL bParam2) // Position - 0x156BE (87742)
{
	if (func_287())
	{
		if (iParam1 == 1)
		{
			if (Global_2740191.f_4535 == PV_COMP_INVALID)
				Global_2740191.f_4535 = Global_262145.f_26753;
		
			func_286(&(Global_2740191.f_4533), false, false);
		
			if (bParam2)
			{
				if (Global_2740191.f_4538 == -1)
					Global_2740191.f_4538 = Global_262145.f_26754;
			
				func_286(&(Global_2740191.f_4536), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
				func_285(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_8 = 0;
			func_285(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_284() && !func_280(PLAYER::PLAYER_ID()))
			Global_1057439 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_280(Player plParam0) // Position - 0x15788 (87944)
{
	if (func_281(plParam0, true, false))
		if (Global_1845274[plParam0 /*877*/] != PV_COMP_FEET)
			return true;

	return false;
}

BOOL func_281(ePedComponentType epctParam0, BOOL bParam1, BOOL bParam2) // Position - 0x157AD (87981)
{
	if (bParam1)
		if (func_282(epctParam0))
			return true;

	!bParam2;

	if (Global_1845274[epctParam0 /*877*/] == PV_COMP_INVALID)
		return false;

	return true;
}

BOOL func_282(Player plParam0) // Position - 0x157DF (88031)
{
	return func_283(plParam0);
}

BOOL func_283(Player plParam0) // Position - 0x157ED (88045)
{
	return IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_11.f_1, 0);
}

BOOL func_284() // Position - 0x15804 (88068)
{
	return Global_2684748.f_846;
}

void func_285(BOOL bParam0) // Position - 0x15813 (88083)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_287())
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

void func_286(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1590C (88332)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			*iParam0 = NETWORK::GET_NETWORK_TIME();
		else
			*iParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*iParam0 = MISC::GET_GAME_TIMER();

	iParam0->f_1 = 1;
	return;
}

BOOL func_287() // Position - 0x15949 (88393)
{
	return Global_1574582;
}

void func_288(int iParam0, BOOL bParam1) // Position - 0x15955 (88405)
{
	if (bParam1)
		if (!IS_BIT_SET(Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_221, iParam0))
			MISC::SET_BIT(&(Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_221), iParam0);
	else if (IS_BIT_SET(Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_221, iParam0))
		MISC::CLEAR_BIT(&(Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_221), iParam0);

	return;
}

void func_289(BOOL bParam0) // Position - 0x159B2 (88498)
{
	if (Global_2647055.f_1544)
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2647055.f_1545))
			if (!(Global_2647055.f_1545 == SCRIPT::GET_ID_OF_THIS_THREAD()))
				return;
		else
			Global_2647055.f_1544 = 0;

	if (bParam0)
	{
		if (!Global_2647055.f_1544)
		{
			Global_2647055.f_1544 = 1;
			Global_2647055.f_1545 = SCRIPT::GET_ID_OF_THIS_THREAD();
			TEXT_LABEL_ASSIGN_STRING(&(Global_2647055.f_1546), SCRIPT::GET_NAME_OF_SCRIPT_WITH_THIS_ID(Global_2647055.f_1545), 64);
			Global_2647055.f_1562 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	else if (Global_2647055.f_1544)
	{
		Global_2647055.f_1544 = 0;
		Global_2647055.f_1545 = -1;
	}

	return;
}

void func_290(BOOL bParam0) // Position - 0x15A4F (88655)
{
	int i;
	ePedComponentType playerIndex;

	for (i = 0; i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS(); i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
		{
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i));
		
			if (_NETWORK_IS_PLAYER_VALID(playerIndex, false, true) && playerIndex != PLAYER::PLAYER_ID())
				NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(playerIndex, bParam0);
		}
	}

	return;
}

void func_291(ePedComponentType epctParam0, int iParam1) // Position - 0x15AA4 (88740)
{
	func_293(epctParam0, 1, 1, 0);

	if (iParam1 == 1)
		func_292(epctParam0, false);

	return;
}

void func_292(int iParam0, BOOL bParam1) // Position - 0x15AC2 (88770)
{
	bParam1;
	iParam0 = iParam0;
	return;
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x15AD3 (88787)
{
	int num;
	int num2;
	float num3;

	if (iParam1 < 1)
		iParam1 = 1;

	num = iParam0 * iParam1;
	iParam3 = 0f;

	if (num > 0)
	{
		num3 = 100f - iParam3;
		num2 = BUILTIN::FLOOR((float)num * (num3 / 100f));
	}
	else
	{
		num2 = num;
	}

	Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_4 = num2;
	Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_3 = Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_198.f_3 + num2;

	if (iParam2 == 1)
		func_292(num2, false);

	return;
}

void _NETSHOPPING_PROCESS_TRANSACTION(Hash hParam0, ePedComponentType epctParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x15B56 (88918)
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
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_27954)
				func_295(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			func_295(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			if (epctParam1 > PV_COMP_HEAD || Global_262145.f_27954)
				func_295(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
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
			func_295(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, epctParam1, num, 7);
			break;
	}

	return;
}

int func_295(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6, int iParam7) // Position - 0x164ED (91373)
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
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538672 = 1;
			return 0;
		}
	
		if (Global_2698022)
		{
			if (hParam3 == joaat("CATEGORY_WEAPON_AMMO") || hParam3 == joaat("CATEGORY_MART"))
			{
				Global_4538673 = 1;
				return 0;
			}
		}
	}

	flag3 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4537182[i /*84*/].f_65.f_2 == 0)
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
			*uParam0 = func_302(transactionId, iParam1, hParam4, hParam2, hParam3, epctParam5, false, iParam6, iParam7, 1, true);
		
			if (flag2 && !flag)
			{
			}
		
			if (flag)
			{
				if (*uParam0 != -1)
				{
					Global_4537182[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4537182[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
		
			Global_4538653 = true;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4538671 = 1;
			Global_4538674 = hParam4;
			Global_4538676 = hParam3;
			Global_4538677 = 1;
			Global_4538675 = epctParam5;
		}
	
		if (iParam7 & 8 != 0)
		{
			Global_4538674 = hParam4;
			Global_4538676 = hParam3;
			Global_4538677 = 1;
			Global_4538675 = epctParam5;
		}
	
		flag4 = false;
	
		if (flag4)
		{
			func_301(1, hParam4);
			Global_4538671 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_296(-1, hParam4, iParam6, epctParam5, -1);
	}

	return 0;
}

void func_296(int iParam0, Hash hParam1, int iParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x1669A (91802)
{
	switch (hParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_297(iParam0);

	return;
}

void func_297(int iParam0) // Position - 0x166D2 (91858)
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_300(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4537182[iParam0 /*84*/].f_65);
	
		func_298(&Global_4537182[iParam0 /*84*/]);
	}

	return;
}

void func_298(ePedComponentType epctParam0) // Position - 0x16726 (91942)
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
	func_299(&(epctParam0->f_13));
	func_299(&(epctParam0->f_13.f_13));
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

void func_299(var uParam0) // Position - 0x16831 (92209)
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

BOOL func_300(int iParam0) // Position - 0x16879 (92281)
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4537182[iParam0 /*84*/].f_65.f_5 == 1;

	return false;
}

void func_301(int iParam0, Hash hParam1) // Position - 0x168A4 (92324)
{
	Global_2699246 = hParam1;
	Global_2699245 = iParam0;
	return;
}

int func_302(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x168B8 (92344)
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4537182[i /*84*/].f_65.f_2 == 0)
		{
			if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				iParam0 = i + 900;
		
			Global_4537182[i /*84*/].f_65.f_2 = 1;
			Global_4537182[i /*84*/].f_65.f_1 = iParam5;
			Global_4537182[i /*84*/].f_65.f_3 = iParam1;
			Global_4537182[i /*84*/].f_65.f_4 = hParam2;
			Global_4537182[i /*84*/].f_65.f_7 = hParam3;
			Global_4537182[i /*84*/].f_65.f_5 = 0;
			Global_4537182[i /*84*/].f_65 = iParam0;
			Global_4537182[i /*84*/].f_65.f_6 = hParam4;
			Global_4537182[i /*84*/].f_65.f_11 = iParam8;
			Global_4537182[i /*84*/].f_65.f_10 = iParam7;
			Global_4537182[i /*84*/].f_65.f_13 = iParam9;
			Global_4537182[i /*84*/].f_65.f_12 = 0;
			Global_4537182[i /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4537182[i /*84*/].f_65.f_18 = 0;
			Global_4538653 = false;
		
			if (bParam6)
				Global_4537182[i /*84*/].f_65.f_5 = 1;
		
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
				func_303(Global_4537182[i /*84*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_303(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84) // Position - 0x169F5 (92661)
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
	playerBits = func_242(eventData.f_1);

	if (Global_262145.f_23715 && !Global_262145.f_23716)
		return;

	if (!(playerBits == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 36, playerBits, eventData);

	return;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x16A78 (92792)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

void func_305(BOOL bParam0, int iParam1) // Position - 0x16A8F (92815)
{
	int num;

	if (!func_307(&num, false, iParam1))
		return;

	if (Global_24148.f_9148)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_24148.f_9148 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_24148.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24148.f_6231[num] = false;
	}

	if (Global_24148.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24148.f_6217[num] = false;
	}

	if (Global_24148.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24148.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_306(&Global_24148.f_6263[num /*10*/]);
		Global_24148.f_6324[num] = 0;
	}
	else
	{
		Global_24148.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_306(int iParam0) // Position - 0x16B55 (93013)
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

BOOL func_307(var uParam0, BOOL bParam1, int iParam2) // Position - 0x16B81 (93057)
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
		if (Global_24148.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_24148.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_24148.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_308() // Position - 0x16C1E (93214)
{
	if (HUD::DOES_BLIP_EXIST(blLocal_259))
		HUD::REMOVE_BLIP(&blLocal_259);

	return;
}

void func_309() // Position - 0x16C37 (93239)
{
	Global_2684748.f_758 = 1;
	return;
}

BOOL func_310() // Position - 0x16C47 (93255)
{
	return IS_BIT_SET(Global_2684748.f_2, 11);
}

void func_311() // Position - 0x16C58 (93272)
{
	BOOL flag;
	int i;

	if (func_600(0, -1, false))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			flag = true;
		}
		else if (iLocal_100.f_3 != uLocal_126)
		{
			uLocal_126 = iLocal_100.f_3;
			iLocal_260 = 1;
		}
	
		if (flag)
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_X);
				PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_Y);
				func_587(false, -1, true);
				func_584(false, false, false, true);
			
				if (Global_4543037 > PV_COMP_INVALID)
				{
					if (uLocal_307.f_14 == Global_4543037)
					{
						if (Global_4543037 == PV_COMP_HAIR && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
							iLocal_266 = func_583(0);
						else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
							iLocal_265 = 1;
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uLocal_307.f_14 = Global_4543037;
						func_582(uLocal_307.f_14, true, 1);
						iLocal_260 = 1;
					}
				}
			}
		}
	
		func_579();
		func_574();
	
		if (flag)
		{
			if (!IS_BIT_SET(uLocal_307.f_15, 0))
			{
				MISC::SET_BIT(&(uLocal_307.f_15), 0);
				iLocal_260 = 1;
				iLocal_261 = 1;
				MISC::CLEAR_BIT(&(iLocal_100.f_1), 7);
				MISC::CLEAR_BIT(&(iLocal_100.f_1), 8);
				MISC::CLEAR_BIT(&(iLocal_100.f_1), 9);
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);
			}
		}
		else if (IS_BIT_SET(uLocal_307.f_15, 0))
		{
			MISC::CLEAR_BIT(&(uLocal_307.f_15), 0);
			iLocal_260 = 1;
			iLocal_261 = 1;
		}
	
		if (iLocal_100.f_14 != uLocal_336)
		{
			uLocal_336 = iLocal_100.f_14;
			iLocal_260 = 1;
		}
	
		if (func_570(flag) || !IS_BIT_SET(uLocal_307.f_15, 1) || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			if (!IS_BIT_SET(uLocal_307.f_15, 1))
			{
				if (flag == true)
				{
					func_569();
				
					if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD && !IS_BIT_SET(Global_2740191.f_1864, 24))
						iLocal_100.f_15[2] = Global_2740191.f_28.f_39;
					else
						iLocal_100.f_15[2] = 2;
				}
			}
		
			if (iLocal_260 == 1 || !IS_BIT_SET(uLocal_307.f_15, 1) || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL) || uLocal_307.f_20 != iLocal_100.f_15.f_6)
			{
				uLocal_307.f_20 = iLocal_100.f_15.f_6;
			
				if (flag)
				{
					for (i = 0; i < iLocal_98; i = i + 1)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f && iLocal_100.f_15[2] != 0)
						{
							iLocal_100.f_15[2] = iLocal_100.f_15[2] + 1;
						
							if (iLocal_100.f_15[2] > func_568(2))
								iLocal_100.f_15[2] = 0;
						}
						else
						{
							i = 99;
						}
					}
				
					if (iLocal_261 == 1)
					{
						iLocal_100.f_7 = { func_17() };
						iLocal_261 = 0;
					}
				}
			
				if (iLocal_262 == 1 && flag == true)
					func_558();
				else
					func_543(flag);
			
				iLocal_260 = 0;
			}
		
			if (!IS_BIT_SET(uLocal_307.f_15, 1))
			{
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				MISC::SET_BIT(&(uLocal_307.f_15), 1);
			}
		}
	
		if (_STOPWATCH_IS_INITIALIZED(&uLocal_341))
		{
			func_542("R2P_WARNH" /*~s~You are leaving the Impromptu Race start location.*/, 0, 0);
		}
		else if (flag)
		{
			if (iLocal_262 == 1)
				if (bLocal_264 == true)
					func_542("R2P_MENU_IVP" /*Send an invite to the selected player. Once an invite is sent the destination can't be changed.*/, 0, 0);
			else if (iLocal_100.f_15[2] <= 0 || iLocal_100.f_15[2] > iLocal_98 && iLocal_338 == 1)
				func_542("R2P_MENU_WAY" /*The destination needs to be outside of the red area marked on the Map in the Pause Menu.*/, 0, 0);
			else if (iLocal_100.f_14 < 2)
				func_542("R2P_MENU_MPL" /*An Impromptu Race requires at least two players. Once an invite is sent the destination can't be changed.*/, 0, 0);
			else
				func_542("R2P_MENU_DSQ" /*Invite more players or start the Race. You will be disqualified if you move too far during the countdown.*/, 0, 0);
		}
		else
		{
			func_542("R2P_MENU_WAI" /*Waiting for ~a~ ~s~to set the options. You will be disqualified if you move too far during the countdown.*/, 0, 0);
			func_541(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
		}
	
		if (flag == true)
			if (iLocal_100.f_15[2] <= 0 || iLocal_100.f_15[2] > iLocal_98)
				func_378();
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_UNARMED, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_MELEE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_HANDGUN, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_SHOTGUN, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_SMG, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_AUTO_RIFLE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_SNIPER, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_HEAVY, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON_SPECIAL, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_NEXT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_PREV, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_SPECIAL, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_SPECIAL_TWO, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_BLOCK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DETONATE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_RADIO_WHEEL, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CONTEXT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_RELOAD, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DIVE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
		func_377();
		func_354(&uLocal_282);
		func_317(true, -1, true, false, true, -1082130432, false, false, -1);
		func_312(&uLocal_305);
	}

	return;
}

void func_312(var uParam0) // Position - 0x170F0 (94448)
{
	float num;
	float num2;
	var finalRenderedCamRot;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(func_314(0.05f) - 0.05f, 0f, 0f, 0f);
	num = 0f;
	num2 = 0.5f;
	finalRenderedCamRot = { 0f, 0f, 0f };

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MENU_GLARE");
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			finalRenderedCamRot = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			num = func_313(finalRenderedCamRot.f_2, 0f, 360f);
		
			if (uParam0->f_1 == 0f || uParam0->f_1 - num > num2 || uParam0->f_1 - num < -num2)
			{
				uParam0->f_1 = num;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

float func_313(float fParam0, float fParam1, float fParam2) // Position - 0x171B7 (94647)
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

float func_314(float fParam0) // Position - 0x171F9 (94713)
{
	fParam0 = fParam0 * func_315();
	return fParam0;
}

float func_315() // Position - 0x1720C (94732)
{
	return 1.7777778f / func_316();
}

float func_316() // Position - 0x1721E (94750)
{
	return Global_24148.f_9149;
}

void func_317(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x1722C (94764)
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

	if (!func_307(&num, false, iParam1))
		return;

	num == -1;

	if (!func_352(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num38 = 0f;

	if (Global_24148)
		if (func_350(30, true, true, &num26, &num27, bParam7))
			num39 = num27 / num26;
		else
			Global_24148 = false;

	if (iParam5 == -1f)
		iParam5 = Global_24147;

	num38 = iParam5 * num39;

	if (MISC::GET_HASH_KEY(&(Global_24148.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num40 = Global_24146;
	else
		num40 = Global_24146 + num38 + 0.034722f + 0f;

	num41 = 1f;
	func_348(bParam7, &unk3, &unk4, &num41);

	if (bParam3)
	{
		if (Global_24148.f_5821 <= PV_COMP_BERD)
		{
			func_344(Global_24148.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, false, false, false);
			Global_24148.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_24148.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_24148.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num36 = Global_24146;
			}
			else
			{
				if (Global_24148)
				{
					TEXT_LABEL_ASSIGN_STRING(&unk5, func_343(30), 64);
					TEXT_LABEL_ASSIGN_STRING(&unk21, func_341(30, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_24148.f_7696[30 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_340(Global_24145, Global_24146, iParam5, num38, 0, 0, 0, 255);
						func_339(&unk5, &unk21, Global_24145 + (iParam5 * 0.5f), Global_24146 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						func_339(&unk5, &unk21, Global_24145 + (iParam5 * 0.5f), Global_24146 + (num38 * 0.5f), iParam5, num38, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_24148.f_9118)
				{
					r = Global_24148.f_9114;
					g = Global_24148.f_9115;
					b = Global_24148.f_9116;
					a = Global_24148.f_9117;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_340(Global_24145, Global_24146 + num38, iParam5, 0.034722f, r, g, b, a);
				num36 = Global_24146 + num38 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_24148.f_1)) != 0)
				{
					func_338();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24148.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_24148.f_74; l = l + 1)
					{
						if (Global_24148.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_24148.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_14[num8], Global_24148.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_24148.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24148.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_24148.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24148.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24148.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_24148.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					func_337(Global_24145 + 0.00390625f, Global_24146 + num38 + 0.00416664f, 0);
				}
			
				if (Global_24148.f_6338)
				{
					func_338();
					func_335((Global_24145 + iParam5) - 0.00390625f - func_336("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24148.f_6339, Global_24148.f_6340), Global_24146 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24148.f_6339, Global_24148.f_6340);
				}
				else if (Global_24148.f_6334 > Global_24148.f_5828)
				{
					if (Global_24148.f_6337 != 0)
					{
						func_338();
						func_335((Global_24145 + iParam5) - 0.00390625f - func_336("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24148.f_6337, Global_24148.f_6336), Global_24146 + num38 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_24148.f_6337, Global_24148.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_24148.f_6341;
			num2 = 0;
			num42 = num36;
		
			if (Global_24148.f_9128)
			{
				r = Global_24148.f_9124;
				g = Global_24148.f_9125;
				b = Global_24148.f_9126;
				a = Global_24148.f_9127;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_24148.f_5828 && numberOfLinesForString <= Global_24148.f_5821)
			{
				if (numberOfLinesForString >= PV_COMP_HEAD)
				{
					if (Global_24148.f_6088[numberOfLinesForString])
					{
						if (Global_24148.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_24148.f_6341)
							num36 = num36 + 0.00277776f;
					
						num37 = 0.034722f;
					
						if (Global_24148.f_6348[numberOfLinesForString] != 0f)
							num37 = Global_24148.f_6348[numberOfLinesForString];
					
						num36 = num36 + num37;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			func_339("CommonMenu", "Gradient_Bgd", Global_24145 + (iParam5 * 0.5f), (num42 + ((num36 - num42) * 0.5f)) - 0.00138888f, iParam5, num36 - num42, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_24148.f_6334 > Global_24148.f_5828)
			{
				if (Global_24148.f_9133)
				{
					r = Global_24148.f_9129;
					g = Global_24148.f_9130;
					b = Global_24148.f_9131;
					a = Global_24148.f_9132;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_340(Global_24145, num36 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num41);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num41);
			
				if (Global_24148.f_9146)
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
			
				func_339("CommonMenu", "shop_arrows_upANDdown", Global_24145 + (iParam5 * 0.5f), num36 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num41, (textureResolution.f_1 / 720f) * num41, 0f, r, g, b, a, false, 0);
				num36 = num36 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_24148.f_5241)) != 0 && Global_24148.f_5323 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24145 + 0.0046875f;
			
				if (Global_24148.f_5325 != 0)
				{
					func_350(Global_24148.f_5325, true, true, &num26, &num27, bParam7);
					x = (Global_24145 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_334(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24148.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24148.f_5319; l = l + 1)
				{
					if (Global_24148.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24148.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_5262[num8], Global_24148.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24148.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_340(Global_24145, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24148.f_9138)
				{
					r = Global_24148.f_9134;
					g = Global_24148.f_9135;
					b = Global_24148.f_9136;
					a = Global_24148.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_339("CommonMenu", "Gradient_Bgd", Global_24145 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_334(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24148.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24148.f_5319; l = l + 1)
				{
					if (Global_24148.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24148.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_5262[num8], Global_24148.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24148.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				func_337(x, num36 + 0.00277776f, 0);
			
				if (Global_24148.f_5325 != 0)
				{
					func_350(Global_24148.f_5325, true, true, &num26, &num27, bParam7);
					func_333(Global_24148.f_5325, true, &num32, &num33, &num34, &num35);
					func_339(func_343(Global_24148.f_5325), func_341(Global_24148.f_5325, true), Global_24145 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24148.f_5247)))
				{
					num36 = num36 + (0.00138888f * 6f);
					func_334(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24148.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24148.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_340(Global_24145, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_24148.f_9138)
					{
						r = Global_24148.f_9134;
						g = Global_24148.f_9135;
						b = Global_24148.f_9136;
						a = Global_24148.f_9137;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					func_339("CommonMenu", "Gradient_Bgd", Global_24145 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_334(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24148.f_5247));
					func_337(x, num36 + 0.00277776f, 0);
					num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_24148.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_24148.f_5324 > Global_24148.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_5241), "", 24);
						Global_24148.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24148.f_5247)))
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24145 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24148.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_334(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24148.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_24148.f_5319; l = l + 1)
				{
					if (Global_24148.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_24148.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_5262[num8], Global_24148.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_24148.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_24148.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_24148.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_340(Global_24145, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24148.f_9138)
				{
					r = Global_24148.f_9134;
					g = Global_24148.f_9135;
					b = Global_24148.f_9136;
					a = Global_24148.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_339("CommonMenu", "Gradient_Bgd", Global_24145 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_334(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24148.f_5247));
				func_337(x, num36 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542961.f_21)) != 0 && Global_4542961.f_65 != -1)
			{
				num36 = num36 + (0.00277776f * 2f);
				x = Global_24145 + 0.0046875f;
			
				if (Global_4542961.f_67 != 0)
				{
					func_350(Global_4542961.f_67, true, true, &num26, &num27, bParam7);
					x = (Global_24145 + num26 + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_334(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542961.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542961.f_61; l = l + 1)
				{
					if (Global_4542961.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542961.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542961.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542961.f_34[num8], Global_4542961.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542961.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num36 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_340(Global_24145, num36 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_24148.f_9138)
				{
					r = Global_24148.f_9134;
					g = Global_24148.f_9135;
					b = Global_24148.f_9136;
					a = Global_24148.f_9137;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				func_339("CommonMenu", "Gradient_Bgd", Global_24145 + (iParam5 * 0.5f), (num36 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_334(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542961.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542961.f_61; l = l + 1)
				{
					if (Global_4542961.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542961.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542961.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542961.f_34[num8], Global_4542961.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542961.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542961.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542961.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				func_337(x, num36 + 0.00277776f, 0);
			
				if (Global_4542961.f_67 != 0)
				{
					func_350(Global_4542961.f_67, true, true, &num26, &num27, bParam7);
					func_333(Global_4542961.f_67, true, &num32, &num33, &num34, &num35);
					func_339(func_343(Global_4542961.f_67), func_341(Global_4542961.f_67, true), Global_24145 + (num26 * 0.5f) + (0.00078125f * 2f), (num36 + (num27 * 0.5f)) - (0.00138888f * 4f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
				}
			
				num36 = num36 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4542961.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4542961.f_66 > Global_4542961.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
						Global_4542961.f_65 = -1;
					}
				}
			}
		
			func_329(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_24148.f_6331)
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
			type = Global_24148.f_5821;
		
			if (Global_24148.f_6332)
				type = Global_24148.f_6335 - 1;
		
			num43 = 0f;
			num44 = 0f;
		
			for (j = PV_COMP_HEAD; j <= type; j = j + 1)
			{
				num37 = 0.034722f;
			
				if (Global_24148.f_6348[numberOfLinesForString] != 0f)
					num37 = Global_24148.f_6348[numberOfLinesForString];
			
				if (Global_24148.f_6332)
					numberOfLinesForString = Global_24148.f_8769[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_24148.f_6341 && num2 < Global_24148.f_5828)
				{
					flag2 = true;
				
					if (Global_24148.f_6342 == numberOfLinesForString)
						num44 = num43;
				
					if (Global_24148.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					num25 = num40 + num43 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_24148.f_6482[numberOfLinesForString] = num25;
				num24 = Global_24145 + 0.0046875f;
				flag3 = false;
				flag = Global_24148.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_24148.f_9140)
						HUD::GET_HUD_COLOUR(Global_24148.f_9139, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					func_339("CommonMenu", "Gradient_Nav", Global_24145 + (iParam5 * 0.5f), num40 + num44 + (0.00277776f * (float)num5) + (num37 * 0.5f), iParam5, num37, 0f, r2, g2, b2, a2, false, 0);
					Global_24148.f_6480 = num25;
				}
			
				for (k = 0; k < Global_24148.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_24148.f_5692[numberOfLinesForString], k) || Global_24148.f_5659[k] == 5)
					{
						if (Global_24148.f_6332)
						{
							num11 = Global_24148.f_8785[(num2 * Global_24148.f_5829) + k];
							num12 = Global_24148.f_8826[(num2 * Global_24148.f_5829) + k];
							num13 = Global_24148.f_8867[(num2 * Global_24148.f_5829) + k];
							num14 = Global_24148.f_8908[(num2 * Global_24148.f_5829) + k];
							num15 = Global_24148.f_8949[(num2 * Global_24148.f_5829) + k];
						}
						else
						{
							Global_24148.f_8785[(num2 * Global_24148.f_5829) + k] = num11;
							Global_24148.f_8826[(num2 * Global_24148.f_5829) + k] = num12;
							Global_24148.f_8867[(num2 * Global_24148.f_5829) + k] = num13;
							Global_24148.f_8908[(num2 * Global_24148.f_5829) + k] = num14;
							Global_24148.f_8949[(num2 * Global_24148.f_5829) + k] = num15;
						}
					
						num45 = 0;
						flag7 = false;
					
						if (Global_24148.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24148.f_6611[0])
							{
								flag7 = true;
								num45 = 0;
							}
						}
					
						if (Global_24148.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_24148.f_6611[1])
							{
								flag7 = true;
								num45 = 1;
							}
						}
					
						if (Global_24148.f_5665[k] != -1f)
							num24 = Global_24145 + 0.0046875f + Global_24148.f_5665[k];
					
						if (k < 4 && Global_24148.f_5665[k + 1] != -1f && num24 < Global_24148.f_5665[k + 1])
							num31 = Global_24148.f_5665[k + 1] - num24;
						else
							num31 = (Global_24145 + Global_24147) - 0.0046875f - num24;
					
						if (Global_24148.f_5678[k] && Global_24148.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_24148.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_24148.f_6332)
									{
										num28 = 0f;
										num29 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_24148.f_2387[num16 /*5*/][l] == 5 || Global_24148.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_24148.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_24148.f_2130[num16])
												flag5 = true;
										
											func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, num45, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_24148.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24148.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697110[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_4726[num13 + num19], Global_24148.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_24148.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0)
											num28 = func_323(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_350(Global_24148.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													num29 = num29 + num26;
												
													if (l > 0)
														num29 = num29 - (0.00078125f * 4f);
												
													if (Global_24148.f_4984[num14 + l] == 2 || Global_24148.f_4984[num14 + l] == 55 || Global_24148.f_4984[num14 + l] == 65)
														num29 = num29 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_24148.f_5686[k] == 2)
											x = x + (num31 - (num28 + num29)) + (0.00078125f * 1f);
										else if (Global_24148.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - ((num28 + num29) * 0.5f));
									
										Global_24148.f_8990[(num2 * Global_24148.f_5829) + k] = x;
										Global_24148.f_9031[(num2 * Global_24148.f_5829) + k] = num28;
										Global_24148.f_9072[(num2 * Global_24148.f_5829) + k] = num29;
									
										if (Global_24148.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_24148.f_5686[m] == 2)
													Global_24148.f_8990[(num2 * Global_24148.f_5829) + m] = Global_24148.f_8990[(num2 * Global_24148.f_5829) + m] - Global_24148.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_24148.f_8990[(num2 * Global_24148.f_5829) + k];
										num28 = Global_24148.f_9031[(num2 * Global_24148.f_5829) + k];
										num29 = Global_24148.f_9072[(num2 * Global_24148.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_350(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24148.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_350(27, true, true, &num26, &num27, bParam7))
											{
												func_333(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(27), func_341(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_350(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_350(28, true, true, &num26, &num27, bParam7))
											{
												func_333(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(28), func_341(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_24148.f_2387[num16 /*5*/][l] == 5 || Global_24148.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_24148.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_24148.f_2130[num16])
											flag5 = true;
									
										func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_24148.f_9144 && Global_24148.f_9145 == numberOfLinesForString)
											func_322(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_24148.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_24148.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697110[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_4726[num13 + num19], Global_24148.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_24148.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_24148.f_4984[num14 + num20] == 2 || Global_24148.f_4984[num14 + num20] == 55 || Global_24148.f_4984[num14 + num20] == 65)
											{
												if (func_350(Global_24148.f_4984[num14 + num20], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (func_350(Global_24148.f_4984[num14 + num20], flag, true, &num26, &num27, bParam7))
													{
														func_333(Global_24148.f_4984[num14 + num20], flag, &num32, &num33, &num34, &num35);
													
														if (i == 1)
															if (Global_24148.f_5686[k] == 2)
																func_339(func_343(Global_24148.f_4984[num14 + num20]), func_341(Global_24148.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_339(func_343(Global_24148.f_4984[num14 + num20]), func_341(Global_24148.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_24148.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_24148.f_5686[k] == 2)
										{
											func_337(num24 + x + (0.00078125f * 7f), num25, 0);
										}
										else
										{
											func_337(num24 + x, num25, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_24148.f_2130[num16])
														flag5 = true;
												
													func_326(false, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, flag5, flag4);
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
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_6341 + num22);
													func_337(num24 - num48, num25 + num47, 0);
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
											if (Global_24148.f_4984[num14 + l] != 2 && Global_24148.f_4984[num14 + l] != 55 && Global_24148.f_4984[num14 + l] != 65)
											{
												if (func_350(Global_24148.f_4984[num14 + l], flag, false, &num26, &num27, bParam7))
												{
													x = x + (num26 * 0.5f);
												
													if (i == 1)
													{
														if (func_350(Global_24148.f_4984[num14 + l], flag, true, &num26, &num27, bParam7))
														{
															func_333(Global_24148.f_4984[num14 + l], flag, &num32, &num33, &num34, &num35);
														
															if (Global_24148.f_4984[num14 + l] == 31)
																func_339(func_343(Global_24148.f_4984[num14 + l]), func_341(Global_24148.f_4984[num14 + l], flag), Global_24145 + (num26 * 0.5f), (num25 + 0.00277776f + (num27 * 0.5f)) - (0.00078125f * 11f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else if (Global_24148.f_5686[k] == 2)
																func_339(func_343(Global_24148.f_4984[num14 + l]), func_341(Global_24148.f_4984[num14 + l], flag), ((num24 + x + num28) - (0.00078125f * 8f)) + (0.00078125f * 4f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
															else
																func_339(func_343(Global_24148.f_4984[num14 + l]), func_341(Global_24148.f_4984[num14 + l], flag), (num24 + x + num28) - (0.00078125f * 12f), (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
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
									if (Global_24148.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_24148.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_24148.f_6332)
									{
										func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24148.f_9144 && Global_24148.f_9145 == numberOfLinesForString)
											func_322(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_4469[num12]);
										num28 = func_323(true);
										x = 0f;
									
										if (Global_24148.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24148.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24148.f_8990[(num2 * Global_24148.f_5829) + k] = x;
										Global_24148.f_9031[(num2 * Global_24148.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24148.f_8990[(num2 * Global_24148.f_5829) + k];
										num28 = Global_24148.f_9031[(num2 * Global_24148.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_350(27, true, false, &num26, &num27, bParam7))
										{
											if (Global_24148.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_350(27, true, true, &num26, &num27, bParam7))
											{
												func_333(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(27), func_341(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_350(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_350(28, true, true, &num26, &num27, bParam7))
											{
												func_333(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(28), func_341(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, false, false);
										func_321(num24 + x, num25, "NUMBER" /*~1~*/, Global_24148.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_24148.f_6332)
									{
										func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, false, false);
									
										if (Global_24148.f_9144 && Global_24148.f_9145 == numberOfLinesForString)
											func_322(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_4726[num13], Global_24148.f_4855[num13]);
										num28 = func_323(true);
										x = 0f;
									
										if (Global_24148.f_5686[k] == 2)
											x = x + (num31 - num28) + (0.00078125f * 1f);
										else if (Global_24148.f_5686[k] == 0)
											x = x + (((num31 - num24) * 0.5f) - (num28 * 0.5f));
									
										Global_24148.f_8990[(num2 * Global_24148.f_5829) + k] = x;
										Global_24148.f_9031[(num2 * Global_24148.f_5829) + k] = num28;
									}
									else
									{
										x = Global_24148.f_8990[(num2 * Global_24148.f_5829) + k];
										num28 = Global_24148.f_9031[(num2 * Global_24148.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_350(27, true, false, &num26, &num27, false))
										{
											if (Global_24148.f_5686[k] == 2)
												x = x - (num26 * 2f);
										
											num30 = num26 * 0.5f;
										
											if (func_350(27, true, true, &num26, &num27, bParam7))
											{
												func_333(27, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(27), func_341(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									
										if (func_350(28, true, false, &num26, &num27, bParam7))
										{
											x = x + num26;
											num30 = num26 * 0.5f;
										
											if (func_350(28, true, true, &num26, &num27, bParam7))
											{
												func_333(28, true, &num32, &num33, &num34, &num35);
											
												if (i == 1)
													func_339(func_343(28), func_341(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
											}
										}
									}
								
									func_326(flag, Global_24148.f_1616[num16], Global_24148.f_1873[num16], flag7, 0, false, false);
									func_320(num24 + x, num25, "NUMBER" /*~1~*/, Global_24148.f_4726[num13], Global_24148.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_350(Global_24148.f_4984[num14], flag, false, &num26, &num27, bParam7))
									{
										if (!Global_24148.f_6332)
										{
											num29 = num26;
											x = 0f;
										
											if (Global_24148.f_5686[k] == 2)
												x = x + (num31 - num29) + (0.00078125f * 1f);
											else if (Global_24148.f_5686[k] == 0)
												x = x + (((num31 - num24) * 0.5f) - (num29 * 0.5f));
										
											Global_24148.f_8990[(num2 * Global_24148.f_5829) + k] = x;
											Global_24148.f_9072[(num2 * Global_24148.f_5829) + k] = num29;
										}
										else
										{
											x = Global_24148.f_8990[(num2 * Global_24148.f_5829) + k];
											num29 = Global_24148.f_9072[(num2 * Global_24148.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_350(27, true, false, &num26, &num27, bParam7))
											{
												if (Global_24148.f_5686[k] == 2)
													x = x - (num26 * 2f);
											
												num30 = num26 * 0.5f;
											
												if (func_350(27, true, true, &num26, &num27, bParam7))
												{
													func_333(27, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_339(func_343(27), func_341(27, true), num24 + x + num30, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										
											if (func_350(28, true, false, &num26, &num27, bParam7))
											{
												x = x + num26;
												num30 = num26 * 0.5f;
											
												if (func_350(28, true, true, &num26, &num27, bParam7))
												{
													func_333(28, true, &num32, &num33, &num34, &num35);
												
													if (i == 1)
														func_339(func_343(28), func_341(28, true), num24 + x + num30 + num28 + num29, (num25 - 0.00277776f) + (num37 * 0.5f), num26, num27, 0f, num32, num33, num34, num35, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_350(Global_24148.f_4984[num14], flag, true, &num26, &num27, bParam7))
											{
												func_333(Global_24148.f_4984[num14], flag, &num32, &num33, &num34, &num35);
												func_339(func_343(Global_24148.f_4984[num14]), func_341(Global_24148.f_4984[num14], flag), num24 + x + (num26 * 0.5f), (num25 - 0.00277776f) + (num37 * 0.5f), num26 * func_319(Global_24148.f_4984[num14]), num27 * func_319(Global_24148.f_4984[num14]), 0f, num32, num33, num34, num35, false, 0);
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
					
						if (Global_24148.f_5659[k] == 5)
						{
							if (Global_24148.f_5671[k] > 0.05f)
								num24 = num24 + Global_24148.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_24148.f_5671[k];
						
							if (Global_24148.f_5678[k])
								if (func_350(27, true, true, &num26, &num27, bParam7))
									num24 = num24 - num26;
						}
					}
					else
					{
						num24 = num24 + Global_24148.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_24148.f_8769[num2] = numberOfLinesForString;
						Global_24148.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_24148.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_24148.f_6348[numberOfLinesForString] != 0f)
							num43 = num43 + Global_24148.f_6348[numberOfLinesForString];
						else
							num43 = num43 + 0.034722f;
					}
				
					if (!Global_24148.f_6331)
					{
						Global_24148.f_6088[numberOfLinesForString] = true;
					
						if (Global_24148.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_24148.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_24148.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_24148.f_6331)
			{
				Global_24148.f_6333 = num40 + num43 + (0.00277776f * (float)num5);
				Global_24148.f_6336 = num4;
				Global_24148.f_6334 = num3;
				Global_24148.f_6331 = 1;
			}
		}
	
		if (!Global_24148.f_6332)
		{
			Global_24148.f_6335 = num2;
			Global_24148.f_6332 = 1;
		}
	}

	Global_24148.f_6479 = num36;
	Global_24148.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_24148.f_6479);

	if (!Global_24148.f_9113)
		func_602(0);

	Global_24148.f_9113 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_318(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_318(int iParam0) // Position - 0x1A3ED (107501)
{
	Global_1675455.f_1163 = iParam0;
	return;
}

float func_319(int iParam0) // Position - 0x1A3FE (107518)
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
		case 57:
		case 48:
		case 49:
		case 50:
			return 0.85f;
	}

	return 1f;
}

void func_320(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x1A46D (107629)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_314(fParam0), fParam1, 0);
	return;
}

void func_321(float fParam0, float fParam1, char* sParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x1A490 (107664)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(epctParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_314(fParam0), fParam1, iParam4);
	return;
}

void func_322(BOOL bParam0) // Position - 0x1A4B2 (107698)
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_24148.f_9141[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_24148.f_9141[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

float func_323(BOOL bParam0) // Position - 0x1A4F8 (107768)
{
	return func_324(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_324(float fParam0) // Position - 0x1A50A (107786)
{
	fParam0 = fParam0 * func_325();
	return fParam0;
}

float func_325() // Position - 0x1A51D (107805)
{
	return func_316() / 1.7777778f;
}

void func_326(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1A52F (107823)
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_328(Global_24148.f_6614[iParam4], &r, &g, &b);
		
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

	func_327(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_327(float fParam0, float fParam1) // Position - 0x1A6DD (108253)
{
	HUD::SET_TEXT_WRAP(func_314(fParam0), func_314(fParam1));
	return;
}

void func_328(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1A6F5 (108277)
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

void func_329(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x1A97F (108927)
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_307(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_352(bParam4, bParam8))
		return;

	if (func_331())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_9(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_24148.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_24148.f_5326; i = i + 1)
			{
				if (Global_24148.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24148.f_5625[i], true), 64);
				else if (Global_24148.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_24148.f_5640[i], true), 64);
			}
		
			Global_24148.f_5327 = 0;
		}
	
		if (!Global_24148.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_24148.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_24148.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_24148.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_330(&Global_24148.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_24148.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_330(&Global_24148.f_5328[j /*16*/]);
					}
				
					if (Global_24148.f_5610[i] == -1)
					{
						func_271(&Global_24148.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_24148.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24148.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24148.f_5625[i] != 365 && IS_BIT_SET(Global_24148.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24148.f_5625[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542961.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24148.f_5326);
				func_330(&Global_4542961);
			
				if (Global_4542961.f_20 == -1)
				{
					func_271(&(Global_4542961.f_16));
				}
				else
				{
					timestamp2 = Global_24148.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542961.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_24148.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24148.f_5327 = 1;
		}
	
		for (i = 0; i < Global_24148.f_5326; i = i + 1)
		{
			if (Global_24148.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_24148.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4542961.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24148.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542961.f_16));
			
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
			if (!Global_24148.f_9148)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_24148.f_9148 = 1;
			}
		}
		else if (Global_24148.f_9148)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_24148.f_9148 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_24148.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24148.f_6263[num /*10*/], Global_24148.f_5656, Global_24148.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24148.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_330(char* sParam0) // Position - 0x1AE84 (110212)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_331() // Position - 0x1AE92 (110226)
{
	var position;

	if (Global_21239.f_1 > 3)
		return true;

	if (func_332())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21184 == 0)
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

BOOL func_332() // Position - 0x1AF00 (110336)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_333(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0x1AF1A (110362)
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
		case 57:
		case 40:
		case 41:
		case 39:
		case 45:
		case 44:
		case 48:
		case 49:
		case 50:
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 58:
			*piParam5 = 100;
			break;
	
		case 66:
			*piParam5 = 100;
			break;
	
		case 59:
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

void func_334(float fParam0) // Position - 0x1B056 (110678)
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
	func_327(fParam0, (Global_24145 + Global_24147) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_335(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x1B0B5 (110773)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_314(fParam0), fParam1, 0);
	return;
}

float func_336(char* sParam0, int iParam1, int iParam2) // Position - 0x1B0DC (110812)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_338();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_323(true);
}

void func_337(float fParam0, float fParam1, int iParam2) // Position - 0x1B11E (110878)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_314(fParam0), fParam1, iParam2);
	return;
}

void func_338() // Position - 0x1B134 (110900)
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_24148.f_9123)
	{
		r = Global_24148.f_9119;
		g = Global_24148.f_9120;
		b = Global_24148.f_9121;
		a = Global_24148.f_9122;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	func_327(Global_24145 + 0.0046875f, (Global_24145 + Global_24147) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_339(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, int iParam12) // Position - 0x1B1BE (111038)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_314(fParam2), fParam3, func_314(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
	return;
}

void func_340(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1B1EC (111084)
{
	GRAPHICS::DRAW_RECT(func_314(fParam0 + (iParam2 * 0.5f)), fParam1 + (fParam3 * 0.5f), func_314(iParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

char* func_341(int iParam0, BOOL bParam1) // Position - 0x1B223 (111139)
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24148.f_7696[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24148.f_7696[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_342(&txdName);
		}
		else
		{
			return func_342(&Global_24148.f_7696[iParam0 /*16*/]);
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
	
		case 55:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 56:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 58:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 59:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 63:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 64:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 66:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 65:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
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

char* func_342(char* sParam0) // Position - 0x1B753 (112467)
{
	return sParam0;
}

char* func_343(int iParam0) // Position - 0x1B75D (112477)
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24148.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_24148.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_342(&txdName);
		}
		else
		{
			return func_342(&Global_24148.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 55)
		return "MPShopSale";

	return "CommonMenu";
}

void func_344(ePedComponentType epctParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1B7D2 (112594)
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_24148.f_5821 > epctParam0)
		return;

	if (Global_24148.f_5821 >= 128)
		return;

	if (Global_24148.f_5823 >= 256)
		return;

	if (Global_24148.f_6346 < Global_24148.f_6344)
		return;

	if (Global_24148.f_5821 != epctParam0)
	{
		Global_24148.f_5821 = epctParam0;
		Global_24148.f_5822 = 0;
	}

	num = Global_24148.f_5659[Global_24148.f_5822];

	if (num != 1)
	{
		while (Global_24148.f_5822 < 4 && num != 1)
		{
			Global_24148.f_5822 = Global_24148.f_5822 + 1;
			num = Global_24148.f_5659[Global_24148.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_79[Global_24148.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_24148.f_1616[Global_24148.f_5823] = bParam3;
	Global_24148.f_1873[Global_24148.f_5823] = bParam4;
	Global_24148.f_2130[Global_24148.f_5823] = bParam6;
	Global_24148.f_5823 = Global_24148.f_5823 + 1;

	if (!bParam3)
		func_347(Global_24148.f_5821, true);
	else
		func_347(Global_24148.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_346(&Global_24148.f_79[Global_24148.f_5823 /*6*/]);
	
		if (Global_24148.f_5678[Global_24148.f_5822])
		{
			func_350(27, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_24148.f_5671[Global_24148.f_5822])
			Global_24148.f_5671[Global_24148.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_345(&Global_24148.f_79[Global_24148.f_5823 /*6*/]);
		
			if (num4 > Global_24148.f_6348[epctParam0])
				Global_24148.f_6348[epctParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_24148.f_5692[epctParam0], Global_24148.f_5822);
	Global_24148.f_5822 = Global_24148.f_5822 + 1;
	Global_24148.f_6347 = 1;
	Global_24148.f_6345 = Global_24148.f_5823 - 1;
	Global_24148.f_6346 = 0;
	Global_24148.f_6344 = iParam2;
	return;
}

float func_345(char* sParam0) // Position - 0x1B9EE (113134)
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_346(char* sParam0) // Position - 0x1BA0A (113162)
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_326(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_323(true);
}

void func_347(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x1BA47 (113223)
{
	int num;

	num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(epctParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_24148.f_6618[num], epctParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_24148.f_6618[num], epctParam0 - (num * 32));

	return;
}

void func_348(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0x1BA93 (113299)
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

	if (func_349(*piParam1, *piParam2))
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

BOOL func_349(int iParam0, int iParam1) // Position - 0x1BB1B (113435)
{
	return BUILTIN::TO_FLOAT(iParam0) / BUILTIN::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_350(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x1BB36 (113462)
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_343(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_341(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_348(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_351(iParam0) / num3;
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
	
		if (iParam0 == 30 && MISC::GET_HASH_KEY(&Global_24148.f_7696[30 /*16*/]) == joaat("CREW_LOGO"))
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
			if (*uParam3 > Global_24147)
			{
				*uParam4 = *uParam4 * (Global_24147 / *uParam3);
				*uParam3 = Global_24147;
			}
		}
	
		return true;
	}

	return false;
}

float func_351(int iParam0) // Position - 0x1BC62 (113762)
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
		case 56:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 66:
			return 0.5f;
	
		case 65:
			return 0.8f;
	}

	return 1f;
}

BOOL func_352(BOOL bParam0, BOOL bParam1) // Position - 0x1BD3C (113980)
{
	if (Global_2672967.f_1761.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_22(8, -1) && func_353() != TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_80029 || Global_24148.f_9147 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101969.f_1490)
		return false;

	return true;
}

eTransitionState func_353() // Position - 0x1BDD9 (114137)
{
	return Global_1575016;
}

void func_354(var uParam0) // Position - 0x1BDE5 (114149)
{
	if (func_375() || func_125(*Global_4718592.f_197275, true) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		func_373(uParam0);
	else if (IS_BIT_SET(Global_1668463, 2) || IS_BIT_SET(Global_1668463, 3))
		func_370(uParam0);
	else
		func_355(uParam0);

	return;
}

void func_355(var uParam0) // Position - 0x1BE3F (114239)
{
	Global_24146 = (0.034722f * 3f) + 0.05f + uParam0->f_13;
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.0755f, 0f, 0f);
		func_360("CommonMenu", "Interaction_bgd", &(uParam0->f_14), 1, 0, 4, false);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	}

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.0755f, 0f, 0f);
	func_356(&(uParam0->f_11), uParam0, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 0, HUD_COLOUR_WHITE, 1);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_356(var uParam0, var uParam1, const char* sParam2, char* sParam3, eHudColour ehcParam4, int iParam5) // Position - 0x1BECF (114383)
{
	char* text;

	if (!func_229(sParam2))
	{
		if (func_358())
		{
			func_357(uParam1, false);
			HUD::SET_TEXT_JUSTIFICATION(iParam5);
		
			if (func_229(sParam3))
				text = "STRING";
			else
				text = sParam3;
		
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(text);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(ehcParam4);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_314(*uParam0), uParam0->f_1, 0);
		}
	}

	return;
}

void func_357(var uParam0, BOOL bParam1) // Position - 0x1BF2D (114477)
{
	HUD::SET_TEXT_FONT(*uParam0);

	if (!(uParam0->f_8 == 0f) || !(uParam0->f_9 == 0f))
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);

	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);

	switch (uParam0->f_7)
	{
		case 0:
			break;
	
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
	
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}

	if (bParam1)
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);

	return;
}

BOOL func_358() // Position - 0x1BFC6 (114630)
{
	if (func_359())
		return true;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
		return false;

	if (MISC::IS_FRONTEND_FADING())
		return false;

	return true;
}

BOOL func_359() // Position - 0x1C007 (114695)
{
	return Global_1574604;
}

void func_360(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x1C013 (114707)
{
	float num;

	num = { *uParam2 };

	switch (iParam4)
	{
		case 0:
			func_369(&num);
			break;
	
		case 1:
			func_368(&num);
			break;
	
		case 5:
			func_367(&num);
			break;
	
		case 6:
			func_366(&num);
			break;
	
		case 7:
			func_365(&num);
			break;
	
		case 8:
			func_364(&num);
			break;
	
		case 9:
			func_363(&num);
			break;
	}

	if (func_358())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
	
		if (iParam3 == 1)
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_362(num), func_361(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
		else
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_362(num), func_361(num.f_1), num.f_2, num.f_3, num.f_8, num.f_4, num.f_5, num.f_6, num.f_7, bParam6, 0);
	
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}

	return;
}

float func_361(float fParam0) // Position - 0x1C11A (114970)
{
	return fParam0;
}

float func_362(float fParam0) // Position - 0x1C124 (114980)
{
	return fParam0;
}

void func_363(var uParam0) // Position - 0x1C12E (114990)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
	return;
}

void func_364(var uParam0) // Position - 0x1C148 (115016)
{
	uParam0->f_7 = 2;
	return;
}

void func_365(var uParam0) // Position - 0x1C155 (115029)
{
	uParam0->f_7 = 5;
	return;
}

void func_366(var uParam0) // Position - 0x1C162 (115042)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
	return;
}

void func_367(var uParam0) // Position - 0x1C17F (115071)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
	return;
}

void func_368(var uParam0) // Position - 0x1C19C (115100)
{
	uParam0->f_4 = uParam0->f_4 - 50;
	uParam0->f_5 = uParam0->f_5 - 50;
	uParam0->f_6 = uParam0->f_6 - 50;
	return;
}

void func_369(var uParam0) // Position - 0x1C1C5 (115141)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
	return;
}

void func_370(var uParam0) // Position - 0x1C1ED (115181)
{
	char* textureDict;
	char* textureName;
	int num;
	int num2;
	int num3;
	float num4;
	float textureResolution;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float height;
	float num10;
	float screenY;

	textureDict = "ShopUI_Title_GTA_Plus_Garage";
	textureName = "ShopUI_Title_GTA_Plus_Garage";
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
	{
		if (!IS_BIT_SET(Global_1668463, 3) && func_372())
		{
			func_371();
			func_582(0, true, 1);
			Global_2711400 = true;
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		num = 30;
		num4 = 1f;
		func_348(false, &num2, &num3, &num4);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(textureDict, textureName) };
		num5 = func_351(num) / num4;
		textureResolution = { textureResolution * { num5, num5, num5 } };
		num6 = (textureResolution / (float)num2) * (float)num2 / num3;
		num7 = (textureResolution.f_1 / (float)num3 / textureResolution / (float)num2) * num6;
	
		if (!GRAPHICS::GET_IS_WIDESCREEN() && num != 31)
			num6 = num6 * 1.33f;
	
		if (num == 30)
		{
			if (num6 > Global_24147)
			{
				num7 = num7 * (Global_24147 / num6);
				num6 = Global_24147;
			}
		}
	
		num8 = num7 / num6;
		num9 = Global_24147;
		height = (num9 * num8) - 0.0003f;
		num10 = Global_24145 + (num9 * 0.5f);
		screenY = (Global_24146 + (height * 0.5f)) - 0.099f;
		GRAPHICS::DRAW_SPRITE(textureDict, textureName, func_314(num10), screenY, func_314(num9), height, 0f, 255, 255, 255, 255, false, 0);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		Global_24146 = (0.034722f * 3f) + 0.05f + uParam0->f_13 + 0.0007f;
	}

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_371() // Position - 0x1C35E (115550)
{
	MISC::CLEAR_BIT(&Global_1668463, 0);
	MISC::CLEAR_BIT(&Global_1668463, 1);
	return;
}

BOOL func_372() // Position - 0x1C378 (115576)
{
	if (IS_BIT_SET(Global_1668463, 0) || IS_BIT_SET(Global_1668463, 1))
		return true;

	return false;
}

void func_373(var uParam0) // Position - 0x1C39A (115610)
{
	char* textureDict;
	char* str;

	Global_24146 = (0.034722f * 3f) + 0.05f + uParam0->f_13;
	textureDict = "FIXER_MENU_BANNERS";
	str = "SHOP_BANNER_SHORT_TRIPS_FRANKLIN";

	if (func_374(PLAYER::PLAYER_ID()) == joaat("IG_LamarDavis_02"))
		str = "SHOP_BANNER_SHORT_TRIPS_LAMAR";

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(textureDict, false);

	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(textureDict))
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.0755f, 0f, 0f);
		func_360(textureDict, str, &(uParam0->f_14), 1, 0, 4, false);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	}

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

Hash func_374(Player plParam0) // Position - 0x1C418 (115736)
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0));
}

BOOL func_375() // Position - 0x1C42A (115754)
{
	return func_376(*Global_4718592.f_138116);
}

BOOL func_376(Hash hParam0) // Position - 0x1C440 (115776)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_262145.f_31224[i] == hParam0)
			return 1;
	}

	return 0;
}

void func_377() // Position - 0x1C46F (115823)
{
	Global_2740191.f_4672 = 0;
	return;
}

void func_378() // Position - 0x1C47F (115839)
{
	var height;
	Vector3 vector;
	var unk3;
	float blipInfoIdCoord;

	if (!IS_BIT_SET(iLocal_100.f_1, 9))
	{
		if (IS_BIT_SET(iLocal_100.f_1, 8))
		{
			iLocal_100.f_7.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_AREA(iLocal_100.f_7 - 7f, iLocal_100.f_7.f_1 - 7f, iLocal_100.f_7 + 7f, iLocal_100.f_7.f_1 + 7f) + 5f;
			vector = { iLocal_100.f_7 };
			unk3.f_5 = 1115815936;
			unk3.f_13 = 2;
			unk3.f_20 = 2;
			unk3.f_32 = -1082130432;
			unk3.f_34 = 1;
			unk3.f_4 = 1;
			unk3.f_5 = 0f;
			unk3.f_6 = 1;
		
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vector, &height) && !func_540(vector) || func_539() || func_379(vector, 100f, &(iLocal_100.f_7), &height, &unk3))
			{
				HUD::DELETE_WAYPOINTS_FROM_THIS_PLAYER();
				iLocal_100.f_10 = { iLocal_100.f_7 };
				iLocal_260 = 1;
				MISC::SET_BIT(&(iLocal_100.f_1), 9);
				MISC::SET_BIT(&(iLocal_100.f_1), 10);
				iLocal_100.f_15[2] = 0;
			}
		}
		else if (IS_BIT_SET(iLocal_100.f_1, 7))
		{
			MISC::SET_BIT(&(iLocal_100.f_1), 8);
		}
	}

	if (!HUD::IS_WAYPOINT_ACTIVE())
	{
		if (IS_BIT_SET(iLocal_256, 2))
		{
			func_19();
			MISC::CLEAR_BIT(&iLocal_256, 2);
		}
	}
	else if (!IS_BIT_SET(iLocal_256, 2))
	{
		blipInfoIdCoord = { HUD::GET_BLIP_INFO_ID_COORD(HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID())) };
		blipInfoIdCoord.f_2 = PATHFIND::GET_APPROX_HEIGHT_FOR_AREA(blipInfoIdCoord - 5f, blipInfoIdCoord.f_1 - 5f, blipInfoIdCoord + 5f, blipInfoIdCoord.f_1 + 5f);
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, blipInfoIdCoord, true) > 1000f)
		{
			func_19();
			iLocal_100.f_7 = { blipInfoIdCoord };
			iLocal_100.f_10 = { blipInfoIdCoord };
			HUD::SET_MINIMAP_BLOCK_WAYPOINT(true);
			MISC::SET_BIT(&(iLocal_100.f_1), 7);
			MISC::SET_BIT(&iLocal_256, 2);
			iLocal_260 = 1;
		}
	}

	return;
}

BOOL func_379(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1C62A (116266)
{
	var unk;
	var unk35;
	var unk66;

	if (uParam6->f_5 > fParam3 - 20f)
		uParam6->f_5 = fParam3 - 20f;

	unk = 5;
	unk.f_16 = 5;
	unk.f_22 = 5;
	unk.f_28 = 5;
	unk35.f_16 = 1;
	unk35.f_22 = 1;
	unk35.f_23 = 1;
	unk35.f_24 = 1;
	unk35.f_28 = -1;
	unk35 = { uParam0 };
	unk35.f_3 = uParam6->f_11;
	unk35.f_4 = fParam3;
	unk35.f_5 = 0;
	unk35.f_6 = 1;
	unk35.f_7 = 0;
	unk35.f_15 = 0;
	unk35.f_16 = 1;
	unk35.f_17 = 0;

	if (func_380(&unk35, uParam6, &unk))
	{
		if (uParam6->f_12 > 0f && uParam6->f_7 && uParam6->f_8)
		{
			unk66 = { uParam0 - unk[0 /*3*/] };
		
			if (unk66.f_2 > uParam6->f_12)
			{
				unk[0 /*3*/] = { uParam0 };
				unk.f_16[0] = uParam6->f_11;
			}
		}
	
		*uParam4 = { unk[0 /*3*/] };
		*uParam5 = unk.f_16[0];
		return true;
	}

	return false;
}

BOOL func_380(var uParam0, var uParam1, var uParam2) // Position - 0x1C730 (116528)
{
	int flags;
	float dx;
	float x1;
	float y1;
	float x2;
	float y2;
	float num;
	Vector3 vector;
	Vector3 vector2;
	int i;
	Vector3 vector3;
	Vector3 vector4;
	float width;
	BOOL flag;
	var unk13;
	BOOL flag2;

	flag = false;

	switch (uParam0->f_7)
	{
		case 0:
			if (!(Global_2635523.f_2767 == *uParam0) || !(Global_2635523.f_2767.f_1 == uParam0->f_1) || !(Global_2635523.f_2767.f_2 == uParam0->f_2) || !(Global_2635523.f_2770 == uParam0->f_4))
				flag = true;
			break;
	
		case 1:
			if (!(Global_2635523.f_2781 == uParam0->f_8) || !(Global_2635523.f_2781.f_1 == uParam0->f_8.f_1) || !(Global_2635523.f_2781.f_2 == uParam0->f_8.f_2) || !(Global_2635523.f_2784 == uParam0->f_11) || !(Global_2635523.f_2784.f_1 == uParam0->f_11.f_1) || !(Global_2635523.f_2784.f_2 == uParam0->f_11.f_2))
				flag = true;
			break;
	
		case 2:
			if (!(Global_2635523.f_2781 == uParam0->f_8) || !(Global_2635523.f_2781.f_1 == uParam0->f_8.f_1) || !(Global_2635523.f_2781.f_2 == uParam0->f_8.f_2) || !(Global_2635523.f_2784 == uParam0->f_11) || !(Global_2635523.f_2784.f_1 == uParam0->f_11.f_1) || !(Global_2635523.f_2784.f_2 == uParam0->f_11.f_2) || !(Global_2635523.f_2787 == uParam0->f_14))
				flag = true;
			break;
	}

	if (Global_1574477)
	{
		if (!(Global_2635523.f_2788 == uParam0->f_7))
			flag = true;
	
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635523.f_2774) && !(Global_2635523.f_2774 == SCRIPT::GET_ID_OF_THIS_THREAD()))
			flag = true;
	}

	if (flag)
	{
		if (Global_2635523.f_2765 == true)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2635523.f_2774))
				if (Global_2635523.f_2774 == SCRIPT::GET_ID_OF_THIS_THREAD())
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2771) < func_538(false))
						return false;
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2771) < func_538(false))
					return false;
		
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_537();
		}
	
		Global_2635523.f_2765 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2771) > func_538(false))
	{
		Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
		func_531();
	}

	switch (uParam0->f_7)
	{
		case 0:
			x1 = *uParam0 - uParam0->f_4;
			y1 = uParam0->f_1 - uParam0->f_4;
			x2 = *uParam0 + uParam0->f_4;
			y2 = uParam0->f_1 + uParam0->f_4;
			break;
	
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				x1 = uParam0->f_8;
				x2 = uParam0->f_11;
			}
			else
			{
				x1 = uParam0->f_11;
				x2 = uParam0->f_8;
			}
		
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				y1 = uParam0->f_8.f_1;
				y2 = uParam0->f_11.f_1;
			}
			else
			{
				y1 = uParam0->f_11.f_1;
				y2 = uParam0->f_8.f_1;
			}
			break;
	
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				x1 = uParam0->f_8 - (0.5f * uParam0->f_14);
				x2 = uParam0->f_11 + (0.5f * uParam0->f_14);
			}
			else
			{
				x1 = uParam0->f_11 - (0.5f * uParam0->f_14);
				x2 = uParam0->f_8 + (0.5f * uParam0->f_14);
			}
		
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				y1 = uParam0->f_8.f_1 - (0.5f * uParam0->f_14);
				y2 = uParam0->f_11.f_1 + (0.5f * uParam0->f_14);
			}
			else
			{
				y1 = uParam0->f_11.f_1 - (0.5f * uParam0->f_14);
				y2 = uParam0->f_8.f_1 + (0.5f * uParam0->f_14);
			}
			break;
	}

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(x1, y1, x2, y2);

	if (uParam0->f_7 == 0)
		num = { *uParam0 };
	else
		num = { (uParam0->f_8 + uParam0->f_11) * { 0.5f, 0.5f, 0.5f } };

	vector = { num + { -0.1f, -0.1f, -0.1f } };
	vector2 = { num + { 0.1f, 0.1f, 0.1f } };

	if (!Global_2635523.f_2765)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		func_537();
	
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (BUILTIN::VMAG(*uParam0) > 0f)
			{
				if (func_530(*uParam0, 6f, 1f, 1f, 5f, true, true, true, 120f, false, -1, true, uParam1->f_5, uParam0->f_17, 0, false, false))
				{
					uParam2->[0 /*3*/] = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return true;
				}
			}
		}
	
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2635523.f_2788 = uParam0->f_7;
		
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635523.f_2767 = { *uParam0 };
					Global_2635523.f_2770 = uParam0->f_4;
					break;
			
				case 1:
					Global_2635523.f_2781 = { uParam0->f_8 };
					Global_2635523.f_2784 = { uParam0->f_11 };
					Global_2635523.f_2787 = 0f;
					Global_2635523.f_2767 = { (uParam0->f_8 + uParam0->f_11) / { 2f, 2f, 2f } };
					break;
			
				case 2:
					Global_2635523.f_2781 = { uParam0->f_8 };
					Global_2635523.f_2784 = { uParam0->f_11 };
					Global_2635523.f_2787 = uParam0->f_14;
					Global_2635523.f_2767 = { (uParam0->f_8 + uParam0->f_11) / { 2f, 2f, 2f } };
					break;
			}
		
			if (!uParam1->f_8 && !uParam1->f_9)
				func_529(num, num.f_1);
		
			Global_2635523.f_2766 = 1;
			Global_2635523.f_2765 = 1;
			Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635523.f_2771 = NETWORK::GET_NETWORK_TIME();
			Global_2635523.f_2774 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return false;
		}
	}

	if (Global_2635523.f_2765)
	{
		if (Global_2635523.f_2766 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(x1, y1, x2, y2) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2772) > 5000)
			{
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
						uParam2->[0 /*3*/] = { uParam0->f_18 };
					else
						uParam2->[0 /*3*/] = { num };
				
					unk13.f_6 = 1082130432;
					unk13.f_7 = 1176255488;
					unk13.f_8 = 1;
					unk13.f_10 = 1;
					unk13.f_13 = 1;
					unk13.f_15 = 1;
					unk13.f_16 = 1;
					unk13.f_31 = 1;
					unk13.f_34 = joaat("tailgater");
					unk13.f_38 = 2;
					unk13.f_45 = 2;
					unk13.f_49 = 1123024896;
					unk13.f_53 = 999;
					unk13.f_54 = 1176256410;
					unk13.f_55 = 1;
					unk13.f_56 = 1;
					unk13.f_57 = 1;
					unk13 = { *uParam1 };
					unk13.f_3 = uParam1->f_5;
					unk13.f_11 = uParam1->f_9;
					unk13.f_18 = 1;
				
					if (uParam1->f_32 > 0f)
						unk13.f_6 = uParam1->f_32;
				
					switch (uParam0->f_7)
					{
						case 0:
							unk13.f_19 = { *uParam0 };
							unk13.f_25 = uParam0->f_4;
							break;
					
						case 1:
							unk13.f_19 = { uParam0->f_8 };
							unk13.f_22 = { uParam0->f_11 };
							unk13.f_25 = 0f;
							break;
					
						case 2:
							unk13.f_19 = { uParam0->f_8 };
							unk13.f_22 = { uParam0->f_11 };
							unk13.f_25 = uParam0->f_14;
							break;
					}
				
					unk13.f_26 = uParam0->f_7;
					unk13.f_12 = uParam0->f_15;
				
					if (uParam0->f_21)
					{
						unk13.f_30 = 1;
						unk13.f_32 = 1;
					}
				
					for (i = 0; i < 2; i = i + 1)
					{
						unk13.f_38[i /*3*/] = { uParam1->f_13[i /*3*/] };
						unk13.f_45[i] = uParam1->f_20[i];
					}
				
					unk13.f_51 = uParam1->f_30;
					unk13.f_55 = uParam0->f_16;
				
					if (uParam0->f_26)
						unk13.f_10 = 0;
				
					if (func_528(*Global_4718592.f_197275))
						unk13.f_9 = 1;
				
					unk13.f_60 = uParam0->f_30;
					func_501(&uParam2->[0 /*3*/], &uParam2->f_16[0], &unk13);
				
					if (uParam1->f_7 && uParam1->f_9 && uParam0->f_7 == 0)
					{
						if (!func_500(uParam2->[0 /*3*/], *uParam0, uParam0->f_4, true, true))
						{
							uParam2->[0 /*3*/] = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
				
					Global_2635523.f_2766 = 9;
				}
				else
				{
					Global_2635523.f_2766 = 2;
				}
			}
		}
	
		if (Global_2635523.f_2766 == 2)
		{
			if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vector, vector2) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2772) > 15000 || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(vector, vector2) == 0)
			{
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			
				if (uParam0->f_5 && !func_9(PLAYER::PLAYER_ID(), 0))
					Global_2635523.f_2766 = 3;
				else
					Global_2635523.f_2766 = 4;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2776) > 7000)
			{
				func_499(num, num.f_1);
			}
		}
	
		if (Global_2635523.f_2766 == 3)
		{
			if (func_498() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2772) > 10000)
			{
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635523.f_2766 = 4;
			}
		}
	
		if (Global_2635523.f_2766 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				flags = 0;
				func_531();
			
				if (uParam0->f_5)
				{
					if (BUILTIN::VMAG(*uParam1) == 0f)
						flags = flags + 2;
				
					if (uParam1->f_3)
						flags = flags + 8;
				
					flags = flags + 16;
					flags = flags + 32;
				
					if (!(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1))
					{
						flags = flags + 64;
						flags = flags + 128;
						flags = flags + 256;
					}
				
					flags = flags + 2048;
					flags = flags + 512;
					flags = flags + 1024;
				
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, flags))
							{
								Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635523.f_2766 = 5;
							}
							break;
					
						case 1:
							func_497(uParam0->f_8, uParam0->f_11, &vector3, &vector4, &width);
						
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), vector3, vector4, width, *uParam1, flags))
							{
								Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635523.f_2766 = 5;
							}
							break;
					
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, flags))
							{
								Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635523.f_2766 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
						flags = flags + 1;
				
					flags = flags + 2;
				
					if (uParam1->f_10)
						flags = flags + 32;
				
					Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
					Global_2635523.f_2766 = 5;
				
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, flags, 2f, 5000);
							break;
					
						case 1:
							func_497(uParam0->f_8, uParam0->f_11, &vector3, &vector4, &width);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(vector3, vector4, width, flags, 2f, 5000);
							break;
					
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, flags, 2f, 5000);
							break;
					}
				}
			}
		}
	
		if (Global_2635523.f_2766 == 5)
		{
			if (func_430(uParam2, uParam0, uParam1, false))
			{
				if (Global_2635523.f_2792.f_5)
				{
					Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
					Global_2635523.f_2766 = 6;
				}
				else
				{
					Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
				
					if (!uParam0->f_5)
					{
						if (!(BUILTIN::VMAG(*uParam1) == 0f))
						{
							dx = { *uParam1 - uParam2->[0 /*3*/] };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
						}
					}
				
					Global_2635523.f_2766 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2772) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635523.f_2766 = 8;
			}
		}
	
		if (Global_2635523.f_2766 == 6)
		{
			flags = 0;
			Global_2635523.f_2792.f_1 = 0;
		
			if (uParam1->f_3)
				flags = flags + 1;
			else if (uParam0->f_7 == 0)
				if (!func_429(uParam0->f_4))
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(num)))
						flags = flags + 1;
			else if (!func_428(uParam0->f_8, uParam0->f_11, uParam0->f_14))
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(num)))
					flags = flags + 1;
		
			flags = flags + 2;
		
			if (uParam1->f_10)
				flags = flags + 32;
		
			if (uParam0->f_15)
				flags = flags + 16;
		
			Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635523.f_2766 = 7;
		
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, flags, 2f, 5000);
					break;
			
				case 1:
					func_497(uParam0->f_8, uParam0->f_11, &vector3, &vector4, &width);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(vector3, vector4, width, flags, 2f, 5000);
					break;
			
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, flags, 2f, 5000);
					break;
			}
		}
	
		if (Global_2635523.f_2766 == 7)
		{
			if (func_430(uParam2, uParam0, uParam1, true))
			{
				if (BUILTIN::VMAG(uParam2->[0 /*3*/]) == 0f)
				{
					for (i = 0; i < 3; i = i + 1)
					{
						if (BUILTIN::VMAG(uParam2->[0 /*3*/]) == 0f)
						{
							if (!(BUILTIN::VMAG(Global_2635523.f_2926[i /*3*/]) == 0f))
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_500(Global_2635523.f_2926[i /*3*/], *uParam0, uParam0->f_4, false, false))
											uParam2->[0 /*3*/] = { Global_2635523.f_2926[i /*3*/] };
										break;
								
									case 1:
										if (func_426(Global_2635523.f_2926[i /*3*/], uParam0->f_8, uParam0->f_11, false, false))
											uParam2->[0 /*3*/] = { Global_2635523.f_2926[i /*3*/] };
										break;
								
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635523.f_2926[i /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
											uParam2->[0 /*3*/] = { Global_2635523.f_2926[i /*3*/] };
										break;
								}
							}
						}
					}
				
					if (BUILTIN::VMAG(uParam2->[0 /*3*/]) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								dx = { *uParam0 };
								break;
						
							case 1:
							case 2:
								dx = { (uParam0->f_8 + uParam0->f_11) / { 2f, 2f, 2f } };
								break;
						}
					
						func_383(&dx, false, true, 1, false, uParam0, uParam1);
						uParam2->[0 /*3*/] = { dx };
					}
				}
			
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			
				if (!(BUILTIN::VMAG(*uParam1) == 0f))
				{
					for (i = 0; i < 5; i = i + 1)
					{
						dx = { *uParam1 - uParam2->[i /*3*/] };
						uParam2->f_16[i] = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
					}
				}
			
				Global_2635523.f_2766 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635523.f_2772) > 20000)
			{
				Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635523.f_2766 = 8;
			}
		}
	
		if (Global_2635523.f_2766 == 8)
		{
			if (uParam0->f_5)
			{
				func_382(Global_2635523.f_490);
			}
			else if (Global_2635523.f_2792.f_2)
			{
				func_381(uParam2, &(Global_2635523.f_2792.f_6));
			}
			else
			{
				if (uParam0->f_15)
					flag2 = false;
				else
					flag2 = true;
			
				uParam2->[0 /*3*/] = { Global_2635523.f_2767 };
				func_383(&uParam2->[0 /*3*/], false, flag2, 0, false, uParam0, uParam1);
			}
		
			Global_2635523.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635523.f_2766 = 9;
		}
	
		if (Global_2635523.f_2766 == 9)
		{
			Global_2635523.f_2765 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_537();
			return true;
		}
	
		Global_2635523.f_2771 = NETWORK::GET_NETWORK_TIME();
	}

	return false;
}

void func_381(var uParam0, var uParam1) // Position - 0x1D72E (120622)
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		uParam0->[i /*3*/] = { uParam1->[i /*10*/].f_4 };
		uParam0->f_16[i] = uParam1->[i /*10*/].f_7;
		uParam0->f_22[i] = uParam1->[i /*10*/];
	}

	return;
}

BOOL func_382(int iParam0) // Position - 0x1D778 (120696)
{
	if (iParam0 == 3 || iParam0 == 26)
		return true;

	return false;
}

void func_383(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, var uParam5, var uParam6) // Position - 0x1D797 (120727)
{
	Vector3 vector;
	var unk3;
	var unk4;
	var groundZ;
	int i;
	BOOL flag;
	int num;
	Vector3 vector2;
	var unk67;
	var unk70;
	float num2;

	unk4.f_6 = 1082130432;
	unk4.f_7 = 1176255488;
	unk4.f_8 = 1;
	unk4.f_10 = 1;
	unk4.f_13 = 1;
	unk4.f_15 = 1;
	unk4.f_16 = 1;
	unk4.f_31 = 1;
	unk4.f_34 = joaat("tailgater");
	unk4.f_38 = 2;
	unk4.f_45 = 2;
	unk4.f_49 = 1123024896;
	unk4.f_53 = 999;
	unk4.f_54 = 1176256410;
	unk4.f_55 = 1;
	unk4.f_56 = 1;
	unk4.f_57 = 1;

	if (bParam1)
		num = 0;
	else
		num = 16;

	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				num = num + 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vector2 = { *uParam5 };
					
						if (func_429(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vector2)))
							num = num + 4;
						break;
				
					case 1:
						vector2 = { (uParam5->f_8 + uParam5->f_11) * { 0.5f, 0.5f, 0.5f } };
					
						if (func_428(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vector2)))
							num = num + 4;
						break;
				
					case 2:
						vector2 = { (uParam5->f_8 + uParam5->f_11) * { 0.5f, 0.5f, 0.5f } };
					
						if (func_428(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vector2)))
							num = num + 4;
						break;
				}
			}
		}
		else
		{
			num = num + 4;
		}
	}

	if (func_397(*uParam0, &vector, num, iParam3, true))
	{
	}
	else
	{
		flag = true;
	}

	if (flag)
	{
		vector = { *uParam0 };
		unk4 = { *uParam6 };
		unk4.f_8 = 1;
		unk4.f_3 = uParam6->f_5;
	
		if (bParam2)
			unk4.f_10 = 0;
		else
			unk4.f_10 = 1;
	
		unk4.f_13 = uParam5->f_15;
		unk4.f_15 = iParam3;
	
		if (uParam6->f_32 > 0f)
			unk4.f_6 = uParam6->f_32;
	
		if (bParam4)
		{
			unk4.f_18 = 1;
			unk4.f_26 = uParam5->f_7;
		
			switch (uParam5->f_7)
			{
				case 0:
					unk4.f_19 = { *uParam5 };
					unk4.f_25 = uParam5->f_4;
					break;
			
				case 1:
					unk4.f_19 = { uParam5->f_8 };
					unk4.f_22 = { uParam5->f_11 };
					unk4.f_25 = 0f;
					break;
			
				case 2:
					unk4.f_19 = { uParam5->f_8 };
					unk4.f_22 = { uParam5->f_11 };
					unk4.f_25 = uParam5->f_14;
					break;
			}
		}
	
		for (i = 0; i < 2; i = i + 1)
		{
			unk4.f_38[i /*3*/] = { uParam6->f_13[i /*3*/] };
			unk4.f_45[i] = uParam6->f_20[i];
		}
	
		unk4.f_51 = uParam6->f_30;
		unk4.f_55 = uParam5->f_16;
	
		if (func_395(PLAYER::PLAYER_ID(), false))
			unk4.f_9 = 1;
	
		unk4.f_60 = uParam5->f_30;
		func_501(&vector, &unk3, &unk4);
	}

	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				unk67 = { *uParam5 };
				num2 = uParam5->f_4;
				break;
		
			case 1:
				unk67 = { uParam5->f_8 };
				unk70 = { uParam5->f_11 };
				break;
		
			case 2:
				unk67 = { uParam5->f_8 };
				unk70 = { uParam5->f_11 };
				num2 = uParam5->f_14;
				break;
		}
	
		if (!func_394(vector, uParam5->f_7, unk67, unk70, num2))
		{
			if (func_397(*uParam0, &vector, num, iParam3, false))
			{
				if (!func_394(vector, uParam5->f_7, unk67, unk70, num2))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
						vector = { (unk67 + unk70) * { 0.5f, 0.5f, 0.5f } };
					else
						vector = { unk67 };
				
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false, false))
						vector.f_2 = groundZ;
				}
			}
			else if (func_384(uParam0, true, true, true, true))
			{
				func_383(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					vector = { (unk67 + unk70) * { 0.5f, 0.5f, 0.5f } };
				else
					vector = { unk67 };
			
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false, false))
					vector.f_2 = groundZ;
			}
		}
	}

	*uParam0 = { vector };
	Global_2635523.f_668 = 1;
	return;
}

BOOL func_384(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1DC0A (121866)
{
	int i;
	var unk;

	for (i = 0; i < 14; i = i + 1)
	{
		if (Global_2640790[i /*17*/].f_9 == true)
		{
			if (!bParam2 || bParam2 && Global_2640790[i /*17*/].f_16)
			{
				if (func_393(*uParam0, &Global_2640790[i /*17*/], 1008981770, bParam4, false))
				{
					if (bParam1)
					{
						if (Global_2640790[i /*17*/].f_12)
						{
							*uParam0 = { Global_2640790[i /*17*/].f_13 };
						}
						else
						{
							unk = { *uParam0 };
							func_385(&unk, &Global_2640790[i /*17*/], 1036831949, false, bParam3);
						
							if (func_384(&unk, false, false, false, true))
							{
								unk = { *uParam0 };
								func_385(&unk, &Global_2640790[i /*17*/], 1036831949, true, false);
							}
						
							*uParam0 = { unk };
						}
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

void func_385(var uParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1DCE5 (122085)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_392(*uParam0, *uParam1, 0f, 0f, 0f, uParam1->f_6 + ((float)Global_2635523.f_3036 * uParam1->f_8), 0, iParam2, bParam3) };
				break;
		
			case 1:
				*uParam0 = { func_392(*uParam0, *uParam1, uParam1->f_3, 0f, 1, iParam2, bParam3) };
				break;
		
			case 2:
				*uParam0 = { func_392(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, iParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_390(uParam0, *uParam1, uParam1->f_6 + ((float)Global_2635523.f_3036 * uParam1->f_8), iParam2, bParam3, 0);
				break;
		
			case 1:
				func_389(uParam0, *uParam1, uParam1->f_3, iParam2, bParam3);
				break;
		
			case 2:
				func_386(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, iParam2, bParam3);
				break;
		}
	}

	return;
}

void func_386(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, float fParam7, int iParam8, BOOL bParam9) // Position - 0x1DDEF (122351)
{
	float x1;
	float x2;
	Vector3 vector;
	float num;
	Vector3 vector2;
	Vector3 vector3;
	float num2;
	var unk11;
	var unk14;
	var unk17;
	float x12;
	float x22;

	x1 = { fParam4 - fParam1 };
	x1.f_2 = 0f;
	x2 = { *uParam0 - fParam1 };
	x2.f_2 = 0f;
	vector = { func_388(0f, 0f, 1f, x1) };
	vector = { vector / F2V(BUILTIN::VMAG(vector)) };
	num = BUILTIN::VMAG(x2) * BUILTIN::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1));

	if (num < fParam7 * 0.5f)
	{
		if (!bParam9)
			if (func_387(vector, x2) >= 0f)
				vector = { vector * { ((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8, ((fParam7 * 0.5f) - num) + iParam8 } };
			else
				vector = { vector * { (((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f, (((fParam7 * 0.5f) - num) + iParam8) * -1f } };
		else if (func_387(vector, x2) >= 0f)
			vector = { vector * { ((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f, ((fParam7 * 0.5f) + num + iParam8) * -1f } };
		else
			vector = { vector * { (fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8, (fParam7 * 0.5f) + num + iParam8 } };
	
		vector2 = { *uParam0 + vector };
		num2 = BUILTIN::VDIST(fParam1, fParam1.f_1, 0f, fParam4, fParam4.f_1, 0f);
		unk11 = { (fParam1 + fParam4) / { 2f, 2f, 2f } };
		unk11.f_2 = 0f;
		vector = { func_388(0f, 0f, 1f, x1) };
		vector = { vector / F2V(BUILTIN::VMAG(vector)) };
		vector = { vector * { fParam7 * 0.5f, fParam7 * 0.5f, fParam7 * 0.5f } };
		unk14 = { unk11 - vector };
		unk17 = { unk11 + vector };
		x12 = { unk17 - unk14 };
		x12.f_2 = 0f;
		x22 = { *uParam0 - unk14 };
		x22.f_2 = 0f;
		vector = { func_388(0f, 0f, 1f, x12) };
		vector = { vector / F2V(BUILTIN::VMAG(vector)) };
		num = BUILTIN::VMAG(x22) * BUILTIN::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x12, x12.f_1, x22, x22.f_1));
	
		if (!bParam9)
			if (func_387(vector, x22) >= 0f)
				vector = { vector * { ((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8, ((num2 * 0.5f) - num) + iParam8 } };
			else
				vector = { vector * { (((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f, (((num2 * 0.5f) - num) + iParam8) * -1f } };
		else if (func_387(vector, x22) >= 0f)
			vector = { vector * { ((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f, ((num2 * 0.5f) + num + iParam8) * -1f } };
		else
			vector = { vector * { (num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8, (num2 * 0.5f) + num + iParam8 } };
	
		vector3 = { *uParam0 + vector };
	
		if (BUILTIN::VDIST(vector2, *uParam0, uParam0->f_1, 0f) < BUILTIN::VDIST(vector3, *uParam0, uParam0->f_1, 0f))
			*uParam0 = { vector2 };
		else
			*uParam0 = { vector3 };
	}

	return;
}

float func_387(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1E0BE (123070)
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_388(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4, float fParam5) // Position - 0x1E0DF (123103)
{
	return (fParam0.f_1 * uParam3.f_2) - (fParam0.f_2 * uParam3.f_1), (fParam0.f_2 * uParam3) - (fParam0 * uParam3.f_2), (fParam0 * uParam3.f_1) - (fParam0.f_1 * uParam3);
}

void func_389(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, var uParam5, var uParam6, int iParam7, BOOL bParam8) // Position - 0x1E118 (123160)
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	num = { *uParam0 };
	num2 = *uParam0 - fParam1;
	num3 = *uParam0 - fParam4;

	if (num2 < num3)
		num4 = num2;
	else
		num4 = num3;

	num5 = uParam0->f_1 - fParam1.f_1;
	num6 = uParam0->f_1 - fParam4.f_1;

	if (num5 < num6)
		num7 = num5;
	else
		num7 = num6;

	num = { *uParam0 };

	if (!bParam8)
		if (num4 < num7)
			if (num2 < num3)
				num = fParam1 - iParam7;
			else
				num = fParam4 + iParam7;
		else if (num5 < num6)
			num.f_1 = fParam1.f_1 - iParam7;
		else
			num.f_1 = fParam4.f_1 + iParam7;
	else if (num4 < num7)
		if (num2 < num3)
			num = fParam4 + iParam7;
		else
			num = fParam1 - iParam7;
	else if (num5 < num6)
		num.f_1 = fParam4.f_1 + iParam7;
	else
		num.f_1 = fParam1.f_1 - iParam7;

	*uParam0 = { num };
	return;
}

void func_390(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x1E217 (123415)
{
	Vector3 vector;
	var unk3;

	vector = { *uParam0 - uParam1 };
	vector.f_2 = 0f;

	if (BUILTIN::VMAG(vector) > 0f)
	{
		vector = { vector / F2V(BUILTIN::VMAG(vector)) };
	}
	else
	{
		vector = { 0f, 1f, 0f };
	
		if (iParam7 == 0f)
			func_391(&vector, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		else
			func_391(&vector, 0f, 0f, iParam7);
	}

	vector = { vector * { fParam4 + iParam5, fParam4 + iParam5, fParam4 + iParam5 } };

	if (!bParam6)
		unk3 = { uParam1 + vector };
	else
		unk3 = { uParam1 - vector };

	*uParam0 = unk3;
	uParam0->f_1 = unk3.f_1;
	return;
}

void func_391(var uParam0, float fParam1, float fParam2, int iParam3) // Position - 0x1E2BF (123583)
{
	float num;
	float num2;
	float num3;

	num = BUILTIN::COS(fParam1);
	num2 = BUILTIN::SIN(fParam1);
	num3 = *uParam0;
	num3.f_1 = (num * uParam0->f_1) - (num2 * uParam0->f_2);
	num3.f_2 = (num2 * uParam0->f_1) + (num * uParam0->f_2);
	*uParam0 = { num3 };
	num = BUILTIN::COS(fParam1.f_1);
	num2 = BUILTIN::SIN(fParam1.f_1);
	num3 = (num * *uParam0) + (num2 * uParam0->f_2);
	num3.f_1 = uParam0->f_1;
	num3.f_2 = (num * uParam0->f_2) - (num2 * *uParam0);
	*uParam0 = { num3 };
	num = BUILTIN::COS(fParam1.f_2);
	num2 = BUILTIN::SIN(fParam1.f_2);
	num3 = (num * *uParam0) - (num2 * uParam0->f_1);
	num3.f_1 = (num2 * *uParam0) + (num * uParam0->f_1);
	num3.f_2 = uParam0->f_2;
	*uParam0 = { num3 };
	return;
}

Vector3 func_392(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, BOOL bParam12) // Position - 0x1E396 (123798)
{
	int i;
	Vector3 outPosition;

	switch (iParam10)
	{
		case 0:
			func_390(&vParam0, vParam3, fParam9, iParam11, bParam12, 0);
			break;
	
		case 1:
			func_389(&vParam0, vParam3, fParam6, iParam11, bParam12);
			break;
	
		case 2:
			func_386(&vParam0, vParam3, fParam6, fParam9, iParam11, bParam12);
			break;
	}

	for (i = 0; i < 40; i = i + 1)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, i * 5, &outPosition, 1, 0f, 0f);
	
		switch (iParam10)
		{
			case 0:
				if (!func_500(outPosition, vParam3, fParam9, false, false))
					return outPosition;
				break;
		
			case 1:
				if (!func_426(outPosition, vParam3, fParam6, false, false))
					return outPosition;
				break;
		
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(outPosition, vParam3, fParam6, fParam9, false, true))
					return outPosition;
				break;
		}
	}

	return vParam0;
}

BOOL func_393(Vector3 vParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1E499 (124057)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_500(vParam0, *uParam3, uParam3->f_6 + iParam4 + ((float)Global_2635523.f_3036 * uParam3->f_8), bParam5, bParam6);
	
		case 1:
			return func_426(vParam0, *uParam3 + { iParam4 * -1f, iParam4 * -1f, iParam4 * -1f }, uParam3->f_3 + { iParam4, iParam4, iParam4 }, bParam5, bParam6);
	
		case 2:
			if (bParam5 && bParam6)
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			else if (bParam5)
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 < uParam3->f_2 && vParam0.f_2 < uParam3->f_3.f_2))
					return true;
				else
					return false;
			else if (bParam6)
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(vParam0.f_2 > uParam3->f_2 && vParam0.f_2 > uParam3->f_3.f_2))
					return true;
				else
					return false;
			else
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			break;
	}

	return false;
}

BOOL func_394(Vector3 vParam0, var uParam1, var uParam2, int iParam3, Vector3 vParam4, var uParam5, var uParam6, float fParam7, float fParam8, float fParam9, float fParam10) // Position - 0x1E5FA (124410)
{
	switch (iParam3)
	{
		case 0:
			if (BUILTIN::VDIST(vParam0, vParam4) <= fParam10)
				return true;
			break;
	
		case 1:
			return func_426(vParam0, vParam4, fParam7, false, false);
	
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, fParam7, fParam10, false, true);
	}

	return false;
}

BOOL func_395(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x1E667 (124519)
{
	Vehicle vehiclePedIsIn;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("terbyte"))
				return true;
		}
	}

	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID && Global_2658019[epctParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_396(Global_2658019[epctParam0 /*467*/].f_324.f_8) == 12;

	return false;
}

int func_396(ePedComponentType epctParam0) // Position - 0x1E6F5 (124661)
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
	
		case 177:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 178:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	}

	return -1;
}

BOOL func_397(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x1EC44 (126020)
{
	if (func_425(vParam0, pvParam3))
		if (func_398(vParam0, pvParam3, iParam5, bParam6))
			return true;

	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, false, pvParam3, iParam4))
		if (func_398(vParam0, pvParam3, iParam5, bParam6))
			return true;

	return false;
}

BOOL func_398(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3, int iParam4, BOOL bParam5) // Position - 0x1ECA0 (126112)
{
	float num;
	var unk;
	var unk8;

	num = BUILTIN::VDIST(vParam0, *pvParam3);

	if (num < 40f)
	{
		unk = 2;
		unk8 = 2;
	
		if (iParam4 == 1 && !func_411(Global_2635523.f_513, pvParam3, &unk, &unk8, bParam5, true) || iParam4 == 0)
			if (!func_402(*pvParam3, 1056964608))
				if (!func_399(pvParam3, false))
					return true;
	}

	return false;
}

BOOL func_399(Vector3* pvParam0, BOOL bParam1) // Position - 0x1ED25 (126245)
{
	int i;
	var unk;
	int num;

	unk = { *pvParam0 };
	num = func_401(unk);

	for (i = 0; i < Global_2642425[num]; i = i + 1)
	{
		if (func_400(unk, &Global_2641029[num /*155*/][i /*7*/]))
		{
			if (bParam1)
			{
				func_386(&unk, Global_2641029[num /*155*/][i /*7*/], Global_2641029[num /*155*/][i /*7*/].f_3, Global_2641029[num /*155*/][i /*7*/].f_6, 1036831949, false);
				*pvParam0 = { unk };
			}
		
			return true;
		}
	}

	for (i = 0; i < Global_2642425[8]; i = i + 1)
	{
		if (func_400(unk, &Global_2641029[8 /*155*/][i /*7*/]))
		{
			if (bParam1)
			{
				func_386(&unk, Global_2641029[8 /*155*/][i /*7*/], Global_2641029[8 /*155*/][i /*7*/].f_3, Global_2641029[8 /*155*/][i /*7*/].f_6, 1036831949, false);
				*pvParam0 = { unk };
			}
		
			return true;
		}
	}

	return false;
}

BOOL func_400(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1EE32 (126514)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_401(float fParam0, var uParam1, var uParam2) // Position - 0x1EE52 (126546)
{
	if (fParam0.f_1 > Global_2642436[0])
		return 0;

	if (fParam0.f_1 > Global_2642436[1])
		if (fParam0 < Global_2642440[0])
			return 1;
		else
			return 2;

	if (fParam0.f_1 > Global_2642436[2])
		if (fParam0 < Global_2642440[1])
			return 3;
		else if (fParam0 < Global_2642440[2])
			return 4;
		else if (fParam0 < Global_2642440[3])
			return 5;
		else
			return 6;

	return 7;
}

BOOL func_402(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1EEED (126701)
{
	ePedComponentType i;

	if (func_281(PLAYER::PLAYER_ID(), true, false))
	{
		if (Global_5242880 > PV_COMP_HEAD)
		{
			for (i = PV_COMP_HEAD; i < Global_5242880; i = i + 1)
			{
				if (Global_5242880.f_1[i /*163*/].f_7 != PV_COMP_HEAD)
					if (func_403(uParam0, Global_5242880.f_1[i /*163*/], Global_5242880.f_1[i /*163*/].f_6, Global_5242880.f_1[i /*163*/].f_7, iParam3))
						return true;
			}
		}
	
		if (Global_4980736.f_7041 > PV_COMP_HEAD)
		{
			for (i = PV_COMP_HEAD; i < Global_4980736.f_7041; i = i + 1)
			{
				if (Global_4980736.f_7044[i /*642*/].f_15 != PV_COMP_HEAD)
					if (func_403(uParam0, Global_4980736.f_7044[i /*642*/], Global_4980736.f_7044[i /*642*/].f_3, Global_4980736.f_7044[i /*642*/].f_15, 0.5f))
						return true;
			}
		}
	
		if (*Global_4980736.f_67541 > 0)
		{
			for (i = PV_COMP_HEAD; i < *Global_4980736.f_67541; i = i + 1)
			{
				if (Global_4980736.f_67545[i /*619*/].f_12 != PV_COMP_HEAD)
					if (func_403(uParam0, Global_4980736.f_67545[i /*619*/], Global_4980736.f_67545[i /*619*/].f_3, Global_4980736.f_67545[i /*619*/].f_12, 0.5f))
						return true;
			}
		}
	
		if (Global_1058116.f_268 > PV_COMP_HEAD)
		{
			for (i = PV_COMP_HEAD; i < Global_1058116.f_268; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_233[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_233[i], false))
					if (func_403(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_233[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_233[i]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_233[i]), 0.5f))
						return true;
			}
		}
	
		if (Global_1058116.f_266 > PV_COMP_HEAD)
		{
			for (i = PV_COMP_HEAD; i < Global_1058116.f_266; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_119[i]) && !ENTITY::IS_ENTITY_DEAD(Global_1058116.f_119[i], false))
					if (func_403(uParam0, ENTITY::GET_ENTITY_COORDS(Global_1058116.f_119[i], true), ENTITY::GET_ENTITY_HEADING(Global_1058116.f_119[i]), ENTITY::GET_ENTITY_MODEL(Global_1058116.f_119[i]), 0.5f))
						return true;
			}
		}
	}

	return false;
}

BOOL func_403(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6, ePedComponentType epctParam7, int iParam8) // Position - 0x1F169 (127337)
{
	Vector3 vector;
	Vector3 vector2;
	float width;

	if (BUILTIN::VDIST(vParam0, vParam3) < func_410(epctParam7, 1008981770))
	{
		func_404(vParam3, iParam6, epctParam7, &vector, &vector2, &width, iParam8);
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vector, vector2, width, false, true))
			return true;
	}

	return false;
}

void func_404(var uParam0, var uParam1, var uParam2, int iParam3, ePedComponentType epctParam4, var uParam5, var uParam6, Any anParam7, int iParam8) // Position - 0x1F1BC (127420)
{
	Vector3 vector;
	var unk3;
	float num;
	var unk8;
	var unk11;

	vector = { 0f, 1f, 0f };
	func_391(&vector, 0f, 0f, iParam3);
	vector = { vector / F2V(BUILTIN::VMAG(vector)) };
	func_405(epctParam4, &unk3, &num, 1086324736, 1080033280, 1077936128);
	unk8 = { uParam0 + (vector * { num.f_1 + iParam8, num.f_1 + iParam8, num.f_1 + iParam8 }) };
	unk8.f_2 = unk8.f_2 - ((0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8);
	unk11 = { uParam0 - (vector * { (unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8, (unk3.f_1 * -1f) + iParam8 }) };
	unk11.f_2 = unk11.f_2 + (0.5f * MISC::ABSF(num.f_2 - unk3.f_2)) + iParam8;
	*uParam5 = { unk8 };
	*uParam6 = { unk11 };
	*anParam7 = MISC::ABSF(num - unk3);
	return;
}

void func_405(Hash hParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1F288 (127624)
{
	int num;

	if (STREAMING::IS_MODEL_VALID(hParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(hParam0, pvParam1, pvParam2);
	}
	else
	{
		num = func_408(hParam0);
	
		if (num != 0)
		{
			func_406(num, pvParam1, pvParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}

	if (BUILTIN::VMAG(*pvParam1) <= 0.01f || BUILTIN::VMAG(*pvParam2) <= 0.01f)
	{
		if (hParam0 == joaat("kosatka"))
		{
			if (iParam4 < 20.7f)
				iParam4 = 20.7f;
		
			if (iParam3 < 137.2f)
				iParam3 = 137.2f;
		
			if (iParam5 < 21.1f)
				iParam5 = 21.1f;
		}
	
		*pvParam1 = 0f - (iParam4 * 0.5f);
		*pvParam2 = 0f + (iParam4 * 0.5f);
		pvParam1->f_1 = 0f - (iParam3 * 0.5f);
		pvParam2->f_1 = 0f + (iParam3 * 0.5f);
		pvParam1->f_2 = 0f - (iParam5 * 0.5f);
		pvParam2->f_2 = 0f + (iParam5 * 0.5f);
	}

	return;
}

void func_406(int iParam0, Vector3* pvParam1, Vector3* pvParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1F387 (127879)
{
	int i;

	func_407(iParam0, &Global_1578053);

	for (i = 0; i < 2; i = i + 1)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1578053[i]))
			MISC::GET_MODEL_DIMENSIONS(Global_1578053[i], &Global_1578057[i /*3*/], &Global_1578064[i /*3*/]);
	
		if (BUILTIN::VMAG(Global_1578057[i /*3*/]) <= 0.01f || BUILTIN::VMAG(Global_1578064[i /*3*/]) <= 0.01f)
		{
			Global_1578057[i /*3*/] = 0f - (iParam4 * 0.5f);
			Global_1578064[i /*3*/] = 0f + (iParam4 * 0.5f);
			Global_1578057[i /*3*/].f_1 = 0f - (iParam3 * 0.5f);
			Global_1578064[i /*3*/].f_1 = 0f + (iParam3 * 0.5f);
			Global_1578057[i /*3*/].f_2 = 0f - (iParam5 * 0.5f);
			Global_1578064[i /*3*/].f_2 = 0f + (iParam5 * 0.5f);
		}
	
		Global_1578071[i] = Global_1578064[i /*3*/] - Global_1578057[i /*3*/];
		Global_1578074[i] = Global_1578064[i /*3*/].f_1 - Global_1578057[i /*3*/].f_1;
		Global_1578077[i] = Global_1578064[i /*3*/].f_2 - Global_1578057[i /*3*/].f_2;
	
		if (Global_1578071[i] > Global_1578080)
			Global_1578080 = Global_1578071[i];
	
		if (Global_1578077[i] > Global_1578081)
			Global_1578081 = Global_1578077[i];
	}

	Global_1578082 = Global_1578080 * -0.5f;
	Global_1578085 = Global_1578080 * 0.5f;
	Global_1578082.f_1 = ((0.5f * Global_1578074[0]) + Global_1578074[1] + Global_1578053.f_3) * -1f;
	Global_1578085.f_1 = 0.5f * Global_1578074[0];
	Global_1578082.f_2 = Global_1578077[0] * -0.5f;
	Global_1578085.f_2 = Global_1578077[0] * 0.5f;
	*pvParam1 = { Global_1578082 };
	*pvParam2 = { Global_1578085 };
	return;
}

void func_407(int iParam0, var uParam1) // Position - 0x1F593 (128403)
{
	switch (iParam0)
	{
		case 1:
			uParam1->[0] = joaat("hauler2");
			uParam1->[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	
		case 2:
			uParam1->[0] = joaat("phantom3");
			uParam1->[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
	
		case 3:
			uParam1->[0] = joaat("nightshark");
			uParam1->[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}

	return;
}

int func_408(Hash hParam0) // Position - 0x1F614 (128532)
{
	int i;
	int num;

	for (i = 0; i < 4; i = i + 1)
	{
		num = i;
	
		if (func_409(num) == hParam0)
			return num;
	}

	return 0;
}

Hash func_409(int iParam0) // Position - 0x1F643 (128579)
{
	Hash num;

	num = 1000 + iParam0;
	return num;
}

float func_410(ePedComponentType epctParam0, int iParam1) // Position - 0x1F655 (128597)
{
	var unk;
	var unk4;
	float num;
	float num2;

	if (epctParam0 == 0)
		return 5f;

	func_405(epctParam0, &unk, &unk4, 1086324736, 1080033280, 1077936128);
	num = { unk4 - unk };
	num2 = BUILTIN::SQRT((num * 0.5f * num * 0.5f) + (num.f_1 * 0.5f * num.f_1 * 0.5f) + (num.f_2 * 0.5f * num.f_2 * 0.5f)) + iParam1;
	return num2;
}

BOOL func_411(var uParam0, var uParam1, var uParam2, Vector3* pvParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1F6D5 (128725)
{
	int i;
	BOOL flag;

	if (func_418(uParam0))
	{
		if (func_384(pvParam3, bParam6, false, true, true))
		{
			if (bParam6)
			{
			}
		
			return true;
		}
	}

	if (func_413(pvParam3, bParam6, true))
	{
		if (bParam6)
		{
		}
	
		return true;
	}

	if (bParam7)
		if (func_412(*pvParam3, 1056964608))
			return true;

	flag = false;

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (BUILTIN::VDIST(*pvParam3, uParam4->[i /*3*/]) < uParam5->[i])
		{
			if (bParam6)
				func_390(pvParam3, uParam4->[i /*3*/], uParam5->[i], 1036831949, false, 0);
		
			flag = true;
		}
	}

	if (flag)
		return true;

	return false;
}

BOOL func_412(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1F791 (128913)
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (BUILTIN::VDIST(vParam0, Global_2635523.f_3038[i /*3*/]) < iParam3)
			return true;
	}

	return false;
}

BOOL func_413(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F7CC (128972)
{
	int num;
	var unk;
	var unk2;

	if (func_415(*uParam0, &num))
	{
		if (bParam1)
		{
			unk2 = { *uParam0 };
			func_385(&unk2, &Global_2635523.f_369[num /*12*/], 1036831949, false, bParam2);
		
			if (func_415(unk2, &unk) || func_414(unk2))
			{
				unk2 = { *uParam0 };
				func_385(&unk2, &Global_2635523.f_369[num /*12*/], 1036831949, true, bParam2);
			}
		
			*uParam0 = { unk2 };
		}
	
		return true;
	}

	return false;
}

BOOL func_414(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1F850 (129104)
{
	float num;

	if (Global_2635523.f_597 > 0f)
	{
		num = BUILTIN::VDIST(vParam0, Global_2635523.f_594);
	
		if (num < Global_2635523.f_597)
			return 1;
	}

	return 0;
}

BOOL func_415(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1F889 (129161)
{
	int i;
	int num;

	if (func_417())
		return false;

	num = func_416();

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_2635523.f_369[i /*12*/].f_9 == true)
		{
			if (func_393(uParam0, &Global_2635523.f_369[i /*12*/], 1008981770, false, false))
			{
				*uParam3 = i;
				return true;
			}
		}
	}

	return false;
}

int func_416() // Position - 0x1F8ED (129261)
{
	int i;
	int num;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_2635523.f_369[i /*12*/].f_9)
			num = num + 1;
	}

	return num;
}

BOOL func_417() // Position - 0x1F920 (129312)
{
	return Global_1946439.f_760;
}

BOOL func_418(var uParam0, var uParam1, var uParam2) // Position - 0x1F92F (129327)
{
	int num;
	var unk;

	if (!Global_2635523.f_516 && !Global_2635523.f_517)
	{
		if (!Global_2635523.f_45.f_318)
		{
			if (!func_422(PLAYER::PLAYER_ID(), true))
				return true;
		
			if (!func_421(uParam0, 1008981770))
			{
				if (!func_384(&uParam0, false, false, false, true))
					return true;
				else if (func_384(&uParam0, false, true, false, true))
					return true;
			}
			else
			{
				num = func_420(uParam0, 1008981770);
			
				if (num > -1)
				{
					unk = { func_419(&Global_2635523.f_45[num /*12*/]) };
				
					if (!func_384(&unk, false, false, false, true))
						if (!func_384(&uParam0, false, false, false, true))
							return true;
				}
			}
		}
	}

	return false;
}

Vector3 func_419(var uParam0) // Position - 0x1F9EF (129519)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
	
		case 1:
		case 2:
			return (*uParam0 + uParam0->f_3) * { 0.5f, 0.5f, 0.5f };
	}

	return *uParam0;
}

int func_420(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1FA38 (129592)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_2635523.f_45[i /*12*/].f_9)
			if (func_393(uParam0, &Global_2635523.f_45[i /*12*/], iParam3, false, false))
				return i;
	}

	return -1;
}

BOOL func_421(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1FA80 (129664)
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_2635523.f_45[i /*12*/].f_9)
			if (func_393(uParam0, &Global_2635523.f_45[i /*12*/], iParam3, false, 0))
				return true;
	}

	return false;
}

BOOL func_422(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x1FAC7 (129735)
{
	if (func_424() != 0)
		return func_423(epctParam0) != 0;

	return func_281(epctParam0, bParam1, false);
}

int func_423(ePedComponentType epctParam0) // Position - 0x1FAEE (129774)
{
	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return Global_2658019[epctParam0 /*467*/].f_1;

	return 0;
}

int func_424() // Position - 0x1FB10 (129808)
{
	return Global_33298;
}

BOOL func_425(Vector3 vParam0, var uParam1, var uParam2, Vector3* pvParam3) // Position - 0x1FB1B (129819)
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 999999.9f;

	if (Global_2635523.f_2563 > 0)
	{
		for (i = 0; i < Global_2635523.f_2563; i = i + 1)
		{
			num3 = BUILTIN::VDIST(Global_2635523.f_2564[i /*4*/], vParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	
		if (!(num == -1))
		{
			*pvParam3 = { Global_2635523.f_2564[num /*4*/] };
			return true;
		}
	}

	return false;
}

BOOL func_426(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1FB95 (129941)
{
	func_427(&fParam3, &fParam6);

	if (!(fParam0 >= fParam3) || !(fParam0.f_1 >= fParam3.f_1) || !(fParam0 <= fParam6) || !(fParam0.f_1 <= fParam6.f_1))
		return 0;

	if (bParam9 && bParam10)
		return 1;
	else if (bParam9)
		if (fParam0.f_2 >= fParam3.f_2)
			return 1;
	else if (bParam10)
		if (fParam0.f_2 <= fParam6.f_2)
			return 1;
	else if (fParam0.f_2 >= fParam3.f_2 && fParam0.f_2 <= fParam6.f_2)
		return 1;

	return 0;
}

void func_427(var uParam0, var uParam1) // Position - 0x1FC40 (130112)
{
	var unk;

	if (*uParam0 > *uParam1)
	{
		unk = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = unk;
	}

	if (uParam0->f_1 > uParam1->f_1)
	{
		unk = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = unk;
	}

	if (uParam0->f_2 > uParam1->f_2)
	{
		unk = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = unk;
	}

	return;
}

BOOL func_428(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6) // Position - 0x1FCA2 (130210)
{
	float num;
	float num2;

	if (fParam0 > fParam3)
	{
		num2 = fParam0;
		num = fParam3;
	}
	else
	{
		num2 = fParam3;
		num = fParam0;
	}

	if (fParam0.f_1 > fParam3.f_1)
	{
		num2.f_1 = fParam0.f_1;
		num.f_1 = fParam3.f_1;
	}
	else
	{
		num2.f_1 = fParam3.f_1;
		num.f_1 = fParam0.f_1;
	}

	if (fParam0.f_2 > fParam3.f_2)
	{
		num2.f_2 = fParam0.f_2;
		num.f_2 = fParam3.f_2;
	}
	else
	{
		num2.f_2 = fParam3.f_2;
		num.f_2 = fParam0.f_2;
	}

	if (BUILTIN::VMAG(num2 - num) > 100f)
		return true;

	if (fParam6 > 50f)
		return true;

	return false;
}

BOOL func_429(float fParam0) // Position - 0x1FD4D (130381)
{
	if (fParam0 > 50f)
		return true;

	return false;
}

BOOL func_430(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1FD65 (130405)
{
	var coordinates;
	float heading;
	int i;
	int respawnResultFlags;
	int num;
	int num2;
	BOOL flag;

	if (Global_2635523.f_2792.f_1 == 0 && Global_2635523.f_2792 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635523.f_2792.f_1)))
			{
				case 0:
					func_495(uParam1, uParam2);
				
					if (!Global_2635523.f_2792.f_2)
					{
						if (uParam2->f_7 && Global_2635523.f_556.f_7 == 0)
						{
							uParam0->[0 /*3*/] = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return true;
						}
						else
						{
							if (uParam1->f_21)
								uParam0->[0 /*3*/] = { uParam1->f_18 };
							else
								uParam0->[0 /*3*/] = { Global_2635523.f_2767 };
						
							if (uParam1->f_5 && func_382(Global_2635523.f_490))
								if (!Global_2635523.f_2792.f_5)
									Global_2635523.f_2792.f_5 = 1;
								else
									func_383(&uParam0->[0 /*3*/], true, false, 1, true, uParam1, uParam2);
							else
								func_383(&uParam0->[0 /*3*/], false, false, 1, false, uParam1, uParam2);
						
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return true;
						}
					}
					break;
			
				case 1:
					func_495(uParam1, uParam2);
					break;
			
				case 2:
					return false;
			
				case 3:
					return false;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_495(uParam1, uParam2);
					Global_2635523.f_2792.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return false;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_495(uParam1, uParam2);
			
				if (!Global_2635523.f_2792.f_2)
				{
					Global_2635523.f_2792.f_5 = 1;
					return true;
				}
			}
		}
		else
		{
			return false;
		}
	}

	if (uParam1->f_5)
		func_492(Global_2635523.f_556, &(Global_2635523.f_2792.f_57), &(Global_2635523.f_2792.f_90));

	if (uParam2->f_7 && !Global_2635523.f_2792.f_4)
	{
		Global_2635523.f_2792.f_4 = 1;
		func_438(*uParam1, uParam1->f_3, uParam1, uParam2, true, -1);
	}

	num = 0;

	if (uParam1->f_5)
		num2 = 64;
	else
		num2 = 32;

	if (Global_2635523.f_2792.f_1 > 0 || Global_2635523.f_2792 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			for (i = 0; i < Global_2635523.f_2792.f_1; i = i + 1)
			{
				if (num < num2)
				{
					if (i <= Global_2635523.f_2792.f_3)
						i = Global_2635523.f_2792.f_3 + 1;
				
					if (i > Global_2635523.f_2792.f_1 - 1)
						i = Global_2635523.f_2792.f_1 - 1;
				
					if (i < 0)
						i = 0;
				
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(i, &coordinates, &heading);
						heading = heading * 57.29578f;
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(i, &coordinates, &(coordinates.f_1), &(coordinates.f_2));
					}
				
					if (uParam1->f_5 && !bParam3)
						respawnResultFlags = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(i);
					else
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(i, &respawnResultFlags);
				
					func_438(coordinates, heading, uParam1, uParam2, false, respawnResultFlags);
					num = num + 1;
					Global_2635523.f_2792.f_3 = i;
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			i = Global_2635523.f_2792.f_1;
		}
	
		if (Global_2635523.f_2792.f_1 == i)
		{
			if (uParam1->f_5 && Global_2635523.f_3199)
				func_432(&Global_2635523.f_2792.f_6[0 /*10*/], &Global_2635523.f_2792.f_6[1 /*10*/], &Global_2635523.f_2792.f_6[2 /*10*/]);
		
			if (uParam1->f_5 && func_382(Global_2635523.f_490))
			{
				if (Global_2635523.f_2792.f_2)
				{
					func_381(uParam0, &(Global_2635523.f_2792.f_6));
					func_431(uParam0->[0 /*3*/]);
					return true;
				}
				else
				{
					uParam0->[0 /*3*/] = { Global_2635523.f_2767 };
					func_383(&uParam0->[0 /*3*/], false, false, 0, false, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_431(uParam0->[0 /*3*/]);
					return true;
				}
			}
			else if (Global_2635523.f_2792.f_2)
			{
				func_381(uParam0, &(Global_2635523.f_2792.f_6));
				func_431(uParam0->[0 /*3*/]);
				return true;
			}
			else if (uParam1->f_5)
			{
				i = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635523.f_2792.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(i, &uParam0->[0 /*3*/], &uParam0->f_16[0]);
			
				if (!func_399(&uParam0->[0 /*3*/], false))
				{
					uParam0->f_16[0] = uParam0->f_16[0] * 57.29578f;
					func_431(uParam0->[0 /*3*/]);
					return true;
				}
				else
				{
					uParam0->[0 /*3*/] = { Global_2635523.f_2767 };
					func_383(&uParam0->[0 /*3*/], true, false, 1, true, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_431(uParam0->[0 /*3*/]);
					return true;
				}
			}
			else
			{
				uParam0->[0 /*3*/] = { Global_2635523.f_2767 };
				func_383(&uParam0->[0 /*3*/], false, false, 0, false, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_431(uParam0->[0 /*3*/]);
				return true;
			}
		}
	}
	else
	{
		uParam0->[0 /*3*/] = { Global_2635523.f_2767 };
	
		if (uParam1->f_5 && func_382(Global_2635523.f_490))
		{
			if (!Global_2635523.f_2792.f_5)
				Global_2635523.f_2792.f_5 = 1;
			else
				func_383(&uParam0->[0 /*3*/], true, false, 1, true, uParam1, uParam2);
		}
		else
		{
			if (uParam1->f_15)
				flag = false;
			else
				flag = true;
		
			func_383(&uParam0->[0 /*3*/], false, flag, 0, false, uParam1, uParam2);
		}
	
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_431(uParam0->[0 /*3*/]);
		return true;
	}

	return false;
}

void func_431(var uParam0, var uParam1, var uParam2) // Position - 0x2032F (131887)
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i > 0)
			Global_2635523.f_2926[3 - i /*3*/] = { Global_2635523.f_2926[3 - (i + 1) /*3*/] };
	}

	Global_2635523.f_2926[0 /*3*/] = { uParam0 };
	return;
}

void func_432(int iParam0, int iParam1, int iParam2) // Position - 0x2037F (131967)
{
	if (func_382(Global_2635523.f_490) && func_437() < 4096)
	{
		func_436(iParam0, 0f);
		func_436(iParam1, iParam0->f_2);
		func_436(iParam2, iParam1->f_2);
	}
	else
	{
		func_435(iParam0);
		func_434(iParam2, iParam0->f_4);
		func_433(iParam1, iParam0->f_4, iParam2->f_4);
	}

	return;
}

void func_433(int iParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x203E4 (132068)
{
	int i;
	float num;
	float num2;
	float num3;
	float num4;
	var unk;

	num = -1f;
	unk.f_2 = 1176256410;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > 0)
		{
			num2 = BUILTIN::VDIST(Global_2638779[i /*10*/].f_4, vParam1);
			num3 = BUILTIN::VDIST(Global_2638779[i /*10*/].f_4, vParam4);
			num4 = num2 + num3;
			num4 = num4 * Global_2638779[i /*10*/].f_1;
		
			if (num4 > num)
			{
				num = num4;
				unk = { Global_2638779[i /*10*/] };
			}
		}
	}

	*iParam0 = { unk };
	return;
}

void func_434(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x20483 (132227)
{
	int i;
	float num;
	float num2;
	var unk;

	num = -1f;
	unk.f_2 = 1176256410;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > 0)
		{
			num2 = BUILTIN::VDIST(Global_2638779[i /*10*/].f_4, vParam1);
			num2 = num2 * Global_2638779[i /*10*/].f_1;
		
			if (num2 > num)
			{
				num = num2;
				unk = { Global_2638779[i /*10*/] };
			}
		}
	}

	*iParam0 = { unk };
	return;
}

void func_435(int iParam0) // Position - 0x20505 (132357)
{
	int i;
	float num;
	var unk;

	num = -1f;
	unk.f_2 = 1176256410;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > 0)
		{
			if (Global_2638779[i /*10*/].f_1 > num)
			{
				num = Global_2638779[i /*10*/].f_1;
				unk = { Global_2638779[i /*10*/] };
			}
		}
	}

	*iParam0 = { unk };
	return;
}

void func_436(int iParam0, float fParam1) // Position - 0x20572 (132466)
{
	int i;
	float num;
	var unk;

	num = 999999.9f;
	unk.f_2 = 1176256410;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > 0)
		{
			if (Global_2638779[i /*10*/].f_2 < num && Global_2638779[i /*10*/].f_2 > fParam1)
			{
				num = Global_2638779[i /*10*/].f_2;
				unk = { Global_2638779[i /*10*/] };
			}
		}
	}

	*iParam0 = { unk };
	return;
}

int func_437() // Position - 0x205F5 (132597)
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > num)
			num = Global_2638779[i /*10*/];
	}

	return num;
}

void func_438(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6, int iParam7) // Position - 0x2062C (132652)
{
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	float num5;
	float num6;
	float num7;
	int num8;
	BOOL flag2;
	int num9;
	int i;
	var unk;
	BOOL flag3;
	int num10;
	var unk4;
	var unk7;
	float num11;
	int j;
	int num12;
	BOOL flag4;
	BOOL flag5;

	num9 = 0;
	num8 = 0;
	flag2 = false;

	if (uParam4->f_5)
		if (Global_2635523.f_490 == 1)
			if (MISC::ABSF(Global_2635523.f_513.f_2 - fParam0.f_2) < 25f)
				num8 = num8 + 1;
		else
			num8 = num8 + 1;
	else
		num8 = num8 + 1;

	if (uParam4->f_5)
		if (func_489(PLAYER::PLAYER_ID()))
			if (iParam7 == -1)
				flag2 = true;
			else if (!(iParam7 & 1 == 0))
				flag2 = true;
		else if (iParam7 == -1)
			num8 = num8 + 2;
		else if (!(iParam7 & 1 == 0))
			num8 = num8 + 2;
	else
		num8 = num8 + 2;

	if (uParam4->f_5 && uParam4->f_6)
		if (!func_488(fParam0, 1084227584, 1123024896, 0))
			num8 = num8 + 4;
	else
		num8 = num8 + 4;

	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), fParam0, 65f))
		{
			num8 = num8 + 8;
			num8 = num8 + 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), fParam0, 20f))
		{
			num8 = num8 + 8;
		}
	}
	else
	{
		num8 = num8 + 8;
		num8 = num8 + 16;
	}

	if (uParam4->f_5)
		if (!func_487(fParam0, uParam5->f_5, true, true, true, true, true, true, false))
			num8 = num8 + 32;
	else
		num8 = num8 + 32;

	flag3 = true;

	for (i = 0; i < 2; i = i + 1)
	{
		if (BUILTIN::VMAG(uParam5->f_13[i /*3*/]) > 0f)
			if (!(BUILTIN::VDIST(fParam0, uParam5->f_13[i /*3*/]) > uParam5->f_20[i]))
				flag3 = false;
	}

	if (flag3)
		if (BUILTIN::VMAG(uParam5->f_23) > 0f && BUILTIN::VMAG(uParam5->f_26) > 0f && uParam5->f_29 > 0f)
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(fParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, false, true))
				flag3 = false;

	if (flag3)
		num8 = num8 + 256;

	if (uParam4->f_5)
	{
		if (func_482(fParam0, fParam3, uParam4->f_15, func_486(1), uParam4->f_16, false, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, false, false))
		{
			num8 = num8 + 64;
			num8 = num8 + 128;
		}
		else
		{
			num9 = Global_2635523.f_3;
		}
	}
	else if (!func_479(fParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
			num2 = 3.5f;
		else
			num2 = 1f;
	
		if (!func_474(fParam0, num2, true, true, 120f, false, -1, 0f, true))
		{
			num8 = num8 + 128;
			num8 = num8 + 64;
		}
		else if (!func_474(fParam0, num2, true, true, 60f, false, -1, 0f, true))
		{
			num8 = num8 + 64;
		}
	}

	if (uParam4->f_5)
	{
		if (!Global_2635523.f_702)
		{
			unk = { Global_2635523.f_513 };
		
			if (Global_2635523.f_490 == 26)
				unk = { Global_2635523.f_556.f_18 };
		
			if (!func_412(fParam0, 0.5f))
				if (func_418(unk))
					if (!func_384(&fParam0, false, false, false, true) && !func_473(&fParam0, false))
						num8 = num8 + 512;
				else if (!func_473(&fParam0, false))
					num8 = num8 + 512;
		}
		else
		{
			num8 = num8 + 512;
		}
	}
	else if (!func_472(fParam0, 2.5f, 3))
	{
		num8 = num8 + 512;
	}

	if (uParam4->f_5)
		if (!(func_280(PLAYER::PLAYER_ID()) && func_470(PLAYER::PLAYER_ID())))
			if (!func_469(&fParam0, &(Global_2635523.f_2792.f_90), false, 1065353216))
				num8 = num8 + 1024;
		else
			num8 = num8 + 1024;
	else
		num8 = num8 + 1024;

	if (uParam4->f_5)
		if (!func_470(PLAYER::PLAYER_ID()))
			if (!func_468(fParam0, &(Global_2635523.f_2792.f_57), &(Global_2635523.f_2792.f_90), 1073741824))
				num8 = num8 + 2048;
		else
			num8 = num8 + 2048;
	else
		num8 = num8 + 2048;

	if (func_467(fParam0))
		if (uParam4->f_5)
			if (func_382(Global_2635523.f_490))
				if (func_421(fParam0, 0.01f))
					num8 = num8 + 4096;
			else
				num8 = num8 + 4096;
		else
			num8 = num8 + 4096;

	if (uParam4->f_5)
		if (func_466(fParam0))
			num8 = num8 + 8192;
	else
		num8 = num8 + 8192;

	if (!Global_2635523.f_45.f_55)
		num8 = num8 + 16384;
	else if (uParam4->f_5)
		if (!(iParam7 & 1 == 0))
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(fParam0)))
				num8 = num8 + 16384;
	else if (!(iParam7 & 2 == 0))
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(fParam0)))
			num8 = num8 + 16384;

	if (uParam4->f_5)
		if (!Global_2635523.f_702)
			if (!func_413(&fParam0, false, false))
				num8 = num8 + 32768;
		else
			num8 = num8 + 32768;
	else
		num8 = num8 + 32768;

	if (!func_399(&fParam0, false))
	{
		num8 = num8 + 65536;
	}
	else
	{
		num10 = func_420(fParam0, 1008981770);
	
		if (num10 > -1)
		{
			func_465(fParam0, &unk4, &unk7, &num11);
		
			if (!func_460(&Global_2635523.f_45[num10 /*12*/], unk4, unk7, num11))
				num8 = -1;
		}
		else
		{
			num8 = -1;
		}
	}

	if (func_402(fParam0, 1056964608))
		num8 = -1;

	if (uParam5->f_33)
		if (PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, 0.3f))
			num8 = -1;

	if (uParam5->f_34)
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, 1f))
			num8 = -1;

	if (uParam4->f_5)
	{
	}
	else if (func_459(fParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		num8 = 0;
	}

	num12.f_2 = 1176256410;
	flag4 = false;
	flag5 = false;

	if (Global_2635523.f_3199 && uParam4->f_5)
	{
		if (num8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				flag = false;
			}
			else
			{
				flag = true;
			}
		
			if (uParam4->f_21)
				num = func_450(fParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, flag, num9, &(num12.f_8));
			else
				num = func_450(fParam0, Global_2635523.f_2767, uParam5->f_6, uParam5->f_4, flag, num9, &(num12.f_8));
		
			if (flag2)
				num = num * 3f;
		
			if (func_382(Global_2635523.f_490) && num8 < 4096)
				num12.f_2 = func_448(fParam0);
		
			num7 = func_444(fParam0, true, false, 0, false, 0);
			num12.f_4 = { fParam0 };
			num12.f_7 = fParam3;
			num12 = num8;
			num12.f_1 = num;
			num12.f_9 = num7;
			func_443(num12);
			Global_2635523.f_2792.f_2 = 1;
		}
	}
	else
	{
		for (j = 0; j < 5; j = j + 1)
		{
			if (num8 >= Global_2635523.f_2792.f_6[j /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!flag4)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							flag = false;
						}
						else
						{
							flag = true;
						}
					
						if (uParam4->f_21)
							num = func_450(fParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, flag, num9, &(num12.f_8));
						else
							num = func_450(fParam0, Global_2635523.f_2767, uParam5->f_6, uParam5->f_4, flag, num9, &(num12.f_8));
					
						if (flag2)
							num = num * 3f;
					
						flag4 = true;
					}
				
					if (func_382(Global_2635523.f_490) && num8 == Global_2635523.f_2792.f_6[j /*10*/] && num8 < 4096)
					{
						if (!flag5)
						{
							num3 = func_448(fParam0);
							flag5 = true;
						}
					
						if (num3 < Global_2635523.f_2792.f_6[j /*10*/].f_2)
						{
							num12.f_4 = { fParam0 };
							num12.f_7 = fParam3;
							num12 = num8;
							num12.f_1 = num;
							num12.f_2 = num3;
							func_442(num12, j);
							Global_2635523.f_2792.f_2 = 1;
							return;
						}
					}
					else if (num8 > Global_2635523.f_2792.f_6[j /*10*/] || num8 == Global_2635523.f_2792.f_6[j /*10*/] && num > Global_2635523.f_2792.f_6[j /*10*/].f_1)
					{
						num12.f_4 = { fParam0 };
						num12.f_7 = fParam3;
						num12 = num8;
						num12.f_1 = num;
						func_442(num12, j);
						Global_2635523.f_2792.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!flag4)
					{
						if (uParam4->f_15)
							num2 = 3.5f;
						else
							num2 = 1f;
					
						num5 = func_440(fParam0, num2, true, true, false, -1, true);
						num6 = func_444(fParam0, true, true, 1, true, 0);
					
						if (num5 > 15f && num6 > 5f)
							num4 = func_439(num5, 0f, 80f, 160f, 1f, 1.2f);
						else
							num4 = func_439(num6, 0f, 80f, 160f, 0f, 0.2f);
					
						flag4 = true;
					}
				
					if (num8 > Global_2635523.f_2792.f_6[j /*10*/] || num8 == Global_2635523.f_2792.f_6[j /*10*/] && num4 > Global_2635523.f_2792.f_6[j /*10*/].f_3)
					{
						num12.f_4 = { fParam0 };
						num12.f_7 = fParam3;
						num12 = num8;
						num12.f_3 = num4;
						func_442(num12, j);
						Global_2635523.f_2792.f_2 = 1;
						return;
					}
				}
			}
		}
	}

	return;
}

float func_439(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5) // Position - 0x20FEA (135146)
{
	float num;

	if (fParam1 >= fParam3)
		fParam1 = fParam3 * 0.5f;

	if (fParam0 < fParam1)
		fParam0 = fParam1;

	if (fParam0 > fParam3)
		fParam0 = fParam3;

	if (fParam2 < fParam3 && fParam2 > fParam1)
		if (fParam0 < fParam2)
			num = fParam4 + (1f - fParam4 - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1))));
		else
			num = fParam5 + (1f - fParam5 - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2))));
	else
		num = fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4));

	return num;
}

float func_440(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x21088 (135304)
{
	ePedComponentType i;
	ePedComponentType type;
	BOOL flag;
	float value;
	float num;

	flag = false;
	value = 1E+13f;

	if (bParam4 && !bParam6)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					num = BUILTIN::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
				
					if (num < value)
					{
						value = num;
						flag = true;
					}
				}
			}
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (_NETWORK_IS_PLAYER_VALID(type, true, true))
		{
			if (!func_9(type, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
			{
				if (bParam4 == true || bParam4 == false && type != PLAYER::PLAYER_ID())
				{
					if (func_441(type) || !bParam8)
					{
						if (!bParam6)
						{
							if (bParam5 || bParam5 == false && PLAYER::GET_PLAYER_TEAM(type) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || PLAYER::GET_PLAYER_TEAM(type) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(type, vParam0, fParam3))
								{
									num = BUILTIN::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(type), false));
								
									if (num < value)
									{
										value = num;
										flag = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(type) != iParam7 || PLAYER::GET_PLAYER_TEAM(type) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(type, vParam0, fParam3))
							{
								num = BUILTIN::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(type), false));
							
								if (num < value)
								{
									value = num;
									flag = true;
								}
							}
						}
					}
				}
			}
		}
	}

	if (flag)
		return BUILTIN::SQRT(value);

	return -1f;
}

BOOL func_441(ePedComponentType epctParam0) // Position - 0x2121F (135711)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(epctParam0)) || Global_2658019[epctParam0 /*467*/].f_258)
		return true;

	return false;
}

void func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10) // Position - 0x2124B (135755)
{
	var unk;

	unk.f_2 = 1176256410;
	unk = { Global_2635523.f_2792.f_6[iParam10 /*10*/] };
	Global_2635523.f_2792.f_6[iParam10 /*10*/] = { uParam0 };

	if (iParam10 < 4)
		func_442(unk, iParam10 + 1);

	return;
}

void func_443(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0x2129D (135837)
{
	int i;
	var unk;
	int num;
	float num2;
	int num3;

	unk.f_2 = 1176256410;
	num = func_437();

	if (iParam0 > num)
		num = iParam0;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] < num)
			Global_2638779[i /*10*/] = { unk };
	}

	if (iParam0 < num)
		return;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] == 0)
		{
			Global_2638779[i /*10*/] = { iParam0 };
			return;
		}
	}

	num2 = 9999.9f;
	num3 = -1;

	for (i = 0; i < 128; i = i + 1)
	{
		if (Global_2638779[i /*10*/] > 0)
		{
			if (Global_2638779[i /*10*/].f_1 < num2)
			{
				num2 = Global_2638779[i /*10*/].f_1;
				num3 = i;
			}
		}
	}

	if (num3 > -1)
		Global_2638779[num3 /*10*/] = { iParam0 };

	return;
}

float func_444(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x21391 (136081)
{
	ePedComponentType i;
	float distanceBetweenCoords;
	float distanceBetweenCoords2;
	float num;
	BOOL flag;
	Vector3 vector;
	Vector3 lastEntityPosReceivedOverNetwork;
	ePedComponentType type;

	num = 999999.9f;
	flag = false;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (_NETWORK_IS_PLAYER_VALID(type, true, true) || iParam7 == 1 && _NETWORK_IS_PLAYER_VALID(type, false, false))
		{
			if (!(type == PLAYER::PLAYER_ID()) || iParam5 == 1)
			{
				flag = false;
			
				if (bParam3)
					if (func_445(type))
						flag = true;
			
				if (bParam4)
					if (PLAYER::GET_PLAYER_TEAM(type) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
						if (!(PLAYER::GET_PLAYER_TEAM(type) == -1) || !func_422(PLAYER::PLAYER_ID(), true))
							flag = true;
			
				if (flag)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type) || !bParam6)
					{
						if (func_441(type))
						{
							vector = { _GET_PLAYER_COORDS(type) };
						
							if (!(type == PLAYER::PLAYER_ID()))
								lastEntityPosReceivedOverNetwork = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(type)) };
							else
								lastEntityPosReceivedOverNetwork = { vector };
						
							if (!bParam6)
							{
								if (vector.f_2 < -100f)
									vector.f_2 = vParam0.f_2;
							
								if (lastEntityPosReceivedOverNetwork.f_2 < -100f)
									lastEntityPosReceivedOverNetwork.f_2 = vParam0.f_2;
							}
						
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vector, true);
							distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, lastEntityPosReceivedOverNetwork, true);
						
							if (distanceBetweenCoords < num)
								num = distanceBetweenCoords;
						
							if (distanceBetweenCoords2 < num)
								num = distanceBetweenCoords2;
						}
					}
				}
			}
		}
	}

	return num;
}

BOOL func_445(ePedComponentType epctParam0) // Position - 0x214F4 (136436)
{
	if (_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		if (!func_162(epctParam0))
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), epctParam0))
				if (!(PLAYER::GET_PLAYER_TEAM(epctParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())))
					if (func_281(PLAYER::PLAYER_ID(), true, false))
						if (!func_6(PLAYER::GET_PLAYER_TEAM(epctParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
							return true;
					else
						return true;
				else if (PLAYER::GET_PLAYER_TEAM(epctParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					if (!func_281(PLAYER::PLAYER_ID(), true, false))
						if (!func_446(epctParam0))
							return true;
					else
						return true;

	return false;
}

BOOL func_446(ePedComponentType epctParam0) // Position - 0x215A2 (136610)
{
	if (func_221(PLAYER::PLAYER_ID(), epctParam0))
		return true;

	Global_2707987 = { GET_GAMER_HANDLE_PLAYER(epctParam0) };

	if (NETWORK::NETWORK_IS_FRIEND(&Global_2707987))
		return true;

	if (func_447(PLAYER::PLAYER_ID(), epctParam0))
		return true;

	return false;
}

BOOL func_447(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x215E9 (136681)
{
	ePedComponentType type;

	type = func_139(epctParam0);

	if (func_12(type))
		if (type == func_139(epctParam1))
			return true;

	return false;
}

float func_448(var uParam0, var uParam1, var uParam2) // Position - 0x21612 (136722)
{
	var unk;

	return func_449(uParam0, &(Global_2635523.f_45), &unk);
}

float func_449(float fParam0, var uParam1, var uParam2, Any* panParam3, var uParam4) // Position - 0x2162A (136746)
{
	int i;
	float num;
	float num2;
	int num3;

	num3 = -1;
	num2 = 10000000f;

	for (i = 0; i < *panParam3; i = i + 1)
	{
		if (panParam3->[i /*12*/].f_9)
		{
			num = 0f;
		
			switch (panParam3->[i /*12*/].f_10)
			{
				case 0:
					num = BUILTIN::VDIST(panParam3->[i /*12*/], fParam0);
					num = num - (panParam3->[i /*12*/].f_6 + ((float)Global_2635523.f_3036 * panParam3->[i /*12*/].f_8));
					break;
			
				case 1:
				case 2:
					if (fParam0 < panParam3->[i /*12*/])
						num = num + (panParam3->[i /*12*/] - fParam0);
					else if (fParam0 > panParam3->[i /*12*/].f_3)
						num = num + (fParam0 - panParam3->[i /*12*/].f_3);
				
					if (fParam0.f_1 < panParam3->[i /*12*/].f_1)
						num = num + (panParam3->[i /*12*/].f_1 - fParam0.f_1);
					else if (fParam0.f_1 > panParam3->[i /*12*/].f_3.f_1)
						num = num + (fParam0.f_1 - panParam3->[i /*12*/].f_3.f_1);
				
					if (fParam0.f_2 < panParam3->[i /*12*/].f_2)
						num = num + (panParam3->[i /*12*/].f_2 - fParam0.f_2);
					else if (fParam0.f_2 > panParam3->[i /*12*/].f_3.f_2)
						num = num + (fParam0.f_2 - panParam3->[i /*12*/].f_3.f_2);
					break;
			}
		
			if (num < num2)
			{
				num2 = num;
				num3 = i;
			}
		}
	}

	if (num2 < 0f)
		num2 = 0f;

	*uParam4 = num3;
	return num2;
}

float func_450(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, var uParam10) // Position - 0x217A6 (137126)
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;

	num2 = 1f;

	if (iParam9 > 0)
		num2 = BUILTIN::TO_FLOAT(iParam9) / BUILTIN::TO_FLOAT(8);

	if (bParam6)
	{
		num = func_439(BUILTIN::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		num2 = num2 * num * 0.95f;
	}

	*uParam10 = 10000000f;
	num5 = func_444(vParam0, true, false, 0, true, 0);
	num = func_439(num5, 0f, func_458(), func_456(), 0f, 0.3f);
	num2 = num2 * num * 0.95f;

	if (num5 < *uParam10)
		num5 = num5;

	num5 = func_454(vParam0);
	num = func_439(num5, 0f, 0f, 60f, 0.5f, 1f);
	num2 = num2 * num * 0.95f;

	if (num5 < *uParam10)
		num5 = num5;

	num6 = 100f;

	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_422(PLAYER::PLAYER_ID(), true))
		num6 = 1f;

	num5 = func_452(vParam0, PLAYER::PLAYER_ID(), 0);
	num = func_439(num5, 0f, 0f, num6, 0f, 1f);
	num2 = num2 * num * 0.95f;

	if (num5 < *uParam10)
		num5 = num5;

	if (bParam7)
	{
		if (func_451(vParam0, &num3, &num4))
		{
			if (num3 < 10f)
				num3 = 10f;
		
			if (num4 < 0.5f)
				num4 = 0.5f;
		
			num = func_439(num3, 0f, 0f, 200f, 1f, 0.1f);
			num = num + func_439(num4, 0f, 0f, 6f, 1f, 0.5f);
			num = num * 0.5f;
			num2 = num2 * num * 0.85f;
		}
	}

	if (bParam8)
	{
		num = func_439(BUILTIN::VDIST(Global_2635523.f_513, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		num2 = num2 * num * 0.9f;
	}

	return num2;
}

BOOL func_451(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2198D (137613)
{
	float outPosition;
	int nthClosestVehicleNodeIdWithHeading;
	var outHeading;
	var outPosition2;

	nthClosestVehicleNodeIdWithHeading = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(fParam0, 1, &outPosition2, &outHeading, 1, 1077936128, 0);

	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeIdWithHeading))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeIdWithHeading, &outPosition);
		*uParam3 = BUILTIN::VDIST(fParam0, fParam0.f_1, 0f, outPosition, outPosition.f_1, 0f);
		*uParam4 = MISC::ABSF(fParam0.f_2 - outPosition.f_2);
		return true;
	}

	return false;
}

float func_452(Vector3 vParam0, var uParam1, var uParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x219E6 (137702)
{
	float num;
	float num2;
	ePedComponentType i;
	ePedComponentType type;

	num = 999999.9f;

	if (_NETWORK_IS_PLAYER_VALID(epctParam3, false, true))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			if (!(epctParam3 == i) || iParam4 == 1)
			{
				type = i;
			
				if (_NETWORK_IS_PLAYER_VALID(type, false, true))
				{
					if (PLAYER::GET_PLAYER_TEAM(type) != PLAYER::GET_PLAYER_TEAM(epctParam3) || PLAYER::GET_PLAYER_TEAM(type) == -1 && PLAYER::GET_PLAYER_TEAM(epctParam3) == -1)
					{
						if (!func_453(type, epctParam3))
						{
							if (Global_2648932.f_261[i])
							{
								num2 = BUILTIN::VDIST(Global_2648932.f_131[i /*3*/], vParam0);
							
								if (num2 < num)
									num = num2;
							}
						}
					}
				}
			}
		}
	}

	return num;
}

BOOL func_453(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x21AA1 (137889)
{
	ePedComponentType type;

	if (func_12(epctParam0) && func_12(epctParam1))
	{
		type = func_139(epctParam0);
	
		if (type != _INVALID_PLAYER_INDEX())
			return type == func_139(epctParam1);
	}

	return false;
}

float func_454(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x21ADB (137947)
{
	float num;
	float distanceBetweenCoords;
	int i;
	Vector3 entityCoords;
	var sizeAndPeds;
	int pedNearbyPeds;

	sizeAndPeds = 32;
	pedNearbyPeds = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &sizeAndPeds, 2);
	num = 10000000f;

	for (i = 0; i < pedNearbyPeds; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(sizeAndPeds[i], false))
			{
				if (func_455(sizeAndPeds[i]))
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(sizeAndPeds[i], true) };
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, entityCoords, true);
				
					if (distanceBetweenCoords < num)
						num = distanceBetweenCoords;
				}
			}
		}
	}

	if (Global_2635523.f_3244)
	{
		if (Global_1058116.f_267 > 0)
		{
			for (i = 0; i < Global_1058116.f_267; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058116.f_152[i]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_1058116.f_152[i], false))
					{
						if (func_455(Global_1058116.f_152[i]))
						{
							entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_1058116.f_152[i], true) };
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, entityCoords, true);
						
							if (distanceBetweenCoords < num)
								num = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num;
}

BOOL func_455(Ped pedParam0) // Position - 0x21BFB (138235)
{
	Hash pedRelationshipGroupHash;
	int playerTeam;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);

	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(pedRelationshipGroupHash, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return true;
	}

	if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837340[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(pedRelationshipGroupHash, Global_1837340[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return true;
		}
	}

	if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_HEAD)
	{
		playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	
		if (playerTeam > -1 && playerTeam < 4)
		{
			if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837050[playerTeam]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(pedRelationshipGroupHash, Global_1837050[playerTeam]))
				{
					case 3:
					case 5:
						return true;
				}
			}
		}
	}

	return false;
}

float func_456() // Position - 0x21CC6 (138438)
{
	if (func_457())
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635523.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635523.f_45.f_67) || Global_2635523.f_45.f_67 == joaat("rhino"))
			return 640f;
		else
			return 320f;

	return 160f;
}

BOOL func_457() // Position - 0x21D22 (138530)
{
	if (Global_2635523.f_45.f_65 && !Global_2635523.f_45.f_305)
		if (!func_162(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

float func_458() // Position - 0x21D58 (138584)
{
	if (func_457())
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635523.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635523.f_45.f_67) || Global_2635523.f_45.f_67 == joaat("rhino"))
			return 320f;
		else
			return 160f;

	return 80f;
}

BOOL func_459(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x21DB4 (138676)
{
	int radius;

	radius = iParam6;

	if (bParam5)
		radius = iParam7;

	if (iParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, iParam7) || radius > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, radius) || iParam4 == 1 && iParam8 > 0f && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, iParam8, false) || iParam3 == 1 && iParam9 > 0f && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, iParam9, true))
		return true;

	return false;
}

BOOL func_460(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x21E43 (138819)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_464(*uParam0, uParam0->f_6, uParam1, uParam4, fParam7))
				return true;
			break;
	
		case 1:
			if (func_463(*uParam0, uParam0->f_3, uParam1, uParam4, fParam7))
				return true;
			break;
	
		case 2:
			if (func_461(*uParam0, uParam0->f_3, uParam0->f_6, uParam1, uParam4, fParam7))
				return true;
			break;
	}

	return false;
}

BOOL func_461(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, Vector3 vParam10, var uParam11, var uParam12, float fParam13) // Position - 0x21ECF (138959)
{
	var unk;
	int i;

	unk = 8;
	func_462(uParam0, uParam3, fParam6, &unk);

	for (i = 0; i < 8; i = i + 1)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(unk[i /*3*/], vParam7, vParam10, fParam13, false, true))
			return false;
	}

	return true;
}

void func_462(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7) // Position - 0x21F21 (139041)
{
	var unk;
	Vector3 vector;
	float num;
	float num2;

	if (fParam0.f_2 == fParam3.f_2)
		fParam3.f_2 = fParam3.f_2 + 0.01f;

	unk = { fParam0 - fParam3 };
	vector = { func_388(unk, unk, unk.f_1, 0f) };
	vector = { vector / F2V(BUILTIN::VMAG(vector)) };
	vector = { vector * { fParam6 * 0.5f, fParam6 * 0.5f, fParam6 * 0.5f } };

	if (fParam0.f_2 > fParam3.f_2)
	{
		num = fParam3.f_2;
		num2 = fParam0.f_2;
	}
	else
	{
		num = fParam0.f_2;
		num2 = fParam3.f_2;
	}

	uParam7->[0 /*3*/] = { { num, fParam0.f_1, fParam0 } + vector };
	uParam7->[1 /*3*/] = { { num, fParam0.f_1, fParam0 } - vector };
	uParam7->[2 /*3*/] = { { num2, fParam0.f_1, fParam0 } - vector };
	uParam7->[3 /*3*/] = { { num2, fParam0.f_1, fParam0 } + vector };
	uParam7->[4 /*3*/] = { { num, fParam3.f_1, fParam3 } + vector };
	uParam7->[5 /*3*/] = { { num, fParam3.f_1, fParam3 } - vector };
	uParam7->[6 /*3*/] = { { num2, fParam3.f_1, fParam3 } - vector };
	uParam7->[7 /*3*/] = { { num2, fParam3.f_1, fParam3 } + vector };
	return;
}

BOOL func_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12) // Position - 0x2204E (139342)
{
	var unk;
	int i;

	unk = 8;
	unk[0 /*3*/] = { uParam0, uParam0.f_1, uParam0.f_2 };
	unk[1 /*3*/] = { uParam0, uParam0.f_1, uParam3.f_2 };
	unk[2 /*3*/] = { uParam0, uParam3.f_1, uParam3.f_2 };
	unk[3 /*3*/] = { uParam0, uParam3.f_1, uParam0.f_2 };
	unk[4 /*3*/] = { uParam3, uParam0.f_1, uParam0.f_2 };
	unk[5 /*3*/] = { uParam3, uParam0.f_1, uParam3.f_2 };
	unk[6 /*3*/] = { uParam3, uParam3.f_1, uParam3.f_2 };
	unk[7 /*3*/] = { uParam3, uParam3.f_1, uParam0.f_2 };

	for (i = 0; i < 8; i = i + 1)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(unk[i /*3*/], vParam6, vParam9, fParam12, false, true))
			return false;
	}

	return true;
}

BOOL func_464(var uParam0, var uParam1, var uParam2, float fParam3, Vector3 vParam4, var uParam5, var uParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10) // Position - 0x22118 (139544)
{
	var unk;
	int i;

	unk = 4;
	unk[0 /*3*/] = { uParam0 + { 0f, fParam3, 0f } };
	unk[1 /*3*/] = { uParam0 + { 0f, -1f * fParam3, 0f } };
	unk[2 /*3*/] = { uParam0 + { 0f, 0f, fParam3 } };
	unk[3 /*3*/] = { uParam0 + { 0f, 0f, -1f * fParam3 } };

	for (i = 0; i < 4; i = i + 1)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(unk[i /*3*/], vParam4, vParam7, fParam10, false, true))
			return false;
	}

	return true;
}

void func_465(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2219C (139676)
{
	int i;
	var unk;
	int num;

	unk = { uParam0 };
	num = func_401(unk);

	for (i = 0; i < Global_2642425[num]; i = i + 1)
	{
		if (func_400(unk, &Global_2641029[num /*155*/][i /*7*/]))
		{
			*uParam3 = { Global_2641029[num /*155*/][i /*7*/] };
			*uParam4 = { Global_2641029[num /*155*/][i /*7*/].f_3 };
			*uParam5 = Global_2641029[num /*155*/][i /*7*/].f_6;
			return;
		}
	}

	for (i = 0; i < Global_2642425[8]; i = i + 1)
	{
		if (func_400(unk, &Global_2641029[8 /*155*/][i /*7*/]))
		{
			*uParam3 = { Global_2641029[8 /*155*/][i /*7*/] };
			*uParam4 = { Global_2641029[8 /*155*/][i /*7*/].f_3 };
			*uParam5 = Global_2641029[8 /*155*/][i /*7*/].f_6;
			return;
		}
	}

	return;
}

BOOL func_466(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2228A (139914)
{
	Interior interiorAtCoords;
	int interiorGroupId;

	if (Global_2635523.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2635523.f_45.f_56))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
			{
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
			
				if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords))
				{
					interiorGroupId = INTERIOR::GET_INTERIOR_GROUP_ID(interiorAtCoords);
				
					if (!(interiorGroupId == Global_2635523.f_45.f_57))
						return false;
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
	}

	return true;
}

BOOL func_467(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x222F5 (140021)
{
	switch (Global_2635523.f_2788)
	{
		case 0:
			return func_500(vParam0, Global_2635523.f_2767, Global_2635523.f_2770, false, false);
	
		case 1:
			return func_426(vParam0, Global_2635523.f_2781, Global_2635523.f_2784, false, false);
	
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2635523.f_2781, Global_2635523.f_2784, Global_2635523.f_2787, false, true);
	}

	return false;
}

BOOL func_468(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x22387 (140167)
{
	float num;
	int i;
	Vector3 vector;
	Vector3 vector2;
	float width;

	num = 0f;
	i = 0;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		num = uParam3->[i /*4*/].f_3 + iParam5;
	
		if (BUILTIN::VDIST(uParam3->[i /*4*/], vParam0) < num)
			return true;
	}

	vector = { 0f, 0f, 0f };
	vector2 = { 0f, 0f, 0f };
	width = 0f;

	for (i = 0; i < *uParam4; i = i + 1)
	{
		vector = { uParam4->[i /*10*/] };
		vector2 = { uParam4->[i /*10*/].f_3 };
		width = uParam4->[i /*10*/].f_6;
	
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vector, vector2, width, false, true))
			return true;
	}

	return false;
}

BOOL func_469(var uParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x22435 (140341)
{
	int i;
	var unk;

	i = 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (BUILTIN::VDIST(uParam1->[i /*10*/].f_7, *uParam0) < 80f * iParam3)
		{
			if (bParam2)
			{
				unk = { *uParam0 };
				func_390(&unk, uParam1->[i /*10*/].f_7, 80f, 1036831949, false, 0);
				*uParam0 = { unk };
			}
		
			return true;
		}
	}

	return false;
}

BOOL func_470(Player plParam0) // Position - 0x224A8 (140456)
{
	switch (func_424())
	{
		case 0:
			if (!func_471(plParam0))
				if (Global_1845274[plParam0 /*877*/] == PV_COMP_HEAD)
					return 1;
			break;
	}

	return 0;
}

BOOL func_471(Player plParam0) // Position - 0x224DE (140510)
{
	return Global_1845274[plParam0 /*877*/].f_185 != 0;
}

BOOL func_472(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4) // Position - 0x224F3 (140531)
{
	int i;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (BUILTIN::VDIST2(Global_2635523.f_2926[i /*3*/], vParam0) < fParam3 * fParam3)
			return true;
	}

	return false;
}

BOOL func_473(var uParam0, BOOL bParam1) // Position - 0x22531 (140593)
{
	var unk;
	var unk2;
	float randomFloatInRange;

	if (func_414(*uParam0))
	{
		if (bParam1)
		{
			unk2 = { *uParam0 };
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_390(&unk2, Global_2635523.f_594, Global_2635523.f_597, 1036831949, false, randomFloatInRange);
		
			if (func_415(unk2, &unk) || func_414(unk2))
			{
				unk2 = { *uParam0 };
				func_390(&unk2, Global_2635523.f_594, Global_2635523.f_597, 1036831949, true, randomFloatInRange);
			}
		
			*uParam0 = { unk2 };
		}
	}

	return false;
}

BOOL func_474(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, float fParam6, BOOL bParam7, int iParam8, float fParam9, BOOL bParam10) // Position - 0x225C9 (140745)
{
	ePedComponentType i;
	ePedComponentType type;
	float num;

	if (bParam4 && !bParam7)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				num = fParam6;
			
				if (fParam9 > 0f)
					num = fParam9;
			
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_475(PLAYER::PLAYER_ID()), vParam0, true) <= num + fParam3)
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
						return true;
			}
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (_NETWORK_IS_PLAYER_VALID(type, true, true))
		{
			if (!func_9(type, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
			{
				if (bParam4 == true || bParam4 == false && type != PLAYER::PLAYER_ID())
				{
					if (func_441(type) || !bParam10 && !Global_2658019[type /*467*/].f_273)
					{
						num = fParam6;
					
						if (fParam9 > 0f)
							if (!(PLAYER::GET_PLAYER_TEAM(type) == -1))
								if (PLAYER::GET_PLAYER_TEAM(type) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
									num = fParam9;
					
						if (!bParam7)
							if (bParam5 || bParam5 == false && PLAYER::GET_PLAYER_TEAM(type) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || PLAYER::GET_PLAYER_TEAM(type) == -1)
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_475(type), vParam0, true) <= num + fParam3)
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(type, vParam0, fParam3))
										return true;
						else if (PLAYER::GET_PLAYER_TEAM(type) != iParam8 || PLAYER::GET_PLAYER_TEAM(type) == -1)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_475(type), vParam0, true) <= num + fParam3)
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(type, vParam0, fParam3))
									return true;
					}
				}
			}
		}
	}

	return false;
}

Vector3 func_475(ePedComponentType epctParam0) // Position - 0x22781 (141185)
{
	ePedComponentType type;

	type = epctParam0;

	if (func_156() && Global_1845274[type /*877*/].f_857 && !func_478(Global_1845274[type /*877*/].f_858))
		return Global_1845274[type /*877*/].f_858;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_477(false) && func_476())
		return CAM::GET_FINAL_RENDERED_CAM_COORD();

	return _GET_PLAYER_COORDS(epctParam0);
}

BOOL func_476() // Position - 0x227F6 (141302)
{
	return IS_BIT_SET(Global_1960332, 5);
}

BOOL func_477(BOOL bParam0) // Position - 0x22804 (141316)
{
	bParam0;
	return Global_1575060;
}

BOOL func_478(float fParam0, var uParam1, var uParam2) // Position - 0x22815 (141333)
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_479(var uParam0, var uParam1, var uParam2, float fParam3, ePedComponentType epctParam4, int iParam5, int iParam6) // Position - 0x2283F (141375)
{
	if (func_481(uParam0, fParam3, epctParam4, iParam5, false) || func_480(uParam0, epctParam4, iParam6))
		return true;

	return false;
}

int func_480(var uParam0, var uParam1, var uParam2, ePedComponentType epctParam3, int iParam4) // Position - 0x22870 (141424)
{
	ePedComponentType i;
	int j;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(epctParam3 == i) || iParam4 == 1)
		{
			type = i;
		
			for (j = 0; j < 2; j = j + 1)
			{
				if (!(Global_2648932.f_461[i /*11*/][j /*5*/].f_4 == PV_COMP_HEAD))
					if (func_403(uParam0, Global_2648932.f_461[i /*11*/][j /*5*/], Global_2648932.f_461[i /*11*/][j /*5*/].f_3, Global_2648932.f_461[i /*11*/][j /*5*/].f_4, 1036831949))
						if (_NETWORK_IS_PLAYER_VALID(type, false, true) && _NETWORK_IS_PLAYER_VALID(epctParam3, false, true))
							return 1;
						else
							return 1;
			}
		}
	}

	return 0;
}

int func_481(Vector3 vParam0, var uParam1, var uParam2, float fParam3, ePedComponentType epctParam4, int iParam5, BOOL bParam6) // Position - 0x22932 (141618)
{
	ePedComponentType i;
	ePedComponentType type;
	BOOL flag;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(epctParam4 == i) || iParam5 == 1)
		{
			type = i;
			flag = false;
		
			if (bParam6)
				if (_NETWORK_IS_PLAYER_VALID(type, false, true) && _NETWORK_IS_PLAYER_VALID(epctParam4, false, true))
					if (PLAYER::GET_PLAYER_TEAM(type) == PLAYER::GET_PLAYER_TEAM(epctParam4))
						flag = true;
		
			if (!flag)
				if (_NETWORK_IS_PLAYER_VALID(type, false, true) && _NETWORK_IS_PLAYER_VALID(epctParam4, false, true))
					if (Global_2648932.f_261[i])
						if (BUILTIN::VDIST(Global_2648932.f_131[i /*3*/], vParam0) < fParam3)
							return 1;
					else if (BUILTIN::VDIST(_GET_PLAYER_COORDS(type), vParam0) < 1f)
						return 1;
				else if (Global_2648932.f_261[i])
					if (BUILTIN::VDIST(Global_2648932.f_131[i /*3*/], vParam0) < fParam3)
						return 1;
				else if (_NETWORK_IS_PLAYER_VALID(type, false, true))
					if (BUILTIN::VDIST(_GET_PLAYER_COORDS(type), vParam0) < 1f)
						return 1;
		}
	}

	return 0;
}

BOOL func_482(var uParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15) // Position - 0x22A4F (141903)
{
	Global_2635523.f_3 = 0;

	if (!func_479(uParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2635523.f_3 = Global_2635523.f_3 + 1;
	
		if (bParam5)
		{
			if (func_530(uParam0, 3.65f, 0.5f, 1.5f, 1f, false, bParam6, bParam7, iParam8, bParam15, -1, true, 0, false, iParam13, bParam14, false))
			{
				Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
			
				if (!func_485(uParam0, iParam12))
				{
					Global_2635523.f_3 = Global_2635523.f_3 + 1;
				
					if (!func_402(uParam0, 1056964608))
					{
						Global_2635523.f_3 = Global_2635523.f_3 + 1;
						return true;
					}
				}
			}
			else
			{
				Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
			}
		}
		else if (!bParam4)
		{
			if (func_530(uParam0, 3.65f, 0.5f, 1.5f, 1f, false, bParam6, bParam7, iParam8, bParam15, -1, true, 0, false, iParam13, bParam14, false))
			{
				Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
			
				if (!func_485(uParam0, iParam12))
				{
					Global_2635523.f_3 = Global_2635523.f_3 + 1;
				
					if (!func_483(uParam0, fParam3, iParam9, iParam10, 1084227584))
					{
						Global_2635523.f_3 = Global_2635523.f_3 + 1;
					
						if (!func_402(uParam0, 1056964608))
						{
							Global_2635523.f_3 = Global_2635523.f_3 + 1;
							return true;
						}
					}
				}
			}
			else
			{
				Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
			}
		}
		else if (func_530(uParam0, 6f, 5f, 5f, 5f, false, bParam6, bParam7, iParam8, bParam15, -1, true, 0, false, iParam13, bParam14, false))
		{
			Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
		
			if (!func_485(uParam0, iParam12))
			{
				Global_2635523.f_3 = Global_2635523.f_3 + 1;
			
				if (!func_483(uParam0, fParam3, iParam9, iParam10, iParam11))
				{
					Global_2635523.f_3 = Global_2635523.f_3 + 1;
				
					if (!func_402(uParam0, 1056964608))
					{
						Global_2635523.f_3 = Global_2635523.f_3 + 1;
						return true;
					}
				}
			}
		}
		else
		{
			Global_2635523.f_3 = Global_2635523.f_3 + Global_2635523.f_2;
		}
	}

	return false;
}

BOOL func_483(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6) // Position - 0x22C8F (142479)
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (!(PLAYER::PLAYER_ID() == type))
			if (_NETWORK_IS_PLAYER_VALID(type, true, true) && func_441(type) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
				if (!func_135(PLAYER::PLAYER_ID(), type, -2, 0))
					if (func_484(_GET_PLAYER_COORDS(type), uParam0, fParam3, iParam4, iParam5, iParam6))
						return true;
	}

	return false;
}

BOOL func_484(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, int iParam7, int iParam8, int iParam9) // Position - 0x22D0E (142606)
{
	float num;
	Vector3 vector;

	fParam6 = fParam6 * -1f;
	fParam6 = fParam6 + 360f;
	num = BUILTIN::SIN(fParam6);
	num.f_1 = BUILTIN::COS(fParam6);
	num.f_2 = 0f;
	num = { num / F2V(BUILTIN::VMAG(num)) };
	num = { num * { iParam7, iParam7, iParam7 } };
	vector = { vParam3 + num };
	vector.f_2 = vParam3.f_2;
	vector.f_2 = vector.f_2 + iParam9;
	vParam3.f_2 = vParam3.f_2 + iParam9;
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vector, iParam8, false, true);
}

BOOL func_485(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x22D9A (142746)
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (_NETWORK_IS_PLAYER_VALID(type, true, true) && func_441(type) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(type) == -1 && !func_422(PLAYER::PLAYER_ID(), true))
				return false;
			else if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !(PLAYER::PLAYER_ID() == type) || !func_135(PLAYER::PLAYER_ID(), type, -2, 0))
				if (BUILTIN::VDIST(vParam0, _GET_PLAYER_COORDS(type)) < iParam3)
					return true;
	}

	return false;
}

BOOL func_486(int iParam0) // Position - 0x22E56 (142934)
{
	if (Global_2635523.f_490 == 9 || Global_2635523.f_490 == 9 || Global_2635523.f_490 == 15 && iParam0 == 1)
		return true;

	return false;
}

BOOL func_487(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x22E99 (143001)
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (bParam8 == true && PLAYER::PLAYER_ID() != type || bParam8 == false)
		{
			if (_NETWORK_IS_PLAYER_VALID(type, bParam4, bParam5))
			{
				if (bParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
				{
					if (!bParam7 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(type)) && func_441(type))
					{
						if (!bParam6 || bParam6 == true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(type) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam9 && bParam6 && func_446(type))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(type)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(type), vParam0, true) < fParam3)
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

BOOL func_488(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x22F9D (143261)
{
	ePedComponentType i;
	ePedComponentType type;
	int num;
	int playerTeam;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (!(playerTeam == -1))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			type = i;
		
			if (_NETWORK_IS_PLAYER_VALID(type, true, true))
			{
				if (!func_9(type, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type) && type != PLAYER::PLAYER_ID())
				{
					num = iParam4;
				
					if (iParam5 > 0f)
						if (!(PLAYER::GET_PLAYER_TEAM(type) == -1))
							if (PLAYER::GET_PLAYER_TEAM(type) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								num = iParam5;
				
					if (PLAYER::GET_PLAYER_TEAM(type) == playerTeam)
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(_GET_PLAYER_COORDS(type), vParam0, true) <= num + iParam3)
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(type, vParam0, iParam3))
								return true;
				}
			}
		}
	}

	return false;
}

BOOL func_489(ePedComponentType epctParam0) // Position - 0x23062 (143458)
{
	if (func_422(epctParam0, true) || func_491(epctParam0) || func_235(epctParam0, false) || func_490(epctParam0))
		return true;

	return false;
}

BOOL func_490(ePedComponentType epctParam0) // Position - 0x2309E (143518)
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return false;

	return IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_876, 2);
}

BOOL func_491(ePedComponentType epctParam0) // Position - 0x230C6 (143558)
{
	ePedComponentType type;

	type = epctParam0;

	if (type != PV_COMP_INVALID)
		return Global_1888882[type /*611*/] != PV_COMP_INVALID;

	return false;
}

void func_492(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x230E7 (143591)
{
	int i;
	int j;
	int k;
	var unk;
	var unk5;
	Vector3 vector;
	Vector3 vector2;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		uParam3->[i /*4*/] = { unk };
	}

	for (i = 0; i < *uParam4; i = i + 1)
	{
		uParam4->[i /*10*/] = { unk5 };
	}

	i = 0;
	j = 0;

	for (j = 0; j < Global_1573885; j = j + 1)
	{
		for (i = 0; i < *uParam3; i = i + 1)
		{
			if (!IS_BIT_SET(Global_4547937[j /*26*/].f_12, 11))
			{
				if (BUILTIN::VMAG(uParam3->[i /*4*/]) == 0f || BUILTIN::VDIST(Global_4547937[j /*26*/].f_3, vParam0) < BUILTIN::VDIST(uParam3->[i /*4*/], vParam0))
				{
					unk = { Global_4547937[j /*26*/].f_3 };
					unk.f_3 = Global_4547937[j /*26*/].f_6.f_2;
					func_494(&unk, uParam3, i);
					i = *uParam3;
				}
			}
		}
	}

	i = 0;
	j = 0;

	for (j = 0; j < 19; j = j + 1)
	{
		for (i = 0; i < *uParam3; i = i + 1)
		{
			if (BUILTIN::VMAG(uParam3->[i /*4*/]) == 0f || BUILTIN::VDIST(Global_262145.f_6218[j /*3*/], vParam0) < BUILTIN::VDIST(uParam3->[i /*4*/], vParam0))
			{
				unk = { Global_262145.f_6218[j /*3*/] };
				unk.f_3 = 3f;
				func_494(&unk, uParam3, i);
				i = *uParam3;
			}
		}
	}

	i = 0;
	j = 0;
	k = 0;

	for (j = 0; j < 24; j = j + 1)
	{
		for (k = 0; k < 6; k = k + 1)
		{
			for (i = 0; i < *uParam3; i = i + 1)
			{
				if (BUILTIN::VMAG(uParam3->[i /*4*/]) == 0f || BUILTIN::VDIST(Global_262145.f_6276[j /*19*/][k /*3*/], vParam0) < BUILTIN::VDIST(uParam3->[i /*4*/], vParam0))
				{
					unk = { Global_262145.f_6276[j /*19*/][k /*3*/] };
					unk.f_3 = 3f;
					func_494(&unk, uParam3, i);
					i = *uParam3;
				}
			}
		}
	}

	i = 0;
	j = 0;

	for (j = 0; j < Global_1573850; j = j + 1)
	{
		for (i = 0; i < *uParam4; i = i + 1)
		{
			vector = { (Global_1573169[j /*8*/].f_1 + Global_1573169[j /*8*/].f_4) * { 0.5f, 0.5f, 0.5f } };
			vector2 = { (uParam4->[i /*10*/] + uParam4->[i /*10*/].f_3) * { 0.5f, 0.5f, 0.5f } };
		
			if (BUILTIN::VMAG(uParam4->[i /*10*/]) == 0f || BUILTIN::VDIST(vector, vParam0) < BUILTIN::VDIST(vector2, vParam0))
			{
				unk5 = { Global_1573169[j /*8*/].f_1 };
				unk5.f_3 = { Global_1573169[j /*8*/].f_4 };
				unk5.f_6 = Global_1573169[j /*8*/].f_7;
				unk5.f_7 = { Global_4547613[j /*3*/] };
				func_493(&unk5, uParam4, i);
				i = *uParam4;
			}
		}
	}

	return;
}

void func_493(var uParam0, var uParam1, int iParam2) // Position - 0x23407 (144391)
{
	Global_2643438 = { uParam1->[iParam2 /*10*/] };
	uParam1->[iParam2 /*10*/] = { *uParam0 };

	if (iParam2 + 1 < *uParam1)
		func_493(&Global_2643438, uParam1, iParam2 + 1);

	return;
}

void func_494(var uParam0, var uParam1, int iParam2) // Position - 0x23445 (144453)
{
	Global_2643434 = { uParam1->[iParam2 /*4*/] };
	uParam1->[iParam2 /*4*/] = { *uParam0 };

	if (iParam2 + 1 < *uParam1)
		func_494(&Global_2643434, uParam1, iParam2 + 1);

	return;
}

void func_495(var uParam0, var uParam1) // Position - 0x2347F (144511)
{
	int i;
	float dx;
	float headingFromVector2d;

	if (Global_2635523.f_2563 > 0)
	{
		for (i = 0; i < Global_2635523.f_2563; i = i + 1)
		{
			if (func_496(Global_2635523.f_2564[i /*4*/], uParam0))
			{
				headingFromVector2d = Global_2635523.f_2564[i /*4*/].f_3;
			
				if (BUILTIN::VMAG(*uParam1) > 0.01f)
				{
					dx = { *uParam1 - Global_2635523.f_2564[i /*4*/] };
					headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
				}
			
				func_438(Global_2635523.f_2564[i /*4*/], headingFromVector2d, uParam0, uParam1, false, uParam0->f_28);
				Global_2635523.f_2792 = Global_2635523.f_2792 + 1;
			}
		}
	}

	if (uParam0->f_5 && Global_2635523.f_3199)
		func_432(&Global_2635523.f_2792.f_6[0 /*10*/], &Global_2635523.f_2792.f_6[1 /*10*/], &Global_2635523.f_2792.f_6[2 /*10*/]);

	return;
}

BOOL func_496(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2356F (144751)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_394(uParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
	
		case 1:
		case 2:
			return func_394(uParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
	
		default:
		
	}

	return false;
}

void func_497(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x235CC (144844)
{
	float num;

	func_427(&fParam0, &fParam3);
	num = fParam3 - fParam0;
	*uParam6 = fParam0 + (num * 0.5f);
	uParam6->f_1 = fParam0.f_1;
	uParam6->f_2 = fParam0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = fParam3.f_1;
	uParam7->f_2 = fParam3.f_2;
	*uParam8 = num * 0.5f;
	return;
}

BOOL func_498() // Position - 0x23622 (144930)
{
	return Global_1573131.f_4;
}

void func_499(float fParam0, float fParam1) // Position - 0x23630 (144944)
{
	func_537();
	func_529(fParam0, fParam1);
	return;
}

BOOL func_500(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8) // Position - 0x23644 (144964)
{
	if (bParam7 && bParam8)
	{
		vParam0.f_2 = 0f;
		vParam3.f_2 = 0f;
		return BUILTIN::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (bParam7)
	{
		if (vParam0.f_2 > vParam3.f_2)
			vParam0.f_2 = vParam3.f_2;
	
		return BUILTIN::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}
	else if (bParam8)
	{
		if (vParam0.f_2 < vParam3.f_2)
			vParam0.f_2 = vParam3.f_2;
	
		return BUILTIN::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
	}

	return BUILTIN::VDIST(vParam0, vParam3) < fParam6 + 0.01f;
}

void func_501(var uParam0, var uParam1, var uParam2) // Position - 0x236F7 (145143)
{
	int i;

	i = 0;

	if (Global_2635523.f_2055 > 0)
	{
		for (i = 0; func_523(uParam0, uParam1, uParam2) == 0 && i < 2; i = i + 1)
		{
		}
	
		if (i == 2)
			uParam2->f_33 = 0;
		else
			return;
	}

	for (i = 0; func_502(uParam0, uParam1, uParam2) == 0 && i < 6; i = i + 1)
	{
	}

	return;
}

int func_502(var uParam0, var uParam1, var uParam2) // Position - 0x23766 (145254)
{
	int num;
	float outPosition;
	float outPosition2;
	int nodeFlags;
	var density;
	int flags;
	int nthClosestVehicleNodeIdWithHeading;
	int outHeading;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num2;
	float num3;
	int num4;
	BOOL i;
	int num5;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float num6;
	BOOL flag8;
	int num7;
	float num8;
	int randomIntInRange;
	var unk3;
	float num9;
	var unk6;
	float num10;
	BOOL flag9;

	num = 0;

	if (!(BUILTIN::VMAG(uParam2->f_35) > 0f))
		uParam2->f_35 = { *uParam0 };

	if (uParam2->f_15)
	{
		if (func_411(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}

	if (uParam2->f_51)
		uParam2->f_6 = 9999.9f;

	if (uParam2->f_48)
		func_522(uParam0, true);

	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}

	nodeFlags = 0;
	flag = true;

	if (uParam2->f_11)
	{
		nodeFlags = nodeFlags + 2;
		nodeFlags = nodeFlags + 1;
		flag = false;
	}
	else if (uParam2->f_10 == 0 || uParam2->f_33 > 0 && uParam2->f_16)
	{
		nodeFlags = nodeFlags + 1;
		flag = false;
	}

	nodeFlags = nodeFlags + 4;
	num2 = 3f;
	num3 = 5f;

	switch (uParam2->f_33)
	{
		case 0:
			num2 = 3f;
			num3 = 5f;
			break;
	
		case 1:
			num2 = 2.75f;
			num3 = 7.5f;
			break;
	
		default:
			num2 = 2.5f;
			num3 = 10f;
			break;
	}

	num4 = 0;
	Global_2643448.f_162 = 0;
	Global_2643448.f_163 = 0;
	Global_2643448.f_164 = -99;
	Global_2643448.f_165 = { 0f, 0f, 0f };

	for (i = false; i < 40; i = i + 1)
	{
		Global_2643448[i /*3*/] = { 0f, 0f, 0f };
		Global_2643448.f_121[i] = 0f;
	}

	num5 = 1;

	if (func_408(uParam2->f_34) != 0)
	{
		num5 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}

	while (true)
	{
		nthClosestVehicleNodeIdWithHeading = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, num * num5, &outPosition2, &outHeading, nodeFlags, num2, num3);
	
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(nthClosestVehicleNodeIdWithHeading))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeIdWithHeading, &outPosition);
			flag3 = false;
		
			if (Global_2643448.f_164 == nthClosestVehicleNodeIdWithHeading)
				flag3 = true;
		
			Global_2643448.f_165 = { outPosition };
		
			if (uParam2->f_10 || uParam2->f_33 > 0 || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeIdWithHeading) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeIdWithHeading))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(outPosition, &density, &flags);
			
				if (BUILTIN::VDIST(outPosition, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_473(&outPosition, false))
					{
						if (uParam2->f_13 || flags & 64 == 0 || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || flags & 16 == 0)
							{
								if (flags & 128 == 0 && flags & 256 == 0 && flags & 512 == 0)
								{
									if (!func_521(outPosition))
									{
										outPosition = { func_517(outPosition, &outPosition2, outHeading, uParam2->f_9, *uParam2, flag, uParam2->f_11, uParam2->f_34, &flag2, flag3, true, uParam2->f_51, uParam2->f_60) };
									
										if (BUILTIN::VMAG(outPosition) > 0f)
										{
											if (!func_402(outPosition, 5f))
											{
												if (outPosition.f_2 >= uParam2->f_35.f_2 - uParam2->f_7 || uParam2->f_33 >= 2)
												{
													if (outPosition.f_2 <= uParam2->f_35.f_2 + uParam2->f_6 || uParam2->f_33 >= 2)
													{
														if (func_516(outPosition, uParam2))
														{
															if (uParam2->f_48 && !func_522(&outPosition, false) || uParam2->f_48 == 0)
															{
																flag4 = true;
															
																if (!flag3)
																{
																	if (flag2)
																	{
																		num = num + -1;
																		flag4 = false;
																	}
																}
															
																if (BUILTIN::VMAG(outPosition) > 0f)
																{
																	if (uParam2->f_5 > 0f && BUILTIN::VDIST(outPosition, outPosition.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <= 0f || uParam2->f_33 >= 2)
																	{
																		if (uParam2->f_12 && !func_512(outPosition, outPosition2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_411(uParam2->f_35, &outPosition, &(uParam2->f_38), &(uParam2->f_45), false, true))
																			{
																				if (uParam2->f_8)
																				{
																					flag5 = uParam2->f_31;
																					flag6 = true;
																					flag7 = true;
																					num6 = uParam2->f_49;
																				
																					if (!uParam2->f_55)
																					{
																						flag5 = false;
																						flag6 = false;
																						flag7 = false;
																						num6 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						flag5 = false;
																						flag6 = false;
																						flag7 = false;
																					
																						if (uParam2->f_33 == 1)
																							num6 = num6 * 0.375f;
																					}
																					else
																					{
																						flag6 = true;
																						flag7 = true;
																					
																						if (uParam2->f_28)
																							if (uParam2->f_33 == 1)
																								num6 = num6 * 0.375f;
																					}
																				
																					flag8 = false;
																				
																					if (!func_511(outPosition, outPosition2, uParam2->f_34))
																						if (uParam2->f_3 > 7f)
																							if (func_530(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false))
																								flag8 = true;
																						else if (func_530(outPosition, 6f, 1f, 1f, 5f, flag5, flag6, flag7, num6, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_509(outPosition, outPosition2, uParam2->f_34, true, true, false, false, 0, false))
																							flag8 = true;
																				
																					if (flag8 || uParam2->f_33 >= 2)
																					{
																						if (uParam2->f_29 || uParam2->f_30 || uParam2->f_52 || uParam2->f_33 >= 2)
																						{
																							num8 = 0f;
																						
																							if (uParam2->f_52)
																								num7 = func_508(outPosition, uParam2->f_54, &num8);
																						
																							if (!uParam2->f_52 || uParam2->f_52 && num7 <= uParam2->f_53)
																							{
																								if (uParam2->f_52)
																								{
																									if (num7 < uParam2->f_53)
																									{
																										for (i = false; i < Global_2643448.f_162; i = i + 1)
																										{
																											Global_2643448[i /*3*/] = { 0f, 0f, 0f };
																											Global_2643448.f_121[i] = 0f;
																										}
																									
																										Global_2643448.f_162 = 0;
																										uParam2->f_53 = num7;
																									}
																								}
																							
																								if (uParam2->f_30)
																								{
																									if (Global_2643448.f_162 == false)
																									{
																										Global_2643448[0 /*3*/] = { outPosition };
																										Global_2643448.f_121[0] = outPosition2;
																									}
																									else
																									{
																										for (i = false; i < Global_2643448.f_162 + 1; i = i + 1)
																										{
																											if (i < 40)
																											{
																												if (BUILTIN::VDIST2(outPosition, uParam2->f_35) < BUILTIN::VDIST2(Global_2643448[i /*3*/], uParam2->f_35))
																												{
																													func_507(outPosition, outPosition2, i);
																													i = Global_2643448.f_162 + 1;
																												}
																											}
																										}
																									}
																								
																									Global_2643448.f_162 = Global_2643448.f_162 + 1;
																								
																									if (Global_2643448.f_162 >= 5)
																										if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																											num = 100;
																										else if (Global_2643448.f_162 == 40)
																											num = 100;
																								}
																								else
																								{
																									Global_2643448[Global_2643448.f_162 /*3*/] = { outPosition };
																									Global_2643448.f_121[Global_2643448.f_162] = outPosition2;
																									Global_2643448.f_162 = Global_2643448.f_162 + 1;
																								
																									if (func_516(outPosition, uParam2))
																										Global_2643448.f_163 = Global_2643448.f_163 + 1;
																								
																									if (Global_2643448.f_162 >= 10)
																										if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																											num = 100;
																										else if (Global_2643448.f_162 == 40)
																											num = 100;
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { outPosition };
																							*uParam1 = outPosition2;
																							return 1;
																						}
																					}
																					else if (flag4)
																					{
																						num = num + 1;
																					}
																				}
																				else
																				{
																					*uParam0 = { outPosition };
																					*uParam1 = outPosition2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			num4 = num4 + 1;
																		}
																	}
																	else
																	{
																		num = 100;
																	}
																}
															}
															else
															{
																num = num + 1;
															}
														}
														else if (!uParam2->f_32)
														{
															num = 100;
														}
													}
													else
													{
														num = num + 1;
													}
												}
												else
												{
													num = num + 1;
												}
											}
										}
									}
									else
									{
										num = num + 1;
									}
								}
							}
							else
							{
								num = num + 1;
							}
						}
						else
						{
							num = num + 1;
						}
					}
					else
					{
						num4 = num4 + 1;
					}
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		
			num = num + 1;
		
			if (num >= 40 + num4 || num >= 100)
			{
				if (Global_2643448.f_162 > false && uParam2->f_29 || uParam2->f_30 || uParam2->f_33 >= 2)
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643448[0 /*3*/] };
						*uParam1 = Global_2643448.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643448.f_163 > false && !(Global_2643448.f_163 == Global_2643448.f_162))
							func_505(0, uParam2);
					
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643448.f_162);
					
						if (uParam2->f_18 && uParam2->f_30)
							randomIntInRange = 0;
					
						unk3 = { Global_2643448[0 /*3*/] };
						num9 = Global_2643448.f_121[0];
						Global_2643448[0 /*3*/] = { Global_2643448[randomIntInRange /*3*/] };
						Global_2643448.f_121[0] = Global_2643448.f_121[randomIntInRange];
						Global_2643448[randomIntInRange /*3*/] = { unk3 };
						Global_2643448.f_121[randomIntInRange] = num9;
						*uParam0 = { Global_2643448[0 /*3*/] };
						*uParam1 = Global_2643448.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33 = uParam2->f_33 + 1;
				
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_504(num4, *uParam0, &num, &outPosition, &outPosition2, uParam2, flag, outHeading, nodeFlags, num2, num3, flag2);
						unk6 = { outPosition };
						num10 = outPosition2;
					
						if (!uParam2->f_50)
							flag9 = true;
						else
							flag9 = false;
					
						if (func_411(uParam2->f_35, &unk6, &(uParam2->f_38), &(uParam2->f_45), flag9, true) || func_522(&unk6, flag9))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { unk6 };
								*uParam1 = num10;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { unk6 };
								*uParam1 = num10;
								return 1;
							}
						}
						else
						{
							*uParam0 = { unk6 };
							*uParam1 = num10;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33 = uParam2->f_33 + 1;
		
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_503(&Global_1574205, uParam0, uParam1, *uParam0);
			
				if (uParam2->f_11)
					uParam2->f_27 = 1;
			
				return 1;
			}
		}
	
		Global_2643448.f_164 = nthClosestVehicleNodeIdWithHeading;
	}

	return 0;
}

void func_503(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x24196 (147862)
{
	float num;
	float num2;
	int i;
	int num3;

	num = 1E+09f;
	num3 = -1;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		num2 = BUILTIN::VDIST(uParam0->[i /*4*/], vParam3);
	
		if (num2 < num)
		{
			if (!func_479(uParam0->[i /*4*/], 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				num = num2;
				num3 = i;
			}
		}
	}

	if (!(num3 == -1))
	{
		*uParam1 = { uParam0->[num3 /*4*/] };
		*uParam2 = uParam0->[num3 /*4*/].f_3;
	}

	return;
}

void func_504(int iParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, Vector3* pvParam5, float* pfParam6, var uParam7, BOOL bParam8, int iParam9, int iParam10, float fParam11, float fParam12, BOOL bParam13) // Position - 0x2421A (147994)
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		*uParam4 = MISC::GET_RANDOM_INT_IN_RANGE(1 + iParam0, 40 + iParam0);
	
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *uParam4, pvParam5, pfParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (BUILTIN::VMAG(*pvParam5) > 0f)
			{
				*pvParam5 = { func_517(*pvParam5, pfParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, false, false, uParam7->f_51, uParam7->f_60) };
			
				if (!func_521(*pvParam5))
				{
					i = 999;
					return;
				}
			}
		}
	}

	return;
}

void func_505(int iParam0, var uParam1) // Position - 0x242B7 (148151)
{
	if (!func_516(Global_2643448[iParam0 /*3*/], uParam1))
	{
		Global_2643448.f_162 = Global_2643448.f_162 - 1;
		func_506(iParam0);
	
		if (Global_2643448.f_162 > Global_2643448.f_163)
			func_505(iParam0, uParam1);
	}
	else if (iParam0 < 39)
	{
		func_505(iParam0 + 1, uParam1);
	}

	return;
}

void func_506(int iParam0) // Position - 0x24312 (148242)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643448[iParam0 /*3*/] = { Global_2643448[iParam0 + 1 /*3*/] };
			Global_2643448.f_121[iParam0] = Global_2643448.f_121[iParam0 + 1];
		}
	
		iParam0 = iParam0 + 1;
	}

	return;
}

void func_507(var uParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x2435D (148317)
{
	Vector3 vector;
	float num;

	vector = { Global_2643448[bParam4 /*3*/] };
	num = Global_2643448.f_121[bParam4];
	Global_2643448[bParam4 /*3*/] = { uParam0 };
	Global_2643448.f_121[bParam4] = fParam3;

	if (bParam4 <= Global_2643448.f_162 && bParam4 < 39)
		if (BUILTIN::VMAG(vector) > 0f)
			func_507(vector, num, bParam4 + 1);

	return;
}

int func_508(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0x243CA (148426)
{
	ePedComponentType i;
	Vector3 vector;
	int num;
	ePedComponentType type;
	float num2;
	float num3;

	num2 = 99999.9f;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (func_445(type))
		{
			vector = { _GET_PLAYER_COORDS(type) };
			num3 = BUILTIN::VDIST(vParam0, vector);
		
			if (num3 < fParam3)
			{
				if (num3 < num2)
					num2 = num3;
			
				num = num + 1;
			}
		}
	}

	*uParam4 = num2;
	return num;
}

BOOL func_509(var uParam0, var uParam1, var uParam2, int iParam3, ePedComponentType epctParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, BOOL bParam10) // Position - 0x24432 (148530)
{
	ePedComponentType i;
	ePedComponentType type;
	float num;
	Vehicle vehiclePedIsIn;
	ePedComponentType entityModel;
	var entityCoords;
	float entityHeading;

	for (i = 0; i < 32; i = i + 1)
	{
		type = i;
	
		if (iParam9 == 1 && PLAYER::PLAYER_ID() != type || iParam9 == 0)
		{
			if (_NETWORK_IS_PLAYER_VALID(type, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), type))
				{
					if (!bParam8 || !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(type)) && func_441(type))
					{
						if (!bParam7 || bParam7 == true && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(type) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && bParam10 && bParam7 && func_446(type))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(type)))
							{
								num = 0.1f;
							
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(type), false))
								{
									vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(type), false);
								
									if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
									{
										entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
										entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, false) };
										entityHeading = ENTITY::GET_ENTITY_HEADING(vehiclePedIsIn);
									
										if (func_510(uParam0, iParam3, epctParam4, entityCoords, entityHeading, entityModel, 0))
											return true;
									}
									else
									{
										num = 5f;
									}
								}
							
								if (func_403(_GET_PLAYER_COORDS(type), uParam0, iParam3, epctParam4, num))
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

BOOL func_510(var uParam0, var uParam1, var uParam2, int iParam3, ePedComponentType epctParam4, var uParam5, var uParam6, var uParam7, float fParam8, ePedComponentType epctParam9, int iParam10) // Position - 0x245A5 (148901)
{
	if (func_403(uParam0, uParam5, fParam8, epctParam9, 1036831949))
		return true;

	func_404(uParam0, iParam3, epctParam4, &Global_1979485, &(Global_1979485.f_3), &(Global_1979485.f_6), 1036831949);
	func_404(uParam5, fParam8, epctParam9, &(Global_1979485.f_7), &(Global_1979485.f_10), &(Global_1979485.f_13), 1036831949);

	if (MISC::GET_POINT_AREA_OVERLAP(Global_1979485, Global_1979485.f_3, Global_1979485.f_6, Global_1979485.f_7, Global_1979485.f_10, Global_1979485.f_13))
		return true;

	return false;
}

BOOL func_511(Vector3 vParam0, var uParam1, var uParam2, int iParam3, Hash hParam4) // Position - 0x24643 (149059)
{
	int flags;
	Vehicle closestVehicle;
	ePedComponentType entityModel;
	var entityCoords;
	float entityHeading;

	flags = 1;
	flags = flags + 2;
	flags = flags + 4;
	flags = flags + 8;
	flags = flags + 16;
	flags = flags + 32;
	flags = flags + 64;
	flags = flags + 131076;
	closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);

	if (ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(closestVehicle);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(closestVehicle, false) };
		entityHeading = ENTITY::GET_ENTITY_HEADING(closestVehicle);
	
		if (func_510(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0))
			return true;
	}

	flags = flags + 4096;
	flags = flags + 8192;
	flags = flags + 16384;
	closestVehicle = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, flags);

	if (ENTITY::DOES_ENTITY_EXIST(closestVehicle) && !ENTITY::IS_ENTITY_DEAD(closestVehicle, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(closestVehicle);
		entityCoords = { ENTITY::GET_ENTITY_COORDS(closestVehicle, false) };
		entityHeading = ENTITY::GET_ENTITY_HEADING(closestVehicle);
	
		if (func_510(vParam0, iParam3, hParam4, entityCoords, entityHeading, entityModel, 0))
			return true;
	}

	return false;
}

BOOL func_512(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6, int iParam7) // Position - 0x2474F (149327)
{
	if (func_515(uParam0, iParam3, hParam4, epctParam5, iParam6) || func_513(uParam0, iParam3, hParam4, epctParam5, iParam7))
		return true;

	return false;
}

int func_513(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6) // Position - 0x24785 (149381)
{
	ePedComponentType i;
	int j;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(epctParam5 == i) || iParam6 == 1)
		{
			type = i;
		
			for (j = 0; j < 2; j = j + 1)
			{
				if (func_514(uParam0, hParam4, Global_2648932.f_461[i /*11*/][j /*5*/], Global_2648932.f_461[i /*11*/][j /*5*/].f_4))
					if (func_510(uParam0, iParam3, hParam4, Global_2648932.f_461[i /*11*/][j /*5*/], Global_2648932.f_461[i /*11*/][j /*5*/].f_3, Global_2648932.f_461[i /*11*/][j /*5*/].f_4, 0))
						if (_NETWORK_IS_PLAYER_VALID(type, false, true) && _NETWORK_IS_PLAYER_VALID(epctParam5, false, true))
							return 1;
						else
							return 1;
			}
		}
	}

	return 0;
}

BOOL func_514(Vector3 vParam0, var uParam1, var uParam2, Hash hParam3, Vector3 vParam4, var uParam5, var uParam6, ePedComponentType epctParam7) // Position - 0x2485F (149599)
{
	float num;
	float num2;
	float num3;

	num = func_410(hParam3, 1008981770);
	num2 = func_410(epctParam7, 1008981770);
	num3 = BUILTIN::VDIST(vParam0, vParam4);

	if (num3 < num + num2)
		return true;

	return false;
}

int func_515(var uParam0, var uParam1, var uParam2, int iParam3, Hash hParam4, ePedComponentType epctParam5, int iParam6) // Position - 0x2489F (149663)
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		if (!(epctParam5 == i) || iParam6 == 1)
		{
			type = i;
		
			if (_NETWORK_IS_PLAYER_VALID(type, false, true) && _NETWORK_IS_PLAYER_VALID(epctParam5, false, true))
				if (Global_2648932.f_261[i])
					if (func_403(Global_2648932.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949))
						return 1;
				else if (func_403(_GET_PLAYER_COORDS(type), uParam0, iParam3, hParam4, 1036831949))
					return 1;
			else if (Global_2648932.f_261[i])
				if (func_403(Global_2648932.f_131[i /*3*/], uParam0, iParam3, hParam4, 1036831949))
					return 1;
			else if (_NETWORK_IS_PLAYER_VALID(type, false, false))
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(type)))
					if (func_403(_GET_PLAYER_COORDS(type), uParam0, iParam3, hParam4, 1036831949))
						return 1;
		}
	}

	return 0;
}

BOOL func_516(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x249AE (149934)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_500(vParam0, uParam3->f_19, uParam3->f_25, false, false))
					return true;
				break;
		
			case 1:
				if (func_426(vParam0, uParam3->f_19, uParam3->f_22, false, false))
					return true;
				break;
		
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
					return true;
				break;
		}
	
		return false;
	}

	return true;
}

Vector3 func_517(Vector3 vParam0, var uParam1, var uParam2, float* pfParam3, int iParam4, BOOL bParam5, Vector3 vParam6, var uParam7, var uParam8, BOOL bParam9, BOOL bParam10, Hash hParam11, var uParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0x24A3F (150079)
{
	var offsetFromCoordAndHeadingInWorldCoords;
	var density;
	int flags;
	var unk3;
	int value;
	int value2;
	float num;
	float xOffset;
	BOOL flag;
	BOOL flag2;
	float num2;
	var outPosition;
	Vector3 vector;
	var unk10;

	if (bParam15)
	{
		if (BUILTIN::VMAG(vParam6) > 0f)
			if (!func_520(vParam0, *pfParam3, vParam6))
				*pfParam3 = *pfParam3 + 180f;
	
		return vParam0;
	}

	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &density, &flags);

	if (flags & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &unk3, &unk3, &value, &value2, &num, bParam9);
	
		if (value == value2)
			*uParam12 = 1;
	
		if (bParam14)
		{
			if (!(flags & 128 == 0))
				return 0f, 0f, 0f;
		
			if (!(flags & 256 == 0))
				return 0f, 0f, 0f;
		
			if (!(flags & 512 == 0))
				return 0f, 0f, 0f;
		
			if (value + value2 != iParam4)
				return 0f, 0f, 0f;
		
			if (VEHICLE::IS_THIS_MODEL_A_HELI(hParam11) && func_519(vParam0))
				return 0f, 0f, 0f;
		}
	
		if (bParam13 && *uParam12)
		{
			*pfParam3 = *pfParam3 + 180f;
		
			if (*pfParam3 > 360f)
				*pfParam3 = *pfParam3 + -360f;
		}
	
		if (*pfParam3 <= 90f || *pfParam3 > 270f)
			flag = true;
		else
			flag = false;
	
		flag2 = false;
	
		if (flag)
			if (value == 0)
				if (bParam14)
					return 0f, 0f, 0f;
			else if (iParam4 == value)
				flag2 = true;
		else if (value2 == 0)
			if (bParam14)
				return 0f, 0f, 0f;
		else if (iParam4 == value2)
			flag2 = true;
	
		if (num < 0f)
		{
			xOffset = 0f;
		}
		else
		{
			if (flag)
			{
				if (flag2)
					xOffset = 4.2f * BUILTIN::TO_FLOAT(value) * 0.5f;
				else
					xOffset = 4.2f * BUILTIN::TO_FLOAT(value);
			
				if (flag2)
					if (value > 2)
						xOffset = xOffset + ((float)value - 2 * 1f);
				else if (value > 1)
					xOffset = xOffset + ((float)value - 1 * 1f);
			}
			else
			{
				if (flag2)
					xOffset = 4.2f * BUILTIN::TO_FLOAT(value2) * 0.5f;
				else
					xOffset = 4.2f * BUILTIN::TO_FLOAT(value2);
			
				if (flag2)
					if (value2 > 2)
						xOffset = xOffset + ((float)value2 - 2 * 1f);
				else if (value2 > 1)
					xOffset = xOffset + ((float)value2 - 1 * 1f);
			}
		
			if (!(flags & 64 == 0))
				xOffset = xOffset + (0.95f * num);
		
			if (!(flags & 4 == 0) || !(flags & 8 == 0))
				xOffset = xOffset + -0.5f;
		
			if (!(flags & 32 == 0) && flags & 4 == 0 && flags & 8 == 0)
				xOffset = xOffset + -1f;
		
			if (!bParam5 || !(flags & 8 == 0))
				xOffset = xOffset + (4.2f * -0.5f);
		
			if (!(hParam11 == 0))
			{
				if (flags & 8 != 0)
					num2 = func_518(hParam11, 3.5f);
				else
					num2 = func_518(hParam11, 1.5f);
			
				if (num2 > 1.8f)
					xOffset = xOffset + ((num2 - 1.8f) * -0.5f);
			}
		}
	}

	if (BUILTIN::VMAG(vParam6) > 0f)
		if (!func_520(vParam0, *pfParam3, vParam6))
			if (bParam5 || bParam16 || flags & 1024 != 0 || vParam0.f_2 == 0f && bParam10)
				*pfParam3 = *pfParam3 + 180f;
			else if (bParam14)
				return 0f, 0f, 0f;

	if (xOffset < 0f)
		xOffset = 0f;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, *pfParam3, xOffset, 0f, 0f) };

	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(vParam0, *pfParam3, &outPosition))
		{
			vector = { outPosition - vParam0 };
		
			if (!(hParam11 == 0))
			{
				unk10 = { vector / F2V(BUILTIN::VMAG(vector)) };
			
				if (flags & 8 != 0)
					num2 = func_518(hParam11, 3.5f);
				else
					num2 = func_518(hParam11, 1.5f);
			
				unk10 = { unk10 * { num2 * 0.5f, num2 * 0.5f, num2 * 0.5f } };
				vector = { vector - unk10 };
				outPosition = { vParam0 + vector };
			}
		
			unk10 = { offsetFromCoordAndHeadingInWorldCoords - outPosition };
			offsetFromCoordAndHeadingInWorldCoords = { outPosition };
		}
	}

	return offsetFromCoordAndHeadingInWorldCoords;
}

float func_518(Hash hParam0, float fParam1) // Position - 0x24E8E (151182)
{
	var unk;
	float num;
	float num2;

	func_405(hParam0, &unk, &num, 1086324736, 1080033280, 1077936128);
	num2 = num - unk;

	if (num2 < fParam1)
		return fParam1;

	return num2;
}

BOOL func_519(float fParam0, var uParam1, var uParam2) // Position - 0x24EC5 (151237)
{
	float groundZ;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(fParam0, fParam0.f_1, fParam0.f_2 + 500f, &groundZ, false, false))
	{
		groundZ = groundZ - fParam0.f_2;
	
		if (groundZ > 6f)
			return true;
	}

	return false;
}

BOOL func_520(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6) // Position - 0x24EFD (151293)
{
	var unk;
	var unk4;

	unk = { 0f, 1f, 0f };
	func_391(&unk, 0f, 0f, iParam3);
	unk4 = { uParam4 - uParam0 };

	if (func_387(unk4, unk) >= 0f)
		return true;

	return false;
}

BOOL func_521(var uParam0, var uParam1, var uParam2) // Position - 0x24F39 (151353)
{
	int i;
	int num;

	num = func_401(uParam0);

	for (i = 0; i < Global_2643148[num]; i = i + 1)
	{
		if (func_400(uParam0, &Global_2642445[num /*78*/][i /*7*/]))
			return true;
	}

	for (i = 0; i < Global_2643148[8]; i = i + 1)
	{
		if (func_400(uParam0, &Global_2642445[8 /*78*/][i /*7*/]))
			return true;
	}

	return false;
}

BOOL func_522(var uParam0, BOOL bParam1) // Position - 0x24FB4 (151476)
{
	BOOL flag;

	flag = false;

	if (Global_2635523.f_26.f_18)
	{
		switch (Global_2635523.f_26.f_17)
		{
			case 0:
				if (func_500(*uParam0, Global_2635523.f_26.f_10, Global_2635523.f_26.f_16, false, false))
					flag = true;
				break;
		
			case 1:
				if (func_426(*uParam0, Global_2635523.f_26.f_10, Global_2635523.f_26.f_13, false, false))
					flag = true;
				break;
		
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635523.f_26.f_10, Global_2635523.f_26.f_13, Global_2635523.f_26.f_16, false, true))
					flag = true;
				break;
		}
	
		if (flag)
			if (bParam1)
				*uParam0 = { func_392(*uParam0, Global_2635523.f_26.f_10, Global_2635523.f_26.f_13, Global_2635523.f_26.f_16, Global_2635523.f_26.f_17, 1036831949, false) };
	}

	return flag;
}

int func_523(var uParam0, var uParam1, var uParam2) // Position - 0x250A6 (151718)
{
	int randomIntInRange;
	int i;
	int num;
	float x1;
	float num2;
	BOOL j;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	float num3;
	BOOL flag4;
	int num4;
	float num5;
	var unk3;
	float num6;

	if (Global_2635523.f_2055 > 0)
	{
		i = 0;
		num = 0;
	
		if (!(BUILTIN::VMAG(uParam2->f_35) > 0f))
			uParam2->f_35 = { *uParam0 };
	
		if (uParam2->f_15)
		{
			if (func_411(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), true, true))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
	
		if (uParam2->f_48)
		{
			if (func_522(uParam0, true))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
	
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	
		Global_2643448.f_162 = 0;
		Global_2643448.f_163 = 0;
	
		for (j = false; j < 40; j = j + 1)
		{
			Global_2643448[j /*3*/] = { 0f, 0f, 0f };
			Global_2643448.f_121[j] = 0f;
		}
	
		if (uParam2->f_30)
			func_526(*uParam0);
		else if (uParam2->f_29)
			func_525();
		else
			func_524();
	
		for (i = 0; i < Global_2635523.f_2055; i = i + 1)
		{
			num = Global_2635523.f_2461[i];
		
			if (num > -1 && num < 101)
			{
				x1 = { Global_2635523.f_2056[num /*4*/] };
				num2 = Global_2635523.f_2056[num /*4*/].f_3;
			
				if (BUILTIN::VMAG(x1) > 0f)
				{
					if (uParam2->f_57 && BUILTIN::VDIST(x1, uParam2->f_35) > uParam2->f_4 || uParam2->f_57 == 0)
					{
						if (uParam2->f_5 > 0f && BUILTIN::VDIST(x1, x1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5 || uParam2->f_5 <= 0f)
						{
							if (uParam2->f_12 && !func_512(x1, num2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_411(uParam2->f_35, &x1, &(uParam2->f_38), &(uParam2->f_45), false, true))
								{
									if (uParam2->f_8)
									{
										flag = uParam2->f_31;
										flag2 = true;
										flag3 = true;
										num3 = uParam2->f_49;
									
										if (!uParam2->f_55)
										{
											flag = false;
											flag2 = false;
											flag3 = false;
											num3 = 1f;
										}
										else if (uParam2->f_17)
										{
											flag = false;
											flag2 = false;
											flag3 = false;
										
											if (uParam2->f_33 == 1)
												num3 = num3 * 0.375f;
										}
										else
										{
											flag2 = true;
											flag3 = true;
										
											if (uParam2->f_28)
												if (uParam2->f_33 == 1)
													num3 = num3 * 0.375f;
										}
									
										flag4 = false;
									
										if (!func_511(x1, num2, uParam2->f_34))
											if (uParam2->f_3 > 7f)
												if (func_530(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, uParam2->f_3, false, 0, false, false))
													flag4 = true;
											else if (func_530(x1, 6f, 1f, 1f, 5f, flag, flag2, flag3, num3, uParam2->f_58, -1, true, 0f, false, 0, false, false) && !func_509(x1, num2, uParam2->f_34, true, true, false, false, uParam2->f_58, false))
												flag4 = true;
									
										if (flag4)
										{
											if (uParam2->f_29 || uParam2->f_30 || uParam2->f_52)
											{
												num5 = 0f;
											
												if (uParam2->f_52)
													num4 = func_508(x1, uParam2->f_54, &num5);
											
												if (!uParam2->f_52 || uParam2->f_52 && num4 <= uParam2->f_53)
												{
													if (uParam2->f_52)
													{
														if (num4 < uParam2->f_53)
														{
															for (j = false; j < Global_2643448.f_162; j = j + 1)
															{
																Global_2643448[j /*3*/] = { 0f, 0f, 0f };
																Global_2643448.f_121[j] = 0f;
															}
														
															Global_2643448.f_162 = 0;
															uParam2->f_53 = num4;
														}
													}
												
													if (uParam2->f_30)
													{
														if (Global_2643448.f_162 == false)
														{
															Global_2643448[0 /*3*/] = { x1 };
															Global_2643448.f_121[0] = num2;
														}
														else
														{
															for (j = false; j < Global_2643448.f_162 + 1; j = j + 1)
															{
																if (j < 40)
																{
																	if (BUILTIN::VDIST2(x1, uParam2->f_35) < BUILTIN::VDIST2(Global_2643448[j /*3*/], uParam2->f_35))
																	{
																		func_507(x1, num2, j);
																		j = Global_2643448.f_162 + 1;
																	}
																}
															}
														}
													
														Global_2643448.f_162 = Global_2643448.f_162 + 1;
													
														if (Global_2643448.f_162 >= 5)
															if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																i = Global_2635523.f_2055;
															else if (Global_2643448.f_162 == 40)
																i = Global_2635523.f_2055;
													}
													else
													{
														Global_2643448[Global_2643448.f_162 /*3*/] = { x1 };
														Global_2643448.f_121[Global_2643448.f_162] = num2;
														Global_2643448.f_162 = Global_2643448.f_162 + 1;
													
														if (Global_2643448.f_162 >= 10)
															if (uParam2->f_52 && uParam2->f_53 == 0 || uParam2->f_52 == 0)
																i = Global_2635523.f_2055;
															else if (Global_2643448.f_162 == 40)
																i = Global_2635523.f_2055;
													}
												}
											}
											else
											{
												*uParam0 = { x1 };
												*uParam1 = num2;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { x1 };
										*uParam1 = num2;
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (Global_2643448.f_162 > false)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643448[0 /*3*/] };
				*uParam1 = Global_2643448.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643448.f_163 > false && !(Global_2643448.f_163 == Global_2643448.f_162))
					func_505(0, uParam2);
			
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643448.f_162);
				unk3 = { Global_2643448[0 /*3*/] };
				num6 = Global_2643448.f_121[0];
				Global_2643448[0 /*3*/] = { Global_2643448[randomIntInRange /*3*/] };
				Global_2643448.f_121[0] = Global_2643448.f_121[randomIntInRange];
				Global_2643448[randomIntInRange /*3*/] = { unk3 };
				Global_2643448.f_121[randomIntInRange] = num6;
				*uParam0 = { Global_2643448[0 /*3*/] };
				*uParam1 = Global_2643448.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33 = uParam2->f_33 + 1;
		
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635523.f_2055 > 0)
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635523.f_2055);
				*uParam0 = { Global_2635523.f_2056[randomIntInRange /*4*/] };
				*uParam1 = Global_2635523.f_2056[randomIntInRange /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

	return 0;
}

void func_524() // Position - 0x25745 (153413)
{
	int i;

	for (i = 0; i < Global_2635523.f_2055; i = i + 1)
	{
		Global_2635523.f_2461[i] = i;
	}

	return;
}

void func_525() // Position - 0x25772 (153458)
{
	int i;
	int randomIntInRange;
	int randomIntInRange2;
	int num;

	for (i = 0; i < Global_2635523.f_2055; i = i + 1)
	{
		Global_2635523.f_2461[i] = i;
	}

	for (i = 0; i < Global_2635523.f_2055; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635523.f_2055);
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635523.f_2055);
		num = Global_2635523.f_2461[randomIntInRange];
		Global_2635523.f_2461[randomIntInRange] = Global_2635523.f_2461[randomIntInRange2];
		Global_2635523.f_2461[randomIntInRange2] = num;
	}

	return;
}

void func_526(var uParam0, var uParam1, var uParam2) // Position - 0x25803 (153603)
{
	float num;
	int num2;
	int num3;

	num = -1f;

	while (num3 < Global_2635523.f_2055)
	{
		num2 = func_527(uParam0, num, &num);
		Global_2635523.f_2461[num3] = num2;
		num3 = num3 + 1;
	}

	return;
}

int func_527(Vector3 vParam0, var uParam1, var uParam2, float fParam3, var uParam4) // Position - 0x2583E (153662)
{
	int num;
	float num2;
	float num3;
	int i;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < Global_2635523.f_2055; i = i + 1)
	{
		num3 = BUILTIN::VDIST2(vParam0, Global_2635523.f_2056[i /*4*/]);
	
		if (num3 < num2 && num3 > fParam3)
		{
			num = i;
			num2 = num3;
		}
	}

	*uParam4 = num2;
	return num;
}

BOOL func_528(int iParam0) // Position - 0x258A0 (153760)
{
	return iParam0 == 50;
}

void func_529(float fParam0, float fParam1) // Position - 0x258AD (153773)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2635523.f_2775 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635523.f_2773 = 1;
	Global_2635523.f_2776 = NETWORK::GET_NETWORK_TIME();
	return;
}

BOOL func_530(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, int iParam10, BOOL bParam11, int iParam12, BOOL bParam13, int iParam14, BOOL bParam15, int iParam16, BOOL bParam17, BOOL bParam18) // Position - 0x258E0 (153824)
{
	Global_2635523.f_2 = 0;

	if (fParam3 > 0f)
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(fParam0, fParam3))
			return false;

	if (fParam4 > 0f)
		if (PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam0.f_1, fParam0.f_2 + 1f, fParam4) || PED::IS_ANY_PED_NEAR_POINT(fParam0, fParam4))
			return false;

	if (fParam5 > 0f)
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(fParam0, fParam5, bParam18))
			return false;

	Global_2635523.f_2 = Global_2635523.f_2 + 1;

	if (bParam13)
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(fParam0, 2.5f) > 0)
			return false;

	Global_2635523.f_2 = Global_2635523.f_2 + 1;

	if (iParam14 > 0f)
		if (func_487(fParam0, iParam14, true, true, bParam15, bParam17, bParam11, bParam15, false))
			return false;

	Global_2635523.f_2 = Global_2635523.f_2 + 1;

	if (bParam8)
		if (fParam6 > 0f)
			if (func_474(fParam0, fParam6, bParam7, bParam9, iParam10, bParam11, iParam12, iParam16, bParam17))
				return false;

	Global_2635523.f_2 = Global_2635523.f_2 + 1;
	return true;
}

void func_531() // Position - 0x259F2 (154098)
{
	func_536();
	func_535();
	func_534();
	func_533();
	func_532();
	return;
}

void func_532() // Position - 0x25A0E (154126)
{
	var unk;
	int i;

	unk.f_2 = 1176256410;

	for (i = 0; i < 128; i = i + 1)
	{
		Global_2638779[i /*10*/] = { unk };
	}

	return;
}

void func_533() // Position - 0x25A46 (154182)
{
	var unk;
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_2635523.f_2792.f_90[i /*10*/] = { unk };
	}

	return;
}

void func_534() // Position - 0x25A75 (154229)
{
	var unk;
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		Global_2635523.f_2792.f_57[i /*4*/] = { unk };
	}

	return;
}

void func_535() // Position - 0x25AA3 (154275)
{
	var unk;
	int i;

	unk.f_2 = 1176256410;

	for (i = 0; i < 5; i = i + 1)
	{
		Global_2635523.f_2792.f_6[i /*10*/] = { unk };
	}

	return;
}

void func_536() // Position - 0x25ADF (154335)
{
	var unk;

	unk.f_3 = -1;
	Global_2635523.f_2792 = { unk };
	return;
}

void func_537() // Position - 0x25AFD (154365)
{
	if (Global_2635523.f_2773)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635523.f_2775)
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		else
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
	
		Global_2635523.f_2773 = 0;
	}

	return;
}

int func_538(BOOL bParam0) // Position - 0x25B30 (154416)
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return 10000;

	if (bParam0)
		return 5000;

	return 1000;
}

BOOL func_539() // Position - 0x25B53 (154451)
{
	Vector3 outPosition;

	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(iLocal_100.f_7 - 25f, iLocal_100.f_7.f_1 - 25f, iLocal_100.f_7 + 25f, iLocal_100.f_7.f_1 + 25f);

	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(iLocal_100.f_7 - 25f, iLocal_100.f_7.f_1 - 25f, iLocal_100.f_7 + 25f, iLocal_100.f_7.f_1 + 25f))
	{
		PATHFIND::GET_CLOSEST_VEHICLE_NODE(iLocal_100.f_7, &outPosition, 1, 1077936128, 0);
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_7, outPosition, false) <= 25f)
		{
			iLocal_100.f_7 = { outPosition };
			return true;
		}
	}

	return false;
}

BOOL func_540(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x25BFA (154618)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1836.619f, -1262.5216f, -42.18043f, -1664.8682f, -1060.219f, 119.50067f, 150f, false, true))
		return true;

	return false;
}

void func_541(const char* sParam0) // Position - 0x25C37 (154679)
{
	if (Global_24148.f_5322 >= 3 || Global_24148.f_5319 >= 4)
		return;

	Global_24148.f_5253[Global_24148.f_5319] = 5;
	Global_24148.f_5319 = Global_24148.f_5319 + 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5270[Global_24148.f_5322 /*16*/], sParam0, 64);
	Global_24148.f_5322 = Global_24148.f_5322 + 1;
	return;
}

void func_542(char* sParam0, int iParam1, int iParam2) // Position - 0x25C98 (154776)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_5241), sParam0, 24);
	Global_24148.f_5319 = 0;
	Global_24148.f_5320 = 0;
	Global_24148.f_5321 = 0;
	Global_24148.f_5322 = 0;
	Global_24148.f_5323 = iParam1;
	Global_24148.f_5324 = MISC::GET_GAME_TIMER();
	Global_24148.f_5325 = iParam2;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24148.f_5253[i] = 0;
	}

	return;
}

void func_543(BOOL bParam0) // Position - 0x25CFD (154877)
{
	var r;
	var g;
	var b;
	var a;
	BOOL flag;
	BOOL flag2;

	func_556(false, false);

	if (bParam0)
		func_555("R2P_MENU_S" /*IMPROMPTU RACE OPTIONS*/);
	else
		func_555("R2P_MENU" /*IMPROMPTU RACE*/);

	func_554(1, 1, 0, 0, 0);
	func_553(1, 2, 1, 1, 1);
	HUD::GET_HUD_COLOUR(HUD_COLOUR_FREEMODE, &r, &g, &b, &a);
	func_552(r, g, b, a, 1);
	flag = false;
	flag2 = false;
	iLocal_338 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_DEST" /*Destination*/, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_10), "R2P_MENU_DE" /*~a~ - ~1~m*/, 16);

	if (iLocal_100.f_15[2] <= 0 || iLocal_100.f_15[2] > iLocal_98)
	{
		iLocal_100.f_15[2] = 0;
	
		if (!bParam0)
		{
			TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_DE0" /*Waypoint*/, 16);
		}
		else if (HUD::IS_WAYPOINT_ACTIVE() || IS_BIT_SET(iLocal_100.f_1, 10))
		{
			if (func_16(func_17(), 0f, 0f, -2000f, false) || func_16(func_17(), 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f)
			{
				iLocal_338 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_10), "R2P_MENU_DE0S" /*Waypoint - Set on Map*/, 16);
			}
			else
			{
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_DE0" /*Waypoint*/, 16);
			}
		}
		else
		{
			iLocal_338 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_10), "R2P_MENU_DE0S" /*Waypoint - Set on Map*/, 16);
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_DE" /*~a~ - ~1~m*/, 16);
		TEXT_LABEL_APPEND_INT(&(uLocal_307.f_6), iLocal_100.f_15[2], 16);
		TEXT_LABEL_APPEND_STRING(&(uLocal_307.f_6), "F", 16);
	
		if (iLocal_100.f_15[2] == 2)
			if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_HEAD || IS_BIT_SET(Global_2740191.f_1864, 24))
				TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_DE99F" /*Objective*/, 16);
	}

	uLocal_275 = { uLocal_307.f_6 };

	if (bParam0)
	{
		if (iLocal_338 == 0)
			flag = func_599(&uLocal_328, iLocal_330, false);
	
		bLocal_264 = flag;
		func_344(PV_COMP_HEAD, "R2P_MENU_IN" /*Invite All Players in Range*/, 0, flag, false, false, false);
		func_344(PV_COMP_BERD, "R2P_MENU_IN2" /*List of Players in Range*/, 0, flag, false, false, false);
	}

	flag = bParam0;

	if (IS_BIT_SET(iLocal_100.f_1, 11))
		flag = false;

	flag2 = flag;
	func_344(PV_COMP_HAIR, "R2P_MENU_DEST" /*Destination*/, 0, true, false, false, false);

	if (MISC::ARE_STRINGS_EQUAL(&(uLocal_307.f_10), "R2P_MENU_DE0S" /*Waypoint - Set on Map*/))
	{
		func_344(PV_COMP_HAIR, &(uLocal_307.f_10), 0, flag, false, false, false);
	}
	else
	{
		func_344(PV_COMP_HAIR, &(uLocal_307.f_10), 2, flag, false, false, false);
		func_551(&(uLocal_307.f_6), false);
		func_547(func_550(), false);
	}

	func_344(PV_COMP_UPPR, "R2P_MENU_SCT" /*Cash Pot*/, 0, true, false, false, false);
	TEXT_LABEL_ASSIGN_STRING(&(uLocal_307.f_6), "R2P_MENU_SC" /*$~1~*/, 16);
	func_344(PV_COMP_UPPR, &(uLocal_307.f_6), 1, false, false, false, false);

	if (iLocal_100.f_3 >= 50)
		func_547(iLocal_100.f_3, false);
	else
		func_547(50, false);

	if (bParam0)
	{
		flag = true;
	
		if (iLocal_100.f_14 >= 2)
			if (iLocal_100.f_15[2] <= 0 || iLocal_100.f_15[2] > iLocal_98 && !HUD::IS_WAYPOINT_ACTIVE() && !IS_BIT_SET(iLocal_100.f_1, 10))
				flag = false;
			else if (func_16(func_17(), 0f, 0f, -2000f, false) || func_16(func_17(), 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f)
				flag = false;
		else
			flag = false;
	
		func_344(PV_COMP_LOWR, "R2P_MENU_STT" /*Start*/, 0, flag, false, false, false);
	}

	if (bParam0)
	{
		if (uLocal_307.f_14 == 4)
			if (iLocal_100.f_14 >= 2)
				if (!IS_BIT_SET(iLocal_100.f_1, 7) || IS_BIT_SET(iLocal_100.f_1, 9))
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
						func_546(INPUT_CURSOR_ACCEPT, "R2P_MENU_LAU" /*Start*/, -1, false);
					else
						func_545(INPUT_CELLPHONE_SELECT, "R2P_MENU_LAU" /*Start*/, -1);
		else if (uLocal_307.f_14 == 0)
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				func_546(INPUT_CURSOR_ACCEPT, "R2P_CTRL_INV" /*Invite*/, -1, false);
			else
				func_545(INPUT_CELLPHONE_SELECT, "R2P_CTRL_INV" /*Invite*/, -1);
		else if (uLocal_307.f_14 == 1)
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				func_546(INPUT_CURSOR_ACCEPT, "R2P_CTRL_SEL" /*Select*/, -1, false);
			else
				func_545(INPUT_CELLPHONE_SELECT, "R2P_CTRL_SEL" /*Select*/, -1);
		else if (uLocal_307.f_14 == 2)
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				func_546(INPUT_CURSOR_ACCEPT, "R2P_CTRL_NXT" /*Next*/, -1, false);
			else
				func_545(INPUT_CELLPHONE_SELECT, "R2P_CTRL_NXT" /*Next*/, -1);
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			func_546(INPUT_CURSOR_CANCEL, "R2P_MENU_EXI" /*Exit*/, -1, false);
			func_545(INPUT_FRONTEND_PAUSE, "SPEC_PAUSE" /*Pause*/, -1);
		}
		else
		{
			func_545(INPUT_CELLPHONE_CANCEL, "R2P_MENU_EXI" /*Exit*/, -1);
		}
	
		if (uLocal_307.f_14 == 2 && flag2 == true)
			func_544(false, true, false, false, false);
		else
			func_544(false, false, false, false, false);
	}
	else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		func_546(INPUT_CURSOR_CANCEL, "R2P_MENU_EXI" /*Exit*/, -1, false);
	}
	else
	{
		func_545(INPUT_CELLPHONE_CANCEL, "R2P_MENU_EXI" /*Exit*/, -1);
	}

	if (bParam0)
		func_582(uLocal_307.f_14, true, 1);
	else
		func_582(-1, true, 1);

	func_542("", 0, 0);
	return;
}

void func_544(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x26194 (156052)
{
	Global_24148.f_5678[0] = bParam0;
	Global_24148.f_5678[1] = bParam1;
	Global_24148.f_5678[2] = bParam2;
	Global_24148.f_5678[3] = bParam3;
	Global_24148.f_5678[4] = bParam4;
	return;
}

void func_545(eControlAction ecaParam0, char* sParam1, int iParam2) // Position - 0x261D3 (156115)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_24148.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542961, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_16), sParam1, 16);
		Global_4542961.f_20 = iParam2;
		return;
		return;
	}

	MISC::CLEAR_BIT(&(Global_24148.f_5655), Global_24148.f_5326);
	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5328[Global_24148.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5553[Global_24148.f_5326 /*4*/], sParam1, 16);
	Global_24148.f_5610[Global_24148.f_5326] = iParam2;
	Global_24148.f_5625[Global_24148.f_5326] = ecaParam0;
	Global_24148.f_5640[Global_24148.f_5326] = 32;
	Global_24148.f_5326 = Global_24148.f_5326 + 1;
	return;
}

void func_546(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x26282 (156290)
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_24148.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542961, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_16), sParam1, 16);
		Global_4542961.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_24148.f_5655), Global_24148.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5328[Global_24148.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5553[Global_24148.f_5326 /*4*/], sParam1, 16);
	Global_24148.f_5610[Global_24148.f_5326] = iParam2;
	Global_24148.f_5625[Global_24148.f_5326] = ecaParam0;
	Global_24148.f_5640[Global_24148.f_5326] = 32;
	Global_24148.f_5326 = Global_24148.f_5326 + 1;
	return;
}

void func_547(ePedComponentType epctParam0, BOOL bParam1) // Position - 0x26337 (156471)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_24148.f_5825 >= 256)
		return;

	if (Global_24148.f_6346 >= 4)
		return;

	if (Global_24148.f_6347 != 1)
		return;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
		return;

	Global_24148.f_4469[Global_24148.f_5825] = epctParam0;
	Global_24148.f_5825 = Global_24148.f_5825 + 1;
	Global_24148.f_2387[Global_24148.f_6345 /*5*/][Global_24148.f_6346] = 2;
	Global_24148.f_6346 = Global_24148.f_6346 + 1;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
	{
		num = func_549();
	
		if (Global_24148.f_5678[Global_24148.f_5822] && Global_24148.f_6346 == Global_24148.f_6344)
		{
			func_350(27, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_24148.f_5671[Global_24148.f_5822 - 1])
			Global_24148.f_5671[Global_24148.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_24148.f_6346 >= Global_24148.f_6344)
		{
			num3 = func_548();
		
			if (num3 > Global_24148.f_6348[Global_24148.f_5821])
				Global_24148.f_6348[Global_24148.f_5821] = num3;
		}
	}

	return;
}

float func_548() // Position - 0x26472 (156786)
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_24148.f_6346; i = i + 1)
	{
		if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_24148.f_4984[(Global_24148.f_5827 - num) + i] != 0)
			if (func_350(Global_24148.f_4984[(Global_24148.f_5827 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_549() // Position - 0x26525 (156965)
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

	for (i = 0; i < Global_24148.f_6346; i = i + 1)
	{
		if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 1)
		{
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 8)
		{
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 2)
		{
			num2 = num2 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 3)
		{
			num3 = num3 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 4)
		{
			num4 = num4 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 5)
		{
			num5 = num5 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 6)
		{
			num5 = num5 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 7)
		{
			num5 = num5 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 9)
		{
			num5 = num5 + 1;
		}
	}

	func_326(false, true, false, false, 0, num5 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_24148.f_79[Global_24148.f_6345 /*6*/]);

	for (i = 0; i < Global_24148.f_6346; i = i + 1)
	{
		if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 1)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[Global_24148.f_6345 + num6 /*6*/]);
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 8)
		{
			num6 = num6 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_24148.f_79[Global_24148.f_6345 + num6 /*6*/]);
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24148.f_4469[(Global_24148.f_5825 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24148.f_4726[(Global_24148.f_5826 - num3) + num8], Global_24148.f_4855[(Global_24148.f_5826 - num3) + num8]);
		
			num8 = num8 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[(Global_24148.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2697110[(Global_24148.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[(Global_24148.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
		else if (Global_24148.f_2387[Global_24148.f_6345 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2697110[(Global_24148.f_5824 - num5) + num9 /*16*/]);
		
			num9 = num9 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_24148.f_79[Global_24148.f_6345 /*6*/]) != 0)
		num = func_323(true);

	for (i = 0; i < num4; i = i + 1)
	{
		if (Global_24148.f_4984[(Global_24148.f_5827 - num4) + i] != 0)
		{
			func_350(Global_24148.f_4984[(Global_24148.f_5827 - num4) + i], true, false, &unk, &unk2, false);
			num = num + unk;
		}
	}

	return num;
}

int func_550() // Position - 0x2696C (158060)
{
	if (func_16(func_17(), 0f, 0f, -2000f, false) || func_16(func_17(), 0f, 0f, 0f, false))
		return 0;

	return BUILTIN::ROUND(MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, iLocal_100.f_7, true));
}

void func_551(char* sParam0, BOOL bParam1) // Position - 0x269B2 (158130)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_24148.f_5823 >= 256)
		return;

	if (Global_24148.f_6346 >= 4)
		return;

	if (Global_24148.f_6347 != 1)
		return;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_79[Global_24148.f_5823 /*6*/], sParam0, 24);
	Global_24148.f_5823 = Global_24148.f_5823 + 1;
	Global_24148.f_2387[Global_24148.f_6345 /*5*/][Global_24148.f_6346] = 1;
	Global_24148.f_6346 = Global_24148.f_6346 + 1;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
	{
		num = func_549();
	
		if (Global_24148.f_5678[Global_24148.f_5822] && Global_24148.f_6346 == Global_24148.f_6344)
		{
			func_350(27, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_24148.f_5671[Global_24148.f_5822 - 1])
			Global_24148.f_5671[Global_24148.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_24148.f_6346 >= Global_24148.f_6344)
		{
			num3 = func_548();
		
			if (num3 > Global_24148.f_6348[Global_24148.f_5821])
				Global_24148.f_6348[Global_24148.f_5821] = num3;
		}
	}

	return;
}

void func_552(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x26AEE (158446)
{
	Global_24148.f_9123 = iParam4;
	Global_24148.f_9119 = uParam0;
	Global_24148.f_9120 = uParam1;
	Global_24148.f_9121 = uParam2;
	Global_24148.f_9122 = uParam3;
	return;
}

void func_553(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x26B1E (158494)
{
	Global_24148.f_5686[0] = iParam0;
	Global_24148.f_5686[1] = iParam1;
	Global_24148.f_5686[2] = iParam2;
	Global_24148.f_5686[3] = iParam3;
	Global_24148.f_5686[4] = iParam4;
	return;
}

void func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x26B5D (158557)
{
	Global_24148.f_5659[0] = iParam0;
	Global_24148.f_5659[1] = iParam1;
	Global_24148.f_5659[2] = iParam2;
	Global_24148.f_5659[3] = iParam3;
	Global_24148.f_5659[4] = iParam4;
	Global_24148.f_5829 = 0;

	if (iParam0 != 0)
		Global_24148.f_5829 = Global_24148.f_5829 + 1;

	if (iParam1 != 0)
		Global_24148.f_5829 = Global_24148.f_5829 + 1;

	if (iParam2 != 0)
		Global_24148.f_5829 = Global_24148.f_5829 + 1;

	if (iParam3 != 0)
		Global_24148.f_5829 = Global_24148.f_5829 + 1;

	if (iParam4 != 0)
		Global_24148.f_5829 = Global_24148.f_5829 + 1;

	return;
}

void func_555(char* sParam0) // Position - 0x26C07 (158727)
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_1), sParam0, 16);
	Global_24148.f_74 = 0;
	Global_24148.f_75 = 0;
	Global_24148.f_76 = 0;
	Global_24148.f_77 = 0;
	Global_24148.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24148.f_5[i] = 0;
	}

	return;
}

void func_556(BOOL bParam0, BOOL bParam1) // Position - 0x26C52 (158802)
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_24148.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2697110[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24148.f_4469[i] = PV_COMP_HEAD;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24148.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_24148.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_24148.f_5692[i] = 0;
		Global_24148.f_5830[i] = false;
		Global_24148.f_5959[i] = false;
		Global_24148.f_6482[i] = 0f;
		Global_24148.f_6088[i] = false;
		Global_24148.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_24148.f_5659[i] = 0;
		Global_24148.f_5671[i] = 0f;
		Global_24148.f_5665[i] = -1f;
		Global_24148.f_5678[i] = false;
		Global_24148.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_5553[i /*4*/], "", 16);
		Global_24148.f_5610[i] = -1;
		Global_24148.f_5625[i] = 365;
		Global_24148.f_5640[i] = 32;
	}

	for (i = 0; i < 67; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_7696[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_24148.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_16), "", 16);
	Global_4542961.f_20 = -1;
	Global_24148 = false;
	Global_24148.f_5821 = 0;
	Global_24148.f_5822 = 0;
	Global_24148.f_5823 = 0;
	Global_24148.f_5825 = 0;
	Global_24148.f_5826 = 0;
	Global_24148.f_5827 = 0;
	Global_24148.f_5824 = 0;
	Global_24148.f_6477 = 0;
	Global_24148.f_6617 = 0;
	Global_24148.f_6342 = 0;
	Global_24148.f_6341 = 0;
	Global_24148.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_5241), "", 24);
	Global_24148.f_5319 = 0;
	Global_24148.f_5320 = 0;
	Global_24148.f_5321 = 0;
	Global_24148.f_5322 = 0;
	Global_24148.f_5323 = 0;
	Global_24148.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24148.f_5253[i] = 0;
	}

	Global_24148.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
	Global_4542961.f_61 = 0;
	Global_4542961.f_62 = 0;
	Global_4542961.f_63 = 0;
	Global_4542961.f_64 = 0;
	Global_4542961.f_65 = 0;
	Global_4542961.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4542961.f_25[i] = 0;
	}

	Global_4542961.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_1), "", 16);
	Global_24148.f_5677 = 0f;
	Global_24148.f_74 = 0;
	Global_24148.f_75 = 0;
	Global_24148.f_76 = 0;
	Global_24148.f_77 = 0;
	Global_24148.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_24148.f_5[i] = 0;
	}

	Global_24148.f_6347 = 0;
	Global_24148.f_6346 = 0;
	Global_24148.f_6344 = 0;
	Global_24148.f_6345 = 0;
	Global_24148.f_5326 = 0;
	Global_24148.f_5327 = 0;
	Global_24148.f_5828 = 10;
	Global_24148.f_5829 = 0;
	Global_24148.f_6479 = 0f;
	Global_24148.f_6480 = 0f;
	Global_24148.f_6331 = 0;
	Global_24148.f_6332 = 0;
	Global_24148.f_6333 = 0f;
	Global_24148.f_6334 = 0;
	Global_24148.f_6336 = 0;
	Global_24148.f_6335 = 0;
	Global_24148.f_6337 = 0;
	Global_24148.f_6338 = 0;
	Global_24148.f_6339 = 0;
	Global_24148.f_6340 = 0;
	Global_24148.f_9144 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_24148.f_6611[i] = -1;
		Global_24148.f_6614[i] = -1;
	}

	Global_24148.f_5684 = 0f;
	Global_24148.f_5655 = 0;
	Global_24148.f_5685 = 0;

	for (i = 0; i < Global_24148.f_6618; i = i + 1)
	{
		Global_24148.f_6618[i] = 0;
	}

	Global_24148.f_9123 = 0;
	Global_24148.f_9118 = 0;
	Global_24148.f_9128 = 0;
	Global_24148.f_9133 = 0;
	Global_24148.f_9138 = 0;
	Global_24148.f_9140 = 0;
	Global_24148.f_9146 = 0;
	Global_24148.f_9149 = func_557(false);
	Global_24145 = 0.05f;
	Global_24146 = 0.05f;
	Global_24147 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		Global_24147 = 0.225f * (1.7777778f / aspectRatio);

	return;
}

float func_557(BOOL bParam0) // Position - 0x27134 (160052)
{
	float aspectRatio;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (!bParam0 && aspectRatio < 1.7777778f)
		aspectRatio = 1.7777778f;

	return aspectRatio;
}

void func_558() // Position - 0x2715F (160095)
{
	ePedComponentType i;
	ePedComponentType type;
	ePedComponentType type2;
	var unk;
	var unk34;
	Ped playerPed;
	int j;
	float num;
	int k;

	func_556(false, false);
	func_544(0, 0, 0, 0, 0);
	func_555("R2P_MENU_TINV" /*PLAYER LIST*/);
	func_554(1, 1, 0, 0, 0);
	func_553(1, 2, 1, 1, 1);
	type = 0;
	epctLocal_263 = _INVALID_PLAYER_INDEX();
	unk = 32;
	unk34 = 32;

	for (i = PV_COMP_HEAD; i < 32; i = i + 1)
	{
		type2 = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_562(type2))
		{
			if (type < func_561())
			{
				type = type + 1;
				bLocal_264 = true;
				playerPed = PLAYER::GET_PLAYER_PED(type2);
			
				if (type > 1)
				{
					num = func_560(PLAYER::PLAYER_PED_ID(), playerPed, true);
				
					for (j = 0; j < type; j = j + 1)
					{
						if (num < unk34[j] || unk34[j] == 0f)
						{
							for (k = type - 1; k >= j + 1; k = k + -1)
							{
								if (k > 0)
								{
									unk[k] = unk[k - 1];
									unk34[k] = unk34[k - 1];
								}
							}
						
							unk[j] = type2;
							unk34[j] = func_560(PLAYER::PLAYER_PED_ID(), playerPed, true);
							j = type;
						}
					}
				}
				else
				{
					unk[0] = type2;
					unk34[0] = func_560(PLAYER::PLAYER_PED_ID(), playerPed, true);
				}
			}
		}
	}

	if (type == 0)
	{
		func_344(type, "PIM_R2PNON" /*No Players in Range*/, 1, 1, 0, false, 0);
		bLocal_264 = false;
		type = type + 1;
	}
	else
	{
		for (i = PV_COMP_HEAD; i < type; i = i + 1)
		{
			func_344(i, "PIM_PLNM" /*~a~*/, 1, true, false, false, false);
			func_559(PLAYER::GET_PLAYER_NAME(unk[i]), false, true, true);
		
			if (uLocal_307.f_14 == i)
				epctLocal_263 = unk[i];
		}
	}

	epctLocal_99 = type;

	if (bLocal_264 == true)
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			func_546(INPUT_CURSOR_ACCEPT, "R2P_CTRL_INV" /*Invite*/, -1, false);
		else
			func_545(INPUT_CELLPHONE_SELECT, "R2P_CTRL_INV" /*Invite*/, -1);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		func_546(INPUT_CURSOR_CANCEL, "R2P_MENU_BAC" /*Back*/, -1, false);
	else
		func_545(INPUT_CELLPHONE_CANCEL, "R2P_MENU_BAC" /*Back*/, -1);

	func_582(uLocal_307.f_14, true, 1);
	func_542("", 0, 0);
	return;
}

void func_559(const char* sParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27362 (160610)
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_24148.f_5824 >= 50)
		return;

	if (Global_24148.f_6346 >= 4)
		return;

	if (Global_24148.f_6347 != 1)
		return;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_2697110[Global_24148.f_5824 /*16*/], sParam0, 64);
	Global_24148.f_5824 = Global_24148.f_5824 + 1;
	Global_24148.f_2387[Global_24148.f_6345 /*5*/][Global_24148.f_6346] = 5;
	Global_24148.f_6346 = Global_24148.f_6346 + 1;
	num = 0f;

	if (bParam3)
		num = func_549();

	bParam2;

	if (Global_24148.f_6346 >= Global_24148.f_6344)
	{
		num = func_549();
	
		if (Global_24148.f_5678[Global_24148.f_5822] && Global_24148.f_6346 == Global_24148.f_6344)
		{
			func_350(27, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_24148.f_5671[Global_24148.f_5822 - 1])
			Global_24148.f_5671[Global_24148.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_24148.f_6346 >= Global_24148.f_6344)
		{
			num3 = func_548();
		
			if (num3 > Global_24148.f_6348[Global_24148.f_5821])
				Global_24148.f_6348[Global_24148.f_5821] = num3;
		}
	}

	return;
}

float func_560(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x274AF (160943)
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

int func_561() // Position - 0x2750D (161037)
{
	if (Global_2692869)
		return 32;

	return 32 - Global_2692870;
}

BOOL func_562(ePedComponentType epctParam0) // Position - 0x27528 (161064)
{
	if (!_NETWORK_IS_PLAYER_VALID(epctParam0, false, true))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		return false;

	if (func_9(epctParam0, 0))
		return false;

	if (func_565(epctParam0, false, -1))
		return false;

	if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), epctParam0))
		return false;

	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(epctParam0))
		if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD)
			return false;
		else if (!func_6(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::GET_PLAYER_TEAM(epctParam0), 0, -1))
			return false;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true) && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(epctParam0), 300f, 300f, 300f, false, true, 0))
			return false;
	else
		return false;

	if (func_563(epctParam0))
		return false;

	return true;
}

BOOL func_563(ePedComponentType epctParam0) // Position - 0x27616 (161302)
{
	switch (Global_1888882[epctParam0 /*611*/])
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 236:
		case 150:
			return true;
	
		default:
		
	}

	if (func_564(Global_1888882[epctParam0 /*611*/]) == 1)
		return true;

	return false;
}

int func_564(ePedComponentType epctParam0) // Position - 0x2767C (161404)
{
	switch (epctParam0)
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
	
		case 280:
			return 0;
	
		case 281:
			return 0;
	
		case 282:
			return 0;
	
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
	
		default:
		
	}

	return -1;
}

BOOL func_565(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0x27A06 (162310)
{
	if (Global_1845274[epctParam0 /*877*/].f_260.f_36 > PV_COMP_HEAD)
		if (bParam1)
			if (IS_BIT_SET(Global_1845274[epctParam0 /*877*/].f_260.f_34, 0))
				return true;
		else
			return true;

	if (Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID)
	{
		if (iParam2 == -1 || func_396(Global_2658019[epctParam0 /*467*/].f_324.f_8) != iParam2)
		{
			if (bParam1)
				return func_566(epctParam0) == epctParam0;
		
			return true;
		}
	}

	return false;
}

ePedComponentType func_566(ePedComponentType epctParam0) // Position - 0x27A8D (162445)
{
	int num;

	if (epctParam0 == _INVALID_PLAYER_INDEX())
		return epctParam0;

	if (func_567(epctParam0) != PV_COMP_INVALID)
	{
		num = func_396(func_567(epctParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (func_141(epctParam0, false))
				return func_139(epctParam0);
		
			return epctParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return Global_2658019[epctParam0 /*467*/].f_324.f_11;
	}

	return _INVALID_PLAYER_INDEX();
}

ePedComponentType func_567(ePedComponentType epctParam0) // Position - 0x27B1C (162588)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2658019[epctParam0 /*467*/].f_324.f_8;
		else if (Global_1575088 || Global_2635523.f_2981 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2658019[epctParam0 /*467*/].f_324.f_8;

	return PV_COMP_INVALID;
}

int func_568(int iParam0) // Position - 0x27B8B (162699)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return iLocal_98;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		default:
		
	}

	return 0;
}

void func_569() // Position - 0x27BCE (162766)
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		uLocal_307[i] = 0;
	}

	return;
}

BOOL func_570(BOOL bParam0) // Position - 0x27BF0 (162800)
{
	int i;

	if (func_20())
		return false;

	if (bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || func_573(false, true, 0))
		{
			if (func_599(&uLocal_267, iLocal_269, false))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				iLocal_260 = 1;
				uLocal_307.f_14 = uLocal_307.f_14 + 1;
			
				if (iLocal_262 == 1)
					if (uLocal_307.f_14 > epctLocal_99 - 1)
						uLocal_307.f_14 = 0;
				else if (uLocal_307.f_14 > 4)
					uLocal_307.f_14 = 0;
			
				func_582(uLocal_307.f_14, true, 1);
				iLocal_260 = 1;
				iLocal_269 = 250;
				_STOPWATCH_DESTROY(&uLocal_267);
				return true;
			}
		}
		else if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || func_572(false, true, 0))
		{
			if (func_599(&uLocal_267, iLocal_269, false))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				iLocal_260 = 1;
				uLocal_307.f_14 = uLocal_307.f_14 - 1;
			
				if (iLocal_262 == 1)
					if (uLocal_307.f_14 < 0)
						uLocal_307.f_14 = epctLocal_99 - 1;
				else if (uLocal_307.f_14 < 0)
					uLocal_307.f_14 = 4;
			
				func_582(uLocal_307.f_14, true, 1);
				iLocal_260 = 1;
				iLocal_269 = 250;
				_STOPWATCH_DESTROY(&uLocal_267);
				return true;
			}
		}
		else if (iLocal_269 != -1)
		{
			iLocal_269 = -1;
		}
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);

	if (bParam0 && iLocal_262 == 0 && uLocal_307.f_14 == 2 && !IS_BIT_SET(iLocal_100.f_1, 11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT) || iLocal_266 == -1)
		{
			if (func_599(&uLocal_270, iLocal_272, false))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				iLocal_100.f_15[uLocal_307.f_14] = iLocal_100.f_15[uLocal_307.f_14] - 1;
			
				if (iLocal_100.f_15[uLocal_307.f_14] < 0)
					iLocal_100.f_15[uLocal_307.f_14] = func_568(uLocal_307.f_14);
			
				for (i = 0; i < iLocal_98; i = i + 1)
				{
					if (uLocal_307.f_14 == 2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f && iLocal_100.f_15[2] != 0)
						{
							iLocal_100.f_15[uLocal_307.f_14] = iLocal_100.f_15[uLocal_307.f_14] - 1;
						
							if (iLocal_100.f_15[uLocal_307.f_14] < 0)
								iLocal_100.f_15[uLocal_307.f_14] = func_568(uLocal_307.f_14);
						}
						else
						{
							i = 99;
						}
					
						Global_2740191.f_28.f_39 = iLocal_100.f_15[uLocal_307.f_14];
					}
				}
			
				iLocal_272 = 250;
				_STOPWATCH_DESTROY(&uLocal_270);
				iLocal_260 = 1;
				iLocal_261 = 1;
				iLocal_100.f_15.f_6 = iLocal_100.f_15.f_6 + 1;
				return true;
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT) || func_571() && uLocal_307.f_14 == 2 || iLocal_266 == 1)
		{
			if (func_599(&uLocal_270, iLocal_272, false))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				iLocal_100.f_15[uLocal_307.f_14] = iLocal_100.f_15[uLocal_307.f_14] + 1;
			
				if (iLocal_100.f_15[uLocal_307.f_14] > func_568(uLocal_307.f_14))
					iLocal_100.f_15[uLocal_307.f_14] = 0;
			
				for (i = 0; i < iLocal_98; i = i + 1)
				{
					if (uLocal_307.f_14 == 2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(iLocal_100.f_4, func_17(), true) < 1000f && iLocal_100.f_15[2] != 0)
						{
							iLocal_100.f_15[uLocal_307.f_14] = iLocal_100.f_15[uLocal_307.f_14] + 1;
						
							if (iLocal_100.f_15[uLocal_307.f_14] > func_568(uLocal_307.f_14))
								iLocal_100.f_15[uLocal_307.f_14] = 0;
						}
						else
						{
							i = 99;
						}
					
						Global_2740191.f_28.f_39 = iLocal_100.f_15[uLocal_307.f_14];
					}
				}
			
				iLocal_272 = 250;
				_STOPWATCH_DESTROY(&uLocal_270);
				iLocal_260 = 1;
				iLocal_261 = 1;
				iLocal_100.f_15.f_6 = iLocal_100.f_15.f_6 + 1;
				return true;
			}
		}
		else if (iLocal_272 != -1)
		{
			iLocal_272 = -1;
		}
	}

	return true;
}

BOOL func_571() // Position - 0x27FF3 (163827)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return true;
	else if (PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
		return true;

	return false;
}

BOOL func_572(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x28047 (163911)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4543037 == -2)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) && bParam1)
				return true;
	}

	return false;
}

BOOL func_573(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x280AC (164012)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4543037 == -3)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) && bParam1)
				return true;
	}

	return false;
}

void func_574() // Position - 0x28111 (164113)
{
	BOOL flag;

	if (IS_BIT_SET(uLocal_307.f_18, 2))
	{
		if (func_599(&uLocal_328, iLocal_330, false))
		{
			iLocal_260 = 1;
			MISC::CLEAR_BIT(&(uLocal_307.f_18), 2);
		}
	}

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		return;

	if (func_20())
		return;

	if (func_15() || iLocal_265)
	{
		switch (iLocal_262)
		{
			case 0:
				if (bLocal_264 == true)
				{
					if (func_599(&uLocal_328, iLocal_330, false))
					{
						if (uLocal_307.f_14 == 1)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_262 = 1;
							uLocal_307.f_14 = 0;
							iLocal_260 = 1;
							return;
						}
						else if (uLocal_307.f_14 != 0)
						{
							return;
						}
					
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						func_578(iLocal_100.f_4, iLocal_100.f_7, uLocal_275, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
						flag = func_577();
					
						if (flag != true)
							func_576("R2P_TINVS" /*Your invite has been sent to ~1~ players.*/, flag, false);
						else
							_THEFEED_SHOW_MESSAGE("R2P_TINVS1" /*Your invite has been sent to 1 player.*/, false);
					
						_STOPWATCH_DESTROY(&uLocal_328);
						func_27(&uLocal_328, false, false);
						iLocal_330 = 5000;
						iLocal_260 = 1;
						MISC::SET_BIT(&(uLocal_307.f_18), 2);
						MISC::SET_BIT(&(iLocal_100.f_1), 11);
					}
				}
				break;
		
			case 1:
				if (bLocal_264 == true)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					func_111("R2P_TINVP" /*Your invite has been sent to ~a~.*/, epctLocal_263, false, false, false, true, false);
					func_578(iLocal_100.f_4, iLocal_100.f_7, uLocal_275, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_242(epctLocal_263));
					MISC::SET_BIT(&(iLocal_100.f_1), 11);
				}
				break;
		}
	}

	return;
}

int _THEFEED_SHOW_MESSAGE(char* sParam0, BOOL bParam1) // Position - 0x282A0 (164512)
{
	int num;
	int num2;

	num = -1;
	num2 = 1;

	if (bParam1)
		num2 = 2;

	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_112(0, sParam0, num2, 0, false, false, false, 0, 1, 0, 0, 0);
	return num;
}

int func_576(char* sParam0, BOOL bParam1, BOOL bParam2) // Position - 0x282D8 (164568)
{
	int num;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(bParam1);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);

	if (bParam2)
		func_112(3, sParam0, 2, "", bParam1, 0, 0, 0, 1, 0, 0, 0);
	else
		func_112(3, sParam0, 1, "", bParam1, false, false, 0, 1, 0, 0, 0);

	return num;
}

BOOL func_577() // Position - 0x2832B (164651)
{
	int num;
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			if (func_562(type))
				num = num + 1;
	}

	return num;
}

void func_578(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11) // Position - 0x2836C (164716)
{
	Hash eventData;

	eventData = -1595661064;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = iParam10;
	eventData.f_4 = { uParam0 };
	eventData.f_7 = { uParam3 };
	eventData.f_10 = { uParam6 };

	if (!(iParam11 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 14, iParam11, eventData);

	_STAT_SET_PACKED_BOOL(26, true, -1);
	return;
}

void func_579() // Position - 0x283C7 (164807)
{
	if (func_20())
		return;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_RELOAD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (func_581() || func_580())
	{
		switch (iLocal_262)
		{
			case 0:
				Global_2672967.f_1023.f_11 = 1;
				uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2672967.f_1023.f_5 = PLAYER::PLAYER_ID();
					Global_2672967.f_1023.f_6 = 0;
					Global_2672967.f_1023.f_13 = 1;
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				break;
		
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				iLocal_262 = 0;
				uLocal_307.f_14 = 1;
				iLocal_260 = 1;
				break;
		}
	}

	return;
}

int func_580() // Position - 0x2847A (164986)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL))
			return 1;

	return 0;
}

int func_581() // Position - 0x28499 (165017)
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
		return 1;

	return 0;
}

void func_582(int iParam0, BOOL bParam1, int iParam2) // Position - 0x284ED (165101)
{
	ePedComponentType i;
	int num;

	Global_24148.f_6342 = iParam0;
	Global_24148.f_6477 = iParam2;

	if (Global_24148.f_6342 < Global_24148.f_6341)
	{
		Global_24148.f_6341 = Global_24148.f_6342;
	}
	else if (Global_24148.f_6332 && Global_24148.f_6342 > Global_24148.f_6343 || !Global_24148.f_6332 && Global_24148.f_6342 >= Global_24148.f_6341 + Global_24148.f_5828)
	{
		for (i = Global_24148.f_6341; i <= Global_24148.f_6342; i = i + 1)
		{
			if (i >= PV_COMP_HEAD && i < 127)
				if (Global_24148.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_24148.f_5828 && Global_24148.f_6341 < 128)
		{
			Global_24148.f_6341 = Global_24148.f_6341 + 1;
			num = 0;
		
			for (i = Global_24148.f_6341; i <= Global_24148.f_6342; i = i + 1)
			{
				if (i >= PV_COMP_HEAD && i < 127)
					if (Global_24148.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_24148.f_6331 = 0;
	Global_24148.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542961.f_21), "", 16);
	}

	return;
}

int func_583(int iParam0) // Position - 0x2863F (165439)
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;

	num3 = 0.02f;
	x = 0.05f;
	x2 = x + Global_24147;
	y = Global_24148.f_6333 - ((float)Global_24148.f_6335 * 0.034722f);
	num2 = x + iParam0;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	num = x2 - num3;

	if (iParam0 > 0f)
		if (Global_4543031 >= x && Global_4543031 < num2)
			return -999;

	if (Global_4543031 >= x && Global_4543031 < num)
		return -1;

	if (Global_4543031 >= num && Global_4543031 <= x2)
		return 1;

	return 0;
}

void func_584(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2870C (165644)
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
		Global_4543037 = PV_COMP_INVALID;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_24145;
	x2 = x + Global_24147;
	y2 = Global_24148.f_6333;
	y = Global_24148.f_6333 - ((float)Global_24148.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_24148.f_6335 < 1)
		y = Global_24148.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_586();

	if (Global_4543037 == -6)
		return;

	Global_4543037 = PV_COMP_INVALID;
	num4 = Global_4543031;
	num5 = Global_4543032;

	if (Global_24148.f_6336 > Global_24148.f_6335)
	{
		if (Global_4543031 >= x && Global_4543031 <= x2 && Global_4543032 >= y2 && Global_4543032 < y2 + num3)
		{
			Global_4543037 = -2;
		
			if (bParam3)
				func_585(false);
		
			return;
		}
	
		if (Global_4543031 >= x && Global_4543031 <= x2 && Global_4543032 >= y2 + num3 && Global_4543032 < y2 + 0.034722f)
		{
			Global_4543037 = -3;
		
			if (bParam3)
				func_585(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = BUILTIN::FLOOR(num6 / 0.034722f);
	
		if (Global_24148.f_6336 == -1)
		{
			Global_4543037 = PV_COMP_HEAD;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_24148.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_340(num, num2 + ((float)num10 * 0.034722f), Global_24147, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4543037 = Global_24148.f_8769[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4543037 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4543037 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4543037 = -4;
		return;
	}

	Global_4543037 = PV_COMP_INVALID;
	return;
}

void func_585(BOOL bParam0) // Position - 0x289B8 (166328)
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

	num = Global_24145;
	num2 = Global_24148.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4543037 == -2)
		func_340(num, num2, Global_24147, num3, 255, 255, 255, num4);
	else if (Global_4543037 == -3)
		func_340(num, num2 + num3, Global_24147, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_586() // Position - 0x28A41 (166465)
{
	Global_4543033 = Global_4543031;
	Global_4543034 = Global_4543032;
	Global_4543031 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4543032 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4543035 = Global_4543031 - Global_4543033;
	Global_4543036 = Global_4543032 - Global_4543034;
	return;
}

int func_587(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x28A89 (166537)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4543037 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4543037 = PV_COMP_INVALID;
			return 0;
		}
	}

	if (Global_4543037 > PV_COMP_INVALID || Global_4543037 == -3 || Global_4543037 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4543037 == PV_COMP_INVALID && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4543037 = -6;
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

int func_588(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x28B69 (166761)
{
	int num;
	int value;
	int num2;
	float num3;
	ePedComponentType type;
	float num4;
	int value2;
	int num5;

	num = 50;
	value = 25;
	num2 = 4;
	num3 = 0.25f;
	type = func_589(PLAYER::PLAYER_ID());

	if (type < PV_COMP_DECL)
		type = PV_COMP_DECL;
	else if (type > 40)
		type = 40;

	type = type * num2;
	num4 = BUILTIN::VDIST(vParam3, vParam0);

	if (num4 > 1000f)
		num4 = num4 / 1000f;

	num4 = num4 * num3;
	value2 = BUILTIN::ROUND((float)type * num4);
	num5 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(value2) / BUILTIN::TO_FLOAT(value));
	value2 = num5 * value;
	value2 = BUILTIN::ROUND(BUILTIN::TO_FLOAT(value2) * Global_262145.f_168);

	if (value2 > Global_262145.f_169)
		value2 = Global_262145.f_169;

	if (value2 >= BUILTIN::ROUND((float)num * Global_262145.f_168))
		return value2;

	return BUILTIN::ROUND((float)num * Global_262145.f_168);
}

ePedComponentType func_589(Player plParam0) // Position - 0x28C49 (166985)
{
	return Global_1845274[plParam0 /*877*/].f_198.f_6;
}

int func_590(ePedComponentType epctParam0) // Position - 0x28C5E (167006)
{
	int num;

	num = func_591(epctParam0);
	return num;
}

int func_591(ePedComponentType epctParam0) // Position - 0x28C70 (167024)
{
	if (epctParam0 > PV_COMP_INVALID)
		if (epctParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_216(epctParam0))
			return Global_1845274[epctParam0 /*877*/].f_198.f_3;
		else
			return 0;

	return 0;
}

void func_592() // Position - 0x28CB3 (167091)
{
	var unk;

	if (!IS_BIT_SET(iLocal_256, 6))
	{
		unk.f_3 = 1681501530;
		unk.f_11 = PLAYER::PLAYER_ID();
		func_593(unk, func_594(false));
		MISC::SET_BIT(&iLocal_256, 6);
	}

	return;
}

void func_593(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15) // Position - 0x28CEB (167147)
{
	hParam0 = -642704387;
	hParam0.f_1 = PLAYER::PLAYER_ID();

	if (!(iParam15 == 0))
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &hParam0, 15, iParam15, hParam0);

	return;
}

int func_594(BOOL bParam0) // Position - 0x28D1A (167194)
{
	int address;
	int i;
	ePedComponentType playerIndex;

	for (i = 0; i < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS(); i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(i)))
		{
			playerIndex = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(i));
		
			if (_NETWORK_IS_PLAYER_VALID(playerIndex, false, false))
				if (playerIndex != PLAYER::PLAYER_ID() || bParam0)
					MISC::SET_BIT(&address, playerIndex);
		}
	}

	return address;
}

void func_595(var uParam0) // Position - 0x28D77 (167287)
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
	return;
}

void func_596() // Position - 0x28D95 (167317)
{
	Vector3 vector;
	int r;
	int g;
	int b;
	var a;

	vector = { iLocal_100.f_7 };

	if (!IS_BIT_SET(iLocal_256, 5))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_257))
		{
			if (!func_16(vector, HUD::GET_BLIP_COORDS(blLocal_257), false))
			{
				HUD::REMOVE_BLIP(&blLocal_257);
				GRAPHICS::DELETE_CHECKPOINT(iLocal_258);
				MISC::CLEAR_BIT(&iLocal_256, 4);
			}
		}
	
		if (!HUD::DOES_BLIP_EXIST(blLocal_257))
		{
			if (!func_16(vector, 0f, 0f, 0f, false) && !func_16(vector, 0f, 0f, -2000f, false) && !IS_BIT_SET(iLocal_100.f_1, 7) || IS_BIT_SET(iLocal_100.f_1, 9))
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				blLocal_257 = HUD::ADD_BLIP_FOR_COORD(vector);
				HUD::SET_BLIP_SPRITE(blLocal_257, BLIP_RACEFLAG);
				HUD::SET_BLIP_SCALE(blLocal_257, 1.2f);
				HUD::SET_BLIP_PRIORITY(blLocal_257, 5);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blLocal_257, "R2P_BLIP" /*Finish Line*/);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(true);
				HUD::SET_BLIP_ROUTE(blLocal_257, true);
				iLocal_258 = GRAPHICS::CREATE_CHECKPOINT(10, vector + { 4f, 0f, 0f }, vector, 10f, r, g, b, 75, 0);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_258, 7.5f, 7.5f, 100f);
				iLocal_260 = 1;
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(blLocal_257))
	{
		HUD::REMOVE_BLIP(&blLocal_257);
		GRAPHICS::DELETE_CHECKPOINT(iLocal_258);
	}

	return;
}

void func_597() // Position - 0x28ED4 (167636)
{
	if (!HUD::DOES_BLIP_EXIST(blLocal_259))
	{
		blLocal_259 = HUD::ADD_BLIP_FOR_RADIUS(iLocal_100.f_4, 1000f);
		HUD::SET_BLIP_COLOUR(blLocal_259, 1);
		HUD::SET_BLIP_ALPHA(blLocal_259, 220);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blLocal_259, "R2P_BLIPR" /*Invalid Area*/);
		HUD::SET_BLIP_DISPLAY(blLocal_259, 3);
	}

	return;
}

int func_598() // Position - 0x28F1D (167709)
{
	return iLocal_100;
}

BOOL func_599(var uParam0, int iParam1, BOOL bParam2) // Position - 0x28F27 (167719)
{
	if (iParam1 == -1)
		return true;

	func_27(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

BOOL func_600(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x28F85 (167813)
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_307(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_24148.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_24148.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_24148.f_6238[num /*4*/], 9);
		Global_24148.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_24148.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_24148.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24148.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_24148.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_601(&Global_24148.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_601(int iParam0) // Position - 0x29093 (168083)
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

void func_602(int iParam0) // Position - 0x29135 (168245)
{
	if (func_606())
		return;

	if (!(Global_21239.f_1 == 1))
	{
		if (func_21(0))
			func_603(iParam0);
	
		MISC::SET_BIT(&Global_9076, 2);
	}

	return;
}

void func_603(int iParam0) // Position - 0x29168 (168296)
{
	if (func_606())
		return;

	if (Global_21461)
		if (func_476())
			func_605(true, true);
		else
			func_605(false, false);

	if (Global_21239.f_1 == 10 || Global_21239.f_1 == 9)
		MISC::SET_BIT(&Global_9076, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22602 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9075, 30);
	else
		MISC::CLEAR_BIT(&Global_9075, 30);

	if (!func_604())
		Global_21239.f_1 = 3;

	return;
}

BOOL func_604() // Position - 0x291F2 (168434)
{
	if (Global_21239.f_1 == 1 || Global_21239.f_1 == 0)
		return true;

	return false;
}

void func_605(BOOL bParam0, BOOL bParam1) // Position - 0x29219 (168473)
{
	if (bParam0)
	{
		if (func_21(0))
		{
			Global_21461 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21176);
		
			Global_21167 = { Global_21185[Global_21184 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
		}
	}
	else if (Global_21461 == true)
	{
		Global_21461 = false;
		Global_21167 = { Global_21192[Global_21184 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21176);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21167);
	}

	return;
}

BOOL func_606() // Position - 0x2928D (168589)
{
	return IS_BIT_SET(Global_1960332, 19);
}

int func_607(int iParam0) // Position - 0x2929C (168604)
{
	return uLocal_127[iParam0 /*4*/];
}

BOOL func_608(BOOL bParam0) // Position - 0x292AA (168618)
{
	if (func_618())
	{
		if (bParam0)
		{
			if (!Global_1836738 && !func_617(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				func_609(false, 0);
			}
		}
	
		return true;
	}

	return false;
}

void func_609(BOOL bParam0, int iParam1) // Position - 0x292EA (168682)
{
	if (bParam0)
		func_614(true, false, true);
	else
		func_610(iParam1);

	return;
}

void func_610(int iParam0) // Position - 0x29307 (168711)
{
	func_613();

	if (iParam0 == 0)
		if (LOBBY::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
			return;

	if (func_612() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_611(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}

	return;
}

void func_611(int iParam0) // Position - 0x29348 (168776)
{
	if (Global_1574634.f_20 != iParam0)
		Global_1574634.f_20 = iParam0;

	return;
}

int func_612() // Position - 0x29363 (168803)
{
	return Global_1574634.f_20;
}

void func_613() // Position - 0x29371 (168817)
{
	Global_2698446 = true;
	return;
}

void func_614(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2937E (168830)
{
	if (func_615())
		return;

	if (func_612() == 1 || HUD::IS_PAUSE_MENU_ACTIVE() || bParam0)
	{
		func_611(0);
	
		if (Global_2697927)
			Global_2697927 = false;
	
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	
		if (!bParam1)
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	
		if (bParam2)
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
	}

	return;
}

BOOL func_615() // Position - 0x293D5 (168917)
{
	if (func_616())
		return Global_2696480;

	return false;
}

BOOL func_616() // Position - 0x293EC (168940)
{
	if (Global_2696473)
		return Global_2696472;

	return false;
}

BOOL func_617(Player plParam0, int iParam1) // Position - 0x29403 (168963)
{
	return IS_BIT_SET(Global_2658019[plParam0 /*467*/].f_221, iParam1);
}

BOOL func_618() // Position - 0x29419 (168985)
{
	return Global_2672967.f_23;
}

BOOL func_619(int iParam0, int iParam1, int iParam2) // Position - 0x29427 (168999)
{
	if (func_654(false))
		return false;

	if (func_653())
		return false;

	if (iParam0 == 1)
		if (!func_641(32, false, false))
			return false;

	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		return false;

	if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 14 || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 15 || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 13 || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_FEET || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_HAND || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 148 || Global_1845274[PLAYER::PLAYER_ID() /*877*/] == 285)
		return false;

	if (func_617(PLAYER::PLAYER_ID(), 0))
		return false;

	if (func_617(PLAYER::PLAYER_ID(), 21))
		return false;

	if (func_617(PLAYER::PLAYER_ID(), 25))
		return false;

	if (func_640(PLAYER::PLAYER_ID()) == 136)
		return false;

	if (func_635())
		return false;

	if (func_235(PLAYER::PLAYER_ID(), true))
		return false;

	if (func_634())
		return false;

	if (func_633(PLAYER::PLAYER_ID(), true, false) || func_632(PLAYER::PLAYER_ID()) || func_630(PLAYER::PLAYER_ID()) || func_626(4) || func_626(5) || func_625(PLAYER::PLAYER_ID()) || func_624(PLAYER::PLAYER_ID()) || func_623(PLAYER::PLAYER_ID()))
		return false;

	if (func_32() != 0)
		return false;

	if (iParam2 == 1)
		if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD && func_281(PLAYER::PLAYER_ID(), true, false))
			return false;

	if (func_622(PLAYER::PLAYER_ID()) || func_621(PLAYER::PLAYER_ID()) || func_620(PLAYER::PLAYER_ID()))
		return false;

	if (func_31())
		return false;

	if (iParam1 == 1)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mg_race_to_point")) > 0)
			return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_620(Player plParam0) // Position - 0x29657 (169559)
{
	return Global_2658019[plParam0 /*467*/].f_123 == 4;
}

BOOL func_621(Player plParam0) // Position - 0x2966C (169580)
{
	return Global_2658019[plParam0 /*467*/].f_123 == 6;
}

BOOL func_622(Player plParam0) // Position - 0x29681 (169601)
{
	return Global_2658019[plParam0 /*467*/].f_123 == 5;
}

BOOL func_623(ePedComponentType epctParam0) // Position - 0x29696 (169622)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID)
				return func_396(Global_2658019[epctParam0 /*467*/].f_324.f_8) == 7;

	return false;
}

BOOL func_624(ePedComponentType epctParam0) // Position - 0x296DC (169692)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			return Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID;
		else if (Global_1575088 && epctParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(epctParam0, true, false))
			return Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID;

	return false;
}

BOOL func_625(ePedComponentType epctParam0) // Position - 0x29742 (169794)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID && Global_2658019[epctParam0 /*467*/].f_324.f_11 != _INVALID_PLAYER_INDEX())
				return func_396(Global_2658019[epctParam0 /*467*/].f_324.f_8) == 8;

	return false;
}

BOOL func_626(int iParam0) // Position - 0x297A2 (169890)
{
	if (func_629())
		return func_627(func_628(), iParam0);

	return false;
}

BOOL func_627(ePedComponentType epctParam0, int iParam1) // Position - 0x297BF (169919)
{
	return func_396(epctParam0) == iParam1;
}

ePedComponentType func_628() // Position - 0x297D0 (169936)
{
	return Global_2658019[PLAYER::PLAYER_ID() /*467*/].f_324.f_8;
}

BOOL func_629() // Position - 0x297E8 (169960)
{
	return func_628() != PV_COMP_INVALID;
}

BOOL func_630(Player plParam0) // Position - 0x297F6 (169974)
{
	if (func_631(Global_1845274[plParam0 /*877*/].f_260.f_36, -1))
		return true;

	return false;
}

BOOL func_631(ePedComponentType epctParam0, int iParam1) // Position - 0x29819 (170009)
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

BOOL func_632(ePedComponentType epctParam0) // Position - 0x298F6 (170230)
{
	int num;

	if (epctParam0 != _INVALID_PLAYER_INDEX())
	{
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
		{
			if (Global_2658019[epctParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID)
			{
				num = func_396(Global_2658019[epctParam0 /*467*/].f_324.f_8);
				return num == 2 || num == 25;
			}
		}
	}

	return false;
}

BOOL func_633(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2994B (170315)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_34, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845274[plParam0 /*877*/].f_260.f_34, 1))
			return true;

	if (bParam2)
		if (Global_2658019[plParam0 /*467*/].f_324.f_8 != PV_COMP_INVALID)
			return true;

	return false;
}

BOOL func_634() // Position - 0x299AF (170415)
{
	return IS_BIT_SET(Global_1837023.f_1, 15);
}

BOOL func_635() // Position - 0x299C0 (170432)
{
	switch (func_640(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 138:
		case 139:
		case 140:
		case 141:
		case 129:
		case 144:
		case 236:
		case 150:
			return true;
	
		default:
		
	}

	if (func_564(func_640(PLAYER::PLAYER_ID())) == 1)
		return true;

	if (func_636(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_636(Player plParam0) // Position - 0x29A33 (170547)
{
	if (func_639(plParam0))
		return true;

	if (func_637(plParam0))
		return true;

	return false;
}

BOOL func_637(Player plParam0) // Position - 0x29A56 (170582)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_638(plParam0, 9);

	return false;
}

BOOL func_638(Player plParam0, int iParam1) // Position - 0x29A74 (170612)
{
	return IS_BIT_SET(Global_1888882[plParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_639(Player plParam0) // Position - 0x29A8C (170636)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888882[player /*611*/].f_1, 0);

	return false;
}

ePedComponentType func_640(Player plParam0) // Position - 0x29AAF (170671)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1888882[player /*611*/];

	return PV_COMP_INVALID;
}

BOOL func_641(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29ACE (170702)
{
	int num;
	int num2;

	if (func_654(false) && iParam0 == 60)
		return true;

	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
			return true;
	
		if (iParam0 == 74)
			return true;
	
		if (func_645(PLAYER::PLAYER_ID(), 85))
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

	if (func_644() || func_643())
		return true;

	num = iParam0;
	num2 = num / 32;
	num = num % 32;

	if (bParam1)
		if (iParam0 == 3)
			if (func_642())
				return true;
			else
				return false;

	if (bParam2)
		return false;

	return IS_BIT_SET(Global_1837007[num2], num);
}

BOOL func_642() // Position - 0x29C4F (171087)
{
	int num;

	if (Global_1574612)
		return true;

	if (IS_BIT_SET(Global_2740191.f_1864, 23))
		return true;

	if (func_644())
		return true;

	if (func_643())
		return true;

	num = func_261(1304, -1);

	if (IS_BIT_SET(num, 7))
	{
		MISC::SET_BIT(&(Global_2740191.f_1864), 23);
		return true;
	}

	return false;
}

BOOL func_643() // Position - 0x29CAC (171180)
{
	return Global_1575076;
}

BOOL func_644() // Position - 0x29CB8 (171192)
{
	return Global_1575078;
}

BOOL func_645(Player plParam0, int iParam1) // Position - 0x29CC4 (171204)
{
	if (!func_649())
		return false;

	if (func_648())
		return false;

	if (iParam1 == 86)
		return true;

	return func_646(&(Global_1845274[plParam0 /*877*/].f_816), func_647(iParam1));
}

BOOL func_646(var uParam0, int iParam1) // Position - 0x29D04 (171268)
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_647(int iParam0) // Position - 0x29D27 (171303)
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

BOOL func_648() // Position - 0x29F13 (171795)
{
	return IS_BIT_SET(Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_144, 3);
}

BOOL func_649() // Position - 0x29F2A (171818)
{
	if (!func_650())
		return false;

	if (func_654(false))
		return false;

	return true;
}

BOOL func_650() // Position - 0x29F4B (171851)
{
	if (Global_1574612)
		return true;

	if (func_644())
		return true;

	if (func_643())
		return true;

	return func_651(120, -1);
}

BOOL func_651(int iParam0, int iParam1) // Position - 0x29F7B (171899)
{
	Hash statHash;
	BOOL outValue;

	statHash = func_652(iParam0, iParam1);

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

Hash func_652(int iParam0, int iParam1) // Position - 0x29F9F (171935)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_56(iParam1));
}

BOOL func_653() // Position - 0x29FB4 (171956)
{
	return Global_2740191.f_28.f_43;
}

BOOL func_654(BOOL bParam0) // Position - 0x29FC4 (171972)
{
	if (bParam0)
		return func_657();

	return func_655(func_656());
}

BOOL func_655(int iParam0) // Position - 0x29FE0 (172000)
{
	return iParam0 > 0 && iParam0 < 6;
}

int func_656() // Position - 0x29FF5 (172021)
{
	return Global_1908496[PLAYER::PLAYER_ID() /*313*/].f_273;
}

BOOL func_657() // Position - 0x2A00B (172043)
{
	return func_651(526, -1) || MISC::HAS_FINALIZED_CHOSEN_CRIMINAL_CAREER() && func_659() != 0 && !func_658(0);
}

BOOL func_658(int iParam0) // Position - 0x2A03B (172091)
{
	int num;

	num = func_261(15548, -1);
	return IS_BIT_SET(num, iParam0);
}

int func_659() // Position - 0x2A052 (172114)
{
	return MISC::GET_CHOSEN_CRIMINAL_CAREER();
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x2A05E (172126)
{
	if (Global_1575060 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_666())
		return true;

	if (Global_2699147)
		return true;

	if (func_665())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_663())
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

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x2A0E2 (172258)
{
	switch (func_424())
	{
		case 0:
			return func_662();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

Hash func_662() // Position - 0x2A115 (172309)
{
	switch (Global_2699255)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_663() // Position - 0x2A139 (172345)
{
	return Global_2684748.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x2A148 (172360)
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_665() // Position - 0x2A15F (172383)
{
	return Global_2696555;
}

BOOL func_666() // Position - 0x2A16B (172395)
{
	return Global_2684748.f_695;
}

void func_667() // Position - 0x2A17A (172410)
{
	BUILTIN::WAIT(0);
	return;
}

BOOL func_668() // Position - 0x2A187 (172423)
{
	return MISC::GET_GAME_TIMER() <= Global_24148.f_6481 + 100;
}

void func_669() // Position - 0x2A19C (172444)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			func_4(iLocal_100.f_4, NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT(), func_5(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 300));
	
		Global_2740191.f_28.f_82 = 0;
	}

	if (HUD::DOES_BLIP_EXIST(blLocal_257))
		HUD::REMOVE_BLIP(&blLocal_257);

	GRAPHICS::DELETE_CHECKPOINT(iLocal_258);
	HUD::SET_MISSION_NAME(false, 0);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0)
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			func_305(true, -1);
		}
	}
	else
	{
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("R2P_WARNH" /*~s~You are leaving the Impromptu Race start location.*/))
		HUD::CLEAR_HELP(true);

	func_19();
	PATHFIND::SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(false);
	PED::SPAWNPOINTS_CANCEL_SEARCH();
	HUD::SET_MINIMAP_BLOCK_WAYPOINT(false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!IS_BIT_SET(iLocal_256, 1))
			func_674();
	
		if (IS_BIT_SET(iLocal_256, 3))
		{
			if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] != PV_COMP_HEAD)
			{
				Global_1845274[PLAYER::PLAYER_ID() /*877*/] = PV_COMP_INVALID;
				Global_1845274[PLAYER::PLAYER_ID() /*877*/].f_36.f_2 = -1;
			}
		
			func_288(2, false);
		}
	
		if (iLocal_100.f_22 >= 3)
			func_673();
	
		func_289(false);
		func_290(false);
	}

	func_672(&uLocal_305);
	Global_2740191.f_28.f_80 = 0;
	Global_2740191.f_28.f_41 = 0;
	Global_2740191.f_28.f_81 = 0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (Global_1057439 == 1)
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_284())
				func_671(6, false, -1);

	MISC::CLEAR_BIT(&(Global_2740191.f_4735), 16);
	func_670();
	return;
}

void func_670() // Position - 0x2A2FE (172798)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_671(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2A30A (172810)
{
	if (!func_287() || bParam1)
	{
		Global_1574582 = true;
		func_285(true);
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_284() && !func_280(PLAYER::PLAYER_ID()) && !func_636(PLAYER::PLAYER_ID()))
			Global_1057439 = 1;
	
		Global_1888882[PLAYER::PLAYER_ID() /*611*/].f_8 = 1;
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}

	return;
}

void func_672(int* piParam0) // Position - 0x2A377 (172919)
{
	if (*piParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
		*piParam0 = 0;
	}

	return;
}

void func_673() // Position - 0x2A390 (172944)
{
	if (Global_2672967.f_2590[0 /*80*/].f_2 != 0)
		Global_2672967.f_2590[0 /*80*/].f_2 = 5;

	return;
}

void func_674() // Position - 0x2A3B5 (172981)
{
	var unk;

	if (IS_BIT_SET(iLocal_256, 7))
		unk.f_3 = -153984855;
	else
		unk.f_3 = 1334380224;

	unk.f_11 = PLAYER::PLAYER_ID();
	func_593(unk, func_594(false));
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2A3F0 (173040)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_676(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20) // Position - 0x2A403 (173059)
{
	int i;

	func_689(32, uParam0);
	func_688(0, -1, false);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_100, 25, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_127, 129, 0);
	func_600(0, -1, false);

	if (!func_687())
		return false;

	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iLocal_100.f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		iLocal_100.f_10 = { 0f, 0f, -2000f };
		MISC::SET_BIT(&(uLocal_307.f_15), 0);
	}

	bLocal_337 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	Global_2740191.f_28.f_41 = 1;
	iLocal_269 = -1;
	func_27(&uLocal_267, false, false);
	func_678(1, 1, 0, 0, 0);
	Global_2740191.f_28.f_46 = 0;

	for (i = 0; i < func_561(); i = i + 1)
	{
		Global_2740191.f_28.f_47[i] = 0;
	}

	if (Global_1845274[PLAYER::PLAYER_ID() /*877*/] == PV_COMP_HEAD)
		iLocal_98 = 2;

	func_600(0, -1, false);
	func_677(&uLocal_282);
	uLocal_127[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	return true;
}

void func_677(var uParam0) // Position - 0x2A4F1 (173297)
{
	if (IS_BIT_SET(Global_1668463, 2))
		uParam0->f_13 = -0.005f;

	Global_24146 = (0.034722f * 3f) + 0.05f + uParam0->f_13;
	uParam0->f_14 = func_314(Global_24145 + 0f + (Global_24147 * 0.5f));
	uParam0->f_14.f_1 = 0.1f + 0.034722f + uParam0->f_13;
	uParam0->f_14.f_2 = func_314(Global_24147 + 0.0005f);
	uParam0->f_14.f_3 = 0.09f;
	uParam0->f_14.f_4 = 255;
	uParam0->f_14.f_5 = 255;
	uParam0->f_14.f_6 = 255;
	uParam0->f_14.f_7 = 255;
	*uParam0 = 4;
	uParam0->f_1 = 0.5f;
	uParam0->f_2 = 0.75f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = 0;
	uParam0->f_9 = 0f;
	uParam0->f_8 = 0f;
	uParam0->f_11 = Global_24145 + 0.00390625f;
	uParam0->f_11.f_1 = 0.11f + uParam0->f_13;
	return;
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2A5E2 (173538)
{
	if (Global_2672967.f_1761.f_703.f_16 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_2658019[Global_2672967.f_1761.f_703.f_16 /*467*/].f_428, 0) && func_679())
			iParam0 = 23;

	if (iParam0 != 18 && iParam0 != 17)
		Global_2643616 = PV_COMP_HEAD;

	Global_2635523.f_491 = iParam0;
	Global_2635523.f_491.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635523.f_491.f_2 = iParam1;
	Global_2635523.f_491.f_3 = iParam2;
	Global_2635523.f_491.f_4 = iParam3;
	Global_2635523.f_491.f_5 = iParam4;
	return;
}

BOOL func_679() // Position - 0x2A67E (173694)
{
	if (func_234(PLAYER::PLAYER_ID()) == 229 || func_234(PLAYER::PLAYER_ID()) == 191 || func_686(*Global_4718592.f_197275) || func_685() || func_684() || func_683() || Global_2708777.f_227 == true || Global_2635523.f_2054 && func_680(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_680(Player plParam0) // Position - 0x2A704 (173828)
{
	if (func_682(plParam0))
		return 1;

	if (func_681(plParam0))
		return 1;

	return 0;
}

BOOL func_681(Player plParam0) // Position - 0x2A727 (173863)
{
	return func_638(plParam0, 20);
}

BOOL func_682(Player plParam0) // Position - 0x2A737 (173879)
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1888882[player /*611*/].f_1, 7);

	return false;
}

BOOL func_683() // Position - 0x2A75A (173914)
{
	return Global_2708776;
}

BOOL func_684() // Position - 0x2A766 (173926)
{
	return Global_1836738;
}

BOOL func_685() // Position - 0x2A772 (173938)
{
	if (Global_4718592 == PV_COMP_FEET)
		return true;

	return false;
}

BOOL func_686(int iParam0) // Position - 0x2A787 (173959)
{
	return iParam0 == 92;
}

BOOL func_687() // Position - 0x2A794 (173972)
{
	var unk;

	func_27(&unk, true, false);

	while (true)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return false;
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return true;
	
		if (func_666())
			return false;
	
		if (_DOES_EVENT_OF_TYPE_EXIST(157))
			return false;
	
		if (func_599(&unk, 120000, true))
			return false;
	
		BUILTIN::WAIT(0);
	}

	return false;
}

int func_688(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2A7F2 (174066)
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_670();
			else
				return 0;
	
		if (!func_477(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_670();
					else
						return 0;
			
				if (func_666())
					if (!bParam2)
						func_670();
					else
						return 0;
			
				if (_DOES_EVENT_OF_TYPE_EXIST(157))
					if (!bParam2)
						func_670();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_670();
				else
					return 0;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574668 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_670();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_670();
		else
			return 0;

	return 1;
}

void func_689(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x2A908 (174344)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_670();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, uParam1.f_16);
	return;
}

