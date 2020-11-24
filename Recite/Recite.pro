#-------------------------------------------------
#
# Project created by QtCreator 2020-11-11T09:19:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Recite
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    doreciteword.cpp \
    dowordbook.cpp \
        main.cpp \
        login.cpp \
    homepage.cpp \
    reciteword.cpp \
    recitewordthree.cpp \
    recitewordtwo.cpp \
    register.cpp \
    dologin.cpp \
    clockon.cpp \
    review.cpp \
    word.cpp \
    wordbook.cpp \
    wrongwordbook.cpp

HEADERS += \
    doreciteword.h \
    dowordbook.h \
        login.h \
    homepage.h \
    reciteword.h \
    recitewordthree.h \
    recitewordtwo.h \
    register.h \
    dologin.h \
    clockon.h \
    review.h \
    word.h \
    wordbook.h \
    wrongwordbook.h

FORMS += \
        login.ui \
    homepage.ui \
    reciteword.ui \
    recitewordthree.ui \
    recitewordtwo.ui \
    register.ui \
    review.ui \
    wordbook.ui \
    wrongwordbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
