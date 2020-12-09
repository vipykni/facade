#ifndef TUNER_H
#define TUNER_H
#include <QString>
#include <iostream>
#include "amplifier.h"

class Tuner
{
private:
    QString description;
    Amplifier *amplifier;
    double frequency;

public:
    Tuner();
    Tuner(QString description, Amplifier *amplifier);
    void on();
    void off();
    void setAm();
    void setFm();
    void setFrequency(double frequency);
    QString toString();
};

#endif // TUNER_H
