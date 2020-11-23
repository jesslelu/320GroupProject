#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

#define MAX 100
using namespace std;

void initialize() {
	string name; // stores name;
	vector<string> courses; // stores user input courses
	ofstream mfile;

	cout << "What is your first name?.\n"; //when you say more than one word it bugs the program
	cin >> name;

	cout << "We will now ask you to input your courses. Type 'end' to finish.";

	mfile.open(name + ".txt");

	for (int i = 0; i < MAX; i++) {
		string number;
		string input;
		number = std::to_string(i);
		// Reading User Input sales value Based on index
		cout << "\nPlease input course number " + number + ":\n";
		cin >> input;
		courses.push_back(input);
		mfile << courses[i];

		if (courses[i] == "end") {
			mfile.close();
			break;
		}
	}
}


int main() {
	initialize();
	return 0;
}