#include "stdafx.h"
#include "Battle_Track.h"

ifstream inputChar;
ifstream inputMon;

Battle_Track::Battle_Track()
{
}


Battle_Track::~Battle_Track()
{
}

int Battle_Track::Can_Battle()
{
	//will check to see if there are any monsters or players in the files
		//If there are then can battle is true

	inputChar.open(charFile);
	inputMon.open(monFile);

	if (inputChar.peek() != std::ifstream::traits_type::eof())
	{
		if (inputMon.peek() != std::ifstream::traits_type::eof())
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	else
	{
		return 1;
	}

	inputChar.close();
	inputMon.close();
}


