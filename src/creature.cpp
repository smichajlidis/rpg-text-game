#include <iostream>
#include "../includes/creature.h"
#include "../includes/equipment.h"

void Creature::increase_hp(int hp_val) {
    hp+=hp_val;
}

Creature::Creature(std::string name_val, int strength_val, int hp_val)
    : name {name_val}, strength {strength_val}, hp {hp_val} {
    }

Creature::~Creature() {
}