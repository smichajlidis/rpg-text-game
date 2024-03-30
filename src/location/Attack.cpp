#include "../../include/location/Attack.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

Attack::Attack(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    related_locations.push_back("attack");
    related_locations.push_back("forest");
}

void Attack::printLocation() {

    std::cout << "You attacked the " << player->getCurrentEnemyName() << " and it has " << player->getCurrentEnemyHP() << " left." << std::endl;
    if (player->getCurrentEnemyHP() > 0) {
        std::cout << "The " << player->getCurrentEnemyName() << " attacked you and you have " << player->getHP() << " left." << std::endl;
    }
    printDescriptions();
}

std::string Attack::getNextLocationName(std::uint32_t val) {
    if (val == 1) {
        srand(time(NULL));
        player->decreaseHP(rand() % player->getCurrentEnemyStrength());
        player->decreaseCurrentEnemyHP(rand() % player->getStrength());
    }
    return related_locations.at(val-1);
}