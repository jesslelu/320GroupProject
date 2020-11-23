#include "dashintro.h"
#include "ui_dashintro.h"
#include "screen2.h"

dashIntro::dashIntro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dashIntro)
{
    ui->setupUi(this);

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
    int year = (ui->dashBtn->text().toInt());

}
