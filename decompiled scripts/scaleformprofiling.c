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
	int iLocal_16 = 0;
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

	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_2();

	iLocal_16 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("scaleform_profiling");

	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_16))
	{
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_16, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_16);
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1(int iParam0) // Position - 0x93 Hash - 0xD2185CF9 ^0xF2651B5F
{
	if (Global_20909 == false)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LB) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RB) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			Global_20909 = true;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20909 = false;
	}

	if (Global_20909 == false)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LB))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RB))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_2() // Position - 0x215 Hash - 0x1818D874 ^0x9190E20D
{
	func_3(false);
	MISC::SET_GAME_PAUSED(false);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_16);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(BOOL bParam0) // Position - 0x231 Hash - 0x5FE88D2A ^0xA22C291D
{
	if (bParam0)
	{
		func_10();
	
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
			MISC::SET_BIT(&Global_8801, 16);
	
		Global_20930.f_1 = 1;
	
		if (func_9(0))
			func_4(0);
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!(Global_20930.f_1 == 0))
			Global_20930.f_1 = 3;
	}

	return;
}

void func_4(int iParam0) // Position - 0x294 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_8())
		return;

	if (Global_21145)
		if (func_7())
			func_6(true, true);
		else
			func_6(false, false);

	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		MISC::SET_BIT(&Global_8801, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22286 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8800, 30);
	else
		MISC::CLEAR_BIT(&Global_8800, 30);

	if (!func_5())
		Global_20930.f_1 = 3;

	return;
}

BOOL func_5() // Position - 0x31E Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
		return true;

	return false;
}

void func_6(BOOL bParam0, BOOL bParam1) // Position - 0x345 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_9(0))
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

BOOL func_7() // Position - 0x3B9 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1956920, 5);
}

BOOL func_8() // Position - 0x3C7 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1956920, 19);
}

BOOL func_9(int iParam0) // Position - 0x3D6 Hash - 0xE8921B44 ^0x4F063755
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

void func_10() // Position - 0x42D Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = false;
		Global_22335 = 1;
	}

	return;
}

