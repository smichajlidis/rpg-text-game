#ifndef _PRIEST_H_
#define _PRIEST_H_
#include <iostream>

class Priest:
    public Location, public NPC {

public:

    virtual Location* making_a_choice();

    Priest(std::string name_val = "priest");
    ~Priest();

};

#endif