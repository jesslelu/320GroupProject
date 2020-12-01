#include "addcoursewindow.h"
#include "ui_addcoursewindow.h"
#include "dashboard.h"
#include "QString"

addCourseWindow::addCourseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addCourseWindow)
{
    ui->setupUi(this);
}

addCourseWindow::~addCourseWindow()
{
    delete ui;
}


