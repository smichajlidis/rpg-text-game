#ifndef _TRADE_H_
#define _TRADE_H_
#include <iostream>

class Trade: public Location {

public:

    virtual Location* making_a_choice();

    Trade(std::string name_val = "trade");
    ~Trade();

};

#endif