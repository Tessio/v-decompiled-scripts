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
	int iLocal_18 = 0;
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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	BOOL bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	BOOL bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = -1;
	var uLocal_82 = -1;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 35;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
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

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	func_304();

	while (true)
	{
		func_303();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_292();
	
		if (func_291(PLAYER::PLAYER_ID()))
			func_292();
	
		if (Global_1942476)
			func_292();
	
		switch (iLocal_75)
		{
			case 0:
				bLocal_78.f_1 = 0;
				bLocal_70 = true;
				iLocal_75 = 1;
				_STOPWATCH_INITIALIZE(&uLocal_72, true, false);
				HUD::THEFEED_HIDE_THIS_FRAME();
				break;
		
			case 1:
				if (func_283())
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				
					if (!Global_1942475)
						Global_1942475 = true;
				
					func_282();
				
					if (func_278(0, 1))
					{
						if (func_276(0, -1, false) && func_275() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
						{
							func_272();
							func_270();
							func_161();
							func_8();
						}
					}
				
					func_1(0);
				}
				else
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
					func_292();
				}
				break;
		
			case 3:
				HUD::THEFEED_HIDE_THIS_FRAME();
				break;
		}
	}

	return;
}

void func_1(int iParam0) // Position - 0x162 Hash - 0x7E11E9C ^0x544BF257
{
	if (func_7())
		return;

	if (!(Global_21066.f_1 == 1))
	{
		if (func_6(0))
			func_2(iParam0);
	
		MISC::SET_BIT(&Global_8920, 2);
	}

	return;
}

void func_2(int iParam0) // Position - 0x195 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_7())
		return;

	if (Global_21284)
		if (func_5())
			func_4(true, true);
		else
			func_4(false, false);

	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
		MISC::SET_BIT(&Global_8920, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_22425 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8919, 30);
	else
		MISC::CLEAR_BIT(&Global_8919, 30);

	if (!func_3())
		Global_21066.f_1 = 3;

	return;
}

BOOL func_3() // Position - 0x21F Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
		return true;

	return false;
}

void func_4(BOOL bParam0, BOOL bParam1) // Position - 0x246 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_21284 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
		
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == true)
	{
		Global_21284 = false;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
	}

	return;
}

BOOL func_5() // Position - 0x2BA Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1957675, 5);
}

BOOL func_6(int iParam0) // Position - 0x2C8 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_21066.f_1 > 3)
			if (IS_BIT_SET(Global_8919, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_21066.f_1 > 3)
		return true;

	return false;
}

BOOL func_7() // Position - 0x31F Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1957675, 19);
}

void func_8() // Position - 0x32E Hash - 0xFD789A51 ^0x23F3E019
{
	BOOL flag;

	if (!IS_BIT_SET(iLocal_62, 1) || PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL) || Global_1942479)
	{
		flag = -1;
	
		if (!bLocal_70)
			flag = Global_23970.f_6341;
	
		bLocal_70 = false;
	
		if (Global_2647037.f_1593 == 0)
			func_160(7);
		else
			func_160(6);
	
		func_159(false, false);
		func_158(1, 1, 0, 0, 0);
		func_157(1, 2, 1, 1, 1);
		func_156(0, 0, 0, 0, 0);
		func_155("VOM_MENU_T");
		func_152();
		func_64();
		func_63(bLocal_78.f_1, true, 1);
		func_59();
		func_52();
	
		if (flag != -1)
			func_51(flag);
	
		Global_1942479 = false;
	
		if (!IS_BIT_SET(iLocal_62, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			MISC::SET_BIT(&iLocal_62, 1);
		}
	
		_STOPWATCH_DESTROY(&(bLocal_78.f_5));
	}
	else
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&(bLocal_78.f_5), 5000, true))
			Global_1942479 = true;
	
		if (bLocal_74 && _STOPWATCH_HAS_TIME_PASSED(&(bLocal_78.f_5), 2000, true))
		{
			bLocal_74 = false;
			Global_1942479 = true;
		}
	}

	func_9(true, -1, true, false, true, -1082130432, false, false, -1);
	return;
}

void func_9(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x433 Hash - 0x5CD4D9BF ^0xD9788B4F
{
	int num;
	int r;
	int g;
	int b;
	int a;
	int i;
	BOOL numberOfLinesForString;
	BOOL j;
	int k;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int l;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	BOOL flag;
	BOOL flag2;
	float num24;
	float y;
	float width;
	float height;
	float textureResolution;
	BOOL flag3;
	float x;
	float screenWidthOfDisplayText;
	float num25;
	float num26;
	float num27;
	int red;
	int green;
	int blue;
	int alpha;
	float num28;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float height2;
	float height3;
	float num29;
	float num30;
	var unk3;
	var unk4;
	float num31;
	var textureDict;
	var textureName;
	float num32;
	float size;
	float size2;
	BOOL flag8;
	float num33;
	float num34;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num35;
	var text;
	float value;
	float value2;
	float num36;
	float num37;
	float num38;

	if (!func_48(&num, false, iParam1))
		return;

	num == -1;

	if (!func_45(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	height3 = 0f;

	if (Global_23970)
		if (func_43(29, true, true, &width, &height, bParam7))
			num29 = height / width;
		else
			Global_23970 = false;

	if (iParam5 == -1f)
		iParam5 = Global_23969;

	height3 = iParam5 * num29;

	if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num30 = Global_23968;
	else
		num30 = Global_23968 + height3 + 0.034722f + 0f;

	num31 = 1f;
	func_41(bParam7, &unk3, &unk4, &num31);

	if (bParam3)
	{
		if (Global_23970.f_5821 <= true)
		{
			func_37(Global_23970.f_5821 + 1, "DFLT_MNU_OPT" /*Exit*/, 0, true, false, false, false);
			Global_23970.f_6617 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_23970.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num28 = Global_23968;
			}
			else
			{
				if (Global_23970)
				{
					TEXT_LABEL_ASSIGN_STRING(&textureDict, func_36(29), 64);
					TEXT_LABEL_ASSIGN_STRING(&textureName, func_33(29, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_23970.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_32(Global_23967, Global_23968, iParam5, height3, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23967 + (iParam5 * 0.5f), Global_23968 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23967 + (iParam5 * 0.5f), Global_23968 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_23970.f_9086)
				{
					r = Global_23970.f_9082;
					g = Global_23970.f_9083;
					b = Global_23970.f_9084;
					a = Global_23970.f_9085;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_32(Global_23967, Global_23968 + height3, iParam5, 0.034722f, r, g, b, a);
				num28 = Global_23968 + height3 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) != 0)
				{
					func_31();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_23970.f_74; l = l + 1)
					{
						if (Global_23970.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_23970.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_14[num8], Global_23970.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_23970.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23970.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23970.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23970.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23970.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23970.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(Global_23967 + 0.00390625f, Global_23968 + height3 + 0.00416664f, 0);
				}
			
				if (Global_23970.f_6338)
				{
					func_31();
					func_29((Global_23967 + iParam5) - 0.00390625f - func_30("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23970.f_6339, Global_23970.f_6340), Global_23968 + height3 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23970.f_6339, Global_23970.f_6340);
				}
				else if (Global_23970.f_6334 > Global_23970.f_5828)
				{
					if (Global_23970.f_6337 != 0)
					{
						func_31();
						func_29((Global_23967 + iParam5) - 0.00390625f - func_30("CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23970.f_6337, Global_23970.f_6336), Global_23968 + height3 + 0.00416664f, "CM_ITEM_COUNT" /*~1~ / ~1~*/, Global_23970.f_6337, Global_23970.f_6336);
					}
				}
			}
		
			numberOfLinesForString = Global_23970.f_6341;
			num2 = 0;
			num32 = num28;
		
			if (Global_23970.f_9096)
			{
				r = Global_23970.f_9092;
				g = Global_23970.f_9093;
				b = Global_23970.f_9094;
				a = Global_23970.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_23970.f_5828 && numberOfLinesForString <= Global_23970.f_5821)
			{
				if (numberOfLinesForString >= false)
				{
					if (Global_23970.f_6088[numberOfLinesForString])
					{
						if (Global_23970.f_5959[numberOfLinesForString] && numberOfLinesForString != Global_23970.f_6341)
							num28 = num28 + 0.00277776f;
					
						height2 = 0.034722f;
					
						if (Global_23970.f_6348[numberOfLinesForString] != 0f)
							height2 = Global_23970.f_6348[numberOfLinesForString];
					
						num28 = num28 + height2;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23967 + (iParam5 * 0.5f), (num32 + ((num28 - num32) * 0.5f)) - 0.00138888f, iParam5, num28 - num32, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_23970.f_6334 > Global_23970.f_5828)
			{
				if (Global_23970.f_9101)
				{
					r = Global_23970.f_9097;
					g = Global_23970.f_9098;
					b = Global_23970.f_9099;
					a = Global_23970.f_9100;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_32(Global_23967, num28 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num31);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num31);
			
				if (Global_23970.f_9114)
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", Global_23967 + (iParam5 * 0.5f), num28 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num31, (textureResolution.f_1 / 720f) * num31, 0f, r, g, b, a, false, 0);
				num28 = num28 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_23970.f_5241)) != 0 && Global_23970.f_5323 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23967 + 0.0046875f;
			
				if (Global_23970.f_5325 != 0)
				{
					func_43(Global_23970.f_5325, true, true, &width, &height, bParam7);
					x = (Global_23967 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_28(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23970.f_5319; l = l + 1)
				{
					if (Global_23970.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23970.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[num8], Global_23970.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23970.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_32(Global_23967, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23970.f_9106)
				{
					r = Global_23970.f_9102;
					g = Global_23970.f_9103;
					b = Global_23970.f_9104;
					a = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23967 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_28(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5241));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23970.f_5319; l = l + 1)
				{
					if (Global_23970.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23970.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[num8], Global_23970.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23970.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_23970.f_5325 != 0)
				{
					func_43(Global_23970.f_5325, true, true, &width, &height, bParam7);
					func_27(Global_23970.f_5325, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_5325), func_33(Global_23970.f_5325, true), Global_23967 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_5247)))
				{
					num28 = num28 + (0.00138888f * 6f);
					func_28(x);
					size = 0.35f;
				
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23970.f_5247))) > 600)
						size = 0.35f * 0.625f;
				
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5247));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_32(Global_23967, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_23970.f_9106)
					{
						r = Global_23970.f_9102;
						g = Global_23970.f_9103;
						b = Global_23970.f_9104;
						a = Global_23970.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23967 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
					func_28(x);
					HUD::SET_TEXT_SCALE(0f, size);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
					num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(size, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_23970.f_5323 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_23970.f_5324 > Global_23970.f_5323)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_5241), "", 24);
						Global_23970.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_5247)))
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23967 + 0.0046875f;
				size2 = 0.35f;
			
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23970.f_5247))) > 600)
					size2 = 0.35f * 0.625f;
			
				func_28(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5247));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23970.f_5319; l = l + 1)
				{
					if (Global_23970.f_5253[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23970.f_5253[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[num8], Global_23970.f_5266[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23970.f_5253[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23970.f_5253[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23970.f_5270[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_32(Global_23967, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23970.f_9106)
				{
					r = Global_23970.f_9102;
					g = Global_23970.f_9103;
					b = Global_23970.f_9104;
					a = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23967 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(size2, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a + 25, false, 0);
				func_28(x);
				HUD::SET_TEXT_SCALE(0f, size2);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_21)) != 0 && Global_4542374.f_65 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23967 + 0.0046875f;
			
				if (Global_4542374.f_67 != 0)
				{
					func_43(Global_4542374.f_67, true, true, &width, &height, bParam7);
					x = (Global_23967 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_28(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_32(Global_23967, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23970.f_9106)
				{
					r = Global_23970.f_9102;
					g = Global_23970.f_9103;
					b = Global_23970.f_9104;
					a = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23967 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_28(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542374.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4542374.f_61; l = l + 1)
				{
					if (Global_4542374.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4542374.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[num8], Global_4542374.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4542374.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4542374.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4542374.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_4542374.f_67 != 0)
				{
					func_43(Global_4542374.f_67, true, true, &width, &height, bParam7);
					func_27(Global_4542374.f_67, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_36(Global_4542374.f_67), func_33(Global_4542374.f_67, true), Global_23967 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4542374.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4542374.f_66 > Global_4542374.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
						Global_4542374.f_65 = -1;
					}
				}
			}
		
			func_18(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_23970.f_6331)
		{
			num11 = 0;
			num15 = 0;
			num12 = 0;
			num13 = 0;
			num14 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			num5 = 0;
			num6 = 0;
			flag8 = Global_23970.f_5821;
		
			if (Global_23970.f_6332)
				flag8 = Global_23970.f_6335 - 1;
		
			num33 = 0f;
			num34 = 0f;
		
			for (j = false; j <= flag8; j = j + 1)
			{
				height2 = 0.034722f;
			
				if (Global_23970.f_6348[numberOfLinesForString] != 0f)
					height2 = Global_23970.f_6348[numberOfLinesForString];
			
				if (Global_23970.f_6332)
					numberOfLinesForString = Global_23970.f_8737[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_23970.f_6341 && num2 < Global_23970.f_5828)
				{
					flag2 = true;
				
					if (Global_23970.f_6342 == numberOfLinesForString)
						num34 = num33;
				
					if (Global_23970.f_5959[numberOfLinesForString])
						num5 = num5 + 1;
				
					y = num30 + num33 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_23970.f_6482[numberOfLinesForString] = y;
				num24 = Global_23967 + 0.0046875f;
				flag3 = false;
				flag = Global_23970.f_6342 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_23970.f_9108)
						HUD::GET_HUD_COLOUR(Global_23970.f_9107, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", Global_23967 + (iParam5 * 0.5f), num30 + num34 + (0.00277776f * (float)num5) + (height2 * 0.5f), iParam5, height2, 0f, r2, g2, b2, a2, false, 0);
					Global_23970.f_6480 = y;
				}
			
				for (k = 0; k < Global_23970.f_5829; k = k + 1)
				{
					if (IS_BIT_SET(Global_23970.f_5692[numberOfLinesForString], k) || Global_23970.f_5659[k] == 5)
					{
						if (Global_23970.f_6332)
						{
							num11 = Global_23970.f_8753[(num2 * Global_23970.f_5829) + k];
							num12 = Global_23970.f_8794[(num2 * Global_23970.f_5829) + k];
							num13 = Global_23970.f_8835[(num2 * Global_23970.f_5829) + k];
							num14 = Global_23970.f_8876[(num2 * Global_23970.f_5829) + k];
							num15 = Global_23970.f_8917[(num2 * Global_23970.f_5829) + k];
						}
						else
						{
							Global_23970.f_8753[(num2 * Global_23970.f_5829) + k] = num11;
							Global_23970.f_8794[(num2 * Global_23970.f_5829) + k] = num12;
							Global_23970.f_8835[(num2 * Global_23970.f_5829) + k] = num13;
							Global_23970.f_8876[(num2 * Global_23970.f_5829) + k] = num14;
							Global_23970.f_8917[(num2 * Global_23970.f_5829) + k] = num15;
						}
					
						num35 = 0;
						flag7 = false;
					
						if (Global_23970.f_6614[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23970.f_6611[0])
							{
								flag7 = true;
								num35 = 0;
							}
						}
					
						if (Global_23970.f_6614[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23970.f_6611[1])
							{
								flag7 = true;
								num35 = 1;
							}
						}
					
						if (Global_23970.f_5665[k] != -1f)
							num24 = Global_23967 + 0.0046875f + Global_23970.f_5665[k];
					
						if (k < 4 && Global_23970.f_5665[k + 1] != -1f && num24 < Global_23970.f_5665[k + 1])
							num27 = Global_23970.f_5665[k + 1] - num24;
						else
							num27 = (Global_23967 + Global_23969) - 0.0046875f - num24;
					
						if (Global_23970.f_5678[k] && Global_23970.f_6477 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_23970.f_5659[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_23970.f_6332)
									{
										screenWidthOfDisplayText = 0f;
										num25 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_23970.f_2387[num16 /*5*/][l] == 5 || Global_23970.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_23970.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_23970.f_2130[num16])
												flag5 = true;
										
											func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, num35, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23970.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23970.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696970[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[num13 + num19], Global_23970.f_4855[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_23970.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0)
											screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_43(Global_23970.f_4984[num14 + l], flag, false, &width, &height, bParam7))
												{
													num25 = num25 + width;
												
													if (l > 0)
														num25 = num25 - (0.00078125f * 4f);
												
													if (Global_23970.f_4984[num14 + l] == 2 || Global_23970.f_4984[num14 + l] == 54 || Global_23970.f_4984[num14 + l] == 64)
														num25 = num25 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_23970.f_5686[k] == 2)
											x = x + (num27 - (screenWidthOfDisplayText + num25)) + (0.00078125f * 1f);
										else if (Global_23970.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - ((screenWidthOfDisplayText + num25) * 0.5f));
									
										Global_23970.f_8958[(num2 * Global_23970.f_5829) + k] = x;
										Global_23970.f_8999[(num2 * Global_23970.f_5829) + k] = screenWidthOfDisplayText;
										Global_23970.f_9040[(num2 * Global_23970.f_5829) + k] = num25;
									
										if (Global_23970.f_5686[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_23970.f_5686[m] == 2)
													Global_23970.f_8958[(num2 * Global_23970.f_5829) + m] = Global_23970.f_8958[(num2 * Global_23970.f_5829) + m] - Global_23970.f_5671[k];
											}
										}
									}
									else
									{
										x = Global_23970.f_8958[(num2 * Global_23970.f_5829) + k];
										screenWidthOfDisplayText = Global_23970.f_8999[(num2 * Global_23970.f_5829) + k];
										num25 = Global_23970.f_9040[(num2 * Global_23970.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_43(26, true, false, &width, &height, bParam7))
										{
											if (Global_23970.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_43(26, true, true, &width, &height, bParam7))
											{
												func_27(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(26), func_33(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_43(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_43(27, true, true, &width, &height, bParam7))
											{
												func_27(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(27), func_33(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23970.f_2387[num16 /*5*/][l] == 5 || Global_23970.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_23970.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_23970.f_2130[num16])
											flag5 = true;
									
										func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_23970.f_9112 && Global_23970.f_9113 == numberOfLinesForString)
											func_15(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_23970.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_23970.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696970[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[num13 + num19], Global_23970.f_4855[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_23970.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_23970.f_4984[num14 + num20] == 2 || Global_23970.f_4984[num14 + num20] == 54 || Global_23970.f_4984[num14 + num20] == 64)
											{
												if (func_43(Global_23970.f_4984[num14 + num20], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (func_43(Global_23970.f_4984[num14 + num20], flag, true, &width, &height, bParam7))
													{
														func_27(Global_23970.f_4984[num14 + num20], flag, &red, &green, &blue, &alpha);
													
														if (i == 1)
															if (Global_23970.f_5686[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14 + num20]), func_33(Global_23970.f_4984[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14 + num20]), func_33(Global_23970.f_4984[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_23970.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_23970.f_5686[k] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x + (0.00078125f * 7f), y, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x, y, 0);
										
											if (IS_ROCKSTAR_DEV() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (k == 0)
												{
													if (Global_23970.f_2130[num16])
														flag5 = true;
												
													func_16(false, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num36 = 0.0185f;
													num37 = 0.004f;
													num38 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num38 * 0.6f), y + (num36 * 0.75f), 0.0175f, 0.035f, SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_6341 + num22);
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 - num38, y + num37, 0);
													num22 = num22 + 1;
												}
											}
										}
									}
								
									if (num20 > 0)
									{
										x = x + (6f * 0.00078125f);
									
										for (l = 0; l < num20; l = l + 1)
										{
											if (Global_23970.f_4984[num14 + l] != 2 && Global_23970.f_4984[num14 + l] != 54 && Global_23970.f_4984[num14 + l] != 64)
											{
												if (func_43(Global_23970.f_4984[num14 + l], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (i == 1)
													{
														if (func_43(Global_23970.f_4984[num14 + l], flag, true, &width, &height, bParam7))
														{
															func_27(Global_23970.f_4984[num14 + l], flag, &red, &green, &blue, &alpha);
														
															if (Global_23970.f_4984[num14 + l] == 30)
																GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14 + l]), func_33(Global_23970.f_4984[num14 + l], flag), Global_23967 + (width * 0.5f), (y + 0.00277776f + (height * 0.5f)) - (0.00078125f * 11f), width, height, 0f, red, green, blue, alpha, false, 0);
															else if (Global_23970.f_5686[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14 + l]), func_33(Global_23970.f_4984[num14 + l], flag), ((num24 + x + screenWidthOfDisplayText) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14 + l]), func_33(Global_23970.f_4984[num14 + l], flag), (num24 + x + screenWidthOfDisplayText) - (0.00078125f * 12f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
														}
													}
												
													x = x + (12f * 0.00078125f);
												}
											}
										}
									}
								}
							
								flag3 = true;
								num11 = num11 + 1;
							
								for (l = 0; l < 4; l = l + 1)
								{
									if (Global_23970.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_23970.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_23970.f_6332)
									{
										func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23970.f_9112 && Global_23970.f_9113 == numberOfLinesForString)
											func_15(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[num12]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23970.f_5686[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23970.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23970.f_8958[(num2 * Global_23970.f_5829) + k] = x;
										Global_23970.f_8999[(num2 * Global_23970.f_5829) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23970.f_8958[(num2 * Global_23970.f_5829) + k];
										screenWidthOfDisplayText = Global_23970.f_8999[(num2 * Global_23970.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_43(26, true, false, &width, &height, bParam7))
										{
											if (Global_23970.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_43(26, true, true, &width, &height, bParam7))
											{
												func_27(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(26), func_33(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_43(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_43(27, true, true, &width, &height, bParam7))
											{
												func_27(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(27), func_33(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, false, false);
										func_13(num24 + x, y, "NUMBER" /*~1~*/, Global_23970.f_4469[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_23970.f_6332)
									{
										func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23970.f_9112 && Global_23970.f_9113 == numberOfLinesForString)
											func_15(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER" /*~1~*/);
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[num13], Global_23970.f_4855[num13]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23970.f_5686[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23970.f_5686[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23970.f_8958[(num2 * Global_23970.f_5829) + k] = x;
										Global_23970.f_8999[(num2 * Global_23970.f_5829) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23970.f_8958[(num2 * Global_23970.f_5829) + k];
										screenWidthOfDisplayText = Global_23970.f_8999[(num2 * Global_23970.f_5829) + k];
									}
								
									if (flag6)
									{
										if (func_43(26, true, false, &width, &height, false))
										{
											if (Global_23970.f_5686[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_43(26, true, true, &width, &height, bParam7))
											{
												func_27(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(26), func_33(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_43(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_43(27, true, true, &width, &height, bParam7))
											{
												func_27(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_36(27), func_33(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									func_16(flag, Global_23970.f_1616[num16], Global_23970.f_1873[num16], flag7, 0, false, false);
									func_12(num24 + x, y, "NUMBER" /*~1~*/, Global_23970.f_4726[num13], Global_23970.f_4855[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_43(Global_23970.f_4984[num14], flag, false, &width, &height, bParam7))
									{
										if (!Global_23970.f_6332)
										{
											num25 = width;
											x = 0f;
										
											if (Global_23970.f_5686[k] == 2)
												x = x + (num27 - num25) + (0.00078125f * 1f);
											else if (Global_23970.f_5686[k] == 0)
												x = x + (((num27 - num24) * 0.5f) - (num25 * 0.5f));
										
											Global_23970.f_8958[(num2 * Global_23970.f_5829) + k] = x;
											Global_23970.f_9040[(num2 * Global_23970.f_5829) + k] = num25;
										}
										else
										{
											x = Global_23970.f_8958[(num2 * Global_23970.f_5829) + k];
											num25 = Global_23970.f_9040[(num2 * Global_23970.f_5829) + k];
										}
									
										if (flag6)
										{
											if (func_43(26, true, false, &width, &height, bParam7))
											{
												if (Global_23970.f_5686[k] == 2)
													x = x - (width * 2f);
											
												num26 = width * 0.5f;
											
												if (func_43(26, true, true, &width, &height, bParam7))
												{
													func_27(26, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_36(26), func_33(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										
											if (func_43(27, true, false, &width, &height, bParam7))
											{
												x = x + width;
												num26 = width * 0.5f;
											
												if (func_43(27, true, true, &width, &height, bParam7))
												{
													func_27(27, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_36(27), func_33(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_43(Global_23970.f_4984[num14], flag, true, &width, &height, bParam7))
											{
												func_27(Global_23970.f_4984[num14], flag, &red, &green, &blue, &alpha);
												GRAPHICS::DRAW_SPRITE(func_36(Global_23970.f_4984[num14]), func_33(Global_23970.f_4984[num14], flag), num24 + x + (width * 0.5f), (y - 0.00277776f) + (height2 * 0.5f), width * func_11(Global_23970.f_4984[num14]), height * func_11(Global_23970.f_4984[num14]), 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								}
							
								flag3 = true;
								num14 = num14 + 1;
								break;
						
							case 5:
								flag3 = true;
								break;
						}
					
						if (Global_23970.f_5659[k] == 5)
						{
							if (Global_23970.f_5671[k] > 0.05f)
								num24 = num24 + Global_23970.f_5671[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_23970.f_5671[k];
						
							if (Global_23970.f_5678[k])
								if (func_43(26, true, true, &width, &height, bParam7))
									num24 = num24 - width;
						}
					}
					else
					{
						num24 = num24 + Global_23970.f_5671[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_23970.f_8737[num2] = numberOfLinesForString;
						Global_23970.f_6343 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_23970.f_5959[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_23970.f_6348[numberOfLinesForString] != 0f)
							num33 = num33 + Global_23970.f_6348[numberOfLinesForString];
						else
							num33 = num33 + 0.034722f;
					}
				
					if (!Global_23970.f_6331)
					{
						Global_23970.f_6088[numberOfLinesForString] = true;
					
						if (Global_23970.f_5830[numberOfLinesForString])
						{
							if (flag)
								Global_23970.f_6337 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_23970.f_6337 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_23970.f_6331)
			{
				Global_23970.f_6333 = num30 + num33 + (0.00277776f * (float)num5);
				Global_23970.f_6336 = num4;
				Global_23970.f_6334 = num3;
				Global_23970.f_6331 = 1;
			}
		}
	
		if (!Global_23970.f_6332)
		{
			Global_23970.f_6335 = num2;
			Global_23970.f_6332 = 1;
		}
	}

	Global_23970.f_6479 = num28;
	Global_23970.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23970.f_6479);

	if (!Global_23970.f_9081)
		func_1(0);

	Global_23970.f_9081 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_10(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_10(int iParam0) // Position - 0x35D2 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1675211.f_1163 = iParam0;
	return;
}

float func_11(int iParam0) // Position - 0x35E3 Hash - 0x61246D49 ^0x61246D49
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
	}

	return 1f;
}

void func_12(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Position - 0x3652 Hash - 0x69E27AC3 ^0x1F999E63
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

void func_13(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x3671 Hash - 0x51E04EF ^0x8FDB7829
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x368F Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_15(BOOL bParam0) // Position - 0x36A0 Hash - 0xE7D01AEE ^0x5FC67C22
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_23970.f_9109[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_23970.f_9109[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

void func_16(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x36E6 Hash - 0x4F37228D ^0x4F37228D
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_17(Global_23970.f_6614[iParam4], &r, &g, &b);
		
			if (r < 20 && g < 20 && b < 20)
			{
				if (bParam0 == false)
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			}
			else if (r > 230 && g > 230 && b > 230)
			{
				if (bParam0)
				{
					r = 0;
					g = 0;
					b = 0;
				}
			}
		
			HUD::SET_TEXT_COLOUR(r, g, b, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOWDARK, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR(255f * 0.8f));
		}
		else
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			HUD::SET_TEXT_COLOUR(r, g, b, a);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}

	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);

	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}

	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_17(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3894 Hash - 0xBC32E287 ^0xBC32E287
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
	
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
	
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
	
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
	
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
	
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
	
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
	
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
	
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
	
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
	
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
	
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
	
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
	
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
	
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
	
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
	
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
	
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
	
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
	
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
	
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
	
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
	
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
	
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
	
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
	
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
	
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}

	return;
}

void func_18(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x3B1E Hash - 0x27A51DEF ^0xFA033CDB
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_48(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_45(bParam4, bParam8))
		return;

	if (func_25())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_21(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_23970.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_23970.f_5326; i = i + 1)
			{
				if (Global_23970.f_5625[i] != 365)
					TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5328[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23970.f_5625[i], true), 64);
				else if (Global_23970.f_5640[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5328[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23970.f_5640[i], true), 64);
			}
		
			Global_23970.f_5327 = 0;
		}
	
		if (!Global_23970.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23970.f_5684 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_23970.f_5326; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_23970.f_5553[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_20(&Global_23970.f_5328[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_23970.f_5553[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_20(&Global_23970.f_5328[j /*16*/]);
					}
				
					if (Global_23970.f_5610[i] == -1)
					{
						func_19(&Global_23970.f_5553[i /*4*/]);
					}
					else
					{
						timestamp = Global_23970.f_5610[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23970.f_5553[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23970.f_5625[i] != 365 && IS_BIT_SET(Global_23970.f_5655, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5625[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5326);
				func_20(&Global_4542374);
			
				if (Global_4542374.f_20 == -1)
				{
					func_19(&(Global_4542374.f_16));
				}
				else
				{
					timestamp2 = Global_23970.f_5610[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_23970.f_5685)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23970.f_5327 = 1;
		}
	
		for (i = 0; i < Global_23970.f_5326; i = i + 1)
		{
			if (Global_23970.f_5610[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23970.f_5553[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4542374.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
			
				if (bParam5)
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				else
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	
		if (bParam6)
		{
			if (!Global_23970.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_23970.f_9116 = 1;
			}
		}
		else if (Global_23970.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_23970.f_9116 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_23970.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23970.f_6263[num /*10*/], Global_23970.f_5656, Global_23970.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23970.f_6263[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_19(char* sParam0) // Position - 0x4018 Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_20(char* sParam0) // Position - 0x402A Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_21(Player plParam0, int iParam1) // Position - 0x4038 Hash - 0x1A32E11A ^0x81C44B3D
{
	BOOL flag;

	if (!func_24(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_22(-1, false) == 8;
	else
		flag = Global_1845221[plParam0 /*889*/].f_206 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_22(int iParam0, BOOL bParam1) // Position - 0x4091 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_23();

	if (Global_1575064[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574920[num2];
		bParam1;
	}

	return num;
}

int func_23() // Position - 0x40D2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574926;
}

BOOL func_24(Player plParam0) // Position - 0x40DE Hash - 0x6A46C9B4 ^0x6A46C9B4
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_25() // Position - 0x4100 Hash - 0x8034D5B3 ^0x6404C51
{
	var position;

	if (Global_21066.f_1 > 3)
		return true;

	if (func_26())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_21011 == 0)
			if (position.f_1 > -119f)
				return true;
			else
				return false;
		else if (position.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_26() // Position - 0x416E Hash - 0x3CA1BB47 ^0x894044A3
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	return false;
}

void func_27(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Position - 0x4188 Hash - 0x16389FD1 ^0x58250497
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 28:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 57:
			*piParam5 = 100;
			break;
	
		case 65:
			*piParam5 = 100;
			break;
	
		case 58:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_28(float fParam0) // Position - 0x42A9 Hash - 0x4A65499D ^0x9B8EE2A2
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(fParam0, (Global_23967 + Global_23969) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_29(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x4308 Hash - 0xB49C9E3A ^0xA43F5A6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

float func_30(char* sParam0, int iParam1, int iParam2) // Position - 0x432B Hash - 0x4268C4EF ^0xB6E60544
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_31();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_31() // Position - 0x436D Hash - 0x16EFE904 ^0xB607D3A2
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_23970.f_9091)
	{
		r = Global_23970.f_9087;
		g = Global_23970.f_9088;
		b = Global_23970.f_9089;
		a = Global_23970.f_9090;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(Global_23967 + 0.0046875f, (Global_23967 + Global_23969) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_32(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x43F7 Hash - 0x4539121 ^0xE88E6ABA
{
	GRAPHICS::DRAW_RECT(fParam0 + (iParam2 * 0.5f), fParam1 + (fParam3 * 0.5f), iParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

char* func_33(int iParam0, BOOL bParam1) // Position - 0x4426 Hash - 0x9230D0AE ^0x4BB30F5A
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23970.f_7680[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23970.f_7680[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_34(&txdName);
		}
		else
		{
			return func_34(&Global_23970.f_7680[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 21:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Cash";
			unk[1] = "MP_SpecItem_Cash";
			break;
	
		case 1:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 2:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 4:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 7:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 8:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 9:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 10:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 17:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 15:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 16:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 26:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 27:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 28:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 29:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 31:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 32:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 54:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 55:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 57:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 58:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 59:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 61:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 62:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 63:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 65:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 64:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
			break;
	
		case 0:
			unk[0] = "";
			unk[1] = "";
			break;
	}

	if (bParam1)
		return unk[0];

	return unk[1];
}

char* func_34(char* sParam0) // Position - 0x494E Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x4958 Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_36(int iParam0) // Position - 0x496F Hash - 0x60CD2ECC ^0xC4EB38
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23970.f_6623[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23970.f_6623[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { GET_GAMER_HANDLE_PLAYER(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_34(&txdName);
		}
		else
		{
			return func_34(&Global_23970.f_6623[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 54)
		return "MPShopSale";

	return "CommonMenu";
}

void func_37(BOOL bParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x49E3 Hash - 0x266829EB ^0xA645288
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23970.f_5821 > bParam0)
		return;

	if (Global_23970.f_5821 >= 128)
		return;

	if (Global_23970.f_5823 >= 256)
		return;

	if (Global_23970.f_6346 < Global_23970.f_6344)
		return;

	if (Global_23970.f_5821 != bParam0)
	{
		Global_23970.f_5821 = bParam0;
		Global_23970.f_5822 = 0;
	}

	num = Global_23970.f_5659[Global_23970.f_5822];

	if (num != 1)
	{
		while (Global_23970.f_5822 < 4 && num != 1)
		{
			Global_23970.f_5822 = Global_23970.f_5822 + 1;
			num = Global_23970.f_5659[Global_23970.f_5822];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_79[Global_23970.f_5823 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_23970.f_1616[Global_23970.f_5823] = bParam3;
	Global_23970.f_1873[Global_23970.f_5823] = bParam4;
	Global_23970.f_2130[Global_23970.f_5823] = bParam6;
	Global_23970.f_5823 = Global_23970.f_5823 + 1;

	if (!bParam3)
		func_40(Global_23970.f_5821, true);
	else
		func_40(Global_23970.f_5821, false);

	if (iParam2 == 0)
	{
		num2 = func_39(&Global_23970.f_79[Global_23970.f_5823 /*6*/]);
	
		if (Global_23970.f_5678[Global_23970.f_5822])
		{
			func_43(26, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_23970.f_5671[Global_23970.f_5822])
			Global_23970.f_5671[Global_23970.f_5822] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_38(&Global_23970.f_79[Global_23970.f_5823 /*6*/]);
		
			if (num4 > Global_23970.f_6348[bParam0])
				Global_23970.f_6348[bParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_23970.f_5692[bParam0], Global_23970.f_5822);
	Global_23970.f_5822 = Global_23970.f_5822 + 1;
	Global_23970.f_6347 = 1;
	Global_23970.f_6345 = Global_23970.f_5823 - 1;
	Global_23970.f_6346 = 0;
	Global_23970.f_6344 = iParam2;
	return;
}

float func_38(char* sParam0) // Position - 0x4BFF Hash - 0xA8635191 ^0x72265D8A
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_39(char* sParam0) // Position - 0x4C1B Hash - 0xCD3C1AB8 ^0xFAB77820
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_16(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_40(BOOL bParam0, BOOL bParam1) // Position - 0x4C58 Hash - 0x88A2313D ^0xBBA11C08
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(bParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_23970.f_6618[num], bParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_23970.f_6618[num], bParam0 - (num * 32));

	return;
}

void func_41(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Position - 0x4CA4 Hash - 0xEE4D06D2 ^0x33CDA0F9
{
	float num;
	float value;
	float aspectRatio;

	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(piParam1, piParam2);
		return;
	}

	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(piParam1, piParam2);
	num = SYSTEM::TO_FLOAT(*piParam1);
	value = SYSTEM::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_42(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = SYSTEM::ROUND(value * aspectRatio);
		*piParam2 = SYSTEM::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = SYSTEM::ROUND(num / *uParam3);
	*piParam2 = SYSTEM::ROUND(value / *uParam3);
	return;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x4D2C Hash - 0xB42F2FDC ^0x10EEA826
{
	return SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_43(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x4D47 Hash - 0x8B713771 ^0xD678E8A5
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_36(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_33(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_41(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_44(iParam0) / num3;
		textureResolution = { textureResolution * { num4, num4, num4 } };
	
		if (!bParam2)
		{
			textureResolution = textureResolution - 2f;
			textureResolution.f_1 = textureResolution.f_1 - 2f;
		}
	
		if (iParam0 == 30)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&Global_23970.f_7680[29 /*16*/]) == joaat("CREW_LOGO"))
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 29)
		{
			if (*uParam3 > Global_23969)
			{
				*uParam4 = *uParam4 * (Global_23969 / *uParam3);
				*uParam3 = Global_23969;
			}
		}
	
		return true;
	}

	return false;
}

float func_44(int iParam0) // Position - 0x4E73 Hash - 0xE12CB3F5 ^0xE12CB3F5
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
	
		case 64:
			return 0.8f;
	}

	return 1f;
}

BOOL func_45(BOOL bParam0, BOOL bParam1) // Position - 0x4F47 Hash - 0x64BEBD7A ^0xE226A347
{
	if (Global_2672939.f_1761.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_47(8, -1) && func_46() != TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_79800 || Global_23970.f_9115 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_101740.f_1490)
		return false;

	return true;
}

eTransitionState func_46() // Position - 0x4FE4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575012;
}

BOOL func_47(int iParam0, int iParam1) // Position - 0x4FF0 Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1673654.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1673654.f_1048, iParam0);
}

BOOL func_48(var uParam0, BOOL bParam1, int iParam2) // Position - 0x5028 Hash - 0x5D26C738 ^0x7D8419D1
{
	var unk;
	Hash hashKey;
	int i;
	int num;

	if (iParam2 == -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	num = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_23970.f_6324[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_23970.f_6324[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_23970.f_6324[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(int pStopwatch, int millis, BOOL useLocalTimer) // Position - 0x50C5 Hash - 0x154EA353 ^0xBFA672B0
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0x5123 Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

void func_51(BOOL bParam0) // Position - 0x5130 Hash - 0x82BF3E5E ^0x82BF3E5E
{
	Global_23970.f_6341 = bParam0;
	return;
}

void func_52() // Position - 0x5140 Hash - 0x4C24C20C ^0xA0AC4456
{
	var unk;
	var unk5;

	if (iLocal_63 == 0)
	{
		if (bLocal_78.f_1 == 0)
			if (func_55())
				func_54("RPA_MENU_O1_D", 0, 0);
			else
				func_54("RPA_MENU_O1_D1", 0, 0);
		else if (bLocal_78.f_1 == 1)
			if (func_55())
				func_54("RPA_MENU_O2_D", 0, 0);
			else
				func_54("RPA_MENU_O2_D1", 0, 0);
		else if (func_55())
			func_54("RPA_MENU_O3_D", 0, 0);
		else if (IS_BIT_SET(iLocal_62, 6))
			func_54("RPA_MENU_O3_D2", 0, 0);
		else
			func_54("RPA_MENU_O3_D1", 0, 0);
	}
	else if (iLocal_63 == 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	
		if (!func_55())
		{
			switch (iLocal_76)
			{
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&unk5, "PI_BIK_DEAD" /*This vehicle is destroyed. Call Mors Mutual Insurance to make a claim for its return.*/, 16);
					func_54(&unk5, 0, 0);
					break;
			
				case 3:
					func_54("PIM_HRPA18" /*This vehicle is being delivered to your Hangar.*/, 0, 0);
					break;
			}
		}
		else
		{
			func_53(&unk);
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				func_54("PI_PA_RMRB_H1" /*Call in your Personal Aircraft.*/, 0, 0);
		}
	}

	return;
}

void func_53(var uParam0) // Position - 0x5239 Hash - 0x13C882FB ^0x13C882FB
{
	TEXT_LABEL_COPY(uParam0, { Global_23970.f_5241 }, 4);
	return;
}

void func_54(char* sParam0, int iParam1, int iParam2) // Position - 0x524E Hash - 0xB7E76F1D ^0x4CADBC86
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_5241), sParam0, 24);
	Global_23970.f_5319 = 0;
	Global_23970.f_5320 = 0;
	Global_23970.f_5321 = 0;
	Global_23970.f_5322 = 0;
	Global_23970.f_5323 = iParam1;
	Global_23970.f_5324 = MISC::GET_GAME_TIMER();
	Global_23970.f_5325 = iParam2;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23970.f_5253[i] = 0;
	}

	return;
}

BOOL func_55() // Position - 0x52B3 Hash - 0x249E4CE7 ^0xE547F203
{
	return func_56(bLocal_78.f_1);
}

BOOL func_56(int iParam0) // Position - 0x52C3 Hash - 0x1C1E0F7E ^0xADB3DBF7
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (IS_ROCKSTAR_DEV() && func_58() && func_57() == 2)
		return 0;

	if (!IS_BIT_SET(Global_23970.f_6618[num], iParam0 - (num * 32)))
		return 1;

	return 0;
}

int func_57() // Position - 0x5317 Hash - 0x21D64237 ^0x21D64237
{
	return Global_33087;
}

BOOL func_58() // Position - 0x5322 Hash - 0x70EB1C51 ^0x76C93439
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CREATOR_LT);

	return PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RT) && PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
}

void func_59() // Position - 0x535B Hash - 0x708A330C ^0xC6858504
{
	func_62(-1);
	MISC::CLEAR_BIT(&iLocal_62, 4);
	MISC::CLEAR_BIT(&iLocal_62, 5);

	if (iLocal_63 == 0)
	{
		if (bLocal_78.f_1 == 0)
		{
			func_61(INPUT_FRONTEND_ACCEPT, "BB_SELECT" /*Select*/, -1, false);
			func_61(INPUT_FRONTEND_CANCEL, "BB_BACK" /*Back*/, -1, false);
		}
		else if (!func_55())
		{
			func_61(INPUT_FRONTEND_CANCEL, "BB_BACK" /*Back*/, -1, false);
		}
		else
		{
			func_61(INPUT_FRONTEND_ACCEPT, "RPA_MENU_K1", -1, false);
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				func_61(INPUT_SELECT_WEAPON, "RPA_MENU_K2", -1, false);
				MISC::SET_BIT(&iLocal_62, 4);
			}
			else
			{
				func_60(INPUT_CELLPHONE_EXTRA_OPTION, "RPA_MENU_K2", -1);
				MISC::SET_BIT(&iLocal_62, 5);
			}
		
			func_61(INPUT_FRONTEND_CANCEL, "BB_BACK" /*Back*/, -1, false);
		}
	}
	else if (iLocal_63 == 1)
	{
		if (!func_55())
		{
			func_61(INPUT_FRONTEND_CANCEL, "BB_BACK" /*Back*/, -1, false);
		}
		else
		{
			func_61(INPUT_FRONTEND_ACCEPT, "RPA_MENU_K1", -1, false);
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				func_61(INPUT_SELECT_WEAPON, "RPA_MENU_K2", -1, false);
				MISC::SET_BIT(&iLocal_62, 4);
			}
			else
			{
				func_60(INPUT_CELLPHONE_EXTRA_OPTION, "RPA_MENU_K2", -1);
				MISC::SET_BIT(&iLocal_62, 5);
			}
		
			func_61(INPUT_FRONTEND_CANCEL, "BB_BACK" /*Back*/, -1, false);
		}
	}

	return;
}

void func_60(eControlAction ecaParam0, char* sParam1, int iParam2) // Position - 0x5466 Hash - 0x8FB9B331 ^0x5C0C1FED
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23970.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542374, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}

	MISC::CLEAR_BIT(&(Global_23970.f_5655), Global_23970.f_5326);
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5328[Global_23970.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5553[Global_23970.f_5326 /*4*/], sParam1, 16);
	Global_23970.f_5610[Global_23970.f_5326] = iParam2;
	Global_23970.f_5625[Global_23970.f_5326] = ecaParam0;
	Global_23970.f_5640[Global_23970.f_5326] = 32;
	Global_23970.f_5326 = Global_23970.f_5326 + 1;
	return;
}

void func_61(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x5515 Hash - 0x1F0633B6 ^0x199DA912
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23970.f_5326 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4542374, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_23970.f_5655), Global_23970.f_5326);

	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5328[Global_23970.f_5326 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5553[Global_23970.f_5326 /*4*/], sParam1, 16);
	Global_23970.f_5610[Global_23970.f_5326] = iParam2;
	Global_23970.f_5625[Global_23970.f_5326] = ecaParam0;
	Global_23970.f_5640[Global_23970.f_5326] = 32;
	Global_23970.f_5326 = Global_23970.f_5326 + 1;
	return;
}

void func_62(int iParam0) // Position - 0x55CA Hash - 0x69434F89 ^0x69434F89
{
	int i;
	int num;

	Global_23970.f_5326 = 0;
	Global_23970.f_5327 = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5553[i /*4*/], "", 16);
		Global_23970.f_5610[i] = -1;
		Global_23970.f_5625[i] = 365;
		Global_23970.f_5640[i] = 32;
	}

	Global_23970.f_5655 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;

	if (MISC::IS_PC_VERSION())
	{
		if (!func_48(&num, false, iParam0))
			return;
	
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23970.f_6263[num /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_63(var uParam0, BOOL bParam1, int iParam2) // Position - 0x5682 Hash - 0xC6887A59 ^0xC6887A59
{
	BOOL i;
	int num;

	Global_23970.f_6342 = uParam0;
	Global_23970.f_6477 = iParam2;

	if (Global_23970.f_6342 < Global_23970.f_6341)
	{
		Global_23970.f_6341 = Global_23970.f_6342;
	}
	else if (Global_23970.f_6332 && Global_23970.f_6342 > Global_23970.f_6343 || !Global_23970.f_6332 && Global_23970.f_6342 >= Global_23970.f_6341 + Global_23970.f_5828)
	{
		for (i = Global_23970.f_6341; i <= Global_23970.f_6342; i = i + 1)
		{
			if (i >= false && i < 127)
				if (Global_23970.f_5692[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_23970.f_5828 && Global_23970.f_6341 < 128)
		{
			Global_23970.f_6341 = Global_23970.f_6341 + 1;
			num = 0;
		
			for (i = Global_23970.f_6341; i <= Global_23970.f_6342; i = i + 1)
			{
				if (i >= false && i < 127)
					if (Global_23970.f_5692[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_23970.f_6331 = 0;
	Global_23970.f_6332 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_5241), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	}

	return;
}

void func_64() // Position - 0x57D2 Hash - 0x7A0C6006 ^0x397D2F42
{
	func_155("RPA_MENU_T");
	MISC::CLEAR_BIT(&iLocal_62, 6);

	if (iLocal_63 == 0)
	{
		if (func_151())
			func_37(0, "RPA_MENU_O1", 0, 1, 0, false, 0);
		else
			func_37(false, "RPA_MENU_O1", 0, false, false, false, false);
	
		if (!*Global_262145.f_36251)
			func_37(true, "RPA_MENU_O2", 0, true, false, false, false);
		else
			func_37(true, "RPA_MENU_O2", 0, false, false, false, false);
	
		if (!*Global_262145.f_36250)
		{
			if (_STAT_GET_PACKED_BOOL(51351, -1))
			{
				func_37(2, "RPA_MENU_O3", 0, true, false, false, false);
			}
			else
			{
				MISC::SET_BIT(&iLocal_62, 6);
				func_37(2, "RPA_MENU_O3", 0, false, false, false, false);
			}
		}
		else
		{
			func_37(2, "RPA_MENU_O3", 0, false, false, false, false);
		}
	
		bLocal_78 = 3;
	}
	else if (iLocal_63 == 1)
	{
		bLocal_78 = func_65();
	}

	bLocal_74 = false;
	return;
}

BOOL func_65() // Position - 0x58A8 Hash - 0xB21EAB30 ^0xB21EAB30
{
	int num;
	int num2;
	Hash modelHash;
	var unk;
	BOOL flag;
	BOOL flag2;
	int i;
	BOOL flag3;
	int j;
	int num3;
	int num4;

	i = 0;
	flag3 = 0;
	iLocal_76 = 0;

	for (i = 0; i < func_149(12); i = i + 1)
	{
		if (!func_145(i, -1, 12, -1, false))
		{
		}
		else
		{
			for (j = 0; j < func_144(i, 12, -1); j = j + 1)
			{
				flag = false;
				flag2 = false;
				modelHash = 0;
				num3 = 0;
				num = j + func_142(12, i);
				func_141(num, &num2, true);
			
				if (num2 >= 0 && STREAMING::IS_MODEL_A_VEHICLE(func_140(num2)))
				{
					modelHash = func_140(num2);
				
					if (modelHash != 0 && func_129(modelHash, true, num2))
					{
						num4 = func_128(modelHash);
					
						if (func_127(modelHash) && num4 != 2 && num4 != 3 && func_124(modelHash))
						{
							if (IS_BIT_SET(Global_1586535[num2 /*143*/].f_104, 10))
							{
								flag = true;
								flag2 = false;
								num3 = 3;
							}
							else if (IS_BIT_SET(Global_1586535[num2 /*143*/].f_104, 1))
							{
								flag = true;
								flag2 = false;
								num3 = 2;
							}
							else
							{
								flag = true;
								flag2 = true;
							}
						}
					}
					else
					{
						func_69(num2, 0, -1);
					}
				}
			
				if (flag)
				{
					if (!flag2 && bLocal_78.f_1 == flag3)
						iLocal_76 = num3;
				
					if (IS_BIT_SET(Global_1586535[num2 /*143*/].f_104, 1))
						TEXT_LABEL_ASSIGN_STRING(&unk, "MP_MAN_VEH_S01" /*~a~ (Destroyed)*/, 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&unk, "MPCT_PVNAME1" /*~a~*/, 24);
				
					func_37(flag3, &unk, 1, flag2, false, false, false);
					func_66(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(modelHash), false);
					uLocal_85[flag3] = num2;
					flag3 = flag3 + 1;
				}
			}
		}
	}

	return flag3;
}

void func_66(const char* sParam0, BOOL bParam1) // Position - 0x5A2D Hash - 0xAFEE905A ^0x1831F53D
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_23970.f_5823 >= 256)
		return;

	if (Global_23970.f_6346 >= 4)
		return;

	if (Global_23970.f_6347 != 1)
		return;

	if (Global_23970.f_6346 >= Global_23970.f_6344)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_79[Global_23970.f_5823 /*6*/], sParam0, 24);
	Global_23970.f_5823 = Global_23970.f_5823 + 1;
	Global_23970.f_2387[Global_23970.f_6345 /*5*/][Global_23970.f_6346] = 1;
	Global_23970.f_6346 = Global_23970.f_6346 + 1;

	if (Global_23970.f_6346 >= Global_23970.f_6344)
	{
		num = func_68();
	
		if (Global_23970.f_5678[Global_23970.f_5822] && Global_23970.f_6346 == Global_23970.f_6344)
		{
			func_43(26, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_23970.f_5671[Global_23970.f_5822 - 1])
			Global_23970.f_5671[Global_23970.f_5822 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_23970.f_6346 >= Global_23970.f_6344)
		{
			num3 = func_67();
		
			if (num3 > Global_23970.f_6348[Global_23970.f_5821])
				Global_23970.f_6348[Global_23970.f_5821] = num3;
		}
	}

	return;
}

float func_67() // Position - 0x5B69 Hash - 0xBF415923 ^0xBF415923
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_23970.f_6346; i = i + 1)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_23970.f_4984[(Global_23970.f_5827 - num) + i] != 0)
			if (func_43(Global_23970.f_4984[(Global_23970.f_5827 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_68() // Position - 0x5C1C Hash - 0x9130772A ^0x9130772A
{
	float screenWidthOfDisplayText;
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;

	for (i = 0; i < Global_23970.f_6346; i = i + 1)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 1)
		{
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 8)
		{
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 2)
		{
			num = num + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 3)
		{
			num2 = num2 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 4)
		{
			num3 = num3 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 5)
		{
			num4 = num4 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 6)
		{
			num4 = num4 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 7)
		{
			num4 = num4 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 9)
		{
			num4 = num4 + 1;
		}
	}

	func_16(false, true, false, false, 0, num4 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23970.f_79[Global_23970.f_6345 /*6*/]);

	for (i = 0; i < Global_23970.f_6346; i = i + 1)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 1)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[Global_23970.f_6345 + num5 /*6*/]);
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 8)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23970.f_79[Global_23970.f_6345 + num5 /*6*/]);
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[(Global_23970.f_5825 - num) + num6]);
		
			num6 = num6 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[(Global_23970.f_5826 - num2) + num7], Global_23970.f_4855[(Global_23970.f_5826 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[(Global_23970.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2696970[(Global_23970.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[(Global_23970.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2696970[(Global_23970.f_5824 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_23970.f_79[Global_23970.f_6345 /*6*/]) != 0)
		screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_23970.f_4984[(Global_23970.f_5827 - num3) + i] != 0)
		{
			func_43(Global_23970.f_4984[(Global_23970.f_5827 - num3) + i], true, false, &unk, &unk2, false);
			screenWidthOfDisplayText = screenWidthOfDisplayText + unk;
		}
	}

	return screenWidthOfDisplayText;
}

void func_69(int iParam0, int iParam1, int iParam2) // Position - 0x6063 Hash - 0xB73E6112 ^0xA2AC4B24
{
	int num;

	func_123(iParam0, &num);

	if (num >= 0)
		func_117(num, -1, iParam2);

	func_105(iParam0, iParam1);
	func_102(&Global_1586535[iParam0 /*143*/]);
	Global_2359296[func_101() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	func_70(iParam0, &Global_1586535[iParam0 /*143*/], false, iParam2, false, false);
	return;
}

int func_70(int iParam0, var uParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x60BF Hash - 0x545987EB ^0x89609320
{
	int i;
	int num;
	Hash cloudTimeAsInt;

	if (bParam2)
	{
		!bParam4;
		Global_2359296[func_101() /*5571*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}

	if (func_100(iParam0))
		return 1;

	!bParam4;
	num = func_99(1411, iParam0);
	func_98(num, uParam1->f_139, iParam3);
	!bParam4;
	num = func_99(1412, iParam0);
	func_98(num, uParam1->f_140, iParam3);
	!bParam4;

	if (func_97(iParam0))
	{
	}
	else
	{
		num = func_99(1413, iParam0);
		func_98(num, *uParam1, iParam3);
		!bParam4;
	
		for (i = 0; i < 49; i = i + 1)
		{
			if (i < 25)
			{
				num = func_99(1414, iParam0) + i;
				func_98(num, uParam1->f_9[i], iParam3);
			}
			else
			{
				num = func_96(iParam0) + (i - 25);
				func_98(num, uParam1->f_9[i], iParam3);
			}
		}
	
		i = 0;
	
		for (i = 0; i < 2; i = i + 1)
		{
			num = func_99(1439, iParam0) + i;
			func_98(num, uParam1->f_59[i], iParam3);
		}
	}

	num = func_99(1441, iParam0);
	func_98(num, uParam1->f_62, iParam3);
	!bParam4;
	num = func_99(1442, iParam0);
	func_98(num, uParam1->f_63, iParam3);
	!bParam4;
	num = func_99(1443, iParam0);
	func_98(num, uParam1->f_64, iParam3);
	!bParam4;

	if (func_97(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_99(1444, iParam0);
		func_98(num, uParam1->f_65, iParam3);
		!bParam4;
	}

	num = func_99(1445, iParam0);
	func_98(num, uParam1->f_67, iParam3);

	if (func_97(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_99(1446, iParam0);
		func_98(num, uParam1->f_68, iParam3);
	}

	num = func_99(1447, iParam0);
	func_98(num, uParam1->f_69, iParam3);
	!bParam4;
	num = func_99(1448, iParam0);
	func_98(num, uParam1->f_70, -1);
	num = func_99(1449, iParam0);
	func_98(num, uParam1->f_71, iParam3);
	num = func_99(1450, iParam0);
	func_98(num, uParam1->f_72, iParam3);
	num = func_99(1451, iParam0);
	func_98(num, uParam1->f_73, iParam3);
	num = func_99(1452, iParam0);
	func_98(num, uParam1->f_5, iParam3);
	num = func_99(1453, iParam0);
	func_98(num, uParam1->f_6, iParam3);
	num = func_99(1454, iParam0);
	func_98(num, uParam1->f_7, iParam3);
	num = func_99(1455, iParam0);
	func_98(num, uParam1->f_8, iParam3);

	if (func_97(iParam0))
	{
		!bParam4;
	}
	else
	{
		num = func_99(3880, iParam0);
		func_98(num, uParam1->f_74, iParam3);
		num = func_99(3881, iParam0);
		func_98(num, uParam1->f_75, iParam3);
		num = func_99(3882, iParam0);
		func_98(num, uParam1->f_76, iParam3);
		num = func_95(iParam0);
		func_98(num, uParam1->f_97, iParam3);
		num = func_94(iParam0);
		func_98(num, uParam1->f_99, iParam3);
		num = func_93(iParam0);
		func_98(num, uParam1->f_98, iParam3);
		num = func_79(iParam0, false);
		func_98(num, uParam1->f_102, iParam3);
		num = func_78(iParam0);
		_STAT_SET_PACKED_BOOL(num, IS_BIT_SET(uParam1->f_103, 0), -1);
	}

	cloudTimeAsInt = Global_2359296[func_101() /*5571*/].f_681.f_1275;

	if (bParam5)
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	func_76(1629, cloudTimeAsInt, iParam3, true);
	!bParam4;
	func_76(func_74(1, iParam0), uParam1->f_104, iParam3, true);
	!bParam4;
	func_76(func_74(2, iParam0), uParam1->f_105, iParam3, true);
	!bParam4;
	func_76(func_74(3, iParam0), uParam1->f_106, iParam3, true);
	!bParam4;
	func_76(func_74(4, iParam0), uParam1->f_66, iParam3, true);
	func_76(func_74(5, iParam0), uParam1->f_77, iParam3, true);
	!bParam4;
	func_76(func_74(7, iParam0), uParam1->f_141, iParam3, true);

	if (!func_97(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_71(func_74(6, iParam0), &(uParam1->f_1), iParam3);
			!bParam4;
		}
		else
		{
			!bParam4;
		}
	}

	!bParam4;
	return 1;
}

void func_71(int iParam0, const char* sParam1, int iParam2) // Position - 0x6530 Hash - 0xF20CC64E ^0x3437932
{
	Hash statName;

	statName = func_72(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_LICENSE_PLATE(statName, sParam1);

	return;
}

Hash func_72(int iParam0, int iParam1) // Position - 0x6551 Hash - 0x505A9F99 ^0x8B00E935
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_73(iParam1));
}

int func_73(int iParam0) // Position - 0x6566 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_23();
	
		if (num2 > -1)
		{
			Global_2751934 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2751934 = 1;
		}
	}

	return num;
}

int func_74(int iParam0, int iParam1) // Position - 0x659A Hash - 0x7784C9D8 ^0xD82AA01B
{
	if (iParam1 >= 363)
	{
		return func_75(iParam0, iParam1);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return 1630;
				
					case 1:
						return 1637;
				
					case 2:
						return 1644;
				
					case 3:
						return 1651;
				
					case 4:
						return 1658;
				
					case 5:
						return 1665;
				
					case 6:
						return 1672;
				
					case 7:
						return 1679;
				
					case 8:
						return 1686;
				
					case 9:
						return 1693;
				
					case 10:
						return 1700;
				
					case 11:
						return 1706;
				
					case 12:
						return 1712;
				
					case 13:
						return 1718;
				
					case 14:
						return 1797;
				
					case 15:
						return 1804;
				
					case 16:
						return 1811;
				
					case 17:
						return 1818;
				
					case 18:
						return 1825;
				
					case 19:
						return 1832;
				
					case 20:
						return 1839;
				
					case 21:
						return 1846;
				
					case 22:
						return 1853;
				
					case 23:
						return 1860;
				
					case 24:
						return 1866;
				
					case 25:
						return 1872;
				
					case 26:
						return 2167;
				
					case 27:
						return 2174;
				
					case 28:
						return 2181;
				
					case 29:
						return 2188;
				
					case 30:
						return 2195;
				
					case 31:
						return 2202;
				
					case 32:
						return 2209;
				
					case 33:
						return 2216;
				
					case 34:
						return 2223;
				
					case 35:
						return 2230;
				
					case 36:
						return 2237;
				
					case 37:
						return 2243;
				
					case 38:
						return 2249;
				
					case 39:
						return 2831;
				
					case 40:
						return 2838;
				
					case 41:
						return 2845;
				
					case 42:
						return 2852;
				
					case 43:
						return 2859;
				
					case 44:
						return 2866;
				
					case 45:
						return 2873;
				
					case 46:
						return 2880;
				
					case 47:
						return 2887;
				
					case 48:
						return 2894;
				
					case 49:
						return 2901;
				
					case 50:
						return 2907;
				
					case 51:
						return 2913;
				
					case 52:
						return 2955;
				
					case 53:
						return 2962;
				
					case 54:
						return 2969;
				
					case 55:
						return 2976;
				
					case 56:
						return 2983;
				
					case 57:
						return 2990;
				
					case 58:
						return 2997;
				
					case 59:
						return 3004;
				
					case 60:
						return 3011;
				
					case 61:
						return 3018;
				
					case 62:
						return 3025;
				
					case 63:
						return 3031;
				
					case 64:
						return 3037;
				
					case 65:
						return 3238;
				
					case 66:
						return 3246;
				
					case 67:
						return 3254;
				
					case 68:
						return 3262;
				
					case 69:
						return 3270;
				
					case 70:
						return 3278;
				
					case 71:
						return 3286;
				
					case 72:
						return 3294;
				
					case 73:
						return 3302;
				
					case 74:
						return 3310;
				
					case 75:
						return 3318;
				
					case 76:
						return 3326;
				
					case 77:
						return 3334;
				
					case 78:
						return 3342;
				
					case 79:
						return 3350;
				
					case 80:
						return 3358;
				
					case 81:
						return 3366;
				
					case 82:
						return 3374;
				
					case 83:
						return 3382;
				
					case 84:
						return 3390;
				
					case 85:
						return 3398;
				
					case 86:
						return 3405;
				
					case 87:
						return 3412;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4034;
				
					case 89:
						return 4042;
				
					case 90:
						return 4050;
				
					case 91:
						return 4058;
				
					case 92:
						return 4066;
				
					case 93:
						return 4074;
				
					case 94:
						return 4082;
				
					case 95:
						return 4090;
				
					case 96:
						return 4098;
				
					case 97:
						return 4106;
				
					case 98:
						return 4114;
				
					case 99:
						return 4122;
				
					case 100:
						return 4130;
				
					case 101:
						return 4138;
				
					case 102:
						return 4146;
				
					case 103:
						return 4154;
				
					case 104:
						return 4162;
				
					case 105:
						return 4170;
				
					case 106:
						return 4178;
				
					case 107:
						return 4186;
				
					case 108:
						return 4194;
				
					case 109:
						return 4202;
				
					case 110:
						return 4210;
				
					case 111:
						return 4218;
				
					case 112:
						return 4226;
				
					case 113:
						return 4234;
				
					case 114:
						return 4242;
				
					case 115:
						return 4250;
				
					case 116:
						return 4258;
				
					case 117:
						return 4266;
				
					case 118:
						return 4274;
				
					case 119:
						return 4282;
				
					case 120:
						return 4290;
				
					case 121:
						return 4298;
				
					case 122:
						return 4306;
				
					case 123:
						return 4314;
				
					case 124:
						return 4322;
				
					case 125:
						return 4330;
				
					case 126:
						return 4338;
				
					case 127:
						return 4346;
				
					case 128:
						return 4354;
				
					case 129:
						return 4362;
				
					case 130:
						return 4370;
				
					case 131:
						return 4378;
				
					case 132:
						return 4386;
				
					case 133:
						return 4394;
				
					case 134:
						return 4402;
				
					case 135:
						return 4410;
				
					case 136:
						return 4418;
				
					case 137:
						return 4426;
				
					case 138:
						return 4434;
				
					case 139:
						return 4442;
				
					case 140:
						return 4450;
				
					case 141:
						return 4458;
				
					case 142:
						return 4466;
				
					case 143:
						return 4474;
				
					case 144:
						return 4482;
				
					case 145:
						return 4490;
				
					case 146:
						return 4498;
				
					case 147:
						return 4506;
				
					case 148:
						return 4514;
				
					case 149:
						return 4522;
				
					case 150:
						return 4530;
				
					case 151:
						return 4538;
				
					case 152:
						return 4546;
				
					case 153:
						return 4554;
				
					case 154:
						return 4562;
				
					case 155:
						return 4570;
				
					case 156:
						return 4578;
				
					case 157:
						return 4586;
				
					case 158:
						return 5479;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5928;
				
					case 160:
						return 5935;
				
					case 161:
						return 5942;
				
					case 162:
						return 5949;
				
					case 163:
						return 5956;
				
					case 164:
						return 5963;
				
					case 165:
						return 5970;
				
					case 166:
						return 5977;
				
					case 167:
						return 5984;
				
					case 168:
						return 5991;
				
					case 169:
						return 5998;
				
					case 170:
						return 6005;
				
					case 171:
						return 6012;
				
					case 172:
						return 6019;
				
					case 173:
						return 6026;
				
					case 174:
						return 6033;
				
					case 175:
						return 6040;
				
					case 176:
						return 6047;
				
					case 177:
						return 6054;
				
					case 178:
						return 6061;
				
					case 179:
						return 6068;
				
					case 180:
						return 6075;
				
					case 181:
						return 6082;
				
					case 182:
						return 6089;
				
					case 183:
						return 6096;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6173;
				
					case 185:
						return 6180;
				
					case 186:
						return 6187;
				
					case 187:
						return 6194;
				
					case 188:
						return 6201;
				
					case 189:
						return 6208;
				
					case 190:
						return 6215;
				
					case 191:
						return 6222;
				
					case 192:
						return 6229;
				
					case 193:
						return 6236;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6570;
				
					case 195:
						return 6577;
				
					case 196:
						return 6584;
				
					case 197:
						return 6591;
				
					case 198:
						return 6598;
				
					case 199:
						return 6605;
				
					case 200:
						return 6612;
				
					case 201:
						return 6619;
				
					case 202:
						return 6626;
				
					case 203:
						return 6633;
				
					case 204:
						return 6640;
				
					case 205:
						return 6647;
				
					case 206:
						return 6654;
				
					case 207:
						return 6661;
				
					case 208:
						return 6668;
				
					case 209:
						return 6675;
				
					case 210:
						return 6682;
				
					case 211:
						return 6689;
				
					case 212:
						return 6696;
				
					case 213:
						return 6703;
				
					case 214:
						return 6710;
				
					case 215:
						return 6717;
				
					case 216:
						return 6724;
				
					case 217:
						return 6731;
				
					case 218:
						return 6738;
				
					case 219:
						return 6745;
				
					case 220:
						return 6752;
				
					case 221:
						return 6759;
				
					case 222:
						return 6766;
				
					case 223:
						return 6773;
				
					case 224:
						return 6780;
				
					case 225:
						return 6787;
				
					case 226:
						return 6794;
				
					case 227:
						return 6801;
				
					case 228:
						return 6808;
				
					case 229:
						return 6815;
				
					case 230:
						return 6822;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7292;
				
					case 232:
						return 7299;
				
					case 233:
						return 7306;
				
					case 234:
						return 7313;
				
					case 235:
						return 7320;
				
					case 236:
						return 7327;
				
					case 237:
						return 7334;
				
					case 238:
						return 7341;
				
					case 239:
						return 7348;
				
					case 240:
						return 7355;
				
					case 241:
						return 7362;
				
					case 242:
						return 7369;
				
					case 243:
						return 7376;
				
					case 244:
						return 7383;
				
					case 245:
						return 7390;
				
					case 246:
						return 7397;
				
					case 247:
						return 7404;
				
					case 248:
						return 7411;
				
					case 249:
						return 7418;
				
					case 250:
						return 7425;
				
					case 251:
						return 7432;
				
					case 252:
						return 7439;
				
					case 253:
						return 7446;
				
					case 254:
						return 7453;
				
					case 255:
						return 7460;
				
					case 256:
						return 7467;
				
					case 257:
						return 7474;
				
					case 258:
						return 7481;
				
					case 259:
						return 7488;
				
					case 260:
						return 7495;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8015;
				
					case 262:
						return 8022;
				
					case 263:
						return 8029;
				
					case 264:
						return 8036;
				
					case 265:
						return 8043;
				
					case 266:
						return 8050;
				
					case 267:
						return 8057;
				
					case 268:
						return 8064;
				
					case 269:
						return 8071;
				
					case 270:
						return 8078;
				
					case 271:
						return 8539;
				
					case 272:
						return 8546;
				
					case 273:
						return 8553;
				
					case 274:
						return 8560;
				
					case 275:
						return 8567;
				
					case 276:
						return 8574;
				
					case 277:
						return 8581;
				
					case 278:
						return 8588;
				
					case 279:
						return 8595;
				
					case 280:
						return 8602;
				
					case 281:
						return 8986;
				
					case 282:
						return 8993;
				
					case 283:
						return 9000;
				
					case 284:
						return 9007;
				
					case 285:
						return 9014;
				
					case 286:
						return 9021;
				
					case 287:
						return 9028;
				
					case 288:
						return 9035;
				
					case 289:
						return 9042;
				
					case 290:
						return 9049;
				
					case 291:
						return 9056;
				
					case 292:
						return 9062;
				
					case 293:
						return 9068;
				
					case 294:
						return 9074;
				
					case 295:
						return 9081;
				
					case 296:
						return 9088;
				
					case 297:
						return 9095;
				
					case 298:
						return 9102;
				
					case 299:
						return 9109;
				
					case 300:
						return 9116;
				
					case 301:
						return 9123;
				
					case 302:
						return 9130;
				
					case 303:
						return 9137;
				
					case 304:
						return 9144;
				
					case 305:
						return 9150;
				
					case 306:
						return 9156;
				
					case 307:
						return 9637;
				
					case 308:
						return 9644;
				
					case 309:
						return 9651;
				
					case 310:
						return 9658;
				
					case 311:
						return 9665;
				
					case 312:
						return 9672;
				
					case 313:
						return 9679;
				
					case 314:
						return 9686;
				
					case 315:
						return 9693;
				
					case 316:
						return 9700;
				
					case 317:
						return 9922;
				
					case 318:
						return 9929;
				
					case 319:
						return 9936;
				
					case 320:
						return 9943;
				
					case 321:
						return 9950;
				
					case 322:
						return 9957;
				
					case 323:
						return 9964;
				
					case 324:
						return 9971;
				
					case 325:
						return 9978;
				
					case 326:
						return 9985;
				
					case 327:
						return 9992;
				
					case 328:
						return 9999;
				
					case 329:
						return 10006;
				
					case 330:
						return 10013;
				
					case 331:
						return 10020;
				
					case 332:
						return 10027;
				
					case 333:
						return 10034;
				
					case 334:
						return 10041;
				
					case 335:
						return 10048;
				
					case 336:
						return 10055;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10448;
				
					case 338:
						return 10455;
				
					case 339:
						return 10462;
				
					case 340:
						return 10469;
				
					case 341:
						return 10476;
				
					case 342:
						return 10483;
				
					case 343:
						return 10490;
				
					case 344:
						return 10497;
				
					case 345:
						return 10504;
				
					case 346:
						return 10511;
				
					case 347:
						return 10518;
				
					case 348:
						return 10524;
				
					case 349:
						return 10530;
				
					case 350:
						return 10536;
				
					case 351:
						return 10543;
				
					case 352:
						return 10550;
				
					case 353:
						return 10557;
				
					case &func_1:
						return 10564;
				
					case 355:
						return 10571;
				
					case 356:
						return 10578;
				
					case 357:
						return 10585;
				
					case 358:
						return 10592;
				
					case 359:
						return 10599;
				
					case 360:
						return 10606;
				
					case 361:
						return 10612;
				
					case 362:
						return 10618;
				
					default:
						break;
				}
				break;
		
			case 2:
				switch (iParam1)
				{
					case 0:
						return 1631;
				
					case 1:
						return 1638;
				
					case 2:
						return 1645;
				
					case 3:
						return 1652;
				
					case 4:
						return 1659;
				
					case 5:
						return 1666;
				
					case 6:
						return 1673;
				
					case 7:
						return 1680;
				
					case 8:
						return 1687;
				
					case 9:
						return 1694;
				
					case 10:
						return 1701;
				
					case 11:
						return 1707;
				
					case 12:
						return 1713;
				
					case 13:
						return 1719;
				
					case 14:
						return 1798;
				
					case 15:
						return 1805;
				
					case 16:
						return 1812;
				
					case 17:
						return 1819;
				
					case 18:
						return 1826;
				
					case 19:
						return 1833;
				
					case 20:
						return 1840;
				
					case 21:
						return 1847;
				
					case 22:
						return 1854;
				
					case 23:
						return 1861;
				
					case 24:
						return 1867;
				
					case 25:
						return 1873;
				
					case 26:
						return 2168;
				
					case 27:
						return 2175;
				
					case 28:
						return 2182;
				
					case 29:
						return 2189;
				
					case 30:
						return 2196;
				
					case 31:
						return 2203;
				
					case 32:
						return 2210;
				
					case 33:
						return 2217;
				
					case 34:
						return 2224;
				
					case 35:
						return 2231;
				
					case 36:
						return 2238;
				
					case 37:
						return 2244;
				
					case 38:
						return 2250;
				
					case 39:
						return 2832;
				
					case 40:
						return 2839;
				
					case 41:
						return 2846;
				
					case 42:
						return 2853;
				
					case 43:
						return 2860;
				
					case 44:
						return 2867;
				
					case 45:
						return 2874;
				
					case 46:
						return 2881;
				
					case 47:
						return 2888;
				
					case 48:
						return 2895;
				
					case 49:
						return 2902;
				
					case 50:
						return 2908;
				
					case 51:
						return 2914;
				
					case 52:
						return 2956;
				
					case 53:
						return 2963;
				
					case 54:
						return 2970;
				
					case 55:
						return 2977;
				
					case 56:
						return 2984;
				
					case 57:
						return 2991;
				
					case 58:
						return 2998;
				
					case 59:
						return 3005;
				
					case 60:
						return 3012;
				
					case 61:
						return 3019;
				
					case 62:
						return 3026;
				
					case 63:
						return 3032;
				
					case 64:
						return 3038;
				
					case 65:
						return 3239;
				
					case 66:
						return 3247;
				
					case 67:
						return 3255;
				
					case 68:
						return 3263;
				
					case 69:
						return 3271;
				
					case 70:
						return 3279;
				
					case 71:
						return 3287;
				
					case 72:
						return 3295;
				
					case 73:
						return 3303;
				
					case 74:
						return 3311;
				
					case 75:
						return 3319;
				
					case 76:
						return 3327;
				
					case 77:
						return 3335;
				
					case 78:
						return 3343;
				
					case 79:
						return 3351;
				
					case 80:
						return 3359;
				
					case 81:
						return 3367;
				
					case 82:
						return 3375;
				
					case 83:
						return 3383;
				
					case 84:
						return 3391;
				
					case 85:
						return 3399;
				
					case 86:
						return 3406;
				
					case 87:
						return 3413;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4035;
				
					case 89:
						return 4043;
				
					case 90:
						return 4051;
				
					case 91:
						return 4059;
				
					case 92:
						return 4067;
				
					case 93:
						return 4075;
				
					case 94:
						return 4083;
				
					case 95:
						return 4091;
				
					case 96:
						return 4099;
				
					case 97:
						return 4107;
				
					case 98:
						return 4115;
				
					case 99:
						return 4123;
				
					case 100:
						return 4131;
				
					case 101:
						return 4139;
				
					case 102:
						return 4147;
				
					case 103:
						return 4155;
				
					case 104:
						return 4163;
				
					case 105:
						return 4171;
				
					case 106:
						return 4179;
				
					case 107:
						return 4187;
				
					case 108:
						return 4195;
				
					case 109:
						return 4203;
				
					case 110:
						return 4211;
				
					case 111:
						return 4219;
				
					case 112:
						return 4227;
				
					case 113:
						return 4235;
				
					case 114:
						return 4243;
				
					case 115:
						return 4251;
				
					case 116:
						return 4259;
				
					case 117:
						return 4267;
				
					case 118:
						return 4275;
				
					case 119:
						return 4283;
				
					case 120:
						return 4291;
				
					case 121:
						return 4299;
				
					case 122:
						return 4307;
				
					case 123:
						return 4315;
				
					case 124:
						return 4323;
				
					case 125:
						return 4331;
				
					case 126:
						return 4339;
				
					case 127:
						return 4347;
				
					case 128:
						return 4355;
				
					case 129:
						return 4363;
				
					case 130:
						return 4371;
				
					case 131:
						return 4379;
				
					case 132:
						return 4387;
				
					case 133:
						return 4395;
				
					case 134:
						return 4403;
				
					case 135:
						return 4411;
				
					case 136:
						return 4419;
				
					case 137:
						return 4427;
				
					case 138:
						return 4435;
				
					case 139:
						return 4443;
				
					case 140:
						return 4451;
				
					case 141:
						return 4459;
				
					case 142:
						return 4467;
				
					case 143:
						return 4475;
				
					case 144:
						return 4483;
				
					case 145:
						return 4491;
				
					case 146:
						return 4499;
				
					case 147:
						return 4507;
				
					case 148:
						return 4515;
				
					case 149:
						return 4523;
				
					case 150:
						return 4531;
				
					case 151:
						return 4539;
				
					case 152:
						return 4547;
				
					case 153:
						return 4555;
				
					case 154:
						return 4563;
				
					case 155:
						return 4571;
				
					case 156:
						return 4579;
				
					case 157:
						return 4587;
				
					case 158:
						return 5480;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5929;
				
					case 160:
						return 5936;
				
					case 161:
						return 5943;
				
					case 162:
						return 5950;
				
					case 163:
						return 5957;
				
					case 164:
						return 5964;
				
					case 165:
						return 5971;
				
					case 166:
						return 5978;
				
					case 167:
						return 5985;
				
					case 168:
						return 5992;
				
					case 169:
						return 5999;
				
					case 170:
						return 6006;
				
					case 171:
						return 6013;
				
					case 172:
						return 6020;
				
					case 173:
						return 6027;
				
					case 174:
						return 6034;
				
					case 175:
						return 6041;
				
					case 176:
						return 6048;
				
					case 177:
						return 6055;
				
					case 178:
						return 6062;
				
					case 179:
						return 6069;
				
					case 180:
						return 6076;
				
					case 181:
						return 6083;
				
					case 182:
						return 6090;
				
					case 183:
						return 6097;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6174;
				
					case 185:
						return 6181;
				
					case 186:
						return 6188;
				
					case 187:
						return 6195;
				
					case 188:
						return 6202;
				
					case 189:
						return 6209;
				
					case 190:
						return 6216;
				
					case 191:
						return 6223;
				
					case 192:
						return 6230;
				
					case 193:
						return 6237;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6571;
				
					case 195:
						return 6578;
				
					case 196:
						return 6585;
				
					case 197:
						return 6592;
				
					case 198:
						return 6599;
				
					case 199:
						return 6606;
				
					case 200:
						return 6613;
				
					case 201:
						return 6620;
				
					case 202:
						return 6627;
				
					case 203:
						return 6634;
				
					case 204:
						return 6641;
				
					case 205:
						return 6648;
				
					case 206:
						return 6655;
				
					case 207:
						return 6662;
				
					case 208:
						return 6669;
				
					case 209:
						return 6676;
				
					case 210:
						return 6683;
				
					case 211:
						return 6690;
				
					case 212:
						return 6697;
				
					case 213:
						return 6704;
				
					case 214:
						return 6711;
				
					case 215:
						return 6718;
				
					case 216:
						return 6725;
				
					case 217:
						return 6732;
				
					case 218:
						return 6739;
				
					case 219:
						return 6746;
				
					case 220:
						return 6753;
				
					case 221:
						return 6760;
				
					case 222:
						return 6767;
				
					case 223:
						return 6774;
				
					case 224:
						return 6781;
				
					case 225:
						return 6788;
				
					case 226:
						return 6795;
				
					case 227:
						return 6802;
				
					case 228:
						return 6809;
				
					case 229:
						return 6816;
				
					case 230:
						return 6823;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7293;
				
					case 232:
						return 7300;
				
					case 233:
						return 7307;
				
					case 234:
						return 7314;
				
					case 235:
						return 7321;
				
					case 236:
						return 7328;
				
					case 237:
						return 7335;
				
					case 238:
						return 7342;
				
					case 239:
						return 7349;
				
					case 240:
						return 7356;
				
					case 241:
						return 7363;
				
					case 242:
						return 7370;
				
					case 243:
						return 7377;
				
					case 244:
						return 7384;
				
					case 245:
						return 7391;
				
					case 246:
						return 7398;
				
					case 247:
						return 7405;
				
					case 248:
						return 7412;
				
					case 249:
						return 7419;
				
					case 250:
						return 7426;
				
					case 251:
						return 7433;
				
					case 252:
						return 7440;
				
					case 253:
						return 7447;
				
					case 254:
						return 7454;
				
					case 255:
						return 7461;
				
					case 256:
						return 7468;
				
					case 257:
						return 7475;
				
					case 258:
						return 7482;
				
					case 259:
						return 7489;
				
					case 260:
						return 7496;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8016;
				
					case 262:
						return 8023;
				
					case 263:
						return 8030;
				
					case 264:
						return 8037;
				
					case 265:
						return 8044;
				
					case 266:
						return 8051;
				
					case 267:
						return 8058;
				
					case 268:
						return 8065;
				
					case 269:
						return 8072;
				
					case 270:
						return 8079;
				
					case 271:
						return 8540;
				
					case 272:
						return 8547;
				
					case 273:
						return 8554;
				
					case 274:
						return 8561;
				
					case 275:
						return 8568;
				
					case 276:
						return 8575;
				
					case 277:
						return 8582;
				
					case 278:
						return 8589;
				
					case 279:
						return 8596;
				
					case 280:
						return 8603;
				
					case 281:
						return 8987;
				
					case 282:
						return 8994;
				
					case 283:
						return 9001;
				
					case 284:
						return 9008;
				
					case 285:
						return 9015;
				
					case 286:
						return 9022;
				
					case 287:
						return 9029;
				
					case 288:
						return 9036;
				
					case 289:
						return 9043;
				
					case 290:
						return 9050;
				
					case 291:
						return 9057;
				
					case 292:
						return 9063;
				
					case 293:
						return 9069;
				
					case 294:
						return 9075;
				
					case 295:
						return 9082;
				
					case 296:
						return 9089;
				
					case 297:
						return 9096;
				
					case 298:
						return 9103;
				
					case 299:
						return 9110;
				
					case 300:
						return 9117;
				
					case 301:
						return 9124;
				
					case 302:
						return 9131;
				
					case 303:
						return 9138;
				
					case 304:
						return 9145;
				
					case 305:
						return 9151;
				
					case 306:
						return 9157;
				
					case 307:
						return 9638;
				
					case 308:
						return 9645;
				
					case 309:
						return 9652;
				
					case 310:
						return 9659;
				
					case 311:
						return 9666;
				
					case 312:
						return 9673;
				
					case 313:
						return 9680;
				
					case 314:
						return 9687;
				
					case 315:
						return 9694;
				
					case 316:
						return 9701;
				
					case 317:
						return 9923;
				
					case 318:
						return 9930;
				
					case 319:
						return 9937;
				
					case 320:
						return 9944;
				
					case 321:
						return 9951;
				
					case 322:
						return 9958;
				
					case 323:
						return 9965;
				
					case 324:
						return 9972;
				
					case 325:
						return 9979;
				
					case 326:
						return 9986;
				
					case 327:
						return 9993;
				
					case 328:
						return 10000;
				
					case 329:
						return 10007;
				
					case 330:
						return 10014;
				
					case 331:
						return 10021;
				
					case 332:
						return 10028;
				
					case 333:
						return 10035;
				
					case 334:
						return 10042;
				
					case 335:
						return 10049;
				
					case 336:
						return 10056;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10449;
				
					case 338:
						return 10456;
				
					case 339:
						return 10463;
				
					case 340:
						return 10470;
				
					case 341:
						return 10477;
				
					case 342:
						return 10484;
				
					case 343:
						return 10491;
				
					case 344:
						return 10498;
				
					case 345:
						return 10505;
				
					case 346:
						return 10512;
				
					case 347:
						return 10519;
				
					case 348:
						return 10525;
				
					case 349:
						return 10531;
				
					case 350:
						return 10537;
				
					case 351:
						return 10544;
				
					case 352:
						return 10551;
				
					case 353:
						return 10558;
				
					case &func_1:
						return 10565;
				
					case 355:
						return 10572;
				
					case 356:
						return 10579;
				
					case 357:
						return 10586;
				
					case 358:
						return 10593;
				
					case 359:
						return 10600;
				
					case 360:
						return 10607;
				
					case 361:
						return 10613;
				
					case 362:
						return 10619;
				
					default:
						break;
				}
				break;
		
			case 3:
				switch (iParam1)
				{
					case 0:
						return 1632;
				
					case 1:
						return 1639;
				
					case 2:
						return 1646;
				
					case 3:
						return 1653;
				
					case 4:
						return 1660;
				
					case 5:
						return 1667;
				
					case 6:
						return 1674;
				
					case 7:
						return 1681;
				
					case 8:
						return 1688;
				
					case 9:
						return 1695;
				
					case 10:
						return 1702;
				
					case 11:
						return 1708;
				
					case 12:
						return 1714;
				
					case 13:
						return 1720;
				
					case 14:
						return 1799;
				
					case 15:
						return 1806;
				
					case 16:
						return 1813;
				
					case 17:
						return 1820;
				
					case 18:
						return 1827;
				
					case 19:
						return 1834;
				
					case 20:
						return 1841;
				
					case 21:
						return 1848;
				
					case 22:
						return 1855;
				
					case 23:
						return 1862;
				
					case 24:
						return 1868;
				
					case 25:
						return 1874;
				
					case 26:
						return 2169;
				
					case 27:
						return 2176;
				
					case 28:
						return 2183;
				
					case 29:
						return 2190;
				
					case 30:
						return 2197;
				
					case 31:
						return 2204;
				
					case 32:
						return 2211;
				
					case 33:
						return 2218;
				
					case 34:
						return 2225;
				
					case 35:
						return 2232;
				
					case 36:
						return 2239;
				
					case 37:
						return 2245;
				
					case 38:
						return 2251;
				
					case 39:
						return 2833;
				
					case 40:
						return 2840;
				
					case 41:
						return 2847;
				
					case 42:
						return 2854;
				
					case 43:
						return 2861;
				
					case 44:
						return 2868;
				
					case 45:
						return 2875;
				
					case 46:
						return 2882;
				
					case 47:
						return 2889;
				
					case 48:
						return 2896;
				
					case 49:
						return 2903;
				
					case 50:
						return 2909;
				
					case 51:
						return 2915;
				
					case 52:
						return 2957;
				
					case 53:
						return 2964;
				
					case 54:
						return 2971;
				
					case 55:
						return 2978;
				
					case 56:
						return 2985;
				
					case 57:
						return 2992;
				
					case 58:
						return 2999;
				
					case 59:
						return 3006;
				
					case 60:
						return 3013;
				
					case 61:
						return 3020;
				
					case 62:
						return 3027;
				
					case 63:
						return 3033;
				
					case 64:
						return 3039;
				
					case 65:
						return 3240;
				
					case 66:
						return 3248;
				
					case 67:
						return 3256;
				
					case 68:
						return 3264;
				
					case 69:
						return 3272;
				
					case 70:
						return 3280;
				
					case 71:
						return 3288;
				
					case 72:
						return 3296;
				
					case 73:
						return 3304;
				
					case 74:
						return 3312;
				
					case 75:
						return 3320;
				
					case 76:
						return 3328;
				
					case 77:
						return 3336;
				
					case 78:
						return 3344;
				
					case 79:
						return 3352;
				
					case 80:
						return 3360;
				
					case 81:
						return 3368;
				
					case 82:
						return 3376;
				
					case 83:
						return 3384;
				
					case 84:
						return 3392;
				
					case 85:
						return 3400;
				
					case 86:
						return 3407;
				
					case 87:
						return 3414;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4036;
				
					case 89:
						return 4044;
				
					case 90:
						return 4052;
				
					case 91:
						return 4060;
				
					case 92:
						return 4068;
				
					case 93:
						return 4076;
				
					case 94:
						return 4084;
				
					case 95:
						return 4092;
				
					case 96:
						return 4100;
				
					case 97:
						return 4108;
				
					case 98:
						return 4116;
				
					case 99:
						return 4124;
				
					case 100:
						return 4132;
				
					case 101:
						return 4140;
				
					case 102:
						return 4148;
				
					case 103:
						return 4156;
				
					case 104:
						return 4164;
				
					case 105:
						return 4172;
				
					case 106:
						return 4180;
				
					case 107:
						return 4188;
				
					case 108:
						return 4196;
				
					case 109:
						return 4204;
				
					case 110:
						return joaat("twi_01");
				
					case 111:
						return 4220;
				
					case 112:
						return 4228;
				
					case 113:
						return 4236;
				
					case 114:
						return 4244;
				
					case 115:
						return 4252;
				
					case 116:
						return 4260;
				
					case 117:
						return 4268;
				
					case 118:
						return 4276;
				
					case 119:
						return 4284;
				
					case 120:
						return 4292;
				
					case 121:
						return 4300;
				
					case 122:
						return 4308;
				
					case 123:
						return 4316;
				
					case 124:
						return 4324;
				
					case 125:
						return 4332;
				
					case 126:
						return 4340;
				
					case 127:
						return 4348;
				
					case 128:
						return 4356;
				
					case 129:
						return 4364;
				
					case 130:
						return 4372;
				
					case 131:
						return 4380;
				
					case 132:
						return 4388;
				
					case 133:
						return 4396;
				
					case 134:
						return 4404;
				
					case 135:
						return 4412;
				
					case 136:
						return 4420;
				
					case 137:
						return 4428;
				
					case 138:
						return 4436;
				
					case 139:
						return 4444;
				
					case 140:
						return 4452;
				
					case 141:
						return 4460;
				
					case 142:
						return 4468;
				
					case 143:
						return 4476;
				
					case 144:
						return 4484;
				
					case 145:
						return 4492;
				
					case 146:
						return 4500;
				
					case 147:
						return 4508;
				
					case 148:
						return 4516;
				
					case 149:
						return 4524;
				
					case 150:
						return 4532;
				
					case 151:
						return 4540;
				
					case 152:
						return 4548;
				
					case 153:
						return 4556;
				
					case 154:
						return 4564;
				
					case 155:
						return 4572;
				
					case 156:
						return 4580;
				
					case 157:
						return 4588;
				
					case 158:
						return 5481;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5930;
				
					case 160:
						return 5937;
				
					case 161:
						return 5944;
				
					case 162:
						return 5951;
				
					case 163:
						return 5958;
				
					case 164:
						return 5965;
				
					case 165:
						return 5972;
				
					case 166:
						return 5979;
				
					case 167:
						return 5986;
				
					case 168:
						return 5993;
				
					case 169:
						return 6000;
				
					case 170:
						return 6007;
				
					case 171:
						return 6014;
				
					case 172:
						return 6021;
				
					case 173:
						return 6028;
				
					case 174:
						return 6035;
				
					case 175:
						return 6042;
				
					case 176:
						return 6049;
				
					case 177:
						return 6056;
				
					case 178:
						return 6063;
				
					case 179:
						return 6070;
				
					case 180:
						return 6077;
				
					case 181:
						return 6084;
				
					case 182:
						return 6091;
				
					case 183:
						return 6098;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6175;
				
					case 185:
						return 6182;
				
					case 186:
						return 6189;
				
					case 187:
						return 6196;
				
					case 188:
						return 6203;
				
					case 189:
						return 6210;
				
					case 190:
						return 6217;
				
					case 191:
						return 6224;
				
					case 192:
						return 6231;
				
					case 193:
						return 6238;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6572;
				
					case 195:
						return 6579;
				
					case 196:
						return 6586;
				
					case 197:
						return 6593;
				
					case 198:
						return 6600;
				
					case 199:
						return 6607;
				
					case 200:
						return 6614;
				
					case 201:
						return 6621;
				
					case 202:
						return 6628;
				
					case 203:
						return 6635;
				
					case 204:
						return 6642;
				
					case 205:
						return 6649;
				
					case 206:
						return 6656;
				
					case 207:
						return 6663;
				
					case 208:
						return 6670;
				
					case 209:
						return 6677;
				
					case 210:
						return 6684;
				
					case 211:
						return 6691;
				
					case 212:
						return 6698;
				
					case 213:
						return 6705;
				
					case 214:
						return 6712;
				
					case 215:
						return 6719;
				
					case 216:
						return 6726;
				
					case 217:
						return 6733;
				
					case 218:
						return 6740;
				
					case 219:
						return 6747;
				
					case 220:
						return 6754;
				
					case 221:
						return 6761;
				
					case 222:
						return 6768;
				
					case 223:
						return 6775;
				
					case 224:
						return 6782;
				
					case 225:
						return 6789;
				
					case 226:
						return 6796;
				
					case 227:
						return 6803;
				
					case 228:
						return 6810;
				
					case 229:
						return 6817;
				
					case 230:
						return 6824;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7294;
				
					case 232:
						return 7301;
				
					case 233:
						return 7308;
				
					case 234:
						return 7315;
				
					case 235:
						return 7322;
				
					case 236:
						return 7329;
				
					case 237:
						return 7336;
				
					case 238:
						return 7343;
				
					case 239:
						return 7350;
				
					case 240:
						return 7357;
				
					case 241:
						return 7364;
				
					case 242:
						return 7371;
				
					case 243:
						return 7378;
				
					case 244:
						return 7385;
				
					case 245:
						return 7392;
				
					case 246:
						return 7399;
				
					case 247:
						return 7406;
				
					case 248:
						return 7413;
				
					case 249:
						return 7420;
				
					case 250:
						return 7427;
				
					case 251:
						return 7434;
				
					case 252:
						return 7441;
				
					case 253:
						return 7448;
				
					case 254:
						return 7455;
				
					case 255:
						return 7462;
				
					case 256:
						return 7469;
				
					case 257:
						return 7476;
				
					case 258:
						return 7483;
				
					case 259:
						return 7490;
				
					case 260:
						return 7497;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8017;
				
					case 262:
						return 8024;
				
					case 263:
						return 8031;
				
					case 264:
						return 8038;
				
					case 265:
						return 8045;
				
					case 266:
						return 8052;
				
					case 267:
						return 8059;
				
					case 268:
						return 8066;
				
					case 269:
						return 8073;
				
					case 270:
						return 8080;
				
					case 271:
						return 8541;
				
					case 272:
						return 8548;
				
					case 273:
						return 8555;
				
					case 274:
						return 8562;
				
					case 275:
						return 8569;
				
					case 276:
						return 8576;
				
					case 277:
						return 8583;
				
					case 278:
						return 8590;
				
					case 279:
						return 8597;
				
					case 280:
						return 8604;
				
					case 281:
						return 8988;
				
					case 282:
						return 8995;
				
					case 283:
						return 9002;
				
					case 284:
						return 9009;
				
					case 285:
						return 9016;
				
					case 286:
						return 9023;
				
					case 287:
						return 9030;
				
					case 288:
						return 9037;
				
					case 289:
						return 9044;
				
					case 290:
						return 9051;
				
					case 291:
						return 9058;
				
					case 292:
						return 9064;
				
					case 293:
						return 9070;
				
					case 294:
						return 9076;
				
					case 295:
						return 9083;
				
					case 296:
						return 9090;
				
					case 297:
						return 9097;
				
					case 298:
						return 9104;
				
					case 299:
						return 9111;
				
					case 300:
						return 9118;
				
					case 301:
						return 9125;
				
					case 302:
						return 9132;
				
					case 303:
						return 9139;
				
					case 304:
						return 9146;
				
					case 305:
						return 9152;
				
					case 306:
						return 9158;
				
					case 307:
						return 9639;
				
					case 308:
						return 9646;
				
					case 309:
						return 9653;
				
					case 310:
						return 9660;
				
					case 311:
						return 9667;
				
					case 312:
						return 9674;
				
					case 313:
						return 9681;
				
					case 314:
						return 9688;
				
					case 315:
						return 9695;
				
					case 316:
						return 9702;
				
					case 317:
						return 9924;
				
					case 318:
						return 9931;
				
					case 319:
						return 9938;
				
					case 320:
						return 9945;
				
					case 321:
						return 9952;
				
					case 322:
						return 9959;
				
					case 323:
						return 9966;
				
					case 324:
						return 9973;
				
					case 325:
						return 9980;
				
					case 326:
						return 9987;
				
					case 327:
						return 9994;
				
					case 328:
						return 10001;
				
					case 329:
						return 10008;
				
					case 330:
						return 10015;
				
					case 331:
						return 10022;
				
					case 332:
						return 10029;
				
					case 333:
						return 10036;
				
					case 334:
						return 10043;
				
					case 335:
						return 10050;
				
					case 336:
						return 10057;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10450;
				
					case 338:
						return 10457;
				
					case 339:
						return 10464;
				
					case 340:
						return 10471;
				
					case 341:
						return 10478;
				
					case 342:
						return 10485;
				
					case 343:
						return 10492;
				
					case 344:
						return 10499;
				
					case 345:
						return 10506;
				
					case 346:
						return 10513;
				
					case 347:
						return 10520;
				
					case 348:
						return 10526;
				
					case 349:
						return 10532;
				
					case 350:
						return 10538;
				
					case 351:
						return 10545;
				
					case 352:
						return 10552;
				
					case 353:
						return 10559;
				
					case &func_1:
						return 10566;
				
					case 355:
						return 10573;
				
					case 356:
						return 10580;
				
					case 357:
						return 10587;
				
					case 358:
						return 10594;
				
					case 359:
						return 10601;
				
					case 360:
						return 10608;
				
					case 361:
						return 10614;
				
					case 362:
						return 10620;
				
					default:
						break;
				}
				break;
		
			case 4:
				switch (iParam1)
				{
					case 0:
						return 1633;
				
					case 1:
						return 1640;
				
					case 2:
						return 1647;
				
					case 3:
						return 1654;
				
					case 4:
						return 1661;
				
					case 5:
						return 1668;
				
					case 6:
						return 1675;
				
					case 7:
						return 1682;
				
					case 8:
						return 1689;
				
					case 9:
						return 1696;
				
					case 10:
						return 1703;
				
					case 11:
						return 1709;
				
					case 12:
						return 1715;
				
					case 13:
						return 1721;
				
					case 14:
						return 1800;
				
					case 15:
						return 1807;
				
					case 16:
						return 1814;
				
					case 17:
						return 1821;
				
					case 18:
						return 1828;
				
					case 19:
						return 1835;
				
					case 20:
						return 1842;
				
					case 21:
						return 1849;
				
					case 22:
						return 1856;
				
					case 23:
						return 1863;
				
					case 24:
						return 1869;
				
					case 25:
						return 1875;
				
					case 26:
						return 2170;
				
					case 27:
						return 2177;
				
					case 28:
						return 2184;
				
					case 29:
						return 2191;
				
					case 30:
						return 2198;
				
					case 31:
						return 2205;
				
					case 32:
						return 2212;
				
					case 33:
						return 2219;
				
					case 34:
						return 2226;
				
					case 35:
						return 2233;
				
					case 36:
						return 2240;
				
					case 37:
						return 2246;
				
					case 38:
						return 2252;
				
					case 39:
						return 2834;
				
					case 40:
						return 2841;
				
					case 41:
						return 2848;
				
					case 42:
						return 2855;
				
					case 43:
						return 2862;
				
					case 44:
						return 2869;
				
					case 45:
						return 2876;
				
					case 46:
						return 2883;
				
					case 47:
						return 2890;
				
					case 48:
						return 2897;
				
					case 49:
						return 2904;
				
					case 50:
						return 2910;
				
					case 51:
						return 2916;
				
					case 52:
						return 2958;
				
					case 53:
						return 2965;
				
					case 54:
						return 2972;
				
					case 55:
						return 2979;
				
					case 56:
						return 2986;
				
					case 57:
						return 2993;
				
					case 58:
						return 3000;
				
					case 59:
						return 3007;
				
					case 60:
						return 3014;
				
					case 61:
						return 3021;
				
					case 62:
						return 3028;
				
					case 63:
						return 3034;
				
					case 64:
						return 3040;
				
					case 65:
						return 3241;
				
					case 66:
						return 3249;
				
					case 67:
						return 3257;
				
					case 68:
						return 3265;
				
					case 69:
						return 3273;
				
					case 70:
						return 3281;
				
					case 71:
						return 3289;
				
					case 72:
						return 3297;
				
					case 73:
						return 3305;
				
					case 74:
						return 3313;
				
					case 75:
						return 3321;
				
					case 76:
						return 3329;
				
					case 77:
						return 3337;
				
					case 78:
						return 3345;
				
					case 79:
						return 3353;
				
					case 80:
						return 3361;
				
					case 81:
						return 3369;
				
					case 82:
						return 3377;
				
					case 83:
						return 3385;
				
					case 84:
						return 3393;
				
					case 85:
						return 3401;
				
					case 86:
						return 3408;
				
					case 87:
						return 3415;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4037;
				
					case 89:
						return 4045;
				
					case 90:
						return 4053;
				
					case 91:
						return 4061;
				
					case 92:
						return 4069;
				
					case 93:
						return 4077;
				
					case 94:
						return 4085;
				
					case 95:
						return 4093;
				
					case 96:
						return 4101;
				
					case 97:
						return 4109;
				
					case 98:
						return 4117;
				
					case 99:
						return 4125;
				
					case 100:
						return 4133;
				
					case 101:
						return 4141;
				
					case 102:
						return 4149;
				
					case 103:
						return 4157;
				
					case 104:
						return 4165;
				
					case 105:
						return 4173;
				
					case 106:
						return 4181;
				
					case 107:
						return 4189;
				
					case 108:
						return 4197;
				
					case 109:
						return 4205;
				
					case 110:
						return 4213;
				
					case 111:
						return 4221;
				
					case 112:
						return 4229;
				
					case 113:
						return 4237;
				
					case 114:
						return 4245;
				
					case 115:
						return 4253;
				
					case 116:
						return 4261;
				
					case 117:
						return 4269;
				
					case 118:
						return 4277;
				
					case 119:
						return 4285;
				
					case 120:
						return 4293;
				
					case 121:
						return 4301;
				
					case 122:
						return 4309;
				
					case 123:
						return 4317;
				
					case 124:
						return 4325;
				
					case 125:
						return 4333;
				
					case 126:
						return 4341;
				
					case 127:
						return 4349;
				
					case 128:
						return 4357;
				
					case 129:
						return 4365;
				
					case 130:
						return 4373;
				
					case 131:
						return 4381;
				
					case 132:
						return 4389;
				
					case 133:
						return 4397;
				
					case 134:
						return 4405;
				
					case 135:
						return 4413;
				
					case 136:
						return 4421;
				
					case 137:
						return 4429;
				
					case 138:
						return 4437;
				
					case 139:
						return 4445;
				
					case 140:
						return 4453;
				
					case 141:
						return 4461;
				
					case 142:
						return 4469;
				
					case 143:
						return 4477;
				
					case 144:
						return 4485;
				
					case 145:
						return 4493;
				
					case 146:
						return 4501;
				
					case 147:
						return 4509;
				
					case 148:
						return 4517;
				
					case 149:
						return 4525;
				
					case 150:
						return 4533;
				
					case 151:
						return 4541;
				
					case 152:
						return 4549;
				
					case 153:
						return 4557;
				
					case 154:
						return 4565;
				
					case 155:
						return 4573;
				
					case 156:
						return 4581;
				
					case 157:
						return 4589;
				
					case 158:
						return 5482;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5931;
				
					case 160:
						return 5938;
				
					case 161:
						return 5945;
				
					case 162:
						return 5952;
				
					case 163:
						return 5959;
				
					case 164:
						return 5966;
				
					case 165:
						return 5973;
				
					case 166:
						return 5980;
				
					case 167:
						return 5987;
				
					case 168:
						return 5994;
				
					case 169:
						return 6001;
				
					case 170:
						return 6008;
				
					case 171:
						return 6015;
				
					case 172:
						return 6022;
				
					case 173:
						return 6029;
				
					case 174:
						return 6036;
				
					case 175:
						return 6043;
				
					case 176:
						return 6050;
				
					case 177:
						return 6057;
				
					case 178:
						return 6064;
				
					case 179:
						return 6071;
				
					case 180:
						return 6078;
				
					case 181:
						return 6085;
				
					case 182:
						return 6092;
				
					case 183:
						return 6099;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6176;
				
					case 185:
						return 6183;
				
					case 186:
						return 6190;
				
					case 187:
						return 6197;
				
					case 188:
						return 6204;
				
					case 189:
						return 6211;
				
					case 190:
						return 6218;
				
					case 191:
						return 6225;
				
					case 192:
						return 6232;
				
					case 193:
						return 6239;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6573;
				
					case 195:
						return 6580;
				
					case 196:
						return 6587;
				
					case 197:
						return 6594;
				
					case 198:
						return 6601;
				
					case 199:
						return 6608;
				
					case 200:
						return 6615;
				
					case 201:
						return 6622;
				
					case 202:
						return 6629;
				
					case 203:
						return 6636;
				
					case 204:
						return 6643;
				
					case 205:
						return 6650;
				
					case 206:
						return 6657;
				
					case 207:
						return 6664;
				
					case 208:
						return 6671;
				
					case 209:
						return 6678;
				
					case 210:
						return 6685;
				
					case 211:
						return 6692;
				
					case 212:
						return 6699;
				
					case 213:
						return 6706;
				
					case 214:
						return 6713;
				
					case 215:
						return 6720;
				
					case 216:
						return 6727;
				
					case 217:
						return 6734;
				
					case 218:
						return 6741;
				
					case 219:
						return 6748;
				
					case 220:
						return 6755;
				
					case 221:
						return 6762;
				
					case 222:
						return 6769;
				
					case 223:
						return 6776;
				
					case 224:
						return 6783;
				
					case 225:
						return 6790;
				
					case 226:
						return 6797;
				
					case 227:
						return 6804;
				
					case 228:
						return 6811;
				
					case 229:
						return 6818;
				
					case 230:
						return 6825;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7295;
				
					case 232:
						return 7302;
				
					case 233:
						return 7309;
				
					case 234:
						return 7316;
				
					case 235:
						return 7323;
				
					case 236:
						return 7330;
				
					case 237:
						return 7337;
				
					case 238:
						return 7344;
				
					case 239:
						return 7351;
				
					case 240:
						return 7358;
				
					case 241:
						return 7365;
				
					case 242:
						return 7372;
				
					case 243:
						return joaat("PRI2_HIJLF");
				
					case 244:
						return 7386;
				
					case 245:
						return 7393;
				
					case 246:
						return 7400;
				
					case 247:
						return 7407;
				
					case 248:
						return 7414;
				
					case 249:
						return 7421;
				
					case 250:
						return 7428;
				
					case 251:
						return 7435;
				
					case 252:
						return 7442;
				
					case 253:
						return 7449;
				
					case 254:
						return 7456;
				
					case 255:
						return 7463;
				
					case 256:
						return 7470;
				
					case 257:
						return 7477;
				
					case 258:
						return 7484;
				
					case 259:
						return 7491;
				
					case 260:
						return 7498;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8018;
				
					case 262:
						return 8025;
				
					case 263:
						return 8032;
				
					case 264:
						return 8039;
				
					case 265:
						return 8046;
				
					case 266:
						return 8053;
				
					case 267:
						return 8060;
				
					case 268:
						return 8067;
				
					case 269:
						return 8074;
				
					case 270:
						return 8081;
				
					case 271:
						return 8542;
				
					case 272:
						return 8549;
				
					case 273:
						return 8556;
				
					case 274:
						return 8563;
				
					case 275:
						return 8570;
				
					case 276:
						return 8577;
				
					case 277:
						return 8584;
				
					case 278:
						return 8591;
				
					case 279:
						return 8598;
				
					case 280:
						return 8605;
				
					case 281:
						return 8989;
				
					case 282:
						return 8996;
				
					case 283:
						return 9003;
				
					case 284:
						return 9010;
				
					case 285:
						return 9017;
				
					case 286:
						return 9024;
				
					case 287:
						return 9031;
				
					case 288:
						return 9038;
				
					case 289:
						return 9045;
				
					case 290:
						return 9052;
				
					case 291:
						return 9059;
				
					case 292:
						return 9065;
				
					case 293:
						return 9071;
				
					case 294:
						return 9077;
				
					case 295:
						return 9084;
				
					case 296:
						return 9091;
				
					case 297:
						return 9098;
				
					case 298:
						return 9105;
				
					case 299:
						return 9112;
				
					case 300:
						return 9119;
				
					case 301:
						return 9126;
				
					case 302:
						return 9133;
				
					case 303:
						return 9140;
				
					case 304:
						return 9147;
				
					case 305:
						return 9153;
				
					case 306:
						return 9159;
				
					case 307:
						return 9640;
				
					case 308:
						return 9647;
				
					case 309:
						return 9654;
				
					case 310:
						return 9661;
				
					case 311:
						return 9668;
				
					case 312:
						return 9675;
				
					case 313:
						return 9682;
				
					case 314:
						return 9689;
				
					case 315:
						return 9696;
				
					case 316:
						return 9703;
				
					case 317:
						return 9925;
				
					case 318:
						return 9932;
				
					case 319:
						return 9939;
				
					case 320:
						return 9946;
				
					case 321:
						return 9953;
				
					case 322:
						return 9960;
				
					case 323:
						return 9967;
				
					case 324:
						return 9974;
				
					case 325:
						return 9981;
				
					case 326:
						return 9988;
				
					case 327:
						return 9995;
				
					case 328:
						return 10002;
				
					case 329:
						return 10009;
				
					case 330:
						return 10016;
				
					case 331:
						return 10023;
				
					case 332:
						return 10030;
				
					case 333:
						return 10037;
				
					case 334:
						return 10044;
				
					case 335:
						return 10051;
				
					case 336:
						return 10058;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10451;
				
					case 338:
						return 10458;
				
					case 339:
						return 10465;
				
					case 340:
						return 10472;
				
					case 341:
						return 10479;
				
					case 342:
						return 10486;
				
					case 343:
						return 10493;
				
					case 344:
						return 10500;
				
					case 345:
						return 10507;
				
					case 346:
						return 10514;
				
					case 347:
						return 10521;
				
					case 348:
						return 10527;
				
					case 349:
						return 10533;
				
					case 350:
						return 10539;
				
					case 351:
						return 10546;
				
					case 352:
						return 10553;
				
					case 353:
						return 10560;
				
					case &func_1:
						return 10567;
				
					case 355:
						return 10574;
				
					case 356:
						return 10581;
				
					case 357:
						return 10588;
				
					case 358:
						return 10595;
				
					case 359:
						return 10602;
				
					case 360:
						return 10609;
				
					case 361:
						return 10615;
				
					case 362:
						return 10621;
				
					default:
						break;
				}
				break;
		
			case 5:
				switch (iParam1)
				{
					case 0:
						return 1634;
				
					case 1:
						return 1641;
				
					case 2:
						return 1648;
				
					case 3:
						return 1655;
				
					case 4:
						return 1662;
				
					case 5:
						return 1669;
				
					case 6:
						return 1676;
				
					case 7:
						return 1683;
				
					case 8:
						return 1690;
				
					case 9:
						return 1697;
				
					case 10:
						return 1704;
				
					case 11:
						return 1710;
				
					case 12:
						return 1716;
				
					case 13:
						return 1722;
				
					case 14:
						return 1801;
				
					case 15:
						return 1808;
				
					case 16:
						return 1815;
				
					case 17:
						return 1822;
				
					case 18:
						return 1829;
				
					case 19:
						return 1836;
				
					case 20:
						return 1843;
				
					case 21:
						return 1850;
				
					case 22:
						return 1857;
				
					case 23:
						return 1864;
				
					case 24:
						return 1870;
				
					case 25:
						return 1876;
				
					case 26:
						return 2171;
				
					case 27:
						return 2178;
				
					case 28:
						return 2185;
				
					case 29:
						return 2192;
				
					case 30:
						return 2199;
				
					case 31:
						return 2206;
				
					case 32:
						return 2213;
				
					case 33:
						return 2220;
				
					case 34:
						return 2227;
				
					case 35:
						return 2234;
				
					case 36:
						return 2241;
				
					case 37:
						return 2247;
				
					case 38:
						return 2253;
				
					case 39:
						return 2835;
				
					case 40:
						return 2842;
				
					case 41:
						return 2849;
				
					case 42:
						return 2856;
				
					case 43:
						return 2863;
				
					case 44:
						return 2870;
				
					case 45:
						return 2877;
				
					case 46:
						return 2884;
				
					case 47:
						return 2891;
				
					case 48:
						return 2898;
				
					case 49:
						return 2905;
				
					case 50:
						return 2911;
				
					case 51:
						return 2917;
				
					case 52:
						return 2959;
				
					case 53:
						return 2966;
				
					case 54:
						return 2973;
				
					case 55:
						return 2980;
				
					case 56:
						return 2987;
				
					case 57:
						return 2994;
				
					case 58:
						return 3001;
				
					case 59:
						return 3008;
				
					case 60:
						return 3015;
				
					case 61:
						return 3022;
				
					case 62:
						return 3029;
				
					case 63:
						return 3035;
				
					case 64:
						return 3041;
				
					case 65:
						return 3242;
				
					case 66:
						return 3250;
				
					case 67:
						return 3258;
				
					case 68:
						return 3266;
				
					case 69:
						return 3274;
				
					case 70:
						return 3282;
				
					case 71:
						return 3290;
				
					case 72:
						return 3298;
				
					case 73:
						return 3306;
				
					case 74:
						return 3314;
				
					case 75:
						return 3322;
				
					case 76:
						return 3330;
				
					case 77:
						return 3338;
				
					case 78:
						return 3346;
				
					case 79:
						return 3354;
				
					case 80:
						return 3362;
				
					case 81:
						return 3370;
				
					case 82:
						return 3378;
				
					case 83:
						return 3386;
				
					case 84:
						return 3394;
				
					case 85:
						return 3402;
				
					case 86:
						return 3409;
				
					case 87:
						return 3416;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4038;
				
					case 89:
						return 4046;
				
					case 90:
						return 4054;
				
					case 91:
						return 4062;
				
					case 92:
						return 4070;
				
					case 93:
						return 4078;
				
					case 94:
						return 4086;
				
					case 95:
						return 4094;
				
					case 96:
						return 4102;
				
					case 97:
						return 4110;
				
					case 98:
						return 4118;
				
					case 99:
						return 4126;
				
					case 100:
						return 4134;
				
					case 101:
						return 4142;
				
					case 102:
						return 4150;
				
					case 103:
						return 4158;
				
					case 104:
						return 4166;
				
					case 105:
						return 4174;
				
					case 106:
						return 4182;
				
					case 107:
						return 4190;
				
					case 108:
						return 4198;
				
					case 109:
						return 4206;
				
					case 110:
						return 4214;
				
					case 111:
						return 4222;
				
					case 112:
						return 4230;
				
					case 113:
						return 4238;
				
					case 114:
						return 4246;
				
					case 115:
						return 4254;
				
					case 116:
						return 4262;
				
					case 117:
						return 4270;
				
					case 118:
						return 4278;
				
					case 119:
						return 4286;
				
					case 120:
						return 4294;
				
					case 121:
						return 4302;
				
					case 122:
						return 4310;
				
					case 123:
						return 4318;
				
					case 124:
						return 4326;
				
					case 125:
						return 4334;
				
					case 126:
						return 4342;
				
					case 127:
						return 4350;
				
					case 128:
						return 4358;
				
					case 129:
						return 4366;
				
					case 130:
						return 4374;
				
					case 131:
						return 4382;
				
					case 132:
						return 4390;
				
					case 133:
						return 4398;
				
					case 134:
						return 4406;
				
					case 135:
						return 4414;
				
					case 136:
						return 4422;
				
					case 137:
						return 4430;
				
					case 138:
						return 4438;
				
					case 139:
						return 4446;
				
					case 140:
						return 4454;
				
					case 141:
						return 4462;
				
					case 142:
						return 4470;
				
					case 143:
						return 4478;
				
					case 144:
						return 4486;
				
					case 145:
						return 4494;
				
					case 146:
						return 4502;
				
					case 147:
						return 4510;
				
					case 148:
						return 4518;
				
					case 149:
						return 4526;
				
					case 150:
						return 4534;
				
					case 151:
						return 4542;
				
					case 152:
						return 4550;
				
					case 153:
						return 4558;
				
					case 154:
						return 4566;
				
					case 155:
						return 4574;
				
					case 156:
						return 4582;
				
					case 157:
						return 4590;
				
					case 158:
						return 5483;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5932;
				
					case 160:
						return 5939;
				
					case 161:
						return 5946;
				
					case 162:
						return 5953;
				
					case 163:
						return 5960;
				
					case 164:
						return 5967;
				
					case 165:
						return 5974;
				
					case 166:
						return 5981;
				
					case 167:
						return 5988;
				
					case 168:
						return 5995;
				
					case 169:
						return 6002;
				
					case 170:
						return 6009;
				
					case 171:
						return 6016;
				
					case 172:
						return 6023;
				
					case 173:
						return 6030;
				
					case 174:
						return 6037;
				
					case 175:
						return 6044;
				
					case 176:
						return 6051;
				
					case 177:
						return 6058;
				
					case 178:
						return 6065;
				
					case 179:
						return 6072;
				
					case 180:
						return 6079;
				
					case 181:
						return 6086;
				
					case 182:
						return 6093;
				
					case 183:
						return 6100;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6177;
				
					case 185:
						return 6184;
				
					case 186:
						return 6191;
				
					case 187:
						return 6198;
				
					case 188:
						return 6205;
				
					case 189:
						return 6212;
				
					case 190:
						return 6219;
				
					case 191:
						return 6226;
				
					case 192:
						return 6233;
				
					case 193:
						return 6240;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6574;
				
					case 195:
						return 6581;
				
					case 196:
						return 6588;
				
					case 197:
						return 6595;
				
					case 198:
						return 6602;
				
					case 199:
						return 6609;
				
					case 200:
						return 6616;
				
					case 201:
						return 6623;
				
					case 202:
						return 6630;
				
					case 203:
						return 6637;
				
					case 204:
						return 6644;
				
					case 205:
						return 6651;
				
					case 206:
						return 6658;
				
					case 207:
						return 6665;
				
					case 208:
						return 6672;
				
					case 209:
						return 6679;
				
					case 210:
						return 6686;
				
					case 211:
						return 6693;
				
					case 212:
						return 6700;
				
					case 213:
						return 6707;
				
					case 214:
						return 6714;
				
					case 215:
						return 6721;
				
					case 216:
						return 6728;
				
					case 217:
						return 6735;
				
					case 218:
						return 6742;
				
					case 219:
						return 6749;
				
					case 220:
						return 6756;
				
					case 221:
						return 6763;
				
					case 222:
						return 6770;
				
					case 223:
						return 6777;
				
					case 224:
						return 6784;
				
					case 225:
						return 6791;
				
					case 226:
						return 6798;
				
					case 227:
						return 6805;
				
					case 228:
						return 6812;
				
					case 229:
						return 6819;
				
					case 230:
						return 6826;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7296;
				
					case 232:
						return 7303;
				
					case 233:
						return 7310;
				
					case 234:
						return 7317;
				
					case 235:
						return 7324;
				
					case 236:
						return 7331;
				
					case 237:
						return 7338;
				
					case 238:
						return 7345;
				
					case 239:
						return 7352;
				
					case 240:
						return 7359;
				
					case 241:
						return 7366;
				
					case 242:
						return 7373;
				
					case 243:
						return 7380;
				
					case 244:
						return 7387;
				
					case 245:
						return 7394;
				
					case 246:
						return 7401;
				
					case 247:
						return 7408;
				
					case 248:
						return 7415;
				
					case 249:
						return 7422;
				
					case 250:
						return 7429;
				
					case 251:
						return 7436;
				
					case 252:
						return 7443;
				
					case 253:
						return 7450;
				
					case 254:
						return 7457;
				
					case 255:
						return 7464;
				
					case 256:
						return 7471;
				
					case 257:
						return 7478;
				
					case 258:
						return 7485;
				
					case 259:
						return 7492;
				
					case 260:
						return 7499;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8019;
				
					case 262:
						return 8026;
				
					case 263:
						return 8033;
				
					case 264:
						return 8040;
				
					case 265:
						return 8047;
				
					case 266:
						return 8054;
				
					case 267:
						return 8061;
				
					case 268:
						return 8068;
				
					case 269:
						return 8075;
				
					case 270:
						return 8082;
				
					case 271:
						return 8543;
				
					case 272:
						return 8550;
				
					case 273:
						return 8557;
				
					case 274:
						return 8564;
				
					case 275:
						return 8571;
				
					case 276:
						return 8578;
				
					case 277:
						return 8585;
				
					case 278:
						return 8592;
				
					case 279:
						return 8599;
				
					case 280:
						return 8606;
				
					case 281:
						return 8990;
				
					case 282:
						return 8997;
				
					case 283:
						return 9004;
				
					case 284:
						return 9011;
				
					case 285:
						return 9018;
				
					case 286:
						return 9025;
				
					case 287:
						return 9032;
				
					case 288:
						return 9039;
				
					case 289:
						return 9046;
				
					case 290:
						return 9053;
				
					case 291:
						return 9060;
				
					case 292:
						return 9066;
				
					case 293:
						return 9072;
				
					case 294:
						return 9078;
				
					case 295:
						return 9085;
				
					case 296:
						return 9092;
				
					case 297:
						return 9099;
				
					case 298:
						return 9106;
				
					case 299:
						return 9113;
				
					case 300:
						return 9120;
				
					case 301:
						return 9127;
				
					case 302:
						return 9134;
				
					case 303:
						return 9141;
				
					case 304:
						return 9148;
				
					case 305:
						return 9154;
				
					case 306:
						return 9160;
				
					case 307:
						return 9641;
				
					case 308:
						return 9648;
				
					case 309:
						return 9655;
				
					case 310:
						return 9662;
				
					case 311:
						return 9669;
				
					case 312:
						return 9676;
				
					case 313:
						return 9683;
				
					case 314:
						return 9690;
				
					case 315:
						return 9697;
				
					case 316:
						return 9704;
				
					case 317:
						return 9926;
				
					case 318:
						return 9933;
				
					case 319:
						return 9940;
				
					case 320:
						return 9947;
				
					case 321:
						return 9954;
				
					case 322:
						return 9961;
				
					case 323:
						return 9968;
				
					case 324:
						return 9975;
				
					case 325:
						return 9982;
				
					case 326:
						return 9989;
				
					case 327:
						return 9996;
				
					case 328:
						return 10003;
				
					case 329:
						return 10010;
				
					case 330:
						return 10017;
				
					case 331:
						return 10024;
				
					case 332:
						return 10031;
				
					case 333:
						return 10038;
				
					case 334:
						return 10045;
				
					case 335:
						return 10052;
				
					case 336:
						return 10059;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10452;
				
					case 338:
						return 10459;
				
					case 339:
						return 10466;
				
					case 340:
						return 10473;
				
					case 341:
						return 10480;
				
					case 342:
						return 10487;
				
					case 343:
						return 10494;
				
					case 344:
						return 10501;
				
					case 345:
						return 10508;
				
					case 346:
						return 10515;
				
					case 347:
						return 10522;
				
					case 348:
						return 10528;
				
					case 349:
						return 10534;
				
					case 350:
						return 10540;
				
					case 351:
						return 10547;
				
					case 352:
						return 10554;
				
					case 353:
						return 10561;
				
					case &func_1:
						return 10568;
				
					case 355:
						return 10575;
				
					case 356:
						return 10582;
				
					case 357:
						return 10589;
				
					case 358:
						return 10596;
				
					case 359:
						return 10603;
				
					case 360:
						return 10610;
				
					case 361:
						return 10616;
				
					case 362:
						return 10622;
				
					default:
						break;
				}
				break;
		
			case 6:
				switch (iParam1)
				{
					case 0:
						return 1636;
				
					case 1:
						return 1643;
				
					case 2:
						return 1650;
				
					case 3:
						return 1657;
				
					case 4:
						return 1664;
				
					case 5:
						return 1671;
				
					case 6:
						return 1678;
				
					case 7:
						return 1685;
				
					case 8:
						return 1692;
				
					case 9:
						return 1699;
				
					case 13:
						return 1724;
				
					case 14:
						return 1803;
				
					case 15:
						return 1810;
				
					case 16:
						return 1817;
				
					case 17:
						return 1824;
				
					case 18:
						return 1831;
				
					case 19:
						return 1838;
				
					case 20:
						return 1845;
				
					case 21:
						return 1852;
				
					case 22:
						return 1859;
				
					case 26:
						return 2173;
				
					case 27:
						return 2180;
				
					case 28:
						return 2187;
				
					case 29:
						return 2194;
				
					case 30:
						return 2201;
				
					case 31:
						return 2208;
				
					case 32:
						return 2215;
				
					case 33:
						return 2222;
				
					case 34:
						return 2229;
				
					case 35:
						return 2236;
				
					case 39:
						return 2837;
				
					case 40:
						return 2844;
				
					case 41:
						return 2851;
				
					case 42:
						return 2858;
				
					case 43:
						return 2865;
				
					case 44:
						return 2872;
				
					case 45:
						return 2879;
				
					case 46:
						return 2886;
				
					case 47:
						return 2893;
				
					case 48:
						return 2900;
				
					case 52:
						return 2961;
				
					case 53:
						return 2968;
				
					case 54:
						return 2975;
				
					case 55:
						return 2982;
				
					case 56:
						return 2989;
				
					case 57:
						return 2996;
				
					case 58:
						return 3003;
				
					case 59:
						return 3010;
				
					case 60:
						return 3017;
				
					case 61:
						return 3024;
				
					case 65:
						return 3245;
				
					case 66:
						return 3253;
				
					case 67:
						return 3261;
				
					case 68:
						return 3269;
				
					case 69:
						return 3277;
				
					case 70:
						return 3285;
				
					case 71:
						return 3293;
				
					case 72:
						return 3301;
				
					case 73:
						return 3309;
				
					case 74:
						return 3317;
				
					case 75:
						return 3325;
				
					case 76:
						return 3333;
				
					case 77:
						return 3341;
				
					case 78:
						return 3349;
				
					case 79:
						return 3357;
				
					case 80:
						return 3365;
				
					case 81:
						return 3373;
				
					case 82:
						return 3381;
				
					case 83:
						return 3389;
				
					case 84:
						return 3397;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4041;
				
					case 89:
						return 4049;
				
					case 90:
						return 4057;
				
					case 91:
						return 4065;
				
					case 92:
						return 4073;
				
					case 93:
						return 4081;
				
					case 94:
						return 4089;
				
					case 95:
						return 4097;
				
					case 96:
						return 4105;
				
					case 97:
						return 4113;
				
					case 98:
						return 4121;
				
					case 99:
						return 4129;
				
					case 100:
						return 4137;
				
					case 101:
						return 4145;
				
					case 102:
						return 4153;
				
					case 103:
						return 4161;
				
					case 104:
						return 4169;
				
					case 105:
						return 4177;
				
					case 106:
						return 4185;
				
					case 107:
						return 4193;
				
					case 108:
						return 4201;
				
					case 109:
						return 4209;
				
					case 110:
						return 4217;
				
					case 111:
						return 4225;
				
					case 112:
						return 4233;
				
					case 113:
						return 4241;
				
					case 114:
						return 4249;
				
					case 115:
						return 4257;
				
					case 116:
						return 4265;
				
					case 117:
						return 4273;
				
					case 118:
						return 4281;
				
					case 119:
						return 4289;
				
					case 120:
						return 4297;
				
					case 121:
						return 4305;
				
					case 122:
						return 4313;
				
					case 123:
						return 4321;
				
					case 124:
						return 4329;
				
					case 125:
						return 4337;
				
					case 126:
						return 4345;
				
					case 127:
						return 4353;
				
					case 128:
						return 4361;
				
					case 129:
						return 4369;
				
					case 130:
						return 4377;
				
					case 131:
						return 4385;
				
					case 132:
						return 4393;
				
					case 133:
						return 4401;
				
					case 134:
						return 4409;
				
					case 135:
						return 4417;
				
					case 136:
						return 4425;
				
					case 137:
						return 4433;
				
					case 138:
						return 4441;
				
					case 139:
						return 4449;
				
					case 140:
						return 4457;
				
					case 141:
						return 4465;
				
					case 142:
						return 4473;
				
					case 143:
						return 4481;
				
					case 144:
						return 4489;
				
					case 145:
						return 4497;
				
					case 146:
						return 4505;
				
					case 147:
						return 4513;
				
					case 148:
						return 4521;
				
					case 149:
						return 4529;
				
					case 150:
						return 4537;
				
					case 151:
						return 4545;
				
					case 152:
						return 4553;
				
					case 153:
						return 4561;
				
					case 154:
						return 4569;
				
					case 155:
						return 4577;
				
					case 156:
						return 4585;
				
					case 157:
						return 4593;
				
					case 158:
						return 5486;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5934;
				
					case 160:
						return 5941;
				
					case 161:
						return 5948;
				
					case 162:
						return 5955;
				
					case 163:
						return 5962;
				
					case 164:
						return 5969;
				
					case 165:
						return 5976;
				
					case 166:
						return 5983;
				
					case 167:
						return 5990;
				
					case 168:
						return 5997;
				
					case 169:
						return 6004;
				
					case 170:
						return 6011;
				
					case 171:
						return 6018;
				
					case 172:
						return 6025;
				
					case 173:
						return 6032;
				
					case 174:
						return 6039;
				
					case 175:
						return 6046;
				
					case 176:
						return 6053;
				
					case 177:
						return 6060;
				
					case 178:
						return 6067;
				
					case 179:
						return 6074;
				
					case 180:
						return 6081;
				
					case 181:
						return 6088;
				
					case 182:
						return 6095;
				
					case 183:
						return 6102;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6179;
				
					case 185:
						return 6186;
				
					case 186:
						return 6193;
				
					case 187:
						return 6200;
				
					case 188:
						return 6207;
				
					case 189:
						return 6214;
				
					case 190:
						return 6221;
				
					case 191:
						return 6228;
				
					case 192:
						return 6235;
				
					case 193:
						return 6242;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6576;
				
					case 195:
						return 6583;
				
					case 196:
						return 6590;
				
					case 197:
						return 6597;
				
					case 198:
						return 6604;
				
					case 199:
						return 6611;
				
					case 200:
						return 6618;
				
					case 201:
						return 6625;
				
					case 202:
						return 6632;
				
					case 203:
						return 6639;
				
					case 204:
						return 6646;
				
					case 205:
						return 6653;
				
					case 206:
						return 6660;
				
					case 207:
						return 6667;
				
					case 208:
						return 6674;
				
					case 209:
						return 6681;
				
					case 210:
						return 6688;
				
					case 211:
						return 6695;
				
					case 212:
						return 6702;
				
					case 213:
						return 6709;
				
					case 214:
						return 6716;
				
					case 215:
						return 6723;
				
					case 216:
						return 6730;
				
					case 217:
						return 6737;
				
					case 218:
						return 6744;
				
					case 219:
						return 6751;
				
					case 220:
						return 6758;
				
					case 221:
						return 6765;
				
					case 222:
						return 6772;
				
					case 223:
						return 6779;
				
					case 224:
						return 6786;
				
					case 225:
						return 6793;
				
					case 226:
						return 6800;
				
					case 227:
						return 6807;
				
					case 228:
						return 6814;
				
					case 229:
						return 6821;
				
					case 230:
						return 6828;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7298;
				
					case 232:
						return 7305;
				
					case 233:
						return 7312;
				
					case 234:
						return 7319;
				
					case 235:
						return 7326;
				
					case 236:
						return 7333;
				
					case 237:
						return 7340;
				
					case 238:
						return 7347;
				
					case 239:
						return 7354;
				
					case 240:
						return 7361;
				
					case 241:
						return 7368;
				
					case 242:
						return 7375;
				
					case 243:
						return 7382;
				
					case 244:
						return 7389;
				
					case 245:
						return 7396;
				
					case 246:
						return 7403;
				
					case 247:
						return 7410;
				
					case 248:
						return 7417;
				
					case 249:
						return 7424;
				
					case 250:
						return 7431;
				
					case 251:
						return 7438;
				
					case 252:
						return 7445;
				
					case 253:
						return 7452;
				
					case 254:
						return 7459;
				
					case 255:
						return 7466;
				
					case 256:
						return 7473;
				
					case 257:
						return 7480;
				
					case 258:
						return 7487;
				
					case 259:
						return 7494;
				
					case 260:
						return 7501;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8021;
				
					case 262:
						return 8028;
				
					case 263:
						return 8035;
				
					case 264:
						return 8042;
				
					case 265:
						return 8049;
				
					case 266:
						return 8056;
				
					case 267:
						return 8063;
				
					case 268:
						return 8070;
				
					case 269:
						return 8077;
				
					case 270:
						return 8084;
				
					case 271:
						return 8545;
				
					case 272:
						return 8552;
				
					case 273:
						return 8559;
				
					case 274:
						return 8566;
				
					case 275:
						return 8573;
				
					case 276:
						return 8580;
				
					case 277:
						return 8587;
				
					case 278:
						return 8594;
				
					case 279:
						return 8601;
				
					case 280:
						return 8608;
				
					case 281:
						return 8992;
				
					case 282:
						return 8999;
				
					case 283:
						return 9006;
				
					case 284:
						return 9013;
				
					case 285:
						return 9020;
				
					case 286:
						return 9027;
				
					case 287:
						return 9034;
				
					case 288:
						return 9041;
				
					case 289:
						return 9048;
				
					case 290:
						return 9055;
				
					case 294:
						return 9080;
				
					case 295:
						return 9087;
				
					case 296:
						return 9094;
				
					case 297:
						return 9101;
				
					case 298:
						return 9108;
				
					case 299:
						return 9115;
				
					case 300:
						return 9122;
				
					case 301:
						return 9129;
				
					case 302:
						return 9136;
				
					case 303:
						return 9143;
				
					case 307:
						return 9643;
				
					case 308:
						return 9650;
				
					case 309:
						return 9657;
				
					case 310:
						return 9664;
				
					case 311:
						return 9671;
				
					case 312:
						return 9678;
				
					case 313:
						return 9685;
				
					case 314:
						return 9692;
				
					case 315:
						return 9699;
				
					case 316:
						return 9706;
				
					case 317:
						return 9928;
				
					case 318:
						return 9935;
				
					case 319:
						return 9942;
				
					case 320:
						return 9949;
				
					case 321:
						return 9956;
				
					case 322:
						return 9963;
				
					case 323:
						return 9970;
				
					case 324:
						return 9977;
				
					case 325:
						return 9984;
				
					case 326:
						return 9991;
				
					case 327:
						return 9998;
				
					case 328:
						return 10005;
				
					case 329:
						return 10012;
				
					case 330:
						return 10019;
				
					case 331:
						return 10026;
				
					case 332:
						return 10033;
				
					case 333:
						return 10040;
				
					case 334:
						return 10047;
				
					case 335:
						return 10054;
				
					case 336:
						return 10061;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10454;
				
					case 338:
						return 10461;
				
					case 339:
						return 10468;
				
					case 340:
						return 10475;
				
					case 341:
						return 10482;
				
					case 342:
						return 10489;
				
					case 343:
						return 10496;
				
					case 344:
						return 10503;
				
					case 345:
						return 10510;
				
					case 346:
						return 10517;
				
					case 350:
						return 10542;
				
					case 351:
						return 10549;
				
					case 352:
						return 10556;
				
					case 353:
						return 10563;
				
					case &func_1:
						return 10570;
				
					case 355:
						return 10577;
				
					case 356:
						return 10584;
				
					case 357:
						return 10591;
				
					case 358:
						return 10598;
				
					case 359:
						return 10605;
				
					default:
						break;
				}
				break;
		
			case 7:
				switch (iParam1)
				{
					case 0:
						return 1635;
				
					case 1:
						return 1642;
				
					case 2:
						return 1649;
				
					case 3:
						return 1656;
				
					case 4:
						return 1663;
				
					case 5:
						return 1670;
				
					case 6:
						return 1677;
				
					case 7:
						return 1684;
				
					case 8:
						return 1691;
				
					case 9:
						return 1698;
				
					case 10:
						return 1705;
				
					case 11:
						return 1711;
				
					case 12:
						return 1717;
				
					case 13:
						return 1723;
				
					case 14:
						return 1802;
				
					case 15:
						return 1809;
				
					case 16:
						return 1816;
				
					case 17:
						return 1823;
				
					case 18:
						return 1830;
				
					case 19:
						return 1837;
				
					case 20:
						return 1844;
				
					case 21:
						return 1851;
				
					case 22:
						return 1858;
				
					case 23:
						return 1865;
				
					case 24:
						return 1871;
				
					case 25:
						return 1877;
				
					case 26:
						return 2172;
				
					case 27:
						return 2179;
				
					case 28:
						return 2186;
				
					case 29:
						return 2193;
				
					case 30:
						return 2200;
				
					case 31:
						return 2207;
				
					case 32:
						return 2214;
				
					case 33:
						return 2221;
				
					case 34:
						return 2228;
				
					case 35:
						return 2235;
				
					case 36:
						return 2242;
				
					case 37:
						return 2248;
				
					case 38:
						return 2254;
				
					case 39:
						return 2836;
				
					case 40:
						return 2843;
				
					case 41:
						return 2850;
				
					case 42:
						return 2857;
				
					case 43:
						return 2864;
				
					case 44:
						return 2871;
				
					case 45:
						return 2878;
				
					case 46:
						return 2885;
				
					case 47:
						return 2892;
				
					case 48:
						return 2899;
				
					case 49:
						return 2906;
				
					case 50:
						return 2912;
				
					case 51:
						return 2918;
				
					case 52:
						return 2960;
				
					case 53:
						return 2967;
				
					case 54:
						return 2974;
				
					case 55:
						return 2981;
				
					case 56:
						return 2988;
				
					case 57:
						return 2995;
				
					case 58:
						return 3002;
				
					case 59:
						return 3009;
				
					case 60:
						return 3016;
				
					case 61:
						return 3023;
				
					case 62:
						return 3030;
				
					case 63:
						return 3036;
				
					case 64:
						return 3042;
				
					case 65:
						return 3243;
				
					case 66:
						return 3251;
				
					case 67:
						return 3259;
				
					case 68:
						return 3267;
				
					case 69:
						return 3275;
				
					case 70:
						return 3283;
				
					case 71:
						return 3291;
				
					case 72:
						return 3299;
				
					case 73:
						return 3307;
				
					case 74:
						return 3315;
				
					case 75:
						return 3323;
				
					case 76:
						return 3331;
				
					case 77:
						return 3340;
				
					case 78:
						return 3348;
				
					case 79:
						return 3355;
				
					case 80:
						return 3363;
				
					case 81:
						return 3371;
				
					case 82:
						return 3379;
				
					case 83:
						return 3387;
				
					case 84:
						return 3395;
				
					case 85:
						return 3403;
				
					case 86:
						return joaat("TNFUD_GO2_2A");
				
					case 87:
						return 3417;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 88:
						return 4039;
				
					case 89:
						return 4047;
				
					case 90:
						return 4055;
				
					case 91:
						return 4063;
				
					case 92:
						return 4071;
				
					case 93:
						return 4079;
				
					case 94:
						return 4087;
				
					case 95:
						return 4095;
				
					case 96:
						return 4103;
				
					case 97:
						return 4111;
				
					case 98:
						return 4119;
				
					case 99:
						return 4127;
				
					case 100:
						return 4136;
				
					case 101:
						return 4144;
				
					case 102:
						return 4151;
				
					case 103:
						return 4159;
				
					case 104:
						return 4167;
				
					case 105:
						return 4175;
				
					case 106:
						return 4183;
				
					case 107:
						return 4191;
				
					case 108:
						return 4199;
				
					case 109:
						return 4207;
				
					case 110:
						return 4215;
				
					case 111:
						return 4223;
				
					case 112:
						return 4231;
				
					case 113:
						return 4239;
				
					case 114:
						return 4247;
				
					case 115:
						return 4255;
				
					case 116:
						return 4263;
				
					case 117:
						return 4271;
				
					case 118:
						return 4279;
				
					case 119:
						return 4287;
				
					case 120:
						return 4296;
				
					case 121:
						return 4304;
				
					case 122:
						return 4311;
				
					case 123:
						return 4319;
				
					case 124:
						return 4327;
				
					case 125:
						return 4335;
				
					case 126:
						return 4343;
				
					case 127:
						return 4351;
				
					case 128:
						return 4359;
				
					case 129:
						return 4367;
				
					case 130:
						return 4375;
				
					case 131:
						return 4383;
				
					case 132:
						return 4391;
				
					case 133:
						return 4399;
				
					case 134:
						return 4407;
				
					case 135:
						return 4415;
				
					case 136:
						return 4423;
				
					case 137:
						return 4431;
				
					case 138:
						return 4439;
				
					case 139:
						return 4447;
				
					case 140:
						return 4456;
				
					case 141:
						return 4464;
				
					case 142:
						return 4471;
				
					case 143:
						return 4479;
				
					case 144:
						return 4487;
				
					case 145:
						return 4495;
				
					case 146:
						return 4503;
				
					case 147:
						return 4511;
				
					case 148:
						return 4519;
				
					case 149:
						return 4527;
				
					case 150:
						return 4535;
				
					case 151:
						return 4543;
				
					case 152:
						return 4551;
				
					case 153:
						return 4559;
				
					case 154:
						return 4567;
				
					case 155:
						return 4575;
				
					case 156:
						return 4583;
				
					case 157:
						return 4591;
				
					case 158:
						return 5484;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 159:
						return 5933;
				
					case 160:
						return 5940;
				
					case 161:
						return 5947;
				
					case 162:
						return 5954;
				
					case 163:
						return 5961;
				
					case 164:
						return 5968;
				
					case 165:
						return 5975;
				
					case 166:
						return 5982;
				
					case 167:
						return 5989;
				
					case 168:
						return 5996;
				
					case 169:
						return 6003;
				
					case 170:
						return 6010;
				
					case 171:
						return 6017;
				
					case 172:
						return 6024;
				
					case 173:
						return 6031;
				
					case 174:
						return 6038;
				
					case 175:
						return 6045;
				
					case 176:
						return 6052;
				
					case 177:
						return 6059;
				
					case 178:
						return 6066;
				
					case 179:
						return 6073;
				
					case 180:
						return 6080;
				
					case 181:
						return 6087;
				
					case 182:
						return 6094;
				
					case 183:
						return 6101;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 184:
						return 6178;
				
					case 185:
						return 6185;
				
					case 186:
						return 6192;
				
					case 187:
						return 6199;
				
					case 188:
						return 6206;
				
					case 189:
						return 6213;
				
					case 190:
						return 6220;
				
					case 191:
						return 6227;
				
					case 192:
						return 6234;
				
					case 193:
						return 6241;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 194:
						return 6575;
				
					case 195:
						return 6582;
				
					case 196:
						return 6589;
				
					case 197:
						return 6596;
				
					case 198:
						return 6603;
				
					case 199:
						return 6610;
				
					case 200:
						return 6617;
				
					case 201:
						return 6624;
				
					case 202:
						return 6631;
				
					case 203:
						return 6638;
				
					case 204:
						return 6645;
				
					case 205:
						return 6652;
				
					case 206:
						return 6659;
				
					case 207:
						return 6666;
				
					case 208:
						return 6673;
				
					case 209:
						return 6680;
				
					case 210:
						return 6687;
				
					case 211:
						return 6694;
				
					case 212:
						return 6701;
				
					case 213:
						return 6708;
				
					case 214:
						return 6715;
				
					case 215:
						return 6722;
				
					case 216:
						return 6729;
				
					case 217:
						return 6736;
				
					case 218:
						return 6743;
				
					case 219:
						return 6750;
				
					case 220:
						return 6757;
				
					case 221:
						return 6764;
				
					case 222:
						return 6771;
				
					case 223:
						return 6778;
				
					case 224:
						return 6785;
				
					case 225:
						return 6792;
				
					case 226:
						return 6799;
				
					case 227:
						return 6806;
				
					case 228:
						return 6813;
				
					case 229:
						return 6820;
				
					case 230:
						return 6827;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 231:
						return 7297;
				
					case 232:
						return 7304;
				
					case 233:
						return 7311;
				
					case 234:
						return 7318;
				
					case 235:
						return 7325;
				
					case 236:
						return 7332;
				
					case 237:
						return 7339;
				
					case 238:
						return 7346;
				
					case 239:
						return 7353;
				
					case 240:
						return 7360;
				
					case 241:
						return 7367;
				
					case 242:
						return 7374;
				
					case 243:
						return 7381;
				
					case 244:
						return 7388;
				
					case 245:
						return 7395;
				
					case 246:
						return 7402;
				
					case 247:
						return 7409;
				
					case 248:
						return 7416;
				
					case 249:
						return 7423;
				
					case 250:
						return 7430;
				
					case 251:
						return 7437;
				
					case 252:
						return 7444;
				
					case 253:
						return 7451;
				
					case 254:
						return 7458;
				
					case 255:
						return 7465;
				
					case 256:
						return 7472;
				
					case 257:
						return 7479;
				
					case 258:
						return 7486;
				
					case 259:
						return 7493;
				
					case 260:
						return 7500;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 261:
						return 8020;
				
					case 262:
						return 8027;
				
					case 263:
						return 8034;
				
					case 264:
						return 8041;
				
					case 265:
						return 8048;
				
					case 266:
						return 8055;
				
					case 267:
						return 8062;
				
					case 268:
						return 8069;
				
					case 269:
						return 8076;
				
					case 270:
						return 8083;
				
					case 271:
						return 8544;
				
					case 272:
						return 8551;
				
					case 273:
						return 8558;
				
					case 274:
						return 8565;
				
					case 275:
						return 8572;
				
					case 276:
						return 8579;
				
					case 277:
						return 8586;
				
					case 278:
						return 8593;
				
					case 279:
						return 8600;
				
					case 280:
						return 8607;
				
					case 281:
						return 8991;
				
					case 282:
						return 8998;
				
					case 283:
						return 9005;
				
					case 284:
						return 9012;
				
					case 285:
						return 9019;
				
					case 286:
						return 9026;
				
					case 287:
						return 9033;
				
					case 288:
						return 9040;
				
					case 289:
						return 9047;
				
					case 290:
						return 9054;
				
					case 291:
						return 9061;
				
					case 292:
						return 9067;
				
					case 293:
						return 9073;
				
					case 294:
						return 9079;
				
					case 295:
						return 9086;
				
					case 296:
						return 9093;
				
					case 297:
						return 9100;
				
					case 298:
						return 9107;
				
					case 299:
						return 9114;
				
					case 300:
						return 9121;
				
					case 301:
						return 9128;
				
					case 302:
						return 9135;
				
					case 303:
						return 9142;
				
					case 304:
						return 9149;
				
					case 305:
						return 9155;
				
					case 306:
						return 9161;
				
					case 307:
						return 9642;
				
					case 308:
						return 9649;
				
					case 309:
						return 9656;
				
					case 310:
						return 9663;
				
					case 311:
						return 9670;
				
					case 312:
						return 9677;
				
					case 313:
						return 9684;
				
					case 314:
						return 9691;
				
					case 315:
						return 9698;
				
					case 316:
						return 9705;
				
					case 317:
						return 9927;
				
					case 318:
						return 9934;
				
					case 319:
						return 9941;
				
					case 320:
						return 9948;
				
					case 321:
						return 9955;
				
					case 322:
						return 9962;
				
					case 323:
						return 9969;
				
					case 324:
						return 9976;
				
					case 325:
						return 9983;
				
					case 326:
						return 9990;
				
					case 327:
						return 9997;
				
					case 328:
						return 10004;
				
					case 329:
						return 10011;
				
					case 330:
						return 10018;
				
					case 331:
						return 10025;
				
					case 332:
						return 10032;
				
					case 333:
						return 10039;
				
					case 334:
						return 10046;
				
					case 335:
						return 10053;
				
					case 336:
						return 10060;
				
					default:
					
				}
			
				switch (iParam1)
				{
					case 337:
						return 10453;
				
					case 338:
						return 10460;
				
					case 339:
						return 10467;
				
					case 340:
						return 10474;
				
					case 341:
						return 10481;
				
					case 342:
						return 10488;
				
					case 343:
						return 10495;
				
					case 344:
						return 10502;
				
					case 345:
						return 10509;
				
					case 346:
						return 10516;
				
					case 347:
						return 10523;
				
					case 348:
						return 10529;
				
					case 349:
						return 10535;
				
					case 350:
						return 10541;
				
					case 351:
						return 10548;
				
					case 352:
						return 10555;
				
					case 353:
						return 10562;
				
					case &func_1:
						return 10569;
				
					case 355:
						return 10576;
				
					case 356:
						return 10583;
				
					case 357:
						return 10590;
				
					case 358:
						return 10597;
				
					case 359:
						return 10604;
				
					case 360:
						return 10611;
				
					case 361:
						return 10617;
				
					case 362:
						return 10623;
				
					default:
						break;
				}
				break;
		}
	}

	return 1630;
}

int func_75(int iParam0, int iParam1) // Position - 0xDDCB Hash - 0x5E3D5C7B ^0x3A2969A2
{
	if (func_100(iParam1))
		return 15468;

	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return 11436;
			
				case 364:
					return 11443;
			
				case 365:
					return 11450;
			
				case 366:
					return 11457;
			
				case 367:
					return 11464;
			
				case 368:
					return 11471;
			
				case 369:
					return 11478;
			
				case 370:
					return 11485;
			
				case 371:
					return 11492;
			
				case 372:
					return 11499;
			
				case 373:
					return 11506;
			
				case 374:
					return 11513;
			
				case 375:
					return 11520;
			
				case 376:
					return 11527;
			
				case 377:
					return 11534;
			
				case 378:
					return 11541;
			
				case 379:
					return 11548;
			
				case 380:
					return 11555;
			
				case 381:
					return 11562;
			
				case 382:
					return 11569;
			
				case 383:
					return 11576;
			
				case 384:
					return 11583;
			
				case 385:
					return 11590;
			
				case 386:
					return 11597;
			
				case 387:
					return 11604;
			
				case 388:
					return 11611;
			
				case 389:
					return 11618;
			
				case 390:
					return 11625;
			
				case 391:
					return 11632;
			
				case 392:
					return 11639;
			
				case 393:
					return 11646;
			
				case 394:
					return 11653;
			
				case 395:
					return 11660;
			
				case 396:
					return 11667;
			
				case 397:
					return 11674;
			
				case 398:
					return 11681;
			
				case 399:
					return 11688;
			
				case 400:
					return 11695;
			
				case 401:
					return 11702;
			
				case 402:
					return 11709;
			
				case 403:
					return 11716;
			
				case 404:
					return 11723;
			
				case &func_2:
					return 11730;
			
				case 406:
					return 11737;
			
				case 407:
					return 11744;
			
				case 408:
					return 11751;
			
				case 409:
					return 11758;
			
				case 410:
					return 11765;
			
				case 411:
					return 11772;
			
				case 412:
					return 11779;
			
				case 413:
					return 11786;
			
				case 414:
					return 11793;
			
				case 515:
					return 12261;
			
				case 516:
					return 12268;
			
				case 517:
					return 12463;
			
				case 518:
					return 12470;
			
				case 519:
					return 12477;
			
				case 520:
					return 12484;
			
				case 521:
					return 12491;
			
				case 522:
					return 12498;
			
				case 523:
					return 12505;
			
				case 524:
					return 12512;
			
				case 525:
					return 12519;
			
				case 526:
					return 12526;
			
				case 527:
					return 12533;
			
				case 528:
					return joaat("AR_EXECUTION_BACK_LEFT_ANIMAL_ENTER");
			
				case 529:
					return 12547;
			
				case 530:
					return 12554;
			
				case 531:
					return 12561;
			
				case 537:
					return 12603;
			
				case 538:
					return 12610;
			
				case 539:
					return 12617;
			
				case 540:
					return 12624;
			
				case 541:
					return 12631;
			
				case 542:
					return 12638;
			
				case &func_3:
					return 12645;
			
				case 544:
					return 12652;
			
				case 545:
					return 12659;
			
				case 546:
					return 12666;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 363:
					return 11437;
			
				case 364:
					return 11444;
			
				case 365:
					return 11451;
			
				case 366:
					return 11458;
			
				case 367:
					return 11465;
			
				case 368:
					return 11472;
			
				case 369:
					return 11479;
			
				case 370:
					return 11486;
			
				case 371:
					return 11493;
			
				case 372:
					return 11500;
			
				case 373:
					return 11507;
			
				case 374:
					return 11514;
			
				case 375:
					return 11521;
			
				case 376:
					return 11528;
			
				case 377:
					return 11535;
			
				case 378:
					return 11542;
			
				case 379:
					return 11549;
			
				case 380:
					return 11556;
			
				case 381:
					return 11563;
			
				case 382:
					return 11570;
			
				case 383:
					return 11577;
			
				case 384:
					return 11584;
			
				case 385:
					return 11591;
			
				case 386:
					return 11598;
			
				case 387:
					return 11605;
			
				case 388:
					return 11612;
			
				case 389:
					return 11619;
			
				case 390:
					return 11626;
			
				case 391:
					return 11633;
			
				case 392:
					return 11640;
			
				case 393:
					return 11647;
			
				case 394:
					return 11654;
			
				case 395:
					return 11661;
			
				case 396:
					return 11668;
			
				case 397:
					return 11675;
			
				case 398:
					return 11682;
			
				case 399:
					return 11689;
			
				case 400:
					return 11696;
			
				case 401:
					return 11703;
			
				case 402:
					return 11710;
			
				case 403:
					return 11717;
			
				case 404:
					return 11724;
			
				case &func_2:
					return 11731;
			
				case 406:
					return 11738;
			
				case 407:
					return 11745;
			
				case 408:
					return 11752;
			
				case 409:
					return 11759;
			
				case 410:
					return 11766;
			
				case 411:
					return 11773;
			
				case 412:
					return 11780;
			
				case 413:
					return 11787;
			
				case 414:
					return 11794;
			
				case 515:
					return 12262;
			
				case 516:
					return 12269;
			
				case 517:
					return 12464;
			
				case 518:
					return 12471;
			
				case 519:
					return 12478;
			
				case 520:
					return 12485;
			
				case 521:
					return 12492;
			
				case 522:
					return 12499;
			
				case 523:
					return 12506;
			
				case 524:
					return 12513;
			
				case 525:
					return 12520;
			
				case 526:
					return 12527;
			
				case 527:
					return 12534;
			
				case 528:
					return 12541;
			
				case 529:
					return 12548;
			
				case 530:
					return 12555;
			
				case 531:
					return 12562;
			
				case 537:
					return 12604;
			
				case 538:
					return 12611;
			
				case 539:
					return 12618;
			
				case 540:
					return 12625;
			
				case 541:
					return 12632;
			
				case 542:
					return 12639;
			
				case &func_3:
					return 12646;
			
				case 544:
					return 12653;
			
				case 545:
					return 12660;
			
				case 546:
					return 12667;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 363:
					return 11438;
			
				case 364:
					return 11445;
			
				case 365:
					return 11452;
			
				case 366:
					return 11459;
			
				case 367:
					return 11466;
			
				case 368:
					return 11473;
			
				case 369:
					return 11480;
			
				case 370:
					return 11487;
			
				case 371:
					return 11494;
			
				case 372:
					return 11501;
			
				case 373:
					return 11508;
			
				case 374:
					return 11515;
			
				case 375:
					return 11522;
			
				case 376:
					return 11529;
			
				case 377:
					return 11536;
			
				case 378:
					return 11543;
			
				case 379:
					return 11550;
			
				case 380:
					return 11557;
			
				case 381:
					return 11564;
			
				case 382:
					return 11571;
			
				case 383:
					return 11578;
			
				case 384:
					return 11585;
			
				case 385:
					return 11592;
			
				case 386:
					return 11599;
			
				case 387:
					return 11606;
			
				case 388:
					return 11613;
			
				case 389:
					return 11620;
			
				case 390:
					return 11627;
			
				case 391:
					return 11634;
			
				case 392:
					return 11641;
			
				case 393:
					return 11648;
			
				case 394:
					return 11655;
			
				case 395:
					return 11662;
			
				case 396:
					return 11669;
			
				case 397:
					return 11676;
			
				case 398:
					return 11683;
			
				case 399:
					return 11690;
			
				case 400:
					return 11697;
			
				case 401:
					return 11704;
			
				case 402:
					return 11711;
			
				case 403:
					return 11718;
			
				case 404:
					return 11725;
			
				case &func_2:
					return 11732;
			
				case 406:
					return 11739;
			
				case 407:
					return 11746;
			
				case 408:
					return 11753;
			
				case 409:
					return 11760;
			
				case 410:
					return 11767;
			
				case 411:
					return 11774;
			
				case 412:
					return 11781;
			
				case 413:
					return 11788;
			
				case 414:
					return 11795;
			
				case 515:
					return 12263;
			
				case 516:
					return 12270;
			
				case 517:
					return 12465;
			
				case 518:
					return 12472;
			
				case 519:
					return 12479;
			
				case 520:
					return 12486;
			
				case 521:
					return 12493;
			
				case 522:
					return 12500;
			
				case 523:
					return 12507;
			
				case 524:
					return 12514;
			
				case 525:
					return 12521;
			
				case 526:
					return 12528;
			
				case 527:
					return 12535;
			
				case 528:
					return 12542;
			
				case 529:
					return 12549;
			
				case 530:
					return 12556;
			
				case 531:
					return 12563;
			
				case 537:
					return 12605;
			
				case 538:
					return 12612;
			
				case 539:
					return 12619;
			
				case 540:
					return 12626;
			
				case 541:
					return 12633;
			
				case 542:
					return 12640;
			
				case &func_3:
					return 12647;
			
				case 544:
					return 12654;
			
				case 545:
					return 12661;
			
				case 546:
					return 12668;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 363:
					return 11439;
			
				case 364:
					return 11446;
			
				case 365:
					return 11453;
			
				case 366:
					return 11460;
			
				case 367:
					return 11467;
			
				case 368:
					return 11474;
			
				case 369:
					return 11481;
			
				case 370:
					return 11488;
			
				case 371:
					return 11495;
			
				case 372:
					return 11502;
			
				case 373:
					return 11509;
			
				case 374:
					return 11516;
			
				case 375:
					return 11523;
			
				case 376:
					return 11530;
			
				case 377:
					return 11537;
			
				case 378:
					return 11544;
			
				case 379:
					return 11551;
			
				case 380:
					return 11558;
			
				case 381:
					return 11565;
			
				case 382:
					return 11572;
			
				case 383:
					return 11579;
			
				case 384:
					return 11586;
			
				case 385:
					return 11593;
			
				case 386:
					return 11600;
			
				case 387:
					return 11607;
			
				case 388:
					return 11614;
			
				case 389:
					return 11621;
			
				case 390:
					return 11628;
			
				case 391:
					return 11635;
			
				case 392:
					return 11642;
			
				case 393:
					return 11649;
			
				case 394:
					return 11656;
			
				case 395:
					return 11663;
			
				case 396:
					return 11670;
			
				case 397:
					return 11677;
			
				case 398:
					return 11684;
			
				case 399:
					return 11691;
			
				case 400:
					return 11698;
			
				case 401:
					return 11705;
			
				case 402:
					return 11712;
			
				case 403:
					return 11719;
			
				case 404:
					return 11726;
			
				case &func_2:
					return 11733;
			
				case 406:
					return 11740;
			
				case 407:
					return 11747;
			
				case 408:
					return 11754;
			
				case 409:
					return 11761;
			
				case 410:
					return 11768;
			
				case 411:
					return 11775;
			
				case 412:
					return 11782;
			
				case 413:
					return 11789;
			
				case 414:
					return 11796;
			
				case 515:
					return 12264;
			
				case 516:
					return 12271;
			
				case 517:
					return 12466;
			
				case 518:
					return 12473;
			
				case 519:
					return 12480;
			
				case 520:
					return 12487;
			
				case 521:
					return 12494;
			
				case 522:
					return 12501;
			
				case 523:
					return 12508;
			
				case 524:
					return 12515;
			
				case 525:
					return 12522;
			
				case 526:
					return 12529;
			
				case 527:
					return 12536;
			
				case 528:
					return 12543;
			
				case 529:
					return 12550;
			
				case 530:
					return 12557;
			
				case 531:
					return 12564;
			
				case 537:
					return 12606;
			
				case 538:
					return 12613;
			
				case 539:
					return 12620;
			
				case 540:
					return 12627;
			
				case 541:
					return 12634;
			
				case 542:
					return 12641;
			
				case &func_3:
					return 12648;
			
				case 544:
					return 12655;
			
				case 545:
					return 12662;
			
				case 546:
					return 12669;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 363:
					return 11440;
			
				case 364:
					return 11447;
			
				case 365:
					return 11454;
			
				case 366:
					return 11461;
			
				case 367:
					return 11468;
			
				case 368:
					return 11475;
			
				case 369:
					return 11482;
			
				case 370:
					return 11489;
			
				case 371:
					return 11496;
			
				case 372:
					return 11503;
			
				case 373:
					return 11510;
			
				case 374:
					return 11517;
			
				case 375:
					return 11524;
			
				case 376:
					return 11531;
			
				case 377:
					return 11538;
			
				case 378:
					return 11545;
			
				case 379:
					return 11552;
			
				case 380:
					return 11559;
			
				case 381:
					return 11566;
			
				case 382:
					return 11573;
			
				case 383:
					return 11580;
			
				case 384:
					return 11587;
			
				case 385:
					return 11594;
			
				case 386:
					return 11601;
			
				case 387:
					return 11608;
			
				case 388:
					return 11615;
			
				case 389:
					return 11622;
			
				case 390:
					return 11629;
			
				case 391:
					return 11636;
			
				case 392:
					return 11643;
			
				case 393:
					return 11650;
			
				case 394:
					return 11657;
			
				case 395:
					return 11664;
			
				case 396:
					return 11671;
			
				case 397:
					return 11678;
			
				case 398:
					return 11685;
			
				case 399:
					return 11692;
			
				case 400:
					return 11699;
			
				case 401:
					return 11706;
			
				case 402:
					return 11713;
			
				case 403:
					return 11720;
			
				case 404:
					return 11727;
			
				case &func_2:
					return 11734;
			
				case 406:
					return 11741;
			
				case 407:
					return 11748;
			
				case 408:
					return 11755;
			
				case 409:
					return 11762;
			
				case 410:
					return 11769;
			
				case 411:
					return 11776;
			
				case 412:
					return 11783;
			
				case 413:
					return 11790;
			
				case 414:
					return 11797;
			
				case 515:
					return 12265;
			
				case 516:
					return 12272;
			
				case 517:
					return 12467;
			
				case 518:
					return 12474;
			
				case 519:
					return 12481;
			
				case 520:
					return 12488;
			
				case 521:
					return 12495;
			
				case 522:
					return 12502;
			
				case 523:
					return 12509;
			
				case 524:
					return 12516;
			
				case 525:
					return 12523;
			
				case 526:
					return 12530;
			
				case 527:
					return 12537;
			
				case 528:
					return 12544;
			
				case 529:
					return 12551;
			
				case 530:
					return 12558;
			
				case 531:
					return 12565;
			
				case 537:
					return 12607;
			
				case 538:
					return 12614;
			
				case 539:
					return 12621;
			
				case 540:
					return 12628;
			
				case 541:
					return 12635;
			
				case 542:
					return 12642;
			
				case &func_3:
					return 12649;
			
				case 544:
					return 12656;
			
				case 545:
					return 12663;
			
				case 546:
					return 12670;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 363:
					return 11442;
			
				case 364:
					return 11449;
			
				case 365:
					return 11456;
			
				case 366:
					return 11463;
			
				case 367:
					return 11470;
			
				case 368:
					return 11477;
			
				case 369:
					return 11484;
			
				case 370:
					return 11491;
			
				case 371:
					return 11498;
			
				case 372:
					return 11505;
			
				case 373:
					return 11512;
			
				case 374:
					return 11519;
			
				case 375:
					return 11526;
			
				case 376:
					return 11533;
			
				case 377:
					return 11540;
			
				case 378:
					return 11547;
			
				case 379:
					return 11554;
			
				case 380:
					return 11561;
			
				case 381:
					return 11568;
			
				case 382:
					return 11575;
			
				case 383:
					return 11582;
			
				case 384:
					return 11589;
			
				case 385:
					return 11596;
			
				case 386:
					return 11603;
			
				case 387:
					return 11610;
			
				case 388:
					return 11617;
			
				case 389:
					return 11624;
			
				case 390:
					return 11631;
			
				case 391:
					return 11638;
			
				case 392:
					return 11645;
			
				case 393:
					return 11652;
			
				case 394:
					return 11659;
			
				case 395:
					return 11666;
			
				case 396:
					return 11673;
			
				case 397:
					return 11680;
			
				case 398:
					return 11687;
			
				case 399:
					return 11694;
			
				case 400:
					return 11701;
			
				case 401:
					return 11708;
			
				case 402:
					return 11715;
			
				case 403:
					return 11722;
			
				case 404:
					return 11729;
			
				case &func_2:
					return 11736;
			
				case 406:
					return 11743;
			
				case 407:
					return 11750;
			
				case 408:
					return 11757;
			
				case 409:
					return 11764;
			
				case 410:
					return 11771;
			
				case 411:
					return 11778;
			
				case 412:
					return 11785;
			
				case 413:
					return 11792;
			
				case 414:
					return 11799;
			
				case 515:
					return 12267;
			
				case 516:
					return 12274;
			
				case 517:
					return 12469;
			
				case 518:
					return 12476;
			
				case 519:
					return 12483;
			
				case 520:
					return 12490;
			
				case 521:
					return 12497;
			
				case 522:
					return 12504;
			
				case 523:
					return 12511;
			
				case 524:
					return 12518;
			
				case 525:
					return 12525;
			
				case 526:
					return 12532;
			
				case 527:
					return 12539;
			
				case 528:
					return 12546;
			
				case 529:
					return 12553;
			
				case 530:
					return 12560;
			
				case 531:
					return 12567;
			
				case 537:
					return 12609;
			
				case 538:
					return 12616;
			
				case 539:
					return 12623;
			
				case 540:
					return 12630;
			
				case 541:
					return 12637;
			
				case 542:
					return 12644;
			
				case &func_3:
					return 12651;
			
				case 544:
					return 12658;
			
				case 545:
					return 12665;
			
				case 546:
					return 12672;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 363:
					return 11441;
			
				case 364:
					return 11448;
			
				case 365:
					return 11455;
			
				case 366:
					return 11462;
			
				case 367:
					return 11469;
			
				case 368:
					return 11476;
			
				case 369:
					return 11483;
			
				case 370:
					return 11490;
			
				case 371:
					return 11497;
			
				case 372:
					return 11504;
			
				case 373:
					return 11511;
			
				case 374:
					return 11518;
			
				case 375:
					return 11525;
			
				case 376:
					return 11532;
			
				case 377:
					return 11539;
			
				case 378:
					return 11546;
			
				case 379:
					return 11553;
			
				case 380:
					return 11560;
			
				case 381:
					return 11567;
			
				case 382:
					return 11574;
			
				case 383:
					return 11581;
			
				case 384:
					return 11588;
			
				case 385:
					return 11595;
			
				case 386:
					return 11602;
			
				case 387:
					return 11609;
			
				case 388:
					return 11616;
			
				case 389:
					return 11623;
			
				case 390:
					return 11630;
			
				case 391:
					return 11637;
			
				case 392:
					return 11644;
			
				case 393:
					return 11651;
			
				case 394:
					return 11658;
			
				case 395:
					return 11665;
			
				case 396:
					return 11672;
			
				case 397:
					return 11679;
			
				case 398:
					return 11686;
			
				case 399:
					return 11693;
			
				case 400:
					return 11700;
			
				case 401:
					return 11707;
			
				case 402:
					return 11714;
			
				case 403:
					return 11721;
			
				case 404:
					return 11728;
			
				case &func_2:
					return 11735;
			
				case 406:
					return 11742;
			
				case 407:
					return 11749;
			
				case 408:
					return 11756;
			
				case 409:
					return 11763;
			
				case 410:
					return 11770;
			
				case 411:
					return 11777;
			
				case 412:
					return 11784;
			
				case 413:
					return 11791;
			
				case 414:
					return 11798;
			
				case 515:
					return 12266;
			
				case 516:
					return 12273;
			
				case 517:
					return 12468;
			
				case 518:
					return 12475;
			
				case 519:
					return 12482;
			
				case 520:
					return 12489;
			
				case 521:
					return 12496;
			
				case 522:
					return 12503;
			
				case 523:
					return 12510;
			
				case 524:
					return 12517;
			
				case 525:
					return 12524;
			
				case 526:
					return 12531;
			
				case 527:
					return 12538;
			
				case 528:
					return 12545;
			
				case 529:
					return 12552;
			
				case 530:
					return 12559;
			
				case 531:
					return 12566;
			
				case 537:
					return 12608;
			
				case 538:
					return 12615;
			
				case 539:
					return 12622;
			
				case 540:
					return 12629;
			
				case 541:
					return 12636;
			
				case 542:
					return 12643;
			
				case &func_3:
					return 12650;
			
				case 544:
					return 12657;
			
				case 545:
					return 12664;
			
				case 546:
					return 12671;
			
				default:
					break;
			}
			break;
	}

	return 1630;
}

void func_76(int iParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0xF848 Hash - 0x99A9B13C ^0x893CB3D1
{
	Hash statName;

	if (iParam0 != 15468)
	{
		statName = func_72(iParam0, iParam2);
	
		if (statName != 0)
			STATS::STAT_SET_INT(statName, hParam1, bParam3);
	}

	return;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0xF876 Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_23();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_78(int iParam0) // Position - 0xF894 Hash - 0xB350EB61 ^0x283F9F57
{
	if (iParam0 < 10)
		return 54052 + iParam0;
	else if (iParam0 >= 13 && iParam0 < 23)
		return (54052 + iParam0) - 3;
	else if (iParam0 >= 26 && iParam0 < 36)
		return (54052 + iParam0) - 6;
	else if (iParam0 >= 39 && iParam0 < 49)
		return (54052 + iParam0) - 9;
	else if (iParam0 >= 52 && iParam0 < 62)
		return (54052 + iParam0) - 12;
	else if (iParam0 >= 65 && iParam0 < 85)
		return (54052 + iParam0) - 15;
	else if (iParam0 >= 88 && iParam0 < 291)
		return (54052 + iParam0) - 18;
	else if (iParam0 >= 294 && iParam0 < 304)
		return (54052 + iParam0) - 21;
	else if (iParam0 >= 307 && iParam0 < 347)
		return (54052 + iParam0) - 24;
	else if (iParam0 >= 350 && iParam0 < 360)
		return (54052 + iParam0) - 27;
	else if (iParam0 >= 363 && iParam0 < 547)
		return (54052 + iParam0) - 30;

	return 0;
}

int func_79(int iParam0, BOOL bParam1) // Position - 0xFA09 Hash - 0x5FE7B2F8 ^0xAD4758BE
{
	if (func_100(iParam0))
		return 0;

	if (iParam0 <= 38)
		if (iParam0 < 10)
			if (bParam1)
				return joaat("twi_01") + iParam0;
			else
				return 31488 + iParam0;
		else if (iParam0 > 12 && iParam0 < 23)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 3;
			else
				return (31488 + iParam0) - 3;
		else if (iParam0 > 25 && iParam0 < 36)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 6;
			else
				return (31488 + iParam0) - 6;
	else if (iParam0 > 38 && iParam0 < 49)
		return (6015 + iParam0) - 39;
	else if (iParam0 > 51 && iParam0 < 62)
		return (7252 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9310 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30134 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30134 + (iParam0 - 281 - 3);
	else if (iParam0 < func_80(11, -1))
		return (15084 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15084 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15361;
	else if (iParam0 < 184)
		return (18036 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18953 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21942 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24535 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26319 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28039 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31488 + 30 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34036 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36528 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36528 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 41004 + (iParam0 - 363);
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50100 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51536 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53896 + iParam0) - 517;

	return 0;
}

int func_80(int iParam0, int iParam1) // Position - 0xFD4F Hash - 0xBF02E7FB ^0xBF02E7FB
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 108;
	
		case 9:
			return 128;
	
		case 10:
			return 148;
	
		case 11:
			return 156;
	
		case 6:
			return 75;
	
		case 7:
			return 88;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 532;
			else if (iParam1 == 2)
				return 537;
		
			return 179;
	
		case 13:
			return 186;
	
		case 14:
			return 192;
	
		case 15:
			return 202;
	
		case 16:
			return 212;
	
		case 17:
			return 222;
	
		case 18:
			return 236;
	
		case 19:
			return 246;
	
		case 20:
			return 256;
	
		case 21:
			return 268;
	
		case 22:
			return 278;
	
		case 23:
			return 294;
	
		case 24:
			return 307;
	
		case 25:
			return 317;
	
		case 26:
			return 337;
	
		case 27:
			return 350;
	
		case 28:
			return 363;
	
		case 29:
			return 413;
	
		case 31:
			return 517;
	
		case 32:
			return 547;
	}

	if (func_92(iParam0))
	{
		num = func_91(iParam0);
		return func_90(num);
	}

	return func_81(iParam0, -1, true) * (iParam0 + 1);
}

int func_81(int iParam0, int iParam1, BOOL bParam2) // Position - 0xFF25 Hash - 0xCD6FCBEB ^0xCD6FCBEB
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (func_85(iParam1, false, false))
				return 20;
			else if (func_84(iParam1))
				return 0;
			else if (func_83(iParam1, -1))
				return 10;
			else if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return func_82();
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 == 132)
				return 2;
			else if (iParam1 == 133)
				return 10;
			else if (iParam1 <= 131 && iParam1 > 0)
				if (Global_1312333[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312333[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312333[iParam1 /*1951*/].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return func_82();
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	
		case 31:
			return 2;
	
		case 32:
			return 10;
	}

	return 0;
}

int func_82() // Position - 0x1022A Hash - 0x1403B260 ^0x1403B260
{
	return 35;
}

BOOL func_83(int iParam0, int iParam1) // Position - 0x10234 Hash - 0x32D9FCC4 ^0x32D9FCC4
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

BOOL func_84(int iParam0) // Position - 0x10311 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_85(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10340 Hash - 0xDD5D533B ^0xA76EC056
{
	if (bParam2)
		return func_86(PLAYER::PLAYER_ID(), false);

	if (bParam1)
	{
		if (func_86(PLAYER::PLAYER_ID(), false))
			return false;
	
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

BOOL func_86(Player plParam0, BOOL bParam1) // Position - 0x1041B Hash - 0x40436B78 ^0xFF09247
{
	if (Global_1845050 != _INVALID_PLAYER_INDEX())
	{
		if (!func_88(Global_1845050))
			return false;
	
		if (bParam1)
			if (PLAYER::PLAYER_ID() != Global_1845050)
				if (IS_BIT_SET(Global_2657991[Global_1845050 /*467*/].f_202, 24) || func_87(Global_1845050))
					return true;
	}

	return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 24);
}

BOOL func_87(Player plParam0) // Position - 0x10481 Hash - 0x9AF12B5E ^0x80D9B976
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 9);

	return false;
}

BOOL func_88(Player plParam0) // Position - 0x104A4 Hash - 0x96A3BD5A ^0x96A3BD5A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_393, 2);

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x104CD Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

int func_90(int iParam0) // Position - 0x104D6 Hash - 0x7929990 ^0x275DAF28
{
	switch (iParam0)
	{
		case 0:
			return 157;
	
		case 2:
			return 224;
	
		case 1:
			return 227;
	
		case 3:
			return 279;
	
		default:
		
	}

	return -1;
}

int func_91(int iParam0) // Position - 0x10513 Hash - 0xB721049B ^0x624C1585
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

BOOL func_92(int iParam0) // Position - 0x10539 Hash - 0xC6F10977 ^0x1359C4F8
{
	if (iParam0 >= 1000 && iParam0 < 1004)
		return true;

	return false;
}

int func_93(int iParam0) // Position - 0x1055A Hash - 0x5992B4A ^0xCAB5A9F0
{
	if (func_100(iParam0))
		return 0;

	if (iParam0 < 10)
		return 7263 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 7263 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 7263 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 7263 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7263 + iParam0) - 12;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9330 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30154 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30154 + (iParam0 - 281 - 3);
	else if (iParam0 < func_80(11, -1))
		return (15154 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15154 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15362;
	else if (iParam0 < 184)
		return (18061 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18963 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21979 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24565 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26329 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28049 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31528 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34056 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36548 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36548 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (41056 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50200 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51538 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53926 + iParam0) - 517;

	return 0;
}

int func_94(int iParam0) // Position - 0x10860 Hash - 0x5992B4A ^0x8E6A50EF
{
	if (func_100(iParam0))
		return 0;

	if (iParam0 < 10)
		return 5975 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5975 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5975 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5975 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7242 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9290 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30114 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30114 + (iParam0 - 281 - 3);
	else if (iParam0 < func_80(11, -1))
		return (15014 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15014 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15360;
	else if (iParam0 < 184)
		return (18011 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18943 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21905 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24505 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26309 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28029 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31478 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34016 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36508 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36508 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40952 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (50000 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51534 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53866 + iParam0) - 517;

	return 0;
}

int func_95(int iParam0) // Position - 0x10B66 Hash - 0x5992B4A ^0x8291E3F9
{
	if (func_100(iParam0))
		return 0;

	if (iParam0 < 10)
		return 5935 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5935 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5935 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5935 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7232 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9270 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30094 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30094 + (iParam0 - 281 - 3);
	else if (iParam0 < func_80(11, -1))
		return (14944 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (14944 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15359;
	else if (iParam0 < 184)
		return (17986 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18933 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21868 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24475 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26299 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28019 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31468 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (33996 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36488 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36488 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40900 + iParam0) - 363;
	else if (iParam0 >= 415 && iParam0 < 515)
		return (49900 + iParam0) - 415;
	else if (iParam0 >= 515 && iParam0 < 517)
		return (51532 + iParam0) - 515;
	else if (iParam0 >= 517 && iParam0 < 547)
		return (53836 + iParam0) - 517;

	return 0;
}

int func_96(int iParam0) // Position - 0x10E6C Hash - 0xF955952E ^0xAD79F81E
{
	int num;

	if (func_100(iParam0))
		return 0;

	num = 4424 - 4400;

	if (iParam0 < 10)
		return 4400 + (iParam0 * num);
	else if (iParam0 > 12 && iParam0 < 23)
		return 4640 + ((iParam0 - 13) * num);
	else if (iParam0 > 25 && iParam0 < 36)
		return 4880 + ((iParam0 - 26) * num);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5120 + ((iParam0 - 39) * num);
	else if (iParam0 > 51 && iParam0 < 62)
		return 6414 + ((iParam0 - 52) * num);
	else if (iParam0 > 64 && iParam0 < 85)
		return 7682 + ((iParam0 - 65) * num);
	else if (iParam0 >= 281 && iParam0 < 291)
		return 29534 + ((iParam0 - 281) * num);
	else if (iParam0 >= 294 && iParam0 < 304)
		return 29774 + ((iParam0 - 294) * num);
	else if (iParam0 < func_80(11, -1))
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 <= 157)
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 == 158)
		return 15282;
	else if (iParam0 < 184)
		return 16061 + ((iParam0 - 159) * num);
	else if (iParam0 < 194)
		return 18163 + ((iParam0 - 184) * num);
	else if (iParam0 < 231)
		return 19019 + ((iParam0 - 194) * num);
	else if (iParam0 < 261)
		return 22195 + ((iParam0 - 231) * num);
	else if (iParam0 < 271)
		return 25539 + ((iParam0 - 261) * num);
	else if (iParam0 < 281)
		return 27259 + ((iParam0 - 271) * num);
	else if (iParam0 > 306 && iParam0 < 317)
		return 31188 + ((iParam0 - 307) * num);
	else if (iParam0 >= 317 && iParam0 < 337)
		return 33436 + ((iParam0 - 317) * num);
	else if (iParam0 >= 337 && iParam0 < 347)
		return 35928 + ((iParam0 - 337) * num);
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36168 + ((iParam0 - 350) * num);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 39444 + ((iParam0 - 363) * num);
	else if (iParam0 >= 415 && iParam0 < 515)
		return 47100 + ((iParam0 - 415) * num);
	else if (iParam0 >= 515 && iParam0 < 517)
		return 51476 + ((iParam0 - 515) * num);
	else if (iParam0 >= 517 && iParam0 < 547)
		return 52996 + ((iParam0 - 517) * num);

	return 0;
}

BOOL func_97(int iParam0) // Position - 0x111C1 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return true;
	}

	return false;
}

void func_98(int iParam0, int iParam1, int iParam2) // Position - 0x1128C Hash - 0x4C8CAB3D ^0xBFF357A2
{
	if (iParam2 == -1)
		iParam2 = func_23();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_99(int iParam0, int iParam1) // Position - 0x112B4 Hash - 0x35A80149 ^0xA9A3B962
{
	int num;

	if (func_100(iParam1))
		return 0;

	if (iParam0 == 3880 || iParam0 == 3881 || iParam0 == 3882)
	{
		if (iParam1 < 10)
			num = iParam0 + (iParam1 * 3);
		else if (iParam1 < 23)
			if (iParam0 == 3880)
				num = 3910 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3881)
				num = 3911 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3882)
				num = 3912 + ((iParam1 - 13) * 3);
		else if (iParam1 < 36)
			if (iParam0 == 3880)
				num = 3946 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3881)
				num = 3947 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3882)
				num = 3948 + ((iParam1 - 26) * 3);
		else if (iParam1 < 49)
			if (iParam0 == 3880)
				num = 5855 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3881)
				num = 5856 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3882)
				num = 5857 + ((iParam1 - 39) * 3);
		else if (iParam1 < 62)
			if (iParam0 == 3880)
				num = 7149 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3881)
				num = 7150 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3882)
				num = 7151 + ((iParam1 - 52) * 3);
		else if (iParam1 < 85)
			if (iParam0 == 3880)
				num = 9107 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3881)
				num = 9108 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3882)
				num = 9109 + ((iParam1 - 65) * 3);
		else if (iParam1 < func_80(11, -1))
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 <= 157)
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = 14385 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 == 158)
			if (iParam0 == 3880)
				num = 15351;
			else if (iParam0 == 3881)
				num = 15352;
			else if (iParam0 == 3882)
				num = 15353;
		else if (iParam1 < 184)
			if (iParam0 == 3880)
				num = 17786 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3881)
				num = 17787 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3882)
				num = 17788 + ((iParam1 - 159) * 3);
		else if (iParam1 < 194)
			if (iParam0 == 3880)
				num = 18853 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3881)
				num = 18854 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3882)
				num = 18855 + ((iParam1 - 184) * 3);
		else if (iParam1 < 231)
			if (iParam0 == 3880)
				num = 21572 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3881)
				num = 21573 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3882)
				num = 21574 + ((iParam1 - 194) * 3);
		else if (iParam1 < 261)
			if (iParam0 == 3880)
				num = 24265 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3881)
				num = 24266 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3882)
				num = 24267 + ((iParam1 - 231) * 3);
		else if (iParam1 < 271)
			if (iParam0 == 3880)
				num = 26229 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3881)
				num = 26230 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3882)
				num = 26231 + ((iParam1 - 261) * 3);
		else if (iParam1 < 281)
			if (iParam0 == 3880)
				num = 27949 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3881)
				num = 27950 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3882)
				num = 27951 + ((iParam1 - 271) * 3);
		else if (iParam1 < 291)
			if (iParam0 == 3880)
				num = 29474 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3881)
				num = 29475 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3882)
				num = 29476 + ((iParam1 - 281) * 3);
		else if (iParam1 < 304)
			if (iParam0 == 3880)
				num = 29504 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3881)
				num = 29505 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3882)
				num = 29506 + ((iParam1 - 294) * 3);
		else if (iParam1 > 306 && iParam1 < 317)
			if (iParam0 == 3880)
				num = 31158 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3881)
				num = 31159 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3882)
				num = 31160 + ((iParam1 - 307) * 3);
		else if (iParam1 >= 317 && iParam1 < 337)
			if (iParam0 == 3880)
				num = 33376 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3881)
				num = 33377 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3882)
				num = 33378 + ((iParam1 - 317) * 3);
		else if (iParam1 >= 337 && iParam1 < 347)
			if (iParam0 == 3880)
				num = 35868 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3881)
				num = 35869 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3882)
				num = 35870 + ((iParam1 - 337) * 3);
		else if (iParam1 >= 350 && iParam1 < 360)
			if (iParam0 == 3880)
				num = 35898 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3881)
				num = 35899 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3882)
				num = 35900 + ((iParam1 - 350) * 3);
		else if (iParam1 >= 363 && iParam1 <= 414)
			if (iParam0 == 3880)
				num = 39288 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3881)
				num = 39289 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3882)
				num = 39290 + ((iParam1 - 363) * 3);
		else if (iParam1 >= 415 && iParam1 < 515)
			if (iParam0 == 3880)
				num = 46800 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3881)
				num = 46801 + ((iParam1 - 415) * 3);
			else if (iParam0 == 3882)
				num = 46802 + ((iParam1 - 415) * 3);
		else if (iParam1 >= 515 && iParam1 < 517)
			if (iParam0 == 3880)
				num = 51470 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3881)
				num = 51471 + ((iParam1 - 515) * 3);
			else if (iParam0 == 3882)
				num = 51472 + ((iParam1 - 515) * 3);
		else if (iParam1 >= 517 && iParam1 < 547)
			if (iParam0 == 3880)
				num = 52906 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3881)
				num = 52907 + ((iParam1 - 517) * 3);
			else if (iParam0 == 3882)
				num = 52908 + ((iParam1 - 517) * 3);
	}
	else if (iParam1 < 10)
	{
		num = iParam0 + (iParam1 * (1456 - 1411));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		num = (iParam1 - 10) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 1861;
		else if (iParam0 == 1412)
			num = num + 1862;
		else if (iParam0 == 1441)
			num = num + 1863;
		else if (iParam0 == 1442)
			num = num + 1864;
		else if (iParam0 == 1443)
			num = num + 1865;
		else if (iParam0 == 1445)
			num = num + 1866;
		else if (iParam0 == 1447)
			num = num + 1867;
		else if (iParam0 == 1448)
			num = num + 1868;
		else if (iParam0 == 1449)
			num = num + 1869;
		else if (iParam0 == 1450)
			num = num + 1870;
		else if (iParam0 == 1451)
			num = num + 1871;
		else if (iParam0 == 1452)
			num = num + 1872;
		else if (iParam0 == 1453)
			num = num + 1873;
		else if (iParam0 == 1454)
			num = num + 1874;
		else if (iParam0 == 1455)
			num = num + 1875;
	}
	else if (iParam1 < 23)
	{
		num = 1906 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 13) * (1456 - 1411));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		num = (iParam1 - 23) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2356;
		else if (iParam0 == 1412)
			num = num + 2357;
		else if (iParam0 == 1441)
			num = num + 2358;
		else if (iParam0 == 1442)
			num = num + 2359;
		else if (iParam0 == 1443)
			num = num + 2360;
		else if (iParam0 == 1445)
			num = num + 2361;
		else if (iParam0 == 1447)
			num = num + 2362;
		else if (iParam0 == 1448)
			num = num + 2363;
		else if (iParam0 == 1449)
			num = num + 2364;
		else if (iParam0 == 1450)
			num = num + 2365;
		else if (iParam0 == 1451)
			num = num + 2366;
		else if (iParam0 == 1452)
			num = num + 2367;
		else if (iParam0 == 1453)
			num = num + 2368;
		else if (iParam0 == 1454)
			num = num + 2369;
		else if (iParam0 == 1455)
			num = num + 2370;
	}
	else if (iParam1 < 36)
	{
		num = 2405 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 26) * (1456 - 1411));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		num = (iParam1 - 36) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2855;
		else if (iParam0 == 1412)
			num = num + 2856;
		else if (iParam0 == 1441)
			num = num + 2857;
		else if (iParam0 == 1442)
			num = num + 2858;
		else if (iParam0 == 1443)
			num = num + 2859;
		else if (iParam0 == 1445)
			num = num + 2860;
		else if (iParam0 == 1447)
			num = num + 2861;
		else if (iParam0 == 1448)
			num = num + 2862;
		else if (iParam0 == 1449)
			num = num + 2863;
		else if (iParam0 == 1450)
			num = num + 2864;
		else if (iParam0 == 1451)
			num = num + 2865;
		else if (iParam0 == 1452)
			num = num + 2866;
		else if (iParam0 == 1453)
			num = num + 2867;
		else if (iParam0 == 1454)
			num = num + 2868;
		else if (iParam0 == 1455)
			num = num + 2869;
	}
	else if (iParam1 < 49)
	{
		num = 5360 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 39) * (1456 - 1411));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		num = (iParam1 - 49) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 5810;
		else if (iParam0 == 1412)
			num = num + 5811;
		else if (iParam0 == 1441)
			num = num + 5812;
		else if (iParam0 == 1442)
			num = num + 5813;
		else if (iParam0 == 1443)
			num = num + 5814;
		else if (iParam0 == 1445)
			num = num + 5815;
		else if (iParam0 == 1447)
			num = num + 5816;
		else if (iParam0 == 1448)
			num = num + 5817;
		else if (iParam0 == 1449)
			num = num + 5818;
		else if (iParam0 == 1450)
			num = num + 5819;
		else if (iParam0 == 1451)
			num = num + 5820;
		else if (iParam0 == 1452)
			num = num + 5821;
		else if (iParam0 == 1453)
			num = num + 5822;
		else if (iParam0 == 1454)
			num = num + 5823;
		else if (iParam0 == 1455)
			num = num + 5824;
	}
	else if (iParam1 < 62)
	{
		num = 6654 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 52) * (1456 - 1411));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		num = (iParam1 - 62) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 7104;
		else if (iParam0 == 1412)
			num = num + 7105;
		else if (iParam0 == 1441)
			num = num + 7106;
		else if (iParam0 == 1442)
			num = num + 7107;
		else if (iParam0 == 1443)
			num = num + 7108;
		else if (iParam0 == 1445)
			num = num + 7109;
		else if (iParam0 == 1447)
			num = num + 7110;
		else if (iParam0 == 1448)
			num = num + 7111;
		else if (iParam0 == 1449)
			num = num + 7112;
		else if (iParam0 == 1450)
			num = num + 7113;
		else if (iParam0 == 1451)
			num = num + 7114;
		else if (iParam0 == 1452)
			num = num + 7115;
		else if (iParam0 == 1453)
			num = num + 7116;
		else if (iParam0 == 1454)
			num = num + 7117;
		else if (iParam0 == 1455)
			num = num + 7118;
	}
	else if (iParam1 < 85)
	{
		num = 8162 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 65) * (1456 - 1411));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		num = (iParam1 - 85) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 9062;
		else if (iParam0 == 1412)
			num = num + 9063;
		else if (iParam0 == 1441)
			num = num + 9064;
		else if (iParam0 == 1442)
			num = num + 9065;
		else if (iParam0 == 1443)
			num = num + 9066;
		else if (iParam0 == 1445)
			num = num + 9067;
		else if (iParam0 == 1447)
			num = num + 9068;
		else if (iParam0 == 1448)
			num = num + 9069;
		else if (iParam0 == 1449)
			num = num + 9070;
		else if (iParam0 == 1450)
			num = num + 9071;
		else if (iParam0 == 1451)
			num = num + 9072;
		else if (iParam0 == 1452)
			num = num + 9073;
		else if (iParam0 == 1453)
			num = num + 9074;
		else if (iParam0 == 1454)
			num = num + 9075;
		else if (iParam0 == 1455)
			num = num + 9076;
	}
	else if (iParam1 < func_80(11, -1))
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_80(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 <= 157)
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_80(7, -1)) * (1456 - 1411));
	}
	else if (iParam1 == 158)
	{
		num = 15306 - 1411;
		num = num + iParam0;
	}
	else if (iParam1 < 184)
	{
		num = 16661 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 159) * (1456 - 1411));
	}
	else if (iParam1 < 194)
	{
		num = 18403 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 184) * (1456 - 1411));
	}
	else if (iParam1 < 231)
	{
		num = 19907 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 194) * (1456 - 1411));
	}
	else if (iParam1 < 261)
	{
		num = 22915 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 231) * (1456 - 1411));
	}
	else if (iParam1 < 271)
	{
		num = 25779 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 261) * (1456 - 1411));
	}
	else if (iParam1 < 281)
	{
		num = 27499 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 271) * (1456 - 1411));
	}
	else if (iParam1 < 291)
	{
		num = 28484 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 281) * (1456 - 1411));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		num = (iParam1 - 291) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 28934;
		else if (iParam0 == 1412)
			num = num + 28935;
		else if (iParam0 == 1441)
			num = num + 28936;
		else if (iParam0 == 1442)
			num = num + 28937;
		else if (iParam0 == 1443)
			num = num + 28938;
		else if (iParam0 == 1445)
			num = num + 28939;
		else if (iParam0 == 1447)
			num = num + 28940;
		else if (iParam0 == 1448)
			num = num + 28941;
		else if (iParam0 == 1449)
			num = num + 28942;
		else if (iParam0 == 1450)
			num = num + 28943;
		else if (iParam0 == 1451)
			num = num + 28944;
		else if (iParam0 == 1452)
			num = num + 28945;
		else if (iParam0 == 1453)
			num = num + 28946;
		else if (iParam0 == 1454)
			num = num + 28947;
		else if (iParam0 == 1455)
			num = num + 28948;
	}
	else if (iParam1 < 304)
	{
		num = 28979 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 294) * (1456 - 1411));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		num = (iParam1 - 304) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 29429;
		else if (iParam0 == 1412)
			num = num + 29430;
		else if (iParam0 == 1441)
			num = num + 29431;
		else if (iParam0 == 1442)
			num = num + 29432;
		else if (iParam0 == 1443)
			num = num + 29433;
		else if (iParam0 == 1445)
			num = num + 29434;
		else if (iParam0 == 1447)
			num = num + 29435;
		else if (iParam0 == 1448)
			num = num + 29436;
		else if (iParam0 == 1449)
			num = num + 29437;
		else if (iParam0 == 1450)
			num = num + 29438;
		else if (iParam0 == 1451)
			num = num + 29439;
		else if (iParam0 == 1452)
			num = num + 29440;
		else if (iParam0 == 1453)
			num = num + 29441;
		else if (iParam0 == 1454)
			num = num + 29442;
		else if (iParam0 == 1455)
			num = num + 29443;
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		num = 30708 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 307) * (1456 - 1411));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		num = 32476 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 317) * (1456 - 1411));
	}
	else if (iParam1 < 347)
	{
		num = 34878 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 337) * (1456 - 1411));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		num = (iParam1 - 347) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35328;
		else if (iParam0 == 1412)
			num = num + 35329;
		else if (iParam0 == 1441)
			num = num + 35330;
		else if (iParam0 == 1442)
			num = num + 35331;
		else if (iParam0 == 1443)
			num = num + 35332;
		else if (iParam0 == 1445)
			num = num + 35333;
		else if (iParam0 == 1447)
			num = num + 35334;
		else if (iParam0 == 1448)
			num = num + 35335;
		else if (iParam0 == 1449)
			num = num + 35336;
		else if (iParam0 == 1450)
			num = num + 35337;
		else if (iParam0 == 1451)
			num = num + 35338;
		else if (iParam0 == 1452)
			num = num + 35339;
		else if (iParam0 == 1453)
			num = num + 35340;
		else if (iParam0 == 1454)
			num = num + 35341;
		else if (iParam0 == 1455)
			num = num + 35342;
	}
	else if (iParam1 < 360)
	{
		num = 35373 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 350) * (1456 - 1411));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		num = (iParam1 - 360) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35823;
		else if (iParam0 == 1412)
			num = num + 35824;
		else if (iParam0 == 1441)
			num = num + 35825;
		else if (iParam0 == 1442)
			num = num + 35826;
		else if (iParam0 == 1443)
			num = num + 35827;
		else if (iParam0 == 1445)
			num = num + 35828;
		else if (iParam0 == 1447)
			num = num + 35829;
		else if (iParam0 == 1448)
			num = num + 35830;
		else if (iParam0 == 1449)
			num = num + 35831;
		else if (iParam0 == 1450)
			num = num + 35832;
		else if (iParam0 == 1451)
			num = num + 35833;
		else if (iParam0 == 1452)
			num = num + 35834;
		else if (iParam0 == 1453)
			num = num + 35835;
		else if (iParam0 == 1454)
			num = num + 35836;
		else if (iParam0 == 1455)
			num = num + 35837;
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		num = 36948 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 363) * (1456 - 1411));
	}
	else if (iParam1 >= 415 && iParam1 < 515)
	{
		num = 42300 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 415) * (1456 - 1411));
	}
	else if (iParam1 >= 515 && iParam1 < 517)
	{
		num = 51380 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 515) * (1456 - 1411));
	}
	else if (iParam1 >= 517 && iParam1 < 547)
	{
		num = 51556 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 517) * (1456 - 1411));
	}

	return num;
}

BOOL func_100(int iParam0) // Position - 0x12BB0 Hash - 0xA8BA5EA5 ^0xDF105FB1
{
	if (iParam0 >= 415 && iParam0 < 515)
		return true;

	if (iParam0 >= 532 && iParam0 < 537)
		return true;

	return false;
}

int func_101() // Position - 0x12BE9 Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_102(var uParam0) // Position - 0x12BF6 Hash - 0x1A4B9FC ^0xBBEE9A0
{
	func_103(uParam0);
	uParam0->f_104 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_107), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_123), "", 64);
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
	uParam0->f_141 = 0;
	uParam0->f_142 = 0;
	return;
}

void func_103(var uParam0) // Position - 0x12C39 Hash - 0x27A94625 ^0x34ED5681
{
	func_104(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
	return;
}

void func_104(var uParam0) // Position - 0x12CC9 Hash - 0xB95AF921 ^0x4DC7C61C
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_105(int iParam0, int iParam1) // Position - 0x12D79 Hash - 0x1454C1BE ^0xD06CE061
{
	int bossId1;
	int bossId2;
	int bossType;
	int reason;

	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				reason = joaat("INVALID");
				break;
		
			case 1:
				reason = joaat("Destroyed");
				break;
		
			case 2:
				reason = joaat("SOLD");
				break;
		
			case 3:
				reason = joaat("OVERWRITE");
				break;
		
			case 4:
				reason = joaat("exploit");
				break;
		
			case 5:
				reason = joaat("UNOWNED");
				break;
		
			case 6:
				reason = joaat("Duplicate");
				break;
		
			case 7:
				reason = -1921848560;
				break;
		}
	
		if (func_114(true))
		{
			bossId1 = func_112(_GET_BOSS_OF_LOCAL_PLAYER());
			bossId2 = func_111(_GET_BOSS_OF_LOCAL_PLAYER());
			bossType = func_106(func_107(true));
		}
		else
		{
			bossType = -1;
		}
	
		STATS::PLAYSTATS_VEH_DEL(bossId1, bossId2, bossType, Global_1586535[iParam0 /*143*/].f_66, reason);
	}

	return;
}

int func_106(BOOL bParam0) // Position - 0x12E54 Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

BOOL func_107(BOOL bParam0) // Position - 0x12E66 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_108(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_108(Player plParam0, BOOL bParam1) // Position - 0x12E78 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_109(plParam0, bParam1, 1);
}

int func_109(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x12E89 Hash - 0x55931638 ^0x4F47E369
{
	Player player;

	if (!func_24(plParam0))
		return 0;

	if (!bParam1)
		if (func_110(plParam0, iParam2))
			return 0;

	player = Global_1887549[plParam0 /*611*/].f_10;

	if (func_24(player) && Global_1887549[player /*611*/].f_10.f_431 == iParam2)
		return 1;

	return 0;
}

BOOL func_110(Player plParam0, int iParam1) // Position - 0x12EE5 Hash - 0xEA053375 ^0x162A414
{
	if (func_24(plParam0))
		if (func_24(Global_1887549[plParam0 /*611*/].f_10))
			if (Global_1887549[plParam0 /*611*/].f_10 == plParam0 && Global_1887549[plParam0 /*611*/].f_10.f_431 == iParam1)
				return true;

	return false;
}

int func_111(Player plParam0) // Position - 0x12F34 Hash - 0xAE8A6582 ^0x6E31D9BB
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887549[plParam0 /*611*/].f_10.f_8[1];
}

int func_112(Player plParam0) // Position - 0x12F59 Hash - 0x57997590 ^0xB0714101
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1887549[plParam0 /*611*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x12F7E Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_10;
}

BOOL func_114(BOOL bParam0) // Position - 0x12F93 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_115(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_115(Player plParam0, BOOL bParam1) // Position - 0x12FA5 Hash - 0xB4CE8E51 ^0xDD439BF7
{
	if (!func_24(plParam0))
		return false;

	if (!bParam1)
		if (func_116(plParam0))
			return false;

	return func_24(Global_1887549[plParam0 /*611*/].f_10);
}

BOOL func_116(Player plParam0) // Position - 0x12FDD Hash - 0xC62FC261 ^0xD6778B42
{
	if (func_24(plParam0))
		if (func_24(Global_1887549[plParam0 /*611*/].f_10))
			return Global_1887549[plParam0 /*611*/].f_10 == plParam0;

	return false;
}

void func_117(int iParam0, BOOL bParam1, int iParam2) // Position - 0x13012 Hash - 0x194A5900 ^0x135D71A7
{
	if (iParam0 < 0)
		return;

	if (func_122(iParam0))
		return;

	if (func_100(bParam1))
		return;

	bParam1 = bParam1 + 1;
	func_118(iParam0, bParam1, iParam2);

	if (iParam0 >= 547)
		return;

	if (iParam2 == func_23() || iParam2 == -1)
		Global_1938043[iParam0] = bParam1;

	return;
}

void func_118(int iParam0, int iParam1, int iParam2) // Position - 0x13074 Hash - 0xC2687FE5 ^0xC2687FE5
{
	if (iParam1 <= 255)
	{
		func_98(func_121(iParam0), iParam1, iParam2);
		func_98(func_120(iParam0), 0, iParam2);
		func_98(func_119(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_98(func_121(iParam0), 255, iParam2);
	}

	if (iParam1 <= 510)
	{
		func_98(func_120(iParam0), iParam1 - 255, iParam2);
		func_98(func_119(iParam0), 0, iParam2);
		return;
	}
	else
	{
		func_98(func_120(iParam0), 255, iParam2);
	}

	if (iParam1 <= 765)
		func_98(func_119(iParam0), iParam1 - 510, iParam2);

	return;
}

int func_119(int iParam0) // Position - 0x13113 Hash - 0x647BE23A ^0xE8F41655
{
	if (iParam0 < 515)
		return 50500 + iParam0;
	else if (iParam0 < 517)
		return (51544 + iParam0) - 515;
	else if (iParam0 < 547)
		return (54016 + iParam0) - 517;

	return 50500 + iParam0;
}

int func_120(int iParam0) // Position - 0x13166 Hash - 0x458C602E ^0xD1FC3072
{
	if (iParam0 < 261)
		return 24625 + iParam0;
	else if (iParam0 < 271)
		return (26349 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28069 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30200 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31548 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34096 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36594 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41160 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50400 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51542 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53986 + iParam0) - 517;

	return 24625 + iParam0;
}

int func_121(int iParam0) // Position - 0x1327B Hash - 0x34E4AA84 ^0x603EE325
{
	if (iParam0 < 158)
		if (iParam0 <= 38)
			return 4036 + iParam0;
		else if (iParam0 <= 48)
			return (5905 + iParam0) - 39;
		else if (iParam0 <= 51)
			return (6025 + iParam0) - 49;
		else if (iParam0 <= 64)
			return (7199 + iParam0) - 52;
		else if (iParam0 <= 87)
			return (9207 + iParam0) - 65;
		else
			return (14734 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15356;
	else if (iParam0 < 261)
		if (iParam0 < 184)
			return (17911 + iParam0) - 159;
		else if (iParam0 < 194)
			return (18903 + iParam0) - 184;
		else if (iParam0 < 231)
			return (21757 + iParam0) - 194;
		else
			return (24595 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26339 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28059 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30174 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31538 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34076 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36568 + iParam0) - 337;
	else if (iParam0 <= 414)
		return (41108 + iParam0) - 363;
	else if (iParam0 < 515)
		return (50300 + iParam0) - 415;
	else if (iParam0 < 517)
		return (51540 + iParam0) - 515;
	else if (iParam0 < 547)
		return (53956 + iParam0) - 517;

	return 4036 + iParam0;
}

BOOL func_122(int iParam0) // Position - 0x13466 Hash - 0xA8BA5EA5 ^0xDF105FB1
{
	if (iParam0 >= 415 && iParam0 < 515)
		return true;

	if (iParam0 >= 532 && iParam0 < 537)
		return true;

	return false;
}

void func_123(int iParam0, var uParam1) // Position - 0x1349F Hash - 0x19042A21 ^0xB162AA59
{
	int i;

	*uParam1 = -1;

	if (iParam0 >= 0)
	{
		for (i = 0; i < 547; i = i + 1)
		{
			if (iParam0 == Global_1938043[i] - 1)
			{
				*uParam1 = i;
				return;
			}
		}
	}

	return;
}

BOOL func_124(Hash hParam0) // Position - 0x134DC Hash - 0xCD8D80A4 ^0xCD8D80A4
{
	if (func_126() && func_125(hParam0, false))
		return false;

	return true;
}

BOOL func_125(Hash hParam0, BOOL bParam1) // Position - 0x134FC Hash - 0x96F38517 ^0x96F38517
{
	switch (hParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
	
		case joaat("oppressor2"):
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

BOOL func_126() // Position - 0x13567 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2684718.f_18;
}

BOOL func_127(Hash hParam0) // Position - 0x13575 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob5"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
		case -1659004814:
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("streamer216"):
		case 239897677:
		case 858355070:
		case 84351789:
			return true;
	
		default:
		
	}

	return false;
}

int func_128(Hash hParam0) // Position - 0x136EB Hash - 0xB89D67FC ^0x9CA6609E
{
	switch (hParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("seasparrow"):
		case joaat("conada"):
		case -1659004814:
			return 0;
	
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("akula"):
		case joaat("streamer216"):
		case 239897677:
		case 84351789:
			return 1;
	
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("avenger3"):
		case joaat("cargobob5"):
		case 858355070:
			return 2;
	
		case joaat("alkonost"):
			return 3;
	
		default:
		
	}

	if (hParam0 == joaat("strikeforce"))
		return 1;

	return 0;
}

BOOL func_129(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x13875 Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("blimp2") || hParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
			{
				if (hParam0 == outData.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
				
					break;
				}
			}
		}
	}

	if (hParam0 == joaat("blimp"))
		if (!func_138() && !func_137() && !func_136() && !func_135() && !_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	if (hParam0 == joaat("hotknife") || hParam0 == joaat("carbonrs") || hParam0 == joaat("khamelion"))
	{
		if (IS_XBOX_PLATFORM() || MISC::IS_PC_VERSION() || IS_PLAYSTATION_PLATFORM())
		{
		}
		else if (!func_136())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_132(hParam0, iParam2))
			return false;

	if (!func_130(hParam0))
		return false;

	return true;
}

BOOL func_130(Hash hParam0) // Position - 0x139FA Hash - 0xC7E3100C ^0x1B309D70
{
	int num;
	var unk;
	var name;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("dune4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("voltic2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("ruiner2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("phantom2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("technical2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("boxville5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("wastelander"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("blazer5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x13AC6 Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_132(Hash hParam0, int iParam1) // Position - 0x13ADD Hash - 0xD1D0764E ^0x49FF13DF
{
	int cloudTimeAsInt;
	int num;

	if (Global_2707691)
		return true;

	if (!Global_2707692 && iParam1 >= 0 && iParam1 <= 547)
		if (IS_BIT_SET(Global_1586535[iParam1 /*143*/].f_104, 2))
			return true;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
	num = 0;

	switch (hParam0)
	{
		case -1321131184:
			num = Global_262145.f_35588[0];
			break;
	
		case -1289225626:
			num = Global_262145.f_35588[1];
			break;
	
		case -362690998:
			num = Global_262145.f_35588[2];
			break;
	
		case -1948949064:
			num = Global_262145.f_35588[3];
			break;
	
		case -1466692365:
			num = Global_262145.f_35588[4];
			break;
	
		case joaat("cargobob5"):
			num = Global_262145.f_35588[5];
			break;
	
		case 2042703219:
			num = Global_262145.f_35588[6];
			break;
	
		case 1484920335:
			num = Global_262145.f_35588[7];
			break;
	
		case 1891140410:
			num = Global_262145.f_35588[8];
			break;
	
		case 1992041063:
			num = Global_262145.f_35588[9];
			break;
	
		case 858355070:
			num = Global_262145.f_35588[10];
			break;
	
		case joaat("URANUS"):
			num = Global_262145.f_35588[11];
			break;
	
		case 84351789:
			num = Global_262145.f_35588[12];
			break;
	
		case -660007725:
			num = Global_262145.f_35588[13];
			break;
	
		case -973016778:
			num = Global_262145.f_35588[14];
			break;
	
		case 127317925:
			num = Global_262145.f_35588[15];
			break;
	
		case joaat("taco"):
			num = Global_262145.f_35588[16];
			break;
	
		case joaat("predator"):
			num = Global_262145.f_35588[17];
			break;
	}

	if (cloudTimeAsInt > num)
		return true;

	return false;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x13CE6 Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x13CFC Hash - 0x4C81F065 ^0xB17A9745
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

BOOL func_135() // Position - 0x13D12 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_136() // Position - 0x13D1B Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_137() // Position - 0x13D24 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_138() // Position - 0x13D2D Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x13D46 Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_153015 == 2)
		return true;
	else if (Global_153015 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_28, 2);
				MISC::SET_BIT(&Global_28, 4);
				MISC::SET_BIT(&Global_28, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

Hash func_140(int iParam0) // Position - 0x13DFE Hash - 0xAD0B20DB ^0x461F5211
{
	if (iParam0 > -1)
		return Global_1586535[iParam0 /*143*/].f_66;

	return 0;
}

void func_141(int iParam0, var uParam1, BOOL bParam2) // Position - 0x13E1A Hash - 0x600984A8 ^0xF3F646E0
{
	if (Global_262145.f_10652)
		*uParam1 = iParam0;

	if (iParam0 >= 0)
	{
		*uParam1 = Global_1938043[iParam0] - 1;
	
		if (bParam2)
			MISC::GET_FRAME_COUNT() % 5 == 0;
	}
	else
	{
		*uParam1 = -1;
	}

	return;
}

int func_142(int iParam0, int iParam1) // Position - 0x13E5A Hash - 0xA969C5A0 ^0xA969C5A0
{
	int num;

	switch (iParam0)
	{
		case 8:
			return 88;
	
		case 9:
			return 108;
	
		case 10:
			return 128;
	
		case 11:
			return 148;
	
		case 6:
			return 65;
	
		case 7:
			return 75;
	
		case 5:
			return -1;
	
		case 12:
			if (iParam1 == 1)
				return 517;
			else if (iParam1 == 2)
				return 532;
		
			return 159;
	
		case 13:
			return 179;
	
		case 14:
			return 191;
	
		case 15:
			return 192;
	
		case 16:
			return 202;
	
		case 17:
			return 212;
	
		case 18:
			return 227;
	
		case 19:
			return 237;
	
		case 20:
			return 247;
	
		case 21:
			return 258;
	
		case 22:
			return 268;
	
		case 23:
			return 281;
	
		case 24:
			return 294;
	
		case 25:
			return 307;
	
		case 26:
			return 317;
	
		case 27:
			return 337;
	
		case 28:
			return 350;
	
		case 29:
			return 363;
	
		case 31:
			return 515;
	
		case 32:
			return 537;
	}

	if (func_92(iParam0))
	{
		num = func_91(iParam0);
		return func_143(num);
	}

	return func_81(iParam0, -1, true) * iParam0;
}

int func_143(int iParam0) // Position - 0x1402E Hash - 0x9C45FD31 ^0x283C5D8D
{
	switch (iParam0)
	{
		case 0:
			return 156;
	
		case 2:
			return 223;
	
		case 1:
			return 224;
	
		case 3:
			return 278;
	
		default:
		
	}

	return -1;
}

int func_144(int iParam0, int iParam1, int iParam2) // Position - 0x1406B Hash - 0x3E3E7E42 ^0x3E3E7E42
{
	if (iParam1 == 12 || iParam2 == 116)
	{
		switch (iParam0)
		{
			case 0:
				return 20;
		
			case 1:
				return 15;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_145(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x140A4 Hash - 0x8E0C2A20 ^0x49DD49FD
{
	if (bParam4)
	{
		if (iParam1 == 116 || iParam2 == 12)
		{
			if (func_148(PLAYER::PLAYER_ID()))
			{
				if (iParam0 == 0)
					return true;
			
				if (func_147(PLAYER::PLAYER_ID()))
					if (iParam0 == 1)
						return true;
			}
		}
	
		return false;
	}

	if (iParam1 == 116 || iParam2 == 12)
	{
		if (func_146(6103, iParam3) != 0)
		{
			if (iParam0 == 0)
				return true;
		
			if (func_146(12443, iParam3) != 0)
				if (iParam0 == 1)
					return true;
		}
	
		return false;
	}

	return false;
}

int func_146(int iParam0, int iParam1) // Position - 0x14138 Hash - 0x744E461C ^0x5051D2B7
{
	Hash statHash;
	int outValue;

	if (iParam0 != 15468)
	{
		statHash = func_72(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_147(Player plParam0) // Position - 0x14167 Hash - 0x4D4B5ACC ^0x4D4B5ACC
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845221[plParam0 /*889*/].f_268.f_542 != 0;

	return false;
}

BOOL func_148(Player plParam0) // Position - 0x1418D Hash - 0x4D4B5ACC ^0x4D4B5ACC
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1845221[plParam0 /*889*/].f_268.f_299 != 0;

	return false;
}

int func_149(int iParam0) // Position - 0x141B3 Hash - 0x5A3285E0 ^0x5A3285E0
{
	if (iParam0 == 12)
		return 2;

	return -1;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x141C7 Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_23();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

BOOL func_151() // Position - 0x141E3 Hash - 0xFBE42B2C ^0xFBE42B2C
{
	int i;
	int j;
	int num;
	int num2;
	Hash hash;
	int num3;

	for (j = 0; j < func_149(12); j = j + 1)
	{
		if (!func_145(j, -1, 12, -1, true))
		{
		}
		else
		{
			for (i = 0; i < func_144(j, 12, -1); i = i + 1)
			{
				num = i + func_142(12, j);
				func_141(num, &num2, true);
			
				if (num2 >= 0)
				{
					hash = func_140(num2);
				
					if (func_129(hash, true, num2))
					{
						num3 = func_128(hash);
					
						if (func_127(hash) && num3 != 2 && num3 != 3 && func_124(hash))
							return true;
					}
				}
			}
		}
	}

	return false;
}

void func_152() // Position - 0x14291 Hash - 0x4C466A8F ^0xD9580244
{
	func_153(1, "ShopUI_Title_Mckenzie_Field", "ShopUI_Title_Mckenzie_Field");
	return;
}

void func_153(BOOL bParam0, char* sParam1, char* sParam2) // Position - 0x142A6 Hash - 0x2DD637C7 ^0x2DD637C7
{
	Global_23970 = bParam0;
	func_154(29, sParam1, sParam2);
	return;
}

void func_154(int iParam0, char* sParam1, char* sParam2) // Position - 0x142BD Hash - 0xA300BBFD ^0xA300BBFD
{
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_6623[iParam0 /*16*/], sParam1, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_7680[iParam0 /*16*/], sParam2, 64);
	return;
}

void func_155(char* sParam0) // Position - 0x142E1 Hash - 0xD03AE33A ^0xD6DE91B4
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_1), sParam0, 16);
	Global_23970.f_74 = 0;
	Global_23970.f_75 = 0;
	Global_23970.f_76 = 0;
	Global_23970.f_77 = 0;
	Global_23970.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23970.f_5[i] = 0;
	}

	return;
}

void func_156(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1432C Hash - 0x9D52C17B ^0x9D52C17B
{
	Global_23970.f_5678[0] = bParam0;
	Global_23970.f_5678[1] = bParam1;
	Global_23970.f_5678[2] = bParam2;
	Global_23970.f_5678[3] = bParam3;
	Global_23970.f_5678[4] = bParam4;
	return;
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1436B Hash - 0x9D52C17B ^0x9D52C17B
{
	Global_23970.f_5686[0] = iParam0;
	Global_23970.f_5686[1] = iParam1;
	Global_23970.f_5686[2] = iParam2;
	Global_23970.f_5686[3] = iParam3;
	Global_23970.f_5686[4] = iParam4;
	return;
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x143AA Hash - 0x9D52C17B ^0x9D52C17B
{
	Global_23970.f_5659[0] = iParam0;
	Global_23970.f_5659[1] = iParam1;
	Global_23970.f_5659[2] = iParam2;
	Global_23970.f_5659[3] = iParam3;
	Global_23970.f_5659[4] = iParam4;
	Global_23970.f_5829 = 0;

	if (iParam0 != 0)
		Global_23970.f_5829 = Global_23970.f_5829 + 1;

	if (iParam1 != 0)
		Global_23970.f_5829 = Global_23970.f_5829 + 1;

	if (iParam2 != 0)
		Global_23970.f_5829 = Global_23970.f_5829 + 1;

	if (iParam3 != 0)
		Global_23970.f_5829 = Global_23970.f_5829 + 1;

	if (iParam4 != 0)
		Global_23970.f_5829 = Global_23970.f_5829 + 1;

	return;
}

void func_159(BOOL bParam0, BOOL bParam1) // Position - 0x14454 Hash - 0x23631854 ^0xE06953D
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_23970.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 50; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2696970[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23970.f_4469[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23970.f_4726[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23970.f_4984[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23970.f_5692[i] = 0;
		Global_23970.f_5830[i] = false;
		Global_23970.f_5959[i] = false;
		Global_23970.f_6482[i] = 0f;
		Global_23970.f_6088[i] = false;
		Global_23970.f_6348[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_23970.f_5659[i] = 0;
		Global_23970.f_5671[i] = 0f;
		Global_23970.f_5665[i] = -1f;
		Global_23970.f_5678[i] = false;
		Global_23970.f_5686[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5553[i /*4*/], "", 16);
		Global_23970.f_5610[i] = -1;
		Global_23970.f_5625[i] = 365;
		Global_23970.f_5640[i] = 32;
	}

	for (i = 0; i < 66; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_6623[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_7680[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_23970.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	Global_23970 = false;
	Global_23970.f_5821 = 0;
	Global_23970.f_5822 = 0;
	Global_23970.f_5823 = 0;
	Global_23970.f_5825 = 0;
	Global_23970.f_5826 = 0;
	Global_23970.f_5827 = 0;
	Global_23970.f_5824 = 0;
	Global_23970.f_6477 = 0;
	Global_23970.f_6617 = 0;
	Global_23970.f_6342 = 0;
	Global_23970.f_6341 = 0;
	Global_23970.f_6343 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_5241), "", 24);
	Global_23970.f_5319 = 0;
	Global_23970.f_5320 = 0;
	Global_23970.f_5321 = 0;
	Global_23970.f_5322 = 0;
	Global_23970.f_5323 = 0;
	Global_23970.f_5324 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23970.f_5253[i] = 0;
	}

	Global_23970.f_5325 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4542374.f_21), "", 16);
	Global_4542374.f_61 = 0;
	Global_4542374.f_62 = 0;
	Global_4542374.f_63 = 0;
	Global_4542374.f_64 = 0;
	Global_4542374.f_65 = 0;
	Global_4542374.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4542374.f_25[i] = 0;
	}

	Global_4542374.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_1), "", 16);
	Global_23970.f_5677 = 0f;
	Global_23970.f_74 = 0;
	Global_23970.f_75 = 0;
	Global_23970.f_76 = 0;
	Global_23970.f_77 = 0;
	Global_23970.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23970.f_5[i] = 0;
	}

	Global_23970.f_6347 = 0;
	Global_23970.f_6346 = 0;
	Global_23970.f_6344 = 0;
	Global_23970.f_6345 = 0;
	Global_23970.f_5326 = 0;
	Global_23970.f_5327 = 0;
	Global_23970.f_5828 = 10;
	Global_23970.f_5829 = 0;
	Global_23970.f_6479 = 0f;
	Global_23970.f_6480 = 0f;
	Global_23970.f_6331 = 0;
	Global_23970.f_6332 = 0;
	Global_23970.f_6333 = 0f;
	Global_23970.f_6334 = 0;
	Global_23970.f_6336 = 0;
	Global_23970.f_6335 = 0;
	Global_23970.f_6337 = 0;
	Global_23970.f_6338 = 0;
	Global_23970.f_6339 = 0;
	Global_23970.f_6340 = 0;
	Global_23970.f_9112 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_23970.f_6611[i] = -1;
		Global_23970.f_6614[i] = -1;
	}

	Global_23970.f_5684 = 0f;
	Global_23970.f_5655 = 0;
	Global_23970.f_5685 = 0;

	for (i = 0; i < Global_23970.f_6618; i = i + 1)
	{
		Global_23970.f_6618[i] = 0;
	}

	Global_23970.f_9091 = 0;
	Global_23970.f_9086 = 0;
	Global_23970.f_9096 = 0;
	Global_23970.f_9101 = 0;
	Global_23970.f_9106 = 0;
	Global_23970.f_9108 = 0;
	Global_23970.f_9114 = 0;
	Global_23967 = 0.05f;
	Global_23968 = 0.05f;
	Global_23969 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (bParam0)
		Global_23969 = 0.225f * (1.7777778f / aspectRatio);
	else if (aspectRatio < 1.77777f)
		Global_23969 = 0.225f * (1.7777778f / aspectRatio);
	else
		Global_23969 = 0.225f;

	return;
}

void func_160(int iParam0) // Position - 0x1493E Hash - 0x82BF3E5E ^0x82BF3E5E
{
	Global_23970.f_5828 = iParam0;
	return;
}

void func_161() // Position - 0x1494E Hash - 0x8E83F916 ^0x5F4C0416
{
	BOOL flag;
	BOOL isDisabledControlPressed;

	iLocal_64 = 0;
	iLocal_65 = 0;
	bLocal_66 = false;
	bLocal_67 = false;

	if (!bLocal_68)
	{
		func_264();
		flag = false;
		isDisabledControlPressed = false;
	
		if (func_263() > false)
		{
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN) || bLocal_67 && func_262() || bLocal_67)
			{
				bLocal_78.f_1 = bLocal_78.f_1 + 1;
			
				if (bLocal_78.f_1 > func_263() - 1)
					bLocal_78.f_1 = 0;
			
				func_63(bLocal_78.f_1, true, 1);
				Global_1942479 = true;
				iLocal_71 = 200;
				_STOPWATCH_DESTROY(&uLocal_72);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_UP) || bLocal_66 && func_262() || bLocal_66)
			{
				bLocal_78.f_1 = bLocal_78.f_1 - 1;
			
				if (bLocal_78.f_1 < 0)
					bLocal_78.f_1 = func_263() - 1;
			
				func_63(bLocal_78.f_1, true, 1);
				Global_1942479 = true;
				iLocal_71 = 200;
				_STOPWATCH_DESTROY(&uLocal_72);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
				isDisabledControlPressed = PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_WEAPON);
			else
				isDisabledControlPressed = PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION);
		
			if (func_261() || iLocal_64)
			{
				if (func_55())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					flag = true;
					func_260();
				}
			}
			else if (isDisabledControlPressed)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /*Filter List*/, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_164();
			}
		}
	
		if (!flag && !isDisabledControlPressed)
		{
			if (func_163() || iLocal_65)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_162();
			}
		}
	}

	return;
}

void func_162() // Position - 0x14AD7 Hash - 0xD54437B7 ^0xCFF5D444
{
	if (iLocal_63 == 0)
	{
		func_292();
	}
	else if (iLocal_63 == 1)
	{
		bLocal_78.f_1 = 0;
		Global_1942479 = true;
		bLocal_70 = true;
		iLocal_63 = 0;
	}

	return;
}

int func_163() // Position - 0x14B02 Hash - 0x8366F02E ^0xEC487588
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL) && !PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL))
		return 1;

	return 0;
}

void func_164() // Position - 0x14B56 Hash - 0x6961FFCB ^0xE0170D76
{
	if (iLocal_63 == 0)
	{
		if (bLocal_78.f_1 == 1)
		{
			if (func_258(true))
			{
				MISC::SET_BIT(&(Global_2739811.f_971), 3);
				func_245();
				func_159(false, false);
				func_292();
			}
		}
		else if (bLocal_78.f_1 == 2)
		{
			if (func_258(false))
			{
				MISC::SET_BIT(&(Global_2739811.f_971), 3);
				func_245();
				func_159(false, false);
				func_292();
			}
		}
	}
	else if (iLocal_63 == 1)
	{
		if (func_165())
		{
			MISC::SET_BIT(&(Global_2739811.f_971), 3);
			func_245();
			func_159(false, false);
			func_292();
		}
	}

	bLocal_70 = true;
	return;
}

BOOL func_165() // Position - 0x14BE8 Hash - 0xC0EABFDC ^0x8204828D
{
	BOOL flag;
	var unk;

	flag = false;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && uLocal_85[bLocal_78.f_1] >= 0)
	{
		flag = true;
	
		if (!func_185(uLocal_85[bLocal_78.f_1]))
			flag = false;
	}

	if (flag)
	{
		Global_2739811.f_1016 = uLocal_85[bLocal_78.f_1];
	
		if (Global_2739811.f_1016 != -1)
		{
			Global_2739811.f_954 = 1;
			Global_2739811.f_968 = 1;
			MISC::SET_BIT(&(Global_2739811.f_971), 0);
			MISC::SET_BIT(&(Global_2739811.f_971), 1);
			MISC::SET_BIT(&(Global_2739811.f_971), 2);
			_STOPWATCH_RESET(&Global_2685658.f_4343.f_248[48 /*2*/], true, false);
			func_172(48, -1, -1);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	
		switch (iLocal_76)
		{
			case 5:
				func_54("PIM_HRPV7" /*Delivery in progress.*/, 2000, 0);
				break;
		
			case 6:
				func_54("PIM_HRPA2A" /*Your Personal Aircraft is already nearby.*/, 2000, 0);
				break;
		
			case 7:
				func_54("PIM_HTTV6" /*Delivery not currently available.*/, 2000, 0);
				break;
		
			case 4:
				unk = { func_167(func_168(48), false, false) };
				func_54("CONT_REQ_CD" /*Next request available in ~a~.*/, 2000, 0);
				func_166(&unk);
				break;
		}
	
		_STOPWATCH_DESTROY(&(bLocal_78.f_5));
		bLocal_74 = true;
	}

	return false;
}

void func_166(char* sParam0) // Position - 0x14D25 Hash - 0x180E463B ^0x180E463B
{
	if (Global_23970.f_5322 >= 3 || Global_23970.f_5319 >= 4)
		return;

	Global_23970.f_5253[Global_23970.f_5319] = 5;
	Global_23970.f_5319 = Global_23970.f_5319 + 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_5270[Global_23970.f_5322 /*16*/], sParam0, 64);
	Global_23970.f_5322 = Global_23970.f_5322 + 1;
	return;
}

struct<4> func_167(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14D86 Hash - 0x8FAACDEB ^0xD81AA7D6
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);

	if (iParam0 > 0 || bParam2 && iParam0 == 0)
	{
		num5 = iParam0;
		num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(num5 / 3600000));
		num5 = num5 - (num * 3600000);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(num5 / 60000));
		num5 = num5 - (num2 * 60000);
		num3 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(num5 / 1000));
		num5 = num5 - (num3 * 1000);
		num4 = num5;
	
		if (num > 0)
		{
			TEXT_LABEL_APPEND_INT(&unk, num, 16);
			TEXT_LABEL_APPEND_STRING(&unk, ":", 16);
		
			if (num2 < 10)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "0", 16);
				TEXT_LABEL_APPEND_INT(&unk, num2, 16);
			}
			else
			{
				TEXT_LABEL_APPEND_INT(&unk, num2, 16);
			}
		
			TEXT_LABEL_APPEND_STRING(&unk, ":", 16);
		
			if (num3 < 10)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "0", 16);
				TEXT_LABEL_APPEND_INT(&unk, num3, 16);
			}
			else
			{
				TEXT_LABEL_APPEND_INT(&unk, num3, 16);
			}
		}
		else
		{
			if (num2 < 10)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "0", 16);
				TEXT_LABEL_APPEND_INT(&unk, num2, 16);
			}
			else
			{
				TEXT_LABEL_APPEND_INT(&unk, num2, 16);
			}
		
			TEXT_LABEL_APPEND_STRING(&unk, ":", 16);
		
			if (num3 < 10)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "0", 16);
				TEXT_LABEL_APPEND_INT(&unk, num3, 16);
			}
			else
			{
				TEXT_LABEL_APPEND_INT(&unk, num3, 16);
			}
		
			if (bParam1)
			{
				TEXT_LABEL_APPEND_STRING(&unk, ":", 16);
			
				if (num4 > 100)
				{
					TEXT_LABEL_APPEND_INT(&unk, num4, 16);
				}
				else if (num4 > 10)
				{
					TEXT_LABEL_APPEND_STRING(&unk, "0", 16);
					TEXT_LABEL_APPEND_INT(&unk, num4, 16);
				}
				else
				{
					TEXT_LABEL_APPEND_STRING(&unk, "00", 16);
					TEXT_LABEL_APPEND_INT(&unk, num4, 16);
				}
			}
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "---", 16);
	}

	return unk;
}

int func_168(int iParam0) // Position - 0x14EFA Hash - 0x85F26685 ^0x31FF0495
{
	int num;
	int num2;

	num = -1;

	if (_STOPWATCH_IS_INITIALIZED(&Global_2685658.f_4343.f_248[iParam0 /*2*/]))
	{
		if (!_STOPWATCH_HAS_TIME_PASSED(&Global_2685658.f_4343.f_248[iParam0 /*2*/], func_170(iParam0), true))
		{
			num2 = _STOPWATCH_GET_TIME_PASSED(&Global_2685658.f_4343.f_248[iParam0 /*2*/], true, false);
			num2 = func_170(iParam0) - num2;
			return num2;
		}
	}

	return num;
}

int _STOPWATCH_GET_TIME_PASSED(int pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x14F5C Hash - 0xAB71C5AE ^0x10186D95
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

int func_170(int iParam0) // Position - 0x14FA3 Hash - 0xBB06FECD ^0xBB06FECD
{
	return Global_2685658.f_4343.f_413[iParam0];
}

BOOL _STOPWATCH_IS_INITIALIZED(int iParam0) // Position - 0x14FB9 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return iParam0->f_1;
}

void func_172(int iParam0, int iParam1, int iParam2) // Position - 0x14FC5 Hash - 0x98E03307 ^0x98E03307
{
	if (iParam2 != -1)
		Global_2685658.f_4343.f_413[iParam0] = Global_2685658.f_4343.f_413[iParam0] + iParam2;
	else if (iParam1 != -1)
		Global_2685658.f_4343.f_413[iParam0] = iParam1;
	else
		Global_2685658.f_4343.f_413[iParam0] = func_173(iParam0);

	return;
}

int func_173(int iParam0) // Position - 0x15022 Hash - 0x38E9EEC9 ^0xA03CE2B6
{
	switch (iParam0)
	{
		case 0:
			return 300000;
	
		case 1:
			return 0;
	
		case 2:
			return 600000;
	
		case 3:
			return 600000;
	
		case 4:
			return 600000;
	
		case 5:
			return 2880000;
	
		case 6:
			return 300000;
	
		case 8:
			return 300000;
	
		case 9:
			return 300000;
	
		case 10:
			return 600000;
	
		case 11:
			return 300000;
	
		case 12:
			return 900000;
	
		case 13:
			return 300000;
	
		case 14:
			return 0;
	
		case 15:
			return 180000;
	
		case 16:
			return 0;
	
		case 17:
			return 180000;
	
		case 18:
			return 180000;
	
		case 19:
			return 180000;
	
		case 20:
			return 300000;
	
		case 21:
			return 180000;
	
		case 22:
			return func_183();
	
		case 23:
			return func_174();
	
		case 24:
			return func_174();
	
		case 25:
			return func_174();
	
		case 26:
			return func_174();
	
		case 57:
			return func_174();
	
		case 35:
			return 480000;
	
		case 36:
			return 180000;
	
		case 80:
			return 0;
	
		case 45:
		case 7:
		case 48:
			if (Global_2739811.f_955 == 1)
				return Global_262145.f_21289;
			else if (Global_2739811.f_968 == true)
				return Global_262145.f_22371;
			else
				return Global_262145.f_19018;
			break;
	
		case 81:
			return *Global_262145.f_36139;
	
		case 53:
		case 54:
		case 55:
		case 56:
			return Global_262145.f_24068;
	
		case 47:
			return Global_262145.f_20906;
	
		case 46:
			return Global_262145.f_21286;
	
		case 49:
			return Global_262145.f_22743;
	
		case 79:
			return Global_262145.f_22744;
	
		case 52:
			return Global_262145.f_24266;
	
		case 65:
			return Global_262145.f_24282;
	
		case 66:
			return Global_262145.f_24283;
	
		case 67:
			return Global_262145.f_30224;
	
		case 77:
			return Global_262145.f_21573;
	
		case 78:
			return Global_262145.f_21572;
	
		case 39:
			return 0;
	
		case 40:
			return 0;
	
		case 41:
			return 0;
	
		case 42:
			return 0;
	
		case 50:
			return 1800000;
	
		case 58:
			return Global_262145.f_25373;
	
		case 62:
			return Global_262145.f_25374;
	
		case 59:
			return Global_262145.f_27933;
	
		case 60:
			return Global_262145.f_27932;
	
		case 63:
			return Global_262145.f_28760;
	
		case 64:
			return 180000;
	
		case 71:
			return Global_262145.f_25374;
	
		case 72:
			return Global_262145.f_31112;
	
		case 73:
			return Global_262145.f_31114;
	
		case 74:
			return Global_262145.f_31116;
	
		case 75:
			return Global_262145.f_31118;
	
		case 76:
			return Global_262145.f_31119;
	}

	return 0;
}

int func_174() // Position - 0x15425 Hash - 0x8A35F3D4 ^0xA4D59660
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(46), -1, false, 0) || func_175(PLAYER::PLAYER_ID()) == 194)
		return Global_262145.f_11942;

	return 0;
}

int func_175(Player plParam0) // Position - 0x15459 Hash - 0x5EA8DF5A ^0xEE8D593B
{
	if (func_24(plParam0))
		if (func_176(plParam0, false))
			return Global_1887549[plParam0 /*611*/].f_10.f_33;

	return -1;
}

BOOL func_176(Player plParam0, BOOL bParam1) // Position - 0x15485 Hash - 0x3654624B ^0x97E7BA1
{
	if (func_24(plParam0))
		if (Global_1887549[plParam0 /*611*/].f_10.f_33 != -1 || bParam1 && Global_1887549[plParam0 /*611*/].f_10.f_32 != -1)
			return true;

	return false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x154C9 Hash - 0xA17D549C ^0xA32C9EE1
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
	
		case 32:
			return "AM_JOYRIDER";
	
		case 33:
			return "AM_PLANE_TAKEDOWN";
	
		case 34:
			return "AM_DISTRACT_COPS";
	
		case 35:
			return "AM_DESTROY_VEH";
	
		case 36:
			return "AM_HOT_TARGET";
	
		case 37:
			return "AM_KILL_LIST";
	
		case 38:
			return "AM_TIME_TRIAL";
	
		case 39:
			return "AM_CP_COLLECTION";
	
		case 40:
			return "AM_CHALLENGES";
	
		case 41:
			return "AM_PENNED_IN";
	
		case 42:
			return "AM_PASS_THE_PARCEL";
	
		case 43:
			return "AM_HOT_PROPERTY";
	
		case 44:
			return "AM_DEAD_DROP";
	
		case 45:
			return "AM_KING_OF_THE_CASTLE";
	
		case 46:
			return "AM_CRIMINAL_DAMAGE";
	
		case 47:
			return "AM_HUNT_THE_BEAST";
	
		case 48:
			return "GB_LIMO_ATTACK";
	
		case 49:
			return "GB_DEATHMATCH";
	
		case 50:
			return "GB_STEAL_VEH";
	
		case 51:
			return "GB_POINT_TO_POINT";
	
		case 52:
			return "GB_TERMINATE";
	
		case 53:
			return "GB_YACHT_ROB";
	
		case 54:
			return "GB_BELLYBEAST";
	
		case 55:
			return "GB_FIVESTAR";
	
		case 56:
			return "GB_ROB_SHOP";
	
		case 57:
			return "GB_COLLECT_MONEY";
	
		case 58:
			return "GB_ASSAULT";
	
		case 59:
			return "GB_VEH_SURV";
	
		case 60:
			return "GB_SIGHTSEER";
	
		case 61:
			return "GB_FLYING_IN_STYLE";
	
		case 62:
			return "GB_FINDERSKEEPERS";
	
		case 63:
			return "GB_HUNT_THE_BOSS";
	
		case 64:
			return "GB_CARJACKING";
	
		case 65:
			return "GB_HEADHUNTER";
	
		case 66:
			return "GB_CONTRABAND_BUY";
	
		case 67:
			return "GB_CONTRABAND_SELL";
	
		case 68:
			return "GB_CONTRABAND_DEFEND";
	
		case 69:
			return "GB_AIRFREIGHT";
	
		case 70:
			return "GB_CASHING_OUT";
	
		case 71:
			return "GB_SALVAGE";
	
		case 72:
			return "GB_FRAGILE_GOODS";
	
		case 239:
			return "dont_cross_the_line";
	
		case 242:
			return "grid_arcade_cabinet";
	
		case 243:
			return "scroll_arcade_cabinet";
	
		case 244:
			return "example_arcade";
	
		case 245:
			return "road_arcade";
	
		case 250:
			return "Degenatron Games";
	
		case 246:
			return "gunslinger_arcade";
	
		case 251:
			return "ggsm_arcade";
	
		case 247:
			return "wizard_arcade";
	
		case 248:
			return "AM_CASINO_LIMO";
	
		case 249:
			return "AM_CASINO_LUXURY_CAR";
	
		case 252:
			return "puzzle";
	
		case 253:
			return "camhedz_arcade";
	
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
	
		case 84:
			return "GB_BIKER_JOUST";
	
		case 83:
			return "GB_BIKER_RACE_P2P";
	
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
	
		case 86:
			return "";
	
		case 87:
			return "GB_BIKER_BAD_DEAL";
	
		case 88:
			return "GB_BIKER_RESCUE_CONTACT";
	
		case 89:
			return "GB_BIKER_LAST_RESPECTS";
	
		case 90:
			return "GB_BIKER_CONTRACT_KILLING";
	
		case 91:
			return "GB_BIKER_CONTRABAND_SELL";
	
		case 92:
			return "GB_BIKER_CONTRABAND_DEFEND";
	
		case 93:
			return "GB_ILLICIT_GOODS_RESUPPLY";
	
		case 94:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
	
		case 102:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
	
		case 95:
			return "GB_BIKER_RIPPIN_IT_UP";
	
		case 75:
			return "GB_PLOUGHED";
	
		case 76:
			return "GB_FULLY_LOADED";
	
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
	
		case 78:
			return "GB_TRANSPORTER";
	
		case 79:
			return "GB_FORTIFIED";
	
		case 80:
			return "GB_VELOCITY";
	
		case 81:
			return "GB_RAMPED_UP";
	
		case 82:
			return "GB_STOCKPILING";
	
		case 96:
			return "GB_BIKER_FREE_PRISONER";
	
		case 97:
			return "GB_BIKER_SAFECRACKER";
	
		case 98:
			return "GB_BIKER_STEAL_BIKES";
	
		case 99:
			return "GB_BIKER_SEARCH_AND_DESTROY";
	
		case 100:
			return "AM_PENNED_IN";
	
		case 101:
			return "GB_BIKER_STAND_YOUR_GROUND";
	
		case 103:
			return "GB_BIKER_DESTROY_VANS";
	
		case 104:
			return "GB_BIKER_BURN_ASSETS";
	
		case 105:
			return "GB_BIKER_SHUTTLE";
	
		case 106:
			return "GB_BIKER_WHEELIE_RIDER";
	
		case 107:
		case 108:
			return "GB_GUNRUNNING";
	
		case 109:
			return "GB_GUNRUNNING_DEFEND";
	
		case 110:
		case 111:
		case 112:
			return "GB_SMUGGLER";
	
		case 113:
			return "GB_GANGOPS";
	
		case 114:
			return "BUSINESS_BATTLES";
	
		case 115:
			return "BUSINESS_BATTLES_SELL";
	
		case 116:
			return "BUSINESS_BATTLES_DEFEND";
	
		case 117:
			return "GB_SECURITY_VAN";
	
		case 118:
			return "GB_TARGET_PURSUIT";
	
		case 119:
			return "GB_JEWEL_STORE_GRAB";
	
		case 120:
			return "GB_BANK_JOB";
	
		case 121:
			return "GB_DATA_HACK";
	
		case 122:
			return "GB_INFILTRATION";
	
		case 123:
			return "BUSINESS_BATTLES_DEFEND";
	
		case 124:
			return "BUSINESS_BATTLES_SELL";
	
		case 125:
			return "GB_CASINO";
	
		case 126:
			return "GB_CASINO_HEIST";
	
		case 127:
			return "fm_content_business_battles";
	
		case 151:
			return "fm_content_crime_scene";
	
		case 128:
			return "fm_content_drug_vehicle";
	
		case 129:
			return "fm_content_movie_props";
	
		case 130:
			return "fm_content_island_heist";
	
		case 131:
			return "fm_content_island_dj";
	
		case 133:
			return "fm_content_golden_gun";
	
		case 3:
			return "AM_CR_SELL_DRUGS";
	
		case 12:
			return "AM_Safehouse";
	
		case 16:
			return "MG_RACE_TO_POINT";
	
		case 18:
			return "AM_CRATE_DROP";
	
		case 28:
			return "AM_AMMO_DROP";
	
		case 29:
			return "AM_VEHICLE_DROP";
	
		case 30:
			return "AM_BRU_BOX";
	
		case 31:
			return "AM_GA_PICKUPS";
	
		case 26:
			return "AM_backup_heli";
	
		case 27:
			return "AM_airstrike";
	
		case 17:
			return "AM_PI_MENU";
	
		case 208:
			return "AM_BOAT_TAXI";
	
		case 209:
			return "AM_HELI_TAXI";
	
		case 19:
			return "AM_IMP_EXP";
	
		case 22:
			return "AM_TAXI";
	
		case 23:
			return "AM_TAXI_LAUNCHER";
	
		case 24:
			return "AM_GANG_CALL";
	
		case 25:
			return "heli_gun";
	
		case 222:
			return "am_rollercoaster";
	
		case 223:
			return "am_ferriswheel";
	
		case 224:
			return "AM_LAUNCHER";
	
		case 225:
			return "AM_DAILY_OBJECTIVES";
	
		case 4:
			return "AM_STRIPPER";
	
		case 13:
			return "AM_Hitchhiker";
	
		case 5:
			return "stripclub_mp";
	
		case 6:
			return "AM_ArmWrestling";
	
		case 8:
			return "AM_Tennis";
	
		case 9:
			return "AM_Darts";
	
		case 7:
			return "AM_ImportExport";
	
		case 10:
			return "AM_FistFight";
	
		case 11:
			return "AM_DropOffHooker";
	
		case 15:
			return "AM_DOORS";
	
		case 20:
			return "FM_INTRO";
	
		case 21:
			return "AM_PROSTITUTE";
	
		case 210:
			return "fm_hold_up_tut";
	
		case 211:
			return "AM_CAR_MOD_TUT";
	
		case 212:
			return "AM_CONTACT_REQUESTS";
	
		case 213:
			return "am_mission_launch";
	
		case 214:
			return "am_npc_invites";
	
		case 215:
			return "am_lester_cut";
	
		case 218:
			return "AM_VEHICLE_SPAWN";
	
		case 219:
			return "am_ronTrevor_Cut";
	
		case 220:
			return "AM_ARMYBASE";
	
		case 221:
			return "AM_PRISON";
	
		case 226:
			return "AM_ArmWrestling";
	
		case 233:
			return "fm_Bj_race_controler";
	
		case 227:
			return "AM_Darts";
	
		case 234:
			return "fm_deathmatch_controler";
	
		case 232:
			return "FM_Impromptu_DM_Controler";
	
		case 235:
			return "fm_hideout_controler";
	
		case 228:
			return "golf_mp";
	
		case 231:
			return "Pilot_School_MP";
	
		case 236:
			return func_179();
	
		case 237:
			return "FM_Race_Controler";
	
		case 229:
			return "Range_Modern_MP";
	
		case 238:
			if (func_178(*Global_4718592.f_187633))
				return "FM_Survival_Controller";
			else
				return "FM_Horde_Controler";
			break;
	
		case 230:
			return "tennis_network_mp";
	
		case 216:
			return "am_heist_int";
	
		case 217:
			return "am_lowrider_int";
	
		case 240:
			return "am_darts_apartment";
	
		case 241:
			return "AM_Armwrestling_Apartment";
	
		case 254:
			return "SCTV";
	
		case 0:
			return "";
	}

	switch (iParam0)
	{
		case 132:
			return "AM_ISLAND_BACKUP_HELI";
	
		case 134:
			return "fm_content_tuner_robbery";
	
		case 135:
			return "fm_content_vehicle_list";
	
		case 136:
			return "tuner_sandbox_activity";
	
		case 137:
			return "fm_content_auto_shop_delivery";
	
		case 138:
			return "fm_content_payphone_hit";
	
		case 139:
			return "fm_content_security_contract";
	
		case 140:
			return "fm_content_vip_contract_1";
	
		case 141:
			return "fm_content_metal_detector";
	
		case 142:
			return "am_agency_suv";
	
		case 143:
			return "fm_content_phantom_car";
	
		case 144:
			return "fm_content_slasher";
	
		case 145:
			return "fm_content_sightseeing";
	
		case 146:
			return "fm_content_smuggler_trail";
	
		case 148:
			return "fm_content_skydive";
	
		case 149:
			return "fm_content_cerberus";
	
		case 147:
			return "fm_content_smuggler_plane";
	
		case 150:
			return "fm_content_parachuter";
	
		case 152:
			return "fm_content_bar_resupply";
	
		case 153:
			return "fm_content_bike_shop_delivery";
	
		case 154:
			return "fm_content_clubhouse_contracts";
	
		case 155:
			return "fm_content_cargo";
	
		case 156:
			return "fm_content_export_cargo";
	
		case 157:
			return "fm_content_ammunation";
	
		case 158:
			return "fm_content_gunrunning";
	
		case 159:
			return "fm_content_source_research";
	
		case 160:
			return "fm_content_club_management";
	
		case 161:
			return "fm_content_club_odd_jobs";
	
		case 162:
			return "fm_content_club_source";
	
		case 163:
			return "fm_content_convoy";
	
		case 164:
			return "fm_content_robbery";
	
		case 165:
			return "fm_content_acid_lab_setup";
	
		case 166:
			return "fm_content_acid_lab_source";
	
		case 167:
			return "fm_content_acid_lab_sell";
	
		case 168:
			return "fm_content_drug_lab_work";
	
		case 169:
			return "fm_content_stash_house";
	
		case 170:
			return "fm_content_taxi_driver";
	
		case 171:
			return "fm_content_xmas_mugger";
	
		case 172:
			return "fm_content_bank_shootout";
	
		case 173:
			return "fm_content_armoured_truck";
	
		case 174:
			return "fm_content_ghosthunt";
	
		case 175:
			return "fm_content_ufo_abduction";
	
		case 176:
			return "fm_content_smuggler_sell";
	
		case 177:
			return "fm_content_smuggler_resupply";
	
		case 178:
			return "fm_content_smuggler_ops";
	
		case 179:
			return "fm_content_bicycle_time_trial";
	
		case 180:
			return "fm_content_possessed_animals";
	
		case 181:
			return "fm_content_chop_shop_delivery";
	
		case 182:
			return "fm_content_xmas_truck";
	
		case 183:
			return "fm_content_tow_truck_work";
	
		case 184:
			return "fm_content_vehrob_scoping";
	
		case 185:
			return "fm_content_vehrob_task";
	
		case 186:
			return "fm_content_vehrob_prep";
	
		case 187:
			return "fm_content_vehrob_disrupt";
	
		case 188:
			return "fm_content_vehrob_cargo_ship";
	
		case 189:
			return "fm_content_vehrob_police";
	
		case 190:
			return "fm_content_vehrob_arena";
	
		case 191:
			return "fm_content_vehrob_casino_prize";
	
		case 192:
			return "fm_content_vehrob_submarine";
	
		case 193:
			return "fm_content_bounty_targets";
	
		case 194:
			return "fm_content_daily_bounty";
	
		case 195:
			return "fm_content_dispatch_work";
	
		case 196:
			return "fm_content_pizza_delivery";
	
		case 197:
			return "fm_content_hacker_cargo_finale";
	
		case 198:
			return "fm_content_hacker_zancudo_fin";
	
		case 199:
			return "fm_content_hacker_house_finale";
	
		case 200:
			return "fm_content_hacker_whistle_fin";
	
		case 201:
			return "fm_content_hacker_cargo_prep";
	
		case 202:
			return "fm_content_hacker_zancudo_prep";
	
		case 203:
			return "fm_content_hacker_house_prep";
	
		case 204:
			return "fm_content_hacker_whistle_prep";
	
		case 205:
			return "fm_content_arms_trafficking";
	
		case 206:
			return "AM_MP_HOTWIRE";
	
		case 207:
			return "fm_content_community_outreach";
	
		default:
		
	}

	return "";
}

BOOL func_178(int iParam0) // Position - 0x161BB Hash - 0x88F24670 ^0x21E76F22
{
	return iParam0 == 998;
}

char* func_179() // Position - 0x161C9 Hash - 0x11C82548 ^0xD76E515F
{
	if (func_182())
		return "Public_Mission_Controller";

	if (func_180())
		return "fm_mission_controller";

	return "fm_mission_controller_2020";
}

BOOL func_180() // Position - 0x161F1 Hash - 0x353CEA88 ^0x353CEA88
{
	if (func_181(2))
		return false;

	return true;
}

BOOL func_181(int iParam0) // Position - 0x16206 Hash - 0x3650ADA8 ^0x998B1D15
{
	return *Global_4718592.f_187634 >= iParam0;
}

BOOL func_182() // Position - 0x1621B Hash - 0x5B5C8F83 ^0x9C00F8AC
{
	if (Global_4718592 == 0 && Global_4718592.f_2 == 14)
		return true;

	return false;
}

int func_183() // Position - 0x1623F Hash - 0x8A35F3D4 ^0xA4D59660
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(46), -1, false, 0) || func_175(PLAYER::PLAYER_ID()) == 194)
		return Global_262145.f_11708;

	return 0;
}

void _STOPWATCH_RESET(int pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x16273 Hash - 0x6A4AB354 ^0xD9372BF4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

BOOL func_185(int iParam0) // Position - 0x162B0 Hash - 0xF403CEE7 ^0x1BAEB428
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_243() || IS_BIT_SET(Global_4718592.f_18, 18))
		{
			iLocal_76 = 7;
			return false;
		}
	}

	if (func_237(iParam0))
	{
		iLocal_76 = 7;
		return false;
	}

	if (func_168(48) > 0)
	{
		iLocal_76 = 4;
		return false;
	}

	if (Global_2739811.f_968 || Global_2739811.f_954)
	{
		iLocal_76 = 5;
		return false;
	}

	if (Global_2739811.f_956 || Global_2739811.f_964 || Global_2739811.f_969 || Global_2739811.f_970 || Global_2739811.f_991 || Global_2739811.f_1003 || Global_2739811.f_357 || Global_2739811.f_358 || Global_2739811.f_1025 || IS_BIT_SET(Global_2739811.f_972, 0) || IS_BIT_SET(Global_2739811.f_972, 1))
	{
		iLocal_76 = 7;
		return false;
	}

	if (ENTITY::DOES_ENTITY_EXIST(func_235()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_235(), false))
		{
			if (func_127(ENTITY::GET_ENTITY_MODEL(func_235())))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_235(), true), _GET_PLAYER_COORDS(PLAYER::PLAYER_ID())) < 1500f)
				{
					iLocal_76 = 6;
					return false;
				}
			}
		}
	}

	if (!func_190(7))
	{
		iLocal_76 = 7;
		return false;
	}

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_189(*Global_4718592.f_128476))
		{
			iLocal_76 = 7;
			return false;
		}
	}

	if (func_186())
	{
		iLocal_76 = 7;
		return false;
	}

	if (iParam0 >= 0 && IS_BIT_SET(Global_1586535[iParam0 /*143*/].f_104, 10))
	{
		iLocal_76 = 3;
		return false;
	}

	if (iParam0 >= 0 && IS_BIT_SET(Global_1586535[iParam0 /*143*/].f_104, 1))
	{
		iLocal_76 = 2;
		return false;
	}

	return true;
}

BOOL func_186() // Position - 0x1647B Hash - 0xDA2E4073 ^0x3D01F912
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return func_188();

	return func_187(*Global_4718592.f_128476);
}

BOOL func_187(int iParam0) // Position - 0x1649F Hash - 0x4813BA45 ^0x4813BA45
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_262145.f_4707[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_188() // Position - 0x164D9 Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2684718.f_19;
}

BOOL func_189(var uParam0) // Position - 0x164E7 Hash - 0xD1C49931 ^0xD1C49931
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (uParam0 == Global_262145.f_9530[i])
			return true;
	}

	return false;
}

BOOL func_190(int iParam0) // Position - 0x16517 Hash - 0x79CC27E7 ^0x44C828E5
{
	int playerTeam;
	int num;

	if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 122)
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (playerTeam >= 0 && playerTeam <= 3)
	{
		if (IS_BIT_SET(Global_4718592.f_11, 30) && Global_4718592.f_121784[playerTeam] != 0 || IS_BIT_SET(*Global_4718592.f_180891, 10) && Global_1685265 != 0 && func_233(playerTeam))
			return false;
	
		if (func_232())
			return false;
	}

	switch (iParam0)
	{
		case 10:
			if (func_230(16))
				return false;
		
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 20))
				return false;
		
			if (func_229())
				return true;
			else if (func_228(PLAYER::PLAYER_ID()) || func_227())
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				if (Global_4456449.f_34 == 1)
					return true;
				else
					return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
			break;
	
		case 11:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 21))
				return false;
		
			if (func_229())
				return true;
			else if (func_228(PLAYER::PLAYER_ID()) || func_227())
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				if (Global_4456449.f_34 == 1)
					return true;
				else
					return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else if (func_221(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 8:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 16))
				return false;
		
			if (func_227())
				return false;
		
			if (func_228(PLAYER::PLAYER_ID()) || func_229())
			{
				if (!func_220() && !IS_BIT_SET(Global_4718592.f_40, 3))
				{
					return false;
				}
				else if (func_219() || func_218())
				{
					num = func_212(-1);
				
					if (num == joaat("WEAPON_UNARMED") || num == joaat("WEAPON_RPG") || num == joaat("WEAPON_GRENADELAUNCHER") || func_211(num, false) || func_210(num))
						return false;
				
					return true;
				}
				else
				{
					return true;
				}
			}
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return true;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
			break;
	
		case 0:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 29))
				return false;
		
			if (func_228(PLAYER::PLAYER_ID()) || func_229() || func_227())
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (Global_1882085 > 0)
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return true;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
			break;
	
		case 9:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 30))
				return false;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 32 || func_228(PLAYER::PLAYER_ID()) || func_229() || func_227() || func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else if (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 13:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 19))
				return false;
		
			if (func_228(PLAYER::PLAYER_ID()) || func_229() || func_227() || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 32)
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else if (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 7:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || func_207(*Global_4718592.f_187633) || func_206())
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 45:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 80:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || func_206() || func_207(*Global_4718592.f_187633) || func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 53:
		case 54:
		case 55:
		case 56:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 46:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_204(Global_2672939.f_4.f_16, 25))
				return false;
		
			if (func_175(Global_2672939.f_4.f_16) == 318)
				return false;
			break;
	
		case 49:
			if (func_203())
			{
				if (func_202() && !func_198())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_2739811.f_314) && !func_196(Global_2739811.f_314, 0, false, false, false, false, true, false, true))
						return false;
				
					return true;
				}
			}
			else if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
			{
				return false;
			}
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_204(Global_2672939.f_4.f_16, 25))
				return false;
		
			if (func_175(Global_2672939.f_4.f_16) == 318)
				return false;
			break;
	
		case 52:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_204(Global_2672939.f_4.f_16, 25))
				return false;
		
			if (func_175(Global_2672939.f_4.f_16) == 318)
				return false;
			break;
	
		case 65:
		case 66:
		case 67:
		case 77:
		case 78:
			if (func_229() || func_227() || func_228(PLAYER::PLAYER_ID()) || func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_205())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				return false;
			break;
	
		case 22:
			if (func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || func_228(PLAYER::PLAYER_ID()) || func_229() || func_227())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else if (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID()))
					return false;
				else if (IS_BIT_SET(*Global_4718592.f_180891, 31))
					return false;
				else
					return true;
			break;
	
		case 23:
		case 24:
		case 25:
		case 26:
		case 57:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 18))
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()) || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || func_228(PLAYER::PLAYER_ID()) || func_229() || func_227())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else if (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
			break;
	
		case 12:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 15))
				return false;
		
			if (func_228(PLAYER::PLAYER_ID()))
				if (func_229() || func_227() || func_219() || !func_220() && !IS_BIT_SET(Global_4718592.f_40, 3))
					return false;
				else
					return true;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 0 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 4)
				return false;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_175(PLAYER::PLAYER_ID()) == 148)
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
			break;
	
		case 2:
			if (func_226(PLAYER::PLAYER_ID()) || func_228(PLAYER::PLAYER_ID()) || func_229() || func_227())
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				return false;
			break;
	
		case 1:
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 0 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 4 || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3 || func_228(PLAYER::PLAYER_ID()) || func_229() || func_227() || func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
			break;
	
		case 14:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 17))
				return false;
		
			if (func_229() || Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 32)
				return false;
		
			if (func_228(PLAYER::PLAYER_ID()))
			{
				if (!func_220())
					return false;
			
				if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 5 && !func_227() && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 148)
					return true;
			}
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return true;
				else
					return true;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 0 && Global_4718592.f_3526 > 1)
				return true;
		
			return false;
	
		case 6:
			if (func_229())
				return true;
		
			if (func_228(PLAYER::PLAYER_ID()))
				return false;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 0)
				if (Global_4718592.f_3526 <= 1)
					return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return true;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return false;
			break;
	
		case 20:
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && IS_BIT_SET(*Global_4718592.f_180891, 27))
				return false;
		
			if (func_229())
				return true;
		
			if (func_228(PLAYER::PLAYER_ID()))
				return false;
		
			if (func_226(PLAYER::PLAYER_ID()))
				return false;
		
			if (Global_1845221[PLAYER::PLAYER_ID() /*889*/] == 3)
				return false;
		
			if (func_224(PLAYER::PLAYER_ID()))
				if (func_223(PLAYER::PLAYER_ID()))
					return false;
				else if (func_222(PLAYER::PLAYER_ID()))
					return false;
				else
					return true;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				return false;
			break;
	
		case 15:
		case 17:
		case 18:
		case 19:
		case 21:
		case 36:
		case 37:
		case 38:
		case 64:
			if (func_193(PLAYER::PLAYER_ID(), true, false))
				return false;
		
			if (func_191(PLAYER::PLAYER_ID()))
				return false;
			break;
	
		case 35:
			if (func_193(PLAYER::PLAYER_ID(), true, false))
				return false;
			break;
	}

	return true;
}

BOOL func_191(Player plParam0) // Position - 0x17564 Hash - 0xE40D6326 ^0xE40D6326
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_192(plParam0, 9);

	return false;
}

BOOL func_192(Player plParam0, int iParam1) // Position - 0x17582 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1887549[plParam0 /*611*/].f_10.f_4, iParam1);
}

BOOL func_193(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1759A Hash - 0x326C99FC ^0x326C99FC
{
	if (bParam1)
		if (func_194(plParam0))
			return true;

	!bParam2;

	if (Global_1845221[plParam0 /*889*/] == -1)
		return false;

	return true;
}

BOOL func_194(Player plParam0) // Position - 0x175CC Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_195(plParam0);
}

BOOL func_195(Player plParam0) // Position - 0x175DA Hash - 0x1ACBF981 ^0x51A073B
{
	return IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_11.f_1, 0);
}

BOOL func_196(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x175F1 Hash - 0xB51BA07A ^0xBC168CA
{
	int i;
	int num;
	Ped ped;
	Player playerIndexFromPed;

	num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;

	if (bParam4 || !ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			ped = func_197(veParam0, i - 1, bParam6, bParam7);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				if (bParam3 && ped == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(ped))
					{
						playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped);
					
						if (!PED::IS_PED_INJURED(ped) && playerIndexFromPed != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(playerIndexFromPed, true, true) || bParam8)
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped)) == 0)
								if (!bParam5)
									return false;
							else
								return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!PED::IS_PED_INJURED(ped))
				{
					return false;
				}
			}
		}
	}

	return true;
}

Ped func_197(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x176D5 Hash - 0x6D404137 ^0x121AA864
{
	Ped pedInVehicleSeat;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, iParam1, bParam3))
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, iParam1, bParam3);

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, iParam1);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE) == 1)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veParam0, false), ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, false)) < 10f)
						return pedInVehicleSeat;
		
			pedInVehicleSeat = -1;
		}
	}

	return pedInVehicleSeat;
}

BOOL func_198() // Position - 0x17770 Hash - 0x3507711D ^0x3507711D
{
	int num;
	int num2;

	num2 = func_201(&num);

	if (num < 0 || num >= 4)
		return false;

	if (num2 < 0 || num2 >= 17)
		return false;

	if (func_200())
		return IS_BIT_SET(Global_4718592.f_3592[num /*26190*/].f_8648[num2], 8);
	else if (func_199())
		return IS_BIT_SET(Global_4718592.f_3592[num /*26190*/].f_8648[num2], 8);

	return false;
}

BOOL func_199() // Position - 0x177EF Hash - 0x49F51E29 ^0xF6FB527E
{
	return *Global_4718592.f_225945 == 2;
}

BOOL func_200() // Position - 0x17803 Hash - 0x3ADD0811 ^0x4F639A9A
{
	return *Global_4718592.f_225945 == 1;
}

int func_201(var uParam0) // Position - 0x17817 Hash - 0xC81BA1E4 ^0x1AE5257E
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());

	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}

	return Global_1058116.f_14[*uParam0];
}

BOOL func_202() // Position - 0x1784E Hash - 0xF34DCBDD ^0xF34DCBDD
{
	if (func_200())
		return Global_2739811.f_316;
	else if (func_199())
		return Global_2739811.f_363;

	return false;
}

BOOL func_203() // Position - 0x1787C Hash - 0x2571EA7F ^0x2A0B32F9
{
	if (func_200())
		return IS_BIT_SET(Global_4718592.f_40, 20);
	else if (func_199())
		return IS_BIT_SET(Global_4718592.f_40, 20);

	return false;
}

BOOL func_204(Player plParam0, int iParam1) // Position - 0x178AE Hash - 0x8278D653 ^0x1C88B0B7
{
	return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_221, iParam1);
}

BOOL func_205() // Position - 0x178C4 Hash - 0x3166F227 ^0x3166F227
{
	return IS_BIT_SET(Global_2739811.f_4728, 0);
}

BOOL func_206() // Position - 0x178D5 Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_2635516.f_26;
}

BOOL func_207(int iParam0) // Position - 0x178E3 Hash - 0x73D41F5E ^0x73D41F5E
{
	return iParam0 == 54;
}

BOOL func_208(Player plParam0) // Position - 0x178F0 Hash - 0x405E6C93 ^0xA944ED94
{
	return Global_2657991[plParam0 /*467*/].f_123 == 7;
}

BOOL func_209(Player plParam0) // Position - 0x17905 Hash - 0xA3F2BD37 ^0x445A602D
{
	return Global_2657991[plParam0 /*467*/].f_123 == 2;
}

BOOL func_210(int iParam0) // Position - 0x1791A Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_FLASHLIGHT"):
		case 1703483498:
		case -624951259:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_211(int iParam0, BOOL bParam1) // Position - 0x179A0 Hash - 0xCF361B73 ^0x117D98A
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return true;
	
		case joaat("WEAPON_PIPEBOMB"):
			return true;
	}

	if (bParam1 && iParam0 == joaat("WEAPON_SNOWBALL"))
		return true;

	return false;
}

int func_212(int iParam0) // Position - 0x179F8 Hash - 0xFF125297 ^0xF71868D8
{
	int num;

	if (func_219() || func_218())
	{
		if (iParam0 != -1)
			num = iParam0;
		else
			num = func_217(*Global_4980736.f_89295);
	
		func_213(&num);
		return num;
	}

	return Global_1685226;
}

void func_213(var uParam0) // Position - 0x17A3D Hash - 0x66B22BB9 ^0x38A3711C
{
	if (func_214(*uParam0))
		return;

	switch (*uParam0)
	{
		case -624951259:
			*uParam0 = joaat("WEAPON_BAT");
			break;
	}

	return;
}

BOOL func_214(int iParam0) // Position - 0x17A6B Hash - 0x5D0AE1F3 ^0x789EA690
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	if (func_216())
		return true;

	if (func_215())
		return true;

	if (iParam0 == -624951259 && !IS_BIT_SET(Global_262145.f_25296, 2))
		return false;

	return true;
}

BOOL func_215() // Position - 0x17AB4 Hash - 0x9A216586 ^0x9A216586
{
	return false;
}

BOOL func_216() // Position - 0x17AC4 Hash - 0xFEA78839 ^0xECA57BE1
{
	if (*Global_4718592.f_129054 == 1 || *Global_4718592.f_129054 == 2)
		return true;

	return false;
}

int func_217(int iParam0) // Position - 0x17AF2 Hash - 0xF13632A6 ^0xA25C0409
{
	int num;

	num = iParam0;

	if (num != 0)
		return num;

	return joaat("WEAPON_PISTOL");
}

BOOL func_218() // Position - 0x17B11 Hash - 0xE59CBCB3 ^0xE84643
{
	return IS_BIT_SET(Global_4718592.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_219() // Position - 0x17B2B Hash - 0xD506A13B ^0x4F464FC3
{
	return IS_BIT_SET(Global_4718592.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION();
}

BOOL func_220() // Position - 0x17B45 Hash - 0xD527E657 ^0xD527E657
{
	if (func_181(6))
		return false;

	return true;
}

BOOL func_221(Player plParam0) // Position - 0x17B5A Hash - 0x27D3696B ^0x5D8A09C
{
	return Global_2657991[plParam0 /*467*/].f_123 == 4;
}

BOOL func_222(Player plParam0) // Position - 0x17B6F Hash - 0x114BF537 ^0x83AFB6F9
{
	return Global_2657991[plParam0 /*467*/].f_123 == 6;
}

BOOL func_223(Player plParam0) // Position - 0x17B84 Hash - 0x7B6883DE ^0x649544DE
{
	return Global_2657991[plParam0 /*467*/].f_123 == 5;
}

BOOL func_224(Player plParam0) // Position - 0x17B99 Hash - 0xE5004E64 ^0xE5004E64
{
	switch (func_57())
	{
		case 0:
			if (!func_225(plParam0))
				if (Global_1845221[plParam0 /*889*/] == 0)
					return true;
			break;
	}

	return false;
}

BOOL func_225(Player plParam0) // Position - 0x17BCF Hash - 0xA629A416 ^0xD1F56CD6
{
	return Global_1845221[plParam0 /*889*/].f_193 != 0;
}

BOOL func_226(Player plParam0) // Position - 0x17BE4 Hash - 0xABBFF6A4 ^0xABBFF6A4
{
	switch (func_57())
	{
		case 0:
			if (!func_225(plParam0))
				if (Global_1845221[plParam0 /*889*/] == 2 || Global_1845221[plParam0 /*889*/] == 8)
					return true;
			break;
	}

	return false;
}

BOOL func_227() // Position - 0x17C2D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1836684;
}

BOOL func_228(Player plParam0) // Position - 0x17C39 Hash - 0x85DE461B ^0x85DE461B
{
	switch (func_57())
	{
		case 0:
			if (Global_1845221[plParam0 /*889*/] == 1)
				return true;
			break;
	}

	return false;
}

BOOL func_229() // Position - 0x17C65 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1836685;
}

BOOL func_230(int iParam0) // Position - 0x17C71 Hash - 0x7F5F619C ^0xA8E3F461
{
	return func_231(&(Global_2672939.f_194), iParam0);
}

BOOL func_231(var uParam0, int iParam1) // Position - 0x17C85 Hash - 0x1995C9E6 ^0x1995C9E6
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

BOOL func_232() // Position - 0x17CA8 Hash - 0xF5EA4B67 ^0xF5EA4B67
{
	return IS_BIT_SET(Global_2739811.f_4728, 7);
}

BOOL func_233(int iParam0) // Position - 0x17CB9 Hash - 0xD389BDA2 ^0x3127276
{
	BOOL num;

	num = 0;

	if (IS_BIT_SET(*Global_4718592.f_180891, 2) && iParam0 == 0)
		num = 1;
	else if (IS_BIT_SET(*Global_4718592.f_180891, 3) && iParam0 == 1)
		num = 1;
	else if (IS_BIT_SET(*Global_4718592.f_180891, 4) && iParam0 == 2)
		num = 1;
	else if (IS_BIT_SET(*Global_4718592.f_180891, 5) && iParam0 == 3)
		num = 1;

	return num;
}

Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x17D3B Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

Vehicle func_235() // Position - 0x17D4E Hash - 0x8B21205D ^0x4CA3F8B0
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_236())
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_38) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_38))
			return NETWORK::NET_TO_VEH(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_38);

	return Global_2739811.f_301;
}

Hash func_236() // Position - 0x17DAA Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2699111)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_237(int iParam0) // Position - 0x17DCE Hash - 0xE8F1322C ^0xE4064652
{
	if (iParam0 > -1)
		if (func_209(PLAYER::PLAYER_ID()) || func_208(PLAYER::PLAYER_ID()) || func_186() && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || IS_BIT_SET(Global_4718592.f_34, 21))
			if (func_242(Global_1586535[iParam0 /*143*/].f_66) || func_240(Global_1586535[iParam0 /*143*/].f_66) && func_239(Global_1586535[iParam0 /*143*/].f_66) || func_238(Global_1586535[iParam0 /*143*/].f_66))
				return true;

	return false;
}

BOOL func_238(Hash hParam0) // Position - 0x17E68 Hash - 0x7D55C01F ^0x68DEA3D8
{
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0))
		return true;

	switch (hParam0)
	{
		case joaat("phantom3"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case -1576586413:
		case 1384502824:
			return true;
	
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("imperator"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("zr380"):
		case joaat("zr3802"):
		case joaat("zr3803"):
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("minitank"):
			return true;
	}

	return false;
}

int func_239(Hash hParam0) // Position - 0x17FAA Hash - 0x899A1C9C ^0x899A1C9C
{
	switch (hParam0)
	{
		case joaat("apc"):
			return Global_262145.f_21438;
	
		case joaat("ardent"):
			return Global_262145.f_21439;
	
		case joaat("nightshark"):
			return Global_262145.f_21440;
	
		case joaat("insurgent3"):
			return Global_262145.f_21441;
	
		case joaat("technical3"):
			return Global_262145.f_21442;
	
		case joaat("halftrack"):
			return Global_262145.f_21443;
	
		case joaat("trailersmall2"):
			return Global_262145.f_21444;
	
		case joaat("tampa3"):
			return Global_262145.f_21445;
	
		case joaat("dune3"):
			return Global_262145.f_21446;
	
		case joaat("oppressor"):
			return Global_262145.f_21447;
	
		case joaat("vigilante"):
			return Global_262145.f_22525;
	
		case joaat("thruster"):
			return Global_262145.f_23060;
	
		case joaat("deluxo"):
			return Global_262145.f_23061;
	
		case joaat("stromberg"):
			return Global_262145.f_23062;
	
		case joaat("riot2"):
			return Global_262145.f_23063;
	
		case joaat("chernobog"):
			return Global_262145.f_23064;
	
		case joaat("barrage"):
			return Global_262145.f_23065;
	
		case joaat("khanjali"):
			return Global_262145.f_23066;
	
		case joaat("comet4"):
			return Global_262145.f_23067;
	
		case joaat("savestra"):
			return Global_262145.f_23068;
	
		case joaat("revolter"):
			return Global_262145.f_23070;
	
		case joaat("avenger"):
		case joaat("avenger3"):
			return Global_262145.f_23071;
	
		case joaat("volatol"):
			return Global_262145.f_23072;
	
		case joaat("akula"):
			return Global_262145.f_23073;
	
		case joaat("oppressor2"):
			return Global_262145.f_23074;
	
		case joaat("scramjet"):
			return Global_262145.f_23075;
	
		case joaat("hydra"):
			return Global_262145.f_23076;
	
		case joaat("toreador"):
			return Global_262145.f_25356;
	
		default:
		
	}

	if (hParam0 == joaat("viseris"))
		return Global_262145.f_23069;

	return 0;
}

int func_240(Hash hParam0) // Position - 0x181E3 Hash - 0x98D83A5B ^0x98D83A5B
{
	switch (hParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
		case joaat("paragon2"):
		case joaat("toreador"):
		case joaat("avenger3"):
			return 1;
	
		default:
		
	}

	if (func_241(hParam0))
		return 1;

	return 0;
}

BOOL func_241(Hash hParam0) // Position - 0x182C4 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_242(Hash hParam0) // Position - 0x183B0 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_243() // Position - 0x18400 Hash - 0x950B911A ^0xC59EED25
{
	if (IS_BIT_SET(Global_1575009, 9))
		return false;

	if (IS_BIT_SET(Global_1575009, 10))
		return true;

	return IS_BIT_SET(Global_4718592.f_12, 18);
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1842D Hash - 0x3FF6E4CA ^0xE6B59972
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672939.f_3)
					return Global_2672939.f_2;
				else if (Global_2657991[player /*467*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_245() // Position - 0x1848D Hash - 0xC675496A ^0x39C1E0FD
{
	_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, 0, false);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
	return;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x184AA Hash - 0xCD788E2C ^0x50180146
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_257())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_255())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_21(PLAYER::PLAYER_ID(), 0) && !func_254() && !func_291(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2657991[plParam0 /*467*/].f_257 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_251(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_250(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_CAN_RAGDOLL(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_249();
					func_248();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2657991[plParam0 /*467*/].f_258 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2697787)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697787 = false;
				}
			
				if (Global_2635516.f_2982)
					Global_2635516.f_2982 = 0;
			}
			else
			{
				if (!func_250(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_247(*Global_4718592.f_187633))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575056)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_247(int iParam0) // Position - 0x1895E Hash - 0xFB453256 ^0xFB453256
{
	return iParam0 == 17;
}

void func_248() // Position - 0x1896B Hash - 0xBC63612E ^0xBC63612E
{
	var unk;

	Global_2672939.f_1100 = 0;
	Global_2672939.f_1101 = 0;
	Global_2672939.f_1102 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672939.f_1107 = -1;
	Global_2672939.f_1108 = 0;
	Global_2635516.f_2993 = { unk };
	return;
}

void func_249() // Position - 0x189B8 Hash - 0x5FEB45C4 ^0x3ADF6D1
{
	Global_2635516.f_703 = 0;
	Global_2635516.f_3036 = 0;
	Global_2635516.f_516 = 0;
	Global_2635516.f_607 = 0;
	Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_220 = 0;
	Global_2635516.f_2991 = 0;
	return;
}

BOOL func_250(Ped pedParam0) // Position - 0x189F6 Hash - 0x93DB01D2 ^0x43DCC591
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_251(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0x18A27 Hash - 0x19FE7AFC ^0x4538006F
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_253();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_21(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		_MPPLY_STAT_SET_BOOL(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}

	return;
}

void _MPPLY_STAT_SET_BOOL(Hash hParam0, BOOL bParam1) // Position - 0x18AF7 Hash - 0x269D56BD ^0xB104E3E4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_253() // Position - 0x18B13 Hash - 0xEFF6029E ^0x224AB476
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_254() // Position - 0x18B6B Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_255() // Position - 0x18B79 Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_256() == 0)
		return true;

	return false;
}

int func_256() // Position - 0x18B8E Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574633.f_18;
}

BOOL func_257() // Position - 0x18B9C Hash - 0xEBB0E6F7 ^0x19BAFBE9
{
	if (IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_885, 2) && !(Global_2685658.f_2847.f_216 == -1))
		return true;

	return false;
}

BOOL func_258(BOOL bParam0) // Position - 0x18BCD Hash - 0xDFB04CA0 ^0xDBB56FE0
{
	BOOL flag;
	var unk;

	flag = false;

	if (func_259(!bParam0))
		flag = true;

	if (flag)
	{
		if (bParam0)
			MISC::SET_BIT(&(Global_2739811.f_972), 1);
		else
			MISC::SET_BIT(&(Global_2739811.f_972), 0);
	
		MISC::SET_BIT(&(Global_2739811.f_971), 0);
		MISC::SET_BIT(&(Global_2739811.f_971), 1);
		MISC::SET_BIT(&(Global_2739811.f_971), 2);
		_STOPWATCH_RESET(&Global_2685658.f_4343.f_248[81 /*2*/], true, false);
		func_172(81, -1, -1);
		return true;
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 16);
	
		switch (iLocal_77)
		{
			case 8:
				func_54("RPA_MENU_O3_D2", 2000, 0);
				break;
		
			case 5:
				func_54("PIM_HRPV7" /*Delivery in progress.*/, 2000, 0);
				break;
		
			case 7:
				func_54("PIM_HTTV6" /*Delivery not currently available.*/, 2000, 0);
				break;
		
			case 4:
				unk = { func_167(func_168(81), false, false) };
				func_54("CONT_REQ_CD" /*Next request available in ~a~.*/, 2000, 0);
				func_166(&unk);
				break;
		}
	
		_STOPWATCH_DESTROY(&(bLocal_78.f_5));
		bLocal_74 = true;
	}

	return false;
}

BOOL func_259(BOOL bParam0) // Position - 0x18CD4 Hash - 0x74ACF1DC ^0x74ACF1DC
{
	if (bParam0)
		if (IS_BIT_SET(iLocal_62, 6))
			iLocal_77 = 8;

	if (func_168(81) > 0)
	{
		iLocal_77 = 4;
		return false;
	}

	if (IS_BIT_SET(Global_2739811.f_972, 0))
	{
		iLocal_77 = 5;
		return false;
	}

	if (Global_2739811.f_968 || Global_2739811.f_954 || Global_2739811.f_956 || Global_2739811.f_964 || Global_2739811.f_969 || Global_2739811.f_970 || Global_2739811.f_991 || Global_2739811.f_1003 || Global_2739811.f_357 || Global_2739811.f_358 || Global_2739811.f_1025 || IS_BIT_SET(Global_2739811.f_972, 0) || IS_BIT_SET(Global_2739811.f_972, 1))
	{
		iLocal_77 = 7;
		return false;
	}

	return true;
}

void func_260() // Position - 0x18DC2 Hash - 0xC3E0587A ^0x83584DF4
{
	if (iLocal_63 == 0)
	{
		if (bLocal_78.f_1 == 0)
		{
			iLocal_63 = 1;
			bLocal_78.f_1 = 0;
			Global_1942479 = true;
		}
		else if (bLocal_78.f_1 == 1)
		{
			if (func_258(true))
			{
				func_245();
				func_159(false, false);
				func_292();
			}
		}
		else if (bLocal_78.f_1 == 2)
		{
			if (func_258(false))
			{
				func_245();
				func_159(false, false);
				func_292();
			}
		}
	}
	else if (iLocal_63 == 1)
	{
		if (func_165())
		{
			func_245();
			func_159(false, false);
			func_292();
		}
	}

	bLocal_70 = true;
	return;
}

int func_261() // Position - 0x18E48 Hash - 0x133D97AD ^0x719DF45B
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return 1;
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT))
		return 1;

	return 0;
}

BOOL func_262() // Position - 0x18E9C Hash - 0xE38E84E0 ^0xE38E84E0
{
	if (bLocal_69)
		return false;

	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_72, iLocal_71, true))
		return true;

	return false;
}

BOOL func_263() // Position - 0x18EBE Hash - 0xA767DBD8 ^0xA767DBD8
{
	return bLocal_78;
}

void func_264() // Position - 0x18EC8 Hash - 0x9DFB4A2F ^0x38AC41CD
{
	iLocal_64 = 0;
	iLocal_65 = 0;
	bLocal_66 = false;
	bLocal_67 = false;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return;

	func_267(false, false, false, true);

	if (Global_4542450 > -1)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			if (Global_4542450 == bLocal_78.f_1)
			{
				iLocal_64 = 1;
			}
			else
			{
				bLocal_78.f_1 = Global_4542450;
				func_63(bLocal_78.f_1, true, 1);
				Global_1942479 = true;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
	{
		if (Global_4542450 == -2)
		{
			bLocal_66 = true;
			return;
		}
	
		if (Global_4542450 == -3)
		{
			bLocal_67 = true;
			return;
		}
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL))
		iLocal_65 = 1;

	if (func_266(false, true, 0) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
	{
		bLocal_66 = true;
		return;
	}

	if (func_265(false, true, 0) || PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN))
	{
		bLocal_67 = true;
		return;
	}

	return;
}

BOOL func_265(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x18FAC Hash - 0xC4785420 ^0x536D4331
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4542450 == -3)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) && bParam1)
				return true;
	}

	return false;
}

BOOL func_266(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x19011 Hash - 0x2FFC2B26 ^0x26F7725D
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (Global_4542450 == -2)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT) && bParam0 || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;
	
		if (iParam2 == 0)
			if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) && bParam1)
				return true;
	}

	return false;
}

void func_267(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x19076 Hash - 0x6E7ED0C2 ^0x4BE3E0E
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	int num7;
	int num8;
	int num9;
	int num10;

	num3 = 0.034722f / 2f;
	num10 = -1;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		Global_4542450 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_23967;
	x2 = x + Global_23969;
	y2 = Global_23970.f_6333;
	y = Global_23970.f_6333 - ((float)Global_23970.f_6335 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_23970.f_6335 < 1)
		y = Global_23970.f_6333 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_269();

	if (Global_4542450 == -6)
		return;

	Global_4542450 = -1;
	num4 = Global_4542444;
	num5 = Global_4542445;

	if (Global_23970.f_6336 > Global_23970.f_6335)
	{
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 && Global_4542445 < y2 + num3)
		{
			Global_4542450 = -2;
		
			if (bParam3)
				func_268(false);
		
			return;
		}
	
		if (Global_4542444 >= x && Global_4542444 <= x2 && Global_4542445 >= y2 + num3 && Global_4542445 < y2 + 0.034722f)
		{
			Global_4542450 = -3;
		
			if (bParam3)
				func_268(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = SYSTEM::FLOOR(num6 / 0.034722f);
	
		if (Global_23970.f_6336 == -1)
		{
			Global_4542450 = false;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_23970.f_6335;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_32(num, num2 + ((float)num10 * 0.034722f), Global_23969, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4542450 = Global_23970.f_8737[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4542450 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4542450 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4542450 = -4;
		return;
	}

	Global_4542450 = -1;
	return;
}

void func_268(BOOL bParam0) // Position - 0x19322 Hash - 0xD298BF7C ^0x3A4A9D9E
{
	float num;
	float num2;
	float num3;
	int num4;

	num3 = 0.034722f / 2f;

	if (bParam0)
		num4 = 48;
	else
		num4 = 210;

	num = Global_23967;
	num2 = Global_23970.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4542450 == -2)
		func_32(num, num2, Global_23969, num3, 255, 255, 255, num4);
	else if (Global_4542450 == -3)
		func_32(num, num2 + num3, Global_23969, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_269() // Position - 0x193AB Hash - 0xFDAF4DEA ^0xCA07F087
{
	Global_4542446 = Global_4542444;
	Global_4542447 = Global_4542445;
	Global_4542444 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4542445 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4542448 = Global_4542444 - Global_4542446;
	Global_4542449 = Global_4542445 - Global_4542447;
	return;
}

void func_270() // Position - 0x193F3 Hash - 0xBDC17284 ^0xBB200224
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);

	if (!IS_BIT_SET(iLocal_62, 3))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
		}
	
		_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_ALLOW_PLAYER_DAMAGE | 98304, false);
		MISC::SET_BIT(&iLocal_62, 3);
	}
	else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && Global_1942477)
	{
		MISC::CLEAR_BIT(&iLocal_62, 3);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE_ALTERNATE, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_BLOCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_NEXT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_PREV, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_WEAPON_WHEEL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_RADIO_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_X);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_NEXT_CAMERA);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE);

	if (IS_BIT_SET(iLocal_62, 5))
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_EXTRA_OPTION);

	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_CANCEL);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SELECT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_LEFT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_RIGHT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_UP);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_BACKWARD);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_SCROLL_FORWARD);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CELLPHONE_DOWN);
		PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
		PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_ACCEPT, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_CANCEL, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_UP, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	
		if (IS_BIT_SET(iLocal_62, 4))
		{
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_SELECT_WEAPON);
		}
	}

	return;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0x19608 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_272() // Position - 0x19629 Hash - 0xAF0F67B2 ^0x486865D4
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_274();
	func_273();
	return;
}

void func_273() // Position - 0x19664 Hash - 0x9A142650 ^0xE9E53C81
{
	Global_23831.f_6 = 1;
	return;
}

void func_274() // Position - 0x19672 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_2739811.f_4667 = 0;
	return;
}

BOOL func_275() // Position - 0x19682 Hash - 0x13D5ABA4 ^0x1002E72A
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Mckenzie_Field", false);
	return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("ShopUI_Title_Mckenzie_Field");
}

BOOL func_276(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1969B Hash - 0xF7C7CB5C ^0x1F94FA7F
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_48(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_23970.f_6238[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23970.f_6238[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23970.f_6238[num /*4*/], 9);
		Global_23970.f_6231[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23970.f_6238[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
		flag = false;

	Global_23970.f_6217[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23970.f_6224[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23970.f_6263[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_277(&Global_23970.f_6263[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_277(int iParam0) // Position - 0x197A7 Hash - 0x55978EE6 ^0xF39227AE
{
	switch (iParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(iParam0->f_1));
				iParam0->f_9 = 1;
			
				if (iParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
					{
						iParam0->f_8 = MISC::GET_GAME_TIMER();
						iParam0->f_9 = 2;
					}
				}
			}
			else
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iParam0->f_8 = MISC::GET_GAME_TIMER();
				iParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				iParam0->f_9 = 0;
			break;
	}

	return iParam0->f_9 == 2;
}

BOOL func_278(int iParam0, int iParam1) // Position - 0x19849 Hash - 0xD5A5F7A0 ^0x76B75985
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (iParam0 == 1)
		if (func_281())
			return false;

	if (_IS_FMMC_ACTIVE())
		return false;

	if (iParam1 == 1)
		if (func_6(0))
			return false;

	if (func_47(8, -1))
		return false;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return false;

	if (func_279())
		return false;

	if (Global_61489)
		return false;

	if (Global_76640)
		return false;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return false;

	if (Global_1574972)
		return false;

	if (Global_1836461)
		return false;

	return true;
}

BOOL func_279() // Position - 0x198E5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575084;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x198F1 Hash - 0x9A79549B ^0x4A0EF303
{
	return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_193 != 0;
}

BOOL func_281() // Position - 0x19908 Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23970.f_6481 + 100;
}

void func_282() // Position - 0x1991D Hash - 0x735B96B2 ^0x6B0C3BA7
{
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			if (iLocal_18 == 1)
			{
				HUD::SET_MOUSE_CURSOR_STYLE(1);
				iLocal_18 = 0;
			}
		}
		else
		{
			iLocal_18 = 1;
		}
	}

	return;
}

BOOL func_283() // Position - 0x19951 Hash - 0xE0F6C437 ^0x6331FC98
{
	if (IS_BIT_SET(Global_1882780[PLAYER::PLAYER_ID() /*149*/].f_17, 0))
		return false;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return false;

	if (func_279())
		return false;

	if (Global_1574972)
		return false;

	if (Global_1836461)
		return false;

	if (Global_1919412)
		return false;

	if (func_289(PLAYER::PLAYER_ID()))
		return false;

	if (func_287())
		return false;

	if (func_285())
		return false;

	if (func_284(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 4))
		return false;

	if (Global_1942476)
		return false;

	return true;
}

BOOL func_284(Player plParam0) // Position - 0x19A05 Hash - 0xD7F7F990 ^0x7DEBB5FC
{
	if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 14))
		return true;

	if (IS_BIT_SET(Global_1845221[plParam0 /*889*/].f_268.f_34, 11))
		return true;

	return false;
}

BOOL func_285() // Position - 0x19A3E Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_286(PLAYER::PLAYER_ID());
}

BOOL func_286(Player plParam0) // Position - 0x19A4E Hash - 0x9A12FE93 ^0x9A12FE93
{
	return Global_2657991[plParam0 /*467*/].f_448;
}

BOOL func_287() // Position - 0x19A62 Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_288(PLAYER::PLAYER_ID());
}

BOOL func_288(Player plParam0) // Position - 0x19A72 Hash - 0x8BDB4C9E ^0xDD98898D
{
	return Global_2657991[plParam0 /*467*/].f_448.f_1;
}

BOOL func_289(Player plParam0) // Position - 0x19A88 Hash - 0x3BED6F11 ^0x3BED6F11
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_324, 3);

	return false;
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x19AB9 Hash - 0x6F79B86B ^0x7B76DD66
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

BOOL func_291(Player plParam0) // Position - 0x19AFE Hash - 0x68897CDD ^0x41D261A7
{
	if (func_21(plParam0, 0))
		return true;

	if (func_254())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657991[plParam0 /*467*/].f_202, 2))
		return true;

	return false;
}

void func_292() // Position - 0x19B3D Hash - 0x96E0B3A2 ^0x78851227
{
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(750);
	func_295(true, -1);
	func_294(false);

	if (func_275())
		func_293();

	if (IS_BIT_SET(iLocal_62, 2))
		HUD::MP_TEXT_CHAT_DISABLE(false);

	if (IS_BIT_SET(iLocal_62, 3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_255() && !IS_BIT_SET(Global_2739811.f_971, 2))
			_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), true, 0, false);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		MISC::CLEAR_BIT(&iLocal_62, 3);
	}

	if (Global_1942476)
		Global_1942476 = false;

	if (Global_1942475)
		Global_1942475 = false;

	HUD::DISPLAY_RADAR(true);
	HUD::THEFEED_HIDE_THIS_FRAME();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_293() // Position - 0x19BDC Hash - 0xF91DC52E ^0x3C2A46C4
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("ShopUI_Title_Mckenzie_Field");
	return;
}

void func_294(BOOL bParam0) // Position - 0x19BEC Hash - 0xE4AC5E3E ^0x31D84232
{
	HUD::BUSYSPINNER_OFF();

	if (bParam0)
		HUD::PRELOAD_BUSYSPINNER();

	return;
}

void func_295(BOOL bParam0, int iParam1) // Position - 0x19C01 Hash - 0x8F233D4 ^0xB55528D0
{
	int num;

	if (!func_48(&num, false, iParam1))
		return;

	if (Global_23970.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_23970.f_9116 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_23970.f_6231[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23970.f_6231[num] = false;
	}

	if (Global_23970.f_6217[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23970.f_6217[num] = false;
	}

	if (Global_23970.f_6224[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23970.f_6224[num] = false;
	}

	if (bParam0)
	{
		func_296(&Global_23970.f_6263[num /*10*/]);
		Global_23970.f_6324[num] = 0;
	}
	else
	{
		Global_23970.f_6324[num] = 0;
	}

	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	return;
}

void func_296(int iParam0) // Position - 0x19CC6 Hash - 0x294B53C7 ^0x1978B7FB
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}

	return;
}

BOOL _SHOULD_NETWORK_SCRIPT_TERMINATE() // Position - 0x19CF2 Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575056 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_302())
		return true;

	if (Global_2699004)
		return true;

	if (func_301())
		return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(159))
		if (!func_299())
			return true;

	if (_DOES_EVENT_OF_TYPE_EXIST(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(_GET_CURRENT_SESSION_TYPE_SCRIPT_HASH()) == 0)
			return true;

	return false;
}

Hash _GET_CURRENT_SESSION_TYPE_SCRIPT_HASH() // Position - 0x19D76 Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_57())
	{
		case 0:
			return func_236();
	
		case 2:
			return joaat("creator");
	}

	return 0;
}

BOOL func_299() // Position - 0x19DA9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_700;
}

BOOL _DOES_EVENT_OF_TYPE_EXIST(int iParam0) // Position - 0x19DB8 Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_301() // Position - 0x19DCF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2696416;
}

BOOL func_302() // Position - 0x19DDB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2684718.f_695;
}

void func_303() // Position - 0x19DEA Hash - 0x66E327B2 ^0x39BE3C9E
{
	SYSTEM::WAIT(0);
	return;
}

void func_304() // Position - 0x19DF7 Hash - 0x9493C8B4 ^0xAB33CAC2
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::SET_BIT(&iLocal_62, 2);
	HUD::MP_TEXT_CHAT_DISABLE(true);

	if (!IS_BIT_SET(iLocal_62, 3))
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
		}
	
		_SET_PLAYER_CONTROL_EX(PLAYER::PLAYER_ID(), false, SPC_ALLOW_PLAYER_DAMAGE | 98304, false);
		MISC::SET_BIT(&iLocal_62, 3);
	}
	else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && Global_1942477)
	{
		MISC::CLEAR_BIT(&iLocal_62, 3);
	}

	return;
}

