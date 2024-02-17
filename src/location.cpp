#include "../include/location.h"
#include "../include/creature/player.h"
#include "../include/item.h"

#include <iostream>
#include <algorithm>

void Location::print_location() {

    std::cout << descriptions.at(0) << "\n\n";

    std::uint32_t count {1};

    std::for_each(descriptions.begin() + 1, descriptions.end(), [&count](const std::string& choice) { 
        if (!choice.empty()) {
            std::cout << count << ". " << choice << std::endl;
            ++count;
        }
    });

    std::cout<<"\nWhat do you do? ";

}

void Location::player_pointer(Player* ptr) {
    player = ptr;
}

// Location::Location(std::shared_ptr<Location> location_one, std::shared_ptr<Location> location_two, std::shared_ptr<Location> location_three, std::shared_ptr<Location> location_four, std::shared_ptr<Location> location_five)
//     : location_one(location_one), location_two(location_two), location_three(location_three), location_four(location_four), location_five(location_five) {
// }

Location::Location(const std::string& name_val, const std::string& description_val, const std::string& choice_1_val, const std::string& choice_2_val, const std::string& choice_3_val, const std::string& choice_4_val, const std::string& choice_5_val)
    : name(name_val) {
    descriptions.push_back(description_val);
    descriptions.push_back(choice_1_val);
    descriptions.push_back(choice_2_val);
    descriptions.push_back(choice_3_val);
    descriptions.push_back(choice_4_val);
    descriptions.push_back(choice_5_val);
}   

std::shared_ptr<Location> Location::moveToLocationOne() {
    return location_one;
}

std::shared_ptr<Location> Location::moveToLocationTwo() { 
    return location_two;
}

std::shared_ptr<Location> Location::moveToLocationThree() {
    return location_three;
}

std::shared_ptr<Location> Location::moveToLocationFour() {
    return location_four;
}

std::shared_ptr<Location> Location::moveToLocationFive() {
    return location_five;
}

void Location::getRelatedLocations(std::shared_ptr<Location> location_one_arg, std::shared_ptr<Location> location_two_arg, 
std::shared_ptr<Location> location_three_arg, std::shared_ptr<Location> location_four_arg, std::shared_ptr<Location> location_five_arg) {
    location_one = std::move(location_one_arg);
    location_two = std::move(location_two_arg);
    location_three = std::move(location_three_arg);
    location_four = std::move(location_four_arg);
    location_five = std::move(location_five_arg);
}