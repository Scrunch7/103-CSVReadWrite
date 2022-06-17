#pragma once
#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::fstream;
using std::string;
using std::ios;

string openClose();
void write(string fileName);
void read(string fileName);
void readWrite(string fileName);
void writeCSV(string fileName);
void readCSV(string fileName);
void editCSV(string fileName);