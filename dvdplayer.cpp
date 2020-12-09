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

    movie = nullptr;
    cout << description.toStdString() << " eject" << endl;
}
void DvdPlayer::pause(){

    cout << description.toStdString() << " paused \"" + movie.toStdString() << "\"" << endl;

}
void DvdPlayer::play(QString movie){

        this->movie = movie;
        currentTrack = 0;
        cout << description.toStdString() << " playing \"" << movie.toStdString() << "\"" << endl;
}
void DvdPlayer::play(int track){

    if (movie == nullptr)
    cout << description.toStdString() << " can't play track " + track << " no dvd inserted" << endl;

}
void DvdPlayer::setTwoChannelAudio(){

    cout << description.toStdString() << " set two channel audio" << endl;

}
void DvdPlayer::setSurroundAudio(){

    cout << description.toStdString() << " set surround audio" << endl;

}
void DvdPlayer::stop(){

    currentTrack = 0;
    cout << description.toStdString() << " stopped \"" + movie.toStdString() << "\"" << endl;
}
QString DvdPlayer::toString(){

    return description;

}
