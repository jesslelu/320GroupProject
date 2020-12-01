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

//the one we are using
User::User(string progNames){
	storeRequirements(progNames);

}
User::User(){
    progName ="";
}
//the one we prob arunt using
User::User(vector<string> courses, string progNames) :userCourses(courses) {

	//userCourses

	//Initializing courses as objects, store in private var
	for (int i = 0; i < courses.size(); i++) {
		Course newCourses(courses[i]);
		userCoursesObj.push_back(newCourses);
	}

	storeRequirements(progNames);
}


void User::complimentaryCheck() {

	cout << "start compare" << endl;
	string comp;
	string compA;
	for (int i = 0; i < userCoursesObj.size(); i++) {
		//for each course, check if it is in num group a,b,v,d, lista or list b
		//increment if found
		for (int k = 0; k < groupA.size(); k++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupA[k].getCourseID();

			//cout<<comp<<endl;

			if (groupA[k].getCourseID() == userCoursesObj[i].getCourseID()) {
				//cout<<"found A"<<endl;
				//cout<<comp<<endl;
				//numGroupA++;
				userGroupA.push_back(groupA[k]);
			}
		}
		for (int j = 0; j < groupB.size(); j++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupB[j].getCourseID();
			if (groupB[j].getCourseID() == userCoursesObj[i].getCourseID()) {
				//numGroupB++;
				userGroupB.push_back(groupB[j]);
				//cout<<"found B"<<endl;
				//cout<<comp<<endl;
			}
		}
		for (int m = 0; m < groupC.size(); m++) {
			comp = userCoursesObj[i].getCourseID() + "    " + groupC[m].getCourseID();
			if (groupC[m].getCourseID() == userCoursesObj[i].getCourseID()) {
				//numGroupC++;
				userGroupC.push_back(groupC[m]);
				//cout<<"found C"<<endl;
				//cout<<comp<<endl;
			}
		}
		for (int w = 0; w < groupD.size(); w++) {
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

void User::storeRequirements(string progNames){
	//initializing requirements object
		Requirement req(progNames);

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
void User::complimentaryComp(int Flag) {
	//Stores the user info--> number of tech electives/credits in tech electives they currently have
	float GroupA = 0;
	float GroupB = 0;
	float GroupC = 0;
	float GroupD = 0;

	//Flag=1;
	if (Flag == 1) {//if requirements stored as number of minimum credits required, must get credits from user group courses
		for (int i = 0; i < userGroupA.size(); i++) {
			GroupA += userGroupA[i].getCredits();
		}
		for (int i = 0; i < userGroupB.size(); i++) {
			GroupB += userGroupB[i].getCredits();
		}
		for (int i = 0; i < userGroupC.size(); i++) {
			GroupC += userGroupC[i].getCredits();
		}
		for (int i = 0; i < userGroupD.size(); i++) {
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

void User::addCourse(string input,int year, string term) {
	Course newestCourse(input,year,term);
	cout<<input<<endl;
	//cout<<newCourse.getCourseID()<<endl;
	userCourses.push_back(input);
	userCoursesObj.push_back(newestCourse);

	missingFirCourse = getMissing(firstYearReq);
	missingSecCourse = getMissing(secYearReq);
	missingThirCourse = getMissing(thirYearReq);
	missingFourCourse = getMissing(fourYearReq);

	complimentaryCheck();
	complimentaryComp(Flag);
}

void User::removeCourse(string input) {
	//Course newCourses(input);

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


// complementary check stuff
int User::compCheck() {
	int remaining = 3;
	bool taken;

	for (int i = 0; i < userCoursesObj.size(); i++) {
		taken = ListACheck(userCoursesObj[i].getCourseID());
		if (taken == true) {
			remaining--;
		}
		taken = false;

		taken = ListBCheck(userCoursesObj[i].getCourseID());
		if (taken == true) {
			remaining--;
		}
		taken = false;

	}
	return remaining;
}


bool User::ListACheck(const string& courseID) {
	string A = courseID.substr(0, 4);
	string B = courseID.substr(5, 3);
	// cout << courseID << endl;

	// cout << A << endl;
	// cout << B << endl;

	// size_t found = courseID.find('-');
	// cout << found << endl;

	/* string A = courseID.substr(0, found);
	cout << A << endl;
	string B = courseID.substr(found + 1, courseID.size() - 1);
	cout << B << endl; */

	if ((A == "ARTH") && ((B != "245") || (B != "380") || (B != "395")))
		return true;
	if ((A == "BISC") && ((B == "100") || (B == "101")))
		return true;
	if ((A == "CLST") && ((B[0] == '1') || (B[0] == '2') || (B == "321") || ((stoi(B) >= 332) && (stoi(B) <= 335)) || (B == "340") || (B == "341") || (B == "343")))
		return true;
	if ((A == "COMM") && ((B == "251") || (B == "651") || (B == "290")))
		return true;
	if ((A == "CWWRI") && ((B == "293") || (B == "294") || (B == "295") || (B == "397")))
		return true;
	if ((A == "DEVS") && ((B == "100") || (B == "200") || (B == "221") || (B == "230") || (B == "240") || (B == "260") || (B == "280")))
		return true;
	if ((A == "DRAM") && ((B == "100") || (B == "200") || (B == "205") || (B == "211") || (B == "220") || (B == "236") || (B == "251") || (B == "271") || (B == "273") || (B == "300") || (B == "301") || (B == "303") || (B == "306")))
		return true;
	if ((A == "CLST") && ((B[0] == '1') || (B[0] == '2') || (B == "321") || ((stoi(B) >= 332) && (stoi(B) <= 335)) || (B == "340") || (B == "341") || (B == "343")))
		return true;
	if ((A == "ECON") && ((B[0] == '2') || ((stoi(B) >= 110) && (stoi(B) <= 112))) && ((B != "250") || (B != "255")))
		return true;
	if ((A == "EMPR") && ((B[0] == '1') || (B[0] == '2')))
		return true;
	if ((A == "ENGL") && ((B == "100") || B == "160" || (B[0] == '2')))
		return true;
	if ((A == "ENSC") && ((B == "290") || (B == "305") || (B == "310") || (B == "311") || (B == "315") || (B == "321") || (B == "420")))
		return true;
	if ((A == "FILM") && ((B == "104") || (B == "106") || (B == "110") || (B == "210") || (B == "214") || (B == "215") || (B == "236") || (B == "240") || (B == "260") || (B == "220") || (B == "225") || (B == "236")))
		return true;
	if ((A == "FREN") && ((B == "241") || (B == "285") || (B[0] == '3')) && ((B != "320") || (B != "331") || (B != "353")))
		return true;
	if (A == "GNDS")
		return true;
	if ((A == "GPHY") && ((B == "203") || (B == "204") || (B == "227") || (B == "228") || (B == "229") || (B == "250") || (B == "254") || (B == "257") || (B == "258") || (B == "320") || (B == "325") || (B == "327") || (B == "330") || (B == "362")))
		return true;
	if ((A == "HLTH") && ((B == "101") || (B == "237") || (B == "305") || (B == "332") || (B == "350") || (B == "403") || (B == "404")))
		return true;
	if ((A == "HEBR") && ((B == "292") || B == "393"))
		return true;
	if ((A == "HIST") && (B[0] != 3) && (B != "257"))
		return true;
	if ((A == "GRMN") && ((B == "308") || (B == "309") || (B == "311") || (B == "312")))
		return true;
	if ((A == "ENIN") && ((B == "140") || (B == "240") || (B == "301") || (B == "340")))
		return true;
	if ((A == "IDIS") && ((B == "210") || (B == "220") || (B == "221") || ((stoi(B) >= 302) && (stoi(B) <= 305)) || (B == "222") || (B == "280")))
		return true;
	if (A == "INDG" && B == "301")
		return true;
	if ((A == "INTS") && ((B == "221") || (B == "300") || (B == "301") || (B == "306") || (B == "307") || (B == "321")))
		return true;
	if (A == "JWST" && (B == "301" || B == "302"))
		return true;
	if ((A == "LLCU") && (!(stoi(B) >= 101) && (stoi(B) <= 104)))
		return true;
	if ((A == "LAW-") && ((stoi(B) >= 201) && (stoi(B) <= 207)))
		return true;
	if (A == "LIBS" && B == "100")
		return true;
	if ((A == "LING") && ((B == "100") || (B == "202") || (B == "205") || (B == "210")))
		return true;
	if ((A == "MUSC") && ((B == "102") || (B == "114") || (B == "171") || (B == "240") || (B == "245") || (B == "286") || (B == "289") || (B == "393") || (B == "490") || (B == "491") || (B == "210") || (B == "211")))
		return true;
	if ((A == "MUTH") && ((B == "110") || (B == "111") || (B == "201") || (B == "306") || (B == "240") || (B == "251")))
		return true;
	if (A == "PHIL" && B[0] != '3')
		return true;
	if ((A == "POLS") && ((B[0] == '2') || (B == "101") || (B == "110")))
		return true;
	if ((A == "PSYC") && ((B == "100") || (B == "221") || (B == "241") || (B == "251")))
		return true;
	if (A == "RELS")
		return true;
	if ((A == "SOCY") && ((B[0] != '1') || (B == "122")))
		return true;
	return false;
}

bool User::ListBCheck(const string& courseID) {
	string A = courseID.substr(0, 4);
	string B = courseID.substr(5, 3);
	if ((A == "ANSH") && ((B == "101") || (B == "102"))) // Anishinaabe
		return true;
	if ((A == "APSC") && ((B == "223"))) // Engineering and applied sciene
		return true;
	if ((A == "CHEE") && ((B == "302"))) // Engineering and applied scienc
		return true;
	if ((A == "MECH") && ((B == "333"))) // Engineering and applied science
		return true;
	if ((A == "ARAB") && ((B == "100") || (B == "200"))) // Arab
		return true;
	if ((A == "BIOL") && ((B == "111"))) // Biology
		return true;
	if ((A == "CHEM") && ((B == "302"))) // Chemical engineering
		return true;
	if ((A == "CHIN") && ((B == "100"))) // Chinese
		return true;
	// Commerce
	if ((A == "COMM") && ((B == "200") || (B == "201") || (B == "211") || (B == "212") || (B == "221") || (B == "226") || (B == "231") || (B == "244") || (B == "251") || (B == "290") || (B == "303") || (B == "305") || (B == "308") || (B == "310") || (B == "311") || (B == "312") || (B == "313") || (B == "322") || (B == "323") || (B == "325") || (B == "326") || (B == "328") || (B == "329") || (B == "351") || (B == "353") || (B == "357") || (B == "375") || (B == "381") || (B == "382") || (B == "387") || (B == "408") || (B == "496") || (B == "409")))
		return true;
	if ((A == "DEVS") && ((B == "333"))) // Developmental studies
		return true;
	if ((A == "DRAM") && ((B == "239") || (B == "241"))) // Drama
		return true;
	// Employment relations
	if ((A == "EMPR") && ((B == "100") || (B == "200") || (B == "210") || (B == "220") || (B == "230") || (B == "240") || (B == "250") || (B == "320") || (B == "330") || (B == "335") || (B == "370")))
		return true;
	if ((A == "ENSC") && ((B == "103") || (B == "200") || (B == "201") || (B == "203") || (B == "301") || (B == "320") || (B == "390")))
		return true;
	// Fine art
	if ((A == "ARTF") && ((B == "100") || (B == "101") || (B == "106") || (B == "125") || (B == "127") || (B == "260") || (B == "275") || (B == "102") || (B == "128") || (B == "227")))
		return true;
	// French
	if ((A == "FREN") && ((B == "106") || (B == "107") || (B == "111") || (B == "112") || (B == "118") || (B == "150") || (B == "219") || (B == "225")))
		return true;
	// French studies
	if ((A == "FRST") && ((B == "125")))
		return true;
	// Geography
	if ((A == "GPHY") && ((B == "101") || (B == "210") || (B == "314") || (B == "319")))
		return true;
	// German
	if ((A == "GRMN") && ((B == "101") || (B == "102") || (B == "201") || (B == "202") || (B == "203")))
		return true;
	// Greek
	if ((A == "GNDS") && ((B == "112")))
		return true;
	// Hebrew
	if ((A == "HEBR") && ((B == "190") || (B == "192") || (B == "193") || (B == "294") || (B == "295") || (B == "301")))
		return true;
	// History
	if ((A == "HIST") && ((B == "257")))
		return true;
	// Inuktitut
	if ((A == "INUK") && ((B == "Lel")))
		return true;
	// Italian
	if ((A == "ITLN") && ((B == "111") || (B == "112") || (B == "204")))
		return true;
	// Innovation and entrepreneurship
	if ((A == "ENIN") && ((B == "200") || (B == "204") || (B == "207") || (B == "205")))
		return true;
	// Japanese
	if ((A == "JAPN") && ((B == "100") || (B == "200")))
		return true;
	if ((A == "LANG") && ((B == "200")))
		return true;
	// Language, lit and cultures
	if (A == "LLCU" && ((B == "101") || (B == "102")))
		return true;
	// Latin
	if ((A == "LATN") && ((B == "110")))
		return true;
	// Law
	if ((A == "LAW") && ((B == "201") || (B == "202") || (B == "203") || (B == "204") || (B == "205") || (B == "206") || (B == "207")))
		return true;
	// Liguisitics
	if (A == "LING")
		return true;
	// Mohawk
	if ((A == "MOHK") && ((B == "101") || (B == "102") || (B == "201") || (B == "202")))
		return true;
	// Music
	if ((A == "MUSC") && ((B == "100") || (B == "156") || (B == "104") || (B == "112") || (B == "114") || (B == "115") || (B == "121") || (B == "171") || (B == "152") || (B == "180") || (B == "185") || (B == "187") || (B == "188") || (B == "189") || (B == "191") || (B == "221") || (B == "224") || (B == "227") || (B == "229") || (B == "280") || (B == "281") || (B == "283") || (B == "285") || (B == "292")))
		return true;
	// Music theatre
	if ((A == "LAW-") & ((B == "232") || (B == "240") || (B == "340")))
		return true;
	// Portuguese
	if (A == "PORT" && ((B == "103") || (B == "104")))
		return true;
	// Sociology
	if ((A == "SOCY") && ((B == "284") || (B == "363")))
		return true;
	// Spanish
	if ((A == "SPAN") && ((B == "304") || (B == "111") || (B == "112") || (B == "204") || (B == "205") || (B == "206") || (B == "301") || (B == "303") || (B == "303") || (B == "401") || (B == "402")))
		return true;
	// Urban planning
	if ((A == "SURP") && ((B == "853")))
		return true;
	return false;
}
