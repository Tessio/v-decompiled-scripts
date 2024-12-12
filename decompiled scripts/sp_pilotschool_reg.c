// Program registers 1 globals at index 12 starting from Global_3145728
void main() // Position - 0x0 Hash - 0x31F89A10 ^0x5B83DDB2
{
	MISC::START_SAVE_DATA(&Global_3145728, 1, true);
	func_1();
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4546881, 1);
	return;
}

void func_1() // Position - 0x23 Hash - 0x426CF1A2 ^0xB1318E5E
{
	MISC::REGISTER_INT_TO_SAVE(&Global_3145728, "PILOT_SCHOOL_DUMMY_DATA");
	return;
}

