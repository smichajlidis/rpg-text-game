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

    std::vector <Armor> armors;
    std::vector <Clothes> clothes;
    std::vector <Weapon> weapons;
    std::vector <HuntingWeapon> hunting_weapons;
    std::vector <Item> items;
    std::vector <Food> food;

public:

    int return_gold();

    void add_gold(int);
    void add_armor(Armor);
    void add_clothes(Clothes);
    void add_weapon(Weapon);
    void add_hunting_weapon(HuntingWeapon);
    void add_item(Item);
    void add_food(Food);

    void remove_gold(int);
    void remove_armor(Armor);
    void remove_clothes(Clothes);
    void remove_weapon(Weapon);
    void remove_hunting_weapon(HuntingWeapon);
    void remove_item(Item);
    void remove_food(Food);

    Equipment();
    ~Equipment();

    friend class OrderBeer;
    friend class GameState;
};

#endif