//Token : b6da7d801b0911ebb55bed7258180e9f
#include <cpr/cpr.h>
#include <iostream>
#include <string>

//https://api.qmulus.io/v1/courses
std::string api(std::string coursecode) {
	cpr::Response r = cpr::Get(cpr::Url{ "https://api.qmulus.io/v1/courses/" + coursecode + "?token=b6da7d801b0911ebb55bed7258180e9f" });

	//std::cout << r.text << std::endl;
	return r.text;
}
int main() {
	std::string info = api("APSC-111");
	std::cout << info << std::endl;
	char units = info[info.length() - 1];
	std::cout << units << std::endl;
	for (int i = 0; i < info.length(); i++) {
		std::cout << info[i] << std::endl;
	}
	return 0;
}