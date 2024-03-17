#ifndef _GAMBLERS_HPP_
#define _GAMBLERS_HPP_

#include "../InteractionWithNPC.hpp"

class Gamblers: public InteractionWithNPC {

public:
    Gamblers(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "How much do you want to bet?",
    const std::string& choice_1 = "10",
    const std::string& choice_2 = "20",
    const std::string& choice_3 = "50",
    const std::string& choice_4 = "100",
    const std::string& choice_5 = "Leave the table")
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~Gamblers() = default;
};

#endif