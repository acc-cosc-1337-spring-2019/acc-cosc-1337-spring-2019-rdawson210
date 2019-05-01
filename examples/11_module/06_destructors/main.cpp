#include "destructor.h"

int main() 
{
	Destructor d(10);

	Destructor a = d; //creates class copy
	d.set_value(5);

	a.set_ptr_num(100);
	return 0;
}