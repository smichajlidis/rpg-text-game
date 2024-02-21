#ifndef _NPC_HPP_
#define _NPC_HPP_

#include "LivingBeing.hpp"
#include "Location.hpp"

#include <vector>

class NPC: public LivingBeing, public Location {

public:
    NPC() = default;

    ~NPC() = default;

    void printDescriptions() override;
    
protected:
    std::vector<std::string> greetings;
};

#endif