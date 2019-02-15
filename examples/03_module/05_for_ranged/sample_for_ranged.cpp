#include<string>
#include<vector>
#include<iostream>
#include "sample_for_ranged.h"

void loop_string_w_index(std::string str)
{
}

void loop_vector_w_index(std::vector<int> values)
{
}

void loop_vector_w_auto()
{
	std::vector <int> nums = { 9, 10, 99, 5, 67 };
	for (auto n : nums)
	{
		std::cout << n << "\n";
	}
}
void loop_vector(std::vector<int> values) //pass by value
{
	values[0] = 1000;
	for (int i = 0; i < values.size(); ++i)
	{
		std::cout << values[i] << "\n";
	}
}

void loop_vector_w_index_const(std::vector<int>& values) // pass by reference
{
	values[0] = 1000;
	for (int i = 0; i < values.size(); ++i)
	{
		std::cout << values[i] << "\n";
	}
}

void loop_const_vector(const std::vector<int>& values)
{
	for (auto v : values)
	{
		std::cout << v << "\n";
	}
}
