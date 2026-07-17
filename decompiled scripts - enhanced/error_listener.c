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
	char* sLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	float fLocal_80 = 0f;
	var uLocal_81 = 0;
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
	sLocal_35 = "NULL";
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	fLocal_45 = 0f;
	fLocal_49 = -0.0375f;
	fLocal_50 = 0.17f;
	iLocal_53 = 3;
	iLocal_57 = 1;
	iLocal_58 = 65;
	iLocal_59 = 49;
	iLocal_60 = 64;
	fLocal_80 = (0.05f + 0.275f) - 0.01f;
	func_12();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (func_11())
			return;
	
		func_1();
	}

	return;
}

void func_1() // Position - 0xA2 (162)
{
	func_2();
	return;
}

void func_2() // Position - 0xAE (174)
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

void func_3(var uParam0) // Position - 0x116 (278)
{
	eEventType type;

	type = *uParam0;

	if (_IS_FMMC_ACTIVE() && func_4(type) && type != EVENT_ERRORS_UNKNOWN_ERROR && NETWORK::NETWORK_CAN_BAIL())
		NETWORK::NETWORK_BAIL(0, 1, 0);

	return;
}

BOOL func_4(eEventType eetParam0) // Position - 0x14F (335)
{
	return eetParam0 == EVENT_ERRORS_ARRAY_OVERFLOW || eetParam0 == EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam0 == EVENT_ERRORS_STACK_OVERFLOW || eetParam0 == EVENT_ERRORS_UNKNOWN_ERROR;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x17D (381)
{
	return Global_1845347[PLAYER::PLAYER_ID() /*884*/].f_185 != 0;
}

int func_6(var uParam0) // Position - 0x194 (404)
{
	if (Global_34111.f_61 < 20)
	{
		Global_34111[Global_34111.f_61 /*3*/] = { *uParam0 };
		Global_34111.f_61 = Global_34111.f_61 + 1;
		return 1;
	}

	return 0;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x1C7 (455)
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_34111.f_61)
	{
		if (Global_34111[*uParam1 /*3*/] == *uParam0 && Global_34111[*uParam1 /*3*/].f_2 == uParam0->f_2)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_8(eEventGroup eegParam0, int iParam1, eEventType eetParam2, var uParam3) // Position - 0x215 (533)
{
	var eventData;

	if (eetParam2 == EVENT_ERRORS_UNKNOWN_ERROR || eetParam2 == EVENT_ERRORS_ARRAY_OVERFLOW || eetParam2 == EVENT_ERRORS_INSTRUCTION_LIMIT || eetParam2 == EVENT_ERRORS_STACK_OVERFLOW)
		if (SCRIPT::GET_EVENT_DATA(eegParam0, iParam1, &eventData, 1))
			uParam3->f_2 = eventData;

	return;
}

void func_9(var uParam0) // Position - 0x25A (602)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	return;
}

BOOL func_10(eEventType eetParam0) // Position - 0x270 (624)
{
	return func_4(eetParam0);
}

BOOL func_11() // Position - 0x27E (638)
{
	return false;
}

void func_12() // Position - 0x287 (647)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

