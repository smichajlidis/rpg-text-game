#include <iostream>
#include "../includes/location.h"

Location::Location(std::string name_val, std::string description_val)
    : name {name_val}, description {description_val} {
    }

Location::~Location() {
}