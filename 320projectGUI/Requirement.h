
#ifndef REQUIREMENT_H_
#define REQUIREMENT_H_
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
#include "Course.h"
using namespace std;

class Requirement {
public:

	//Constructors for Requirement class
	Requirement(const string& program);//Constructor
	Requirement(const string& program, const string& subProg);

	//public methods
	void readFile();//loads in prog.txt file, sorts and stores into vectors
	void initCourse(vector<vector<string> > listOfcourseReq);
	vector<Course> getFirstReq();
	vector<Course> getSecReq();
	vector<Course> getThirReq();
	vector<Course> getFourReq();
	vector<Course> getGroupA();
	vector<Course> getGroupB();
	vector<string> getElectiveReq();
	vector<Course> getGroupC();
	vector<Course> getGroupD();
	int getFlag();
private:
	string program; //stores program name
	string filename; //stores name of file
	int typeFlag;//flag for whether elective requirements are in credits or number of courses
	//1 if in credits and 0 if in number of courses
	vector<Course> coreFirstReq, coreSecReq, coreThirReq, coreFourReq, techGroupA, techGroupB, techGroupC, techGroupD;
	vector<string> elecReq;

};

//File Exception returns error message given message received--> errors opening file
class FileException {
public:
	FileException(const string& message);
	string& what();
private:
	string message;
};


#endif /* REQUIREMENT_H_ */