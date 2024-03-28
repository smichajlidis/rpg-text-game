#ifndef _APPROACHINGTHUGS_HPP_
#define _APPROACHINGTHUGS_HPP_

#include "../InteractionWithNPC.hpp"

class ApproachingThugs: public InteractionWithNPC {

public:
    ApproachingThugs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Hello stranger, do you want to cross the bridge? No problem.. if you pay 1000 piece of gold. Deal?",
    const std::string& choice_1 = "Pay",
    const std::string& choice_2 = "Try to convince them",
    const std::string& choice_3 = "Attack them",
    const std::string& choice_4 = "Say goodbye")
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4) {}

    ~ApproachingThugs() = default;
};

#endif