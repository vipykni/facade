#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <QString>
#include <iostream>
using namespace std;

class Amplifier
{
private:
    QString description;

public:
    Amplifier();
    void on();
    void off();
};

#endif // AMPLIFIER_H
