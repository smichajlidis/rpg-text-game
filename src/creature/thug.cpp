#include <iostream>
#include "../../include/creature/thug.h"

Creature* Thug::clone() {
    Creature* thug {nullptr};
    thug = new Thug;
    return thug;
}

Thug::Thug(Item* active_weapon_val, std::string name_val, int strength_val)
    : Creature(name_val, strength_val, active_weapon_val) {
        give_a_weapon(&sword);
}

Thug::~Thug() {
}