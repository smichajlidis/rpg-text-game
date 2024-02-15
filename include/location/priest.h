#ifndef _PRIEST_H_
#define _PRIEST_H_

#include "../location.h"
#include "../creature/npc.h"
#include "../point_player.h"

class Priest:
    public Location, public NPC, public PointPlayer {

public:

    virtual void greeting();
    virtual Creature* clone();

    Priest(std::string name_val = "priest");
    ~Priest();

};

#endif