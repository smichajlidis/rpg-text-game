#ifndef _GOSSIP_H_
#define _GOSSIP_H_

#include "../location.h"

class Gossip: public Location {

    Player* player;

    public:

    void point_player(Player*);
    void display_event();


    Gossip();
    ~Gossip();
};

#endif