#include <iostream>
#include "../../include/item/food.h"

Food::Food(std::string name_val, int price_val, int hpRestoration_val, int amount_val)
    : Item(name_val, price_val, amount_val), hpRestoration {hpRestoration_val} {
}

Food::~Food() {
}