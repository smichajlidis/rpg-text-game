#ifndef _BUYING_H_
#define _BUYING_H_

#include "../location.h"

class Equipment;

class Buying: public Location {
    
    Equipment* trade_goods;
    Equipment* equipment;

public:

    void point_equipment(Equipment*);
    void point_trade_goods(Equipment*);

    Buying();
    ~Buying();

    friend class GameState;

};

#endif