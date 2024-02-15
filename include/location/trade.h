#ifndef _TRADE_H_
#define _TRADE_H_

#include "../location.h"

#include <iostream>

class Trade: public Location {
    

public:


    Trade(std::string name_val = "trade", std::string description_val = "Would you like to buy or sell something?", std::string choice_1_val = "Buy", std::string choice_2_val = "Sell");
    ~Trade();

    friend class GameState;

};

#endif