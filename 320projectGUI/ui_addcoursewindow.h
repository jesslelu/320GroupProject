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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *courseIn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addCourseWindow)
    {
        if (addCourseWindow->objectName().isEmpty())
            addCourseWindow->setObjectName(QString::fromUtf8("addCourseWindow"));
        addCourseWindow->resize(494, 170);
        centralwidget = new QWidget(addCourseWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(330, 90, 75, 23));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 50, 427, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        courseIn = new QLineEdit(widget);
        courseIn->setObjectName(QString::fromUtf8("courseIn"));

        horizontalLayout->addWidget(courseIn);

        addCourseWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addCourseWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 494, 21));
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
    } // retranslateUi

};

namespace Ui {
    class addCourseWindow: public Ui_addCourseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOURSEWINDOW_H
