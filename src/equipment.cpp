#include <iostream>
#include <vector>
#include "../includes/equipment.h"
#include "../includes/item.h"
#include "../includes/item/armor.h"
#include "../includes/item/food.h"
#include "../includes/item/clothes.h"
#include "../includes/item/weapon.h"
#include "../includes/item/weapon/hunting_weapon.h"


void Equipment::add_item(Item *item) {
    bool done {false};
    for(auto &i: items) {
        if ((*item).return_name() == (*i).return_name()) {
            (*i).increase_amount((*item).return_amount());
            done = true;
        }
    }
    if (done == false) {
        items.push_back(item->clone());
    }
}

void Equipment::remove_item(Item *item) {
    auto it = items.begin();
    for(auto &i: items) {
        if ((*i).return_name() == (*item).return_name()) {
            if ((*i).return_amount() > 1) {
                (*i).decrease_amount((*item).return_amount());
            }
    //        else delete items.erase(it);
                else {
                    delete i;
                    items.erase(it);
                    break;
                }
        }
    it++;
    }
}

void Equipment::display_equipment() {
    int i {1};
    for (auto &item: items) {
        std::cout<<i<<". "<<(*item).return_name()<<" amount: "<<(*item).return_amount()<<" worth: "<<(*item).return_price()<<"\n";
        ++i;
    }
    if (i == 1)
        std::cout << "Ups. Nothing to display.";
}

Item* Equipment::equipment_choice() {
    int choice {};
    std::cout<<"\nPass the number of an item: ";
    std::cin>>choice;
    return looking_for_item(choice);
}

Item* Equipment::looking_for_item(int choice) {
    int count {1};
    for (auto &item: items) {
        if (count == choice)
            return item;
        ++count;
    }
    return nullptr;
}

int Equipment::return_gold() {
    return gold;
}

void Equipment::add_gold(int val) {
    gold+=val;
    std::cout<<"gold +"<<val<<"\n";
}

void Equipment::remove_gold(int val) {
    gold-=val;
    std::cout<<"gold -"<<val<<"\n";
}

Equipment::Equipment() {
    gold = 0;
}

Equipment::~Equipment() {
}