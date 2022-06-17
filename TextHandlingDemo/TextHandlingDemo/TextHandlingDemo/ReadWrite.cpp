#include "functions.h"

void readWrite(string fileName) {
	std::fstream myFile;
	std::string myLine;

	myFile.open("FileName.txt", std::ios::in | std::ios::out | std::ios::trunc);

	if (!myFile.is_open()) {
		std::cout << "\nWARNING: File can not be opened\n\n";
		return;
	}

	std::string lineContent;
	int linesToAdd;
	std::cout << "Please enter the number of lines you wish to add to the file\n";
	std::cin >> linesToAdd;

	for (int i = 0; i < linesToAdd; i++) {
		std::cout << "Please enter message " << i + 1 << "\n";
		
		if (i == 0) { std::cin.ignore(); }
		std::cin.ignore(0);

		std::getline(std::cin, lineContent);
		myFile << lineContent << std::endl;
	}

	myFile.seekg(std::ios::beg);

	while (std::getline(myFile, myLine)) {
		std::cout << myLine << std::endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "File successfully closed\n\n";
	}
}