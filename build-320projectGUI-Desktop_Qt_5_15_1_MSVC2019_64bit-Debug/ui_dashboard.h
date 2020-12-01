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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashBoard
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextBrowser *textBrowser_5;
    QLabel *label_5;
    QTextBrowser *textBrowser_10;
    QTextBrowser *textBrowser_16;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_9;
    QTextBrowser *textBrowser_14;
    QLineEdit *lineEdit_2;
    QTextBrowser *textBrowser_13;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_15;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_8;
    QTextBrowser *textBrowser_7;
    QLineEdit *lineEdit_3;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_11;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QTextBrowser *textBrowser_12;
    QLineEdit *lineEdit_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DashBoard)
    {
        if (DashBoard->objectName().isEmpty())
            DashBoard->setObjectName(QString::fromUtf8("DashBoard"));
        DashBoard->resize(1302, 723);
        centralwidget = new QWidget(DashBoard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(640, 60, 141, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(14);
        label_2->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 180, 761, 381));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        font1.setPointSize(9);
        textEdit->setFont(font1);
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
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(540, 340, 101, 81));
        textBrowser_5->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 580, 171, 31));
        QFont font2;
        font2.setPointSize(12);
        label_5->setFont(font2);
        textBrowser_10 = new QTextBrowser(centralwidget);
        textBrowser_10->setObjectName(QString::fromUtf8("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(290, 450, 71, 41));
        textBrowser_10->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_10->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_16 = new QTextBrowser(centralwidget);
        textBrowser_16->setObjectName(QString::fromUtf8("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(640, 450, 71, 41));
        textBrowser_16->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_16->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(170, 340, 101, 81));
        textBrowser_6->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"border: 0px solid lightblue;"));
        textBrowser_6->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_9 = new QTextBrowser(centralwidget);
        textBrowser_9->setObjectName(QString::fromUtf8("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(290, 340, 101, 81));
        textBrowser_9->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_9->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_14 = new QTextBrowser(centralwidget);
        textBrowser_14->setObjectName(QString::fromUtf8("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(660, 250, 101, 81));
        textBrowser_14->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_14->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 620, 121, 51));
        textBrowser_13 = new QTextBrowser(centralwidget);
        textBrowser_13->setObjectName(QString::fromUtf8("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(540, 450, 71, 41));
        textBrowser_13->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_13->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(170, 250, 101, 81));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;\n"
""));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_15 = new QTextBrowser(centralwidget);
        textBrowser_15->setObjectName(QString::fromUtf8("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(650, 340, 101, 81));
        textBrowser_15->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_15->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(410, 250, 101, 81));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(290, 250, 101, 81));
        textBrowser_8->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_8->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(170, 450, 71, 41));
        textBrowser_7->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 620, 151, 51));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(540, 250, 101, 81));
        textBrowser_4->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(550, 610, 131, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Roboto"));
        font3.setPointSize(12);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(10, 200, 40);\n"
"  border-radius: 10px;"));
        textBrowser_11 = new QTextBrowser(centralwidget);
        textBrowser_11->setObjectName(QString::fromUtf8("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(410, 340, 101, 81));
        textBrowser_11->setStyleSheet(QString::fromUtf8("border: 0px solid lightblue;"));
        textBrowser_11->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem18);
        QBrush brush(QColor(254, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setBackground(brush);
        tableWidget->setItem(6, 0, __qtablewidgetitem19);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(790, 180, 501, 381));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 580, 151, 31));
        label_4->setFont(font2);
        textBrowser_12 = new QTextBrowser(centralwidget);
        textBrowser_12->setObjectName(QString::fromUtf8("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(410, 450, 71, 41));
        textBrowser_12->setStyleSheet(QString::fromUtf8("\n"
"border: 0px solid lightblue;"));
        textBrowser_12->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(370, 620, 141, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 201, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto"));
        font4.setPointSize(16);
        label->setFont(font4);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 110, 131, 61));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font5.setPointSize(18);
        lineEdit->setFont(font5);
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid lightblue;\n"
"     border-radius: 20px;\n"
"     padding: 0 8px;\n"
"     background: lightblue;\n"
"     selection-background-color: darkgray;\n"
" }"));
        lineEdit->setReadOnly(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 580, 121, 31));
        label_3->setFont(font2);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 120, 201, 41));
        DashBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DashBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1302, 21));
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
        label_2->setText(QString());
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
        textBrowser_5->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">,</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("DashBoard", "Semester (F/W/S)", nullptr));
        textBrowser_10->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">A</span></p></body></html>", nullptr));
        textBrowser_16->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">,</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">A</span></p></body></html>", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">A</span></p></body></html>", nullptr));
        textBrowser_14->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">,</span></p></body></html>", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("DashBoard", "1", nullptr));
        textBrowser_13->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">,</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">A</span></p></body></html>", nullptr));
        textBrowser_15->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">,</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">.</span></p></body></html>", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">A</span></p></body></html>", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">A</span></p></body></html>", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("DashBoard", "asd", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">,</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DashBoard", "Add Course", nullptr));
        textBrowser_11->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt;\">,</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DashBoard", "Credit", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DashBoard", "AU", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DashBoard", "Math+NS", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DashBoard", "Math", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DashBoard", "NS", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DashBoard", "CS", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DashBoard", "ES", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DashBoard", "ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DashBoard", "ES+ED", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DashBoard", "1st Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DashBoard", "2nd Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DashBoard", "3rd Year", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DashBoard", "Complementary", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DashBoard", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DashBoard", "Total planned+taken", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DashBoard", "Difference", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DashBoard", "39.6", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DashBoard", "400", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DashBoard", "263", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(6, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DashBoard", "-300", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_4->setText(QCoreApplication::translate("DashBoard", "Year (1/2/3/4/5)", nullptr));
        textBrowser_12->setHtml(QCoreApplication::translate("DashBoard", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7.8pt;\">,</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DashBoard", "Your Dashboard", nullptr));
        lineEdit->setText(QCoreApplication::translate("DashBoard", "Degree : ", nullptr));
        label_3->setText(QCoreApplication::translate("DashBoard", "Course Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashBoard: public Ui_DashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
