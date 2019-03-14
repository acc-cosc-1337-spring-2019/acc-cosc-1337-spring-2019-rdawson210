#include "savings_account.h"
#include<iostream>

using std::cout;

void SavingsAccount::add_interest_earned()
{
	double interest_earned = BankAccount::get_balance() * time * interest_rate / 100;
	deposit(interest_earned);
}

double SavingsAccount::get_balance()
{
	cout << "SavingsAccount::get_balance();" << "\n";
	double interest_earned = BankAccount::get_balance() * time * interest_rate / 100;
	return BankAccount::get_balance() + interest_earned;
}