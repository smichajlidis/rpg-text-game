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
    hp = ((hp + val >= 100) ? 100 : hp + val);
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

std::uint16_t LivingBeing::getEquipmentSize() const {
    return equipment.size();
}

void LivingBeing::addItem(const Item& item) {
    equipment.push_back(item);
}