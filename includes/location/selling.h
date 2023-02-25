#ifndef _SELLING_H_
#define _SELLING_H_
#include <iostream>

class Selling: public Location {
    
    Equipment* equipment;
    Equipment* trade_goods;

public:

    virtual Location* making_a_choice();
    void point_equipment(Equipment*);
    void point_trade_goods(Equipment*);

    Selling(std::string name_val = "selling");
    ~Selling();

    friend class GameState;

};

#endif