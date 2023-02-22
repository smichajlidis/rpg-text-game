#include <iostream>
#include "../../includes/creature/player.h"

void Player::drinking(int drunk_val) {
    drunk+=20;
    std::cout<<"You are.. a bit drunk.\n";
}

Player::Player(std::string name_val, int strength_val, int charisma_val, int luck_val, int hp_val, int drunk_val)
    : Creature(name_val, strength_val, hp_val), charisma {charisma_val}, luck {luck_val}, drunk {drunk_val} {
    }

Player::~Player() {
}