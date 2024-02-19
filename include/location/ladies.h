#ifndef _LADIES_H_
#define _LADIES_H_

#include "../location.h"
#include "../creature/npc.h"
#include "../point_player.h"

class Ladies:
    public Location, public NPC, public PointPlayer {

public:
    void printLocation() override;
    virtual void greeting();
    virtual Creature* clone();

    Ladies();
    ~Ladies();

};

#endif