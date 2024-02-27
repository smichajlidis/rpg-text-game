#ifndef _LIVINGBEING_HPP_
#define _LIVINGBEING_HPP_

#include <vector>
#include <memory>

#include "Item.hpp"

class LivingBeing {

public:
    LivingBeing(std::uint32_t hp = 100, std::uint32_t strength = 5)
        : hp(hp), strength(strength) {}

    ~LivingBeing() = default;

private:
    std::uint32_t hp;
    std::uint32_t strength;
    std::vector<Item> equipment;
    Item active_weapon;
};

#endif