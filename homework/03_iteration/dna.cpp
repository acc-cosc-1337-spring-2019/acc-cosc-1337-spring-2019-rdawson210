#include<iostream>
using std::string;

double get_gc_content(string input)
{
	string str = input;
	double len = str.length();
	int gc_content = 0;
	for (int i = 0; i < len; ++i) {
		if (str[i] == 'C' || str[i] == 'G') {
			++gc_content;
		}
		else {
			continue;
		}
	}
	double percentage = (gc_content / len);
	return percentage;
}

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