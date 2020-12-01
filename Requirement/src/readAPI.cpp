#include "readAPI.h"
using namespace std;

readAPI::readAPI(string coursecode) {
	/*

	cpr::Response r = cpr::Get(cpr::Url{ "https://api.qmulus.io/v1/courses/" + coursecode + "?token=eb507c002ce711ebbab92dcdc6160728" });
	r.header["application/json"];
	try {
		//auto j2 = json::parse(r.text);
		std::string test = r.text;
		j = json::parse(test);
	}
	catch (json::parse_error& e)
	{
		std::cerr << e.what() << std::endl;
	}

	name = j["course_name"];
	description = j["description"];
	credits = j["units"];
	CEAB = { j["CEAB"]["math"],j["CEAB"]["basic_sci"],j["CEAB"]["comp_st"],j["CEAB"]["eng_sci"],j["CEAB"]["end_des"] };
	prereqs = j["requirements"];


	//cout << j[""]
	 * */


}
std::string readAPI::getName() {
	return name;
}
std::string readAPI::getDescription() {
	return description;
}
std::string readAPI::getPrereqs() {
	return prereqs;
}
float readAPI::getCredits() {
	return credits;
}
std::vector<float> readAPI::getCEAB() {
	return CEAB;
}
//int readAPI::getYear() {
//	return year;
//}
