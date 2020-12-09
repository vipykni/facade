#include <QCoreApplication>
#include "amplifier.h"
#include "tuner.h"
#include "dvdplayer.h"
#include "hometheaterfacade.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Amplifier *amp = new Amplifier("Top-O-Line Amplifier");

    HomeTheaterFacade *homeTheater = new HomeTheaterFacade();

    return a.exec();
}
