#include <iostream>
#include "../../../includes/item/food/forest_fruits.h"

void ForestFruits::show_details() {
    std::cout<<"\nname: "<<name;
    std::cout<<"\n\namount: "<<amount;
    std::cout<<"\nworth: "<<price;
    std::cout<<"\nHP restoration: "<<hpRestoration;
    std::cout<<"\n\n";
}

Item* ForestFruits::clone() {
    Item* forest_fruits {nullptr};
    forest_fruits = new ForestFruits;
    return forest_fruits;
}

std::string ForestFruits::return_class_name() {
    return "food";
}

int ForestFruits::return_value() {
    return hpRestoration;
}

ForestFruits::ForestFruits(std::string name_val, int price_val, int amount_val, int hpRestoration_val)
    : Food(name_val, price_val, hpRestoration_val, amount_val) {
}

ForestFruits::~ForestFruits() {
}