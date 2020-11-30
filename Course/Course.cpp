
#include <iostream>
#include <string>
#include <vector> 
#include "Course.h"
using namespace std;

CourseException::CourseException(const string& message) : message(message) {} //Fraction Exception Class
string& CourseException::what() { return message; }



Course::Course(string coursecode, int year) { //The default constructor
if (year<1||year>4)
	throw CourseException("Invalid year");
   try {
    this->desiredYear = year;

    readAPI info = readAPI(coursecode);
    this->code = coursecode;
    this->name = info.getName();
    this->description = info.getDescription();
    this->CEAB = info.getCEAB();
    this->credits = info.getCredits();
    this->prereqs = info.getPrereqs();
    this->listA = ListACheck();
    if (this->listA == true)
        this->listB = false;
    else if (this->listA == false)
        this->listB = ListBCheck();
   }
   catch (APIException& e) {
       cout <<  e.what() << endl;
       throw CourseException("Could not create Course");
   }
}

vector<float> Course::getCEAB() {
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
//char Course::getTerm() {
  //  return this->term;
//}
string Course::getPrereqs() {
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

bool Course::ListACheck() {
    string A = this->code.substr(0, 4);
    string B = this->code.substr(5, 3);
    if ((A == "ARTH") && ((B != "245") || (B != "380") || (B != "395")))
        return true;
    if ((A == "BISC") && ((B == "100") || (B == "101")))
        return true;
    if ((A == "CLST") && ((B[0] == '1') || (B[0] == '2') || (B == "321") || ((stoi(B) >= 332) && (stoi(B) <= 335)) || (B == "340") || (B == "341") || (B == "343")))
        return true;
    if ((A == "COMM") && ((B == "251") || (B == "651") || (B == "290")))
        return true;
    if ((A == "CWWRI") && ((B == "293") || (B == "294") || (B == "295") || (B == "397")))
        return true;
    if ((A == "DEVS") && ((B == "100") || (B == "200") || (B == "221") || (B == "230") || (B == "240") || (B == "260") || (B == "280")))
        return true;
    if ((A == "DRAM") && ((B == "100") || (B == "200") || (B == "205") || (B == "211") || (B == "220") || (B == "236") || (B == "251") || (B == "271") || (B == "273") || (B == "300") || (B == "301") || (B == "303") || (B == "306")))
        return true;
    if ((A == "CLST") && ((B[0] == '1') || (B[0] == '2') || (B == "321") || ((stoi(B) >= 332) && (stoi(B) <= 335)) || (B == "340") || (B == "341") || (B == "343")))
        return true;
    if ((A == "ECON") && ((B[0] == '2') || ((stoi(B) >= 110) && (stoi(B) <= 112))) && ((B != "250") || (B != "255")))
        return true;
    if ((A == "EMPR") && ((B[0] == '1') || (B[0] == '2')))
        return true;
    if ((A == "ENGL") && ((B == "100") || B == "160" || (B[0] == '2')))
        return true;
    if ((A == "ENSC") && ((B == "290") || (B == "305") || (B == "310") || (B == "311") || (B == "315") || (B == "321") || (B == "420")))
        return true;
    if ((A == "FILM") && ((B == "104") || (B == "106") || (B == "110") || (B == "210") || (B == "214") || (B == "215") || (B == "236") || (B == "240") || (B == "260") || (B == "220") || (B == "225") || (B == "236")))
        return true;
    if ((A == "FREN") && ((B == "241") || (B == "285") || (B[0] == '3')) && ((B != "320") || (B != "331") || (B != "353")))
        return true;
    if (A == "GNDS")
        return true;
    if ((A == "GPHY") && ((B == "203") || (B == "204") || (B == "227") || (B == "228") || (B == "229") || (B == "250") || (B == "254") || (B == "257") || (B == "258") || (B == "320") || (B == "325") || (B == "327") || (B == "330") || (B == "362")))
        return true;
    if ((A == "HLTH") && ((B == "101") || (B == "237") || (B == "305") || (B == "332") || (B == "350") || (B == "403") || (B == "404")))
        return true;
    if ((A == "HEBR") && ((B == "292") || B == "393"))
        return true;
    if ((A == "HIST") && (B[0] != 3) && (B != "257"))
        return true;
    if ((A == "GRMN") && ((B == "308") || (B == "309") || (B == "311") || (B == "312")))
        return true;
    if ((A == "ENIN") && ((B == "140") || (B == "240") || (B == "301") || (B == "340")))
        return true;
    if ((A == "IDIS") && ((B == "210") || (B == "220") || (B == "221") || ((stoi(B) >= 302) && (stoi(B) <= 305)) || (B == "222") || (B == "280")))
        return true;
    if (A == "INDG" && B == "301")
        return true;
    if ((A == "INTS") && ((B == "221") || (B == "300") || (B == "301") || (B == "306") || (B == "307") || (B == "321")))
        return true;
    if (A == "JWST" && (B == "301" || B == "302"))
        return true;
    if ((A == "LLCU") && (!(stoi(B) >= 101) && (stoi(B) <= 104)))
        return true;
    if ((A == "LAW-") && ((stoi(B) >= 201) && (stoi(B) <= 207)))
        return true;
    if (A == "LIBS" && B == "100")
        return true;
    if ((A == "LING") && ((B == "100") || (B == "202") || (B == "205") || (B == "210")))
        return true;
    if ((A == "MUSC") && ((B == "102") || (B == "114") || (B == "171") || (B == "240") || (B == "245") || (B == "286") || (B == "289") || (B == "393") || (B == "490") || (B == "491") || (B == "210") || (B == "211")))
        return true;
    if ((A == "MUTH") && ((B == "110") || (B == "111") || (B == "201") || (B == "306") || (B == "240") || (B == "251")))
        return true;
    if (A == "PHIL" && B[0] != '3')
        return true;
    if ((A == "POLS") && ((B[0] == '2') || (B == "101") || (B == "110")))
        return true;
    if ((A == "PSYC") && ((B == "100") || (B == "221") || (B == "241") || (B == "251")))
        return true;
    if (A == "RELS")
        return true;
    if ((A == "SOCY") && ((B[0] != '1') || (B == "122")))
        return true;
    return false;
}

bool Course::ListBCheck() {
    string A = this->code.substr(0, 4);
    string B = this->code.substr(5, 3);
    if ((A == "ANSH") && ((B == "101") || (B == "102"))) // Anishinaabe
        return true;
    if ((A == "APSC") && ((B == "223"))) // Engineering and applied sciene
        return true;
    if ((A == "CHEE") && ((B == "302"))) // Engineering and applied scienc
        return true;
    if ((A == "MECH") && ((B == "333"))) // Engineering and applied science
        return true;
    if ((A == "ARAB") && ((B == "100") || (B == "200"))) // Arab
        return true;
    if ((A == "BIOL") && ((B == "111"))) // Biology
        return true;
    if ((A == "CHEM") && ((B == "302"))) // Chemical engineering
        return true;
    if ((A == "CHIN") && ((B == "100"))) // Chinese
        return true;
    // Commerce
    if ((A == "COMM") && ((B == "200") || (B == "201") || (B == "211") || (B == "212") || (B == "221") || (B == "226") || (B == "231") || (B == "244") || (B == "251") || (B == "290") || (B == "303") || (B == "305") || (B == "308") || (B == "310") || (B == "311") || (B == "312") || (B == "313") || (B == "322") || (B == "323") || (B == "325") || (B == "326") || (B == "328") || (B == "329") || (B == "351") || (B == "353") || (B == "357") || (B == "375") || (B == "381") || (B == "382") || (B == "387") || (B == "408") || (B == "496") || (B == "409")))
    return true;
    if ((A == "DEVS") && ((B == "333"))) // Developmental studies
        return true;
    if ((A == "DRAM") && ((B == "239") || (B == "241"))) // Drama
        return true;
    // Employment relations
    if ((A == "EMPR") && ((B == "100") || (B == "200") || (B == "210") || (B == "220") || (B == "230") || (B == "240") || (B == "250") || (B == "320") || (B == "330") || (B == "335") || (B == "370")))
        return true;
    if ((A == "ENSC") && ((B == "103") || (B == "200") || (B == "201") || (B == "203") || (B == "301") || (B == "320") || (B == "390")))
        return true;
    // Fine art
    if ((A == "ARTF") && ((B == "100") || (B == "101") || (B == "106") || (B == "125") || (B == "127") || (B == "260") || (B == "275") || (B == "102") || (B == "128") || (B == "227")))
        return true;
    // French
    if ((A == "FREN") && ((B == "106") || (B == "107") || (B == "111") || (B == "112") || (B == "118") || (B == "150") || (B == "219") || (B == "225")))
        return true;
    // French studies
    if ((A == "FRST") && ((B == "125")))
        return true;
    // Geography
    if ((A == "GPHY") && ((B == "101") || (B == "210") || (B == "314") || (B == "319")))
        return true;
    // German
    if ((A == "GRMN") && ((B == "101") || (B == "102") || (B == "201") || (B == "202") || (B == "203")))
        return true;
    // Greek
    if ((A == "GNDS") && ((B == "112")))
        return true;
    // Hebrew
    if ((A == "HEBR") && ((B == "190") || (B == "192") || (B == "193") || (B == "294") || (B == "295") || (B == "301")))
        return true;
    // History
    if ((A == "HIST") && ((B == "257")))
        return true;
    // Inuktitut
    if ((A == "INUK") && ((B == "Lel")))
        return true;
    // Italian
    if ((A == "ITLN") && ((B == "111") || (B == "112") || (B == "204")))
        return true;
    // Innovation and entrepreneurship
    if ((A == "ENIN") && ((B == "200") || (B == "204") || (B == "207") || (B == "205")))
        return true;
    // Japanese
    if ((A == "JAPN") && ((B == "100") || (B == "200")))
        return true;
    if ((A == "LANG") && ((B == "200")))
        return true;
    // Language, lit and cultures
    if (A == "LLCU" && ((B == "101") || (B == "102")))
        return true;
    // Latin
    if ((A == "LATN") && ((B == "110")))
        return true;
    // Law
    if ((A == "LAW") && ((B == "201") || (B == "202") || (B == "203") || (B == "204") || (B == "205") || (B == "206") || (B == "207")))
        return true;
    // Liguisitics
    if (A == "LING")
        return true;
    // Mohawk
    if ((A == "MOHK") && ((B == "101") || (B == "102") || (B == "201") || (B == "202")))
        return true;
    // Music
    if ((A == "MUSC") && ((B == "100") || (B == "156") || (B == "104") || (B == "112") || (B == "114") || (B == "115") || (B == "121") || (B == "171") || (B == "152") || (B == "180") || (B == "185") || (B == "187") || (B == "188") || (B == "189") || (B == "191") || (B == "221") || (B == "224") || (B == "227") || (B == "229") || (B == "280") || (B == "281") || (B == "283") || (B == "285") || (B == "292")))
        return true;
    // Music theatre
    if ((A == "LAW-") & ((B == "232") || (B == "240") || (B == "340")))
        return true;
    // Portuguese
    if (A == "PORT" && ((B == "103") || (B == "104")))
        return true;
    // Sociology
    if ((A == "SOCY") && ((B == "284") || (B == "363")))
        return true;
    // Spanish
    if ((A == "SPAN") && ((B == "304") || (B == "111") || (B == "112") || (B == "204") || (B == "205") || (B == "206") || (B == "301") || (B == "303") || (B == "303") || (B == "401") || (B == "402")))
        return true;
    // Urban planning
    if ((A == "SURP") && ((B == "853")))
        return true;
    return false;
}
