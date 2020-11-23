#include "courseClass.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

YearOutofBounds::YearOutofBounds(const string& message) : message(message) {}
string& YearOutofBounds::what() { return message; }

courseClass::courseClass(const int string);
{
	// something
}

string getName(string inputName) {
	name = inputName;
}

string getDescription(string inputDescription){
	description = inputDescription;
}

float getCredits(float inputCredits) {
	credits = inputCredits;
}

float getCEAB(float inputCEAB) {
	CEAB = inputCEAB;
}
