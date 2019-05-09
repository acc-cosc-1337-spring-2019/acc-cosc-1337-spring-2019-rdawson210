#include<iostream>

using std::cout;
using std::cin;

int main()
{
	char* name = new char[10];//allocate
	cout << "Enter Name: ";
	cin.getline(name, 10); // adds nullterminator \0
	cout << "\n" << name;

	delete[] name;//deallocates array from memory
	name = nullptr;

	char* name1 = new char[10]; //allocate
	name1[0] = 'a';
	//...
	name1[9] = '\0';

	delete name1;
	name1 = nullptr;

	return 0;
}