/*
 * User.cpp
 *
 *  Created on: Nov. 26, 2020
 *      Author: jessielu
 */
#include <iostream>
#include <string>
using namespace std;
#include "Requirement.h"
#include "Course.h"
#include "User.h"

User::User(vector<string> courses,string prognames):userCourses(courses) {


		//Initializing courses as objects, store in private var
		for (int i = 0; i < courses.size(); i++){
			Course newCourse(courses[i]);
			userCoursesObj.push_back(newCourse);
		}

		//initializing requirements object
		Requirement req(prognames);

		//Getting requirements from requirements class
		vector<Course> firstYearReq = req.getFirstReq();
		vector<Course> secYearReq = req.getSecReq();
		vector<Course> thirYearReq = req.getThirReq();
		vector<Course> fourYearReq = req.getFourReq();
		vector<string> elecReq=req.getElectiveReq();
		groupA = req.getGroupA();
		groupB = req.getGroupB();
		groupC = req.getGroupC();
		groupD = req.getGroupD();
		int Flag=req.getFlag();

		//Find list of core courses user is missing
		missingFirCourse=getMissing(firstYearReq);
		missingSecCourse=getMissing(secYearReq);
		missingThirCourse=getMissing(thirYearReq);
		missingFourCourse=getMissing(fourYearReq);


		//extracting meaningful info from electives. (the actual number)
		vector<int> numRequired(8);
		string newstring;
		for (int i = 0; i <elecReq.size(); i++) {
			//cout << elecReq[i] << endl;
			size_t found =elecReq[i].find(':');
			newstring = elecReq[i].substr (found+1,elecReq[i].size());
			numRequired[i]=stoi(newstring);
		}
		numgroupANeeded=numRequired[0];
		numgroupBNeeded=numRequired[1];
		numgroupCNeeded=numRequired[2];
		numgroupDNeeded=numRequired[3];
		numgListANeeded=numRequired[4];
		numListBNeeded=numRequired[5];
		numgroupNeeded=numRequired[6];
		numListNeeded=numRequired[7];

		complimentaryCheck();
		complimentaryComp(Flag);
}
void User::complimentaryCheck(){
	/*
	int numGroupA=0;
	int numGroupB=0;
	int numGroupC=0;
	int numGroupD=0;
	int numListA=0;
	int numListB=0;
	*/
	cout<<"start compare"<<endl;
	string comp;
	string compA;
	for(int i=0;i<userCoursesObj.size();i++){
		//for each course, check if it is in num group a,b,v,d, lista or list b
		//increment if found
		for(int k=0;k<groupA.size();k++){
			comp=userCoursesObj[i].getCourseID()+"    "+ groupA[k].getCourseID();

			//cout<<comp<<endl;

			if (groupA[k].getCourseID()== userCoursesObj[i].getCourseID() ) {
				//cout<<"found A"<<endl;
				//cout<<comp<<endl;
				//numGroupA++;
				userGroupA.push_back(groupA[k]);
			}
		}
		for(int j=0;j<groupB.size();j++){
			comp=userCoursesObj[i].getCourseID()+"    "+ groupB[j].getCourseID();
			if (groupB[j].getCourseID()== userCoursesObj[i].getCourseID() ) {
				//numGroupB++;
				userGroupB.push_back(groupB[j]);
				//cout<<"found B"<<endl;
				//cout<<comp<<endl;
			}
		}
		for(int m=0;m<groupC.size();m++){
			comp=userCoursesObj[i].getCourseID()+"    "+ groupC[m].getCourseID();
			if (groupC[m].getCourseID()== userCoursesObj[i].getCourseID() ) {
				//numGroupC++;
				userGroupC.push_back(groupC[m]);
				//cout<<"found C"<<endl;
				//cout<<comp<<endl;
			}
		}
		for(int w=0;w<groupD.size();w++){
			comp=userCoursesObj[i].getCourseID()+"    "+ groupD[w].getCourseID();
			if (groupD[w].getCourseID()== userCoursesObj[i].getCourseID() ) {
				//numGroupD++;
				userGroupD.push_back(groupD[w]);
				//cout<<"found D"<<endl;
				//cout<<comp<<endl;
			}
		}//end of for loop

	}//end of for loop


}
void User::complimentaryComp(int Flag){
	//credits that user has in each group
	float GroupA=0;
	float GroupB=0;
	float GroupC=0;
	float GroupD=0;

	//more credits or ccourses user needs to satisfy requirements
	float moreGroupA;
	int moreGroupC;
	int moreGroupD;
	int moreGroupB;
	int moreGroupAB;

	float groupAleft;
	float groupBleft;
	float groupCleft;
	float groupDleft;

	if(Flag==1){//if requirements stored as number of minimum credits required, must get credits from user group courses
		for(int i=0;i<userGroupA.size();i++){
			GroupA+=userGroupA[i].getCredits();

		}
		for(int i=0;i<userGroupB.size();i++){
			GroupB+=userGroupB[i].getCredits();
		}
		for(int i=0;i<userGroupC.size();i++){
			GroupC+=userGroupC[i].getCredits();
		}
		for(int i=0;i<userGroupD.size();i++){
			GroupD+=userGroupD[i].getCredits();
		}

		//compare credits
		//Needed credits -number of credits the user has
		//gives us the number of credits that the user still has to take.
		groupAleft=numgroupANeeded-GroupA;
		groupBleft=numgroupBNeeded-GroupB;
		groupCleft=numgroupCNeeded-GroupC;
		groupDleft=numgroupDNeeded-GroupD;

		/*
		float extraA;
		float extraB;
		float extraC;
		float extraD;

		if(groupAleft<=0){
			cout<<"user has required groupA courses"<<endl;
		}
		else if(groupBleft<=0){

		}
		 */

	}



}
vector<Course> User::getMissing(vector<Course> coreCourses){

	vector<Course> missingCourses;
	string comparing;
	int flag=0;//not found yet
	//determine first year core missing courses
		for (int i = 0; i < coreCourses.size(); i++) {
			flag=0;
			for (int j = 0; j < userCoursesObj.size(); j++) {
				comparing=coreCourses[i].getCourseID() + " = "+userCoursesObj[j].getCourseID();
				//cout<<comparing<<endl;

				if (coreCourses[i].getCourseID()== userCoursesObj[j].getCourseID() ) {
					flag=1;
				}
		}
			if(flag==0){
				missingCourses.push_back(coreCourses[i]);
			}
		}
return missingCourses;
}

//Accessor methods


vector<Course> User::getUserGroupA(){
	return userGroupA;
}
vector<Course> User::getUserGroupB(){
	return userGroupB;
}
vector<Course> User::getUserGroupC(){
	return userGroupC;
}
vector<Course> User::getUserGroupD(){
	return userGroupD;
}

vector<Course> User::getUserCourses(){
	return userCoursesObj;
}
vector<Course> User::getMissingFirCourse(){
	return missingFirCourse;
}
vector<Course> User::getMissingSecCourse(){
	return missingSecCourse;
}
vector<Course> User::getMissingThirCourse(){
	return missingThirCourse;
}
vector<Course> User::getMissingFourCourse(){
	return missingFourCourse;
}





