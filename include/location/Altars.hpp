#ifndef _ALTARS_HPP_
#define _ALTARS_HPP_

#include "../Location.hpp"

class Altars: public Location {

public:
    Altars(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "You see several altars - each for other god that can give you something else. The question is: what do you want to pray for?",
    const std::string& choice_1 = "Strength",
    const std::string& choice_2 = "Charisma",
    const std::string& choice_3 = "Luck",
    const std::string& choice_4 = "Gold",
    const std::string& choice_5 = "Special weapon")
    : Location(game_state, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~Altars() = default;
};

#endif