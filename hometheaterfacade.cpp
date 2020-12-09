#include "hometheaterfacade.h"

HomeTheaterFacade::HomeTheaterFacade(Amplifier *amp,Tuner *tuner,DvdPlayer *dvd, CdPlayer *cd,Screen *screen)
{
                                         this->amp = amp;
                                         this->tuner = tuner;
                                         this->dvd = dvd;
                                         this->cd = cd;
                                         this->screen = screen;


}

void HomeTheaterFacade::watchMovie(QString movie) {
    cout << "Get ready to watch a movie..." << endl;
          amp->on();
          amp->setDvd(dvd);
          amp->setVolume(5);
          dvd->on();
          dvd->play(movie);
}


void HomeTheaterFacade::endMovie() {
    cout << "Shutting movie theater down..." << endl;
          amp->off();
          dvd->stop();
          dvd->eject();
          dvd->off();
}
void HomeTheaterFacade::listenToCd(QString cdTitle){

                                         cout << "Get ready for an audiopile experence..." << endl;
                                         amp->setVolume(5);
                                         amp->setCd(cd);
                                         amp->setStereoSound();
                                         cd->on();
                                         cd->play(cdTitle);

}
void HomeTheaterFacade::endCd(){

                                         cout << "Shutting down cd->.." << endl;
                                         amp->setCd(cd);
                                         cd->eject();
                                         cd->off();

}
void HomeTheaterFacade::listenToRadio(double frequency){

                                         cout << "Tuning in the airwaves..." << endl;
                                         tuner->on();
                                         amp->on();
                                         amp->setVolume(5);
                                         amp->setTuner(tuner);

}
void HomeTheaterFacade::endRadio(){

                                         cout << "Shutting down the tuner->.." << endl;
                                         tuner->off();
                                         amp->off();


}
