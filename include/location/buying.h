#ifndef _BUYING_H_
#define _BUYING_H_

#include "../location.h"

class Equipment;

class Buying: public Location {
    
    Equipment* trade_goods;
    Equipment* equipment;

public:

    virtual Location* making_a_choice();

    void point_equipment(Equipment*);
    void point_trade_goods(Equipment*);

    Buying(std::string name_val = "buying");
    ~Buying();

    friend class GameState;

};

#endif