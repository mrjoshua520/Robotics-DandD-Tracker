#include "stdafx.h"
#include "Dollar.h"


Dollar::Dollar()
{
}


Dollar::~Dollar()
{
}

void Dollar::Set_Zero_To_Four()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = Dice_Roll;
		silver = 0;
		electrum = 0;
		gold = 0;
		platinum = 0;

	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 60)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = Dice_Roll;
		electrum = 0;
		gold = 0;
		platinum = 0;
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = Dice_Roll;
		gold = 0;
		platinum = 0;
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 95)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		gold = Dice_Roll;
		platinum = 0;
	}
	else if (Dice_Roll >= 96 && Dice_Roll <= 100)
	{
		Dice_Roll = (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		gold = 0;
		platinum = Dice_Roll;
	}
	else
	{

	}
}
void Dollar::Set_Five_To_Ten()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = (Dice_Roll * 100);
		silver = 0;
		gold = 0;
		platinum = 0;

		Dice_Roll = (rand() % 5) + 1;

		electrum = (Dice_Roll * 10);
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 60)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		silver = (Dice_Roll * 10);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		electrum = 0;
		gold = (Dice_Roll * 10);
		platinum = 0;
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		electrum = (Dice_Roll * 10);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		gold = (Dice_Roll * 10);
		platinum = 0;
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 95)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		gold = (Dice_Roll * 10);
		platinum = 0;
	}
	else if (Dice_Roll >= 96 && Dice_Roll <= 100)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		gold = (Dice_Roll * 10);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		platinum = Dice_Roll;
	}
}
void Dollar::Set_Eleven_To_Sixteen()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 20)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		silver = (Dice_Roll * 100);

		Dice_Roll = (rand() % 5) + 1;

		copper = 0;
		electrum = 0;
		gold = (Dice_Roll * 100);
		platinum = 0;
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 35)
	{
		Dice_Roll = (rand() % 5) + 1;

		electrum = (Dice_Roll * 100);

		Dice_Roll = (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		gold = (Dice_Roll * 100);
		platinum = 0;
	}
	else if (Dice_Roll >= 36 && Dice_Roll <= 75)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		gold = (Dice_Roll * 100);

		Dice_Roll = (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		platinum = (Dice_Roll * 10);
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 100)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		gold = (Dice_Roll * 100);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		platinum = (Dice_Roll * 10);
	}
}
void Dollar::Set_Seventeen_Plus()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 15)
	{
		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		electrum = (Dice_Roll * 1000);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		gold = (Dice_Roll * 100);
		platinum = 0;
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 55)
	{
		Dice_Roll = (rand() % 5) + 1;

		gold = (Dice_Roll * 1000);

		Dice_Roll = (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		platinum = (Dice_Roll * 100);
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 100)
	{
		Dice_Roll = (rand() % 5) + 1;

		gold = (Dice_Roll * 1000);

		Dice_Roll = (rand() % 5) + 1;
		Dice_Roll += (rand() % 5) + 1;

		copper = 0;
		silver = 0;
		electrum = 0;
		platinum = (Dice_Roll = 100);
	}
}

void Dollar::Set_Zero_To_Four_Hoard()
{
	int Dice_Max = 5;
	int Dice_Roll;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	copper = (Dice_Roll * 100);

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	silver = (Dice_Roll * 100);

	electrum = 0;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	gold = (Dice_Roll * 10);

	platinum = 0;
}
void Dollar::Set_Five_To_Ten_Hoard()
{
	int Dice_Max = 5;
	int Dice_Roll;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	copper = (Dice_Roll * 100);

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	silver = (Dice_Roll * 1000);

	electrum = 0;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	gold = (Dice_Roll * 100);

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	platinum = (Dice_Roll * 10);
}
void Dollar::Set_Eleven_To_Sixteen_Hoard()
{
	int Dice_Max = 5;
	int Dice_Roll;

	copper = 0;
	silver = 0;
	electrum = 0;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	gold = (Dice_Roll * 1000);

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	platinum = (Dice_Roll * 100);
}
void Dollar::Set_Seventeen_Plus_Hoard()
{
	int Dice_Max = 5;
	int Dice_Roll;

	copper = 0;
	silver = 0;
	electrum = 0;

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	gold = (Dice_Roll * 1000);

	Dice_Roll = (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	Dice_Roll += (rand() % 5) + 1;
	platinum = (Dice_Roll * 1000);
}