#pragma once
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>

using namespace std;

class Single_Items
{
private:
	string tool;
	string armor;
	string weapon;
	string potion;
	string kit;
	string food;
	string drink;
	string gem_10gp;
	string gem_50gp;
	string gem_100gp;
	string gem_500gp;
	string gem_1000gp;
	string gem_5000gp;
	string art_object_25gp;
	string art_object_250gp;
	string art_object_750gp;
	string art_object_2500gp;
	string art_object_7500gp;
	string other;

public:
	Single_Items();
	~Single_Items();

	void Set_Tool();
	void Set_Armor();
	void Set_Weapon();
	void Set_Potion();
	void Set_Kit();
	void Set_Food();
	void Set_Drink();
	void Set_Gem_10gp();
	void Set_Gem_50gp();
	void Set_Gem_100gp();
	void Set_Gem_500gp();
	void Set_Gem_1000gp();
	void Set_Gem_5000gp();
	void Set_Art_25gp();
	void Set_Art_250gp();
	void Set_Art_750gp();
	void Set_Art_2500gp();
	void Set_Art_7500gp();

	string Get_Tool();
	string Get_Armor();
	string Get_Weapon();
	string Get_Potion();
	string Get_Kit();
	string Get_Food();
	string Get_Drink();
	string Get_Gem_10gp();
	string Get_Gem_50gp();
	string Get_Gem_100gp();
	string Get_Gem_500gp();
	string Get_Gem_1000gp();
	string Get_Gem_5000gp();
	string Get_Art_25gp();
	string Get_Art_250gp();
	string Get_Art_750gp();
	string Get_Art_2500gp();
	string Get_Art_7500gp();
};

