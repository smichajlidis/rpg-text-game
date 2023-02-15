#ifndef _EQUIPMENT_H_
#define _EQUIPMENT_H_
#include <iostream>
#include <vector>

class Armor;
class Clothes;
class Weapon;
class HuntingWeapon;
class Item;

class Equipment {

    std::vector <Armor> armors;
    std::vector <Clothes> clothes;
    std::vector <Weapon> weapons;
    std::vector <HuntingWeapon> hunting_weapon;
    std::vector <Item> items;

public:

    Equipment();
    ~Equipment();

};

#endif