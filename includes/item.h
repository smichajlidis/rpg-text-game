#ifndef _ITEM_H_
#define _ITEM_H_
#include <iostream>

class Equipment;

class Item {

    std::string name;
    int price;
    int amount;

    friend class Equipment;
    friend class GameState;
    friend class Bow;

public:

    std::string get_name();
    int get_price();
    int get_amount();

    Item(std::string name_val = "none", int price_val = 0, int amount_val = 1);
    ~Item();

};

#endif