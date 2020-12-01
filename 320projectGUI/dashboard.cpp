#include "dashboard.h"
#include "ui_dashboard.h"
#include "QDebug"
#include "QMessageBox"
#include "Course.h"
#include "readAPI.h"
#include "Requirement.h"
#include "User.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <string>

DashBoard::DashBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashBoard)
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
    ui->tableWidget->setVisible(false);
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

    ui->yesBtn->setVisible(false);
    ui->noBtn->setVisible(false);
    ui->addCourseLabel->setVisible(false);

    ui->textBrowser->setReadOnly(true);
    ui->textBrowser_10->setReadOnly(true);
    ui->textBrowser_11->setReadOnly(true);
    ui->textBrowser_12->setReadOnly(true);
    ui->textBrowser_13->setReadOnly(true);
    ui->textBrowser_14->setReadOnly(true);
    ui->textBrowser_15->setReadOnly(true);
    ui->textBrowser_16->setReadOnly(true);
    ui->textBrowser_3->setReadOnly(true);
    ui->textBrowser_4->setReadOnly(true);
    ui->textBrowser_5->setReadOnly(true);
    ui->textBrowser_6->setReadOnly(true);
    ui->textBrowser_7->setReadOnly(true);
    ui->textBrowser_8->setReadOnly(true);
    ui->textBrowser_9->setReadOnly(true);
    ui->textEdit->setReadOnly(true);

    //vector<string> courses;
    //User user1();
}

DashBoard::~DashBoard()
{
    delete ui;
}
void DashBoard::on_pushButton_2_clicked()
{
    ui->yesBtn->setVisible(true);
    ui->noBtn->setVisible(true);
    ui->addCourseLabel->setVisible(true);

    QMessageBox errorBox;
    bool errors = false;
    int year = ui->lineEdit_2->text().toInt();
    QString semester = ui->lineEdit_4->text();
    QString course = ui->lineEdit_3->text();
    QString disipline = ui->comboBox->currentText();

    std::string progName = disipline.toLocal8Bit().constData();
    std::string courseName = course.toLocal8Bit().constData();
    std::string sem = semester.toLocal8Bit().constData();
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
    User user(progName);

    Course newCourse(courseName);

    std::string name = newCourse.getName();
    QString title = QString::fromStdString(name);

    std::string description = newCourse.getDescription();
    QString des = "Description: " +QString::fromStdString(description) + "\n";

    float credits = newCourse.getCredits();
    QString cred = "Credits: " +QString::number(credits)+ "\n";

    std::string prereqs = newCourse.getPrereqs();
    QString pre = "Prerequisites: " +QString::fromStdString(prereqs)+ "\n";

    int desiredYear = newCourse.getDesiredYear();
    QString dYear = "Desired Year: " + QString::number(desiredYear)+ "\n";

    std::string courseID = newCourse.getCourseID();
    QString ID = "Course ID: " +QString::fromStdString(courseID)+ "\n";

    std::string term = newCourse.getTerm();
    QString semest = "Term: " +QString::fromStdString(term)+ "\n";

    vector<float> CEAB = newCourse.getCEAB();
    QString ceab = "CEAB Accreditation Units \n";
    QString mathCred = "Math Credits: " + QString::number(CEAB[0])+ "\n";
    QString bSciCred = "Basic Science Credits: " + QString::number(CEAB[1])+ "\n";
    QString CompStudCred = "Complimentary Studies Credits: " + QString::number(CEAB[2])+ "\n";
    QString EngSciCred = "Engineering Science Credits: " + QString::number(CEAB[3])+ "\n";
    QString engDesCred = "Engineering Design Credits: " + QString::number(CEAB[4])+ "\n";

    QString output = des + cred + pre + dYear + ID + semest + ceab + mathCred + bSciCred + CompStudCred + EngSciCred + engDesCred + "Hit the Yes button on the dashboard to add this course, otherwise hit the no button to continue.";
    QMessageBox::information(this, title, output );

}

void DashBoard::on_submitBtn_clicked()
{
    ui->textEdit->setVisible(true);
    ui->label_2->setVisible(true);
    ui->label_3->setVisible(true);
    ui->label_4->setVisible(true);
    ui->label_5->setVisible(true);
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(true);
    ui->tableWidget->setVisible(true);
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
            ui->textBrowser->setText(ui->textBrowser->toPlainText()+ QString::fromStdString(missingfirstyear[i].getCourseID()+ "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
        }
        for (int i = l/2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
        }

    } else if(year == 2){
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        vector<Course> missingSecyear = user1.getMissingSecCourse();
        int l = missingfirstyear.size();
        int l2 = missingSecyear.size();
        

        for (int i = 0; i < l/2; i++) {
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
        }
        for (int i = l/2; i < l; i++) {
                ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
                user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
        }
        for (int i = 0; i < l2/2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
        }
        for (int i = l2/2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 2, "W");
        }

    } else if(year == 3){
        vector<Course> missingfirstyear = user1.getMissingFirCourse();
        vector<Course> missingSecyear = user1.getMissingSecCourse();
        vector<Course> missingThirdyear = user1.getMissingThirCourse();

        int l = missingfirstyear.size();
        int l2 = missingSecyear.size();
        int l3 = missingThirdyear.size();


        for (int i = 0; i < l / 2; i++) {
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
        }
        for (int i = l / 2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
        }
        for (int i = 0; i < l2 / 2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
        }
        for (int i = l2 / 2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingSecyear[i].getCourseID(), 2, "W");
        }
        for (int i = 0; i < l3/2; i++) {
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
            user1.addCourse(missingThirdyear[i].getCourseID(), 3, "F");
        }
        for (int i = l3/2; i < l3; i++) {
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
            user1.addCourse(missingThirdyear[i].getCourseID(), 3, "W");
        }
    }
    else if (year == 4) {
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
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "F");
        }
        for (int i = l / 2; i < l; i++) {
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + QString::fromStdString(missingfirstyear[i].getCourseID() + "\n"));
            user1.addCourse(missingfirstyear[i].getCourseID(), 1, "W");
        }
        for (int i = 0; i < l2 / 2; i++) {
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingSecyear[i].getCourseID(), 2, "F");
        }
        for (int i = l2 / 2; i < l2; i++) {
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + QString::fromStdString(missingSecyear[i].getCourseID() + "\n"));
            user1.addCourse(missingSecyear[i].getCourseID(), 2, "W");
        }
        for (int i = 0; i < l3 / 2; i++) {
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
            user1.addCourse(missingThirdyear[i].getCourseID(), 3, "F");
        }
        for (int i = l3 / 2; i < l3; i++) {
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + QString::fromStdString(missingThirdyear[i].getCourseID() + "\n"));
            user1.addCourse(missingThirdyear[i].getCourseID(), 3, "W");
        }
        for (int i = 0; i < l4/2; i++) {
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
            user1.addCourse(missingFourthyear[i].getCourseID(), 4, "F");
        }
        for (int i = l4/2; i < l4; i++) {
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + QString::fromStdString(missingFourthyear[i].getCourseID() + "\n"));
            user1.addCourse(missingFourthyear[i].getCourseID(), 4, "W");
        }
    }
    QMessageBox::information(this, "Your Dashboard", "Mandatory courses up to your year have been added. Now, please add any electives you have taken.");
}

void DashBoard::on_yesBtn_clicked()
{
    QMessageBox errorBox;
    bool errors = false;
    int year = ui->lineEdit_2->text().toInt();
    QString semester = ui->lineEdit_4->text();
    QString course = ui->lineEdit_3->text();
    QString disipline = ui->comboBox->currentText();

    std::string progName = disipline.toLocal8Bit().constData();
    std::string courseName = course.toLocal8Bit().constData();
    std::string sem = semester.toLocal8Bit().constData();
    User user1(progName);
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
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_7->setText(ui->textBrowser_7->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + courseName);
        }
    }
    else if (year == 2 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_10->setText(ui->textBrowser_10->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_12->setText(ui->textBrowser_12->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_13->setText(ui->textBrowser_13->toPlainText() + courseName);
        }
    }
    else if (year == 5 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_14->setText(ui->textBrowser_14->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_15->setText(ui->textBrowser_15->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user1.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_16->setText(ui->textBrowser_16->toPlainText() + courseName);
        }
    }


    ui->yesBtn->setVisible(false);
    ui->noBtn->setVisible(false);
    ui->addCourseLabel->setVisible(false);

}

void DashBoard::on_noBtn_clicked()
{
    ui->yesBtn->setVisible(false);
    ui->noBtn->setVisible(false);
    ui->addCourseLabel->setVisible(false);
    ui->lineEdit_2->setText("");
    ui->lineEdit_4->setText("");
    ui->lineEdit_3->setText("");
}
