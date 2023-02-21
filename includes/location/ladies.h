#ifndef _LADIES_H_
#define _LADIES_H_
#include <iostream>

class Ladies: public Location {

public:

    virtual Location* making_a_choice();

    Ladies(std::string name_val = "ladies", std::string description_val = "Hey, Darling, what good we can do for you? Wanna go upstairs with us?", std::string choice_1_val = "Go apstairs", std::string choice_2_val = "Just flirt with them");
    ~Ladies();

};

#endif