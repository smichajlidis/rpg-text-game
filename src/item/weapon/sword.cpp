#include <iostream>
#include "../../../includes/item/weapon/sword.h"

void Sword::show_details() {
    std::cout<<"\nname: "<<name;
    std::cout<<"\n\namount: "<<amount;
    std::cout<<"\nworth: "<<price;
    std::cout<<"\nhit force: "<<hitForce;
    std::cout<<"\n\n& & & & & &\n\n";
}

Sword::Sword(std::string name_val, int price_val, int hitForce_val, int amount_val)
    : Weapon(name_val, price_val, hitForce_val, amount_val) {
}

Sword::~Sword() {
}