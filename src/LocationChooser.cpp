#include "../include/LocationChooser.hpp"

std::shared_ptr<Location> LocationChooser::action(std::uint32_t val) {
    return checkingCondition(val);
}