#ifndef DISSCREEN_H
#define DISSCREEN_H

#include <QMainWindow>

namespace Ui {
class disScreen;
}

class disScreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit disScreen(QWidget *parent = nullptr);
    ~disScreen();

private:
    Ui::disScreen *ui;
};

#endif // DISSCREEN_H
