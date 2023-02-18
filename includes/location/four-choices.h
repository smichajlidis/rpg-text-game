#ifndef _FOURCHOICES_H_
#define _FOURCHOICES_H_
#include <iostream>

class FourChoices: public Location {

    std::string choice_1;
    std::string choice_2;
    std::string choice_3;
    std::string choice_4;

public:

    FourChoices(std::string name_val = "nowhere", std::string description_val = "description", std::string choice_1_val = "none", std::string choice_2_val = "none", std::string choice_3_val = "none", std::string choice_4_val = "none");
    ~FourChoices();

};

#endif