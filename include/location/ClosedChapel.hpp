#ifndef _CLOSEDCHAPEL_HPP_
#define _CLOSEDCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class ClosedChapel: public InteractionWithNPC {

public:
    ClosedChapel(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Ups, the door is closed.",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, game_state, description, choice_1) { related_locations.push_back("square");} 

    ~ClosedChapel() = default;
};

#endif