#ifndef DVDPLAYER_H
#define DVDPLAYER_H

#include <QString>
#include <iostream>
#include "amplifier.h"
using namespace std;


class DvdPlayer
{
private:
    QString description;
    int currentTrack;
    Amplifier *amplifier;
    QString movie;
public:
    DvdPlayer(QString description, Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void pause();
    void play(QString movie);
    void play(int track);
    void setTwoChannelAudio();
    void setSurroundAudio();
    void stop();
    QString toString();
};

#endif // DVDPLAYER_H
