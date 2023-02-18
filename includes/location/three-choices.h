#ifndef _THREECHOICES_H_
#define _THREECHOICES_H_
#include <iostream>

class ThreeChoices: public Location {

    std::string choice_1;
    std::string choice_2;
    std::string choice_3;

public:

    ThreeChoices(std::string name_val = "nowhere", std::string description_val = "description", std::string choice_1_val = "none", std::string choice_2_val = "none", std::string choice_3_val = "none");
    ~ThreeChoices();

};

#endif