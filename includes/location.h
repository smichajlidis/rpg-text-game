#ifndef _LOCATION_H_
#define _LOCATION_H_
#include <iostream>

class Location {

    std::string name;
    std::string description;

public:

    Location(std::string name_val = "nowhere", std::string description_val = "description");
    ~Location();
    
};

#endif