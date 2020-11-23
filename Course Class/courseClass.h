#pragma once


#include <string>
#include <vector>

using namespace std;

class Course {

    vector<string> getWords(string& line) const; // getting the words from their respective lines
    vector<string> firstCol, secondCol, thirdCol; /* hold the values of each column in a vector*/



public:
    void initialize(); //initalize method, no use for this yet but it's here

    courseClass();
    courseClass(const int string);
    vector <string> preqrequisites;

    string name;
    string description;
    string CEAB;
    string credits;
    string term;

    bool ListA;
    bool ListB;

    int userYear;
    bool ListACheck();
    bool ListBCheck();

private:

    string getName();
    string getDescription();
    float getCredits();
    float getCEAB();

    vector<string> getPrereqs();
    bool getListA();
    bool getListB();
    string getTerm();
    int getYear();



};


class YearOutOfBounds { // declarations exceptions for out of bounds numbers
public:
    YearOutOfBounds(const string& message);
    string& what();

private:
    string message;
};
