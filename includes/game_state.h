#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_
#include <iostream>
#include "location/closed_chapel.h"
#include "location/forest.h"
#include "location/square.h"
#include "location/tavern.h"
#include "location/innkeeper.h"
#include "location/gamblers.h"

class GameState {

    ClosedChapel closed_chapel;
    Forest forest;
    Square square;
    Tavern tavern;
    Innkeeper innkeeper;
    Gamblers gamblers;

    Location *current_location;

public:

    void display_location();

    GameState();
    ~GameState();

};

#endif