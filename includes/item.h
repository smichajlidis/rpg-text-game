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
    friend class Sword;

public:

    std::string return_name();
    int return_price();
    int return_amount();
    
    virtual Item* clone()=0;
    virtual void show_details()=0;


    void increase_amount(int);
    void decrease_amount(int);

    Item(std::string name_val = "none", int price_val = 0, int amount_val = 1);
    virtual ~Item();

};

#endif