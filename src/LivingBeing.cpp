#include "../include/LivingBeing.hpp"

std::uint16_t LivingBeing::getHP() const {
    return hp;
}

std::uint16_t LivingBeing::getStrength() const {
    return strength;
}

void LivingBeing::increaseHP(std::uint16_t val) {
    if (hp >= 80) {
        hp = 100;
    }
    else {
        hp += val;
    }
}