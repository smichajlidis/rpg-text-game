#include "../include/location.h"
#include "../include/creature/player.h"
#include "../include/item.h"

#include <iostream>
#include <algorithm>
  
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

    std::cout << description << "\n\n";

    std::uint32_t count {1};

    std::for_each(descriptions.begin() + 1, descriptions.end(), [&count](const std::string& choice) { 
        if (!choice.empty()) {
            std::cout << count << ". " << choice << std::endl;
            ++count;
        }
    });

    std::cout<<"\nWhat do you do? ";

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

Location::Location(std::shared_ptr<Location> location_one, std::shared_ptr<Location> location_two, std::shared_ptr<Location> location_three, std::shared_ptr<Location> location_four, std::shared_ptr<Location> location_five)
    : location_one(location_one), location_two(location_two), location_three(location_three), location_four(location_four), location_five(location_five) {
}

Location::Location(const std::string& name_val, const std::string& description_val, const std::string& choice_1_val, const std::string& choice_2_val, const std::string& choice_3_val, const std::string& choice_4_val, const std::string& choice_5_val)
    : name(name_val) {

    descriptions.push_back(description_val);
    descriptions.push_back(choice_1_val);
    descriptions.push_back(choice_2_val);
    descriptions.push_back(choice_3_val);
    descriptions.push_back(choice_4_val);
    descriptions.push_back(choice_5_val);
}    

Location::~Location() {
}

std::shared_ptr<Location> Location::moveToLocationOne() { return location_one; }
std::shared_ptr<Location> Location::moveToLocationTwo() { return location_two; }
std::shared_ptr<Location> Location::moveToLocationThree() { return location_three; }
std::shared_ptr<Location> Location::moveToLocationFour() { return location_four; }
std::shared_ptr<Location> Location::moveToLocationFive() { return location_five; }

void Location::getRelatedLocations(std::shared_ptr<Location> location_one_arg, std::shared_ptr<Location> location_two_arg, 
std::shared_ptr<Location> location_three_arg, std::shared_ptr<Location> location_four_arg, std::shared_ptr<Location> location_five_arg) {
    location_one = std::move(location_one_arg);
    location_two = std::move(location_two_arg);
    location_three = std::move(location_three_arg);
    location_four = std::move(location_four_arg);
    location_five = std::move(location_five_arg);
}