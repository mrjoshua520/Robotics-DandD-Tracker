#pragma once
#include "stdafx.h"
#include "DandD.h"

using namespace std;

class Battle_Track
{
private:
	string charFile = "Characters.txt";
	string monFile = "Monsters.txt";

public:
	Battle_Track();
	~Battle_Track();

	int Can_Battle();
};

