#include "checking_account.h"
#include<iostream>

using std::cout;

double CheckingAccount::get_balance()
{
	cout << "CheckingAccount::get_balance();" << "\n";
	return BankAccount::get_balance();
}