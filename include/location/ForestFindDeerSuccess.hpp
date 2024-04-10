#ifndef _FORRESFINDDEERSUCCESS_HPP_
#define _FORRESFINDDEERSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class ForestFindDeerSuccess: public InteractionWithNPC {

public:
    ForestFindDeerSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "As you journey through the forest, you catch a glimpse of movement among the trees, signaling the presence of potential prey. Reacting swiftly, you retrieve your bow from your inventory, considering the possibility of a successful hunt.",
        const std::string& choice_1 = "Try to hunt",
        const std::string& choice_2 = "Move forward",
        const std::string& choice_3 = "Enough exploring");

    ~ForestFindDeerSuccess() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif