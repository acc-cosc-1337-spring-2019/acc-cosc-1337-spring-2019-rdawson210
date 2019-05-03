#include<iostream>

class RuleOfFive
{
public:
	RuleOfFive(int n) : num(n) { ptr_num = new int(n); }
	RuleOfFive(const RuleOfFive& d);//copy constructor - RULE OF THREE #1
	RuleOfFive& operator= (RuleOfFive& d);//copy assignment - RULE OF THREE #2
	RuleOfFive(RuleOfFive&& r);//move constructor - RULE OF 5 C++11
	RuleOfFive& operator= (RuleOfFive&& r);//copy assignment - RULE OF 5 C++11
	~RuleOfFive(); //RULE OF THREE #3

	void set_value(int n);
	int get_value();

	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	int* ptr_num;
};//