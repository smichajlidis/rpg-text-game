#include <iostream>
#include "../../../includes/item/weapon/sword.h"

void Sword::show_details() {
    std::cout<<"\nname: "<<name;
    std::cout<<"\n\namount: "<<amount;
    std::cout<<"\nworth: "<<price;
    std::cout<<"\nhit force: "<<hitForce;
    std::cout<<"\n\n";
}

Item* Sword::clone() {
    Item* sword {nullptr};
    sword = new Sword;
    return sword;
}

std::string Sword::return_class_name() {
    return "weapon";
}

int Sword::return_value() {
    return hitForce;
}

Sword::Sword(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : Weapon(name_val, price_val, hitForce_val, amount_val) {
}

Sword::~Sword() {
}