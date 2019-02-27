#include "atm.h"

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

	ATM atm;
	atm.display_balance();

}