#ifndef _FORESTATTACK_H_
#define _FORESTATTACK_H_
#include <iostream>
#include <vector>

class Creature;

class ForestAttack: public Location {

    std::vector <Creature*> related_creatures;

    public:

    virtual Location* making_a_choice();

    ForestAttack(std::string name_val="forest_attack");
    ~ForestAttack();

    friend class GameState;
};

#endif