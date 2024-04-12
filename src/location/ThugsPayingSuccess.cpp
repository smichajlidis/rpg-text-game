#include "../../include/location/ThugsPayingSuccess.hpp"

#include <iostream>

ThugsPayingSuccess::ThugsPayingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description)
    : InteractionWithNPC(player, game_state, description) {

    npc = game_state->getNPC("thugs");
}

void ThugsPayingSuccess::printLocation() {
    std::string var;
    std::cout << descriptions.at(0) << std::endl;
    std::cout << "\nYOU WON! Press any key to continue ";
    std::cin >> var;
}