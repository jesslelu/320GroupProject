#include "screen2.h"
#include "ui_screen2.h"
#include "dashintro.h"

Screen2::Screen2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Screen2)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Computer Engineering");
    ui->comboBox->addItem("Electrical Engineering");
    ui->comboBox->addItem("Mechanical Engineering");
    ui->comboBox->addItem("Geological Engineering");
    ui->comboBox->addItem("Mining Engineering");
    ui->comboBox->addItem("Engineering Physics");
    ui->comboBox->addItem("Applied Math Engineering");
    ui->comboBox->addItem("Chemical Engineering");
    ui->comboBox->addItem("Engineering Chemistry");
    ui->comboBox->addItem("Civil Engineering");
    discipline = "";

}

Screen2::~Screen2()
{
    delete ui;
}

void Screen2::on_nextBtn_clicked()
{
    discipline = ui->comboBox->currentText();
    dashintro = new dashIntro();
   // connect(this, SIGNAL(getDiscipline(QString)), &dashintro, SLOT(updateDis()(QString)));
    dashintro->show();



    this->hide();
}

QString Screen2::getDiscipline(){
    return discipline;
}
