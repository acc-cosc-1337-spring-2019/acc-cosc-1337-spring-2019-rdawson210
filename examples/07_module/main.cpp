#include "shape.h"
#include "line.h"
#include"circle.h"
#include<vector>
#include<iostream>
#include<memory>

using std::cout;
using std::vector;
using std::unique_ptr;
using std::make_unique;
int main() 
{
	//Shape s_abstract; -- error message. can't create instance bc pure virtual function makes it an
						//abstract class
	
	Shape* line = new Line(); //creates dynamic memory (heap)
	line->draw();
	cout << "\n";
	delete line;

	vector<Shape*> shapes{ new Line(), new Circle() }; //vector of Shape pointers with 2 objects

	for (auto& shape : shapes)
	{
		shape->draw();
	}

	cout << "\n";

	for (auto* shape : shapes)
	{
		shape->draw();
	}

	cout << "\n";

	unique_ptr < Shape > l = make_unique< Line >(); //creating one object using a smart pointer
	l->draw();

	cout << "\n";

	vector <unique_ptr < Shape >> shaps; //creating vector of smart pointers
	shaps.push_back(make_unique< Line >());
	shaps.push_back(make_unique< Circle >()); 

	for (auto & shape : shaps)
	{
		shape->draw();
	}

	return 0;
}