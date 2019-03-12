#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include"bank_account.h"

class SavingsAccount: public BankAccount
{
public:
	SavingsAccount(int act, double bal, float i = .9) :
		BankAccount(act, bal), interest_rate(i) {} // initializing BankAccount object - not local variables
	void add_interest_earned();
private:
	const float interest_rate;
	const float time = 1.0 / 12.0;
};

#endif //SAVINGS_ACCOUNT_H