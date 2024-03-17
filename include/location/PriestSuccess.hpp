#ifndef _PRIESTSUCCESS_HPP_
#define _PRIESTSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class PriestSuccess: public InteractionWithNPC {

public:
    PriestSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = " - said priest.",
        const std::string& choice_1 = "Order two beers for you",
        const std::string& choice_2 = "Ask for a chapel",
        const std::string& choice_3 = "Return");

    ~PriestSuccess() = default;
};

#endif