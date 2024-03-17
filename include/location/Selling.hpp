#ifndef _SELLING_HPP_
#define _SELLING_HPP_

#include "../NPCTrade.hpp"

class Selling: public NPCTrade {

public:
    Selling(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "What do you want to sell?",
        const std::string& choice_1 = "I want to buy something from you",
        const std::string& choice_2 = "Enough trading")
        : NPCTrade(player, game_state, description, choice_1, choice_2) {}

    ~Selling() = default;

    void printLocation() override;
    bool inputValidation(std::uint32_t) const override;
    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
    void printEquipment() const override;
};

#endif