#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>
#include "Single_Items.h"
#include "Dollar.h"
#include "Magic_Items.h"

using namespace std;
class Hoard
{
private:
	string Hoard_Zero_to_Four;
	string Hoard_Five_to_Ten;
	string Hoard_Eleven_to_Sixteen;
	string Hoard_Seventeen_Plus;
	Dollar coins;
	Magic_Items mItem;
	Single_Items item;
	
public:
	Hoard();
	~Hoard();

	void Set_Hoard_Zero_to_Four();
	void Set_Hoard_Five_to_Ten();
	void Set_Hoard_Eleven_to_Sixteen();
	void Set_Hoard_Seventeen_Plus();

	string Get_Hoard_Zero_to_Four();
	string Get_Hoard_Five_to_Ten();
	string Get_Hoard_Eleven_to_Sixteen();
	string Get_Hoard_Seventeen_Plus();
};

