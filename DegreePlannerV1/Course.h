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

vector<string> getWords(string& line) const; // getting the words from their respective lines
vector<string> firstCol, secondCol, thirdCol; /* hold the values of each column in a vector*/

public:
	Course(const string& courseID);
	string getCourseID();


private:
	string courseID;
	bool ListACheck();
	bool ListBCheck();
};


#endif /* COURSE_H_ */