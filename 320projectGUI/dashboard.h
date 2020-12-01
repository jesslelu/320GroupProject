#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <addcoursewindow.h>

namespace Ui {
class DashBoard;
}

class DashBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashBoard(QWidget *parent = nullptr);
    ~DashBoard();


private slots:

    void on_pushButton_2_clicked();

    void on_submitBtn_clicked();

private:

    Ui::DashBoard *ui;
    addCourseWindow *coursewindow1;
};

#endif // DASHBOARD_H
