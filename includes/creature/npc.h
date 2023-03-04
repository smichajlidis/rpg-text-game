#ifndef _NPC_H_
#define _NPC_H_
#include <iostream>

class NPC: public Creature {

    int favor;

public:

    virtual void greeting()=0;
    void display_npc_details();
    void increase_favor();
    void decrease_favor();

    NPC(std::string name_val="none", int strength_val=1, int hp_val=100, int favor_val=50);
    ~NPC();

};

#endif