QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Course.cpp \
    Requirement.cpp \
    User.cpp \
    addcoursewindow.cpp \
    dashboard.cpp \
    dashintro.cpp \
    main.cpp \
    mainwindow.cpp \
    readAPI.cpp \
    screen2.cpp

HEADERS += \
    Course.h \
    Requirement.h \
    User.h \
    addcoursewindow.h \
    dashboard.h \
    dashintro.h \
    mainwindow.h \
    readAPI.h \
    screen2.h

FORMS += \
    addcoursewindow.ui \
    dashboard.ui \
    dashintro.ui \
    mainwindow.ui \
    screen2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Chemical Engineering.txt \
    Chemical Engineering.txt \
    Chemical Engineering.txt \
    Chemical-Engineering.txt \
    Civil-Engineering.txt \
    Computer-Engineering.txt \
    Electrical-Engineering.txt \
    Engineering-Chemistry.txt \
    Engineering-Physics.txt \
    Geological-Engineering.txt \
    Mathematics-Engineering.txt \
    Mechanical-Engineering.txt
