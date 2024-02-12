#include <iostream>
#include "../../include/location/square.h"

Location* Square::making_a_choice() {
    char choice {};

    std::cin>>choice;
    switch (choice) {
        case '1': return related_locations.at(1); break;
        case '2': return related_locations.at(2); break;
        case '3': return related_locations.at(3); break;
        case '6': clear(); equipment_menu(); return related_locations.at(0); break;
        case '7': clear(); load_menu(); return related_locations.at(0); break;
        case '8': clear(); save_menu(); return related_locations.at(0); break;
        case '9': clear(); exit_menu(); return related_locations.at(0); break;
        default: return related_locations.at(0); break;
    }
}

Square::Square() {

    name = "square";
    description = "You are standing on a square. You see a tavern on the right. On the left - a chapel. Behind you is an entrance to forest.";
    choice_1 = "Go to the tavern";
    choice_2 = "Go to forest";
    choice_3 = "Go to the chapel";

}

Square::~Square() {
}

