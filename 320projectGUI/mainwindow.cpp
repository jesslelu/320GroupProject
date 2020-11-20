#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "screen2.h"
#include<QString>
#include<QMessageBox>
#include<string>
#include<QShortcut>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->startNow,SIGNAL(clicked()),this,SLOT(btnaction()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_learnMore_clicked()
{
    QMessageBox::information(this, "About this application", "This application was created to help engineering students at Queen's University plan their degree.");
}

void MainWindow::on_startNow_clicked()
{
    screen2 = new Screen2();
    screen2->show();
    this->hide();

}
