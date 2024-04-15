#include "../include/NPC.hpp"

#include <ctime>
#include <cstdlib>

void NPC::increaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player + val <= 100) ? attitude_to_player + val : 100);
}

void NPC::decreaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player - val >= 0) ? attitude_to_player - val : 0);
}

std::uint16_t NPC::getAttitudeToPlayer() const {
    return attitude_to_player;
}

std::string NPC::getFightingSentence() const {
    srand(time(NULL));
    if (!fighting_sentences.empty()) {
        return fighting_sentences.at(std::rand() % fighting_sentences.size());
    }
    return "";
}

void NPC::addFightingSentence(const std::string& sentence) {
    fighting_sentences.push_back(sentence);
}