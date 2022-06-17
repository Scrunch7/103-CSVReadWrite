#include "functions.h"

void read(string fileName) {
	//Declare new variable of type input file stream (ifstream)
	std::ifstream myFile;
	std::string myLine;
	
	
	myFile.open(fileName+".txt");

	//Determine if file is open
	if (!myFile.is_open()) {
		std::cout << "\nWARNING: File could not be opened\n\n";
		return;
	}
	std::cout << "\nSuccessfully opened the file\n\n";

	//As long as another line exists with content, assign to the myLine string variable
	//Lines determined by \n or endl
	while (getline(myFile, myLine)) {
		//Output line to console
		std::cout << myLine << std::endl;
	}

	//Close file
	myFile.close();
	if (!myFile.is_open()) {
		std::cout << "Successfully closed the file...\n\n";
	}
}