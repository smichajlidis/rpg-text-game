#ifndef _LADIES_HPP_
#define _LADIES_HPP_

#include "../InteractionWithNPC.hpp"

class Ladies: public InteractionWithNPC {

public:
    Ladies(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = " - said ladies.",
        const std::string& choice_1 = "Go upstairs",
        const std::string& choice_2 = "Just flirt with them",
        const std::string& choice_3 = "Return");

    ~Ladies() = default;
};

#endif