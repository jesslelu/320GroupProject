
// user constructor
UserConstructor (string progname){ //gets program name
    Requirement req(progname); //FIRST initializing requirements class
}

// stores user input in vector
void initialize() {
	string name; // stores name;
	vector<string> courses; // stores user input courses

	cout << "What's your name?.\n"; //when you say more than one word it bugs the program
	cin >> name;

	cout << "We will now ask you to input your courses. Type 'end' to finish.";

	for (int i = 0; i < MAX; i++) {
		string number;
		string input;
		number = std::to_string(i);
		// Reading User Input sales value Based on index
		cout << "\nPlease input course number " + number + ":\n";
		cin >> input;
		courses.push_back(input);
	}
}

void getRequirements() {
    vector<Course> firstYear = req.getFirstReq();
    vector<Course> secYear = req.getSecReq();
    vector<Course> thirYear = req.getThirReq();
    vector<Course> fourYear = req.getFourReq();
    vector<Course> groupA = req.getGroupA();
    vector<Course> groupB = req.getGroupB();
    vector<Course> elecReq = req.getElectiveReq();
    vector<Course> groupC = req.getGroupC();
    vector<Course> groupD = req.getGroupD(); 
}

vector<string> addCourse(vector<string> inputCourse) { // takes the input course and seperates it into its respective core/elective vector.
	bool flag = false;
	for (int i = 0; i < coreCourses.size(); i++){
		if (inputCourse == coreCourses[i]) {
			coreCourses.push_back(inputCourse);
			flag = true;
		}
	}
	if (flag == false) {
			electiveCourses.push_back(inputCourse);
	}
}

vector<string> coreCourses = getFirstReq().getCourseID();
coreCourses.push_back(getSecReq().getCourseID());
coreCourses.push_back(getThirReq().getCourseID());
coreCourses.push_back(getFourReq().getCourseID());

vector<string> returnMissingCoreCourses(vector<string> userCourses){ // // Checks user's courses and returns the core courses that the user is missing as a vector

	vector<string> missingCoreCourses;
														
	// these vectors will need to be declared in the header file, not here.
	vector<string> userCoreCourses;
	vector<string> userElectiveCourses;

	bool flag = false;

	for (int i = 0; i < userCourses.size(); i++) {
		for (int j = 0; j < userCourses.size(); i++) {
			if (coreCourses[i] == userCourses[j]) {
				userCoreCourses[i] = coreCourses[j];
				flag = true;
				break;
			}
		}

		if (flag == false) {
			missingCourses[i] = courses.push_back(coreCourses);
		}

		flag = false;
	}
	
	return missingCoreCourses;
}



