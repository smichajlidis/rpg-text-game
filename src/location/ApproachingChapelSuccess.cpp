#include "../../include/location/ApproachingChapelSuccess.hpp"
#include "../../include/location/ChapelAltars.hpp"
#include "../../include/location/Dungeons.hpp"

#include <iostream>

ApproachingChapelSuccess::ApproachingChapelSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3) 
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    game_state->addLocation("chapel_altars", std::make_shared<ChapelAltars>(game_state->getPlayer(), game_state));
    game_state->addLocation("dungeons", std::make_shared<Dungeons>(game_state->getPlayer(), game_state));

    related_locations.push_back("chapel_altars");
    related_locations.push_back("dungeons");
    related_locations.push_back("square");
}

void ApproachingChapelSuccess::printLocation() {
    player->setWhereIsPlayer("chapel");
    printDescription();
    std::cout << "\n\n";
    printChoices();
}
