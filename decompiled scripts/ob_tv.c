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
	int iLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
	int iLocal_22 = 0;
	BOOL bLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	BOOL bLocal_34 = 0;
	Object obLocal_35 = 0;
	Object obLocal_36 = 0;
	Object obLocal_37 = 0;
	Object obLocal_38 = 0;
	Object obLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	Cam caLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	BOOL bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	Object obScriptParam_0 = 0;
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
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	bLocal_23 = true;
	iLocal_33 = -1;
	iLocal_40 = -1;
	iLocal_41 = -1;
	iLocal_42 = -1;
	TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "NULL", 64);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_69();

	if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
	{
		obLocal_35 = obScriptParam_0;
		obLocal_38 = obScriptParam_0;
	}

	while (true)
	{
		SYSTEM::WAIT(0);
		func_68();
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_0))
		{
			if (iLocal_41 != -1 && func_67() && !func_66() && !func_65(iLocal_41))
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
				
					switch (iLocal_27)
					{
						case 0:
							func_60();
						
							if (iLocal_41 == 5)
							{
								if (func_59(18) == true && func_59(20) == false)
								{
									obLocal_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(obLocal_39))
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(obLocal_39, 9);
								
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
						
							if (iLocal_41 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33009[iLocal_41 /*11*/].f_2 = 0;
								Global_33009[iLocal_41 /*11*/].f_6 = 1;
								Global_33009[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33009[iLocal_41 /*11*/].f_1 = 0;
								Global_33009[iLocal_41 /*11*/].f_4 = 0;
								Global_33009[iLocal_41 /*11*/].f_7 = 0;
								Global_33009[iLocal_41 /*11*/].f_8 = 0;
								Global_33009[iLocal_41 /*11*/].f_10 = 0;
								fLocal_28 = -4f;
								func_56(&uLocal_24);
								func_54();
								func_53();
								SYSTEM::WAIT(0);
								iLocal_27 = 1;
							}
							break;
					
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								SYSTEM::WAIT(0);
							else if (ENTITY::IS_ENTITY_STATIC(obLocal_35) && ENTITY::IS_ENTITY_UPRIGHT(obLocal_35, 1119092736))
								if (func_45() || Global_33009[iLocal_41 /*11*/].f_5)
									iLocal_27 = 2;
							else
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
							break;
					
						case 2:
							func_54();
						
							if (!func_65(iLocal_41))
							{
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
							
								if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/))
									HUD::CLEAR_HELP(true);
							}
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_35))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_35, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
								if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_37))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_37, true, false);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
								if (ENTITY::IS_ENTITY_VISIBLE(obLocal_36))
									ENTITY::SET_ENTITY_VISIBLE(obLocal_36, false, false);
						
							if (!MISC::ARE_STRINGS_EQUAL(&uLocal_44, "NULL"))
								AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_44, false);
						
							GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
							SYSTEM::WAIT(0);
						
							if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(obLocal_38);
						
							if (!func_65(iLocal_41))
							{
								if (Global_33009[iLocal_41 /*11*/] == 3 || Global_33009[iLocal_41 /*11*/] == 2 || Global_33009[iLocal_41 /*11*/] == -1)
									Global_33009[iLocal_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							
								GRAPHICS::SET_TV_CHANNEL(Global_33009[iLocal_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(fLocal_28);
							}
							else
							{
								iLocal_42 = Global_33009[iLocal_41 /*11*/];
								iLocal_43 = Global_33009[iLocal_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iLocal_42, func_42(iLocal_43), Global_33009[iLocal_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(iLocal_42);
							
								if (Global_33009[iLocal_41 /*11*/].f_7)
								{
									Global_33009[iLocal_41 /*11*/].f_5 = 0;
									Global_33009[iLocal_41 /*11*/].f_7 = 0;
								}
							}
						
							Global_33009[iLocal_41 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							iLocal_27 = 3;
							break;
					
						case 3:
							if (Global_33009[iLocal_41 /*11*/].f_4)
								iLocal_27 = 6;
						
							if (Global_33009[iLocal_41 /*11*/].f_7 && func_65(iLocal_41))
							{
								Global_33009[iLocal_41 /*11*/].f_7 = 0;
								iLocal_27 = 6;
							}
						
							if (!func_39(iLocal_41))
							{
								func_38();
								iLocal_27 = 5;
							}
							else
							{
								func_36();
							
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
									GRAPHICS::SET_TV_CHANNEL(Global_33009[iLocal_41 /*11*/]);
							
								if (func_16())
									iLocal_27 = 6;
							}
							break;
					
						case 5:
							if (func_39(iLocal_41))
								iLocal_27 = 2;
						
							if (Global_33009[iLocal_41 /*11*/].f_4)
								iLocal_27 = 6;
							break;
					
						case 6:
							func_1();
						
							if (iLocal_40 != -1)
								_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
						
							Global_33009[iLocal_41 /*11*/].f_5 = 0;
							Global_33009[iLocal_41 /*11*/].f_4 = 0;
							Global_33009[iLocal_41 /*11*/].f_1 = 0;
							Global_33009[iLocal_41 /*11*/].f_2 = 0;
							Global_33009[iLocal_41 /*11*/].f_7 = 0;
							Global_33009[iLocal_41 /*11*/].f_8 = 0;
							Global_33009[iLocal_41 /*11*/].f_10 = 0;
							iLocal_27 = 1;
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

void func_1() // Position - 0x4E6 Hash - 0xED161B5B ^0xA8DF752D
{
	if (iLocal_41 != -1)
		Global_33009[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();

	fLocal_28 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family5")) == 0)
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_44, "NULL"))
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uLocal_44, true);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	func_3();
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
		if (!ENTITY::IS_ENTITY_VISIBLE(obLocal_36))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_36, true, false);

	GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	func_2();
	return;
}

void func_2() // Position - 0x590 Hash - 0x63970AA4 ^0x7869AB7F
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_85 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_85 = 0;
		}
	}

	return;
}

void func_3() // Position - 0x5AC Hash - 0xDC05076F ^0xC491FA88
{
	if (!(iLocal_33 == -1))
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
			{
				ENTITY::SET_ENTITY_VISIBLE(obLocal_35, false, false);
			
				if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, false);
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
		ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);

	return;
}

void func_4() // Position - 0x643 Hash - 0x75F0A50F ^0x948634B7
{
	if (bLocal_83)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(caLocal_76))
			CAM::SET_CAM_ACTIVE(caLocal_76, false);
	
		CAM::DESTROY_CAM(caLocal_76, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_29, 1, 0, 2);
		
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (bLocal_34 == true)
				{
					bLocal_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
		
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_60, "NULL"))
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
				AUDIO::STOP_AUDIO_SCENE(&uLocal_60);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, true, false);
	
		func_5(false, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
		bLocal_83 = false;
	}

	return;
}

void func_5(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x70F Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_14())
				Global_20930.f_1 = 3;
		
			Global_22286 = 5;
		}
	
		func_13(true, bParam3, bParam2, false);
		Global_64172 = true;
		Global_76501 = true;
		Global_79387 = true;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_64172 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_13(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID(), 0) && !func_6() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_79387 = false;
	}

	return;
}

BOOL func_6() // Position - 0x85C Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

BOOL func_7(Player plParam0, int iParam1) // Position - 0x876 Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_10(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_8(-1, false) == CHAR_MIKE_FRANK_CONF;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

eCharacter func_8(int iParam0, BOOL bParam1) // Position - 0x8CF Hash - 0x1DCD393E ^0x1DCD393E
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

int func_9() // Position - 0x910 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

BOOL func_10(Player plParam0) // Position - 0x91C Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_11(Player plParam0) // Position - 0x93E Hash - 0x68897CDD ^0x7A533860
{
	if (func_7(plParam0, 0))
		return true;

	if (func_12())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_12() // Position - 0x97D Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_13(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x98B Hash - 0x3167F4C7 ^0xCE6B9B6A
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

BOOL func_14() // Position - 0x9BE Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

void func_15(int iParam0) // Position - 0x9E5 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 13);
	else
		MISC::CLEAR_BIT(&Global_8800, 13);

	return;
}

BOOL func_16() // Position - 0xA08 Hash - 0xC0D9F7E2 ^0x2B0C5F8C
{
	if (!func_65(iLocal_41))
	{
		if (func_32(&uLocal_24) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_86, 1f, 1f, 1.5f, false, true, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && !func_31(8, -1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_29, 90f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (iLocal_40 == -1)
			{
				func_30();
				_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			}
			else if (func_27(iLocal_40, true))
			{
				_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
				func_56(&uLocal_24);
				Global_33009[iLocal_41 /*11*/].f_7 = 0;
			
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
			
				return true;
			}
		
			func_17();
		}
		else
		{
			if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
				HUD::CLEAR_HELP(true);
		
			func_2();
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		}
	}

	return false;
}

void func_17() // Position - 0xB14 Hash - 0xC3C4A43C ^0x4FF216CB
{
	if (bLocal_83 == false)
	{
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
			_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/, 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);
	
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	
		if (bLocal_34)
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(true, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_SCRIPT_RUP);
		func_18(0);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SCRIPT_RUP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE))
		{
			_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
			func_4();
		}
	}

	return;
}

void func_18(int iParam0) // Position - 0xBCE Hash - 0x7E11E9C ^0x544BF257
{
	if (func_23())
		return;

	if (!(Global_20930.f_1 == 1))
	{
		if (func_22(0))
			func_19(iParam0);
	
		MISC::SET_BIT(&Global_8801, 2);
	}

	return;
}

void func_19(int iParam0) // Position - 0xC01 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_23())
		return;

	if (Global_21145)
		if (func_21())
			func_20(true, true);
		else
			func_20(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_14())
		Global_20930.f_1 = 3;

	return;
}

void func_20(BOOL bParam0, BOOL bParam1) // Position - 0xC8B Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_22(0))
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

BOOL func_21() // Position - 0xCFF Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_22(int iParam0) // Position - 0xD0D Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_23() // Position - 0xD64 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956920, 19);
}

void func_24(BOOL bParam0, BOOL bParam1) // Position - 0xD73 Hash - 0xDC2C4999 ^0x9684608E
{
	int num;
	int num2;
	float tvVolume;

	num = 64;

	if (bParam0)
	{
		if (func_25(false))
		{
			if (!bLocal_20)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
			
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
					GRAPHICS::SET_TV_CHANNEL(1);
				else
					GRAPHICS::SET_TV_CHANNEL(0);
			
				bLocal_20 = true;
			}
		}
		else if (bLocal_20)
		{
			bLocal_20 = false;
		}
	}

	if (bParam1)
	{
		num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) - 127;
	
		if (!bLocal_21)
		{
			if (num2 > 0 + num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume - 0.5f;
			
				if (tvVolume < -36f)
					tvVolume = -36f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_22 = MISC::GET_GAME_TIMER();
				bLocal_21 = true;
			}
		
			if (num2 < 0 - num)
			{
				tvVolume = GRAPHICS::GET_TV_VOLUME();
				tvVolume = tvVolume + 0.5f;
			
				if (tvVolume > 0f)
					tvVolume = 0f;
			
				GRAPHICS::SET_TV_VOLUME(tvVolume);
				iLocal_22 = MISC::GET_GAME_TIMER();
				bLocal_21 = true;
			}
		
			if (num2 < 0 + num && num2 > 0 - num)
			{
				bLocal_23 = true;
			}
			else if (bLocal_23)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (tvVolume != -36f && tvVolume != 0f)
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
				
					bLocal_23 = false;
				}
			}
		}
	
		if (bLocal_21)
			if (num2 == 0 || MISC::GET_GAME_TIMER() > iLocal_22 + 24)
				bLocal_21 = false;
	}

	return;
}

BOOL func_25(BOOL bParam0) // Position - 0xEBA Hash - 0x25EF1702 ^0x3A4EC47C
{
	int num;
	int num2;

	num = 64;
	num2 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) - 127;

	if (bParam0 || SYSTEM::TIMERA() > 300)
	{
		if (num2 > 0 + num || num2 < 0 - num)
		{
			SYSTEM::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_26() // Position - 0xF06 Hash - 0xF551C7D2 ^0x593599C
{
	float fov;

	fov = 50f;

	if (bLocal_83 == false)
	{
		caLocal_76 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uLocal_77, uLocal_80, fov, false, 2);
		CAM::SET_CAM_FAR_CLIP(caLocal_76, 100f);
		CAM::SET_CAM_ACTIVE(caLocal_76, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				bLocal_34 = true;
			}
		
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_29, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&uLocal_60, "NULL"))
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
				AUDIO::START_AUDIO_SCENE(&uLocal_60);
	
		func_5(true, true, false, false, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
		bLocal_83 = true;
	}

	return;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0xFDD Hash - 0xE8E8EFB4 ^0x98461D05
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
		if (Global_44799[num /*32*/] == true && Global_44799[num /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_44799[num /*32*/].f_29)
					return false;
		
			Global_44799[num /*32*/].f_5 = 1;
			Global_44799[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44799[num /*32*/] == false;
			Global_44799[num /*32*/].f_7;
		}
	}

	return false;
}

int func_28(int iParam0) // Position - 0x1095 Hash - 0x7F0E29AD ^0x84091235
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44799[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x10D0 Hash - 0xC67F23A2 ^0xEFF6309F
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			_CONTEXT_REMOVE_HELP_TEXT(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44799[i /*32*/])
		{
			Global_44799[i /*32*/] = true;
			Global_44799[i /*32*/].f_1 = Global_45000;
			Global_45000 = Global_45000 + 1;
			Global_44799[i /*32*/].f_4 = 0;
			Global_44799[i /*32*/].f_29 = 0;
			Global_44799[i /*32*/].f_5 = 0;
			Global_44799[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_8), sParam2, 16);
			Global_44799[i /*32*/].f_6 = iParam3;
			Global_44799[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44799[i /*32*/].f_7 = 0;
			Global_44799[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44799[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44799[i /*32*/].f_13), sParam4, 64);
				Global_44799[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[i /*32*/].f_12 = 0;
				Global_44799[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44799[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_30() // Position - 0x11FB Hash - 0xB8D9DAEC ^0x35919E14
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_85 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			iLocal_85 = 1;
		}
	}

	return;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x121B Hash - 0xA14C4D3F ^0xA6034F77
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

float func_32(var uParam0) // Position - 0x1253 Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_35(uParam0))
		if (func_34(uParam0))
			return uParam0->f_2;
		else
			return func_33(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_33(BOOL bParam0) // Position - 0x128F Hash - 0xB0FB4432 ^0x9D798691
{
	float num;
	float num2;
	int networkTime;
	float num3;
	float num4;

	if (bParam0)
	{
		num = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		num2 = num / 1000f;
		return num2;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTime = NETWORK::GET_NETWORK_TIME();
		num3 = SYSTEM::TO_FLOAT(networkTime);
		num4 = num3 / 1000f;
		return num4;
	}

	return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_34(var uParam0) // Position - 0x12E7 Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*uParam0, 2);
}

BOOL func_35(var uParam0) // Position - 0x12F4 Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_36() // Position - 0x1301 Hash - 0x18A58530 ^0xDB3CE2EE
{
	float xScale;

	xScale = 1f;
	func_37(&xScale);
	HUD::SET_TEXT_RENDER_ID(iLocal_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, xScale, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	return;
}

void func_37(var uParam0) // Position - 0x1342 Hash - 0xACC09CB ^0xBF2D75A5
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

void func_38() // Position - 0x137F Hash - 0x788155EC ^0xFC0A0CDE
{
	Global_33009[iLocal_41 /*11*/].f_7 = 0;
	Global_33009[iLocal_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	fLocal_28 = GRAPHICS::GET_TV_VOLUME();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_60);

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP2" /*Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	SYSTEM::WAIT(0);
	func_3();
	func_53();
	return;
}

BOOL func_39(int iParam0) // Position - 0x13FF Hash - 0x3955DF3F ^0xCBEBA13E
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

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x1474 Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_41(int iParam0, int iParam1) // Position - 0x1487 Hash - 0xE9A65642 ^0xF9847A54
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

char* func_42(int iParam0) // Position - 0x14E4 Hash - 0x95E62A7F ^0x6A61834B
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

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x15C3 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x15D6 Hash - 0xFE5630E8 ^0xFE5630E8
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
		if (Global_44799[num /*32*/])
		{
			Global_44799[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_45() // Position - 0x162D Hash - 0x4661537F ^0x24508B34
{
	if (func_32(&uLocal_24) < 1f)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_86, 1f, 1f, 1.5f, false, true, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uLocal_29, 90f) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(obLocal_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (func_31(8, -1))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (Global_98441)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (Global_33009[iLocal_41 /*11*/].f_8)
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		return false;
	}

	if (iLocal_40 == -1)
	{
		_CONTEXT_ADD_HELP_TEXT(&iLocal_40, 3, "TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/, 0, 0, 0, 0);
		return false;
	}

	if (func_27(iLocal_40, true))
	{
		_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);
		func_56(&uLocal_24);
		Global_33009[iLocal_41 /*11*/].f_7 = 1;
	
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, true);
	
		func_46(309, 0, 0);
		return true;
	}

	return false;
}

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x175C Hash - 0xEC2439E7 ^0x1B67A713
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_47();

	return;
}

void func_47() // Position - 0x1842 Hash - 0x9F269E94 ^0x9F269E94
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
		func_51(13, SYSTEM::FLOOR(Global_113969.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79389)
		{
			if (func_50() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113703 = false;
			
				if (!Global_64166)
					func_48();
			}
		}
	}

	return;
}

int func_48() // Position - 0x1D00 Hash - 0x9482CBBF ^0x8B17A994
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

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x1D4B Hash - 0x15889021 ^0xE7262364
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_79638, 0);
}

int func_50() // Position - 0x1D73 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32948;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x1D7E Hash - 0x77E0C72A ^0x80DA2A54
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

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1DCF Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_9();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_53() // Position - 0x1DED Hash - 0x3D3204BF ^0x7DF7781D
{
	SYSTEM::WAIT(0);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		iLocal_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}

	return;
}

void func_54() // Position - 0x1E19 Hash - 0x60A20886 ^0xDBC2CEAA
{
	Hash entityModel;

	if (iLocal_41 == 4)
		func_55();

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");

	SYSTEM::WAIT(0);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		func_69();

	entityModel = ENTITY::GET_ENTITY_MODEL(obLocal_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
	HUD::LINK_NAMED_RENDERTARGET(entityModel);
	SYSTEM::WAIT(0);

	if (iLocal_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(obLocal_35))
				func_69();
		
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obLocal_35))
				func_69();
		
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", false);
		
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(entityModel))
				HUD::LINK_NAMED_RENDERTARGET(entityModel);
		
			SYSTEM::WAIT(0);
		}
	}

	iLocal_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
	return;
}

void func_55() // Position - 0x1ED7 Hash - 0x2EC4B74F ^0x71674BDB
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
		if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2"))
			return;

	obLocal_35 = 0;
	obLocal_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_35, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_35, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_35, false, false);
	obLocal_37 = 0;
	obLocal_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_mm_screen2_vl"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_37, fLocal_32);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_37, true);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_37, false, false);
	return;
}

void func_56(int* piParam0) // Position - 0x1F56 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_57(piParam0, 0f);
	return;
}

void func_57(int* piParam0, float fParam1) // Position - 0x1F65 Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_33(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_58() // Position - 0x1F90 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_59(int iParam0) // Position - 0x1F98 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_60() // Position - 0x1FC4 Hash - 0x923794AC ^0x747921F2
{
	uLocal_29 = { ENTITY::GET_ENTITY_COORDS(obLocal_35, true) };
	fLocal_32 = ENTITY::GET_ENTITY_HEADING(obLocal_35);
	func_62();

	if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_03"))
	{
		if (SYSTEM::VDIST(uLocal_29, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			iLocal_41 = 0;
			uLocal_77 = { -9.8135f, -1440.9128f, 31.3654f };
			uLocal_80 = { 0f, 0f, -134.3211f };
			uLocal_86 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_trev_tv_01"))
	{
		if (SYSTEM::VDIST(uLocal_29, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			iLocal_41 = 2;
			uLocal_77 = { 1978.2303f, 3819.6504f, 34.2724f };
			uLocal_80 = { 0f, 0f, -105.15f };
			uLocal_86 = { 1978.3303f, 3819.717f, 32.4501f };
			func_61();
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_flat_01"))
	{
		if (SYSTEM::VDIST(uLocal_29, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			iLocal_41 = 1;
			uLocal_77 = { 2.5724f, 527.9989f, 176.1619f };
			uLocal_80 = { 0f, 0f, -29.9488f };
			uLocal_86 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("prop_tv_flat_02"))
	{
		if (SYSTEM::VDIST(uLocal_29, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			iLocal_41 = 3;
			uLocal_77 = { -1160.5024f, -1520.7598f, 10.7393f };
			uLocal_80 = { 0f, 0f, 60.061f };
			uLocal_86 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2") || ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_scre_off"))
	{
		if (SYSTEM::VDIST(uLocal_29, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			iLocal_41 = 4;
			uLocal_77 = { -802.8972f, 172.537f, 74.5801f };
			uLocal_80 = { 0f, 0f, -69.0273f };
			uLocal_86 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("des_tvsmash_start"))
	{
		if (SYSTEM::VDIST(uLocal_29, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			iLocal_41 = 5;
			uLocal_77 = { -808.3051f, 171.2623f, 77.2822f };
			uLocal_80 = { 1.8886f, 0f, 110.9232f };
			uLocal_86 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&uLocal_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&uLocal_60, "TV_MICHAELS_HOUSE", 64);
		}
	}

	return;
}

void func_61() // Position - 0x22B3 Hash - 0xBF767C65 ^0x6174B12C
{
	obLocal_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tt_screenstatic"), uLocal_29, true, true, false, 0);
	ENTITY::SET_ENTITY_HEADING(obLocal_36, fLocal_32);
	ENTITY::SET_ENTITY_VISIBLE(obLocal_36, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(obLocal_36, true);
	return;
}

void func_62() // Position - 0x22E5 Hash - 0x44202625 ^0xA8E37EAC
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), false);

	if (func_59(22))
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), false);
	else
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), false);

	return;
}

void func_63() // Position - 0x231B Hash - 0xBD2FA2FA ^0xCCEF5FA0
{
	if (iLocal_41 == -1)
		return;

	if (Global_33009[iLocal_41 /*11*/].f_10 == 0)
	{
		if (iLocal_84 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_35, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
				ENTITY::SET_ENTITY_INVINCIBLE(obLocal_36, false);
		
			iLocal_84 = 0;
		}
	}
	else if (iLocal_84 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_38))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_38, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_35, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_37, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
			ENTITY::SET_ENTITY_INVINCIBLE(obLocal_36, true);
	
		iLocal_84 = 1;
	}

	return;
}

BOOL func_64(int iParam0) // Position - 0x23CE Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

BOOL func_65(int iParam0) // Position - 0x23DC Hash - 0x96F4EAF ^0x6589D7D8
{
	if (iParam0 != -1)
		if (Global_33009[iParam0 /*11*/].f_5)
			return true;

	return false;
}

BOOL func_66() // Position - 0x23FB Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_67() // Position - 0x2418 Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_98435 != -1)
		return IS_BIT_SET(Global_92301[Global_98435 /*34*/].f_15, 20);

	return false;
}

void func_68() // Position - 0x243B Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_69() // Position - 0x2443 Hash - 0x7F45B52E ^0x4942577D
{
	if (iLocal_41 == -1)
		SCRIPT::TERMINATE_THIS_THREAD();

	_CONTEXT_REMOVE_HELP_TEXT(&iLocal_40);

	if (iLocal_41 != -1)
	{
		func_1();
		Global_33009[iLocal_41 /*11*/].f_6 = 0;
		Global_33009[iLocal_41 /*11*/].f_7 = 0;
		Global_33009[iLocal_41 /*11*/].f_8 = 0;
		Global_33009[iLocal_41 /*11*/].f_4 = 0;
		Global_33009[iLocal_41 /*11*/].f_5 = 0;
		Global_33009[iLocal_41 /*11*/].f_2 = 0;
		Global_33009[iLocal_41 /*11*/] = -1;
		Global_33009[iLocal_41 /*11*/].f_1 = 0;
		Global_33009[iLocal_41 /*11*/].f_10 = 0;
	}

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP1" /*Press ~INPUT_CONTEXT~ to turn on the TV.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP5" /*Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("TV_HLP6" /*Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~*/))
		HUD::CLEAR_HELP(true);

	SYSTEM::WAIT(0);
	func_70();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&uLocal_60))
		AUDIO::STOP_AUDIO_SCENE(&uLocal_60);

	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_70() // Position - 0x250A Hash - 0xC4BD9799 ^0x658A83CA
{
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(obLocal_35) == joaat("v_ilev_mm_screen2"))
		{
			OBJECT::DELETE_OBJECT(&obLocal_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2"));
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_37))
	{
		OBJECT::DELETE_OBJECT(&obLocal_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_screen2_vl"));
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
	{
		OBJECT::DELETE_OBJECT(&obLocal_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tt_screenstatic"));
	}

	return;
}

