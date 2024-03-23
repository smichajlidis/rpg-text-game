#include "../../include/location/AskingAboutChapel.hpp"
#include "../../include/location/AskingAboutChapelSuccess.hpp"
#include "../../include/location/AskingAboutChapelFail.hpp"

AskingAboutChapel::AskingAboutChapel(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    npc = game_state->getNPC("priest");

    game_state->addLocation("asking_about_chapel_success", std::make_shared<AskingAboutChapelSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("asking_about_chapel_fail", std::make_shared<AskingAboutChapelFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("asking_about_chapel_success");
    related_locations.push_back("asking_about_chapel_fail");
}

std::string AskingAboutChapel::getNextLocationName(std::uint32_t val) {
        if (npc->getAttitudeToPlayer() >= 80) {
            Item temp = npc->moveItem("chapel_key");
            if (!temp.empty()) {
                player->addItem(temp);
            }
            return related_locations.at(0);
        } else {
            npc->decreaseAttitudeToPlayer(20);
            return related_locations.at(1);
        }
}
