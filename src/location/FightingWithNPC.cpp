#include "../../include/location/FightingWithNPC.hpp"
#include "../../include/location/NPCDefeated.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

FightingWithNPC::FightingWithNPC(std::shared_ptr<NPC> npc_val, std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    npc = npc_val;

    game_state->addLocation("thugs_defeated", std::make_shared<NPCDefeated>(std::move(npc_val), game_state->getPlayer(), game_state));

    related_locations.push_back("fighting_with_thugs");
    related_locations.push_back("thugs_defeated");
    related_locations.push_back("try_to_escape");
}

void FightingWithNPC::printLocation() {
    if (npc->getFightingSentence() != "") {
        std::cout << npc->getFightingSentence() << "\n\n";
    }
    std::cout << "You attacked the " << npc->getName() << " and it has " << npc->getHP() << " left." << std::endl;
    std::cout << "The " << npc->getName() << " attacked you and you have " << player->getHP() << " left." << std::endl;
    std::cout << "\n";
    printChoices();
}

std::string FightingWithNPC::getNextLocationName(std::uint32_t val) {
        if (val == 1) {
            srand(time(NULL));
            player->decreaseHP(rand() % npc->getStrength());
            npc->decreaseHP(rand() % player->getStrength());
            return ((npc->getHP() > 0) ? "fighting_with_npc" : "thugs_defeated");
        }
        return "try_to_escape";
}