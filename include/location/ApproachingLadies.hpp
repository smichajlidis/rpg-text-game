#ifndef _APPROACHINGLADIES_HPP_
#define _APPROACHINGLADIES_HPP_

#include "../InteractionWithNPC.hpp"

class ApproachingLadies: public InteractionWithNPC {

public:
    ApproachingLadies(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = " - said ladies.",
        const std::string& choice_1 = "Go upstairs",
        const std::string& choice_2 = "Just flirt with them",
        const std::string& choice_3 = "Return");

    ~ApproachingLadies() = default;
};

#endif