#ifndef _FLIRTINGSUCCESS_HPP_
#define _FLIRTINGSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class FlirtingSuccess: public InteractionWithNPC {

public:
    FlirtingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Oh, you are so sweet Darling! Tell us more!",
        const std::string& choice_1 = "Still flirting",
        const std::string& choice_2 = "Go upstairs",
        const std::string& choice_3 = "Say goodbye");

    ~FlirtingSuccess() = default;
};

#endif