#include <iostream>
#include "../../includes/creature/npc.h"

void NPC::display_npc_details() {
    std::cout<<"Your interlocutor: "<<name<<" || Favor: "<<favor<<"/100";
}

NPC::NPC(std::string name_val, int strength_val, int hp_val, int favor_val)
    : Creature(name_val, strength_val, hp_val), favor {favor_val} {
}

NPC::~NPC() {
}