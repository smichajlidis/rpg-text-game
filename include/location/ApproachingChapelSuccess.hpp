#ifndef _APPROACHINGCHAPELSUCCESS_HPP_
#define _APPROACHINGCHAPELSUCCESS_HPP_

#include "../Location.hpp"

class ApproachingChapelSuccess: public Location {

public:
    ApproachingChapelSuccess(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "description of the place",
        const std::string& choice_1 = "Altars",
        const std::string& choice_2 = "Dungeons",
        const std::string& choice_3 = "Go back");
    
    ~ApproachingChapelSuccess() = default;
};

#endif