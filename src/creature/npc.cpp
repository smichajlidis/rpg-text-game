#include <iostream>
#include "../../includes/creature/npc.h"

void NPC::increase_favor() {
    if (favor < 90)
        favor = 100;
    else
        favor+=10;
    std::cout<<name<<" liked you a bit more!\n";
}

void NPC::decrease_favor() {
    if (favor < 15)
        favor = 0;
    else
        favor-=15;
    std::cout<<"failure! - "<<name<<" likes you a little less.\n";
}

void NPC::display_npc_details() {
    std::cout<<"Your interlocutor: "<<name<<" || Favor: "<<favor<<"/100";
}

NPC::NPC(std::string name_val, int strength_val, Item* active_weapon_val, int hp_val, int favor_val)
    : Creature(name_val, strength_val, active_weapon_val, hp_val), favor {favor_val} {
}

NPC::~NPC() {
}