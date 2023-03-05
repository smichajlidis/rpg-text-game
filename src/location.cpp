#include <iostream>
#include "../includes/location.h"
  
void Location::equipment_menu() {
    char choice {};
    std::cout<<"[Place for showing equipment]\n";
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}

void Location::save_menu() {
    char choice {};
    std::cout<<"[Here you will save your game]\n";
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}

void Location::load_menu() {
    char choice {};
    std::cout<<"[Here you will load your game]\n";
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}
    
void Location::exit_menu() {
    char choice {};
    std::cout<<"[Here you will exit game]\n";
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
}

void Location::print_location() {
    if (description != "none") {
            std::cout<<description<<"\n\n";
        if (choice_1!="none")
            std::cout<<"1. "<<choice_1<<"\n";
        if (choice_2!="none")
            std::cout<<"2. "<<choice_2<<"\n";
        if (choice_3!="none")
            std::cout<<"3. "<<choice_3<<"\n";
        if (choice_4!="none")
            std::cout<< "4. "<<choice_4<<"\n";
        if (choice_5!="none")
            std::cout<< "5. "<<choice_5<<"\n";
        if (name != "square")
            std::cout<<"0. Return"<<"\n\n";
        else
            std::cout<<"\n";
        std::cout<<"What do you do? ";
    }
}

void Location::clear() {
    #if defined _WIN32
        system("cls");
        //clrscr(); // including header file : conio.h
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
        //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

void Location::player_pointer(Player* ptr) {
    player = ptr;
}

Location::Location(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val, std::string choice_5_val)
    : name {name_val}, description {description_val}, choice_1 {choice_1_val}, choice_2 {choice_2_val}, choice_3 {choice_3_val}, choice_4 {choice_4_val}, choice_5 {choice_5_val} {
    }

Location::~Location() {
}