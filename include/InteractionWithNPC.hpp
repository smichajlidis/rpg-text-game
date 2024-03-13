#ifndef _InteractionWithNPC_HPP_
#define _InteractionWithNPC_HPP_

#include "LivingBeing.hpp"
#include "Location.hpp"
#include "Player.hpp"

#include <vector>

class InteractionWithNPC: public LivingBeing, public Location {

public:
    InteractionWithNPC(std::shared_ptr<Player> player, const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "")
        : player(std::move(player)), Location(description, choice_1, choice_2, choice_3, choice_4, choice_5) { attitude_to_player = 40; }

    ~InteractionWithNPC() = default;

    void printLocation() override;
    void increaseAttitudeToPlayer(std::uint16_t);
    void decreaseAttitudeToPlayer(std::uint16_t);
    
protected:
    std::vector<std::string> sentences;
    std::uint16_t attitude_to_player;
    std::shared_ptr<Player> player;
};

#endif