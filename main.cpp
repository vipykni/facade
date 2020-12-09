#include <QCoreApplication>
#include "amplifier.h"
#include "tuner.h"
#include "dvdplayer.h"
#include "hometheaterfacade.h"
#include "cdplayer.h"
#include "screen.h"
#include "theaterlights.h"
#include "popcornpopper.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Amplifier *amp = new Amplifier("Top-O-Line Amplifier");
    Tuner *tuner = new Tuner("Top-O-Line AM/FM Tuner", amp);
    DvdPlayer *dvd = new DvdPlayer("Top-O-Line DVD Player", amp);
    CdPlayer *cd = new CdPlayer("Top-O-Line CD Player", amp);
    TheaterLights *lights = new TheaterLights("Theater Ceiling Lights");
    Screen *screen = new Screen("Theater Screen");
    PopcornPopper *popper = new PopcornPopper("Popcorn Popper");
    Projector *projector = new Projector("Top-O-Line Projector", dvd);

    HomeTheaterFacade *homeTheater = new HomeTheaterFacade(amp, tuner, dvd, cd, projector, lights, screen, popper);

    homeTheater->watchMovie("Caucasian captive");
    homeTheater->endMovie();
    return a.exec();
}
