#pragma once
#include "stdafx.h"
#include "DandD.h"

using namespace std;

class Battle_Track
{
private:
	string charFile = "Characters.txt";
	string monFile = "Monsters.txt";

	struct Batttle_Stats
	{
		string Name;
		int Total_Health;
		int Current_Health;
		int Initiative;
		int Speed;
		int Armor_Class;
		int Passive_Perception;
		int Challenge_Rating;
	};

public:
	Battle_Track();
	~Battle_Track();

	vector<Battle_Track> battleVect;

	Batttle_Stats InitStats;
	int Can_Battle();
};

