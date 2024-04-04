#ifndef _ENEMYDEFEATED_HPP_
#define _ENEMYDEFEATED_HPP_

#include "../InteractionWithNPC.hpp"

class EnemyDefeated: public InteractionWithNPC {

public:
    EnemyDefeated(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "You won!",
        const std::string& choice_1 = "Keep going",
        const std::string& choice_2 = "Stop exploring");

    ~EnemyDefeated() = default;

    void printLocation() override;
};

#endif