/*
 * Course.h
 *
 *  Created on: Nov. 12, 2020
 *      Author: jessielu
 */

#ifndef COURSE_H_
#define COURSE_H_
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class Course {
public:
	Course(const string& courseID);
	string getCourseID();
	string getName();
	char getTerm();
	string getDescription();
	float getCredits();
	float getCEAB();
	vector <string> getPrereqs();
	bool getListA();
	bool getListB();
	int getDesiredYear();
private:
	string courseID;
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


#endif /* COURSE_H_ */