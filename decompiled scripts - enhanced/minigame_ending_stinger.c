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
#endregion

void main() // Position - 0x0 (0)
{
	int gameTimer;
	BOOL flag;

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
	gameTimer = -1;
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_5();

	while (true)
	{
		if (!flag)
		{
			switch (_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID()))
			{
				case CHAR_FRANKLIN:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			
				case CHAR_TREVOR:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			
				default:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			}
		}
		else if (gameTimer == -1)
		{
			gameTimer = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() > gameTimer + 8000)
		{
			func_5();
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0xD2 (210)
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x10F (271)
{
	if (func_4(character))
		return func_3(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_3(eCharacter echParam0) // Position - 0x134 (308)
{
	return Global_2349[echParam0 /*29*/];
}

BOOL func_4(eCharacter echParam0) // Position - 0x143 (323)
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_5() // Position - 0x14F (335)
{
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

