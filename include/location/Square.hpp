#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include "../location.h"

class Square: public Location {

public:
    Square(const std::string& name = "square",
    const std::string& description = "You are standing on a square. You see a tavern on the right. On the left - a chapel. Behind you is an entrance to forest.",
    const std::string& choice_1 = "Go to the tavern",
    const std::string& choice_2 = "Go to forest",
    const std::string& choice_3 = "Go to the chapel")
    : Location(name, description, choice_1, choice_2, choice_3) {}

    ~Square() = default;

};

#endif