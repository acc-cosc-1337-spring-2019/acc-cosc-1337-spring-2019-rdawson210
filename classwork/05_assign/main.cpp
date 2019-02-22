#include "rectangle.h"
#include<iostream>
#include <vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	std::vector<Rectangle> list_of_data;
	Rectangle rectangle1(4, 5);
	Rectangle rectangle2(10, 10);
	Rectangle rectangle3(100, 10);

	list_of_data.push_back(rectangle1);
	list_of_data.push_back(rectangle2);
	list_of_data.push_back(rectangle3);

	int tot_area = 0;

	for (auto box : list_of_data)
	{
		std::cout << box.get_area() << "\n";
		tot_area += box.get_area();
	}
	std::cout << tot_area << "\n";
}