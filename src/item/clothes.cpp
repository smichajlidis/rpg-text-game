#include <iostream>
#include "../../include/item/clothes.h"

Clothes::Clothes(std::string name_val, int price_val, int charismaIncrease_val, int amount_val)
    : Item(name_val, price_val, amount_val), charismaIncrease {charismaIncrease_val} {
}

Clothes::~Clothes() {
}