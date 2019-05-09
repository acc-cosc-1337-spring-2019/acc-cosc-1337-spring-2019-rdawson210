#include "examples/12_module/08_arrays_dyn_1/bank_account.h"
#include<iostream>

int main()
{
	//stack or static array of objects
	BankAccount accounts[5];
	//read file or database
	//initialize balances

	for (auto account: accounts)
	{
		std::cout << account.get_balance() << "\n";
	}
	//read file or database
	BankAccount accounts1[] = {BankAccount(5), BankAccount(10), BankAccount (50), BankAccount(100)};
	//code to display balances. still stack/static array.
	
	return 0;
}