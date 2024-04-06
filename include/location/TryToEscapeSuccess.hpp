#ifndef _TRYTOESCAPESUCCESS_HPP_
#define _TRYTOESCAPESUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class TryToEscapeSuccess: public InteractionWithNPC {

public:
    TryToEscapeSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "You escaped successfully!",
        const std::string& choice_1 = "Continue exploring",
        const std::string& choice_2 = "Enough for today");

    ~TryToEscapeSuccess() = default;
};

#endif