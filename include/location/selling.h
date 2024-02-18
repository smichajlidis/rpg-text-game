#ifndef _SELLING_H_
#define _SELLING_H_

#include "../location.h"

class Equipment;

class Selling: public Location {
    
    Equipment* equipment;
    Equipment* trade_goods;

public:

    void point_equipment(Equipment*);
    void point_trade_goods(Equipment*);

    Selling();
    ~Selling();

    friend class GameState;

};

#endif