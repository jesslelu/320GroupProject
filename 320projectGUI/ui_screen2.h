/********************************************************************************
** Form generated from reading UI file 'screen2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREEN2_H
#define UI_SCREEN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Screen2
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *nextBtn;
    QComboBox *comboBox;

    void setupUi(QWidget *Screen2)
    {
        if (Screen2->objectName().isEmpty())
            Screen2->setObjectName(QString::fromUtf8("Screen2"));
        Screen2->resize(900, 600);
        label = new QLabel(Screen2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 50, 261, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(Screen2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 110, 411, 71));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        nextBtn = new QPushButton(Screen2);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(320, 350, 191, 41));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        nextBtn->setFont(font2);
        comboBox = new QComboBox(Screen2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(320, 190, 201, 41));

        retranslateUi(Screen2);

        QMetaObject::connectSlotsByName(Screen2);
    } // setupUi

    void retranslateUi(QWidget *Screen2)
    {
        Screen2->setWindowTitle(QCoreApplication::translate("Screen2", "Form", nullptr));
        label->setText(QCoreApplication::translate("Screen2", "Welcome user!", nullptr));
        label_3->setText(QCoreApplication::translate("Screen2", "What Discipline are you in?", nullptr));
        nextBtn->setText(QCoreApplication::translate("Screen2", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Screen2: public Ui_Screen2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREEN2_H
