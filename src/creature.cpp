#include <iostream>
#include "../includes/creature.h"
#include "../includes/equipment.h"

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