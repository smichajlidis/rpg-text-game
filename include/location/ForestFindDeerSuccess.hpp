#ifndef _FORRESFINDDEERSUCCESS_HPP_
#define _FORRESFINDDEERSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class ForestFindDeerSuccess: public InteractionWithNPC {

public:
    ForestFindDeerSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "As you traverse through the forest, you stumble upon a deer, prompting you to draw your bow from your inventory and consider a potential hunt.",
        const std::string& choice_1 = "Try to hunt",
        const std::string& choice_2 = "Move forward",
        const std::string& choice_3 = "Enough exploring");

    ~ForestFindDeerSuccess() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif