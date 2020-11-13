/*
 * Requirement.h
 *
 *  Created on: Nov. 5, 2020
 *      Author: jessielu
 */

#ifndef REQUIREMENT_H_
#define REQUIREMENT_H_
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class Requirement {
public:

	//Constructors for Requirement class
	Requirement(const string& program);//Constructor
	Requirement(const string& program,const string& subProg);

	//public methods
	void initialize();//loads in prog.txt file, sorts and stores into vectors

private:
		string program;
		string filename; //stores name of file
		vector<string> firstInsult, secInsult, thirdInsult; //vectors store insults
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
