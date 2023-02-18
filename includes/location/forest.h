#ifndef _FOREST_H_
#define _FOREST_H_
#include <iostream>

class Forest: public Location {

    std::string choice_1;
    std::string choice_2;

public:

    virtual void display_location();

    Forest(std::string name_val = "forest", std::string description_val = "Walking between trees.", std::string choice_1_val = "Forest exploration", std::string choice_2_val = "Go to thugs");
    ~Forest();

};

#endif