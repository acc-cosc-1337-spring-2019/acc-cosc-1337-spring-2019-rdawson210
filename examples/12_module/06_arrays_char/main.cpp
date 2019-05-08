#include <iostream>

int main()
{
	char name0[] = "john";
	std::cout << name0 << "\n";

	for (int i = 0; name0[i] != '\0'; i++) // null terminator: \0 at the end of each array
	{
		std::cout << name0[i] << "\n";
	}

	char name[5] = "mary";
	name[4] = '\0';
	std::cout << name;


	return 0;
}