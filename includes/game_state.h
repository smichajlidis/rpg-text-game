#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_
#include <iostream>

class ClosedChapel;
class Forest;
class Square;
class Tavern;

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