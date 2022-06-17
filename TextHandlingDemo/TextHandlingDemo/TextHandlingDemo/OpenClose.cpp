#include "functions.h"

string openClose() {
	string fileName, fileFormat;

	cout << "please insert name of file: ";
	cin >> fileName;
	cout << "please insert name of file: ";
	cin >> fileFormat;

	//Creates a new variable myFile of type output file system (ofstream)
	std::ofstream myFile;

	//Sets myFile to a file of user defined name
	//If no such file exists, a new one will be created
	myFile.open(fileName+"." + fileFormat);

	//Determine if file has opened successfully
	if (!myFile.is_open()) {
		std::cout << "\nWARNING: Cannot open file specified\n";
	}
	std::cout << "\nFile created and opened successfully\n\n";

	//Close the file assigned to myFile
	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "File successfully close\n\n";
	}
	return fileName;
}