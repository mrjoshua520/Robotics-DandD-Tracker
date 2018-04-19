#include "stdafx.h"

#include "Containers.h"

//combines the single items into containers

Containers::Containers()
{
}


Containers::~Containers()
{
}

void Containers::Set_Chest()
{
	items.Set_Gem_50gp();
	items.Set_Gem_100gp();
	items.Set_Gem_1000gp();
	items.Set_Gem_5000gp();
	items.Set_Art_25gp();
	items.Set_Art_250gp();
	items.Set_Potion();

	int Dice_Roll;
	const int Dice_Max = 224;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		coin.Set_Zero_To_Four();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_50gp();
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 60)
	{
		coin.Set_Zero_To_Four();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nArt 1: " + items.Get_Art_25gp();
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 90)
	{
		coin.Set_Five_To_Ten();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_100gp();
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 110)
	{
		coin.Set_Five_To_Ten();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nArt 1: " + items.Get_Art_250gp();
	}
	else if (Dice_Roll >= 111 && Dice_Roll <= 130)
	{
		coin.Set_Five_To_Ten();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_100gp() + "\nPotion 1: " + items.Get_Potion();
	}
	else if (Dice_Roll >= 131 && Dice_Roll <= 150)
	{
		coin.Set_Five_To_Ten();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nArt 1: " + items.Get_Art_250gp() + "\nPotion 1: " + items.Get_Potion();
	}
	else if (Dice_Roll >= 151 && Dice_Roll <= 170)
	{
		coin.Set_Five_To_Ten();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_1000gp();
	}
	else if (Dice_Roll >= 171 && Dice_Roll <= 185)
	{
		coin.Set_Eleven_To_Sixteen();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_100gp() + "\nPotion 1: " + items.Get_Potion() + "\nArt 1: " + items.Get_Art_250gp();
	}
	else if (Dice_Roll >= 186 && Dice_Roll <= 200)
	{
		coin.Set_Eleven_To_Sixteen();
		chest = "You open the chest and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_5000gp() + "\nPotion 1: " + items.Get_Potion();
	}
	else if (Dice_Roll >= 201 && Dice_Roll <= 210)
	{
		coin.Set_Seventeen_Plus();
		chest = "You open the chest and find the following :\nCopper : " + to_string(coin.copper) + "\nSilver : " + to_string(coin.silver) + "\nElectrum : " + to_string(coin.electrum) + "\nGold : " + to_string(coin.gold) + "\nPlatinum : " + to_string(coin.platinum) + "\nPotion 1: " + items.Get_Potion() + "\nArt 1: " + items.Get_Art_250gp();
	}
	else if (Dice_Roll >= 211 && Dice_Roll <= 225)
	{
		chest = "You open the chest and find nothing. It is empty. ";
	}
}
void Containers::Set_burialUrn()
{
	items.Set_Gem_10gp();
	items.Set_Gem_50gp();
	coin.Set_Zero_To_Four();

	int Dice_Roll;
	const int Dice_Max = 114;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 70)
	{
		burialUrn = "You open the urn and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum);
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 90)
	{
		burialUrn = "You open the urn and find the following:\nCopper : " + to_string(coin.copper) + "\nSilver : " + to_string(coin.silver) + "\nElectrum : " + to_string(coin.electrum) + "\nGold : " + to_string(coin.gold) + "\nPlatinum : " + to_string(coin.platinum)+ "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		burialUrn = "You open the urn and find the following:\nCopper : " + to_string(coin.copper) + "\nSilver : " + to_string(coin.silver) + "\nElectrum : " + to_string(coin.electrum) + "\nGold : " + to_string(coin.gold) + "\nPlatinum : " + to_string(coin.platinum)+ "\nGem 1 : " + items.Get_Gem_50gp();
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 115)
	{
		burialUrn = "You open the urn and find nothing. It is empty. ";
	}
}
void Containers::Set_Crate()
{
	items.Set_Armor();
	items.Set_Weapon();
	items.Set_Tool();
	items.Set_Kit();
	items.Set_Gem_10gp();
	items.Set_Gem_50gp();
	items.Set_Potion();

	int Dice_Roll;
	const int Dice_Max = 114;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		crate = "You open the crate and find the following:\nTool 1: " + items.Get_Tool();
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 55)
	{
		crate = "You open the crate and find the following:\nTool 1: " + items.Get_Tool() + "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 75)
	{
		crate = "You open the crate and find the following:\nWeapon 1: " + items.Get_Weapon() + "\nArmor 1: " + items.Get_Armor();
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 90)
	{
		crate = "You open the crate and find the following:\nTool: " + items.Get_Weapon() + "\nTool 1: " + items.Get_Tool() + "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		crate = "You open the crate and find the following:\nTool: " + items.Get_Tool() + "\nGem 1: " + items.Get_Gem_50gp() + "\nPotion 1: " + items.Get_Potion() ;
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 115)
	{
		crate = "You open the crate and find nothing. It is empty. ";
	}
}
void Containers::Set_Barrel()
{
	items.Set_Food();
	items.Set_Drink();
	items.Set_Kit();
	items.Set_Gem_10gp();
	items.Set_Potion();

	int Dice_Roll;
	const int Dice_Max = 114;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		barrel = "You open the barrel and find the following:\nFood 1: " + items.Get_Food();
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 55)
	{
		barrel = "You open the barrel and find the following:\nFood 1: " + items.Get_Food() + "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 75)
	{
		barrel = "You open the barrel and find the following:\nFood 1: " + items.Get_Food() + "\nDrink 1: " + items.Get_Drink();
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 90)
	{
		barrel = "You open the barrel and find the following:\nDrink 1: " + items.Get_Drink() + "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		barrel = "You open the barrel and find the following:\nFood 1: " + items.Get_Food() + "\nGem 1: " + items.Get_Gem_10gp() + "\nPotion 1: " + items.Get_Potion();
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 115)
	{
		barrel = "You open the barrel and find nothing. It is empty. ";
	}
}
void Containers::Set_Lockbox()
{
	items.Set_Gem_10gp();
	items.Set_Gem_50gp();
	items.Set_Gem_100gp();
	items.Set_Gem_1000gp();

	int Dice_Roll;
	const int Dice_Max = 114;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		coin.Set_Zero_To_Four();
		lockbox = "You open the urn and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_10gp();
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 55)
	{
		coin.Set_Zero_To_Four();
		lockbox = "You open the urn and find the following : \nCopper : " + to_string(coin.copper) + "\nSilver : " + to_string(coin.silver) + "\nElectrum : " + to_string(coin.electrum) + "\nGold : " + to_string(coin.gold) + "\nPlatinum : " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_50gp();
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 75)
	{
		coin.Set_Zero_To_Four();
		lockbox = "You open the urn and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum);
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 90)
	{
		coin.Set_Five_To_Ten();
		lockbox = "You open the urn and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_100gp();
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		coin.Set_Five_To_Ten();
		lockbox = "You open the urn and find the following:\nCopper: " + to_string(coin.copper) + "\nSilver: " + to_string(coin.silver) + "\nElectrum: " + to_string(coin.electrum) + "\nGold: " + to_string(coin.gold) + "\nPlatinum: " + to_string(coin.platinum) + "\nGem 1: " + items.Get_Gem_1000gp();
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 115)
	{
		lockbox = "You open the lockbox and find nothing. It is empty. ";
	}
}
void Containers::Set_Wagon()
{

	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	system("cls");

	wagon = "You happen on a wagon filled with the following:";

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		for (int i = 0; i < 4; i++)
		{
			Set_Barrel();
			wagon += "\n\n" + Get_Barrel();
		}

		wagon += "\n\n" + Get_burialUrn() + "\n\n" + Get_Lockbox();
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 55)
	{
		for (int i = 0; i < 3; i++)
		{
			Set_Crate();
			wagon += "\n\n" + Get_Crate();
		}

		for (int i = 0; i < 2; i++)
		{
			Set_Barrel();
			wagon += "\n\n" + Get_Barrel();
		}

		wagon += "\n\n" + Get_Lockbox();
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 75)
	{
		for (int i = 0; i < 4; i++)
		{
			Set_Barrel();
			wagon += "\n\n" + Get_Barrel();
		}

		wagon += "\n\n" + Get_Chest() + "\n\n" + Get_burialUrn();
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 90)
	{
		for (int i = 0; i < 3; i++)
		{
			Set_Lockbox();
			wagon += "\n\n" + Get_Lockbox();
		}

		for (int i = 0; i < 2; i++)
		{
			Set_Chest();
			wagon += "\n\n" + Get_Barrel();
		}
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		for (int i = 0; i < 2; i++)
		{
			Set_Chest();
			wagon += "\n\n" + Get_Chest();
		}

		for (int i = 0; i < 4; i++)
		{
			Set_Barrel();
			wagon += "\n\n" + Get_Barrel();
		}

		for (int i = 0; i < 3; i++)
		{
			Set_Crate();
			wagon += "\n\n" + Get_Crate();
		}
	}
}

string Containers::Get_Chest()
{
	return chest;
}
string Containers::Get_burialUrn()
{
	return burialUrn;
}
string Containers::Get_Crate()
{
	return crate;
}
string Containers::Get_Barrel()
{
	return barrel;
}
string Containers::Get_Lockbox()
{
	return lockbox;
}
string Containers::Get_Wagon()
{
	return wagon;
}
