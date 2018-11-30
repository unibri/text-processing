#include "binarytree.h"


int main() {
	BinaryTree text;
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
	string palabra, line; //stores word
	if (data) {
		while (data) {
			data >> palabra;
			if (palabra == "—")
				cout << "OH NO" << endl;
			else {
				palabra.erase(remove_if(palabra.begin(), palabra.end(), ispunct), palabra.end());
				transform(palabra.begin(), palabra.end(), palabra.begin(), tolower);
				if (!(text.searchNode(palabra))) {
					text.insertNode(palabra);
				}
			}
			
		}
	}
	ofstream report;
	report.open("report.txt");
	report << "WORD " << setw(10) << "TIMES FOUND" << endl;
	text.createReport(report);
	report.close();
	data.close();
	system("pause");
}

