// RoboticsDandDTracker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DandD.h"

using namespace std;

void Party_Stats();
void Monster_Stats();
void NPC_Stats();
void Random_Item();
void Random_Shop();
void Random_Person();
void Battle_Tracker();
void Single_Item();
void Container();
void Hoard_Func();
void Money();
void Exit();

int main()
{
	bool BadInput = true;
	string Input;
	srand(time(NULL));//needed for random
	system("MODE 650");//this along with----------V
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//this sets the screen to max size
	while (BadInput)
	{
		system("cls");
		cout << "Enter your selection of the following options." << endl;
		cout << "Enter 1 for Party Stats." << endl;
		cout << "Enter 2 for Monster Stats." << endl;
		cout << "Enter 3 for NPC Stats." << endl;
		cout << "Enter 4 for Random Item Generator." << endl;
		cout << "Enter 5 for Random Shop Names." << endl;
		cout << "Enter 6 for Random People Names." << endl;
		cout << "Enter 7 for a Battle Tracker." << endl;
		cout << "Enter 8 for the Bank of Emon Server" << endl;
		cout << "Enter -999 to end the program." << endl;
		cout << "Selection: ";
		cin >> Input;
			
		if (Input == "1")
		{
			Party_Stats();
		}
		else if (Input == "2")
		{
			Monster_Stats();
		}
		else if (Input == "3")
		{
			NPC_Stats();
		}
		else if (Input == "4")
		{
			Random_Item();
		}
		else if (Input == "5")
		{
			Random_Shop();
		}
		else if (Input == "6")
		{
			Random_Person();
		}
		else if (Input == "7")
		{
			Battle_Tracker();
		}
		else if (Input == "8")
		{
			Bank_of_Emon bank;

			bank.Welcome();
		}
		else if (Input == "-999")
		{
			Exit();
		}
		else
		{
			system("cls");
			cout << "That is not a valid Input. Try Again.";
			Sleep(5000);
		}
	}

	system("pause");
	return 0;
}

//==================Display + Set Party Stats=====================
void Party_Stats()
{
	Players PCs;
	string Input;
	bool BadInput = true;

	while (BadInput)
	{
		system("cls");
		cout << "Enter what you want to do with the characters." << endl;
		cout << "Enter 1 to View their stats." << endl;
		cout << "Enter 2 to Add a character." << endl;
		cout << "Enter 3 to Delete a character." << endl;
		cout << "Enter 4 Level Up a character." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;
		cin.ignore();

		if (Input == "1")
		{
			PCs.Read_Character_File();
			PCs.View_Characters();
		}
		else if (Input == "2")
		{
			PCs.Add_Character();
			PCs.Read_Character_File();
		}
		else if (Input == "3")
		{
			PCs.Read_Character_File();
			PCs.Delete_Character();
		}
		else if (Input == "4")
		{
			PCs.Read_Character_File();
			PCs.Level_Up_Characters();
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}
//================================================================

//==================Display + Set Monster Stats===================
void Monster_Stats()
{
	Monsters mons;
	string Input;
	bool BadInput = true;

	while (BadInput)
	{
		system("cls");
		cout << "Enter what you want to do with the monsters." << endl;
		cout << "Enter 1 to View their stats." << endl;
		cout << "Enter 2 to Add a monster." << endl;
		cout << "Enter 3 to Delete a monster." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;
		cin.ignore();

		if (Input == "1")
		{
			mons.Read_Monster_File();
			mons.View_Monsters();
		}
		else if (Input == "2")
		{
			mons.Add_Monster();
			mons.Read_Monster_File();
		}
		else if (Input == "3")
		{
			mons.Read_Monster_File();
			mons.Delete_Monster();
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}
//================================================================

//==================Display + Set Party Stats=====================
void NPC_Stats()
{
	NPCs PCs;
	string Input;
	bool BadInput = true;

	while (BadInput)
	{
		system("cls");
		cout << "Enter what you want to do with the NPCs." << endl;
		cout << "Enter 1 to View their stats." << endl;
		cout << "Enter 2 to Add an NPC." << endl;
		cout << "Enter 3 to Delete an NPC." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;
		cin.ignore();

		if (Input == "1")
		{
			PCs.Read_NPC_File();
			PCs.View_NPC();
		}
		else if (Input == "2")
		{
			PCs.Add_NPC();
			PCs.Read_NPC_File();
		}
		else if (Input == "3")
		{
			PCs.Read_NPC_File();
			PCs.Delete_NPC();
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}
//================================================================

//============================Random Item=========================
void Random_Item()
{
	bool BadInput = true;
	string Input;

	while (BadInput)
	{
		system("cls");
		cout << "Enter which type of item gen you want." << endl;
		cout << "Etner 1 for Single items." << endl;
		cout << "Enter 2 for full containers" << endl;
		cout << "Enter 3 for Hoards." << endl;
		cout << "Enter 4 for a money generator." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;

		if (Input == "1")
		{
			Single_Item();
		}
		else if (Input == "2")
		{
			Container();
		}
		else if (Input == "3")
		{
			Hoard_Func();
		}
		else if (Input == "4")
		{
			Money();
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try again";
			Sleep(5000);
		}
	}
}
//================================================================

//============================Random Shops========================
void Random_Shop()
{
	bool BadInput = true;
	string Input;

	while (BadInput)
	{
		system("cls");
		cout << "Select what you want to generate." << endl;
		cout << "Enter 1 for a random shop name only." << endl;
		cout << "Enter 2 for a full shop with a preset type." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;

		cout << endl;

		if (Input == "1")
		{
			//can be done at literally any point

			//will give choice for what type of shop and generate from there.
		}
		else if (Input == "2")
		{
			//needs to have these things done
			//--People Name gen
			//--Shop name gen

			//will give choice for what type of shop and generate from there.
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}
//================================================================

//==========================Random Person=========================
void Random_Person()
{
	bool BadInput = true;
	string Input;
	NPCs npc;

	while (BadInput)
	{
		system("cls");
		cout << "Select what you want to generate." << endl;
		cout << "Enter 1 for a random person name only." << endl;
		cout << "Enter 2 for a full person with a preset type." << endl;
		cout << "Enter 3 for a full random person" << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;

		cout << endl;

		if (Input == "1")
		{
			string name;

			while (true)
			{
				system("cls");
				cout << "Select the race of the NPC." << endl;
				cout << "1. Human." << endl;
				cout << "2. Elf." << endl;
				cout << "3. Half-Elf." << endl;
				cout << "4. Dwarf." << endl;
				cout << "5. Gnome." << endl;
				cout << "6. Halfling." << endl;
				cout << "7. Half-Orc." << endl;
				cout << "8. Tiefling." << endl;
				cout << "9. Aasimar." << endl;
				cout << "10. Dragonborn." << endl;
				cout << "11. Orc" << endl;
				cout << "Selection: ";
				cin >> Input;

				cout << endl;

				if (Input == "1")
				{
					name = npc.Random_Name("Human", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "2")
				{
					name = npc.Random_Name("Elf", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "3")
				{
					name = npc.Random_Name("Half-Elf", 3);

					if (name == "Human")
					{
						name = npc.Random_Name("Human", 3);
					}
					else
					{
						name = npc.Random_Name("Elf", 3);
					}
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "4")
				{
					name = npc.Random_Name("Dwarf", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "5")
				{
					name = npc.Random_Name("Gnome", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "6")
				{
					name = npc.Random_Name("Halfling", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "7")
				{
					name = npc.Random_Name("Half-Orc", 3);

					if (name == "Human")
					{
						name = npc.Random_Name("Human", 3);
					}
					else
					{
						name = npc.Random_Name("Orc", 3);
					}

					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "8")
				{
					name = npc.Random_Name("Tiefling", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "9")
				{
					name = npc.Random_Name("Aasimar", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "10")
				{
					name = npc.Random_Name("Dragonborn", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else if (Input == "11")
				{
					name = npc.Random_Name("Orc", 3);
					cout << "Their name is " << name << "." << endl << endl;
					system("pause");
				}
				else
				{
					system("cls");
					cout << "Bad Input. Try Again" << endl;
					system("pause");
				}
			}
		}
		else if (Input == "2")
		{
			//needs to have these things done
			//--People name gen
			//--NPC tracker
		}
		else if (Input == "3")
		{
			//needs to have these things done
			//--People name gen
			//--NPC tracker
		}
		else if (Input == "-999")
		{
			main();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}
//================================================================

//===========================Battle System========================
void Battle_Tracker()
{
	int canBattle;
	Players play;
	Monsters mon;
	int num = 0;

	Battle_Track battle;
	int i = 0;
	int j = 0;
	int input;
	int count = 0;

	canBattle = battle.Can_Battle(); //Returns 0 if can 1 if not player info or 2 if no monster info

	if (canBattle == 1) //checks to see if the player.txt file has data
	{
		system("cls");
		cout << "There is no player information. That information is needed before the battle tracker can run." << endl << endl;
		system("pause");
		main();
	}
	else if (canBattle == 2)//checks the monster.txt file for data
	{
		system("cls");
		cout << "There is no monster information. That information is needed before the battle tracker can run." << endl << endl;
		system("pause");
		main();
	}
	else
	{
		num = play.Read_Character_File_Battle();

		play.Store_Battle();

		mon.Read_Monster_File_Battle();

		mon.Set_Battle_Vect(num);

		battle.Vect_SetUp();

		battle.Init_Roll();

		battle.Vect_Ini_Sort();

		battle.Battle_System();
		//Ask for saving throw tracker when dead
	}
}
//================================================================

//====================================Item Selection==============
void Single_Item()
{
	bool BadInput = true;
	string Input;
	int Dice_Roll;
	const int Dice_Max = 99;
	Single_Items Single;
	Magic_Items Magic;
	string Tool;
	string Armor;
	string Weapon;
	string Food;
	string Drink;
	string Gems;
	string Art;
	string Kit;
	string Potion;

	while (BadInput)
	{
		system("cls");
		cout << "Select which type of single item you want to generate." << endl;
		cout << "Enter 1 for a tool." << endl;
		cout << "Enter 2 for a weapon." << endl;
		cout << "Enter 3 for armor." << endl;
		cout << "Enter 4 for a potion." << endl;
		cout << "Enter 5 for kits." << endl;
		cout << "Enter 6 for food." << endl;
		cout << "Enter 7 for a drink." << endl;
		cout << "Enter 8 for a gem." << endl;
		cout << "Enter 9 for an art object." << endl;
		cout << "Enter 10 for a magic item." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;

		cout << endl;

		if (Input == "1")
		{
			Single.Set_Tool();

			cout << "You got " << Single.Get_Tool() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "2")
		{
			Single.Set_Weapon();
			cout << "You got " << Single.Get_Weapon() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "3")
		{
			Single.Set_Armor();
			cout << "You got " << Single.Get_Armor() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "4")
		{
			Single.Set_Potion();
			cout << "You got " << Single.Get_Potion() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "5")
		{
			Single.Set_Kit();
			cout << "You got " << Single.Get_Kit() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "6")
		{
			Single.Set_Food();
			cout << "You got " << Single.Get_Food() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "7")
		{
			Single.Set_Drink();
			cout << "You got " << Single.Get_Drink() << "." << endl << endl;
			system("pause");
		}
		else if (Input == "8")
		{

			int Dice_Roll;
			const int Dice_Max = 119;

			Dice_Roll = (rand() % Dice_Max) + 1;

			if (Dice_Roll >= 1 && Dice_Roll <= 30)
			{
				Single.Set_Gem_10gp();
				cout << "You got " << Single.Get_Gem_10gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 31 && Dice_Roll <= 55)
			{
				Single.Set_Gem_50gp();
				cout << "You got " << Single.Get_Gem_50gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 56 && Dice_Roll <= 75)
			{
				Single.Set_Gem_100gp();
				cout << "You got " << Single.Get_Gem_100gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 76 && Dice_Roll <= 90)
			{
				Single.Set_Gem_1000gp();
				cout << "You got " << Single.Get_Gem_1000gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 91 && Dice_Roll <= 100)
			{
				Single.Set_Gem_5000gp();
				cout << "You got " << Single.Get_Gem_5000gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 101 && Dice_Roll <= 120)
			{
				Single.Set_Gem_500gp();
				cout << "You got " << Single.Get_Gem_500gp() << "." << endl << endl;
				system("pause");
			}
		}
		else if (Input == "9")
		{

			int Dice_Roll;
			const int Dice_Max = 99;

			Dice_Roll = (rand() % Dice_Max) + 1;

			if (Dice_Roll >= 1 && Dice_Roll <= 30)
			{
				Single.Set_Art_25gp();
				cout << "You got " << Single.Get_Art_25gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 31 && Dice_Roll <= 55)
			{
				Single.Set_Art_250gp();
				cout << "You got " << Single.Get_Art_250gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 56 && Dice_Roll <= 75)
			{
				Single.Set_Art_750gp();
				cout << "You got " << Single.Get_Art_750gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 76 && Dice_Roll <= 90)
			{
				Single.Set_Art_2500gp();
				cout << "You got " << Single.Get_Art_2500gp() << "." << endl << endl;
				system("pause");
			}
			else if (Dice_Roll >= 91 && Dice_Roll <= 100)
			{
				Single.Set_Art_7500gp();
				cout << "You got " << Single.Get_Art_7500gp() << "." << endl << endl;
				system("pause");
			}
		}
		else if (Input == "10")
		{
			string InputM;
			bool BadInput = true;

			while (BadInput)
			{
				system("cls");
				cout << "Enter 1 for Magic Item Table A." << endl;
				cout << "Enter 2 for Magic Item Table B." << endl;
				cout << "Enter 3 for Magic Item Table C." << endl;
				cout << "Enter 4 for Magic Item Table D." << endl;
				cout << "Enter 5 for Magic Item Table E." << endl;
				cout << "Enter 6 for Magic Item Table F." << endl;
				cout << "Enter 7 for Magic Item Table G." << endl;
				cout << "Enter 8 for Magic Item Table H." << endl;
				cout << "Enter 9 for Magic Item Table I." << endl;
				cout << "Enter -999 for a different option." << endl;
				cout << "Select which table you want to roll on: ";
				cin >> InputM;

				cout << endl;

				if (InputM == "1")
				{
					Magic.Set_MagicItem_A();
					cout << "You got " << Magic.Get_magicItem_A() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "2")
				{
					Magic.Set_MagicItem_B();
					cout << "You got " << Magic.Get_magicItem_B() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "3")
				{
					Magic.Set_MagicItem_C();
					cout << "You got " << Magic.Get_magicItem_C() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "4")
				{
					Magic.Set_MagicItem_D();
					cout << "You got " << Magic.Get_magicItem_D() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "5")
				{
					Magic.Set_MagicItem_E();
					cout << "You got " << Magic.Get_magicItem_E() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "6")
				{
					Magic.Set_MagicItem_F();
					cout << "You got " << Magic.Get_magicItem_F() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "7")
				{
					Magic.Set_MagicItem_G();
					cout << "You got " << Magic.Get_magicItem_G() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "8")
				{
					Magic.Set_MagicItem_H();
					cout << "You got " << Magic.Get_magicItem_H() << "." << endl << endl;
					system("pause");
				}
				else if (InputM == "9")
				{
					Magic.Set_MagicItem_I();
					cout << "You got " << Magic.Get_magicItem_I() << "." << endl << endl;
					system("pause");
				}
				else if (Input == "-999")
				{
					Single_Item();
				}
				else
				{
					Single_Item();
				}
			}
		}
		else if (Input == "-999")
		{
			Random_Item();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}

void Container()
{
	bool BadInput = true;
	string Input;
	Containers contain;

	while (BadInput)
	{
		system("cls");
		cout << "Select which type of container you want to generate." << endl;
		cout << "Enter 1 for a chest." << endl;
		cout << "Enter 2 for a burial urn." << endl;
		cout << "Enter 3 for a crate." << endl;
		cout << "Enter 4 for a barrel." << endl;
		cout << "Enter 5 for a lockbox." << endl;
		cout << "Enter 6 for a wagon." << endl;
		cout << "Enter -999 to select a different option." << endl;
		cout << "Selection: ";
		cin >> Input;

		cout << endl;

		if (Input == "1")
		{
			contain.Set_Chest();
			cout << contain.Get_Chest() << endl << endl;
			system("pause");
		}
		else if (Input == "2")
		{
			contain.Set_burialUrn();
			cout << contain.Get_burialUrn() << endl << endl;
			system("pause");
		}
		else if (Input == "3")
		{
			contain.Set_Crate();
			cout << contain.Get_Crate() << endl << endl;
			system("pause");
		}
		else if (Input == "4")
		{
			contain.Set_Barrel();
			cout << contain.Get_Barrel() << endl << endl;
			system("pause");
		}
		else if (Input == "5")
		{
			contain.Set_Lockbox();
			cout << contain.Get_Lockbox() << endl << endl;
			system("pause");
		}
		else if (Input == "6")
		{
			contain.Set_Wagon();
			cout << contain.Get_Wagon() << endl << endl;
			system("pause");
		}
		else if (Input == "-999")
		{
			Random_Item();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}

void Hoard_Func()
{
	bool BadInput = true;
	string Input;
	Hoard hoard;

	while (BadInput)
	{
		system("cls");
		cout << "Enter 1 for a hoard of challenge rating 0-4." << endl;
		cout << "Enter 2 for a hoard of challenge rating 5-10." << endl;
		cout << "Enter 3 for a hoard of challenge rating 11-16." << endl;
		cout << "Enter 4 for a hoard of challenge rating 17+." << endl;
		cout << "Enter -999 to select a different option." << endl;
		cout << "Selection: ";
		cin >> Input;

		if (Input == "1")
		{
			hoard.Set_Hoard_Zero_to_Four();
			cout << hoard.Get_Hoard_Zero_to_Four() << endl << endl;
			system("pause");
		}
		else if (Input == "2")
		{
			hoard.Set_Hoard_Five_to_Ten();
			cout << hoard.Get_Hoard_Five_to_Ten() << endl << endl;
			system("pause");
		}
		else if (Input == "3")
		{
			hoard.Set_Hoard_Eleven_to_Sixteen();
			cout << hoard.Get_Hoard_Eleven_to_Sixteen() << endl << endl;
			system("pause");
		}
		else if (Input == "4")
		{
			hoard.Set_Hoard_Seventeen_Plus();
			cout << hoard.Get_Hoard_Seventeen_Plus() << endl << endl;
			system("pause");
		}
		else if (Input == "-999")
		{
			Random_Item();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}

void Money()
{
	bool BadInput = true;
	string Input;
	Dollar Currency;

	while (BadInput)
	{
		system("cls");
		cout << "Enter 1 for treasure of challenge rating 0-4." << endl;
		cout << "Enter 2 for treasure of challenge rating 5-10." << endl;
		cout << "Enter 3 for treasure of challenge rating 11-16." << endl;
		cout << "Enter 4 for treasure of challenge rating 17+." << endl;
		cout << "Enter -999 to select a different option." << endl;
		cout << "Selection: ";
		cin >> Input;

		cout << endl;

		if (Input == "1")
		{
			Currency.Set_Zero_To_Four();

			cout << "You got the following:" << endl;
			cout << "Copper: " << Currency.copper << endl;
			cout << "Silver: " << Currency.silver << endl;
			cout << "Electrum: " << Currency.electrum << endl;
			cout << "Gold: " << Currency.gold << endl;
			cout << "Platinum: " << Currency.platinum << endl << endl << endl;
			system("pause");
		}
		else if (Input == "2")
		{
			Currency.Set_Five_To_Ten();

			cout << "You got the following:" << endl;
			cout << "Copper: " << Currency.copper << endl;
			cout << "Silver: " << Currency.silver << endl;
			cout << "Electrum: " << Currency.electrum << endl;
			cout << "Gold: " << Currency.gold << endl;
			cout << "Platinum: " << Currency.platinum << endl << endl << endl;
			system("pause");
		}
		else if (Input == "3")
		{
			Currency.Set_Eleven_To_Sixteen();

			cout << "You got the following:" << endl;
			cout << "Copper: " << Currency.copper << endl;
			cout << "Silver: " << Currency.silver << endl;
			cout << "Electrum: " << Currency.electrum << endl;
			cout << "Gold: " << Currency.gold << endl;
			cout << "Platinum: " << Currency.platinum << endl << endl << endl;
			system("pause");
		}
		else if (Input == "4")
		{
			Currency.Set_Seventeen_Plus();

			cout << "You got the following:" << endl;
			cout << "Copper: " << Currency.copper << endl;
			cout << "Silver: " << Currency.silver << endl;
			cout << "Electrum: " << Currency.electrum << endl;
			cout << "Gold: " << Currency.gold << endl;
			cout << "Platinum: " << Currency.platinum << endl << endl << endl;
			system("pause");
		}
		else if (Input == "-999")
		{
			Random_Item();
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try Again.";
			Sleep(5000);
		}
	}
}

//======================================================================

//===============================Other==================================
void Exit()
{
	system("cls");
	cout << "Thank you for using the program. Goodbye." << endl;
	Sleep(1500);
	exit(0);
}
