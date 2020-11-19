#include <iostream>
using namespace std;
#include "Requirement.h"
#include "Course.h"

int main() {
	cout << "This will test requirements class." << endl;

	Requirement req("Geological Engineering");

	vector<Course> firstYearReq=req.getFirstReq();
	vector<Course> secYearReq=req.getSecReq();
	vector<Course> thirYearReq=req.getThirReq();
	vector<Course> fourYearReq=req.getFourReq();

	vector<Course> groupA=req.getGroupA();
	vector<Course> groupB=req.getGroupB();
	vector<Course> elecReq=req.getElectiveReq();
	vector<Course> groupC=req.getGroupC();
	vector<Course> groupD=req.getGroupD();

	cout<<"FIrst year -------------------------"<<endl;
	//Testing.
	for(int i=0; i<firstYearReq.size();i++){

		cout<<firstYearReq[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"sec year -------------------------"<<endl;
	for(int i=0; i<secYearReq.size();i++){
		cout<<secYearReq[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"thir year -------------------------"<<endl;
	for(int i=0; i<thirYearReq.size();i++){
		cout<<thirYearReq[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"fourth year -------------------------"<<endl;
	for(int i=0; i<fourYearReq.size();i++){
		cout<<fourYearReq[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"group a -------------------------"<<endl;
	for(int i=0; i<groupA.size();i++){
		cout<<groupA[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"group b -------------------------"<<endl;
	for(int i=0; i<groupB.size();i++){
		cout<<groupB[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"group c--------------------"<<endl;
	for(int i=0; i<groupC.size();i++){
		cout<<groupC[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	cout<<"group d--------------------"<<endl;
	for(int i=0; i<groupD.size();i++){
		cout<<groupD[i].getCourseID()<<endl;
		//cout<<" "<<endl;
	}
	return 0;
}
