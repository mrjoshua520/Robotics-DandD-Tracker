#include "stdafx.h"
#include "Battle_Track.h"

ifstream inputChar;
ifstream inputMon;

Battle_Track::Battle_Track()
{
}


Battle_Track::~Battle_Track()
{
}

int Battle_Track::Can_Battle()
{
	//will check to see if there are any monsters or players in the files
		//If there are then can battle is true

	inputChar.open(charFile);
	inputMon.open(monFile);

	if (inputChar.peek() != std::ifstream::traits_type::eof())
	{
		if (inputMon.peek() != std::ifstream::traits_type::eof())
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		return 1;
	}

	inputChar.close();
	inputMon.close();
}

void Battle_Track::Vect_SetUp()
{
	//Function takes the battle.txt file and stores all the info into a vector

	ifstream input;
	string name;

	input.open("Battle.txt");

	battleVect.clear();

	if (input)
	{
		for (int count = 0; getline(input, name); count++)
		{
			battleVect.push_back(Battle_Track());

			comma = name.find(',');
			battleVect[count].InitStats.Name = name.substr(0, comma);
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Armor_Class = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Speed = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Initiative = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Passive_Perception = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Total_Health = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Current_Health = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Challenge_Rating = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.Mini_Used = name.substr(0, comma);
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.DST_Passes = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			battleVect[count].InitStats.DST_Fails = stoi(name.substr(0, comma));
			name = name.substr(comma + 1);
		}
	}
}

void Battle_Track::Init_Roll()
{
	//function is used for adding the roll of initiative to the initiative mod

	int init_roll;
	int i = 0;

	for (Battle_Track bat : battleVect)
	{
		system("cls");

		cout << "What is the initiative roll for " << bat.InitStats.Name << " using this mini: " << bat.InitStats.Mini_Used << "." << endl;
		cout << "Roll: ";
		cin >> init_roll;

		battleVect[i].InitStats.Initiative = init_roll;

		i++;
	}
}

void Battle_Track::Vect_Ini_Sort()
{
	//bubble sorts the vector by initiative number

	static int passes = 0;
	int index = 0;
	Battle_Track temp;
	static int number = 0;

	if (passes == 0)
	{
		for (Battle_Track bat : battleVect)
		{
			number++;
		}
	}

	if (passes == (number - 1)) // get 1 less than number of battlers
	{
	return;
	}

	for (int i = 0; i < number; i++)//number of battlers
	{
		int next = i + 1;

		if (i < number - 1) //one less number battles
		{
			if (battleVect[i].InitStats.Initiative > battleVect[i + 1].InitStats.Initiative)
			{

				temp = battleVect[next];

				battleVect[next] = battleVect[i];

				battleVect[i] = temp;

				index++;
			}
			else
			{
				index++;
			}
		}
		else
		{
			break;
		}
	}
	passes++;
	Vect_Ini_Sort();
}

void Battle_Track::Battle_System()
{
	//the main battle function

	int number = 0;
	bool Battle = true;
	int round = 1;
	char damage;
	int hpLoss;
	char over;
	MiscStuff misc;
	int death_save;

	for (Battle_Track bat : battleVect) //finds how many people are in the battle
	{
		number++;
	}
	
	while (Battle) //runs while battle is true
	{
		for (int j = number, i = 0; j > 0; i++, j--)
		{
			if (battleVect[j -1].InitStats.dead == true) //if the current player is dead
			{
				system("cls");
				Display_List();
				cout << endl << endl << "Round " << round;
				cout << endl << endl << endl;
				cout << battleVect[j - 1].InitStats.Name << " is dead." << endl << endl;
			}
			else if (battleVect[j - 1].InitStats.Current_Health <= 0) //if the current player is unconscious
			{
				if (battleVect[j - 1].InitStats.Mini_Used == "Player")
				{
					system("cls");
					Display_List();
					cout << endl << endl << "Round " << round;
					cout << endl << endl << endl;
					cout << battleVect[j - 1].InitStats.Name << " is unconcious." << endl << endl;
					cout << battleVect[j - 1].InitStats.Name << " has passed " << battleVect[j - 1].InitStats.DST_Passes << " death saving throws and has failed " << battleVect[j - 1].InitStats.DST_Fails << " death saving throws." << endl << endl;
					cout << "Please roll a death saving throw." << endl;
					cout << "Roll Value: ";
					cin >> death_save;

					if (death_save < 10)
					{
						if (death_save == 1)
						{
							battleVect[j - 1].InitStats.DST_Fails += 2;
						}
						else
						{
							battleVect[j - 1].InitStats.DST_Fails += 1;
						}
					}
					else
					{
						if (death_save == 20)
						{
							battleVect[j - 1].InitStats.DST_Passes = 100;
						}
						else
						{
							battleVect[j - 1].InitStats.DST_Passes += 1;
						}
					}

					cout << endl << endl;

					if (battleVect[j - 1].InitStats.DST_Fails >= 3)
					{
						battleVect[j - 1].InitStats.dead = true;
						cout << "You feel your breath escape you. You are dead." << endl << endl;
						battleVect[j - 1].InitStats.DST_Fails = 0;
						battleVect[j - 1].InitStats.DST_Passes = 0;
						PlaySound(TEXT("Sword_Death.wav"), NULL, SND_SYNC);
					}
					else if (battleVect[j - 1].InitStats.DST_Passes == 100)
					{
						battleVect[j - 1].InitStats.Current_Health = 1;
						cout << "You restore 1 HP and automatically regain consciousness." << endl << endl;
						battleVect[j - 1].InitStats.DST_Fails = 0;
						battleVect[j - 1].InitStats.DST_Passes = 0;
					}
					else if (battleVect[j - 1].InitStats.DST_Passes >= 3 && battleVect[j - 1].InitStats.DST_Passes != 100)
					{
						battleVect[j - 1].InitStats.Current_Health = 1;
						cout << "You stableize." << endl << endl;
						battleVect[j - 1].InitStats.DST_Fails = 0;
						battleVect[j - 1].InitStats.DST_Passes = 0;
					}
					else
					{
						cout << "You remain unconscious." << endl << endl;
					}
				}
				else
				{
					system("cls");
					Display_List();
					cout << endl << endl << "Round " << round;
					cout << endl << endl << endl;
					PlaySound(TEXT("Sword_Death.wav"), NULL, SND_SYNC);
					cout << battleVect[j - 1].InitStats.Name << " is dead." << endl << endl;
				}
			}
			else //if the player is alive
			{
				battleVect[j - 1].InitStats.DST_Fails = 0;
				battleVect[j - 1].InitStats.DST_Passes = 0;
				system("cls");
				Display_List();
				cout << endl << endl << "Round " << round;
				cout << endl << endl << endl;
				cout << "========CURRENT PLAYER========" << endl;
				cout << "Name:               " << battleVect[j - 1].InitStats.Name << endl;
				cout << "Mini Used           " << battleVect[j - 1].InitStats.Mini_Used << endl;
				cout << "Armor Class:        " << battleVect[j - 1].InitStats.Armor_Class << endl;
				cout << "Initiative:         " << battleVect[j - 1].InitStats.Initiative << endl;
				cout << "Speed:              " << battleVect[j - 1].InitStats.Speed << endl;
				cout << "Passive Perception: " << battleVect[j - 1].InitStats.Passive_Perception << endl;
				cout << "Total Health:       " << battleVect[j - 1].InitStats.Total_Health << endl;
				cout << "Current Health:     " << battleVect[j - 1].InitStats.Current_Health << endl << endl;

				if (battleVect[j - 1].InitStats.Name == "Zanderian")
				{
					cout << "Chaos Bolt Damage type is " << misc.Chaos_Bolt() << "." << endl << endl;
				}
			}

				cout << "Don't continue unless ready to advance." << endl << endl;
				system("pause");
				cout << endl << "This will clear the screen. Are you Sure?" << endl;
				system("pause");

			for (int j = number, i = 0; j > 0; i++, j--) //did take damage loop
			{
				system("cls");
				Display_List();
				cout << endl << "Did " << battleVect[j - 1].InitStats.Name << " take any damage this turn? Y/N (Type in a negative to heal) ";
				cin >> damage;

				if (damage == 'Y' || damage == 'y')
				{
					cout << endl << endl;
					cout << "How much damage? ";
					cin >> hpLoss;

					battleVect[j - 1].InitStats.Current_Health -= hpLoss;
				}
				else
				{

				}
			}
		}

		system("cls");
		Display_List();
		cout << "Is the battle over? Y/N";
		cin >> over;

		if (over == 'Y' || over == 'y')
		{
			Battle = false;
		}
		else
		{
			Battle = true;
		}
		round++;
	}

	Battle_End();
}

void Battle_Track::Display_List()
{
	//the order and stats display

	int number = 0;

	for (Battle_Track bat : battleVect)
	{
		number++;
	}

	for (int j = number, i = 1; j > 0; i++, j--)
	{
		cout << "Number " << i << ": " << battleVect[j - 1].InitStats.Name << " has " << battleVect[j - 1].InitStats.Current_Health << " / " << battleVect[j - 1].InitStats.Total_Health << ". Initiative Score of " << battleVect[j - 1].InitStats.Initiative << ". Armor Class: " << battleVect[j - 1].InitStats.Armor_Class << "." << endl;
	}
}

void Battle_Track::Battle_End()
{
	//the end of the battle

	int count = 0;
	double ExpTotal = 0;
	double temp;
	int Pnum = 0;

	for (Battle_Track bat : battleVect)
	{
		temp = EXP_Calc(bat.InitStats.Challenge_Rating);

		ExpTotal += temp;
	}

	for (Battle_Track bat : battleVect)
	{
		if (bat.InitStats.Mini_Used == "Player")
		{
			Pnum++;
		}
	}

	ExpTotal = ExpTotal / Pnum;

	system("cls");
	cout << "The battle is won! You all gain " << ExpTotal << " EXP." << endl << endl;
	system("pause");
}

double Battle_Track::EXP_Calc(double challenge)
{
	//calcs the exp according to challenge rating

	if (challenge == 0)
	{
		return 0;
	}
	else if (challenge == .125)
	{
		return 25;
	}
	else if (challenge == .25)
	{
		return 50;
	}
	else if (challenge == .5)
	{
		return 100;
	}
	else if (challenge == 1)
	{
		return 200;
	}
	else if (challenge == 2)
	{
		return 450;
	}
	else if (challenge == 3)
	{
		return 700;
	}
	else if (challenge == 4)
	{
		return 1100;
	}
	else if (challenge == 5)
	{
		return 1800;
	}
	else if (challenge == 6)
	{
		return 2300;
	}
	else if (challenge == 7)
	{
		return 2900;
	}
	else if (challenge == 8)
	{
		return 3900;
	}
	else if (challenge == 9)
	{
		return 5000;
	}
	else if (challenge == 10)
	{
		return 5900;
	}
	else if (challenge == 11)
	{
		return 7200;
	}
	else if (challenge == 12)
	{
		return 8400;
	}
	else if (challenge == 13)
	{
		return 10000;
	}
	else if (challenge == 14)
	{
		return 11500;
	}
	else if (challenge == 15)
	{
		return 13000;
	}
	else if (challenge == 16)
	{
		return 15000;
	}
	else if (challenge == 17)
	{
		return 18000;
	}
	else if (challenge == 18)
	{
		return 20000;
	}
	else if (challenge == 19)
	{
		return 22000;
	}
	else if (challenge == 20)
	{
		return 25000;
	}
	else if (challenge == 21)
	{
		return 33000;
	}
	else if (challenge == 22)
	{
		return 41000;
	}
	else if (challenge == 23)
	{
		return 50000;
	}
	else if (challenge == 24 || challenge == 25 || challenge == 26 || challenge == 27 || challenge == 28 || challenge == 29)
	{
		return 62000;
	}
	else if (challenge == 30)
	{
		return 155000;
	}
	else
	{
		return 0;
	}
}

