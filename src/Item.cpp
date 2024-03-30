#include "../include/Item.hpp"

std::string Item::getName() const {
    return name;
}

bool Item::empty() const {
    return ((getName() == "") ? true : false);
}

std::uint16_t Item::getStrength() const {
    return strength;
}