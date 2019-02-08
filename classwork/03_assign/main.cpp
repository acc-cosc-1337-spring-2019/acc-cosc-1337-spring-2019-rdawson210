#include"loops.h"
#include<iostream>

using std::cout;
using std::cin;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char choice;
	do 
	{
		cout << "Enter a number to receive that number's factorial:  ";
		cin >> num;
		get_factorial(num);
		cout << "\n" << "To enter another number, press 1. To exit, press any key." << "\n";
		cin >> choice;
	} while (choice == 1);
}