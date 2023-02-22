#ifndef _TRADE_H_
#define _TRADE_H_
#include <iostream>
#include "../equipment.h"

class Trade: public Location {
    
    Equipment trade_goods;

public:

    virtual Location* making_a_choice();

    Trade(std::string name_val = "trade");
    ~Trade();

};

#endif