#include <tchar.h>
#include <iostream>
#include <iomanip>

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	double balance, deposit, withdraw, transfer;
	int option;
	char account;

	balance = 1000;
	account = 0;

	do
	{
		cout << "\n\t***************MENU***************";
		cout << "\n\t*                                *";
		cout << "\n\t*	1. Check Balance         *";
		cout << "\n\t*	2. Deposit               *";
		cout << "\n\t*	3. Withdraw              *";
		cout << "\n\t*	4. Transfer              *";
		cout << "\n\t*	5. Exit                  *";
		cout << "\n\t*                                *";
		cout << "\n\t**********************************";
		cout << "\n\t  Choose and option :";
		cin >> option;

		switch (option)
		{
		case 1: cout << "\n\t Your Balance is : $" << balance << endl;
			break;
		case 2: cout << "\n\t Which amount do you want as deposit ? : $";
			cin >> deposit;
			balance += deposit;
			cout << "\n\t Current Balance: $" << balance << endl;
			break;
		case 3: cout << "\n\t How much do you want to withdraw ? : $";
			cin >> withdraw;
			if (balance < withdraw)
			cout << "\n\t You don't have the necessary money in your account" << endl;
			else
				balance -= withdraw;
			cout << "\n\t Current Balance: $" << balance << endl;
			break;
		case 4: cout << "\n\t How much do you want to transfer ? : $";
			cin >> transfer;
			if (balance < transfer)
				cout << "\n\t You don't have the necessary money in your account" << endl;
			else
				balance -= transfer;
			cout << "\n\t What is the opposite account reference ? : " << account << endl;
			cin >> account;
			cout << "\n\t Operation done with the account : " << account << endl;
			cout << "\n\t Current Balance : $" << balance << endl;
			break;

		default: if (option != 5)
			cout << "Invalid option. Please try again" << endl;;
			break;
		}
	}
	while (option != 5);
	return 0;
}