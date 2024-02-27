#ifndef _FORESTATTACK_H_
#define _FORESTATTACK_H_

#include "../Location.hpp"

#include <iostream>
#include <vector>

class Creature;

class ForestAttack: public Location {

    int* i_ptr;

    public:

    void change_i();
    void get_i_ptr(int* i);

    ForestAttack();
    ~ForestAttack();

    friend class GameState;
};

#endif