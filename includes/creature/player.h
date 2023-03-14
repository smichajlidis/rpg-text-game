#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>

class Player: public Creature {

    int charisma;
    int luck;
    int drunk;

public:

    bool using_charisma(int favor);
    void drinking();
    void display_top_bar();
    void increase_luck(int val);
    void increase_charisma(int val);
    int return_drunk();
    bool is_chapel_key();

    virtual Creature* clone();

    Player(std::string name_val = "none", int strength_val = 20, int charisma_val = 75, int luck_val = 10, int drunk_val = 0);

    ~Player();

    friend class GameState;

};

#endif