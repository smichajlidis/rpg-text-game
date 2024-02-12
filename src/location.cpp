#include "../include/location.h"
#include "../include/creature/player.h"
#include "../include/item.h"

#include <iostream>
  
void Location::equipment_menu() {
    std::string choice {};
  //  (*player).equipment.display_equipment();
    if (!(*player).equipment.is_empty()) {
        do {
            clear();
            std::cout<<"\n== YOUR EQUIPMENT ==\n\n";
            (*player).equipment.display_equipment();
            std::cout<<"\nPass the number of an item to show options or pass any other key to return: ";
            std::cin>>choice;
            bool is_number {true};
            for (char const &ch : choice) {
            if (std::isdigit(ch) == 0) 
                is_number = false;
            }
            if (is_number == false) {
             //   std::cout<<"\nYou have to pass a corrent value (wrong char!)";
                choice = "0";
            }
            else {
                int position {stoi(choice)-1};
                int size {static_cast<int>((*player).equipment.items.size())};
                if (position < 0 || position >= size) {
                  //  std::cout<<"\nYou have to pass a correct value";
                    choice = "0";
                }
                else {
                    char i {};
                    std::cout<<"\n1. Show details\n";
                    std::cout<<"2. Use\n\n";
                    std::cout<<"0. Return\n\n";
                    std::cout<<"What do you want to do? ";
                    std::cin>>i;
                        switch (i) {
                            case '1': {
                                (*(*player).equipment.items.at(position)).show_details();
                                std::cout<<"\nPress any key to continue";
                                std::cin>>i;
                                break;
                            }
                            case '2': {
                                if ((*(*player).equipment.items.at(position)).return_class_name() == "weapon")
                                    (*player).active_weapon = (*player).equipment.items.at(position);
                                std::cout<<"\n"<<(*player).active_weapon->return_name()<<" is now your active weapon\n";
                                    std::cout<<"\nPress any key to continue: ";
                                    std::cin>>choice;
                                break;
                            }
                                     break;
                            default: break;
                    }                
                }
               // std::cout<<"\nPress any key to return: ";
               // std::cin>>choice;
            }
        } while (stoi(choice) != 0);
    }
    else {
        std::cout<<"\nYour equipment is empty - press any key to return: ";
        std::cin>>choice;
    }
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

Location::Location(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val, std::string choice_5_val,
                    std::shared_ptr<Location> location_one, std::shared_ptr<Location> location_two, std::shared_ptr<Location> location_three, std::shared_ptr<Location> location_four, std::shared_ptr<Location> location_five)
    : name {name_val}, description {description_val}, choice_1 {choice_1_val}, choice_2 {choice_2_val}, choice_3 {choice_3_val}, choice_4 {choice_4_val}, choice_5 {choice_5_val},
    location_one {location_one}, location_two {location_two}, location_three {location_three}, location_four {location_four}, location_five {location_five} {
    }

Location::~Location() {
}

std::shared_ptr<Location> Location::moveToLocationOne() { return location_one; }
std::shared_ptr<Location> Location::moveToLocationTwo() { return location_two; }
std::shared_ptr<Location> Location::moveToLocationThree() { return location_three; }
std::shared_ptr<Location> Location::moveToLocationFour() { return location_four; }
std::shared_ptr<Location> Location::moveToLocationFive() { return location_five; }