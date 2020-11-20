#ifndef DASHINTRO_H
#define DASHINTRO_H

#include <QWidget>

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
    void on_backBtn_clicked();

private:
    Ui::dashIntro *ui;
};

#endif // DASHINTRO_H
