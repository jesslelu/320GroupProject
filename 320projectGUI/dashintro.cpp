#include "dashintro.h"
#include "ui_dashintro.h"
#include "screen2.h"
#include "dashboard.h"

dashIntro::dashIntro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashIntro)
{
    ui->setupUi(this);
  //  ui->disOut->setReadOnly(true);
}

dashIntro::~dashIntro()
{
    delete ui;
}

void dashIntro::updateDis(){
 //   ui->disOut->setText(getDiscipline);
}

void dashIntro::on_dashBtn_clicked()
{
   // int year = (ui->dashBtn->text().toInt());
    dashboard1 = new DashBoard();
    dashboard1->show();

    this->hide();

}
