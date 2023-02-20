#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_
#include <iostream>
#include "location/closed_chapel.h"
#include "location/forest.h"
#include "location/square.h"
#include "location/tavern.h"

class GameState {

    ClosedChapel closed_chapel;
    Forest forest;
    Square square;
    Tavern tavern;

public:

    GameState();
    ~GameState();

};

#endif