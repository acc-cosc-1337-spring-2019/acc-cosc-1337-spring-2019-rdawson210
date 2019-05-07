#include <iostream>

int main()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5, 10, 30, 20, 7 };

	for (auto hour : hours) // creates copy - cannot modify values unless iterated by ref
	{
		std::cout << hour << "\n";
	}
	int i = 1;
	for (auto& hour : hours)
	{
		std::cout << "Current:  " << hour << "\n";
		hour = i++;
	}
	for (auto hour : hours)
	{
		std::cout << "New:  " << hour << "\n";
	}
}