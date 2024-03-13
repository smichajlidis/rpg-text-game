#ifndef _INTERACTIONWITHNPC_HPP_
#define _INTERACTIONWITHNPC_HPP_

#include "LivingBeing.hpp"
#include "Location.hpp"
#include "Player.hpp"

#include <vector>

class InteractionWithNPC: public LivingBeing, public Location {

public:
    InteractionWithNPC(std::shared_ptr<Player> player, const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "")
        : player(std::move(player)), Location(description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~InteractionWithNPC() = default;

    void printLocation() override;
    
protected:
    std::vector<std::string> sentences;
    std::shared_ptr<Player> player;
};

#endif