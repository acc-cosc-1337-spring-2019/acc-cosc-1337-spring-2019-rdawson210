#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using std::cout;

template <class T>
class Array
{
public:
	Array(int size);
	Array(const Array &aray); //copy constructor
	Array<T> operator=(const Array& right); //copy assignment
	Array(Array&& aray); //move constructor
	Array<T> operator=(Array&& right); //move assignment
	~Array();
	void process();

private:
	int size;
	T* numbers;
};

#endif //ARRAY_H