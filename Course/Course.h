
#pragma once
#include <vector>
#include <string>
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
	Course(); 
	Course(string coursecode, int year);
	string getName();
	char getTerm();
	string getDescription();
	float getCredits();
	float getCEAB();
	vector <string> getPrereqs();
	bool getListA();
	bool getListB();
	char getTerm();
	int getDesiredYear();
	


private:
	bool ListACheck();
	bool ListBCheck();
	string name;
	string description;
	float credits;
	float CEAB;
	vector <string> prereqs;
	bool listA;
	bool listB;
	char term;
	int desiredYear; 
	string code; 

};

class readAPI {
public:

	readAPI(string coursecode);
	string getName();
	char getTerm();
	string getDescription();
	float getCredits();
	float getCEAB();
	vector <string> getPrereqs();
	
private:
	string text; 

};
