/*
 * Requirement.cpp
 * This class reads the .txt files containing all the course requirement information for different programs
 * Stores each list in vector array of 'course' objects, and can be accessed using accessor methods
 * EXCEPT one list stores number of credits/courses needed to be taken from tech elective list/complimentary elective list
 * to fulfill requirements for that program.
 */

#include "Requirement.h"
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
using namespace std;

//Constructor parameter: program name
Requirement::Requirement(const string& programs) {
    cout << "IN requirements" << endl;

	program = programs;

	filename = program + ".txt";

	readFile();
}

//Constructor parameter: program name + subprogram name--> SO far we have decided to just choose one subprogram.
//inclusion of separate sub programs can be implemented later if time allows for it :/
Requirement::Requirement(const string& program, const string& subProgram) {
	// if program chosen has a sub program
}

//Reads in .txt file and stores info
void Requirement::readFile() {
	//list of lists
	//initializing 'outer' list.--> this 'outer' list stores 9 lists of courses/electivenumber
	vector< vector < string> > listOfcourseReq(9);//vector list of vectors to store file info

	string line;//line reading in

	ifstream fileInAgain(filename);

	//throw FileException if file error
	if (fileInAgain.fail()) {
		throw FileException("File cannot be read.");
	}

	int i = -1;//'outer loop' index keeping track of which VECTOR LIST of strings we're adding to
	int j = 0;//'inner loop' index keeping track of COURSE IN vector list.

	//Loops through file adding courses to listOfcourseReq at index 0. detects blank, starts adding
	//courses to index 1... and 2... and so on as blanks are detected

	while (getline(fileInAgain, line)) {
		//cout<<line.size()<<endl;

		if (i != 4) {
			if (line.size() >= 9 || line.size() == 1) {
				line = line.substr(0, line.size() - 1);
			}
		}


		if (line.empty()) {//if blank detected, up index. and skip this line. start new array.

			j = -1;
			i++;
			getline(fileInAgain, line);//Skipping blank and get to first course in list

			//cout<<line<<endl;
			if (line.size() >= 9) {
				line = line.substr(0, line.size() - 1);
			}

		}

		j++;
		string temp = to_string(i) + " : " + line + "---- " + to_string(j);
		//cout<<temp<<endl;
		try {
			listOfcourseReq[i].push_back(line); //push course/line into
		}
		catch (int e) {
			cout << "Error adding line to list" << endl;
		}


	}

	fileInAgain.close();

	try {
		initCourse(listOfcourseReq);//Initialize stored course names as course objects
	}
	catch (int e) {
		cout << "Error initializing course as object" << endl;
	}
	vector<string>templist = listOfcourseReq[4];
	// elecReq=templist;
	// cout<<"HEREEE"<<endl;
	// cout<<templist[0]<<endl;
	// cout<<templist[1]<<endl;
	// typeFlag = stoi(templist[1]);

	for (int i = 2; i < templist.size(); i++) {
		elecReq.push_back(templist[i]);

	}

}


void Requirement::initCourse(vector<vector<string> > listOfcourseReq) {
	vector<vector<Course> > courseListObj(9);
	string courseCode;

	for (int i = 0; i < listOfcourseReq.size(); i++)
	{
		if (i != 4) {//dont initialize elective count as course obejcts
			//index starting at one to rid of titles
			for (int j = 1; j < listOfcourseReq[i].size(); j++)
			{

				courseCode = listOfcourseReq[i][j];
				replace(courseCode.begin(), courseCode.end(), ' ', '-');
				//Course newCourse(listOfcourseReq[i][j]);//initializing new course
				Course newCourse(courseCode);
				courseListObj[i].push_back(newCourse);
			}
		}
	}

	//cout<<courseListObj[0][8].getCourseID()<<endl; <--Testing objects.

		//Assigning them to private variables.
	coreFirstReq = courseListObj[0];
	coreSecReq = courseListObj[1];
	coreThirReq = courseListObj[2];
	coreFourReq = courseListObj[3];

	techGroupA = courseListObj[5];
	techGroupB = courseListObj[6];
	techGroupC = courseListObj[7];
	techGroupD = courseListObj[8];
}

//Accessor Methods

//Getting CORE courses
vector<Course> Requirement::getFirstReq() {
	return coreFirstReq;
}
vector<Course> Requirement::getSecReq() {
	return coreSecReq;
}
vector<Course> Requirement::getThirReq() {
	return coreThirReq;
}
vector<Course> Requirement::getFourReq() {
	return coreFourReq;
}

//Getting Tech elective courses
vector<Course> Requirement::getGroupA() {
	return techGroupA;
}
vector<Course> Requirement::getGroupB() {
	return techGroupB;
}
vector<Course> Requirement::getGroupC() {
	return techGroupC;
}
vector<Course> Requirement::getGroupD() {
	return techGroupD;
}

//get number of each tech elective
vector<string> Requirement::getElectiveReq() {
	return elecReq;
}

int Requirement::getFlag() {
	return typeFlag;
}
//File exceptions class exe. returns error message
FileException::FileException(const string& message) : message(message) {}
string& FileException::what() { return message; }

