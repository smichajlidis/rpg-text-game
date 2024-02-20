#ifndef _LADIES_H_
#define _LADIES_H_

#include "../Location.hpp"
#include "../creature/npc.h"
#include "../point_player.h"

class Ladies:
    public Location, public NPC, public PointPlayer {

public:
    void printDescriptions() override;
    virtual void greeting();
    virtual Creature* clone();

    Ladies();
    ~Ladies();

};

#endif