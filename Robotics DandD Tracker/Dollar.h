#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>

using namespace std;

class Dollar
{
public:
	Dollar();
	~Dollar();
	int copper;
	int silver;
	int electrum;
	int gold;
	int platinum;

	void Set_Zero_To_Four();
	void Set_Five_To_Ten();
	void Set_Eleven_To_Sixteen();
	void Set_Seventeen_Plus();

	void Set_Zero_To_Four_Hoard();
	void Set_Five_To_Ten_Hoard();
	void Set_Eleven_To_Sixteen_Hoard();
	void Set_Seventeen_Plus_Hoard();
};

