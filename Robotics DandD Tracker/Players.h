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

class Players
{
private:
	string fileName = "Characters.txt";
	string Class;
	string race;
	string playerName;
	string Alignment;
	int level;
	int expPoints;
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
	Players();
	~Players();

	vector<Players> player;

	string charName;
	int totalHealth;
	int currentHealth;
	int initiative;
	int armorClass;
	int speed;
	int passivePerception;

	void Read_Character_File();
	void View_Characters();
	void Level_Up_Characters();
	void Delete_Character();
	void Add_Character();
	void Set_Current_HP(string);
};

