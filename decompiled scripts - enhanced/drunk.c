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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1082130432;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	BOOL bLocal_49 = 0;
	BOOL bLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	char* sLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	BOOL bLocal_64 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = -1082130432;
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
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	iLocal_47 = -1;
	iLocal_48 = -1;
	fLocal_51 = 1.7f;
	fLocal_52 = 0f;
	sLocal_53 = "";
	iLocal_62 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_184();

	uLocal_41 = { uScriptParam_0 };
	func_183();
	func_182();
	func_177(iLocal_47, 0, 0);
	BUILTIN::SETTIMERA(0);
	func_176();
	func_172();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_171(iLocal_47);
		func_170();
		func_168();
		func_161();
		func_177(iLocal_47, 0, 0);
		func_183();
		func_9();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106 (262)
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127 (295)
{
	if (!_IS_FMMC_ACTIVE() && !func_3() && Global_2686094)
		Global_4718592.f_139000 = 0;

	return;
}

BOOL func_3() // Position - 0x155 (341)
{
	return Global_2685153.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x164 (356)
{
	return Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_185 != 0;
}

void func_5() // Position - 0x17B (379)
{
	Global_2685153.f_758 = 1;
	return;
}

BOOL func_6() // Position - 0x18B (395)
{
	return Global_2685153.f_737;
}

BOOL func_7() // Position - 0x19A (410)
{
	return IS_BIT_SET(Global_2685153.f_2, 11);
}

BOOL func_8() // Position - 0x1AB (427)
{
	return IS_BIT_SET(Global_2686095.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE (446)
{
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		func_184();

	if (bLocal_49)
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_184();

	func_160();
	flag = true;

	switch (iLocal_59)
	{
		case 4:
			func_159();
			return;
	
		case 5:
			func_156();
			return;
	
		case 6:
			func_154();
			return;
	
		case 7:
			func_153();
			return;
	
		case 8:
			func_152();
			return;
	
		case 9:
			func_150();
			return;
	
		case 10:
			func_149();
			func_146();
			func_145();
			return;
	
		case 11:
			func_144();
			return;
	
		case 12:
			break;
	
		default:
			flag = false;
			break;
	}

	if (!flag)
		return;

	if (!(iLocal_59 == 12))
		return;

	switch (iLocal_59.f_1)
	{
		case 1:
			if (!func_143())
			{
				func_125();
				func_146();
			}
			break;
	
		case 2:
			func_123();
			break;
	
		case 12:
			func_110();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9 (729)
{
	var unk;
	char* str;
	char* str2;
	int num;

	if (!IS_BIT_SET(Global_1950714.f_3, 27))
		PED::SET_PED_TO_RAGDOLL(uLocal_41.f_1, 3000, 3500, 0, true, true, false);

	Global_1944727 = true;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
	
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			BUILTIN::WAIT(0);
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_109(&unk, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
	
		while (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			BUILTIN::WAIT(0);
		}
	
		if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()))
			func_184();
	
		MISC::CLEAR_BIT(&(Global_1950714.f_3), 27);
		_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 57344, false);
		Global_2635562.f_2982 = 1;
	
		if (IS_BIT_SET(Global_1950714, 15))
			MISC::CLEAR_BIT(&Global_1950714, 15);
	
		if (IS_BIT_SET(Global_1950714.f_2, 6))
			MISC::CLEAR_BIT(&(Global_1950714.f_2), 6);
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			Global_2635562.f_2983 = 1;
		else
			Global_2635562.f_2983 = 0;
	
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	
		if (func_89(true))
			func_76(0);
	
		func_74(true);
		func_184();
	}

	if (bLocal_64)
		func_184();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (func_66() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case CHAR_FRANKLIN:
			if (!func_65(126))
				num = 2;
			else
				num = 3;
			break;
	
		case CHAR_TREVOR:
			if (!func_64(4))
			{
				if (func_65(58))
					num = 4;
			
				if (func_65(59))
					num = 5;
			
				if (num == 7)
					if (!_GET_RANDOM_BOOL())
						num = 4;
					else
						num = 5;
			}
			else
			{
				num = 6;
			}
			break;
	}

	switch (num)
	{
		case 0:
			str = "DWC_MICHAEL_mansion";
			str2 = "SAVEM_Default@";
			str2.f_1 = "M_GetOut_R";
			str2.f_2 = "M_GetOut_R_CAM";
			str2.f_5 = { -814.181f, 181.1f, 75.74f };
			str2.f_8 = { 0f, 0f, 21.1994f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 1:
			str = "DWC_MICHAEL_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "M_GetOut_countryside";
			str2.f_2 = "M_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 2:
			str = "DWC_FRANKLIN_city";
			str2 = "SWITCH@FRANKLIN@BED";
			str2.f_1 = "Sleep_GetUp_RubEyes";
			str2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			str2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			str2.f_8 = { 0f, 0f, -179.653f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 3:
			str = "DWC_FRANKLIN_hills";
			str2 = "SAVEBighouse@";
			str2.f_1 = "F_GetOut_r_bighouse";
			str2.f_2 = "F_GetOut_r_bighouse_CAM";
			str2.f_5 = { -1.049f, 524.283f, 170.064f };
			str2.f_8 = { 0f, 0f, 24f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 4:
			str = "DWC_TREVOR_trailer";
			str2 = "SAVECountryside@";
			str2.f_1 = "T_GetOut_countryside";
			str2.f_2 = "T_GetOut_countryside_CAM";
			str2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 5:
			str = "DWC_TREVOR_beach";
			str2 = "SAVEVeniceB@";
			str2.f_1 = "T_GetOut_r_veniceB";
			str2.f_2 = "T_GetOut_r_veniceB_CAM";
			str2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			str2.f_8 = { 0f, 0f, 36.25f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	
		case 6:
			str = "DWC_TREVOR_stripclub";
			str2 = "SAVECouch@";
			str2.f_1 = "T_GetOut_couch";
			str2.f_2 = "T_GetOut_couch_CAM";
			str2.f_5 = { 94.53f, -1289.86f, 28.27f };
			str2.f_8 = { 0f, 0f, 29.7938f };
			str2.f_4 = joaat("MotionState_Idle");
			break;
	}

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		ENTITY::SET_ENTITY_COORDS(uLocal_41.f_1, str2.f_5, true, false, false, true);

	BUILTIN::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_184();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760 (1888)
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_60769[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60769[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60769[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_60769[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD (1981)
{
	float synchronizedScenePhase;
	int num;
	BOOL flag;
	BOOL pedResetFlag;
	int sceneID;
	Cam cam;
	int flags;
	BOOL flag2;
	BOOL flag3;
	var unk;
	eCharacter character;
	int num2;
	char* str;
	char* str2;
	char* str3;
	int gameTimer;
	float num3;
	float num4;
	BOOL flag4;
	int num5;
	int num6;
	float num7;
	Vector3 finalRenderedCamCoord;
	Vector3 pedBoneCoords;
	float distanceBetweenCoords;
	float angle;
	float heading;
	var finalRenderedCamRot;
	float entityHeading;
	float num8;
	float num9;
	Vector3 finalRenderedCamCoord2;
	Vector3 gameplayCamCoord;
	float distanceBetweenCoords2;
	int num10;
	float angle2;
	float heading2;
	var finalRenderedCamRot2;
	float entityHeading2;
	float num11;
	float num12;
	Vector3 finalRenderedCamCoord3;
	Vector3 gameplayCamCoord2;
	float distanceBetweenCoords3;
	int easeTime;
	BOOL isInterpolatingFromScriptCams;
	BOOL flag5;
	int num13;

	synchronizedScenePhase = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true, false);

	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	BUILTIN::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_58(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	num = MISC::GET_GAME_TIMER() + 20000;
	flag = false;
	uParam1->f_33 = 0;

	while (!flag && num > MISC::GET_GAME_TIMER())
	{
		flag = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
			flag = false;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
				flag = false;
		}
	
		if (!CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_OUT(0);
	
		BUILTIN::WAIT(0);
	}

	func_55();

	if (!func_54(uParam1->f_22, 0f, 0f, 0f, false))
	{
		PATHFIND::SET_ROADS_IN_AREA((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, BUILTIN::VMAG(uParam1->f_22) + 25f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, BUILTIN::VMAG(uParam1->f_22) + 25f, true, false, false, false);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}

	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, true, false, false, false);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	func_52();

	while (func_51())
	{
		BUILTIN::WAIT(0);
	}

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		CAM::DO_SCREEN_FADE_IN(250);

	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		sceneID = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(sceneID, false);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sceneID, false);
		cam = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		flags = 4;
	
		if (uParam1->f_4 != joaat("MotionState_Idle"))
			flags = flags | 2;
	
		func_49(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), sceneID, *uParam1, uParam1->f_1, 1000f, -1.5f, flags, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		pedResetFlag = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(cam, sceneID, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, false, false, false);
	}
	else
	{
		sceneID = -1;
	}

	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			_DISPLAY_HELP_TEXT(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	flag2 = false;
	flag3 = false;
	unk = 16;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		character = _GET_CURRENT_PLAYER_CHARACTER();
		num2 = -1;
		str = "";
	
		switch (character)
		{
			case CHAR_MICHAEL:
				num2 = 0;
				str = "MICHAEL";
				break;
		
			case CHAR_FRANKLIN:
				num2 = 1;
				str = "FRANKLIN";
				break;
		
			case CHAR_TREVOR:
				num2 = 2;
				str = "TREVOR";
				break;
		
			default:
				break;
		}
	
		_CONVERSATION_INITIALIZE_ACTOR(&unk, num2, PLAYER::PLAYER_PED_ID(), str, 0, 1);
	}

	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID))
	{
		str2 = "WalkInterruptible";
		str3 = "ForceBlendout";
	
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!flag3)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, false);
						flag3 = true;
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							flag3 = true;
						}
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							flag3 = true;
						}
					}
				}
			}
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_GAME_STREAM);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_41(0);
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer >= Global_45437 - 500)
				func_40(4000);
		
			num3 = -1f;
			num4 = -1f;
			synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(sceneID);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
				if (!flag2)
					if (synchronizedScenePhase >= uParam1->f_15)
						if (_CONVERSATION_ADD_LINE(&unk, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							flag2 = true;
		
			flag4 = false;
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(str2)))
			{
				num5 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X) - 128;
				num6 = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y) - 128;
			
				if (num5 < 64 && num5 > -64 && num6 < 64 && num6 > -64)
				{
				}
				else
				{
					flag4 = true;
				}
			}
			else
			{
				num3 = -1f;
				num4 = -1f;
				flag4 = false;
				uParam1->f_3 = uParam1->f_3;
				num3 = num3;
				num4 = num4;
			}
		
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON && uParam1->f_52 > 0f)
			{
				if (synchronizedScenePhase >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						num7 = 1.5f;
						finalRenderedCamCoord = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						pedBoneCoords = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord, pedBoneCoords, true);
						num7 = func_21(num7, 0.001f, distanceBetweenCoords - 0.75f);
					
						if (num7 < 0f)
							num7 = 0.001f;
					
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), _GET_CURRENT_PLAYER_CHARACTER(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							finalRenderedCamRot = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							num8 = finalRenderedCamRot.f_2;
							num9 = entityHeading;
							uParam1->f_57 = num8 - num9;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						angle = uParam1->f_56;
						heading = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(angle, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(heading);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(angle);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(heading);
						finalRenderedCamCoord2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						gameplayCamCoord = { CAM::GET_GAMEPLAY_CAM_COORD() };
						distanceBetweenCoords2 = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord2, gameplayCamCoord, true);
						num10 = BUILTIN::ROUND(distanceBetweenCoords2 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(str3)) || flag4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, false);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
							break;
					
						case joaat("MotionState_Walk"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, true, false, 0);
						
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != FIRST_PERSON)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									finalRenderedCamRot2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									entityHeading2 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									num11 = finalRenderedCamRot2.f_2;
									num12 = entityHeading2;
									uParam1->f_31 = num11 - num12;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								angle2 = uParam1->f_30;
								heading2 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(angle2, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(heading2);
								finalRenderedCamCoord3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								gameplayCamCoord2 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								distanceBetweenCoords3 = MISC::GET_DISTANCE_BETWEEN_COORDS(finalRenderedCamCoord3, gameplayCamCoord2, true);
								easeTime = BUILTIN::ROUND(distanceBetweenCoords3 * 1000f);
								CAM::RENDER_SCRIPT_CAMS(false, true, easeTime, false, false, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(sceneID))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(sceneID);
						sceneID = -1;
					}
				}
			}
		
			BUILTIN::WAIT(0);
		}
	}

	if (!func_54(uParam1->f_22, 0f, 0f, 0f, false))
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	isInterpolatingFromScriptCams = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	flag5 = 0;

	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			flag5 = 1;
	}

	if (isInterpolatingFromScriptCams || flag5)
	{
		while (isInterpolatingFromScriptCams || flag5 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			isInterpolatingFromScriptCams;
			flag5;
			num13 = 2;
			func_15(CAMERA_CONTROL, INPUT_LOOK_BEHIND, &num13);
			func_15(CAMERA_CONTROL, INPUT_VEH_LOOK_BEHIND, &num13);
			func_15(CAMERA_CONTROL, INPUT_LOOK_LR, &num13);
			func_15(CAMERA_CONTROL, INPUT_LOOK_UD, &num13);
			func_15(PLAYER_CONTROL, INPUT_JUMP, &num13);
			func_15(PLAYER_CONTROL, INPUT_DUCK, &num13);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_ALTERNATE, &num13);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, &num13);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, &num13);
			func_15(PLAYER_CONTROL, INPUT_REPLAY_FFWD, &num13);
			func_15(PLAYER_CONTROL, INPUT_REPLAY_NEWMARKER, &num13);
			BUILTIN::WAIT(0);
			isInterpolatingFromScriptCams = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			flag5 = false;
		
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					flag5 = true;
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);

	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(cam, false);
	func_13(&(uParam1->f_34));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, pedResetFlag);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11FC (4604)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1217 (4631)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
		CAM::DESTROY_CAM(uParam0->f_1, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
		CAM::DESTROY_CAM(uParam0->f_2, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
		CAM::DESTROY_CAM(uParam0->f_3, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		CAM::DESTROY_CAM(uParam0->f_4, false);

	return;
}

void func_15(eControlType ectParam0, eControlAction ecaParam1, var uParam2) // Position - 0x126F (4719)
{
	PAD::DISABLE_CONTROL_ACTION(ectParam0, ecaParam1, true);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1288 (4744)
{
	Vector3 finalRenderedCamCoord;
	Vector3 offsetFromEntityGivenWorldCoords;
	Vector3 finalRenderedCamRot;
	float value;
	float value2;
	var unk11;
	var unk14;
	float finalRenderedCamFov;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false))
			{
				func_14(uParam0);
				finalRenderedCamCoord = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			
				if (bParam1)
					finalRenderedCamCoord = { finalRenderedCamCoord + (ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * F2V(MISC::GET_FRAME_TIME())) };
			
				offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, finalRenderedCamCoord) };
				finalRenderedCamRot = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				value = { finalRenderedCamRot + uParam0->f_9 };
				value2 = { value - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				unk11 = { -BUILTIN::SIN(value.f_2) * BUILTIN::COS(value), BUILTIN::COS(value.f_2) * BUILTIN::COS(value), BUILTIN::SIN(value) };
				unk14 = { -BUILTIN::SIN(value2.f_2) * BUILTIN::COS(value2), BUILTIN::COS(value2.f_2) * BUILTIN::COS(value2), BUILTIN::SIN(value2) };
				finalRenderedCamFov = CAM::GET_FINAL_RENDERED_CAM_FOV();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = CAM::CREATE_CAMERA(joaat("TIMED_SPLINE_CAMERA"), false);
			
				uParam0->f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			
				if (bParam1)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, offsetFromEntityGivenWorldCoords, true);
				else
					CAM::SET_CAM_COORD(uParam0->f_1, finalRenderedCamCoord);
			
				CAM::SET_CAM_ROT(uParam0->f_1, finalRenderedCamRot, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, finalRenderedCamFov);
				uParam0->f_2 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			
				if (bParam1 && !bParam4)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, offsetFromEntityGivenWorldCoords + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), true);
				else
					CAM::SET_CAM_COORD(uParam0->f_2, finalRenderedCamCoord + (unk11 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				CAM::SET_CAM_ROT(uParam0->f_2, finalRenderedCamRot, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, finalRenderedCamFov);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				
					if (bParam1 && !bParam4)
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, offsetFromEntityGivenWorldCoords + (unk14 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), true);
					else
						CAM::SET_CAM_COORD(uParam0->f_4, finalRenderedCamCoord + (unk11 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					CAM::SET_CAM_ROT(uParam0->f_4, finalRenderedCamRot, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, finalRenderedCamFov);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, false);
									break;
							
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, false);
									break;
							
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						}
					
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x162B (5675)
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
	return;
}

void func_18() // Position - 0x163B (5691)
{
	Global_24407.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1649 (5705)
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, Ped pedParam1, eCharacter echParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x165B (5723)
{
	uParam0->f_5 = pedParam1;
	uParam0->f_6 = echParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
	return;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1693 (5779)
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16BA (5818)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23007 = false;
	Global_23009 = false;
	Global_23014 = false;
	Global_23991 = 0;
	Global_23993 = false;
	Global_23997 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1708 (5896)
{
	Global_23001 = 0;

	if (Global_23000 == 0 || Global_23002 == 2)
	{
		if (Global_23000 != 0)
		{
			if (iParam1 > Global_23002)
			{
				if (Global_23007 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21627.f_1 = 3;
					Global_23000 = 0;
					Global_23001 = 1;
					Global_23053 = false;
					Global_22996 = 0;
					Global_22997 = 0;
					Global_23011 = false;
					Global_23010 = false;
					Global_21626 = 0;
				}
				else
				{
					func_38();
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
	
		if (func_37(8, -1))
			return 0;
	
		Global_23076 = { Global_23070 };
		func_36();
		Global_22289 = { Global_22454 };
		Global_23006 = Global_23007;
		Global_23013 = Global_23014;
		Global_2883586 = Global_2883585;
		Global_23015 = { Global_23031 };
		Global_23008 = Global_23009;
		Global_23990 = Global_23991;
		Global_23998 = { Global_24004 };
		Global_23992 = Global_23993;
		Global_23994 = Global_23995;
		Global_23996 = Global_23997;
		Global_22619.f_370 = Global_23989;
		Global_22619.f_368 = Global_23987;
		Global_22619.f_369 = Global_23988;
		Global_22996 = Global_22997;
	
		if (Global_23006)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21627.f_1 > 3)
					return 0;
			}
		
			if (Global_21593 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_33())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80305)
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
		
			if (func_32())
			{
				return 0;
			}
			else
			{
				switch (Global_21627.f_1)
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
			
				if (IS_BIT_SET(Global_9463, 9))
					return 0;
			}
		
			func_31();
			Global_23010 = bParam2;
		}
	
		Global_23002 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22619, sParam0, 24);
		Global_21866 = 0;
		func_30();
		func_24();
		return 1;
	}

	if (Global_23000 == 5)
		return 0;

	if (iParam1 < Global_23002 || iParam1 == Global_23002)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_38();
	}

	return 0;
}

void func_24() // Position - 0x19D6 (6614)
{
	if (!func_25())
		return;

	if (Global_23006)
	{
		TEXT_LABEL_COPY(&(Global_1979846.f_1), { Global_22619 }, 4);
		Global_1979846 = Global_8778;
		Global_1979846.f_6 = Global_23010;
	}

	return;
}

BOOL func_25() // Position - 0x1A0D (6669)
{
	if (!Global_262145.f_28523)
		return false;

	if (!Global_80305)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_26(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_26(Player plParam0) // Position - 0x1A70 (6768)
{
	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (func_28(8))
			return true;
	
		if (Global_2733138.f_6061.f_1 > 0)
			return true;
	}

	return func_27(plParam0, 20);
}

BOOL func_27(Player plParam0, int iParam1) // Position - 0x1AA7 (6823)
{
	return IS_BIT_SET(Global_1892798[plParam0 /*615*/].f_10.f_4, iParam1);
}

BOOL func_28(int iParam0) // Position - 0x1ABF (6847)
{
	return IS_BIT_SET(Global_2733138.f_6050, iParam0);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1AD1 (6865)
{
	return -1;
}

void func_30() // Position - 0x1ADA (6874)
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21868[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23000 = 1;
	return;
}

void func_31() // Position - 0x1B0A (6922)
{
	Global_23053 = Global_23052;
	Global_23047 = Global_23048;
	Global_23094 = { Global_23082 };
	Global_23100 = { Global_23088 };
	Global_23055 = Global_23054;
	Global_23124 = { Global_23106 };
	Global_23130 = { Global_23112 };
	Global_23136 = { Global_23118 };
	Global_23142 = { Global_23148 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_23011 = Global_23012;
	Global_23013 = Global_23014;
	Global_23015 = { Global_23031 };
	Global_23004 = Global_23005;
	Global_24016 = false;
	Global_23049 = 0;
	Global_23050 = false;
	MISC::CLEAR_BIT(&Global_9464, 16);
	return;
}

BOOL func_32() // Position - 0x1B9F (7071)
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

BOOL func_33() // Position - 0x1BC6 (7110)
{
	int num;
	int weaponHash;

	if (Global_80305)
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1C5F (7263)
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[0 /*29*/])
				Global_21627 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[1 /*29*/])
				Global_21627 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[2 /*29*/])
				Global_21627 = CHAR_TREVOR;
			else
				Global_21627 = CHAR_MICHAEL;
	}
	else
	{
		Global_21627 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_21627 == _CHAR_NULL)
			Global_21627 = CHAR_MULTIPLAYER;
	
		if (Global_80305)
			Global_21627 = CHAR_MULTIPLAYER;
	
		if (Global_21627 > CHAR_MULTIPLAYER)
			Global_21627 = CHAR_MULTIPLAYER;
	}

	return;
}

BOOL func_35(int iParam0) // Position - 0x1D01 (7425)
{
	return Global_44886 == iParam0;
}

void func_36() // Position - 0x1D0F (7439)
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_22289[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22289[i /*10*/].f_1), "", 24);
		Global_22289[i /*10*/].f_7 = 0;
		Global_22289[i /*10*/].f_8 = 0;
	}

	Global_22289.f_161 = -99;
	Global_22289.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x1D65 (7525)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

void func_38() // Position - 0x1D9D (7581)
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24011 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21627.f_1 == 9 || Global_21626 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23000 = 6;
		Global_21627.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23000 = 6;
		return;
	}

	return;
}

void func_39(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DF4 (7668)
{
	Global_22454 = { *uParam0 };
	Global_8779 = echParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23070, sParam2, 24);
	Global_23989 = iParam5;

	if (iParam3 == 0)
	{
		Global_23987 = 1;
		Global_23985 = 0;
	}
	else
	{
		Global_23987 = 0;
		Global_23985 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23988 = 1;
		Global_23986 = 0;
	}
	else
	{
		Global_23988 = 0;
		Global_23986 = 1;
	}

	return;
}

void func_40(int iParam0) // Position - 0x1E4A (7754)
{
	Global_45437 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_41(int iParam0) // Position - 0x1E5C (7772)
{
	if (func_46())
		return;

	if (!(Global_21627.f_1 == 1))
	{
		if (func_45(0))
			func_42(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}

	return;
}

void func_42(int iParam0) // Position - 0x1E8F (7823)
{
	if (func_46())
		return;

	if (Global_21859)
		if (func_44())
			func_43(true, true);
		else
			func_43(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_32())
		Global_21627.f_1 = 3;

	return;
}

void func_43(BOOL bParam0, BOOL bParam1) // Position - 0x1F19 (7961)
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_21859 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21564);
		
			Global_21555 = { Global_21573[Global_21572 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
		}
	}
	else if (Global_21859 == true)
	{
		Global_21859 = false;
		Global_21555 = { Global_21580[Global_21572 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21564);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
	}

	return;
}

BOOL func_44() // Position - 0x1F8D (8077)
{
	return IS_BIT_SET(Global_1964705, 5);
}

BOOL func_45(int iParam0) // Position - 0x1F9B (8091)
{
	if (iParam0 == 1)
		if (Global_21627.f_1 > 3)
			if (IS_BIT_SET(Global_9463, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21627.f_1 > 3)
		return true;

	return false;
}

BOOL func_46() // Position - 0x1FF2 (8178)
{
	return IS_BIT_SET(Global_1964705, 19);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x2001 (8193)
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80305)
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

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x209C (8348)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_49(Ped pedParam0, int iParam1) // Position - 0x20B3 (8371)
{
	if (func_50(iParam1, 1))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_0", 0f, 1f);

	if (func_50(iParam1, 2))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_1", 0f, 1f);

	if (func_50(iParam1, 4))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_2", 0f, 1f);

	if (func_50(iParam1, 8))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_3", 0f, 1f);

	if (func_50(iParam1, 16))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_4", 0f, 1f);

	if (func_50(iParam1, 32))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_5", 0f, 1f);

	if (func_50(iParam1, 64))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_6", 0f, 1f);

	if (func_50(iParam1, 128))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_7", 0f, 1f);

	if (func_50(iParam1, 256))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_8", 0f, 1f);

	if (func_50(iParam1, 512))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_9", 0f, 1f);

	func_50(iParam1, 0);
	return;
}

BOOL func_50(int iParam0, int iParam1) // Position - 0x21AA (8618)
{
	return iParam0 && iParam1 != false;
}

BOOL func_51() // Position - 0x21B9 (8633)
{
	if (Global_102454 == 13 || Global_102454 == 10 || Global_102454 == 11 || Global_102454 == 12)
		return false;

	return true;
}

void func_52() // Position - 0x21F7 (8695)
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_99362[i /*17*/] && !Global_99362[i /*17*/].f_1)
			if (Global_99362[i /*17*/].f_3 == 0)
				if (Global_99362[i /*17*/].f_5 != 88 && Global_99362[i /*17*/].f_5 != 89 && Global_99362[i /*17*/].f_5 != 92)
					func_53(Global_99362[i /*17*/].f_5, true);
	}

	return;
}

void func_53(int iParam0, BOOL bParam1) // Position - 0x227E (8830)
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_96414[iParam0 /*2*/] = true;
	else
		Global_96414[iParam0 /*2*/] = false;

	return;
}

BOOL func_54(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x22BC (8892)
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_55() // Position - 0x2303 (8963)
{
	func_56();
	func_74(true);
	return;
}

void func_56() // Position - 0x2314 (8980)
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_45897[i /*5*/];
	
		if (!(num == -1))
			func_177(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_45866[j /*6*/] == 0)
			func_57(j);
	}

	return;
}

void func_57(int iParam0) // Position - 0x2374 (9076)
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45866[iParam0 /*6*/].f_1 == 0))
		if (Global_45866[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_46109 = 0;

	Global_45866[iParam0 /*6*/] = 13;
	Global_45866[iParam0 /*6*/].f_1 = 0;
	Global_45866[iParam0 /*6*/].f_2 = 0;
	Global_45866[iParam0 /*6*/].f_3 = 0;
	Global_45866[iParam0 /*6*/].f_4 = 0;
	Global_45864 = Global_45864 - 1;

	if (Global_45864 < 0)
		Global_45864 = 0;

	return;
}

int func_58(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x23F7 (9207)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_62(0);
		MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
	
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		BUILTIN::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_61();
		func_60();
		BUILTIN::SETTIMERA(0);
		func_62(1);
	
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				BUILTIN::WAIT(0);
			
				if (BUILTIN::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
	
		BUILTIN::SETTIMERA(0);
	
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			BUILTIN::WAIT(0);
		
			if (BUILTIN::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				return 0;
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				MISC::SET_GAME_PAUSED(false);
				BUILTIN::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
			
				if (iParam5 == 1)
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				else
					BUILTIN::SETTIMERA(5000);
			
				MISC::POPULATE_NOW();
			}
		}
	
		while (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !func_59() && BUILTIN::TIMERA() < 1500)
		{
			BUILTIN::WAIT(0);
		}
	
		if (BUILTIN::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), false, false);
			MISC::CLEAR_AREA(vParam0, 5f, true, false, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
			}
		}
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_62(0);
		return 1;
	}

	func_62(0);
	return 0;
}

BOOL func_59() // Position - 0x2616 (9750)
{
	return !Global_79095.f_553;
}

void func_60() // Position - 0x2626 (9766)
{
	Global_79095.f_553 = 1;
	Global_79095.f_554 = 0;
	return;
}

void func_61() // Position - 0x263E (9790)
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_79095[i] = 0;
	}

	return;
}

void func_62(int iParam0) // Position - 0x2662 (9826)
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_102454.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_102454.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_102454.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_102454.f_20), 2);
		}
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x26B3 (9907)
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_64(int iParam0) // Position - 0x26D1 (9937)
{
	return IS_BIT_SET(Global_114931.f_7236[iParam0], 0);
}

BOOL func_65(int iParam0) // Position - 0x26E6 (9958)
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

int func_66() // Position - 0x2713 (10003)
{
	if (Global_41824[11] == 1)
		return 4;

	if (!func_67(21))
		return 0;

	if (!func_65(130))
		return 1;

	if (!func_65(131))
		return 2;

	if (!func_67(22))
		return 1;

	if (!func_67(49))
		return 3;

	if (!func_67(28))
		return 1;

	return 3;
}

BOOL func_67(int iParam0) // Position - 0x2791 (10129)
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x27BD (10173)
{
	func_69();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_69() // Position - 0x27D6 (10198)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_70(character) && !func_35(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != character && func_70(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = character;
				Global_114931.f_2370.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != _CHAR_NULL)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
	return;
}

BOOL func_70(eCharacter echParam0) // Position - 0x28D3 (10451)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x28DF (10463)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x291C (10524)
{
	if (func_70(character))
		return func_73(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_73(eCharacter echParam0) // Position - 0x2941 (10561)
{
	return Global_2339[echParam0 /*29*/];
}

void func_74(BOOL bParam0) // Position - 0x2950 (10576)
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_46089))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_46089))
			AUDIO::STOP_AUDIO_SCENE(&Global_46089);

	if (CAM::DOES_CAM_EXIST(Global_46077))
	{
		if (CAM::IS_CAM_SHAKING(Global_46077))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_46077, 0f);
			CAM::STOP_CAM_SHAKING(Global_46077, true);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_46089, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_46105, "", 16);
	func_75();
	return;
}

void func_75() // Position - 0x2A29 (10793)
{
	Global_46076 = false;
	Global_46077 = 0;
	Global_46078 = 0;
	Global_46079 = 30000;
	Global_46080 = 0f;
	Global_46082 = 0f;
	Global_46081 = 0f;
	Global_46083 = 1f;
	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
	return;
}

void func_76(int iParam0) // Position - 0x2A5E (10846)
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18102;
			break;
	
		case 1:
			num = Global_262145.f_18092;
			break;
	
		case 2:
			num = Global_262145.f_18103;
			break;
	
		case 3:
			num = Global_262145.f_18095;
			break;
	
		case 4:
			num = Global_262145.f_18091;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18106;
			break;
	
		case 8:
			num = Global_262145.f_18107;
			break;
	
		case 9:
			num = Global_262145.f_18110;
			break;
	
		case 22:
			num = Global_262145.f_18111;
			break;
	
		case 23:
			num = Global_262145.f_18104;
			break;
	
		case 25:
			num = Global_262145.f_18956;
			break;
	
		case 26:
			num = Global_262145.f_18955;
			break;
	}

	if (num != 0)
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_87(_GET_BOSS_OF_LOCAL_PLAYER()), func_86(_GET_BOSS_OF_LOCAL_PLAYER()), func_85(), func_84(), iParam0, num);

	func_83(num);
	func_77(num);
	return;
}

void func_77(int iParam0) // Position - 0x2B83 (11139)
{
	int num;

	num = func_82(3971, -1);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10.f_473 = num;
	func_78(3971, num, -1, true);
	return;
}

void func_78(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2BCF (11215)
{
	Hash statName;

	if (iParam0 != 18486)
	{
		statName = func_79(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_79(int iParam0, int iParam1) // Position - 0x2BFD (11261)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_80(iParam1));
}

int func_80(int iParam0) // Position - 0x2C12 (11282)
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_81();
	
		if (num2 > -1)
		{
			Global_2741524 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2741524 = 1;
		}
	}

	return num;
}

int func_81() // Position - 0x2C46 (11334)
{
	return Global_1574927;
}

int func_82(int iParam0, int iParam1) // Position - 0x2C52 (11346)
{
	Hash statHash;
	int outValue;

	if (iParam0 != 18486)
	{
		statHash = func_79(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_83(int iParam0) // Position - 0x2C81 (11393)
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1892798[player /*615*/].f_10.f_472 = Global_1892798[player /*615*/].f_10.f_472 + iParam0;

	if (Global_1892798[player /*615*/].f_10.f_472 < -9999)
		Global_1892798[player /*615*/].f_10.f_472 = 9999;
	else if (Global_1892798[player /*615*/].f_10.f_472 > 9999)
		Global_1892798[player /*615*/].f_10.f_472 = 9999;

	return;
}

int func_84() // Position - 0x2CFB (11515)
{
	if (Global_1948263.f_3 != 0)
		return Global_1948263.f_3;

	return -1;
}

int func_85() // Position - 0x2D17 (11543)
{
	if (Global_1948263.f_2 != 0)
		return Global_1948263.f_2;

	return -1;
}

int func_86(Player plParam0) // Position - 0x2D33 (11571)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1892798[plParam0 /*615*/].f_10.f_9[1];
}

int func_87(Player plParam0) // Position - 0x2D58 (11608)
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1892798[plParam0 /*615*/].f_10.f_9[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x2D7D (11645)
{
	return Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10;
}

BOOL func_89(BOOL bParam0) // Position - 0x2D92 (11666)
{
	return func_90(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_90(Player plParam0, BOOL bParam1) // Position - 0x2DA4 (11684)
{
	return func_91(plParam0, bParam1, 1);
}

int func_91(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2DB5 (11701)
{
	Player player;

	if (!func_93(plParam0))
		return 0;

	if (!bParam1)
		if (func_92(plParam0, iParam2))
			return 0;

	player = Global_1892798[plParam0 /*615*/].f_10;

	if (func_93(player) && Global_1892798[player /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

BOOL func_92(Player plParam0, int iParam1) // Position - 0x2E11 (11793)
{
	if (func_93(plParam0))
		if (func_93(Global_1892798[plParam0 /*615*/].f_10))
			if (Global_1892798[plParam0 /*615*/].f_10 == plParam0 && Global_1892798[plParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

BOOL func_93(Player plParam0) // Position - 0x2E60 (11872)
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x2E82 (11906)
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_108())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_106())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_104(PLAYER::PLAYER_ID(), 0) && !func_103() && !func_102(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2658294[plParam0 /*468*/].f_258 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_99(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_98(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_CAN_RAGDOLL(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_97();
					func_96();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2658294[plParam0 /*468*/].f_259 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2698364)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2698364 = false;
				}
			
				if (Global_2635562.f_2982)
					Global_2635562.f_2982 = 0;
			}
			else
			{
				if (!func_98(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_95(*Global_4718592.f_199277))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575064)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_95(int iParam0) // Position - 0x3336 (13110)
{
	return iParam0 == 17;
}

void func_96() // Position - 0x3343 (13123)
{
	var unk;

	Global_2673274.f_1101 = 0;
	Global_2673274.f_1102 = 0;
	Global_2673274.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673274.f_1108 = -1;
	Global_2673274.f_1109 = 0;
	Global_2635562.f_2993 = { unk };
	return;
}

void func_97() // Position - 0x3390 (13200)
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3036 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2991 = 0;
	return;
}

BOOL func_98(Ped pedParam0) // Position - 0x33CE (13262)
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_99(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x33FF (13311)
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_101();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_104(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING") /* TUNEABLE: MPPLY_IS_CHAR_SPECTATING */, bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x34CF (13519)
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_101() // Position - 0x34EB (13547)
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_102(Player plParam0) // Position - 0x3543 (13635)
{
	if (func_104(plParam0, 0))
		return true;

	if (func_103())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[plParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

BOOL func_103() // Position - 0x3582 (13698)
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_104(Player plParam0, int iParam1) // Position - 0x3590 (13712)
{
	BOOL flag;

	if (!func_93(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_105(-1, false) == 8;
	else
		flag = Global_1845299[plParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_105(int iParam0, BOOL bParam1) // Position - 0x35E9 (13801)
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_81();

	if (Global_1575072[num2] == 1)
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

BOOL func_106() // Position - 0x362A (13866)
{
	if (func_107() == 0)
		return true;

	return false;
}

int func_107() // Position - 0x363F (13887)
{
	return Global_1574634.f_18;
}

BOOL func_108() // Position - 0x364D (13901)
{
	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 2) && !(Global_2686095.f_2847.f_220 == -1))
		return true;

	return false;
}

void func_109(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x367E (13950)
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

void func_110() // Position - 0x36C3 (14019)
{
	int randomIntInRange;

	if (bLocal_49)
		return;

	uLocal_41.f_4 = 0;

	if (!func_111(Global_45897[iLocal_63 /*5*/].f_2))
		return;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	iLocal_59 = 5;
	iLocal_54.f_2 = BUILTIN::TIMERA() + randomIntInRange;
	return;
}

BOOL func_111(int iParam0) // Position - 0x3706 (14086)
{
	int num;
	char* clipSet;
	char* animDict;
	char* animationName;
	char* animDict2;

	num = func_122();

	if (num == -2)
		return false;

	if (PED::IS_PED_INJURED(uLocal_41.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_41.f_1))
			return false;
	
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(uLocal_41.f_1))
			return false;
	
		if (func_118(uLocal_41.f_1))
			return false;
	}

	if (Global_45897[iLocal_63 /*5*/].f_3 < 3 && Global_45897[iLocal_63 /*5*/].f_3 != 0 && Global_45897[iLocal_63 /*5*/].f_3 > Global_45897[iLocal_63 /*5*/].f_4)
		return false;

	if (Global_45897[iLocal_63 /*5*/].f_4 < 9 && Global_45897[iLocal_63 /*5*/].f_4 != 0 && Global_45897[iLocal_63 /*5*/].f_4 > Global_45897[iLocal_63 /*5*/].f_3)
		return false;

	clipSet = func_117(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(clipSet))
		return false;

	if (func_118(uLocal_41.f_1))
		return false;

	STREAMING::REQUEST_CLIP_SET(clipSet);

	if (func_114(uLocal_41.f_1))
	{
		animDict = "MOVE_M@DRUNK@TRANSITIONS";
		animationName = "";
	
		switch (iParam0)
		{
			case 0:
				animationName = "";
				break;
		
			case 2:
				animationName = "VERY_TO_MODERATE";
				break;
		
			case 1:
				animationName = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(animDict) && !MISC::IS_STRING_NULL_OR_EMPTY(animationName))
		{
			STREAMING::REQUEST_ANIM_DICT(animDict);
		
			while (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
			{
				BUILTIN::WAIT(0);
			}
		
			if (!PED::IS_PED_INJURED(uLocal_41.f_1))
			{
				if (uLocal_41.f_5 == -1f)
					TASK::TASK_PLAY_ANIM(uLocal_41.f_1, animDict, animationName, 1.5f, -1.5f, -1, 48, 0, false, false, false);
				else
					TASK::TASK_PLAY_ANIM(uLocal_41.f_1, animDict, animationName, uLocal_41.f_5, -1.5f, -1, 48, 0, false, false, false);
			
				sLocal_53 = animationName;
			}
		}
	}

	if (!STREAMING::HAS_CLIP_SET_LOADED(clipSet))
		return false;

	if (PED::IS_PED_INJURED(uLocal_41.f_1))
		return false;

	PED::SET_PED_MOVEMENT_CLIPSET(uLocal_41.f_1, clipSet, 0.75f);

	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
		PED::SET_PED_STRAFE_CLIPSET(uLocal_41.f_1, "move_ped_strafing_firstperson@drunk");

	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_41.f_1, 0, clipSet, "idle", 2f, true);
	iLocal_59.f_2 = clipSet;
	bLocal_50 = true;
	animDict2 = 0;

	switch (_GET_PLAYER_CHARACTER_FROM_PED(uLocal_41.f_1))
	{
		case CHAR_MICHAEL:
			animDict2 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case CHAR_FRANKLIN:
			animDict2 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case CHAR_TREVOR:
			animDict2 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (PED::IS_PED_A_PLAYER(uLocal_41.f_1))
				if (!func_112())
					animDict2 = "FACIALS@GEN_MALE@BASE";
				else
					animDict2 = "FACIALS@GEN_FEMALE@BASE";
			else if (PED::IS_PED_MALE(uLocal_41.f_1))
				animDict2 = "FACIALS@GEN_MALE@BASE";
			else
				animDict2 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uLocal_41.f_1, "mood_drunk_1", animDict2);
	PED::SET_PED_RESET_FLAG(uLocal_41.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(uLocal_41.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_41.f_1, false);
	PED::SET_PED_FLEE_ATTRIBUTES(uLocal_41.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(uLocal_41.f_1, true);
	return true;
}

BOOL func_112() // Position - 0x39F0 (14832)
{
	return func_113(PLAYER::PLAYER_ID());
}

BOOL func_113(Player plParam0) // Position - 0x3A00 (14848)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_114(Ped pedParam0) // Position - 0x3A1F (14879)
{
	Vector3 entityVelocity;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true) || PED::IS_PED_GETTING_INTO_A_VEHICLE(pedParam0))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PLAY_ANIM) != 7)
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_SYNCHRONIZED_SCENE) != 7)
		return false;

	if (PED::IS_PED_SHOOTING(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_IN_AIR(pedParam0))
		return false;

	if (PED::IS_PED_RAGDOLL(pedParam0))
		return false;

	if (PED::IS_PED_CLIMBING(pedParam0))
		return false;

	if (Global_77359)
		return false;

	if (func_116())
		return false;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_115())
			return false;
	}

	entityVelocity = { ENTITY::GET_ENTITY_VELOCITY(pedParam0) };

	if (BUILTIN::VMAG2(entityVelocity) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_115() // Position - 0x3B20 (15136)
{
	return Global_102506.f_418 > 0;
}

BOOL func_116() // Position - 0x3B31 (15153)
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

char* func_117(int iParam0) // Position - 0x3B46 (15174)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

BOOL func_118(Ped pedParam0) // Position - 0x3B87 (15239)
{
	int num;
	char* string2;

	num = func_119(pedParam0);
	string2 = func_117(num);

	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_59.f_2))
		if (MISC::IS_STRING_NULL_OR_EMPTY(string2))
			return true;
		else
			return false;

	return MISC::ARE_STRINGS_EQUAL(iLocal_59.f_2, string2);
}

int func_119(Ped pedParam0) // Position - 0x3BC8 (15304)
{
	int num;
	int num2;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	num = func_121(pedParam0);
	num2 = func_120(num);

	if (num2 == -1)
		return -1;

	return Global_45897[num2 /*5*/].f_2;
}

int func_120(int iParam0) // Position - 0x3C0B (15371)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45897[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_121(Ped pedParam0) // Position - 0x3C3B (15419)
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45897[i /*5*/].f_1)
			return Global_45897[i /*5*/];
	}

	return -1;
}

int func_122() // Position - 0x3C7C (15484)
{
	int num;

	if (iLocal_54 == -2)
		return -2;

	if (iLocal_54 == -1)
		return -1;

	num = iLocal_54 - BUILTIN::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_123() // Position - 0x3CC2 (15554)
{
	if (bLocal_49)
		return;

	if (!func_124())
	{
		iLocal_59 = 5;
		iLocal_54.f_2 = BUILTIN::TIMERA() + 5000;
		return;
	}

	iLocal_59 = 6;
	return;
}

BOOL func_124() // Position - 0x3CEE (15598)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float distanceBetweenCoords;

	if (uLocal_41.f_4 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_41.f_4, false))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_41.f_1, true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(uLocal_41.f_4, true) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true);
	return distanceBetweenCoords < 7f;
}

void func_125() // Position - 0x3D3F (15679)
{
	int num;
	char* animDict;

	if (uLocal_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DUCK, true);
	
		if (PED::GET_PED_STEALTH_MOVEMENT(uLocal_41.f_1))
			if (Global_45897[iLocal_63 /*5*/].f_2 == 0 || Global_45897[iLocal_63 /*5*/].f_2 == 2)
				PED::SET_PED_STEALTH_MOVEMENT(uLocal_41.f_1, false, 0);
	
		if (PED::IS_PED_DUCKING(uLocal_41.f_1))
			PED::SET_PED_DUCKING(uLocal_41.f_1, false);
	}

	if (iLocal_54 != -2)
	{
		if (iLocal_54 == -1)
		{
			if (Global_45897[iLocal_63 /*5*/].f_2 != 0)
				Global_45897[iLocal_63 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_54 - BUILTIN::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_45897[iLocal_63 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_45897[iLocal_63 /*5*/].f_2 = 2;
				
					if (!func_111(2))
					{
						Global_45897[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_45897[iLocal_63 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_45897[iLocal_63 /*5*/].f_2 = 1;
				
					if (!func_111(2))
					{
						Global_45897[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_45897[iLocal_63 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_53))
	{
		if (!func_114(uLocal_41.f_1))
		{
			animDict = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_41.f_1, animDict, sLocal_53, 3))
				TASK::STOP_ANIM_TASK(uLocal_41.f_1, animDict, sLocal_53, -4f);
		
			sLocal_53 = "";
			return;
		}
	}

	if (Global_45897[iLocal_63 /*5*/].f_3 >= 10 || Global_45897[iLocal_63 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_46114, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_41.f_1, SCRIPT_TASK_SYNCHRONIZED_SCENE) == 1 && !IS_BIT_SET(Global_1950714.f_3, 27))
			return;
	
		if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_41.f_1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, true))
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_142(PLAYER::PLAYER_ID()) && Global_262145.f_24026)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_141())
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_138(PLAYER::PLAYER_ID()))
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_137(PLAYER::PLAYER_ID()) && Global_262145.f_26696)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_134(PLAYER::PLAYER_ID()) && Global_262145.f_26727)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_130(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && Global_77359 && !Global_45865)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_128(PLAYER::PLAYER_ID()) && !func_126())
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_59.f_1 = 3;
		return;
	}

	if (!bLocal_50)
		return;

	if (!func_118(uLocal_41.f_1))
		return;

	return;
}

BOOL func_126() // Position - 0x4273 (17011)
{
	return func_127() == 6;
}

int func_127() // Position - 0x4281 (17025)
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

BOOL func_128(Player plParam0) // Position - 0x4297 (17047)
{
	if (func_129(Global_1845299[plParam0 /*883*/].f_260.f_39))
		return true;

	return false;
}

BOOL func_129(ePedComponentType epctParam0) // Position - 0x42B9 (17081)
{
	switch (epctParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

int func_130(Player plParam0) // Position - 0x42E8 (17128)
{
	if (func_133(plParam0) == 243)
		return func_131(plParam0);

	return -1;
}

int func_131(Player plParam0) // Position - 0x4305 (17157)
{
	if (func_132(plParam0, false))
		return Global_1892798[plParam0 /*615*/].f_10.f_183;

	return -1;
}

BOOL func_132(Player plParam0, BOOL bParam1) // Position - 0x4328 (17192)
{
	if (func_93(plParam0))
		if (Global_1892798[plParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892798[plParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

int func_133(Player plParam0) // Position - 0x436C (17260)
{
	if (func_93(plParam0))
		if (func_132(plParam0, false))
			return Global_1892798[plParam0 /*615*/].f_10.f_34;

	return -1;
}

BOOL func_134(Player plParam0) // Position - 0x4398 (17304)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658294[plParam0 /*468*/].f_325.f_8 != -1)
				return func_135(Global_2658294[plParam0 /*468*/].f_325.f_8) == 15;

	return false;
}

int func_135(BOOL bParam0) // Position - 0x43DF (17375)
{
	switch (bParam0)
	{
		case false:
		case true:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
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
	
		case 180:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 181:
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
	
		case 177:
		case 178:
		case 179:
			return 35;
	}

	return -1;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4948 (18760)
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[player /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_137(Player plParam0) // Position - 0x49A8 (18856)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658294[plParam0 /*468*/].f_325.f_8 != -1)
				return func_135(Global_2658294[plParam0 /*468*/].f_325.f_8) == 14;

	return false;
}

BOOL func_138(Player plParam0) // Position - 0x49EF (18927)
{
	return func_139(func_140(plParam0));
}

BOOL func_139(int iParam0) // Position - 0x4A01 (18945)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_140(Player plParam0) // Position - 0x4A33 (18995)
{
	if (func_133(plParam0) == 256)
		return func_131(plParam0);

	return -1;
}

BOOL func_141() // Position - 0x4A51 (19025)
{
	return Global_2709114;
}

BOOL func_142(Player plParam0) // Position - 0x4A5D (19037)
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2658294[plParam0 /*468*/].f_325.f_8 != -1)
				return func_135(Global_2658294[plParam0 /*468*/].f_325.f_8) == 11;

	return false;
}

BOOL func_143() // Position - 0x4AA4 (19108)
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_41.f_1))
		return false;

	vehiclePedIsIn = 0;
	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return false;

	if (!(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == uLocal_41.f_1))
		return false;

	uLocal_41.f_4 = vehiclePedIsIn;
	iLocal_59 = 7;
	return true;
}

void func_144() // Position - 0x4AF8 (19192)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 4;
		return;
	}

	return;
}

void func_145() // Position - 0x4B13 (19219)
{
	Vehicle vehiclePedIsIn;
	float entitySpeed;
	var entityCoords;
	Vector3 vector;
	Vector3 vector2;

	if (!bLocal_49)
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return;

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	entitySpeed = ENTITY::GET_ENTITY_SPEED(vehiclePedIsIn);

	if (entitySpeed < 5f)
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vector = { entityCoords - { 3f, 30f, 30f } };
	vector2 = { entityCoords + { 3f, 30f, 30f } };

	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vector, vector2) && !PED::IS_COP_PED_IN_AREA_3D(vector, vector2))
		return;

	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	func_11(73, 1);
	return;
}

void func_146() // Position - 0x4BE2 (19426)
{
	Vehicle vehicle;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;
	float entitySpeed;
	int num;

	vehicle = uLocal_41.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);
	
		if (!(pedInVehicleSeat == uLocal_41.f_1))
			return;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vehiclePedIsIn))
			return;
	
		vehicle = vehiclePedIsIn;
	}
	else if (!(PLAYER::PLAYER_PED_ID() == uLocal_41.f_1))
	{
		return;
	}
	else if (!(CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON))
	{
		fLocal_52 = 0f;
		func_148(vehicle, 0f);
		return;
	}

	if (BUILTIN::TIMERA() < iLocal_54.f_4)
	{
		func_148(vehicle, fLocal_52);
		return;
	}

	if (ENTITY::IS_ENTITY_A_PED(vehicle))
		iLocal_54.f_4 = BUILTIN::TIMERA() + 2000;
	else
		iLocal_54.f_4 = BUILTIN::TIMERA() + 1000;

	entitySpeed = ENTITY::GET_ENTITY_SPEED(vehicle);

	if (entitySpeed < 0.04f)
	{
		fLocal_52 = 0f;
		func_148(vehicle, 0f);
		return;
	}

	if (iLocal_54.f_1 == -1)
	{
		fLocal_52 = func_147(vehicle, 0.13f, 0.06f);
	}
	else
	{
		num = iLocal_54.f_1 - BUILTIN::TIMERA();
	
		if (num < 5000)
			fLocal_52 = 0f;
		else if (num < 15000)
			fLocal_52 = func_147(vehicle, 0.05f, 0.02f);
		else if (num < 30000)
			fLocal_52 = func_147(vehicle, 0.07f, 0.03f);
		else if (num < 45000)
			fLocal_52 = func_147(vehicle, 0.09f, 0.04f);
		else if (num < 600000)
			fLocal_52 = func_147(vehicle, 0.1f, 0.05f);
		else
			fLocal_52 = func_147(vehicle, 0.13f, 0.06f);
	}

	func_148(vehicle, fLocal_52);
	return;
}

float func_147(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x4D84 (19844)
{
	float randomFloatInRange;
	float randomFloatInRange2;
	Hash entityModel;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);

	if (randomFloatInRange < 0f)
		randomFloatInRange = randomFloatInRange - randomFloatInRange2;
	else
		randomFloatInRange = randomFloatInRange + randomFloatInRange2;

	if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
			randomFloatInRange = randomFloatInRange * 4.5f;
		else
			randomFloatInRange = randomFloatInRange * 3f;
	}
	else
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
			randomFloatInRange = randomFloatInRange * 1.5f;
		else
			randomFloatInRange = randomFloatInRange * 0.5f;
	}

	randomFloatInRange = func_21(randomFloatInRange, -1f, 1f);
	return randomFloatInRange;
}

void func_148(Vehicle veParam0, float fParam1) // Position - 0x4E18 (19992)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return;

	if (ENTITY::IS_ENTITY_A_PED(veParam0))
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);
	else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);

	return;
}

void func_149() // Position - 0x4E63 (20067)
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 4;
		return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_45897[iLocal_63 /*5*/].f_3 >= 10 || Global_45897[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_45897[iLocal_63 /*5*/].f_3 >= 10)
				Global_45897[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45897[iLocal_63 /*5*/].f_4 >= 15)
				Global_45897[iLocal_63 /*5*/].f_4 = 14;
		}
	}

	if (bLocal_49)
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_41.f_1, 0, 0);
		iLocal_59 = 11;
		return;
	}

	return;
}

void func_150() // Position - 0x4F07 (20231)
{
	int scriptTaskStatus;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (BUILTIN::TIMERA() <= iLocal_54.f_3)
		return;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT);

	if (!(scriptTaskStatus == 7))
	{
		iLocal_54.f_3 = BUILTIN::TIMERA() + 1000;
		return;
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 4;
		iLocal_54.f_3 = -2;
		return;
	}

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);
	pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);

	if (pedInVehicleSeat == uLocal_41.f_1)
	{
		func_151();
		iLocal_54.f_3 = -2;
		return;
	}

	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_41.f_1, vehiclePedIsIn, false);
	iLocal_59 = 9;
	iLocal_54.f_3 = BUILTIN::TIMERA() + 1000;
	return;
}

void func_151() // Position - 0x4FA2 (20386)
{
	if (iLocal_59 == 10)
		return;

	iLocal_59 = 10;

	if (iLocal_47 == -1)
		return;

	func_177(iLocal_47, 2, 5);
	iLocal_54.f_4 = BUILTIN::TIMERA();
	fLocal_52 = 0f;
	return;
}

void func_152() // Position - 0x4FD4 (20436)
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_41.f_1))
	{
		iLocal_59 = 10;
		return;
	}

	if (BUILTIN::TIMERA() < iLocal_54.f_3)
		return;

	iLocal_59 = 4;
	iLocal_54.f_3 = -2;
	return;
}

void func_153() // Position - 0x5006 (20486)
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	Ped pedInVehicleSeat;
	int scriptTaskStatus;

	!bLocal_49;
	vehiclePedIsIn = 0;
	flag = false;

	if (flag || PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_41.f_1))
	{
		!bLocal_49;
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);
	
		if (!(vehiclePedIsIn == uLocal_41.f_4))
		{
			!bLocal_49;
		
			if (!bLocal_49)
			{
				!bLocal_49;
				TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_41.f_1, 0, 0);
				iLocal_59 = 11;
				return;
			}
		
			uLocal_41.f_4 = vehiclePedIsIn;
		}
	
		if (flag)
		{
			!bLocal_49;
			func_151();
			return;
		}
	
		if (!bLocal_49)
		{
			!bLocal_49;
			func_151();
			return;
		}
	
		!bLocal_49;
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_41.f_4, -1, false);
	
		if (pedInVehicleSeat == uLocal_41.f_1)
		{
			func_151();
			return;
		}
	
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_41.f_1, vehiclePedIsIn, false);
		iLocal_59 = 9;
		iLocal_54.f_3 = BUILTIN::TIMERA() + 1000;
		return;
	}

	if (!func_124())
	{
		TASK::CLEAR_PED_TASKS(uLocal_41.f_1);
		iLocal_59 = 4;
		return;
	}

	if (!bLocal_49)
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(uLocal_41.f_1, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
			{
				TASK::CLEAR_PED_TASKS(uLocal_41.f_1);
				iLocal_59 = 4;
				return;
			}
		}
	}

	return;
}

void func_154() // Position - 0x5122 (20770)
{
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float distanceBetweenCoords;
	int vehicleMaxNumberOfPassengers;
	int seatIndex;
	BOOL flag;

	if (bLocal_49)
		return;

	if (uLocal_41.f_4 == 0)
	{
		iLocal_59 = 4;
		return;
	}

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_41.f_4, false))
	{
		uLocal_41.f_4 = 0;
		iLocal_59 = 4;
		return;
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_41.f_1, true) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(uLocal_41.f_4, true) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true);

	if (distanceBetweenCoords > 3f)
	{
		if (!func_111(Global_45897[iLocal_63 /*5*/].f_2))
		{
			iLocal_59 = 12;
			return;
		}
	
		iLocal_59 = 5;
		iLocal_54.f_2 = BUILTIN::TIMERA() + 2000;
		return;
	}

	vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uLocal_41.f_4);
	seatIndex = 0;
	flag = true;
	seatIndex = 1;

	while (flag)
	{
		if (seatIndex < vehicleMaxNumberOfPassengers)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_41.f_4, seatIndex, false))
				flag = false;
			else
				seatIndex = seatIndex + 1;
		}
		else
		{
			flag = false;
			seatIndex = -1;
		}
	}

	if (seatIndex == -1)
	{
		if (seatIndex == -1)
		{
			iLocal_59 = 4;
			return;
		}
	}

	func_155();
	TASK::TASK_ENTER_VEHICLE(uLocal_41.f_1, uLocal_41.f_4, -1, seatIndex, 1073741824, 1, 0);
	iLocal_59 = 7;
	return;
}

void func_155() // Position - 0x5225 (21029)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_41.f_1))
		return;

	if (!PED::IS_PED_INJURED(uLocal_41.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(uLocal_41.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(uLocal_41.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_41.f_1, 0, -1056964608);
		iLocal_59.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uLocal_41.f_1);
		PED::SET_PED_RESET_FLAG(uLocal_41.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(uLocal_41.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uLocal_41.f_1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_41.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(uLocal_41.f_1, false);
	}

	if (!bLocal_50)
		return;

	bLocal_50 = false;
	return;
}

void func_156() // Position - 0x52BA (21178)
{
	if (BUILTIN::TIMERA() < iLocal_54.f_2)
	{
		func_125();
		return;
	}

	func_157();
	iLocal_54.f_2 = -2;
	iLocal_59 = 12;
	return;
}

int func_157() // Position - 0x52E4 (21220)
{
	if (!func_118(uLocal_41.f_1))
		return 0;

	if (!bLocal_50)
		return 0;

	func_158(uLocal_41.f_1);
	iLocal_59.f_2 = "";
	Global_2733138.f_3734 = 1;
	return 1;
}

void func_158(Ped pedParam0) // Position - 0x531D (21277)
{
	PED::RESET_PED_MOVEMENT_CLIPSET(pedParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(pedParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(pedParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(pedParam0, false);
	return;
}

void func_159() // Position - 0x535E (21342)
{
	int num;

	if (iLocal_54 == -1)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[iLocal_63 /*5*/].f_3 < 3 && Global_45897[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - BUILTIN::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45897[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45897[iLocal_63 /*5*/].f_2 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 10;
		return;
	}

	if (func_118(uLocal_41.f_1))
	{
		iLocal_59 = 12;
		return;
	}

	if (iLocal_54 == -2)
		return;

	if (!func_111(Global_45897[iLocal_63 /*5*/].f_2))
		return;

	iLocal_59 = 12;
	return;
}

void func_160() // Position - 0x5434 (21556)
{
	return;
}

void func_161() // Position - 0x543C (21564)
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_45978[i /*6*/].f_2;
	
		if (!(num == 6))
		{
			if (Global_45978[i /*6*/].f_1 == iLocal_47)
			{
				func_163(i);
				func_162(i);
			}
			else if (Global_45978[i /*6*/].f_1 == 2)
			{
				if (!(iLocal_48 == -1))
					if (iLocal_48 == Global_45978[i /*6*/])
						func_163(i);
			}
		}
	}

	return;
}

void func_162(int iParam0) // Position - 0x54B4 (21684)
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_45978[iParam0 /*6*/] = -1;
	Global_45978[iParam0 /*6*/].f_1 = -1;
	Global_45978[iParam0 /*6*/].f_2 = 6;
	Global_45978[iParam0 /*6*/].f_3 = 0;
	Global_45978[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_163(int iParam0) // Position - 0x5501 (21761)
{
	int num;

	num = Global_45978[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_184();
			break;
	
		case 2:
			func_167(Global_45978[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_166(Global_45978[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_165();
			break;
	
		case 5:
			func_164();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}

	return;
}

void func_164() // Position - 0x5583 (21891)
{
	iLocal_59.f_1 = 2;
	return;
}

void func_165() // Position - 0x5590 (21904)
{
	int num;

	Global_45897[iLocal_63 /*5*/].f_4 = Global_45897[iLocal_63 /*5*/].f_4 + 1;

	if (iLocal_54 == -1)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[iLocal_63 /*5*/].f_4 < 9 && Global_45897[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - BUILTIN::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45897[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45897[iLocal_63 /*5*/].f_2 = 1;
	
		if (!func_118(uLocal_41.f_1))
			func_111(Global_45897[iLocal_63 /*5*/].f_2);
	}

	return;
}

void func_166(var uParam0) // Position - 0x5650 (22096)
{
	int num;

	Global_45897[iLocal_63 /*5*/].f_3 = Global_45897[iLocal_63 /*5*/].f_3 + uParam0;

	if (iLocal_54 == -1)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[iLocal_63 /*5*/].f_3 < 3 && Global_45897[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - BUILTIN::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45897[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45897[iLocal_63 /*5*/].f_2 = 1;
	
		if (!func_118(uLocal_41.f_1))
			func_111(Global_45897[iLocal_63 /*5*/].f_2);
	}

	return;
}

void func_167(var uParam0) // Position - 0x5710 (22288)
{
	uLocal_41.f_3 = uLocal_41.f_3 + uParam0;
	uLocal_41.f_2 = uLocal_41.f_2 + uParam0;
	iLocal_54.f_1 = iLocal_54.f_1 + uParam0;
	iLocal_54 = iLocal_54 + uParam0;
	return;
}

void func_168() // Position - 0x5740 (22336)
{
	int playerWantedLevel;

	if (!bLocal_49)
	{
		iLocal_62 = -1;
		return;
	}

	if (iLocal_62 < 0)
	{
		iLocal_62 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}

	playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (playerWantedLevel != iLocal_62)
	{
		if (playerWantedLevel > iLocal_62)
			func_169();
	
		iLocal_62 = playerWantedLevel;
		return;
	}

	return;
}

void func_169() // Position - 0x578A (22410)
{
	return;
}

void func_170() // Position - 0x5792 (22418)
{
	if (!(iLocal_54 == -1))
	{
		if (!(iLocal_54 == -2))
		{
			if (BUILTIN::TIMERA() >= iLocal_54)
			{
				func_155();
				iLocal_54 = -2;
				iLocal_59 = 12;
			}
		}
	
		if (BUILTIN::TIMERA() > iLocal_54.f_1)
			func_184();
	}

	return;
}

void func_171(int iParam0) // Position - 0x57D1 (22481)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_45978[i /*6*/])
			func_162(i);
	}

	return;
}

void func_172() // Position - 0x5801 (22529)
{
	int num;
	int num2;
	int outValue;
	int outValue2;
	int outValue3;
	int num3;
	int num4;
	int num5;

	iLocal_59 = 4;

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_41.f_1))
			iLocal_59 = 10;

	if (bLocal_49)
	{
		func_175();
		func_11(71, 1);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			num = func_82(2059, -1);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_173(num2);
		
			func_78(2059, num + 1, -1, true);
			bLocal_64 = true;
		}
		else
		{
			outValue = 0;
			outValue2 = 0;
			outValue3 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP0_SP_NUM_TIMES_DRUNK */, &outValue, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP1_SP_NUM_TIMES_DRUNK */, &outValue2, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP2_SP_NUM_TIMES_DRUNK */, &outValue3, -1);
			num3 = outValue + outValue2 + outValue3;
			num4 = ((num3 / 10) + 1) * 10;
		
			if (num3 + 1 >= num4)
				func_173(num4);
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP0_SP_NUM_TIMES_DRUNK */, outValue + 1, true);
					break;
			
				case CHAR_FRANKLIN:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP1_SP_NUM_TIMES_DRUNK */, outValue2 + 1, true);
					break;
			
				case CHAR_TREVOR:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK") /* TUNEABLE: SP2_SP_NUM_TIMES_DRUNK */, outValue3 + 1, true);
					break;
			}
		}
	
		iLocal_59.f_1 = 1;
		return;
	}

	iLocal_59.f_1 = 12;

	if (iLocal_54 == -1)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[iLocal_63 /*5*/].f_3 < 3 && Global_45897[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45897[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num5 = iLocal_54 - BUILTIN::TIMERA();
	
		if (num5 <= 0)
			num5 = 0;
	
		num5 = (num5 / 1000) + 1;
		Global_45897[iLocal_63 /*5*/].f_2 = 0;
	
		if (num5 < 30)
			Global_45897[iLocal_63 /*5*/].f_2 = 2;
	
		if (num5 < 10)
			Global_45897[iLocal_63 /*5*/].f_2 = 1;
	}

	return;
}

void func_173(int iParam0) // Position - 0x59AF (22959)
{
	int num;

	num = func_174(81);
	Global_2645624[num /*83*/] = 81;
	Global_2645624[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645624[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_174(int iParam0) // Position - 0x59E6 (23014)
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645624[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645624[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_175() // Position - 0x5A33 (23091)
{
	return;
}

void func_176() // Position - 0x5A3B (23099)
{
	iLocal_54 = uLocal_41.f_2;
	iLocal_54.f_1 = uLocal_41.f_3;
	iLocal_54.f_2 = -2;
	iLocal_54.f_3 = -2;
	return;
}

void func_177(int iParam0, int iParam1, int iParam2) // Position - 0x5A5F (23135)
{
	func_178(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x5A74 (23156)
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_180(iParam0, iParam1, iParam2))
		return;

	num = func_179();

	if (num == -1)
		return;

	Global_45978[num /*6*/] = iParam0;
	Global_45978[num /*6*/].f_1 = iParam1;
	Global_45978[num /*6*/].f_2 = iParam2;
	Global_45978[num /*6*/].f_3 = iParam3;
	Global_45978[num /*6*/].f_4 = iParam4;
	Global_45978[num /*6*/].f_5 = iParam5;
	return;
}

int func_179() // Position - 0x5AF6 (23286)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45978[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_180(int iParam0, int iParam1, int iParam2) // Position - 0x5B27 (23335)
{
	if (func_181(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_181(int iParam0, int iParam1, int iParam2) // Position - 0x5B42 (23362)
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45978[i /*6*/].f_2)
			if (iParam0 == Global_45978[i /*6*/])
				if (iParam1 == Global_45978[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_182() // Position - 0x5B8E (23438)
{
	eCharacter character;

	bLocal_49 = false;

	if (uLocal_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_49 = true;
		Global_46110 = 1;
		Global_46112 = Global_46112 + 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_41.f_1);
	
		switch (character)
		{
			case CHAR_AMANDA:
				AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41.f_1, "AMANDA_DRUNK");
				break;
		
			case CHAR_LAMAR:
				AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41.f_1, "LAMAR_DRUNK");
				break;
		}
	}

	return;
}

void func_183() // Position - 0x5BFB (23547)
{
	if (!(iLocal_47 == -1))
		return;

	iLocal_47 = func_121(uLocal_41.f_1);

	if (iLocal_47 == -1)
		return;

	iLocal_63 = func_120(iLocal_47);
	return;
}

void func_184() // Position - 0x5C29 (23593)
{
	eCharacter character;

	if (!func_35(0) && !func_35(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_41.f_1);
		
			if (Global_45897[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (character)
				{
					case CHAR_MICHAEL:
						func_186(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_FRANKLIN:
						func_186(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_TREVOR:
						func_186(uLocal_41.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (character)
			{
				case CHAR_AMANDA:
					AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41.f_1, "AMANDA_NORMAL");
					break;
			
				case CHAR_LAMAR:
					AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_41.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_155();

	if (bLocal_49)
		Global_46110 = 0;

	func_185();
	STREAMING::REMOVE_ANIM_DICT(func_117(0));
	STREAMING::REMOVE_ANIM_DICT(func_117(2));
	STREAMING::REMOVE_ANIM_DICT(func_117(1));
	Global_1944727 = false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		func_42(0);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_185() // Position - 0x5D2D (23853)
{
	Vehicle vehicle;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		return;

	vehicle = uLocal_41.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(uLocal_41.f_1, false);
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false);
	
		if (!(uLocal_41.f_1 == pedInVehicleSeat))
			return;
	
		vehicle = vehiclePedIsIn;
	}
	else if (!(CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON) || !(PLAYER::PLAYER_PED_ID() == uLocal_41.f_1))
	{
		return;
	}

	fLocal_52 = 0f;
	func_148(vehicle, 0f);
	return;
}

void func_186(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x5DA7 (23975)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_187(iParam2), 1);
	return;
}

char* func_187(int iParam0) // Position - 0x5DBE (23998)
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

