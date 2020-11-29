#ifndef DASHINTRO_H
#define DASHINTRO_H

#include <QWidget>
#include <dashboard.h>

namespace Ui {
class dashIntro;
}

class dashIntro : public QWidget
{
    Q_OBJECT

public:
    explicit dashIntro(QWidget *parent = nullptr);
    ~dashIntro();

private slots:
    void updateDis();

    void on_dashBtn_clicked();

private:
    Ui::dashIntro *ui;
    DashBoard *dashboard1;
};

#endif // DASHINTRO_H
