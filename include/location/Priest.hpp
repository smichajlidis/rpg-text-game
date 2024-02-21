#ifndef _PRIEST_HPP_
#define _PRIEST_HPP_

#include "../Location.hpp"
#include "../creature/npc.h"
#include "../point_player.h"

class Priest:
    public Location, public NPC, public PointPlayer {

public:
    Priest()
        : NPC() {}

    ~Priest() = default;

    virtual void greeting();
    virtual Creature* clone();
};

#endif