#include <iostream>
using namespace std;
#include "Requirement.h"
#include "Course.h"

int main() {

	// The user class
	string name; // stores name;
	vector<string> courses; // stores user input courses
	string progname;

	cout << "What's your name? (first name).\n"; //when you say more than one word it bugs the program
	cin >> name;
	cout << " " << endl; // space

	cout << "What program are you in? Please separate the name with a hyphen (-).\n";
	cin >> progname;
	cout << " " << endl; // space

	cout << "We will now ask you to input your courses. Please type in a ABCD-123 format. Type 'end' to finish.";

	for (int i = 0; i < 100; i++) {
		string number;
		string input;
		number = std::to_string(i);
		// Reading User Input sales value Based on index
		cout << "\nPlease input course number " + number + ":\n";
		cin >> input;
		courses.push_back(input);

		if (courses[i] == "end") {
			break;
		}
	}

	cout << " " << endl; // space
	cout << "Your courses:" << endl;
	for (int i = 0; i < (courses.size() - 1); i++) {
		cout << courses[i] << endl;
		//cout<<" "<<endl;
	}

	cout << " " << endl; // space

	cout << "This will test requirements class." << endl;
	cout << progname << endl;
	Requirement req(progname);

	vector<Course> firstYearReq = req.getFirstReq();
	vector<Course> secYearReq = req.getSecReq();
	vector<Course> thirYearReq = req.getThirReq();
	vector<Course> fourYearReq = req.getFourReq();

	vector<Course> groupA = req.getGroupA();
	vector<Course> groupB = req.getGroupB();
	vector<Course> elecReq = req.getElectiveReq();
	vector<Course> groupC = req.getGroupC();
	vector<Course> groupD = req.getGroupD();

	cout << "First year -------------------------" << endl;
	//Testing.
	for (int i = 0; i < firstYearReq.size(); i++) {
		cout << firstYearReq[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "sec year -------------------------" << endl;
	for (int i = 0; i < secYearReq.size(); i++) {
		cout << secYearReq[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "thir year -------------------------" << endl;
	for (int i = 0; i < thirYearReq.size(); i++) {
		cout << thirYearReq[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "fourth year -------------------------" << endl;
	for (int i = 0; i < fourYearReq.size(); i++) {
		cout << fourYearReq[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}

	cout << "Electives -------------------------" << endl;
	for (int i = 0; i < elecReq.size(); i++) {
		cout << elecReq[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}

	cout << "group a -------------------------" << endl;
	for (int i = 0; i < groupA.size(); i++) {
		cout << groupA[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "group b -------------------------" << endl;
	for (int i = 0; i < groupB.size(); i++) {
		cout << groupB[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "group c--------------------" << endl;
	for (int i = 0; i < groupC.size(); i++) {
		cout << groupC[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}
	cout << "group d--------------------" << endl;
	for (int i = 0; i < groupD.size(); i++) {
		cout << groupD[i].getCourseID() << endl;
		//cout<<" "<<endl;
	}

	// -----------------------------------------
	// determining missing core courses
	// -----------------------------------------

	vector<string> missingCourses;

	// determine first year core missing courses
	for (int i = 0; i < courses.size(); i++) {

		for (int j = 0; j < firstYearReq.size(); i++) {
			cout << courses[i] << endl;
			cout << firstYearReq[i].getCourseID() << endl;
			if (courses[i] != firstYearReq[j].getCourseID()) {
				missingCourses.push_back(firstYearReq[j].getCourseID());
			}
		}
	}

	cout << "Missing first year courses:" << endl;
	for (int i = 0; i < missingCourses.size(); i++) {
		cout << missingCourses[i] << endl;
		//cout<<" "<<endl;
	}
		
	return 0;
}

