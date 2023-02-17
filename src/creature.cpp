#include <iostream>
#include "../includes/creature.h"
#include "../includes/equipment.h"

Creature::Creature(std::string name_val, int hp_val)
    : name {name_val}, hp {hp_val} {
    }

Creature::~Creature() {
}