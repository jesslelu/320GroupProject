/*
 * Course.cpp
 *
 *  Created on: Nov. 12, 2020
 *      Author: jessielu
 */

#include "Course.h"

Course::Course(const string& courseID) : courseID(courseID) {
    // TODO Auto-generated constructor stub
    //string getCourseID();
    this->desiredYear = 0;
    this->name = "test course";
    this->description = "A fake course for testing purposes";
    this->CEAB = 0.0;
    this->credits = 3.0;
    this->term = 'F';
    this->listA = true;
    this->listB = true;

}

string Course::getCourseID() {
    return courseID;

}

float Course::getCEAB() {
    return this->CEAB;
}

float Course::getCredits() {
    return this->credits;
}

string Course::getName() {
    return this->name;
}

string Course::getDescription() {
    return this->description;
}
char Course::getTerm() {
    return this->term;
}
vector <string> Course::getPrereqs() {
    return this->prereqs;
}
bool Course::getListA() {
    return this->listA;
}
bool Course::getListB() {
    return this->listB;
}
int Course::getDesiredYear() {
    return this->desiredYear;
}

