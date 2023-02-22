#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>

class Player: public Creature {

    int charisma;
    int luck;
    int drunk;

public:

    void drinking(int drunk_val);
    void display_top_bar();

    Player(std::string name_val = "none", int strength_val = 1, int charisma_val = 1, int luck_val = 1, int hp_val = 100, int drunk_val = 0);
    ~Player();

    friend class GameState;

};

#endif