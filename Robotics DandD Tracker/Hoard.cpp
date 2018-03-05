#include "stdafx.h"
#include "Hoard.h"


Hoard::Hoard()
{
}


Hoard::~Hoard()
{
}

void Hoard::Set_Hoard_Zero_to_Four()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	coins.Set_Zero_To_Four_Hoard();

	Hoard_Zero_to_Four = "Copper: " + to_string(coins.copper) + "\n" + "Silver: " + to_string(coins.silver) + "\n" + "Electrum: " + to_string(coins.electrum) + "\n" + "Gold: " + to_string(coins.gold) + "\n" + "Platinum: " + to_string(coins.platinum) + "\n";

	if (Dice_Roll >= 1 && Dice_Roll <= 6)
	{
		
	}
	else if (Dice_Roll >= 7 && Dice_Roll <= 16)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_10gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_10gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 26)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 27 && Dice_Roll <= 36)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 44) //start magic
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_10gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_10gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 52)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 60)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 65)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_10gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_10gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 66 && Dice_Roll <= 70)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 75)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 78)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_10gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_10gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 79 && Dice_Roll <= 80)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 85)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 86 && Dice_Roll <= 92)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 97)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 98 && Dice_Roll <= 99)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Zero_to_Four += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_G();
		Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
	}
	else if (Dice_Roll == 100)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			Hoard_Zero_to_Four += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_G();
		Hoard_Zero_to_Four += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
	}
}
void Hoard::Set_Hoard_Five_to_Ten()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	coins.Set_Five_To_Ten_Hoard();

	Hoard_Five_to_Ten = "Copper: " + to_string(coins.copper) + "\n" + "Silver: " + to_string(coins.silver) + "\n" + "Electrum: " + to_string(coins.electrum) + "\n" + "Gold: " + to_string(coins.gold) + "\n" + "Platinum: " + to_string(coins.platinum) + "\n";

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{

	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 10)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 16)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 22)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 23 && Dice_Roll <= 28)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 49)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 50 && Dice_Roll <= 54)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 55 && Dice_Roll <= 59)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 60 && Dice_Roll <= 63)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 64 && Dice_Roll <= 66)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 67 && Dice_Roll <= 69)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 70 && Dice_Roll <= 72)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 74)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 75 && Dice_Roll <= 76)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_D();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 78)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_D();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
	}
	else if (Dice_Roll == 79)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_D();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
	}
	else if (Dice_Roll == 80)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_D();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_25gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_25gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_50gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_50gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 91)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 92 && Dice_Roll <= 94)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_F();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 95 && Dice_Roll <= 96)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 98)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll == 99)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_100gp();
			
			Hoard_Five_to_Ten += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_100gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_H();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
	}
	else if (Dice_Roll == 100)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			
			Hoard_Five_to_Ten += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_H();
		Hoard_Five_to_Ten += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
	}
}
void Hoard::Set_Hoard_Eleven_to_Sixteen()
{
	int Dice_Roll; //Start after 50
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	coins.Set_Eleven_To_Sixteen_Hoard();

	Hoard_Eleven_to_Sixteen = "Copper: " + to_string(coins.copper) + "\n" + "Silver: " + to_string(coins.silver) + "\n" + "Electrum: " + to_string(coins.electrum) + "\n" + "Gold: " + to_string(coins.gold) + "\n" + "Platinum: " + to_string(coins.platinum) + "\n";

	if (Dice_Roll >= 1 && Dice_Roll <= 3)
	{

	}
	else if (Dice_Roll >= 4 && Dice_Roll <= 6)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 7 && Dice_Roll <= 9)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 10 && Dice_Roll <= 12)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 15)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 19)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_MagicTwo;
		const int Dice_Max_MagicTwo = 5;

		Dice_Roll_MagicTwo = (rand() % Dice_Max_MagicTwo) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 20 && Dice_Roll <= 23)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_MagicTwo;
		const int Dice_Max_MagicTwo = 5;

		Dice_Roll_MagicTwo = (rand() % Dice_Max_MagicTwo) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 24 && Dice_Roll <= 26)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_MagicTwo;
		const int Dice_Max_MagicTwo = 5;

		Dice_Roll_MagicTwo = (rand() % Dice_Max_MagicTwo) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 27 && Dice_Roll <= 29)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_A();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_A() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_MagicTwo;
		const int Dice_Max_MagicTwo = 5;

		Dice_Roll_MagicTwo = (rand() % Dice_Max_MagicTwo) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_B();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_B() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 30 && Dice_Roll <= 35)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 36 && Dice_Roll <= 40)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 45)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 46 && Dice_Roll <= 50)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 54)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 55 && Dice_Roll <= 58)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 59 && Dice_Roll <= 62)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 63 && Dice_Roll <= 66)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 67 && Dice_Roll <= 68)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_E();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 70)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_E();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 72)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_E();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 74)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_E();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
	}
	else if (Dice_Roll >= 75 && Dice_Roll <= 76)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_F();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 78)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_F();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 79 && Dice_Roll <= 80)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_F();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 82)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_F();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_F() + "\n";

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 83 && Dice_Roll <= 85)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 86 && Dice_Roll <= 88)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 90)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 92)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 94)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_250gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_250gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_I();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
	}
	else if (Dice_Roll >= 95 && Dice_Roll <= 96)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_750gp();
			Hoard_Eleven_to_Sixteen += "Art " + to_string(count + 1) + ": " + item.Get_Art_750gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_I();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 98)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_500gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_500gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_I();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
	}
	else if (Dice_Roll >= 99 && Dice_Roll <= 100)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Eleven_to_Sixteen += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		mItem.Set_MagicItem_I();
		Hoard_Eleven_to_Sixteen += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
	}
}
void Hoard::Set_Hoard_Seventeen_Plus()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	coins.Set_Seventeen_Plus_Hoard();

	Hoard_Seventeen_Plus = "Copper: " + to_string(coins.copper) + "\n" + "Silver: " + to_string(coins.silver) + "\n" + "Electrum: " + to_string(coins.electrum) + "\n" + "Gold: " + to_string(coins.gold) + "\n" + "Platinum: " + to_string(coins.platinum) + "\n";

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 2)
	{

	}
	else if (Dice_Roll >= 3 && Dice_Roll <= 5)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 7;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 6 && Dice_Roll <= 8)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 7;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 11)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 7;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 12 && Dice_Roll <= 14)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 7;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_C();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_C() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 15 && Dice_Roll <= 22)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 23 && Dice_Roll <= 30)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 38)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 39 && Dice_Roll <= 46)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_D();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_D() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 47 && Dice_Roll <= 52)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_E();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 58)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_E();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 59 && Dice_Roll <= 63)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_E();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 64 && Dice_Roll <= 68)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 5;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_E();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_E() + "\n";
			count++;
		}
	}
	else if (Dice_Roll == 69)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll == 70)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll == 71)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll == 72)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_G();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_G() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 74)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 75 && Dice_Roll <= 76)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 78)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 79 && Dice_Roll <= 80)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_H();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_H() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 85)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 5;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;
		Dice_Roll_Gems += (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_1000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_1000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_I();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 86 && Dice_Roll <= 90)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 9;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_2500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_2500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_I();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 95)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 3;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Art_7500gp();
			Hoard_Seventeen_Plus += "Art " + to_string(count + 1) + ": " + item.Get_Art_7500gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_I();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
			count++;
		}
	}
	else if (Dice_Roll >= 96 && Dice_Roll <= 100)
	{
		int count = 0;
		int Dice_Roll_Gems;
		const int Dice_Max_Gems = 7;

		Dice_Roll_Gems = (rand() % Dice_Max_Gems) + 1;

		while (count < Dice_Roll_Gems)
		{
			item.Set_Gem_5000gp();
			Hoard_Seventeen_Plus += "Gem " + to_string(count + 1) + ": " + item.Get_Gem_5000gp() + "\n";
			count++;
		}

		count = 0;
		int Dice_Roll_Magic;
		const int Dice_Max_Magic = 3;

		Dice_Roll_Magic = (rand() % Dice_Max_Magic) + 1;

		while (count < Dice_Roll_Magic)
		{
			mItem.Set_MagicItem_I();
			Hoard_Seventeen_Plus += "Magic Item " + to_string(count + 1) + ": " + mItem.Get_magicItem_I() + "\n";
			count++;
		}
	}
}

string Hoard::Get_Hoard_Zero_to_Four()
{
	return Hoard_Zero_to_Four;
}
string Hoard::Get_Hoard_Five_to_Ten()
{
	return Hoard_Five_to_Ten;
}
string Hoard::Get_Hoard_Eleven_to_Sixteen()
{
	return Hoard_Eleven_to_Sixteen;
}
string Hoard::Get_Hoard_Seventeen_Plus()
{
	return Hoard_Seventeen_Plus;
}