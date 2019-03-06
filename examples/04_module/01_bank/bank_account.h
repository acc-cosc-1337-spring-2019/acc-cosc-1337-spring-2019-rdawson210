#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>
class BankAccount 
{
public:
	BankAccount(); //Overloading constructor, esp if parameters match
	BankAccount(int act, double bal); //Overloading constructor
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);
	friend void display(const BankAccount& act);
	friend BankAccount operator + (BankAccount& act1, const BankAccount& act2);
	friend std::ostream & operator<<(std::ostream & out, const BankAccount & b);
	friend std::istream & operator>>(std::istream & in, const BankAccount & b);

private:
	int account_number;
	double balance;
	bool amount_greater_than_0(double amount);

};

#endif  // !BANK_ACCOUNT_H