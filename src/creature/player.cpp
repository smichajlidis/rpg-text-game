#include <iostream>
#include "../../includes/creature/player.h"

Player::Player(std::string name_val, int strength_val, int charisma_val, int luck_val, int hp_val)
    : Creature(name_val, strength_val, hp_val), charisma {charisma_val}, luck {luck_val} {
    }

Player::~Player() {
}