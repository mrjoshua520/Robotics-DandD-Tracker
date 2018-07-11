#include "stdafx.h"
#include "Bank_of_Emon.h"


Bank_of_Emon::Bank_of_Emon()
{
}


Bank_of_Emon::~Bank_of_Emon()
{
}

void Bank_of_Emon::Welcome()
{
	string input;
	bool badinput = true;

	while (badinput)
	{
		system("cls");
		cout << "Who is using their account?" << endl;
		cout << "1. Storm Cloud" << endl;
		cout << "2. Gonfrad Gondola" << endl;
		cout << "3. Zanderian Scabelius" << endl;
		cout << "User: ";
		cin >> input;

		if (input == "1")
		{
			badinput = false;
			access("Storm");
		}
		else if (input == "2")
		{
			badinput = false;
			access("Gonfrad");
		}
		else if (input == "3")
		{
			badinput = false;
			access("Zanderian");
		}
		else
		{
			system("cls");
			cout << "Bad Input" << endl << endl;
			system("pause");
		}
	}
}

void Bank_of_Emon::access(string user)
{
	int pin;
	bool badinput = true;
	int attemps = 0;

	if (user == "Storm")
	{
		pinNum = 53792;

		while (badinput)
		{
			system("cls");
			cout << "Enter the pin number for Storm's account." << endl;
			cout << "Pin: ";
			cin >> pin;
			if (pin == pinNum)
			{
				badinput = false;
				Account_Info(pin);
			}
			else
			{
				system("cls");
				if (attemps >= 3)
				{
					Locked('S');
					Account_Info(pinNum);
				}
				else
				{
					cout << "You have entered the wrong pin number. Try Again" << endl << endl;
					attemps++;
				}
				system("pause");
			}
		}
	}
	else if (user == "Gonfrad")
	{
		pinNum = 2013;

		while (badinput)
		{
			system("cls");
			cout << "Enter the pin number for Gonfrad's account." << endl;
			cout << "Pin: ";
			cin >> pin;
			if (pin == pinNum)
			{
				badinput = false;
				Account_Info(pin);
			}
			else
			{
				system("cls");
				if (attemps >= 3)
				{
					Locked('G');
					Account_Info(pinNum);
				}
				else
				{
					cout << "You have entered the wrong pin number. Try Again" << endl << endl;
					attemps++;
				}
				system("pause");
			}
		}
	}
	else if (user == "Zanderian")
	{
		pinNum = 1023;

		while (badinput)
		{
			system("cls");
			cout << "Enter the pin number for Zanderian's account." << endl;
			cout << "Pin: ";
			cin >> pin;
			if (pin == pinNum)
			{
				badinput = false;
				Account_Info(pin);
			}
			else
			{
				system("cls");
				if (attemps >= 3)
				{
					Locked('Z');
					Account_Info(pinNum);
				}
				else
				{
					cout << "You have entered the wrong pin number. Try Again" << endl << endl;
					attemps++;
				}
				system("pause");
			}
		}
	}
}

void Bank_of_Emon::Account_Info(int pin)
{
	ifstream inputfile;
	string ans;
	string sel;

	if (pin == 53792)
	{
		inputfile.open(stormFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			gold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			status = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		inputfile.close();

		if (status == "U")
		{
			system("cls");
			cout << "Name on account: Storm Cloud" << endl;
			cout << "Date of Birth: Misuthar 2nd, 807PD" << endl;
			cout << endl << "Balance: " << gold << " gold pieces." << endl << endl;
			system("pause");
			cout << endl << endl;
			cout << "What would you like to do?" << endl;
			cout << "1. Add Funds" << endl;
			cout << "2. Subtract Funds" << endl;
			cout << "Selection: ";
			cin >> sel;

			if (sel == "1")
			{
				Add_Funds('S');
			}
			else
			{
				Subtract_Funds('S');
			}
		}
		else
		{
			cout << "Your account has been locked. Please go to the bank of Emon to get the account unlocked. Are you there? (Binary)" << endl;
			cout << "Answer: ";
			cin >> ans;

			if (ans == "0")
			{

			}
			else
			{
				Unlocked('S');
			}
		}
	}
	else if (pin == 4395)
	{
		inputfile.open(GonfradFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			gold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			status = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		inputfile.close();
		
		if (status == "U")
		{
			system("cls");
			cout << "Name on account: Gonfrad Gondola" << endl;
			cout << "Date of Birth: Quen'pillar 1st, 765PD" << endl;
			cout << endl << "Balance: " << gold << " gold pieces." << endl << endl;
			system("pause");
			cout << endl << endl;
			cout << "What would you like to do?" << endl;
			cout << "1. Add Funds" << endl;
			cout << "2. Subtract Funds" << endl;
			cout << "Selection: ";
			cin >> sel;

			if (sel == "1")
			{
				Add_Funds('G');
			}
			else
			{
				Subtract_Funds('G');
			}
		}
		else
		{
			cout << "Your account has been locked. Please go to the bank of Emon to get the account unlocked. Are you there? (Binary)" << endl;
			cout << "Answer: ";
			cin >> ans;

			if (ans == "0")
			{

			}
			else
			{
				Unlocked('G');
			}
		}
	}
	else if (pin == 1023)
	{
		inputfile.open(ZandFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			gold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);
			
			comma = name.find(',');
			status = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		inputfile.close();
		
		if (status == "U")
		{
			system("cls");
			cout << "Name on account: Zanderian Scabelius" << endl;
			cout << "Date of Birth: Duallahei 16th, 810PD" << endl;
			cout << endl << "Balance: " << gold << " gold pieces." << endl << endl;
			system("pause");
			cout << endl << endl;
			cout << "What would you like to do?" << endl;
			cout << "1. Add Funds" << endl;
			cout << "2. Subtract Funds" << endl;
			cout << "Selection: ";
			cin >> sel;

			if (sel == "1")
			{
				Add_Funds('Z');
			}
			else
			{
				Subtract_Funds('Z');
			}
		}
		else
		{
			cout << "Your account has been locked. Please go to the bank of Emon to get the account unlocked. Are you there? (Binary)" << endl;
			cout << "Answer: ";
			cin >> ans;

			if (ans == "0")
			{

			}
			else
			{
				Unlocked('Z');
			}
		}
	}
}

void Bank_of_Emon::Locked(char user)
{
	ifstream inputfile;
	ofstream temp;
	double currGold;
	string currStatus;

	temp.open("tempMoney.txt");

	if (user == 'S')
	{
		inputfile.open(stormFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			currGold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			currStatus = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		currStatus = "L";

		temp << currGold << "," << currStatus << "\n";

		temp.close();
		inputfile.close();
		remove("Storm_Money.txt");
		rename("tempMoney.txt", "Storm_Money.txt");
		remove("tempMoney.txt");
	}
	else if (user == 'G')
	{
		inputfile.open(GonfradFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			currGold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			currStatus = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		currStatus = "L";

		temp << currGold << "," << currStatus << "\n";

		temp.close();
		inputfile.close();
		remove("Gondola_Money.txt");
		rename("tempMoney.txt", "Gondola_Money.txt");
		remove("tempMoney.txt");
	}
	else if (user == 'Z')
	{
		inputfile.open(ZandFile);

		for (int count = 0; getline(inputfile, name); count++)
		{
			comma = name.find(',');
			currGold = stod(name.substr(0, comma));
			name = name.substr(comma + 1);

			comma = name.find(',');
			currStatus = name.substr(0, comma);
			name = name.substr(comma + 1);
		}

		currStatus = "L";

		temp << currGold << "," << currStatus << "\n";

		temp.close();
		inputfile.close();
		remove("Zand_Money.txt");
		rename("tempMoney.txt", "Zand_Money.txt");
		remove("tempMoney.txt");
	}
}

void Bank_of_Emon::Unlocked(char user)
{
	ifstream inputfile;
	ofstream temp;
	double currGold;
	string currStatus;
	string passcode;
	const string bankPass = "2767-3547-4395-1023";

	cout << "Please enter the bank of Emon pass code to unlock the account." << endl;
	cout << "Passcode: ";
	cin >> passcode;

	if (passcode == bankPass || passcode == "DMUNLOCK")
	{
		temp.open("tempMoney.txt");
		if (user == 'S')
		{
			inputfile.open(stormFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currStatus = "U";

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Storm_Money.txt");
			rename("tempMoney.txt", "Storm_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'G')
		{
			inputfile.open(GonfradFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currStatus = "U";

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Gondola_Money.txt");
			rename("tempMoney.txt", "Gondola_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'Z')
		{
			inputfile.open(ZandFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currStatus = "U";

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Zand_Money.txt");
			rename("tempMoney.txt", "Zand_Money.txt");
			remove("tempMoney.txt");
		}
	}
	else
	{
		system("cls");
		cout << "That is incorrect." << endl << endl;
		system("pause");
	}
}

void Bank_of_Emon::Add_Funds(char user)
{
	ifstream inputfile;
	ofstream temp;
	double currGold;
	string currStatus;
	double amount;

	cout << endl;
	cout << "How much are you adding in gold value?" << endl;
	cout << "Amount: ";
	cin >> amount;

	if (1 == 1)
	{
		temp.open("tempMoney.txt");
		if (user == 'S')
		{
			inputfile.open(stormFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold += amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Storm_Money.txt");
			rename("tempMoney.txt", "Storm_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'G')
		{
			inputfile.open(GonfradFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold += amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Gondola_Money.txt");
			rename("tempMoney.txt", "Gondola_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'Z')
		{
			inputfile.open(ZandFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold += amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Zand_Money.txt");
			rename("tempMoney.txt", "Zand_Money.txt");
			remove("tempMoney.txt");
		}
	}
}

void Bank_of_Emon::Subtract_Funds(char user)
{
	ifstream inputfile;
	ofstream temp;
	double currGold;
	string currStatus;
	double amount;

	cout << endl;
	cout << "How much are you taking away in gold value?" << endl;
	cout << "Amount: ";
	cin >> amount;

	if (1 == 1)
	{
		temp.open("tempMoney.txt");
		if (user == 'S')
		{
			inputfile.open(stormFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold -= amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Storm_Money.txt");
			rename("tempMoney.txt", "Storm_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'G')
		{
			inputfile.open(GonfradFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold -= amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Gondola_Money.txt");
			rename("tempMoney.txt", "Gondola_Money.txt");
			remove("tempMoney.txt");
		}
		else if (user == 'Z')
		{
			inputfile.open(ZandFile);

			for (int count = 0; getline(inputfile, name); count++)
			{
				comma = name.find(',');
				currGold = stod(name.substr(0, comma));
				name = name.substr(comma + 1);

				comma = name.find(',');
				currStatus = name.substr(0, comma);
				name = name.substr(comma + 1);
			}

			currGold -= amount;

			temp << currGold << "," << currStatus << "\n";

			temp.close();
			inputfile.close();
			remove("Zand_Money.txt");
			rename("tempMoney.txt", "Zand_Money.txt");
			remove("tempMoney.txt");
		}
	}
}
