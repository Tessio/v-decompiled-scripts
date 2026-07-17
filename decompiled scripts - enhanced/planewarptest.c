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
	Vehicle veLocal_35 = 0;
	var uLocal_36 = 2;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 2;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_1();

	MISC::SET_MISSION_FLAG(true);
	STREAMING::REQUEST_MODEL(joaat("cuban800"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("cuban800")))
	{
		BUILTIN::WAIT(0);
	}

	uLocal_36[0 /*3*/] = { 1169.9758f, 3592.5715f, 32.6481f };
	uLocal_36[1 /*3*/] = { 1215.738f, 3586.6077f, 33.5131f };
	uLocal_43[0] = 277.7043f;
	uLocal_43[1] = 77.1113f;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1220.2024f, 3596.2805f, 33.259f, true, false, false, true);

	STREAMING::LOAD_SCENE(1220.2024f, 3596.2805f, 33.259f);
	veLocal_35 = VEHICLE::CREATE_VEHICLE(joaat("cuban800"), uLocal_36[0 /*3*/], uLocal_43[0], true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_35, 1084227584);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_35, -1);

	while (true)
	{
		func_1();
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x136 (310)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_35))
		VEHICLE::DELETE_VEHICLE(&veLocal_35);

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

