#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QString>
#include<QMessageBox>
#include<string>
#include<QShortcut>
#include <dashboard.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_learnMore_clicked()
{
    QMessageBox::information(this, "About this application", "This application was created by Team Hope for their CMPE 320 project "
                                                            "to help engineering students at Queen's University plan their degree.");
}

void MainWindow::on_startNow_clicked()
{

    dashboard1 = new dashboard();
    dashboard1->show();

    this->hide();
}
