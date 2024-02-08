#include <iostream>
#include "../../../../include/item/weapon/hunting_weapon/bow.h"

void Bow::show_details() {
    std::cout<<"\nname: "<<name;
    std::cout<<"\n\namount: "<<amount;
    std::cout<<"\nworth: "<<price;
    std::cout<<"\nhit force: "<<hitForce;
    std::cout<<"\nfurthermore: enables hunting";
    std::cout<<"\n\n";
}

Item* Bow::clone() {
    Item* bow {nullptr};
    bow = new Bow;
    return bow;
}

std::string Bow::return_class_name() {
    return "hunting_weapon";
}

int Bow::return_value() {
    return hitForce;
}

Bow::Bow(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : HuntingWeapon(name_val, price_val, hitForce_val, amount_val) {
}

Bow::~Bow() {
}