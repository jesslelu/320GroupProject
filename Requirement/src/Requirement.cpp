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

	readFile();
}

//Constructor parameter: program name + subprogram name
Requirement::Requirement(const string& program,const string& subProgram) {
	// if program chosen has a sub program
}

//Reads in .txt file and stores info
void Requirement::readFile(){

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
		//cout<<line<<endl;
		if(line.empty()){//if blank detected, up index. and skip this line. start new array.
			j=-1;
			i++;
			getline(fileInAgain,line);//Skipping blank and get to first course in list
			line=line.substr (0,line.size()-1);
		}

		j++;
		//string temp=to_string(i)+" : "+line + "---- "+to_string(j); <-- used for testing.

		listOfcourseReq[i].push_back(line); //push course/line into


	}


	fileInAgain.close();
	initCourse(listOfcourseReq);//Initialize stored course names as course objects
}


void Requirement::initCourse(vector<vector<string> > listOfcourseReq){
	vector<vector<Course> > courseListObj(7);

		for (int i = 0; i < listOfcourseReq.size(); i++)
		    {
				//index starting at one to rid of titles
		        for (int j = 1; j < listOfcourseReq[i].size(); j++)
		        {
		        	Course newCourse(listOfcourseReq[i][j]);//initializing new course
		        	courseListObj[i].push_back(newCourse);
		        }

		    }

	//cout<<courseListObj[0][8].getCourseID()<<endl; <--Testing objects.

		//Assiging them to private variables.
		coreFirstReq=courseListObj[0];
		coreSecReq=courseListObj[1];
		coreThirReq=courseListObj[2];
		coreFourReq=courseListObj[3];
		compliReq=courseListObj[4];
		techGroupA=courseListObj[5];
		techGroupA=courseListObj[6];
}

//Accessor Methods
vector<Course> Requirement::getFirstReq(){
	return coreFirstReq;
}
vector<Course> Requirement::getSecReq(){
	return coreSecReq;
}
vector<Course> Requirement::getThirReq(){
	return coreThirReq;
}
vector<Course> Requirement::getFourReq(){
	return coreFourReq;
}
vector<Course> Requirement::getGroupA(){
	return techGroupA;
}
vector<Course> Requirement::getGroupB(){
	return techGroupB;
}
vector<Course> Requirement::getCompliReq(){
	return compliReq;
}


//File exceptions class exe. returns error message
FileException::FileException(const string& message) : message(message) {}
string& FileException::what() { return message; }


