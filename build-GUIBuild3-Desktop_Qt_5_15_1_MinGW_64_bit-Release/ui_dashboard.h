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

class Ui_DashBoard
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser_16;
    QTextBrowser *textBrowser_13;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_3;
    QPushButton *yesBtn;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QTextBrowser *textBrowser_14;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser;
    QLineEdit *yearIn;
    QTextBrowser *textBrowser_11;
    QTextBrowser *textBrowser_12;
    QTextBrowser *textBrowser_9;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QTextBrowser *textBrowser_3;
    QPushButton *submitBtn;
    QLabel *label;
    QPushButton *noBtn;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *missingBtn;
    QLabel *label_5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_15;
    QTextBrowser *textBrowser_7;
    QLineEdit *lineEdit_2;
    QLabel *addCourseLabel;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser_5;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DashBoard)
    {
        if (DashBoard->objectName().isEmpty())
            DashBoard->setObjectName(QString::fromUtf8("DashBoard"));
        DashBoard->resize(1231, 716);
        centralwidget = new QWidget(DashBoard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser_16 = new QTextBrowser(centralwidget);
        textBrowser_16->setObjectName(QString::fromUtf8("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(660, 450, 71, 41));
        textBrowser_16->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_13 = new QTextBrowser(centralwidget);
        textBrowser_13->setObjectName(QString::fromUtf8("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(560, 450, 71, 41));
        textBrowser_13->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 610, 131, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(12);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 200, 40);\n"
"  border-radius: 10px;"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 620, 151, 51));
        yesBtn = new QPushButton(centralwidget);
        yesBtn->setObjectName(QString::fromUtf8("yesBtn"));
        yesBtn->setGeometry(QRect(790, 630, 75, 23));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        yesBtn->setFont(font1);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(460, 110, 131, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(18);
        lineEdit_5->setFont(font2);
        lineEdit_5->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid lightblue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));
        lineEdit_5->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 580, 121, 31));
        QFont font3;
        font3.setPointSize(12);
        label_3->setFont(font3);
        textBrowser_14 = new QTextBrowser(centralwidget);
        textBrowser_14->setObjectName(QString::fromUtf8("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(680, 250, 101, 81));
        textBrowser_14->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(40, 180, 761, 381));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto"));
        font4.setPointSize(9);
        textEdit->setFont(font4);
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
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 250, 101, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;\n"
""));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        yearIn = new QLineEdit(centralwidget);
        yearIn->setObjectName(QString::fromUtf8("yearIn"));
        yearIn->setGeometry(QRect(610, 120, 111, 41));
        QFont font5;
        font5.setPointSize(11);
        yearIn->setFont(font5);
        textBrowser_11 = new QTextBrowser(centralwidget);
        textBrowser_11->setObjectName(QString::fromUtf8("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(430, 340, 101, 81));
        textBrowser_11->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_12 = new QTextBrowser(centralwidget);
        textBrowser_12->setObjectName(QString::fromUtf8("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(430, 450, 71, 41));
        textBrowser_12->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_9 = new QTextBrowser(centralwidget);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(310, 340, 101, 81));
        textBrowser_9->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 110, 131, 61));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid lightblue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));
        lineEdit->setReadOnly(true);
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(390, 620, 141, 51));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(430, 250, 101, 81));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        submitBtn = new QPushButton(centralwidget);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));
        submitBtn->setGeometry(QRect(830, 130, 231, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        submitBtn->setFont(font6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 201, 71));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Roboto"));
        font7.setPointSize(16);
        label->setFont(font7);
        noBtn = new QPushButton(centralwidget);
        noBtn->setObjectName(QString::fromUtf8("noBtn"));
        noBtn->setGeometry(QRect(900, 630, 75, 23));
        noBtn->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 580, 151, 31));
        label_4->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 60, 141, 51));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Roboto"));
        font8.setPointSize(14);
        label_2->setFont(font8);
        missingBtn = new QPushButton(centralwidget);
        missingBtn->setObjectName(QString::fromUtf8("missingBtn"));
        missingBtn->setGeometry(QRect(820, 210, 231, 31));
        missingBtn->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 580, 171, 31));
        label_5->setFont(font3);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(190, 340, 101, 81));
        textBrowser_6->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"border: 0px solid lightblue;"));
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_15 = new QTextBrowser(centralwidget);
        textBrowser_15->setObjectName(QString::fromUtf8("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(670, 340, 101, 81));
        textBrowser_15->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(190, 450, 71, 41));
        textBrowser_7->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 620, 121, 51));
        addCourseLabel = new QLabel(centralwidget);
        addCourseLabel->setObjectName(QString::fromUtf8("addCourseLabel"));
        addCourseLabel->setGeometry(QRect(800, 590, 131, 21));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        font9.setWeight(75);
        addCourseLabel->setFont(font9);
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(310, 250, 101, 81));
        textBrowser_8->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(560, 250, 101, 81));
        textBrowser_4->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_10 = new QTextBrowser(centralwidget);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(310, 450, 71, 41));
        textBrowser_10->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(560, 340, 101, 81));
        textBrowser_5->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(200, 120, 201, 41));
        comboBox->setFont(font5);
        DashBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DashBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1231, 21));
        DashBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(DashBoard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DashBoard->setStatusBar(statusbar);

        retranslateUi(DashBoard);

        QMetaObject::connectSlotsByName(DashBoard);
    } // setupUi

    void retranslateUi(QMainWindow *DashBoard)
    {
        DashBoard->setWindowTitle(QCoreApplication::translate("DashBoard", "MainWindow", nullptr));
        textBrowser_16->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_13->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashBoard", "Search Course", nullptr));
        lineEdit_3->setText(QString());
        yesBtn->setText(QCoreApplication::translate("DashBoard", "Yes", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("DashBoard", "Year:", nullptr));
        label_3->setText(QCoreApplication::translate("DashBoard", "Course Code", nullptr));
        textBrowser_14->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        textBrowser->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_11->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_12->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        lineEdit->setText(QCoreApplication::translate("DashBoard", "Degree : ", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        submitBtn->setText(QCoreApplication::translate("DashBoard", "Submit Degree and Year", nullptr));
        label->setText(QCoreApplication::translate("DashBoard", "Your Dashboard", nullptr));
        noBtn->setText(QCoreApplication::translate("DashBoard", "No", nullptr));
        label_4->setText(QCoreApplication::translate("DashBoard", "Year (1/2/3/4/5)", nullptr));
        label_2->setText(QString());
        missingBtn->setText(QCoreApplication::translate("DashBoard", "Calculate Missing Requirements", nullptr));
        label_5->setText(QCoreApplication::translate("DashBoard", "Semester (F/W/S)", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_15->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        lineEdit_2->setText(QString());
        addCourseLabel->setText(QCoreApplication::translate("DashBoard", "Add Course?", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_10->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashBoard: public Ui_DashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
