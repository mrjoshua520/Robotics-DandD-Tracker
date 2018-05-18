#include "stdafx.h"
#include "NPCs.h"


NPCs::NPCs()
{
}


NPCs::~NPCs()
{
}

void NPCs::Read_NPC_File()
{
	//reads the text file for NPCs and stores into a vector

	ifstream inputFile;

	inputFile.open(fileName);

	npc.clear();

	if (inputFile)
	{
		if (inputFile.peek() != std::ifstream::traits_type::eof())
		{
			for (int count = 0; getline(inputFile, name); count++)
			{
				npc.push_back(NPCs());

				comma = name.find(',');
				npc[count].charName = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].playerName = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Class = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].race = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Alignment = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].strScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].strMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].dexScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].dexMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].conScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].conMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].intScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].intMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].wisScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].wisMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].chaScore = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].chaMod = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].armorClass = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].speed = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].initiative = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].totalHealth = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].passivePerception = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].expPoints = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].level = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Personality = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Voice = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Job = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				npc[count].Location = name.substr(0, comma);
				name = name.substr(comma + 1);
			}
		}
		else
		{
			system("cls");
			cout << "The NPC text file is empty. Please Add an NPC." << endl;
			system("pause");
			Add_NPC();
		}
	}
	inputFile.close();
}
void NPCs::View_NPC()
{
	//allows users to view current players

	string Input;
	ifstream inputFile;

	inputFile.open(fileName);

	system("cls");
	cout << "Enter the name of the NPC you want to view." << endl;
	cout << endl << "=====CURRENT NPCs======" << endl;

	for (NPCs play : npc)
	{
		cout << "NPC Name: " << play.charName << "       Played by: " << play.playerName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (NPCs play : npc)
	{
		if (Input == play.charName)
		{
			system("cls");
			cout << "==========" << play.charName << "'s Stats ==========" << endl << endl;
			cout << play.charName << " is played by " << play.playerName << "." << endl;
			cout << play.charName << " is a " << play.race << " " << play.Class << " of level " << play.level << ". They are " << play.Alignment << "." << endl << endl;
			cout << play.charName << " works at " << play.Job << " at " << play.Location << ". They are " << play.Personality << " and have a " << play.Voice << " voice." << endl;
			cout << "Total Health       : " << play.totalHealth << endl;
			cout << "Current Health     : " << play.currentHealth << endl;
			cout << "Experience Points  : " << play.expPoints << endl;
			cout << "Armor Class        : " << play.armorClass << endl;
			cout << "Speed              : " << play.speed << endl;
			cout << "Initiative         : " << play.initiative << endl;
			cout << "Passive Perception : " << play.passivePerception << endl;
			cout << "Strength Score     : " << play.strScore << endl;
			cout << "   Strength Mod    : " << play.strMod << endl;
			cout << "Dexterity Score    : " << play.dexScore << endl;
			cout << "   Dexterity Mod   : " << play.dexMod << endl;
			cout << "Constitution Score : " << play.conScore << endl;
			cout << "   Constitution Mod: " << play.conMod << endl;
			cout << "Intelligence Score : " << play.intScore << endl;
			cout << "   Intelligence Mod: " << play.intMod << endl;
			cout << "Wisdom Score       : " << play.wisScore << endl;
			cout << "   Wisdom Mod      : " << play.wisMod << endl;
			cout << "Charisma Score     : " << play.chaScore << endl;
			cout << "   Charisma Mod    : " << play.chaMod << endl << endl << endl << endl;

			cout << "Enter a Selection." << endl;
			cout << "Enter 1 to View a different NPC." << endl;
			cout << "Enter -999 to return to the menu." << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "1")
			{
				View_NPC();
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
	inputFile.close();
}
void NPCs::Delete_NPC()
{
	//deletes a player from the txt file

	ifstream inputFile;
	ofstream temp;
	string Input;
	bool BadInput = true;
	int count = 0;
	int i = 0;
	inputFile.open(fileName);
	temp.open("TempNPC.txt");
	system("cls");

	cout << "Which NPC do you want to remove?" << endl;
	cout << "==========CURRENT NPC==========" << endl;
	for (NPCs play : npc)
	{
		cout << "NPC Name: " << play.charName << "       Played by: " << play.playerName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (NPCs play : npc)
	{
		count++;
	}

	for (NPCs play : npc)
	{
		if (play.charName == Input)
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
		cout << "There is no NPC with the name " << Input << "." << endl;
		system("pause");
	}
	else
	{
		for (int count = 0; getline(inputFile, name); count++)
		{
			comma = name.find(',');
			val = name.substr(0, comma);

			if (val != Input)
			{
				temp << name << endl;
			}
		}
		inputFile.close();
		temp.close();
		remove("NPCs.txt");
		rename("TempNPC.txt", "NPCs.txt");
		remove("TempNPC.txt");
	}
}
void NPCs::Add_NPC()
{
	//adds am NPC to the text file

	ofstream outputFile;

	outputFile.open(fileName, ofstream::app);

	bool BadInput = true;
	int numOfChars;
	int temp;
	int tempWis;

	while (BadInput)
	{
		string Input;
		int inputLength = 0;
		system("cls");
		cout << "How many NPCs do you want to add?" << endl;
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
			cout << "Enter the character name for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the player name for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the class for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the race for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the alignment for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the strength score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the dexterity score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the constitution score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the intelligence score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the wisdom score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
			tempWis = temp;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the charisma score for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
			temp = (stoi(Input) - 10) / 2;
			outputFile << to_string(temp) << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the armor class for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the speed for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the initiative for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the total health for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
		}

		outputFile << to_string(10 + tempWis) << ",";

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the current amout of EXP for NPC " << (i + 1) << ": " << endl;
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
			outputFile << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the current level NPC " << (i + 1) << " is at: " << endl;
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
			outputFile << Input << ",";
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the personality for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the voice for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the job for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input << ",";

			BadInput = false;
		}

		BadInput = true;

		while (BadInput)
		{
			string Input;
			int inputLength = 0;
			system("cls");
			cout << "Enter the location for NPC " << (i + 1) << ": " << endl;
			getline(cin, Input);

			outputFile << Input;

			BadInput = false;
		}

		BadInput = true;

		outputFile << "\n";

	}
	outputFile.close();
}
string NPCs::Random_Name(string race, int gender)
{
	int Prefix;
	int Suffix;
	int Last_Prefix;
	int Last_Suffix;
	int Half_Race;
	int Name_Choice;
	string Gender;
	string First_Name;
	string Last_Name;
	string Full_Name;
	const int Dice_Max = 99;
	bool bad = true;

	if (gender == 3)
	{
		gender = (rand() % Dice_Max) + 1;

		if (gender >= 1 && gender <= 50)
		{
			Gender = "Male";
		}
		else
		{
			Gender = "Female";
		}
	}

	Name_Choice = (rand() % Dice_Max) + 1;
	Half_Race = (rand() % Dice_Max) + 1;
	Prefix = (rand() % Dice_Max) + 1;
	Suffix = (rand() % Dice_Max) + 1;
	Last_Prefix = (rand() % Dice_Max) + 1;
	Last_Suffix = (rand() % Dice_Max) + 1;

	cout << endl << endl << Name_Choice << endl << endl;

	if (race == "Human")
	{
		if (Gender == "Male")
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name = "Jackson";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name = "Aiden";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name = "Lucas";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name = "Liam";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name = "Noah";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name = "Mason";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name = "Caden";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name = "Oliver";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name = "Ethan";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name = "Elijah";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name = "Grayson";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name = "Jacob";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name = "Michael";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name = "Benjamin";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name = "Carter";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name = "James";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name = "Jayden";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name = "Logan";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name = "Alexander";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name = "Caleb";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name = "Ryan";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name = "Luke";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name = "Daniel";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name = "Jack";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name = "William";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name = "Owen";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name = "Gabriel";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name = "Matthew";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name = "Conner";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name = "Jayce";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name = "Isaac";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name = "Sebastian";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name = "Henry";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name = "Cameron";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name = "Wyatt";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name = "Muhammad";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name = "Dylan";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name = "Nathan";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name = "Nicholas";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name = "Julian";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name = "Eli";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name = "Levi";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name = "Isaiah";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name = "Landon";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name = "David";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name = "Christian";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name = "Andrew";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name = "Brayden";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name = "John";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name = "Lincoln";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name = "Samuel";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name = "Joseph";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name = "Hunter";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name = "Joshua";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name = "Mateo";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name = "Dominic";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name = "Adam";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name = "Leo";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name = "Ian";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name = "Josiah";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name = "Anthony";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name = "Colton";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name = "Max";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name = "Thomas";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name = "Evan";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name = "Nolan";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name = "Aaron";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name = "Carson";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name = "Christopher";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name = "Hudson";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name = "Cooper";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name = "Adrian";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name = "Jonathan";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name = "Jason";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name = "Charlie";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name = "Miles";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name = "Jeremiah";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name = "Gavin";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name = "Asher";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name = "Austin";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name = "Ezra";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name = "Chase";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name = "Alex";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name = "Xavier";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name = "Jordan";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name = "Tristan";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name = "Easton";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name = "Zachary";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name = "Parker";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name = "Bryson";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name = "Tyler";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name = "Camden";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name = "Damian";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name = "Declan";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name = "Elliot";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name = "Elias";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name = "Cole";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name = "Harrison";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name = "Zane";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Kai";
					bad = false;
				}
			}

			bad = true;
		}
		else
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name = "Sophia";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name = "Emma";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name = "Olivia";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name = "Ava";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name = "Mia";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name = "Isabella";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name = "Riley";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name = "Aria";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name = "Zoe";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name = "Charlotte";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name = "Lily";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name = "Layla";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name = "Amelia";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name = "Emily";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name = "Madelyn";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name = "Aubrey";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name = "Adalyn";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name = "Madison";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name = "Chloe";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name = "Harper";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name = "Abigail";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name = "Aaliyah";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name = "Avery";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name = "Evelyn";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name = "Kaylee";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name = "Ella";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name = "Ellie";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name = "Scarlett";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name = "Arianna";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name = "Hailey";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name = "Nora";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name = "Addison";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name = "Brooklyn";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name = "Hannah";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name = "Mila";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name = "Leah";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name = "Elizabeth";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name = "Sarah";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name = "Eliana";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name = "Mackenzie";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name = "Peyton";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name = "Maria";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name = "Grace";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name = "Adeline";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name = "Elena";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name = "Anna";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name = "Victoria";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name = "Camilla";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name = "Lillian";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name = "Natalie";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name = "Isabelle";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name = "Skyler";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name = "Maya";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name = "Lucy";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name = "Lila";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name = "Audrey";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name = "Makayla";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name = "Penelope";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name = "Claire";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name = "Kennedy";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name = "Paisley";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name = "Savannah";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name = "Alaina";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name = "Gabriella";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name = "Violet";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name = "Kylie";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name = "Charlie";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name = "Stella";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name = "Allison";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name = "Liliana";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name = "Eva";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name = "Callie";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name = "Kinsley";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name = "Reagan";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name = "Sophie";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name = "Alyssa";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name = "Alice";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name = "Caroline";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name = "Aurora";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name = "Eleanor";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name = "Juliana";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name = "Annabelle";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name = "Emilia";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name = "Sadie";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name = "Bella";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name = "Julia";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name = "Keira";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name = "Bailey";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name = "Hazel";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name = "Jocelyn";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name = "Monika";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name = "Samantha";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name = "Vivian";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name = "Gianna";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name = "Alexandra";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name = "Cora";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name = "Melanie";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name = "Everly";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name = "Jordyn";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Luna";
					bad = false;
				}
			}

			bad = true;
		}

		Prefix = (rand() % 49) + 1;

		while (bad == true)
		{
			//Prefix Generation for First Name
			if (Prefix == 1)
			{
				Last_Name = "Euling";
				bad = false;
			}
			else if (Prefix == 2)
			{
				Last_Name = "Buchan";
				bad = false;
			}
			else if (Prefix == 3)
			{
				Last_Name = "Silvera";
				bad = false;
			}
			else if (Prefix == 4)
			{
				Last_Name = "Erickson";
				bad = false;
			}
			else if (Prefix == 5)
			{
				Last_Name = "Frenkel";
				bad = false;
			}
			else if (Prefix == 6)
			{
				Last_Name = "Mcleish";
				bad = false;
			}
			else if (Prefix == 7)
			{
				Last_Name = "Saville";
				bad = false;
			}
			else if (Prefix == 8)
			{
				Last_Name = "Thurston";
				bad = false;
			}
			else if (Prefix == 9)
			{
				Last_Name = "Spiring";
				bad = false;
			}
			else if (Prefix == 10)
			{
				Last_Name = "Kaxiras";
				bad = false;
			}
			else if (Prefix == 11)
			{
				Last_Name = "Khalsa";
				bad = false;
			}
			else if (Prefix == 12)
			{
				Last_Name = "Dutschke";
				bad = false;
			}
			else if (Prefix == 13)
			{
				Last_Name = "Vitale";
				bad = false;
			}
			else if (Prefix == 14)
			{
				Last_Name = "Freedberg";
				bad = false;
			}
			else if (Prefix == 15)
			{
				Last_Name = "Tribble";
				bad = false;
			}
			else if (Prefix == 16)
			{
				Last_Name = "Eck";
				bad = false;
			}
			else if (Prefix == 17)
			{
				Last_Name = "Koegel";
				bad = false;
			}
			else if (Prefix == 18)
			{
				Last_Name = "Grolnic";
				bad = false;
			}
			else if (Prefix == 19)
			{
				Last_Name = "Trento";
				bad = false;
			}
			else if (Prefix == 20)
			{
				Last_Name = "Heil";
				bad = false;
			}
			else if (Prefix == 21)
			{
				Last_Name = "Terzi";
				bad = false;
			}
			else if (Prefix == 22)
			{
				Last_Name = "Samaranayake";
				bad = false;
			}
			else if (Prefix == 23)
			{
				Last_Name = "Gaetz";
				bad = false;
			}
			else if (Prefix == 24)
			{
				Last_Name = "Mcmahon";
				bad = false;
			}
			else if (Prefix == 25)
			{
				Last_Name = "Shinagel";
				bad = false;
			}
			else if (Prefix == 26)
			{
				Last_Name = "Jackson";
				bad = false;
			}
			else if (Prefix == 27)
			{
				Last_Name = "Menashi";
				bad = false;
			}
			else if (Prefix == 28)
			{
				Last_Name = "Schantz";
				bad = false;
			}
			else if (Prefix == 29)
			{
				Last_Name = "Dethridge";
				bad = false;
			}
			else if (Prefix == 30)
			{
				Last_Name = "Sheffield";
				bad = false;
			}
			else if (Prefix == 31)
			{
				Last_Name = "Luppi";
				bad = false;
			}
			else if (Prefix == 32)
			{
				Last_Name = "Franconi";
				bad = false;
			}
			else if (Prefix == 33)
			{
				Last_Name = "Wadleigh";
				bad = false;
			}
			else if (Prefix == 34)
			{
				Last_Name = "Stevens";
				bad = false;
			}
			else if (Prefix == 35)
			{
				Last_Name = "Alexander";
				bad = false;
			}
			else if (Prefix == 36)
			{
				Last_Name = "Carson";
				bad = false;
			}
			else if (Prefix == 37)
			{
				Last_Name = "Carpenter";
				bad = false;
			}
			else if (Prefix == 38)
			{
				Last_Name = "Gilbert";
				bad = false;
			}
			else if (Prefix == 39)
			{
				Last_Name = "Eby";
				bad = false;
			}
			else if (Prefix == 40)
			{
				Last_Name = "Sealock";
				bad = false;
			}
			else if (Prefix == 41)
			{
				Last_Name = "Ceriale";
				bad = false;
			}
			else if (Prefix == 42)
			{
				Last_Name = "Zoeller";
				bad = false;
			}
			else if (Prefix == 43)
			{
				Last_Name = "Masson";
				bad = false;
			}
			else if (Prefix == 44)
			{
				Last_Name = "Benson";
				bad = false;
			}
			else if (Prefix == 45)
			{
				Last_Name = "Williams";
				bad = false;
			}
			else if (Prefix == 46)
			{
				Last_Name = "Davis";
				bad = false;
			}
			else if (Prefix == 47)
			{
				Last_Name = "Hunt";
				bad = false;
			}
			else if (Prefix == 48)
			{
				Last_Name = "Daniels";
				bad = false;
			}
			else if (Prefix == 49)
			{
				Last_Name = "Breschi";
				bad = false;
			}
			else if (Prefix == 50)
			{
				Last_Name = "Rybalov";
				bad = false;
			}
		}

		bad = true;

		Full_Name = First_Name + " " + Last_Name;

		return Full_Name;

	}
	else if (race == "Elf") //Done
	{
		if (Name_Choice >= 1 && Name_Choice <= 40)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name = "Ael";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name = "Aer";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name = "Af";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name = "Ah";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name = "Al";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name = "Am";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name = "Ama";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name = "An";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name = "Ang";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name = "Ansr";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name = "Ar";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name = "Ari";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name = "Arn";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name = "Aza";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name = "Bael";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name = "Bes";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name = "Cael";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name = "Cas";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name = "Cla";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name = "Cor";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name = "Cy";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name = "Dae";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name = "Dho";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name = "Dre";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name = "Du";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name = "Eli";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name = "Eir";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name = "El";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name = "Er";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name = "Ev";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name = "Fera";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name = "Fi";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name = "Fir";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name = "Fis";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name = "Gael";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name = "Gar";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name = "Gil";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name = "Ha";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name = "Hu";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name = "Ia";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name = "Il";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name = "Ja";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name = "Jar";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name = "Ka";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name = "Kan";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name = "Ker";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name = "Keth";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name = "Koeh";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name = "Kor";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name = "Ky";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name = "La";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name = "Laf";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name = "Lam";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name = "Lue";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name = "Ly";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name = "Mai";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name = "Mal";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name = "Mara";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name = "My";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name = "Na";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name = "Nai";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name = "Nim";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name = "Nu";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name = "Ny";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name = "Py";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name = "Raer";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name = "Re";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name = "Ren";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name = "Rid";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name = "Ru";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name = "Rua";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name = "Rum";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name = "Ry";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name = "Sae";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name = "Seh";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name = "Sel";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name = "Sha";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name = "She";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name = "Si";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name = "Sim";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name = "Sol";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name = "Sum";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name = "Syl";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name = "Ta";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name = "Tahl";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name = "Tha";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name = "Tho";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name = "Ther";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name = "Thro";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name = "Tia";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name = "Tra";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name = "Ty";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name = "Uth";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name = "Ver";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name = "Vil";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name = "Von";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name = "Ya";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name = "Za";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Zy";
					bad = false;
				}
			}

			bad = true;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else if (Name_Choice >= 71 && Name_Choice <= 90)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name = "Ael";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name = "Aer";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name = "Af";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name = "Ah";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name = "Al";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name = "Am";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name = "Ama";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name = "An";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name = "Ang";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name = "Ansr";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name = "Ar";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name = "Ari";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name = "Arn";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name = "Aza";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name = "Bael";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name = "Bes";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name = "Cael";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name = "Cas";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name = "Cla";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name = "Cor";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name = "Cy";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name = "Dae";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name = "Dho";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name = "Dre";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name = "Du";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name = "Eli";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name = "Eir";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name = "El";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name = "Er";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name = "Ev";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name = "Fera";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name = "Fi";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name = "Fir";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name = "Fis";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name = "Gael";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name = "Gar";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name = "Gil";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name = "Ha";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name = "Hu";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name = "Ia";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name = "Il";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name = "Ja";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name = "Jar";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name = "Ka";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name = "Kan";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name = "Ker";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name = "Keth";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name = "Koeh";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name = "Kor";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name = "Ky";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name = "La";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name = "Laf";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name = "Lam";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name = "Lue";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name = "Ly";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name = "Mai";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name = "Mal";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name = "Mara";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name = "My";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name = "Na";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name = "Nai";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name = "Nim";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name = "Nu";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name = "Ny";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name = "Py";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name = "Raer";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name = "Re";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name = "Ren";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name = "Rid";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name = "Ru";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name = "Rua";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name = "Rum";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name = "Ry";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name = "Sae";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name = "Seh";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name = "Sel";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name = "Sha";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name = "She";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name = "Si";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name = "Sim";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name = "Sol";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name = "Sum";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name = "Syl";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name = "Ta";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name = "Tahl";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name = "Tha";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name = "Tho";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name = "Ther";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name = "Thro";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name = "Tia";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name = "Tra";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name = "Ty";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name = "Uth";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name = "Ver";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name = "Vil";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name = "Von";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name = "Ya";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name = "Za";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Zy";
					bad = false;
				}
			}

			bad = true;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Last_Prefix == 1)
				{
					Last_Name = "Ael";
					bad = false;
				}
				else if (Last_Prefix == 2)
				{
					Last_Name = "Aer";
					bad = false;
				}
				else if (Last_Prefix == 3)
				{
					Last_Name = "Af";
					bad = false;
				}
				else if (Last_Prefix == 4)
				{
					Last_Name = "Ah";
					bad = false;
				}
				else if (Last_Prefix == 5)
				{
					Last_Name = "Al";
					bad = false;
				}
				else if (Last_Prefix == 6)
				{
					Last_Name = "Am";
					bad = false;
				}
				else if (Last_Prefix == 7)
				{
					Last_Name = "Ama";
					bad = false;
				}
				else if (Last_Prefix == 8)
				{
					Last_Name = "An";
					bad = false;
				}
				else if (Last_Prefix == 9)
				{
					Last_Name = "Ang";
					bad = false;
				}
				else if (Last_Prefix == 10)
				{
					Last_Name = "Ansr";
					bad = false;
				}
				else if (Last_Prefix == 11)
				{
					Last_Name = "Ar";
					bad = false;
				}
				else if (Last_Prefix == 12)
				{
					Last_Name = "Ari";
					bad = false;
				}
				else if (Last_Prefix == 13)
				{
					Last_Name = "Arn";
					bad = false;
				}
				else if (Last_Prefix == 14)
				{
					Last_Name = "Aza";
					bad = false;
				}
				else if (Last_Prefix == 15)
				{
					Last_Name = "Bael";
					bad = false;
				}
				else if (Last_Prefix == 16)
				{
					Last_Name = "Bes";
					bad = false;
				}
				else if (Last_Prefix == 17)
				{
					Last_Name = "Cael";
					bad = false;
				}
				else if (Last_Prefix == 18)
				{
					Last_Name = "Cal";
					bad = false;
				}
				else if (Last_Prefix == 19)
				{
					Last_Name = "Cas";
					bad = false;
				}
				else if (Last_Prefix == 20)
				{
					Last_Name = "Cla";
					bad = false;
				}
				else if (Last_Prefix == 21)
				{
					Last_Name = "Cor";
					bad = false;
				}
				else if (Last_Prefix == 22)
				{
					Last_Name = "Cy";
					bad = false;
				}
				else if (Last_Prefix == 23)
				{
					Last_Name = "Dae";
					bad = false;
				}
				else if (Last_Prefix == 24)
				{
					Last_Name = "Dho";
					bad = false;
				}
				else if (Last_Prefix == 25)
				{
					Last_Name = "Dre";
					bad = false;
				}
				else if (Last_Prefix == 26)
				{
					Last_Name = "Du";
					bad = false;
				}
				else if (Last_Prefix == 27)
				{
					Last_Name = "Eli";
					bad = false;
				}
				else if (Last_Prefix == 28)
				{
					Last_Name = "Eir";
					bad = false;
				}
				else if (Last_Prefix == 29)
				{
					Last_Name = "El";
					bad = false;
				}
				else if (Last_Prefix == 30)
				{
					Last_Name = "Er";
					bad = false;
				}
				else if (Last_Prefix == 31)
				{
					Last_Name = "Ev";
					bad = false;
				}
				else if (Last_Prefix == 32)
				{
					Last_Name = "Fera";
					bad = false;
				}
				else if (Last_Prefix == 33)
				{
					Last_Name = "Fi";
					bad = false;
				}
				else if (Last_Prefix == 34)
				{
					Last_Name = "Fir";
					bad = false;
				}
				else if (Last_Prefix == 35)
				{
					Last_Name = "Fis";
					bad = false;
				}
				else if (Last_Prefix == 36)
				{
					Last_Name = "Gael";
					bad = false;
				}
				else if (Last_Prefix == 37)
				{
					Last_Name = "Gar";
					bad = false;
				}
				else if (Last_Prefix == 38)
				{
					Last_Name = "Gil";
					bad = false;
				}
				else if (Last_Prefix == 39)
				{
					Last_Name = "Ha";
					bad = false;
				}
				else if (Last_Prefix == 40)
				{
					Last_Name = "Hu";
					bad = false;
				}
				else if (Last_Prefix == 41)
				{
					Last_Name = "Ia";
					bad = false;
				}
				else if (Last_Prefix == 42)
				{
					Last_Name = "Il";
					bad = false;
				}
				else if (Last_Prefix == 43)
				{
					Last_Name = "Ja";
					bad = false;
				}
				else if (Last_Prefix == 44)
				{
					Last_Name = "Jar";
					bad = false;
				}
				else if (Last_Prefix == 45)
				{
					Last_Name = "Ka";
					bad = false;
				}
				else if (Last_Prefix == 46)
				{
					Last_Name = "Kan";
					bad = false;
				}
				else if (Last_Prefix == 47)
				{
					Last_Name = "Ker";
					bad = false;
				}
				else if (Last_Prefix == 48)
				{
					Last_Name = "Keth";
					bad = false;
				}
				else if (Last_Prefix == 49)
				{
					Last_Name = "Koeh";
					bad = false;
				}
				else if (Last_Prefix == 50)
				{
					Last_Name = "Kor";
					bad = false;
				}
				else if (Last_Prefix == 51)
				{
					Last_Name = "Ky";
					bad = false;
				}
				else if (Last_Prefix == 52)
				{
					Last_Name = "La";
					bad = false;
				}
				else if (Last_Prefix == 53)
				{
					Last_Name = "Laf";
					bad = false;
				}
				else if (Last_Prefix == 54)
				{
					Last_Name = "Lam";
					bad = false;
				}
				else if (Last_Prefix == 55)
				{
					Last_Name = "Lue";
					bad = false;
				}
				else if (Last_Prefix == 56)
				{
					Last_Name = "Ly";
					bad = false;
				}
				else if (Last_Prefix == 57)
				{
					Last_Name = "Mai";
					bad = false;
				}
				else if (Last_Prefix == 58)
				{
					Last_Name = "Mal";
					bad = false;
				}
				else if (Last_Prefix == 59)
				{
					Last_Name = "Mara";
					bad = false;
				}
				else if (Last_Prefix == 60)
				{
					Last_Name = "My";
					bad = false;
				}
				else if (Last_Prefix == 61)
				{
					Last_Name = "Na";
					bad = false;
				}
				else if (Last_Prefix == 62)
				{
					Last_Name = "Nai";
					bad = false;
				}
				else if (Last_Prefix == 63)
				{
					Last_Name = "Nim";
					bad = false;
				}
				else if (Last_Prefix == 64)
				{
					Last_Name = "Nu";
					bad = false;
				}
				else if (Last_Prefix == 65)
				{
					Last_Name = "Ny";
					bad = false;
				}
				else if (Last_Prefix == 66)
				{
					Last_Name = "Py";
					bad = false;
				}
				else if (Last_Prefix == 67)
				{
					Last_Name = "Raer";
					bad = false;
				}
				else if (Last_Prefix == 68)
				{
					Last_Name = "Re";
					bad = false;
				}
				else if (Last_Prefix == 69)
				{
					Last_Name = "Ren";
					bad = false;
				}
				else if (Last_Prefix == 70)
				{
					Last_Name = "Rid";
					bad = false;
				}
				else if (Last_Prefix == 71)
				{
					Last_Name = "Ru";
					bad = false;
				}
				else if (Last_Prefix == 72)
				{
					Last_Name = "Rua";
					bad = false;
				}
				else if (Last_Prefix == 73)
				{
					Last_Name = "Rum";
					bad = false;
				}
				else if (Last_Prefix == 74)
				{
					Last_Name = "Ry";
					bad = false;
				}
				else if (Last_Prefix == 75)
				{
					Last_Name = "Sae";
					bad = false;
				}
				else if (Last_Prefix == 76)
				{
					Last_Name = "Seh";
					bad = false;
				}
				else if (Last_Prefix == 77)
				{
					Last_Name = "Sel";
					bad = false;
				}
				else if (Last_Prefix == 78)
				{
					Last_Name = "Sha";
					bad = false;
				}
				else if (Last_Prefix == 79)
				{
					Last_Name = "She";
					bad = false;
				}
				else if (Last_Prefix == 80)
				{
					Last_Name = "Si";
					bad = false;
				}
				else if (Last_Prefix == 81)
				{
					Last_Name = "Sim";
					bad = false;
				}
				else if (Last_Prefix == 82)
				{
					Last_Name = "Sol";
					bad = false;
				}
				else if (Last_Prefix == 83)
				{
					Last_Name = "Sum";
					bad = false;
				}
				else if (Last_Prefix == 84)
				{
					Last_Name = "Syl";
					bad = false;
				}
				else if (Last_Prefix == 85)
				{
					Last_Name = "Ta";
					bad = false;
				}
				else if (Last_Prefix == 86)
				{
					Last_Name = "Tahl";
					bad = false;
				}
				else if (Last_Prefix == 87)
				{
					Last_Name = "Tha";
					bad = false;
				}
				else if (Last_Prefix == 88)
				{
					Last_Name = "Tho";
					bad = false;
				}
				else if (Last_Prefix == 89)
				{
					Last_Name = "Ther";
					bad = false;
				}
				else if (Last_Prefix == 90)
				{
					Last_Name = "Thro";
					bad = false;
				}
				else if (Last_Prefix == 91)
				{
					Last_Name = "Tia";
					bad = false;
				}
				else if (Last_Prefix == 92)
				{
					Last_Name = "Tra";
					bad = false;
				}
				else if (Last_Prefix == 93)
				{
					Last_Name = "Ty";
					bad = false;
				}
				else if (Last_Prefix == 94)
				{
					Last_Name = "Uth";
					bad = false;
				}
				else if (Last_Prefix == 95)
				{
					Last_Name = "Ver";
					bad = false;
				}
				else if (Last_Prefix == 96)
				{
					Last_Name = "Vil";
					bad = false;
				}
				else if (Last_Prefix == 97)
				{
					Last_Name = "Von";
					bad = false;
				}
				else if (Last_Prefix == 98)
				{
					Last_Name = "Ya";
					bad = false;
				}
				else if (Last_Prefix == 99)
				{
					Last_Name = "Za";
					bad = false;
				}
				else if (Last_Prefix == 100)
				{
					Last_Name = "Zy";
					bad = false;
				}
			}

			bad = true;

			while (bad == true)
			{
				//Suffix Generation for Last Name
				if (Suffix == 1)
				{
					Last_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					Last_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						Last_Name += "aer";
					}
					else
					{
						Last_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						Last_Name += "aias";
					}
					else
					{
						Last_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						Last_Name += "ah";
					}
					else
					{
						Last_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						Last_Name += "aith";
					}
					else
					{
						Last_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						Last_Name += "al";
					}
					else
					{
						Last_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					Last_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						Last_Name += "am";
					}
					else
					{
						Last_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						Last_Name += "an";
					}
					else
					{
						Last_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						Last_Name += "ar";
					}
					else
					{
						Last_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					Last_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					Last_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					Last_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					Last_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					Last_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					Last_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					Last_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					Last_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					Last_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					Last_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					Last_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					Last_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						Last_Name += "ele";
					}
					else
					{
						Last_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					Last_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					Last_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					Last_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					Last_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					Last_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					Last_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					Last_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					Last_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					Last_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						Last_Name += "ian";
					}
					else
					{
						Last_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					Last_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					Last_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					Last_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					Last_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					Last_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					Last_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					Last_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					Last_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					Last_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					Last_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					Last_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					Last_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					Last_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					Last_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						Last_Name += "lain";
					}
					else
					{
						Last_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					Last_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					Last_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					Last_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						Last_Name += "mah";
					}
					else
					{
						Last_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					Last_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					Last_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					Last_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					Last_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					Last_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					Last_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						Last_Name += "on";
					}
					else
					{
						Last_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					Last_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					Last_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					Last_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					Last_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					Last_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					Last_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						Last_Name += "rail";
					}
					else
					{
						Last_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					Last_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					Last_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					Last_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					Last_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					Last_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					Last_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					Last_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					Last_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					Last_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					Last_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					Last_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					Last_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					Last_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						Last_Name += "thal";
					}
					else
					{
						Last_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					Last_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					Last_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					Last_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						Last_Name += "thus";
					}
					else
					{
						Last_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					Last_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						Last_Name += "tril";
					}
					else
					{
						Last_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					Last_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					Last_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						Last_Name += "us";
					}
					else
					{
						Last_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						Last_Name += "van";
					}
					else
					{
						Last_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						Last_Name += "var";
					}
					else
					{
						Last_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					Last_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					Last_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					Last_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					Last_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					Last_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						Last_Name += "yr";
					}
					else
					{
						Last_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					Last_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						Last_Name += "zair";
					}
					else
					{
						Last_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name + " " + Last_Name;
		}
		else if (Name_Choice >= 41 && Name_Choice <= 70)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name = "Ael";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name = "Aer";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name = "Af";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name = "Ah";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name = "Al";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name = "Am";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name = "Ama";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name = "An";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name = "Ang";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name = "Ansr";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name = "Ar";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name = "Ari";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name = "Arn";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name = "Aza";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name = "Bael";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name = "Bes";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name = "Cael";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name = "Cas";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name = "Cla";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name = "Cor";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name = "Cy";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name = "Dae";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name = "Dho";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name = "Dre";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name = "Du";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name = "Eli";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name = "Eir";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name = "El";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name = "Er";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name = "Ev";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name = "Fera";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name = "Fi";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name = "Fir";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name = "Fis";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name = "Gael";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name = "Gar";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name = "Gil";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name = "Ha";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name = "Hu";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name = "Ia";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name = "Il";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name = "Ja";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name = "Jar";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name = "Ka";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name = "Kan";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name = "Ker";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name = "Keth";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name = "Koeh";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name = "Kor";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name = "Ky";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name = "La";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name = "Laf";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name = "Lam";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name = "Lue";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name = "Ly";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name = "Mai";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name = "Mal";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name = "Mara";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name = "My";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name = "Na";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name = "Nai";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name = "Nim";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name = "Nu";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name = "Ny";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name = "Py";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name = "Raer";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name = "Re";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name = "Ren";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name = "Rid";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name = "Ru";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name = "Rua";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name = "Rum";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name = "Ry";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name = "Sae";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name = "Seh";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name = "Sel";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name = "Sha";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name = "She";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name = "Si";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name = "Sim";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name = "Sol";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name = "Sum";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name = "Syl";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name = "Ta";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name = "Tahl";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name = "Tha";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name = "Tho";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name = "Ther";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name = "Thro";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name = "Tia";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name = "Tra";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name = "Ty";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name = "Uth";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name = "Ver";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name = "Vil";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name = "Von";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name = "Ya";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name = "Za";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Zy";
					bad = false;
				}
			}

			bad = true;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Suffix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else
		{
			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			First_Name += "'";

			bad = true;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix == 1)
				{
					First_Name += "Ael";
					bad = false;
				}
				else if (Prefix == 2)
				{
					First_Name += "Aer";
					bad = false;
				}
				else if (Prefix == 3)
				{
					First_Name += "Af";
					bad = false;
				}
				else if (Prefix == 4)
				{
					First_Name += "Ah";
					bad = false;
				}
				else if (Prefix == 5)
				{
					First_Name += "Al";
					bad = false;
				}
				else if (Prefix == 6)
				{
					First_Name += "Am";
					bad = false;
				}
				else if (Prefix == 7)
				{
					First_Name += "Ama";
					bad = false;
				}
				else if (Prefix == 8)
				{
					First_Name += "An";
					bad = false;
				}
				else if (Prefix == 9)
				{
					First_Name += "Ang";
					bad = false;
				}
				else if (Prefix == 10)
				{
					First_Name += "Ansr";
					bad = false;
				}
				else if (Prefix == 11)
				{
					First_Name += "Ar";
					bad = false;
				}
				else if (Prefix == 12)
				{
					First_Name += "Ari";
					bad = false;
				}
				else if (Prefix == 13)
				{
					First_Name += "Arn";
					bad = false;
				}
				else if (Prefix == 14)
				{
					First_Name += "Aza";
					bad = false;
				}
				else if (Prefix == 15)
				{
					First_Name += "Bael";
					bad = false;
				}
				else if (Prefix == 16)
				{
					First_Name += "Bes";
					bad = false;
				}
				else if (Prefix == 17)
				{
					First_Name += "Cael";
					bad = false;
				}
				else if (Prefix == 18)
				{
					First_Name += "Cal";
					bad = false;
				}
				else if (Prefix == 19)
				{
					First_Name += "Cas";
					bad = false;
				}
				else if (Prefix == 20)
				{
					First_Name += "Cla";
					bad = false;
				}
				else if (Prefix == 21)
				{
					First_Name += "Cor";
					bad = false;
				}
				else if (Prefix == 22)
				{
					First_Name += "Cy";
					bad = false;
				}
				else if (Prefix == 23)
				{
					First_Name += "Dae";
					bad = false;
				}
				else if (Prefix == 24)
				{
					First_Name += "Dho";
					bad = false;
				}
				else if (Prefix == 25)
				{
					First_Name += "Dre";
					bad = false;
				}
				else if (Prefix == 26)
				{
					First_Name += "Du";
					bad = false;
				}
				else if (Prefix == 27)
				{
					First_Name += "Eli";
					bad = false;
				}
				else if (Prefix == 28)
				{
					First_Name += "Eir";
					bad = false;
				}
				else if (Prefix == 29)
				{
					First_Name += "El";
					bad = false;
				}
				else if (Prefix == 30)
				{
					First_Name += "Er";
					bad = false;
				}
				else if (Prefix == 31)
				{
					First_Name += "Ev";
					bad = false;
				}
				else if (Prefix == 32)
				{
					First_Name += "Fera";
					bad = false;
				}
				else if (Prefix == 33)
				{
					First_Name += "Fi";
					bad = false;
				}
				else if (Prefix == 34)
				{
					First_Name += "Fir";
					bad = false;
				}
				else if (Prefix == 35)
				{
					First_Name += "Fis";
					bad = false;
				}
				else if (Prefix == 36)
				{
					First_Name += "Gael";
					bad = false;
				}
				else if (Prefix == 37)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix == 38)
				{
					First_Name += "Gil";
					bad = false;
				}
				else if (Prefix == 39)
				{
					First_Name += "Ha";
					bad = false;
				}
				else if (Prefix == 40)
				{
					First_Name += "Hu";
					bad = false;
				}
				else if (Prefix == 41)
				{
					First_Name += "Ia";
					bad = false;
				}
				else if (Prefix == 42)
				{
					First_Name += "Il";
					bad = false;
				}
				else if (Prefix == 43)
				{
					First_Name += "Ja";
					bad = false;
				}
				else if (Prefix == 44)
				{
					First_Name += "Jar";
					bad = false;
				}
				else if (Prefix == 45)
				{
					First_Name += "Ka";
					bad = false;
				}
				else if (Prefix == 46)
				{
					First_Name += "Kan";
					bad = false;
				}
				else if (Prefix == 47)
				{
					First_Name += "Ker";
					bad = false;
				}
				else if (Prefix == 48)
				{
					First_Name += "Keth";
					bad = false;
				}
				else if (Prefix == 49)
				{
					First_Name += "Koeh";
					bad = false;
				}
				else if (Prefix == 50)
				{
					First_Name += "Kor";
					bad = false;
				}
				else if (Prefix == 51)
				{
					First_Name += "Ky";
					bad = false;
				}
				else if (Prefix == 52)
				{
					First_Name += "La";
					bad = false;
				}
				else if (Prefix == 53)
				{
					First_Name += "Laf";
					bad = false;
				}
				else if (Prefix == 54)
				{
					First_Name += "Lam";
					bad = false;
				}
				else if (Prefix == 55)
				{
					First_Name += "Lue";
					bad = false;
				}
				else if (Prefix == 56)
				{
					First_Name += "Ly";
					bad = false;
				}
				else if (Prefix == 57)
				{
					First_Name += "Mai";
					bad = false;
				}
				else if (Prefix == 58)
				{
					First_Name += "Mal";
					bad = false;
				}
				else if (Prefix == 59)
				{
					First_Name += "Mara";
					bad = false;
				}
				else if (Prefix == 60)
				{
					First_Name += "My";
					bad = false;
				}
				else if (Prefix == 61)
				{
					First_Name += "Na";
					bad = false;
				}
				else if (Prefix == 62)
				{
					First_Name += "Nai";
					bad = false;
				}
				else if (Prefix == 63)
				{
					First_Name += "Nim";
					bad = false;
				}
				else if (Prefix == 64)
				{
					First_Name += "Nu";
					bad = false;
				}
				else if (Prefix == 65)
				{
					First_Name += "Ny";
					bad = false;
				}
				else if (Prefix == 66)
				{
					First_Name += "Py";
					bad = false;
				}
				else if (Prefix == 67)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix == 68)
				{
					First_Name += "Re";
					bad = false;
				}
				else if (Prefix == 69)
				{
					First_Name += "Ren";
					bad = false;
				}
				else if (Prefix == 70)
				{
					First_Name += "Rid";
					bad = false;
				}
				else if (Prefix == 71)
				{
					First_Name += "Ru";
					bad = false;
				}
				else if (Prefix == 72)
				{
					First_Name += "Rua";
					bad = false;
				}
				else if (Prefix == 73)
				{
					First_Name += "Rum";
					bad = false;
				}
				else if (Prefix == 74)
				{
					First_Name += "Ry";
					bad = false;
				}
				else if (Prefix == 75)
				{
					First_Name += "Sae";
					bad = false;
				}
				else if (Prefix == 76)
				{
					First_Name += "Seh";
					bad = false;
				}
				else if (Prefix == 77)
				{
					First_Name += "Sel";
					bad = false;
				}
				else if (Prefix == 78)
				{
					First_Name += "Sha";
					bad = false;
				}
				else if (Prefix == 79)
				{
					First_Name += "She";
					bad = false;
				}
				else if (Prefix == 80)
				{
					First_Name += "Si";
					bad = false;
				}
				else if (Prefix == 81)
				{
					First_Name += "Sim";
					bad = false;
				}
				else if (Prefix == 82)
				{
					First_Name += "Sol";
					bad = false;
				}
				else if (Prefix == 83)
				{
					First_Name += "Sum";
					bad = false;
				}
				else if (Prefix == 84)
				{
					First_Name += "Syl";
					bad = false;
				}
				else if (Prefix == 85)
				{
					First_Name += "Ta";
					bad = false;
				}
				else if (Prefix == 86)
				{
					First_Name += "Tahl";
					bad = false;
				}
				else if (Prefix == 87)
				{
					First_Name += "Tha";
					bad = false;
				}
				else if (Prefix == 88)
				{
					First_Name += "Tho";
					bad = false;
				}
				else if (Prefix == 89)
				{
					First_Name += "Ther";
					bad = false;
				}
				else if (Prefix == 90)
				{
					First_Name += "Thro";
					bad = false;
				}
				else if (Prefix == 91)
				{
					First_Name += "Tia";
					bad = false;
				}
				else if (Prefix == 92)
				{
					First_Name += "Tra";
					bad = false;
				}
				else if (Prefix == 93)
				{
					First_Name += "Ty";
					bad = false;
				}
				else if (Prefix == 94)
				{
					First_Name += "Uth";
					bad = false;
				}
				else if (Prefix == 95)
				{
					First_Name += "Ver";
					bad = false;
				}
				else if (Prefix == 96)
				{
					First_Name += "Vil";
					bad = false;
				}
				else if (Prefix == 97)
				{
					First_Name += "Von";
					bad = false;
				}
				else if (Prefix == 98)
				{
					First_Name += "Ya";
					bad = false;
				}
				else if (Prefix == 99)
				{
					First_Name += "Za";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name += "Zy";
					bad = false;
				}
			}

			bad = true;

			Suffix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Suffix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Suffix Generation for First Name
				if (Suffix == 1)
				{
					First_Name += "nae";
					bad = false;
				}
				else if (Suffix == 2)
				{
					First_Name += "ael";
					bad = false;
				}
				else if (Suffix == 3)
				{
					if (Gender == "Male")
					{
						First_Name += "aer";
					}
					else
					{
						First_Name += "aera";
					}
					bad = false;
				}
				else if (Suffix == 4)
				{
					if (Gender == "Male")
					{
						First_Name += "aias";
					}
					else
					{
						First_Name += "aia";
					}
					bad = false;
				}
				else if (Suffix == 5)
				{
					if (Gender == "Male")
					{
						First_Name += "ah";
					}
					else
					{
						First_Name += "aha";
					}
					bad = false;
				}
				else if (Suffix == 6)
				{
					if (Gender == "Male")
					{
						First_Name += "aith";
					}
					else
					{
						First_Name += "aira";
					}
					bad = false;
				}
				else if (Suffix == 7)
				{
					if (Gender == "Male")
					{
						First_Name += "al";
					}
					else
					{
						First_Name += "ala";
					}
					bad = false;
				}
				else if (Suffix == 8)
				{
					First_Name += "ali";
					bad = false;
				}
				else if (Suffix == 9)
				{
					if (Gender == "Male")
					{
						First_Name += "am";
					}
					else
					{
						First_Name += "ama";
					}
					bad = false;
				}
				else if (Suffix == 10)
				{
					if (Gender == "Male")
					{
						First_Name += "an";
					}
					else
					{
						First_Name += "ana";
					}
					bad = false;
				}
				else if (Suffix == 11)
				{
					if (Gender == "Male")
					{
						First_Name += "ar";
					}
					else
					{
						First_Name += "ara";
					}
					bad = false;
				}
				else if (Suffix == 12)
				{
					First_Name += "ri";
					bad = false;
				}
				else if (Suffix == 13)
				{
					First_Name += "aro";
					bad = false;
				}
				else if (Suffix == 14)
				{
					First_Name += "as";
					bad = false;
				}
				else if (Suffix == 15)
				{
					First_Name += "ath";
					bad = false;
				}
				else if (Suffix == 16)
				{
					First_Name += "avel";
					bad = false;
				}
				else if (Suffix == 17)
				{
					First_Name += "brar";
					bad = false;
				}
				else if (Suffix == 18)
				{
					First_Name += "dar";
					bad = false;
				}
				else if (Suffix == 19)
				{
					First_Name += "deth";
					bad = false;
				}
				else if (Suffix == 20)
				{
					First_Name += "dre";
					bad = false;
				}
				else if (Suffix == 21)
				{
					First_Name += "drim";
					bad = false;
				}
				else if (Suffix == 22)
				{
					First_Name += "dul";
					bad = false;
				}
				else if (Suffix == 23)
				{
					First_Name += "ean";
					bad = false;
				}
				else if (Suffix == 24)
				{
					if (Gender == "Male")
					{
						First_Name += "ele";
					}
					else
					{
						First_Name += "ela";
					}
					bad = false;
				}
				else if (Suffix == 25)
				{
					First_Name += "emar";
					bad = false;
				}
				else if (Suffix == 26)
				{
					First_Name += "en";
					bad = false;
				}
				else if (Suffix == 27)
				{
					First_Name += "er";
					bad = false;
				}
				else if (Suffix == 28)
				{
					First_Name += "ess";
					bad = false;
				}
				else if (Suffix == 29)
				{
					First_Name += "evar";
					bad = false;
				}
				else if (Suffix == 30)
				{
					First_Name += "fel";
					bad = false;
				}
				else if (Suffix == 31)
				{
					First_Name += "hal";
					bad = false;
				}
				else if (Suffix == 32)
				{
					First_Name += "har";
					bad = false;
				}
				else if (Suffix == 33)
				{
					First_Name += "hel";
					bad = false;
				}
				else if (Suffix == 34)
				{
					if (Gender == "Male")
					{
						First_Name += "ian";
					}
					else
					{
						First_Name += "iana";
					}
					bad = false;
				}
				else if (Suffix == 35)
				{
					First_Name += "iat";
					bad = false;
				}
				else if (Suffix == 36)
				{
					First_Name += "ik";
					bad = false;
				}
				else if (Suffix == 37)
				{
					First_Name += "il";
					bad = false;
				}
				else if (Suffix == 38)
				{
					First_Name += "im";
					bad = false;
				}
				else if (Suffix == 39)
				{
					First_Name += "in";
					bad = false;
				}
				else if (Suffix == 40)
				{
					First_Name += "ir";
					bad = false;
				}
				else if (Suffix == 41)
				{
					First_Name += "is";
					bad = false;
				}
				else if (Suffix == 42)
				{
					First_Name += "ith";
					bad = false;
				}
				else if (Suffix == 43)
				{
					First_Name += "kash";
					bad = false;
				}
				else if (Suffix == 44)
				{
					First_Name += "ki";
					bad = false;
				}
				else if (Suffix == 45)
				{
					First_Name += "lan";
					bad = false;
				}
				else if (Suffix == 46)
				{
					First_Name += "lam";
					bad = false;
				}
				else if (Suffix == 47)
				{
					First_Name += "lar";
					bad = false;
				}
				else if (Suffix == 48)
				{
					First_Name += "las";
					bad = false;
				}
				else if (Suffix == 49)
				{
					if (Gender == "Male")
					{
						First_Name += "lain";
					}
					else
					{
						First_Name += "lia";
					}
					bad = false;
				}
				else if (Suffix == 50)
				{
					First_Name += "lis";
					bad = false;
				}
				else if (Suffix == 51)
				{
					First_Name += "lon";
					bad = false;
				}
				else if (Suffix == 52)
				{
					First_Name += "lyn";
					bad = false;
				}
				else if (Suffix == 53)
				{
					if (Gender == "Male")
					{
						First_Name += "mah";
					}
					else
					{
						First_Name += "ma";
					}
					bad = false;
				}
				else if (Suffix == 54)
				{
					First_Name += "mil";
					bad = false;
				}
				else if (Suffix == 55)
				{
					First_Name += "mus";
					bad = false;
				}
				else if (Suffix == 56)
				{
					First_Name += "nal";
					bad = false;
				}
				else if (Suffix == 57)
				{
					First_Name += "nes";
					bad = false;
				}
				else if (Suffix == 58)
				{
					First_Name += "nin";
					bad = false;
				}
				else if (Suffix == 59)
				{
					First_Name += "nis";
					bad = false;
				}
				else if (Suffix == 60)
				{
					if (Gender == "Male")
					{
						First_Name += "on";
					}
					else
					{
						First_Name += "ona";
					}
					bad = false;
				}
				else if (Suffix == 61)
				{
					First_Name += "or";
					bad = false;
				}
				else if (Suffix == 62)
				{
					First_Name += "oth";
					bad = false;
				}
				else if (Suffix == 63)
				{
					First_Name += "que";
					bad = false;
				}
				else if (Suffix == 64)
				{
					First_Name += "quis";
					bad = false;
				}
				else if (Suffix == 65)
				{
					First_Name += "rah";
					bad = false;
				}
				else if (Suffix == 66)
				{
					First_Name += "rad";
					bad = false;
				}
				else if (Suffix == 67)
				{
					if (Gender == "Male")
					{
						First_Name += "rail";
					}
					else
					{
						First_Name += "ria";
					}
					bad = false;
				}
				else if (Suffix == 68)
				{
					First_Name += "ran";
					bad = false;
				}
				else if (Suffix == 69)
				{
					First_Name += "reth";
					bad = false;
				}
				else if (Suffix == 70)
				{
					First_Name += "ro";
					bad = false;
				}
				else if (Suffix == 71)
				{
					First_Name += "ruil";
					bad = false;
				}
				else if (Suffix == 72)
				{
					First_Name += "sal";
					bad = false;
				}
				else if (Suffix == 73)
				{
					First_Name += "san";
					bad = false;
				}
				else if (Suffix == 74)
				{
					First_Name += "sar";
					bad = false;
				}
				else if (Suffix == 75)
				{
					First_Name += "sel";
					bad = false;
				}
				else if (Suffix == 76)
				{
					First_Name += "sha";
					bad = false;
				}
				else if (Suffix == 77)
				{
					First_Name += "spar";
					bad = false;
				}
				else if (Suffix == 78)
				{
					First_Name += "tae";
					bad = false;
				}
				else if (Suffix == 79)
				{
					First_Name += "tas";
					bad = false;
				}
				else if (Suffix == 80)
				{
					First_Name += "ten";
					bad = false;
				}
				else if (Suffix == 81)
				{
					if (Gender == "Male")
					{
						First_Name += "thal";
					}
					else
					{
						First_Name += "tha";
					}
					bad = false;
				}
				else if (Suffix == 82)
				{
					First_Name += "thar";
					bad = false;
				}
				else if (Suffix == 83)
				{
					First_Name += "ther";
					bad = false;
				}
				else if (Suffix == 84)
				{
					First_Name += "thi";
					bad = false;
				}
				else if (Suffix == 85)
				{
					if (Gender == "Male")
					{
						First_Name += "thus";
					}
					else
					{
						First_Name += "thas";
					}
					bad = false;
				}
				else if (Suffix == 86)
				{
					First_Name += "ti";
					bad = false;
				}
				else if (Suffix == 87)
				{
					if (Gender == "Male")
					{
						First_Name += "tril";
					}
					else
					{
						First_Name += "tria";
					}
					bad = false;
				}
				else if (Suffix == 88)
				{
					First_Name += "ual";
					bad = false;
				}
				else if (Suffix == 89)
				{
					First_Name += "uath";
					bad = false;
				}
				else if (Suffix == 90)
				{
					if (Gender == "Male")
					{
						First_Name += "us";
					}
					else
					{
						First_Name += "ua";
					}
					bad = false;
				}
				else if (Suffix == 91)
				{
					if (Gender == "Male")
					{
						First_Name += "van";
					}
					else
					{
						First_Name += "vanna";
					}
					bad = false;
				}
				else if (Suffix == 92)
				{
					if (Gender == "Male")
					{
						First_Name += "var";
					}
					else
					{
						First_Name += "vara";
					}
					bad = false;
				}
				else if (Suffix == 93)
				{
					First_Name += "vain";
					bad = false;
				}
				else if (Suffix == 94)
				{
					First_Name += "via";
					bad = false;
				}
				else if (Suffix == 95)
				{
					First_Name += "vin";
					bad = false;
				}
				else if (Suffix == 96)
				{
					First_Name += "wyn";
					bad = false;
				}
				else if (Suffix == 97)
				{
					First_Name += "ya";
					bad = false;
				}
				else if (Suffix == 98)
				{
					if (Gender == "Male")
					{
						First_Name += "yr";
					}
					else
					{
						First_Name += "yn";
					}
					bad = false;
				}
				else if (Suffix == 99)
				{
					First_Name += "yth";
					bad = false;
				}
				else if (Suffix == 100)
				{
					if (Gender == "Male")
					{
						First_Name += "zair";
					}
					else
					{
						First_Name += "zara";
					}
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}

		return Full_Name;
	}
	else if (race == "Half-Elf")
	{
		if (Half_Race <= 50)
		{
			Random_Name("Human", 3);
		}
		else
		{
			Random_Name("Elf", 3);
		}
	}
	else if (race == "Dwarf")
	{

	}
	else if (race == "Gnome")
	{
		if (Name_Choice >= 1 && Name_Choice <= 40)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else if (Name_Choice >= 41 && Name_Choice <= 70)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else if (Name_Choice >= 71 && Name_Choice <= 90)
		{
			while(bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					Last_Name += "Ale";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 4)
				{
					Last_Name += "Ash";
					bad = false;
				}
				else if (Prefix >= 5 && Prefix <= 7)
				{
					Last_Name += "Badger";
					bad = false;
				}
				else if (Prefix >= 8 && Prefix <= 9)
				{
					Last_Name += "Bones";
					bad = false;
				}
				else if (Prefix >= 10 && Prefix <= 11)
				{
					Last_Name += "Caller";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					Last_Name += "Cloak";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					Last_Name += "Drinker";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					Last_Name += "Earth";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 21)
				{
					Last_Name += "Eye";
					bad = false;
				}
				else if (Prefix >= 22 && Prefix <= 24)
				{
					Last_Name += "Fast";
					bad = false;
				}
				else if (Prefix >= 25 && Prefix <= 26)
				{
					Last_Name += "Foot";
					bad = false;
				}
				else if (Prefix >= 27 && Prefix <= 28)
				{
					Last_Name += "Fox";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 31)
				{
					Last_Name += "Gem";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					Last_Name += "Glitter";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 37)
				{
					Last_Name += "Gold";
					bad = false;
				}
				else if (Prefix >= 38 && Prefix <= 39)
				{
					Last_Name += "Hand";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					Last_Name += "Heart";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					Last_Name += "Hill";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					Last_Name += "Honor";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					Last_Name += "Iron";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					Last_Name += "Laughing";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name += "Lightning";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					Last_Name += "Little";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 57)
				{
					Last_Name += "Lock";
					bad = false;
				}
				else if (Prefix >= 58 && Prefix <= 59)
				{
					if (Gender == "Male")
					{
						Last_Name += "Man";
					}
					else
					{
						Last_Name += "Lady";
					}
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					Last_Name += "Moon";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					Last_Name += "Phantom";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 67)
				{
					Last_Name += "Shadow";
					bad = false;
				}
				else if (Prefix >= 68 && Prefix <= 70)
				{
					Last_Name += "Silver";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					Last_Name += "Skin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					Last_Name += "Slosh";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					Last_Name += "Sly";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					Last_Name += "Sparkle";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 80)
				{
					Last_Name += "Steel";
					bad = false;
				}
				else if (Prefix >= 81 && Prefix <= 82)
				{
					Last_Name += "Stone";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name += "Strider";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 87)
				{
					Last_Name += "Stumble";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 89)
				{
					Last_Name += "Sun";
					bad = false;
				}
				else if (Prefix >= 90 && Prefix <= 92)
				{
					Last_Name += "Swift";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					Last_Name += "Wanderer";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 98)
				{
					Last_Name += "Whisper";
					bad = false;
				}
				else if (Prefix >= 99 && Prefix <= 100)
				{
					Last_Name += "Wild";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name + " " + Last_Name;
		}
		else
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					First_Name += "Add";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					First_Name += "Arum";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Baer";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 11)
				{
					First_Name += "Bar";
					bad = false;
				}
				else if (Prefix >= 12 && Prefix <= 14)
				{
					First_Name += "Callad";
					bad = false;
				}
				else if (Prefix >= 15 && Prefix <= 16)
				{
					First_Name += "Chik";
					bad = false;
				}
				else if (Prefix >= 17 && Prefix <= 19)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 20 && Prefix <= 22)
				{
					First_Name += "Din";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 25)
				{
					First_Name += "Eaus";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 27)
				{
					First_Name += "Enn";
					bad = false;
				}
				else if (Prefix >= 28 && Prefix <= 29)
				{
					First_Name += "Erf";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 31)
				{
					First_Name += "Faer";
					bad = false;
				}
				else if (Prefix >= 32 && Prefix <= 34)
				{
					First_Name += "Fen";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 36)
				{
					First_Name += "Flan";
					bad = false;
				}
				else if (Prefix >= 37 && Prefix <= 39)
				{
					First_Name += "Gaer";
					bad = false;
				}
				else if (Prefix >= 40 && Prefix <= 42)
				{
					First_Name += "Gar";
					bad = false;
				}
				else if (Prefix >= 43 && Prefix <= 44)
				{
					First_Name += "Hed";
					bad = false;
				}
				else if (Prefix >= 45 && Prefix <= 46)
				{
					First_Name += "Herl";
					bad = false;
				}
				else if (Prefix >= 47 && Prefix <= 48)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 51)
				{
					First_Name += "Jan";
					bad = false;
				}
				else if (Prefix >= 52 && Prefix <= 53)
				{
					First_Name += "Kaer";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					First_Name += "Len";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 59)
				{
					First_Name += "Lun";
					bad = false;
				}
				else if (Prefix >= 60 && Prefix <= 61)
				{
					First_Name += "Mikk";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 64)
				{
					First_Name += "Neb";
					bad = false;
				}
				else if (Prefix >= 65 && Prefix <= 66)
				{
					First_Name += "Oaen";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Ow";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 70)
				{
					First_Name += "Pall";
					bad = false;
				}
				else if (Prefix >= 71 && Prefix <= 72)
				{
					First_Name += "Pin";
					bad = false;
				}
				else if (Prefix >= 73 && Prefix <= 74)
				{
					First_Name += "Raer";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					First_Name += "Ras";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 78)
				{
					First_Name += "Seg";
					bad = false;
				}
				else if (Prefix >= 79 && Prefix <= 81)
				{
					First_Name += "Skor";
					bad = false;
				}
				else if (Prefix >= 82 && Prefix <= 84)
				{
					First_Name += "Tikk";
					bad = false;
				}
				else if (Prefix >= 85 && Prefix <= 87)
				{
					First_Name += "Uran";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 90)
				{
					First_Name += "Urd";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 93)
				{
					First_Name += "Van";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					First_Name += "Var";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wann";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					First_Name += "Wed";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}

		return Full_Name;
	}
	else if (race == "Halfling")
	{
		if (Name_Choice >= 1 && Name_Choice <= 15)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else if (Name_Choice >= 16 && Name_Choice <= 45)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name += "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name += "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name += "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name += "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name += "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name += "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name += "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name += "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name += "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name += "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name += "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name += "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name += "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name += "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name += "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name += "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name += "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name += "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name += "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name += "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name += "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name += "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name += "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name += "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name += "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name += "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name += "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name += "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name += "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name += "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name += "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name += "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name += "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name += "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name += "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name += "Yon";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name;
		}
		else if (Name_Choice >= 46 && Name_Choice <= 65)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					Last_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					Last_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					Last_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					Last_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					Last_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					Last_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					Last_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					Last_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					Last_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					Last_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					Last_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					Last_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					Last_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					Last_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					Last_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					Last_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					Last_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					Last_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					Last_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					Last_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					Last_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					Last_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					Last_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					Last_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					Last_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					Last_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					Last_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					Last_Name += "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					Last_Name += "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name += "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name += "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					Last_Name += "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					Last_Name += "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name += "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name += "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					Last_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					Last_Name += "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					Last_Name += "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					Last_Name += "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					Last_Name += "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					Last_Name += "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					Last_Name += "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					Last_Name += "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name += "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					Last_Name += "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					Last_Name += "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name += "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					Last_Name += "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					Last_Name += "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					Last_Name += "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					Last_Name += "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name += "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name += "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name += "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					Last_Name += "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					Last_Name += "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name += "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name += "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name += "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					Last_Name += "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					Last_Name += "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					Last_Name += "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					Last_Name += "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					Last_Name += "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					Last_Name += "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					Last_Name += "Yon";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name + " " + Last_Name;
		}
		else if (Name_Choice >= 66 && Name_Choice <= 90)
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name += "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name += "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name += "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name += "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name += "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name += "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name += "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name += "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name += "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name += "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name += "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name += "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name += "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name += "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name += "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name += "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name += "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name += "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name += "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name += "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name += "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name += "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name += "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name += "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name += "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name += "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name += "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name += "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name += "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name += "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name += "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name += "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name += "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name += "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name += "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name += "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					Last_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					Last_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					Last_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					Last_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					Last_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					Last_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					Last_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					Last_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					Last_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					Last_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					Last_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					Last_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					Last_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					Last_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					Last_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					Last_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					Last_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					Last_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					Last_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					Last_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					Last_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					Last_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					Last_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					Last_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					Last_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					Last_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					Last_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					Last_Name += "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					Last_Name += "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name += "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name += "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					Last_Name += "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					Last_Name += "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name += "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name += "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					Last_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					Last_Name += "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					Last_Name += "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					Last_Name += "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					Last_Name += "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					Last_Name += "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					Last_Name += "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					Last_Name += "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name += "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					Last_Name += "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					Last_Name += "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name += "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					Last_Name += "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					Last_Name += "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					Last_Name += "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					Last_Name += "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name += "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name += "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name += "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					Last_Name += "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					Last_Name += "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name += "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name += "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name += "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					Last_Name += "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					Last_Name += "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					Last_Name += "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					Last_Name += "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					Last_Name += "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					Last_Name += "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					Last_Name += "Yon";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name + " " + Last_Name;
		}
		else
		{
			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name = "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name = "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name = "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name = "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name = "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name = "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name = "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name = "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name = "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name = "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name = "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name = "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name = "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name = "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name = "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name = "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name = "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name = "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name = "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name = "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name = "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name = "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name = "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name = "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name = "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name = "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name = "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name = "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name = "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name = "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name = "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name = "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name = "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name = "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name = "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name = "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name = "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name = "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name = "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name = "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 3)
				{
					First_Name += "Arv";
					bad = false;
				}
				else if (Prefix >= 4 && Prefix <= 5)
				{
					First_Name += "Baris";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					First_Name += "Brand";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					First_Name += "Bren";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 13)
				{
					First_Name += "Cal";
					bad = false;
				}
				else if (Prefix >= 14 && Prefix <= 15)
				{
					First_Name += "Chen";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					First_Name += "Cyrr";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					First_Name += "Dair";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 23)
				{
					First_Name += "Dal";
					bad = false;
				}
				else if (Prefix >= 24 && Prefix <= 25)
				{
					First_Name += "Deree";
					bad = false;
				}
				else if (Prefix >= 26 && Prefix <= 28)
				{
					First_Name += "Dric";
					bad = false;
				}
				else if (Prefix >= 29 && Prefix <= 30)
				{
					First_Name += "Eere";
					bad = false;
				}
				else if (Prefix >= 31 && Prefix <= 33)
				{
					First_Name += "Essel";
					bad = false;
				}
				else if (Prefix >= 34 && Prefix <= 35)
				{
					First_Name += "Fur";
					bad = false;
				}
				else if (Prefix >= 36 && Prefix <= 38)
				{
					First_Name += "Galan";
					bad = false;
				}
				else if (Prefix >= 39 && Prefix <= 40)
				{
					First_Name += "Gen";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					First_Name += "Gren";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					First_Name += "Ien";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 48)
				{
					First_Name += "Illi";
					bad = false;
				}
				else if (Prefix >= 49 && Prefix <= 50)
				{
					First_Name += "Indy";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					First_Name += "Iss";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 55)
				{
					First_Name += "Kal";
					bad = false;
				}
				else if (Prefix >= 56 && Prefix <= 58)
				{
					First_Name += "Kep";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 61)
				{
					First_Name += "Kin";
					bad = false;
				}
				else if (Prefix >= 62 && Prefix <= 63)
				{
					First_Name += "Li";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					First_Name += "Lialee";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					First_Name += "Lur";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					First_Name += "Mel";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 73)
				{
					First_Name += "Opee";
					bad = false;
				}
				else if (Prefix >= 74 && Prefix <= 76)
				{
					First_Name += "Ped";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					First_Name += "Pery";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					First_Name += "Penel";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					First_Name += "Reen";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 88)
				{
					First_Name += "Rill";
					bad = false;
				}
				else if (Prefix >= 89 && Prefix <= 90)
				{
					First_Name += "Royl";
					bad = false;
				}
				else if (Prefix >= 91 && Prefix <= 92)
				{
					First_Name += "Sheel";
					bad = false;
				}
				else if (Prefix >= 93 && Prefix <= 95)
				{
					First_Name += "Thea";
					bad = false;
				}
				else if (Prefix >= 96 && Prefix <= 97)
				{
					First_Name += "Ur";
					bad = false;
				}
				else if (Prefix >= 98 && Prefix <= 99)
				{
					First_Name += "Wort";
					bad = false;
				}
				else if (Prefix == 100)
				{
					First_Name += "Yon";
					bad = false;
				}
			}

			bad = true;

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					Last_Name += "Bones";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					Last_Name += "Caller";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name += "Cloak";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name += "Earth";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 12)
				{
					Last_Name += "Eye";
					bad = false;
				}
				else if (Prefix >= 13 && Prefix <= 15)
				{
					Last_Name += "Fast";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name += "Foot";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name += "Glen";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 22)
				{
					Last_Name += "Glitter";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 24)
				{
					Last_Name += "Gold";
					bad = false;
				}
				else if (Prefix >= 25 && Prefix <= 26)
				{
					Last_Name += "Hand";
					bad = false;
				}
				else if (Prefix >= 27 && Prefix <= 29)
				{
					Last_Name += "Heart";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 32)
				{
					Last_Name += "Hill";
					bad = false;
				}
				else if (Prefix >= 33 && Prefix <= 34)
				{
					Last_Name += "Hollow";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 37)
				{
					Last_Name += "Honor";
					bad = false;
				}
				else if (Prefix >= 38 && Prefix <= 40)
				{
					Last_Name += "Laughing";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name += "Leaf";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name += "Lightning";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 47)
				{
					if (Gender == "Male")
					{
						Last_Name += "Man";
					}
					else
					{
						Last_Name += "Lady";
					}
					bad = false;
				}
				else if (Prefix >= 48 && Prefix <= 50)
				{
					Last_Name += "Meadow";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name += "Moon";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					Last_Name += "Nimble";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 58)
				{
					Last_Name += "Quick";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 60)
				{
					Last_Name += "Reed";
					bad = false;
				}
				else if (Prefix >= 61 && Prefix <= 63)
				{
					Last_Name += "Shadow";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name += "Silver";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name += "Skin";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name += "Sly";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 74)
				{
					Last_Name += "Small";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					Last_Name += "Smooth";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name += "Stout";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name += "Strider";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name += "Sun";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 87)
				{
					Last_Name += "Swift";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 89)
				{
					Last_Name += "Thistle";
					bad = false;
				}
				else if (Prefix >= 90 && Prefix <= 91)
				{
					Last_Name += "Wanderer";
					bad = false;
				}
				else if (Prefix >= 92 && Prefix <= 93)
				{
					Last_Name += "Warm";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					Last_Name += "Wild";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					Last_Name += "Will";
					bad = false;
				}
				else if (Prefix >= 99 && Prefix <= 100)
				{
					Last_Name += "Whisper";
					bad = false;
				}
			}

			bad = true;

			Last_Name += " ";

			Prefix = (rand() % Dice_Max) + 1;

			while (bad == true)
			{
				//Prefix Generation for First Name
				if (Prefix >= 1 && Prefix <= 2)
				{
					Last_Name += "Bones";
					bad = false;
				}
				else if (Prefix >= 3 && Prefix <= 5)
				{
					Last_Name += "Caller";
					bad = false;
				}
				else if (Prefix >= 6 && Prefix <= 8)
				{
					Last_Name += "Cloak";
					bad = false;
				}
				else if (Prefix >= 9 && Prefix <= 10)
				{
					Last_Name += "Earth";
					bad = false;
				}
				else if (Prefix >= 11 && Prefix <= 12)
				{
					Last_Name += "Eye";
					bad = false;
				}
				else if (Prefix >= 13 && Prefix <= 15)
				{
					Last_Name += "Fast";
					bad = false;
				}
				else if (Prefix >= 16 && Prefix <= 18)
				{
					Last_Name += "Foot";
					bad = false;
				}
				else if (Prefix >= 19 && Prefix <= 20)
				{
					Last_Name += "Glen";
					bad = false;
				}
				else if (Prefix >= 21 && Prefix <= 22)
				{
					Last_Name += "Glitter";
					bad = false;
				}
				else if (Prefix >= 23 && Prefix <= 24)
				{
					Last_Name += "Gold";
					bad = false;
				}
				else if (Prefix >= 25 && Prefix <= 26)
				{
					Last_Name += "Hand";
					bad = false;
				}
				else if (Prefix >= 27 && Prefix <= 29)
				{
					Last_Name += "Heart";
					bad = false;
				}
				else if (Prefix >= 30 && Prefix <= 32)
				{
					Last_Name += "Hill";
					bad = false;
				}
				else if (Prefix >= 33 && Prefix <= 34)
				{
					Last_Name += "Hollow";
					bad = false;
				}
				else if (Prefix >= 35 && Prefix <= 37)
				{
					Last_Name += "Honor";
					bad = false;
				}
				else if (Prefix >= 38 && Prefix <= 40)
				{
					Last_Name += "Laughing";
					bad = false;
				}
				else if (Prefix >= 41 && Prefix <= 43)
				{
					Last_Name += "Leaf";
					bad = false;
				}
				else if (Prefix >= 44 && Prefix <= 45)
				{
					Last_Name += "Lightning";
					bad = false;
				}
				else if (Prefix >= 46 && Prefix <= 47)
				{
					if (Gender == "Male")
					{
						Last_Name += "Man";
					}
					else
					{
						Last_Name += "Lady";
					}
					bad = false;
				}
				else if (Prefix >= 48 && Prefix <= 50)
				{
					Last_Name += "Meadow";
					bad = false;
				}
				else if (Prefix >= 51 && Prefix <= 53)
				{
					Last_Name += "Moon";
					bad = false;
				}
				else if (Prefix >= 54 && Prefix <= 56)
				{
					Last_Name += "Nimble";
					bad = false;
				}
				else if (Prefix >= 57 && Prefix <= 58)
				{
					Last_Name += "Quick";
					bad = false;
				}
				else if (Prefix >= 59 && Prefix <= 60)
				{
					Last_Name += "Reed";
					bad = false;
				}
				else if (Prefix >= 61 && Prefix <= 63)
				{
					Last_Name += "Shadow";
					bad = false;
				}
				else if (Prefix >= 64 && Prefix <= 66)
				{
					Last_Name += "Silver";
					bad = false;
				}
				else if (Prefix >= 67 && Prefix <= 68)
				{
					Last_Name += "Skin";
					bad = false;
				}
				else if (Prefix >= 69 && Prefix <= 71)
				{
					Last_Name += "Sly";
					bad = false;
				}
				else if (Prefix >= 72 && Prefix <= 74)
				{
					Last_Name += "Small";
					bad = false;
				}
				else if (Prefix >= 75 && Prefix <= 76)
				{
					Last_Name += "Smooth";
					bad = false;
				}
				else if (Prefix >= 77 && Prefix <= 79)
				{
					Last_Name += "Stout";
					bad = false;
				}
				else if (Prefix >= 80 && Prefix <= 82)
				{
					Last_Name += "Strider";
					bad = false;
				}
				else if (Prefix >= 83 && Prefix <= 85)
				{
					Last_Name += "Sun";
					bad = false;
				}
				else if (Prefix >= 86 && Prefix <= 87)
				{
					Last_Name += "Swift";
					bad = false;
				}
				else if (Prefix >= 88 && Prefix <= 89)
				{
					Last_Name += "Thistle";
					bad = false;
				}
				else if (Prefix >= 90 && Prefix <= 91)
				{
					Last_Name += "Wanderer";
					bad = false;
				}
				else if (Prefix >= 92 && Prefix <= 93)
				{
					Last_Name += "Warm";
					bad = false;
				}
				else if (Prefix >= 94 && Prefix <= 96)
				{
					Last_Name += "Wild";
					bad = false;
				}
				else if (Prefix >= 97 && Prefix <= 98)
				{
					Last_Name += "Will";
					bad = false;
				}
				else if (Prefix >= 99 && Prefix <= 100)
				{
					Last_Name += "Whisper";
					bad = false;
				}
			}

			bad = true;

			Full_Name = First_Name + " " + Last_Name;
		}

		return Full_Name;
	}
	else if (race == "Half-Orc")
	{
		if (Half_Race <= 50)
		{
			Random_Name("Human", 3);
		}
		else
		{
			Random_Name("Orc", 3);
		}
	}
	else if (race == "Tiefling")
	{

	}
	else if (race == "Aasimar")
	{

	}
	else if (race == "Dragonborn")
	{

	}
	else if (race == "Orc")
	{

	}
}