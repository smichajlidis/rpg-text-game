#include "../include/NPC.hpp"


void NPC::increaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player + val <= 100) ? attitude_to_player + val : 100);
}

void NPC::decreaseAttitudeToPlayer(std::uint16_t val) {
    attitude_to_player = ((attitude_to_player - val >= 0) ? attitude_to_player - val : 0);
}