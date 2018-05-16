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

class NPCs
{
private:
	string fileName = "NPCs.txt";
	string Class;
	string race;
	string playerName;
	string Alignment;
	string Personality;
	string Voice;
	string Job;
	string Location;
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
	NPCs();
	~NPCs();

	vector<NPCs> npc;

	string charName;
	int totalHealth;
	int currentHealth;
	int initiative;
	int armorClass;
	int speed;
	int passivePerception;

	void Read_NPC_File();
	void View_NPC();
	void Delete_NPC();
	void Add_NPC();
	string Random_Name(string, int);
};

