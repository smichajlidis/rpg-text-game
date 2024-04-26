#ifndef _DUNGEONSNOTHINGHAPPENED_HPP_
#define _DUNGEONSNOTHINGHAPPENED_HPP_

#include "../InteractionWithNPC.hpp"

class DungeonsNothingHappened: public InteractionWithNPC {

public:
    DungeonsNothingHappened(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Nothing happened",
        const std::string& choice_1 = "Continue",
        const std::string& choice_2 = "Return");
        
    ~DungeonsNothingHappened() = default;
};

#endif