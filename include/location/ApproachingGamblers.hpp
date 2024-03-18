#ifndef _APPROACHINGGAMBLERS_HPP_
#define _APPROACHINGGAMBLERS_HPP_

#include "../InteractionWithNPC.hpp"

class ApproachingGamblers: public InteractionWithNPC {

public:
    ApproachingGamblers(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "How much do you want to bet?",
    const std::string& choice_1 = "10",
    const std::string& choice_2 = "20",
    const std::string& choice_3 = "50",
    const std::string& choice_4 = "100",
    const std::string& choice_5 = "Leave the table")
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~ApproachingGamblers() = default;
};

#endif