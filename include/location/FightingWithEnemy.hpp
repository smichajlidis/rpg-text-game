#ifndef _FIGHTINGWITHENEMY_HPP_
#define _FIGHTINGWITHENEMY_HPP_

#include "../InteractionWithNPC.hpp"

class FightingWithEnemy: public InteractionWithNPC {

public:
    FightingWithEnemy(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "What a fight!",
        const std::string& choice_1 = "Attack again",
        const std::string& choice_2 = "Try to escape");

    ~FightingWithEnemy() = default;

    std::string getNextLocationName(std::uint32_t) override;
    void printLocation() override;
};

#endif