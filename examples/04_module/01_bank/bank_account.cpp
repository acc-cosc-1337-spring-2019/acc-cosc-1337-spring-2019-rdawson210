#include "bank_account.h"
#include<iostream>

using std::cout;

BankAccount::BankAccount() : balance(500), account_number(12345)
{

}

BankAccount::BankAccount(int act, double bal) : account_number(act), balance(bal)
{
}

double BankAccount::get_balance() const
{
	return balance;
}

void BankAccount::deposit(double amount)
{
	if (amount_greater_than_0(amount))
	{
		balance += amount;
	}
}

void BankAccount::withdraw(double amount)
{
	if (amount_greater_than_0(amount) && amount <= balance)
	{
		balance -= amount;
	}
}

bool BankAccount::amount_greater_than_0(double amount)
{
	return amount > 0;
}

void display(const BankAccount & act)
{
	cout << "Account: " << act.account_number << "\n";
	cout << "Balance: " << act.balance;
}

BankAccount operator + (BankAccount& act1, const BankAccount& act2)
{
	act1.balance = act1.balance + act2.balance;
	return act1;
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "Account: " << b.account_number << "\n";
	out << "Balance: " << b.balance << "\n";
	return out;
}



