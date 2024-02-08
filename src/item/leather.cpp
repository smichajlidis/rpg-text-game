#include <iostream>
#include "../../include/item/leather.h"

void Leather::show_details() {
    std::cout<<"\nname: "<<return_name();
    std::cout<<"\n\namount: "<<return_amount();
    std::cout<<"\nworth: "<<return_price();
    std::cout<<"\n\n";
}

Item* Leather::clone() {
    Item* leather {nullptr};
    leather = new Leather;
    return leather;
}

std::string Leather::return_class_name() {
    return "item";
}

int Leather::return_value() {
    return 0;
}

Leather::Leather(std::string name_val, int price_val)
    : Item(name_val, price_val) {
}

Leather::~Leather() {
}