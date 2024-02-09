#include <iostream>
#include <ctime>
#include "../include/creature.h"
#include "../include/equipment.h"
#include "../include/item.h"

void Creature::give_a_weapon(Item* weapon) {
    active_weapon = weapon;
    equipment.add_item(weapon);
}

bool Creature::have_a_bow() {
    bool result {false};
    for (auto i: equipment.items) {
        if (i->return_name() == "bow")
            result = true;
    }
    return result;
}

int Creature::return_hp() {
    return hp;
}

void Creature::decrease_hp(int hit) {
    hp-=hit;
}

void Creature::display_enemy() {
    std::cout<<"| Enemy: "<<name<<" | Hp: "<<hp<<" | Weapon: ";
    if (active_weapon != nullptr)
        std::cout<<(*active_weapon).return_name()<<" |\n\n";
    else
        std::cout<<"none |\n\n";
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

int Creature::return_gold() {
    return equipment.return_gold();
}

void Creature::remove_gold(int val) {
    equipment.remove_gold(val);
    std::cout<<"[gold -"<<val<<"]\n";
}

void Creature::increase_strength(int val) {
    strength+=val;
}

void Creature::decrease_strength(int val) {
    strength-=val;
}

int Creature::return_strength() {
    return strength;
}

void Creature::restore_hp() {
    hp=100;
    std::cout<<"[complete restoration of hp]\n";
}

void Creature::increase_gold(int val) {
    equipment.gold+=val;
  //  std::cout<<"[gold +"<<val<<"]";
}

std::string Creature::return_name() {
    return name;
}

Creature::Creature(std::string name_val, int strength_val, Item* active_weapon_val, int hp_val)
    : name {name_val}, strength {strength_val}, active_weapon {active_weapon_val}, hp {hp_val} {
    }

Creature::~Creature() {
}