#include "../include/LivingBeing.hpp"

#include <algorithm>
#include <iostream>

std::uint16_t LivingBeing::getHP() const {
    return hp;
}

std::uint16_t LivingBeing::getStrength() const {
    if (active_weapon != "") {
        for (const auto& item: equipment) {
            if (item.getName() == active_weapon) {
                return strength + item.getStrength();
            }
        }
    }
    return strength;
}

void LivingBeing::increaseHP(std::uint16_t val) {
    hp = ((hp + val >= 100) ? 100 : hp + val);
}

void LivingBeing::printEquipment() const {
    std::uint32_t count {1};
    if (active_weapon != "") {
        std::cout << "Currently use:\n";
        for (const auto& item: equipment) {
            if (active_weapon == item.getName()) {
                std::cout << item << std::endl;
            }
        }
    }
    std::cout << "\n";
    if (!equipment.empty()) {
        std::for_each(equipment.begin(), equipment.end(), [&count](const Item& item) { 
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

void LivingBeing::increaseStrength(std::uint32_t val) {
    strength += val;
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

bool LivingBeing::findItemInEquipment(const std::string& name) const {
    for (auto& item: equipment) {
        if (item.getName() == name) {
            return true;
        }
    }
    return false;
}

void LivingBeing::useItem(const std::string& val) {

    Item item;

    for (auto& it: equipment) {
        if (it.getName() == val) {
            item = it;
            
            break;
        }
    }

    if (item.getType() == "food") {
        increaseHP(item.getStrength());
        this->deleteItem(val);
    } else if (item.getType() == "weapon") {
        active_weapon = item.getName();
    } else if (item.getType() == "armor") {
        //os << " | Increase HP by " << strength;
    } else if (item.getType() == "charisma_amulet") {
       //os << " | Increase charisma by " << strength;
    } else if (item.getType() == "hp_amulet") {
        //os << " | Restore " << strength << " HP";
    } else if (item.getType() == "strength_amulet") {
        //os << " | Increase strength by " << strength;
    } else if (item.getType() == "luck_amulet") {
        //os << " | Increase luck by " << strength;
    }

}