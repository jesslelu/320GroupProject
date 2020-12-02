/*
 * fraction_20113081.cpp
 *
 *  Created on: Oct 14, 2020
 *      Author: Kyle McLellan
 */
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"

using namespace std;

CourseException::CourseException(const string& message) : message(message) {} //Fraction Exception Class
string& CourseException::what() { return message; }

Course::Course(string coursecode) {
    this->desiredYear = 0;
    //readAPI info = readAPI(coursecode);
    this->CourseID = coursecode;
    this->name = "Course Name";
    this->description = "This is an eng course";
    //this->CEAB = info.getCEAB();
    this->credits = 3.0;
    //this->prereqs = info.getPrereqs();
}

Course::Course(string coursecode, int year,string term) { //The default constructor
    this->desiredYear = 0;
    //readAPI info = readAPI(coursecode);
    this->CourseID = coursecode;
    this->name = "Course Name";
    this->description = "This is an engineering course...";
    //this->CEAB = info.getCEAB();
    this->credits = 3.0;
    //this->prereqs = info.getPrereqs();

}

/*
Course::Course(string coursecode, int year,string term) { //The default constructor
    this->desiredYear = year;
    readAPI info = readAPI(coursecode);
    this->CourseID = coursecode;
    this->name = info.getName();
    this->description = info.getDescription();
    this->CEAB = info.getCEAB();
    this->credits = info.getCredits();
    this->prereqs = info.getPrereqs();

}
*/

vector<float> Course::getCEAB() {
    return this->CEAB;
}

float Course::getCredits() {
    return this->credits;
}

string Course::getName() {
    return this->name;
}
string Course::getCourseID(){
	return CourseID;
}
string Course::getDescription() {
    return this->description;
}
string Course::getTerm() {
    return this->term;
}
string Course::getPrereqs() {
    return this->prereqs;
}

int Course::getDesiredYear() {
    return this->desiredYear;
}

