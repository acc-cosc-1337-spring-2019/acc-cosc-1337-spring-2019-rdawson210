#include "arr_functions.h"
#include <iostream>

using std::cout;

void iterate_array(int * ints, const int SIZE)//SIZE - must know size of array. no auto.
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ints << "\n";
		*ints++;
	}
}
