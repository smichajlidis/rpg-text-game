#include "../../include/location/TryToEscapeFail.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

TryToEscapeFail::TryToEscapeFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    related_locations.push_back("fighting_with_enemy");
    related_locations.push_back("enemy_defeated");
    related_locations.push_back("try_to_escape");
}

void TryToEscapeFail::printLocation() {
    std::cout << "You failed to escape!" << std::endl;
    std::cout << "The " << player->getCurrentEnemyName() << " attacked you and you have " << player->getHP() << " left." << std::endl;
    std::cout << "\n";
    printChoices();
}

std::string TryToEscapeFail::getNextLocationName(std::uint32_t val) {
        if (val == 1) {
            srand(time(NULL));
            player->decreaseHP(rand() % player->getCurrentEnemyStrength());
            player->decreaseCurrentEnemyHP(rand() % player->getStrength());
            return ((player->getCurrentEnemyHP() > 0) ? "fighting_with_enemy" : "enemy_defeated");
        }
        return "try_to_escape";
}