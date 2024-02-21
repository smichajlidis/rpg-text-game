#ifndef _GAMBLERS_HPP_
#define _GAMBLERS_HPP_

#include "../Location.hpp"
#include "../point_player.h"

class PointPlayer;

class Gamblers: public Location, public PointPlayer {

public:
    Gamblers(const std::string& description = "How much do you want to bet?",
    const std::string& choice_1 = "5",
    const std::string& choice_2 = "10",
    const std::string& choice_3 = "20",
    const std::string& choice_4 = "50",
    const std::string& choice_5 = "100")
    : Location(description, choice_1, choice_2, choice_3, choice_4, choice_5), PointPlayer() {}

    ~Gamblers() = default;
};

#endif