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
	char* sLocal_18 = 0;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
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
	sLocal_18 = "NULL";
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
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_10();

	while (!func_9(18))
	{
		func_1();
		SYSTEM::WAIT(0);
	}

	func_10();
	return;
}

void func_1() // Position - 0xA4 Hash - 0xF39FC792 ^0xDDF5B2B3
{
	switch (iLocal_46)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !MISC::IS_AUTO_SAVE_IN_PROGRESS() && !func_8() && !func_7())
			{
				SCRIPT::REQUEST_SCRIPT("taxiService");
				iLocal_46 = 1;
			}
			break;
	
		case 1:
			if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
			{
				SYSTEM::START_NEW_SCRIPT("taxiService", SPECIAL_ABILITY);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
				iLocal_46 = 2;
			}
			break;
	
		case 2:
			switch (func_5("AM_H_TAXI1" /*Use ~INPUT_CONTEXT~ to flag down passing taxis.*/))
			{
				case 2:
					func_2("AM_H_TAXI1" /*Use ~INPUT_CONTEXT~ to flag down passing taxis.*/, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
			
				case 1:
					iLocal_46 = 3;
					break;
			}
			break;
	
		case 3:
			switch (func_5("AM_H_TAXI2" /*Taxi pick ups can be requested through the phone.*/))
			{
				case 2:
					func_2("AM_H_TAXI2" /*Taxi pick ups can be requested through the phone.*/, 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
			
				case 1:
					iLocal_46 = 4;
					break;
			}
			break;
	
		case 4:
			func_10();
			break;
	}

	return;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x19C Hash - 0xC7BD9BA5 ^0xC7BD9BA5
{
	func_3(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1BD Hash - 0x2532EEAE ^0x45AAC438
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113969.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113969.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 + 1;
		func_4();
	}

	return;
}

void func_4() // Position - 0x390 Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113969.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 0))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[0])
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 1))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[1])
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113969.f_20413[i /*16*/].f_11, 2))
			if (Global_113969.f_20413[i /*16*/].f_12 > Global_113969.f_20413.f_146[2])
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[i /*16*/].f_12;
	}

	return;
}

int func_5(char* sParam0) // Position - 0x4A7 Hash - 0x3411B367 ^0xD0D08AE8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112609))
		return 1;

	if (func_6(sParam0))
		return 0;

	return 2;
}

BOOL func_6(char* sParam0) // Position - 0x4CE Hash - 0x486E76BF ^0xD39F7AD6
{
	int i;

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113969.f_20413[i /*16*/]))
			return true;
	}

	return false;
}

BOOL func_7() // Position - 0x509 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_79650)
		return true;
	else if (Global_64160 && !Global_64166)
		return true;

	return false;
}

BOOL func_8() // Position - 0x533 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_101572.f_1;
}

BOOL func_9(int iParam0) // Position - 0x541 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_10() // Position - 0x56D Hash - 0xFCDECC15 ^0x5D8E478B
{
	if (func_6("AM_H_TAXI1" /*Use ~INPUT_CONTEXT~ to flag down passing taxis.*/))
		func_11("AM_H_TAXI1" /*Use ~INPUT_CONTEXT~ to flag down passing taxis.*/, 1);

	if (func_6("AM_H_TAXI2" /*Taxi pick ups can be requested through the phone.*/))
		func_11("AM_H_TAXI2" /*Taxi pick ups can be requested through the phone.*/, true);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_11(char* sParam0, BOOL bParam1) // Position - 0x59D Hash - 0xEE96521C ^0xD0BF34FA
{
	int i;
	int j;

	if (Global_112606 && bParam1)
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
			HUD::CLEAR_HELP(false);

	for (i = 0; i < Global_113969.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113969.f_20413[i /*16*/]))
		{
			for (j = i; j <= Global_113969.f_20413.f_145 - 2; j = j + 1)
			{
				func_13(j, j + 1);
			}
		
			func_12(Global_113969.f_20413.f_145 - 1);
			Global_113969.f_20413.f_145 = Global_113969.f_20413.f_145 - 1;
			func_4();
			return;
		}
	}

	return;
}

void func_12(int iParam0) // Position - 0x64A Hash - 0x90D401A2 ^0x85446B2C
{
	TEXT_LABEL_ASSIGN_STRING(&Global_113969.f_20413[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_13(int iParam0, int iParam1) // Position - 0x6E4 Hash - 0x812DB4B8 ^0x93F5D8C6
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x7F4 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

