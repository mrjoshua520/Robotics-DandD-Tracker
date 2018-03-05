#pragma once
#include "stdafx.h"
#include "iostream"
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <ctime>

using namespace std;

class Magic_Items
{
private:
	string magicItem_A;
	string magicItem_B;
	string magicItem_C;
	string magicItem_D;
	string magicItem_E;
	string magicItem_F;
	string magicItem_G;
	string magicItem_H;
	string magicItem_I;
public:
	Magic_Items();
	~Magic_Items();

	void Set_MagicItem_A();
	void Set_MagicItem_B();
	void Set_MagicItem_C();
	void Set_MagicItem_D();
	void Set_MagicItem_E();
	void Set_MagicItem_F();
	void Set_MagicItem_G();
	void Set_MagicItem_H();
	void Set_MagicItem_I();

	string Get_magicItem_A();
	string Get_magicItem_B();
	string Get_magicItem_C();
	string Get_magicItem_D();
	string Get_magicItem_E();
	string Get_magicItem_F();
	string Get_magicItem_G();
	string Get_magicItem_H();
	string Get_magicItem_I();
};

