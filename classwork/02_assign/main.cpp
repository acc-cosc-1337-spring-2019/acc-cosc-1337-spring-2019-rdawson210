#include "assign02.h"
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	double hours = 0;
	double hourly_rate = 0;

	cout << "Pleast input hours: ";
	cin >> hours;
	cout << "Please input hourly rate: ";
	cin >> hourly_rate;

	double gross_salary = gross_pay(hours, hourly_rate);

	cout << "Gross Pay: $" << gross_salary;  


	return 0;
}

