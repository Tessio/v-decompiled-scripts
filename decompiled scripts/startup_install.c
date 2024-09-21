void main() // Position - 0x0 Hash - 0x70133CCA ^0x10C41B53
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1("main_install", DEFAULT);
	return;
}

void func_1(char* sParam0, eStackSize essParam1) // Position - 0x15 Hash - 0xF4E4A08F ^0x26072AA2
{
	SCRIPT::REQUEST_SCRIPT(sParam0);

	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}

	SYSTEM::START_NEW_SCRIPT(sParam0, essParam1);
	return;
}

