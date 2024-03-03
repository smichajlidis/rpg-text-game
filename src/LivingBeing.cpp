#include "../include/LivingBeing.hpp"

#include <algorithm>
#include <iostream>

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

void LivingBeing::printEquipment() const {
    std::uint32_t count {1};
    if (!equipment.empty()) {
        std::for_each(equipment.begin(), equipment.end(), [&count](const Item& item) { 
            std::cout << count << ". " << item.getName() << std::endl;
            ++count;
        });
    }
    else {
        std::cout << "There is nothing here." << std::endl;
    }
}