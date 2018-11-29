#include "binarytree.h"

void lcase(string);

int main() {
	ifstream data;
	string fileName;
	cout << "Enter file name: ";
	cin >> fileName;
	data.open(fileName.c_str());
	//Checking for error
	if (data.fail()) {
		cerr << "Error opening file";
		exit(3);
	}
	string palabra; //stores word
	if (data) {
		while (data) {
			data >> palabra;
			getline(data, line); //moves on to the next line	
		}
	}
}

void lcase(string w) {
	for (size_t i = 0; w[i]; i++) {
		if (islower(a[i])) {
			a[i] = std::toupper(a[i]);// Here!
		}
		else if (isupper(a[i])) {
			a[i] = std::tolower(a[i]);// Here!
		}
	}
}