#include "../include/Player.hpp"

std::uint16_t Player::getCharisma() const {
    return charisma;
}

std::uint16_t Player::getLuck() const {
    return luck;
}

std::uint16_t Player::getBeingDrunk() const {
    return being_drunk;
}

void Player::updateAfterEachRound() {
    if (being_drunk) {
        --being_drunk;
    }
}

void Player::increaseBeingDrunk(std::uint16_t val) {
    being_drunk+=val;
}