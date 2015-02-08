######################################################################
# Automatically generated by qmake (3.0) sab Out 4 19:54:03 2014
######################################################################

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = simecg

# Input
HEADERS += aboutdialog.h \
           assessmentframe.h \
           ecgmemory.h \
           ecgplotter.h \
           mymainwindow.h \
           plotter.h \
           qvectorplus.h \
           version.h
FORMS += aboutdialog.ui assessmentframe.ui mymainwindow.ui
SOURCES += aboutdialog.cpp \
           assessmentframe.cpp \
           ecgmemory.cpp \
           ecgplotter.cpp \
           main.cpp \
           mymainwindow.cpp \
           plotter.cpp \
           qvectorplus.cpp
RESOURCES += icons.qrc
TRANSLATIONS += simecg_de.ts simecg_es.ts simecg_fr.ts simecg_pt.ts

OTHER_FILES += \
    simecg.sh \
    README \
    simecg.png \
    simecg.desktop \
    TODO \
    build_increment