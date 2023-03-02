#include <iostream>
#include <ctime>
#include <vector>
#include "../../includes/location/gamblers.h"

Location* Gamblers::making_a_choice() {
    int choice {};
    std::cin>>choice;
    int value {};
    switch (value) {
        case 1: value=5; break;
        case 2: value=10; break;
        case 3: value=25; break;
        case 4: value=50; break;
        case 5: value=100; break;
    }

    std::vector <int> results {};

    srand(time(NULL));
    std::cout<<"You bet "<<value<<" gold and roll the dice. Your result is:\n\n";

    for(int i {1}; i <= 6; i++) {
        results.push_back((std::rand() %6)+1);
    }

    std::cout<<"First die: "<<results.at(0)<<std::endl;
    std::cout<<"Second die: "<<results.at(1)<<std::endl;
    std::cout<<"Third die: "<<results.at(2)<<std::endl;
    std::cout<<"Fourth die: "<<results.at(3)<<std::endl;
    std::cout<<"Fifth die: "<<results.at(4)<<std::endl;
    std::cout<<"Sixth die: "<<results.at(5)<<std::endl;

    std::cout<<"\nYour score is "<<results.at(0)<<" + "<<results.at(1)<<" + "<<results.at(2)<<" + "<<results.at(3)<<" + "<<results.at(4)<<" + "<<results.at(5)<<" = "<<results.at(0)+results.at(1)+results.at(2)+results.at(3)+results.at(4)+results.at(5)<<std::endl;
    if(results.at(0)+results.at(1)+results.at(2)+results.at(3)+results.at(4)+results.at(5) > 22) {
        std::cout<<"\nYou win!\n";
        (*equipment_ptr).add_gold(value);
    }
    else {
        std::cout<<"\nYou lose\n";
        (*equipment_ptr).remove_gold(value);
    }
    std::cout<<"\n\nEnter 0 to continue: ";
    std::cin>>choice;

    return related_locations.at(0); 
    
}

Gamblers::Gamblers(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val, std::string choice_5_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val, choice_3_val, choice_4_val), PointEquipment() {
    }

Gamblers::~Gamblers() {
}

