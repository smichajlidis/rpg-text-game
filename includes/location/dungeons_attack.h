#ifndef _DUNGEONSATTACK_H_
#define _DUNGEONSATTACK_H_
#include <iostream>
#include <vector>

class Creature;

class DungeonsAttack: public Location {

    std::vector <Creature*> related_creatures;

    public:

    virtual Location* making_a_choice();

    DungeonsAttack(std::string name_val="dungeons_attack");
    ~DungeonsAttack();
};

#endif