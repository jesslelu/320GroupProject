#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <screen2.h>
#include <dashintro.h>
#include <dashboard.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_learnMore_clicked();

    void on_startNow_clicked();

private:
    Ui::MainWindow *ui;
    Screen2 *screen2;
    DashBoard *dashboard1;

};
#endif // MAINWINDOW_H
