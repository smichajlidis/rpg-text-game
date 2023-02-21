#ifndef _ORDER_BEER_H_
#define _ORDER_BEER_H_
#include <iostream>

class OrderBeer: public Location {

public:

    virtual Location* making_a_choice();

    OrderBeer(std::string name_val = "order_beer");
    ~OrderBeer();

};

#endif