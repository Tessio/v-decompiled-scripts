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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
			func_4(19);
	
		func_3();
	}

	func_2(19);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);

	while (!AUDIO::LOAD_STREAM("CONSTRUCTION_SITE_STREAM", "FBI_HEIST_SOUNDSET"))
	{
		SYSTEM::WAIT(0);
	}

	AUDIO::PLAY_STREAM_FROM_POSITION(-147f, -1005f, 28f);

	while (func_1(70))
	{
		SYSTEM::WAIT(0);
	}

	func_4(19);
	func_3();
	return;
}

BOOL func_1(int iParam0) // Position - 0xB6 Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_2(int iParam0) // Position - 0xE3 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113969.f_9088.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_113969.f_9088.f_99.f_219[num], offset);
	return 1;
}

void func_3() // Position - 0x13A Hash - 0xC9992D9D ^0x61BC5647
{
	AUDIO::STOP_STREAM();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_4(int iParam0) // Position - 0x14E Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113969.f_9088.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_113969.f_9088.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

