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
	var uLocal_16 = 20;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	float fLocal_56 = 0f;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	BOOL bLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;

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
	fLocal_56 = 0.82f;
	fLocal_57 = 0.42f;
	fLocal_58 = 0f;
	fLocal_59 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_20875 == 0)
	{
		fLocal_61 = 0.75f;
		fLocal_62 = 0.8f;
	}
	else
	{
		fLocal_61 = 0.65f;
		fLocal_62 = 0.77f;
	}

	Global_9605[Global_20930 /*2811*/][2 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_6;
	Global_9605[Global_20930 /*2811*/][4 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_9;

	for (i = 0; i < 9; i = i + 1)
	{
		if (Global_79389)
		{
			Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 = func_45(1199, -1);
			Global_9605[Global_20930 /*2811*/][2 /*281*/].f_259 = func_45(2030, -1);
			Global_9605[Global_20930 /*2811*/][4 /*281*/].f_259 = func_45(2029, -1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_113969.f_14054[Global_20930 /*20*/].f_11), &Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[i /*6*/]))
		{
			Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 = i;
		}
	}

	if (Global_79389)
		Global_113969.f_14054[3 /*20*/].f_10 = func_45(1198, -1);

	Global_9605[Global_20930 /*2811*/][3 /*281*/].f_259 = Global_113969.f_14054[Global_20930 /*20*/].f_10;
	func_44();

	if (Global_79389)
	{
		Global_9605[3 /*2811*/][0 /*281*/] = 190;
		Global_9605[3 /*2811*/][0 /*281*/].f_1 = 190;
		TEXT_LABEL_ASSIGN_STRING(&(Global_9605[3 /*2811*/][0 /*281*/].f_2), "CELL_701" /*Snapmatic*/, 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_9605[3 /*2811*/][0 /*281*/].f_280 = 1;
		TEXT_LABEL_ASSIGN_STRING(&Global_9605[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], "CELL_704" /*Quick launch Off*/, 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9605[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], "CELL_703" /*Quick launch On*/, 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		TEXT_LABEL_ASSIGN_STRING(&Global_9605[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], "CELL_801" /*Sleep Mode*/, 16);
		Global_9605[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_9605[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_9605[3 /*2811*/][0 /*281*/].f_104[2] = 26;
	
		if (func_45(2092, -1) == 0)
			Global_9605[3 /*2811*/][0 /*281*/].f_259 = 0;
		else
			Global_9605[3 /*2811*/][0 /*281*/].f_259 = 1;
	}

	func_34();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (bLocal_48)
		{
			if (SYSTEM::TIMERB() > 3500)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			
				bLocal_48 = false;
			}
		}
	
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					func_29();
					func_27();
					break;
			
				case 8:
					if (bLocal_54 || bLocal_55)
					{
						if (bLocal_54)
						{
							bLocal_54 = false;
							SYSTEM::SETTIMERB(0);
							Global_113969.f_14054.f_82 = 1;
							bLocal_55 = true;
						}
						else if (SYSTEM::TIMERB() > 7500)
						{
							bLocal_55 = false;
							HUD::CLEAR_HELP(true);
						}
					}
					else
					{
						func_29();
						func_12();
					
						if (bLocal_51)
							func_11();
					
						if (func_10(FRONTEND_CONTROL, Global_20898, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						
							bLocal_51 = false;
							func_9();
							Global_20908 = true;
							func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_34();
						
							if (Global_20930.f_1 > 3)
								Global_20930.f_1 = 7;
						}
					}
					break;
			
				default:
					break;
			}
		
			if (func_8())
				func_2();
		}
		else
		{
			Global_20932 = 6;
			func_2();
		}
	
		if (func_1())
			func_2();
	}

	return;
}

BOOL func_1() // Position - 0x449 Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_2() // Position - 0x48C Hash - 0xB4012E69 ^0xCBCA76E6
{
	func_7();

	if (func_4(0))
		func_3();

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());

	if (bLocal_54)
		HUD::CLEAR_HELP(true);

	if (Global_113969.f_14054.f_83 == 0 || Global_113969.f_14054.f_82 == 0)
		func_3();

	MISC::SET_GAME_PAUSED(false);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3() // Position - 0x4EF Hash - 0x53295875 ^0x53295875
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8800, 25);
	MISC::SET_BIT(&Global_8801, 11);
	return;
}

BOOL func_4(int iParam0) // Position - 0x56C Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_44042 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x58E Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_6(iParam0, Global_44042);
}

BOOL func_6(int iParam0, int iParam1) // Position - 0x59F Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_7() // Position - 0x780 Hash - 0xC65DFBA5 ^0xD68DB962
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();
	Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 1;
	return;
}

BOOL func_8() // Position - 0x79F Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_9() // Position - 0x7C8 Hash - 0x6CF4C3D ^0xE9743895
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20919, true);

	return;
}

BOOL func_10(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x7E9 Hash - 0xBB00BE4E ^0xA27687FD
{
	if (PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1))
	{
		if (MISC::IS_PC_VERSION())
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
				return false;
	
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
			return false;
		else
			return true;
	}

	return false;
}

void func_11() // Position - 0x85B Hash - 0x6240034E ^0x1A6876B8
{
	int num;

	iLocal_52 = MISC::GET_GAME_TIMER();
	num = iLocal_52 - iLocal_53;

	if (num % 600 <= 300 && num < 3000)
		PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 100);

	return;
}

void func_12() // Position - 0x890 Hash - 0x76A20FA9 ^0x47806803
{
	int num;
	var txdName;
	var gamerHandle;
	int num2;

	if (iLocal_41 == 1)
	{
		if (bLocal_50)
		{
			iLocal_52 = MISC::GET_GAME_TIMER();
		
			if (iLocal_52 - iLocal_53 > 1000)
			{
				bLocal_49 = true;
				bLocal_50 = false;
			}
		}
	
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD))
			{
				iLocal_63 = 1;
				iLocal_64 = 0;
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD))
			{
				iLocal_63 = 0;
				iLocal_64 = 1;
			}
		}
	
		if (func_10(FRONTEND_CONTROL, Global_20906, 0) || func_10(FRONTEND_CONTROL, Global_20907, 0) || bLocal_49 || iLocal_63 == 1 || iLocal_64 == 1)
		{
			iLocal_63 = 0;
			iLocal_64 = 0;
			bLocal_49 = false;
			bLocal_50 = false;
			SYSTEM::SETTIMERB(0);
			bLocal_48 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_45 = uLocal_16[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39)];
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(100);
			
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (MISC::ARE_STRINGS_EQUAL(&Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/], "Silent Ringtone Dummy"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[iLocal_45 /*6*/], PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
			}
		}
	}

	if (Global_20908 == false)
	{
		if (func_10(FRONTEND_CONTROL, Global_20899, 0))
		{
			func_24();
			Global_20908 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_44 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39);
		
			if (iLocal_44 < 0)
				iLocal_44 = 0;
		
			Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
		
			if (iLocal_41 == 2)
			{
				num = Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259;
				Global_113969.f_14054[Global_20930 /*20*/].f_6 = Global_9605[Global_20930 /*2811*/][2 /*281*/].f_260[num];
				func_47(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
			
				if (Global_79389)
				{
					Global_4543360 = Global_9605[3 /*2811*/][2 /*281*/].f_259;
					func_20(2030, Global_9605[3 /*2811*/][2 /*281*/].f_259, -1, true);
					func_47(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_4543360), -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_47(Global_20911, "SET_THEME", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_19();
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 4)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_9 = Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259;
			
				if (Global_79389)
				{
					Global_4543361 = Global_9605[3 /*2811*/][4 /*281*/].f_259;
					func_20(2029, Global_9605[3 /*2811*/][4 /*281*/].f_259, -1, true);
				
					if (Global_4543361 == 0)
					{
						gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
						num2 = 0;
						NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == false;
					
						if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) && Global_4543364 == 0)
						{
							SYSTEM::SETTIMERA(0);
						
							while (!NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&gamerHandle, &txdName) && SYSTEM::TIMERA() < 3000)
							{
								SYSTEM::WAIT(0);
							
								if (SYSTEM::TIMERA() > 2999)
									num2 = 1;
							}
						
							if (num2 == 0)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_BACKGROUND_CREW_IMAGE");
								GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000" /*~a~*/);
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&txdName);
								GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
						}
						else
						{
							func_47(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
					else
					{
						func_47(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4543361), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					func_47(Global_20911, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_113969.f_14054[Global_20930 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(23), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 1)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_11 = { Global_9605[Global_20930 /*2811*/][1 /*281*/].f_144[Global_9605[Global_20930 /*2811*/][1 /*281*/].f_259 /*6*/] };
			
				if (Global_79389)
					func_20(1199, Global_9605[3 /*2811*/][1 /*281*/].f_259, -1, true);
			
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(18), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
				iLocal_43 = iLocal_44;
				func_47(Global_20911, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
			}
		
			if (iLocal_41 == 3)
			{
				Global_113969.f_14054[Global_20930 /*20*/].f_10 = Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259;
			
				if (Global_79389)
					func_20(1198, Global_113969.f_14054[3 /*20*/].f_10, -1, true);
			
				if (Global_113969.f_14054[Global_20930 /*20*/].f_10 == 1)
				{
					bLocal_51 = true;
					iLocal_53 = MISC::GET_GAME_TIMER();
				}
				else
				{
					bLocal_51 = false;
				}
			}
		
			if (iLocal_41 == 0)
			{
				if (Global_79389 == true)
				{
					Global_9605[3 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_43), SYSTEM::TO_FLOAT(19), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_43] /*4*/], 0, 0, 0, 0);
					func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(iLocal_44), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[uLocal_16[iLocal_44] /*4*/], 0, 0, 0, 0);
					iLocal_43 = iLocal_44;
					func_47(Global_20911, "DISPLAY_VIEW", 22f, SYSTEM::TO_FLOAT(iLocal_44), -1082130432, -1082130432, -1082130432);
					func_20(2092, Global_9605[3 /*2811*/][iLocal_41 /*281*/].f_259, -1, true);
				}
				else
				{
					Global_9605[0 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					Global_9605[1 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
					Global_9605[2 /*2811*/][iLocal_41 /*281*/].f_259 = uLocal_16[iLocal_44];
				
					if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
					{
						if (Global_44042 == 15)
						{
							if (Global_113969.f_14054.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_61 == fLocal_62;
								bLocal_54 = true;
							}
							else
							{
								func_47(Global_20911, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								MISC::SET_BIT(&Global_8800, 25);
								MISC::SET_BIT(&Global_8801, 11);
							
								if (Global_113969.f_14054.f_83 == 0)
								{
									HUD::CLEAR_HELP(true);
									_DISPLAY_HELP_TEXT("CELL_7051" /*When Sleep Mode is active, the Sleep symbol will be displayed near the Radar.*/, -1);
									Global_113969.f_14054.f_83 = 1;
								}
							}
						}
					}
					else
					{
						func_47(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						MISC::CLEAR_BIT(&Global_8800, 25);
						MISC::SET_BIT(&Global_8801, 11);
					}
				}
			}
		
			func_13(Global_20911, "SET_HEADER", &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);
		
			if (func_4(0))
				func_3();
		}
	}

	return;
}

void func_13(int iParam0, char* sParam1, const char* sParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6) // Position - 0x1148 Hash - 0xD2A7E1F6 ^0x3BA00BEB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		func_14(sParam3);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		func_14(sParam4);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		func_14(sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
		func_14(sParam6);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_14(const char* sParam0) // Position - 0x11A3 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void _DISPLAY_HELP_TEXT(char* text, int iParam1) // Position - 0x11B5 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_16(char* sParam0) // Position - 0x11CC Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x11E2 Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x11F9 Hash - 0x39E054FF ^0x41D02682
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (fParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));

	if (fParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));

	if (fParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));

	if (fParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		func_14(sParam7);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		func_14(sParam8);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		func_14(sParam9);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		func_14(sParam10);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		func_14(sParam11);

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_19() // Position - 0x12AC Hash - 0x8961A3BB ^0x93F6EC7D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_20930 == CHAR_MICHAEL)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_FRANKLIN)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_TREVOR)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				default:
					break;
			}
		}
	
		if (Global_20930 == CHAR_MULTIPLAYER)
		{
			switch (Global_4543360)
			{
				case 1:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
					break;
			
				case 2:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
					break;
			
				case 3:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
					break;
			
				case 4:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
					break;
			
				case 5:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
					break;
			
				case 6:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
					break;
			
				case 7:
					PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
					break;
			
				default:
					break;
			}
		}
	}

	return;
}

void func_20(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1523 Hash - 0x99A9B13C ^0x970C9246
{
	Hash statName;

	if (iParam0 != 14835)
	{
		statName = func_21(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, iParam1, bParam3);
	}

	return;
}

Hash func_21(int iParam0, int iParam1) // Position - 0x1551 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_22(iParam1));
}

int func_22(int iParam0) // Position - 0x1566 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_23();
	
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

int func_23() // Position - 0x159A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

void func_24() // Position - 0x15A6 Hash - 0xDD2ADDA2 ^0x5ABDD2B5
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20919, true);
		func_25();
	}

	return;
}

void func_25() // Position - 0x15CB Hash - 0xD56EB04 ^0x9DB5936E
{
	if (func_26())
		MOBILE::CELL_SET_INPUT(5);

	return;
}

BOOL func_26() // Position - 0x15DF Hash - 0xE8350107 ^0x112591EA
{
	eViewModeContext camActiveViewModeContext;
	eViewMode camViewModeForContext;
	BOOL flag;

	if (Global_79389)
		return false;

	flag = 0;
	camActiveViewModeContext = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	camViewModeForContext = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);

	if (camViewModeForContext == FIRST_PERSON)
		flag = 1;

	if (Global_4543362 || flag)
		return true;

	return true;
}

void func_27() // Position - 0x1626 Hash - 0x92ECD751 ^0x7A634339
{
	if (Global_20908 == false)
	{
		if (func_10(FRONTEND_CONTROL, Global_20899, 0))
		{
			func_24();
			Global_20908 = true;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "GET_CURRENT_SELECTION");
			iLocal_39 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_39))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_42 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_39);
			iLocal_41 = uLocal_16[iLocal_42];
		
			switch (iLocal_41)
			{
				case 0:
					if (Global_79389 == false)
					{
						if (Global_44042 == 15)
						{
							if (Global_113969.f_14054.f_82 == 0)
							{
								HUD::CLEAR_HELP(true);
								func_16("CELL_7050" /*If you select Sleep Mode you will not receive incoming calls. This can pause game story progression. ~n~Select Normal Mode from this menu or trigger an existing mission to leave Sleep Mode.*/);
								fLocal_61 == fLocal_62;
								bLocal_54 = true;
							}
						}
					}
					break;
			
				case 1:
					break;
			
				case 2:
					break;
			
				case 3:
					break;
			}
		
			if (Global_20930.f_1 > 3)
				Global_20930.f_1 = 8;
		
			func_28();
			bLocal_50 = true;
			iLocal_53 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

void func_28() // Position - 0x16F8 Hash - 0x50A3369 ^0x7DA30B86
{
	var unk;
	int value;
	var gamerHandle;
	int num;
	int num2;

	func_47(Global_20911, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_37 = 0;
	unk = 19;
	value = 0;

	if (Global_79389)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_9605[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_CREWEMB" /*Crew Emblem*/, 16);
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
	
		if (!NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
			TEXT_LABEL_ASSIGN_STRING(&Global_9605[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_840" /*Default*/, 16);
	}

	while (value < 19)
	{
		num = 0;
		num2 = 18;
		Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_84[num2] = 5000;
	
		while (num < 19)
		{
			if (Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_124[num] == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_84[num] < Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_84[num2])
					{
						num2 = num;
						func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_104[num2]), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[value] = num2;
		unk[num2] = 1;
	
		if (MISC::ARE_STRINGS_EQUAL(&Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/]))
		{
			iLocal_46 = value;
		
			if (iLocal_46 < 0)
				iLocal_46 = 0;
		
			if (iLocal_41 == 1 || iLocal_41 == 4 || iLocal_41 == 2)
			{
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_43 = value;
			}
		
			if (iLocal_41 == 0 && Global_79389 == true)
			{
				func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(22), SYSTEM::TO_FLOAT(value), SYSTEM::TO_FLOAT(48), -1f, -1f, &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[num2 /*4*/], 0, 0, 0, 0);
				iLocal_43 = value;
			}
		}
	
		if (Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_124[value] == 1)
			iLocal_37 = iLocal_37 + 1;
	
		value = value + 1;
	}

	func_47(Global_20911, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", &Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_41 /*281*/].f_259 /*4*/], 0, 0, 0, 0);

	if (Global_20918)
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

void func_29() // Position - 0x1A3D Hash - 0xFDECAEB0 ^0xE7593BB9
{
	if (bLocal_60)
		if (SYSTEM::TIMERA() > 50)
			bLocal_60 = false;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (func_10(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD, 0))
		{
			if (iLocal_38 > 0)
				iLocal_38 = iLocal_38 - 1;
		
			func_32();
		}
	
		if (func_10(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD, 0))
		{
			iLocal_38 = iLocal_38 + 1;
		
			if (iLocal_38 == iLocal_37)
				iLocal_38 = 0;
		
			func_30();
		}
	}

	if (bLocal_60 == false)
	{
		if (func_10(FRONTEND_CONTROL, Global_20906, 0))
		{
			if (iLocal_38 > 0)
				iLocal_38 = iLocal_38 - 1;
		
			func_32();
			bLocal_60 = true;
			SYSTEM::SETTIMERA(0);
		}
	
		if (func_10(FRONTEND_CONTROL, Global_20907, 0))
		{
			iLocal_38 = iLocal_38 + 1;
		
			if (iLocal_38 == iLocal_37)
				iLocal_38 = 0;
		
			func_30();
			bLocal_60 = true;
			SYSTEM::SETTIMERA(0);
		}
	}

	return;
}

void func_30() // Position - 0x1AEA Hash - 0x27F2007C ^0xC3C664B3
{
	func_47(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_31();
	return;
}

void func_31() // Position - 0x1B27 Hash - 0x47667904 ^0x5056AC19
{
	if (func_26())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(2);
		else
			MOBILE::CELL_SET_INPUT(1);

	return;
}

void func_32() // Position - 0x1B4A Hash - 0xE70DEC1F ^0x240AACFE
{
	func_47(Global_20911, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20919, true);
	func_33();
	return;
}

void func_33() // Position - 0x1B87 Hash - 0xA6C955E7 ^0xAF2E403B
{
	if (func_26())
		if (Global_21150 == 0)
			MOBILE::CELL_SET_INPUT(1);
		else
			MOBILE::CELL_SET_INPUT(2);

	return;
}

void func_34() // Position - 0x1BAA Hash - 0xB2338CED ^0x7D3B560B
{
	var unk;
	int i;
	int num;
	int num2;

	iLocal_37 = 0;
	unk = 20;

	for (i = 0; i < 9; i = i + 1)
	{
		num = 0;
		num2 = 9;
		Global_9605[Global_20930 /*2811*/][num2 /*281*/] = 5000;
	
		if (MISC::GET_PROFILE_SETTING(2) == 0)
			Global_9605[Global_20930 /*2811*/][3 /*281*/].f_280 = 0;
		else
			Global_9605[Global_20930 /*2811*/][3 /*281*/].f_280 = 1;
	
		while (num < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][num /*281*/].f_280 == 1)
			{
				if (unk[num] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][num /*281*/] < Global_9605[Global_20930 /*2811*/][num2 /*281*/])
					{
						if (Global_79389)
						{
							if (num == 0)
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
							else
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (func_35() == 2)
						{
							if (num == 4 || num == 5)
							{
							}
							else
							{
								num2 = num;
								func_43(num, num2);
								func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
							}
						}
						else if (num == 5)
						{
						}
						else
						{
							num2 = num;
							func_43(num, num2);
							func_18(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(iLocal_47), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][num2 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
		
			num = num + 1;
		}
	
		uLocal_16[i] = num2;
		unk[num2] = 1;
	
		if (Global_9605[Global_20930 /*2811*/][i /*281*/].f_280 == 1)
			iLocal_37 = iLocal_37 + 1;
	}

	func_47(Global_20911, "DISPLAY_VIEW", 13f, SYSTEM::TO_FLOAT(iLocal_42), -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", "CELL_16" /*Settings*/, 0, 0, 0, 0);

	if (Global_20918)
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
	}
	else
	{
		func_18(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}

	func_18(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_8800, 17);
	return;
}

int func_35() // Position - 0x1E76 Hash - 0xDE820CA2 ^0x7D97FBB8
{
	if (Global_79389)
		Global_20930 = CHAR_MULTIPLAYER;
	else
		Global_20930 = _GET_CURRENT_PLAYER_CHARACTER();

	if (Global_20930 > CHAR_MULTIPLAYER)
		Global_20930 = CHAR_MULTIPLAYER;

	return Global_113969.f_14054[Global_20930 /*20*/].f_7;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x1EAC Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_37();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_37() // Position - 0x1EC5 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_39(character) && !func_38(14) || Global_112917)
			{
				if (Global_113969.f_2366.f_539.f_4321 != character && func_39(Global_113969.f_2366.f_539.f_4321))
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

BOOL func_38(int iParam0) // Position - 0x1FC2 Hash - 0x937D8816 ^0x937D8816
{
	return Global_44042 == iParam0;
}

BOOL func_39(eCharacter echParam0) // Position - 0x1FD0 Hash - 0x8907F004 ^0x8907F004
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x1FDC Hash - 0xAC4E9801 ^0xB379A75F
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

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2019 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_39(character))
		return func_42(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_42(eCharacter echParam0) // Position - 0x203E Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2169[echParam0 /*29*/];
}

void func_43(int iParam0, int iParam1) // Position - 0x204D Hash - 0xA52A3B89 ^0xA52A3B89
{
	switch (iParam0)
	{
		case 0:
			if (Global_79389)
				iLocal_47 = 19;
			else if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				iLocal_47 = 26;
			else
				iLocal_47 = 25;
			break;
	
		case 3:
			if (Global_9605[Global_20930 /*2811*/][3 /*281*/].f_259 == 1)
				iLocal_47 = 20;
			else
				iLocal_47 = 21;
			break;
	
		default:
			iLocal_47 = Global_9605[Global_20930 /*2811*/][iParam1 /*281*/].f_6;
			break;
	}

	return;
}

void func_44() // Position - 0x20CF Hash - 0x62DD9502 ^0xE4AB0EE2
{
	if (Global_44042 != 15)
	{
		_UPDATE_CURRENT_PLAYER_CHARACTER();
		Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 0;
	}

	return;
}

int func_45(int iParam0, int iParam1) // Position - 0x20F6 Hash - 0x744E461C ^0x36023077
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14835)
	{
		statHash = func_21(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x2125 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_38(14))
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

void func_47(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21C7 Hash - 0x5F496D0E ^0x86F8205
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));

	if (iParam3 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));

	if (iParam4 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));

	if (iParam5 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));

	if (iParam6 != -1f)
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

