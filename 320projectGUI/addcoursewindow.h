#ifndef ADDCOURSEWINDOW_H
#define ADDCOURSEWINDOW_H

#include <QMainWindow>

namespace Ui {
class addCourseWindow;
}

class addCourseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit addCourseWindow(QWidget *parent = nullptr);
    ~addCourseWindow();

private slots:

public slots:
    void on_addBtn_clicked();

private:
    Ui::addCourseWindow *ui;
};

#endif // ADDCOURSEWINDOW_H
