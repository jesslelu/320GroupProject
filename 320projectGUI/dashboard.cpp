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

DashBoard::DashBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashBoard)
{
    ui->setupUi(this);
    //
}

DashBoard::~DashBoard()
{
    delete ui;
}
void DashBoard::on_pushButton_2_clicked()
{
    QMessageBox errorBox;
    bool errors = false;
    if(ui->lineEdit_2->text().toInt() != 1 && ui->lineEdit_2->text().toInt() != 2  && ui->lineEdit_2->text().toInt() != 3  && ui->lineEdit_2->text().toInt() != 4  && ui->lineEdit_2->text().toInt() != 5)
    {
        errorBox.setText("Please enter a valid year");
        errorBox.exec();
        errors= true;
    }

    if (ui->lineEdit_4->text()!= "F" && ui->lineEdit_4->text()!= "W" && ui->lineEdit_4->text()!= "S")
    {
       errorBox.setText("Please enter a valid semester");
       errorBox.exec();
       errors = true;
    }


    if (ui->lineEdit_2->text().toInt() == 1 && ui->lineEdit_4->text()== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser->setText(ui->textBrowser->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 1 && ui->lineEdit_4->text()== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_6->setText(ui->textBrowser_6->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 1 && ui->lineEdit_4->text()== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_7->setText(ui->textBrowser_7->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 2 && ui->lineEdit_4->text()== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_8->setText(ui->textBrowser_8->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 2 && ui->lineEdit_4->text()== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_9->setText(ui->textBrowser_9->toPlainText() + courseName);
        }
    }
    else if (ui->lineEdit_2->text().toInt() == 2 && ui->lineEdit_4->text()== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_10->setText(ui->textBrowser_10->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 3 && ui->lineEdit_4->text()== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_3->setText(ui->textBrowser_3->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 3 && ui->lineEdit_4->text()== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_11->setText(ui->textBrowser_11->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 3 && ui->lineEdit_4->text()== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_12->setText(ui->textBrowser_12->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 4 && ui->lineEdit_4->text()== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_4->setText(ui->textBrowser_4->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 4 && ui->lineEdit_4->text()== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_5->setText(ui->textBrowser_5->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 4 && ui->lineEdit_4->text()== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_13->setText(ui->textBrowser_13->toPlainText() + courseName);
        }
    }
    else if (ui->lineEdit_2->text().toInt() == 5 && ui->lineEdit_4->text()== "F" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_14->setText(ui->textBrowser_14->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 5 && ui->lineEdit_4->text()== "W" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_15->setText(ui->textBrowser_15->toPlainText() + courseName);
        }
    }

    else if (ui->lineEdit_2->text().toInt() == 5 && ui->lineEdit_4->text()== "S" )
    {
        //verify course instead of "true"
        if (true && !errors)
        {

            QString courseName = "\n " + ui->lineEdit_3->text();
            ui->textBrowser_16->setText(ui->textBrowser_16->toPlainText() + courseName);
        }
    }





       //errorBox.setText("Please enter a value for the first numerator");
       //errorBox.exec();
}
