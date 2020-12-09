#ifndef HOMETHEATERFACADE_H
#define HOMETHEATERFACADE_H
#include <QString>
#include <iostream>
using namespace std;

class HomeTheaterFacade
{
public:
    HomeTheaterFacade();
    void watchMovie(QString movie);
    void endMovie();
};

#endif // HOMETHEATERFACADE_H
