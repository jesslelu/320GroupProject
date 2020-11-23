#pragma once
#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

#define MAX 100
// #include "Course.h"

using namespace std;

class User {

public:
	//public methods
	bool creditsCheck();
	bool graduationCheck();


private:
	string filename; //stores name of file


};
//File Exception returns error message given message received--> errors opening file
class FileException {
public:
	FileException(const string& message);
	string& what();
private:
	string message;
};
