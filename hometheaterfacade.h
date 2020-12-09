#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H
#include <QString>
#include <iostream>
using namespace std;
#include "amplifier.h"
#include "tuner.h"
#include "dvdplayer.h"
#include "cdplayer.h"
#include "screen.h"

class HomeTheaterFacade
{
private:
    Amplifier *amp;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;
    Screen *screen;
public:
    HomeTheaterFacade(Amplifier*,Tuner*,DvdPlayer*,CdPlayer*,Screen*);
    void watchMovie(QString movie);
    void endMovie();
    void listenToCd(QString cdTitle);
    void endCd();
    void listenToRadio(double frequency);
    void endRadio();
};

#endif // HOMETHEATERFACADE_H
