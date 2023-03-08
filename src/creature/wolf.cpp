#include <iostream>
#include "../../includes/creature/wolf.h"

Creature* Wolf::clone() {
    Creature* wolf {nullptr};
    wolf = new Wolf;
    return wolf;
}

Wolf::Wolf(std::string name_val, int strength_val)
    : Creature(name_val, strength_val) {
}

Wolf::~Wolf() {
}