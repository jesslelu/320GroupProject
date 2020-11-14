/*
 * Requirement.cpp
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
	program=programs;
	filename=program+".txt";

	initialize();
}

//Constructor parameter: program name + subprogram name
Requirement::Requirement(const string& program,const string& subProgram) {
	// if program chosen has a sub program
}

//Reads in .txt file and stores info
void Requirement::initialize(){

	vector< vector < string> > listOfcourseReq(7);//vector list of vectors to store file info

	string line;//line reading in

	ifstream fileInAgain(filename);

	//throw FileException if file error
	if (fileInAgain.fail()) {
			throw FileException("File cannot be read.");
	}

	int i=-1;//'outer loop' index keeping track of which VECTOR LIST of strings we're adding to
	int j=0;//'inner loop' index keeping track of COURSE IN vector list.

	//Loops through file adding courses to listOfcourseReq at index 0. detects blank, starts adding
	//courses to index 1... and 2... and so on as blanks are detected
	while (getline(fileInAgain,line)) {

		line=line.substr (0,line.size()-1); //Getting rid of '\n' at end of each line
		if(line.empty()){//if blank detected, up index. and skip this line. start new array.
			j=-1;
			i++;
			getline(fileInAgain,line);//Skipping blank and get to first course in list
			line=line.substr (0,line.size()-1);
		}

		j++;
		//string temp=to_string(i)+" : "+line + "---- "+to_string(j); <-- used for testing.

		listOfcourseReq[i].push_back(line); //push course/line into
		coreFirstReq, coreSecReq, coreThirReq, coreFourReq, techGroupA, techGroupB;
		coreFirstReq=listO

	}
	//Assiging them to private variables.
	coreFirstReq=listOfcourseReq[0];
	coreSecReq=listOfcourseReq[1];
	coreThirReq=listOfcourseReq[2];
	coreFourReq=listOfcourseReq[3];
	compliReq=listOfcourseReq[4];
	techGroupA=listOfcourseReq[5];
	techGroupA=listOfcourseReq[6];

	//If u want to see all the contents printed out
//	for (int i = 0; i < listOfcourseReq.size(); i++)
//	    {
//	        for (int j = 0; j < listOfcourseReq[i].size(); j++)
//	        {
//	            cout << to_string(i)+" "+to_string(j)+" "+listOfcourseReq[i][j] <<endl;
//	        }
//	        cout << endl;
//	    }

	fileInAgain.close();
}


//File exceptions class exe. returns error message
FileException::FileException(const string& message) : message(message) {}
string& FileException::what() { return message; }


