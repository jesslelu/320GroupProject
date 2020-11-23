//Token : b6da7d801b0911ebb55bed7258180e9f
#include <cpr/cpr.h>
#include <iostream>
#include <string>

//https://api.qmulus.io/v1/courses
std::string api(std::string coursecode) {
	cpr::Response r = cpr::Get(cpr::Url{ "https://api.qmulus.io/v1/courses/" + coursecode + "?token=eb507c002ce711ebbab92dcdc6160728" });

	//std::cout << r.text << std::endl;
	return r.text;
}
int main() {
	std::string info = api("CMPE-320");
	std::cout << info << std::endl;
	}
	return 0;
}
