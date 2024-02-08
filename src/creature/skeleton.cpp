#include <iostream>
#include "../../include/creature/skeleton.h"

Creature* Skeleton::clone() {
    Creature* skeleton {nullptr};
    skeleton = new Skeleton;
    return skeleton;
}

Skeleton::Skeleton(Item* active_weapon_val, std::string name_val, int strength_val)
    : Creature(name_val, strength_val, active_weapon_val) {
        give_a_weapon(&sword);
}

Skeleton::~Skeleton() {
}