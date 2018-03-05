#include "stdafx.h"
#include "MiscStuff.h"


MiscStuff::MiscStuff()
{
	bool BadInput = true;
	string Input;

	while (BadInput)
	{
		system("cls");
		cout << "Enter which type of item gen you want." << endl;
		cout << "Etner 1 for Chaos Bolt Damage." << endl;
		cout << "Enter -999 to return to the menu." << endl;
		cout << "Selection: ";
		cin >> Input;

		if (Input == "1")
		{
			int Dice_Roll;
			const int Dice_Max = 7;

			Dice_Roll = (rand() % Dice_Max) + 1;

			cout << endl;

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

			cout << "The damage type is " << chaosBolt << "." << endl << endl;
			system("pause");
		}
		else if (Input == "-999")
		{
			BadInput = false;
		}
		else
		{
			system("cls");
			cout << "Bad Input. Try again";
			Sleep(5000);
		}
	}
}


MiscStuff::~MiscStuff()
{
}
