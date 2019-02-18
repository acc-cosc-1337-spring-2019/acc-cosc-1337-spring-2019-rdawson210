#include "vectors.h"
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const vector<int>& param_numbers)
{
	int big = param_numbers[0];
	for (int i = 0; i < param_numbers.size()-1; ++i)
	{
		if (param_numbers[i] < param_numbers[i + 1])
		{
			big = param_numbers[i + 1];
		}
		else
			continue;
	}
	return big;
}


/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int param_number)
{
	int div = 0;
	for (int i = 2; i < param_number; i++)
	{
		if (param_number % 2 == 0)
		{
			++div;
		}
		else
		{
			continue;
		}
	}
	if (div > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
vector<int> vector_of_primes(int integer_value)
{
	vector<int> vector_of_primes = {};
	for (int i = 1; i <= integer_value; ++i)
	{
		if (is_prime(i) == true)
		{
			vector_of_primes.push_back(i);
		}
		else
		{
			continue;
		}
	}
	return vector_of_primes;
}
