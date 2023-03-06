#include <iostream>
#include "../../includes/item/chapel_key.h"

void ChapelKey::show_details() {
    std::cout<<"\nname: "<<name;
    std::cout<<"\n\namount: "<<amount;
    std::cout<<"\nworth: "<<price;
    std::cout<<"\nfurthermore: by the key you can open the chapel";
    std::cout<<"\n\n";
}

Item* ChapelKey::clone() {
    Item* chapel_key {nullptr};
    chapel_key = new ChapelKey;
    return chapel_key;
}

std::string ChapelKey::return_class_name() {
    return "item";
}

ChapelKey::ChapelKey(std::string name_val)
    : Item(name_val) {
}

ChapelKey::~ChapelKey() {
}