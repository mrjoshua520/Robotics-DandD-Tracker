#include "stdafx.h"
#include "Players.h"


ifstream inputFile;
ofstream outputFile;
ofstream temp;
Battle_Track battle;

Players::Players()
{
}

Players::~Players()
{
}

void Players::Read_Character_File()
{
	//reads the text file for players and stores into a vector

	ifstream inputFile;

	inputFile.open(fileName);

	player.clear();

		if (inputFile)
		{
			if (inputFile.peek() != std::ifstream::traits_type::eof())
			{
				for (int count = 0; getline(inputFile, name); count++)
				{
					player.push_back(Players());

					comma = name.find(',');
					player[count].charName = name.substr(0, comma);
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].playerName = name.substr(0, comma);
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].Class = name.substr(0, comma);
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].race = name.substr(0, comma);
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].Alignment = name.substr(0, comma);
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].strScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].strMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].dexScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].dexMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].conScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].conMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].intScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].intMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].wisScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].wisMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].chaScore = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].chaMod = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].armorClass = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].speed = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].initiative = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].totalHealth = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].passivePerception = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].expPoints = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);

					comma = name.find(',');
					player[count].level = stoi(name.substr(0, comma));
					name = name.substr(comma + 1);
				}
			}
			else
			{
				system("cls");
				cout << "The character text file is empty. Please Add a character." << endl;
				system("pause");
				Add_Character();
			}
		}
		inputFile.close();
}
void Players::View_Characters()
{
	//allows users to view current players

	string Input;

	inputFile.open(fileName);

	system("cls");
	cout << "Enter the name of the Character you want to view." << endl;
	cout << endl << "=====CURRENT CHARACTERS======" << endl;

	for (Players play : player)
	{
		cout << "Character Name: " << play.charName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (Players play : player)
	{
		if (Input == play.charName)
		{
			system("cls");
			cout << "==========" << play.charName << "'s Stats ==========" << endl << endl;
			cout << play.charName << " is played by " << play.playerName << "." << endl;
			cout << play.charName << " is a " << play.race << " " << play.Class << " of level " << play.level << ". They are " << play.Alignment << "." << endl;
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
			cout << "Enter 1 to View a different Character." << endl;
			cout << "Enter -999 to return to the menu." << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "1")
			{
				View_Characters();
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
void Players::Level_Up_Characters()
{
	//levels up one player while keeping others the same

	ifstream inputFile;
	ofstream temp;
	string Input;
	int tempMod;
	int tempWis;
	bool BadInputOne = true;
	bool BadInput = true;
	int count = 0;
	int i = 0;
	int charNum = 1;

	inputFile.open(fileName);
	temp.open("temp.txt", ofstream::app);

	system("cls");

	cout << "What character do you want to level up?" << endl;
	cout << "==========CURRENT CHARACTERS==========" << endl;
	for (Players play : player)
	{
		cout << "Character Name: " << play.charName << "       Played by: " << play.playerName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (Players playtwo : player)
	{
		count++;
	}

	for (Players playthree : player)
	{
		if (playthree.charName == Input)
		{
			charNum = i;
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
		cout << "There is no character with the name " << Input << "." << endl;
		system("pause");
	}
	else
	{
		for (int countthis = 0; getline(inputFile, name); countthis++)
		{
			comma = name.find(',');
			val = name.substr(0, comma);

			if (val != Input)
			{
				temp << name << endl;
			}
		}

		for (int count = 1; getline(inputFile, name); count++)
		{
			comma = name.find(',');
			val = name.substr(0, comma);
			
			if (val == Input)
			{
				charNum = count;
			}
		}

		system("cls");
		cout << charNum;
		system("pause");

		temp << player[charNum].charName << ",";
		temp << player[charNum].playerName << ",";
		temp << player[charNum].Class << ",";
		temp << player[charNum].race << ",";
		temp << player[charNum].Alignment << ",";

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s ability scores increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].strScore) << ",";
				temp << to_string(player[charNum].strMod) << ",";
				temp << to_string(player[charNum].dexScore) << ",";
				temp << to_string(player[charNum].dexMod) << ",";
				temp << to_string(player[charNum].conScore) << ",";
				temp << to_string(player[charNum].conMod) << ",";
				temp << to_string(player[charNum].intScore) << ",";
				temp << to_string(player[charNum].intMod) << ",";
				temp << to_string(player[charNum].wisScore) << ",";
				temp << to_string(player[charNum].wisMod) << ",";
				temp << to_string(player[charNum].chaScore) << ",";
				temp << to_string(player[charNum].chaMod) << ",";
				tempWis = player[charNum].wisMod;
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the strength score for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
				}

				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the dexterity score for Character " << (i + 1) << ": " << endl;
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
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
				}

				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the constitution score for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
				}

				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the intelligence score for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
				}

				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the wisdom score for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
					tempWis = tempMod;
				}

				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the charisma score for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
					tempMod = (stoi(Input) - 10) / 2;
					temp << to_string(tempMod) << ",";
				}
				BadInputOne = false;
				BadInput = true;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}
		BadInputOne = true;

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s armor class increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].armorClass) << ",";
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the armor class for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
				}

				BadInputOne = false;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}

		BadInputOne = true;

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s speed increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].speed) << ",";
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the speed for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
				}

				BadInputOne = false;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}
		BadInputOne = true;

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s initiative increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].initiative) << ",";
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the initiative for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
				}

				BadInputOne = false;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}
		BadInputOne = true;

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s total health increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].totalHealth) << ",";
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the total health for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
				}

				BadInputOne = false;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}

		temp << to_string(10 + tempWis) << ",";

		BadInputOne = true;

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << player[charNum].charName << "'s EXP increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(player[charNum].expPoints) << ",";
				BadInput = false;
				BadInputOne = false;
			}
			else if (Input == "y" || Input == "Y")
			{
				BadInput = true;

				while (BadInput)
				{
					string Input;
					int inputLength = 0;
					system("cls");
					cout << "Enter the EXP for Character " << (i + 1) << ": " << endl;
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
					temp << Input << ",";
				}

				BadInputOne = false;
			}
			else
			{
				system("cls");
				cout << "Bad Input. Try Again.";
				system("pause");
				BadInput = true;
			}
		}

		temp << to_string((player[charNum].level + 1));
		inputFile.close();
		temp.close();
		remove("Characters.txt");
		rename("temp.txt", "Characters.txt");
		remove("temp.txt");
	}
}
void Players::Delete_Character()
{
	//deletes a player from the txt file

	ifstream inputFile;
	ofstream temp;
	string Input;
	bool BadInput = true;
	int count = 0;
	int i = 0;
	inputFile.open(fileName);
	temp.open("temp.txt");
	system("cls");

	cout << "Which character do you want to remove?" << endl;
	cout << "==========CURRENT CHARACTERS==========" << endl;
	for (Players play : player)
	{
		cout << "Character Name: " << play.charName << "       Played by: " << play.playerName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (Players play : player)
	{
		count++;
	}

	for (Players play : player)
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
		cout << "There is no character with the name " << Input << "." << endl;
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
		remove("Characters.txt");
		rename("temp.txt", "Characters.txt");
		remove("temp.txt");
	}
}
void Players::Add_Character()
{
	//adds a player to the text file

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
		cout << "How many characters do you want to add?" << endl;
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
			cout << "Enter the character name for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the player name for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the class for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the race for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the alignment for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the strength score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the dexterity score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the constitution score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the intelligence score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the wisdom score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the charisma score for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the armor class for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the speed for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the initiative for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the total health for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the current amout of EXP for Character " << (i + 1) << ": " << endl;
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
			cout << "Enter the current level Character " << (i + 1) << " is at: " << endl;
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
			outputFile << Input;
		}
	
		outputFile << "\n";

	}
	outputFile.close();
}
int Players::Read_Character_File_Battle()
{
	//reads the data from the txt file into the battle vector

	string temp;
	int temps;
	ifstream inputFile;
	int num = 0;
	int HP;

	inputFile.open(fileName);

	battle.battleVect.clear();

	if (inputFile)
	{
		if (inputFile.peek() != std::ifstream::traits_type::eof())
		{
			for (int count = 0; getline(inputFile, name); count++)
			{
				battle.battleVect.push_back(Battle_Track());

				comma = name.find(',');
				battle.battleVect[count].InitStats.Name = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				temp = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				temp = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				temp = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				temp = name.substr(0, comma);
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				battle.battleVect[count].InitStats.Armor_Class = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				battle.battleVect[count].InitStats.Speed = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				battle.battleVect[count].InitStats.Initiative = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				battle.battleVect[count].InitStats.Total_Health = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				battle.battleVect[count].InitStats.Passive_Perception = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				temps = stoi(name.substr(0, comma));
				name = name.substr(comma + 1);

				battle.battleVect[count].InitStats.Challenge_Rating = 0;

				system("cls");

				cout << "What is " << battle.battleVect[count].InitStats.Name << "'s current HP? ";
				cin >> HP;

				battle.battleVect[count].InitStats.Current_Health = HP;

				battle.battleVect[count].InitStats.Mini_Used = "Player";

				battle.battleVect[count].InitStats.DST_Passes = 0;

				battle.battleVect[count].InitStats.DST_Fails = 0;

				battle.battleVect[count].InitStats.dead = false;

				num++;
			}
		}
		else
		{
			system("cls");
			cout << "The character text file is empty. Please Add a character." << endl;
			system("pause");
			Add_Character();
		}
	}
	inputFile.close();

	return num;
}
void Players::Store_Battle()
{
	//stores the battle vector into the battle txt file

	ofstream output;

	output.open("Battle.txt", ofstream::app);

	for (Battle_Track batt : battle.battleVect)
	{
		output << batt.InitStats.Name << ",";
		output << batt.InitStats.Armor_Class << ",";
		output << batt.InitStats.Speed << ",";
		output << batt.InitStats.Initiative << ",";
		output << batt.InitStats.Passive_Perception << ",";
		output << batt.InitStats.Total_Health << ",";
		output << batt.InitStats.Current_Health << ",";
		output << batt.InitStats.Challenge_Rating << ",";
		output << batt.InitStats.Mini_Used << ",";
		output << batt.InitStats.DST_Passes << ",";
		output << batt.InitStats.DST_Fails << ",";
		output << batt.InitStats.dead << ",";
		output << batt.InitStats.Lair << "NO" << ",";
		output << batt.InitStats.LairType << "NA" << endl;
	}
}