#include "amplifier.h"

Amplifier::Amplifier(QString description)
{
    this->description = description;
}
void Amplifier::on() {
    cout << description.toStdString() << " on" << endl;
}

void Amplifier::off() {
    cout << description.toStdString() << " off" << endl;
}

void Amplifier::setStereoSound() {

}

void Amplifier::setCd(CdPlayer *cd){

}
void Amplifier::setDvd(DvdPlayer *dvd) {

}

void Amplifier::setSurroundSoud(){

}
void Amplifier::setTuner(Tuner *tuner){

}
void Amplifier::setVolume(){

}
void Amplifier::toString(){

}
