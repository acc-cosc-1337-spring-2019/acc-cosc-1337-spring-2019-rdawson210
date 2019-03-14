#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include "transaction.h"
#include<iostream>
#include<vector>

using std::vector;
using std::ostream;

class BankAccount
{
public:
	BankAccount(int act, double bal);
	virtual double get_balance();
	void deposit(double amount);
	void deposit(int pin, double amount);
	void withdraw(double amount);
	vector<Transaction> get_transactions()const {return transactions;};
	friend void display(const BankAccount& act);
	friend BankAccount operator +(BankAccount& act1,
		const BankAccount& act2);
	friend ostream & operator << (ostream & out,
		const BankAccount & b);
private:
	vector<Transaction> transactions;
	int account_number;
	double balance;
	bool amount_greater_zero(double amount);
};

# endif // !BANK_ACCOUNT_H