#ifndef COURSE_H_INCLUDED
#define COURSE_H_INCLUDED

#pragma once
#include <vector>
#include <string>
#include "readAPI.h"
using namespace std;


class CourseException { //the exception class to handle errors when the denominator is set to 0
public:
    CourseException(const string& message);
    string& what();
private:
    string message;

};

class Course {
public:

    Course(string coursecode, int year,string term);
    Course(string coursecode);
    string getName();
    string getDescription();
    float getCredits();
    vector<float> getCEAB();
    string getPrereqs();
    int getDesiredYear();
    string getCourseID();
    string getTerm();


private:
    string name;
    string description;
    float credits;
    vector<float> CEAB;
    string prereqs;
    int desiredYear;
    string CourseID;
    string term;

};


#endif // COURSE_H_INCLUDED
