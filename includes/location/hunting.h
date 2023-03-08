#ifndef _HUNTING_H_
#define _HUNTING_H_
#include <iostream>
#include <vector>

class Creature;

class Hunting: public Location {

    std::vector <Creature*> related_creatures;

    public:

    virtual Location* making_a_choice();

    Hunting(std::string name_val="hunting");
    ~Hunting();
};

#endif