#include <iostream>
#include "../includes/item.h"

std::string Item::get_name() {
    return name;
}

int Item::get_price() {
    return price;
}

int Item::get_amount() {
    return amount;
}

Item::Item(std::string name_val, int price_val, int amount_val)
    : name {name_val}, price {price_val}, amount {amount_val} {
}

Item::~Item() {
}