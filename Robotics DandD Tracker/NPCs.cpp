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
void NPCs::Level_Up_NPC()
{
	//levels up one player while keeping others the same

	ifstream inputFile;
	ofstream outputFile;
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
	temp.open("TempNPC.txt", ofstream::app);

	system("cls");

	cout << "What NPC do you want to level up?" << endl;
	cout << "==========CURRENT NPCs==========" << endl;
	for (NPCs play : npc)
	{
		cout << "Character Name: " << play.charName << "       Played by: " << play.playerName << endl;
	}
	cout << "Selection: ";
	getline(cin, Input);

	for (NPCs playtwo : npc)
	{
		count++;
	}

	for (NPCs playthree : npc)
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
		cout << "There is no NPC with the name " << Input << "." << endl;
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

		temp << npc[charNum].charName << ",";
		temp << npc[charNum].playerName << ",";
		temp << npc[charNum].Class << ",";
		temp << npc[charNum].race << ",";
		temp << npc[charNum].Alignment << ",";

		while (BadInputOne)
		{
			system("cls");
			cout << "Did " << npc[charNum].charName << "'s ability scores increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].strScore) << ",";
				temp << to_string(npc[charNum].strMod) << ",";
				temp << to_string(npc[charNum].dexScore) << ",";
				temp << to_string(npc[charNum].dexMod) << ",";
				temp << to_string(npc[charNum].conScore) << ",";
				temp << to_string(npc[charNum].conMod) << ",";
				temp << to_string(npc[charNum].intScore) << ",";
				temp << to_string(npc[charNum].intMod) << ",";
				temp << to_string(npc[charNum].wisScore) << ",";
				temp << to_string(npc[charNum].wisMod) << ",";
				temp << to_string(npc[charNum].chaScore) << ",";
				temp << to_string(npc[charNum].chaMod) << ",";
				tempWis = npc[charNum].wisMod;
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
			cout << "Did " << npc[charNum].charName << "'s armor class increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].armorClass) << ",";
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
			cout << "Did " << npc[charNum].charName << "'s speed increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].speed) << ",";
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
			cout << "Did " << npc[charNum].charName << "'s initiative increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].initiative) << ",";
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
			cout << "Did " << npc[charNum].charName << "'s total health increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].totalHealth) << ",";
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
			cout << "Did " << npc[charNum].charName << "'s EXP increase? Enter Y or N" << endl;
			cout << "Selection: ";
			getline(cin, Input);

			if (Input == "n" || Input == "n")
			{
				temp << to_string(npc[charNum].expPoints) << ",";
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

		temp << to_string((npc[charNum].level + 1));
		inputFile.close();
		temp.close();
		remove("NPCs.txt");
		rename("TempNPC.txt", "NPCs.txt");
		remove("TempNPC.txt");
	}
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
			outputFile << Input;
		}

		outputFile << "\n";

	}
	outputFile.close();
}