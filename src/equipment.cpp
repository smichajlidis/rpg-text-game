#include <iostream>
#include <vector>
#include "../includes/equipment.h"
#include "../includes/item.h"
#include "../includes/item/armor.h"
#include "../includes/item/food.h"
#include "../includes/item/clothes.h"
#include "../includes/item/weapon.h"
#include "../includes/item/weapon/hunting_weapon.h"

void Equipment::add_gold(int val) {
    gold+=val;
}
void Equipment::add_armor(Armor obj) {
    bool done {false};
    for(auto &i: armors) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        armors.push_back(obj);
}
void Equipment::add_clothes(Clothes obj) {
    bool done {false};
    for(auto &i: clothes) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        clothes.push_back(obj);
}
void Equipment::add_weapon(Weapon obj) {
    bool done {false};
    for(auto &i: weapons) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        weapons.push_back(obj);
}
void Equipment::add_hunting_weapon(HuntingWeapon obj) {
    bool done {false};
    for(auto &i: hunting_weapons) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        hunting_weapons.push_back(obj);
}
void Equipment::add_item(Item obj) {
    bool done {false};
    for(auto &i: items) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        items.push_back(obj);
}
void Equipment::add_food(Food obj) {
    bool done {false};
    for(auto &i: food) {
        if (i.name == obj.name) {
            i.amount++;
            done = true;
        }
    }
    if (done == false)
        food.push_back(obj);
}

void Equipment::remove_gold(int val) {
    gold-=val;
}
void Equipment::remove_armor(Armor obj) {
    auto it = armors.begin();
    for(auto &i: armors) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else armors.erase(it);
        } 
    it++;
    }
}
void Equipment::remove_clothes(Clothes obj) {
    auto it = clothes.begin();
    for(auto &i: clothes) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else clothes.erase(it);
        } 
    it++;
    }
}
void Equipment::remove_weapon(Weapon obj) {
    auto it = weapons.begin();
    for(auto &i: weapons) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else weapons.erase(it);
        } 
    it++;
    }
}
void Equipment::remove_hunting_weapon(HuntingWeapon obj) {
    auto it = hunting_weapons.begin();
    for(auto &i: hunting_weapons) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else hunting_weapons.erase(it);
        } 
    it++;
    }
}
void Equipment::remove_item(Item obj) {
    auto it = items.begin();
    for(auto &i: items) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else items.erase(it);
        } 
    it++;
    }
}
void Equipment::remove_food(Food obj) {
    auto it = food.begin();
    for(auto &i: food) {
        if (i.name == obj.name) {
            if (i.amount > 1) {
                i.amount--;
            }
            else food.erase(it);
        } 
    it++;
    }
}

Equipment::Equipment() {
    gold = 0;
}

Equipment::~Equipment() {
}