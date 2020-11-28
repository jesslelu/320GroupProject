/*
 * User.cpp
 *
 *  Created on: Nov. 26, 2020
 *      Author: jessielu
 */
#include <iostream>
#include <string>
using namespace std;
#include "Requirement.h"
#include "Course.h"
#include "User.h"

User::User(vector<string> courses, string prognames) :userCourses(courses) {


	//Initializing courses as objects, store in private var
	for (int i = 0; i < courses.size(); i++) {
		Course newCourse(courses[i]);
		userCoursesObj.push_back(newCourse);
	}

	//initializing requirements object
	Requirement req(prognames);

	//Getting requirements from requirements class
	firstYearReq = req.getFirstReq();
	secYearReq = req.getSecReq();
	thirYearReq = req.getThirReq();
	fourYearReq = req.getFourReq();
	vector<string> elecReq = req.getElectiveReq();
	groupA = req.getGroupA();
	groupB = req.getGroupB();
	groupC = req.getGroupC();
	groupD = req.getGroupD();
	Flag = req.getFlag();

	//Find list of core courses user is missing
	missingFirCourse = getMissing(firstYearReq);
	missingSecCourse = getMissing(secYearReq);
	missingThirCourse = getMissing(thirYearReq);
	missingFourCourse = getMissing(fourYearReq);


	//extracting meaningful info from electives. (the actual number)
	vector<int> numRequired(8);
	string newstring;
	for (int i = 0; i < elecReq.size(); i++) {
		//cout << elecReq[i] << endl;
		size_t found = elecReq[i].find(':');
		newstring = elecReq[i].substr(found + 1, elecReq[i].size());
		numRequired[i] = stoi(newstring);
	}
	numgroupANeeded = numRequired[0];
	numgroupBNeeded = numRequired[1];
	numgroupCNeeded = numRequired[2];
	numgroupDNeeded = numRequired[3];

	numListANeeded = numRequired[4];
	numListBNeeded = numRequired[5];

	numGroupNeeded = numRequired[6];
	numListNeeded = numRequired[7];

	complimentaryCheck();
	complimentaryComp(Flag);
}
void User::complimentaryCheck() {

	cout << "start compare" << endl;
	string comp;
	string compA;
	for (int i = 0;i < userCoursesObj.size();i++) {
		//for each course, check if it is in num group a,b,v,d, lista or list b
		//increment if found
		for (int k = 0;k < groupA.size();k++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupA[k].getCourseID();

			//cout<<comp<<endl;

			if (groupA[k].getCourseID() == userCoursesObj[i].getCourseID()) {
				//cout<<"found A"<<endl;
				//cout<<comp<<endl;
				//numGroupA++;
				userGroupA.push_back(groupA[k]);
			}
		}
		for (int j = 0;j < groupB.size();j++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupB[j].getCourseID();
			if (groupB[j].getCourseID() == userCoursesObj[i].getCourseID()) {
				//numGroupB++;
				userGroupB.push_back(groupB[j]);
				//cout<<"found B"<<endl;
				//cout<<comp<<endl;
			}
		}
		for (int m = 0;m < groupC.size();m++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupC[m].getCourseID();
			if (groupC[m].getCourseID() == userCoursesObj[i].getCourseID()) {
				//numGroupC++;
				userGroupC.push_back(groupC[m]);
				//cout<<"found C"<<endl;
				//cout<<comp<<endl;
			}
		}
		for (int w = 0;w < groupD.size();w++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupD[w].getCourseID();
			if (groupD[w].getCourseID() == userCoursesObj[i].getCourseID()) {
				//numGroupD++;
				userGroupD.push_back(groupD[w]);
				//cout<<"found D"<<endl;
				//cout<<comp<<endl;
			}
		}//end of for loop

	}//end of for loop


}
void User::complimentaryComp(int Flag) {
	//Stores the user info--> number of tech electives/credits in tech electives they currently have
	float GroupA = 0;
	float GroupB = 0;
	float GroupC = 0;
	float GroupD = 0;

	//Flag=1;
	if (Flag == 1) {//if requirements stored as number of minimum credits required, must get credits from user group courses
		for (int i = 0;i < userGroupA.size();i++) {
			GroupA += userGroupA[i].getCredits();
		}
		for (int i = 0;i < userGroupB.size();i++) {
			GroupB += userGroupB[i].getCredits();
		}
		for (int i = 0;i < userGroupC.size();i++) {
			GroupC += userGroupC[i].getCredits();
		}
		for (int i = 0;i < userGroupD.size();i++) {
			GroupD += userGroupD[i].getCredits();
		}

	}
	else {
		//Units are in number of courses
		GroupA = userGroupA.size();
		GroupB = userGroupB.size();
		GroupC = userGroupC.size();
		GroupD = userGroupD.size();

	}

	//compare credits
	//Needed credits -number of credits the user has
	//gives us the number of credits that the user still has to take.
	numgroupANeeded = numgroupANeeded - GroupA;
	numgroupBNeeded = numgroupBNeeded - GroupB;
	numgroupCNeeded = numgroupCNeeded - GroupC;
	numgroupDNeeded = numgroupDNeeded - GroupD;

	float extraA = 0;
	float extraB = 0;
	float extraC = 0;
	float extraD = 0;
	int totalGroupLeft = 0;

	if (numgroupANeeded <= 0) {
		extraA = numgroupANeeded * -1;
		numgroupANeeded = 0;
	}
	if (numgroupBNeeded <= 0) {
		extraB = numgroupBNeeded * -1;
		numgroupBNeeded = 0;
	}
	if (numgroupCNeeded <= 0) {
		extraC = numgroupCNeeded * -1;
		numgroupCNeeded = 0;
	}
	if (numgroupDNeeded <= 0) {
		extraD = numgroupDNeeded * -1;
		numgroupDNeeded = 0;
	}

	totalGroupLeft = extraA + extraB + extraC + extraD;
	numGroupNeeded = numGroupNeeded - totalGroupLeft;


	if (numGroupNeeded <= 0) {

		numGroupNeeded = 0;
		cout << extraD << endl;
	}

}
vector<Course> User::getMissing(vector<Course> coreCourses) {

	vector<Course> missingCourses;
	string comparing;
	int flag = 0;//not found yet
	//determine first year core missing courses
	for (int i = 0; i < coreCourses.size(); i++) {
		flag = 0;
		for (int j = 0; j < userCoursesObj.size(); j++) {
			comparing = coreCourses[i].getCourseID() + " = " + userCoursesObj[j].getCourseID();
			//cout<<comparing<<endl;

			if (coreCourses[i].getCourseID() == userCoursesObj[j].getCourseID()) {
				flag = 1;
			}
		}
		if (flag == 0) {
			missingCourses.push_back(coreCourses[i]);
		}
	}
	return missingCourses;
}

//Accessor methods

//These return number of tech elecctives/number of tech credits user sill needs to take
//check whether this value in credits or number of courses using getFLAG
int User::getNumGroupANeeded() {
	return numgroupANeeded;
}
int User::getNumGroupBNeeded() {
	return numgroupBNeeded;
}
int User::getNumGroupCNeeded() {
	return numgroupCNeeded;
}
int User::getNumGroupDNeeded() {
	return numgroupDNeeded;
}
int User::getNumGroupNeeded() {
	return numGroupNeeded;
}
//Returns the tech electives that the user is currently taking
vector<Course> User::getUserGroupA() {
	return userGroupA;
}
vector<Course> User::getUserGroupB() {
	return userGroupB;
}
vector<Course> User::getUserGroupC() {
	return userGroupC;
}
vector<Course> User::getUserGroupD() {
	return userGroupD;
}

vector<Course> User::getUserCourses() {
	return userCoursesObj;
}

//Returns the CORE courses that the user is still missing
vector<Course> User::getMissingFirCourse() {
	return missingFirCourse;
}
vector<Course> User::getMissingSecCourse() {
	return missingSecCourse;
}
vector<Course> User::getMissingThirCourse() {
	return missingThirCourse;
}
vector<Course> User::getMissingFourCourse() {
	return missingFourCourse;
}


int User::getFlag() {
	return Flag;
}

void User::addCourse(string input) {
	Course newCourse(input);
	userCourses.push_back(input);
	userCoursesObj.push_back(newCourse);

	missingFirCourse = getMissing(firstYearReq);
	missingSecCourse = getMissing(secYearReq);
	missingThirCourse = getMissing(thirYearReq);
	missingFourCourse = getMissing(fourYearReq);

	complimentaryCheck();
	complimentaryComp(Flag);
}

void User::removeCourse(string input) {
	Course newCourse(input);

	for (int i = 0; i < userCoursesObj.size(); i++) {
		if (input == userCoursesObj[i].getCourseID()) {
			userCoursesObj.erase(userCoursesObj.begin() + i);
			break;
		}
	}

	missingFirCourse = getMissing(firstYearReq);
	missingSecCourse = getMissing(secYearReq);
	missingThirCourse = getMissing(thirYearReq);
	missingFourCourse = getMissing(fourYearReq);

	complimentaryCheck();
	complimentaryComp(Flag);

}