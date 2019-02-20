#include <iostream>
#include"vectors.h"
#include<vector>

using std::cout;
using std::cin;
using std::vector;
/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main()
{
	int choice;
	vector<int> param_numbers;
	int input;
	vector<int> vector_primes;
	do
	{
		cout << "Press 1 to get max value from vector" << "\n" << "Press 2 to get primes" << "\n" << "To exit press any other key" << "\n";
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter a list of 5 numbers. Type any non-number to exit." << "\n";
			for (int i=0; i<5; i++)
			{
				cin >> input;
				param_numbers.push_back(input);
			}
			int big = get_max_from_vector(param_numbers);
			cout << "Max Value:" << big << "\n";
		}
		else if (choice == 2)
		{
			cout << "Enter a number:" << "\n";
			cin >> input;
			vector_primes = vector_of_primes(input);
			cout << "Vector of Primes: ";
			for (auto n : vector_primes)
			{
				cout << n << ",  ";
			}
			cout << "\n";
		}
	} while (choice == 1 || choice == 2);
}