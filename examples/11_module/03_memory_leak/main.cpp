#include "memory_leak.h"
#include<iostream>

using std::cout;

int main() 
{
	memory_leak(); //we leaked memory (a little bit)

	while (true)
	{
		memory_leak(); //leaked memory (lots)
	}
	return 0;
}