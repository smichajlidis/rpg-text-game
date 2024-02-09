#ifndef _DUNGEONSATTACK_H_
#define _DUNGEONSATTACK_H_

#include "../location.h"

class Creature;

#include <vector>

class DungeonsAttack: public Location {

    int* i_ptr;
    std::vector <Creature*> related_creatures;

    public:

    virtual Location* making_a_choice();
    void change_i();
    void get_i_ptr(int* i);

    DungeonsAttack(std::string name_val="dungeons_attack");
    ~DungeonsAttack();

    friend class GameState;
};

#endif