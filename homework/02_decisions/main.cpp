#include <iostream>
#include <string>
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;

int main()
{
	std::string letter_grade;
	auto grade_points = 0;
	auto credit_hours = 0;
	auto chtotal = 0;
	auto credit_points = 0;
	auto cptotal = 0;
	auto gpa = 0.0;
	cout << "Please enter letter grade for class #1:  ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	cout << "Please enter the credit hours for class #1:  ";
	cin >> credit_hours;
	chtotal = chtotal + credit_hours;
	credit_points = grade_points * credit_hours;
	cptotal = cptotal + credit_points;

	cout << "Please enter letter grade for class #2:  ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	cout << "Please enter the credit hours for class #2:  ";
	cin >> credit_hours;
	chtotal = chtotal + credit_hours;
	credit_points = grade_points * credit_hours;
	cptotal = cptotal + credit_points;

	cout << "Please enter letter grade for class #3:  ";
	cin >> letter_grade;
	grade_points = get_grade_points(letter_grade);
	cout << "Please enter the credit hours for class #3:  ";
	cin >> credit_hours;
	chtotal = chtotal + credit_hours;
	credit_points = grade_points * credit_hours;
	cptotal = cptotal + credit_points;

	gpa = calculate_gpa(chtotal, cptotal);
	cout << "Total GPA for student in 3 classes:" << gpa;
}