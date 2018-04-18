#pragma once
#include "stdafx.h"
#include "DandD.h"

using namespace std;

class Battle_Track
{
private:
	string charFile = "Characters.txt";
	string monFile = "Monsters.txt";
	int comma;


	struct Batttle_Stats
	{
		string Name;
		int Total_Health;
		int Current_Health;
		int Initiative;
		int Speed;
		int Armor_Class;
		int Passive_Perception;
		double Challenge_Rating;
		string Mini_Used;
		int DST_Fails;
		int DST_Passes;
		bool dead = false;
	};

public:
	Battle_Track();
	~Battle_Track();

	vector<Battle_Track> battleVect;

	Batttle_Stats InitStats;
	int Can_Battle();
	void Vect_SetUp();
	void Init_Roll();
	void Vect_Ini_Sort();
	void Battle_System();
	void Display_List();
	void Battle_End();
	double EXP_Calc(double);
};

