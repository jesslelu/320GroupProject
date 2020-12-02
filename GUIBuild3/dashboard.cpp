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
    ui->missingBtn->setVisible(false);
    ui->yesBtn->setVisible(false);
    ui->noBtn->setVisible(false);
    ui->addCourseLabel->setVisible(false);


        string name;
        vector<string> courses;
}

DashBoard::~DashBoard()
{
    delete ui;
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
        ui->missingBtn->setVisible(true);


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

void DashBoard::on_yesBtn_clicked()
{

}

void DashBoard::on_noBtn_clicked()
{

}

void DashBoard::on_missingBtn_clicked()
{

}
