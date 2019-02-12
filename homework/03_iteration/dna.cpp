#include<iostream>
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(string input)
{
	return 0.0;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string input)
{
	string str = input;
	double len = str.length();
	int j = len - 1;
	int i = 0;
	char temp;
	do {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		++i;
		--j;
	} while (i < j);
	return str;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
	replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string input)
{
	string str = input;
	str = get_reverse_string(str);
	int len = str.length();
	for (int i = 0; i <= len; i++)
		if (str[i] == 'A')
			str[i] = 'T';
		else if (str[i] == 'T')
			str[i] = 'A';
		else if (str[i] == 'C')
			str[i] = 'G';
		else if (str[i] == 'G')
			str[i] = 'C';
	return str;
}