/*
 * Course.cpp
 *
 *  Created on: Nov. 12, 2020
 *      Author: jessielu
 */

#include "Course.h"

Course::Course(const string& courseID): courseID(courseID) {
	// TODO Auto-generated constructor stub
	string getCourseID();
	//cout<<courseID<<endl;
}

string Course::getCourseID(){
	return courseID;

}

