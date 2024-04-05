#include "../../include/location/YouAreDead.hpp"

#include <iostream>

void YouAreDead::printLocation() {
    std::string var;
    std::cout << descriptions.at(0) << std::endl;
    std::cout << "\nPress any key to continue ";
    std::cin >> var;
}