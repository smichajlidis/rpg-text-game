#ifndef _ATTACKTHUGS_H_
#define _ATTACKTHUGS_H_

#include "../location.h"

class Creature;

#include <vector>

class AttackThugs: public Location {

    int* i_ptr;
    std::vector <Creature*> related_creatures; 

public:

    void change_i();
    void get_i_ptr(int* i);

    AttackThugs(std::string name_val = "attack_thugs");
    ~AttackThugs();

    friend class GameState;

};

#endif