// Program registers 537 globals at index 11 starting from Global_2883584
void main() // Position - 0x0 Hash - 0x47EEED66 ^0x1AC90082
{
	int num;
	int sizeOfSaveData;

	MISC::START_SAVE_DATA(&Global_2883692, 1, true);
	MISC::REGISTER_INT_TO_SAVE(&Global_2883692, "aFakeSavedInt");
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4543942, 0);
	num = 1;
	sizeOfSaveData = MISC::GET_SIZE_OF_SAVE_DATA(true);
	num != sizeOfSaveData;
	return;
}

