#include "atm.h"
#include "savings_account.h"
#include "checking_account.h"
#include<iostream>
#include<vector>

using std::cout;
using std::vector;
using std::reference_wrapper;
using std::endl;


int main()
{
	SavingsAccount s(12345, 1000);
	cout << s.get_balance() << "\n";

	BankAccount& act = s;
	cout << act.get_balance() << "\n";

	CheckingAccount c(54321, 500);
	cout << c.get_balance() << "\n";
	BankAccount& d = c;
	cout << d.get_balance() << "\n";

	/*vector<reference_wrapper<BankAccount>> accounts{ s, c };

	for (auto & account : accounts)
	{
		cout << account.get().get_balance() << endl;
	}*/
	
	
	int num = 5;
	int& num_ref = num;
	cout << num_ref;
	
	BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);

	atm.display_balance();
	atm.deposit(50);
	atm.display_balance();


	//BankAccount b(1, 900);
	//BankAccount c = account + b;
	//cout << c;
	//cin << c;
	cout << "\n";
	cout << c << "\n";

	/*std::vector<BankAccount>accounts;
	BankAccount account(12345689, 500);  //object1
	BankAccount account1(55545689, 5000); //object2
	accounts.push_back(account);
	accounts.push_back(account1);
	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}*/

	/*

	for(auto tic_tac_toe: list)
	{
		cout<<tic_tac_toe<<"\n";
	}

	*/

	return 0;
}