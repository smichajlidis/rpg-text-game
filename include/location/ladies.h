#ifndef _LADIES_H_
#define _LADIES_H_

#include "../location.h"
#include "../creature/npc.h"
#include "../point_player.h"

#include <iostream>

class Ladies:
    public Location, public NPC, public PointPlayer {

public:

    virtual Location* making_a_choice();
    virtual void greeting();
    virtual Creature* clone();

    Ladies(std::string name_val = "LADIES");
    ~Ladies();

};

#endif