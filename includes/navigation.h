#ifndef _NAVIGATION_H_
#define _NAVIGATION_H_
#include <iostream>

class GameState;
class Location;

class Navigation {

    Location *ptr;

public:

    Navigation(GameState);
    ~Navigation();

};

#endif