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
	char* sLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	int iLocal_41 = 0;
	BOOL bLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	BOOL bLocal_53 = 0;
	Object obLocal_54 = 0;
	Object obLocal_55 = 0;
	Object obLocal_56 = 0;
	Object obLocal_57 = 0;
	Object obLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	BOOL bLocal_61 = 0;
	int iLocal_62 = 0;
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
	Cam caLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	BOOL bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	Object obScriptParam_0 = 0;
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
	fLocal_31 = 0.001f;
	iLocal_34 = -1;
	sLocal_35 = "NULL";
	iLocal_38 = 3;
	bLocal_42 = true;
	iLocal_52 = -1;
	iLocal_59 = -1;
	iLocal_60 = -1;
	bLocal_61 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "NULL", 64);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_69();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
	{
		obLocal_54 = obScriptParam_0;
		obLocal_57 = obScriptParam_0;
	}

	while (true)
	{
		BUILTIN::WAIT(0);
		func_68();
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (iLocal_60 != -1 && func_67() && !func_66() && !func_65(iLocal_60))
				func_69();
		
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
				func_69();
		
			if (func_64(13) || func_64(14))
				func_69();
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obScriptParam_0, 0))
				func_69();
		
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_63();
				
					if (ENTITY::GET_ENTITY_HEALTH(obScriptParam_0) < 950)
						func_69();
				
					switch (iLocal_46)
					{
						case 0:
							func_60();
						
							if (iLocal_60 == 5)
							{
								if (func_59(18) == true && func_59(20) == false)
								{
									obLocal_58 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(obLocal_58))
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(obLocal_58, 9);
								
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
						
							if (iLocal_60 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33876[iLocal_60 /*11*/].f_2 = 0;
								Global_33876[iLocal_60 /*11*/].f_6 = 1;
								Global_33876[iLocal_60 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33876[iLocal_60 /*11*/].f_1 = 0;
								Global_33876[iLocal_60 /*11*/].f_4 = 0;
								Global_33876[iLocal_60 /*11*/].f_7 = 0;
								Global_33876[iLocal_60 /*11*/].f_8 = 0;
								Global_33876[iLocal_60 /*11*/].f_10 = 0;
								fLocal_47 = -4f;
								func_56(&uLocal_43);
								func_54();
								func_53();
								BUILTIN::WAIT(0);
								iLocal_46 = 1;
							}
							break;
					
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								BUILTIN::WAIT(0);
							else if (ENTITY::IS_ENTITY_STATIC(obLocal_54) && ENTITY::IS_ENTITY_UPRIGHT(obLocal_54, 1119092736))
								if (func_45() || Global_33876[iLocal_60 /*11*/].f_5)
									iLocal_46 = 2;
							else
								func_44(&iLocal_59);
							break;
					
						case 2:
							func_54();
						
							if (!func_65(iLocal_60))
							{
								func_44(&iLocal_59);
							
								if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Presiona ~INPUT_CONTEXT~ para encender la televisión.*/))
									HUD::CLEAR_HELP(true);
							}
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_54))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_54, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_56))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_56, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
								if (ENTITY::IS_ENTITY_VISIBLE(obLocal_55))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_55, false, false);
						
							if (!MISC::ARE_STRINGS_EQUAL(&uLocal_63, "NULL"))
								AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_63, false);
						
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							BUILTIN::WAIT(0);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(obLocal_57);
						
							if (!func_65(iLocal_60))
							{
								if (Global_33876[iLocal_60 /*11*/] == 3 || Global_33876[iLocal_60 /*11*/] == 2 || Global_33876[iLocal_60 /*11*/] == -1)
									Global_33876[iLocal_60 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							
								GRAPHICS::SET_TV_CHANNEL(Global_33876[iLocal_60 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_47);
							}
							else
							{
								bLocal_61 = Global_33876[iLocal_60 /*11*/];
								iLocal_62 = Global_33876[iLocal_60 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(bLocal_61, func_42(iLocal_62), Global_33876[iLocal_60 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(bLocal_61);
							
								if (Global_33876[iLocal_60 /*11*/].f_7)
								{
									Global_33876[iLocal_60 /*11*/].f_5 = 0;
									Global_33876[iLocal_60 /*11*/].f_7 = 0;
								}
							}
						
							Global_33876[iLocal_60 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_46 = 3;
							break;
					
						case 3:
							if (Global_33876[iLocal_60 /*11*/].f_4)
								iLocal_46 = 6;
						
							if (Global_33876[iLocal_60 /*11*/].f_7 && func_65(iLocal_60))
							{
								Global_33876[iLocal_60 /*11*/].f_7 = 0;
								iLocal_46 = 6;
							}
						
							if (!func_39(iLocal_60))
							{
								func_38();
								iLocal_46 = 5;
							}
							else
							{
								func_36();
							
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
									GRAPHICS::SET_TV_CHANNEL(Global_33876[iLocal_60 /*11*/]);
							
								if (func_16())
									iLocal_46 = 6;
							}
							break;
					
						case 5:
							if (func_39(iLocal_60))
								iLocal_46 = 2;
						
							if (Global_33876[iLocal_60 /*11*/].f_4)
								iLocal_46 = 6;
							break;
					
						case 6:
							func_1();
						
							if (iLocal_59 != -1)
								func_44(&iLocal_59);
						
							Global_33876[iLocal_60 /*11*/].f_5 = 0;
							Global_33876[iLocal_60 /*11*/].f_4 = 0;
							Global_33876[iLocal_60 /*11*/].f_1 = 0;
							Global_33876[iLocal_60 /*11*/].f_2 = 0;
							Global_33876[iLocal_60 /*11*/].f_7 = 0;
							Global_33876[iLocal_60 /*11*/].f_8 = 0;
							Global_33876[iLocal_60 /*11*/].f_10 = 0;
							iLocal_46 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_69();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}

	func_69();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x4E6 (1254)
{
	if (iLocal_60 != -1)
		Global_33876[iLocal_60 /*11*/] = GRAPHICS::GET_TV_CHANNEL();

	fLocal_47 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_63, "NULL"))
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_63, true);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Presiona ~INPUT_CONTEXT~ para encender la televisión.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~Presiona ~INPUT_CONTEXT~ para dejar de mirar.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Presiona ~INPUT_SCRIPT_RUP~ para usar los controles de la televisión.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Presiona ~INPUT_SCRIPT_RUP~ para dejar de usar los controles de la televisión.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/))
		HUD::CLEAR_HELP(true);

	func_3();
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
		if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_55))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_55, true, false);

	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
	return;
}

void func_2() // Position - 0x590 (1424)
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_104 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_104 = 0;
		}
	}

	return;
}

void func_3() // Position - 0x5AC (1452)
{
	if (!(iLocal_52 == -1))
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_52);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		{
			if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(obLocal_54, false, false);
			
				if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_scre_off"))
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
		ENTITY::SET_ENTITY_VISIBLE(obLocal_56, false, false);

	return;
}

void func_4() // Position - 0x643 (1603)
{
	if (bLocal_102)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(caLocal_95))
			CAM::SET_CAM_ACTIVE(caLocal_95, false);
	
		CAM::DESTROY_CAM(caLocal_95, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_48, 1, 0, 2);
		
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_53 == true)
				{
					bLocal_53 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
		
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_79, "NULL"))
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_79))
				AUDIO::STOP_AUDIO_SCENE(&uLocal_79);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_56, true, false);
	
		func_5(false, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		bLocal_102 = false;
	}

	return;
}

void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F (1807)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21649.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_14())
				Global_21649.f_1 = 3;
		
			Global_23023 = 5;
		}
	
		func_13(true, bParam3, bParam2, false);
		Global_65069 = true;
		Global_77400 = PV_COMP_BERD;
		Global_80335 = PV_COMP_BERD;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_65069 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_13(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID(), 0) && !func_6() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		Global_80335 = PV_COMP_HEAD;
	}

	return;
}

BOOL func_6() // Position - 0x85E (2142)
{
	return IS_BIT_SET(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x878 (2168)
{
	BOOL flag;

	if (!func_10(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_8(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845298[plParam0 /*881*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_8(BOOL bParam0, BOOL bParam1) // Position - 0x8D1 (2257)
{
	eCharacter character;
	BOOL flag;

	flag = bParam0;

	if (flag == -1)
		flag = func_9();

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

BOOL func_9() // Position - 0x912 (2322)
{
	return Global_1574928;
}

BOOL func_10(Player plParam0) // Position - 0x91E (2334)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_11(Player plParam0) // Position - 0x940 (2368)
{
	if (func_7(plParam0, 0))
		return true;

	if (func_12())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658293[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_12() // Position - 0x97F (2431)
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_13(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x98D (2445)
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

BOOL func_14() // Position - 0x9C0 (2496)
{
	if (Global_21649.f_1 == true || Global_21649.f_1 == false)
		return true;

	return false;
}

void func_15(int iParam0) // Position - 0x9E7 (2535)
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 13);
	else
		MISC::CLEAR_BIT(&Global_9502, 13);

	return;
}

BOOL func_16() // Position - 0xA0A (2570)
{
	if (!func_65(iLocal_60))
	{
		if (func_32(&uLocal_43) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_105, 1f, 1f, 1.5f, false, true, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_54) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && !func_31(8, -1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_48, 90f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_59 == -1)
			{
				func_30();
				_CONTEXT_ADD_HELP_TEXT(&iLocal_59, 3, "TV_HLP5" /*Presiona ~INPUT_SCRIPT_RUP~ para usar los controles de la televisión.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/, 0, 0, 0, 0);
			}
			else if (func_27(iLocal_59, true))
			{
				func_44(&iLocal_59);
				func_56(&uLocal_43);
				Global_33876[iLocal_60 /*11*/].f_7 = 0;
			
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
			
				return true;
			}
		
			func_17();
		}
		else
		{
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Presiona ~INPUT_SCRIPT_RUP~ para usar los controles de la televisión.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/))
				HUD::CLEAR_HELP(true);
		
			func_2();
			func_44(&iLocal_59);
		}
	}

	return false;
}

void func_17() // Position - 0xB16 (2838)
{
	if (bLocal_102 == false)
	{
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP))
		{
			func_44(&iLocal_59);
			_CONTEXT_ADD_HELP_TEXT(&iLocal_59, 3, "TV_HLP6" /*Presiona ~INPUT_SCRIPT_RUP~ para dejar de usar los controles de la televisión.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/, 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		if (bLocal_53)
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(true, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
		func_18(0);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE))
		{
			func_44(&iLocal_59);
			func_4();
		}
	}

	return;
}

void func_18(int iParam0) // Position - 0xBD0 (3024)
{
	if (func_23())
		return;

	if (!(Global_21649.f_1 == true))
	{
		if (func_22(0))
			func_19(iParam0);
	
		MISC::SET_BIT(&Global_9503, 2);
	}

	return;
}

void func_19(int iParam0) // Position - 0xC03 (3075)
{
	if (func_23())
		return;

	if (Global_21882)
		if (func_21())
			func_20(true, true);
		else
			func_20(false, false);

	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
		MISC::SET_BIT(&Global_9503, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23023 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9502, 30);
	else
		MISC::CLEAR_BIT(&Global_9502, 30);

	if (!func_14())
		Global_21649.f_1 = 3;

	return;
}

void func_20(BOOL bParam0, BOOL bParam1) // Position - 0xC8D (3213)
{
	if (bParam0)
	{
		if (func_22(0))
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

BOOL func_21() // Position - 0xD01 (3329)
{
	return IS_BIT_SET(Global_1964670, 5);
}

BOOL func_22(int iParam0) // Position - 0xD0F (3343)
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

BOOL func_23() // Position - 0xD66 (3430)
{
	return IS_BIT_SET(Global_1964670, 19);
}

void func_24(BOOL bParam0, BOOL bParam1) // Position - 0xD75 (3445)
{
	int num;
	int num2;
	float tvVolume;

	num = 64;

	if (bParam0)
	{
		if (func_25(false))
		{
			if (!bLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
			
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
					GRAPHICS::SET_TV_CHANNEL(1);
				else
					GRAPHICS::SET_TV_CHANNEL(0);
			
				bLocal_39 = true;
			}
		}
		else if (bLocal_39)
		{
			bLocal_39 = false;
		}
	}

	if (bParam1)
	{
		num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) - 127;
	
		if (!bLocal_40)
		{
			if (num2 > 0 + num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume - 0.5f;
			
				if (tvVolume < -36f)
					tvVolume = -36f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_41 = MISC::GET_GAME_TIMER();
				bLocal_40 = true;
			}
		
			if (num2 < 0 - num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume + 0.5f;
			
				if (tvVolume > 0f)
					tvVolume = 0f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_41 = MISC::GET_GAME_TIMER();
				bLocal_40 = true;
			}
		
			if (num2 < 0 + num && num2 > 0 - num)
			{
				bLocal_42 = true;
			}
			else if (bLocal_42)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (tvVolume != -36f && tvVolume != 0f)
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
				
					bLocal_42 = false;
				}
			}
		}
	
		if (bLocal_40)
			if (num2 == 0 || MISC::GET_GAME_TIMER() > iLocal_41 + 24)
				bLocal_40 = false;
	}

	return;
}

BOOL func_25(BOOL bParam0) // Position - 0xEBC (3772)
{
	int num;
	int num2;

	num = 64;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) - 127;

	if (bParam0 || BUILTIN::TIMERA() > 300)
	{
		if (num2 > 0 + num || num2 < 0 - num)
		{
			BUILTIN::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_26() // Position - 0xF08 (3848)
{
	float fov;

	fov = 50f;

	if (bLocal_102 == false)
	{
		caLocal_95 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uLocal_96, uLocal_99, fov, false, 2);
		CAM::SET_CAM_FAR_CLIP(caLocal_95, 100f);
		CAM::SET_CAM_ACTIVE(caLocal_95, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_56, false, false);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_53 = true;
			}
		
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_48, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_79, "NULL"))
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_79))
				AUDIO::START_AUDIO_SCENE(&uLocal_79);
	
		func_5(true, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		bLocal_102 = true;
	}

	return;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0xFDF (4063)
{
	int num;

	num = func_28(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_22(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_45696[num /*32*/] == true && Global_45696[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_45696[num /*32*/].f_29)
					return false;
		
			Global_45696[num /*32*/].f_5 = 1;
			Global_45696[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45696[num /*32*/] == false;
			Global_45696[num /*32*/].f_7;
		}
	}

	return false;
}

int func_28(int iParam0) // Position - 0x1097 (4247)
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_45696[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x10D2 (4306)
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_44(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_45696[i /*32*/])
		{
			Global_45696[i /*32*/] = true;
			Global_45696[i /*32*/].f_1 = Global_45897;
			Global_45897 = Global_45897 + 1;
			Global_45696[i /*32*/].f_4 = 0;
			Global_45696[i /*32*/].f_29 = 0;
			Global_45696[i /*32*/].f_5 = 0;
			Global_45696[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45696[i /*32*/].f_8), sParam2, 16);
			Global_45696[i /*32*/].f_6 = iParam3;
			Global_45696[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45696[i /*32*/].f_7 = 0;
			Global_45696[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45696[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45696[i /*32*/].f_13), sParam4, 64);
				Global_45696[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45696[i /*32*/].f_12 = 0;
				Global_45696[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45696[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_30() // Position - 0x11FD (4605)
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_104 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_104 = 1;
		}
	}

	return;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x121D (4637)
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

float func_32(var uParam0) // Position - 0x1255 (4693)
{
	if (func_35(uParam0))
		if (func_34(uParam0))
			return uParam0->f_2;
		else
			return func_33(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_33(BOOL bParam0) // Position - 0x1291 (4753)
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

BOOL func_34(var uParam0) // Position - 0x12E9 (4841)
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_35(var uParam0) // Position - 0x12F6 (4854)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_36() // Position - 0x1303 (4867)
{
	float xScale;

	xScale = 1f;
	func_37(&xScale);
	HUD::SET_TEXT_RENDER_ID(iLocal_52);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, xScale, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	return;
}

void func_37(var uParam0) // Position - 0x1344 (4932)
{
	float aspectRatio;
	float num;
	float num2;

	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (aspectRatio <= 16f / 9f)
	{
		num = aspectRatio / 16f / 9f;
		num2 = *uParam0;
		*uParam0 = num2 * num;
	}

	return;
}

void func_38() // Position - 0x1381 (4993)
{
	Global_33876[iLocal_60 /*11*/].f_7 = 0;
	Global_33876[iLocal_60 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_47 = GRAPHICS::GET_TV_VOLUME();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_79))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_79);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Presiona ~INPUT_CONTEXT~ para encender la televisión.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_NEXT_CAMERA~ para cambiar la vista.~n~Presiona ~INPUT_CONTEXT~ para dejar de mirar.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Presiona ~INPUT_SCRIPT_RUP~ para usar los controles de la televisión.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Presiona ~INPUT_SCRIPT_RUP~ para dejar de usar los controles de la televisión.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/))
		HUD::CLEAR_HELP(true);

	func_44(&iLocal_59);
	GRAPHICS::SET_TV_CHANNEL(-1);
	BUILTIN::WAIT(0);
	func_3();
	func_53();
	return;
}

BOOL func_39(int iParam0) // Position - 0x1401 (5121)
{
	var unk;

	unk = { _GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) };

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
	
		case 4:
			if (unk.f_2 < 74f)
				return true;
			break;
	
		case 5:
			if (unk.f_2 > 75f)
				return true;
			break;
	}

	return false;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x1476 (5238)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_41(int iParam0, int iParam1) // Position - 0x1489 (5257)
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

char* func_42(int iParam0) // Position - 0x14E6 (5350)
{
	char* str;

	switch (iParam0)
	{
		case 1:
			str = "PL_STD_CNT";
			break;
	
		case 2:
			str = "PL_STD_WZL";
			break;
	
		case 3:
			str = "PL_LO_CNT";
			break;
	
		case 4:
			str = "PL_LO_WZL";
			break;
	
		case 7:
			str = "PL_SP_WORKOUT";
			break;
	
		case 8:
			str = "PL_SP_INV";
			break;
	
		case 9:
			str = "PL_SP_INV_EXP";
			break;
	
		case 5:
			str = "PL_LO_RS";
			break;
	
		case 6:
			str = "PL_LO_RS_CUTSCENE";
			break;
	
		case 10:
			str = "PL_SP_PLSH1_INTRO";
			break;
	
		case 11:
			str = "PL_LES1_FAME_OR_SHAME";
			break;
	
		case 12:
			str = "PL_STD_WZL_FOS_EP2";
			break;
	
		case 13:
			str = "PL_MP_WEAZEL";
			break;
	
		case 14:
			str = "PL_MP_CCTV";
			break;
	}

	return str;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x15C5 (5573)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_44(var uParam0) // Position - 0x15D8 (5592)
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_28(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_45696[num /*32*/])
		{
			Global_45696[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_45() // Position - 0x162F (5679)
{
	if (func_32(&uLocal_43) < 1f)
	{
		func_44(&iLocal_59);
		return false;
	}

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_105, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_48, 90f) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_59);
		return false;
	}

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_54) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&iLocal_59);
		return false;
	}

	if (func_31(8, -1))
	{
		func_44(&iLocal_59);
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		func_44(&iLocal_59);
		return false;
	}

	if (Global_99389)
	{
		func_44(&iLocal_59);
		return false;
	}

	if (Global_33876[iLocal_60 /*11*/].f_8)
	{
		func_44(&iLocal_59);
		return false;
	}

	if (iLocal_59 == -1)
	{
		_CONTEXT_ADD_HELP_TEXT(&iLocal_59, 3, "TV_HLP1" /*Presiona ~INPUT_CONTEXT~ para encender la televisión.*/, 0, 0, 0, 0);
		return false;
	}

	if (func_27(iLocal_59, true))
	{
		func_44(&iLocal_59);
		func_56(&uLocal_43);
		Global_33876[iLocal_60 /*11*/].f_7 = 1;
	
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
	
		func_46(309, 0, 0);
		return true;
	}

	return false;
}

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x175E (5982)
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
		Global_114963.f_10203[iParam0 /*12*/].f_10 = iParam1;
		Global_114963.f_10203[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0") /* TUNEABLE: NUM_HIDDEN_PACKAGES_0, NUM_HIDDEN_PACKAGES_0 */, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1") /* TUNEABLE: NUM_HIDDEN_PACKAGES_1, NUM_HIDDEN_PACKAGES_1 */, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3") /* TUNEABLE: NUM_HIDDEN_PACKAGES_3, NUM_HIDDEN_PACKAGES_3 */, 50, 0);
	}

	if (flag)
		func_47();

	return;
}

void func_47() // Position - 0x1844 (6212)
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
		func_51(13, BUILTIN::FLOOR(Global_114963.f_10203.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_50() == HUD_COLOUR_BLACK == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114697 = false;
			
				if (!Global_65063)
					func_48();
			}
		}
	}

	return;
}

int func_48() // Position - 0x1D02 (7426)
{
	if (func_49(false))
		return 0;

	if (Global_102525.f_8)
		if (Global_102525.f_10 > 0)
			return 0;
	else if (Global_102525.f_10 > 1)
		return 0;

	Global_102525.f_10 = Global_102525.f_10 + 1;
	return 1;
}

BOOL func_49(BOOL bParam0) // Position - 0x1D4D (7501)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_80586, 0);
}

eHudColour func_50() // Position - 0x1D75 (7541)
{
	return Global_33815;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x1D80 (7552)
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DD1 (7633)
{
	if (bParam2 == -1)
		bParam2 = func_9();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, bParam2);
	return;
}

void func_53() // Position - 0x1DEF (7663)
{
	BUILTIN::WAIT(0);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_52 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}

	return;
}

void func_54() // Position - 0x1E1B (7707)
{
	Hash entityModel;

	if (iLocal_60 == 4)
		func_55();

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");

	BUILTIN::WAIT(0);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		func_69();

	entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_54);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(entityModel);
	BUILTIN::WAIT(0);

	if (iLocal_60 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				func_69();
		
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_54))
				func_69();
		
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
		
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
				HUD::LINK_NAMED_RENDERTARGET(entityModel);
		
			BUILTIN::WAIT(0);
		}
	}

	iLocal_52 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
	return;
}

void func_55() // Position - 0x1ED9 (7897)
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_screen2"))
			return;

	obLocal_54 = 0;
	obLocal_54 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), uLocal_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_54, fLocal_51);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_54, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_54, false, false);
	obLocal_56 = 0;
	obLocal_56 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), uLocal_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_56, fLocal_51);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_56, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_56, false, false);
	return;
}

void func_56(int* piParam0) // Position - 0x1F58 (8024)
{
	func_57(piParam0, 0f);
	return;
}

void func_57(int* piParam0, float fParam1) // Position - 0x1F67 (8039)
{
	piParam0->f_1 = func_33(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_58() // Position - 0x1F92 (8082)
{
	return;
}

BOOL func_59(int iParam0) // Position - 0x1F9A (8090)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114963.f_9094.f_330[iParam0 /*6*/];
}

void func_60() // Position - 0x1FC6 (8134)
{
	uLocal_48 = { ENTITY::GET_ENTITY_COORDS(obLocal_54, true) };
	fLocal_51 = ENTITY::GET_ENTITY_HEADING(obLocal_54);
	func_62();

	if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("prop_tv_03"))
	{
		if (BUILTIN::VDIST(uLocal_48, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_60 = 0;
			uLocal_96 = { -9.8135f, -1440.9128f, 31.3654f };
			uLocal_99 = { 0f, 0f, -134.3211f };
			uLocal_105 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("prop_trev_tv_01"))
	{
		if (BUILTIN::VDIST(uLocal_48, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_60 = 2;
			uLocal_96 = { 1978.2303f, 3819.6504f, 34.2724f };
			uLocal_99 = { 0f, 0f, -105.15f };
			uLocal_105 = { 1978.3303f, 3819.717f, 32.4501f };
			func_61();
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("prop_tv_flat_01"))
	{
		if (BUILTIN::VDIST(uLocal_48, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_60 = 1;
			uLocal_96 = { 2.5724f, 527.9989f, 176.1619f };
			uLocal_99 = { 0f, 0f, -29.9488f };
			uLocal_105 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("prop_tv_flat_02"))
	{
		if (BUILTIN::VDIST(uLocal_48, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_60 = 3;
			uLocal_96 = { -1160.5024f, -1520.7598f, 10.7393f };
			uLocal_99 = { 0f, 0f, 60.061f };
			uLocal_105 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_scre_off"))
	{
		if (BUILTIN::VDIST(uLocal_48, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_60 = 4;
			uLocal_96 = { -802.8972f, 172.537f, 74.5801f };
			uLocal_99 = { 0f, 0f, -69.0273f };
			uLocal_105 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("des_tvsmash_start"))
	{
		if (BUILTIN::VDIST(uLocal_48, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_60 = 5;
			uLocal_96 = { -808.3051f, 171.2623f, 77.2822f };
			uLocal_99 = { 1.8886f, 0f, 110.9232f };
			uLocal_105 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_63, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_79, "TV_MICHAELS_HOUSE", 64);
		}
	}

	return;
}

void func_61() // Position - 0x22B5 (8885)
{
	obLocal_55 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), uLocal_48, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_55, fLocal_51);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_55, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_55, true);
	return;
}

void func_62() // Position - 0x22E7 (8935)
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), false);

	if (func_59(22))
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), false);
	else
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), false);

	return;
}

void func_63() // Position - 0x231D (8989)
{
	if (iLocal_60 == -1)
		return;

	if (Global_33876[iLocal_60 /*11*/].f_10 == 0)
	{
		if (iLocal_103 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_57, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_54, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_56, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_55, false, false);
		
			iLocal_103 = 0;
		}
	}
	else if (iLocal_103 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_57))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_57, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_54, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_56, true, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_55, true, false);
	
		iLocal_103 = 1;
	}

	return;
}

BOOL func_64(int iParam0) // Position - 0x23D8 (9176)
{
	return Global_44921 == iParam0;
}

BOOL func_65(int iParam0) // Position - 0x23E6 (9190)
{
	if (iParam0 != -1)
		if (Global_33876[iParam0 /*11*/].f_5)
			return true;

	return false;
}

BOOL func_66() // Position - 0x2405 (9221)
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_67() // Position - 0x2422 (9250)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 20);

	return false;
}

void func_68() // Position - 0x2445 (9285)
{
	return;
}

void func_69() // Position - 0x244D (9293)
{
	if (iLocal_60 == -1)
		SCRIPT::TERMINATE_THIS_THREAD();

	func_44(&iLocal_59);

	if (iLocal_60 != -1)
	{
		func_1();
		Global_33876[iLocal_60 /*11*/].f_6 = 0;
		Global_33876[iLocal_60 /*11*/].f_7 = 0;
		Global_33876[iLocal_60 /*11*/].f_8 = 0;
		Global_33876[iLocal_60 /*11*/].f_4 = 0;
		Global_33876[iLocal_60 /*11*/].f_5 = 0;
		Global_33876[iLocal_60 /*11*/].f_2 = 0;
		Global_33876[iLocal_60 /*11*/] = -1;
		Global_33876[iLocal_60 /*11*/].f_1 = 0;
		Global_33876[iLocal_60 /*11*/].f_10 = 0;
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Presiona ~INPUT_CONTEXT~ para encender la televisión.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Presiona ~INPUT_SCRIPT_RUP~ para usar los controles de la televisión.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Presiona ~INPUT_SCRIPT_RUP~ para dejar de usar los controles de la televisión.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_X~ para cambiar de canal.~n~Usa ~INPUT_SCRIPT_LEFT_AXIS_Y~ para cambiar el volumen.~n~Presiona ~INPUT_CONTEXT~ para apagar la televisión.~n~*/))
		HUD::CLEAR_HELP(true);

	BUILTIN::WAIT(0);
	func_70();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_79))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_79);

	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_70() // Position - 0x2514 (9492)
{
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_54))
	{
		if (ENTITY::GET_ENTITY_MODEL(obLocal_54) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&obLocal_54);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_56))
	{
		OBJECT::DELETE_OBJECT(&obLocal_56);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_55))
	{
		OBJECT::DELETE_OBJECT(&obLocal_55);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}

	return;
}

