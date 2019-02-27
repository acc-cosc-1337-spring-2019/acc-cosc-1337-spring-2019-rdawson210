#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"


/*
Create a test case to test the Rectangle class with following values:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

*/
TEST_CASE("Testing Rectangle Class") {
	Rectangles rectangle1(4, 5);
	REQUIRE(rectangle1.get_area() == 20);

	Rectangles rectangle2(10, 10);
	REQUIRE(rectangle2.get_area() == 100);

	Rectangles rectangle3(100, 10);
	REQUIRE(rectangle3.get_area() == 1000);
}

