#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>
#include "Single_Items.h"
#include "Dollar.h"

using namespace std;

class Containers
{
private:
	string chest;
	string burialUrn;
	string crate;
	string barrel;
	string lockbox;
	string wagon;
	Single_Items items;
	Dollar coin;

public:
	Containers();
	~Containers();

	void Set_Chest();
	void Set_burialUrn();
	void Set_Crate();
	void Set_Barrel();
	void Set_Lockbox();
	void Set_Wagon();

	string Get_Chest();
	string Get_burialUrn();
	string Get_Crate();
	string Get_Barrel();
	string Get_Lockbox();
	string Get_Wagon();
};

