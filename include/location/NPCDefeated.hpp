#ifndef _NPCDEFEATED_HPP_
#define _NPCDEFEATED_HPP_

#include "../InteractionWithNPC.hpp"

class NPCDefeated: public InteractionWithNPC {

public:
    NPCDefeated(std::shared_ptr<NPC> npc_val, std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
    const std::string& description = "You won!",
    const std::string& choice_1 = "Return");

    ~NPCDefeated() = default;

    void printLocation() override;
    std::string getNextLocationName(std::uint32_t) override;
};

#endif