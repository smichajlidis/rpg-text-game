#include "../../include/location/ApproachingChapel.hpp"
#include "../../include/location/ApproachingChapelSuccess.hpp"
#include "../../include/location/ClosedChapel.hpp"

ApproachingChapel::ApproachingChapel(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    game_state->addLocation("approaching_chapel_success", std::make_shared<ApproachingChapelSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("closed_chapel", std::make_shared<ClosedChapel>(game_state));

    related_locations.push_back("approaching_chapel_success");
    related_locations.push_back("closed_chapel");
}

std::string ApproachingChapel::getNextLocationName(std::uint32_t val) {
    return (player->findItemInEquipment("chapel_key") ? related_locations.at(0) : related_locations.at(1));
}