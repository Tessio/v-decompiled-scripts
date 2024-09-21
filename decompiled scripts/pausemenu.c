#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF989785D ^0x3C33E2DF
{
	switch (iScriptParam_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
	
		case 2:
			iScriptParam_0.f_1 == -1029820160;
			break;
	
		case 0:
		case 1:
			if (iScriptParam_0.f_1 == joaat("PM_REPLAY"))
			{
				func_2(1, 0, -1029819160, 0, true, "PM_PANE_AUD" /*Audio*/);
				func_2(1, 1, -1029819160, 1, false, "PM_PANE_DIS" /*Display*/);
				func_1(1);
			}
		
			iScriptParam_0.f_1 == -1029820160;
			break;
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1(int iParam0) // Position - 0x8A Hash - 0xE8DD3BA3 ^0x2F9C5E3F
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, char* sParam5) // Position - 0xA6 Hash - 0xF46426E4 ^0xC6DDB35
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		if (bParam4)
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		else
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	
		func_3(sParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

void func_3(char* sParam0) // Position - 0xF6 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

