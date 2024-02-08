#ifndef _PRIEST_H_
#define _PRIEST_H_

#include "../location.h"
#include "../creature/npc.h"
#include "../point_player.h"

#include <iostream>

class Priest:
    public Location, public NPC, public PointPlayer {

public:

    virtual Location* making_a_choice();
    virtual void greeting();
    virtual Creature* clone();

    Priest(std::string name_val = "priest");
    ~Priest();

};

#endif