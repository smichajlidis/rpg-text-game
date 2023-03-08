#include <iostream>
#include <ctime>
#include "../includes/creature.h"
#include "../includes/equipment.h"

void Creature::display_enemy() {
    std::cout<<"|Enemy: "<<name<<" | Hp: "<<hp<<" | Weapon: ";
    if (active_weapon != nullptr)
        std::cout<<(*active_weapon).return_name()<<"|\n\n";
    else
        std::cout<<"none|\n\n";
}

int Creature::return_hitForce() {
    srand(time(NULL));
    if ((active_weapon) != nullptr)
        return (std::rand() % (strength+(*active_weapon).return_value()) + (strength+(*active_weapon).return_value()/2));
    else
        return (std::rand() % strength + strength/2);
}

void Creature::increase_hp(int hp_val) {
    if (hp+hp_val<=100)
        hp+=hp_val;
    else 
        hp=100;
    std::cout<<"hp +"<<hp_val<<"\n";
}

void Creature::restore_hp() {
    hp=100;
    std::cout<<"[complete restoration of hp]\n";
}

std::string Creature::return_name() {
    return name;
}

Creature::Creature(std::string name_val, int strength_val, Item* active_weapon_val, int hp_val)
    : name {name_val}, strength {strength_val}, active_weapon {active_weapon_val}, hp {hp_val} {
    }

Creature::~Creature() {
}