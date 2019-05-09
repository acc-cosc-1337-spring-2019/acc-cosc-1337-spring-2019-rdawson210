#include "report.h"

Report::Report()
{
	//read from file or database
	for (int i = 0; i < 5; i++)
	{
		accounts[i] = new BankAccount(i * 100);
	}
}

Report::~Report()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Clear element #" << i + 1 << "\n";
		delete accounts[i];
		accounts[i] = nullptr;

	}
}

void Report::display()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << accounts[i].get_balance() << "\n";
	}
}