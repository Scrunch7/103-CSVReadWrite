#include "functions.h"

#include <vector>
#include <sstream>

using std::vector;


vector<vector<string>> informationToEdit(vector<vector<string>> content, string id) {
	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			if (content[i][2] == id) {
				for (int k = 0; k < content[i].size(); k++) {
					int newVal;
					cin >> newVal;
					content[i][k] = newVal;
				}
			}
		}
	}	
	return content;
}

void editCSV(string fileName, string id) {
	fileName += ".csv";
	fstream inFile(fileName + ".csv", ios::in);
	fstream outFile(fileName + ".csv", ios::out | ios::app);

	//declaring of 1d and 2d vectors
	vector<vector<string>> content;
	vector<string> row;

	//decloration two temp strings
	string word, line;

	if (inFile.is_open()) {
		while (getline(inFile, line)) {
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

	content = informationToEdit(content, id);

	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			
			outFile << content[i][j];
		}
	}

	inFile.close();
	outFile.close();

	if (remove(fileName.c_str())) {
		perror("Error detecting file");
	}
	else {
		puts("file deleted successfully");
	}

	rename("temp.csv", fileName.c_str());

}