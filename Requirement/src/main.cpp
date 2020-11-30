#include <iostream>
using namespace std;
#include "Requirement.h"
#include "Course.h"
#include "User.h"


int main() {

	//This tests User, requirement, and course class
	//GUI code imitation
	string name; // stores name;
	vector<string> courses; // stores user input courses


	string progName = "Chemical-Engineering";
	User user(progName);
	vector<Course>userCourseList = user.getUserCourses();

	//Adding user courses
	user.addCourse("APSC-132",1,"F");//groupA
	user.addCourse("MECH-435",1,"F");//groupa
	user.addCourse("ENCH-312",1,"F");//groub
	user.addCourse("ENCH-411",1,"F");//groupb
	user.addCourse("BIOL-102",1,"F");//groupc
	user.addCourse("APSC-293",1,"F");//groupc

	vector<Course>userCourseLists = user.getUserCourses(); //Get courses

	cout << "DISPLAYING USER courses:" << endl;
	for (int i = 0; i < (userCourseLists.size()); i++) {
		cout << userCourseLists[i].getCourseID() << endl;

	}

	user.removeCourse("APSC-293");
	vector<Course>userCourse= user.getUserCourses(); //Get courses

	vector<Course> userGroupA = user.getUserGroupA();
	vector<Course> userGroupB = user.getUserGroupB();
	vector<Course> userGroupC = user.getUserGroupC();
	vector<Course> userGroupD = user.getUserGroupD();

	cout << "DISPLAYING USER courses:" << endl;
	for (int i = 0; i < (userCourseList.size()); i++) {
		cout << userCourseList[i].getCourseID() << endl;

	}

	cout << "DISPLAYING TECH ELECTIVES USER HAS TAKEN" << endl;

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

	cout << "DISPLAYING MISSING CORE COURSES USER MUST TAKE" << endl;
	vector<Course> missingfirstyear = user.getMissingFirCourse();
	cout << "Missing first year courses:" << endl;
	for (int i = 0; i < missingfirstyear.size(); i++) {
		cout << missingfirstyear[i].getCourseID() << endl;

	}

	vector<Course> missingSecyear = user.getMissingSecCourse();
	cout << "Missing second year courses:" << endl;
	for (int i = 0; i < missingSecyear.size(); i++) {
		cout << missingSecyear[i].getCourseID() << endl;

	}

	vector<Course> missingThiryear = user.getMissingThirCourse();
	cout << "Missing third year courses:" << endl;
	for (int i = 0; i < missingThiryear.size(); i++) {
		cout << missingThiryear[i].getCourseID() << endl;

	}

	vector<Course> missingFouryear = user.getMissingFourCourse();
	cout << "Missing fourth year courses:" << endl;
	for (int i = 0; i < missingFouryear.size(); i++) {
		cout << missingFouryear[i].getCourseID() << endl;

	}
	cout << "DISPLAYING TECH ELECTIVES USER MUST STILL TAKE" << endl;
	string dis;
	string type;
	if (user.getFlag() == 0) {
		type = " number of courses ";
	}
	else {
		type = " number of credits ";
	}

	string groupA = to_string(user.getNumGroupANeeded());

	string groupB = to_string(user.getNumGroupBNeeded());
	string groupC = to_string(user.getNumGroupCNeeded());
	string groupD = to_string(user.getNumGroupDNeeded());
	string group = to_string(user.getNumGroupNeeded());

	dis = "User needs " + groupA + type + "from groupA";
	cout << dis << endl;

	dis = "User needs " + groupB + type + "from groupB";
	cout << dis << endl;

	dis = "User needs " + groupC + type + "from groupC";
	cout << dis << endl;

	dis = "User needs " + groupD + type + "from groupD";
	cout << dis << endl;
	dis = "User needs " + group + type + "from any Group: A/B/C/D";
	cout << dis << endl;

	// displaying number of complementary courses still remaining
	// ----------------------------
	cout << "Complementary courses remaining:" << endl;
	int compRem = user.compCheck();
	cout << compRem << endl;
	// ----------------------------
return 0;

}
