#ifndef _GOSSIP_H_
#define _GOSSIP_H_

#include "../location.h"

#include <iostream>

class Gossip: public Location {

    Player* player;

    public:

    void point_player(Player*);
    void display_event();

    virtual Location* making_a_choice();

    Gossip(std::string name_val = "gossip");
    ~Gossip();
};

#endif