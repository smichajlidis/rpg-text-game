#ifndef _ALTARS_H_
#define _ALTARS_H_

#include "../location.h"

class Altars: public Location {

public:

    virtual Location* making_a_choice();

    Altars(std::string name_val = "altars", std::string description_val = "You see several altars - each for other god that can give you something else. The question is: what do you want to pray for?", std::string choice_1_val = "Strength", std::string choice_2_val = "Charisma", std::string choice_3_val = "Luck", std::string choice_4_val = "Gold", std::string choice_5_val = "Special weapon");
    ~Altars();

};

#endif