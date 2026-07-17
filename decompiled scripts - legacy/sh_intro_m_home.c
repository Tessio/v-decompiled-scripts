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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	Hash hLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	BOOL bLocal_60 = 0;
	int iLocal_61 = 0;
	BOOL bLocal_62 = 0;
	Cam caLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	Interior inLocal_68 = 0;
	Interior inLocal_69 = 0;
	var uLocal_70 = 15;
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
#endregion

void main() // Position - 0x0 (0)
{
	var entityCoords;
	var unk3;

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
	fLocal_47 = 80f;
	fLocal_48 = 140f;
	fLocal_49 = 180f;
	iLocal_52 = 3;
	iLocal_54 = 2;
	iLocal_64 = -1;
	func_232(25);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
		func_230();

	iLocal_54 = 0;
	iLocal_64 = -1;
	bLocal_60 = false;
	inLocal_68 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-809.1374f, 179.9676f, 71.1531f, "v_michael");
	inLocal_69 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1f, 188.2f, 73.2f, "v_michael_garage");
	bLocal_58 = false;
	bLocal_59 = false;
	func_229(&uLocal_70);
	func_228(&uLocal_70, -844.14935f, 162.55867f, 65.89324f);
	func_228(&uLocal_70, -849.6625f, 166.86949f, 66.54545f);
	func_228(&uLocal_70, -846.0641f, 198.59845f, 76.9182f);
	func_228(&uLocal_70, -796.5247f, 194.14273f, 77.94861f);
	func_228(&uLocal_70, -774.87134f, 195.20262f, 77.13674f);
	func_228(&uLocal_70, -768.13275f, 190.18369f, 76.24245f);
	func_228(&uLocal_70, -761.38745f, 139.44395f, 66.47416f);
	func_228(&uLocal_70, -764.73773f, 137.70203f, 66.47416f);
	func_228(&uLocal_70, -800.0312f, 141.21796f, 61.96946f);
	func_228(&uLocal_70, -851.1459f, 139.22386f, 60.13711f);
	func_228(&uLocal_70, -850.16095f, 150.52716f, 64.38181f);
	func_228(&uLocal_70, -844.149f, 155.82861f, 65.77842f);
	func_227(&uLocal_70);

	while (true)
	{
		switch (iLocal_54)
		{
			case 0:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) <= 0)
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					
						if (!func_226(&uLocal_70, entityCoords))
							iLocal_54 = 1;
						else
							BUILTIN::WAIT(3000);
					}
				}
				break;
		
			case 1:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -871.9259f, 162.00055f, 52.99224f, -741.59485f, 155.08728f, 113.025475f, 90f, false, true, 0))
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
							STREAMING::NEW_LOAD_SCENE_STOP();
					
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(-817.6152f, 178.5613f, 71.2275f, 200f, 0);
						iLocal_67 = MISC::GET_GAME_TIMER();
						iLocal_54 = 2;
					}
				}
				break;
		
			case 2:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_57)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -871.9259f, 162.00055f, 52.99224f, -741.59485f, 155.08728f, 113.025475f, 90f, false, true, 0))
						{
							if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								STREAMING::NEW_LOAD_SCENE_STOP();
						
							iLocal_54 = 1;
						}
					}
				
					unk3 = { -808.7974f, 169.31934f, 70.9558f };
					entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				
					if (func_225(entityCoords, unk3, 100f) || bLocal_57)
					{
						if (func_222() || bLocal_57)
						{
							if (INTERIOR::IS_VALID_INTERIOR(inLocal_68))
							{
								if (!INTERIOR::IS_INTERIOR_READY(inLocal_68))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_68);
									bLocal_58 = true;
								}
							}
						
							if (INTERIOR::IS_VALID_INTERIOR(inLocal_69))
							{
								if (!INTERIOR::IS_INTERIOR_READY(inLocal_69))
								{
									INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_69);
									bLocal_59 = true;
								}
							}
						
							if (Global_114010)
								bLocal_60 = true;
						
							if (entityCoords.f_2 > 59f && entityCoords.f_2 < 90f || bLocal_57)
							{
								if (func_226(&uLocal_70, entityCoords) || bLocal_57)
								{
									if (func_216() || bLocal_57)
									{
										if (!bLocal_57)
											func_215(true);
									
										if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || bLocal_60)
										{
											if (bLocal_60 || STREAMING::IS_NEW_LOAD_SCENE_LOADED() || MISC::GET_GAME_TIMER() - iLocal_67 > 12000)
											{
												STREAMING::NEW_LOAD_SCENE_STOP();
												iLocal_67 = MISC::GET_GAME_TIMER();
												func_215(true);
												iLocal_55 = 0;
												bLocal_56 = false;
												iLocal_65 = MISC::GET_GAME_TIMER();
												iLocal_67 = MISC::GET_GAME_TIMER();
												iLocal_54 = 3;
											}
											else
											{
												if (!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
													CAM::DO_SCREEN_FADE_OUT(800);
											
												func_215(true);
											}
										}
										else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
										{
											STREAMING::NEW_LOAD_SCENE_START_SPHERE(-817.6152f, 178.5613f, 71.2275f, 200f, 0);
											iLocal_67 = MISC::GET_GAME_TIMER();
										}
										else
										{
											BUILTIN::WAIT(100);
										}
									}
								}
								else
								{
									BUILTIN::WAIT(100);
								}
							}
							else
							{
								BUILTIN::WAIT(100);
							}
						}
						else
						{
							func_214();
							BUILTIN::WAIT(100);
						}
					}
					else
					{
						func_214();
						BUILTIN::WAIT(1000);
					}
				}
				else
				{
					func_214();
					BUILTIN::WAIT(1000);
				}
				break;
		
			case 3:
				if (INTERIOR::IS_VALID_INTERIOR(inLocal_68) && INTERIOR::IS_INTERIOR_READY(inLocal_68) && INTERIOR::IS_VALID_INTERIOR(inLocal_69) && INTERIOR::IS_INTERIOR_READY(inLocal_69) || MISC::GET_GAME_TIMER() - iLocal_67 > 500)
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					iLocal_67 = MISC::GET_GAME_TIMER();
					iLocal_55 = 0;
					bLocal_56 = false;
					iLocal_65 = MISC::GET_GAME_TIMER();
					iLocal_67 = MISC::GET_GAME_TIMER();
					iLocal_54 = 4;
				}
				else
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_68);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(inLocal_69);
					bLocal_58 = true;
					bLocal_59 = true;
				}
				break;
		
			case 4:
				func_2();
				break;
		
			case 5:
				func_1(25);
				MISC::SET_BIT(&Global_2883591[17], 1);
				MISC::SET_BIT(&Global_2883591[18], 1);
				MISC::SET_BIT(&Global_2883591[19], 1);
				func_230();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

int func_1(int iParam0) // Position - 0x57B (1403)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114963.f_9094.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_114963.f_9094.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

void func_2() // Position - 0x5D2 (1490)
{
	var unk;
	var unk8;
	var unk15;
	Vector3 vector;
	float radius;
	int num;
	int num2;

	unk = 2;
	unk8 = 2;
	unk15 = 2;
	radius = 20f;
	num = 9000;
	num2 = 11000;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_55)
		{
			case 0:
				if (func_204(0, 1093140480, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
						CAM::DO_SCREEN_FADE_IN(800);
				
					HUD::CLEAR_PRINTS();
				
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						HUD::CLEAR_HELP(true);
				
					func_202();
					func_192(true, true, true, false, false, false, false);
					func_64(0f, 0f, 0f, 1, 1, 1, 0, 0, false, false, true, 1, true);
					CAM::SET_WIDESCREEN_BORDERS(false, 0);
					HUD::DISPLAY_HUD(true);
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					iLocal_65 = MISC::GET_GAME_TIMER();
					iLocal_67 = MISC::GET_GAME_TIMER();
					iLocal_66 = MISC::GET_GAME_TIMER();
				
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					MISC::CLEAR_AREA_OF_COPS(-808.7974f, 169.31934f, 70.9558f, 150f, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-808.7974f, 169.31934f, 70.9558f, 100f, 0);
					unk[0 /*3*/] = { -842.1f, 178.6f, 72.2f };
					unk8[0 /*3*/] = { 6.6f, 0f, -96.1f };
					unk15[0] = 39.8f;
					unk[1 /*3*/] = { -842f, 178.8f, 72.2f };
					unk8[1 /*3*/] = { 6.6f, 0f, -96.1f };
					unk15[1] = 39.8f;
					vector = { func_63(unk8[0 /*3*/]) };
				
					if (!CAM::DOES_CAM_EXIST(caLocal_63))
						caLocal_63 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				
					if (CAM::DOES_CAM_EXIST(caLocal_63))
					{
						CAM::SET_CAM_PARAMS(caLocal_63, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_63, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 0, 0, 2);
					}
				
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					func_10();
					bLocal_56 = true;
					_DISPLAY_HELP_TEXT("SHI_M_HOUSE_1" /*Este es el refugio de Michael. Para guardar vehículos, estaciónalos en el garage.*/, num + 10000);
					AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE");
					iLocal_55 = 1;
				}
				break;
		
			case 1:
				unk[0 /*3*/] = { -810.7f, 179.2f, 77.3f };
				unk8[0 /*3*/] = { -10.7f, 0f, 60.7f };
				unk15[0] = 50f;
				unk[1 /*3*/] = { -810.7f, 179.2f, 77.2f };
				unk8[1 /*3*/] = { -10.7f, 0f, 60.7f };
				unk15[1] = 50f;
				vector = { func_63(unk8[0 /*3*/]) };
				radius = 12f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && INTERIOR::IS_VALID_INTERIOR(inLocal_68) && INTERIOR::IS_VALID_INTERIOR(inLocal_69) && INTERIOR::IS_INTERIOR_READY(inLocal_68) && INTERIOR::IS_INTERIOR_READY(inLocal_69) && MISC::GET_GAME_TIMER() - iLocal_65 > num || MISC::GET_GAME_TIMER() - iLocal_67 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_63))
					{
						CAM::SET_CAM_PARAMS(caLocal_63, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_63, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 0, 0, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_2" /*Duerme en la cama para guardar la partida.*/, num + 10000);
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_67 = MISC::GET_GAME_TIMER();
						iLocal_55 = 2;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 2:
				unk[0 /*3*/] = { -814.4f, 174.1f, 76.7f };
				unk8[0 /*3*/] = { -1.2f, 0f, -70.6f };
				unk15[0] = 50.1f;
				unk[1 /*3*/] = { -814.4f, 174.1f, 76.7f };
				unk8[1 /*3*/] = { 18.9f, 0f, -70.6f };
				unk15[1] = 50.1f;
				vector = { func_63(unk8[0 /*3*/]) };
				radius = 10f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_65 > num || MISC::GET_GAME_TIMER() - iLocal_67 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_63))
					{
						CAM::SET_CAM_PARAMS(caLocal_63, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_63, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_3" /*Puedes cambiarte de ropa en el armario.*/, num + 10000);
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_67 = MISC::GET_GAME_TIMER();
						iLocal_55 = 3;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 3:
				unk[0 /*3*/] = { -803.8f, 168.2f, 73.4f };
				unk8[0 /*3*/] = { -10.5f, 0f, -18.4f };
				unk15[0] = 54f;
				unk[1 /*3*/] = { -803.8f, 168.3f, 73.6f };
				unk8[1 /*3*/] = { -10.5f, 0f, -18.4f };
				unk15[1] = 54f;
				vector = { func_63(unk8[0 /*3*/]) };
				radius = 25f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_65 > num || MISC::GET_GAME_TIMER() - iLocal_67 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_63))
					{
						CAM::SET_CAM_PARAMS(caLocal_63, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num / 2, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_63, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num / 2, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						_DISPLAY_HELP_TEXT("SHI_M_HOUSE_4" /*Camina por la casa para encontrar diversas actividades en las que participar.*/, num + 10000);
						iLocal_65 = MISC::GET_GAME_TIMER();
						iLocal_67 = MISC::GET_GAME_TIMER();
						iLocal_55 = 4;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 4:
				unk[0 /*3*/] = { -803.574f, 181.4357f, 73.2662f };
				unk8[0 /*3*/] = { -8.1845f, 0f, -48.1518f };
				unk15[0] = 41.6f;
				unk[1 /*3*/] = { -803.6697f, 181.5426f, 73.2662f };
				unk8[1 /*3*/] = { -8.1845f, 0f, -48.1518f };
				unk15[1] = 41.6f;
				vector = { func_63(unk8[0 /*3*/]) };
				radius = 12f;
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() - iLocal_65 > num / 2 || MISC::GET_GAME_TIMER() - iLocal_67 > num2)
				{
					if (CAM::DOES_CAM_EXIST(caLocal_63))
					{
						CAM::SET_CAM_PARAMS(caLocal_63, unk[0 /*3*/], unk8[0 /*3*/], unk15[0], num / 2, 1, 1, 2);
						CAM::SET_CAM_PARAMS(caLocal_63, unk[1 /*3*/], unk8[1 /*3*/], unk15[1], num / 2, 1, 1, 2);
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_67 = MISC::GET_GAME_TIMER();
						iLocal_55 = 5;
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(unk[0 /*3*/], vector, radius, 2);
				}
				break;
		
			case 5:
				if (iLocal_61 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == FIRST_PERSON && MISC::GET_GAME_TIMER() - iLocal_65 >= num - 300)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_61 = 1;
					}
				}
			
				if (MISC::GET_GAME_TIMER() - iLocal_65 > num)
					iLocal_55 = 6;
				break;
		
			case 6:
				func_215(false);
			
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_IN(800);
			
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					HUD::CLEAR_HELP(true);
			
				func_192(false, true, true, false, false, false, false);
				func_6(1, 1, 1, true);
				GRAPHICS::RESET_ADAPTATION(6);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			
				if (CAM::DOES_CAM_EXIST(caLocal_63))
				{
					CAM::SET_CAM_ACTIVE(caLocal_63, false);
					CAM::DESTROY_CAM(caLocal_63, false);
				}
			
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			
				if (bLocal_58)
				{
					if (INTERIOR::IS_VALID_INTERIOR(inLocal_68))
						INTERIOR::UNPIN_INTERIOR(inLocal_68);
				
					bLocal_58 = false;
				}
			
				if (bLocal_59)
				{
					if (INTERIOR::IS_VALID_INTERIOR(inLocal_69))
						INTERIOR::UNPIN_INTERIOR(inLocal_69);
				
					bLocal_59 = false;
				}
			
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE_STOP");
				bLocal_56 = false;
				iLocal_54 = 5;
				break;
		}
	
		if (iLocal_55 > 0 && iLocal_55 < 6)
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE);
		
			if (!bLocal_62)
				if (func_4(1000))
					if (MISC::GET_GAME_TIMER() - iLocal_66 > 1000)
						bLocal_62 = true;
			else if (!func_3())
				iLocal_55 = 6;
		}
	}

	return;
}

BOOL func_3() // Position - 0xE27 (3623)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

BOOL func_4(int iParam0) // Position - 0xE59 (3673)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_29 > iParam0)
			Global_28 = MISC::GET_GAME_TIMER();
	
		Global_29 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			if (func_5())
			{
				Global_28 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_5() // Position - 0xEA3 (3747)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_6(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xED5 (3797)
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, false);
	PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam3, 0);
	func_192(false, true, false, false, false, false, false);

	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}

	HUD::CLEAR_HELP(true);

	if (iParam0 == 1)
		CAM::SET_WIDESCREEN_BORDERS(false, 0);

	if (iParam1 == 1)
		if (hLocal_53 != 0 && hLocal_53 != joaat("OBJECT") && hLocal_53 != joaat("GADGET_PARACHUTE"))
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_53, false))
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), hLocal_53, false);

	if (func_7(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);

	return;
}

BOOL func_7(Ped pedParam0) // Position - 0xF7F (3967)
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xF9F (3999)
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0xFC0 (4032)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_10() // Position - 0xFD7 (4055)
{
	Vehicle playersLastVehicle;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -840.6724f, 159.0602f, 66.2181f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 305.1602f);
	}

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, false, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
		
			if (ENTITY::GET_ENTITY_HEALTH(playersLastVehicle) < 1)
				ENTITY::SET_ENTITY_HEALTH(playersLastVehicle, 10, 0, 0);
		
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(playersLastVehicle) < 1f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(playersLastVehicle, 10f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(playersLastVehicle) < 1f)
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(playersLastVehicle, 10f);
		
			MISC::CLEAR_AREA(-857.1225f, 157.4701f, 63.7638f, 5f, true, false, false, false);
			ENTITY::SET_ENTITY_COORDS(playersLastVehicle, -857.1225f, 157.4701f, 63.7638f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(playersLastVehicle, 352.5659f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
			func_11(playersLastVehicle, -857.1225f, 157.4701f, 63.7638f, 352.5659f, 24, false);
		}
	}

	return;
}

void func_11(Vehicle veParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x10FF (4351)
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_79127.f_484[25], false))
				if (Global_79127.f_484[25] == veParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tourbus"))
				return;
	
		func_62(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_57(veParam0, &unk);
	
		if (func_56(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
				Global_80115 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_49(iParam5, &unk, fParam1, fParam4, func_55(veParam0));
		func_12(iParam5, veParam0, 0);
	}

	return;
}

void func_12(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x1228 (4648)
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_45(&Global_79127.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_79127.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_79127.f_555[0 /*21*/].f_9, 10))
		if (Global_79127.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(veParam1))
			return;

	if (Global_80034 != -1 && Global_80034 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
		
			if (iParam0 == 24)
				Global_114963.f_32759.f_4801 = func_34();
		
			if (veParam1 != Global_79127.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_33(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_13(vehicle, _CHAR_NULL);
				}
			
				Global_80033 = veParam1;
				Global_80034 = iParam0;
				Global_80035 = iParam2;
			}
		}
	}

	return;
}

void func_13(Vehicle veParam0, eCharacter echParam1) // Position - 0x133F (4927)
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_14(veParam0))
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
			echParam1 = Global_114963.f_2370.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114963.f_32759.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114963.f_32759.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114963.f_32759.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_114963.f_32759.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_114963.f_32759.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_114963.f_32759.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114963.f_32759.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_114963.f_32759.f_5600[i /*78*/].f_1)))
					Global_114963.f_32759.f_5600[i /*78*/].f_66 = 0;
	}

	Global_114963.f_32759.f_5590 = echParam1;
	Global_80032 = veParam0;
	Global_114963.f_32759.f_5588 = 1;
	func_57(veParam0, &(Global_114963.f_32759.f_5510));
	return;
}

BOOL func_14(Vehicle veParam0) // Position - 0x1541 (5441)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_31(veParam0, 0, false) || func_31(veParam0, 1, false) || func_31(veParam0, 2, false) || func_55(veParam0) != _CHAR_NULL || func_30(veParam0) || func_29(veParam0) || func_28(veParam0) || func_27(veParam0) || !func_15(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_29(veParam0);
		func_29(veParam0);
		func_31(veParam0, 0, false);
		func_31(veParam0, 1, false);
		func_31(veParam0, 2, false);
		func_55(veParam0) != _CHAR_NULL;
		return false;
	}

	return true;
}

BOOL func_15(Hash hParam0) // Position - 0x161E (5662)
{
	if (hParam0 == 0)
		return false;

	if (!func_16(hParam0, false, -1))
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

BOOL func_16(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x17DC (6108)
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
		if (!func_25() && !func_24() && !func_23() && !func_22() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (func_21() || MISC::IS_PC_VERSION() || func_20())
		{
		}
		else if (!func_23())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_19(hParam0, iParam2))
			return false;

	if (!func_17(hParam0))
		return false;

	return true;
}

BOOL func_17(Hash hParam0) // Position - 0x1961 (6497)
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

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x1A2A (6698)
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_19(Hash hParam0, int iParam1) // Position - 0x1A41 (6721)
{
	int cloudTimeAsInt;
	int num;

	if (Global_2708655)
		return true;

	if (!Global_2708656 && iParam1 >= 0 && iParam1 <= 607)
		if (IS_BIT_SET(Global_1583771[iParam1 /*143*/].f_104, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case -2060419754:
			num = Global_262145.f_35677[0];
			break;
	
		case -558471518:
			num = Global_262145.f_35677[1];
			break;
	
		case 707880171:
			num = Global_262145.f_35677[2];
			break;
	
		case 679458690:
			num = Global_262145.f_35677[3];
			break;
	
		case -277011826:
			num = Global_262145.f_35677[4];
			break;
	
		case 1494708164:
			num = Global_262145.f_35677[5];
			break;
	
		case -978456382:
			num = Global_262145.f_35677[6];
			break;
	
		case joaat("warden"):
			num = Global_262145.f_35677[7];
			break;
	
		case -2022972089:
			num = Global_262145.f_35677[8];
			break;
	
		case -1419130662:
			num = Global_262145.f_35677[9];
			break;
	
		case 621456687:
			num = Global_262145.f_35677[10];
			break;
	
		case -39084089:
			num = Global_262145.f_35677[11];
			break;
	
		case -1647260751:
			num = Global_262145.f_35677[12];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	return false;
}

BOOL func_20() // Position - 0x1BD2 (7122)
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_21() // Position - 0x1BE8 (7144)
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_22() // Position - 0x1BFE (7166)
{
	return false;
}

BOOL func_23() // Position - 0x1C07 (7175)
{
	return true;
}

BOOL func_24() // Position - 0x1C10 (7184)
{
	return true;
}

BOOL func_25() // Position - 0x1C19 (7193)
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x1C32 (7218)
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

BOOL func_27(Vehicle veParam0) // Position - 0x1CEA (7402)
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_16(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_28(Vehicle veParam0) // Position - 0x1D31 (7473)
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99822[i]))
			if (Global_99822[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_29(Vehicle veParam0) // Position - 0x1D6C (7532)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_99792[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_99792[i], false))
				if (Global_99792[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_99792[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_30(Vehicle veParam0) // Position - 0x1DE8 (7656)
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[24]))
		if (veParam0 == Global_79127.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_79127.f_484[i])
					return true;
	}

	return false;
}

BOOL func_31(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x1ED0 (7888)
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_32(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_114963.f_7236[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_32(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x1F3E (7998)
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

Vehicle func_33(int iParam0) // Position - 0x2017 (8215)
{
	if (iParam0 == -1)
		return 0;

	return Global_79127.f_139[iParam0];
}

var func_34() // Position - 0x2033 (8243)
{
	var unk;

	func_44(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_43(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_42(&unk, CLOCK::GET_CLOCK_HOURS());
	func_37(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_36(&unk, CLOCK::GET_CLOCK_MONTH());
	func_35(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_35(var uParam0, int iParam1) // Position - 0x2079 (8313)
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

void func_36(var uParam0, int iParam1) // Position - 0x20FF (8447)
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x2132 (8498)
{
	int num;
	int num2;

	num = func_41(*uParam0);
	num2 = func_39(*uParam0);

	if (iParam1 < 1 || iParam1 > func_38(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_38(int iParam0, int iParam1) // Position - 0x2183 (8579)
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

int func_39(int iParam0) // Position - 0x2225 (8741)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_40(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2247 (8775)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_41(int iParam0) // Position - 0x225E (8798)
{
	return iParam0 & 15;
}

void func_42(var uParam0, int iParam1) // Position - 0x226B (8811)
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x22A5 (8869)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0x22E0 (8928)
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_45(var uParam0, int iParam1) // Position - 0x231C (8988)
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_46(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_46(CHAR_MICHAEL, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_46(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_46(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_46(CHAR_FRANKLIN, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_46(CHAR_FRANKLIN, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_46(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_46(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_46(CHAR_TREVOR, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (_IS_EXCLUSIVE_CONTENT_UNLOCKED())
				uParam0->f_4 = joaat("blimp2");
			else
				uParam0->f_4 = joaat("blimp");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_114963.f_32759.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") || uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_56(Global_114963.f_32759.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_114963.f_32759.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_114963.f_32759.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_114963.f_32759.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_56(Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_56(Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_114963.f_2370.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_114963.f_2370.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

int func_46(eCharacter echParam0, int iParam1) // Position - 0x3A0B (14859)
{
	int num;

	if (func_48(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_47(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_47(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x3A4D (14925)
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
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_114963.f_9094.f_99.f_58[128] && !Global_114963.f_9094.f_99.f_58[131])
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
	
		case CHAR_TREVOR:
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
				
					if (Global_114963.f_9094.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_114963.f_9094.f_99.f_58[118])
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

BOOL func_48(eCharacter echParam0) // Position - 0x3CA9 (15529)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, eCharacter echParam6) // Position - 0x3CB5 (15541)
{
	if (func_45(&Global_79127.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_79127.f_555[0 /*21*/].f_9, 10))
		{
			func_54(iParam0);
			func_53(uParam1, &Global_114963.f_32759.f_69[Global_79127.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_79127.f_555[0 /*21*/].f_9, 11))
			{
				Global_114963.f_32759.f_1864[Global_79127.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_114963.f_32759.f_1934[Global_79127.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_114963.f_32759.f_1864[Global_79127.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_114963.f_32759.f_1934[Global_79127.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_114963.f_32759.f_1958[Global_79127.f_555[0 /*21*/].f_14] = echParam6 + 1;
			func_50(iParam0, true);
		}
	}

	return;
}

void func_50(int iParam0, BOOL bParam1) // Position - 0x3DAE (15790)
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_52(iParam0, 0))
		{
			func_51(iParam0, 1, false);
			func_51(iParam0, 2, false);
			func_51(iParam0, 3, false);
			func_51(iParam0, 4, false);
			func_51(iParam0, 0, true);
			Global_79127[iParam0] = true;
		}
	}
	else
	{
		func_51(iParam0, 0, false);
	}

	return;
}

void func_51(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3E0B (15883)
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_114963.f_32759[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_114963.f_32759[iParam0], iParam1);

	return;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x3E46 (15942)
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_114963.f_32759[iParam0], iParam1);
}

void func_53(var uParam0, var uParam1) // Position - 0x3E66 (15974)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

void func_54(int iParam0) // Position - 0x3F32 (16178)
{
	if (iParam0 == -1)
		return;

	if (func_45(&Global_79127.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_79127.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_79127.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_79127.f_139[iParam0]);
			Global_79127.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_79127.f_555[0 /*21*/].f_9, 13))
			func_50(iParam0, false);
	}

	return;
}

eCharacter func_55(Vehicle veParam0) // Position - 0x3FA9 (16297)
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_99792[i]))
			if (Global_99792[i] == veParam0)
				return Global_99802[i];
	}

	return _CHAR_NULL;
}

BOOL func_56(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x400E (16398)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_57(Vehicle veParam0, var uParam1) // Position - 0x4055 (16469)
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_61(uParam1);
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
	
		if (uParam1->f_65 == -1 && !func_60(uParam1->f_66))
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
	
		func_59(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_58(i + 1));
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

int func_58(int iParam0) // Position - 0x4300 (17152)
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

int func_59(var uParam0, var uParam1, var uParam2) // Position - 0x43B0 (17328)
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

BOOL func_60(int iParam0) // Position - 0x45A3 (17827)
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

void func_61(var uParam0) // Position - 0x45C3 (17859)
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

void func_62(int iParam0) // Position - 0x4674 (18036)
{
	iParam0 != 24 && iParam0 != 25;
	func_54(iParam0);
	func_50(iParam0, false);
	return;
}

Vector3 func_63(float fParam0, var uParam1, var uParam2) // Position - 0x469B (18075)
{
	return -BUILTIN::SIN(fParam0.f_2) * BUILTIN::COS(fParam0), BUILTIN::COS(fParam0.f_2) * BUILTIN::COS(fParam0), BUILTIN::SIN(fParam0);
}

void func_64(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, int iParam11, BOOL bParam12) // Position - 0x46C8 (18120)
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_PLAYING(playerIndex))
	{
		func_191(false);
	
		if (bParam9)
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
	
		if (bParam8)
		{
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					if (func_185(PLAYER::PLAYER_PED_ID(), 8, 15))
						func_67(PLAYER::PLAYER_PED_ID(), 8, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				
					if (func_185(PLAYER::PLAYER_PED_ID(), PV_COMP_TASK, PV_COMP_FEET))
						func_67(PLAYER::PLAYER_PED_ID(), 9, PV_COMP_HEAD, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_FRANKLIN:
					if (func_185(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_BERD) || func_185(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_DECL))
						func_67(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			
				case CHAR_TREVOR:
					if (func_185(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, PV_COMP_LOWR))
						func_67(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
			}
		}
	
		if (iParam6 == 1)
			MISC::CLEAR_AREA_OF_PEDS(_GET_PLAYER_COORDS(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
	
		if (iParam7 == 1)
			MISC::CLEAR_AREA_OF_OBJECTS(fParam0, 30f, 0);
	
		if (bParam10)
			FIRE::STOP_FIRE_IN_RANGE(fParam0, 30f);
	
		MISC::CLEAR_AREA_OF_PROJECTILES(fParam0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(playerIndex, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playerIndex, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerIndex, true);
	
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
	
		HUD::CLEAR_PRINTS();
	
		if (iParam11 == 1)
			HUD::CLEAR_HELP(true);
	
		if (iParam3 == 1)
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
	
		if (iParam4 == 1)
		{
			hLocal_53 = 0;
		
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				hLocal_53 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
	
		if (iParam5 == 1)
			func_65(500, false);
	}

	return;
}

void func_65(int iParam0, BOOL bParam1) // Position - 0x4886 (18566)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		if (!CAM::IS_SCREEN_FADING_IN())
			CAM::DO_SCREEN_FADE_IN(iParam0);

	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			BUILTIN::WAIT(0);
		}
	}

	return;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x48C2 (18626)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

int func_67(Ped pedParam0, int iParam1, ePedComponentType epctParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x48D5 (18645)
{
	int i;
	int j;
	int k;
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	ePedComponentType entityModel;
	var unk;
	var unk18;
	var unk28;
	var unk45;
	var unk59;

	if (PED::IS_PED_INJURED(pedParam0) || epctParam2 == -99)
		return 0;

	Global_80118 = Global_80118 + 1;
	type3 = -99;
	type4 = -99;
	type5 = -99;
	type6 = -99;
	type7 = -99;
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (iParam5 == 0)
	{
		Global_80120[1 /*14*/] = { func_120(entityModel, iParam1, epctParam2, -1) };
	
		if (!func_119(iParam3))
		{
			Global_80118 = Global_80118 - 1;
			return 0;
		}
	
		func_110(iParam1);
	}

	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (entityModel == joaat("Player_One"))
			{
				type3 = func_108(pedParam0, 8);
			
				if (type3 != PV_COMP_TASK)
					type3 = -99;
			}
		
			type4 = func_108(pedParam0, 9);
		
			if (entityModel == joaat("Player_Zero"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_One"))
			{
				if (type4 >= PV_COMP_HAND && type4 <= PV_COMP_DECL)
				{
				}
				else
				{
					type4 = -99;
				}
			}
			else if (entityModel == joaat("Player_Two"))
			{
				if (type4 >= PV_COMP_TASK && type4 <= 14 || type4 >= 15 && type4 <= 16)
				{
				}
				else
				{
					type4 = -99;
				}
			}
		
			type5 = func_107(pedParam0, PV_COMP_BERD);
		
			if (!func_106(entityModel, 14, type5, -1))
				type5 = -99;
		
			type6 = func_107(pedParam0, PV_COMP_HEAD);
		
			if (!func_105(entityModel, 14, type6, -1) && !func_104(entityModel, 14, type6, -1))
				type6 = -99;
		
			if (entityModel == joaat("Player_One"))
				type7 = func_107(pedParam0, PV_COMP_HAIR);
		}
	
		PED::CLEAR_ALL_PED_PROPS(pedParam0, 1);
		unk = 15;
	
		if (iParam5 == 1)
			unk = { Global_80163 };
		else
			unk = { func_100(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99)
			{
				Global_80120[1 /*14*/] = { func_120(entityModel, i, unk[i], -1) };
			
				if (IS_BIT_SET(Global_80120[1 /*14*/].f_6, 0))
				{
					if (i == 13)
					{
						unk18 = 9;
					
						if (iParam5 == 1)
							unk18 = { Global_80180 };
						else
							unk18 = { func_97(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							Global_80120[1 /*14*/] = { func_120(entityModel, 14, unk18[j], -1) };
							func_87(pedParam0, Global_80120[1 /*14*/].f_12, Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4);
							func_110(14);
						
							if (Global_80118 == 1)
							{
								for (k = 0; k < 15; k = k + 1)
								{
									type = func_79(pedParam0, entityModel, 14, unk18[j], k, 0);
								
									if (type != -99)
										func_67(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
							}
						}
					}
					else if (i != 14 && i != 12)
					{
						if (entityModel == joaat("Player_One") && i == 2 && unk[i] == 20)
							func_78(entityModel, 2, 20, &type2);
					
						if (iParam4 == -1)
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(i), Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_77(i)));
						else
							PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(i), Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4, iParam4);
					
						func_110(i);
					
						if (Global_80118 == 1)
						{
							for (k = 0; k < 15; k = k + 1)
							{
								type = func_79(pedParam0, entityModel, i, unk[i], k, 0);
							
								if (type != -99)
									func_67(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
				}
			}
			else if (i != 12 && i != 14)
			{
				Global_80120[1 /*14*/] = { func_120(entityModel, i, func_76(pedParam0, i, PV_COMP_INVALID), -1) };
			
				if (IS_BIT_SET(Global_80120[1 /*14*/].f_6, 3))
				{
					if (i == 2)
					{
						if (entityModel == joaat("Player_One"))
							if (func_75(pedParam0, entityModel, &type2, 1))
								func_67(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					else
					{
						unk28 = { func_100(entityModel, PV_COMP_HEAD) };
						func_67(pedParam0, i, unk28[i], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	
		if (iParam7 == 1)
		{
			unk45 = { func_120(entityModel, 8, type3, -1) };
		
			if (type3 != -99)
				if (func_73(entityModel, epctParam2, 8, type3, &unk, &unk45))
					func_67(pedParam0, 8, type3, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_120(entityModel, 9, type4, -1) };
		
			if (type4 != -99)
				if (func_73(entityModel, epctParam2, 9, type4, &unk, &unk45))
					func_67(pedParam0, 9, type4, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_120(entityModel, 14, type5, -1) };
		
			if (type5 != -99)
				if (func_73(entityModel, epctParam2, 14, type5, &unk, &unk45))
					func_67(pedParam0, 14, type5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_120(entityModel, 14, type6, -1) };
		
			if (type6 != -99)
				if (func_73(entityModel, epctParam2, 14, type6, &unk, &unk45))
					func_67(pedParam0, 14, type6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		
			unk45 = { func_120(entityModel, 14, type7, -1) };
		
			if (type7 != -99)
				if (func_73(entityModel, epctParam2, 14, type7, &unk, &unk45))
					func_67(pedParam0, 14, type7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
		}
	}
	else if (iParam1 == 13)
	{
		unk59 = { func_97(entityModel, epctParam2) };
	
		for (j = 0; j <= 8; j = j + 1)
		{
			Global_80120[1 /*14*/] = { func_120(entityModel, 14, unk59[j], -1) };
			func_87(pedParam0, Global_80120[1 /*14*/].f_12, Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4);
			func_110(14);
		
			if (Global_80118 == 1)
			{
				for (k = 0; k < 15; k = k + 1)
				{
					type = func_79(pedParam0, entityModel, 14, unk59[j], k, 0);
				
					if (type != -99)
						func_67(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 14)
	{
		func_87(pedParam0, Global_80120[1 /*14*/].f_12, Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4);
		func_110(iParam1);
	
		if (Global_80118 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_79(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_67(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (iParam4 == -1)
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(iParam1), Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(pedParam0, func_77(iParam1)));
		else
			PED::SET_PED_COMPONENT_VARIATION(pedParam0, func_77(iParam1), Global_80120[1 /*14*/].f_3, Global_80120[1 /*14*/].f_4, iParam4);
	
		if (Global_80118 == 1)
		{
			for (k = 0; k < 15; k = k + 1)
			{
				type = func_79(pedParam0, entityModel, iParam1, epctParam2, k, 0);
			
				if (type != -99)
					func_67(pedParam0, k, type, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	
		if (iParam6 == 0)
			func_70(entityModel, iParam1, epctParam2);
	}

	if (Global_80118 == 1)
	{
		if (func_75(pedParam0, entityModel, &type2, 0))
			func_67(pedParam0, 2, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	
		if (func_68(pedParam0, entityModel, &type2))
			func_67(pedParam0, 1, type2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}

	Global_80118 = Global_80118 - 1;
	return 1;
}

BOOL func_68(Ped pedParam0, ePedComponentType epctParam1, var uParam2) // Position - 0x50E6 (20710)
{
	int num;

	num = func_69(epctParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_114963.f_2370.f_539[num /*65*/].f_63 != -99)
	{
		if (!func_185(pedParam0, Global_114963.f_2370.f_539[num /*65*/].f_64, Global_114963.f_2370.f_539[num /*65*/].f_63))
		{
			*uParam2 = Global_114963.f_2370.f_539[num /*65*/].f_62;
			Global_114963.f_2370.f_539[num /*65*/].f_63 = -99;
			Global_114963.f_2370.f_539[num /*65*/].f_64 = 1;
			return true;
		}
	}

	return false;
}

int func_69(ePedComponentType epctParam0) // Position - 0x5187 (20871)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			return 0;
	
		case joaat("Player_One"):
			return 1;
	
		case joaat("Player_Two"):
			return 2;
	
		default:
			break;
	}

	return 145;
}

void func_70(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x51C2 (20930)
{
	ePedComponentType type;
	int num;

	if (epctParam0 == joaat("Player_Zero"))
		type = PV_COMP_HAND;
	else if (epctParam0 == joaat("Player_One"))
		type = PV_COMP_HAIR;
	else if (epctParam0 == joaat("Player_Two"))
		type = PV_COMP_LOWR;

	if (func_72(epctParam0, 12, type))
	{
		if (func_71(epctParam0, iParam1, epctParam2))
		{
			num = func_69(epctParam0);
		
			if (iParam1 == 3)
				Global_114963.f_2370.f_539.f_196[num] = epctParam2;
			else if (iParam1 == 4)
				Global_114963.f_2370.f_539.f_200[num] = epctParam2;
		}
	}

	return;
}

BOOL func_71(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x524C (21068)
{
	if (epctParam0 == joaat("Player_Zero"))
		if (iParam1 == 4)
			if (epctParam2 >= 47 && epctParam2 <= 54)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 77 && epctParam2 <= 84)
				return true;
	else if (epctParam0 == joaat("Player_One"))
		if (iParam1 == 4)
			if (epctParam2 >= 14 && epctParam2 <= 21)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 41 && epctParam2 <= 56)
				return true;
	else if (epctParam0 == joaat("Player_Two"))
		if (iParam1 == 4)
			if (epctParam2 >= 18 && epctParam2 <= 29)
				return true;
		else if (iParam1 == 3)
			if (epctParam2 >= 54 && epctParam2 <= 69)
				return true;

	return false;
}

BOOL func_72(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x532A (21290)
{
	Global_80120[1 /*14*/] = { func_120(epctParam0, iParam1, epctParam2, -1) };
	return IS_BIT_SET(Global_80120[1 /*14*/].f_6, 2);
}

BOOL func_73(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, ePedComponentType epctParam3, var uParam4, int iParam5) // Position - 0x5352 (21330)
{
	var unk;
	int i;

	if (uParam4->[iParam2] == epctParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (epctParam3 == 0 || epctParam3 == 1 || epctParam3 == 2 || epctParam3 == 3 || epctParam3 == 4 || epctParam3 == 5 || epctParam3 == 6 || epctParam3 == 7 || epctParam3 == 8)
			return true;

	if (epctParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_97(epctParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == epctParam3)
				return true;
		}
	}

	if (func_74(epctParam0, iParam2, epctParam3))
		return true;

	if (epctParam0 == joaat("Player_Zero"))
	{
		if (func_106(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_105(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_104(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 4 || epctParam1 == 5 || epctParam1 == 10 || epctParam1 == 11 || epctParam1 == 12 || epctParam1 == 14 || epctParam1 == 18 || epctParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (epctParam0 == joaat("Player_One"))
	{
		if (func_106(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_105(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				if (iParam2 == 8)
					if (epctParam3 == PV_COMP_TASK)
						if (epctParam1 == 8 || epctParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_DECL)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (epctParam1 == 43 || epctParam1 == 44 || epctParam1 == 45 || epctParam1 == 46)
					if (epctParam3 >= 26 && epctParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_104(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 3 || epctParam1 == 3 || epctParam1 == 5 || epctParam1 == 7 || epctParam1 == 8 || epctParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (epctParam3 >= 159 && epctParam3 <= 174)
				return true;
		}
	}
	else if (epctParam0 == joaat("Player_Two"))
	{
		if (epctParam1 == 2)
			if (iParam2 == 14 && epctParam3 == PV_COMP_HEAD)
				return true;
	
		if (func_106(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_105(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 45 || epctParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_104(epctParam0, iParam2, epctParam3, -1))
		{
			if (epctParam1 == 1 || epctParam1 == 2 || epctParam1 == 3 || epctParam1 == 6 || epctParam1 == 8 || epctParam1 == 11 || epctParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_74(Hash hParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x5956 (22870)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == 15)
						return true;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_FEET)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_BERD || epctParam2 == PV_COMP_DECL)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						return true;
					break;
			}
			break;
	}

	return false;
}

BOOL func_75(Ped pedParam0, ePedComponentType epctParam1, var uParam2, int iParam3) // Position - 0x59EF (23023)
{
	int num;

	num = func_69(epctParam1);

	if (num >= 3 || num < 0)
		return false;

	if (Global_114963.f_2370.f_539[num /*65*/].f_60 != -99)
	{
		if (!func_185(pedParam0, Global_114963.f_2370.f_539[num /*65*/].f_61, Global_114963.f_2370.f_539[num /*65*/].f_60) || iParam3 == 1)
		{
			*uParam2 = Global_114963.f_2370.f_539[num /*65*/].f_59;
			Global_114963.f_2370.f_539[num /*65*/].f_60 = -99;
			Global_114963.f_2370.f_539[num /*65*/].f_61 = 2;
			return true;
		}
	}

	return false;
}

ePedComponentType func_76(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x5A9A (23194)
{
	ePedComponentType i;
	ePedComponentType j;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_185(pedParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_185(pedParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (epctParam2 == PV_COMP_INVALID)
			{
			}
			else
			{
				return func_107(pedParam0, epctParam2);
			}
		}
		else
		{
			return func_108(pedParam0, iParam1);
		}
	}

	return -99;
}

ePedComponentType func_77(int iParam0) // Position - 0x5B3B (23355)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_78(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0x5BEB (23531)
{
	int num;

	*uParam3 = -99;

	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
						*uParam3 = 1;
					break;
			
				case 9:
					if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
						*uParam3 = 1;
					break;
			
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 1;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 == 46)
						*uParam3 = 1;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 2:
					if (epctParam2 == 20)
						*uParam3 = 20;
					break;
			
				case 8:
					if (epctParam2 == PV_COMP_LOWR)
						*uParam3 = 19;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
						*uParam3 = 19;
					break;
			
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 19;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 19;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (epctParam2 == PV_COMP_TEEF)
						*uParam3 = 2;
					break;
			
				case 9:
					if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 2;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 2;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 == 62)
						*uParam3 = 2;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_69(epctParam0);
		Global_114963.f_2370.f_539[num /*65*/].f_60 = epctParam2;
		Global_114963.f_2370.f_539[num /*65*/].f_61 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_79(Ped pedParam0, ePedComponentType epctParam1, int iParam2, ePedComponentType epctParam3, int iParam4, int iParam5) // Position - 0x5EF2 (24306)
{
	ePedComponentType type;
	ePedComponentType type2;
	ePedComponentType type3;
	ePedComponentType type4;
	ePedComponentType type5;
	ePedComponentType type6;
	ePedComponentType type7;
	ePedComponentType type8;
	ePedComponentType type9;
	ePedComponentType type10;

	type = -99;

	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				type2 = func_108(pedParam0, 1);
				type = func_86(epctParam1, epctParam3, type2);
				break;
		
			case 1:
				type3 = func_108(pedParam0, 2);
				type = func_86(epctParam1, type3, epctParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_78(epctParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 1)
	{
		func_85(epctParam1, iParam2, epctParam3, &type);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
			func_84(epctParam1, epctParam3, &type);
	}
	else
	{
		switch (epctParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (epctParam3)
								{
									case 36:
										type = 17;
										break;
								
									case 37:
										type = 17;
										break;
								
									case 38:
										type = 18;
										break;
								
									case 39:
										type = 18;
										break;
								
									case 40:
										type = 19;
										break;
								
									case 41:
										type = 19;
										break;
								
									case 42:
										type = 20;
										break;
								
									case 43:
										type = 20;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 >= PV_COMP_HAIR && epctParam3 <= PV_COMP_TEEF)
									if (!func_83(pedParam0, 3, 44, 59))
										type = 44;
								else if (epctParam3 >= PV_COMP_ACCS && epctParam3 <= 17 || epctParam3 >= 18 && epctParam3 <= 27 || epctParam3 >= 28 && epctParam3 <= 43)
									if (!func_83(pedParam0, 3, 135, 150))
										type = func_82(epctParam1, 3, 135, 150);
								break;
						}
						break;
				
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 63:
										type = PV_COMP_LOWR;
										break;
								
									case 61:
										type = PV_COMP_UPPR;
										break;
								
									case 16:
										type = PV_COMP_BERD;
										break;
								
									case 114:
										type = 15;
										break;
								
									case 115:
										type = 17;
										break;
								
									case 116:
										type = 16;
										break;
								
									case 117:
										type = 18;
										break;
								
									case 118:
										type = 20;
										break;
								
									case 119:
										type = 19;
										break;
								
									case 125:
										type = 21;
										break;
								
									case 120:
										type = 22;
										break;
								
									case 124:
										type = 23;
										break;
								
									case 126:
										type = 24;
										break;
								
									case 121:
										type = 25;
										break;
								
									case 127:
										type = 26;
										break;
								
									case 128:
										type = 27;
										break;
								
									case 85:
										type = PV_COMP_FEET;
										break;
								
									case 77:
										type = PV_COMP_TEEF;
										break;
								
									case 78:
										type = PV_COMP_ACCS;
										break;
								
									case 79:
										type = PV_COMP_TASK;
										break;
								
									case 80:
										type = PV_COMP_DECL;
										break;
								
									case 81:
										type = PV_COMP_JBIB;
										break;
								
									case 82:
										type = PV_COMP_MAX;
										break;
								
									case 83:
										type = 13;
										break;
								
									case 84:
										type = 14;
										break;
								
									case 21:
										type = 31;
										break;
								
									case 22:
										type = 30;
										break;
								
									case 23:
										type = 29;
										break;
								
									case 24:
										type = 28;
										break;
								
									case 25:
										type = 33;
										break;
								
									case 26:
										type = 35;
										break;
								
									case 27:
										type = 34;
										break;
								
									case 28:
										type = 32;
										break;
								
									default:
										if (epctParam3 >= 17 && epctParam3 <= 20)
										{
										}
										else
										{
											type = PV_COMP_HEAD;
										}
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 44 && epctParam3 <= 59 || epctParam3 >= 135 && epctParam3 <= 150)
							{
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 10)
						{
							if (epctParam3 >= 36 && epctParam3 <= 43)
								type = PV_COMP_HEAD;
						}
						break;
				}
				break;
		
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 17:
										type = PV_COMP_HAIR;
										break;
								
									case 90:
										type = PV_COMP_BERD;
										break;
								
									case 268:
										type = PV_COMP_UPPR;
										break;
								
									case 269:
										type = PV_COMP_HAND;
										break;
								
									case 270:
										type = PV_COMP_LOWR;
										break;
								
									case 271:
										type = PV_COMP_FEET;
										break;
								
									case 272:
										type = PV_COMP_ACCS;
										break;
								
									case 273:
										type = PV_COMP_TEEF;
										break;
								
									case 279:
										type = PV_COMP_TASK;
										break;
								
									case 274:
										type = PV_COMP_DECL;
										break;
								
									case 278:
										type = PV_COMP_JBIB;
										break;
								
									case 280:
										type = PV_COMP_MAX;
										break;
								
									case 275:
										type = 13;
										break;
								
									case 281:
										type = 14;
										break;
								
									case 282:
										type = 15;
										break;
								
									case 107:
										type = 16;
										break;
								
									case 108:
										type = 17;
										break;
								
									case 109:
										type = 18;
										break;
								
									case 110:
										type = 19;
										break;
								
									case 111:
										type = 20;
										break;
								
									case 112:
										type = 21;
										break;
								
									case 113:
										type = 22;
										break;
								
									case 114:
										type = 23;
										break;
								
									case 115:
										type = 24;
										break;
								
									case 116:
										type = 25;
										break;
								
									case 117:
										type = 52;
										break;
								
									case 118:
										type = 27;
										break;
								
									case 119:
										type = 28;
										break;
								
									case 120:
										type = 29;
										break;
								
									case 121:
										type = 30;
										break;
								
									case 122:
										type = 31;
										break;
								
									case 296:
										type = 32;
										break;
								
									case 297:
										type = 33;
										break;
								
									case 298:
										type = 34;
										break;
								
									case 299:
										type = 35;
										break;
								
									case 300:
										type = 36;
										break;
								
									case 301:
										type = 37;
										break;
								
									case 302:
										type = 38;
										break;
								
									case 309:
										type = 39;
										break;
								
									case 310:
										type = 40;
										break;
								
									case 311:
										type = 41;
										break;
								
									case 312:
										type = 42;
										break;
								
									case 313:
										type = 43;
										break;
								
									case 314:
										type = 44;
										break;
								
									case 315:
										type = 45;
										break;
								
									case 316:
										type = 46;
										break;
								
									case 317:
										type = 51;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						
							case 11:
								if (epctParam3 != PV_COMP_HEAD)
									type = PV_COMP_HEAD;
								break;
						}
						break;
				
					case 3:
						switch (iParam2)
						{
							case 11:
								if (epctParam3 >= 47 && epctParam3 <= 62)
									if (!func_83(pedParam0, 3, 209, 222))
										type = func_82(epctParam1, 3, 209, 222);
								else if (epctParam3 >= PV_COMP_BERD && epctParam3 <= PV_COMP_LOWR || epctParam3 >= PV_COMP_HAND && epctParam3 <= PV_COMP_ACCS)
									if (!func_83(pedParam0, 3, 243, 258))
										if (epctParam3 == PV_COMP_BERD || epctParam3 == PV_COMP_HAND)
											type = func_82(epctParam1, 3, 243, 246);
										else if (epctParam3 == PV_COMP_HAIR || epctParam3 == PV_COMP_FEET)
											type = func_82(epctParam1, 3, 247, 250);
										else if (epctParam3 == PV_COMP_UPPR || epctParam3 == PV_COMP_TEEF)
											type = func_82(epctParam1, 3, 251, 254);
										else if (epctParam3 == PV_COMP_LOWR || epctParam3 == PV_COMP_ACCS)
											type = func_82(epctParam1, 3, 255, 258);
								else if (epctParam3 == 41 || epctParam3 == 42)
									if (!func_83(pedParam0, 3, 176, 191) && !func_83(pedParam0, 3, 227, 242))
										type = func_82(epctParam1, 3, 176, 191);
								break;
						}
						break;
				
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								type6 = epctParam3;
								type5 = func_108(pedParam0, 3);
							}
							else if (iParam2 == 3)
							{
								type5 = epctParam3;
								type6 = func_108(pedParam0, 11);
								type6 = func_81(epctParam1, type5, type6, 0);
							}
						
							type4 = func_108(pedParam0, 8);
						
							if (type6 >= PV_COMP_HAND && type6 <= PV_COMP_ACCS || type6 >= 25 && type6 <= 40 || type6 >= 42 && type6 <= 43)
								if (!func_80(joaat("Player_One"), type4, type6, type5, &type7))
									if (type7 != -99)
										type = type7;
							else if (type4 >= 27 && type4 <= 42 || type4 >= 43 && type4 <= 58 || type4 >= 59 && type4 <= 74)
								type = 26;
						}
						break;
				
					case 11:
						if (iParam2 == 3)
						{
							if (epctParam3 >= 209 && epctParam3 <= 222)
							{
							}
							else if (epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 243 && epctParam3 <= 258)
							{
								type8 = func_108(pedParam0, 8);
								type9 = func_108(pedParam0, 11);
							
								if (type8 >= 27 && type8 <= 42 || type8 >= 43 && type8 <= 58 || type8 >= 59 && type8 <= 74)
									type = func_81(epctParam1, epctParam3, type9, 0);
								else
									type = func_81(epctParam1, epctParam3, type9, 1);
							}
							else if (epctParam3 >= 41 && epctParam3 <= 56)
							{
								type = 45;
							}
							else if (epctParam3 >= 223 && epctParam3 <= 226)
							{
								type = 44;
							}
							else
							{
								type = PV_COMP_HEAD;
							}
						}
						else if (iParam2 == 8)
						{
							if (epctParam3 >= 27 && epctParam3 <= 42 || epctParam3 >= 43 && epctParam3 <= 58 || epctParam3 >= 59 && epctParam3 <= 74)
							{
								type10 = func_108(pedParam0, 11);
								type = func_81(epctParam1, -99, type10, 0);
							}
						}
						break;
				}
				break;
		
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (epctParam3)
								{
									case 50:
										type = PV_COMP_UPPR;
										break;
								
									case 81:
										type = PV_COMP_HAND;
										break;
								
									case 82:
										type = PV_COMP_FEET;
										break;
								
									case 83:
										type = PV_COMP_TEEF;
										break;
								
									case 84:
										type = PV_COMP_DECL;
										break;
								
									case 85:
										type = PV_COMP_TASK;
										break;
								
									case 86:
										type = PV_COMP_ACCS;
										break;
								
									case 92:
										type = 22;
										break;
								
									case 87:
										type = 23;
										break;
								
									case 91:
										type = 24;
										break;
								
									case 93:
										type = 25;
										break;
								
									case 88:
										type = 26;
										break;
								
									case 94:
										type = 27;
										break;
								
									case 120:
										type = PV_COMP_JBIB;
										break;
								
									case 121:
										type = 13;
										break;
								
									case 122:
										type = 14;
										break;
								
									case 124:
										type = PV_COMP_MAX;
										break;
								
									case 126:
										type = 18;
										break;
								
									case 128:
										type = 17;
										break;
								
									case 130:
										type = 19;
										break;
								
									case 131:
										type = 16;
										break;
								
									case 134:
										type = 15;
										break;
								
									case 135:
										type = 20;
										break;
								
									default:
										type = PV_COMP_HEAD;
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}

	return type;
}

BOOL func_80(int iParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3, var uParam4) // Position - 0x6AA5 (27301)
{
	int num;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			break;
	
		case joaat("Player_One"):
			*uParam4 = 0;
		
			if (epctParam1 >= 27 && epctParam1 <= 42)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
					{
					}
					else
					{
						if (epctParam2 >= 42 && epctParam2 <= 43)
						{
							if (epctParam3 >= 176 && epctParam3 <= 191)
							{
								num = epctParam1 - 27;
								*uParam4 = 59 + num;
							}
							else if (epctParam3 >= 227 && epctParam3 <= 242)
							{
								num = epctParam1 - 27;
								*uParam4 = 43 + num;
							}
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242 || epctParam3 >= 176 && epctParam3 <= 191 || epctParam3 >= 243 && epctParam3 <= 258)
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (epctParam1 >= 43 && epctParam1 <= 58)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 43;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 227 && epctParam3 <= 242)
					{
					}
					else
					{
						if (epctParam3 >= 176 && epctParam3 <= 191)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 43;
								*uParam4 = 59 + num;
							}
						}
					
						return false;
					}
				}
			}
			else if (epctParam1 >= 59 && epctParam1 <= 74)
			{
				if (epctParam2 != -99)
				{
					if (epctParam2 >= 42 && epctParam2 <= 43)
					{
					}
					else
					{
						if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			
				if (epctParam3 != -99)
				{
					if (epctParam3 >= 176 && epctParam3 <= 191)
					{
					}
					else
					{
						if (epctParam3 >= 227 && epctParam3 <= 242)
						{
							if (epctParam2 >= 42 && epctParam2 <= 43)
							{
								num = epctParam1 - 59;
								*uParam4 = 43 + num;
							}
						}
						else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS || epctParam2 >= 25 && epctParam2 <= 40)
						{
							num = epctParam1 - 59;
							*uParam4 = 27 + num;
						}
					
						return false;
					}
				}
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_MAX)
				if (epctParam3 != 241)
					return false;
			break;
	}

	return true;
}

ePedComponentType func_81(ePedComponentType epctParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, int iParam3) // Position - 0x6D89 (28041)
{
	int num;

	if (epctParam1 >= 243 && epctParam1 <= 246)
	{
		if (iParam3 == 1)
			return PV_COMP_BERD;
		else
			return PV_COMP_HAND;
	}
	else if (epctParam1 >= 247 && epctParam1 <= 250)
	{
		if (iParam3 == 1)
			return PV_COMP_HAIR;
		else
			return PV_COMP_FEET;
	}
	else if (epctParam1 >= 251 && epctParam1 <= 254)
	{
		if (iParam3 == 1)
			return PV_COMP_UPPR;
		else
			return PV_COMP_TEEF;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 255 && epctParam1 <= 258)
	{
		if (iParam3 == 1)
			return PV_COMP_LOWR;
		else
			return PV_COMP_ACCS;
	}
	else if (epctParam1 >= 176 && epctParam1 <= 191 || epctParam1 >= 227 && epctParam1 <= 242)
	{
		if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return epctParam2;
			}
			else
			{
				num = epctParam2 - 9;
				epctParam2 = 25 + num;
				return epctParam2;
			}
		}
		else if (epctParam2 >= 25 && epctParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				num = epctParam2 - 25;
				epctParam2 = 9 + num;
				return epctParam2;
			}
			else
			{
				return epctParam2;
			}
		}
		else if (epctParam2 == 41 || epctParam2 == 42)
		{
			if (iParam3 == 1)
				return 41;
			else
				return 42;
		}
		else
		{
			if (iParam3 == 1)
				epctParam2 = func_82(epctParam0, 11, 9, 24);
			else
				epctParam2 = func_82(epctParam0, 11, 25, 40);
		
			if (epctParam2 == -99)
				if (iParam3 == 1)
					return 41;
				else
					return 42;
			else
				return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_BERD && epctParam2 <= PV_COMP_LOWR)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 1;
			epctParam2 = 5 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_ACCS)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 5;
			epctParam2 = 1 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return epctParam2;
		}
		else
		{
			num = epctParam2 - 9;
			epctParam2 = 25 + num;
			return epctParam2;
		}
	}
	else if (epctParam2 >= 25 && epctParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			num = epctParam2 - 25;
			epctParam2 = 9 + num;
			return epctParam2;
		}
		else
		{
			return epctParam2;
		}
	}
	else if (epctParam2 == 41 || epctParam2 == 42)
	{
		if (iParam3 == 1)
			return 41;
		else
			return 42;
	}

	return -99;
}

ePedComponentType func_82(ePedComponentType epctParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7050 (28752)
{
	ePedComponentType i;
	ePedComponentType type;

	for (i = iParam2; i <= iParam3 - 1; i = i + 1)
	{
		type = i;
	
		if (func_72(epctParam0, iParam1, type))
			return type;
	}

	return -99;
}

BOOL func_83(Ped pedParam0, int iParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0x7087 (28807)
{
	ePedComponentType type;

	type = func_108(pedParam0, iParam1);

	if (type >= epctParam2 && type <= epctParam3)
		return true;

	return false;
}

BOOL func_84(ePedComponentType epctParam0, ePedComponentType epctParam1, var uParam2) // Position - 0x70B0 (28848)
{
	*uParam2 = -99;

	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == 16 || epctParam1 == 17 || epctParam1 == 21 || epctParam1 == 22 || epctParam1 == 32 || epctParam1 >= 34 && epctParam1 <= 39 || epctParam1 >= 41 && epctParam1 <= 45 || epctParam1 == 46 || epctParam1 >= 47 && epctParam1 <= 54 || epctParam1 >= 55 && epctParam1 <= 70 || epctParam1 >= 72 && epctParam1 <= 79 || epctParam1 == 80 || epctParam1 >= 81 && epctParam1 <= 83 || epctParam1 >= 84 && epctParam1 <= 87 || epctParam1 == 88 || epctParam1 >= 89 && epctParam1 <= 91 || epctParam1 == 95 || epctParam1 >= 96 && epctParam1 <= 111 || epctParam1 == 112)
			{
				*uParam2 = 6;
				return true;
			}
			break;
	
		case joaat("Player_One"):
			if (epctParam1 == PV_COMP_MAX || epctParam1 >= 14 && epctParam1 <= 21 || epctParam1 == 32 || epctParam1 == 52 || epctParam1 >= 69 && epctParam1 <= 70 || epctParam1 == 71 || epctParam1 >= 72 && epctParam1 <= 77)
			{
				*uParam2 = 17;
				return true;
			}
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_LOWR || epctParam1 == PV_COMP_HAND || epctParam1 == PV_COMP_FEET || epctParam1 == PV_COMP_TEEF || epctParam1 == 14 || epctParam1 >= 18 && epctParam1 <= 29 || epctParam1 == 31 || epctParam1 == 32 || epctParam1 == 33 || epctParam1 == 34 || epctParam1 >= 35 && epctParam1 <= 42 || epctParam1 >= 43 && epctParam1 <= 53 || epctParam1 >= 54 && epctParam1 <= 61 || epctParam1 >= 71 && epctParam1 <= 80 || epctParam1 >= 81 && epctParam1 <= 90 || epctParam1 >= 94 && epctParam1 <= 103)
			{
				*uParam2 = 8;
				return true;
			}
			break;
	}

	return false;
}

int func_85(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, var uParam3) // Position - 0x737A (29562)
{
	int num;

	*uParam3 = -99;

	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 44 && epctParam2 <= 47)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 31 && epctParam2 <= 32 || epctParam2 >= 33 && epctParam2 <= 34 || epctParam2 >= 35 && epctParam2 <= 36 || epctParam2 == 37 || epctParam2 >= 38 && epctParam2 <= 39 || epctParam2 >= 40 && epctParam2 <= 41 || epctParam2 >= 42 && epctParam2 <= 44)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 10:
					if (epctParam2 >= 47 && epctParam2 <= 50)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 26 && epctParam2 <= 27 || epctParam2 >= 28 && epctParam2 <= 29 || epctParam2 >= 30 && epctParam2 <= 31 || epctParam2 == 32 || epctParam2 >= 35 && epctParam2 <= 36)
						*uParam3 = 0;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 9:
					if (epctParam2 >= 15 && epctParam2 <= 16)
						*uParam3 = 0;
					break;
			
				case 10:
					if (epctParam2 >= 29 && epctParam2 <= 32)
						*uParam3 = 0;
					break;
			
				case 14:
					if (epctParam2 >= 47 && epctParam2 <= 48 || epctParam2 >= 49 && epctParam2 <= 50 || epctParam2 >= 51 && epctParam2 <= 52 || epctParam2 == 53 || epctParam2 >= 54 && epctParam2 <= 55 || epctParam2 >= 56 && epctParam2 <= 57 || epctParam2 >= 58 && epctParam2 <= 60)
						*uParam3 = 0;
					break;
			}
			break;
	}

	if (*uParam3 != -99)
	{
		num = func_69(epctParam0);
		Global_114963.f_2370.f_539[num /*65*/].f_63 = epctParam2;
		Global_114963.f_2370.f_539[num /*65*/].f_64 = iParam1;
		return 1;
	}

	return 0;
}

ePedComponentType func_86(ePedComponentType epctParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x7604 (30212)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			if (epctParam1 == PV_COMP_BERD)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else if (epctParam2 == PV_COMP_LOWR)
					return 5;
				else
					return 3;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else if (epctParam2 == PV_COMP_LOWR)
				return 4;
			else
				return 2;
			break;
	
		case joaat("Player_One"):
			if (epctParam1 >= PV_COMP_HEAD && epctParam1 <= 15)
				if (epctParam2 == PV_COMP_HEAD)
					return 0;
				else
					return 3;
			else if (epctParam1 >= 16 && epctParam1 <= 17)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 5;
			else if (epctParam1 == 18)
				if (epctParam2 == PV_COMP_HEAD)
					return 6;
				else
					return 7;
			else if (epctParam1 == 19)
				if (epctParam2 == PV_COMP_HEAD)
					return 1;
				else
					return 4;
			else if (epctParam2 == PV_COMP_HEAD)
				return 1;
			else
				return 4;
			break;
	
		case joaat("Player_Two"):
			if (epctParam1 == PV_COMP_HAIR)
				if (epctParam2 == PV_COMP_HEAD)
					return 2;
				else
					return 3;
			else if (epctParam1 == PV_COMP_UPPR)
				if (epctParam2 == PV_COMP_HEAD)
					return 4;
				else
					return 6;
			else if (epctParam1 == PV_COMP_ACCS)
				return 5;
			else if (epctParam2 == PV_COMP_HEAD)
				return 0;
			else
				return 1;
			break;
	}

	return -99;
}

void func_87(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0x775B (30555)
{
	ePedComponentType type;

	if (epctParam2 == PV_COMP_INVALID)
	{
		PED::CLEAR_PED_PROP(pedParam0, epctParam1, 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(pedParam0, epctParam1, epctParam2, epctParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1);
	
		if (epctParam1 == PV_COMP_HEAD)
		{
			type = func_92(pedParam0, epctParam2, epctParam3, epctParam1);
		
			if (func_88(ENTITY::GET_ENTITY_MODEL(pedParam0), 14, type, EXTRAMETADATA::GET_HASH_NAME_FOR_PROP(pedParam0, 0, epctParam2, epctParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 36, false);
			}
		}
	}

	return;
}

BOOL func_88(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0x77F5 (30709)
{
	switch (epctParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 14, 3);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 14, 4);
				
					if (epctParam2 >= 131 && epctParam2 <= 154 || epctParam2 >= 327 && EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HELMET"), 1))
						return true;
					break;
			}
			break;
	}

	return false;
}

Hash func_89(ePedComponentType epctParam0, ePedComponentType epctParam1, int iParam2, int iParam3) // Position - 0x78C3 (30915)
{
	var outProp;
	int componentId;
	int num;
	var outComponent;
	int componentId2;
	int num2;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		EXTRAMETADATA::INIT_SHOP_PED_PROP(&outProp);
		componentId = epctParam1 - func_91(epctParam0);
	
		if (componentId < 0)
			return -1;
	
		num = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, true, -1, -1);
	
		if (num <= componentId)
			return -1;
	
		EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
		return outProp.f_1;
	}
	else
	{
		EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&outComponent);
		componentId2 = epctParam1 - func_90(epctParam0, func_77(iParam2));
	
		if (componentId2 < 0)
			return -1;
	
		if (epctParam0 == Global_80270.f_26[iParam2] && epctParam1 == Global_80270[iParam2] && Global_80270.f_13[iParam2] != 0)
			return Global_80270.f_13[iParam2];
	
		num2 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, false, -1, func_77(iParam2));
	
		if (num2 <= componentId2)
			return -1;
	
		EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
		Global_80270.f_13[iParam2] = outComponent.f_1;
		Global_80270[iParam2] = epctParam1;
		Global_80270.f_26[iParam2] = epctParam0;
		return outComponent.f_1;
	}

	return -1;
}

int func_90(ePedComponentType epctParam0, int iParam1) // Position - 0x79DD (31197)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (epctParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_91(ePedComponentType epctParam0) // Position - 0x7D84 (32132)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (epctParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

ePedComponentType func_92(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2, ePedComponentType epctParam3) // Position - 0x7DE5 (32229)
{
	Hash entityModel;
	Hash hashNameForProp;
	int numberOfPedPropDrawableVariations;
	int num;
	int i;
	int j;
	int numberOfPedPropTextureVariations;

	if (epctParam1 == -1)
		return func_96(epctParam3);

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	hashNameForProp = EXTRAMETADATA::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, epctParam1, epctParam2);

	if (hashNameForProp != -1 && hashNameForProp != 0)
		if (entityModel == joaat("MP_M_Freemode_01"))
			return func_94(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
		else if (entityModel == joaat("MP_F_Freemode_01"))
			return func_94(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);

	numberOfPedPropDrawableVariations = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);

	for (i = 0; i <= numberOfPedPropDrawableVariations - 1; i = i + 1)
	{
		numberOfPedPropTextureVariations = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
	
		if (i != epctParam1)
		{
			num = num + numberOfPedPropTextureVariations;
		}
		else
		{
			for (j = 0; j <= numberOfPedPropTextureVariations - 1; j = j + 1)
			{
				if (i == epctParam1 && j == epctParam2)
				{
					num = num + func_93(pedParam0, epctParam3);
					return num;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return func_96(epctParam3);
}

int func_93(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x7EE1 (32481)
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	switch (entityModel)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 58;
			
				case PV_COMP_HAIR:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 82;
			
				case PV_COMP_HAIR:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 88;
			
				case PV_COMP_HAIR:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	}

	return -99;
}

int func_94(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x8020 (32800)
{
	var outfit;
	int i;
	int num;
	int shopPedQueryPropIndex;
	int shopPedQueryComponentIndex;

	if (iParam2 == 12)
	{
		num = EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(i, &outfit);
		
			if (outfit.f_1 == hParam1)
				return func_95(hParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, true, -1, -1);
		shopPedQueryPropIndex = EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
	
		if (shopPedQueryPropIndex != -1)
			return func_91(hParam0) + shopPedQueryPropIndex;
	}
	else
	{
		EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 11, -1, false, -1, func_77(iParam2));
		shopPedQueryComponentIndex = EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
	
		if (shopPedQueryComponentIndex != -1)
			return func_90(hParam0, func_77(iParam2)) + shopPedQueryComponentIndex;
	}

	return -99;
}

int func_95(Hash hParam0) // Position - 0x80DB (32987)
{
	switch (hParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (hParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

int func_96(ePedComponentType epctParam0) // Position - 0x813A (33082)
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 0;
	
		case PV_COMP_BERD:
			return 1;
	
		case PV_COMP_HAIR:
			return 2;
	
		case PV_COMP_UPPR:
			return 3;
	
		case PV_COMP_LOWR:
			return 4;
	
		case PV_COMP_HAND:
			return 5;
	
		case PV_COMP_FEET:
			return 6;
	
		case PV_COMP_TEEF:
			return 7;
	
		case PV_COMP_ACCS:
			return 8;
	}

	return 0;
}

struct<10> func_97(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x81C0 (33216)
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 31:
					func_99(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_99(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_99(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_99(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_99(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_99(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_99(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_99(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_99(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_99(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_99(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_98(&unk, epctParam0, epctParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 31:
					func_99(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_99(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_99(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_99(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_99(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_99(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_99(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_99(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_99(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_99(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_98(&unk, epctParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 31:
					func_99(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_99(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_99(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_99(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_99(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_99(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_99(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_99(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_99(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_99(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_98(&unk, epctParam0, epctParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_99(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_99(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_99(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_99(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_99(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_99(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_99(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_99(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_99(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_99(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_99(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_99(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_99(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_99(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_99(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_99(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_99(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_99(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_99(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_99(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_99(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_99(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_99(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_99(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_99(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_99(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_98(&unk, epctParam0, epctParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 31:
					func_99(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_99(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_99(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_99(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_99(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_99(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_99(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_99(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_99(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_99(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_99(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_99(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_99(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_99(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_99(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_99(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_99(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_99(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_99(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_99(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_99(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_99(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_99(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_99(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_99(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_98(&unk, epctParam0, epctParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_98(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x8AEF (35567)
{
	int num;
	Hash itemHash;
	Hash outPropVariant;
	int i;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (hParam1 == joaat("Player_Zero"))
			num = 0;
		else if (hParam1 == joaat("Player_One"))
			num = 1;
		else if (hParam1 == joaat("Player_Two"))
			num = 2;
		else if (hParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (hParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		EXTRAMETADATA::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
	
		if (!EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(itemHash))
		{
			for (i = 0; i < itemHash.f_3; i = i + 1)
			{
				if (EXTRAMETADATA::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 != -1)
					if (outPropVariant != 0 && outPropVariant != -1 && outPropVariant != joaat("0"))
						uParam0->[outPropVariant.f_2] = func_94(hParam1, outPropVariant, 14, num);
					else if (outPropVariant.f_1 != -1)
						uParam0->[outPropVariant.f_2] = outPropVariant.f_1;
			}
		}
	}

	return;
}

void func_99(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x8C19 (35865)
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_100(ePedComponentType epctParam0, ePedComponentType epctParam1) // Position - 0x8C61 (35937)
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (epctParam1)
			{
				case 0:
					if (Global_114963.f_9094.f_99.f_58[120])
						func_103(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_103(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_103(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_103(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_103(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_103(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_103(&unk, -99, -99, Global_114963.f_2370.f_539.f_196[0], Global_114963.f_2370.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_103(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_103(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_103(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_103(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_103(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_103(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_103(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_103(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_103(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_103(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_103(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_103(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_103(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_103(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_103(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_103(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_103(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_103(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_103(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_103(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_103(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_103(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_103(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_103(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_HAIR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_103(&unk, -99, -99, 161, PV_COMP_UPPR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_103(&unk, -99, -99, PV_COMP_UPPR, PV_COMP_UPPR, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_103(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_103(&unk, -99, -99, 86, PV_COMP_LOWR, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_103(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_103(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_103(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_LOWR, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_103(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HAND, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_103(&unk, -99, -99, PV_COMP_FEET, PV_COMP_FEET, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_103(&unk, -99, -99, PV_COMP_TEEF, PV_COMP_TEEF, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_103(&unk, -99, -99, PV_COMP_ACCS, PV_COMP_ACCS, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_103(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TASK, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_103(&unk, -99, -99, PV_COMP_DECL, PV_COMP_DECL, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_103(&unk, -99, -99, PV_COMP_JBIB, PV_COMP_JBIB, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_103(&unk, -99, -99, PV_COMP_MAX, PV_COMP_MAX, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_103(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_103(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_103(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_103(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_103(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_103(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_103(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_103(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_101(&unk, epctParam0, epctParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (epctParam1)
			{
				case 0:
					func_103(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_103(&unk, -99, -99, 22, PV_COMP_DECL, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_103(&unk, -99, -99, Global_114963.f_2370.f_539.f_196[1], Global_114963.f_2370.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_103(&unk, -99, -99, 23, PV_COMP_JBIB, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_103(&unk, -99, -99, 23, PV_COMP_JBIB, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_103(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_103(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_103(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_103(&unk, -99, -99, 17, PV_COMP_HAND, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_103(&unk, -99, -99, 16, PV_COMP_LOWR, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_103(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_103(&unk, -99, -99, 259, PV_COMP_DECL, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_103(&unk, -99, -99, 18, PV_COMP_FEET, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_103(&unk, -99, -99, 19, PV_COMP_TEEF, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_103(&unk, -99, -99, 20, PV_COMP_ACCS, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_103(&unk, -99, -99, 21, PV_COMP_TASK, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_103(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_103(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_103(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_103(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_103(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_103(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_103(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_103(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_103(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_103(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_103(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_103(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_103(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_103(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_103(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_103(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_103(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_103(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_103(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_103(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_103(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_103(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_103(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_103(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_103(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_103(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_103(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_103(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_103(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_103(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_103(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_101(&unk, epctParam0, epctParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (epctParam1)
			{
				case 0:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_103(&unk, -99, -99, 17, PV_COMP_HAND, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_103(&unk, -99, -99, 43, PV_COMP_ACCS, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_103(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_103(&unk, -99, -99, Global_114963.f_2370.f_539.f_196[2], Global_114963.f_2370.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_103(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_103(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_103(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_103(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_103(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_103(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_103(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_103(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_103(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_103(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_103(&unk, -99, -99, 44, PV_COMP_TASK, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_103(&unk, -99, -99, 45, PV_COMP_DECL, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_103(&unk, -99, -99, 46, PV_COMP_JBIB, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_103(&unk, -99, -99, 47, PV_COMP_MAX, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_103(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_103(&unk, -99, -99, 98, PV_COMP_HEAD, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_103(&unk, -99, -99, 27, PV_COMP_HEAD, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_103(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_103(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_103(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_103(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_103(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_103(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_103(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_103(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_103(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_103(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_103(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_103(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_103(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_103(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_103(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_103(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_103(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_103(&unk, -99, -99, PV_COMP_HAIR, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_103(&unk, -99, -99, 55, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_103(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_103(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_103(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_103(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_101(&unk, epctParam0, epctParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_103(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_103(&unk, -99, -99, PV_COMP_BERD, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_103(&unk, -99, -99, PV_COMP_BERD, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_103(&unk, -99, -99, PV_COMP_BERD, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_103(&unk, -99, -99, PV_COMP_BERD, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_103(&unk, -99, -99, PV_COMP_BERD, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_103(&unk, -99, -99, PV_COMP_BERD, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_103(&unk, -99, -99, PV_COMP_BERD, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_103(&unk, -99, -99, PV_COMP_BERD, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_103(&unk, -99, -99, PV_COMP_BERD, PV_COMP_LOWR, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_103(&unk, -99, -99, PV_COMP_BERD, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_103(&unk, -99, -99, PV_COMP_BERD, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_103(&unk, -99, -99, PV_COMP_BERD, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_103(&unk, -99, -99, PV_COMP_BERD, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_103(&unk, -99, -99, PV_COMP_HAND, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_103(&unk, -99, -99, PV_COMP_HAND, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_103(&unk, -99, -99, PV_COMP_BERD, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_103(&unk, -99, -99, PV_COMP_FEET, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_103(&unk, -99, -99, PV_COMP_BERD, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_103(&unk, -99, -99, PV_COMP_BERD, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_103(&unk, -99, -99, PV_COMP_HAIR, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_101(&unk, epctParam0, epctParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (epctParam1)
			{
				case 0:
					func_103(&unk, -99, -99, PV_COMP_HEAD, PV_COMP_HEAD, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_103(&unk, -99, -99, PV_COMP_HAND, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_103(&unk, -99, -99, PV_COMP_LOWR, PV_COMP_BERD, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_103(&unk, -99, -99, PV_COMP_BERD, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_103(&unk, -99, -99, PV_COMP_HAIR, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_103(&unk, -99, -99, PV_COMP_TASK, PV_COMP_TEEF, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_103(&unk, -99, -99, PV_COMP_BERD, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_103(&unk, -99, -99, PV_COMP_BERD, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_103(&unk, -99, -99, PV_COMP_HAND, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_103(&unk, -99, -99, PV_COMP_TASK, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_103(&unk, -99, -99, PV_COMP_HAND, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_103(&unk, -99, -99, PV_COMP_FEET, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_103(&unk, -99, -99, PV_COMP_HAND, PV_COMP_HEAD, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_103(&unk, -99, -99, PV_COMP_TASK, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_103(&unk, -99, -99, PV_COMP_HAIR, PV_COMP_ACCS, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_103(&unk, -99, -99, PV_COMP_HAND, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_103(&unk, -99, -99, PV_COMP_FEET, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_103(&unk, -99, -99, PV_COMP_UPPR, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_103(&unk, -99, -99, PV_COMP_HEAD, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_103(&unk, -99, -99, PV_COMP_HAND, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_103(&unk, -99, -99, PV_COMP_TEEF, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_103(&unk, -99, -99, PV_COMP_LOWR, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_103(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_101(&unk, epctParam0, epctParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_101(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xAAA9 (43689)
{
	int num;
	Hash outfit;
	Hash outComponentVariant;
	var outComponent;
	int i;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (hParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (hParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
	EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(iParam2 - iParam3, &outfit);

	if (!EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(outfit))
	{
		for (i = 0; i < outfit.f_4; i = i + 1)
		{
			if (EXTRAMETADATA::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(outfit.f_1, i, &outComponentVariant))
			{
				if (outComponentVariant != 0 && outComponentVariant != -1 && outComponentVariant != joaat("0"))
				{
					if (outComponentVariant.f_2 == 10)
					{
						EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&outComponent);
						EXTRAMETADATA::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
					
						if (outComponentVariant != outComponent.f_1)
							uParam0->f_16 = 1;
					}
				
					if (outComponentVariant.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_102(outComponentVariant.f_2)] = outComponentVariant;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_102(outComponentVariant.f_2)] = func_94(hParam1, outComponentVariant, func_102(outComponentVariant.f_2), num);
					}
				}
				else if (outComponentVariant.f_1 != -1)
				{
					uParam0->[func_102(outComponentVariant.f_2)] = outComponentVariant.f_1;
				}
			}
		}
	
		if (outfit.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = outfit.f_1;
	}

	return;
}

int func_102(int iParam0) // Position - 0xAC93 (44179)
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_103(var uParam0, int iParam1, int iParam2, ePedComponentType epctParam3, ePedComponentType epctParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0xAD43 (44355)
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = epctParam3;
	uParam0->[4] = epctParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

BOOL func_104(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0xADB4 (44468)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 == 40 || epctParam2 >= 41 && epctParam2 <= 56 || epctParam2 >= 64 && epctParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 17 && epctParam2 <= 18 || epctParam2 >= 71 && epctParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_89(epctParam0, epctParam2, 14, 3);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_89(epctParam0, epctParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_89(epctParam0, epctParam2, 1, 3);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_89(epctParam0, epctParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (epctParam2 >= 18 && epctParam2 <= 130)
					{
						return true;
					}
					else if (epctParam2 >= PV_COMP_DECL && epctParam2 <= 17)
					{
						return true;
					}
					else if (epctParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_89(epctParam0, epctParam2, 14, 4);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 1) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_89(epctParam0, epctParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (epctParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_89(epctParam0, epctParam2, 1, 4);
					
						return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_89(epctParam0, epctParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_105(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0xB031 (45105)
{
	if (epctParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (epctParam2 == PV_COMP_DECL)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_TASK || epctParam2 == PV_COMP_TEEF || epctParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_TASK && epctParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == PV_COMP_MAX || epctParam2 == 59 || epctParam2 == 60 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 == 37 || epctParam2 == 38 || epctParam2 == 39 || epctParam2 == 40 || epctParam2 == 41 || epctParam2 >= 42 && epctParam2 <= 44 || epctParam2 == 54 || epctParam2 == 55)
				return true;
	}
	else if (epctParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (epctParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (epctParam2 == PV_COMP_UPPR || epctParam2 == PV_COMP_HAND || epctParam2 == PV_COMP_TASK)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 >= PV_COMP_HAND && epctParam2 <= PV_COMP_DECL)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 82 || epctParam2 == PV_COMP_DECL || epctParam2 == 26 || epctParam2 == 27 || epctParam2 == 28 || epctParam2 == 29 || epctParam2 == 30 || epctParam2 == 31 || epctParam2 == 32 || epctParam2 == 33 || epctParam2 == 34 || epctParam2 == 35 || epctParam2 == 36 || epctParam2 >= 37 && epctParam2 <= 39)
				return true;
	}
	else if (epctParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (epctParam2 == 14 || epctParam2 == PV_COMP_TEEF)
				return true;
		else if (iParam1 == 9)
			if (epctParam2 == PV_COMP_ACCS || epctParam2 >= PV_COMP_TASK && epctParam2 <= 14 || epctParam2 == 15 || epctParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (epctParam2 == 88 || epctParam2 == PV_COMP_MAX || epctParam2 == 47 || epctParam2 == 48 || epctParam2 == 49 || epctParam2 == 50 || epctParam2 == 51 || epctParam2 == 52 || epctParam2 == 53 || epctParam2 == 54 || epctParam2 == 55 || epctParam2 == 56 || epctParam2 == 57 || epctParam2 >= 58 && epctParam2 <= 60)
				return true;
	}
	else if (epctParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 1, 3);
				
					if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (epctParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (epctParam2 > PV_COMP_HEAD)
			{
				if (epctParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 1, 4);
				
					if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAT"), 0) || EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_106(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, Hash hParam3) // Position - 0xB456 (46166)
{
	switch (epctParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (epctParam2 == 58 || epctParam2 == 61 || epctParam2 >= 62 && epctParam2 <= 69 || epctParam2 >= 70 && epctParam2 <= 79 || epctParam2 >= 80 && epctParam2 <= 89 || epctParam2 == 90 || epctParam2 >= 91 && epctParam2 <= 102 || epctParam2 >= 103 && epctParam2 <= 110 || epctParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (epctParam2 >= 83 && epctParam2 <= 92 || epctParam2 == 93 || epctParam2 == 94 || epctParam2 >= 95 && epctParam2 <= 101 || epctParam2 >= 102 && epctParam2 <= 111 || epctParam2 >= 112 && epctParam2 <= 121 || epctParam2 >= 122 && epctParam2 <= 131 || epctParam2 >= 132 && epctParam2 <= 139 || epctParam2 >= 140 && epctParam2 <= 149 || epctParam2 >= 150 && epctParam2 <= 156 || epctParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (epctParam2 == 89 || epctParam2 >= 90 && epctParam2 <= 99 || epctParam2 >= 100 && epctParam2 <= 109 || epctParam2 == 111 || epctParam2 == 112 || epctParam2 >= 113 && epctParam2 <= 122 || epctParam2 >= 123 && epctParam2 <= 132 || epctParam2 >= 133 && epctParam2 <= 142 || epctParam2 >= 143 && epctParam2 <= 152 || epctParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 14, 3);
				
					return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (epctParam2 >= 155 && epctParam2 <= 318)
				{
					return true;
				}
				else if (epctParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_89(epctParam0, epctParam2, 14, 4);
				
					return EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

ePedComponentType func_107(Ped pedParam0, ePedComponentType epctParam1) // Position - 0xB749 (46921)
{
	int pedPropIndex;
	int pedPropTextureIndex;

	if (PED::IS_PED_INJURED(pedParam0))
		return -99;

	pedPropIndex = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);

	if (pedPropIndex == -1)
		return func_96(epctParam1);

	pedPropTextureIndex = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	return func_92(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

ePedComponentType func_108(Ped pedParam0, int iParam1) // Position - 0xB790 (46992)
{
	ePedComponentType componentId;
	int pedDrawableVariation;
	int pedTextureVariation;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(pedParam0))
		return -99;

	componentId = func_77(iParam1);
	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
	pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
	return func_109(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_109(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB7F0 (47088)
{
	ePedComponentType componentId;
	int numberOfPedDrawableVariations;
	int num;
	int i;

	componentId = func_77(iParam3);
	numberOfPedDrawableVariations = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);

	for (i = 0; i <= numberOfPedDrawableVariations - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num = num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
		}
		else
		{
			num = num + iParam2;
			return num;
		}
	}

	return -99;
}

void func_110(int iParam0) // Position - 0xB847 (47175)
{
	if (IS_BIT_SET(Global_80120[1 /*14*/].f_6, 1) && !IS_BIT_SET(Global_80120[1 /*14*/].f_6, 6))
		func_118(iParam0, Global_80120[1 /*14*/].f_5, Global_80120[1 /*14*/].f_2, 2, Global_80120[1 /*14*/].f_1, 1, 0);

	if (IS_BIT_SET(Global_80120[1 /*14*/].f_6, 1) && IS_BIT_SET(Global_80120[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_111(Global_2883588, 2, true, true, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_111(Global_2883588, 2, true, true, -1);
		}
		else
		{
			func_111(Global_2883588, 2, true, true, -1);
		}
	}

	return;
}

void func_111(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB8F3 (47347)
{
	BOOL flag;
	int offset;
	int num;
	int address;

	flag = Global_80117;

	if (bParam4 != -1)
		flag = bParam4;

	if (func_117(epctParam0, iParam1, &num, &offset, bParam2, bParam3))
	{
		address = func_116(num, flag);
		MISC::SET_BIT(&address, offset);
		func_112(num, address, flag, true);
	}

	return;
}

void func_112(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB93B (47419)
{
	Hash statName;

	if (iParam0 != 16764)
	{
		statName = func_113(iParam0, bParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_113(int iParam0, BOOL bParam1) // Position - 0xB969 (47465)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_114(bParam1));
}

BOOL func_114(BOOL bParam0) // Position - 0xB97E (47486)
{
	BOOL flag;
	BOOL flag2;

	flag = bParam0;

	if (flag == -1)
	{
		flag2 = func_115();
	
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

BOOL func_115() // Position - 0xB9B2 (47538)
{
	return Global_1574928;
}

int func_116(int iParam0, BOOL bParam1) // Position - 0xB9BE (47550)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16764)
	{
		statHash = func_113(iParam0, bParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_117(ePedComponentType epctParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB9ED (47597)
{
	int fmMaleShopPedApparelItemIndex;

	*uParam2 = 16764;

	if (bParam4 && Global_4519798 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_0 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_0 */:
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_1 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_1 */:
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_2 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_2 */:
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_3 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_3 */:
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_4 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_4 */:
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_5 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_5 */:
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_6 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_6 */:
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_7 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_7 */:
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_0 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_0 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_0 */:
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_1 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_1 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_1 */:
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_2 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_2 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_2 */:
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_3 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_3 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_3 */:
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_4 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_4 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_4 */:
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_5 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_5 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_5 */:
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_7 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_7 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_7 */:
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_8 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_8 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_8 */:
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_0_11 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_2_11 */:
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11") /* TUNEABLE: DLC_MP_BIKER_M_SPECIAL_4_11 */:
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_0 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_0 */:
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_1 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_1 */:
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_2 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_2 */:
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_3 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_3 */:
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_4 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_4 */:
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_5 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_5 */:
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_6 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_6 */:
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_15_7 */:
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7") /* TUNEABLE: DLC_MP_STUNT_M_PHEAD_0_7 */:
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_0 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_0 */:
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_1 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_1 */:
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_2 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_2 */:
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_3 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_3 */:
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_4 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_4 */:
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_5 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_5 */:
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_6 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_6 */:
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_7 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_7 */:
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (epctParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_0 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_0 */:
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_1 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_1 */:
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_2 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_2 */:
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_3 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_3 */:
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_4 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_4 */:
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_5 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_5 */:
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_6 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_6 */:
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_15_7 */:
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7") /* TUNEABLE: DLC_MP_STUNT_F_PHEAD_0_7 */:
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	fmMaleShopPedApparelItemIndex = -1;

	if (bParam4)
		if (Global_4519798)
			fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
		else
			fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
	else if (bParam5)
		fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);
	else
		fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(epctParam0);

	if (fmMaleShopPedApparelItemIndex == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			
				case 306:
					*uParam2 = 12332;
					break;
			
				case 307:
					*uParam2 = 12333;
					break;
			
				case 308:
					*uParam2 = 12334;
					break;
			
				case 309:
					*uParam2 = 12335;
					break;
			
				case 310:
					*uParam2 = 12336;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 311:
					*uParam2 = 13017;
					break;
			
				case 312:
					*uParam2 = 13018;
					break;
			
				case 313:
					*uParam2 = 13019;
					break;
			
				case 314:
					*uParam2 = 13020;
					break;
			
				case 315:
					*uParam2 = 13082;
					break;
			
				case 316:
					*uParam2 = 13083;
					break;
			
				case 317:
					*uParam2 = 14274;
					break;
			
				case 318:
					*uParam2 = 14275;
					break;
			}
			break;
	
		case 2:
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			
				case 306:
					*uParam2 = 12337;
					break;
			
				case 307:
					*uParam2 = 12338;
					break;
			
				case 308:
					*uParam2 = 12339;
					break;
			
				case 309:
					*uParam2 = 12340;
					break;
			
				case 310:
					*uParam2 = 12341;
					break;
			}
		
			switch (BUILTIN::FLOOR(BUILTIN::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 311:
					*uParam2 = 13021;
					break;
			
				case 312:
					*uParam2 = 13022;
					break;
			
				case 313:
					*uParam2 = 13023;
					break;
			
				case 314:
					*uParam2 = 13024;
					break;
			
				case 315:
					*uParam2 = 13084;
					break;
			
				case 316:
					*uParam2 = 13085;
					break;
			
				case 317:
					*uParam2 = 14276;
					break;
			
				case 318:
					*uParam2 = 14277;
					break;
			}
			break;
	}

	*uParam3 = fmMaleShopPedApparelItemIndex % 32;
	return *uParam2 != 16764;
}

BOOL func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xE6BA (59066)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_114963.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114963.f_2370[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_119(int iParam0) // Position - 0xF55D (62813)
{
	if (!IS_BIT_SET(Global_80120[1 /*14*/].f_6, 0))
		return false;

	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Global_80120[1 /*14*/].f_6, 1))
			return false;
	
		if (!IS_BIT_SET(Global_80120[1 /*14*/].f_6, 2))
			return false;
	}

	return true;
}

struct<14> func_120(ePedComponentType epctParam0, int iParam1, ePedComponentType epctParam2, int iParam3) // Position - 0xF5A5 (62885)
{
	func_184();

	if (epctParam0 == joaat("Player_Zero"))
		func_166(iParam1, epctParam2);
	else if (epctParam0 == joaat("Player_One"))
		func_147(iParam1, epctParam2);
	else if (epctParam0 == joaat("Player_Two"))
		func_121(iParam1, epctParam2);

	return Global_80120[0 /*14*/];
}

void func_121(int iParam0, int iParam1) // Position - 0xF5F7 (62967)
{
	switch (iParam0)
	{
		case 0:
			func_146(iParam1);
			break;
	
		case 2:
			func_145(iParam1);
			break;
	
		case 3:
			func_142(iParam1);
			break;
	
		case 4:
			func_141(iParam1);
			break;
	
		case 6:
			func_140(iParam1);
			break;
	
		case 5:
			func_139(iParam1);
			break;
	
		case 8:
			func_138(iParam1);
			break;
	
		case 9:
			func_137(iParam1);
			break;
	
		case 10:
			func_136(iParam1);
			break;
	
		case 1:
			func_135(iParam1);
			break;
	
		case 7:
			func_134(iParam1);
			break;
	
		case 11:
			func_133(iParam1);
			break;
	
		case 12:
			func_132(iParam1);
			break;
	
		case 13:
			func_131(iParam1);
			break;
	
		case 14:
			func_122(iParam1);
			break;
	}

	return;
}

void func_122(int iParam0) // Position - 0xF6E7 (63207)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Lentes de sol Specs Pest*/, 16);
			num2 = 1;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Lentes carbón Dix*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Lentes cafés Dix*/, 16);
			num2 = 2;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Lentes negros Dix*/, 16);
			num2 = 2;
			num3 = 2;
			num = 55;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Lentes con cuadros Dix*/, 16);
			num2 = 2;
			num3 = 3;
			num = 52;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Lentes blancos Dix*/, 16);
			num2 = 2;
			num3 = 4;
			num = 54;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Lentes rojos Dix*/, 16);
			num2 = 2;
			num3 = 5;
			num = 54;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Lentes guindas Dix*/, 16);
			num2 = 2;
			num3 = 6;
			num = 55;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Lentes amarillos Dix*/, 16);
			num2 = 2;
			num3 = 7;
			num = 55;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Lentes primaverales Dix*/, 16);
			num2 = 2;
			num3 = 8;
			num = 58;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Lentes otoñales Dix*/, 16);
			num2 = 2;
			num3 = 9;
			num = 58;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Lentes de sol carbón Tung*/, 16);
			num2 = 3;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Lentes de sol blancos Tung*/, 16);
			num2 = 3;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Lentes de sol ceniza Tung*/, 16);
			num2 = 3;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Lentes de sol rojos Tung*/, 16);
			num2 = 3;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Lentes de sol azules Tung*/, 16);
			num2 = 3;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Lentes de sol negros Tung*/, 16);
			num2 = 3;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Lentes de sol naranjas Tung*/, 16);
			num2 = 3;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Lentes de sol morados Tung*/, 16);
			num2 = 3;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Lentes de sol avispa Tung*/, 16);
			num2 = 3;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Lentes de sol bicolor Tung*/, 16);
			num2 = 3;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG negros*/, 16);
			num2 = 7;
			num3 = 0;
			num = 60;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG cenizo*/, 16);
			num2 = 7;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG rojos*/, 16);
			num2 = 7;
			num3 = 2;
			num = 50;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG amarillos*/, 16);
			num2 = 7;
			num3 = 3;
			num = 59;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG cafés*/, 16);
			num2 = 7;
			num3 = 4;
			num = 55;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG grises*/, 16);
			num2 = 7;
			num3 = 5;
			num = 55;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG azules*/, 16);
			num2 = 7;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG ahumados*/, 16);
			num2 = 7;
			num3 = 7;
			num = 59;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG naranjas*/, 16);
			num2 = 7;
			num3 = 8;
			num = 79;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG pizarra*/, 16);
			num2 = 7;
			num3 = 9;
			num = 79;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Lentes de aviador de acero*/, 16);
			num2 = 8;
			num3 = 0;
			num = 150;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Lentes de aviador pizarra*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Lentes de aviador dorados*/, 16);
			num2 = 8;
			num3 = 2;
			num = 170;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Lentes de aviador gris claro*/, 16);
			num2 = 8;
			num3 = 3;
			num = 175;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Lentes de aviador de aluminio*/, 16);
			num2 = 8;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Lentes de aviador bronce*/, 16);
			num2 = 8;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Lentes de aviador café claro*/, 16);
			num2 = 8;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Lentes de aviador negros*/, 16);
			num2 = 8;
			num3 = 7;
			num = 195;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Lentes de aviador plateados*/, 16);
			num2 = 8;
			num3 = 8;
			num = 210;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Lentes de aviador ahumados*/, 16);
			num2 = 8;
			num3 = 9;
			num = 215;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Lentes de sol dorados Krepp*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Lentes de sol grises Krepp*/, 16);
			num2 = 9;
			num3 = 1;
			num = 165;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Lentes de sol pizarra Krepp*/, 16);
			num2 = 9;
			num3 = 2;
			num = 169;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Lentes de sol negros Krepp*/, 16);
			num2 = 9;
			num3 = 3;
			num = 169;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Lentes de sol blancos Krepp*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Lentes de sol plateados Krepp*/, 16);
			num2 = 9;
			num3 = 5;
			num = 175;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Lentes de sol ceniza Krepp*/, 16);
			num2 = 9;
			num3 = 6;
			num = 175;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Lentes de sol cafés Krepp*/, 16);
			num2 = 9;
			num3 = 7;
			num = 189;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Lentes de sol beige Krepp*/, 16);
			num2 = 9;
			num3 = 8;
			num = 195;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Lentes de sol café claro Krepp*/, 16);
			num2 = 9;
			num3 = 9;
			num = 195;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Lentes de sol negros Broker*/, 16);
			num2 = 10;
			num3 = 0;
			num = 49;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Lentes de sol morados Broker*/, 16);
			num2 = 10;
			num3 = 1;
			num = 50;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Lentes de sol cafés Broker*/, 16);
			num2 = 10;
			num3 = 2;
			num = 52;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Lentes de sol naranjas Broker*/, 16);
			num2 = 10;
			num3 = 3;
			num = 55;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Lentes de sol grises Broker*/, 16);
			num2 = 10;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Lentes de sol con rayas Broker*/, 16);
			num2 = 10;
			num3 = 5;
			num = 58;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Lentes de sol beige Broker*/, 16);
			num2 = 10;
			num3 = 6;
			num = 60;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Lentes de sol ceniza Broker*/, 16);
			num2 = 10;
			num3 = 7;
			num = 63;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Lentes de sol carbón Broker*/, 16);
			num2 = 10;
			num3 = 8;
			num = 65;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Lentes degradados Broker*/, 16);
			num2 = 10;
			num3 = 9;
			num = 68;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Máscara de hockey*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Sombrero negro*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
			num2 = 7;
			num3 = 1;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 7;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 8;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 9;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 10;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 11;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 12;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 13;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 14;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 15;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Monstruo verde*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Monstruo rojo*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Cerdo rosa*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Cerdo café*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Calavera plateada*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Calavera dorada*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Pogo*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*Hockey blanca*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Hockey roja*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Simio café claro*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Simio café*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnaval naranja*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnaval blanca*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnaval azul*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Gorra Hawk and Little*/, 16);
			num2 = 26;
			num3 = 0;
			num = 20;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Gorra Taco Bomb*/, 16);
			num2 = 26;
			num3 = 1;
			num = 25;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Gorra Nut House*/, 16);
			num2 = 26;
			num3 = 2;
			num = 25;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Gorra Rusty Brown's*/, 16);
			num2 = 26;
			num3 = 3;
			num = 22;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Gorra Bishop Chicken*/, 16);
			num2 = 26;
			num3 = 4;
			num = 20;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*Gorra 24/7*/, 16);
			num2 = 26;
			num3 = 5;
			num = 25;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*Gorra iFruit 80s*/, 16);
			num2 = 26;
			num3 = 6;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Gorra Blarneys*/, 16);
			num2 = 26;
			num3 = 7;
			num = 24;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Gorra Pisswasser*/, 16);
			num2 = 26;
			num3 = 8;
			num = 25;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*Gorra RON*/, 16);
			num2 = 26;
			num3 = 9;
			num = 22;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Gorra Logger Light*/, 16);
			num2 = 26;
			num3 = 10;
			num = 18;
			num4 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Gorra Meteorite*/, 16);
			num2 = 26;
			num3 = 11;
			num = 20;
			num4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Gorra Dusche Gold*/, 16);
			num2 = 26;
			num3 = 12;
			num = 24;
			num4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Gorra Barracho*/, 16);
			num2 = 26;
			num3 = 13;
			num = 22;
			num4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Gorra Vespuchi Beach*/, 16);
			num2 = 26;
			num3 = 14;
			num = 25;
			num4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Gorra Orang-O-Tang*/, 16);
			num2 = 26;
			num3 = 15;
			num = 25;
			num4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 155, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_123(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x10961 (67937)
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_129(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_128(14))
			return;
	
		if (iParam1 == 1)
			if (EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_127(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_127(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_127(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_127(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_127(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_127(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (EXTRAMETADATA::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_118(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_118(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_118(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_128(14))
				return;
		
			num = func_116(func_126(iParam1, iParam0->f_2), Global_80117);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			num = func_116(func_125(iParam1, iParam0->f_2), Global_80117);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_124(iParam1, iParam0->f_2, &num2))
			{
				num = func_116(num2, Global_80117);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_124(int iParam0, int iParam1, var uParam2) // Position - 0x10D03 (68867)
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_125(int iParam0, int iParam1) // Position - 0x11108 (69896)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_126(int iParam0, int iParam1) // Position - 0x11503 (70915)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_127(ePedComponentType epctParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x118FE (71934)
{
	BOOL flag;
	int num;
	int num2;
	int num3;

	flag = Global_80117;

	if (bParam4 != -1)
		flag = bParam4;

	if (func_117(epctParam0, iParam1, &num2, &num, bParam2, bParam3))
	{
		num3 = func_116(num2, flag);
		return IS_BIT_SET(num3, num);
	}

	return false;
}

BOOL func_128(int iParam0) // Position - 0x1193C (71996)
{
	return Global_44921 == iParam0;
}

int func_129(int iParam0) // Position - 0x1194A (72010)
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
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
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_130(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x11A1E (72222)
{
	int num;
	int num2;
	Hash outfit;
	int outfitIndex;
	int num3;
	Hash outProp;
	int num4;
	int componentId;
	int num5;
	Hash outComponent;
	int componentId2;
	int num6;

	num = iParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_80120[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		outfitIndex = iParam1 - iParam2;
	
		if (outfitIndex >= 0)
		{
			num3 = EXTRAMETADATA::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
		
			if (num3 > outfitIndex)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_OUTFIT(outfitIndex, &outfit);
				Global_2883588 = outfit.f_1;
				Global_2883589 = outfit;
				func_123(&Global_80120[0 /*14*/], iParam0, iParam1, &(outfit.f_7), 0, 0, outfit.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_123(&Global_80120[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		EXTRAMETADATA::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - iParam2;
	
		if (componentId >= 0)
		{
			num5 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 11, -1, true, -1, -1);
		
			if (num5 > componentId)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
			
				if (outProp.f_6 == 0)
					num4 = 9;
				else if (outProp.f_6 == 1)
					num4 = 10;
				else if (outProp.f_6 == 2)
					num4 = 2;
				else if (outProp.f_6 == 3)
					num4 = 3;
				else if (outProp.f_6 == 4)
					num4 = 4;
				else if (outProp.f_6 == 5)
					num4 = 5;
				else if (outProp.f_6 == 6)
					num4 = 6;
				else if (outProp.f_6 == 7)
					num4 = 7;
				else if (outProp.f_6 == 8)
					num4 = 8;
				else
					num4 = -1;
			
				Global_2883588 = outProp.f_1;
				Global_2883589 = outProp;
				func_123(&Global_80120[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num4, 2, outProp.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		EXTRAMETADATA::INIT_SHOP_PED_COMPONENT(&outComponent);
	
		if (hParam3 != -1 && Global_80318)
		{
			EXTRAMETADATA::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
			Global_2883588 = outComponent.f_1;
			Global_2883589 = outComponent;
			func_123(&Global_80120[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
			return;
		}
	
		componentId2 = iParam1 - iParam2;
	
		if (componentId2 >= 0)
		{
			num6 = EXTRAMETADATA::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 11, -1, false, -1, func_77(iParam0));
		
			if (num6 > componentId2)
			{
				EXTRAMETADATA::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
				Global_2883588 = outComponent.f_1;
				Global_2883589 = outComponent;
				func_123(&Global_80120[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, EXTRAMETADATA::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_131(int iParam0) // Position - 0x11CA5 (72869)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 9, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_132(int iParam0) // Position - 0x11DFC (73212)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*Camiseta sucia, pants*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Trabajador del puerto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Policía de tráfico*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tenis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Buceo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triatlón*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Ropa interior*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Seguridad*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Retrete*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prólogo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Smoking*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pants de chica rosas*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Overol azul*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Overol azul marino*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Overol gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Overol verde*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Caza*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*Camiseta sucia, pantalón cargo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Chamarra de mezclilla, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Traje beige*/, 16);
			num2 = 0;
			num3 = 0;
			num = 119;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Traje azul*/, 16);
			num2 = 0;
			num3 = 0;
			num = 99;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Traje de cuadros café*/, 16);
			num2 = 0;
			num3 = 0;
			num = 129;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Traje extra chico borgoña*/, 16);
			num2 = 0;
			num3 = 0;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Traje extra chico oscuro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 120;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Traje extra chico menta*/, 16);
			num2 = 0;
			num3 = 0;
			num = 139;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Traje extra chico verde*/, 16);
			num2 = 0;
			num3 = 0;
			num = 149;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Traje extra chico azulado*/, 16);
			num2 = 0;
			num3 = 0;
			num = 145;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Traje extra chico caramelo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 140;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Traje extra chico chocolate*/, 16);
			num2 = 0;
			num3 = 0;
			num = 135;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Traje gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Traje arena*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Traje carbón*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Traje hueso*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Traje crema*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Traje negro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Traje gris ceniza*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Camiseta roja, pantalón cargo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Polo amatista, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*Camiseta sucia, pantalón camu.*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Motocross*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*Camiseta Del Perro, pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*Camiseta sucia, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 48, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_133(int iParam0) // Position - 0x1230A (74506)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 1, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_134(int iParam0) // Position - 0x1237F (74623)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 1, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_135(int iParam0) // Position - 0x123F3 (74739)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Rasurado*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Barba 1*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Barba de varios días*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Bigotón*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Bigote de motociclista*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*Náufrago*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 6, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_136(int iParam0) // Position - 0x124DA (74970)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 9;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 6;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		default:
			func_130(num6, iParam0, 33, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_137(int iParam0) // Position - 0x1283D (75837)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Luchador rojo*/, 16);
			num2 = 6;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Luchador verde*/, 16);
			num2 = 6;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Luchador patriota*/, 16);
			num2 = 6;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Luchador dominó*/, 16);
			num2 = 6;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Luchador gris*/, 16);
			num2 = 6;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Luchador fénix*/, 16);
			num2 = 6;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Monstruo verde*/, 16);
			num2 = 7;
			num3 = 0;
			num = 270;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Monstruo rojo*/, 16);
			num2 = 7;
			num3 = 1;
			num = 270;
			break;
	
		default:
			func_130(num6, iParam0, 17, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_138(int iParam0) // Position - 0x12A4E (76366)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Reloj digital negro*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*Reloj digital blanco*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 18, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_139(int iParam0) // Position - 0x12C7E (76926)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 7, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_140(int iParam0) // Position - 0x12D8E (77198)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Botines negros*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Botines de piel de víbora*/, 16);
			num2 = 0;
			num3 = 1;
			num = 22;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Botines grises*/, 16);
			num2 = 0;
			num3 = 2;
			num = 45;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Botines cafés*/, 16);
			num2 = 0;
			num3 = 3;
			num = 65;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Botas de piel de cocodrilo*/, 16);
			num2 = 0;
			num3 = 4;
			num = 58;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Botas vaqueras*/, 16);
			num2 = 0;
			num3 = 5;
			num = 72;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Botas de reptil amarillas*/, 16);
			num2 = 0;
			num3 = 6;
			num = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Botas de reptil*/, 16);
			num2 = 0;
			num3 = 7;
			num = 60;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Botas de trabajo*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Zapatos elegantes*/, 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Mocasines de piel negros*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Mocasines de piel grises*/, 16);
			num2 = 9;
			num3 = 1;
			num = 680;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Mocasines de piel crema*/, 16);
			num2 = 9;
			num3 = 2;
			num = 650;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Mocasines de piel cafés*/, 16);
			num2 = 9;
			num3 = 3;
			num = 670;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*Mocasines de piel blancos*/, 16);
			num2 = 9;
			num3 = 4;
			num = 700;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Mocasines de piel bermejo*/, 16);
			num2 = 9;
			num3 = 5;
			num = 680;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*Mocasines de víbora blancos*/, 16);
			num2 = 9;
			num3 = 6;
			num = 720;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Mocasines de víbora cascabel*/, 16);
			num2 = 9;
			num3 = 7;
			num = 740;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Mocasines de cocodrilo cafés*/, 16);
			num2 = 9;
			num3 = 8;
			num = 760;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Mocasines de cebra bicolor*/, 16);
			num2 = 9;
			num3 = 9;
			num = 780;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Mocasines de reptil*/, 16);
			num2 = 9;
			num3 = 10;
			num = 750;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Mocasines de cocodrilo cafés*/, 16);
			num2 = 9;
			num3 = 11;
			num = 700;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Botas de color castaño*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*Oxfords negros*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Oxfords chocolate*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Oxfords nuez*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Oxfords beige claro*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*Oxfords blancos*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Oxfords cenizos*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Oxfords grises bitono*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Oxfords beige*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Oxfords topacio*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Oxfords negros*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Oxfords lima*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Oxfords cerezo*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Oxfords cafés*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Oxfords grises*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Oxfords crema*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Oxfords azul marino*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Mocasines negros*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Mocasines rojos*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Mocasines cafés*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Mocasines rayas verdes*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Mocasines verdes*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Mocasines cobre*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Mocasines cobre bicolor*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Mocasines azul marino*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Mocasines azules*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Mocasines beige*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*Mocasines blancos*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Mocasines café claro*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Mocasines de víbora negros*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Mocasines bicolor*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Mocasines de víbora cafés*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Mocasines grises*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brogues con punta cafés*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Brogues con punta azul marino*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Brogues con punta ocre*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Brogues con punta guindas*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Brogues con punta azules*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Brogues con punta camuflaje*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Brogues con punta negros*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Brogues con punta café claro*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Brogues con punta morados*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brogues con punta cafés*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Brogues con punta chocolate*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Brogues con punta verde*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Brogues con punta gris ceniza*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Brogues con punta verde oliva*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Brogues con punta bicolor*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Brogues con punta amarillos*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_130(num6, iParam0, 84, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_141(int iParam0) // Position - 0x1372D (79661)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Jeans azules*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Jeans sucios*/, 16);
			num2 = 0;
			num3 = 1;
			num = 95;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Jeans azul oscuro*/, 16);
			num2 = 0;
			num3 = 2;
			num = 129;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Jeans desgastados*/, 16);
			num2 = 0;
			num3 = 3;
			num = 115;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Pantalón de golf negro*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Pantalón de golf cuadros rojizo*/, 16);
			num2 = 11;
			num3 = 1;
			num = 750;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*Pantalón de golf blanco*/, 16);
			num2 = 11;
			num3 = 2;
			num = 650;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Pantalón de golf guinda*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Pantalón de golf langosta*/, 16);
			num2 = 11;
			num3 = 4;
			num = 850;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Pantalón de golf cuadros piedra*/, 16);
			num2 = 11;
			num3 = 5;
			num = 750;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pantalón de golf cuadros rosas*/, 16);
			num2 = 11;
			num3 = 6;
			num = 690;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Pantalón de golf cuadros menta*/, 16);
			num2 = 11;
			num3 = 7;
			num = 820;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Pantalón de golf cuadros café*/, 16);
			num2 = 11;
			num3 = 8;
			num = 650;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pantalón de golf cuadros azul*/, 16);
			num2 = 11;
			num3 = 9;
			num = 690;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Pantalón de golf cuadros beige*/, 16);
			num2 = 11;
			num3 = 10;
			num = 690;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Pantalón de golf cuadros aqua*/, 16);
			num2 = 11;
			num3 = 11;
			num = 820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Pantalón cargo negro*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*Short blanco*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pants rosas*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Pantalón de trabajo café*/, 16);
			num2 = 17;
			num3 = 0;
			num = 58;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Pantalón de trabajo carbón*/, 16);
			num2 = 17;
			num3 = 1;
			num = 68;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Pantalón de trabajo gris*/, 16);
			num2 = 17;
			num3 = 2;
			num = 65;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Pantalón de trabajo café claro*/, 16);
			num2 = 17;
			num3 = 3;
			num = 60;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Pantalón de trabajo azul*/, 16);
			num2 = 17;
			num3 = 4;
			num = 65;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Pantalón de trabajo gris ceniza*/, 16);
			num2 = 17;
			num3 = 5;
			num = 63;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*Pantalón de trabajo blanco*/, 16);
			num2 = 17;
			num3 = 6;
			num = 60;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Pantalón de trabajo beige*/, 16);
			num2 = 17;
			num3 = 7;
			num = 58;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Pantalón cargo café claro*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Pantalón cargo crema*/, 16);
			num2 = 18;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Pantalón cargo plateado*/, 16);
			num2 = 18;
			num3 = 2;
			num = 99;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Pantalón cargo gris*/, 16);
			num2 = 18;
			num3 = 3;
			num = 105;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Pantalón cargo carbón*/, 16);
			num2 = 18;
			num3 = 4;
			num = 110;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Pantalón cargo verde*/, 16);
			num2 = 18;
			num3 = 5;
			num = 110;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*Pantalón cargo blanco*/, 16);
			num2 = 18;
			num3 = 6;
			num = 99;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Pantalón cargo camuflaje gris*/, 16);
			num2 = 18;
			num3 = 7;
			num = 110;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Pantalón cargo camuflaje café*/, 16);
			num2 = 18;
			num3 = 8;
			num = 110;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Pantalón cargo camuflaje verde*/, 16);
			num2 = 18;
			num3 = 9;
			num = 105;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Pantalón cargo bosque*/, 16);
			num2 = 18;
			num3 = 10;
			num = 105;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Short negro*/, 16);
			num2 = 19;
			num3 = 0;
			num = 15;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Short azul claro*/, 16);
			num2 = 19;
			num3 = 1;
			num = 15;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Short naranja*/, 16);
			num2 = 19;
			num3 = 2;
			num = 15;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Short azul*/, 16);
			num2 = 19;
			num3 = 3;
			num = 15;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Short gris pizarra*/, 16);
			num2 = 19;
			num3 = 4;
			num = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Short verde*/, 16);
			num2 = 19;
			num3 = 5;
			num = 15;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Short carmesí*/, 16);
			num2 = 19;
			num3 = 6;
			num = 15;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Short azul claro*/, 16);
			num2 = 19;
			num3 = 7;
			num = 15;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Pantalón gris*/, 16);
			num2 = 20;
			num3 = 0;
			num = 600;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Pantalón caqui*/, 16);
			num2 = 20;
			num3 = 1;
			num = 600;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Pantalón carbón*/, 16);
			num2 = 20;
			num3 = 2;
			num = 600;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Pantalón crema*/, 16);
			num2 = 20;
			num3 = 3;
			num = 600;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Pantalón piedra*/, 16);
			num2 = 20;
			num3 = 4;
			num = 600;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Pantalón negro*/, 16);
			num2 = 20;
			num3 = 5;
			num = 600;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Pantalón cenizo*/, 16);
			num2 = 20;
			num3 = 6;
			num = 600;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Pantalón beige*/, 16);
			num2 = 20;
			num3 = 7;
			num = 600;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Pantalón café*/, 16);
			num2 = 20;
			num3 = 8;
			num = 600;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Pantalón extra chico beige*/, 16);
			num2 = 21;
			num3 = 0;
			num = 80;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Pantalón extra chico azul*/, 16);
			num2 = 21;
			num3 = 1;
			num = 80;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Pantalón extra chico mostaza*/, 16);
			num2 = 21;
			num3 = 2;
			num = 80;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Pantalón extra chico borgoña*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Pantalón extra chico oscuro*/, 16);
			num2 = 21;
			num3 = 4;
			num = 80;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Pantalón extra chico menta*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Pantalón extra chico verde*/, 16);
			num2 = 21;
			num3 = 6;
			num = 80;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Pantalón extra chico azulado*/, 16);
			num2 = 21;
			num3 = 7;
			num = 80;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Pantalón extra chico carmelo*/, 16);
			num2 = 21;
			num3 = 8;
			num = 80;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Pantalón extra chico chocolate*/, 16);
			num2 = 21;
			num3 = 9;
			num = 80;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*Calzones blancos*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Calzones verdes*/, 16);
			num2 = 22;
			num3 = 1;
			num = 12;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Calzones grises*/, 16);
			num2 = 22;
			num3 = 2;
			num = 12;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Calzones leopardo*/, 16);
			num2 = 22;
			num3 = 3;
			num = 22;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Calzones Furia Impotente*/, 16);
			num2 = 22;
			num3 = 4;
			num = 18;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Calzones leopardo rosa*/, 16);
			num2 = 22;
			num3 = 5;
			num = 20;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Calzones Space Monkey 1*/, 16);
			num2 = 22;
			num3 = 6;
			num = 30;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Calzones Space Monkey 2*/, 16);
			num2 = 22;
			num3 = 7;
			num = 30;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Calzones Space Monkey 3*/, 16);
			num2 = 22;
			num3 = 8;
			num = 30;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Calzones Space Monkey 4*/, 16);
			num2 = 22;
			num3 = 9;
			num = 30;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Pants*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Pantalón de esmoquin*/, 16);
			num2 = 24;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 9;
			break;
	
		default:
			func_130(num6, iParam0, 104, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_142(int iParam0) // Position - 0x142A1 (82593)
{
	if (iParam0 < 136)
		func_144(iParam0);
	else
		func_143(iParam0);

	if (Global_80120[0 /*14*/].f_2 == -1)
		func_130(3, iParam0, 242, -1);

	return;
}

void func_143(int iParam0) // Position - 0x142D6 (82646)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Chamarra azul Peyton*/, 16);
			num2 = 21;
			num3 = 0;
			num = 32;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Chamarra roja Overlooked*/, 16);
			num2 = 21;
			num3 = 1;
			num = 39;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Chamarra natural*/, 16);
			num2 = 21;
			num3 = 2;
			num = 40;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Chamarra azul cielo*/, 16);
			num2 = 21;
			num3 = 3;
			num = 42;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Chamarra verde oscuro*/, 16);
			num2 = 21;
			num3 = 4;
			num = 45;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Chamarra de piloto champán*/, 16);
			num2 = 21;
			num3 = 5;
			num = 48;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Chamarra de piel de serpiente*/, 16);
			num2 = 21;
			num3 = 6;
			num = 52;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Chamarra café desértico*/, 16);
			num2 = 21;
			num3 = 7;
			num = 55;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Chamarra de piel de rayas negra*/, 16);
			num2 = 22;
			num3 = 0;
			num = 390;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Chamarra de piel negra*/, 16);
			num2 = 22;
			num3 = 1;
			num = 390;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chamarra de piel color castaño*/, 16);
			num2 = 22;
			num3 = 2;
			num = 560;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Chamarra de piel roja*/, 16);
			num2 = 22;
			num3 = 3;
			num = 390;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*Chamarra de piel blanca*/, 16);
			num2 = 22;
			num3 = 4;
			num = 390;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Chamarra de piel azul*/, 16);
			num2 = 22;
			num3 = 5;
			num = 390;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Chamarra de piel Lonewolf*/, 16);
			num2 = 22;
			num3 = 6;
			num = 560;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Chamarra de piel café*/, 16);
			num2 = 22;
			num3 = 7;
			num = 390;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Chamarra de piel de rayas gris*/, 16);
			num2 = 22;
			num3 = 8;
			num = 390;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Chamarra de piel gris*/, 16);
			num2 = 22;
			num3 = 9;
			num = 390;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Chamarra de piel marrón*/, 16);
			num2 = 22;
			num3 = 10;
			num = 390;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Chamarra de ante café*/, 16);
			num2 = 22;
			num3 = 11;
			num = 3950;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Chaleco de caza café*/, 16);
			num2 = 23;
			num3 = 0;
			num = 150;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Chaleco Woodland*/, 16);
			num2 = 23;
			num3 = 1;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Chaleco de caza gris pardo*/, 16);
			num2 = 23;
			num3 = 2;
			num = 150;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Chaleco de caza tejido café*/, 16);
			num2 = 23;
			num3 = 3;
			num = 150;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Chaleco de campo*/, 16);
			num2 = 23;
			num3 = 4;
			num = 160;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Chaleco de bosque*/, 16);
			num2 = 23;
			num3 = 5;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*De tirantes amarilla*/, 16);
			num2 = 24;
			num3 = 0;
			num = 19;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*De tirantes con pájaros azules*/, 16);
			num2 = 24;
			num3 = 1;
			num = 20;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*De tirantes con dibujo naranja*/, 16);
			num2 = 24;
			num3 = 2;
			num = 19;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*De tirantes con estrellas azules*/, 16);
			num2 = 24;
			num3 = 3;
			num = 22;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*De tirantes con dibujo aguamarina*/, 16);
			num2 = 24;
			num3 = 4;
			num = 20;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*De tirantes Degenatron*/, 16);
			num2 = 24;
			num3 = 5;
			num = 28;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*De tirantes Taco Libre*/, 16);
			num2 = 24;
			num3 = 6;
			num = 28;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*De tirantes con gatito*/, 16);
			num2 = 24;
			num3 = 7;
			num = 25;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*De tirantes con dibujo amarillo*/, 16);
			num2 = 24;
			num3 = 8;
			num = 22;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*De tirantes carbón*/, 16);
			num2 = 24;
			num3 = 9;
			num = 19;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*De tirantes hueso*/, 16);
			num2 = 24;
			num3 = 10;
			num = 22;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*De tirantes con cintas*/, 16);
			num2 = 24;
			num3 = 11;
			num = 19;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*De tirantes naranja*/, 16);
			num2 = 24;
			num3 = 12;
			num = 20;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*De tirantes de camuflaje*/, 16);
			num2 = 24;
			num3 = 13;
			num = 25;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*De tirantes índigo*/, 16);
			num2 = 24;
			num3 = 14;
			num = 20;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*De tirantes Liberty Cocks*/, 16);
			num2 = 24;
			num3 = 15;
			num = 28;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Camisa azul bicolor*/, 16);
			num2 = 25;
			num3 = 0;
			num = 35;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Camisa de círculos*/, 16);
			num2 = 25;
			num3 = 1;
			num = 40;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Camisa bitono gris*/, 16);
			num2 = 25;
			num3 = 2;
			num = 45;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Camisa mostaza*/, 16);
			num2 = 25;
			num3 = 3;
			num = 45;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Camisa de cuadros azul claro*/, 16);
			num2 = 25;
			num3 = 4;
			num = 49;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Camisa estampada verde*/, 16);
			num2 = 25;
			num3 = 5;
			num = 820;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Camisa beige*/, 16);
			num2 = 25;
			num3 = 6;
			num = 790;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Camisa lavanda*/, 16);
			num2 = 25;
			num3 = 7;
			num = 820;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Camisa gris pizarra*/, 16);
			num2 = 25;
			num3 = 8;
			num = 929;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Camisa con iniciales*/, 16);
			num2 = 25;
			num3 = 9;
			num = 40;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Camisa estampada borgoña*/, 16);
			num2 = 25;
			num3 = 10;
			num = 850;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camisa camello*/, 16);
			num2 = 25;
			num3 = 11;
			num = 790;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Saco extra chico beige*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Saco extra chico azul*/, 16);
			num2 = 26;
			num3 = 1;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Saco extra chico mostaza*/, 16);
			num2 = 26;
			num3 = 2;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Saco extra chico borgoña*/, 16);
			num2 = 26;
			num3 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Saco extra chico oscuro*/, 16);
			num2 = 26;
			num3 = 4;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Saco extra chico menta*/, 16);
			num2 = 26;
			num3 = 5;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Saco extra chico verde*/, 16);
			num2 = 26;
			num3 = 6;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Saco extra chico azulado*/, 16);
			num2 = 26;
			num3 = 7;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Saco extra chico caramelo*/, 16);
			num2 = 26;
			num3 = 8;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Saco extra chocolate*/, 16);
			num2 = 26;
			num3 = 9;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Chamarra gris*/, 16);
			num2 = 27;
			num3 = 0;
			num = 2200;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Saco avena*/, 16);
			num2 = 27;
			num3 = 1;
			num = 2500;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Saco carbón*/, 16);
			num2 = 27;
			num3 = 2;
			num = 2500;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Saco hueso*/, 16);
			num2 = 27;
			num3 = 3;
			num = 2200;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Saco crema*/, 16);
			num2 = 27;
			num3 = 4;
			num = 2500;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Saco negro*/, 16);
			num2 = 27;
			num3 = 5;
			num = 2500;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Chamarra gris ceniza*/, 16);
			num2 = 27;
			num3 = 6;
			num = 2200;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Suéter gris oscuro*/, 16);
			num2 = 28;
			num3 = 0;
			num = 1100;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Suéter gris claro*/, 16);
			num2 = 28;
			num3 = 1;
			num = 1200;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Suéter gris pardo*/, 16);
			num2 = 28;
			num3 = 2;
			num = 1220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Suéter azul claro*/, 16);
			num2 = 28;
			num3 = 3;
			num = 1250;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Suéter mandarina*/, 16);
			num2 = 28;
			num3 = 4;
			num = 1300;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Suéter café cantera*/, 16);
			num2 = 28;
			num3 = 5;
			num = 1360;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Suéter triángulos obscuros*/, 16);
			num2 = 28;
			num3 = 6;
			num = 35;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Suéter triángulos enérgicos*/, 16);
			num2 = 28;
			num3 = 7;
			num = 38;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Suéter con fondo arcoíris*/, 16);
			num2 = 28;
			num3 = 8;
			num = 40;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Suéter con fondo oscuro*/, 16);
			num2 = 28;
			num3 = 9;
			num = 42;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Suéter tejido de animales*/, 16);
			num2 = 28;
			num3 = 10;
			num = 50;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Suéter de Bill Brown*/, 16);
			num2 = 28;
			num3 = 11;
			num = 45;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Suéter de rombos menta*/, 16);
			num2 = 28;
			num3 = 12;
			num = 45;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Suéter de rombos grises*/, 16);
			num2 = 28;
			num3 = 13;
			num = 44;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Suéter ochentero color uva*/, 16);
			num2 = 28;
			num3 = 14;
			num = 46;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Suéter ochentero geométrico*/, 16);
			num2 = 28;
			num3 = 15;
			num = 52;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Saco negro*/, 16);
			num2 = 29;
			num3 = 0;
			num = 3200;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*Saco negro totalmente*/, 16);
			num2 = 29;
			num3 = 1;
			num = 3200;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*Saco blanco*/, 16);
			num2 = 29;
			num3 = 2;
			num = 2550;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Saco amarillo pastel*/, 16);
			num2 = 29;
			num3 = 3;
			num = 2750;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Saco caqui*/, 16);
			num2 = 29;
			num3 = 4;
			num = 2590;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Saco gris azulado*/, 16);
			num2 = 29;
			num3 = 5;
			num = 2750;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Saco beige*/, 16);
			num2 = 29;
			num3 = 6;
			num = 2550;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Saco grisáceo*/, 16);
			num2 = 29;
			num3 = 7;
			num = 2590;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Saco gris*/, 16);
			num2 = 29;
			num3 = 8;
			num = 2720;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Saco gris ceniza*/, 16);
			num2 = 29;
			num3 = 9;
			num = 2750;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Blazer gris*/, 16);
			num2 = 30;
			num3 = 0;
			num = 3250;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Blazer beige*/, 16);
			num2 = 30;
			num3 = 1;
			num = 2950;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Blazer negro*/, 16);
			num2 = 30;
			num3 = 2;
			num = 3100;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Blazer café*/, 16);
			num2 = 30;
			num3 = 3;
			num = 3150;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Blazer azul marino*/, 16);
			num2 = 30;
			num3 = 4;
			num = 3240;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Blazer rayas azul marino*/, 16);
			num2 = 30;
			num3 = 5;
			num = 3350;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blazer rayas azul gris*/, 16);
			num2 = 30;
			num3 = 6;
			num = 3400;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Blazer rayas café*/, 16);
			num2 = 30;
			num3 = 7;
			num = 3280;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Saco de smoking*/, 16);
			num2 = 31;
			num3 = 0;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_144(int iParam0) // Position - 0x14EDA (85722)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*Camiseta blanca*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Camiseta amarilla*/, 16);
			num2 = 0;
			num3 = 1;
			num = 25;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Camiseta Dusche*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Camiseta carbón*/, 16);
			num2 = 0;
			num3 = 3;
			num = 15;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Camiseta Cerveza Barracho*/, 16);
			num2 = 0;
			num3 = 4;
			num = 25;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Camiseta Liberty City Wrath*/, 16);
			num2 = 0;
			num3 = 5;
			num = 25;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Camiseta Pump & Run*/, 16);
			num2 = 0;
			num3 = 6;
			num = 22;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Camiseta Atomic*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*Camiseta LS Nuclear Power*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Camiseta Zancudo*/, 16);
			num2 = 0;
			num3 = 9;
			num = 20;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*Camiseta West Coast Classics*/, 16);
			num2 = 0;
			num3 = 10;
			num = 24;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*Camiseta BC Talk Radio*/, 16);
			num2 = 0;
			num3 = 11;
			num = 26;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Camiseta Animal Ark*/, 16);
			num2 = 0;
			num3 = 12;
			num = 28;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Camiseta Rimmers*/, 16);
			num2 = 0;
			num3 = 13;
			num = 29;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Camiseta Paperclips*/, 16);
			num2 = 0;
			num3 = 14;
			num = 22;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Camiseta Pop's Pills*/, 16);
			num2 = 0;
			num3 = 15;
			num = 20;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Camisa Los Santos*/, 16);
			num2 = 3;
			num3 = 0;
			num = 35;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Camisa Del Perro*/, 16);
			num2 = 3;
			num3 = 1;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*Camisa San Andreas*/, 16);
			num2 = 3;
			num3 = 2;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Camisa Love Fist*/, 16);
			num2 = 3;
			num3 = 3;
			num = 38;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*De tirantes Space Monkey 1*/, 16);
			num2 = 3;
			num3 = 4;
			num = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*De tirantes Space Monkey 2*/, 16);
			num2 = 3;
			num3 = 5;
			num = 40;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*De tirantes Space Monkey 3*/, 16);
			num2 = 3;
			num3 = 6;
			num = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*De tirantes Space Monkey 4*/, 16);
			num2 = 3;
			num3 = 7;
			num = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*De tirantes Space Monkey 5*/, 16);
			num2 = 3;
			num3 = 8;
			num = 40;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*De plumas Rearwall negra*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*De plumas Crevis verde*/, 16);
			num2 = 4;
			num3 = 1;
			num = 500;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*De plumas Rearwall neón*/, 16);
			num2 = 4;
			num3 = 2;
			num = 560;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*De plumas Rearwall café*/, 16);
			num2 = 4;
			num3 = 3;
			num = 600;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*De plumas Crevis amarilla*/, 16);
			num2 = 4;
			num3 = 4;
			num = 650;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*De plumas Eris amarilla*/, 16);
			num2 = 4;
			num3 = 5;
			num = 500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*De plumas Crevis roja*/, 16);
			num2 = 4;
			num3 = 6;
			num = 560;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*De plumas Rearwall roja*/, 16);
			num2 = 4;
			num3 = 7;
			num = 500;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*De plumas Crevis azul*/, 16);
			num2 = 4;
			num3 = 8;
			num = 650;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*De plumas Eris gris*/, 16);
			num2 = 4;
			num3 = 9;
			num = 540;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*De plumas Eris roja*/, 16);
			num2 = 4;
			num3 = 10;
			num = 690;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*De plumas Eris verde oliva*/, 16);
			num2 = 4;
			num3 = 11;
			num = 560;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*De plumas Eris aqua*/, 16);
			num2 = 4;
			num3 = 12;
			num = 590;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*De plumas Eris azul*/, 16);
			num2 = 4;
			num3 = 13;
			num = 690;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*De plumas Crevis gris*/, 16);
			num2 = 4;
			num3 = 14;
			num = 540;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*De plumas Eris café*/, 16);
			num2 = 4;
			num3 = 15;
			num = 500;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Polo de flores roja*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Polo amatista*/, 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Polo de rayas turquesa*/, 16);
			num2 = 11;
			num3 = 2;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Polo de rayas rosa*/, 16);
			num2 = 11;
			num3 = 3;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Polo mostaza*/, 16);
			num2 = 11;
			num3 = 4;
			num = 22;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Polo naranja*/, 16);
			num2 = 11;
			num3 = 5;
			num = 350;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Polo de rayas topacio*/, 16);
			num2 = 11;
			num3 = 6;
			num = 27;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Polo menta*/, 16);
			num2 = 11;
			num3 = 7;
			num = 370;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Polo de rayas azul marino*/, 16);
			num2 = 11;
			num3 = 8;
			num = 25;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Polo de rayas verde*/, 16);
			num2 = 11;
			num3 = 9;
			num = 22;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Polo turquesa bicolor*/, 16);
			num2 = 11;
			num3 = 10;
			num = 25;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Polo café*/, 16);
			num2 = 11;
			num3 = 11;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Polo rosa*/, 16);
			num2 = 11;
			num3 = 12;
			num = 22;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Polo verde*/, 16);
			num2 = 11;
			num3 = 13;
			num = 27;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Polo verde agua*/, 16);
			num2 = 11;
			num3 = 14;
			num = 25;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Polo de rayas café*/, 16);
			num2 = 11;
			num3 = 15;
			num = 27;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Vestido de flores verde menta*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Vestido rosa*/, 16);
			num2 = 13;
			num3 = 1;
			num = 39;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*Vestido de flores blanco*/, 16);
			num2 = 13;
			num3 = 2;
			num = 42;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Vestido de cebra morado*/, 16);
			num2 = 13;
			num3 = 3;
			num = 49;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Vestido crema*/, 16);
			num2 = 13;
			num3 = 4;
			num = 35;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Vestido Space Monkey 1*/, 16);
			num2 = 13;
			num3 = 5;
			num = 50;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Vestido Space Monkey 2*/, 16);
			num2 = 13;
			num3 = 6;
			num = 50;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Vestido Space Monkey 3*/, 16);
			num2 = 13;
			num3 = 7;
			num = 50;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Sudadera negra*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Sudadera plateada*/, 16);
			num2 = 14;
			num3 = 1;
			num = 88;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Sudadera Ammu-Nation camu.*/, 16);
			num2 = 14;
			num3 = 2;
			num = 60;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*Sudadera LSGC urbana*/, 16);
			num2 = 14;
			num3 = 3;
			num = 80;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*Sudadera LSGC gris*/, 16);
			num2 = 14;
			num3 = 4;
			num = 70;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Sudadera Ammu-nation A*/, 16);
			num2 = 14;
			num3 = 5;
			num = 80;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Sudadera Blauser*/, 16);
			num2 = 14;
			num3 = 6;
			num = 70;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*Sudadera LSGC bosque*/, 16);
			num2 = 14;
			num3 = 7;
			num = 90;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Sudadera Penetrators*/, 16);
			num2 = 14;
			num3 = 8;
			num = 95;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Sudadera Crevis fluorescente*/, 16);
			num2 = 14;
			num3 = 9;
			num = 105;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Sudadera azul*/, 16);
			num2 = 14;
			num3 = 10;
			num = 95;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Sudadera verde*/, 16);
			num2 = 14;
			num3 = 11;
			num = 110;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*Sudadera LS Jardineros*/, 16);
			num2 = 14;
			num3 = 12;
			num = 98;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Sudadera cenizo 18*/, 16);
			num2 = 14;
			num3 = 13;
			num = 88;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Sudadera Mist XI roja*/, 16);
			num2 = 14;
			num3 = 14;
			num = 98;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Sudadera Eris carbón*/, 16);
			num2 = 14;
			num3 = 15;
			num = 110;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Camiseta de tenis*/, 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Pecho descubierto*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Chamarra rosa*/, 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Chamarra de mezclilla azul*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Chamarra de mezclilla negra*/, 16);
			num2 = 18;
			num3 = 1;
			num = 520;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Chamarra de mezclilla gris*/, 16);
			num2 = 18;
			num3 = 2;
			num = 490;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Chamarra de mezclilla café*/, 16);
			num2 = 18;
			num3 = 3;
			num = 450;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Chamarra de mezclilla deslavada*/, 16);
			num2 = 18;
			num3 = 4;
			num = 420;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Chamarra de mezclilla ceniza*/, 16);
			num2 = 18;
			num3 = 5;
			num = 420;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Camisa de mezclilla*/, 16);
			num2 = 19;
			num3 = 0;
			num = 85;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Camisa de mezclilla desgastada*/, 16);
			num2 = 19;
			num3 = 1;
			num = 85;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Camisa negra*/, 16);
			num2 = 19;
			num3 = 2;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Camisa de cuadros gris*/, 16);
			num2 = 19;
			num3 = 3;
			num = 68;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Camisa de cuadros café*/, 16);
			num2 = 19;
			num3 = 4;
			num = 68;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Camisa de cuadros roja*/, 16);
			num2 = 19;
			num3 = 5;
			num = 78;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Camisa café*/, 16);
			num2 = 19;
			num3 = 6;
			num = 85;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Camisa caqui*/, 16);
			num2 = 19;
			num3 = 7;
			num = 68;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Camisa de cuadros rojos*/, 16);
			num2 = 19;
			num3 = 8;
			num = 75;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Camisa de cuadros cafés*/, 16);
			num2 = 19;
			num3 = 9;
			num = 75;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Camisa de cuadros verde*/, 16);
			num2 = 19;
			num3 = 10;
			num = 78;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Camisa de cuadros granate*/, 16);
			num2 = 19;
			num3 = 11;
			num = 75;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Camisa gris*/, 16);
			num2 = 19;
			num3 = 12;
			num = 75;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Camisa de cuadros azul*/, 16);
			num2 = 19;
			num3 = 13;
			num = 75;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Camisa azul bicolor*/, 16);
			num2 = 19;
			num3 = 14;
			num = 78;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Camisa azul marino*/, 16);
			num2 = 19;
			num3 = 15;
			num = 78;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Camisa de boliche guinda*/, 16);
			num2 = 20;
			num3 = 0;
			num = 40;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Camisa de boliche morada*/, 16);
			num2 = 20;
			num3 = 1;
			num = 32;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Camisa de boliche carmesí*/, 16);
			num2 = 20;
			num3 = 2;
			num = 32;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Camisa de boliche café claro*/, 16);
			num2 = 20;
			num3 = 3;
			num = 32;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Camisa de boliche con flamas*/, 16);
			num2 = 20;
			num3 = 4;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Camisa de boliche calaveras*/, 16);
			num2 = 20;
			num3 = 5;
			num = 38;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Camisa de boliche azul claro*/, 16);
			num2 = 20;
			num3 = 6;
			num = 35;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Camisa de boliche escarabajos*/, 16);
			num2 = 20;
			num3 = 7;
			num = 38;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Camisa de boliche crema*/, 16);
			num2 = 20;
			num3 = 8;
			num = 29;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Camisa de boliche cubos*/, 16);
			num2 = 20;
			num3 = 9;
			num = 32;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Camisa de boliche beige*/, 16);
			num2 = 20;
			num3 = 10;
			num = 29;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Camisa de boliche azul*/, 16);
			num2 = 20;
			num3 = 11;
			num = 35;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Camisa de boliche amarilla*/, 16);
			num2 = 20;
			num3 = 12;
			num = 32;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Camisa de boliche rosa*/, 16);
			num2 = 20;
			num3 = 13;
			num = 35;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*Camisa de boliche blanca*/, 16);
			num2 = 20;
			num3 = 14;
			num = 32;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Camisa de boliche negra*/, 16);
			num2 = 20;
			num3 = 15;
			num = 40;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_145(int iParam0) // Position - 0x15DE8 (89576)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Escaso*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Helado*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Rasurado*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Fleco a un lado*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Crecido*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Rasurado 2*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Hacia atrás*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 9, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_146(int iParam0) // Position - 0x15F15 (89877)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_80120[0 /*14*/].f_5 = 2;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_130(num6, iParam0, 7, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_147(int iParam0, int iParam1) // Position - 0x16013 (90131)
{
	switch (iParam0)
	{
		case 0:
			func_165(iParam1);
			break;
	
		case 2:
			func_164(iParam1);
			break;
	
		case 3:
			func_160(iParam1);
			break;
	
		case 4:
			func_159(iParam1);
			break;
	
		case 6:
			func_158(iParam1);
			break;
	
		case 5:
			func_157(iParam1);
			break;
	
		case 8:
			func_156(iParam1);
			break;
	
		case 9:
			func_155(iParam1);
			break;
	
		case 10:
			func_154(iParam1);
			break;
	
		case 1:
			func_153(iParam1);
			break;
	
		case 7:
			func_152(iParam1);
			break;
	
		case 11:
			func_151(iParam1);
			break;
	
		case 12:
			func_150(iParam1);
			break;
	
		case 13:
			func_149(iParam1);
			break;
	
		case 14:
			func_148(iParam1);
			break;
	}

	return;
}

void func_148(int iParam0) // Position - 0x16103 (90371)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch de diamantes*/, 16);
			num2 = 1;
			num3 = 0;
			num = 4590;
			num4 = 2;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch de obsidiana*/, 16);
			num2 = 1;
			num3 = 1;
			num = 4100;
			num4 = 2;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch de zafiros*/, 16);
			num2 = 1;
			num3 = 2;
			num = 3850;
			num4 = 2;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch de ópalos*/, 16);
			num2 = 1;
			num3 = 3;
			num = 1850;
			num4 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch de platino*/, 16);
			num2 = 1;
			num3 = 4;
			num = 5250;
			num4 = 2;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch de granates*/, 16);
			num2 = 1;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch de jaspe*/, 16);
			num2 = 1;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch de aguamarina*/, 16);
			num2 = 1;
			num3 = 7;
			num = 5050;
			num4 = 2;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov de diamantes*/, 16);
			num2 = 2;
			num3 = 0;
			num = 2500;
			num4 = 2;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov de esmeraldas*/, 16);
			num2 = 2;
			num3 = 1;
			num = 1950;
			num4 = 2;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov de cuarzo*/, 16);
			num2 = 2;
			num3 = 2;
			num = 3900;
			num4 = 2;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov de obsidiana*/, 16);
			num2 = 2;
			num3 = 3;
			num = 3550;
			num4 = 2;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov de platino*/, 16);
			num2 = 2;
			num3 = 4;
			num = 4500;
			num4 = 2;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov de ágata*/, 16);
			num2 = 2;
			num3 = 5;
			num = 2700;
			num4 = 2;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov de jade*/, 16);
			num2 = 2;
			num3 = 6;
			num = 3100;
			num4 = 2;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov de ónix*/, 16);
			num2 = 2;
			num3 = 7;
			num = 2950;
			num4 = 2;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Aerodinámicos tinte naranja*/, 16);
			num2 = 1;
			num3 = 0;
			num = 75;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Aerodinámicos grafito*/, 16);
			num2 = 1;
			num3 = 1;
			num = 75;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Aerodinámicos grises*/, 16);
			num2 = 1;
			num3 = 2;
			num = 75;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Aerodinámicos cafés*/, 16);
			num2 = 1;
			num3 = 3;
			num = 75;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Aerodinámicos borgoña*/, 16);
			num2 = 1;
			num3 = 4;
			num = 75;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Aerodinámicos chocolate*/, 16);
			num2 = 1;
			num3 = 5;
			num = 75;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Aerodinámicos negros*/, 16);
			num2 = 1;
			num3 = 6;
			num = 75;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Aerodinámicos tinte morado*/, 16);
			num2 = 1;
			num3 = 7;
			num = 75;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Aerodinámicos azul grisáceo*/, 16);
			num2 = 1;
			num3 = 8;
			num = 75;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*Aerodinámicos blancos*/, 16);
			num2 = 1;
			num3 = 9;
			num = 75;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Goggles para nadar*/, 16);
			num2 = 2;
			num3 = 0;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Lentes de sol Racer*/, 16);
			num2 = 3;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank grafito*/, 16);
			num2 = 4;
			num3 = 0;
			num = 120;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker ceniza*/, 16);
			num2 = 4;
			num3 = 1;
			num = 128;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker chocolate*/, 16);
			num2 = 4;
			num3 = 2;
			num = 130;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank negros*/, 16);
			num2 = 4;
			num3 = 3;
			num = 140;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker negros*/, 16);
			num2 = 4;
			num3 = 4;
			num = 145;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank verdes*/, 16);
			num2 = 4;
			num3 = 5;
			num = 135;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank azules*/, 16);
			num2 = 4;
			num3 = 6;
			num = 138;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Aviadores negros*/, 16);
			num2 = 5;
			num3 = 0;
			num = 110;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*Aviadores blancos*/, 16);
			num2 = 5;
			num3 = 1;
			num = 112;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Aviadores cafés*/, 16);
			num2 = 5;
			num3 = 2;
			num = 115;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Aviadores grises*/, 16);
			num2 = 5;
			num3 = 3;
			num = 118;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Aviadores bicolor*/, 16);
			num2 = 5;
			num3 = 4;
			num = 120;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Aviadores hueso*/, 16);
			num2 = 5;
			num3 = 5;
			num = 125;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Aviadores rojos*/, 16);
			num2 = 5;
			num3 = 6;
			num = 128;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Aviadores plateados*/, 16);
			num2 = 5;
			num3 = 7;
			num = 138;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Aviadores carbón*/, 16);
			num2 = 5;
			num3 = 8;
			num = 140;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Aviadores dorados*/, 16);
			num2 = 5;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*De aviador entintados*/, 16);
			num2 = 6;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*De aviador plateados*/, 16);
			num2 = 6;
			num3 = 1;
			num = 55;
			num4 = 10;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*De aviador sepia*/, 16);
			num2 = 6;
			num3 = 2;
			num = 58;
			num4 = 10;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*De aviador azules*/, 16);
			num2 = 6;
			num3 = 3;
			num = 58;
			num4 = 10;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*De aviador amarillos*/, 16);
			num2 = 6;
			num3 = 4;
			num = 60;
			num4 = 10;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*De aviador grises*/, 16);
			num2 = 6;
			num3 = 5;
			num = 62;
			num4 = 10;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*De aviador negros*/, 16);
			num2 = 6;
			num3 = 6;
			num = 65;
			num4 = 10;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*De aviador grafito*/, 16);
			num2 = 6;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*De aviador de color humo*/, 16);
			num2 = 6;
			num3 = 8;
			num = 68;
			num4 = 10;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*De aviador dorados*/, 16);
			num2 = 6;
			num3 = 9;
			num = 72;
			num4 = 10;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban negros*/, 16);
			num2 = 7;
			num3 = 0;
			num = 145;
			num4 = 10;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban turquesa*/, 16);
			num2 = 7;
			num3 = 1;
			num = 149;
			num4 = 10;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban carey*/, 16);
			num2 = 7;
			num3 = 2;
			num = 139;
			num4 = 10;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban negro y naranja*/, 16);
			num2 = 7;
			num3 = 3;
			num = 149;
			num4 = 10;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque blancos*/, 16);
			num2 = 7;
			num3 = 4;
			num = 135;
			num4 = 10;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque camuflaje*/, 16);
			num2 = 7;
			num3 = 5;
			num = 138;
			num4 = 10;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque amarillos*/, 16);
			num2 = 7;
			num3 = 6;
			num = 140;
			num4 = 10;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque burdeos*/, 16);
			num2 = 7;
			num3 = 7;
			num = 145;
			num4 = 10;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque negro y naranja*/, 16);
			num2 = 7;
			num3 = 8;
			num = 159;
			num4 = 10;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque cuadrados*/, 16);
			num2 = 7;
			num3 = 9;
			num = 155;
			num4 = 10;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*T-Bone dorados*/, 16);
			num2 = 8;
			num3 = 0;
			num = 198;
			num4 = 10;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*T-Bone plateados*/, 16);
			num2 = 8;
			num3 = 1;
			num = 210;
			num4 = 10;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*T-Bone bicolor*/, 16);
			num2 = 8;
			num3 = 2;
			num = 185;
			num4 = 10;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*T-Bone verdes*/, 16);
			num2 = 8;
			num3 = 3;
			num = 220;
			num4 = 10;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*T-Bone cafés*/, 16);
			num2 = 8;
			num3 = 4;
			num = 190;
			num4 = 10;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*T-Bone durazno*/, 16);
			num2 = 8;
			num3 = 5;
			num = 200;
			num4 = 10;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*T-Bone grises*/, 16);
			num2 = 8;
			num3 = 6;
			num = 208;
			num4 = 10;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*T-Bone naranjas*/, 16);
			num2 = 8;
			num3 = 7;
			num = 210;
			num4 = 10;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Monolente amarillos*/, 16);
			num2 = 9;
			num3 = 0;
			num = 165;
			num4 = 10;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Monolente grises*/, 16);
			num2 = 9;
			num3 = 1;
			num = 185;
			num4 = 10;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Monolente avispa*/, 16);
			num2 = 9;
			num3 = 2;
			num = 190;
			num4 = 10;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Monolente ceniza*/, 16);
			num2 = 9;
			num3 = 3;
			num = 178;
			num4 = 10;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Monolente azules*/, 16);
			num2 = 9;
			num3 = 4;
			num = 180;
			num4 = 10;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Monolente sepia*/, 16);
			num2 = 9;
			num3 = 5;
			num = 168;
			num4 = 10;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*Monolente blancos*/, 16);
			num2 = 9;
			num3 = 6;
			num = 170;
			num4 = 10;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Monolente naranjas*/, 16);
			num2 = 9;
			num3 = 7;
			num = 175;
			num4 = 10;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Monolente rojos*/, 16);
			num2 = 9;
			num3 = 8;
			num = 170;
			num4 = 10;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Monolente humo*/, 16);
			num2 = 9;
			num3 = 9;
			num = 178;
			num4 = 10;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Tríptico dorados*/, 16);
			num2 = 10;
			num3 = 0;
			num = 140;
			num4 = 10;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Tríptico grises*/, 16);
			num2 = 10;
			num3 = 1;
			num = 145;
			num4 = 10;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Tríptico plateados*/, 16);
			num2 = 10;
			num3 = 2;
			num = 150;
			num4 = 10;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Tríptico bicolor*/, 16);
			num2 = 10;
			num3 = 3;
			num = 165;
			num4 = 10;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Tríptico cobre*/, 16);
			num2 = 10;
			num3 = 4;
			num = 168;
			num4 = 10;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Tríptico negros*/, 16);
			num2 = 10;
			num3 = 5;
			num = 178;
			num4 = 10;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*Tríptico blancos*/, 16);
			num2 = 10;
			num3 = 6;
			num = 160;
			num4 = 10;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Máscara de hockey*/, 16);
			num2 = 0;
			num3 = 0;
			num = 320;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gorra de golf gris*/, 16);
			num2 = 3;
			num3 = 0;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 7;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 8;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Monstruo verde*/, 16);
			num2 = 8;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Monstruo rojo*/, 16);
			num2 = 8;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Cerdo rosa*/, 16);
			num2 = 9;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Cerdo café*/, 16);
			num2 = 9;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Calavera plateada*/, 16);
			num2 = 10;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Calavera dorada*/, 16);
			num2 = 10;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Pogo*/, 16);
			num2 = 11;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*Hockey blanca*/, 16);
			num2 = 12;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Hockey roja*/, 16);
			num2 = 12;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Simio café claro*/, 16);
			num2 = 13;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Simio café*/, 16);
			num2 = 13;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnaval naranja*/, 16);
			num2 = 14;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnaval blanca*/, 16);
			num2 = 14;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnaval azul*/, 16);
			num2 = 14;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Gorra Toe Shoes*/, 16);
			num2 = 16;
			num3 = 0;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Gorra Yeti*/, 16);
			num2 = 16;
			num3 = 1;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*Gorra OG*/, 16);
			num2 = 16;
			num3 = 2;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Gorra Magnetics*/, 16);
			num2 = 16;
			num3 = 3;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*Gorra de LS roja*/, 16);
			num2 = 16;
			num3 = 4;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Gorra Los Santos carbón*/, 16);
			num2 = 16;
			num3 = 5;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Gorra Stank*/, 16);
			num2 = 16;
			num3 = 6;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Gorra Los Santos gris*/, 16);
			num2 = 16;
			num3 = 7;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Gorra Perseus*/, 16);
			num2 = 16;
			num3 = 8;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Gorra Feud gris oscuro*/, 16);
			num2 = 16;
			num3 = 9;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Gorra Feud negra*/, 16);
			num2 = 16;
			num3 = 10;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*Gorra de LS negra*/, 16);
			num2 = 16;
			num3 = 11;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*Gorra  LS Corkers*/, 16);
			num2 = 16;
			num3 = 12;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*Gorra LS blanca*/, 16);
			num2 = 16;
			num3 = 13;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Gorra Feud verde*/, 16);
			num2 = 16;
			num3 = 14;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*Gorra LS oliva*/, 16);
			num2 = 16;
			num3 = 15;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 1;
			num4 = 0;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 2;
			num4 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 3;
			num4 = 0;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 4;
			num4 = 0;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 5;
			num4 = 0;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			num4 = 0;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Gorra Toe Shoes*/, 16);
			num2 = 19;
			num3 = 0;
			num = 30;
			num4 = 0;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Gorra Yeti*/, 16);
			num2 = 19;
			num3 = 1;
			num = 30;
			num4 = 0;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*Gorra OG*/, 16);
			num2 = 19;
			num3 = 2;
			num = 32;
			num4 = 0;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Gorra Magnetics*/, 16);
			num2 = 19;
			num3 = 3;
			num = 35;
			num4 = 0;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*Gorra de LS roja*/, 16);
			num2 = 19;
			num3 = 4;
			num = 38;
			num4 = 0;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Gorra Los Santos carbón*/, 16);
			num2 = 19;
			num3 = 5;
			num = 42;
			num4 = 0;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Gorra Stank*/, 16);
			num2 = 19;
			num3 = 6;
			num = 42;
			num4 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Gorra Los Santos gris*/, 16);
			num2 = 19;
			num3 = 7;
			num = 40;
			num4 = 0;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Gorra Perseus*/, 16);
			num2 = 19;
			num3 = 8;
			num = 45;
			num4 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Gorra Feud gris oscuro*/, 16);
			num2 = 19;
			num3 = 9;
			num = 48;
			num4 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Gorra Feud negra*/, 16);
			num2 = 19;
			num3 = 10;
			num = 25;
			num4 = 0;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*Gorra de LS negra*/, 16);
			num2 = 19;
			num3 = 11;
			num = 25;
			num4 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*Gorra  LS Corkers*/, 16);
			num2 = 19;
			num3 = 12;
			num = 28;
			num4 = 0;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*Gorra LS blanca*/, 16);
			num2 = 19;
			num3 = 13;
			num = 28;
			num4 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Gorra Feud verde*/, 16);
			num2 = 19;
			num3 = 14;
			num = 30;
			num4 = 0;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*Gorra LS oliva*/, 16);
			num2 = 19;
			num3 = 15;
			num = 35;
			num4 = 0;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			num4 = 0;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 175, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_149(int iParam0) // Position - 0x175F4 (95732)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 9, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_150(int iParam0) // Position - 0x17745 (96069)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Camisa azul, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*Smoking blanco*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Buceo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triatlón*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Bombero*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminador*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Overol negro*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Paracaidismo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Smoking*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Overol azul*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Overol azul marino*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Overol gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Overol verde*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Sudadera ceniza, pants*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Camisa de cuadros amarillos, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Traje de cuadros grises*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Sudadera negra, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Sudadera casual, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Camisa hueso, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Traje de cuadros gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Traje de cuadros ceniza*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Traje de cuadros carbón*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Traje de cuadros café claro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4650;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Traje grafito*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Traje ceniza*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5000;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Traje beige*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Traje avena*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4750;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Traje de cuadros azul*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Traje gris claro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5200;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Traje rojo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Traje gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Traje azul marino*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Traje óxido*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Traje verde*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Traje beige oscuro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Ropa interior*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*Sudadera LS negra, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Sudadera gris, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3000;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Motocross*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*Camiseta UR, pantalón de combate*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*Camiseta UR OG, pantalón de piel*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Manga larga UR, pants camuflados*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*Chamarra UR, holgados*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 47, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_151(int iParam0) // Position - 0x17C50 (97360)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Chaleco de cuadros gris perla*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Chaleco ceniza*/, 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Chaleco azul marino*/, 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Chaleco de cuadros colorido*/, 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Chaleco beige*/, 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Chaleco negro*/, 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Chaleco de cuadros gris*/, 16);
			num2 = 3;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Chaleco de cuadros jade*/, 16);
			num2 = 3;
			num3 = 7;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Chaleco de cuadros beige*/, 16);
			num2 = 3;
			num3 = 8;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Chaleco de cuadros cafés*/, 16);
			num2 = 3;
			num3 = 9;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Chaleco café*/, 16);
			num2 = 3;
			num3 = 10;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*Chaleco de cuadros blancos*/, 16);
			num2 = 3;
			num3 = 11;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Chaleco de cuadros perla*/, 16);
			num2 = 3;
			num3 = 12;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Chaleco gris cálido*/, 16);
			num2 = 3;
			num3 = 13;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Chaleco topacio*/, 16);
			num2 = 3;
			num3 = 14;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Chaleco café*/, 16);
			num2 = 3;
			num3 = 15;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Chaleco de cuadros gris perla*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Chaleco ceniza*/, 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Chaleco azul marino*/, 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Chaleco de cuadros colorido*/, 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Chaleco beige*/, 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Chaleco negro*/, 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Chaleco de cuadros gris*/, 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Chaleco de cuadros jade*/, 16);
			num2 = 4;
			num3 = 7;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Chaleco de cuadros beige*/, 16);
			num2 = 4;
			num3 = 8;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Chaleco de cuadros cafés*/, 16);
			num2 = 4;
			num3 = 9;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Chaleco café*/, 16);
			num2 = 4;
			num3 = 10;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*Chaleco de cuadros blancos*/, 16);
			num2 = 4;
			num3 = 11;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Chaleco de cuadros perla*/, 16);
			num2 = 4;
			num3 = 12;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Chaleco gris cálido*/, 16);
			num2 = 4;
			num3 = 13;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Chaleco topacio*/, 16);
			num2 = 4;
			num3 = 14;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Chaleco café*/, 16);
			num2 = 4;
			num3 = 15;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*Camisa blanca*/, 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*Camisa blanca*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Camisa bicolor*/, 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Sudadera carbón*/, 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*Camiseta blanca*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Camisa azul*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*Camiseta blanca*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Camiseta Crevis*/, 16);
			num2 = 10;
			num3 = 1;
			num = 48;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Camiseta Yeti*/, 16);
			num2 = 10;
			num3 = 2;
			num = 35;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Camiseta Sweatbox*/, 16);
			num2 = 10;
			num3 = 3;
			num = 32;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Camiseta Trey Baker*/, 16);
			num2 = 10;
			num3 = 4;
			num = 35;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Camiseta negra*/, 16);
			num2 = 10;
			num3 = 5;
			num = 48;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Camiseta Fruntalot*/, 16);
			num2 = 10;
			num3 = 6;
			num = 52;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Camiseta Kingz of Los Santos*/, 16);
			num2 = 10;
			num3 = 7;
			num = 38;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Camiseta Ten Off The Chain*/, 16);
			num2 = 10;
			num3 = 8;
			num = 42;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Camiseta gris*/, 16);
			num2 = 10;
			num3 = 9;
			num = 38;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Camiseta verde*/, 16);
			num2 = 10;
			num3 = 10;
			num = 35;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camiseta camuflada*/, 16);
			num2 = 10;
			num3 = 11;
			num = 48;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Camiseta Yeti arco iris*/, 16);
			num2 = 10;
			num3 = 12;
			num = 42;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Camiseta Feud rayada*/, 16);
			num2 = 10;
			num3 = 13;
			num = 45;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Camiseta Yogarishima*/, 16);
			num2 = 10;
			num3 = 14;
			num = 45;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Camiseta Feud gris*/, 16);
			num2 = 10;
			num3 = 15;
			num = 49;
			break;
	
		default:
			func_130(num6, iParam0, 63, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_152(int iParam0) // Position - 0x182C1 (99009)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 1, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_153(int iParam0) // Position - 0x18335 (99125)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Rasurado*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Van Dyck completo*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Metódica*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Espartana*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Barba de varios días*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 5, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_154(int iParam0) // Position - 0x18405 (99333)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 5;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 2;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 4;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 5;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 6;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 1;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 3;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 5;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 6;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 7;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 8;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 9;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 10;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 11;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 12;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 13;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 14;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 15;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 1;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 3;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 4;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 5;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 6;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 53, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_155(int iParam0) // Position - 0x18935 (100661)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Luchador rojo*/, 16);
			num2 = 5;
			num3 = 0;
			num = 125;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Luchador verde*/, 16);
			num2 = 5;
			num3 = 1;
			num = 150;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Luchador patriota*/, 16);
			num2 = 5;
			num3 = 2;
			num = 175;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Luchador dominó*/, 16);
			num2 = 5;
			num3 = 3;
			num = 85;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Luchador gris*/, 16);
			num2 = 5;
			num3 = 4;
			num = 150;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Luchador fénix*/, 16);
			num2 = 5;
			num3 = 5;
			num = 175;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 12, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_156(int iParam0) // Position - 0x18ACC (101068)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Pañuelo*/, 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Corbata plateada*/, 16);
			num2 = 11;
			num3 = 0;
			num = 195;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Corbata dorada*/, 16);
			num2 = 11;
			num3 = 1;
			num = 195;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Corbata crema*/, 16);
			num2 = 11;
			num3 = 2;
			num = 195;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Corbata azul de diamantes*/, 16);
			num2 = 11;
			num3 = 3;
			num = 250;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Corbata de lunares azules*/, 16);
			num2 = 11;
			num3 = 4;
			num = 250;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*Corbata de lunares blancos*/, 16);
			num2 = 11;
			num3 = 5;
			num = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Corbata gris oscuro*/, 16);
			num2 = 11;
			num3 = 6;
			num = 195;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Corbata gris rayada*/, 16);
			num2 = 11;
			num3 = 7;
			num = 250;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Corbata rayada plateada*/, 16);
			num2 = 11;
			num3 = 8;
			num = 250;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Corbata roja rayada*/, 16);
			num2 = 11;
			num3 = 9;
			num = 250;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Corbata rayada bronce*/, 16);
			num2 = 11;
			num3 = 10;
			num = 250;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*Corbata balanca de diamantes*/, 16);
			num2 = 11;
			num3 = 11;
			num = 195;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Corbata de rombos negros*/, 16);
			num2 = 11;
			num3 = 12;
			num = 250;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Corbata morada*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Corbata crema*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Corbata beige*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Corbata cenizo*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*Corbata balanca de diamantes*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Corbata gris de diamantes*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Corbata beige rayada*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Corbata roja rayada*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Corbata de lana bermeja*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Corbata gris rayada*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Corbata gris de lana*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Corbata grisácea*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Corbata azul de diamantes*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Corbata de algodón café*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Corbata gris de texturas*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Corbata amatista*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Corbata morada*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Corbata crema*/, 16);
			num2 = 16;
			num3 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Corbata beige*/, 16);
			num2 = 16;
			num3 = 2;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Corbata cenizo*/, 16);
			num2 = 16;
			num3 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*Corbata balanca de diamantes*/, 16);
			num2 = 16;
			num3 = 4;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Corbata gris de diamantes*/, 16);
			num2 = 16;
			num3 = 5;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Corbata beige rayada*/, 16);
			num2 = 16;
			num3 = 6;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Corbata roja rayada*/, 16);
			num2 = 16;
			num3 = 7;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Corbata de lana bermeja*/, 16);
			num2 = 16;
			num3 = 8;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Corbata gris rayada*/, 16);
			num2 = 16;
			num3 = 9;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Corbata gris de lana*/, 16);
			num2 = 16;
			num3 = 10;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Corbata grisácea*/, 16);
			num2 = 16;
			num3 = 11;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Corbata azul de diamantes*/, 16);
			num2 = 16;
			num3 = 12;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Corbata de algodón café*/, 16);
			num2 = 16;
			num3 = 13;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Corbata gris de texturas*/, 16);
			num2 = 16;
			num3 = 14;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Corbata amatista*/, 16);
			num2 = 16;
			num3 = 15;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Corbata morada*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Corbata crema*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Corbata beige*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Corbata cenizo*/, 16);
			num2 = 17;
			num3 = 3;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*Corbata balanca de diamantes*/, 16);
			num2 = 17;
			num3 = 4;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Corbata gris de diamantes*/, 16);
			num2 = 17;
			num3 = 5;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Corbata beige rayada*/, 16);
			num2 = 17;
			num3 = 6;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Corbata roja rayada*/, 16);
			num2 = 17;
			num3 = 7;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Corbata de lana bermeja*/, 16);
			num2 = 17;
			num3 = 8;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Corbata gris rayada*/, 16);
			num2 = 17;
			num3 = 9;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Corbata gris de lana*/, 16);
			num2 = 17;
			num3 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Corbata grisácea*/, 16);
			num2 = 17;
			num3 = 11;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Corbata azul de diamantes*/, 16);
			num2 = 17;
			num3 = 12;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Corbata de algodón café*/, 16);
			num2 = 17;
			num3 = 13;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Corbata gris de texturas*/, 16);
			num2 = 17;
			num3 = 14;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Corbata amatista*/, 16);
			num2 = 17;
			num3 = 15;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 77, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_157(int iParam0) // Position - 0x192CA (103114)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 7, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_158(int iParam0) // Position - 0x193DA (103386)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*Tenis blancos*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*Tenis completamente blancos*/, 16);
			num2 = 0;
			num3 = 1;
			num = 80;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Tenis carbón bicolor*/, 16);
			num2 = 0;
			num3 = 2;
			num = 80;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Tenis amarillos*/, 16);
			num2 = 0;
			num3 = 3;
			num = 89;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Tenis grises*/, 16);
			num2 = 0;
			num3 = 4;
			num = 45;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Tenis negros bicolor*/, 16);
			num2 = 0;
			num3 = 5;
			num = 35;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Tenis grises bicolor*/, 16);
			num2 = 0;
			num3 = 6;
			num = 89;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Tenis lima intenso*/, 16);
			num2 = 0;
			num3 = 7;
			num = 95;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Tenis bicolor*/, 16);
			num2 = 0;
			num3 = 8;
			num = 115;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Tenis cian*/, 16);
			num2 = 0;
			num3 = 9;
			num = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Tenis cian intenso*/, 16);
			num2 = 0;
			num3 = 10;
			num = 145;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Tenis fluorescentes*/, 16);
			num2 = 0;
			num3 = 11;
			num = 145;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Botas de trabajo*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 1;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Botas de punta redonda desierto*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Botas de punta redonda cafés*/, 16);
			num2 = 6;
			num3 = 1;
			num = 180;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Botas de punta redonda chocolate*/, 16);
			num2 = 6;
			num3 = 2;
			num = 80;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Botas de punta redonda grises*/, 16);
			num2 = 6;
			num3 = 3;
			num = 200;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Botas de punta redonda pizarra*/, 16);
			num2 = 6;
			num3 = 4;
			num = 220;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Botas de punta redonda cobre*/, 16);
			num2 = 6;
			num3 = 5;
			num = 235;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Zapatos de víbora grises*/, 16);
			num2 = 8;
			num3 = 0;
			num = 870;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Zapatos negros*/, 16);
			num2 = 8;
			num3 = 1;
			num = 870;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*Zapatos de víbora blancos*/, 16);
			num2 = 8;
			num3 = 2;
			num = 870;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Zapatos de cocodrilo grises*/, 16);
			num2 = 8;
			num3 = 3;
			num = 1275;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Zapatos de cocodrilo*/, 16);
			num2 = 8;
			num3 = 4;
			num = 1275;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Zapatos de cocodrilo cafés*/, 16);
			num2 = 8;
			num3 = 5;
			num = 1275;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Zapatos de víbora de cascabel*/, 16);
			num2 = 8;
			num3 = 6;
			num = 1275;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Zapatos de pitón grises*/, 16);
			num2 = 8;
			num3 = 7;
			num = 1275;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Zapatos de cocodrilo bicolor*/, 16);
			num2 = 8;
			num3 = 8;
			num = 1275;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Brogues negros*/, 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Tenis bicolor*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Tenis naranjas*/, 16);
			num2 = 11;
			num3 = 1;
			num = 50;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Tenis gris oscuro*/, 16);
			num2 = 11;
			num3 = 2;
			num = 50;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Tenis verde desierto*/, 16);
			num2 = 11;
			num3 = 3;
			num = 50;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Tenis menta*/, 16);
			num2 = 11;
			num3 = 4;
			num = 50;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Tenis Freeway*/, 16);
			num2 = 11;
			num3 = 5;
			num = 50;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Tenis de moda animal*/, 16);
			num2 = 11;
			num3 = 6;
			num = 50;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Tenis clásicos Feud*/, 16);
			num2 = 11;
			num3 = 7;
			num = 50;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Tenis cacao*/, 16);
			num2 = 11;
			num3 = 8;
			num = 50;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Tenis Magnetics*/, 16);
			num2 = 11;
			num3 = 9;
			num = 50;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Tenis azules*/, 16);
			num2 = 11;
			num3 = 10;
			num = 50;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*Tenis blancos*/, 16);
			num2 = 11;
			num3 = 11;
			num = 50;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Tenis de camuflaje blanco*/, 16);
			num2 = 11;
			num3 = 12;
			num = 50;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Tenis de camuflaje verde*/, 16);
			num2 = 11;
			num3 = 13;
			num = 50;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Tenis suaves*/, 16);
			num2 = 11;
			num3 = 14;
			num = 50;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Tenis latte*/, 16);
			num2 = 11;
			num3 = 15;
			num = 50;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*Tenis de skate blancos*/, 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Tenis de skate verdes*/, 16);
			num2 = 12;
			num3 = 1;
			num = 25;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Tenis de skate bicolor*/, 16);
			num2 = 12;
			num3 = 2;
			num = 20;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Tenis de skate gris oscuro*/, 16);
			num2 = 12;
			num3 = 3;
			num = 24;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Tenis de skate azules*/, 16);
			num2 = 12;
			num3 = 4;
			num = 25;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Tenis de skate grises*/, 16);
			num2 = 12;
			num3 = 5;
			num = 27;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Tenis de skate rojos*/, 16);
			num2 = 12;
			num3 = 6;
			num = 29;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Tenis de skate naranjas*/, 16);
			num2 = 12;
			num3 = 7;
			num = 27;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Tenis de skate chocolate*/, 16);
			num2 = 12;
			num3 = 8;
			num = 25;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Tenis de skate negros*/, 16);
			num2 = 12;
			num3 = 9;
			num = 30;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Tenis de skate claros*/, 16);
			num2 = 12;
			num3 = 10;
			num = 28;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Tenis de skate verdes*/, 16);
			num2 = 12;
			num3 = 11;
			num = 30;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Oxfords negros*/, 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Tenis de skate grises*/, 16);
			num2 = 14;
			num3 = 0;
			num = 155;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*Tenis de skate blancos*/, 16);
			num2 = 14;
			num3 = 1;
			num = 155;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Tenis de skate nuez*/, 16);
			num2 = 14;
			num3 = 2;
			num = 165;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Tenis de skate jade intenso*/, 16);
			num2 = 14;
			num3 = 3;
			num = 170;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Tenis de skate bicolor*/, 16);
			num2 = 14;
			num3 = 4;
			num = 160;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Tenis de skate con rojo*/, 16);
			num2 = 14;
			num3 = 5;
			num = 165;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Tenis de skate rojos*/, 16);
			num2 = 14;
			num3 = 6;
			num = 170;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Tenis de skate beige*/, 16);
			num2 = 14;
			num3 = 7;
			num = 160;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Mocasines de piel negros*/, 16);
			num2 = 16;
			num3 = 0;
			num = 720;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Mocasines de piel grises*/, 16);
			num2 = 16;
			num3 = 1;
			num = 680;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Mocasines de piel crema*/, 16);
			num2 = 16;
			num3 = 2;
			num = 650;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Mocasines de piel cafés*/, 16);
			num2 = 16;
			num3 = 3;
			num = 670;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*Mocasines de piel blancos*/, 16);
			num2 = 16;
			num3 = 4;
			num = 700;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Mocasines de piel bermejo*/, 16);
			num2 = 16;
			num3 = 5;
			num = 680;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*Mocasines de víbora blancos*/, 16);
			num2 = 16;
			num3 = 6;
			num = 720;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Mocasines de cascabel*/, 16);
			num2 = 16;
			num3 = 7;
			num = 740;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Mocasines de víbora cafés*/, 16);
			num2 = 16;
			num3 = 8;
			num = 760;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Mocasines de cebra bicolor*/, 16);
			num2 = 16;
			num3 = 9;
			num = 780;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Mocasines de reptil*/, 16);
			num2 = 16;
			num3 = 10;
			num = 750;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Mocasines de cocodrilo cafés*/, 16);
			num2 = 16;
			num3 = 11;
			num = 700;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*Oxfords negros*/, 16);
			num2 = 17;
			num3 = 0;
			num = 790;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Oxfords chocolate*/, 16);
			num2 = 17;
			num3 = 1;
			num = 750;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Oxfords nuez*/, 16);
			num2 = 17;
			num3 = 2;
			num = 860;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Oxfords beige claro*/, 16);
			num2 = 17;
			num3 = 3;
			num = 750;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*Oxfords blancos*/, 16);
			num2 = 17;
			num3 = 4;
			num = 790;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Oxfords cenizos*/, 16);
			num2 = 17;
			num3 = 5;
			num = 840;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Oxfords grises bitono*/, 16);
			num2 = 17;
			num3 = 6;
			num = 820;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Oxfords beige*/, 16);
			num2 = 17;
			num3 = 7;
			num = 800;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Oxfords topacio*/, 16);
			num2 = 17;
			num3 = 8;
			num = 850;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Oxfords negros*/, 16);
			num2 = 17;
			num3 = 9;
			num = 870;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Oxfords lima*/, 16);
			num2 = 17;
			num3 = 10;
			num = 720;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Oxfords cerezo*/, 16);
			num2 = 17;
			num3 = 11;
			num = 740;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Oxfords cafés*/, 16);
			num2 = 17;
			num3 = 12;
			num = 800;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Oxfords grises*/, 16);
			num2 = 17;
			num3 = 13;
			num = 750;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Oxfords crema*/, 16);
			num2 = 17;
			num3 = 14;
			num = 770;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Oxfords azul marino*/, 16);
			num2 = 17;
			num3 = 15;
			num = 860;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Mocasines negros*/, 16);
			num2 = 18;
			num3 = 0;
			num = 850;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Mocasines rojos*/, 16);
			num2 = 18;
			num3 = 1;
			num = 800;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Mocasines cafés*/, 16);
			num2 = 18;
			num3 = 2;
			num = 780;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Mocasines rayas verdes*/, 16);
			num2 = 18;
			num3 = 3;
			num = 890;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Mocasines verdes*/, 16);
			num2 = 18;
			num3 = 4;
			num = 820;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Mocasines cobre*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Mocasines cobre bicolor*/, 16);
			num2 = 18;
			num3 = 6;
			num = 870;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Mocasines azul marino*/, 16);
			num2 = 18;
			num3 = 7;
			num = 930;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Mocasines azules*/, 16);
			num2 = 18;
			num3 = 8;
			num = 880;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Mocasines beige*/, 16);
			num2 = 18;
			num3 = 9;
			num = 900;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*Mocasines blancos*/, 16);
			num2 = 18;
			num3 = 10;
			num = 920;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Mocasines café claro*/, 16);
			num2 = 18;
			num3 = 11;
			num = 970;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Mocasines de víbora negros*/, 16);
			num2 = 18;
			num3 = 12;
			num = 990;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Mocasines bicolor*/, 16);
			num2 = 18;
			num3 = 13;
			num = 960;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Mocasines de víbora cafés*/, 16);
			num2 = 18;
			num3 = 14;
			num = 980;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Mocasines grises*/, 16);
			num2 = 18;
			num3 = 15;
			num = 950;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brogues con punta cafés*/, 16);
			num2 = 19;
			num3 = 0;
			num = 110;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Brogues con punta azul marino*/, 16);
			num2 = 19;
			num3 = 1;
			num = 115;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Brogues con punta ocre*/, 16);
			num2 = 19;
			num3 = 2;
			num = 120;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Brogues con punta guindas*/, 16);
			num2 = 19;
			num3 = 3;
			num = 110;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Brogues con punta azules*/, 16);
			num2 = 19;
			num3 = 4;
			num = 125;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Brogues con punta camuflaje*/, 16);
			num2 = 19;
			num3 = 5;
			num = 128;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Brogues con punta negros*/, 16);
			num2 = 19;
			num3 = 6;
			num = 135;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Brogues con punta café claro*/, 16);
			num2 = 19;
			num3 = 7;
			num = 130;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Brogues con punta morados*/, 16);
			num2 = 19;
			num3 = 8;
			num = 145;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brogues con punta cafés*/, 16);
			num2 = 19;
			num3 = 9;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Brogues con punta chocolate*/, 16);
			num2 = 19;
			num3 = 10;
			num = 120;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Brogues con punta verde*/, 16);
			num2 = 19;
			num3 = 11;
			num = 150;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Brogues con punta gris ceniza*/, 16);
			num2 = 19;
			num3 = 12;
			num = 125;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Brogues con punta verde oliva*/, 16);
			num2 = 19;
			num3 = 13;
			num = 120;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Brogues con punta bicolor*/, 16);
			num2 = 19;
			num3 = 14;
			num = 130;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Brogues con punta amarillos*/, 16);
			num2 = 19;
			num3 = 15;
			num = 110;
			break;
	
		default:
			func_130(num6, iParam0, 134, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_159(int iParam0) // Position - 0x1A305 (107269)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Short cargo crema*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Short cargo arena*/, 16);
			num2 = 0;
			num3 = 1;
			num = 32;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Short cargo azul marino*/, 16);
			num2 = 0;
			num3 = 2;
			num = 38;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Short cargo verde olivo*/, 16);
			num2 = 0;
			num3 = 3;
			num = 44;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Pantalón de smoking negro*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Pantalón de golf gris*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Pantalón de golf crema*/, 16);
			num2 = 6;
			num3 = 1;
			num = 690;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Pantalón de golf cuadros café*/, 16);
			num2 = 6;
			num3 = 2;
			num = 720;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Pantalón de golf tartán*/, 16);
			num2 = 6;
			num3 = 3;
			num = 850;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Pantalón de golf cuadros carbón*/, 16);
			num2 = 6;
			num3 = 4;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Pantalón de golf cuadros negro*/, 16);
			num2 = 6;
			num3 = 5;
			num = 740;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Pantalón de golf cuadros cafés*/, 16);
			num2 = 6;
			num3 = 6;
			num = 750;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Pantalón de golf gris pizarra*/, 16);
			num2 = 6;
			num3 = 7;
			num = 790;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Jeans holgados gris pizarra*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Jeans holgados azul índigo*/, 16);
			num2 = 8;
			num3 = 1;
			num = 145;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Jeans holgados grises*/, 16);
			num2 = 8;
			num3 = 2;
			num = 140;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Jeans holgados azul claro*/, 16);
			num2 = 8;
			num3 = 3;
			num = 148;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Jeans holgados negros*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Jeans holgados azules verdoso*/, 16);
			num2 = 8;
			num3 = 5;
			num = 154;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Jeans holgados desgastados*/, 16);
			num2 = 8;
			num3 = 6;
			num = 158;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Pantalón chino beige*/, 16);
			num2 = 11;
			num3 = 0;
			num = 820;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Pantalón chino verde oliva*/, 16);
			num2 = 11;
			num3 = 1;
			num = 820;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Pantalón chino negro*/, 16);
			num2 = 11;
			num3 = 2;
			num = 850;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Pantalón chino hueso*/, 16);
			num2 = 11;
			num3 = 3;
			num = 850;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Pantalón chino gris*/, 16);
			num2 = 11;
			num3 = 4;
			num = 920;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Pantalón chino azul marino*/, 16);
			num2 = 11;
			num3 = 5;
			num = 950;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Pants plateados*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Pants grises*/, 16);
			num2 = 13;
			num3 = 1;
			num = 45;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Pants topacio*/, 16);
			num2 = 13;
			num3 = 2;
			num = 48;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Pants gris ceniza*/, 16);
			num2 = 13;
			num3 = 3;
			num = 45;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Pants grafito*/, 16);
			num2 = 13;
			num3 = 4;
			num = 48;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Pants verde oliva*/, 16);
			num2 = 13;
			num3 = 5;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Pants jade*/, 16);
			num2 = 13;
			num3 = 6;
			num = 55;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Pants verde oscuro*/, 16);
			num2 = 13;
			num3 = 7;
			num = 58;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Pants verde azulado*/, 16);
			num2 = 13;
			num3 = 8;
			num = 60;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Pants cafés*/, 16);
			num2 = 13;
			num3 = 9;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Pants Kingz verdes*/, 16);
			num2 = 13;
			num3 = 10;
			num = 62;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Pants gris claro*/, 16);
			num2 = 13;
			num3 = 11;
			num = 65;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*Short blanco*/, 16);
			num2 = 14;
			num3 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Pantalón de cuadros gris*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Pantalón de cuadros plateado*/, 16);
			num2 = 15;
			num3 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Pantalón de cuadros carbón*/, 16);
			num2 = 15;
			num3 = 2;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Pantalón de cuadros beige*/, 16);
			num2 = 15;
			num3 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Pantalón carbón*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Pantalón cenizo*/, 16);
			num2 = 15;
			num3 = 5;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Pantalón caqui*/, 16);
			num2 = 15;
			num3 = 6;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Pantalón crema*/, 16);
			num2 = 15;
			num3 = 7;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Pantalón de cuadros azul*/, 16);
			num2 = 15;
			num3 = 8;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Pantalón hueso*/, 16);
			num2 = 15;
			num3 = 9;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*Pantalón blanco*/, 16);
			num2 = 15;
			num3 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Pantalón azul claro*/, 16);
			num2 = 15;
			num3 = 11;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Pantalón azul marino*/, 16);
			num2 = 15;
			num3 = 12;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Pantalón óxido*/, 16);
			num2 = 15;
			num3 = 13;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Pantalón verde*/, 16);
			num2 = 15;
			num3 = 14;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Pantalón café*/, 16);
			num2 = 15;
			num3 = 15;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Pantalón militar*/, 16);
			num2 = 16;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 16;
			num3 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*Bóxers blancos*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Bóxers grises*/, 16);
			num2 = 18;
			num3 = 1;
			num = 160;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Bóxers negros*/, 16);
			num2 = 18;
			num3 = 2;
			num = 180;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Bóxers gris ceniza Kings*/, 16);
			num2 = 18;
			num3 = 3;
			num = 180;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Bóxers verdes Feud*/, 16);
			num2 = 18;
			num3 = 4;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Bóxers blancos Feud*/, 16);
			num2 = 18;
			num3 = 5;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Pantalón de smoking negro*/, 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Jeans índigo*/, 16);
			num2 = 20;
			num3 = 0;
			num = 118;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Jeans negros*/, 16);
			num2 = 20;
			num3 = 1;
			num = 120;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Jeans desgastados*/, 16);
			num2 = 20;
			num3 = 2;
			num = 128;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Jeans azul oscuro*/, 16);
			num2 = 20;
			num3 = 3;
			num = 128;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Jeans cafés*/, 16);
			num2 = 20;
			num3 = 4;
			num = 130;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Jeans azules*/, 16);
			num2 = 20;
			num3 = 5;
			num = 145;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Jeans verde oliva*/, 16);
			num2 = 20;
			num3 = 6;
			num = 138;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Jeans negros desgastados*/, 16);
			num2 = 20;
			num3 = 7;
			num = 132;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Jeans cafés*/, 16);
			num2 = 20;
			num3 = 8;
			num = 148;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Jeans ajustados índigo*/, 16);
			num2 = 21;
			num3 = 0;
			num = 118;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Jeans ajustados negros*/, 16);
			num2 = 21;
			num3 = 1;
			num = 118;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Jeans ajustados aqua*/, 16);
			num2 = 21;
			num3 = 2;
			num = 118;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Jeans ajustados cafés*/, 16);
			num2 = 21;
			num3 = 3;
			num = 129;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Jeans ajustados azules*/, 16);
			num2 = 21;
			num3 = 4;
			num = 135;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Jeans ajustados rojos*/, 16);
			num2 = 21;
			num3 = 5;
			num = 135;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Jeans ajustados grises*/, 16);
			num2 = 21;
			num3 = 6;
			num = 118;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Jeans ajustados verdes*/, 16);
			num2 = 21;
			num3 = 7;
			num = 118;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Jeans ajustados café claro*/, 16);
			num2 = 21;
			num3 = 8;
			num = 118;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*Short LS Panic carbón*/, 16);
			num2 = 22;
			num3 = 0;
			num = 55;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*Short LS Panic amarillo*/, 16);
			num2 = 22;
			num3 = 1;
			num = 55;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Short Prolaps blanco*/, 16);
			num2 = 22;
			num3 = 2;
			num = 59;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Short Prolaps azul*/, 16);
			num2 = 22;
			num3 = 3;
			num = 59;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*Short LC Salamanders rojo*/, 16);
			num2 = 22;
			num3 = 4;
			num = 65;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*Short LC Salamanders verde*/, 16);
			num2 = 22;
			num3 = 5;
			num = 65;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*Short LS Shrimps gris*/, 16);
			num2 = 22;
			num3 = 6;
			num = 69;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*Short LS Shrimps blanco*/, 16);
			num2 = 22;
			num3 = 7;
			num = 69;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*Short LOB gris*/, 16);
			num2 = 22;
			num3 = 8;
			num = 75;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*Short LOB azul*/, 16);
			num2 = 22;
			num3 = 9;
			num = 75;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*Short LOB verde*/, 16);
			num2 = 22;
			num3 = 10;
			num = 65;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*Short LOB café claro*/, 16);
			num2 = 22;
			num3 = 11;
			num = 65;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*Short LOB naranja*/, 16);
			num2 = 22;
			num3 = 12;
			num = 65;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*Short LOB azul claro*/, 16);
			num2 = 22;
			num3 = 13;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Short Broker blanco*/, 16);
			num2 = 23;
			num3 = 0;
			num = 38;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Short Broker negro*/, 16);
			num2 = 23;
			num3 = 1;
			num = 38;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Short Broker gris*/, 16);
			num2 = 23;
			num3 = 2;
			num = 28;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Short Broker azul marino*/, 16);
			num2 = 23;
			num3 = 3;
			num = 34;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Short Broker verde*/, 16);
			num2 = 23;
			num3 = 4;
			num = 36;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Short Broker café*/, 16);
			num2 = 23;
			num3 = 5;
			num = 32;
			break;
	
		default:
			func_130(num6, iParam0, 117, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_160(int iParam0) // Position - 0x1AFC2 (110530)
{
	if (iParam0 < 107)
		func_163(iParam0);
	else if (iParam0 < 227)
		func_162(iParam0);
	else
		func_161(iParam0);

	if (Global_80120[0 /*14*/].f_2 == -1)
		func_130(3, iParam0, 318, -1);

	return;
}

void func_161(int iParam0) // Position - 0x1B008 (110600)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Saco de cuadros gris*/, 16);
			num2 = 23;
			num3 = 0;
			num5 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Saco de cuadros cenizo*/, 16);
			num2 = 23;
			num3 = 1;
			num5 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Saco de cuadros carbón*/, 16);
			num2 = 23;
			num3 = 2;
			num5 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Saco de cadros beige*/, 16);
			num2 = 23;
			num3 = 3;
			num5 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Saco gris pizarra*/, 16);
			num2 = 23;
			num3 = 4;
			num5 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Saco plata*/, 16);
			num2 = 23;
			num3 = 5;
			num5 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Saco piedra*/, 16);
			num2 = 23;
			num3 = 6;
			num5 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Saco crema*/, 16);
			num2 = 23;
			num3 = 7;
			num5 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Saco cuadros azul*/, 16);
			num2 = 23;
			num3 = 8;
			num5 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Saco grisáceo*/, 16);
			num2 = 23;
			num3 = 9;
			num5 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Saco rojo*/, 16);
			num2 = 23;
			num3 = 10;
			num5 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Saco gris*/, 16);
			num2 = 23;
			num3 = 11;
			num5 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Saco azul marino*/, 16);
			num2 = 23;
			num3 = 12;
			num5 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Saco óxido*/, 16);
			num2 = 23;
			num3 = 13;
			num5 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Saco verde*/, 16);
			num2 = 23;
			num3 = 14;
			num5 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Saco beige*/, 16);
			num2 = 23;
			num3 = 15;
			num5 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Chaleco de cuadros azul marino*/, 16);
			num2 = 24;
			num3 = 0;
			num = 2200;
			num5 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Chaleco de cuadros gris claro*/, 16);
			num2 = 24;
			num3 = 1;
			num = 2200;
			num5 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Chaleco de cuadros gris perla*/, 16);
			num2 = 24;
			num3 = 2;
			num = 2200;
			num5 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Chaleco gris*/, 16);
			num2 = 24;
			num3 = 3;
			num = 2200;
			num5 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Chaleco de cuadros púrpura*/, 16);
			num2 = 24;
			num3 = 4;
			num = 2200;
			num5 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*Chaleco gris claro*/, 16);
			num2 = 24;
			num3 = 5;
			num = 2200;
			num5 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Chaleco gris perla*/, 16);
			num2 = 24;
			num3 = 6;
			num = 2200;
			num5 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Chaleco de cuadros gris*/, 16);
			num2 = 24;
			num3 = 7;
			num = 2200;
			num5 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Chaleco de cuadros verde*/, 16);
			num2 = 24;
			num3 = 8;
			num = 2200;
			num5 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Chaleco cenizo*/, 16);
			num2 = 24;
			num3 = 9;
			num = 2200;
			num5 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Chaleco de cuadros piedra*/, 16);
			num2 = 24;
			num3 = 10;
			num = 2200;
			num5 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Chaleco de cuadros carbón*/, 16);
			num2 = 24;
			num3 = 11;
			num = 2200;
			num5 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*Chaleco blanco*/, 16);
			num2 = 24;
			num3 = 12;
			num = 2200;
			num5 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Chaleco gris*/, 16);
			num2 = 24;
			num3 = 13;
			num = 2200;
			num5 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Chaleco de cuadros gris perla*/, 16);
			num2 = 24;
			num3 = 14;
			num = 2200;
			num5 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*Chaleco plateado*/, 16);
			num2 = 24;
			num3 = 15;
			num = 2200;
			num5 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Saco de smoking gris*/, 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num5 = 1;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Chaleco de caza café*/, 16);
			num2 = 27;
			num3 = 0;
			num = 150;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Chaleco Woodland*/, 16);
			num2 = 27;
			num3 = 1;
			num = 160;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Chaleco de caza gris pardo*/, 16);
			num2 = 27;
			num3 = 2;
			num = 150;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Chaleco de caza tejido café*/, 16);
			num2 = 27;
			num3 = 3;
			num = 150;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Chaleco de campo*/, 16);
			num2 = 27;
			num3 = 4;
			num = 160;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Chaleco de bosque*/, 16);
			num2 = 27;
			num3 = 5;
			num = 160;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Sudadera plateada*/, 16);
			num2 = 28;
			num3 = 0;
			num = 88;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Sudadera Ammu-Nation camu.*/, 16);
			num2 = 28;
			num3 = 1;
			num = 60;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*Sudadera LSGC gris*/, 16);
			num2 = 28;
			num3 = 2;
			num = 70;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*Sudadera LSGC urbana*/, 16);
			num2 = 28;
			num3 = 3;
			num = 80;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*Sudadera LSGC bosque*/, 16);
			num2 = 28;
			num3 = 4;
			num = 90;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Sudadera Ammu-nation A*/, 16);
			num2 = 28;
			num3 = 5;
			num = 80;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Sudadera Blauser*/, 16);
			num2 = 28;
			num3 = 6;
			num = 70;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Sudadera Superstroika naranja*/, 16);
			num2 = 28;
			num3 = 7;
			num = 95;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Sudadera Crevis fluorescente*/, 16);
			num2 = 28;
			num3 = 8;
			num = 105;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Sudadera azul*/, 16);
			num2 = 28;
			num3 = 9;
			num = 95;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Sudadera verde*/, 16);
			num2 = 28;
			num3 = 10;
			num = 110;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*Sudadera LS Jardineros*/, 16);
			num2 = 28;
			num3 = 11;
			num = 98;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Sudadera cenizo 18*/, 16);
			num2 = 28;
			num3 = 12;
			num = 88;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Sudadera Mist XI roja*/, 16);
			num2 = 28;
			num3 = 13;
			num = 98;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Sudadera Eris carbón*/, 16);
			num2 = 28;
			num3 = 14;
			num = 110;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*Sudadera OG*/, 16);
			num2 = 28;
			num3 = 15;
			num = 98;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*Camiseta de cuello v blanca*/, 16);
			num2 = 29;
			num3 = 0;
			num = 250;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Camiseta en v, gris ceniza*/, 16);
			num2 = 29;
			num3 = 1;
			num = 270;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Camiseta en v, negra*/, 16);
			num2 = 29;
			num3 = 2;
			num = 280;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Camiseta en v, café*/, 16);
			num2 = 29;
			num3 = 3;
			num = 275;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Camiseta en v, verde oliva*/, 16);
			num2 = 29;
			num3 = 4;
			num = 290;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Camiseta en v Corkers*/, 16);
			num2 = 29;
			num3 = 5;
			num = 35;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Camiseta en v Feud*/, 16);
			num2 = 29;
			num3 = 6;
			num = 35;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Camiseta en v Magnetics*/, 16);
			num2 = 29;
			num3 = 7;
			num = 35;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Camiseta en v, menta*/, 16);
			num2 = 29;
			num3 = 8;
			num = 295;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Camiseta en v Harsh Souls*/, 16);
			num2 = 29;
			num3 = 9;
			num = 35;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Camiseta en v Trey Baker*/, 16);
			num2 = 29;
			num3 = 10;
			num = 35;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Camiseta en v Fuque*/, 16);
			num2 = 29;
			num3 = 11;
			num = 35;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Camiseta en v Fellowship*/, 16);
			num2 = 29;
			num3 = 12;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Suéter cardigan verde*/, 16);
			num2 = 30;
			num3 = 0;
			num = 1750;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Suéter cardigan gris*/, 16);
			num2 = 30;
			num3 = 1;
			num = 1920;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Suéter cardigan gris oscuro*/, 16);
			num2 = 30;
			num3 = 2;
			num = 1890;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Suéter cardigan azul*/, 16);
			num2 = 30;
			num3 = 3;
			num = 1850;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Suéter cardigan rojo*/, 16);
			num2 = 30;
			num3 = 4;
			num = 1750;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Suéter cardigan carbón*/, 16);
			num2 = 30;
			num3 = 5;
			num = 1990;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*Suéter cardigan blanco*/, 16);
			num2 = 30;
			num3 = 6;
			num = 1820;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Suéter cardigan plateado*/, 16);
			num2 = 30;
			num3 = 7;
			num = 1990;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Suéter cardigan azul claro*/, 16);
			num2 = 30;
			num3 = 8;
			num = 1920;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Suéter cardigan aqua*/, 16);
			num2 = 30;
			num3 = 9;
			num = 1850;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Suéter cardigan gris bicolor*/, 16);
			num2 = 30;
			num3 = 10;
			num = 1990;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Suéter cardigan rosa*/, 16);
			num2 = 30;
			num3 = 11;
			num = 1790;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Suéter cardigan amarillo*/, 16);
			num2 = 30;
			num3 = 12;
			num = 1790;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*Camiseta LS Panic gris*/, 16);
			num2 = 31;
			num3 = 0;
			num = 69;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*Camiseta LS Panic amarilla*/, 16);
			num2 = 31;
			num3 = 1;
			num = 75;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Camiseta Penetrators blanca*/, 16);
			num2 = 31;
			num3 = 2;
			num = 75;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Camiseta Penetrators azul*/, 16);
			num2 = 31;
			num3 = 3;
			num = 79;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*Camiseta LC Salamanders roja*/, 16);
			num2 = 31;
			num3 = 4;
			num = 79;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*Camiseta LC Salamanders verde*/, 16);
			num2 = 31;
			num3 = 5;
			num = 89;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*Camiseta LS Shrimps gris*/, 16);
			num2 = 31;
			num3 = 6;
			num = 85;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*Camiseta LS Shrimps blanca*/, 16);
			num2 = 31;
			num3 = 7;
			num = 85;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Camiseta UR*/, 16);
			num2 = 31;
			num3 = 8;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_162(int iParam0) // Position - 0x1BAAD (113325)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Chamarra Sanke A*/, 16);
			num2 = 12;
			num3 = 0;
			num = 195;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Chamarra Eagle 69*/, 16);
			num2 = 12;
			num3 = 1;
			num = 420;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*Chamarra LS Corkers 33*/, 16);
			num2 = 12;
			num3 = 2;
			num = 390;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*Chamarra LSP 41*/, 16);
			num2 = 12;
			num3 = 3;
			num = 450;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*Chamarra LS Corkers E*/, 16);
			num2 = 12;
			num3 = 4;
			num = 400;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*Chamarra LS Squeezers*/, 16);
			num2 = 12;
			num3 = 5;
			num = 390;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*Chamarra The Feud 69*/, 16);
			num2 = 12;
			num3 = 6;
			num = 570;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*Chamarra LS Pounders*/, 16);
			num2 = 12;
			num3 = 7;
			num = 390;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*Chamarra SA*/, 16);
			num2 = 12;
			num3 = 8;
			num = 470;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Chamarra Redwood A*/, 16);
			num2 = 12;
			num3 = 9;
			num = 390;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Tenis de skate UR*/, 16);
			num2 = 12;
			num3 = 10;
			num = 520;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*Chamarra The Feud negra*/, 16);
			num2 = 12;
			num3 = 11;
			num = 490;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Chamarra Yeti*/, 16);
			num2 = 12;
			num3 = 12;
			num = 490;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*Chamarra LSP 71*/, 16);
			num2 = 12;
			num3 = 13;
			num = 590;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Chamarra Dust Devils*/, 16);
			num2 = 12;
			num3 = 14;
			num = 560;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*Chamarra SA 56*/, 16);
			num2 = 12;
			num3 = 15;
			num = 520;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Sudadera gris*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Sudadera Kingz of Los Santos*/, 16);
			num2 = 13;
			num3 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*Sudadera LS negra*/, 16);
			num2 = 13;
			num3 = 2;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Sudadera azul marino*/, 16);
			num2 = 13;
			num3 = 3;
			num = 90;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*Sudadera LS mostaza*/, 16);
			num2 = 13;
			num3 = 4;
			num = 85;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Sudadera Crevis*/, 16);
			num2 = 13;
			num3 = 5;
			num = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Sudadera Dust Devils*/, 16);
			num2 = 13;
			num3 = 6;
			num = 90;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Sudadera Feud verde oliva*/, 16);
			num2 = 13;
			num3 = 7;
			num = 47;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Sudadera Eris*/, 16);
			num2 = 13;
			num3 = 8;
			num = 45;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Sudadera Hinterland*/, 16);
			num2 = 13;
			num3 = 9;
			num = 48;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Sudadera Feud menta*/, 16);
			num2 = 13;
			num3 = 10;
			num = 45;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Sudadera Penetrators gris*/, 16);
			num2 = 13;
			num3 = 11;
			num = 85;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Sudadera gris claro*/, 16);
			num2 = 13;
			num3 = 12;
			num = 45;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Sudadera Rearwall*/, 16);
			num2 = 13;
			num3 = 13;
			num = 47;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Sudadera Trey Baker*/, 16);
			num2 = 13;
			num3 = 14;
			num = 45;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Sudadera Feud camuflaje*/, 16);
			num2 = 13;
			num3 = 15;
			num = 48;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Chamarra gris*/, 16);
			num2 = 14;
			num3 = 0;
			num = 290;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Chamarra carbón*/, 16);
			num2 = 14;
			num3 = 1;
			num = 290;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Chamarra plateada*/, 16);
			num2 = 14;
			num3 = 2;
			num = 290;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Chamarra verde oliva*/, 16);
			num2 = 14;
			num3 = 3;
			num = 290;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Chamarra café*/, 16);
			num2 = 14;
			num3 = 4;
			num = 290;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Chamarra arena*/, 16);
			num2 = 14;
			num3 = 5;
			num = 290;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Chamarra camuflaje campo*/, 16);
			num2 = 14;
			num3 = 6;
			num = 65;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Chamarra camuflaje desierto*/, 16);
			num2 = 14;
			num3 = 7;
			num = 65;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*Camiseta blanca*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Camiseta gris*/, 16);
			num2 = 15;
			num3 = 1;
			num = 220;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Camiseta gris pizarra*/, 16);
			num2 = 15;
			num3 = 2;
			num = 220;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Camiseta jade*/, 16);
			num2 = 15;
			num3 = 3;
			num = 240;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*Camiseta 100%*/, 16);
			num2 = 15;
			num3 = 4;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Camiseta azul índigo*/, 16);
			num2 = 15;
			num3 = 5;
			num = 250;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Camiseta negra*/, 16);
			num2 = 15;
			num3 = 6;
			num = 260;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*Camiseta LC Wrath*/, 16);
			num2 = 15;
			num3 = 7;
			num = 40;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*Camiseta LOB*/, 16);
			num2 = 15;
			num3 = 8;
			num = 50;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*Camiseta UCLS Bookworms*/, 16);
			num2 = 15;
			num3 = 9;
			num = 45;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Camiseta Los Santos roja*/, 16);
			num2 = 15;
			num3 = 10;
			num = 40;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Camiseta Queensbury Boxing*/, 16);
			num2 = 15;
			num3 = 11;
			num = 55;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Camisa negra*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Chamarra azul*/, 16);
			num2 = 17;
			num3 = 0;
			num = 40;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*Chamarra OG gris oscuro*/, 16);
			num2 = 17;
			num3 = 1;
			num = 50;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*Chamarra OG blanca*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Chamarra Corkers verde*/, 16);
			num2 = 17;
			num3 = 3;
			num = 50;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Chamarra gris profundo*/, 16);
			num2 = 17;
			num3 = 4;
			num = 50;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Chamarra King Banded*/, 16);
			num2 = 17;
			num3 = 5;
			num = 50;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Chamarra Stank camuflaje bosque*/, 16);
			num2 = 17;
			num3 = 6;
			num = 50;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Chamarra Trey Baker desierto*/, 16);
			num2 = 17;
			num3 = 7;
			num = 50;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Chamarra casual verde*/, 16);
			num2 = 17;
			num3 = 8;
			num = 50;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Chamarra café lisa*/, 16);
			num2 = 17;
			num3 = 9;
			num = 50;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Chamarra verde Fruntalot*/, 16);
			num2 = 17;
			num3 = 10;
			num = 50;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Chamarra moca*/, 16);
			num2 = 17;
			num3 = 11;
			num = 50;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Chamarra café*/, 16);
			num2 = 17;
			num3 = 12;
			num = 50;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*Chamarra tejida de serpiente LS*/, 16);
			num2 = 17;
			num3 = 13;
			num = 50;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Chamarra Feud animal*/, 16);
			num2 = 17;
			num3 = 14;
			num = 50;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Chamarra tecno Fruntalot*/, 16);
			num2 = 17;
			num3 = 15;
			num = 50;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Saco de cuadros gris*/, 16);
			num2 = 18;
			num3 = 0;
			num5 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Saco de cuadros cenizo*/, 16);
			num2 = 18;
			num3 = 1;
			num5 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Saco de cuadros carbón*/, 16);
			num2 = 18;
			num3 = 2;
			num5 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Saco de cadros beige*/, 16);
			num2 = 18;
			num3 = 3;
			num5 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Saco gris pizarra*/, 16);
			num2 = 18;
			num3 = 4;
			num5 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Saco plata*/, 16);
			num2 = 18;
			num3 = 5;
			num5 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Saco piedra*/, 16);
			num2 = 18;
			num3 = 6;
			num5 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Saco crema*/, 16);
			num2 = 18;
			num3 = 7;
			num5 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Saco cuadros azul*/, 16);
			num2 = 18;
			num3 = 8;
			num5 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Saco grisáceo*/, 16);
			num2 = 18;
			num3 = 9;
			num5 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Saco rojo*/, 16);
			num2 = 18;
			num3 = 10;
			num5 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Saco gris*/, 16);
			num2 = 18;
			num3 = 11;
			num5 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Saco azul marino*/, 16);
			num2 = 18;
			num3 = 12;
			num5 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Saco óxido*/, 16);
			num2 = 18;
			num3 = 13;
			num5 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Saco verde*/, 16);
			num2 = 18;
			num3 = 14;
			num5 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Saco beige*/, 16);
			num2 = 18;
			num3 = 15;
			num5 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Camisa de rayas azul*/, 16);
			num2 = 19;
			num3 = 0;
			num = 480;
			num5 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Camisa de rayas beige*/, 16);
			num2 = 19;
			num3 = 1;
			num = 440;
			num5 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Camisa gris*/, 16);
			num2 = 19;
			num3 = 2;
			num = 440;
			num5 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Camisa gris obscura*/, 16);
			num2 = 19;
			num3 = 3;
			num = 520;
			num5 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Camisa verde*/, 16);
			num2 = 19;
			num3 = 4;
			num = 440;
			num5 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Camisa de cuadros verdosa*/, 16);
			num2 = 19;
			num3 = 5;
			num = 440;
			num5 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*Camisa blanca*/, 16);
			num2 = 19;
			num3 = 6;
			num = 480;
			num5 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Camisa de cuadros verde claro*/, 16);
			num2 = 19;
			num3 = 7;
			num = 480;
			num5 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Camisa de rayas rosa*/, 16);
			num2 = 19;
			num3 = 8;
			num = 480;
			num5 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Camisa de cuadros campestre*/, 16);
			num2 = 19;
			num3 = 9;
			num = 480;
			num5 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Camisa de rayas grisácea*/, 16);
			num2 = 19;
			num3 = 10;
			num = 480;
			num5 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Camisa de rayas bermejo*/, 16);
			num2 = 19;
			num3 = 11;
			num = 480;
			num5 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Camisa de cuadros verde*/, 16);
			num2 = 19;
			num3 = 12;
			num = 520;
			num5 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Camisa azul marino*/, 16);
			num2 = 19;
			num3 = 13;
			num = 520;
			num5 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Camisa de cuadros café*/, 16);
			num2 = 19;
			num3 = 14;
			num = 520;
			num5 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Camisa de cuadros arena*/, 16);
			num2 = 19;
			num3 = 15;
			num = 440;
			num5 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Chamarra negra*/, 16);
			num2 = 21;
			num3 = 0;
			num = 220;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Chamarra arena*/, 16);
			num2 = 21;
			num3 = 1;
			num = 200;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Chamarra cian*/, 16);
			num2 = 21;
			num3 = 2;
			num = 240;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Chamarra gris*/, 16);
			num2 = 21;
			num3 = 3;
			num = 240;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Chamarra gris tricolor*/, 16);
			num2 = 21;
			num3 = 4;
			num = 260;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Chamarra rojo intenso*/, 16);
			num2 = 21;
			num3 = 5;
			num = 275;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Chamarra verde intenso*/, 16);
			num2 = 21;
			num3 = 6;
			num = 275;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Chamarra café bicolor*/, 16);
			num2 = 21;
			num3 = 7;
			num = 280;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*Chamarra blanca*/, 16);
			num2 = 21;
			num3 = 8;
			num = 280;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Chamarra café claro bicolor*/, 16);
			num2 = 21;
			num3 = 9;
			num = 280;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Chamarra roja*/, 16);
			num2 = 21;
			num3 = 10;
			num = 280;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Chamarra verde oliva bicolor*/, 16);
			num2 = 21;
			num3 = 11;
			num = 280;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Chamarra tricolor*/, 16);
			num2 = 21;
			num3 = 12;
			num = 280;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Chamarra ceniza bicolor*/, 16);
			num2 = 21;
			num3 = 13;
			num = 280;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Abrigo azul marino*/, 16);
			num2 = 22;
			num3 = 0;
			num = 3100;
			num5 = 3;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Abrigo gris*/, 16);
			num2 = 22;
			num3 = 1;
			num = 2800;
			num5 = 3;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Abrigo café*/, 16);
			num2 = 22;
			num3 = 2;
			num = 2500;
			num5 = 3;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Abrigo negro*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3000;
			num5 = 3;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_163(int iParam0) // Position - 0x1C89E (116894)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*De tirantes blanca*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*De tirantes negra*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*De tirantes gris*/, 16);
			num2 = 0;
			num3 = 2;
			num = 180;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*De tirantes Feud verde*/, 16);
			num2 = 0;
			num3 = 3;
			num = 22;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*De tirantes Fruntalot jade*/, 16);
			num2 = 0;
			num3 = 4;
			num = 20;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*De tirantes Fruntalot café*/, 16);
			num2 = 0;
			num3 = 5;
			num = 18;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*De tirantes Broker azul*/, 16);
			num2 = 0;
			num3 = 6;
			num = 19;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*De tirantes Kingz verde*/, 16);
			num2 = 0;
			num3 = 7;
			num = 22;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*De tirantes Broker gris*/, 16);
			num2 = 0;
			num3 = 8;
			num = 20;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*De tirantes Harsh Souls*/, 16);
			num2 = 0;
			num3 = 9;
			num = 19;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*De tirantes Sweatbox*/, 16);
			num2 = 0;
			num3 = 10;
			num = 19;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*De tirantes Ringer blanca*/, 16);
			num2 = 0;
			num3 = 11;
			num = 18;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*De tirantes Rearwall*/, 16);
			num2 = 0;
			num3 = 12;
			num = 20;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*De tirantes Feud 3*/, 16);
			num2 = 0;
			num3 = 13;
			num = 22;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*De tirantes Kingz carbón*/, 16);
			num2 = 0;
			num3 = 14;
			num = 19;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*De tirantes Feud blanco*/, 16);
			num2 = 0;
			num3 = 15;
			num = 22;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			flag = true;
			num5 = 4;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 2;
			flag = true;
			num5 = 4;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 3;
			flag = true;
			num5 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 4;
			flag = true;
			num5 = 4;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 5;
			flag = true;
			num5 = 4;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*Saco blanco de smoking*/, 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num5 = 3;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num5 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*Camiseta OG blanca*/, 16);
			num2 = 4;
			num3 = 0;
			num = 20;
			num5 = 2;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Camiseta OG negra*/, 16);
			num2 = 4;
			num3 = 1;
			num = 22;
			num5 = 2;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Camiseta OG ceniza*/, 16);
			num2 = 4;
			num3 = 2;
			num = 20;
			num5 = 2;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*Camiseta OG LC Swingers*/, 16);
			num2 = 4;
			num3 = 3;
			num = 25;
			num5 = 2;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Camiseta OG Corkers roja*/, 16);
			num2 = 4;
			num3 = 4;
			num = 23;
			num5 = 2;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Camiseta OG Corkers verde*/, 16);
			num2 = 4;
			num3 = 5;
			num = 25;
			num5 = 2;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Camiseta OG Uptown Riders*/, 16);
			num2 = 4;
			num3 = 6;
			num = 28;
			num5 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Camiseta OG Feud blanca*/, 16);
			num2 = 4;
			num3 = 7;
			num = 26;
			num5 = 2;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Camiseta OG Salamanders*/, 16);
			num2 = 4;
			num3 = 8;
			num = 24;
			num5 = 2;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*Camiseta OG LC Rampage*/, 16);
			num2 = 4;
			num3 = 9;
			num = 27;
			num5 = 2;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Camiseta OG Dust Devils*/, 16);
			num2 = 4;
			num3 = 10;
			num = 29;
			num5 = 2;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*Camiseta OG LS gris*/, 16);
			num2 = 4;
			num3 = 11;
			num = 28;
			num5 = 2;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Camiseta OG LS negra*/, 16);
			num2 = 4;
			num3 = 12;
			num = 25;
			num5 = 2;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Camiseta OG LS blanca*/, 16);
			num2 = 4;
			num3 = 13;
			num = 22;
			num5 = 2;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Camiseta OG Pounders*/, 16);
			num2 = 4;
			num3 = 14;
			num = 27;
			num5 = 2;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Camiseta OG Feud negra*/, 16);
			num2 = 4;
			num3 = 15;
			num = 29;
			num5 = 2;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num5 = 4;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Suéter de rayas pino*/, 16);
			num2 = 6;
			num3 = 0;
			num5 = 3;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Suéter amarillo*/, 16);
			num2 = 6;
			num3 = 1;
			num = 1270;
			num5 = 3;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Suéter azul*/, 16);
			num2 = 6;
			num3 = 2;
			num = 1270;
			num5 = 3;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Suéter de rayas arena*/, 16);
			num2 = 6;
			num3 = 3;
			num = 1270;
			num5 = 3;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Suéter plateado*/, 16);
			num2 = 6;
			num3 = 4;
			num = 1090;
			num5 = 3;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Suéter gris*/, 16);
			num2 = 6;
			num3 = 5;
			num = 1090;
			num5 = 3;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Suéter azul marino*/, 16);
			num2 = 6;
			num3 = 6;
			num = 1120;
			num5 = 3;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Suéter arena*/, 16);
			num2 = 6;
			num3 = 7;
			num = 1120;
			num5 = 3;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Suéter salmón*/, 16);
			num2 = 6;
			num3 = 8;
			num = 1290;
			num5 = 3;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Suéter turquesa*/, 16);
			num2 = 6;
			num3 = 9;
			num = 1290;
			num5 = 3;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Suéter verde*/, 16);
			num2 = 6;
			num3 = 10;
			num = 1320;
			num5 = 3;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Suéter amatista*/, 16);
			num2 = 6;
			num3 = 11;
			num = 1320;
			num5 = 3;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Suéter de rombos amarillo*/, 16);
			num2 = 6;
			num3 = 12;
			num = 1590;
			num5 = 3;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Suéter gris bicolor*/, 16);
			num2 = 6;
			num3 = 13;
			num = 1590;
			num5 = 3;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Suéter de rombos arena*/, 16);
			num2 = 6;
			num3 = 14;
			num = 1590;
			num5 = 3;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Suéter carbón*/, 16);
			num2 = 6;
			num3 = 15;
			num = 1320;
			num5 = 3;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Camisa cenizo*/, 16);
			num2 = 7;
			num3 = 0;
			num = 98;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Camisa gris*/, 16);
			num2 = 7;
			num3 = 1;
			num = 98;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Camisa negra*/, 16);
			num2 = 7;
			num3 = 2;
			num = 110;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Camisa plateada*/, 16);
			num2 = 7;
			num3 = 3;
			num = 110;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*Camisa blanca*/, 16);
			num2 = 7;
			num3 = 4;
			num = 118;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Camisa verde oliva*/, 16);
			num2 = 7;
			num3 = 5;
			num = 120;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Camisa azul marino*/, 16);
			num2 = 7;
			num3 = 6;
			num = 120;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Camisa roja*/, 16);
			num2 = 7;
			num3 = 7;
			num = 129;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Camisa de cuadros café*/, 16);
			num2 = 7;
			num3 = 8;
			num = 125;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Camisa de cuadros beige*/, 16);
			num2 = 7;
			num3 = 9;
			num = 125;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Camisa de cuadritos gris*/, 16);
			num2 = 7;
			num3 = 10;
			num = 129;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Camisa de cuadros gris*/, 16);
			num2 = 7;
			num3 = 11;
			num = 129;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Camisa azul*/, 16);
			num2 = 7;
			num3 = 12;
			num = 135;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Camisa hueso*/, 16);
			num2 = 7;
			num3 = 13;
			num = 139;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Camisa de cuadros pastel*/, 16);
			num2 = 7;
			num3 = 14;
			num = 145;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Camisa de cuadros afrutada*/, 16);
			num2 = 7;
			num3 = 15;
			num = 145;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Camisa azul*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Camisa de cuadros amarilla*/, 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Camisa de rayas grisácea*/, 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Camisa grisácea*/, 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Camisa de cuadros roja*/, 16);
			num2 = 8;
			num3 = 4;
			num = 30;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Camisa carbón*/, 16);
			num2 = 8;
			num3 = 5;
			num = 38;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Camisa de cuadros azul*/, 16);
			num2 = 8;
			num3 = 6;
			num = 32;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Camisa de cuadros*/, 16);
			num2 = 8;
			num3 = 7;
			num = 30;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Camisa de cuadros aqua*/, 16);
			num2 = 8;
			num3 = 8;
			num = 33;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Camisa naranja*/, 16);
			num2 = 8;
			num3 = 9;
			num = 35;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Camisa de cuadros menta*/, 16);
			num2 = 8;
			num3 = 10;
			num = 35;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Camisa de cuadros gris oscuros*/, 16);
			num2 = 8;
			num3 = 11;
			num = 38;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Camisa de cuadros morada*/, 16);
			num2 = 8;
			num3 = 12;
			num = 33;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Camisa verde oliva*/, 16);
			num2 = 8;
			num3 = 13;
			num = 35;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Camisa crema*/, 16);
			num2 = 8;
			num3 = 14;
			num = 38;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Camisa de cuadros afrutada*/, 16);
			num2 = 8;
			num3 = 15;
			num = 32;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*Camiseta blanca mate*/, 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Camiseta gris mate*/, 16);
			num2 = 11;
			num3 = 1;
			num = 59;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Camiseta negra mate*/, 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Camiseta Ten Off amarilla*/, 16);
			num2 = 11;
			num3 = 3;
			num = 25;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Camiseta Kingz Of Los Santos*/, 16);
			num2 = 11;
			num3 = 4;
			num = 29;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Camiseta Yeti Rainbow*/, 16);
			num2 = 11;
			num3 = 5;
			num = 27;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Camiseta Ten Off roja*/, 16);
			num2 = 11;
			num3 = 6;
			num = 25;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Camiseta Trey Baker*/, 16);
			num2 = 11;
			num3 = 7;
			num = 27;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Camiseta de rayas Stank*/, 16);
			num2 = 11;
			num3 = 8;
			num = 28;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Camiseta Feud verde oliva*/, 16);
			num2 = 11;
			num3 = 9;
			num = 30;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Camiseta Yeti gris*/, 16);
			num2 = 11;
			num3 = 10;
			num = 29;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Camiseta Yogarishima*/, 16);
			num2 = 11;
			num3 = 11;
			num = 27;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Camiseta Yeti camuflaje*/, 16);
			num2 = 11;
			num3 = 12;
			num = 29;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Camiseta Crevis blanca*/, 16);
			num2 = 11;
			num3 = 13;
			num = 32;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Camiseta Yeti azul*/, 16);
			num2 = 11;
			num3 = 14;
			num = 30;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Camiseta Uptown Ryders*/, 16);
			num2 = 11;
			num3 = 15;
			num = 28;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_164(int iParam0) // Position - 0x1D4E7 (120039)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Desgastado*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple riel*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Sombreado lateral*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Ondas laterales*/, 16);
			num2 = 0;
			num3 = 3;
			num5 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Serpientes*/, 16);
			num2 = 0;
			num3 = 4;
			num5 = 3;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Líneas de tranvía*/, 16);
			num2 = 0;
			num3 = 5;
			num5 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*Rey fresco*/, 16);
			num2 = 0;
			num3 = 6;
			num5 = 3;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Estrellas*/, 16);
			num2 = 0;
			num3 = 7;
			num5 = 3;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Atigrado*/, 16);
			num2 = 0;
			num3 = 8;
			num5 = 3;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstracción*/, 16);
			num2 = 0;
			num3 = 9;
			num5 = 3;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Persianas*/, 16);
			num2 = 0;
			num3 = 10;
			num5 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Zigzag*/, 16);
			num2 = 0;
			num3 = 11;
			num5 = 3;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Suavizado*/, 16);
			num2 = 0;
			num3 = 12;
			num5 = 3;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*El feudo*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Serio por arriba*/, 16);
			num2 = 0;
			num3 = 14;
			num5 = 3;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Palmera salvaje*/, 16);
			num2 = 0;
			num3 = 15;
			num5 = 3;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Afro corto*/, 16);
			num2 = 1;
			num3 = 0;
			num5 = 3;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Afro*/, 16);
			num2 = 2;
			num3 = 0;
			num5 = 3;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Trenzas pegadas*/, 16);
			num2 = 3;
			num3 = 0;
			num5 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Rapado al ras*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 21, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_165(int iParam0) // Position - 0x1D760 (120672)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_80120[0 /*14*/].f_5 = 1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 9;
			break;
	
		default:
			func_130(num6, iParam0, 10, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_166(int iParam0, int iParam1) // Position - 0x1D8A6 (120998)
{
	switch (iParam0)
	{
		case 0:
			func_183(iParam1);
			break;
	
		case 2:
			func_182(iParam1);
			break;
	
		case 3:
			func_179(iParam1);
			break;
	
		case 4:
			func_178(iParam1);
			break;
	
		case 6:
			func_177(iParam1);
			break;
	
		case 5:
			func_176(iParam1);
			break;
	
		case 8:
			func_175(iParam1);
			break;
	
		case 9:
			func_174(iParam1);
			break;
	
		case 10:
			func_173(iParam1);
			break;
	
		case 1:
			func_172(iParam1);
			break;
	
		case 7:
			func_171(iParam1);
			break;
	
		case 11:
			func_170(iParam1);
			break;
	
		case 12:
			func_169(iParam1);
			break;
	
		case 13:
			func_168(iParam1);
			break;
	
		case 14:
			func_167(iParam1);
			break;
	}

	return;
}

void func_167(int iParam0) // Position - 0x1D996 (121238)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 14;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = -1;
			num3 = 0;
			num = 0;
			num4 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Gorra de béisbol azul*/, 16);
			num2 = 1;
			num3 = 0;
			num4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*Máscara de hockey blanca*/, 16);
			num2 = 2;
			num3 = 0;
			num = 320;
			num4 = 11;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			num4 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			num4 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			num4 = 0;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			num4 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			num4 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			num4 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			num4 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 6;
			num4 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 7;
			num4 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Gorro tejido negro*/, 16);
			num2 = 12;
			num3 = 0;
			num4 = 0;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			num4 = 0;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Monstruo verde*/, 16);
			num2 = 14;
			num3 = 0;
			num = 270;
			num4 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Monstruo rojo*/, 16);
			num2 = 14;
			num3 = 1;
			num = 270;
			num4 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Cerdo rosa*/, 16);
			num2 = 15;
			num3 = 0;
			num = 200;
			num4 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Cerdo café*/, 16);
			num2 = 15;
			num3 = 1;
			num = 200;
			num4 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Calavera plateada*/, 16);
			num2 = 16;
			num3 = 0;
			num = 350;
			num4 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Calavera dorada*/, 16);
			num2 = 16;
			num3 = 1;
			num = 350;
			num4 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Pogo*/, 16);
			num2 = 17;
			num3 = 0;
			num = 450;
			num4 = 0;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*Hockey blanca*/, 16);
			num2 = 18;
			num3 = 0;
			num = 500;
			num4 = 0;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Hockey roja*/, 16);
			num2 = 18;
			num3 = 1;
			num = 500;
			num4 = 0;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Simio café claro*/, 16);
			num2 = 19;
			num3 = 0;
			num = 50;
			num4 = 0;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Simio café*/, 16);
			num2 = 19;
			num3 = 1;
			num = 50;
			num4 = 0;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnaval naranja*/, 16);
			num2 = 20;
			num3 = 0;
			num = 99;
			num4 = 0;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnaval blanca*/, 16);
			num2 = 20;
			num3 = 1;
			num = 99;
			num4 = 0;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnaval azul*/, 16);
			num2 = 20;
			num3 = 2;
			num = 99;
			num4 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			num4 = 0;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			num4 = 0;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			num4 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 1;
			num4 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 2;
			num4 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 3;
			num4 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 4;
			num4 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 5;
			num4 = 0;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			num4 = 0;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			num4 = 0;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			num4 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			num4 = 0;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 28;
			num3 = 0;
			num4 = 0;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Lentes armazón negro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 45;
			num4 = 10;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			num4 = 10;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Lentes cobre*/, 16);
			num2 = 3;
			num3 = 0;
			num = 55;
			num4 = 10;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Lentes café claro Enema*/, 16);
			num2 = 4;
			num3 = 0;
			num = 58;
			num4 = 10;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Lentes grises Enema*/, 16);
			num2 = 4;
			num3 = 1;
			num = 56;
			num4 = 10;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Lentes negros Enema*/, 16);
			num2 = 4;
			num3 = 2;
			num = 60;
			num4 = 10;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Lentes carey Enema*/, 16);
			num2 = 4;
			num3 = 3;
			num = 65;
			num4 = 10;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Lentes café Enema*/, 16);
			num2 = 4;
			num3 = 4;
			num = 62;
			num4 = 10;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Lentes color nuez Enema*/, 16);
			num2 = 4;
			num3 = 5;
			num = 65;
			num4 = 10;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Lentes plateados Enema*/, 16);
			num2 = 4;
			num3 = 6;
			num = 68;
			num4 = 10;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Lentes ahumados Enema*/, 16);
			num2 = 4;
			num3 = 7;
			num = 68;
			num4 = 10;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Aviador dorados Farshtunken*/, 16);
			num2 = 5;
			num3 = 0;
			num = 65;
			num4 = 10;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Aviador morados Farshtunken*/, 16);
			num2 = 5;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Aviador plateados Farshtunken*/, 16);
			num2 = 5;
			num3 = 2;
			num = 72;
			num4 = 10;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Aviador grises Farshtunken*/, 16);
			num2 = 5;
			num3 = 3;
			num = 70;
			num4 = 10;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Aviador azules Farshtunken*/, 16);
			num2 = 5;
			num3 = 4;
			num = 74;
			num4 = 10;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Aviador entintados Farshtunken*/, 16);
			num2 = 5;
			num3 = 5;
			num = 78;
			num4 = 10;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Aviador de acero Farshtunken*/, 16);
			num2 = 5;
			num3 = 6;
			num = 82;
			num4 = 10;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Aviador sepia Farshtunken*/, 16);
			num2 = 5;
			num3 = 7;
			num = 85;
			num4 = 10;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Aviador negros Farshtunken*/, 16);
			num2 = 5;
			num3 = 8;
			num = 85;
			num4 = 10;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Aviador ahumados Farshtunken*/, 16);
			num2 = 5;
			num3 = 9;
			num4 = 10;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Lentes de sol carbón Tung*/, 16);
			num2 = 6;
			num3 = 0;
			num = 69;
			num4 = 10;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Lentes de sol ceniza Tung*/, 16);
			num2 = 6;
			num3 = 1;
			num = 69;
			num4 = 10;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Lentes de sol grises Tung*/, 16);
			num2 = 6;
			num3 = 2;
			num = 69;
			num4 = 10;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Lentes de sol rojos Tung*/, 16);
			num2 = 6;
			num3 = 3;
			num = 69;
			num4 = 10;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Lentes de sol azules Tung*/, 16);
			num2 = 6;
			num3 = 4;
			num = 69;
			num4 = 10;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Lentes de sol amarillos Tung*/, 16);
			num2 = 6;
			num3 = 5;
			num = 69;
			num4 = 10;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Lentes de sol negros Tung*/, 16);
			num2 = 6;
			num3 = 6;
			num = 69;
			num4 = 10;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Lentes de sol rosas Tung*/, 16);
			num2 = 6;
			num3 = 7;
			num = 69;
			num4 = 10;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Lentes de sol avispa Tung*/, 16);
			num2 = 6;
			num3 = 8;
			num = 69;
			num4 = 10;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Lentes de sol bicolor Tung*/, 16);
			num2 = 6;
			num3 = 9;
			num = 69;
			num4 = 10;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Goggles para nadar*/, 16);
			num2 = 7;
			num3 = 0;
			num4 = 10;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Aviadores azule celeste*/, 16);
			num2 = 8;
			num3 = 0;
			num = 170;
			num4 = 10;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Aviadores gris humo*/, 16);
			num2 = 8;
			num3 = 1;
			num = 175;
			num4 = 10;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Aviadores amarillos*/, 16);
			num2 = 8;
			num3 = 2;
			num = 180;
			num4 = 10;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Aviadores topacio*/, 16);
			num2 = 8;
			num3 = 3;
			num = 185;
			num4 = 10;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Aviadores acero*/, 16);
			num2 = 8;
			num3 = 4;
			num = 189;
			num4 = 10;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Aviadores plateados*/, 16);
			num2 = 8;
			num3 = 5;
			num = 195;
			num4 = 10;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Aviadores azul índigo*/, 16);
			num2 = 8;
			num3 = 6;
			num = 235;
			num4 = 10;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Aviadores chocolate*/, 16);
			num2 = 8;
			num3 = 7;
			num = 245;
			num4 = 10;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Aviadores sepia*/, 16);
			num2 = 8;
			num3 = 8;
			num = 250;
			num4 = 10;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Aviadores grises*/, 16);
			num2 = 8;
			num3 = 9;
			num = 275;
			num4 = 10;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Aviadores dorados*/, 16);
			num2 = 8;
			num3 = 10;
			num = 280;
			num4 = 10;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Aviadores azules*/, 16);
			num2 = 8;
			num3 = 11;
			num = 295;
			num4 = 10;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow negros*/, 16);
			num2 = 9;
			num3 = 0;
			num = 179;
			num4 = 10;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow carbón*/, 16);
			num2 = 9;
			num3 = 1;
			num = 159;
			num4 = 10;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow cenizo*/, 16);
			num2 = 9;
			num3 = 2;
			num = 165;
			num4 = 10;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow grises*/, 16);
			num2 = 9;
			num3 = 3;
			num = 155;
			num4 = 10;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow cafés*/, 16);
			num2 = 9;
			num3 = 4;
			num = 175;
			num4 = 10;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow carey*/, 16);
			num2 = 9;
			num3 = 5;
			num = 185;
			num4 = 10;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow nogal*/, 16);
			num2 = 9;
			num3 = 6;
			num = 189;
			num4 = 10;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow mármol*/, 16);
			num2 = 9;
			num3 = 7;
			num = 225;
			num4 = 10;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			num = 100;
			num4 = 10;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			num4 = 2;
			break;
	
		default:
			func_130(num6, iParam0, 113, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_168(int iParam0) // Position - 0x1E720 (124704)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 10, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_169(int iParam0) // Position - 0x1E89A (125082)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Traje gris*/, 16);
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Bombero*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Conserje*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Policía de caminos*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Ropa interior*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Túnica de Epsilon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tenis*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Buceo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triatlón*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Seguridad*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminador*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Smoking*/, 16);
			num2 = 0;
			num3 = 0;
			num = 10000;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Equipo de escalada*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Overol azul*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Overol azul marino*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Overol gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Overol verde*/, 16);
			num2 = 0;
			num3 = 0;
			num = 105;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prólogo*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Comando*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Camisa de mezclilla, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Traje gris pizarra*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Chamarra de piel, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Túnica de Epsilon*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Traje carbón*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Camisa azul claro, pantalón gris*/, 16);
			num2 = 0;
			num3 = 0;
			num = 840;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Traje de Trabajo de la joyería*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo, short de playa*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo, pantalón*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Camisa, short*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo, jeans*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Traje topacio*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Traje azul claro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 3900;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Traje blanco hueso*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Traje verde oliva*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Traje crema*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4600;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Traje azul marino*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Traje beige*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Traje color humo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4400;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Traje azul grisáseo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4900;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Traje gris cenizo*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5500;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Traje color arena*/, 16);
			num2 = 0;
			num3 = 0;
			num = 4500;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Traje negro*/, 16);
			num2 = 0;
			num3 = 0;
			num = 5900;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Motocross*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Asalto*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 53, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_170(int iParam0) // Position - 0x1EE11 (126481)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 11;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Camiseta ceniza*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*Camiseta blanca*/, 16);
			num2 = 2;
			num3 = 1;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Camiseta gris*/, 16);
			num2 = 2;
			num3 = 2;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Camiseta carbón*/, 16);
			num2 = 2;
			num3 = 3;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Camiseta verde*/, 16);
			num2 = 2;
			num3 = 4;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Camiseta azul*/, 16);
			num2 = 2;
			num3 = 5;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Camiseta Henley carbón*/, 16);
			num2 = 3;
			num3 = 0;
			num = 390;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Camiseta Henley gris*/, 16);
			num2 = 3;
			num3 = 1;
			num = 390;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Camiseta Henley negra*/, 16);
			num2 = 3;
			num3 = 2;
			num = 420;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Camiseta Henley beige*/, 16);
			num2 = 3;
			num3 = 3;
			num = 420;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Camiseta Henley café*/, 16);
			num2 = 3;
			num3 = 4;
			num = 490;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Camiseta Henley azul marino*/, 16);
			num2 = 3;
			num3 = 5;
			num = 490;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Camiseta Henley a rayas azul marino*/, 16);
			num2 = 3;
			num3 = 6;
			num = 540;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Camiseta Henley a rayas grises*/, 16);
			num2 = 3;
			num3 = 7;
			num = 540;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Camiseta Henley de lana gris*/, 16);
			num2 = 3;
			num3 = 8;
			num = 550;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Camiseta Henley a rayas carbón*/, 16);
			num2 = 3;
			num3 = 9;
			num = 540;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Cuello V carbón*/, 16);
			num2 = 4;
			num3 = 0;
			num = 850;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Cuello V beige*/, 16);
			num2 = 4;
			num3 = 1;
			num = 850;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Cuello V negra*/, 16);
			num2 = 4;
			num3 = 2;
			num = 890;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Cuello V verde oliva*/, 16);
			num2 = 4;
			num3 = 3;
			num = 890;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Cuello V gris*/, 16);
			num2 = 4;
			num3 = 4;
			num = 920;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Cuello V café*/, 16);
			num2 = 4;
			num3 = 5;
			num = 920;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Cuello V rayada negra*/, 16);
			num2 = 4;
			num3 = 6;
			num = 950;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Cuello V diamantes gris*/, 16);
			num2 = 4;
			num3 = 7;
			num = 980;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Cuello V rayada negra*/, 16);
			num2 = 4;
			num3 = 8;
			num = 1050;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Cuello V diamantes plateada*/, 16);
			num2 = 4;
			num3 = 9;
			num = 1100;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Chaleco negro, camisa blanca*/, 16);
			num2 = 5;
			num3 = 0;
			num = 1890;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Chaleco negro, camisa negra*/, 16);
			num2 = 5;
			num3 = 1;
			num = 1820;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Chaleco negro, camisa gris*/, 16);
			num2 = 5;
			num3 = 2;
			num = 1820;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Chaleco negro, camisa azul*/, 16);
			num2 = 5;
			num3 = 3;
			num = 1850;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Chaleco negro, camisa rosa*/, 16);
			num2 = 5;
			num3 = 4;
			num = 1850;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Chaleco carbón, camisa blanca*/, 16);
			num2 = 5;
			num3 = 5;
			num = 1900;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Chaleco carbón, camisa negra*/, 16);
			num2 = 5;
			num3 = 6;
			num = 1920;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Chaleco carbón, camisa gris*/, 16);
			num2 = 5;
			num3 = 7;
			num = 1980;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Chaleco carbón, camisa azul*/, 16);
			num2 = 5;
			num3 = 8;
			num = 2100;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Chaleco carbón, camisa rosa*/, 16);
			num2 = 5;
			num3 = 9;
			num = 2120;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Chaleco azul, camisa blanca*/, 16);
			num2 = 5;
			num3 = 10;
			num = 2000;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Chaleco azul, camisa negra*/, 16);
			num2 = 5;
			num3 = 11;
			num = 2200;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Chaleco azul, camisa gris*/, 16);
			num2 = 5;
			num3 = 12;
			num = 2280;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Chaleco azul, camisa azul*/, 16);
			num2 = 5;
			num3 = 13;
			num = 2300;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Chaleco azul, camisa rosa*/, 16);
			num2 = 5;
			num3 = 14;
			num = 2350;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Chaleco piedra, camisa blanca*/, 16);
			num2 = 5;
			num3 = 15;
			num = 2280;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Pecho descubierto*/, 16);
			num2 = 6;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 45, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_171(int iParam0) // Position - 0x1F33B (127803)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 7;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 1, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_172(int iParam0) // Position - 0x1F3AF (127919)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 1;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Rasurado*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Barba de varios días*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Barba larga de varios días*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Barba de candado*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Barba completa*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 5, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_173(int iParam0) // Position - 0x1F47F (128127)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 1;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 2;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 3;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 4;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 5;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 6;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 7;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 2;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 3;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 4;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 5;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 2;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 3;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 4;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 5;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 6;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 2;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 3;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 4;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 5;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 6;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 7;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Camiseta del embarcadero Del Perro*/, 16);
			num2 = 10;
			num3 = 8;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Camiseta de Los Santos*/, 16);
			num2 = 10;
			num3 = 9;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Camiseta Sharkies Bites*/, 16);
			num2 = 10;
			num3 = 10;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Camiseta Muscle Peach*/, 16);
			num2 = 10;
			num3 = 11;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Camiseta Coral Reefers*/, 16);
			num2 = 10;
			num3 = 12;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*Camiseta SmokeBomb*/, 16);
			num2 = 10;
			num3 = 13;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*Camiseta The Big Puffa*/, 16);
			num2 = 10;
			num3 = 14;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Camiseta Lob-Star*/, 16);
			num2 = 10;
			num3 = 15;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			break;
	
		default:
			func_130(num6, iParam0, 48, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_174(int iParam0) // Position - 0x1F957 (129367)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Luchador rojo*/, 16);
			num2 = 8;
			num3 = 0;
			num = 125;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Luchador verde*/, 16);
			num2 = 8;
			num3 = 1;
			num = 150;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Luchador patriota*/, 16);
			num2 = 8;
			num3 = 2;
			num = 175;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Luchador dominó*/, 16);
			num2 = 8;
			num3 = 3;
			num = 85;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Luchador gris*/, 16);
			num2 = 8;
			num3 = 4;
			num = 150;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Luchador fénix*/, 16);
			num2 = 8;
			num3 = 5;
			num = 175;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 1;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 20, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_175(int iParam0) // Position - 0x1FBC0 (129984)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 8;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Reloj y pulsera*/, 16);
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Reloj de piel*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 20;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 21;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 22;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 23;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 24, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_176(int iParam0) // Position - 0x1FE96 (130710)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 2;
			flag = true;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 3;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 4;
			flag = true;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		default:
			func_130(num6, iParam0, 14, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_177(int iParam0) // Position - 0x20061 (131169)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 6;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Zapatos de piel negros*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Zapatos de piel cafés*/, 16);
			num2 = 0;
			num3 = 1;
			num = 665;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Zapatos de piel carbón*/, 16);
			num2 = 0;
			num3 = 2;
			num = 620;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Zapatos de piel grises*/, 16);
			num2 = 0;
			num3 = 3;
			num = 540;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Zapatos de piel arena*/, 16);
			num2 = 0;
			num3 = 4;
			num = 580;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Zapatos de gamuza azules*/, 16);
			num2 = 0;
			num3 = 5;
			num = 650;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 7;
			num3 = 0;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Mocasines de vestir*/, 16);
			num2 = 13;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Tenis de skate cenizos*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Tenis de skate negros*/, 16);
			num2 = 15;
			num3 = 1;
			num = 64;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*Tenis de skate blancos*/, 16);
			num2 = 15;
			num3 = 2;
			num = 56;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Tenis de skate rojos*/, 16);
			num2 = 15;
			num3 = 3;
			num = 69;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Tenis de skate de cuadros*/, 16);
			num2 = 15;
			num3 = 4;
			num = 59;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Tenis de skate de rayas*/, 16);
			num2 = 15;
			num3 = 5;
			num = 62;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Tenis de skate cafés*/, 16);
			num2 = 15;
			num3 = 6;
			num = 74;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Tenis de skate de camuflaje*/, 16);
			num2 = 15;
			num3 = 7;
			num = 68;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tenis de skate tropicales*/, 16);
			num2 = 15;
			num3 = 8;
			num = 72;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Tenis de skate verdes*/, 16);
			num2 = 15;
			num3 = 9;
			num = 70;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Náuticos chocolate*/, 16);
			num2 = 16;
			num3 = 0;
			num = 48;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Náuticos turquesa*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Náuticos negros*/, 16);
			num2 = 16;
			num3 = 2;
			num = 55;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Náuticos color castaño*/, 16);
			num2 = 16;
			num3 = 3;
			num = 75;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Náuticos cafés*/, 16);
			num2 = 16;
			num3 = 4;
			num = 65;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Náuticos grises*/, 16);
			num2 = 16;
			num3 = 5;
			num = 68;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Náuticos rojos*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Náuticos gris pizarra*/, 16);
			num2 = 16;
			num3 = 7;
			num = 68;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*Oxfords totalmente negros*/, 16);
			num2 = 18;
			num3 = 0;
			num = 790;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Oxfords chocolate*/, 16);
			num2 = 18;
			num3 = 1;
			num = 750;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Oxfords nuez*/, 16);
			num2 = 18;
			num3 = 2;
			num = 860;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Oxfords beige claro*/, 16);
			num2 = 18;
			num3 = 3;
			num = 750;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*Oxfords blancos*/, 16);
			num2 = 18;
			num3 = 4;
			num = 790;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Oxfords cenizos*/, 16);
			num2 = 18;
			num3 = 5;
			num = 840;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Oxfords grises bitono*/, 16);
			num2 = 18;
			num3 = 6;
			num = 820;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Oxfords beige*/, 16);
			num2 = 18;
			num3 = 7;
			num = 800;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Oxfords topacio*/, 16);
			num2 = 18;
			num3 = 8;
			num = 850;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Oxfords negros*/, 16);
			num2 = 18;
			num3 = 9;
			num = 870;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Oxfords lima*/, 16);
			num2 = 18;
			num3 = 10;
			num = 720;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Oxfords cerezo*/, 16);
			num2 = 18;
			num3 = 11;
			num = 740;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Oxfords cafés*/, 16);
			num2 = 18;
			num3 = 12;
			num = 800;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Oxfords grises*/, 16);
			num2 = 18;
			num3 = 13;
			num = 750;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Oxfords crema*/, 16);
			num2 = 18;
			num3 = 14;
			num = 770;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Oxfords azul marino*/, 16);
			num2 = 18;
			num3 = 15;
			num = 860;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Mocasines negros*/, 16);
			num2 = 19;
			num3 = 0;
			num = 850;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Mocasines rojos*/, 16);
			num2 = 19;
			num3 = 1;
			num = 800;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Mocasines cafés*/, 16);
			num2 = 19;
			num3 = 2;
			num = 780;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Mocasines rayas verdes*/, 16);
			num2 = 19;
			num3 = 3;
			num = 890;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Mocasines verdes*/, 16);
			num2 = 19;
			num3 = 4;
			num = 820;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Mocasines cobre*/, 16);
			num2 = 19;
			num3 = 5;
			num = 840;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Mocasines cobre bicolor*/, 16);
			num2 = 19;
			num3 = 6;
			num = 870;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Mocasines azul marino*/, 16);
			num2 = 19;
			num3 = 7;
			num = 930;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Mocasines azules*/, 16);
			num2 = 19;
			num3 = 8;
			num = 880;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Mocasines beige*/, 16);
			num2 = 19;
			num3 = 9;
			num = 900;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*Mocasines blancos*/, 16);
			num2 = 19;
			num3 = 10;
			num = 920;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Mocasines café claro*/, 16);
			num2 = 19;
			num3 = 11;
			num = 970;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Mocasines de víbora negros*/, 16);
			num2 = 19;
			num3 = 12;
			num = 990;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Mocasines bicolor*/, 16);
			num2 = 19;
			num3 = 13;
			num = 960;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Mocasines de víbora cafés*/, 16);
			num2 = 19;
			num3 = 14;
			num = 980;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Mocasines grises*/, 16);
			num2 = 19;
			num3 = 15;
			num = 950;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brogues con punta cafés*/, 16);
			num2 = 20;
			num3 = 0;
			num = 110;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Brogues con punta azul marino*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Brogues con punta ocre*/, 16);
			num2 = 20;
			num3 = 2;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Brogues con punta guindas*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Brogues con punta azules*/, 16);
			num2 = 20;
			num3 = 4;
			num = 125;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Brogues con punta camuflaje*/, 16);
			num2 = 20;
			num3 = 5;
			num = 128;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Brogues con punta negros*/, 16);
			num2 = 20;
			num3 = 6;
			num = 135;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Brogues con punta café claro*/, 16);
			num2 = 20;
			num3 = 7;
			num = 130;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Brogues con punta morados*/, 16);
			num2 = 20;
			num3 = 8;
			num = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brogues con punta cafés*/, 16);
			num2 = 20;
			num3 = 9;
			num = 110;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Brogues con punta chocolate*/, 16);
			num2 = 20;
			num3 = 10;
			num = 120;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Brogues con punta verde*/, 16);
			num2 = 20;
			num3 = 11;
			num = 150;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Brogues con punta gris ceniza*/, 16);
			num2 = 20;
			num3 = 12;
			num = 125;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Brogues con punta verde oliva*/, 16);
			num2 = 20;
			num3 = 13;
			num = 120;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Brogues con punta bicolor*/, 16);
			num2 = 20;
			num3 = 14;
			num = 130;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Brogues con punta amarillos*/, 16);
			num2 = 20;
			num3 = 15;
			num = 110;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Mocasines de piel negros*/, 16);
			num2 = 21;
			num3 = 0;
			num = 720;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Mocasines de piel grises*/, 16);
			num2 = 21;
			num3 = 1;
			num = 680;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Mocasines de piel crema*/, 16);
			num2 = 21;
			num3 = 2;
			num = 650;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Mocasines de piel cafés*/, 16);
			num2 = 21;
			num3 = 3;
			num = 670;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*Mocasines de piel blancos*/, 16);
			num2 = 21;
			num3 = 4;
			num = 700;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Mocasines de piel bermejo*/, 16);
			num2 = 21;
			num3 = 5;
			num = 680;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*Mocasines de víbora blancos*/, 16);
			num2 = 21;
			num3 = 6;
			num = 720;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Mocasines de víbora cascabel*/, 16);
			num2 = 21;
			num3 = 7;
			num = 740;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Mocasines de víbora cafés*/, 16);
			num2 = 21;
			num3 = 8;
			num = 760;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Mocasines de cebra bicolor*/, 16);
			num2 = 21;
			num3 = 9;
			num = 780;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Mocasines de reptil*/, 16);
			num2 = 21;
			num3 = 10;
			num = 750;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Mocasines de cocodrilo cafés*/, 16);
			num2 = 21;
			num3 = 11;
			num = 700;
			break;
	
		default:
			func_130(num6, iParam0, 99, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_178(int iParam0) // Position - 0x20BB5 (134069)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 4;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Pantalón gris*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Pantalón gris*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Pantalón carbón*/, 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Pantalón gris pizarra*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Pantalón topacio*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pantalón azul claro*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Pantalón crema*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Pantalón verde oliva*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Pantalón hueso*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Pantalón azul marino*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Pantalón beige*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Pantalón color humo*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Pantalón azul grisáseo*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Pantalón cenizo*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Pantalón color arena*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Pantalón negro*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			flag = true;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Pantalón chino hueso*/, 16);
			num2 = 7;
			num3 = 0;
			num = 115;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Pantalón chino camello*/, 16);
			num2 = 7;
			num3 = 1;
			num = 115;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Pantalón chino cenizo*/, 16);
			num2 = 7;
			num3 = 2;
			num = 128;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Pantalón chino verde oliva*/, 16);
			num2 = 7;
			num3 = 3;
			num = 118;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Pantalón chino café*/, 16);
			num2 = 7;
			num3 = 4;
			num = 125;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Pantalón chino negro*/, 16);
			num2 = 7;
			num3 = 5;
			num = 128;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Pantalón chino carbón*/, 16);
			num2 = 7;
			num3 = 6;
			num = 128;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*Pantalón chino blanco*/, 16);
			num2 = 7;
			num3 = 7;
			num = 125;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 8;
			num3 = 0;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Short cargo crema*/, 16);
			num2 = 13;
			num3 = 0;
			num = 68;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Short cargo caqui*/, 16);
			num2 = 13;
			num3 = 1;
			num = 68;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Short cargo de camuflaje*/, 16);
			num2 = 13;
			num3 = 2;
			num = 68;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Short cargo gris*/, 16);
			num2 = 13;
			num3 = 3;
			num = 68;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*Short cargo blanco*/, 16);
			num2 = 13;
			num3 = 4;
			num = 68;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 14;
			num3 = 0;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Pantalón de golf gris*/, 16);
			num2 = 15;
			num3 = 0;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Pantalón de golf crema*/, 16);
			num2 = 15;
			num3 = 1;
			num = 550;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Pantalón de golf café*/, 16);
			num2 = 15;
			num3 = 2;
			num = 650;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Pantalón de golf de tartán*/, 16);
			num2 = 15;
			num3 = 3;
			num = 875;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Pantalón de golf cuadros carbón*/, 16);
			num2 = 15;
			num3 = 4;
			num = 820;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Pantalón de golf cuadros verde*/, 16);
			num2 = 15;
			num3 = 5;
			num = 720;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Pantalón de golf cuadros café*/, 16);
			num2 = 15;
			num3 = 6;
			num = 750;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Pantalón de golf gris pizarra*/, 16);
			num2 = 15;
			num3 = 7;
			num = 850;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Short beige*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Short amarillo*/, 16);
			num2 = 16;
			num3 = 1;
			num = 48;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Short azul*/, 16);
			num2 = 16;
			num3 = 2;
			num = 48;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Short con hojas café*/, 16);
			num2 = 16;
			num3 = 3;
			num = 38;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Short tropical*/, 16);
			num2 = 16;
			num3 = 4;
			num = 38;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Short aqua vintage*/, 16);
			num2 = 16;
			num3 = 5;
			num = 42;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Short bicolor brillante*/, 16);
			num2 = 16;
			num3 = 6;
			num = 58;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Short de flores rojo*/, 16);
			num2 = 16;
			num3 = 7;
			num = 46;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Short de flores azul marino*/, 16);
			num2 = 16;
			num3 = 8;
			num = 46;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Short de flores azul*/, 16);
			num2 = 16;
			num3 = 9;
			num = 46;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Short naranja*/, 16);
			num2 = 16;
			num3 = 10;
			num = 68;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*Short de rayas blanco*/, 16);
			num2 = 16;
			num3 = 11;
			num = 58;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Short carbón*/, 16);
			num2 = 16;
			num3 = 12;
			num = 50;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Short gris*/, 16);
			num2 = 16;
			num3 = 13;
			num = 68;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Short surfista rosa y azul*/, 16);
			num2 = 16;
			num3 = 14;
			num = 68;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Short marítimo*/, 16);
			num2 = 16;
			num3 = 15;
			num = 42;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 17;
			num3 = 0;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*Bóxers de rayas blancas*/, 16);
			num2 = 18;
			num3 = 0;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Bóxers azules*/, 16);
			num2 = 18;
			num3 = 1;
			num = 250;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Bóxers cenizo*/, 16);
			num2 = 18;
			num3 = 2;
			num = 250;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Bóxers de rayas azules*/, 16);
			num2 = 18;
			num3 = 3;
			num = 290;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*Bóxers blancos*/, 16);
			num2 = 18;
			num3 = 4;
			num = 270;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Bóxers carbón*/, 16);
			num2 = 18;
			num3 = 5;
			num = 270;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Bóxers de corazones rojos*/, 16);
			num2 = 18;
			num3 = 6;
			num = 15;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Bóxers de corazones azules*/, 16);
			num2 = 18;
			num3 = 7;
			num = 12;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 19;
			num3 = 0;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Jeans casuales azules*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Jeans casuales negros*/, 16);
			num2 = 20;
			num3 = 1;
			num = 118;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Jens casuales deslavados*/, 16);
			num2 = 20;
			num3 = 2;
			num = 110;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Pantalón café*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Pantalón carbón*/, 16);
			num2 = 21;
			num3 = 1;
			num = 95;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Pantalón café*/, 16);
			num2 = 21;
			num3 = 2;
			num = 95;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Pantalón cenizo*/, 16);
			num2 = 21;
			num3 = 3;
			num = 98;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Jeans elegantes*/, 16);
			num2 = 22;
			num3 = 0;
			num = 140;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*Short de tenis blanco*/, 16);
			num2 = 23;
			num3 = 0;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Short de tenis Lobon*/, 16);
			num2 = 23;
			num3 = 1;
			num = 150;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Short de tenis de cuadros*/, 16);
			num2 = 23;
			num3 = 2;
			num = 130;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 24;
			num3 = 0;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 25;
			num3 = 0;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 26;
			num3 = 0;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Short beige, descalzo*/, 16);
			num2 = 27;
			num3 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Bermudas azul claro*/, 16);
			num2 = 28;
			num3 = 0;
			num = 45;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Bermudas beige*/, 16);
			num2 = 28;
			num3 = 1;
			num = 48;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Bermudas crema*/, 16);
			num2 = 28;
			num3 = 2;
			num = 48;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Bermudas verde oliva*/, 16);
			num2 = 28;
			num3 = 3;
			num = 52;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Bermudas azules*/, 16);
			num2 = 28;
			num3 = 4;
			num = 52;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Bermudas grisáceas*/, 16);
			num2 = 28;
			num3 = 5;
			num = 55;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Bermudas grises*/, 16);
			num2 = 28;
			num3 = 6;
			num = 55;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Bermudas carbón*/, 16);
			num2 = 28;
			num3 = 7;
			num = 55;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Bermudas rosas*/, 16);
			num2 = 28;
			num3 = 8;
			num = 58;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Bermudas de cuadros beige*/, 16);
			num2 = 28;
			num3 = 9;
			num = 58;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Bermudas de cuadros pastel*/, 16);
			num2 = 28;
			num3 = 10;
			num = 60;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Bermudas de cuadros naranjas*/, 16);
			num2 = 28;
			num3 = 11;
			num = 60;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Bermudas de cuadros grises*/, 16);
			num2 = 28;
			num3 = 12;
			num = 62;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Bermudas de rayas azules*/, 16);
			num2 = 28;
			num3 = 13;
			num = 62;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Bermudas de cuadros oscuras*/, 16);
			num2 = 28;
			num3 = 14;
			num = 65;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Bermudas de cuadros claras*/, 16);
			num2 = 28;
			num3 = 15;
			num = 65;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 29;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 113, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_179(int iParam0) // Position - 0x217FF (137215)
{
	if (iParam0 < 60)
		func_181(iParam0);
	else
		func_180(iParam0);

	if (Global_80120[0 /*14*/].f_2 == -1)
		func_130(3, iParam0, 181, -1);

	return;
}

void func_180(int iParam0) // Position - 0x21834 (137268)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 9;
			num3 = 0;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 10;
			num3 = 0;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 11;
			num3 = 0;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 0;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 1;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 2;
			flag = true;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 3;
			flag = true;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 4;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 12;
			num3 = 5;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 13;
			num3 = 0;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Chaleco Rearwall negro*/, 16);
			num2 = 14;
			num3 = 0;
			num = 120;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Chaleco Fruntalot rojo*/, 16);
			num2 = 14;
			num3 = 1;
			num = 120;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Chaleco Yeti azul*/, 16);
			num2 = 14;
			num3 = 2;
			num = 120;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Chaleco Rearwall café*/, 16);
			num2 = 14;
			num3 = 3;
			num = 120;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Chaleco Rearwall naranja*/, 16);
			num2 = 14;
			num3 = 4;
			num = 120;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Chaleco Rearwall verde*/, 16);
			num2 = 14;
			num3 = 5;
			num = 120;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 15;
			num3 = 0;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Camisa de golf morada*/, 16);
			num2 = 16;
			num3 = 0;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Camisa de golf naranja*/, 16);
			num2 = 16;
			num3 = 1;
			num = 20;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Camisa de golf guinda*/, 16);
			num2 = 16;
			num3 = 2;
			num = 24;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Camisa de golf amarilla*/, 16);
			num2 = 16;
			num3 = 3;
			num = 22;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Camisa de golf azul*/, 16);
			num2 = 16;
			num3 = 4;
			num = 25;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Camisa de golf menta*/, 16);
			num2 = 16;
			num3 = 5;
			num = 25;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Camisa de golf café*/, 16);
			num2 = 16;
			num3 = 6;
			num = 22;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Camisa de golf carmesí*/, 16);
			num2 = 16;
			num3 = 7;
			num = 27;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Polo azul grisáceo*/, 16);
			num2 = 17;
			num3 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Polo olivo*/, 16);
			num2 = 17;
			num3 = 1;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Polo roja*/, 16);
			num2 = 17;
			num3 = 2;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Polo negra*/, 16);
			num2 = 17;
			num3 = 3;
			num = 48;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*Polo blanca*/, 16);
			num2 = 17;
			num3 = 4;
			num = 40;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Polo azul*/, 16);
			num2 = 17;
			num3 = 5;
			num = 45;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 18;
			num3 = 0;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Camiseta de tirantes hueso*/, 16);
			num2 = 19;
			num3 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*Camiseta de tirantes blanca*/, 16);
			num2 = 19;
			num3 = 1;
			num = 190;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Camiseta de tirantes ceniza*/, 16);
			num2 = 19;
			num3 = 2;
			num = 190;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Camiseta de tirantes gris*/, 16);
			num2 = 19;
			num3 = 3;
			num = 190;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Camiseta de tirantes negra*/, 16);
			num2 = 19;
			num3 = 4;
			num = 210;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Camisa de mezclilla azul*/, 16);
			num2 = 20;
			num3 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Camisa negro humo*/, 16);
			num2 = 20;
			num3 = 1;
			num = 115;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Camisa bermejo*/, 16);
			num2 = 20;
			num3 = 2;
			num = 55;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Camisa verde mate*/, 16);
			num2 = 20;
			num3 = 3;
			num = 110;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Camisa gris*/, 16);
			num2 = 20;
			num3 = 4;
			num = 99;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Camisa de cuadros fresa*/, 16);
			num2 = 20;
			num3 = 5;
			num = 49;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Camisa marrón de cuadros*/, 16);
			num2 = 20;
			num3 = 6;
			num = 120;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Camisa amarillo limón*/, 16);
			num2 = 20;
			num3 = 7;
			num = 45;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*Camisa blanca*/, 16);
			num2 = 20;
			num3 = 8;
			num = 115;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Camisa piedra*/, 16);
			num2 = 20;
			num3 = 9;
			num = 105;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Camisa de cuadros tierra*/, 16);
			num2 = 20;
			num3 = 10;
			num = 90;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Camisa de cuadros verde*/, 16);
			num2 = 20;
			num3 = 11;
			num = 95;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Camisa de cuadros campo*/, 16);
			num2 = 20;
			num3 = 12;
			num = 39;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Camisa de cuadros naranja*/, 16);
			num2 = 20;
			num3 = 13;
			num = 95;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Camisa de cuadros azul verde*/, 16);
			num2 = 20;
			num3 = 14;
			num = 35;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Camisa de cuadros azul*/, 16);
			num2 = 20;
			num3 = 15;
			num = 95;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Sudadera gris*/, 16);
			num2 = 21;
			num3 = 0;
			num = 88;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Sudadera Ammu-Nation camu.*/, 16);
			num2 = 21;
			num3 = 1;
			num = 60;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*Sudadera LSGC gris*/, 16);
			num2 = 21;
			num3 = 2;
			num = 70;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*Sudadera LSGC urbana*/, 16);
			num2 = 21;
			num3 = 3;
			num = 80;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*Sudadera LSGC bosque*/, 16);
			num2 = 21;
			num3 = 4;
			num = 90;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Sudadera Ammu-nation A*/, 16);
			num2 = 21;
			num3 = 5;
			num = 80;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Sudadera Blauser*/, 16);
			num2 = 21;
			num3 = 6;
			num = 70;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Sudadera Superstroika naranja*/, 16);
			num2 = 21;
			num3 = 7;
			num = 95;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Sudadera Crevis fluorescente*/, 16);
			num2 = 21;
			num3 = 8;
			num = 105;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Sudadera azul*/, 16);
			num2 = 21;
			num3 = 9;
			num = 95;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Sudadera verde*/, 16);
			num2 = 21;
			num3 = 10;
			num = 110;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*Sudadera LS Jardineros*/, 16);
			num2 = 21;
			num3 = 11;
			num = 98;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Sudadera cenizo 18*/, 16);
			num2 = 21;
			num3 = 12;
			num = 88;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Sudadera Mist XI roja*/, 16);
			num2 = 21;
			num3 = 13;
			num = 98;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Sudadera Eris carbón*/, 16);
			num2 = 21;
			num3 = 14;
			num = 110;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*Sudadera OG*/, 16);
			num2 = 21;
			num3 = 15;
			num = 98;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Chamarra de piel desgastada*/, 16);
			num2 = 22;
			num3 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Chamarra de piel negra*/, 16);
			num2 = 22;
			num3 = 1;
			num = 4950;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chamarra de piel café castaño*/, 16);
			num2 = 22;
			num3 = 2;
			num = 4195;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Chamarra de piel rojo oscuro*/, 16);
			num2 = 22;
			num3 = 3;
			num = 3195;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Chamarra piel nerga vintage*/, 16);
			num2 = 22;
			num3 = 4;
			num = 2950;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Chamarra de piel café*/, 16);
			num2 = 22;
			num3 = 5;
			num = 3950;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Saco plateado de lana*/, 16);
			num2 = 23;
			num3 = 0;
			num = 3200;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Saco gris verdoso*/, 16);
			num2 = 23;
			num3 = 1;
			num = 3200;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Saco gris pizarra*/, 16);
			num2 = 23;
			num3 = 2;
			num = 3200;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Saco gris*/, 16);
			num2 = 23;
			num3 = 3;
			num = 3200;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Saco azul*/, 16);
			num2 = 23;
			num3 = 4;
			num = 3200;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Saco azul pálido*/, 16);
			num2 = 23;
			num3 = 5;
			num = 3200;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*Saco blanco*/, 16);
			num2 = 23;
			num3 = 6;
			num = 3200;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Saco gris cálido*/, 16);
			num2 = 23;
			num3 = 7;
			num = 3200;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Saco crema*/, 16);
			num2 = 23;
			num3 = 8;
			num = 3200;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Saco azul marino*/, 16);
			num2 = 23;
			num3 = 9;
			num = 3200;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Saco hueso*/, 16);
			num2 = 23;
			num3 = 10;
			num = 3200;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Saco negro humo*/, 16);
			num2 = 23;
			num3 = 11;
			num = 3200;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Saco carbón*/, 16);
			num2 = 23;
			num3 = 12;
			num = 3200;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Saco de cuadros cenizo*/, 16);
			num2 = 23;
			num3 = 13;
			num = 3200;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Saco beige*/, 16);
			num2 = 23;
			num3 = 14;
			num = 3200;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Saco café*/, 16);
			num2 = 23;
			num3 = 15;
			num = 3200;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Suéter carbón*/, 16);
			num2 = 24;
			num3 = 0;
			num = 1350;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Suéter gris*/, 16);
			num2 = 24;
			num3 = 1;
			num = 1400;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Suéter beige*/, 16);
			num2 = 24;
			num3 = 2;
			num = 1200;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Suéter rojo*/, 16);
			num2 = 24;
			num3 = 3;
			num = 1250;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Suéter azul claro*/, 16);
			num2 = 24;
			num3 = 4;
			num = 1350;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Suéter amatista*/, 16);
			num2 = 24;
			num3 = 5;
			num = 1300;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Suéter azul*/, 16);
			num2 = 24;
			num3 = 6;
			num = 1380;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Suéter jade*/, 16);
			num2 = 24;
			num3 = 7;
			num = 1340;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Suéter naranja*/, 16);
			num2 = 24;
			num3 = 8;
			num = 1380;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Suéter lima*/, 16);
			num2 = 24;
			num3 = 9;
			num = 1250;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Camisa azul claro*/, 16);
			num2 = 25;
			num3 = 0;
			num = 840;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Camisa rosa*/, 16);
			num2 = 25;
			num3 = 1;
			num = 840;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*Camisa blanca*/, 16);
			num2 = 25;
			num3 = 2;
			num = 840;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Camisa gris*/, 16);
			num2 = 25;
			num3 = 3;
			num = 840;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Camisa carbón*/, 16);
			num2 = 25;
			num3 = 4;
			num = 840;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Camisa azul*/, 16);
			num2 = 25;
			num3 = 5;
			num = 840;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Camisa topacio*/, 16);
			num2 = 25;
			num3 = 6;
			num = 840;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Camisa negra*/, 16);
			num2 = 25;
			num3 = 7;
			num = 840;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Pecho descubierto*/, 16);
			num2 = 26;
			num3 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 27;
			num3 = 0;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Chaleco de tela Eris blanco*/, 16);
			num2 = 28;
			num3 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Chaleco de tela Lobon*/, 16);
			num2 = 28;
			num3 = 1;
			num = 130;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Chaleco de tela Erin azul*/, 16);
			num2 = 28;
			num3 = 2;
			num = 110;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
			num2 = 29;
			num3 = 0;
			flag = true;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Chamarra gris*/, 16);
			num2 = 30;
			num3 = 0;
			num = 290;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Chamarra negra*/, 16);
			num2 = 30;
			num3 = 1;
			num = 320;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Camisa de inv. cuadros rojos*/, 16);
			num2 = 31;
			num3 = 0;
			num = 59;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Camisa de inv. cuadros azules*/, 16);
			num2 = 31;
			num3 = 1;
			num = 55;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Camisa de invierno negra*/, 16);
			num2 = 31;
			num3 = 2;
			num = 59;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Camisa de inv. cuadros café*/, 16);
			num2 = 31;
			num3 = 3;
			num = 49;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_181(int iParam0) // Position - 0x225D4 (140756)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Saco gris claro*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Saco gris claro*/, 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Saco carbón*/, 16);
			num2 = 0;
			num3 = 2;
			num = 3500;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Saco gris pizarra*/, 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Saco topacio*/, 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Saco azul claro*/, 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Saco crema*/, 16);
			num2 = 0;
			num3 = 6;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Saco verde oliva*/, 16);
			num2 = 0;
			num3 = 7;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Saco hueso*/, 16);
			num2 = 0;
			num3 = 8;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Saco azul marino*/, 16);
			num2 = 0;
			num3 = 9;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Saco beige*/, 16);
			num2 = 0;
			num3 = 10;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Saco gris humo*/, 16);
			num2 = 0;
			num3 = 11;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Saco gris azulado*/, 16);
			num2 = 0;
			num3 = 12;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Saco gris ceniza*/, 16);
			num2 = 0;
			num3 = 13;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Saco arena*/, 16);
			num2 = 0;
			num3 = 14;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Saco negro*/, 16);
			num2 = 0;
			num3 = 15;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 1;
			num3 = 0;
			flag = true;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 0;
			num = 20;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 1;
			num = 18;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 2;
			num = 22;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 2;
			num3 = 3;
			num = 25;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Camiseta Suburban amarilla*/, 16);
			num2 = 2;
			num3 = 4;
			num = 19;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Camiseta Slate*/, 16);
			num2 = 2;
			num3 = 5;
			num = 20;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Camiseta Rearwall azul*/, 16);
			num2 = 2;
			num3 = 6;
			num = 22;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Camiseta Rearwall gris*/, 16);
			num2 = 2;
			num3 = 7;
			num = 18;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Camiseta Suburban azul marino*/, 16);
			num2 = 2;
			num3 = 8;
			num = 39;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Camiseta Suburban roja*/, 16);
			num2 = 2;
			num3 = 9;
			num = 32;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Camiseta Suburban naranja*/, 16);
			num2 = 2;
			num3 = 10;
			num = 35;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Camiseta Suburban gris*/, 16);
			num2 = 2;
			num3 = 11;
			num = 35;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*Camiseta blanca*/, 16);
			num2 = 2;
			num3 = 12;
			num = 210;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Camiseta verde bosque*/, 16);
			num2 = 2;
			num3 = 13;
			num = 250;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Camiseta azul claro*/, 16);
			num2 = 2;
			num3 = 14;
			num = 290;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Camiseta ceniza*/, 16);
			num2 = 2;
			num3 = 15;
			num = 310;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 0;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 3;
			num3 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 4;
			num3 = 0;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 6;
			num3 = 0;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Chaleco de caza café*/, 16);
			num2 = 7;
			num3 = 0;
			num = 150;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Chaleco Woodland*/, 16);
			num2 = 7;
			num3 = 1;
			num = 160;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Chaleco de caza gris pardo*/, 16);
			num2 = 7;
			num3 = 2;
			num = 150;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Chaleco de caza tejido café*/, 16);
			num2 = 7;
			num3 = 3;
			num = 150;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Chaleco de campo*/, 16);
			num2 = 7;
			num3 = 4;
			num = 160;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Chaleco de bosque*/, 16);
			num2 = 7;
			num3 = 5;
			num = 160;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Camisa abierta*/, 16);
			num2 = 8;
			num3 = 0;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*Camisa blanca*/, 16);
			num2 = 8;
			num3 = 1;
			num = 52;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camisa camello*/, 16);
			num2 = 8;
			num3 = 2;
			num = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Camisa negra*/, 16);
			num2 = 8;
			num3 = 3;
			num = 55;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Camisa Hawaiian limón*/, 16);
			num2 = 8;
			num3 = 4;
			num = 55;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Camisa Grove naranja*/, 16);
			num2 = 8;
			num3 = 5;
			num = 58;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Camisa con pericos*/, 16);
			num2 = 8;
			num3 = 6;
			num = 58;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Camisa Geometric azul*/, 16);
			num2 = 8;
			num3 = 7;
			num = 62;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Camisa con dibujo gris*/, 16);
			num2 = 8;
			num3 = 8;
			num = 65;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Camisa con patrón durazno*/, 16);
			num2 = 8;
			num3 = 9;
			num = 65;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Camisa carbón*/, 16);
			num2 = 8;
			num3 = 10;
			num = 68;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Camisa azul marino de flores*/, 16);
			num2 = 8;
			num3 = 11;
			num = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Camisa de cuadros limón*/, 16);
			num2 = 8;
			num3 = 12;
			num = 55;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Camisa con dibujo café*/, 16);
			num2 = 8;
			num3 = 13;
			num = 62;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Camisa Hawaiian vintage*/, 16);
			num2 = 8;
			num3 = 14;
			num = 58;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Camisa de cuadros azules*/, 16);
			num2 = 8;
			num3 = 15;
			num = 58;
			break;
	
		default:
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_182(int iParam0) // Position - 0x22C60 (142432)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 2;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*Rapado*/, 16);
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Corte con máquina*/, 16);
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Crecido*/, 16);
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Con gel*/, 16);
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 5;
			num3 = 0;
			break;
	
		default:
			func_130(num6, iParam0, 6, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_183(int iParam0) // Position - 0x22D47 (142663)
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 0;
	Global_80120[0 /*14*/].f_5 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 1;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 2;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 3;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 4;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 5;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
			num2 = 0;
			num3 = 6;
			break;
	
		default:
			func_130(num6, iParam0, 7, -1);
			return;
	}

	func_123(&Global_80120[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_184() // Position - 0x22E45 (142917)
{
	Global_80120[0 /*14*/].f_1 = -1;
	Global_80120[0 /*14*/].f_2 = -1;
	Global_80120[0 /*14*/].f_5 = -1;
	Global_80120[0 /*14*/].f_3 = -1;
	Global_80120[0 /*14*/].f_4 = -1;
	Global_80120[0 /*14*/].f_7 = 0;
	Global_80120[0 /*14*/].f_6 = 0;
	Global_80120[0 /*14*/].f_13 = -1;
	Global_80120[0 /*14*/].f_12 = 0;
	Global_80120[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_80120[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_185(Ped pedParam0, ePedComponentType epctParam1, ePedComponentType epctParam2) // Position - 0x22EBE (143038)
{
	ePedComponentType entityModel;
	ePedComponentType type;
	int i;
	ePedComponentType j;
	int k;
	var unk;
	var unk18;
	int l;
	var unk28;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_80120[1 /*14*/] = { func_120(entityModel, epctParam1, epctParam2, -1) };

	if (!IS_BIT_SET(Global_80120[1 /*14*/].f_6, 0))
		return false;

	if (epctParam1 == 12)
	{
		unk = { func_100(entityModel, epctParam2) };
	
		for (i = 0; i <= 14; i = i + 1)
		{
			if (unk[i] != -99 && i != 12 && i != 14)
			{
				if (!func_185(pedParam0, i, unk[i]))
				{
					if (i == 13)
					{
						unk18 = { func_97(entityModel, unk[i]) };
					
						for (j = 0; j <= 8; j = j + 1)
						{
							if (!func_185(pedParam0, 14, unk18[j]))
							{
								for (k = 0; k <= 19; k = k + 1)
								{
									Global_80120[2 /*14*/] = { func_120(entityModel, 14, k, -1) };
								
									if (Global_80120[2 /*14*/].f_12 == j)
										if (func_185(pedParam0, 14, k))
											if (!func_73(entityModel, epctParam2, 14, k, &unk, &Global_80120[2 /*14*/]))
												return false;
								}
							}
						}
					}
					else
					{
						type = func_108(pedParam0, i);
						Global_80120[2 /*14*/] = { func_120(entityModel, i, type, -1) };
					
						if (!func_73(entityModel, epctParam2, i, type, &unk, &Global_80120[2 /*14*/]))
							return false;
					}
				}
			}
		}
	
		return true;
	}
	else if (epctParam1 == 13)
	{
		unk28 = { func_97(entityModel, epctParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_185(pedParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (epctParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, Global_80120[1 /*14*/].f_12, 1) == Global_80120[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_80120[1 /*14*/].f_12) == Global_80120[1 /*14*/].f_4 || Global_80120[1 /*14*/].f_3 == PV_COMP_INVALID)
			return true;
	}
	else if (Global_80120[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_77(epctParam1)) && Global_80120[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_77(epctParam1)))
	{
		return true;
	}

	return false;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x23117 (143639)
{
	func_187();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_187() // Position - 0x23130 (143664)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_48(character) && !func_128(14) || Global_113909)
			{
				if (Global_114963.f_2370.f_539.f_4321 != character && func_48(Global_114963.f_2370.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2322D (143917)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2326A (143978)
{
	if (func_48(character))
		return func_190(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_190(eCharacter echParam0) // Position - 0x2328F (144015)
{
	return Global_2349[echParam0 /*29*/];
}

void func_191(BOOL bParam0) // Position - 0x2329E (144030)
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!PLAYER::IS_PLAYER_DEAD(playerIndex))
	{
		if (bParam0)
		{
		}
	
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
	}

	func_192(true, true, false, false, false, false, false);
	return;
}

void func_192(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x232DD (144093)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_201(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_200())
				Global_21649.f_1 = 3;
		
			Global_23023 = 5;
		}
	
		func_199(true, bParam3, bParam2, false);
		Global_65069 = true;
		Global_77400 = PV_COMP_BERD;
		Global_80335 = PV_COMP_BERD;
	}
	else
	{
		func_201(0);
		HUD::THEFEED_RESUME();
		Global_65069 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_199(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_197(PLAYER::PLAYER_ID()) && !func_194(PLAYER::PLAYER_ID(), 0) && !func_193() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_197(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80335 = PV_COMP_HEAD;
	}

	return;
}

BOOL func_193() // Position - 0x2342C (144428)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

BOOL func_194(Player plParam0, int iParam1) // Position - 0x23446 (144454)
{
	BOOL flag;

	if (!func_196(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_195(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_195(BOOL bParam0, BOOL bParam1) // Position - 0x2349F (144543)
{
	eCharacter character;
	BOOL flag;

	flag = bParam0;

	if (flag == -1)
		flag = func_115();

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

BOOL func_196(Player plParam0) // Position - 0x234E0 (144608)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_197(Player plParam0) // Position - 0x23502 (144642)
{
	if (func_194(plParam0, 0))
		return true;

	if (func_198())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_198() // Position - 0x23541 (144705)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_199(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2354F (144719)
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

BOOL func_200() // Position - 0x23582 (144770)
{
	if (Global_21649.f_1 == true || Global_21649.f_1 == false)
		return true;

	return false;
}

void func_201(int iParam0) // Position - 0x235A9 (144809)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 13);
	else
		MISC::CLEAR_BIT(&Global_9502, 13);

	return;
}

void func_202() // Position - 0x235CC (144844)
{
	Global_21889 = 0;
	func_203();
	return;
}

void func_203() // Position - 0x235DC (144860)
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

BOOL func_204(int iParam0, int iParam1, int iParam2) // Position - 0x235FD (144893)
{
	int num;

	num = 1;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_211(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam1, 1, 1056964608, false, true, false))
			{
				num = 0;
			}
			else if (iParam2 == 1)
			{
				num = 0;
			
				if (!func_210(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE))
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				num = 0;
		}
	}

	func_209();

	if (func_208())
	{
		func_206();
		num = 0;
	}

	if (num == 0)
		return false;

	if (iParam0 == 1)
		if (!func_205())
			return false;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	return true;
}

BOOL func_205() // Position - 0x236D1 (145105)
{
	BOOL hasCutsceneLoaded;

	hasCutsceneLoaded = CUTSCENE::HAS_CUTSCENE_LOADED();

	if (!Global_80336)
		if (!hasCutsceneLoaded)
			Global_80336 = 1;

	return hasCutsceneLoaded;
}

void func_206() // Position - 0x236F4 (145140)
{
	Global_21889 = 0;
	func_207();
	return;
}

void func_207() // Position - 0x23704 (145156)
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

BOOL func_208() // Position - 0x2375B (145243)
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_209() // Position - 0x2377D (145277)
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

BOOL func_210(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x237CE (145358)
{
	if (func_7(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_211(Vehicle veParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x23801 (145409)
{
	func_213(bParam5, bParam6);
	func_212(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_30 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, iParam1, iParam2, bParam4);

	Global_30 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_212(Vehicle veParam0) // Position - 0x23858 (145496)
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_213(BOOL bParam0, BOOL bParam1) // Position - 0x23884 (145540)
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

void func_214() // Position - 0x239D5 (145877)
{
	if (bLocal_58)
	{
		if (INTERIOR::IS_VALID_INTERIOR(inLocal_68))
			INTERIOR::UNPIN_INTERIOR(inLocal_68);
	
		bLocal_58 = false;
	}

	if (bLocal_59)
	{
		if (INTERIOR::IS_VALID_INTERIOR(inLocal_69))
			INTERIOR::UNPIN_INTERIOR(inLocal_69);
	
		bLocal_59 = false;
	}

	return;
}

void func_215(BOOL bParam0) // Position - 0x23A0B (145931)
{
	if (bParam0)
	{
		if (!bLocal_57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		
			bLocal_57 = true;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		bLocal_57 = false;
	}

	return;
}

BOOL func_216() // Position - 0x23A68 (146024)
{
	int num;

	num = func_217(&iLocal_64, 0, 0, false, 0);

	if (num == 1)
		return true;

	return false;
}

int func_217(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x23A87 (146055)
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_99939.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_221(0))
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
			func_218(uParam0, iParam4);
	}

	return 2;
}

void func_218(var uParam0, int iParam1) // Position - 0x23BBE (146366)
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

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x23C0D (146445)
{
	return func_220(iParam0, Global_44921);
}

BOOL func_220(int iParam0, int iParam1) // Position - 0x23C1E (146462)
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

BOOL func_221(int iParam0) // Position - 0x23DFF (146943)
{
	if (Global_44921 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_222() // Position - 0x23E21 (146977)
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return false;

	if (_GET_CURRENT_PLAYER_CHARACTER() != CHAR_MICHAEL)
		return false;

	if (func_224())
		return false;

	if (Global_33818)
		return false;

	if (Global_65057)
		return false;

	if (Global_99381)
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_223())
		return false;

	if (Global_45468 != -1)
		if (Global_114963.f_7697[Global_45468 /*15*/].f_3 >= 2)
			return false;

	return true;
}

BOOL func_223() // Position - 0x23EAE (147118)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_224() // Position - 0x23EC8 (147144)
{
	if (Global_44921 == 15)
		return false;

	return true;
}

BOOL func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x23EDD (147165)
{
	float num;

	num = { uParam3 - uParam0 };
	return (num * num) + (num.f_1 * num.f_1) <= fParam6 * fParam6;
}

BOOL func_226(var uParam0, float fParam1, var uParam2, var uParam3) // Position - 0x23F07 (147207)
{
	BOOL flag;
	int num;
	int num2;

	uParam0->f_46 < 3;
	flag = false;
	num = 0;
	num2 = uParam0->f_46 - 1;

	while (num < uParam0->f_46)
	{
		if (uParam0->[num /*3*/].f_1 < fParam1.f_1 && uParam0->[num2 /*3*/].f_1 >= fParam1.f_1 || uParam0->[num2 /*3*/].f_1 < fParam1.f_1 && uParam0->[num /*3*/].f_1 >= fParam1.f_1)
			if (uParam0->[num /*3*/] + (((fParam1.f_1 - uParam0->[num /*3*/].f_1) / (uParam0->[num2 /*3*/].f_1 - uParam0->[num /*3*/].f_1)) * (uParam0->[num2 /*3*/] - uParam0->[num /*3*/])) < fParam1)
				flag = !flag;
	
		num2 = num;
		num = num + 1;
	}

	return flag;
}

void func_227(var uParam0) // Position - 0x23FC3 (147395)
{
	int i;
	float num;

	uParam0->f_51 == 0;
	uParam0->f_46 < 3;

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		uParam0->f_47 = { uParam0->f_47 + uParam0->[i /*3*/] };
	}

	uParam0->f_47 = { uParam0->f_47 / F2V(BUILTIN::TO_FLOAT(i)) };

	for (i = 0; i < uParam0->f_46; i = i + 1)
	{
		num = BUILTIN::VDIST2(uParam0->f_47, uParam0->[i /*3*/]);
	
		if (num > uParam0->f_50)
			uParam0->f_50 = num;
	}

	uParam0->f_50 = BUILTIN::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
	return;
}

void func_228(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x24064 (147556)
{
	uParam0->f_51 == 0;
	uParam0->f_46 >= 15;
	uParam0->[uParam0->f_46 /*3*/] = { fParam1 };
	uParam0->f_46 = uParam0->f_46 + 1;
	return;
}

void func_229(var uParam0) // Position - 0x24095 (147605)
{
	uParam0->f_51;
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
	return;
}

void func_230() // Position - 0x240BC (147644)
{
	if (iLocal_64 != -1)
	{
		if (bLocal_56)
		{
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				HUD::CLEAR_HELP(true);
		
			func_6(1, 1, 1, true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		
			if (CAM::DOES_CAM_EXIST(caLocal_63))
			{
				CAM::SET_CAM_ACTIVE(caLocal_63, false);
				CAM::DESTROY_CAM(caLocal_63, false);
			}
		
			STREAMING::NEW_LOAD_SCENE_STOP();
			AUDIO::TRIGGER_MUSIC_EVENT("MICHAELS_HOUSE_STOP");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
	
		func_231(&iLocal_64);
	}

	func_214();
	BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_231(var uParam0) // Position - 0x24137 (147767)
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

int func_232(int iParam0) // Position - 0x24174 (147828)
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_114963.f_9094.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_114963.f_9094.f_99.f_219[num], offset);
	return 1;
}

