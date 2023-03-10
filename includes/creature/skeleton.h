#ifndef _SKELETON_H_
#define _SKELETON_H_
#include <iostream>

class Sword;

class Skeleton: public Creature {

    Sword sword;

public:

    virtual Creature* clone();

    Skeleton(Item* active_weapon_val=nullptr, std::string name_val = "SKELETON", int strength_val = 10);
    ~Skeleton();

};

#endif