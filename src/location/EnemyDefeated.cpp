#include "../../include/location/EnemyDefeated.hpp"

#include <iostream>

EnemyDefeated::EnemyDefeated(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}

void EnemyDefeated::printLocation() {
    std::cout << "The " << player->getCurrentEnemyName() << " is dead. You've got:\n" << std::endl;
    player->printCurrentEnemyEquipment();
    player->getItemsFromCurrentEnemy();
    player->deleteCurrentEnemy();
    std::cout << "\n";
    printChoices();
}

std::string EnemyDefeated::getNextLocationName(std::uint32_t val) {
    
    switch (val) {
        case 1:
            return ((player->getWhereIsPlayer() == "forest") ? "forest_exploration" : "dungeons");
            break;
        case 2:
            return ((player->getWhereIsPlayer() == "forest") ? "forest_exploration" : "approaching_chapel_success");
            break;
        default:
            break;
    }
    return "enemy_defeated";
}