#include <iostream>
#include <ctime>
#include "../includes/exploration.h"

void Exploration::point_player(Player* ptr) {
    player_ptr = ptr;
}

void Exploration::event_draw() {
    srand(time(NULL));
    switch(std::rand() % 4 + 1) {
        case 1: found_something(); break;
        case 2: enemy_attack(); break;
        case 3: creature_meeting(); break;
        default: nothing_found(); break;
    }
}

void Exploration::creature_meeting() {
    char choice {};
    std::cout<<"[creature meeting. You will can attack or moving forward. Hunting too.]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

void Exploration::nothing_found() {
    char choice {};
    std::cout<<"[nothing found]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

void Exploration::enemy_attack() {
    char choice {};
    std::cout<<"[enemy_attack(), place for battle engine]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

void Exploration::found_something() {
    char choice {};
    srand(time(NULL));
    Item* ptr = related_items.at(std::rand() % related_items.size());
    (*player_ptr).equipment.add_item(ptr);
    std::cout<<"You found "<<ptr->return_name()<<"!\n";
    std::cout<<"\n[+ "<<ptr->return_name()<<"]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
}

Exploration::Exploration() {
}

Exploration::~Exploration() {
}