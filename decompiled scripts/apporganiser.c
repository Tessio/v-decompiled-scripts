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
	BOOL bLocal_16 = 0;
	BOOL bLocal_17 = 0;
	BOOL bLocal_18 = 0;
	BOOL bLocal_19 = 0;
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_14();
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	func_8();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (Global_20930.f_1 != 9)
		{
			if (!bLocal_16)
			{
				bLocal_16 = true;
			}
			else if (Global_20912)
			{
				if (!bLocal_17)
				{
					bLocal_17 = true;
					func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_20911, true);
					func_7(Global_20911, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
		
			if (func_2())
				func_14();
		}
	
		if (func_1())
			func_14();
	}

	return;
}

BOOL func_1() // Position - 0xDC Hash - 0x57EB5377 ^0xDC0824ED
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 3 || Global_20930.f_1 == 0 || Global_20874 == 1)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

BOOL func_2() // Position - 0x11F Hash - 0x1F39C732 ^0x92A1ED04
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return true;
	}

	return false;
}

void func_3() // Position - 0x148 Hash - 0xE4814 ^0x6EAF049F
{
	if (!bLocal_18)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP))
		{
			bLocal_18 = true;
			func_7(Global_20911, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP))
	{
		bLocal_18 = false;
	}

	if (!bLocal_19)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN))
		{
			bLocal_19 = true;
			func_7(Global_20911, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN))
	{
		bLocal_19 = false;
	}

	if (!bLocal_20)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
		{
			bLocal_20 = true;
			func_7(Global_20911, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT))
	{
		bLocal_20 = false;
	}

	if (!bLocal_21)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
		{
			bLocal_21 = true;
			func_7(Global_20911, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT))
	{
		bLocal_21 = false;
	}

	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x25C Hash - 0x20BE6D95 ^0x5AF1F294
{
	int num;
	int value;
	BOOL flag;
	int num2;
	int num3;
	int value2;
	char* str;

	if (Global_98600 == Global_98601)
		if (!bParam1)
			return;

	if (iParam0 == 0)
		return;

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
		return;

	func_8();
	num = Global_98604;
	value = Global_98603;
	flag = true;
	num2 = 0;
	num3 = 0;
	value2 = 0;

	while (flag)
	{
		num3 = num2;
		num2 = Global_98605[num /*25*/][value];
	
		if (!(num2 == num3))
		{
			if (!(num2 == 0))
			{
				switch (num)
				{
					case 0:
						str = "fSu" /*SUNDAY*/;
						break;
				
					case 1:
						str = "fMo" /*MONDAY*/;
						break;
				
					case 2:
						str = "fTu" /*TUESDAY*/;
						break;
				
					case 3:
						str = "fWe" /*WEDNESDAY*/;
						break;
				
					case 4:
						str = "fTh" /*THURSDAY*/;
						break;
				
					case 5:
						str = "fFr" /*FRIDAY*/;
						break;
				
					case 6:
						str = "fSa" /*SATURDAY*/;
						break;
				}
			
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(-1f);
				func_6(str);
				func_6(func_5(num2));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				value2 = value2 + 1;
			}
		}
	
		value = value + 1;
	
		if (value > 23)
		{
			value = 0;
			num = num + 1;
		}
	
		if (num > 6)
			num = 0;
	
		if (num == Global_98604 && value == Global_98603)
			flag = false;
	}

	Global_98601 = Global_98600;
	return;
}

char* func_5(int iParam0) // Position - 0x3D0 Hash - 0x3777C4BF ^0x3777C4BF
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0" /*NOT SET!*/;
	
		case 1:
			return "ORG_EV_1" /*House Viewing*/;
	}

	return "ORG_EV_0" /*NOT SET!*/;
}

void func_6(char* sParam0) // Position - 0x400 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_7(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x412 Hash - 0x5F496D0E ^0x86F8205
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

void func_8() // Position - 0x475 Hash - 0x5365033E ^0x4AB2862F
{
	int clockMonth;
	int clockDayOfMonth;
	int clockHours;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int j;
	int num6;
	int num7;

	if (!Global_98599)
	{
		Global_98783 = CLOCK::GET_CLOCK_MONTH();
		Global_98782 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		Global_98781 = CLOCK::GET_CLOCK_HOURS();
		Global_98599 = true;
		Global_98604 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		Global_98603 = CLOCK::GET_CLOCK_HOURS();
		func_12();
		return;
	}

	clockMonth = CLOCK::GET_CLOCK_MONTH();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	num = Global_98783;
	num2 = Global_98782;
	num3 = Global_98781;
	num4 = 0;
	num5 = 0;
	i = 0;
	j = 0;
	num6 = 0;
	num7 = func_9(num2, num, clockDayOfMonth, clockMonth);

	if (num7 > 0)
	{
		num6 = 0;
	
		if (num7 > 7)
		{
			i = 0;
			j = 0;
		
			for (i = 0; i < 7; i = i + 1)
			{
				for (j = 0; j < 24; j = j + 1)
				{
					if (!(Global_98605[num4 /*25*/][num5] == 0))
					{
						Global_98600 = Global_98600 + 1;
						Global_98602 = Global_98602 - 1;
					}
				
					Global_98605[num4 /*25*/][num5] = 0;
				}
			}
		}
		else if (num7 > 1)
		{
			num6 = num6 + ((num7 - 1) * 24);
		}
	
		num6 = num6 + (24 - num3);
		num6 = num6 + (24 - 24 - clockHours);
		i = 0;
		num5 = Global_98603;
		num4 = Global_98604;
	
		for (i = 0; i < num6; i = i + 1)
		{
			if (num5 > 23)
			{
				num5 = 0;
				num4 = num4 + 1;
			}
		
			if (num4 > 6)
				num4 = 0;
		
			if (!(Global_98605[num4 /*25*/][num5] == 0))
			{
				Global_98600 = Global_98600 + 1;
				Global_98602 = Global_98602 - 1;
			}
		
			Global_98605[num4 /*25*/][num5] = 0;
			num5 = num5 + 1;
		}
	
		Global_98603 = num5 - 1;
		Global_98604 = num4;
	}
	else
	{
		if (num3 > clockHours)
		{
			Global_98783 = clockMonth;
			Global_98782 = clockDayOfMonth;
			Global_98781 = clockHours;
			Global_98604 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
			Global_98603 = CLOCK::GET_CLOCK_HOURS();
			return;
		}
	
		if (num3 == clockHours)
		{
			return;
		}
		else
		{
			num6 = clockHours - num3;
			i = 0;
			num5 = Global_98603;
			num4 = Global_98604;
		
			for (i = 0; i < num6; i = i + 1)
			{
				if (!(Global_98605[num4 /*25*/][num5] == 0))
				{
					Global_98600 = Global_98600 + 1;
					Global_98602 = Global_98602 - 1;
				}
			
				Global_98605[num4 /*25*/][num5] = 0;
				num5 = num5 + 1;
			
				if (num5 > 23)
				{
					num5 = 0;
					num4 = num4 + 1;
				}
			
				if (num4 > 6)
					num4 = 0;
			}
		
			Global_98603 = num5;
			Global_98604 = num4;
		}
	}

	Global_98600 > Global_98601;

	if (num == clockMonth && num3 == clockHours && num2 == clockDayOfMonth)
	{
	}
	else
	{
		Global_98783 = clockMonth;
		Global_98782 = clockDayOfMonth;
		Global_98781 = clockHours;
	}

	return;
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x712 Hash - 0x4D239174 ^0x4D239174
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	i = 0;

	if (!(iParam1 == iParam3))
	{
		if (iParam1 < iParam3)
		{
			num = func_10(iParam1) - func_10(iParam1) - iParam0;
			num2 = 0;
		
			if (iParam3 > iParam1 + 1)
			{
				num3 = iParam3 - iParam1;
				num4 = iParam1 + 1;
				i = 0;
			
				for (i = 0; i < num3; i = i + 1)
				{
					if (num4 > 11)
						num4 = 0;
				
					num2 = num2 + func_10(num4);
					num4 = num4 + 1;
				}
			}
		
			num5 = func_10(iParam3) - iParam2;
			num6 = num + num2 + num5;
			return num6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
			return 0;
	
		if (iParam2 == iParam0)
			return 0;
	
		return iParam2 - iParam0;
	}

	return 0;
}

int func_10(int iParam0) // Position - 0x7C5 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_11(iParam0);
}

int func_11(int iParam0) // Position - 0x7D3 Hash - 0x53B813BF ^0x53B813BF
{
	switch (iParam0)
	{
		case 8:
			return 30;
	
		case 3:
			return 30;
	
		case 5:
			return 30;
	
		case 10:
			return 30;
	
		case 1:
			return 28;
	
		default:
		
	}

	return 31;
}

void func_12() // Position - 0x81F Hash - 0x142430B7 ^0x142430B7
{
	int i;
	int j;

	Global_98603 = 0;
	Global_98604 = 0;
	i = 0;
	j = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		for (j = 0; j < 24; j = j + 1)
		{
			Global_98605[i /*25*/][j] = 0;
		}
	}

	func_13();
	return;
}

void func_13() // Position - 0x86D Hash - 0xA0263FDD ^0x9E333C9E
{
	Global_98603 = 0;
	Global_98604 = 0;
	Global_98781 = CLOCK::GET_CLOCK_HOURS();
	Global_98782 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	Global_98783 = CLOCK::GET_CLOCK_MONTH();
	return;
}

void func_14() // Position - 0x897 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

