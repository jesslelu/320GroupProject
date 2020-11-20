#include "disscreen.h"
#include "ui_disscreen.h"

disScreen::disScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::disScreen)
{
    ui->setupUi(this);
}

disScreen::~disScreen()
{
    delete ui;
}
