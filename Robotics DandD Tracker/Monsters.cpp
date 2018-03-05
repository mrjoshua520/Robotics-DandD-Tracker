#include "stdafx.h"
#include "Monsters.h"

ifstream inputFileMon;
ofstream outputFileMon;
ofstream tempMon;

Monsters::Monsters()
{
}


Monsters::~Monsters()
{
}

void Monsters::Read_Monster_File()
{
	ifstream inputFileMon;

	inputFileMon.open(fileName);

	monster.clear();

	if (inputFileMon)
	{
		if (inputFileMon.peek() != std::ifstream::traits_type::eof())
		{
			for (int count = 0; getline(inputFileMon, name); count++)
			{
				monster.push_back(Monsters());

				comma = name.find(',');
				monster[count].monName = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].type = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].size = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].Alignment = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].strScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].strMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].dexScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].dexMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].conScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].conMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].intScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].intMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].wisScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].wisMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].chaScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].chaMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].armorClass = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].speed = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].initiative = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].totalHealth = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].passivePerception = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				monster[count].challengeRating = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);
			}
		}
		else
		{
			system("cls");
			cout << "The monster text file is empty. Please Add a monster." << endl;
			system("pause");
			Add_Monster();
		}
	}
	inputFileMon.close();
}
void Monsters::Delete_Monster()
{
	ifstream inputFileMon;
	ofstream tempMon;
	string Input;
	bool BadInput = true;
	int count = 0;
	int i = 0;
	inputFileMon.open(fileName);
	tempMon.open("tempMon.txt");
	system("cls");

	cout << "Which monster do you want to remove?" << endl;
	cout << "==========CURRENT Monsters==========" << endl;
	for (Monsters mon : monster)
	{
		cout << "Monster Name: " << mon.monName << "       Type of monster: " << mon.type << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (Monsters mon : monster)
	{
		count++;
	}

	for (Monsters mon : monster)
	{
		if (mon.monName == Input)
		{
			break;
		}
		else
		{
			i++;
		}
	}

	if (count == i)
	{
		system("cls");
		cout << "There is no monster with the name " << Input << "." << endl;
		system("pause");
	}
	else
	{
		for (int count = 0; getline(inputFileMon, name); count++)
		{
			comma = name.find(',');
			val = name.substr(0, comma);

			if (val != Input)
			{
				tempMon << name << endl;
			}
		}
		inputFileMon.close();
		tempMon.close();
		remove("Monsters.txt");
		rename("tempMon.txt", "Monsters.txt");
		remove("tempMon.txt");
	}
}
void Monsters::Add_Monster()
{
	outputFileMon.open(fileName, ofstream::app);

	bool BadInput = true;
	int numOfChars;
	int temp;
	int tempWis;

	while (BadInput)
	{
		string Input;
		int inputLength = 0;
		system("cls");
		cout << "How many monsters do you want to add?" << endl;
		cout << "Amount: ";
		getline(cin, Input);

		inputLength = Input.length();

		for (int i = 0; i < inputLength; i++)
		{
			if (isdigit(Input[i]))
			{
			}
			else
			{
				BadInput = true;
				system("cls");
				cout << "Bad Input. Please enter a number." << endl;
				system("pause");
				break;
			}
			numOfChars = stoi(Input);
			BadInput = false;
		}
	}

	for (static int i = 0; i < numOfChars; i++)
	{
		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the monster name for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFileMon << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the type for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFileMon << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the size for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFileMon << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the alignment for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFileMon << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the strength score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the dexterity score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the constitution score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the intelligence score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the wisdom score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
			tempWis = temp;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the charisma score for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFileMon << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the armor class for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the speed for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the initiative for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the total health for Monster " << (i + 1) << ": " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input << ",";
		}

		outputFileMon << to_string(10 + tempWis) << ",";

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the challenge rating for Monster " << (i + 1) << " is at: " << endl;
			getline(cin, Input);

			inputLength = Input.length();

			for (int i = 0; i < inputLength; i++)
			{
				if (isdigit(Input[i]))
				{
				}
				else
				{
					BadInput = true;
					system("cls");
					cout << "Bad Input. Please enter a number." << endl;
					system("pause");
					break;
				}
				BadInput = false;
			}
			outputFileMon << Input;
		}

		outputFileMon << "\n";

	}
	outputFileMon.close();
}
void Monsters::View_Monsters()
{
	string Input;

	inputFileMon.open(fileName);

	system("cls");
	cout << "Enter the name of the Monster you want to view." << endl;
	cout << endl << "=====CURRENT Monsters======" << endl;

	for (Monsters mon : monster)
	{
		cout << "Monster Name: " << mon.monName << "       Type of monster: " << mon.type << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (Monsters mon : monster)
	{
		if (Input == mon.monName)
		{
			system("cls");
			cout << "==========" << mon.monName << "'s Stats ==========" << endl << endl;
			cout << mon.monName << " is a " << mon.size << " " << mon.type << " of challenge rating " << mon.challengeRating << ". It is " << mon.Alignment << "." << endl;
			cout << "Total Health       : " << mon.totalHealth << endl;
			cout << "Current Health     : " << mon.currentHealth << endl;
			cout << "Armor Class        : " << mon.armorClass << endl;
			cout << "Speed              : " << mon.speed << endl;
			cout << "Initiative         : " << mon.initiative << endl;
			cout << "Passive Perception : " << mon.passivePerception << endl;
			cout << "Strength Score     : " << mon.strScore << endl;
			cout << "   Strength Mod    : " << mon.strMod << endl;
			cout << "Dexterity Score    : " << mon.dexScore << endl;
			cout << "   Dexterity Mod   : " << mon.dexMod << endl;
			cout << "Constitution Score : " << mon.conScore << endl;
			cout << "   Constitution Mod: " << mon.conMod << endl;
			cout << "Intelligence Score : " << mon.intScore << endl;
			cout << "   Intelligence Mod: " << mon.intMod << endl;
			cout << "Wisdom Score       : " << mon.wisScore << endl;
			cout << "   Wisdom Mod      : " << mon.wisMod << endl;
			cout << "Charisma Score     : " << mon.chaScore << endl;
			cout << "   Charisma Mod    : " << mon.chaMod << endl << endl << endl << endl;

			cout << "Enter a Selection." << endl;
			cout << "Enter 1 to View a different Character." << endl;
			cout << "Enter -999 to return to the menu." << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "1")
			{
				View_Monsters();
			}
			else if (Input == "-999")
			{

			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				Sleep(5000);
			}

		}
		else
		{

		}
	}
	inputFileMon.close();
}

void Monsters::Set_Current_HP()
{
	for (Monsters mon : monster)
	{
		mon.currentHealth = mon.totalHealth;
	}
}