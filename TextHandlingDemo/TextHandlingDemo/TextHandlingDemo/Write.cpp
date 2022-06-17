#include "functions.h"

void write(string fileName) {
	//Creates new variable myFile of type output file stream (ofstream)
	std::ofstream myFile;
	std::string userText;

	myFile.open(fileName+".txt", std::ios::trunc);

	//Determine if file is open
	if (!myFile.is_open()) {
		std::cout << "\nWARNING: File can not be opened\n\n";
		return;
	}
	std::cout << "File successfully opened\n\n";

	//Assign text to file
	getline(std::cin, userText);
	myFile << userText << std::endl;

	std::cin.ignore(0);
	getline(std::cin, userText);
	myFile << userText << std::endl;

	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "Successfully closed the file\n";
	}
}