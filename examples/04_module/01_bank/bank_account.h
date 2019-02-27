#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount 
{
public:
	BankAccount(); //Overloading constructor, esp if parameters match
	BankAccount(int act, double bal); //Overloading constructor
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);


private:
	int account_number;
	double balance;
	bool amount_greater_than_0(double amount);

};

#endif  // !BANK_ACCOUNT_H