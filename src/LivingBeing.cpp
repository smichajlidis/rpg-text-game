#include "../include/LivingBeing.hpp"

#include <algorithm>
#include <iostream>

std::uint16_t LivingBeing::getHP() const {
    return hp;
}

std::uint16_t LivingBeing::getStrength() const {
    return strength + active_weapon.getStrength();
}

void LivingBeing::increaseHP(std::uint16_t val) {
    hp = ((hp + val >= 100) ? 100 : hp + val);
}

void LivingBeing::printEquipment() const {
    std::uint32_t count {1};
    if (!equipment.empty()) {
        std::for_each(equipment.begin(), equipment.end(), [&count](const Item& item) { 
            //std::cout << count << ". " << item.getName() << std::endl;
            std::cout << count << ". " << item << std::endl;
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

void LivingBeing::deleteItem(const std::string& val) {
    for (auto it = equipment.begin(); it != equipment.end(); ++it) {
        if (it->getName() == val) {
            equipment.erase(it);
            break;
        }
    }
}

Item LivingBeing::moveItem(const std::string& val) {
    for(auto& item: this->equipment) {
        if (item.getName() == val) {
            Item temp = item;
            this->deleteItem(val);
            return temp;
        }
    }
    return {};
}

std::uint32_t LivingBeing::getGold() const {
    return gold;
}

void LivingBeing::decreaseGold(std::uint32_t val) {
    gold -= val;
}

void LivingBeing::increaseGold(std::uint32_t val) {
    gold+= val;
}

std::string LivingBeing::getName() const {
    return name;
}

void LivingBeing::decreaseHP(std::uint16_t val) {
    hp = ( (hp - val >= 0) ? hp - val : 0);
}

Item LivingBeing::getItemFromEquipment(std::uint32_t val) {
    return equipment.at(val);
}