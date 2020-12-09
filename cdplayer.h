#ifndef CDPLAYER_H
#define CDPLAYER_H

#include <QString>
#include <iostream>
using namespace std;

#include "amplifier.h"


class CdPlayer
{
private:
    QString description;
    int currentTrack;
    Amplifier *amplifier;
    QString title;
public:
    CdPlayer(QString description, Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void pause();
    void play(QString title);
    void play(int track);
    void stop();
    QString toString();
};

#endif // CDPLAYER_H
