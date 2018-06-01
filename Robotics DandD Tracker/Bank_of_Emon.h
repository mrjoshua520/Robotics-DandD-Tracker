#pragma once
#include "DandD.h"

using namespace std;

class Bank_of_Emon
{

private:
	int pinNum;
	double gold;
	string name;
	int comma;
	string status;
	const string stormFile = "Storm_Money.txt";
	const string GonfradFile = "Gondola_Money.txt";
	const string ZandFile = "Zand_Money.txt";

public:
	Bank_of_Emon();
	~Bank_of_Emon();

	void Welcome();
	void access(string);
	void Account_Info(int);
	void Locked(char);
	void Unlocked(char);
	void Add_Funds(char);
	void Subtract_Funds(char);
};

