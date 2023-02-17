#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>

class Player: public Creature {

    int charisma;
    int luck;

public:

    Player(std::string name_val = "none", int strength_val = 1, int hp_val = 100, int charisma_val = 1, int luck_val = 1);
    ~Player();

};

#endif