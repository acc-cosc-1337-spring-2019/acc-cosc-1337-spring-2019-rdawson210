#include "rule_of_five.h"

RuleOfFive get_object();

int main() 
{
	RuleOfFive r(10);
	r = get_object();
	
	RuleOfFive a = get_object();
	//RuleOfFive b(6);
	//a = b;

	return 0;
}

RuleOfFive get_object()
{
	RuleOfFive r(10);
	return r;
}