void main() // Position - 0x0 Hash - 0xCE3EFC1B ^0x76A1EC17
{
	if (CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_IN(500);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
		func_1();

	while (true)
	{
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x2F Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

