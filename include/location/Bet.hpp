#ifndef _BET_HPP_
#define _BET_HPP_

#include "../Location.hpp"

class Bet: public Location {

public:
    Bet(std::uint32_t amount,
        const std::string& description = "Have you won? Yes? No?",
        const std::string& choice_1 = "Bet again",
        const std::string& choice_2 = "Leave the table")
        : Location(description, choice_1, choice_2), amount(amount) {}
    
    ~Bet() = default;

    void printLocation() override;

private:
    std::uint32_t amount;
};

#endif