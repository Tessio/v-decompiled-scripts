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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	Ped pedLocal_69 = 0;
	Ped pedLocal_70 = 0;
	int iLocal_71 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	fLocal_62 = { uScriptParam_0.f_1[0 /*3*/] };
	func_23();
	PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11);

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_3(3))
			{
				switch (iLocal_60)
				{
					case 0:
						if (iLocal_61 == 1)
							iLocal_60 = 1;
						else
							func_2();
						break;
				
					case 1:
						if (iLocal_68 == 0)
							func_1();
						break;
				}
			}
			else
			{
				func_23();
			}
		}
		else
		{
			func_23();
		}
	}

	return;
}

void func_1() // Position - 0xE7 (231)
{
	if (BUILTIN::TIMERB() > 7000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_62, 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_62, 3f, 3f, 3f, false, true, 0))
		{
			BUILTIN::SETTIMERB(0);
			uLocal_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_65, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, -1, 0, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_69, false))
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_69, iLocal_71);
		
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		}
	
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_62, 3f, 3f, 3f, false, true, 0))
		{
			uLocal_65 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			BUILTIN::SETTIMERB(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_65, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 0, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_69, false))
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_69, iLocal_71);
		
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		}
	}

	return;
}

void func_2() // Position - 0x1FD (509)
{
	iLocal_68 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);

	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_62, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("A_F_M_BevHills_02"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_BevHills_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02")))
		{
			BUILTIN::WAIT(0);
		}
	
		STREAMING::REQUEST_ANIM_DICT("amb@BUSKER");
	
		while (!STREAMING::HAS_ANIM_DICT_LOADED("amb@BUSKER"))
		{
			BUILTIN::WAIT(0);
		}
	
		uLocal_65.f_2 = fLocal_62.f_2 - 1f;
		pedLocal_69 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("G_M_Y_MexGoon_02"), fLocal_62, fLocal_62.f_1, uLocal_65.f_2, 0f, true, true);
	
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_69, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, uLocal_65, 0);
			TASK::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_69, iLocal_71);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
		}
	
		if (iLocal_68 == 1)
		{
			uLocal_65 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_69, 3.8f, 0.8f, 0f) };
			pedLocal_70 = PED::CREATE_PED(PED_TYPE_CIVFEMALE, joaat("A_F_M_BevHills_02"), uLocal_65, 0f, true, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedLocal_70, false))
				TASK::TASK_TURN_PED_TO_FACE_COORD(pedLocal_70, fLocal_62, 0);
		}
	
		iLocal_61 = 1;
	}

	return;
}

BOOL func_3(int iParam0) // Position - 0x331 (817)
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (func_22(6) || func_22(7))
				return true;
			else
				return func_3(3);
			break;
	
		case 2:
			return true;
	
		case 3:
			if (_CAN_ENTER_FREEROAM_STATE(5))
				if (func_4(4))
					return true;
			break;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x3A3 (931)
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_14(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_114010 || Global_33818 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_13() || Global_33818 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_114010 || Global_33818 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() || Global_114963.f_7697.f_919[character] == 5 || Global_45468 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_13() || Global_114010 || Global_33818 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_13() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_11(8, -1) || func_7() || func_6() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_33818 || func_12() || func_11(8, -1) || func_9() || func_8() || func_7() || Global_114963.f_7697.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_13() || func_9() || Global_114010 || Global_33818 || func_12() || Global_46147 || func_11(8, -1) || func_8() || func_6() || func_7() || Global_114963.f_7697.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_13() || Global_114010 || Global_33818 || func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7())
							return false;
						break;
				}
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
	else
	{
		return false;
	}

	return true;
}

BOOL func_5() // Position - 0xAC0 (2752)
{
	return Global_102525.f_1;
}

BOOL func_6() // Position - 0xACE (2766)
{
	if (Global_99383 != -1)
		return IS_BIT_SET(Global_93249[Global_99383 /*34*/].f_15, 13);

	return false;
}

BOOL func_7() // Position - 0xAF1 (2801)
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_8() // Position - 0xB0B (2827)
{
	if (Global_80598)
		return true;
	else if (Global_65057 && !Global_65063)
		return true;

	return false;
}

BOOL func_9() // Position - 0xB35 (2869)
{
	return Global_102538.f_418 > 0;
}

BOOL func_10() // Position - 0xB46 (2886)
{
	return Global_102538.f_417 > 0;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xB57 (2903)
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

ePedComponentType func_12() // Position - 0xB8F (2959)
{
	return Global_1575095;
}

BOOL func_13() // Position - 0xB9B (2971)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_99939.f_44 == 1;

	return false;
}

BOOL func_14(eCharacter echParam0) // Position - 0xBB7 (2999)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0xBC3 (3011)
{
	func_16();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_16() // Position - 0xBDC (3036)
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_14(character) && !func_22(14) || Global_113909)
			{
				if (Global_114963.f_2370.f_539.f_4321 != character && func_14(Global_114963.f_2370.f_539.f_4321))
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

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xCD9 (3289)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0xD16 (3350)
{
	if (func_14(character))
		return func_19(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_19(eCharacter echParam0) // Position - 0xD3B (3387)
{
	return Global_2349[echParam0 /*29*/];
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xD4A (3402)
{
	return func_21(iParam0, Global_44921);
}

BOOL func_21(int iParam0, int iParam1) // Position - 0xD5B (3419)
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

BOOL func_22(int iParam0) // Position - 0xF3C (3900)
{
	return Global_44921 == iParam0;
}

void func_23() // Position - 0xF4A (3914)
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

