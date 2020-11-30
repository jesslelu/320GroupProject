/*
 * User.h
 *
 *  Created on: Nov. 26, 2020
 *      Author: jessielu
 */

#ifndef USER_H_
#define USER_H_

#include <fstream>
#include "Course.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include<cstdio>
#include <cstddef>

class User {
public:
	User(vector<string> courses, string progname);
	User(string progname);
	vector<Course> getMissing(vector<Course> year);
	vector<Course> getUserCourses();

	void complimentaryCheck();
	void complimentaryComp(int flag);
    void storeRequirements(string progNames);
	int compCheck(); // complementary check

	//Accessor Methods!
	vector<Course> getMissingFirCourse();//Returns first year core courses user still needs
	vector<Course> getMissingSecCourse();
	vector<Course> getMissingThirCourse();
	vector<Course> getMissingFourCourse();

	vector<Course> getUserGroupA();//returns the groupA courses that user is currently taking
	vector<Course> getUserGroupB();
	vector<Course> getUserGroupC();
	vector<Course> getUserGroupD();

	//returns number of tech electives needed
	int getNumGroupANeeded();
	int getNumGroupBNeeded();
	int getNumGroupCNeeded();
	int getNumGroupDNeeded();
	int getNumGroupNeeded();
	int getFlag();

	void addCourse(string input,int year, string term);
	void removeCourse(string input);

	// checks for list A and B complementary courses
	bool ListACheck(const string& courseID);
	bool ListBCheck(const string& courseID);

private:
	vector<string> userCourses;
	vector<Course> userCoursesObj;
	string progName;
	int requirementSatisfied;//0 if not, 1 if yes

	int numgroupANeeded;
	int numgroupBNeeded;
	int numgroupCNeeded;
	int numgroupDNeeded;

	int numGroupNeeded;
	int numListNeeded;

	int numListANeeded;
	int numListBNeeded;
	int Flag;

	vector<Course>userGroupA;
	vector<Course>userGroupB;
	vector<Course>userGroupC;
	vector<Course>userGroupD;

	vector<Course> missingFirCourse;
	vector<Course> missingSecCourse;
	vector<Course> missingThirCourse;
	vector<Course> missingFourCourse;

	vector<Course> groupA;
	vector<Course> groupB;
	vector<Course> groupC;
	vector<Course> groupD;
	vector<Course> ListA;
	vector<Course> ListB;

	vector<Course> firstYearReq;
	vector<Course> secYearReq;
	vector<Course> thirYearReq;
	vector<Course> fourYearReq;


};

#endif /* USER_H_ */
