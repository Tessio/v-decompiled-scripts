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
		func_179();

	uLocal_41 = { uScriptParam_0 };
	func_178();
	func_177();
	func_172(iLocal_47, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_171();
	func_167();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_166(iLocal_47);
		func_165();
		func_163();
		func_156();
		func_172(iLocal_47, 0, 0);
		func_178();
		func_9();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_8())
			func_1();
	}

	return;
}

void func_1() // Position - 0x106 Hash - 0x35BBF2A0 ^0x35BBF2A0
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}

	return;
}

void func_2() // Position - 0x127 Hash - 0x4E2E9530 ^0x9EBC6D4A
{
	if (!_IS_FMMC_ACTIVE() && !func_3() && Global_2685443)
		Global_4718592.f_127178 = 0;

	return;
}

BOOL func_3() // Position - 0x155 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_693;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x164 Hash - 0x9A79549B ^0x4A0EF303
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

void func_5() // Position - 0x17B Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_2684504.f_758 = 1;
	return;
}

BOOL func_6() // Position - 0x18B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684504.f_737;
}

BOOL func_7() // Position - 0x19A Hash - 0xEDAE0057 ^0x5A1A7786
{
	return IS_BIT_SET(Global_2684504.f_2, 11);
}

BOOL func_8() // Position - 0x1AB Hash - 0x7C65AEB ^0x3C1440C9
{
	return IS_BIT_SET(Global_2685444.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE Hash - 0xC834390D ^0x81AC2275
{
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		func_179();

	if (bLocal_49)
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_179();

	func_155();
	flag = true;

	switch (iLocal_59)
	{
		case 4:
			func_154();
			return;
	
		case 5:
			func_151();
			return;
	
		case 6:
			func_149();
			return;
	
		case 7:
			func_148();
			return;
	
		case 8:
			func_147();
			return;
	
		case 9:
			func_145();
			return;
	
		case 10:
			func_144();
			func_141();
			func_140();
			return;
	
		case 11:
			func_139();
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
			if (!func_138())
			{
				func_124();
				func_141();
			}
			break;
	
		case 2:
			func_122();
			break;
	
		case 12:
			func_109();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}

	return;
}

void func_10() // Position - 0x2D9 Hash - 0x2CBFB08C ^0x34D533B1
{
	var unk;
	char* str;
	char* str2;
	int num;

	if (!IS_BIT_SET(Global_1943520.f_3, 27))
		PED::SET_PED_TO_RAGDOLL(uLocal_41.f_1, 3000, 3500, 0, true, true, false);

	Global_1937671 = true;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
	
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		_STOPWATCH_INITIALIZE(&unk, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
	
		while (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
	
		if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()))
			func_179();
	
		MISC::CLEAR_BIT(&(Global_1943520.f_3), 27);
		_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 57344, false);
		Global_2635563.f_2981 = 1;
	
		if (IS_BIT_SET(Global_1943520, 15))
			MISC::CLEAR_BIT(&Global_1943520, 15);
	
		if (IS_BIT_SET(Global_1943520.f_2, 6))
			MISC::CLEAR_BIT(&(Global_1943520.f_2), 6);
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			Global_2635563.f_2982 = 1;
		else
			Global_2635563.f_2982 = 0;
	
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	
		if (func_88(true))
			func_75(0);
	
		func_73(true);
		func_179();
	}

	if (bLocal_64)
		func_179();

	str = "";
	str2.f_3 = 1064514355;
	str2.f_30 = 1148829696;
	str2.f_31 = 1148829696;
	str2.f_52 = 1148829696;
	num = 7;

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			if (func_65() != 2)
				num = 0;
			else
				num = 1;
			break;
	
		case CHAR_FRANKLIN:
			if (!func_64(126))
				num = 2;
			else
				num = 3;
			break;
	
		case CHAR_TREVOR:
			if (!func_63(4))
			{
				if (func_64(58))
					num = 4;
			
				if (func_64(59))
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

	SYSTEM::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(str2.f_11), "", 16);
	str2.f_15 = -1f;
	func_12(str, &str2, "");
	func_11(126, 1);
	func_179();
	return;
}

void func_11(int iParam0, int iParam1) // Position - 0x760 Hash - 0xE9A65642 ^0xF9847A54
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

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD Hash - 0x3B29DC84 ^0x99D84060
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
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);

	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, true, false, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
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

	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

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
	
		SYSTEM::WAIT(0);
	}

	func_54();

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
	{
		PATHFIND::SET_ROADS_IN_AREA((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, SYSTEM::VMAG(uParam1->f_22) + 25f, true, false, false, false);
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
	func_51();

	while (func_50())
	{
		SYSTEM::WAIT(0);
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
	
		func_48(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
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
			func_40(0);
			gameTimer = MISC::GET_GAME_TIMER();
		
			if (gameTimer >= Global_44593 - 500)
				func_39(4000);
		
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
						num10 = SYSTEM::ROUND(distanceBetweenCoords2 * 1000f);
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
								easeTime = SYSTEM::ROUND(distanceBetweenCoords3 * 1000f);
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
		
			SYSTEM::WAIT(0);
		}
	}

	if (!func_53(uParam1->f_22, 0f, 0f, 0f, false))
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
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACKR, &num13);
			func_15(PLAYER_CONTROL, INPUT_MELEE_ATTACKQ, &num13);
			SYSTEM::WAIT(0);
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
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}

	sParam0 = sParam0;
	return;
}

void func_13(var uParam0) // Position - 0x11FA Hash - 0x1E8D3CCB ^0x84A9B761
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	return;
}

void func_14(var uParam0) // Position - 0x1215 Hash - 0x821EA126 ^0x4A5A8DD9
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

void func_15(eControlType ectParam0, eControlAction ecaParam1, var uParam2) // Position - 0x126D Hash - 0xED816FC2 ^0xA547EA63
{
	PAD::DISABLE_CONTROL_ACTION(ectParam0, ecaParam1, true);
	*uParam2 = *uParam2 + 1;
	return;
}

BOOL func_16(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x1286 Hash - 0xC99A9ABF ^0xC5508BF3
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
				unk11 = { -SYSTEM::SIN(value.f_2) * SYSTEM::COS(value), SYSTEM::COS(value.f_2) * SYSTEM::COS(value), SYSTEM::SIN(value) };
				unk14 = { -SYSTEM::SIN(value2.f_2) * SYSTEM::COS(value2), SYSTEM::COS(value2.f_2) * SYSTEM::COS(value2), SYSTEM::SIN(value2) };
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

void func_17() // Position - 0x1629 Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
	return;
}

void func_18() // Position - 0x1639 Hash - 0x9A142650 ^0x461C197C
{
	Global_23692.f_134 = 1;
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1647 Hash - 0xA71191EC ^0xCDF2B995
{
	uParam0->f_9 = { uParam1 };
	return;
}

void func_20(var uParam0, Ped pedParam1, eCharacter echParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1659 Hash - 0xBE36F4CF ^0x64EDDD32
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

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1691 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16B8 Hash - 0x384540C1 ^0x384540C1
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_23(sParam2, iParam3, false);
}

BOOL func_23(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1706 Hash - 0x77297D51 ^0x40DC584A
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
					func_37();
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
	
		if (func_36(8, -1))
			return 0;
	
		Global_22362 = { Global_22356 };
		func_35();
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
			
				if (func_32())
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
		
			if (func_31())
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
		
			func_30();
			Global_22296 = bParam2;
		}
	
		Global_22288 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_29();
		func_24();
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
		func_37();
	}

	return 0;
}

void func_24() // Position - 0x19D4 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_25())
		return;

	if (Global_22292)
	{
		TEXT_LABEL_COPY(&(Global_1971465.f_1), { Global_21905 }, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}

	return;
}

BOOL func_25() // Position - 0x1A0B Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28397)
		return false;

	if (!Global_79389)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_26(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_26(Player plParam0) // Position - 0x1A6E Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_27(plParam0, 20);
}

BOOL func_27(Player plParam0, int iParam1) // Position - 0x1A7E Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887305[plParam0 /*610*/].f_10.f_4, iParam1);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1A96 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_29() // Position - 0x1A9F Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_30() // Position - 0x1ACF Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_31() // Position - 0x1B64 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

BOOL func_32() // Position - 0x1B8B Hash - 0x9A999369 ^0x4033F7BF
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

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1C24 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_34(14))
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

BOOL func_34(int iParam0) // Position - 0x1CC6 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

void func_35() // Position - 0x1CD4 Hash - 0x719867DD ^0xB196B20A
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

BOOL func_36(int iParam0, int iParam1) // Position - 0x1D2A Hash - 0xA14C4D3F ^0xA6034F77
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

void func_37() // Position - 0x1D62 Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_38(var uParam0, eCharacter echParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DB9 Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_39(int iParam0) // Position - 0x1E0F Hash - 0xC0234809 ^0x4FD853DC
{
	Global_44593 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_40(int iParam0) // Position - 0x1E21 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_45())
		return;

	if (!(Global_20930.f_1 == 1))
	{
		if (func_44(0))
			func_41(iParam0);
	
		MISC::SET_BIT(&Global_8801, 2);
	}

	return;
}

void func_41(int iParam0) // Position - 0x1E54 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_45())
		return;

	if (Global_21145)
		if (func_43())
			func_42(true, true);
		else
			func_42(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_31())
		Global_20930.f_1 = 3;

	return;
}

void func_42(BOOL bParam0, BOOL bParam1) // Position - 0x1EDE Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_44(0))
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

BOOL func_43() // Position - 0x1F52 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_44(int iParam0) // Position - 0x1F60 Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_45() // Position - 0x1FB7 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956920, 19);
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x1FC6 Hash - 0x6C235EE0 ^0x9E57F206
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_79389)
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

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x2061 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_48(Ped pedParam0, int iParam1) // Position - 0x2078 Hash - 0x2E827890 ^0x842AB0A9
{
	if (func_49(iParam1, 1))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_0", 0f, 1f);

	if (func_49(iParam1, 2))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_1", 0f, 1f);

	if (func_49(iParam1, 4))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_2", 0f, 1f);

	if (func_49(iParam1, 8))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_3", 0f, 1f);

	if (func_49(iParam1, 16))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_4", 0f, 1f);

	if (func_49(iParam1, 32))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_5", 0f, 1f);

	if (func_49(iParam1, 64))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_6", 0f, 1f);

	if (func_49(iParam1, 128))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_7", 0f, 1f);

	if (func_49(iParam1, 256))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_8", 0f, 1f);

	if (func_49(iParam1, 512))
		PED::APPLY_PED_DAMAGE_PACK(pedParam0, "HOSPITAL_9", 0f, 1f);

	func_49(iParam1, 0);
	return;
}

BOOL func_49(int iParam0, int iParam1) // Position - 0x216F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_50() // Position - 0x217E Hash - 0x25806CBF ^0x25806CBF
{
	if (Global_101533 == 13 || Global_101533 == 10 || Global_101533 == 11 || Global_101533 == 12)
		return false;

	return true;
}

void func_51() // Position - 0x21BC Hash - 0x65DD5F8C ^0x1B295010
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_98446[i /*17*/] && !Global_98446[i /*17*/].f_1)
			if (Global_98446[i /*17*/].f_3 == 0)
				if (Global_98446[i /*17*/].f_5 != 88 && Global_98446[i /*17*/].f_5 != 89 && Global_98446[i /*17*/].f_5 != 92)
					func_52(Global_98446[i /*17*/].f_5, true);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x2243 Hash - 0x2E8A8CC9 ^0x2E8A8CC9
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_95498[iParam0 /*2*/] = true;
	else
		Global_95498[iParam0 /*2*/] = false;

	return;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x2281 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54() // Position - 0x22C8 Hash - 0xCD77FD7E ^0xCD77FD7E
{
	func_55();
	func_73(true);
	return;
}

void func_55() // Position - 0x22D9 Hash - 0x764E78AD ^0x764E78AD
{
	int i;
	int num;
	int j;

	i = 0;
	num = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_45036[i /*5*/];
	
		if (!(num == -1))
			func_172(1, num, 1);
	}

	j = 0;

	for (j = 0; j < 5; j = j + 1)
	{
		if (Global_45005[j /*6*/] == 0)
			func_56(j);
	}

	return;
}

void func_56(int iParam0) // Position - 0x2339 Hash - 0xBB510F32 ^0xE77AE77B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45005[iParam0 /*6*/].f_1 == 0))
		if (Global_45005[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_45248 = 0;

	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = Global_45003 - 1;

	if (Global_45003 < 0)
		Global_45003 = 0;

	return;
}

int func_57(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x23BC Hash - 0x279D54F3 ^0x26A644B5
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_61(0);
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
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_60();
		func_59();
		SYSTEM::SETTIMERA(0);
		func_61(1);
	
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
			
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
	
		SYSTEM::SETTIMERA(0);
	
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		
			if (SYSTEM::TIMERA() > 20000)
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
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
			
				if (iParam5 == 1)
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				else
					SYSTEM::SETTIMERA(5000);
			
				MISC::POPULATE_NOW();
			}
		}
	
		while (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !func_58() && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
	
		if (SYSTEM::TIMERA() > 1500)
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
		func_61(0);
		return 1;
	}

	func_61(0);
	return 0;
}

BOOL func_58() // Position - 0x25DB Hash - 0x56B3BC1C ^0x56B3BC1C
{
	return !Global_78179.f_553;
}

void func_59() // Position - 0x25EB Hash - 0x1D062B05 ^0x1D062B05
{
	Global_78179.f_553 = 1;
	Global_78179.f_554 = 0;
	return;
}

void func_60() // Position - 0x2603 Hash - 0x3EE382EB ^0x3EE382EB
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		Global_78179[i] = 0;
	}

	return;
}

void func_61(int iParam0) // Position - 0x2627 Hash - 0x92BC0B3F ^0x5C77C8CD
{
	int num;

	num = 0;

	if (num == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_101533.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_101533.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_101533.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_101533.f_20), 2);
		}
	}

	return;
}

BOOL _GET_RANDOM_BOOL() // Position - 0x2678 Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_63(int iParam0) // Position - 0x2696 Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113969.f_7232[iParam0], 0);
}

BOOL func_64(int iParam0) // Position - 0x26AB Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_65() // Position - 0x26D8 Hash - 0x9D8DC2BB ^0x9D8DC2BB
{
	if (Global_40980[11] == 1)
		return 4;

	if (!func_66(21))
		return 0;

	if (!func_64(130))
		return 1;

	if (!func_64(131))
		return 2;

	if (!func_66(22))
		return 1;

	if (!func_66(49))
		return 3;

	if (!func_66(28))
		return 1;

	return 3;
}

BOOL func_66(int iParam0) // Position - 0x2756 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2782 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_68();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_68() // Position - 0x279B Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_69(character) && !func_34(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_69(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_69(eCharacter echParam0) // Position - 0x2898 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x28A4 Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x28E1 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_69(character))
		return func_72(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_72(eCharacter echParam0) // Position - 0x2906 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

void func_73(BOOL bParam0) // Position - 0x2915 Hash - 0x37413453 ^0xC559DB13
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

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_45228))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_45228))
			AUDIO::STOP_AUDIO_SCENE(&Global_45228);

	if (CAM::DOES_CAM_EXIST(Global_45216))
	{
		if (CAM::IS_CAM_SHAKING(Global_45216))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_45216, 0f);
			CAM::STOP_CAM_SHAKING(Global_45216, true);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_45223 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45224, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_45228, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_45244, "", 16);
	func_74();
	return;
}

void func_74() // Position - 0x29EE Hash - 0xCA36E4AC ^0x3832E562
{
	Global_45215 = false;
	Global_45216 = 0;
	Global_45217 = 0;
	Global_45218 = 30000;
	Global_45219 = 0f;
	Global_45221 = 0f;
	Global_45220 = 0f;
	Global_45222 = 1f;
	Global_45223 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_45224, "", 16);
	return;
}

void func_75(int iParam0) // Position - 0x2A23 Hash - 0x89313E69 ^0x89313E69
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_262145.f_18009;
			break;
	
		case 1:
			num = Global_262145.f_17999;
			break;
	
		case 2:
			num = Global_262145.f_18010;
			break;
	
		case 3:
			num = Global_262145.f_18002;
			break;
	
		case 4:
			num = Global_262145.f_17998;
			break;
	
		case 6:
			num = 3;
			break;
	
		case 7:
			num = Global_262145.f_18013;
			break;
	
		case 8:
			num = Global_262145.f_18014;
			break;
	
		case 9:
			num = Global_262145.f_18017;
			break;
	
		case 22:
			num = Global_262145.f_18018;
			break;
	
		case 23:
			num = Global_262145.f_18011;
			break;
	
		case 25:
			num = Global_262145.f_18863;
			break;
	
		case 26:
			num = Global_262145.f_18862;
			break;
	}

	if (num != 0)
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_86(_GET_BOSS_OF_LOCAL_PLAYER()), func_85(_GET_BOSS_OF_LOCAL_PLAYER()), func_84(), func_83(), iParam0, num);

	func_82(num);
	func_76(num);
	return;
}

void func_76(int iParam0) // Position - 0x2B48 Hash - 0x45E16C82 ^0x64C4FF3D
{
	int num;

	num = func_81(3971, -1);
	num = num + iParam0;

	if (num < 0)
		num = 0;

	if (num > 9999)
		num = 9999;

	Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10.f_470 = num;
	func_77(3971, num, -1, true);
	return;
}

void func_77(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2B94 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_78(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_78(int iParam0, int iParam1) // Position - 0x2BC2 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_79(iParam1));
}

int func_79(int iParam0) // Position - 0x2BD7 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_80();
	
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

int func_80() // Position - 0x2C0B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

int func_81(int iParam0, int iParam1) // Position - 0x2C17 Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_78(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_82(int iParam0) // Position - 0x2C46 Hash - 0x39B058CC ^0xC55700F2
{
	Player player;

	player = PLAYER::PLAYER_ID();
	Global_1887305[player /*610*/].f_10.f_469 = Global_1887305[player /*610*/].f_10.f_469 + iParam0;

	if (Global_1887305[player /*610*/].f_10.f_469 < -9999)
		Global_1887305[player /*610*/].f_10.f_469 = 9999;
	else if (Global_1887305[player /*610*/].f_10.f_469 > 9999)
		Global_1887305[player /*610*/].f_10.f_469 = 9999;

	return;
}

int func_83() // Position - 0x2CC0 Hash - 0x38EE7661 ^0xAB55A4B8
{
	if (Global_1941113.f_3 != 0)
		return Global_1941113.f_3;

	return -1;
}

int func_84() // Position - 0x2CDC Hash - 0x38EE7661 ^0x725966E2
{
	if (Global_1941113.f_2 != 0)
		return Global_1941113.f_2;

	return -1;
}

int func_85(Player plParam0) // Position - 0x2CF8 Hash - 0xAE8A6582 ^0x6E31D9BB
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887305[plParam0 /*610*/].f_10.f_8[1];
}

int func_86(Player plParam0) // Position - 0x2D1D Hash - 0x57997590 ^0xB0714101
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887305[plParam0 /*610*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x2D42 Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_10;
}

BOOL func_88(BOOL bParam0) // Position - 0x2D57 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_89(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_89(Player plParam0, BOOL bParam1) // Position - 0x2D69 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_90(plParam0, bParam1, 1);
}

int func_90(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x2D7A Hash - 0x55931638 ^0x4F47E369
{
	Player player;

	if (!func_92(plParam0))
		return 0;

	if (!bParam1)
		if (func_91(plParam0, iParam2))
			return 0;

	player = Global_1887305[plParam0 /*610*/].f_10;

	if (func_92(player) && Global_1887305[player /*610*/].f_10.f_430 == iParam2)
		return 1;

	return 0;
}

BOOL func_91(Player plParam0, int iParam1) // Position - 0x2DD6 Hash - 0xEA053375 ^0x162A414
{
	if (func_92(plParam0))
		if (func_92(Global_1887305[plParam0 /*610*/].f_10))
			if (Global_1887305[plParam0 /*610*/].f_10 == plParam0 && Global_1887305[plParam0 /*610*/].f_10.f_430 == iParam1)
				return true;

	return false;
}

BOOL func_92(Player plParam0) // Position - 0x2E25 Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x2E47 Hash - 0xCD788E2C ^0x50180146
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

	if (func_107())
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
	
		if (!func_105())
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
				else if (flag14 || !func_103(PLAYER::PLAYER_ID(), 0) && !func_102() && !func_101(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2657971[plParam0 /*465*/].f_255 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_98(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_97(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
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
					func_96();
					func_95();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2657971[plParam0 /*465*/].f_256 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2697541)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697541 = false;
				}
			
				if (Global_2635563.f_2981)
					Global_2635563.f_2981 = 0;
			}
			else
			{
				if (!func_97(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
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
				
					if (func_94(*Global_4718592.f_185586))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575055)
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

BOOL func_94(int iParam0) // Position - 0x32FA Hash - 0xFB453256 ^0xFB453256
{
	return iParam0 == 17;
}

void func_95() // Position - 0x3307 Hash - 0xBC63612E ^0xBC63612E
{
	var unk;

	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { unk };
	return;
}

void func_96() // Position - 0x3354 Hash - 0x5FEB45C4 ^0xAE96E258
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
	return;
}

BOOL func_97(Ped pedParam0) // Position - 0x3392 Hash - 0x93DB01D2 ^0x43DCC591
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

void func_98(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x33C3 Hash - 0x19FE7AFC ^0x4538006F
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
				func_100();
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
	
		if (func_103(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x3493 Hash - 0x269D56BD ^0xB104E3E4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_100() // Position - 0x34AF Hash - 0xEFF6029E ^0x224AB476
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

BOOL func_101(Player plParam0) // Position - 0x3507 Hash - 0x68897CDD ^0x7A533860
{
	if (func_103(plParam0, 0))
		return true;

	if (func_102())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657971[plParam0 /*465*/].f_200, 2))
		return true;

	return false;
}

BOOL func_102() // Position - 0x3546 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_103(Player plParam0, int iParam1) // Position - 0x3554 Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_92(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_104(-1, false) == 8;
	else
		flag = Global_1845281[plParam0 /*883*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_104(int iParam0, BOOL bParam1) // Position - 0x35AD Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_80();

	if (Global_1575063[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

BOOL func_105() // Position - 0x35EE Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_106() == 0)
		return true;

	return false;
}

int func_106() // Position - 0x3603 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574633.f_18;
}

BOOL func_107() // Position - 0x3611 Hash - 0xEBB0E6F7 ^0x19BAFBE9
{
	if (IS_BIT_SET(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2) && !(Global_2685444.f_2847.f_216 == -1))
		return true;

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x3642 Hash - 0x6F79B86B ^0x7B76DD66
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

void func_109() // Position - 0x3687 Hash - 0x3B5D487F ^0x2251016B
{
	int randomIntInRange;

	if (bLocal_49)
		return;

	uLocal_41.f_4 = 0;

	if (!func_110(Global_45036[iLocal_63 /*5*/].f_2))
		return;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	iLocal_59 = 5;
	iLocal_54.f_2 = SYSTEM::TIMERA() + randomIntInRange;
	return;
}

BOOL func_110(int iParam0) // Position - 0x36CA Hash - 0xDFB0202 ^0x23674D6E
{
	int num;
	char* clipSet;
	char* animDict;
	char* animationName;
	char* animDict2;

	num = func_121();

	if (num == -2)
		return false;

	if (PED::IS_PED_INJURED(uLocal_41.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uLocal_41.f_1))
			return false;
	
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(uLocal_41.f_1))
			return false;
	
		if (func_117(uLocal_41.f_1))
			return false;
	}

	if (Global_45036[iLocal_63 /*5*/].f_3 < 3 && Global_45036[iLocal_63 /*5*/].f_3 != 0 && Global_45036[iLocal_63 /*5*/].f_3 > Global_45036[iLocal_63 /*5*/].f_4)
		return false;

	if (Global_45036[iLocal_63 /*5*/].f_4 < 9 && Global_45036[iLocal_63 /*5*/].f_4 != 0 && Global_45036[iLocal_63 /*5*/].f_4 > Global_45036[iLocal_63 /*5*/].f_3)
		return false;

	clipSet = func_116(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(clipSet))
		return false;

	if (func_117(uLocal_41.f_1))
		return false;

	STREAMING::REQUEST_CLIP_SET(clipSet);

	if (func_113(uLocal_41.f_1))
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
				SYSTEM::WAIT(0);
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
				if (!func_111())
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

BOOL func_111() // Position - 0x39B4 Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_112(PLAYER::PLAYER_ID());
}

BOOL func_112(Player plParam0) // Position - 0x39C4 Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_113(Ped pedParam0) // Position - 0x39E3 Hash - 0xF88EA852 ^0xB9B7BD0D
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

	if (Global_76498)
		return false;

	if (func_115())
		return false;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_114())
			return false;
	}

	entityVelocity = { ENTITY::GET_ENTITY_VELOCITY(pedParam0) };

	if (SYSTEM::VMAG2(entityVelocity) >= 1f * 1f)
		return false;

	return true;
}

BOOL func_114() // Position - 0x3AE4 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_101585.f_394 > 0;
}

BOOL func_115() // Position - 0x3AF5 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23831.f_6481 + 100;
}

char* func_116(int iParam0) // Position - 0x3B0A Hash - 0x9AD6010A ^0x187C492B
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

BOOL func_117(Ped pedParam0) // Position - 0x3B4B Hash - 0x748648E9 ^0x343F58CC
{
	int num;
	char* string2;

	num = func_118(pedParam0);
	string2 = func_116(num);

	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_59.f_2))
		if (MISC::IS_STRING_NULL_OR_EMPTY(string2))
			return true;
		else
			return false;

	return MISC::ARE_STRINGS_EQUAL(iLocal_59.f_2, string2);
}

int func_118(Ped pedParam0) // Position - 0x3B8C Hash - 0xF2A18B2F ^0x86CAAF14
{
	int num;
	int num2;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	num = func_120(pedParam0);
	num2 = func_119(num);

	if (num2 == -1)
		return -1;

	return Global_45036[num2 /*5*/].f_2;
}

int func_119(int iParam0) // Position - 0x3BCF Hash - 0x671ED513 ^0x671ED513
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45036[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_120(Ped pedParam0) // Position - 0x3BFF Hash - 0x219FA119 ^0x5240A8AF
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_45036[i /*5*/].f_1)
			return Global_45036[i /*5*/];
	}

	return -1;
}

int func_121() // Position - 0x3C40 Hash - 0x15CB13AD ^0x2B30617D
{
	int num;

	if (iLocal_54 == -2)
		return -2;

	if (iLocal_54 == -1)
		return -1;

	num = iLocal_54 - SYSTEM::TIMERA();

	if (num < 0)
		return -2;

	if (num > 65534)
		num = 65534;

	return num;
}

void func_122() // Position - 0x3C86 Hash - 0x1A843D5E ^0x8418E552
{
	if (bLocal_49)
		return;

	if (!func_123())
	{
		iLocal_59 = 5;
		iLocal_54.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}

	iLocal_59 = 6;
	return;
}

BOOL func_123() // Position - 0x3CB2 Hash - 0x934B8806 ^0x38C5B0B9
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

void func_124() // Position - 0x3D03 Hash - 0xC0A765C6 ^0xFCE7C8D1
{
	int num;
	char* animDict;

	if (uLocal_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_DUCK, true);
	
		if (PED::GET_PED_STEALTH_MOVEMENT(uLocal_41.f_1))
			if (Global_45036[iLocal_63 /*5*/].f_2 == 0 || Global_45036[iLocal_63 /*5*/].f_2 == 2)
				PED::SET_PED_STEALTH_MOVEMENT(uLocal_41.f_1, false, 0);
	
		if (PED::IS_PED_DUCKING(uLocal_41.f_1))
			PED::SET_PED_DUCKING(uLocal_41.f_1, false);
	}

	if (iLocal_54 != -2)
	{
		if (iLocal_54 == -1)
		{
			if (Global_45036[iLocal_63 /*5*/].f_2 != 0)
				Global_45036[iLocal_63 /*5*/].f_2 = 0;
		}
		else
		{
			num = iLocal_54 - SYSTEM::TIMERA();
		
			if (num <= 0)
				num = 0;
		
			num = (num / 1000) + 1;
		
			if (Global_45036[iLocal_63 /*5*/].f_2 == 0)
			{
				if (num < 30)
				{
					Global_45036[iLocal_63 /*5*/].f_2 = 2;
				
					if (!func_110(2))
					{
						Global_45036[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_45036[iLocal_63 /*5*/].f_2 == 2)
			{
				if (num < 10)
				{
					Global_45036[iLocal_63 /*5*/].f_2 = 1;
				
					if (!func_110(2))
					{
						Global_45036[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_45036[iLocal_63 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_53))
	{
		if (!func_113(uLocal_41.f_1))
		{
			animDict = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_41.f_1, animDict, sLocal_53, 3))
				TASK::STOP_ANIM_TASK(uLocal_41.f_1, animDict, sLocal_53, -4f);
		
			sLocal_53 = "";
			return;
		}
	}

	if (Global_45036[iLocal_63 /*5*/].f_3 >= 10 || Global_45036[iLocal_63 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_45253, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_41.f_1, SCRIPT_TASK_SYNCHRONIZED_SCENE) == 1 && !IS_BIT_SET(Global_1943520.f_3, 27))
			return;
	
		if (AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_41.f_1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, true))
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_137(PLAYER::PLAYER_ID()) && Global_262145.f_23934)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_136())
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_133(PLAYER::PLAYER_ID()))
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_132(PLAYER::PLAYER_ID()) && Global_262145.f_26588)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_129(PLAYER::PLAYER_ID()) && Global_262145.f_26619)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && func_125(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && uLocal_41.f_1 == PLAYER::PLAYER_PED_ID() && Global_76498 && !Global_45004)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		iLocal_59.f_1 = 3;
		return;
	}

	if (!bLocal_50)
		return;

	if (!func_117(uLocal_41.f_1))
		return;

	return;
}

int func_125(Player plParam0) // Position - 0x41E4 Hash - 0xF6352B1A ^0xF6352B1A
{
	if (func_128(plParam0) == 243)
		return func_126(plParam0);

	return -1;
}

int func_126(Player plParam0) // Position - 0x4201 Hash - 0x48014DA ^0xC49B9410
{
	if (func_127(plParam0, false))
		return Global_1887305[plParam0 /*610*/].f_10.f_182;

	return -1;
}

BOOL func_127(Player plParam0, BOOL bParam1) // Position - 0x4224 Hash - 0x3654624B ^0x97E7BA1
{
	if (func_92(plParam0))
		if (Global_1887305[plParam0 /*610*/].f_10.f_33 != -1 || bParam1 && Global_1887305[plParam0 /*610*/].f_10.f_32 != -1)
			return true;

	return false;
}

int func_128(Player plParam0) // Position - 0x4268 Hash - 0x5EA8DF5A ^0xEE8D593B
{
	if (func_92(plParam0))
		if (func_127(plParam0, false))
			return Global_1887305[plParam0 /*610*/].f_10.f_33;

	return -1;
}

BOOL func_129(Player plParam0) // Position - 0x4294 Hash - 0xDB07D527 ^0x6C64BCB4
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_130(Global_2657971[plParam0 /*465*/].f_322.f_8) == 15;

	return false;
}

int func_130(Hash hParam0) // Position - 0x42DB Hash - 0xEE599357 ^0xEE599357
{
	switch (hParam0)
	{
		case 0:
		case 1:
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

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x47DB Hash - 0x3FF6E4CA ^0xE6B59972
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
				if (player == Global_2672855.f_3)
					return Global_2672855.f_2;
				else if (Global_2657971[player /*465*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_132(Player plParam0) // Position - 0x483B Hash - 0xB5AF000F ^0xC162EA15
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_130(Global_2657971[plParam0 /*465*/].f_322.f_8) == 14;

	return false;
}

BOOL func_133(Player plParam0) // Position - 0x4882 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_134(func_135(plParam0));
}

BOOL func_134(int iParam0) // Position - 0x4894 Hash - 0x5000025C ^0x5000025C
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

int func_135(Player plParam0) // Position - 0x48C6 Hash - 0xAB4D17EF ^0xAA4132F3
{
	if (func_128(plParam0) == 256)
		return func_126(plParam0);

	return -1;
}

BOOL func_136() // Position - 0x48E4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2707764;
}

BOOL func_137(Player plParam0) // Position - 0x48F0 Hash - 0xB2831D42 ^0xB48111E7
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657971[plParam0 /*465*/].f_322.f_8 != -1)
				return func_130(Global_2657971[plParam0 /*465*/].f_322.f_8) == 11;

	return false;
}

BOOL func_138() // Position - 0x4937 Hash - 0x69369EFE ^0x35DC4E87
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

void func_139() // Position - 0x498B Hash - 0x389BEFC8 ^0x8C27CBB9
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 4;
		return;
	}

	return;
}

void func_140() // Position - 0x49A6 Hash - 0x1DDB1E2B ^0x1D081198
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

void func_141() // Position - 0x4A75 Hash - 0xFA0DDD86 ^0xD4DB2BD
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
		func_143(vehicle, 0f);
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_54.f_4)
	{
		func_143(vehicle, fLocal_52);
		return;
	}

	if (ENTITY::IS_ENTITY_A_PED(vehicle))
		iLocal_54.f_4 = SYSTEM::TIMERA() + 2000;
	else
		iLocal_54.f_4 = SYSTEM::TIMERA() + 1000;

	entitySpeed = ENTITY::GET_ENTITY_SPEED(vehicle);

	if (entitySpeed < 0.04f)
	{
		fLocal_52 = 0f;
		func_143(vehicle, 0f);
		return;
	}

	if (iLocal_54.f_1 == -1)
	{
		fLocal_52 = func_142(vehicle, 0.13f, 0.06f);
	}
	else
	{
		num = iLocal_54.f_1 - SYSTEM::TIMERA();
	
		if (num < 5000)
			fLocal_52 = 0f;
		else if (num < 15000)
			fLocal_52 = func_142(vehicle, 0.05f, 0.02f);
		else if (num < 30000)
			fLocal_52 = func_142(vehicle, 0.07f, 0.03f);
		else if (num < 45000)
			fLocal_52 = func_142(vehicle, 0.09f, 0.04f);
		else if (num < 600000)
			fLocal_52 = func_142(vehicle, 0.1f, 0.05f);
		else
			fLocal_52 = func_142(vehicle, 0.13f, 0.06f);
	}

	func_143(vehicle, fLocal_52);
	return;
}

float func_142(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x4C17 Hash - 0xFBD10A6F ^0x3E518520
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

void func_143(Vehicle veParam0, float fParam1) // Position - 0x4CAB Hash - 0xB52D18F0 ^0xCC2F56A7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0))
		return;

	if (ENTITY::IS_ENTITY_A_PED(veParam0))
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);
	else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), fParam1);

	return;
}

void func_144() // Position - 0x4CF6 Hash - 0x1388AC49 ^0xA913E718
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 4;
		return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_45036[iLocal_63 /*5*/].f_3 >= 10 || Global_45036[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_45036[iLocal_63 /*5*/].f_3 >= 10)
				Global_45036[iLocal_63 /*5*/].f_3 = 9;
		
			if (Global_45036[iLocal_63 /*5*/].f_4 >= 15)
				Global_45036[iLocal_63 /*5*/].f_4 = 14;
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

void func_145() // Position - 0x4D9A Hash - 0xEFBAAD33 ^0xCB8F607C
{
	int scriptTaskStatus;
	Vehicle vehiclePedIsIn;
	Ped pedInVehicleSeat;

	if (SYSTEM::TIMERA() <= iLocal_54.f_3)
		return;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT);

	if (!(scriptTaskStatus == 7))
	{
		iLocal_54.f_3 = SYSTEM::TIMERA() + 1000;
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
		func_146();
		iLocal_54.f_3 = -2;
		return;
	}

	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_41.f_1, vehiclePedIsIn, false);
	iLocal_59 = 9;
	iLocal_54.f_3 = SYSTEM::TIMERA() + 1000;
	return;
}

void func_146() // Position - 0x4E35 Hash - 0xDC90216E ^0xC8FE257
{
	if (iLocal_59 == 10)
		return;

	iLocal_59 = 10;

	if (iLocal_47 == -1)
		return;

	func_172(iLocal_47, 2, 5);
	iLocal_54.f_4 = SYSTEM::TIMERA();
	fLocal_52 = 0f;
	return;
}

void func_147() // Position - 0x4E67 Hash - 0x2EFC07F5 ^0xB310D5DF
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_41.f_1))
	{
		iLocal_59 = 10;
		return;
	}

	if (SYSTEM::TIMERA() < iLocal_54.f_3)
		return;

	iLocal_59 = 4;
	iLocal_54.f_3 = -2;
	return;
}

void func_148() // Position - 0x4E99 Hash - 0xAB6E7F98 ^0xBCC3B454
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
			func_146();
			return;
		}
	
		if (!bLocal_49)
		{
			!bLocal_49;
			func_146();
			return;
		}
	
		!bLocal_49;
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_41.f_4, -1, false);
	
		if (pedInVehicleSeat == uLocal_41.f_1)
		{
			func_146();
			return;
		}
	
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uLocal_41.f_1, vehiclePedIsIn, false);
		iLocal_59 = 9;
		iLocal_54.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}

	if (!func_123())
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

void func_149() // Position - 0x4FB5 Hash - 0x2D99AC76 ^0xF8FDA755
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
		if (!func_110(Global_45036[iLocal_63 /*5*/].f_2))
		{
			iLocal_59 = 12;
			return;
		}
	
		iLocal_59 = 5;
		iLocal_54.f_2 = SYSTEM::TIMERA() + 2000;
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

	func_150();
	TASK::TASK_ENTER_VEHICLE(uLocal_41.f_1, uLocal_41.f_4, -1, seatIndex, 1073741824, 1, 0, 0);
	iLocal_59 = 7;
	return;
}

void func_150() // Position - 0x50B9 Hash - 0x84E72A7 ^0x8587ED2
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

void func_151() // Position - 0x514E Hash - 0x91CF8352 ^0xC7ECB60E
{
	if (SYSTEM::TIMERA() < iLocal_54.f_2)
	{
		func_124();
		return;
	}

	func_152();
	iLocal_54.f_2 = -2;
	iLocal_59 = 12;
	return;
}

int func_152() // Position - 0x5178 Hash - 0x43F4F7F8 ^0x3487861B
{
	if (!func_117(uLocal_41.f_1))
		return 0;

	if (!bLocal_50)
		return 0;

	func_153(uLocal_41.f_1);
	iLocal_59.f_2 = "";
	Global_2738935.f_4659 = 1;
	return 1;
}

void func_153(Ped pedParam0) // Position - 0x51B1 Hash - 0x53419EAD ^0xE6B53983
{
	PED::RESET_PED_MOVEMENT_CLIPSET(pedParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(pedParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(pedParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam0, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(pedParam0, false);
	return;
}

void func_154() // Position - 0x51F2 Hash - 0x7C9E1CD2 ^0xBCABE687
{
	int num;

	if (iLocal_54 == -1)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45036[iLocal_63 /*5*/].f_3 < 3 && Global_45036[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45036[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45036[iLocal_63 /*5*/].f_2 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_41.f_1, false))
	{
		iLocal_59 = 10;
		return;
	}

	if (func_117(uLocal_41.f_1))
	{
		iLocal_59 = 12;
		return;
	}

	if (iLocal_54 == -2)
		return;

	if (!func_110(Global_45036[iLocal_63 /*5*/].f_2))
		return;

	iLocal_59 = 12;
	return;
}

void func_155() // Position - 0x52C8 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_156() // Position - 0x52D0 Hash - 0x399097D3 ^0x9FB35D6F
{
	int num;
	int i;

	num = 6;
	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		num = Global_45117[i /*6*/].f_2;
	
		if (!(num == 6))
		{
			if (Global_45117[i /*6*/].f_1 == iLocal_47)
			{
				func_158(i);
				func_157(i);
			}
			else if (Global_45117[i /*6*/].f_1 == 2)
			{
				if (!(iLocal_48 == -1))
					if (iLocal_48 == Global_45117[i /*6*/])
						func_158(i);
			}
		}
	}

	return;
}

void func_157(int iParam0) // Position - 0x5348 Hash - 0x4CF611D4 ^0xB1D19983
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_45117[iParam0 /*6*/] = -1;
	Global_45117[iParam0 /*6*/].f_1 = -1;
	Global_45117[iParam0 /*6*/].f_2 = 6;
	Global_45117[iParam0 /*6*/].f_3 = 0;
	Global_45117[iParam0 /*6*/].f_4 = 0;
	return;
}

void func_158(int iParam0) // Position - 0x5395 Hash - 0x94D00AC9 ^0x49DB19F7
{
	int num;

	num = Global_45117[iParam0 /*6*/].f_2;

	switch (num)
	{
		case 1:
			func_179();
			break;
	
		case 2:
			func_162(Global_45117[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_161(Global_45117[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_160();
			break;
	
		case 5:
			func_159();
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

void func_159() // Position - 0x5417 Hash - 0xC738D7FF ^0xB0B0699
{
	iLocal_59.f_1 = 2;
	return;
}

void func_160() // Position - 0x5424 Hash - 0xE3B2B84F ^0x2C892B3B
{
	int num;

	Global_45036[iLocal_63 /*5*/].f_4 = Global_45036[iLocal_63 /*5*/].f_4 + 1;

	if (iLocal_54 == -1)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45036[iLocal_63 /*5*/].f_4 < 9 && Global_45036[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45036[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45036[iLocal_63 /*5*/].f_2 = 1;
	
		if (!func_117(uLocal_41.f_1))
			func_110(Global_45036[iLocal_63 /*5*/].f_2);
	}

	return;
}

void func_161(var uParam0) // Position - 0x54E4 Hash - 0x3ABEC9D7 ^0xA42A73DC
{
	int num;

	Global_45036[iLocal_63 /*5*/].f_3 = Global_45036[iLocal_63 /*5*/].f_3 + uParam0;

	if (iLocal_54 == -1)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45036[iLocal_63 /*5*/].f_3 < 3 && Global_45036[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num = iLocal_54 - SYSTEM::TIMERA();
	
		if (num <= 0)
			num = 0;
	
		num = (num / 1000) + 1;
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	
		if (num < 30)
			Global_45036[iLocal_63 /*5*/].f_2 = 2;
	
		if (num < 10)
			Global_45036[iLocal_63 /*5*/].f_2 = 1;
	
		if (!func_117(uLocal_41.f_1))
			func_110(Global_45036[iLocal_63 /*5*/].f_2);
	}

	return;
}

void func_162(var uParam0) // Position - 0x55A4 Hash - 0xCEFC5BDF ^0xDF2E8153
{
	uLocal_41.f_3 = uLocal_41.f_3 + uParam0;
	uLocal_41.f_2 = uLocal_41.f_2 + uParam0;
	iLocal_54.f_1 = iLocal_54.f_1 + uParam0;
	iLocal_54 = iLocal_54 + uParam0;
	return;
}

void func_163() // Position - 0x55D4 Hash - 0x982EF4A3 ^0x771F59D
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
			func_164();
	
		iLocal_62 = playerWantedLevel;
		return;
	}

	return;
}

void func_164() // Position - 0x561E Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_165() // Position - 0x5626 Hash - 0x3A2A8F2E ^0x7F3854EB
{
	if (!(iLocal_54 == -1))
	{
		if (!(iLocal_54 == -2))
		{
			if (SYSTEM::TIMERA() >= iLocal_54)
			{
				func_150();
				iLocal_54 = -2;
				iLocal_59 = 12;
			}
		}
	
		if (SYSTEM::TIMERA() > iLocal_54.f_1)
			func_179();
	}

	return;
}

void func_166(int iParam0) // Position - 0x5665 Hash - 0x88C53499 ^0x88C53499
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam0 == Global_45117[i /*6*/])
			func_157(i);
	}

	return;
}

void func_167() // Position - 0x5695 Hash - 0xDE3506E9 ^0xBB79E419
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
		func_170();
		func_11(71, 1);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			num = func_81(2059, -1);
			num2 = ((num / 10) + 1) * 10;
		
			if (num + 1 >= num2)
				func_168(num2);
		
			func_77(2059, num + 1, -1, true);
			bLocal_64 = true;
		}
		else
		{
			outValue = 0;
			outValue2 = 0;
			outValue3 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), &outValue, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), &outValue2, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), &outValue3, -1);
			num3 = outValue + outValue2 + outValue3;
			num4 = ((num3 / 10) + 1) * 10;
		
			if (num3 + 1 >= num4)
				func_168(num4);
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), outValue + 1, true);
					break;
			
				case CHAR_FRANKLIN:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), outValue2 + 1, true);
					break;
			
				case CHAR_TREVOR:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), outValue3 + 1, true);
					break;
			}
		}
	
		iLocal_59.f_1 = 1;
		return;
	}

	iLocal_59.f_1 = 12;

	if (iLocal_54 == -1)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_45036[iLocal_63 /*5*/].f_3 < 3 && Global_45036[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_45036[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		num5 = iLocal_54 - SYSTEM::TIMERA();
	
		if (num5 <= 0)
			num5 = 0;
	
		num5 = (num5 / 1000) + 1;
		Global_45036[iLocal_63 /*5*/].f_2 = 0;
	
		if (num5 < 30)
			Global_45036[iLocal_63 /*5*/].f_2 = 2;
	
		if (num5 < 10)
			Global_45036[iLocal_63 /*5*/].f_2 = 1;
	}

	return;
}

void func_168(int iParam0) // Position - 0x5843 Hash - 0x7FE30F93 ^0xC3FFC057
{
	int num;

	num = func_169(81);
	Global_2645400[num /*83*/] = 81;
	Global_2645400[num /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645400[num /*83*/].f_18[0 /*16*/], "", 64);
	return;
}

int func_169(int iParam0) // Position - 0x587A Hash - 0x871E8B4C ^0x871E8B4C
{
	int num;
	int i;

	num = 19;

	for (i = 0; i <= 19; i = i + 1)
	{
		if (Global_2645400[i /*83*/] == iParam0)
		{
			num = i;
			i = 20;
		}
		else if (Global_2645400[i /*83*/] == 0)
		{
			num = i;
			i = 20;
		}
	}

	return num;
}

void func_170() // Position - 0x58C7 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_171() // Position - 0x58CF Hash - 0xB40E625C ^0x88424611
{
	iLocal_54 = uLocal_41.f_2;
	iLocal_54.f_1 = uLocal_41.f_3;
	iLocal_54.f_2 = -2;
	iLocal_54.f_3 = -2;
	return;
}

void func_172(int iParam0, int iParam1, int iParam2) // Position - 0x58F3 Hash - 0xF54D70EF ^0xF54D70EF
{
	func_173(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x5908 Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_175(iParam0, iParam1, iParam2))
		return;

	num = func_174();

	if (num == -1)
		return;

	Global_45117[num /*6*/] = iParam0;
	Global_45117[num /*6*/].f_1 = iParam1;
	Global_45117[num /*6*/].f_2 = iParam2;
	Global_45117[num /*6*/].f_3 = iParam3;
	Global_45117[num /*6*/].f_4 = iParam4;
	Global_45117[num /*6*/].f_5 = iParam5;
	return;
}

int func_174() // Position - 0x598A Hash - 0x11506CC4 ^0x2E9F5641
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_45117[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_175(int iParam0, int iParam1, int iParam2) // Position - 0x59BB Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_176(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_176(int iParam0, int iParam1, int iParam2) // Position - 0x59D6 Hash - 0x61F8C119 ^0x1C9B84EC
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_45117[i /*6*/].f_2)
			if (iParam0 == Global_45117[i /*6*/])
				if (iParam1 == Global_45117[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_177() // Position - 0x5A22 Hash - 0x6A27F759 ^0xE8656036
{
	eCharacter character;

	bLocal_49 = false;

	if (uLocal_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_49 = true;
		Global_45249 = 1;
		Global_45251 = Global_45251 + 1;
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

void func_178() // Position - 0x5A8F Hash - 0x8FBC6F45 ^0x980E7E5A
{
	if (!(iLocal_47 == -1))
		return;

	iLocal_47 = func_120(uLocal_41.f_1);

	if (iLocal_47 == -1)
		return;

	iLocal_63 = func_119(iLocal_47);
	return;
}

void func_179() // Position - 0x5ABD Hash - 0xCFD57BC7 ^0xB8C61C44
{
	eCharacter character;

	if (!func_34(0) && !func_34(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_41.f_1, false))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(uLocal_41.f_1);
		
			if (Global_45036[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (character)
				{
					case CHAR_MICHAEL:
						func_181(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_FRANKLIN:
						func_181(uLocal_41.f_1, "POST_STONED", 24);
						break;
				
					case CHAR_TREVOR:
						func_181(uLocal_41.f_1, "POST_STONED", 24);
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

	func_150();

	if (bLocal_49)
		Global_45249 = 0;

	func_180();
	STREAMING::REMOVE_ANIM_DICT(func_116(0));
	STREAMING::REMOVE_ANIM_DICT(func_116(2));
	STREAMING::REMOVE_ANIM_DICT(func_116(1));
	Global_1937671 = false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		func_41(0);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_180() // Position - 0x5BC1 Hash - 0x32816913 ^0xB35FA29D
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
	func_143(vehicle, 0f);
	return;
}

void func_181(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x5C3B Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x5C52 Hash - 0xA17D549C ^0xAA2D5E0B
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

