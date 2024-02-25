#ifndef _GAMBLERS_HPP_
#define _GAMBLERS_HPP_

#include "../Location.hpp"

class Gamblers: public Location {

public:
    Gamblers(const std::string& description = "How much do you want to bet?",
    const std::string& choice_1 = "10",
    const std::string& choice_2 = "20",
    const std::string& choice_3 = "50",
    const std::string& choice_4 = "100",
    const std::string& choice_5 = "Leave the table")
    : Location(description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~Gamblers() = default;
};

#endif