#include "atm.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	/*vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}*/
	BankAccount account(123456, 500);
	ATM atm;
	atm.display_balance();

	display(account);

	BankAccount b(1, 900);
	BankAccount c = account + b;
	cout << c;
	//cin >> c;

	cout << "\n";
	display(c);

	/*
	for(auto tic_tac_toe: list)
	{
	cout<<tic_tac_toe<<"\n";
	*/
}