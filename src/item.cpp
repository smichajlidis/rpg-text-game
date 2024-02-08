#include <iostream>
#include "../include/item.h"

void Item::decrease_amount(int val) {
    amount-=val;
}

void Item::increase_amount(int val) {
    amount+=val;
}

std::string Item::return_name() {
        return name;
}

int Item::return_price() {
    return price;
}

int Item::return_amount() {
    return amount;
}

Item::Item(std::string name_val, int price_val, int amount_val)
    : name {name_val}, price {price_val}, amount {amount_val} {
}

Item::~Item() {
}