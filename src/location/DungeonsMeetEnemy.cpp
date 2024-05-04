#include "../../include/location/DungeonsMeetEnemy.hpp"

#include <ctime>
#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstdlib>

DungeonsMeetEnemy::DungeonsMeetEnemy(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    std::shared_ptr<LivingBeing> skeleton = std::make_shared<LivingBeing>(25, "skeleton");
    Item rusty_dagger ("rusty_dagger", 35, "weapon", 10);
    skeleton->addItem(rusty_dagger);
    game_state->addEnemy("skeleton", skeleton);

    std::shared_ptr<LivingBeing> ghoul = std::make_shared<LivingBeing>(45, "ghoul");
    game_state->addEnemy("ghoul", ghoul);

    std::shared_ptr<LivingBeing> demon = std::make_shared<LivingBeing>(75, "demon");
    Item crystals ("crystals", 500);
    demon->addItem(crystals);
    game_state->addItem("crystals", crystals);
    game_state->addEnemy("demon", demon);

    related_enemies.push_back("skeleton");
    related_enemies.push_back("ghoul");
    related_enemies.push_back("demon");

    related_locations.push_back("fighting_with_enemy");
    related_locations.push_back("enemy_defeated");
    related_locations.push_back("try_to_escape");
}

void DungeonsMeetEnemy::printLocation() {
    srand(time(NULL));
    player->setCurrentEnemy(game_state->getEnemy(related_enemies.at(std::rand() % related_enemies.size())));
    std::cout << player->getCurrentEnemyNameUppercase();
    printDescription();
    std::cout << "\n\n";
    printChoices();
} 
    
std::string DungeonsMeetEnemy::getNextLocationName(std::uint32_t val) {
    if (val == 1) {
        srand(time(NULL));
        player->decreaseHP(rand() % player->getCurrentEnemyStrength());
        player->decreaseCurrentEnemyHP(rand() % player->getStrength());
        return ((player->getCurrentEnemyHP() > 0) ? "fighting_with_enemy" : "enemy_defeated");
    }
    return "try_to_escape";
}
