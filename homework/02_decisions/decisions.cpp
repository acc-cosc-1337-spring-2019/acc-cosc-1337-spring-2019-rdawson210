#include "decisions.h"
#include <string.h>
#include <iostream>

using std::cout;
using std::cin;

int get_grade_points(std::string letter_grade)
{
	if (letter_grade == "A") 
	{
		return 4;
	}
	else if (letter_grade == "B")
	{
		return 3;
	}
	else if (letter_grade == "C")
	{
		return 2;
	}
	else if (letter_grade == "D")
	{
		return 1;
	}
	else if (letter_grade == "F")
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0) 
	{
		return -1;
	}
	else
	{
		return credit_points / credit_hours;
	}
}


//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.
