#ifndef _NPC_HPP_
#define _NPC_HPP_

#include "LivingBeing.hpp"
#include "Location.hpp"

class NPC: public LivingBeing, public Location {

public:
    NPC() = default;

    ~NPC() = default;

    virtual void sayingHello() = 0;
};

#endif