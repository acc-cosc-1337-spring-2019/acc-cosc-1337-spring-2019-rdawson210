#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "output.h"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even")
{
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(55) == false);
}

TEST_CASE("Test Overtime Function")
{
	REQUIRE(overtime(41) == true);
	REQUIRE(overtime(24) == false);
}

TEST_CASE("Test Generation Function")
{
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1946) == "Baby Boomer");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1995) == "Millenial");
	REQUIRE(get_generation(1996) == "Centennial");
	REQUIRE(get_generation(1900) == "Invalid Year");
	REQUIRE(get_generation(2019) == "Invalid Year");
}


//Create a test case for the switch statement using:
//value 1 result should be 'Option 1'
//value 2 result should be 'Option 2'
//value 3 result should be 'Option 3'
//value 4 result should be 'Option 4'
//value 5 result should be 'Invalid Option'

TEST_CASE("Test Menu Option Function")
{
	REQUIRE(menu_option(1) == "Option 1");
	REQUIRE(menu_option(2) == "Option 2");
	REQUIRE(menu_option(3) == "Option 3");
	REQUIRE(menu_option(4) == "Option 4");
	REQUIRE(menu_option(5) == "Invalid Option");

}