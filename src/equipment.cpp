#include <iostream>
#include <vector>
#include "../includes/equipment.h"

Equipment::Equipment(Armor obj) {
    armors.push_back(obj);
}

Equipment::~Equipment() {
}