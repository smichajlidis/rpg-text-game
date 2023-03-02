#ifndef _NPC_H_
#define _NPC_H_
#include <iostream>

class NPC: public Creature {

    int favor;

public:

    NPC(int favor_val=50);
    ~NPC();

};

#endif