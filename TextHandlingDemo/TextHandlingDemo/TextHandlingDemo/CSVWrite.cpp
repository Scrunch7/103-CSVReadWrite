#include "functions.h"

void writeCSV(string fileName) {
	int field[5];
	std::fstream file(fileName+".csv", ios::out | ios::app);

	for (int i = 0; i < 5; i++) {
		cout << "please enter information for storing\n";
		cin >> field[i];
	}

	file << field[0] << ","
		<< field[1] << ","
		<< field[2] << ","
		<< field[3] << ","
		<< field[4] << std::endl;
}

