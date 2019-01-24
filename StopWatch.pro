TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    StopWatch.cpp

HEADERS += \
    StopWatch.h

LIBS += -L/usr/lib/x86_64-linux-gnu/ -lboost_chrono \
         -lboost_system
