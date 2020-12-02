#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include "User.h"
#include "Course.h"

#include "Requirement.h"


namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();
private slots:

    void on_pushButton_2_clicked();

    void on_submitBtn_clicked();

    void on_yesBtn_clicked();

    void on_noBtn_clicked();

    void on_missingBtn_clicked();


    //User user1;
private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
