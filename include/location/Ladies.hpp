#ifndef _LADIES_HPP_
#define _LADIES_HPP_

#include "../Location.hpp"
#include "../creature/npc.h"
#include "../point_player.h"

class Ladies:
    public Location, public NPC, public PointPlayer {

public:
    Ladies()
    : NPC() {}

    ~Ladies() = default;

    void printDescriptions() override;
    virtual void greeting();
    virtual Creature* clone();
};

#endif