#ifndef _FORESTMEETENEMY_HPP_
#define _FORESTMEETENEMY_HPP_

#include "../InteractionWithNPC.hpp"

class ForestMeetEnemy: public InteractionWithNPC {

public:
    ForestMeetEnemy(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = " is your enemy!",
        const std::string& choice_1 = "Attack",
        const std::string& choice_2 = "Try to escape");
        
    ~ForestMeetEnemy() = default;

    void printLocation() override;
    std::string getNextLocationName(std::uint32_t) override;

private:
    std::vector<std::string> related_enemies;
};

#endif