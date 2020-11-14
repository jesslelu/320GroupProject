#include <iostream>
using namespace std;
#include "Requirement.h"
#include "Course.h"
int main() {
	cout << "This will test requirements class." << endl; // prints !!!Hello World!!!
	Requirement req("Geological Engineering");


//	vector<Course> getFirstReq();
//	vector<Course> getSecReq();
//	vector<Course> getThirReq();
//	vector<Course> getFourReq();
//	vector<Course> getGroupA();
//	vector<Course> getGroupB();
//	vector<Course> getCompliReq();
	vector<Course> firstYearReq=req.getFirstReq();

	//Testing.
	for(int i=0; i<firstYearReq.size();i++){
		cout<<firstYearReq[i].getCourseID()<<endl;
	}



	return 0;
}
