#include <vector>
#include<string>

using std::string;
using std::vector;
/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/
void display_vector(const vector<string>& values);

/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string vector search_value, and a string replace_value.
*/
void update_vector_element(vector<string>& values, string search_value, string replace_value);
