#ifndef SCREEN2_H
#define SCREEN2_H

#include <QWidget>
#include <QString>
#include <dashintro.h>

namespace Ui {
class Screen2;
}

class Screen2 : public QWidget
{
    Q_OBJECT

public:
    explicit Screen2(QWidget *parent = nullptr);
    ~Screen2();
    QString getDiscipline();
private slots:
    void on_nextBtn_clicked();



private:
    QString discipline;
    Ui::Screen2 *ui;
    dashIntro *dashintro;
};

#endif // SCREEN2_H
