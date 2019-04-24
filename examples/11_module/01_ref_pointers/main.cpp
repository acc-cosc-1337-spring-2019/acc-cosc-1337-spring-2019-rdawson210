#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int number = 10;
	int* numberPtr = &number;

	//a pointer can store the address of a variable
	ref(number, numberPtr);

	cout << "Address of number: " << &number << "\t" << "Value is: " << number << "\n";

	cout << "Address of numberPtr: " << &numberPtr << "\t" <<"Value stored at address pointed to is: " 
		<< numberPtr << "\n"; 
	cout << "Pointer dereferenced: " << *numberPtr << "\n"; //asterisk dereferences the pointer
	
	return 0;
}