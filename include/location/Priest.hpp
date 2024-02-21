#ifndef _PRIEST_HPP_
#define _PRIEST_HPP_

#include "../Location.hpp"
#include "../NPC.hpp"

class Priest: public NPC {

public:
    Priest() = default;

    ~Priest() = default;

    void sayingHello() override;
    void printDescriptions() override;
};

#endif