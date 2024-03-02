#include "../include/Human.hpp"

std::uint32_t Human::getGold() const {
    return gold;
}

void Human::decreaseGold(std::uint32_t val) {
    gold -= val;
}

void Human::increaseGold(std::uint32_t val) {
    gold+= val;
}