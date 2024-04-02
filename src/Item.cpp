#include "../include/Item.hpp"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const Item& rhs) {
    os << rhs.name << " | value: " << rhs.value;
    if (rhs.strength) {
        os << " | strength: " << rhs.strength;
    }
    return os;
}

std::string Item::getName() const {
    return name;
}

bool Item::empty() const {
    return ((getName() == "") ? true : false);
}

std::uint16_t Item::getStrength() const {
    return strength;
}