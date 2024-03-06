#include "../include/NPCTrade.hpp"

bool NPCTrade::inputValidation(std::uint32_t val) const {
    if (!equipment.empty()) {
        return (equipment.size() - 1 >= val);
    }
    else {
        return 0;
    }
}