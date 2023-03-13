#ifndef _THUG_H_
#define _THUG_H_
#include <iostream>

class Sword;

class Thug: public Creature {

    Sword sword;

public:

    virtual Creature* clone();

    Thug(Item* active_weapon_val=nullptr, std::string name_val = "THUGS", int strength_val = 20);
    ~Thug();

};

#endif