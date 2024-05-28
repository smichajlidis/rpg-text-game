#include "../include/Item.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const Item& rhs) {
    os << rhs.name << " | amount: " << rhs.amount << " | value: " << rhs.value;
    if (rhs.type == "food") {
        os << " | Restore " << rhs.strength << " HP";
    } else if (rhs.type == "weapon") {
        os << " | Increase strength by " << rhs.strength;
    } else if (rhs.type == "armor") {
        os << " | Decrease damages by " << rhs.strength;
    } else if (rhs.type == "charisma_amulet") {
        os << " | Increase charisma by " << rhs.strength;
    } else if (rhs.type == "hp_amulet") {
        os << " | Decrease damages by " << rhs.strength;
    } else if (rhs.type == "strength_amulet") {
        os << " | Increase strength by " << rhs.strength;
    } else if (rhs.type == "luck_amulet") {
        os << " | Increase luck by " << rhs.strength;
    }
    return os;
}


std::string Item::getName() const {
    return name;
}

bool Item::empty() const {
    return ((getName() == "") ? true : false);
}

std::string Item::getType() const {
    return type;
}

std::uint16_t Item::getStrength() const {
    return strength;
}

std::uint32_t Item::getAmount() const {
    return amount;
}

void Item::increaseAmount(std::uint32_t val) {
    amount += val;
}

void Item::decreaseAmount(std::uint32_t val) {
    amount -= val;
}

void Item::setAmountAsOne() {
    amount = 1;
}

std::uint32_t Item::getValue() const {
    return value;
}