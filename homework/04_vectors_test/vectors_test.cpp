#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a test case for get_max_from_vector with values:
vector values 3,8,1,99,1000 returns 1000
vector values 15,12,11,99,88 returns 99
vector values 150,120,11,990,88888 returns 88888
*/
TEST_CASE("Testing get_max_from_vector")
{
	REQUIRE(get_max_from_vector({ 3, 8, 1, 99, 1000 }) == 1000);
	REQUIRE(get_max_from_vector({ 15, 12, 11, 99, 88 }) == 99);
	REQUIRE(get_max_from_vector({ 150, 120, 11, 990, 88888 }) == 88888);
}


/*
Write a test case for is_prime with values:
2 returns true
4 returns false
43 returns true
44 returns false
*/
TEST_CASE("Testing is_prime")
{
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
	REQUIRE(is_prime(1) == false);
	REQUIRE(is_prime(9) == false);
}


/*
Write test case for vector_of_primes here with
argument 10 return vector should have the following items:
2 3 5 7
argument 50 return vector should have the following items:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
*/
TEST_CASE("Testing vector_of_primes")
{
	vector<int> test1 = { 2, 3, 5, 7 };
	REQUIRE(vector_of_primes(10) == test1);
	vector<int> test2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(50) == test2);
}