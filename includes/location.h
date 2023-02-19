#ifndef _LOCATION_H_
#define _LOCATION_H_
#include <iostream>

class Location {

    std::string name;
    std::string description;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;
    std::string answer_5;

public:

    void display_location();

    Location(std::string name_val = "nowhere", std::string description_val = "description", std::string answer_1_val = "none", std::string answer_2_val = "none", std::string answer_3_val = "none", std::string answer_4_val = "none", std::string answer_5_val = "none");
    ~Location();
    
};

#endif