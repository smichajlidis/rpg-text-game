#ifndef _TRYTOESCAPEFAIL_HPP_
#define _TRYTOESCAPEFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class TryToEscapeFail: public InteractionWithNPC {

public:
    TryToEscapeFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "What a fight!",
        const std::string& choice_1 = "Attack",
        const std::string& choice_2 = "Try to escape again");

    ~TryToEscapeFail() = default;

    std::string getNextLocationName(std::uint32_t) override;
    void printLocation() override;
};

#endif