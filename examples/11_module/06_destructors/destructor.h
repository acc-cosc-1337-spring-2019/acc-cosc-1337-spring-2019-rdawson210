class Destructor
{
public:
	Destructor(int n) : num(n) { ptr_num = new int (n); }
	Destructor(const Destructor& d);//copy constructor - RULE OF THREE #1
	Destructor& operator= (Destructor& d);//copy assignment - RULE OF THREE #2
	~Destructor(); //RULE OF THREE #3
	void set_value(int n);
	int get_value();
	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	int* ptr_num;
};