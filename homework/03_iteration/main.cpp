#include<iostream>
#include<string>
#include "dna.h"
using std::string;
using std::cout;
using std::cin;

int main() 
{
	int choice;
	string input;
	char cont;
	double gc_content;
	string dna_result;
	do {
		cout << "Press 1 to Get GC Content" << "\n" << "Press 2 to Get DNA Complement" << "\n";
		cin >> choice;
		if (choice == 1) {
			cout << "Please type a DNA string:" << "\n";
			cin >> input;
			gc_content = get_gc_content(input);
			cout << "GC Content: " << gc_content << "\n";
		}
		else if (choice == 2) {
			cout << "Please type a DNA string:" << "\n";
			cin >> input;
			dna_result = get_dna_complement(input);
			cout << "DNA Complement: " << dna_result << "\n";
		}
		else {
			cout << "Invalid Input" << "\n";
		}
		cout << "To input another DNA string, type Y. To quit, type any letter." << "\n";
		cin >> cont;
	} while (cont == 'Y' || cont == 'y');
}