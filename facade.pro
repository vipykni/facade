QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        amplifier.cpp \
        cdplayer.cpp \
        dvdplayer.cpp \
        hometheaterfacade.cpp \
        main.cpp \
        popcornpopper.cpp \
        projector.cpp \
        screen.cpp \
        theaterlights.cpp \
        tuner.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    amplifier.h \
    cdplayer.h \
    dvdplayer.h \
    hometheaterfacade.h \
    popcornpopper.h \
    projector.h \
    screen.h \
    theaterlights.h \
    tuner.h
