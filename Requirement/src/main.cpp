#include <iostream>
using namespace std;
#include "Requirement.h"
#include "Course.h"
#include "User.h"
int main() {
	string name; // stores name;
	vector<string> courses; // stores user input courses
	string progName="Chemical-Engineering";
	courses.push_back("APSC-132");//first year courses


	courses.push_back("MECH-435");//groupA
	courses.push_back("MECH-437");//groupA

	courses.push_back("ENCH-312");//groupB
	courses.push_back("ENCH-326");
	courses.push_back("ENCH-411");

	courses.push_back("BIOL-102");//groupC
	courses.push_back("BIOL-103");



	courses.push_back("APSC-293");//second year courses



	//User Us(vector<string> courses,string progname);
	User user(courses,progName);
	vector<Course> userGroupA=user.getUserGroupA();
	vector<Course> userGroupB=user.getUserGroupB();
	vector<Course> userGroupC=user.getUserGroupC();
	vector<Course> userGroupD=user.getUserGroupD();
	cout << "Your groupa courses:" << endl;
	for (int i = 0; i < (userGroupA.size()); i++) {
		cout << userGroupA[i].getCourseID() << endl;

	}
	cout << "Your  group b courses" << endl;
	for (int i = 0; i < (userGroupB.size()); i++) {
		cout << userGroupB[i].getCourseID() << endl;

	}
	cout << "Your group c courses" << endl;
	for (int i = 0; i < (userGroupC.size()); i++) {
		cout << userGroupC[i].getCourseID() << endl;

	}
	cout << "Your group d courses" << endl;
	for (int i = 0; i < (userGroupD.size()); i++) {
		cout << userGroupD[i].getCourseID() << endl;

	}




/*
	vector<Course>userCourseList=user.getUserCourses();
	cout << "Your courses:" << endl;
	for (int i = 0; i < (userCourseList.size()); i++) {
		cout << userCourseList[i].getCourseID() << endl;

	}

	vector<Course> missingfirstyear=user.getMissingFirCourse();
	cout << "Missing first year courses:" << endl;
	for (int i = 0; i < missingfirstyear.size(); i++) {
		cout << missingfirstyear[i].getCourseID() << endl;

	}

	vector<Course> missingSecyear=user.getMissingSecCourse();
	cout << "Missing second year courses:" << endl;
	for (int i = 0; i < missingSecyear.size(); i++) {
		cout << missingSecyear[i].getCourseID() << endl;

	}
*/
	return 0;
}
