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

using namespace std;

class Monsters
{
private:
	string fileName = "Monsters.txt";
	string type;
	string size;
	string monName;
	string Alignment;
	int challengeRating;
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
	int armorClass;
	int speed;
	int initiative;
	int totalHealth;
	int currentHealth;
	int passivePerception;

	vector<Monsters> monster;
	string name;
	string val;
	int comma;
public:
	Monsters();
	~Monsters();

	void Read_Monster_File();
	void View_Monsters();
	void Delete_Monster();
	void Add_Monster();
	void Set_Current_HP();
};

