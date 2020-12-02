/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QPushButton *submitBtn;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser_16;
    QPushButton *noBtn;
    QTextEdit *textEdit;
    QPushButton *missingBtn;
    QTextBrowser *textBrowser_11;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_15;
    QTextBrowser *textBrowser_8;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QTextBrowser *textBrowser_14;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *yearIn;
    QComboBox *comboBox;
    QPushButton *yesBtn;
    QLabel *label_5;
    QLabel *label;
    QTextBrowser *textBrowser_13;
    QTextBrowser *textBrowser_12;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_7;
    QLineEdit *lineEdit_3;
    QTextBrowser *textBrowser_10;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QTextBrowser *textBrowser;
    QLabel *addCourseLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName(QString::fromUtf8("dashboard"));
        dashboard->resize(1258, 725);
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        submitBtn = new QPushButton(centralwidget);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));
        submitBtn->setGeometry(QRect(840, 110, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        submitBtn->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 90, 131, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(18);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid lightblue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));
        lineEdit->setReadOnly(true);
        textBrowser_16 = new QTextBrowser(centralwidget);
        textBrowser_16->setObjectName(QString::fromUtf8("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(670, 430, 71, 41));
        textBrowser_16->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        noBtn = new QPushButton(centralwidget);
        noBtn->setObjectName(QString::fromUtf8("noBtn"));
        noBtn->setGeometry(QRect(910, 610, 75, 23));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        noBtn->setFont(font2);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(50, 160, 761, 381));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(9);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8(" QTextEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
"	\n"
"	color: rgb(56, 136, 255);\n"
"\n"
" }"));
        missingBtn = new QPushButton(centralwidget);
        missingBtn->setObjectName(QString::fromUtf8("missingBtn"));
        missingBtn->setGeometry(QRect(840, 200, 231, 31));
        missingBtn->setFont(font2);
        textBrowser_11 = new QTextBrowser(centralwidget);
        textBrowser_11->setObjectName(QString::fromUtf8("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(440, 320, 101, 81));
        textBrowser_11->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(570, 230, 101, 81));
        textBrowser_4->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(200, 320, 101, 81));
        textBrowser_6->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"border: 0px solid lightblue;"));
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(570, 320, 101, 81));
        textBrowser_5->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(440, 230, 101, 81));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_15 = new QTextBrowser(centralwidget);
        textBrowser_15->setObjectName(QString::fromUtf8("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(680, 320, 101, 81));
        textBrowser_15->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(320, 230, 101, 81));
        textBrowser_8->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(470, 90, 131, 61));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid lightblue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));
        lineEdit_5->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 560, 151, 31));
        QFont font4;
        font4.setPointSize(12);
        label_4->setFont(font4);
        textBrowser_14 = new QTextBrowser(centralwidget);
        textBrowser_14->setObjectName(QString::fromUtf8("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(690, 230, 101, 81));
        textBrowser_14->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(670, 40, 141, 51));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Roboto"));
        font5.setPointSize(14);
        label_2->setFont(font5);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 560, 121, 31));
        label_3->setFont(font4);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 600, 121, 51));
        yearIn = new QLineEdit(centralwidget);
        yearIn->setObjectName(QString::fromUtf8("yearIn"));
        yearIn->setGeometry(QRect(620, 100, 111, 41));
        QFont font6;
        font6.setPointSize(11);
        yearIn->setFont(font6);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(210, 100, 201, 41));
        comboBox->setFont(font6);
        yesBtn = new QPushButton(centralwidget);
        yesBtn->setObjectName(QString::fromUtf8("yesBtn"));
        yesBtn->setGeometry(QRect(800, 610, 75, 23));
        yesBtn->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 560, 171, 31));
        label_5->setFont(font4);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 201, 71));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Roboto"));
        font7.setPointSize(16);
        label->setFont(font7);
        textBrowser_13 = new QTextBrowser(centralwidget);
        textBrowser_13->setObjectName(QString::fromUtf8("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(570, 430, 71, 41));
        textBrowser_13->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_12 = new QTextBrowser(centralwidget);
        textBrowser_12->setObjectName(QString::fromUtf8("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(440, 430, 71, 41));
        textBrowser_12->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_9 = new QTextBrowser(centralwidget);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(320, 320, 101, 81));
        textBrowser_9->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(200, 430, 71, 41));
        textBrowser_7->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 600, 151, 51));
        textBrowser_10 = new QTextBrowser(centralwidget);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(320, 430, 71, 41));
        textBrowser_10->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 590, 131, 61));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Roboto"));
        font8.setPointSize(12);
        pushButton_2->setFont(font8);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 200, 40);\n"
"  border-radius: 10px;"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(400, 600, 141, 51));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(200, 230, 101, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;\n"
""));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        addCourseLabel = new QLabel(centralwidget);
        addCourseLabel->setObjectName(QString::fromUtf8("addCourseLabel"));
        addCourseLabel->setGeometry(QRect(810, 570, 131, 21));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        font9.setWeight(75);
        addCourseLabel->setFont(font9);
        dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dashboard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1258, 21));
        dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(dashboard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dashboard->setStatusBar(statusbar);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "MainWindow", nullptr));
        submitBtn->setText(QCoreApplication::translate("dashboard", "Submit Degree and Year", nullptr));
        lineEdit->setText(QCoreApplication::translate("dashboard", "Degree : ", nullptr));
        textBrowser_16->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        noBtn->setText(QCoreApplication::translate("dashboard", "No", nullptr));
        textEdit->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt;\">	            1st Year             2nd Year           3rd Year            4th Year             5th year	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt;\">Fall	</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:"
                        "11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt;\">Winter</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p s"
                        "tyle=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:11pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:11pt;\">Spring/Summer</span></p></body></html>", nullptr));
        missingBtn->setText(QCoreApplication::translate("dashboard", "Calculate Missing Requirements", nullptr));
        textBrowser_11->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_15->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("dashboard", "Year:", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "Year (1/2/3/4/5)", nullptr));
        textBrowser_14->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("dashboard", "Course Code", nullptr));
        lineEdit_2->setText(QString());
        yesBtn->setText(QCoreApplication::translate("dashboard", "Yes", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "Semester (F/W/S)", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Your Dashboard", nullptr));
        textBrowser_13->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_12->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit_3->setText(QString());
        textBrowser_10->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dashboard", "Search Course", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("dashboard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        addCourseLabel->setText(QCoreApplication::translate("dashboard", "Add Course?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
