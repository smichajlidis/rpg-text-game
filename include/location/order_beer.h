#ifndef _ORDER_BEER_H_
#define _ORDER_BEER_H_

#include "../location.h"

class Player;

class OrderBeer: public Location {

    Player* player;

public:
    
    virtual Location* making_a_choice();

    void point_player(Player*);
    void display_event();

    OrderBeer(std::string name_val = "order_beer");
    ~OrderBeer();

};

#endif