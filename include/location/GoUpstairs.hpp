#ifndef _GOUPSTAIRS_HPP_
#define _GOUPSTAIRS_HPP_

#include "../InteractionWithNPC.hpp"

class GoUpstairs: public InteractionWithNPC {

public:
    GoUpstairs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "You are going upstairs and... having a good time.",
        const std::string& choice_1 = "Go downstairs")
        : InteractionWithNPC(player, game_state, description, choice_1) {}

    ~GoUpstairs() = default;
};

#endif