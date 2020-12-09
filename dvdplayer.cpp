#include "dvdplayer.h"

DvdPlayer::DvdPlayer(QString description, Amplifier *amplifier)
{
    this->description = description;
    this->amplifier = amplifier;
}
void DvdPlayer::on(){
    cout << description.toStdString() << " on" << endl;

}
void DvdPlayer::off(){
    cout << description.toStdString() << " off" << endl;

}
void DvdPlayer::eject(){

}
void DvdPlayer::pause(){

}
void DvdPlayer::play(QString movie){

}
void DvdPlayer::play(int track){

}
void DvdPlayer::setTwoChannelAudio(){

}
void DvdPlayer::setSurroundAudio(){

}
void DvdPlayer::stop(){

}
QString DvdPlayer::toString(){

}
