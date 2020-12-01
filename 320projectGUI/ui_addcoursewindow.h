/********************************************************************************
** Form generated from reading UI file 'addcoursewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOURSEWINDOW_H
#define UI_ADDCOURSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addCourseWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addBtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *courseIn;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *yeaIn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addCourseWindow)
    {
        if (addCourseWindow->objectName().isEmpty())
            addCourseWindow->setObjectName(QString::fromUtf8("addCourseWindow"));
        addCourseWindow->resize(527, 244);
        centralwidget = new QWidget(addCourseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(340, 160, 75, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 427, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        courseIn = new QLineEdit(layoutWidget);
        courseIn->setObjectName(QString::fromUtf8("courseIn"));

        horizontalLayout->addWidget(courseIn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 70, 291, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        yeaIn = new QLineEdit(layoutWidget1);
        yeaIn->setObjectName(QString::fromUtf8("yeaIn"));

        horizontalLayout_2->addWidget(yeaIn);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 120, 191, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        addCourseWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addCourseWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 527, 21));
        addCourseWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(addCourseWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        addCourseWindow->setStatusBar(statusbar);

        retranslateUi(addCourseWindow);

        QMetaObject::connectSlotsByName(addCourseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *addCourseWindow)
    {
        addCourseWindow->setWindowTitle(QCoreApplication::translate("addCourseWindow", "MainWindow", nullptr));
        addBtn->setText(QCoreApplication::translate("addCourseWindow", "Add", nullptr));
        label->setText(QCoreApplication::translate("addCourseWindow", "Type the course code for the course you want to add here:", nullptr));
        label_2->setText(QCoreApplication::translate("addCourseWindow", "What year do you want to take it: ", nullptr));
        label_3->setText(QCoreApplication::translate("addCourseWindow", "What semester: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addCourseWindow: public Ui_addCourseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSEWINDOW_H
