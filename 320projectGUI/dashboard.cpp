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
    string name;
    vector<string> courses;
}

DashBoard::~DashBoard()
{
    delete ui;
}
void DashBoard::on_pushButton_2_clicked()
{

    QMessageBox errorBox;
    bool errors = false;
    int year = ui->lineEdit_2->text().toInt();
    QString semester = ui->lineEdit_4->text();
    QString course = ui->lineEdit_3->text();
    QString disipline = ui->comboBox->currentText();

    //std::string progName = disipline.toLocal8Bit().constData();
    std::string courseName = course.toLocal8Bit().constData();
    std::string sem = semester.toLocal8Bit().constData();

    string progName = "Civil-Engineering";
    User user(progName);
    
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
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + courseName);
        }
    }

    else if (year == 1 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_7->setText(ui->textBrowser_7->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + courseName);
        }
    }

    else if (year == 2 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + courseName);
        }
    }
    else if (year == 2 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_10->setText(ui->textBrowser_10->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + courseName);
        }
    }

    else if (year == 3 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_12->setText(ui->textBrowser_12->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + courseName);
        }
    }

    else if (year == 4 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_13->setText(ui->textBrowser_13->toPlainText() + courseName);
        }
    }
    else if (year == 5 && semester== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_14->setText(ui->textBrowser_14->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_15->setText(ui->textBrowser_15->toPlainText() + courseName);
        }
    }

    else if (year == 5 && semester== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {
            user.addCourse(courseName, year, sem);
            QString courseName = course + "\n ";
            ui->textBrowser_16->setText(ui->textBrowser_16->toPlainText() + courseName);
        }
    }
       //errorBox.setText("Please enter a value for the first numerator");
       //errorBox.exec();
}
