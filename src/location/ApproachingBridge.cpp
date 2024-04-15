#include "../../include/location/ApproachingBridge.hpp"
#include "../../include/location/ApproachingThugs.hpp"
#include "../../include/location/Bridge.hpp"

ApproachingBridge::ApproachingBridge(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    : InteractionWithNPC(player, game_state) {
    game_state->addLocation("approaching_thugs", std::make_shared<ApproachingThugs>(game_state->getPlayer(), game_state));
    game_state->addLocation("bridge", std::make_shared<Bridge>(game_state));
}

std::string ApproachingBridge::getNextLocationName(std::uint32_t val) {
    if (game_state->getNPC("thugs") != nullptr) {
        return "approaching_thugs";
    }
    else {
        player->setWin();
        return "bridge";
    }
}
