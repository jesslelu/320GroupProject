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
using namespace std;

Requirement::Requirement(const string& programs) {
	program=programs;
	filename=program+".txt";
	//cout<<program<<endl;
	//cout<<filename<<endl;

	initialize();
}

Requirement::Requirement(const string& program,const string& subProgram) {
	// if program chosen has a sub program
}


void Requirement::initialize(){

	string courseName;
	ifstream fileInAgain(filename);

	//throw FileException if file error
	if (fileInAgain.fail()) {
			throw FileException("File cannot be read.");
	}

	//Based on counter 'count', sort into respective vectors
	while (getline(fileInAgain,courseName)) {
		cout<<courseName<<endl;
	}
	//close file
	fileInAgain.close();
}


//File exceptions class exe. returns error message
FileException::FileException(const string& message) : message(message) {}
string& FileException::what() { return message; }


