#include "functions.h"

int main()
{
	string fileName;

	char input;
	//create file at start of application
	cout << "creating file\n";
	fileName = openClose();

	while (true) {
		cout << "please select option\n[w]Write\n[r]Read\n[f]Read/Write\n[a]Write CSV\n[b]Read CSV\n[c]Edit CSV";
		cin >> input;
		switch ((char)tolower(input)) {
		case 'w':
			cout << "\n\nwriting to file\n";
			write(fileName+".txt");
			break;
		case 'r':
			cout << "\n\nreading from file\n";
			read(fileName + ".txt");
			break;
		case 'f':
			cout << "\n\nwriting and reading to/from file\n";
			readWrite(fileName + ".txt");
			break;
		case 'a':
			writeCSV(fileName + ".csv");
			break;
		case 'b':
			readCSV(fileName + ".csv");
			break;
		case 'c':
			editCSV(fileName + ".csv");
			break;
		default:
			return false;
		}
	}
}
