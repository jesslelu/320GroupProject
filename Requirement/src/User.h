/*
 * User.h
 *
 *  Created on: Nov. 26, 2020
 *      Author: jessielu
 */

#ifndef USER_H_
#define USER_H_

class User {
public:
	User(vector<string> courses,string progname);
	vector<Course> getMissing(vector<Course> year);
	vector<Course> getUserCourses();
	vector<Course> getMissingFirCourse();
	vector<Course> getMissingSecCourse();
	vector<Course> getMissingThirCourse();
	vector<Course> getMissingFourCourse();

	vector<Course> getUserGroupA();
	vector<Course> getUserGroupB();
	vector<Course> getUserGroupC();
	vector<Course> getUserGroupD();
	void complimentaryCheck();
	void complimentaryComp(int flag);
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

};

#endif /* USER_H_ */
