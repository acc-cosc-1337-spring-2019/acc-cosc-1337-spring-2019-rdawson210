#include "sequence.h"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/
void display_vector(const vector<string>& values)
{
	for (auto n : values)
	{
		std::cout << n << "\n";
	}
}

/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
void update_vector_element(vector<string>& values, string search_value, string replace_value)
{
	for (int n = 0; n < values.size(); ++n)
	{
		if (search_value == values[n])
		{
			values[n] = replace_value;
		}
		else
		{
			continue;
		}
	}
}

