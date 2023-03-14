#ifndef _EQUIPMENT_H_
#define _EQUIPMENT_H_
#include <iostream>
#include <vector>

class Armor;
class Clothes;
class Weapon;
class HuntingWeapon;
class Item;
class Food;

class Equipment {

    int gold;
    std::vector <Item*> items;

public:

    void display_equipment();
    Item* equipment_choice();
    Item* looking_for_item(int choice);
    bool is_empty();
    bool is_chapel_key();

    int return_gold();

    void add_gold(int);
    void add_item(Item*);

    void remove_gold(int);
    void remove_item(Item*);

    Equipment();
    ~Equipment();

    friend class OrderBeer;
    friend class GameState;
    friend class Selling;
    friend class Buying;
    friend class Creature;
    friend class Priest;
    friend class Ladies;
    friend class Location;
    friend class FoundFood;
    friend class Hunting;
};

#endif