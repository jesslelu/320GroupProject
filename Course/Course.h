
#pragma once
#include <vector>
#include <string>
#include "readAPI.h"
using namespace std;


class CourseException { //the exception class to handle errors when the denominator is set to 0
public:
	CourseException(const string& message);
	string& what();
private:
	string message;

};

class Course {
public:

	Course(string coursecode, int year);
	string getName();
	string getDescription();
	float getCredits();
	vector<float> getCEAB();
	string getPrereqs();
	bool getListA();
	bool getListB();
	int getDesiredYear();



private:
	bool ListACheck();
	bool ListBCheck();
	string name;
	string description;
	float credits;
	vector<float> CEAB;
	string prereqs;
	bool listA;
	bool listB;
	int desiredYear;
	string code;

};

