#include "dashboard.h"
#include "ui_dashboard.h"
#include "QDebug"
#include "QMessageBox"

DashBoard::DashBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DashBoard)
{
    ui->setupUi(this);

}

DashBoard::~DashBoard()
{
    delete ui;
}

void DashBoard::on_pushButton_clicked()
{
    coursewindow1 = new addCourseWindow();
    coursewindow1->show();
    QObject::connect(coursewindow1, SIGNAL(on_addBtn_Clicked()), this, SLOT(newClassAdded()));
}


void DashBoard::newClassAdded(){

   ui->lineEdit->setText("Correct");
}
