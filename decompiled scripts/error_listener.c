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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	func_12();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (func_11())
			return;
	
		func_1();
	}

	return;
}

void func_1() // Position - 0xA2 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_2();
	return;
}

void func_2() // Position - 0xAE Hash - 0x9849FBAF ^0xF10EECE0
{
	int i;
	eEventType eventAtIndex;
	eEventType type;
	var unk3;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i);
	
		if (func_10(eventAtIndex))
		{
			func_9(&type);
			func_8(SCRIPT_EVENT_QUEUE_ERRORS, i, eventAtIndex, &type);
			type.f_1 = MISC::GET_FRAME_COUNT() - 1;
			type = eventAtIndex;
		
			if (!func_7(&type, &unk3))
				func_6(&type);
		
			func_3(&type);
		}
	}

	return;
}

void func_3(var uParam0) // Position - 0x116 Hash - 0x4D586789 ^0x72E5C9C2
{
	eEventType type;

	type = *uParam0;

	if (_IS_FMMC_ACTIVE() && func_4(type) && type != EVENT_ERRORS_ARRAY_OVERFLOW && NETWORK::NETWORK_CAN_BAIL())
		NETWORK::NETWORK_BAIL(0, 1, 0);

	return;
}

BOOL func_4(eEventType eetParam0) // Position - 0x14F Hash - 0x6AE23759 ^0x6AE23759
{
	return eetParam0 == EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam0 == EVENT_ERRORS_STACK_OVERFLOW || eetParam0 == EVENT_0x063E563B || eetParam0 == EVENT_ERRORS_ARRAY_OVERFLOW;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x17D Hash - 0x9A79549B ^0x4A0EF303
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193 != 0;
}

int func_6(var uParam0) // Position - 0x194 Hash - 0xF9C22FE1 ^0x58D68A6C
{
	if (Global_33227.f_61 < 20)
	{
		Global_33227[Global_33227.f_61 /*3*/] = { *uParam0 };
		Global_33227.f_61 = Global_33227.f_61 + 1;
		return 1;
	}

	return 0;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x1C7 Hash - 0x8236090F ^0x52F4D4BC
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_33227.f_61)
	{
		if (Global_33227[*uParam1 /*3*/] == *uParam0 && Global_33227[*uParam1 /*3*/].f_2 == uParam0->f_2)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_8(eEventGroup eegParam0, int iParam1, eEventType eetParam2, var uParam3) // Position - 0x215 Hash - 0xE80F0CB3 ^0x3305D20C
{
	var eventData;

	if (eetParam2 == EVENT_ERRORS_ARRAY_OVERFLOW || eetParam2 == EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam2 == EVENT_ERRORS_STACK_OVERFLOW || eetParam2 == EVENT_0x063E563B)
		if (SCRIPT::GET_EVENT_DATA(eegParam0, iParam1, &eventData, 1))
			uParam3->f_2 = eventData;

	return;
}

void func_9(var uParam0) // Position - 0x25A Hash - 0x69039F36 ^0x23DFCE77
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	return;
}

BOOL func_10(eEventType eetParam0) // Position - 0x270 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_4(eetParam0);
}

BOOL func_11() // Position - 0x27E Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_12() // Position - 0x287 Hash - 0xCE5FB49E ^0x52B72321
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

