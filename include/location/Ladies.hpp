#ifndef _LADIES_HPP_
#define _LADIES_HPP_

#include "../Location.hpp"
#include "../NPC.hpp"
#include "../point_player.h"

class Ladies: public NPC {

public:
    Ladies() = default;

    ~Ladies() = default;

    void printDescriptions() override;
    void sayingHello() override;
};

#endif