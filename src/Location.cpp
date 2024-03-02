#include "../include/Location.hpp"

#include <iostream>
#include <algorithm>

Location::Location(const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4, const std::string& choice_5) {
    descriptions.push_back(description);
    descriptions.push_back(choice_1);
    descriptions.push_back(choice_2);
    descriptions.push_back(choice_3);
    descriptions.push_back(choice_4);
    descriptions.push_back(choice_5);
}

void Location::printLocation() {
    printDescriptions();
}

void Location::printDescriptions() {
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

std::shared_ptr<Location> Location::moveToLocation(std::uint32_t locationNumber) {
    return locations.at(locationNumber);
}

void Location::getRelatedLocations(std::shared_ptr<Location> location_one, std::shared_ptr<Location> location_two, 
std::shared_ptr<Location> location_three, std::shared_ptr<Location> location_four, std::shared_ptr<Location> location_five) {
    locations.push_back(0);
    if (location_one) {
        locations.push_back(std::move(location_one));
    }
    if (location_two) {
        locations.push_back(std::move(location_two));
    }
    if (location_three) {
        locations.push_back(std::move(location_three));
    }
    if (location_four) {
        locations.push_back(std::move(location_four));
    }
    if (location_five) {
        locations.push_back(std::move(location_five));
    }
}

std::uint32_t Location::getNumberOfLocations() const {
    return (locations.empty() ? 0 : locations.size() - 1);
}

std::string Location::getDescription() const {
    return descriptions.at(0);
}