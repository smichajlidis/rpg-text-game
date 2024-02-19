#ifndef _ORDER_BEER_H_
#define _ORDER_BEER_H_

#include "../Location.hpp"

class Player;

class OrderBeer: public Location {

    Player* player;

public:


    void point_player(Player*);
    void display_event();

    OrderBeer();
    ~OrderBeer();

};

#endif