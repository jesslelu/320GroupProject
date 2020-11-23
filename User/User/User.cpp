#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include<cstdio>
#include <cstddef>

#include "User.h"

using namespace std;

//File exceptions class exe. returns error message
FileException::FileException(const string& message) : message(message) {}
string& FileException::what() { return message; }

// Graduation Check()

// Credits Check()