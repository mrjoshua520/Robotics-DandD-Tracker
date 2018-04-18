#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include "DandD.h"

using namespace std;

class Monsters
{
private:
	string fileName = "Monsters.txt";
	string type;
	string size;
	string Alignment;
	double challengeRating;
	int strScore;
	int dexScore;
	int conScore;
	int intScore;
	int wisScore;
	int chaScore;
	int strMod;
	int dexMod;
	int conMod;
	int intMod;
	int wisMod;
	int chaMod;

	string name;
	string val;
	int comma;
public:
	Monsters();
	~Monsters();

	vector<Monsters> monster;
	vector<Monsters> tempMon;

	string monName;
	string mini;
	int totalHealth;
	int currentHealth;
	int initiative;
	int armorClass;
	int speed;
	int passivePerception;
	int pass;
	int fail;
	bool dead = false;

	void Read_Monster_File();
	void Read_Monster_File_Battle();
	void Set_Battle_Vect(int);
	void View_Monsters();
	void Delete_Monster();
	void Add_Monster();
};

