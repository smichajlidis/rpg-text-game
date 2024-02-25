#include "../include/location/Bet.hpp"

#include <iostream>

void Bet::printLocation() {
    std::cout << "You bet for " << amount << " gold." << std::endl; 
    this->printDescriptions();
}