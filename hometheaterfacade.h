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
#include "popcornpopper.h"
#include "theaterlights.h"
#include "projector.h"

class HomeTheaterFacade
{
private:
    Amplifier *amp;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;
    TheaterLights *lights;
    Screen *screen;
    PopcornPopper *popper;
    Projector *projector;



public:
    HomeTheaterFacade(Amplifier*,Tuner*,DvdPlayer*,CdPlayer*,Projector*,TheaterLights*,Screen*,PopcornPopper*);
    void watchMovie(QString movie);
    void endMovie();
    void listenToCd(QString cdTitle);
    void endCd();
    void listenToRadio(double frequency);
    void endRadio();
};

#endif // HOMETHEATERFACADE_H
