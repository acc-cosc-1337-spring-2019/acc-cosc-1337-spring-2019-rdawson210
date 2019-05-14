// template.cpp : Defines the entry point for the application.
//

#include "template.h"

using namespace std;

template<class T>
Array<T>::Array(int s) : size(s)
{
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = i;
	}
}

template<class T>
Array<T>::Array(const Array & aray)
{
	size = aray.size;
	numbers = new int[size];
	for (int i = 0; i < size; i++)
	{
		numbers[i] = aray.numbers[i];
	}
}

template<class T>
Array<T> Array<T>::operator=(const Array & right)
{
	if (this != &right)
	{
		if (size > 0)
		{
			delete[] numbers;
		}

		size = right.size;
		numbers = new int[size];

		for (int i = 0; i < size; i++)
		{
			numbers[i] = right.numbers[i];
		}
	}
	return *this;
}

template<class T>
Array<T>::Array(Array && aray)
{
	size = aray.size;
	numbers = aray.numbers;

	aray.size = 0;
	aray.numbers = nullptr;
}

template<class T>
Array<T> Array<T>::operator=(Array && right)
{
	if (this != &right)
	{
		swap(size, right.size);
		swap(numbers, right.numbers);
	}
	return *this;
}

template<class T>
Array<T>::~Array()
{
	delete[] numbers;
	numbers = nullptr;
}

template<class T>
void Array<T>::process()
{
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << "\n";
	}
}

int main()
{
	Array<int> nums(5);
	nums.process();

	return 0;
}