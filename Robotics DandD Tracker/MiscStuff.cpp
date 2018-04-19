#include "stdafx.h"
#include "MiscStuff.h"


MiscStuff::MiscStuff()
{
	
}


MiscStuff::~MiscStuff()
{
}

string MiscStuff::Chaos_Bolt()
{
	//finds the damage type of the spell chaos bolt

	bool BadInput = true;
	string Input;

	int Dice_Roll;
	const int Dice_Max = 7;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll == 1)
	{
		chaosBolt = "acid";
	}
	else if (Dice_Roll == 2)
	{
		chaosBolt = "cold";
	}
	else if (Dice_Roll == 3)
	{
		chaosBolt = "fire";
	}
	else if (Dice_Roll == 4)
	{
		chaosBolt = "force";
	}
	else if (Dice_Roll == 5)
	{
		chaosBolt = "lightning";
	}
	else if (Dice_Roll == 6)
	{
		chaosBolt = "poison";
	}
	else if (Dice_Roll == 7)
	{
		chaosBolt = "psychic";
	}
	else if (Dice_Roll == 8)
	{
		chaosBolt = "thunder";
	}
	else
	{

	}

	return chaosBolt;
}
