#include <iostream>
#include <fstream>
#include <string>
#include <istream>

using namespace std;


int main() {

	string playerName;
	cout << "Welcome to Rock-Paper-Scissors!!" << endl;
	cout << "What is your name Player?" << endl;
	cin >> playerName;


	//ofstream file_; --- creates file
	//file_.open("numbers"); -- opens file to write
	//file_.close(); -- closes file
	
	ifstream namescoreFile;
	namescoreFile.open("numbers");

	if (namescoreFile.fail()) {
		cerr << "Error Opening File" << endl;
		exit(1);
	}

	int x, y;

	namescoreFile >> x >> y;

	cout << "Num 1: " << x << endl;
	cout << "Num 2: " << y << endl;





	system("pause");


}