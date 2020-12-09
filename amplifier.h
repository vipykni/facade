#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <QString>
#include <iostream>
using namespace std;

class Tuner;
class DvdPlayer;
class CdPlayer;

class Amplifier
{
private:
    QString description;
    Tuner *tuner;
    CdPlayer *cd;
    DvdPlayer *dvd;


public:
    Amplifier(QString description);
    void on();
    void off();
    void setCd(CdPlayer *cd);
    void setDvd(DvdPlayer *dvd);
    void setStereoSound();
    void setSurroundSoud();
    void setTuner(Tuner *tuner);
    void setVolume(int level);
    void toString();


};

#endif // AMPLIFIER_H
