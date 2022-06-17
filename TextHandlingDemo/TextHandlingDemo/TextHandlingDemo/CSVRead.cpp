#include "functions.h"

#include <vector>
#include <sstream>

using std::vector;

void readCSV(string fileName) {

	//2d and 1d string vector
	vector<vector<string>> content;
	vector<string> row;
	//temp strings
	string line, word;

	std::fstream file(fileName + ".csv", ios::in);
	if (file.is_open()) {
		while (getline(file, line)) {
			row.clear();

			//allow editing of individual characters within stream
			std::stringstream str(line);

			while (getline(str, word, ',')) 
				//this push_back sends the word to the back of the row
				row.push_back(word + " ");
			content.push_back(row);
		}
	}
	else {
		cout << "failed to open file\n";
	}

	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			cout << content[i][j];
		}
		cout << "\n\n";
	}
}