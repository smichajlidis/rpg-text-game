#ifndef _PRIEST_H_
#define _PRIEST_H_
#include <iostream>

class Priest: public Location {

public:

    virtual Location* making_a_choice();

    Priest(std::string name_val = "priest", std::string description_val = "You see a priest who is.. a bit drunk.", std::string choice_1_val = "Talk to him");
    ~Priest();

};

#endif