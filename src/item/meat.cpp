#include <iostream>
#include "../../includes/item/meat.h"

void Meat::show_details() {
    std::cout<<"\nname: "<<return_name();
    std::cout<<"\n\namount: "<<return_amount();
    std::cout<<"\nworth: "<<return_price();
    std::cout<<"\n\n";
}

Item* Meat::clone() {
    Item* meat {nullptr};
    meat = new Meat;
    return meat;
}

std::string Meat::return_class_name() {
    return "item";
}

int Meat::return_value() {
    return 0;
}

Meat::Meat(std::string name_val, int price_val)
    : Item(name_val, price_val) {
}

Meat::~Meat() {
}