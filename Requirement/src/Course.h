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
private:
	string courseID;
};


#endif /* COURSE_H_ */
