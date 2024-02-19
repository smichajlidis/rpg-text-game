#ifndef _ALTARS_H_
#define _ALTARS_H_

#include "../Location.hpp"

class Altars: public Location {

public:
    Altars(const std::string& description = "You see several altars - each for other god that can give you something else. The question is: what do you want to pray for?",
    const std::string& choice_1 = "Strength",
    const std::string& choice_2 = "Charisma",
    const std::string& choice_3 = "Luck",
    const std::string& choice_4 = "Gold",
    const std::string& choice_5 = "Special weapon")
    : Location(description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~Altars();
};

#endif