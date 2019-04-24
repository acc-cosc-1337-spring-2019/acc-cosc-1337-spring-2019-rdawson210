#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Function Reference Parameter")
{
	int number = 10;
	int* numberPtr = &number;
	ref(number, numberPtr);
	REQUIRE_FALSE(number == 100);
	REQUIRE(number == 1000);
}
