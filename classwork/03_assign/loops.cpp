#include "loops.h"
#include <iostream>

using std::cout;
using std::cin;

/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int get_factorial(int num)
{
	auto factorial = 1;
	do
	{
		factorial = factorial * num;
		num = num - 1;
	} while (num > 0);
	cout << "\n" << "Factorial: " << factorial;
	return factorial;
}
