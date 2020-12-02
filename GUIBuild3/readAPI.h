#ifndef READAPI_H_INCLUDED
#define READAPI_H_INCLUDED

#pragma once
#include <string>
#include <iostream>
#include <vector>
//#include <nlohmann/json.hpp>
//#include <cpr/cpr.h>
using namespace std;
//using json = nlohmann::json;


class readAPI
{

public:
    std::string getName();
    readAPI(string coursecode);
    std::string getDescription();
    float getCredits();
    std::vector<float> getCEAB();
    std::string getPrereqs();


private:
//    json j;
    std::string description;
    std::string name;
    float credits;
    std::vector<float> CEAB;
    std::string prereqs;

};

#endif // READAPI_H_INCLUDED
