#include <iostream>
#include "../../includes/item/armor.h"

Armor::Armor(std::string name_val, int price_val, int armorStrength_val, int amount_val)
    : Item(name_val, price_val, amount_val), armorStrength {armorStrength_val} {
}

Armor::~Armor() {
}