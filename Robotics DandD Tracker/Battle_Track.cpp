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
		}
	}
}

void Battle_Track::Vect_Ini_Sort()
{
	//will sort the vector by initiative order.
}
