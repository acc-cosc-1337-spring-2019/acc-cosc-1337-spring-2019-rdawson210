#include "atm.h"
#include<iostream>

using std::cout;

void ATM::display_balance()
{
	cout << "Balance:  " << account.get_balance();
}