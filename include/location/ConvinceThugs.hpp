#ifndef _CONVINCETHUGS_HPP_
#define _CONVINCETHUGS_HPP_

#include "../InteractionWithNPC.hpp"

class ConvinceThugs: public InteractionWithNPC {

public:
    ConvinceThugs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Stay away from me you freak!",
        const std::string& choice_1 = "Try again",
        const std::string& choice_2 = "Try something else",
        const std::string& choice_3 = "Say goodbye")
        : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {}

    ~ConvinceThugs() = default;
};

#endif