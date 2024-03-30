#include "../../include/location/ForestMeetEnemy.hpp"
#include "../../include/location/Attack.hpp"

#include <ctime>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstdlib>

ForestMeetEnemy::ForestMeetEnemy(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    std::shared_ptr<LivingBeing> wolf = std::make_shared<LivingBeing>(10, "wolf");
    game_state->addEnemy("wolf", wolf);
    std::shared_ptr<LivingBeing> bear = std::make_shared<LivingBeing>(30, "bear");
    game_state->addEnemy("bear", bear);
    std::shared_ptr<LivingBeing> bandit = std::make_shared<LivingBeing>(12, "bandit");
    game_state->addEnemy("bandit", bandit);

    related_enemies.push_back("wolf");
    related_enemies.push_back("bear");
    related_enemies.push_back("bandit");

    game_state->addLocation("attack", std::make_shared<Attack>(game_state->getPlayer(), game_state));

    related_locations.push_back("attack");
    related_locations.push_back("forest");

}

void ForestMeetEnemy::printLocation() {
    srand(time(NULL));
    player->setCurrentEnemy(game_state->getEnemy(related_enemies.at(std::rand() % related_enemies.size())));
    std::cout << player->getCurrentEnemyNameUppercase();
    printDescriptions();
} 
    
std::string ForestMeetEnemy::getNextLocationName(std::uint32_t val) {
    if (val == 1) {
        srand(time(NULL));
        player->decreaseHP(rand() % player->getCurrentEnemyStrength());
        player->decreaseCurrentEnemyHP(rand() % player->getStrength());
    }
    return related_locations.at(val-1);
}
