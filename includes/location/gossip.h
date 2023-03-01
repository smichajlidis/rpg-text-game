#ifndef _GOSSIP_H_
#define _GOSSIP_H_
#include <iostream>

class Gossip: public Location {

    virtual Location* making_a_choice();

    public:

    Gossip(std::string name_val = "gossip");
    ~Gossip();
};

#endif