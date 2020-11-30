/********************************************************************************
** Form generated from reading UI file 'dashintro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHINTRO_H
#define UI_DASHINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashIntro
{
public:
    QLabel *label;
    QLineEdit *yearIn;
    QPushButton *dashBtn;

    void setupUi(QWidget *dashIntro)
    {
        if (dashIntro->objectName().isEmpty())
            dashIntro->setObjectName(QString::fromUtf8("dashIntro"));
        dashIntro->resize(690, 285);
        label = new QLabel(dashIntro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 0, 391, 101));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        yearIn = new QLineEdit(dashIntro);
        yearIn->setObjectName(QString::fromUtf8("yearIn"));
        yearIn->setGeometry(QRect(270, 120, 113, 20));
        dashBtn = new QPushButton(dashIntro);
        dashBtn->setObjectName(QString::fromUtf8("dashBtn"));
        dashBtn->setGeometry(QRect(260, 180, 131, 51));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        dashBtn->setFont(font1);

        retranslateUi(dashIntro);

        QMetaObject::connectSlotsByName(dashIntro);
    } // setupUi

    void retranslateUi(QWidget *dashIntro)
    {
        dashIntro->setWindowTitle(QCoreApplication::translate("dashIntro", "Form", nullptr));
        label->setText(QCoreApplication::translate("dashIntro", "What year are you in?", nullptr));
        dashBtn->setText(QCoreApplication::translate("dashIntro", "Go to DashBoard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashIntro: public Ui_dashIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHINTRO_H
