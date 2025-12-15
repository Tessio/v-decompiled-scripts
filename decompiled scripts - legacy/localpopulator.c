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
	ePedComponentType epctLocal_19 = PV_COMP_HEAD;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 80;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x49 (73)
{
	if (Global_1836602 == PV_COMP_HEAD || Global_1836602 == PV_COMP_HAND)
		iLocal_18 = 3;

	switch (iLocal_18)
	{
		case 0:
			func_148();
			break;
	
		case 1:
			func_12();
			break;
	
		case 2:
			func_6();
			break;
	
		case 3:
			func_2();
			break;
	}

	return;
}

void func_2() // Position - 0xA4 (164)
{
	int i;

	GRAPHICS::DRAW_DEBUG_TEXT_2D("LPOP_STATE_CLEANUP", func_5(), 0, 0, 255, 255);

	if (iLocal_22 > MISC::GET_FRAME_COUNT())
		return;

	iLocal_22 = MISC::GET_FRAME_COUNT() + 1;

	for (i = iLocal_20 - 1; i >= 0; i = i + -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_23[i]))
			ENTITY::DELETE_ENTITY(&uLocal_23[i]);
	
		iLocal_20 = iLocal_20 - 1;
	
		if (iLocal_20 == 0)
			break;
	}

	if (iLocal_20 > 0)
		return;

	switch (epctLocal_19)
	{
		case PV_COMP_BERD:
			func_3();
			break;
	}

	Global_1836602 = PV_COMP_HEAD;
	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_1836598[i] = 0;
	}

	Global_1836597 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x153 (339)
{
	func_4(false);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area");
	return;
}

void func_4(BOOL bParam0) // Position - 0x167 (359)
{
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", bParam0);
	AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /*Media Player*/, bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_03", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_04", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_05", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_Takeover", bParam0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG", bParam0, true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG_2", bParam0, true);

	if (bParam0)
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_36_AUDIOPLAYER" /*Media Player*/);
		AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /*Media Player*/, "TUNER_AP_MIX3_PARTC");
		AUDIO::STOP_AUDIO_SCENE("MP_POSITIONED_RADIO_MUTE_SCENE");
		AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /*Media Player*/, "TUNER_AP_MIX3_PARTC", 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_01", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_02", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_03", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_04", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
		AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_Meet_rm_Music_05", "RADIO_36_AUDIOPLAYER" /*Media Player*/, 0);
	}
	else
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
	}

	return;
}

Vector3 func_5() // Position - 0x24F (591)
{
	return 0f, 0f, 0f;
}

void func_6() // Position - 0x25A (602)
{
	function func;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
		iLocal_18 = 3;

	if (IS_BIT_SET(Global_1836597, 1))
		return;

	switch (epctLocal_19)
	{
		case PV_COMP_HEAD:
			iLocal_18 = 3;
			break;
	
		case PV_COMP_BERD:
			func = 854;
			break;
	
		case PV_COMP_HAIR:
		case PV_COMP_UPPR:
		case PV_COMP_LOWR:
			MISC::SET_BIT(&Global_1836597, 1);
			break;
	}

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		while (!IS_BIT_SET(Global_1836597, 1) && func != 0)
		{
			func(&uLocal_23, &iLocal_21);
			BUILTIN::WAIT(0);
		}
	
		return;
	}

	if (func == 0)
		return;

	if (iLocal_22 > MISC::GET_FRAME_COUNT())
		return;

	iLocal_22 = MISC::GET_FRAME_COUNT() + 1;

	if (func_7(&Global_1836598, iLocal_21))
	{
		iLocal_21 = iLocal_21 + 1;
		return;
	}

	func(&uLocal_23, &iLocal_21);
	return;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x33F (831)
{
	return IS_BIT_SET(uParam0->[iParam1 / 32], iParam1 & 31);
}

void func_8(var uParam0, var uParam1) // Position - 0x356 (854)
{
	Vehicle vehicleIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex;

	if (*uParam1 > 74)
		return;

	if (*uParam1 == 0 && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area", false, -1))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[*uParam1]) || ENTITY::IS_ENTITY_DEAD(uParam0->[*uParam1], false))
	{
		*uParam1 = *uParam1 + 1;
		return;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->[*uParam1]))
	{
		vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 10 || *uParam1 == 11 || *uParam1 == 12 || *uParam1 == 14 || *uParam1 == 15 || *uParam1 == 16 || *uParam1 == 17 || *uParam1 == 18 || *uParam1 == 19 || *uParam1 == 20 || *uParam1 == 21 || *uParam1 == 22 || *uParam1 == 23 || *uParam1 == 24 || *uParam1 == 26 || *uParam1 == 27)
			VEHICLE::SET_VEHICLE_ENGINE_ON(vehicleIndexFromEntityIndex, true, true, false);
	
		if (*uParam1 == 22)
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->[*uParam1], true);
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0->[*uParam1]))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->[*uParam1]);
	
		if (*uParam1 == 28)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 29)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_car@female_b@idles", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 44)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 42)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@heists@prison_heiststation@cop_reactions", "drunk_idle", *uParam1))
				return;
		}
		else if (*uParam1 == 31)
		{
			if (!func_10(pedIndexFromEntityIndex, "anim@amb@carmeet@take_photos@female_b@idles", "idle_b", *uParam1))
				return;
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->[74]))
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->[74], pedIndexFromEntityIndex, PED::GET_PED_BONE_INDEX(pedIndexFromEntityIndex, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		else if (*uParam1 == 49)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 53)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 55)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 60)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 36)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 37)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_hang_out_street@male_b@idle_a", "idle_a", *uParam1))
				return;
		}
		else if (*uParam1 == 38)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 63)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 40)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 41)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 67)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 43)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 45)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 46)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 47)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 48)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 30)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 50)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 51)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 52)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 32)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 54)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 33)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 56)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 57)
		{
			STREAMING::REQUEST_ANIM_DICT("anim@amb@carmeet@checkout_engine@male_a@idles");
		
			if (STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@carmeet@checkout_engine@male_a@idles"))
				TASK::TASK_PLAY_ANIM(pedIndexFromEntityIndex, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, false, false, false);
			else
				return;
		}
		else if (*uParam1 == 58)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 59)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->[9]))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->[9], pedIndexFromEntityIndex, false);
			
				if (!func_10(pedIndexFromEntityIndex, "amb@world_human_seat_wall@male@hands_by_sides@idle_a", "idle_a", *uParam1))
					return;
			}
			else
			{
				func_9(pedIndexFromEntityIndex, *uParam1);
			}
		}
		else if (*uParam1 == 66)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 39)
		{
			if (!func_10(pedIndexFromEntityIndex, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
				return;
		}
		else if (*uParam1 == 68)
		{
			func_11(pedIndexFromEntityIndex, "WORLD_HUMAN_SMOKING_POT", *uParam1);
		}
		else
		{
			func_9(pedIndexFromEntityIndex, *uParam1);
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->[*uParam1]))
	{
		if (*uParam1 == 69)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_01", uParam0->[*uParam1]);
		else if (*uParam1 == 70)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_02", uParam0->[*uParam1]);
		else if (*uParam1 == 71)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_03", uParam0->[*uParam1]);
		else if (*uParam1 == 72)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_04", uParam0->[*uParam1]);
		else if (*uParam1 == 73)
			AUDIO::LINK_STATIC_EMITTER_TO_ENTITY("SE_tr_tuner_car_meet_Meet_rm_Music_05", uParam0->[*uParam1]);
	
		if (*uParam1 > 68 && *uParam1 < 74)
		{
			ENTITY::SET_ENTITY_COLLISION(uParam0->[*uParam1], false, false);
			ENTITY::SET_ENTITY_ALPHA(uParam0->[*uParam1], 0, false);
		}
	}

	*uParam1 = *uParam1 + 1;

	if (*uParam1 >= 74)
	{
		func_4(true);
		MISC::SET_BIT(&Global_1836597, 1);
	}

	return;
}

void func_9(Ped pedParam0, var uParam1) // Position - 0xA94 (2708)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 9))
	{
		case 1:
			func_11(pedParam0, "WORLD_HUMAN_AA_COFFEE", uParam1);
			break;
	
		case 2:
			func_11(pedParam0, "WORLD_HUMAN_AA_SMOKE", uParam1);
			break;
	
		case 3:
			func_11(pedParam0, "WORLD_HUMAN_DRINKING", uParam1);
			break;
	
		case 4:
			func_11(pedParam0, "WORLD_HUMAN_DRINKING_FACILITY", uParam1);
			break;
	
		case 5:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING", uParam1);
			break;
	
		case 6:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING_CLUBHOUSE", uParam1);
			break;
	
		case 7:
			func_11(pedParam0, "WORLD_HUMAN_SMOKING_POT", uParam1);
			break;
	
		case 8:
			func_11(pedParam0, "WORLD_HUMAN_STAND_IMPATIENT", uParam1);
			break;
	}

	return;
}

BOOL func_10(Ped pedParam0, char* sParam1, char* sParam2, var uParam3) // Position - 0xB58 (2904)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, sParam1, sParam2, 1))
		return true;

	STREAMING::REQUEST_ANIM_DICT(sParam1);

	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam1))
	{
		TASK::TASK_PLAY_ANIM(pedParam0, sParam1, sParam2, 8f, -8f, -1, 9, 0, false, false, false);
		return true;
	}

	return false;
}

BOOL func_11(Ped pedParam0, char* sParam1, var uParam2) // Position - 0xBA1 (2977)
{
	BOOL isPedUsingScenario;

	isPedUsingScenario = PED::IS_PED_USING_SCENARIO(pedParam0, sParam1);

	if (!isPedUsingScenario)
		TASK::TASK_START_SCENARIO_IN_PLACE(pedParam0, sParam1, 0, true);

	return isPedUsingScenario;
}

void func_12() // Position - 0xBC5 (3013)
{
	int num;
	function func;
	function func2;
	BOOL flag;
	int num2;
	int networkTime;

	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	switch (epctLocal_19)
	{
		case PV_COMP_BERD:
			func = 65449;
			func2 = 10124;
			break;
	
		case PV_COMP_HAIR:
			func = 10107;
			func2 = 0;
			break;
	
		case PV_COMP_UPPR:
			func = 10090;
			func2 = 0;
			break;
	
		case PV_COMP_LOWR:
			func = 3871;
			func2 = 0;
			break;
	}

	iLocal_22 = MISC::GET_FRAME_COUNT();
	flag = false;

	while (iLocal_20 < 80)
	{
		if (func_7(&Global_1836598, iLocal_20))
		{
			iLocal_20 = iLocal_20 + 1;
		}
		else if (iLocal_22 > MISC::GET_FRAME_COUNT())
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			if (networkTime == 0)
				networkTime = NETWORK::GET_NETWORK_TIME();
		
			func(&num, iLocal_20);
		
			if (!StackVal)
				break;
		
			if (num == 0)
			{
				func_15(&num);
				func_14(&Global_1836598, iLocal_21);
				iLocal_20 = iLocal_20 + 1;
			}
			else
			{
				num2 = iLocal_20;
				flag = func_13(&num);
			
				if (!flag)
				{
					BUILTIN::WAIT(0);
				}
				else
				{
					func_15(&num);
				
					if (func2 != 0)
						func2(num2, &uLocal_23[num2]);
				
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
						if (iLocal_20 != 0 && networkTime != 0 && iLocal_20 % 2 == 0)
							iLocal_22 = MISC::GET_FRAME_COUNT() + 1;
				
					networkTime = 0;
				}
			}
		}
	}

	MISC::SET_BIT(&Global_1836597, 0);
	iLocal_21 = 0;
	iLocal_18 = 2;
	return;
}

BOOL func_13(var uParam0) // Position - 0xD1E (3358)
{
	Ped ped;
	Vehicle vehicle;
	Object object;

	if (!STREAMING::IS_MODEL_VALID(uParam0->f_1))
	{
		iLocal_20 = iLocal_20 + 1;
		return 1;
	}

	if (!STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_1))
	{
		iLocal_20 = iLocal_20 + 1;
		return 1;
	}

	STREAMING::REQUEST_MODEL(uParam0->f_1);

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		return 0;

	if (*uParam0 == 1)
	{
		if (uParam0->f_6 != -1 && ENTITY::DOES_ENTITY_EXIST(uLocal_23[uParam0->f_6]) && ENTITY::IS_ENTITY_A_VEHICLE(uLocal_23[uParam0->f_6]))
			ped = PED::CREATE_PED_INSIDE_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uLocal_23[uParam0->f_6]), PED_TYPE_MISSION, uParam0->f_1, uParam0->f_7, false, false);
		else
			ped = PED::CREATE_PED(PED_TYPE_MISSION, uParam0->f_1, uParam0->f_2, uParam0->f_5, false, false);
	
		PED::SET_PED_TREATED_AS_FRIENDLY(ped, 1, 1);
		PED::SET_PED_CONFIG_FLAG(ped, 150, true);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 1024, false);
		PED::SET_PED_FLEE_ATTRIBUTES(ped, 32768, true);
		uLocal_23[iLocal_20] = ped;
	}

	if (*uParam0 == 2)
	{
		vehicle = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_2, uParam0->f_5, false, false, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(vehicle, 3);
		uLocal_23[iLocal_20] = vehicle;
	}

	if (*uParam0 == 3)
	{
		object = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, false, false, false);
		ENTITY::SET_ENTITY_HEADING(object, uParam0->f_5);
		uLocal_23[iLocal_20] = object;
	
		if (uParam0->f_8 != -1)
			OBJECT::SET_OBJECT_TINT_INDEX(object, uParam0->f_8);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_23[iLocal_20]))
		return 0;

	ENTITY::SET_ENTITY_INVINCIBLE(uLocal_23[iLocal_20], true, false);

	if (uParam0->f_6 == -1)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_23[iLocal_20], uParam0->f_2, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_23[iLocal_20], true);
	}

	if (uParam0->f_9)
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);

	iLocal_20 = iLocal_20 + 1;
	return 1;
}

void func_14(var uParam0, int iParam1) // Position - 0xED2 (3794)
{
	MISC::SET_BIT(&uParam0->[iParam1 / 32], iParam1 & 31);
	return;
}

void func_15(var uParam0) // Position - 0xEEC (3820)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = { 0f, 0f, 0f };
	uParam0->f_5 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	return;
}

int func_16(var uParam0, int iParam1) // Position - 0xF1F (3871)
{
	return func_17(uParam0, iParam1, 1);
}

int func_17(var uParam0, int iParam1, int iParam2) // Position - 0xF30 (3888)
{
	int num;
	int num2;
	int num3;
	ePedComponentType type;
	int num4;

	if (iParam1 >= 20)
		return 0;

	switch (iParam2)
	{
		case 2:
			num = 178;
			break;
	
		case 3:
			num = 179;
			break;
	
		case 1:
			num = 177;
			break;
	
		default:
			return 0;
	}

	num2 = func_42(func_54(num), -1);

	if (!func_41(iParam1, 0, 607, false))
		return 0;

	type = num2 + iParam1;
	func_40(type, &num3, false);

	if (num3 == -1)
	{
		*uParam0 = 0;
		return 1;
	}

	if (IS_BIT_SET(Global_1583765[num3 /*143*/].f_104, 0) || IS_BIT_SET(Global_1583765[num3 /*143*/].f_104, 1) || IS_BIT_SET(Global_1583765[num3 /*143*/].f_104, 6))
	{
		*uParam0 = 0;
		return 1;
	}

	if (IS_BIT_SET(Global_1583765[num3 /*143*/].f_104, 27) || func_26(num, type))
	{
		*uParam0 = 0;
		return 1;
	}

	num4 = func_23(Global_1583765[num3 /*143*/].f_66);

	if (num4 == 0)
	{
		*uParam0 = 0;
		return 1;
	}

	*uParam0 = 3;
	uParam0->f_1 = num4;

	if (num4 == -1922207142)
		uParam0->f_8 = 3;

	uParam0->f_2 = { func_21(iParam1, num4, num) };
	uParam0->f_5 = func_18(iParam1, num4, num);
	uParam0->f_9 = 1;
	return 1;
}

float func_18(int iParam0, int iParam1, int iParam2) // Position - 0x1072 (4210)
{
	float num;
	float num2;
	float i;

	num = 0f;
	num2 = func_19(iParam2, iParam0 < 10 ? 1 : 2);

	switch (iParam0)
	{
		case 0:
			num = 270.0977f;
			break;
	
		case 1:
			num = 269.9389f;
			break;
	
		case 2:
			num = 269.9331f;
			break;
	
		case 3:
			num = 269.9795f;
			break;
	
		case 4:
			num = 269.9351f;
			break;
	
		case 5:
			num = 269.9319f;
			break;
	
		case 6:
			num = 269.9535f;
			break;
	
		case 7:
			num = 269.9371f;
			break;
	
		case 8:
			num = 269.9372f;
			break;
	
		case 9:
			num = 123.9779f;
			break;
	
		case 10:
			num = 269.9379f;
			break;
	
		case 11:
			num = 269.9826f;
			break;
	
		case 12:
			num = 269.9833f;
			break;
	
		case 13:
			num = 269.933f;
			break;
	
		case 14:
			num = 269.9367f;
			break;
	
		case 15:
			num = 269.9321f;
			break;
	
		case 16:
			num = 269.9366f;
			break;
	
		case 17:
			num = 269.9326f;
			break;
	
		case 18:
			num = 269.9318f;
			break;
	
		case 19:
			num = 123.9805f;
			break;
	}

	switch (iParam1)
	{
		case 690729399:
		case 384802199:
			num = num + 180f;
			break;
	}

	for (i = num + num2; i < 0f; i = i + 360f)
	{
	}

	while (i >= 360f)
	{
		i = i - 360f;
	}

	return i;
}

float func_19(int iParam0, int iParam1) // Position - 0x122C (4652)
{
	switch (iParam0)
	{
		case 177:
			return -84.083f;
	
		case 178:
			return 17.77f;
	
		case 179:
			return -51.69f;
	}

	return 0f;
}

var func_20(BOOL bParam0, var uParam1, var uParam2) // Position - 0x126F (4719)
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Vector3 func_21(int iParam0, int iParam1, int iParam2) // Position - 0x1286 (4742)
{
	Vector3 vector;
	BOOL flag;
	Vector3 vector2;
	float heading;

	flag = iParam1 == joaat("imp_prop_covered_vehicle_03a") || iParam1 == -1922207142;

	if (flag)
	{
		switch (iParam0)
		{
			case 0:
				vector = { -4.5875f, -24.8865f, 0.6376f };
				break;
		
			case 1:
				vector = { -4.5862f, -20.7417f, 0.6376f };
				break;
		
			case 2:
				vector = { -4.5742f, -14.3925f, 0.6376f };
				break;
		
			case 3:
				vector = { -4.5709f, -10.1505f, 0.6376f };
				break;
		
			case 4:
				vector = { -4.5509f, 6.8381f, 0.6376f };
				break;
		
			case 5:
				vector = { -4.5467f, 11.1438f, 0.6376f };
				break;
		
			case 6:
				vector = { -4.5387f, 17.3683f, 0.6376f };
				break;
		
			case 7:
				vector = { -4.5339f, 21.7255f, 0.6376f };
				break;
		
			case 8:
				vector = { 2.9498f, 29.4998f, 0.6376f };
				break;
		
			case 9:
				vector = { 8.9362f, 18.0617f, 0.6376f };
				break;
		
			case 10:
				vector = { -4.5867f, -24.8895f, -4.0288f };
				break;
		
			case 11:
				vector = { -4.5825f, -20.746f, -4.0288f };
				break;
		
			case 12:
				vector = { -4.5744f, -14.3966f, -4.0288f };
				break;
		
			case 13:
				vector = { -4.5712f, -10.1492f, -4.0288f };
				break;
		
			case 14:
				vector = { -4.5506f, 6.8371f, -4.0288f };
				break;
		
			case 15:
				vector = { -4.5453f, 11.1429f, -4.0288f };
				break;
		
			case 16:
				vector = { -4.5384f, 17.37f, -4.0288f };
				break;
		
			case 17:
				vector = { -4.5335f, 21.7262f, -4.0288f };
				break;
		
			case 18:
				vector = { 2.9489f, 29.4989f, -4.0288f };
				break;
		
			case 19:
				vector = { 8.9359f, 18.0618f, -4.0288f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				vector = { -4.5875f, -24.8865f, 0.6376f };
				break;
		
			case 1:
				vector = { -4.5862f, -20.7417f, 0.6376f };
				break;
		
			case 2:
				vector = { -4.5742f, -14.3925f, 0.6376f };
				break;
		
			case 3:
				vector = { -4.5709f, -10.1505f, 0.6376f };
				break;
		
			case 4:
				vector = { -4.5509f, 6.8381f, 0.6376f };
				break;
		
			case 5:
				vector = { -4.5467f, 11.1438f, 0.6376f };
				break;
		
			case 6:
				vector = { -4.5387f, 17.3683f, 0.6376f };
				break;
		
			case 7:
				vector = { -4.5339f, 21.7255f, 0.6376f };
				break;
		
			case 8:
				vector = { 2.9498f, 29.4998f, 0.6376f };
				break;
		
			case 9:
				vector = { 8.9362f, 18.0617f, 0.6376f };
				break;
		
			case 10:
				vector = { -4.5867f, -24.8895f, -4.0288f };
				break;
		
			case 11:
				vector = { -4.5825f, -20.746f, -4.0288f };
				break;
		
			case 12:
				vector = { -4.5744f, -14.3966f, -4.0288f };
				break;
		
			case 13:
				vector = { -4.5712f, -10.1492f, -4.0288f };
				break;
		
			case 14:
				vector = { -4.5506f, 6.8371f, -4.0288f };
				break;
		
			case 15:
				vector = { -4.5453f, 11.1429f, -4.0288f };
				break;
		
			case 16:
				vector = { -4.5384f, 17.37f, -4.0288f };
				break;
		
			case 17:
				vector = { -4.5335f, 21.7262f, -4.0288f };
				break;
		
			case 18:
				vector = { 2.9489f, 29.4989f, -4.0288f };
				break;
		
			case 19:
				vector = { 8.9359f, 18.0618f, -4.0288f };
				break;
		}
	}

	switch (iParam1)
	{
		case joaat("imp_prop_covered_vehicle_01a"):
			break;
	}

	vector2 = { func_22(iParam2, iParam0 < 10 ? 0 : 1) };
	vector.f_2 = 0f;
	heading = func_19(iParam2, iParam0 < 10 ? 1 : 2);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector2, heading, vector);
}

Vector3 func_22(int iParam0, int iParam1) // Position - 0x1767 (5991)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 155.51825f;
			
				case 178:
					return -1679.8766f, 493.596f, 117.36438f;
			
				case 179:
					return 548.6964f, 766.88684f, 190.50447f;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 177:
					return -2568.9338f, 1920.2028f, 151.08981f;
			
				case 178:
					return -1679.8766f, 493.596f, 112.93594f;
			
				case 179:
					return 548.6964f, 766.88684f, 186.07603f;
			}
			break;
	}

	return 0f, 0f, 0f;
}

int func_23(ePedComponentType epctParam0) // Position - 0x183B (6203)
{
	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(epctParam0))
		return 0;

	if (func_25(epctParam0))
		return joaat("imp_prop_covered_vehicle_04a");

	if (VEHICLE::IS_THIS_MODEL_A_BIKE(epctParam0))
		return 384802199;

	if (func_24(epctParam0))
		return joaat("imp_prop_covered_vehicle_03a");

	switch (epctParam0)
	{
		case joaat("btype"):
		case joaat("btype2"):
		case joaat("btype3"):
			return joaat("imp_prop_covered_vehicle_05a");
	
		case joaat("ztype"):
			return joaat("imp_prop_covered_vehicle_06a");
	
		case joaat("halftrack"):
		case joaat("insurgent3"):
		case joaat("insurgent"):
		case joaat("apc"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("boxville"):
		case joaat("zhaba"):
			return -1922207142;
	
		default:
		
	}

	switch (VEHICLE::GET_VEHICLE_CLASS_FROM_NAME(epctParam0))
	{
		case 0:
			return joaat("imp_prop_covered_vehicle_04a");
	
		case 1:
		case 18:
			return joaat("imp_prop_covered_vehicle_03a");
	
		case 2:
		case 19:
		case 9:
		case 12:
			return 690729399;
	
		case 3:
			return joaat("imp_prop_covered_vehicle_02a");
	
		case 4:
			return joaat("imp_prop_covered_vehicle_03a");
	
		case 5:
			return joaat("imp_prop_covered_vehicle_01a");
	
		case 6:
			return joaat("imp_prop_covered_vehicle_01a");
	
		case 7:
		case 22:
			return joaat("imp_prop_covered_vehicle_01a");
	
		case 8:
			return 384802199;
	
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 20:
		case 21:
			return -1922207142;
	}

	return 0;
}

BOOL func_24(ePedComponentType epctParam0) // Position - 0x19F4 (6644)
{
	switch (epctParam0)
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
			return true;
	}

	return false;
}

BOOL func_25(ePedComponentType epctParam0) // Position - 0x1AAE (6830)
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

BOOL func_26(int iParam0, ePedComponentType epctParam1) // Position - 0x1ACE (6862)
{
	ePedComponentType type;
	int num;

	type = func_28(false, false);
	num = func_27(iParam0) - 1;
	return epctParam1 == Global_1882572[type /*315*/].f_158.f_43.f_7[num] || epctParam1 == Global_1882572[type /*315*/].f_158.f_43.f_11[num] || epctParam1 == Global_1882572[type /*315*/].f_158.f_43.f_15[num];
}

int func_27(int iParam0) // Position - 0x1B36 (6966)
{
	switch (iParam0)
	{
		case 177:
			return 1;
	
		case 178:
			return 2;
	
		case 179:
			return 3;
	
		default:
		
	}

	return 0;
}

ePedComponentType func_28(BOOL bParam0, BOOL bParam1) // Position - 0x1B64 (7012)
{
	ePedComponentType i;
	ePedComponentType type;
	int j;

	if (func_39(false))
		return PLAYER::PLAYER_ID();

	if (bParam0)
		if (!_NETWORK_IS_PLAYER_VALID(Global_1925608, false, true) || func_36(Global_1925608))
			return func_35();

	if (Global_1925608 == _INVALID_PLAYER_INDEX())
	{
		if (Global_2686090.f_6513 != -1)
		{
			for (i = 0; i <= 31; i = i + 1)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(i))
				{
				}
				else if (MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(i)) == Global_2686090.f_6513)
				{
					return i;
				}
			}
		}
	}

	if (func_30(PLAYER::PLAYER_ID(), 0) || func_29() || bParam1)
	{
		type = -1;
	
		for (j = 0; j <= 31; j = j + 1)
		{
			if (IS_BIT_SET(Global_1845250[j /*880*/].f_36.f_18, 14) || Global_1845250[j /*880*/].f_198 == 8)
			{
			}
			else if (Global_1845250[j /*880*/].f_57)
			{
				type = j;
			}
		}
	
		if (type != -1)
			return type;
	}

	return Global_1925608;
}

BOOL func_29() // Position - 0x1C71 (7281)
{
	return IS_BIT_SET(Global_1845250[PLAYER::PLAYER_ID() /*880*/].f_36.f_18, 14);
}

BOOL func_30(ePedComponentType epctParam0, int iParam1) // Position - 0x1C8B (7307)
{
	BOOL flag;

	if (!func_33(epctParam0))
		return false;

	if (epctParam0 == PLAYER::PLAYER_ID())
		flag = func_31(-1, false) == 8;
	else
		flag = Global_1845250[epctParam0 /*880*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(epctParam0))
			flag = PLAYER::GET_PLAYER_TEAM(epctParam0) == 8;

	return flag;
}

int func_31(int iParam0, BOOL bParam1) // Position - 0x1CE4 (7396)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_32();

	if (Global_1575070[num2] == true)
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

int func_32() // Position - 0x1D25 (7461)
{
	return Global_1574927;
}

BOOL func_33(ePedComponentType epctParam0) // Position - 0x1D31 (7473)
{
	ePedComponentType type;

	type = epctParam0;

	if (type < PV_COMP_HEAD)
		return false;

	if (type >= 32)
		return false;

	return true;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1D53 (7507)
{
	return -1;
}

ePedComponentType func_35() // Position - 0x1D5C (7516)
{
	ePedComponentType type;
	ePedComponentType type2;
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!_NETWORK_IS_PLAYER_VALID(type, false, true))
		{
		}
		else if (func_36(type))
		{
		}
		else
		{
			type2 = type;
			break;
		}
	}

	return type2;
}

BOOL func_36(ePedComponentType epctParam0) // Position - 0x1DA3 (7587)
{
	if (func_30(epctParam0, 0))
		return true;

	if (func_37())
		if (epctParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658291[epctParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_37() // Position - 0x1DE2 (7650)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL _NETWORK_IS_PLAYER_VALID(ePedComponentType player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1DF0 (7664)
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
				if (type == Global_2673271.f_3)
					return Global_2673271.f_2;
				else if (Global_2658291[type /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_39(BOOL bParam0) // Position - 0x1E50 (7760)
{
	bParam0;
	return Global_1575062;
}

void func_40(ePedComponentType epctParam0, var uParam1, BOOL bParam2) // Position - 0x1E61 (7777)
{
	if (Global_262145.f_10741)
		*uParam1 = epctParam0;

	if (epctParam0 >= PV_COMP_HEAD)
	{
		*uParam1 = Global_1944263[epctParam0] - 1;
	
		if (bParam2)
			MISC::GET_FRAME_COUNT() % 5 == 0;
	}
	else
	{
		*uParam1 = -1;
	}

	return;
}

BOOL func_41(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1EA1 (7841)
{
	if (bParam3)
		return iParam0 >= iParam1 && iParam0 <= iParam2;

	return iParam0 >= iParam1 && iParam0 < iParam2;
}

int func_42(int iParam0, int iParam1) // Position - 0x1ECF (7887)
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 88;
	
		case 9:
			return 108;
	
		case 10:
			return 128;
	
		case 11:
			return 148;
	
		case 6:
			return 65;
	
		case 7:
			return 75;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 517;
			else if (iParam1 == 2)
				return 532;
		
			return 159;
	
		case 13:
			return 179;
	
		case 14:
			return 191;
	
		case 15:
			return 192;
	
		case 16:
			return 202;
	
		case 17:
			return 212;
	
		case 18:
			return 227;
	
		case 19:
			return 237;
	
		case 20:
			return 247;
	
		case 21:
			return 258;
	
		case 22:
			return 268;
	
		case 23:
			return 281;
	
		case 24:
			return 294;
	
		case 25:
			return 307;
	
		case 26:
			return 317;
	
		case 27:
			return 337;
	
		case 28:
			return 350;
	
		case 29:
			return 363;
	
		case 31:
			return 515;
	
		case 32:
			return 537;
	
		case 33:
			return 547;
	
		case 34:
			return 567;
	
		case 35:
			return 587;
	}

	if (func_53(iParam0))
	{
		num = func_52(iParam0);
		return func_51(num);
	}

	return func_43(iParam0, -1, true) * iParam0;
}

int func_43(int iParam0, int iParam1, BOOL bParam2) // Position - 0x20CF (8399)
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_47(iParam1, false, false))
				return 20;
			else if (func_46(iParam1))
				return 0;
			else if (func_45(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return func_44();
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
			else if (iParam1 == 133)
				return 10;
			else if (iParam1 == 137 || iParam1 == 136 || iParam1 == 135)
				return 20;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312440[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312440[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312440[iParam1 /*1951*/].f_33 == 10)
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
			return func_44();
	
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
	
		case 32:
			return 10;
	
		case 33:
		case 34:
		case 35:
			return 20;
	}

	return 0;
}

int func_44() // Position - 0x2412 (9234)
{
	return 35;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0x241C (9244)
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

BOOL func_46(int iParam0) // Position - 0x24F9 (9465)
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

BOOL func_47(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2528 (9512)
{
	if (bParam2)
		return func_48(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_48(PLAYER::PLAYER_ID(), false))
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

BOOL func_48(Player plParam0, BOOL bParam1) // Position - 0x2603 (9731)
{
	if (Global_1845079 != _INVALID_PLAYER_INDEX())
	{
		if (!func_50(Global_1845079))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845079)
				if (IS_BIT_SET(Global_2658291[Global_1845079 /*468*/].f_203, 24) || func_49(Global_1845079))
					return true;
	}

	return IS_BIT_SET(Global_2658291[plParam0 /*468*/].f_203, 24);
}

BOOL func_49(ePedComponentType epctParam0) // Position - 0x2669 (9833)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2658291[epctParam0 /*468*/].f_203, 9);

	return false;
}

BOOL func_50(ePedComponentType epctParam0) // Position - 0x268C (9868)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845250[epctParam0 /*880*/].f_260.f_397, 2);

	return false;
}

int func_51(int iParam0) // Position - 0x26B5 (9909)
{
	switch (iParam0)
	{
		case 0:
			return 156;
	
		case 2:
			return 223;
	
		case 1:
			return 224;
	
		case 3:
			return 278;
	
		default:
		
	}

	return -1;
}

int func_52(int iParam0) // Position - 0x26F2 (9970)
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

BOOL func_53(int iParam0) // Position - 0x2718 (10008)
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_54(int iParam0) // Position - 0x2739 (10041)
{
	switch (iParam0)
	{
		case 177:
			return 33;
	
		case 178:
			return 34;
	
		case 179:
			return 35;
	
		default:
		
	}

	return -1;
}

int func_55(var uParam0, int iParam1) // Position - 0x276A (10090)
{
	return func_17(uParam0, iParam1, 3);
}

int func_56(var uParam0, int iParam1) // Position - 0x277B (10107)
{
	return func_17(uParam0, iParam1, 2);
}

void func_57(int iParam0, var uParam1) // Position - 0x278C (10124)
{
	Vehicle vehicleIndexFromEntityIndex;
	int num;
	Ped pedIndexFromEntityIndex;

	if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam1))
	{
		vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam1);
		num.f_9 = 49;
		num.f_59 = 2;
		num.f_78 = -1;
		num.f_79 = -1;
		num.f_96 = -1;
		num.f_97 = 1;
		num.f_99 = 132;
		num.f_100 = -1;
	
		if (iParam0 == 0)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "43MLR467", 16);
			num.f_5 = 135;
			num.f_6 = 135;
			num.f_7 = 135;
			num.f_8 = 135;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 171;
			num.f_75 = 63;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42OTM958", 16);
			num.f_5 = 92;
			num.f_6 = 92;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[4] = 1;
			num.f_9[5] = 1;
			num.f_9[6] = 2;
			num.f_9[10] = 2;
			num.f_9[23] = 8;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 2)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42PHO918", 16);
			num.f_5 = 128;
			num.f_6 = 111;
			num.f_7 = 128;
			num.f_8 = 128;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 3)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "63ADH761", 16);
			num.f_5 = 27;
			num.f_6 = 27;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 2;
			num.f_9[4] = 3;
			num.f_9[5] = 1;
			num.f_9[7] = 5;
			num.f_9[15] = 4;
			num.f_9[23] = 6;
			num.f_9[24] = 1;
		}
		else if (iParam0 == 4)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "47RNO136", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[1] = 2;
			num.f_9[2] = 1;
			num.f_9[5] = 1;
			num.f_9[7] = 4;
			num.f_9[15] = 2;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 5)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 0, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 0, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "56RAF112", 16);
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 2;
		}
		else if (iParam0 == 6)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "66PJT141", 16);
			num.f_5 = 34;
			num.f_6 = 34;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[27] = 14;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 7)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "40AJF699", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 15;
			num.f_8 = 15;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 8)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "82YLM383", 16);
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 9)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "69TJS608", 16);
			num.f_5 = 88;
			num.f_6 = 19;
			num.f_7 = 88;
			num.f_8 = 88;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 10)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "03QMA772", 16);
			num.f_5 = 15;
			num.f_6 = 27;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 2;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 11)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "45MCA163", 16);
			num = 3;
			num.f_5 = 12;
			num.f_6 = 12;
			num.f_7 = 12;
			num.f_8 = 12;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			MISC::SET_BIT(&(num.f_77), 1);
			num.f_9[48] = 5;
		}
		else if (iParam0 == 12)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "43QZA094", 16);
			num = 3;
			num.f_5 = 88;
			num.f_6 = 88;
			num.f_7 = 88;
			num.f_8 = 88;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 217;
			num.f_75 = 166;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			MISC::SET_BIT(&(num.f_77), 2);
			num.f_9[22] = 1;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 13)
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 5, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 5, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "82BPG904", 16);
			num.f_5 = 34;
			num.f_6 = 34;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 2;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[8] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[27] = 14;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 14)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "61OEN493", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[4] = 1;
			num.f_9[5] = 1;
			num.f_9[6] = 2;
			num.f_9[10] = 2;
			num.f_9[23] = 8;
			num.f_9[48] = 13;
		}
		else if (iParam0 == 15)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "00BUC112", 16);
			num.f_5 = 145;
			num.f_6 = 145;
			num.f_7 = 145;
			num.f_8 = 145;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 176;
			num.f_75 = 18;
			num.f_76 = 89;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 16;
		}
		else if (iParam0 == 16)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "42YAG396", 16);
			num.f_5 = 148;
			num.f_6 = 148;
			num.f_7 = 148;
			num.f_8 = 148;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 17)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "80QDM423", 16);
			num.f_5 = 18;
			num.f_6 = 18;
			num.f_7 = 18;
			num.f_8 = 18;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 18)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "89AXX718", 16);
			num.f_5 = 111;
			num.f_6 = 111;
			num.f_7 = 111;
			num.f_8 = 111;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 7;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 87;
			num.f_75 = 89;
			num.f_76 = 97;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 10;
		}
		else if (iParam0 == 19)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "46ODB296", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 20)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "01OWK692", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[23] = 3;
			num.f_9[24] = 1;
			num.f_9[33] = 1;
			num.f_9[37] = 3;
			num.f_9[48] = 7;
		}
		else if (iParam0 == 21)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 3, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 3, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "83NGU235", 16);
			num.f_5 = 62;
			num.f_6 = 62;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[0] = 1;
			num.f_9[5] = 1;
			num.f_9[23] = 8;
			num.f_9[24] = 1;
			num.f_9[48] = 3;
		}
		else if (iParam0 == 22)
		{
			ENTITY::FREEZE_ENTITY_POSITION(vehicleIndexFromEntityIndex, false);
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 2, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 2, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "02HJE974", 16);
			num.f_5 = 137;
			num.f_6 = 137;
			num.f_7 = 137;
			num.f_8 = 137;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 143;
			num.f_75 = 47;
			num.f_76 = 85;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 9;
		}
		else if (iParam0 == 23)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "61KDG752", 16);
			num.f_5 = 111;
			num.f_6 = 111;
			num.f_7 = 111;
			num.f_8 = 111;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 240;
			num.f_75 = 240;
			num.f_76 = 240;
			MISC::SET_BIT(&(num.f_77), 28);
			MISC::SET_BIT(&(num.f_77), 29);
			MISC::SET_BIT(&(num.f_77), 30);
			MISC::SET_BIT(&(num.f_77), 31);
			num.f_9[22] = 1;
			num.f_9[48] = 14;
		}
		else if (iParam0 == 24)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "65TLM709", 16);
			num.f_5 = 135;
			num.f_6 = 135;
			num.f_7 = 135;
			num.f_8 = 135;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 10;
		}
		else if (iParam0 == 25)
		{
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "03SVZ064", 16);
			num.f_5 = 31;
			num.f_6 = 31;
			num.f_7 = 31;
			num.f_8 = 31;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 15;
		}
		else if (iParam0 == 26)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "01PMT053", 16);
			num.f_5 = 67;
			num.f_6 = 67;
			num.f_7 = 67;
			num.f_8 = 67;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_74 = 255;
			num.f_76 = 255;
			num.f_9[48] = 12;
		}
		else if (iParam0 == 27)
		{
			VEHICLE::SET_VEHICLE_LIGHTS(vehicleIndexFromEntityIndex, 2);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleIndexFromEntityIndex, 4, false, true);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(vehicleIndexFromEntityIndex, 4, 0, 1f);
			TEXT_LABEL_ASSIGN_STRING(&(num.f_1), "81QBV287", 16);
			num.f_5 = 15;
			num.f_6 = 15;
			num.f_7 = 0;
			num.f_8 = 0;
			num.f_97 = 1;
			num.f_99 = 132;
			num.f_98 = 0;
			num.f_69 = 1;
			num.f_62 = 255;
			num.f_63 = 255;
			num.f_64 = 255;
			num.f_9[1] = 3;
			num.f_9[4] = 1;
			num.f_9[6] = 1;
			num.f_9[8] = 1;
			num.f_9[23] = 3;
			num.f_9[48] = 7;
		}
	
		func_58(vehicleIndexFromEntityIndex, &num, false, true, false);
	}
	else if (ENTITY::IS_ENTITY_A_PED(*uParam1))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1);
	
		if (iParam0 == 28)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 29)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 30)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 31)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 32)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 33)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 34)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 2, 0, false, 1);
		}
		else if (iParam0 == 35)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 36)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 37)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 38)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 2, 0, false, 1);
		}
		else if (iParam0 == 39)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 40)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 41)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 42)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 4, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 43)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 44)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 0, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 45)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 46)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 47)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 48)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 49)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 50)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 51)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 52)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 53)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 54)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 55)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 56)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 57)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 58)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 59)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 60)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 5, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 61)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 62)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 1, 0, false, 1);
		}
		else if (iParam0 == 63)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 0, false, 1);
		}
		else if (iParam0 == 64)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 3, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 0, 0, 0, false, 1);
			PED::SET_PED_PROP_INDEX(pedIndexFromEntityIndex, 1, 0, 1, false, 1);
		}
		else if (iParam0 == 65)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 66)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 67)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 3, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
		else if (iParam0 == 68)
		{
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HEAD, 6, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_BERD, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAIR, 5, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_UPPR, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_LOWR, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_HAND, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_FEET, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TEEF, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_ACCS, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_TASK, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_DECL, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(pedIndexFromEntityIndex, PV_COMP_JBIB, 0, 0, 0);
		}
	}

	return;
}

void func_58(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4E48 (20040)
{
	Hash entityModel;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_120(veParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, true);
				}
			}
		
			func_115(veParam0, uParam1);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == 858355070)
				VEHICLE::SET_PLANE_CONTROL_SECTIONS_SHOULD_BREAK_OFF_FROM_EXPLOSIONS(veParam0, false);
		
			if (!(uParam1->f_78 == -1) && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
		
			if (!(uParam1->f_79 == -1))
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
		
			if (func_114(uParam1->f_66, &num) && uParam1->f_80 != num)
				uParam1->f_80 = num;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
		
			if (uParam1->f_97 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
		
			if (func_113(veParam0))
				func_107(veParam0, func_110(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
		
			if (IS_BIT_SET(uParam1->f_95, 0))
				func_77(veParam0, &(uParam1->f_81));
		
			if (!func_67(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_64(veParam0);
		
			if (func_63(entityModel))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
							else
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						}
						break;
				}
			}
		
			if (func_60(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21543 + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21543);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				}
			}
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
					{
						DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
						if (IS_GAMER_HANDLE_VALID(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x531F (21279)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_60(Hash hParam0) // Position - 0x532F (21295)
{
	switch (hParam0)
	{
		case -1321131184:
			return true;
	}

	return func_62(hParam0) && !func_61(hParam0);
}

BOOL func_61(Hash hParam0) // Position - 0x535D (21341)
{
	switch (hParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case 1121330119:
			return true;
	}

	return false;
}

BOOL func_62(Hash hParam0) // Position - 0x5392 (21394)
{
	switch (hParam0)
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

BOOL func_63(Hash hParam0) // Position - 0x5421 (21537)
{
	switch (hParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return true;
	}

	return false;
}

void func_64(Vehicle veParam0) // Position - 0x5528 (21800)
{
	Hash entityModel;

	if (Global_262145.f_19988)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veParam0))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
				entityModel.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0));
			
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", INT))
				{
					if (!DECORATOR::DECOR_EXIST_ON(veParam0, "RandomID"))
					{
						entityModel.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(veParam0, "RandomID", entityModel.f_2);
					}
					else
					{
						entityModel.f_2 = DECORATOR::DECOR_GET_INT(veParam0, "RandomID");
					}
				}
			
				func_65(entityModel);
			}
		}
	}

	return;
}

void func_65(var uParam0, var uParam1, var uParam2) // Position - 0x55B7 (21943)
{
	Hash eventData;

	eventData = -1251853784;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_3 = uParam0;
	eventData.f_3.f_1 = uParam0.f_1;
	eventData.f_3.f_2 = uParam0.f_2;
	SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &eventData, 6, func_66(true, true), eventData);
	return;
}

int func_66(BOOL bParam0, BOOL bParam1) // Position - 0x55F8 (22008)
{
	int address;
	int i;
	ePedComponentType type;

	for (i = 0; i < 32; i = i + 1)
	{
		type = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (_NETWORK_IS_PLAYER_VALID(type, false, false))
			if (type != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_30(type, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_67(int iParam0) // Position - 0x565D (22109)
{
	int i;

	if (func_76())
	{
		for (i = 0; i < 65; i = i + 1)
		{
			if (func_75(i) == iParam0)
				if (func_68(i))
					return true;
		}
	}

	return false;
}

BOOL func_68(int iParam0) // Position - 0x5698 (22168)
{
	return func_69(iParam0, 6, true);
}

BOOL func_69(int iParam0, int iParam1, BOOL bParam2) // Position - 0x56A8 (22184)
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_102481.f_1442[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_74() == 0)
			return IS_BIT_SET(func_70(func_73(iParam0), -1), iParam1);
	else
		return IS_BIT_SET(Global_114904.f_668[iParam0], iParam1);

	return false;
}

int func_70(int iParam0, int iParam1) // Position - 0x5708 (22280)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 16715)
	{
		statHash = func_71(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

Hash func_71(int iParam0, int iParam1) // Position - 0x5737 (22327)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_72(iParam1));
}

int func_72(int iParam0) // Position - 0x574C (22348)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_32();
	
		if (num2 > -1)
		{
			Global_2741298 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741298 = 1;
		}
	}

	return num;
}

int func_73(int iParam0) // Position - 0x5780 (22400)
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
			return 14766;
	
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

	return 16715;
}

int func_74() // Position - 0x5B64 (23396)
{
	return Global_33775;
}

int func_75(int iParam0) // Position - 0x5B6F (23407)
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
	
		case 61:
			return 3;
	
		case 62:
			return 0;
	
		case 63:
			return 2;
	
		case 64:
			return 3;
	}

	return 6;
}

BOOL func_76() // Position - 0x5ED9 (24281)
{
	return Global_102481.f_418 > 0;
}

int func_77(Vehicle veParam0, Any* panParam1) // Position - 0x5EEA (24298)
{
	int vehicleCrewEmblemRequestState;
	Player playerFromGamerHandle;

	if (!func_87(veParam0, panParam1))
		return 1;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 0)
	{
		if (!func_85(veParam0))
		{
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
		
			if (func_80(&veParam0, playerFromGamerHandle))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (vehicleCrewEmblemRequestState >= 3)
	{
		return 1;
	}
	else if (func_78(veParam0))
	{
	}

	return 0;
}

BOOL func_78(Vehicle veParam0) // Position - 0x5F67 (24423)
{
	int vehicleCrewEmblemRequestState;
	int networkTime;
	int num;
	int num2;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 1 || vehicleCrewEmblemRequestState == 2)
	{
		if (vehicleCrewEmblemRequestState == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				networkTime = NETWORK::GET_NETWORK_TIME();
			else
				networkTime = MISC::GET_GAME_TIMER();
		
			num = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(networkTime, Global_1576399));
			num2 = 20000;
		
			if (Global_1836707)
				num2 = 2000;
		
			if (num > num2)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(veParam0);
				func_79(veParam0);
				return false;
			}
		}
	
		return true;
	}

	return false;
}

void func_79(Vehicle veParam0) // Position - 0x5FF4 (24564)
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");

	if (!IS_BIT_SET(_int, 16))
	{
		MISC::SET_BIT(&_int, 16);
		DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", _int);
	}

	return;
}

BOOL func_80(var uParam0, Player plParam1) // Position - 0x6054 (24660)
{
	func_84();

	if (Global_1574634.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0))
	{
		Global_1950086.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
	
		if (Global_1950086.f_11 < 0f)
			Global_1950086.f_11 = 0f;
	}

	func_82(*uParam0, &Global_1950086, &(Global_1950086.f_1), &(Global_1950086.f_4), &(Global_1950086.f_7), &(Global_1950086.f_10));
	Global_1950086.f_1.f_2 = Global_1950086.f_1.f_2 - Global_1950086.f_11;

	if (Global_1950086.f_4.f_2 < 0f)
		Global_1950086.f_12 = 1;

	Global_1950086.f_13 = 200;

	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("comet4"))
		Global_1950086.f_13 = 255;

	if (Global_1950086.f_12)
	{
		if (func_81(uParam0, plParam1, Global_1950086, Global_1950086.f_1, Global_1950086.f_4, Global_1950086.f_7, Global_1950086.f_10, 0, Global_1950086.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1576399 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1576399 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}
	else
	{
		Global_1950086.f_14 = { Global_1950086.f_1 };
		Global_1950086.f_14 = Global_1950086.f_14 * -1f;
		Global_1950086.f_17 = { Global_1950086.f_4 };
		Global_1950086.f_17 = Global_1950086.f_17 * -1f;
		Global_1950086.f_20 = { Global_1950086.f_7 };
		Global_1950086.f_20.f_1 = Global_1950086.f_20.f_1 * -1f;
		Global_1950086.f_20.f_2 = Global_1950086.f_20.f_2 * -1f;
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0))
			Global_1950086.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
		else
			Global_1950086.f_23 = 3;
	
		Global_1950086.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1))
			Global_1950086.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
		else
			Global_1950086.f_24 = 3;
	
		if (Global_1950086.f_23 == 0 && func_81(uParam0, plParam1, Global_1950086, Global_1950086.f_1, Global_1950086.f_4, Global_1950086.f_7, Global_1950086.f_10, 0, Global_1950086.f_13) || Global_1950086.f_23 != 0 && Global_1950086.f_24 == 0 && func_81(uParam0, plParam1, Global_1950086, Global_1950086.f_14, Global_1950086.f_17, Global_1950086.f_20, Global_1950086.f_10, 1, Global_1950086.f_13) || Global_1950086.f_24 != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1576399 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1576399 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}

	return false;
}

BOOL func_81(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14) // Position - 0x62FF (25343)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_82(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x6328 (25384)
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");

	if (!func_83(Global_1950112, 0f, 0f, 0f, false) && !func_83(Global_1950115, 0f, 0f, 0f, false) && !func_83(Global_1950118, 0f, 0f, 0f, false) && !(Global_1950121 == 0f))
	{
		*uParam2 = { Global_1950112 };
		*uParam3 = { Global_1950115 };
		*uParam4 = { Global_1950118 };
		*fParam5 = Global_1950121;
		return 1;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("dominator"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("feltzer2"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.65f;
			break;
	
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.75f;
			break;
	
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1289225626:
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.14f;
			break;
	
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.475f;
			break;
	
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.425f;
			break;
	
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sentinel"):
		case -1006198950:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.49f;
			break;
	
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7125f;
			break;
	
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2625f;
			break;
	
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.325f;
			break;
	
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.16f;
			break;
	
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3875f;
			break;
	
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4375f;
			break;
	
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2875f;
			break;
	
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.435f;
			break;
	
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("feltzer3"):
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.095f;
			break;
	
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 471399650:
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.34f;
			break;
	
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.225f;
			break;
	
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -362690998:
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1466692365:
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.38f;
			break;
	
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -361348193:
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("nebula"):
		case 1690421418:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.205f;
			break;
	
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.135f;
			break;
	
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.21f;
			break;
	
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("cypher"):
		case 258105345:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1730644782:
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.045f;
			break;
	
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("sentinel4"):
		case -986656474:
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1386336041:
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1748565021:
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1384502824:
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1035489563:
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 996383885:
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1249788006:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7f;
			break;
	
		case 268758436:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1076201208:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 669204833:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1550581940:
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1933242328:
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2100457220:
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -461850249:
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -131348178:
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.6f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -1763675285:
			*uParam2 = { -1f, 0.2f, 0.43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -654498607:
			*uParam2 = { -0.003f, 2.764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1336514315:
			*uParam2 = { -1.5f, 0.4f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case 1447690049:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 165968051:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -536105557:
			*uParam2 = { -1f, 0.128f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.42f;
			break;
	
		case -979292575:
			*uParam2 = { -1f, 0.088f, 0.438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1479935577:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1681653521:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case joaat("driftremus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -38879449:
			*uParam2 = { 0f, 2.1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -441209695:
		case -855850193:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -465825307:
			*uParam2 = { -1f, 0.1f, 0.026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case -1029730482:
			*uParam2 = { -1.6f, 0.585f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -478639183:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -741120335:
			*uParam2 = { -1f, 0.15f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.46f;
			break;
	
		case -768044142:
			*uParam2 = { -1f, 0.229f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case -178442374:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -1372798934:
			*uParam2 = { -1f, 0.475f, 0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1.141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1249425552:
			*uParam2 = { -1f, 0.16f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1307736079:
			*uParam2 = { -1f, 0.315f, 0.1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0455f };
			*fParam5 = 0.4f;
			break;
	
		case 1452003510:
			*uParam2 = { -1f, 0.216f, 0.124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.41f;
			break;
	
		case -223461503:
			*uParam2 = { -1f, -0.0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2375f;
			break;
	
		case 1121330119:
			*uParam2 = { -1f, 0f, 0.2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1579902654:
		case -939601823:
			*uParam2 = { -1f, 0f, 0.0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1896488056:
			*uParam2 = { -1.229f, 0.6f, 0.361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -999594302:
			*uParam2 = { 0f, 1.71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1881415402:
			*uParam2 = { -1f, 0.175f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1958428933:
			*uParam2 = { -1f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -946047670:
			*uParam2 = { -1f, 0f, 0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1968807591:
			*uParam2 = { 0f, 1.0569f, 1f };
			*uParam3 = { 0f, -0.5995f, -1f };
			*uParam4 = { -0.4071f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1992041063:
		case 457814204:
			*uParam2 = { -1f, 0.2073f, 0.1513f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.0285f };
			*fParam5 = 0.365f;
			break;
	
		case -660007725:
		case 1484920335:
		case 127317925:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case joaat("URANUS"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.335f;
			break;
	
		case -973016778:
			*uParam2 = { -1f, 0.2805f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.445f;
			break;
	
		case -1585673997:
			*uParam2 = { -1f, -0.138f, 0.152f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case joaat("HARDY"):
		case -401558446:
			*uParam2 = { -1f, 0.126f, 0.1025f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2575f;
			break;
	
		case -1982433631:
		case 691148275:
			*uParam2 = { -1f, 0.15f, 0.386f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 687627128:
			*uParam2 = { -1f, 0.1692f, -0.005f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1525f;
			break;
	
		case -1508420500:
			*uParam2 = { -1f, 0.1117f, 0.2103f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2775f;
			break;
	
		case 554408685:
			*uParam2 = { -1f, 0.49f, 0.525f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1761301369:
			*uParam2 = { -1f, 0f, 0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case joaat("Minimus"):
			*uParam2 = { -1f, 0.355f, 0.205f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 893780296:
			*uParam2 = { -1.0113f, -0.1503f, 0.139f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.405f;
			break;
	
		case -402415705:
		case -1555091703:
			*uParam2 = { 1f, 0.93f, 0.54f };
			*uParam3 = { -1f, 0f, 0f };
			*uParam4 = { 0f, 1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -358638792:
			*uParam2 = { 0f, 1.6402f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -938068410:
			*uParam2 = { -0.9362f, 0.2907f, 0.4678f };
			*uParam3 = { 0.495f, 0.3753f, -0.521f };
			*uParam4 = { 0.1125f, -0.6432f, -0.0953f };
			*fParam5 = 0.455f;
			break;
	
		case -1778998583:
			*uParam2 = { -1f, 0.43f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1380582820:
			*uParam2 = { -1f, 0.2f, 0.284f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -1007324375:
			*uParam2 = { -1f, -0.06f, 0.41f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1596736441:
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	}

	return 1;
}

BOOL func_83(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xC371 (50033)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_84() // Position - 0xC3B8 (50104)
{
	Global_1950086 = 0;
	Global_1950086.f_1 = { 0f, 0f, 0f };
	Global_1950086.f_4 = { 0f, 0f, 0f };
	Global_1950086.f_7 = { 0f, 0f, 0f };
	Global_1950086.f_10 = 0f;
	Global_1950086.f_11 = 0f;
	Global_1950086.f_12 = 0;
	Global_1950086.f_13 = 0;
	Global_1950086.f_14 = { 0f, 0f, 0f };
	Global_1950086.f_17 = { 0f, 0f, 0f };
	Global_1950086.f_20 = { 0f, 0f, 0f };
	Global_1950086.f_23 = 0;
	Global_1950086.f_24 = 0;
	return;
}

BOOL func_85(Vehicle veParam0) // Position - 0xC431 (50225)
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_86(veParam0))
			return true;

	return false;
}

BOOL func_86(Vehicle veParam0) // Position - 0xC469 (50281)
{
	int _int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
				return IS_BIT_SET(_int, 16);
			}
		}
	}

	return false;
}

BOOL func_87(Vehicle veParam0, Any* panParam1) // Position - 0xC4B4 (50356)
{
	ePedComponentType playerFromGamerHandle;
	BOOL flag;
	ePedComponentType type;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	else
		playerFromGamerHandle = _INVALID_PLAYER_INDEX();

	flag = false;

	if (playerFromGamerHandle == PLAYER::PLAYER_ID())
		if (func_99(15, false))
			flag = true;
		else if (func_95(true))
			flag = true;
	else
		flag = true;

	if (!flag && ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false) && NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1))
	{
		type = Global_2359296[func_94() /*5574*/].f_681.f_2;
	
		if (type > PV_COMP_INVALID && type < 607)
			if (IS_BIT_SET(Global_1583765[type /*143*/].f_104, 8))
				flag = true;
	}

	if (!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle == _INVALID_PLAYER_INDEX() || !_NETWORK_IS_PLAYER_VALID(playerFromGamerHandle, false, false) || !flag || func_88(veParam0))
		return false;

	return true;
}

BOOL func_88(Vehicle veParam0) // Position - 0xC611 (50705)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (func_90(PLAYER::PLAYER_ID()) == 3)
		if (func_89(veParam0) != -1)
			return true;

	if (Global_1950111)
		return true;

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case -1576586413:
		case -1627077503:
		case 1447690049:
		case -1696319096:
		case joaat("turismo3"):
		case -1233767450:
		case joaat("Police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case 372621319:
		case 167522317:
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case 2042703219:
		case -1948949064:
		case 1891140410:
		case joaat("POLICEB2"):
		case 1966698497:
		case 287906327:
		case 617517171:
		case -1007324375:
			return true;
	
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
				return true;
			break;
	
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 1)
				return true;
			break;
	
		case joaat("club"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 7)
				return true;
			break;
	
		case joaat("yosemite3"):
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 5 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 6)
				return true;
			break;
	}

	return false;
}

int func_89(Vehicle veParam0) // Position - 0xC96E (51566)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_90(ePedComponentType epctParam0) // Position - 0xC99D (51613)
{
	if (func_93(epctParam0) == 233)
		return func_91(epctParam0);

	return -1;
}

int func_91(ePedComponentType epctParam0) // Position - 0xC9BA (51642)
{
	if (func_92(epctParam0, false))
		return Global_1892653[epctParam0 /*615*/].f_10.f_183;

	return -1;
}

BOOL func_92(ePedComponentType epctParam0, BOOL bParam1) // Position - 0xC9DD (51677)
{
	if (func_33(epctParam0))
		if (Global_1892653[epctParam0 /*615*/].f_10.f_34 != PV_COMP_INVALID || bParam1 && Global_1892653[epctParam0 /*615*/].f_10.f_33 != PV_COMP_INVALID)
			return true;

	return false;
}

ePedComponentType func_93(ePedComponentType epctParam0) // Position - 0xCA21 (51745)
{
	if (func_33(epctParam0))
		if (func_92(epctParam0, false))
			return Global_1892653[epctParam0 /*615*/].f_10.f_34;

	return PV_COMP_INVALID;
}

int func_94() // Position - 0xCA4D (51789)
{
	int num;

	num = 0;
	return num;
}

BOOL func_95(BOOL bParam0) // Position - 0xCA5A (51802)
{
	return func_96(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_96(ePedComponentType epctParam0, BOOL bParam1) // Position - 0xCA6C (51820)
{
	return func_97(epctParam0, bParam1, 1);
}

int func_97(ePedComponentType epctParam0, BOOL bParam1, int iParam2) // Position - 0xCA7D (51837)
{
	ePedComponentType type;

	if (!func_33(epctParam0))
		return 0;

	if (!bParam1)
		if (func_98(epctParam0, iParam2))
			return 0;

	type = Global_1892653[epctParam0 /*615*/].f_10;

	if (func_33(type) && Global_1892653[type /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

BOOL func_98(ePedComponentType epctParam0, int iParam1) // Position - 0xCAD9 (51929)
{
	if (func_33(epctParam0))
		if (func_33(Global_1892653[epctParam0 /*615*/].f_10))
			if (Global_1892653[epctParam0 /*615*/].f_10 == epctParam0 && Global_1892653[epctParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

BOOL func_99(int iParam0, BOOL bParam1) // Position - 0xCB28 (52008)
{
	int num;
	int num2;

	if (bParam1)
		if (iParam0 == 15)
			return true;

	if (func_104(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return true;
		}
	}

	num = func_101(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_100(num2));
}

int func_100(int iParam0) // Position - 0xCB86 (52102)
{
	return iParam0 % 32;
}

int func_101(int iParam0) // Position - 0xCB93 (52115)
{
	int num;

	num = func_70(func_102(iParam0), -1);
	return num;
}

int func_102(int iParam0) // Position - 0xCBAA (52138)
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_103(num);

	switch (num2)
	{
		case 0:
			return 1291;
	}

	return 1291;
}

int func_103(int iParam0) // Position - 0xCBD7 (52183)
{
	return iParam0 / 32;
}

BOOL func_104(ePedComponentType epctParam0) // Position - 0xCBE4 (52196)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (func_105(epctParam0) && Global_2658291[epctParam0 /*468*/].f_325.f_11 == epctParam0)
			return true;

	return false;
}

BOOL func_105(ePedComponentType epctParam0) // Position - 0xCC19 (52249)
{
	if (epctParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
			if (Global_2658291[epctParam0 /*468*/].f_325.f_8 != PV_COMP_INVALID)
				return func_106(Global_2658291[epctParam0 /*468*/].f_325.f_8) == 22;

	return false;
}

int func_106(ePedComponentType epctParam0) // Position - 0xCC60 (52320)
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
	
		case 172:
			return 30;
	
		case 173:
			return 31;
	
		case 174:
		case 175:
		case 176:
			return 32;
	
		case 177:
		case 178:
		case 179:
			return 33;
	}

	return -1;
}

void func_107(Vehicle veParam0, int iParam1) // Position - 0xD1B0 (53680)
{
	int num;
	int num2;

	num2 = func_109(iParam1);
	func_108(num2, &num);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
	return;
}

BOOL func_108(int iParam0, var uParam1) // Position - 0xD1D1 (53713)
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

int func_109(int iParam0) // Position - 0xD493 (54419)
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2) // Position - 0xD531 (54577)
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_111() && Global_1576247)
		if (iParam0 == Global_1576248 && iParam1 == Global_1576249 && iParam2 == Global_1576250)
			return 13;

	return 0;
}

BOOL func_111() // Position - 0xD713 (55059)
{
	var gamerHandle;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			gamerHandle = { GET_LOCAL_GAMER_HANDLE() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				return true;
		}
	}

	return false;
}

struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0xD75B (55131)
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	return gamerHandle;
}

BOOL func_113(Vehicle veParam0) // Position - 0xD770 (55152)
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("deathbike2"):
			return true;
	}

	return false;
}

BOOL func_114(int iParam0, var uParam1) // Position - 0xD791 (55185)
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
	
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
	
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
	
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
	
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
	
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

void func_115(Vehicle veParam0, var uParam1) // Position - 0xDA92 (55954)
{
	if (func_62(ENTITY::GET_ENTITY_MODEL(veParam0)))
		if (uParam1->f_9[44] == 2)
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
		else
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);

	if (func_119(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		if (IS_BIT_SET(uParam1->f_103, 0) || func_118(ENTITY::GET_ENTITY_MODEL(veParam0)))
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
			func_117(veParam0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
			func_116(veParam0);
		}
	}

	return;
}

void func_116(Vehicle veParam0) // Position - 0xDB0B (56075)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_REMOVE(veParam0, "MLJ");

	return;
}

void func_117(Vehicle veParam0) // Position - 0xDB40 (56128)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MLJ", BOOL))
			if (!DECORATOR::DECOR_EXIST_ON(veParam0, "MLJ"))
				DECORATOR::DECOR_SET_BOOL(veParam0, "MLJ", true);

	return;
}

BOOL func_118(Hash hParam0) // Position - 0xDB77 (56183)
{
	switch (hParam0)
	{
		case 1484920335:
		case 471399650:
			return true;
	}

	return false;
}

BOOL func_119(Hash hParam0) // Position - 0xDB9A (56218)
{
	if (!Global_80280 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	switch (hParam0)
	{
		case joaat("feltzer3"):
			return IS_BIT_SET(*Global_262145.f_36224, 0);
	
		case joaat("comet5"):
			return IS_BIT_SET(*Global_262145.f_36224, 1);
	
		case joaat("bati2"):
			return IS_BIT_SET(*Global_262145.f_36224, 2);
	
		case joaat("stingergt"):
			return IS_BIT_SET(*Global_262145.f_36224, 3);
	
		case joaat("sanchez"):
			return IS_BIT_SET(*Global_262145.f_36224, 4);
	
		case joaat("sanchez2"):
			return IS_BIT_SET(*Global_262145.f_36224, 5);
	
		case joaat("infernus"):
			return IS_BIT_SET(*Global_262145.f_36224, 6);
	
		case joaat("cog55"):
			return IS_BIT_SET(*Global_262145.f_36224, 7);
	
		case joaat("ninef"):
			return IS_BIT_SET(*Global_262145.f_36224, 8);
	
		case joaat("ninef2"):
			return IS_BIT_SET(*Global_262145.f_36224, 9);
	
		case joaat("cheburek"):
		case -1466692365:
			return IS_BIT_SET(*Global_262145.f_36224, 10);
	
		case joaat("savestra"):
			return IS_BIT_SET(*Global_262145.f_36224, 11);
	
		case joaat("xa21"):
			return IS_BIT_SET(*Global_262145.f_36224, 12);
	
		case joaat("s80"):
			return IS_BIT_SET(*Global_262145.f_36224, 13);
	
		case joaat("double"):
			return IS_BIT_SET(*Global_262145.f_36224, 14);
	
		case joaat("buffalo2"):
			return IS_BIT_SET(*Global_262145.f_36224, 15);
	
		case joaat("ztype"):
			return IS_BIT_SET(*Global_262145.f_36224, 16);
	
		case joaat("cog552"):
			return IS_BIT_SET(*Global_262145.f_36224, 17);
	
		case joaat("baller5"):
			return IS_BIT_SET(*Global_262145.f_36224, 18);
	
		case joaat("bati"):
			return IS_BIT_SET(*Global_262145.f_36224, 19);
	
		case -1233767450:
			return IS_BIT_SET(*Global_262145.f_36224, 20);
	
		case 1737348074:
			return IS_BIT_SET(*Global_262145.f_36224, 21);
	
		case joaat("weevil2"):
			return IS_BIT_SET(*Global_262145.f_36224, 22);
	
		case joaat("zentorno"):
			return IS_BIT_SET(*Global_262145.f_36224, 23);
	
		case joaat("jester4"):
		case joaat("driftjester"):
			return IS_BIT_SET(*Global_262145.f_36224, 24);
	
		case joaat("le7b"):
			return IS_BIT_SET(*Global_262145.f_36224, 25);
	
		case joaat("dukes2"):
			return IS_BIT_SET(*Global_262145.f_36224, 26);
	
		case -1249788006:
			return IS_BIT_SET(*Global_262145.f_36224, 27);
	
		case -1933242328:
			return IS_BIT_SET(*Global_262145.f_36224, 28);
	
		case joaat("caracara2"):
			return IS_BIT_SET(*Global_262145.f_36224, 29);
	
		case joaat("comet7"):
			return IS_BIT_SET(*Global_262145.f_36224, 30);
	
		case joaat("futo2"):
		case joaat("driftfuto"):
			return IS_BIT_SET(*Global_262145.f_36225, 0);
	
		case joaat("manchez2"):
			return IS_BIT_SET(*Global_262145.f_36225, 1);
	
		case joaat("zombieb"):
			return IS_BIT_SET(*Global_262145.f_36225, 2);
	
		case joaat("shotaro"):
			return IS_BIT_SET(*Global_262145.f_36225, 3);
	
		case -223461503:
			return IS_BIT_SET(*Global_262145.f_36225, 4);
	
		case joaat("Police5"):
			return IS_BIT_SET(*Global_262145.f_36225, 5);
	
		case 1249425552:
			return IS_BIT_SET(*Global_262145.f_36225, 6);
	
		case 1452003510:
			return IS_BIT_SET(*Global_262145.f_36225, 7);
	
		case joaat("rumpo3"):
			return IS_BIT_SET(*Global_262145.f_36225, 8);
	
		case -361348193:
		case joaat("gauntlet4"):
			return IS_BIT_SET(*Global_262145.f_36225, 9);
	
		case joaat("comet6"):
			return IS_BIT_SET(*Global_262145.f_36225, 10);
	
		case joaat("krieger"):
			return IS_BIT_SET(*Global_262145.f_36225, 11);
	
		case joaat("vigero2"):
			return IS_BIT_SET(*Global_262145.f_36225, 12);
	
		case -1948949064:
			return IS_BIT_SET(*Global_262145.f_36225, 13);
	
		case -1321131184:
			return IS_BIT_SET(*Global_262145.f_36225, 14);
	
		case 2042703219:
			return IS_BIT_SET(*Global_262145.f_36225, 15);
	
		case 1891140410:
			return IS_BIT_SET(*Global_262145.f_36225, 16);
	
		case joaat("zorrusso"):
			return IS_BIT_SET(*Global_262145.f_36225, 17);
	
		case joaat("tigon"):
			return IS_BIT_SET(*Global_262145.f_36225, 18);
	
		case joaat("cyclone"):
			return IS_BIT_SET(*Global_262145.f_36225, 19);
	
		case joaat("neo"):
			return IS_BIT_SET(*Global_262145.f_36225, 20);
	
		case joaat("locust"):
			return IS_BIT_SET(*Global_262145.f_36225, 21);
	
		case 1484920335:
			return IS_BIT_SET(*Global_262145.f_36225, 22);
	
		case 457814204:
		case 1992041063:
			return IS_BIT_SET(*Global_262145.f_36225, 23);
	
		case joaat("jb7002"):
			return IS_BIT_SET(*Global_262145.f_36225, 24);
	
		case 127317925:
			return IS_BIT_SET(*Global_262145.f_36225, 25);
	
		case joaat("URANUS"):
			return IS_BIT_SET(*Global_262145.f_36225, 26);
	
		case -973016778:
			return IS_BIT_SET(*Global_262145.f_36225, 27);
	
		case -660007725:
			return IS_BIT_SET(*Global_262145.f_36225, 28);
	
		case 471399650:
			return IS_BIT_SET(*Global_262145.f_36225, 29);
	
		case joaat("hellion"):
			return IS_BIT_SET(*Global_262145.f_36548, 0);
	
		case joaat("schafter4"):
			return IS_BIT_SET(*Global_262145.f_36548, 1);
	
		case joaat("schafter6"):
			return IS_BIT_SET(*Global_262145.f_36548, 2);
	
		case joaat("xls2"):
			return IS_BIT_SET(*Global_262145.f_36548, 3);
	
		case joaat("raiden"):
			return IS_BIT_SET(*Global_262145.f_36548, 4);
	
		case joaat("akuma"):
			return IS_BIT_SET(*Global_262145.f_36548, 5);
	
		case joaat("sheava"):
			return IS_BIT_SET(*Global_262145.f_36548, 6);
	
		case joaat("paragon"):
			return IS_BIT_SET(*Global_262145.f_36548, 7);
	
		case joaat("viseris"):
			return IS_BIT_SET(*Global_262145.f_36548, 8);
	
		case joaat("imorgon"):
			return IS_BIT_SET(*Global_262145.f_36548, 9);
	
		case joaat("pfister811"):
			return IS_BIT_SET(*Global_262145.f_36548, 10);
	
		case joaat("comet2"):
			return IS_BIT_SET(*Global_262145.f_36548, 11);
	
		case joaat("torero"):
			return IS_BIT_SET(*Global_262145.f_36548, 12);
	
		case joaat("tyrus"):
			return IS_BIT_SET(*Global_262145.f_36548, 13);
	
		case joaat("hakuchou"):
			return IS_BIT_SET(*Global_262145.f_36548, 14);
	
		case joaat("sc1"):
			return IS_BIT_SET(*Global_262145.f_36548, 15);
	
		case joaat("stanier"):
			return IS_BIT_SET(*Global_262145.f_36548, 16);
	
		case joaat("zion3"):
			return IS_BIT_SET(*Global_262145.f_36548, 17);
	
		case joaat("cognoscenti2"):
			return IS_BIT_SET(*Global_262145.f_36548, 18);
	
		case joaat("deviant"):
			return IS_BIT_SET(*Global_262145.f_36548, 19);
	
		case joaat("contender"):
			return IS_BIT_SET(*Global_262145.f_36548, 20);
	
		case joaat("revolter"):
			return IS_BIT_SET(*Global_262145.f_36548, 21);
	
		case joaat("gp1"):
			return IS_BIT_SET(*Global_262145.f_36548, 22);
	
		case joaat("hermes"):
			return IS_BIT_SET(*Global_262145.f_36548, 23);
	
		case joaat("swinger"):
			return IS_BIT_SET(*Global_262145.f_36548, 24);
	
		case joaat("police4"):
			return IS_BIT_SET(*Global_262145.f_36548, 25);
	
		case -773802025:
			return IS_BIT_SET(*Global_262145.f_36548, 26);
	
		case -1628000569:
			return IS_BIT_SET(*Global_262145.f_36548, 27);
	
		case joaat("jugular"):
			return IS_BIT_SET(*Global_262145.f_36548, 28);
	
		case joaat("tenf"):
			return IS_BIT_SET(*Global_262145.f_36548, 29);
	
		case joaat("tenf2"):
			return IS_BIT_SET(*Global_262145.f_36548, 30);
	
		case joaat("baller6"):
			return IS_BIT_SET(*Global_262145.f_36549, 0);
	
		case joaat("deveste"):
			return IS_BIT_SET(*Global_262145.f_36549, 1);
	
		case joaat("torero2"):
			return IS_BIT_SET(*Global_262145.f_36549, 2);
	
		case 1748565021:
			return IS_BIT_SET(*Global_262145.f_36549, 3);
	
		case joaat("hakuchou2"):
			return IS_BIT_SET(*Global_262145.f_36549, 4);
	
		case joaat("calico"):
			return IS_BIT_SET(*Global_262145.f_36549, 5);
	
		case joaat("dominator8"):
			return IS_BIT_SET(*Global_262145.f_36549, 6);
	
		case joaat("dominator7"):
			return IS_BIT_SET(*Global_262145.f_36549, 7);
	
		case joaat("euros"):
			return IS_BIT_SET(*Global_262145.f_36549, 8);
	
		case joaat("vstr"):
			return IS_BIT_SET(*Global_262145.f_36549, 9);
	
		case joaat("dominator"):
			return IS_BIT_SET(*Global_262145.f_36549, 10);
	
		case joaat("reever"):
			return IS_BIT_SET(*Global_262145.f_36549, 11);
	
		case joaat("remus"):
			return IS_BIT_SET(*Global_262145.f_36549, 12);
	
		case -178442374:
			return IS_BIT_SET(*Global_262145.f_36549, 13);
	
		case joaat("dubsta3"):
			return IS_BIT_SET(*Global_262145.f_36549, 14);
	
		case joaat("shinobi"):
			return IS_BIT_SET(*Global_262145.f_36549, 15);
	
		case joaat("kuruma"):
			return IS_BIT_SET(*Global_262145.f_36549, 16);
	
		case joaat("cognoscenti"):
			return IS_BIT_SET(*Global_262145.f_36549, 17);
	
		case joaat("xls"):
			return IS_BIT_SET(*Global_262145.f_36549, 18);
	
		case 554408685:
			return IS_BIT_SET(*Global_262145.f_36549, 19);
	
		case 1966698497:
			return IS_BIT_SET(*Global_262145.f_36549, 20);
	
		case -1508420500:
			return IS_BIT_SET(*Global_262145.f_36549, 21);
	
		case joaat("POLICEB2"):
			return IS_BIT_SET(*Global_262145.f_36549, 22);
	
		case joaat("Minimus"):
			return IS_BIT_SET(*Global_262145.f_36549, 23);
	
		case -1585673997:
			return IS_BIT_SET(*Global_262145.f_36549, 24);
	
		case 691148275:
			return IS_BIT_SET(*Global_262145.f_36549, 25);
	
		case -1982433631:
			return IS_BIT_SET(*Global_262145.f_36549, 26);
	
		case 687627128:
			return IS_BIT_SET(*Global_262145.f_36549, 27);
	
		case 1761301369:
			return IS_BIT_SET(*Global_262145.f_36549, 28);
	
		case -401558446:
		case joaat("HARDY"):
			return IS_BIT_SET(*Global_262145.f_36549, 29);
	
		case joaat("conada"):
			return IS_BIT_SET(*Global_262145.f_37036, 0);
	
		case joaat("alphaz1"):
			return IS_BIT_SET(*Global_262145.f_37036, 1);
	
		case joaat("cargobob5"):
			return IS_BIT_SET(*Global_262145.f_37036, 2);
	
		case joaat("howard"):
			return IS_BIT_SET(*Global_262145.f_37036, 3);
	
		case joaat("cargobob"):
			return IS_BIT_SET(*Global_262145.f_37036, 4);
	
		case joaat("cargobob2"):
			return IS_BIT_SET(*Global_262145.f_37036, 5);
	
		case joaat("swift2"):
			return IS_BIT_SET(*Global_262145.f_37036, 6);
	
		case joaat("dodo"):
			return IS_BIT_SET(*Global_262145.f_37036, 7);
	
		case joaat("volatus"):
			return IS_BIT_SET(*Global_262145.f_37036, 8);
	
		case joaat("maverick"):
			return IS_BIT_SET(*Global_262145.f_37036, 9);
	
		case joaat("supervolito"):
			return IS_BIT_SET(*Global_262145.f_37036, 10);
	
		case joaat("supervolito2"):
			return IS_BIT_SET(*Global_262145.f_37036, 11);
	
		case joaat("luxor2"):
			return IS_BIT_SET(*Global_262145.f_37036, 12);
	
		case joaat("luxor"):
			return IS_BIT_SET(*Global_262145.f_37036, 13);
	
		case joaat("besra"):
			return IS_BIT_SET(*Global_262145.f_37036, 14);
	
		case joaat("futo"):
			return IS_BIT_SET(*Global_262145.f_37036, 15);
	
		case joaat("schafter3"):
			return IS_BIT_SET(*Global_262145.f_37036, 16);
	
		case joaat("schafter5"):
			return IS_BIT_SET(*Global_262145.f_37036, 17);
	
		case joaat("ignus"):
			return IS_BIT_SET(*Global_262145.f_37036, 18);
	
		case joaat("manchez"):
			return IS_BIT_SET(*Global_262145.f_37036, 19);
	
		case joaat("bf400"):
			return IS_BIT_SET(*Global_262145.f_37036, 20);
	
		case joaat("baller4"):
			return IS_BIT_SET(*Global_262145.f_37036, 21);
	
		case joaat("ardent"):
			return IS_BIT_SET(*Global_262145.f_37036, 22);
	
		case joaat("elegy2"):
			return IS_BIT_SET(*Global_262145.f_37036, 23);
	
		case joaat("vortex"):
			return IS_BIT_SET(*Global_262145.f_37036, 24);
	
		case joaat("komoda"):
			return IS_BIT_SET(*Global_262145.f_37036, 25);
	
		case 1968807591:
			return IS_BIT_SET(*Global_262145.f_37036, 26);
	
		case -1029730482:
			return IS_BIT_SET(*Global_262145.f_37036, 27);
	
		case joaat("btype"):
			return IS_BIT_SET(*Global_262145.f_37036, 28);
	
		case joaat("btype3"):
			return IS_BIT_SET(*Global_262145.f_37036, 29);
	
		case joaat("mesa3"):
			return IS_BIT_SET(*Global_262145.f_37036, 30);
	
		case joaat("raptor"):
			return IS_BIT_SET(*Global_262145.f_37037, 0);
	
		case joaat("gauntlet"):
			return IS_BIT_SET(*Global_262145.f_37037, 1);
	
		case joaat("bodhi2"):
			return IS_BIT_SET(*Global_262145.f_37037, 2);
	
		case joaat("brawler"):
			return IS_BIT_SET(*Global_262145.f_37037, 3);
	
		case joaat("massacro"):
			return IS_BIT_SET(*Global_262145.f_37037, 4);
	
		case joaat("massacro2"):
			return IS_BIT_SET(*Global_262145.f_37037, 5);
	
		case joaat("cheetah"):
			return IS_BIT_SET(*Global_262145.f_37037, 6);
	
		case joaat("hexer"):
			return IS_BIT_SET(*Global_262145.f_37037, 7);
	
		case joaat("vacca"):
			return IS_BIT_SET(*Global_262145.f_37037, 8);
	
		case joaat("patriot"):
			return IS_BIT_SET(*Global_262145.f_37037, 9);
	
		case joaat("blazer"):
			return IS_BIT_SET(*Global_262145.f_37037, 10);
	
		case joaat("bullet"):
			return IS_BIT_SET(*Global_262145.f_37037, 11);
	
		case joaat("fmj"):
			return IS_BIT_SET(*Global_262145.f_37037, 12);
	
		case joaat("peyote2"):
			return IS_BIT_SET(*Global_262145.f_37037, 13);
	
		case joaat("bagger"):
			return IS_BIT_SET(*Global_262145.f_37037, 14);
	
		case joaat("issi2"):
			return IS_BIT_SET(*Global_262145.f_37037, 15);
	
		case joaat("issi7"):
			return IS_BIT_SET(*Global_262145.f_37037, 16);
	
		case joaat("sentinel2"):
			return IS_BIT_SET(*Global_262145.f_37037, 17);
	
		case 1881415402:
			return IS_BIT_SET(*Global_262145.f_37037, 18);
	
		case 893780296:
			return IS_BIT_SET(*Global_262145.f_37037, 19);
	
		case 1596736441:
			return IS_BIT_SET(*Global_262145.f_37037, 20);
	
		case 1380582820:
			return IS_BIT_SET(*Global_262145.f_37037, 21);
	
		case -938068410:
			return IS_BIT_SET(*Global_262145.f_37037, 22);
	
		case -1778998583:
			return IS_BIT_SET(*Global_262145.f_37037, 23);
	
		case -358638792:
			return IS_BIT_SET(*Global_262145.f_37037, 24);
	
		case -1555091703:
		case -402415705:
			return IS_BIT_SET(*Global_262145.f_37037, 25);
	
		case 617517171:
			return IS_BIT_SET(*Global_262145.f_37037, 26);
	
		case 287906327:
			return IS_BIT_SET(*Global_262145.f_37037, 27);
	
		case -1007324375:
			return IS_BIT_SET(*Global_262145.f_37037, 28);
	
		default:
		
	}

	return false;
}

void func_120(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEB5F (60255)
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_145(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_144(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_144(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_144(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_144(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_144(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_144(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_144(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_144(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_144(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_144(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_144(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_144(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_144(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_144(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_144(1));
		}
		else if (uParam1->f_66 == -1681653521)
		{
			MISC::SET_BIT(&(uParam1->f_77), func_144(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_144(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_144(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_142(uParam1->f_5) || func_142(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_141(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_140())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_139(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_138(veParam0, uParam1->f_69);
				else
					func_138(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_129(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_144(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("le7b"))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_123() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, func_122(true)))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (!IS_BIT_SET(uParam1->f_77, 22) && func_121(veParam0, 5f))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_121(Vehicle veParam0, float fParam1) // Position - 0xF280 (62080)
{
	float entityCoords;
	var groundZ;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false))
			if (MISC::ABSF(entityCoords.f_2 - groundZ) > fParam1)
				return true;
		else if (entityCoords.f_2 > PATHFIND::GET_APPROX_FLOOR_FOR_POINT(entityCoords, entityCoords.f_1) + fParam1)
			return true;
		else if (entityCoords.f_2 > 300f)
			return true;
	}

	return false;
}

Hash func_122(BOOL bParam0) // Position - 0xF2F1 (62193)
{
	if (bParam0)
		return joaat("avenger3");

	return joaat("avenger");
}

BOOL func_123() // Position - 0xF30B (62219)
{
	if (*Global_4718592.f_121628 == 6 || *Global_4718592.f_121628 == 7 || *Global_4718592.f_121628 == 18 || *Global_4718592.f_121628 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_127(7))
		if (func_125(Global_2673271.f_4.f_16) || func_124(Global_2673271.f_4.f_16))
			return false;

	return true;
}

BOOL func_124(ePedComponentType epctParam0) // Position - 0xF39A (62362)
{
	ePedComponentType type;

	type = epctParam0;

	if (type != PV_COMP_INVALID)
		return Global_1882572[type /*315*/].f_82.f_75 != 0;

	return false;
}

BOOL func_125(ePedComponentType epctParam0) // Position - 0xF3BF (62399)
{
	ePedComponentType type;

	type = epctParam0;

	if (type != PV_COMP_INVALID)
		return func_126(epctParam0, 9);

	return false;
}

BOOL func_126(ePedComponentType epctParam0, int iParam1) // Position - 0xF3DD (62429)
{
	return IS_BIT_SET(Global_1892653[epctParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_127(int iParam0) // Position - 0xF3F5 (62453)
{
	return func_128(&(Global_2673271.f_194), iParam0);
}

BOOL func_128(var uParam0, int iParam1) // Position - 0xF409 (62473)
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_129(var uParam0, var uParam1, var uParam2) // Position - 0xF42C (62508)
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_136(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_134(ENTITY::GET_ENTITY_MODEL(*uParam0)) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_132(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_132(*uParam0, uParam1->[38] - 1), false);

	func_131(uParam0);

	if (func_130(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_130(Vehicle veParam0) // Position - 0xF605 (62981)
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_131(var uParam0) // Position - 0xF6E1 (63201)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_132(Vehicle veParam0, int iParam1) // Position - 0xF738 (63288)
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
				}
				break;
		
			case joaat("faction3"):
				return 3;
		}
	
		value = func_133(veParam0, 38) + 1;
		value2 = func_133(veParam0, 24) + 1;
		num = BUILTIN::TO_FLOAT(iParam1 + 1) / BUILTIN::TO_FLOAT(value);
		num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

ePedComponentType func_133(Vehicle veParam0, int iParam1) // Position - 0xF821 (63521)
{
	ePedComponentType i;

	if (STREAMING::IS_MODEL_VALID(Global_153799) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_153799) && Global_153800 == iParam1)
		return Global_153801;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_136(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_134(Hash hParam0) // Position - 0xF883 (63619)
{
	if (func_135(hParam0, 1))
		return true;

	switch (hParam0)
	{
		case 1891140410:
			return true;
	}

	return false;
}

BOOL func_135(Hash hParam0, int iParam1) // Position - 0xF8AE (63662)
{
	switch (hParam0)
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
			if (!Global_262145.f_14790)
				return false;
			else
				return true;
			break;
	
		case joaat("tornado5"):
			if (!Global_262145.f_14791)
				return false;
			else
				return true;
			break;
	
		case joaat("virgo2"):
			if (!Global_262145.f_14789)
				return false;
			else
				return true;
			break;
	
		case joaat("minivan2"):
			if (!Global_262145.f_14792)
				return false;
			else
				return true;
			break;
	
		case joaat("slamvan3"):
			if (!Global_262145.f_14794)
				return false;
			else
				return true;
			break;
	
		case joaat("faction3"):
			if (!Global_262145.f_14793)
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
			if (Global_262145.f_19037)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("diablous2"):
			if (Global_262145.f_19039)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("fcr2"):
			if (Global_262145.f_19043)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("elegy"):
			if (Global_262145.f_19040)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("nero2"):
			if (Global_262145.f_19047)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("italigtb2"):
			if (Global_262145.f_19045)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("specter2"):
			if (Global_262145.f_19050)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("technical3"):
			if (Global_262145.f_20923)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("insurgent3"):
			if (Global_262145.f_20924)
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

BOOL func_136(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xFC94 (64660)
{
	if (!func_137() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_137() // Position - 0xFCB8 (64696)
{
	return false;
}

void func_138(Vehicle veParam0, int iParam1) // Position - 0xFCC1 (64705)
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("peyote2"))
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_139(int iParam0) // Position - 0xFD39 (64825)
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

BOOL func_140() // Position - 0xFD59 (64857)
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

BOOL func_141(Vehicle veParam0) // Position - 0xFD6A (64874)
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					_int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(_int, 4);
			}
		}
	}

	return false;
}

int func_142(var uParam0) // Position - 0xFDB2 (64946)
{
	if (!func_137() && func_143(uParam0))
		return 1;

	return 0;
}

BOOL func_143(int iParam0) // Position - 0xFDD2 (64978)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

int func_144(int iParam0) // Position - 0xFE25 (65061)
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

BOOL func_145(Vehicle veParam0) // Position - 0xFED5 (65237)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_90(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_89(veParam0) != -1)
				return true;

	return false;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(ePedComponentType epctParam0, int iParam1) // Position - 0xFF5C (65372)
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(epctParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(epctParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(epctParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

BOOL func_147(var uParam0, int iParam1) // Position - 0xFFA9 (65449)
{
	if (iParam1 == 0)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2186.969f, 1133.193f, 29.14f };
		uParam0->f_5 = 104.776f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2165.045f, 1086.494f, 28.037f };
		uParam0->f_5 = 84.029f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2158.909f, 1122.865f, 28.029f };
		uParam0->f_5 = 275.171f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2203.007f, 1125.796f, 29.203f };
		uParam0->f_5 = 104.647f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2178.267f, 1095.497f, 28.097f };
		uParam0->f_5 = 272.49f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2146.942f, 1084.26f, 28.097f };
		uParam0->f_5 = 64.843f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2202.77f, 1084.578f, 29.203f };
		uParam0->f_5 = 264.647f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 7)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2186.986f, 1086.496f, 29.312f };
		uParam0->f_5 = 102.525f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 8)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2177.141f, 1126.924f, 28.199f };
		uParam0->f_5 = 282.22f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 9)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2187.171f, 1123.06f, 29.311f };
		uParam0->f_5 = 98.927f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 10)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2185.955f, 1109.241f, 29.236f };
		uParam0->f_5 = 86.364f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 11)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2164.252f, 1097.661f, 28.131f };
		uParam0->f_5 = 99.416f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 12)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2198.294f, 1148.431f, 29.217f };
		uParam0->f_5 = 94.89f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 13)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2186.849f, 1129.136f, 29.225f };
		uParam0->f_5 = 274.523f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2204.765f, 1116.982f, 29.323f };
		uParam0->f_5 = 309.354f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 15)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2177.001f, 1133.992f, 28.21f };
		uParam0->f_5 = 285.879f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 16)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2145.605f, 1093.173f, 28.217f };
		uParam0->f_5 = 104.282f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 17)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2158.942f, 1094.775f, 28.218f };
		uParam0->f_5 = 254.94f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 18)
	{
		*uParam0 = 2;
		uParam0->f_1 = -465825307;
		uParam0->f_2 = { -2176.339f, 1117.263f, 28.211f };
		uParam0->f_5 = 259.999f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 19)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2201.448f, 1088.407f, 29.227f };
		uParam0->f_5 = 65.053f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 20)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2177.569f, 1107.335f, 28.116f };
		uParam0->f_5 = 122.728f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 21)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2164.509f, 1119.274f, 28.114f };
		uParam0->f_5 = 96.929f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 22)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2177.436f, 1084.843f, 28.132f };
		uParam0->f_5 = 275.551f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2164.164f, 1093.637f, 27.969f };
		uParam0->f_5 = 81.181f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 24)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2164.076f, 1126.173f, 27.967f };
		uParam0->f_5 = 82.019f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 25)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2186.993f, 1089.684f, 29.079f };
		uParam0->f_5 = 78.939f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 26)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2158.688f, 1086.626f, 27.975f };
		uParam0->f_5 = 262.371f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 27)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dukes3");
		uParam0->f_2 = { -2164.622f, 1113.476f, 28.228f };
		uParam0->f_5 = 82.948f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 28)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2185.534f, 1135.436f, 29.771f };
		uParam0->f_5 = 121.266f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 29)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2189.618f, 1133.607f, 29.771f };
		uParam0->f_5 = 248.176f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 30)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2155.376f, 1123.575f, 28.659f };
		uParam0->f_5 = 40.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 31)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2190.006f, 1132.5f, 29.771f };
		uParam0->f_5 = 299.343f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 32)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2202.929f, 1119.595f, 29.771f };
		uParam0->f_5 = 174.043f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 33)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2199.087f, 1084.818f, 29.772f };
		uParam0->f_5 = 40.426f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 34)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2165.921f, 1126.391f, 28.359f };
		uParam0->f_5 = 85.228f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 35)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2067.447f, 984.539f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 36)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2061.541f, 984.165f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 37)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2053.578f, 984.469f, 28.668f };
		uParam0->f_5 = 4.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 38)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -1972.939f, 1237.736f, 28.668f };
		uParam0->f_5 = 192.002f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 39)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2167.451f, 1093.677f, 28.666f };
		uParam0->f_5 = 74.105f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 40)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2189.986f, 1109.881f, 29.771f };
		uParam0->f_5 = 262.922f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 41)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2176.759f, 1105.552f, 28.662f };
		uParam0->f_5 = 291.142f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 42)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_F_Y_CarClub_01");
		uParam0->f_2 = { -2146.979f, 1083.111f, 28.686f };
		uParam0->f_5 = 2.5f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 43)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2186.592f, 1135.125f, 29.771f };
		uParam0->f_5 = 302.826f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 44)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2166.739f, 1076.728f, 28.668f };
		uParam0->f_5 = 195.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 45)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2161.535f, 1078.041f, 28.668f };
		uParam0->f_5 = 190.814f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 46)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2173.829f, 1134.234f, 28.658f };
		uParam0->f_5 = 81.91f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 47)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2173.818f, 1127.106f, 28.659f };
		uParam0->f_5 = 81.708f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 48)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2155.852f, 1124.458f, 28.659f };
		uParam0->f_5 = 204.001f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 49)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2204.262f, 1123.472f, 29.771f };
		uParam0->f_5 = 243.383f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 50)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2203.077f, 1121.944f, 29.771f };
		uParam0->f_5 = 356.754f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 51)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2202.377f, 1123.428f, 29.771f };
		uParam0->f_5 = 108.708f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 52)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2201.697f, 1118.357f, 29.771f };
		uParam0->f_5 = 116.051f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 53)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2173.74f, 1128.388f, 28.659f };
		uParam0->f_5 = 123.225f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 54)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2199.776f, 1085.704f, 29.772f };
		uParam0->f_5 = 230.454f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 55)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2174.801f, 1095.769f, 28.665f };
		uParam0->f_5 = 109.413f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 56)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2188.647f, 1109.457f, 29.771f };
		uParam0->f_5 = 95.778f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 57)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2167.494f, 1113.8f, 28.659f };
		uParam0->f_5 = 276.041f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 58)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2202.1f, 1148.97f, 29.771f };
		uParam0->f_5 = 192.541f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 59)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2201.614f, 1147.849f, 29.771f };
		uParam0->f_5 = 17.325f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 60)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2063.803f, 984.474f, 28.668f };
		uParam0->f_5 = 351.802f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 61)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2062.927f, 984.191f, 28.668f };
		uParam0->f_5 = 357.402f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 62)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2052.328f, 984.154f, 28.668f };
		uParam0->f_5 = 7.602f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 63)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -1962.712f, 1237.788f, 28.668f };
		uParam0->f_5 = 192.001f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 64)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -1971.941f, 1238.135f, 28.668f };
		uParam0->f_5 = 147.341f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 65)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2167.429f, 1096.591f, 28.666f };
		uParam0->f_5 = 279.722f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 66)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2168.691f, 1094.195f, 28.666f };
		uParam0->f_5 = 263.663f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 67)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2175.549f, 1105.981f, 28.662f };
		uParam0->f_5 = 106.49f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 68)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("A_M_Y_CarClub_01");
		uParam0->f_2 = { -2146.711f, 1080.604f, 28.667f };
		uParam0->f_5 = 44.585f;
		uParam0->f_9 = 1;
	}
	else if (iParam1 == 69)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2188.0664f, 1133.2179f, 29.6579f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 70)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2164.229f, 1097.166f, 29.24f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 71)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2187.425f, 1119.407f, 30.001f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 72)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2186.842f, 1086.662f, 30.177f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 73)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2185.955f, 1109.241f, 30.236f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 0;
	}
	else if (iParam1 == 74)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2190.006f, 1132.5f, 35f };
		uParam0->f_5 = 196.052f;
		uParam0->f_9 = 1;
	}

	return *uParam0 != 0;
}

void func_148() // Position - 0x110AA (69802)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) == 0 || Global_1836602 == PV_COMP_HEAD)
		iLocal_18 = 3;

	if (epctLocal_19 != PV_COMP_HEAD)
		iLocal_18 = 3;

	if (epctLocal_19 == PV_COMP_HEAD)
		epctLocal_19 = Global_1836602;

	Global_1836597 = 0;
	iLocal_18 = 1;
	return;
}

