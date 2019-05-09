#include "recursion.h"
#include<iostream>

//

void display(int n)
{
	if (n == 0)
	{
		std::cout << "base case\n";
		return;
	}
	else
	{
		std::cout << "hello\n";
		n--;
		display(n);
	}
}

int factorial(int n)
{
	int f = 1;
	if (n == 0)
	{
		std::cout << "base case\n";
		return f;
	}
	std::cout << "load stack" << n-1 << "\n";
	f = n * factorial(n-1);
	std::cout << "clear stack\n";
}