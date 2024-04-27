#ifndef _TAVERN_HPP_
#define _TAVERN_HPP_

#include "../InteractionWithNPC.hpp"

class Tavern: public InteractionWithNPC {

public:
    Tavern(std::shared_ptr<Player> = nullptr, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "You are standing inside a dark tavern.",
        const std::string& choice_1 = "Go to the counter and talk to the innkeeper",
        const std::string& choice_2 = "Sit at the table with the gamblers",
        const std::string& choice_3 = "Approach the priest sitting alone",
        const std::string& choice_4 = "Go to ladies looking at you flirtatiously",
        const std::string& choice_5 = "Go out");
    
    ~Tavern() = default;
};

#endif