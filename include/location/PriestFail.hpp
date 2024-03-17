#ifndef _PRIESTFAIL_HPP_
#define _PRIESTFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class PriestFail: public InteractionWithNPC {

public:
    PriestFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "- Live me alone stranger!",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, game_state, description, choice_1) {}

    ~PriestFail() = default;
};

#endif