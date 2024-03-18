#ifndef _APPROACHINGINNKEEPER_HPP_
#define _APPROACHINGINNKEEPER_HPP_

#include "../InteractionWithNPC.hpp"

class ApproachingInnkeeper: public InteractionWithNPC {

public:
    ApproachingInnkeeper(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "- Hello stranger, what do you wish?",
        const std::string& choice_1 = "Ask for a beer",
        const std::string& choice_2 = "Trade",
        const std::string& choice_3 = "Ask for a gossip",
        const std::string& choice_4 = "Order something to eat",
        const std::string& choice_5 = "Say goodbye")
        : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~ApproachingInnkeeper() = default;
};

#endif