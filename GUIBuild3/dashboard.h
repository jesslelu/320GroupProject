#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

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
    void on_submitBtn_clicked();

    void on_pushButton_2_clicked();

    void on_yesBtn_clicked();

    void on_noBtn_clicked();

    void on_missingBtn_clicked();

private:
    Ui::DashBoard *ui;
};

#endif // DASHBOARD_H
