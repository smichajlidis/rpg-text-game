#ifndef _FORESTATTACK_H_
#define _FORESTATTACK_H_

#include "../location.h"

#include <iostream>
#include <vector>

class Creature;

class ForestAttack: public Location {

    int* i_ptr;
    std::vector <Creature*> related_creatures;

    public:

    virtual Location* making_a_choice();
    void change_i();
    void get_i_ptr(int* i);

    ForestAttack(std::string name_val="forest_attack");
    ~ForestAttack();

    friend class GameState;
};

#endif