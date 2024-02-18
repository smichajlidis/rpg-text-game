#ifndef _DUNGEONSATTACK_H_
#define _DUNGEONSATTACK_H_

#include "../location.h"

class Creature;

#include <vector>

class DungeonsAttack: public Location {

    int* i_ptr;
    std::vector <Creature*> related_creatures;

    public:

    void change_i();
    void get_i_ptr(int* i);

    DungeonsAttack();
    ~DungeonsAttack();

    friend class GameState;
};

#endif