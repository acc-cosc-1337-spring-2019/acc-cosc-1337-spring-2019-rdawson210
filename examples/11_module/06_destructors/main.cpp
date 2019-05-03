#include "destructor.h"

Destructor create_class();

int main() 
{
	Destructor d(10);
	Destructor c(5);


	Destructor a = d; //creates class copy; copy constructor executes
	Destructor b(d); //passing a class parameter; copy constructor executes
	d.set_value(5);

	c = d;//uses overloaded = operator; must have PREEXISTING object

	a.set_ptr_num(100);
	return 0;
}

Destructor create_class()
{
	return Destructor(5);
}