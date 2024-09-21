void main() // Position - 0x0 Hash - 0xCD24592F ^0xE692A8FF
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}

	return;
}

void func_1() // Position - 0x1C Hash - 0xF933B2AA ^0x12BAFCE2
{
	int i;
	int hudIndex;

	i = 0;

	for (i = 0; i < Global_112618; i = i + 1)
	{
		if (Global_112618[i /*28*/].f_21 != 0)
		{
			hudIndex = i;
		
			if (MISC::GET_GAME_TIMER() > Global_112618[i /*28*/].f_21 && Global_112618[i /*28*/].f_21 != -1)
			{
				if (func_3(i))
					HUD::CLEAR_FLOATING_HELP(hudIndex, false);
			
				func_2(i);
			}
			else if (func_3(i))
			{
				if (Global_112618[i /*28*/].f_21 != -1)
				{
					if (!IS_BIT_SET(Global_112618[i /*28*/].f_27, 0))
					{
						Global_112618[i /*28*/].f_21 = Global_112618[i /*28*/].f_21 + SYSTEM::ROUND(MISC::GET_FRAME_TIME() * 1000f);
					
						if (HUD::IS_FLOATING_HELP_TEXT_ON_SCREEN(hudIndex))
							MISC::SET_BIT(&(Global_112618[i /*28*/].f_27), 0);
					}
				}
			
				if (Global_112618[i /*28*/].f_24.f_2 != 9999f)
					if (Global_112618[i /*28*/].f_23 != 0)
						if (!ENTITY::IS_ENTITY_DEAD(Global_112618[i /*28*/].f_23, false))
							if (!IS_BIT_SET(Global_112618[i /*28*/].f_27, 3))
								HUD::SET_FLOATING_HELP_TEXT_WORLD_POSITION(hudIndex, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112618[i /*28*/].f_23, Global_112618[i /*28*/].f_24));
							else
								HUD::SET_FLOATING_HELP_TEXT_TO_ENTITY(hudIndex, Global_112618[i /*28*/].f_23, Global_112618[i /*28*/].f_24, Global_112618[i /*28*/].f_24.f_1);
					else if (Global_112618[i /*28*/].f_24 != 0f || Global_112618[i /*28*/].f_24.f_1 != 0f || Global_112618[i /*28*/].f_24.f_2 != 0f)
						HUD::SET_FLOATING_HELP_TEXT_WORLD_POSITION(hudIndex, Global_112618[i /*28*/].f_24);
				else
					HUD::SET_FLOATING_HELP_TEXT_SCREEN_POSITION(hudIndex, Global_112618[i /*28*/].f_24, Global_112618[i /*28*/].f_24.f_1);
			}
			else if (MISC::GET_GAME_TIMER() - Global_112618[i /*28*/].f_22 > 1000)
			{
				func_2(i);
			}
		}
	}

	return;
}

void func_2(int iParam0) // Position - 0x204 Hash - 0xFF642A5F ^0xC2119F9C
{
	Global_112618[iParam0 /*28*/].f_21 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_112618[iParam0 /*28*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_112618[iParam0 /*28*/].f_4), "", 64);
	Global_112618[iParam0 /*28*/].f_23 = 0;
	Global_112618[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112618[iParam0 /*28*/].f_27 = 0;
	Global_112618[iParam0 /*28*/].f_20 = 0;
	Global_112618[iParam0 /*28*/].f_22 = 0;
	return;
}

BOOL func_3(int iParam0) // Position - 0x26C Hash - 0x36A56CF ^0xBEF23AD2
{
	int num;

	num = iParam0;

	if (!MISC::ARE_STRINGS_EQUAL(&Global_112618[iParam0 /*28*/], "") && !MISC::IS_STRING_NULL(&Global_112618[iParam0 /*28*/]))
		if (IS_BIT_SET(Global_112618[iParam0 /*28*/].f_27, 1))
			if (IS_BIT_SET(Global_112618[iParam0 /*28*/].f_27, 2))
				return func_7(num, &Global_112618[iParam0 /*28*/], &(Global_112618[iParam0 /*28*/].f_4), Global_112618[iParam0 /*28*/].f_20);
			else
				return func_6(num, &Global_112618[iParam0 /*28*/], &(Global_112618[iParam0 /*28*/].f_4));
		else if (IS_BIT_SET(Global_112618[iParam0 /*28*/].f_27, 2))
			return func_5(num, &Global_112618[iParam0 /*28*/], Global_112618[iParam0 /*28*/].f_20);
		else
			return func_4(num, &Global_112618[iParam0 /*28*/]);

	return false;
}

BOOL func_4(int iParam0, char* sParam1) // Position - 0x33F Hash - 0x871151AA ^0x66944043
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(1 + iParam0);
}

BOOL func_5(int iParam0, char* sParam1, int iParam2) // Position - 0x355 Hash - 0x3630DF7D ^0x486BE87F
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(1 + iParam0);
}

BOOL func_6(int iParam0, char* sParam1, char* sParam2) // Position - 0x371 Hash - 0x3630DF7D ^0xBE0A9680
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(1 + iParam0);
}

BOOL func_7(int iParam0, char* sParam1, char* sParam2, int iParam3) // Position - 0x38D Hash - 0x65335BD6 ^0xC7184D16
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(1 + iParam0);
}

