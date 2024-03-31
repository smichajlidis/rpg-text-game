#include "../include/Player.hpp"

#include <algorithm>

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

void Player::increaseLuck(std::uint16_t val) {
    luck+=val;
}

void Player::increaseCharisma(std::uint16_t val) {
    charisma+=val;
}

void Player::setCurrentEnemy(std::shared_ptr<LivingBeing> enemy) {
    current_enemy = std::make_shared<LivingBeing>(*enemy);
}

std::string Player::getCurrentEnemyName() const {
    return ((current_enemy) ? current_enemy->getName() : "");
}

std::string Player::getCurrentEnemyNameUppercase() const {
    std::string temp {current_enemy->getName()};
    std::transform(temp.begin(), temp.end(), temp.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
    return temp;
}

void Player::decreaseCurrentEnemyHP(std::uint16_t val) {
    current_enemy->decreaseHP(val);
}

std::uint16_t Player::getCurrentEnemyHP() const {
    return current_enemy->getHP();
}

uint16_t Player::getCurrentEnemyStrength() const {
    return current_enemy->getStrength();
}

void Player::deleteCurrentEnemy() {
    current_enemy = nullptr;
}