//#include "dashboard.h"
//#include "ui_dashboard.h"
//#include "QDebug"
//#include "QMessageBox"
//#include "Course.h"

//#include "Requirement.h"
//#include "User.h"
//#include <QFile>
//#include <QTextStream>
//#include <QMessageBox>
//#include <iostream>

//dashboard::dashboard(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::dashboard)
//{

//    ui->setupUi(this);
//    ui->comboBox->addItem("Computer-Engineering");
//    ui->comboBox->addItem("Electrical-Engineering");
//    ui->comboBox->addItem("Mechanical-Engineering");
//    ui->comboBox->addItem("Geological-Engineering");
//    ui->comboBox->addItem("Mining-Engineering");
//    ui->comboBox->addItem("Engineering-Physics");
//    ui->comboBox->addItem("Mathematics-Engineering");
//    ui->comboBox->addItem("Chemical-Engineering");
//    ui->comboBox->addItem("Engineering-Chemistry");
//    ui->comboBox->addItem("Civil-Engineering");

//    ui->textEdit->setVisible(false);
//    ui->label_2->setVisible(false);
//    ui->label_3->setVisible(false);
//    ui->label_4->setVisible(false);
//    ui->label_5->setVisible(false);
//    ui->lineEdit_2->setVisible(false);
//    ui->lineEdit_3->setVisible(false);
//    ui->lineEdit_4->setVisible(false);
//    ui->textBrowser->setVisible(false);
//    ui->textBrowser_10->setVisible(false);
//    ui->textBrowser_11->setVisible(false);
//    ui->textBrowser_12->setVisible(false);
//    ui->textBrowser_13->setVisible(false);
//    ui->textBrowser_14->setVisible(false);
//    ui->textBrowser_15->setVisible(false);
//    ui->textBrowser_16->setVisible(false);
//    ui->textBrowser_3->setVisible(false);
//    ui->textBrowser_4->setVisible(false);
//    ui->textBrowser_5->setVisible(false);
//    ui->textBrowser_6->setVisible(false);
//    ui->textBrowser_7->setVisible(false);
//    ui->textBrowser_8->setVisible(false);
//    ui->textBrowser_9->setVisible(false);
//    ui->pushButton_2->setVisible(false);

//    ui->yesBtn->setVisible(false);
//    ui->noBtn->setVisible(false);
//    ui->addCourseLabel->setVisible(false);
//    ui->missingBtn->setVisible(false);
//    ui->textBrowser->setReadOnly(true);
//    ui->textBrowser_10->setReadOnly(true);
//    ui->textBrowser_11->setReadOnly(true);
//    ui->textBrowser_12->setReadOnly(true);
//    ui->textBrowser_13->setReadOnly(true);
//    ui->textBrowser_14->setReadOnly(true);
//    ui->textBrowser_15->setReadOnly(true);
//    ui->textBrowser_16->setReadOnly(true);
//    ui->textBrowser_3->setReadOnly(true);
//    ui->textBrowser_4->setReadOnly(true);
//    ui->textBrowser_5->setReadOnly(true);
//    ui->textBrowser_6->setReadOnly(true);
//    ui->textBrowser_7->setReadOnly(true);
//    ui->textBrowser_8->setReadOnly(true);
//    ui->textBrowser_9->setReadOnly(true);
//    ui->textEdit->setReadOnly(true);
//}

//dashboard::~dashboard()
//{
//    delete ui;
//}

//void dashboard::on_pushButton_2_clicked()
//{
//    ui->yesBtn->setVisible(true);
//    ui->noBtn->setVisible(true);
//    ui->addCourseLabel->setVisible(true);

//    QMessageBox errorBox;
//    bool errors = false;
//    int year = ui->lineEdit_2->text().toInt();
//    QString semester = ui->lineEdit_4->text();
//    QString course = ui->lineEdit_3->text();
//    QString disipline = ui->comboBox->currentText();

//    std::string progName = disipline.toLocal8Bit().constData();
//    std::string courseName = course.toLocal8Bit().constData();
//    std::string sem = semester.toLocal8Bit().constData();
//    if(year != 1 && year != 2  && year != 3  && year != 4  && year != 5)
//    {
//        errorBox.setText("Please enter a valid year");
//        errorBox.exec();
//        errors= true;
//    }

//    if (semester!= "F" && semester!= "W" && semester!= "S")
//    {
//       errorBox.setText("Please enter a valid semester");
//       errorBox.exec();
//       errors = true;
//    }
//    //User user(progName);

//    Course newCourse(courseName);

//    std::string name = newCourse.getName();
//    QString title = QString::fromStdString(name);

//    std::string description = newCourse.getDescription();
//    QString des = "Description: " +QString::fromStdString(description) + "\n";

//    float credits = newCourse.getCredits();
//    QString cred = "Credits: " +QString::number(credits)+ "\n";

//    std::string prereqs = newCourse.getPrereqs();
//    QString pre = "Prerequisites: " +QString::fromStdString(prereqs)+ "\n";

//    int desiredYear = newCourse.getDesiredYear();
//    QString dYear = "Desired Year: " + QString::number(desiredYear)+ "\n";

//    std::string courseID = newCourse.getCourseID();
//    QString ID = "Course ID: " +QString::fromStdString(courseID)+ "\n";

//    std::string term = newCourse.getTerm();
//    QString semest = "Term: " +QString::fromStdString(term)+ "\n";

//    vector<float> CEAB = newCourse.getCEAB();
//    QString ceab = "CEAB Accreditation Units \n";
//    QString mathCred = "Math Credits: " + QString::number(CEAB[0])+ "\n";
//    QString bSciCred = "Basic Science Credits: " + QString::number(CEAB[1])+ "\n";
//    QString CompStudCred = "Complimentary Studies Credits: " + QString::number(CEAB[2])+ "\n";
//    QString EngSciCred = "Engineering Science Credits: " + QString::number(CEAB[3])+ "\n";
//    QString engDesCred = "Engineering Design Credits: " + QString::number(CEAB[4])+ "\n";

//    QString output = des + cred + pre + dYear + ID + semest + "\n" + ceab + mathCred + bSciCred + CompStudCred + EngSciCred + engDesCred + "\n" + "Hit the Yes button on the dashboard to add this course, otherwise hit the no button to continue.";
//    QMessageBox::information(this, title, output );

//}

//void dashboard::on_submitBtn_clicked()
//{
//    ui->textEdit->setVisible(true);
//    ui->label_2->setVisible(true);
//    ui->label_3->setVisible(true);
//    ui->label_4->setVisible(true);
//    ui->label_5->setVisible(true);
//    ui->lineEdit_2->setVisible(true);
//    ui->lineEdit_3->setVisible(true);
//    ui->lineEdit_4->setVisible(true);
//    ui->textBrowser->setVisible(true);
//    ui->textBrowser_10->setVisible(true);
//    ui->textBrowser_11->setVisible(true);
//    ui->textBrowser_12->setVisible(true);
//    ui->textBrowser_13->setVisible(true);
//    ui->textBrowser_14->setVisible(true);
//    ui->textBrowser_15->setVisible(true);
//    ui->textBrowser_16->setVisible(true);
//    ui->textBrowser_3->setVisible(true);
//    ui->textBrowser_4->setVisible(true);
//    ui->textBrowser_5->setVisible(true);
//    ui->textBrowser_6->setVisible(true);
//    ui->textBrowser_7->setVisible(true);
//    ui->textBrowser_8->setVisible(true);
//    ui->textBrowser_9->setVisible(true);
//    ui->pushButton_2->setVisible(true);
//    ui->missingBtn->setVisible(true);

//    QString disipline = ui->comboBox->currentText();
//    int year = ui->yearIn->text().toInt();
//    std::string progName = disipline.toLocal8Bit().constData();

//    User user1(progName);


//    if(year == 1){
//        vector<Course> missingfirstyear = user1.getMissingFirCourse();
//        int l = missingfirstyear.size();
//        for (int i = 0; i < l/2; i++) {
//            ui->textBrowser->setText(ui->textBrowser->toPlainText()+ QString::fromStdString(missingfirstyear[i].getCourseID()+ "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
//        }
//        for (int i = l/2; i < l; i++) {
//            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
//        }

//    } else if(year == 2){
//        vector<Course> missingfirstyear = user1.getMissingFirCourse();
//        vector<Course> missingSecyear = user1.getMissingSecCourse();
//        int l = missingfirstyear.size();
//        int l2 = missingSecyear.size();


//        for (int i = 0; i < l/2; i++) {
//            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
//        }
//        for (int i = l/2; i < l; i++) {
//                ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//                //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
//        }
//        for (int i = 0; i < l2/2; i++) {
//            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
//        }
//        for (int i = l2/2; i < l2; i++) {
//            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 2, "W");
//        }

//    } else if(year == 3){
//        vector<Course> missingfirstyear = user1.getMissingFirCourse();
//        vector<Course> missingSecyear = user1.getMissingSecCourse();
//        vector<Course> missingThirdyear = user1.getMissingThirCourse();

//        int l = missingfirstyear.size();
//        int l2 = missingSecyear.size();
//        int l3 = missingThirdyear.size();


//        for (int i = 0; i < l / 2; i++) {
//            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
//        }
//        for (int i = l / 2; i < l; i++) {
//            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
//        }
//        for (int i = 0; i < l2 / 2; i++) {
//            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
//        }
//        for (int i = l2 / 2; i < l2; i++) {
//            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingSecyear[i].getCourseID(), 2, "W");
//        }
//        for (int i = 0; i < l3/2; i++) {
//            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingThirdyear[i].getCourseID(), 3, "F");
//        }
//        for (int i = l3/2; i < l3; i++) {
//            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingThirdyear[i].getCourseID(), 3, "W");
//        }
//    }
//    else if (year == 4) {
//        vector<Course> missingfirstyear = user1.getMissingFirCourse();
//        vector<Course> missingSecyear = user1.getMissingSecCourse();
//        vector<Course> missingThirdyear = user1.getMissingThirCourse();
//        vector<Course> missingFourthyear = user1.getMissingFourCourse();
//        int l = missingfirstyear.size();
//        int l2 = missingSecyear.size();
//        int l3 = missingThirdyear.size();
//        int l4 = missingFourthyear.size();


//        for (int i = 0; i < l / 2; i++) {
//            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
//        }
//        for (int i = l / 2; i < l; i++) {
//            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
//        }
//        for (int i = 0; i < l2 / 2; i++) {
//            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
//        }
//        for (int i = l2 / 2; i < l2; i++) {
//            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingSecyear[i].getCourseID(), 2, "W");
//        }
//        for (int i = 0; i < l3 / 2; i++) {
//            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingThirdyear[i].getCourseID(), 3, "F");
//        }
//        for (int i = l3 / 2; i < l3; i++) {
//            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingThirdyear[i].getCourseID(), 3, "W");
//        }
//        for (int i = 0; i < l4/2; i++) {
//            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingFourthyear[i].getCourseID(), 4, "F");
//        }
//        for (int i = l4/2; i < l4; i++) {
//            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
//            //user1.addCourse(missingFourthyear[i].getCourseID(), 4, "W");
//        }
//    }
//    QMessageBox::information(this, "Your Dashboard", "Mandatory courses up to your year have been added. Now, please add any electives you have taken.");
//}

//void dashboard::on_yesBtn_clicked()
//{
//    QMessageBox errorBox;
//    bool errors = false;
//    int year = ui->lineEdit_2->text().toInt();
//    QString semester = ui->lineEdit_4->text();
//    QString course = ui->lineEdit_3->text();
//    QString disipline = ui->comboBox->currentText();

//    std::string progName = disipline.toLocal8Bit().constData();
//    std::string courseName = course.toLocal8Bit().constData();
//    std::string sem = semester.toLocal8Bit().constData();
//    User user(progName);


//    if(year != 1 && year != 2  && year != 3  && year != 4  && year != 5)
//    {
//        errorBox.setText("Please enter a valid year");
//        errorBox.exec();
//        errors= true;
//    }

//    if (semester!= "F" && semester!= "W" && semester!= "S")
//    {
//       errorBox.setText("Please enter a valid semester");
//       errorBox.exec();
//       errors = true;
//    }

//    if (year == 1 && semester== "F" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser->setText(ui->textBrowser->toPlainText() + courseName);
//        }
//    }

//    else if (year == 1 && semester== "W" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + courseName);
//        }
//    }

//    else if (year == 1 && semester== "S" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_7->setText(ui->textBrowser_7->toPlainText() + courseName);
//        }
//    }

//    else if (year == 2 && semester== "F" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + courseName);
//        }
//    }

//    else if (year == 2 && semester== "W" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + courseName);
//        }
//    }
//    else if (year == 2 && semester== "S" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_10->setText(ui->textBrowser_10->toPlainText() + courseName);
//        }
//    }

//    else if (year == 3 && semester== "F" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + courseName);
//        }
//    }

//    else if (year == 3 && semester== "W" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + courseName);
//        }
//    }

//    else if (year == 3 && semester== "S" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_12->setText(ui->textBrowser_12->toPlainText() + courseName);
//        }
//    }

//    else if (year == 4 && semester== "F" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + courseName);
//        }
//    }

//    else if (year == 4 && semester== "W" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + courseName);
//        }
//    }

//    else if (year == 4 && semester== "S" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_13->setText(ui->textBrowser_13->toPlainText() + courseName);
//        }
//    }
//    else if (year == 5 && semester== "F" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_14->setText(ui->textBrowser_14->toPlainText() + courseName);
//        }
//    }

//    else if (year == 5 && semester== "W" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_15->setText(ui->textBrowser_15->toPlainText() + courseName);
//        }
//    }

//    else if (year == 5 && semester== "S" )
//    {
//        //verify course instead of "true"
//        if (true && !errors)
//        {
//            user.addCourse(courseName, year, sem);
//            QString courseName = course + "\n ";
//            ui->textBrowser_16->setText(ui->textBrowser_16->toPlainText() + courseName);
//        }
//    }


//    ui->yesBtn->setVisible(false);
//    ui->noBtn->setVisible(false);
//    ui->addCourseLabel->setVisible(false);

//}

//void dashboard::on_noBtn_clicked()
//{
//    ui->yesBtn->setVisible(false);
//    ui->noBtn->setVisible(false);
//    ui->addCourseLabel->setVisible(false);
//    ui->lineEdit_2->setText("");
//    ui->lineEdit_4->setText("");
//    ui->lineEdit_3->setText("");
//}


//void dashboard::on_missingBtn_clicked()
//{
//    QMessageBox missingCoursesBox;
//    QString disipline = ui->comboBox->currentText();
//    std::string progName = disipline.toLocal8Bit().constData();
//    User user2(progName);
//    vector<Course> missingFirstYear = user2.getMissingFirCourse();
//    vector<Course> missingSecYear = user2.getMissingSecCourse();
//    vector<Course> missingThirYear = user2.getMissingThirCourse();
//    vector<Course> missingFourthYear = user2.getMissingFourCourse();

//    int l1 = missingFirstYear.size();
//    int l2 = missingSecYear.size();
//    int l3 = missingThirYear.size();
//    int l4 = missingFourthYear.size();

//    int totalMissingCore = l1+l2+l3+l4;

//    QString missingInfo = "Here are the" + QString::number(totalMissingCore)+ " courses you're missing:\n";

//    if (l1 > 0){
//        missingInfo + "First year courses:\n";
//        for(int i =0; i<l1;i++){
//            missingInfo = missingInfo + QString::fromStdString(missingFirstYear[i].getCourseID() + " ");
//        }
//    }
//    else{
//        missingInfo = missingInfo + "You got all your first year courses!\n";
//    }

//    if (l2 > 0){
//        missingInfo + "Second year courses:\n";
//        for(int i =0; i<l2;i++){
//            missingInfo = missingInfo + QString::fromStdString(missingSecYear[i].getCourseID() + " ");
//        }
//    }
//    else{
//        missingInfo = missingInfo + "You got all your second year courses!\n";
//    }

//    if (l3>0){
//        missingInfo + "Third year courses:\n";
//        for(int i =0; i<l3; i++){
//            missingInfo = missingInfo + QString::fromStdString(missingThirYear[i].getCourseID() + " ");
//        }
//    }
//    else{
//        missingInfo = missingInfo + "You got all your third year courses!\n";
//    }

//    if (l4>0){
//        missingInfo + "Second year courses:\n";
//        for(int i =0; i<l4;i++)
//        {
//            missingInfo = missingInfo + QString::fromStdString(missingFourthYear[i].getCourseID() + " ");
//        }
//    }
//    else{
//        missingInfo = missingInfo + "You got all your fourth year courses!\n";
//    }

//    missingInfo = missingInfo + "\n You are missing" + QString::number(user2.compCheck()) + "complementary studies";

//    Requirement req(progName);

//    vector<Course> groupA = req.getGroupA();

//    vector<Course> groupB = req.getGroupB();

//    vector<Course> groupC = req.getGroupC();

//    vector<Course> groupD = req.getGroupD();

//    int groupAL = groupA.size();

//    int groupBL = groupB.size();

//    int groupCL = groupC.size();

//    int groupDL = groupD.size();







//     missingInfo = missingInfo + "You are missing " + QString::number(user2.getNumGroupANeeded()) + "Group A courses. Here are your options:\n";

//        for (int i = 0; i < groupAL; i++){

//             missingInfo = missingInfo + QString::fromStdString(groupA[i].getName()+"\n");

//        }



//        missingInfo = missingInfo + "You are missing " + QString::number(user2.getNumGroupBNeeded()) + "Group B courses. Here are your options:\n";

//        for (int i = 0; i < groupBL; i++)

//        {

//            missingInfo = missingInfo + QString::fromStdString(groupB[i].getName() + "\n");

//        }



//            missingInfo = missingInfo + "You are missing " + QString::number(user2.getNumGroupCNeeded()) + "Group C courses. Here are your options:\n";



//            for (int i = 0; i < groupCL; i++)

//            {

//                missingInfo = missingInfo + QString::fromStdString(groupC[i].getName() + "\n");

//            }



//            missingInfo = missingInfo + "You are missing " + QString::number(user2.getNumGroupDNeeded()) + "Group D courses. Here are your options:\n";



//            for (int i = 0; i < groupDL; i++)

//            {

//                missingInfo = missingInfo + QString::fromStdString(groupD[i].getName() + "\n");

//            }
//    missingCoursesBox.setText(missingInfo);
//    missingCoursesBox.exec();


//}
#include "dashboard.h"
#include "ui_dashboard.h"
#include "QDebug"
#include "QMessageBox"
#include "Course.h"

#include "Requirement.h"
#include "User.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>

dashboard::dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Computer-Engineering");
    ui->comboBox->addItem("Electrical-Engineering");
    ui->comboBox->addItem("Mechanical-Engineering");
    ui->comboBox->addItem("Geological-Engineering");
    ui->comboBox->addItem("Mining-Engineering");
    ui->comboBox->addItem("Engineering-Physics");
    ui->comboBox->addItem("Mathematics-Engineering");
    ui->comboBox->addItem("Chemical-Engineering");
    ui->comboBox->addItem("Engineering-Chemistry");
    ui->comboBox->addItem("Civil-Engineering");

    ui->textEdit->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_4->setVisible(false);

    ui->textBrowser->setVisible(false);
    ui->textBrowser_10->setVisible(false);
    ui->textBrowser_11->setVisible(false);
    ui->textBrowser_12->setVisible(false);
    ui->textBrowser_13->setVisible(false);
    ui->textBrowser_14->setVisible(false);
    ui->textBrowser_15->setVisible(false);
    ui->textBrowser_16->setVisible(false);
    ui->textBrowser_3->setVisible(false);
    ui->textBrowser_4->setVisible(false);
    ui->textBrowser_5->setVisible(false);
    ui->textBrowser_6->setVisible(false);
    ui->textBrowser_7->setVisible(false);
    ui->textBrowser_8->setVisible(false);
    ui->textBrowser_9->setVisible(false);
    ui->pushButton_2->setVisible(false);


    string name;
    vector<string> courses;
}

dashboard::~dashboard()
{
    delete ui;
}
void dashboard::on_pushButton_2_clicked()
{

    QMessageBox errorBox;
    bool errors = false;
    int year = ui->lineEdit_2->text().toInt();
    QString semester = ui->lineEdit_4->text();
    QString course = ui->lineEdit_3->text();
    QString disipline = ui->comboBox->currentText();

   // std::string progName = disipline.toLocal8Bit().constData();
    std::string courseName = course.toLocal8Bit().constData();
    std::string sem = semester.toLocal8Bit().constData();


    //string progName = "Civil-Engineering";
    //User user(progName);




    //string progName = "Civil-Engineering";
    //User user(progName);


    //vector<Course>userCourseList = user.getUserCourses();


    if(year != 1 && year != 2  && year != 3  && year != 4  && year != 5)
    {
        errorBox.setText("Please enter a valid year");
        errorBox.exec();
        errors= true;
    }

    if (semester!= "F" && semester!= "W" && semester!= "S")
    {
       errorBox.setText("Please enter a valid semester");
       errorBox.exec();
       errors = true;
    }


    if (year == 1 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_7->setText(ui->textBrowser_7->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + courseName);
        }
    }
    else if (year == 2 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_10->setText(ui->textBrowser_10->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_12->setText(ui->textBrowser_12->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_13->setText(ui->textBrowser_13->toPlainText() + courseName);
        }
    }
    else if (year == 5 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_14->setText(ui->textBrowser_14->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_15->setText(ui->textBrowser_15->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            //user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_16->setText(ui->textBrowser_16->toPlainText() + courseName);
        }
    }
       //errorBox.setText("Please enter a value for the first numerator");
       //errorBox.exec();
}

void dashboard::on_submitBtn_clicked()
{
    ui->textEdit->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(true);

    ui->textBrowser->setVisible(true);
    ui->textBrowser_10->setVisible(true);
    ui->textBrowser_11->setVisible(true);
    ui->textBrowser_12->setVisible(true);
    ui->textBrowser_13->setVisible(true);
    ui->textBrowser_14->setVisible(true);
    ui->textBrowser_15->setVisible(true);
    ui->textBrowser_16->setVisible(true);
    ui->textBrowser_3->setVisible(true);
    ui->textBrowser_4->setVisible(true);
    ui->textBrowser_5->setVisible(true);
    ui->textBrowser_6->setVisible(true);
    ui->textBrowser_7->setVisible(true);
    ui->textBrowser_8->setVisible(true);
    ui->textBrowser_9->setVisible(true);
    ui->pushButton_2->setVisible(true);

    QString disipline = ui->comboBox->currentText();
    int year = ui->yearIn->text().toInt();
    std::string progName = disipline.toLocal8Bit().constData();
    User user1(progName);


    if(year == 1){
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        int l = missingfirstyear.size();
        for (int i = 0; i < l/2; i++) {
            //ui->textBrowser->setText(QString::fromStdString(missingfirstyear[i].getCourseID()));
            ui->textBrowser->setText(ui->textBrowser->toPlainText()+ QString::fromStdString(missingfirstyear[i].getCourseID()+ "\n"));
        }
        for (int i = l/2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }

    } if(year == 2){
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        vector<Course> missingSecyear = user1.getMissingSecCourse();
        int l = missingfirstyear.size();
        int l2 = missingSecyear.size();


        for (int i = 0; i < l/2; i++) {
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = l/2; i < l; i++) {
                ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l2/2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }
        for (int i = l2/2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }

    } if(year == 3){
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        vector<Course> missingSecyear = user1.getMissingSecCourse();
        vector<Course> missingThirdyear = user1.getMissingThirCourse();

        int l = missingfirstyear.size();
        int l2 = missingSecyear.size();
        int l3 = missingThirdyear.size();


        for (int i = 0; i < l / 2; i++) {
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = l / 2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l2 / 2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }
        for (int i = l2 / 2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l3/2; i++) {
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
        }
        for (int i = l3/2; i < l3; i++) {
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
        }
    }
    if (year == 4) {
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        vector<Course> missingSecyear = user1.getMissingSecCourse();
        vector<Course> missingThirdyear = user1.getMissingThirCourse();
        vector<Course> missingFourthyear = user1.getMissingFourCourse();
        int l = missingfirstyear.size();
        int l2 = missingSecyear.size();
        int l3 = missingThirdyear.size();
        int l4 = missingFourthyear.size();


        for (int i = 0; i < l / 2; i++) {
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = l / 2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l2 / 2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }
        for (int i = l2 / 2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l3 / 2; i++) {
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
        }
        for (int i = l3 / 2; i < l3; i++) {
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
        }
        for (int i = 0; i < l4/2; i++) {
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
        }
        for (int i = l4/2; i < l4; i++) {
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
        }
    }
    QMessageBox::information(this, "Your Dashboard", "Mandatory courses up to your year have been added. Now, please add any electives you have taken.");
}
