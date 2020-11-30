#include "addcoursewindow.h"
#include "ui_addcoursewindow.h"

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
