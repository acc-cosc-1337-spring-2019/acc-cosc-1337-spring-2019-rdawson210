#include<iostream>

int main() 
{
	const int SIZE = 5;
	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	int* first_element = hours;

	std::cout << *first_element << "\n";
	std::cout << *(first_element + 1) << "\n"; //jumps 4 addresses behind the scenes
	std::cout << *first_element << "\n\n";

	*first_element++;
	std::cout << *first_element<<"\n\n";

	std::cout << "---------------------------------------------------------------------------\n\n";

	std::cout << "forward iteration\n";
	int* hours_ptr = hours;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++; //goes to next address for each ++ (not consecutive - is smart enough to skip 4)
	}

	std::cout << "reverse iteration\n";
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}
}