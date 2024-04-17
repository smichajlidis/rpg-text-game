#ifndef _APPROACHINGCHAPELSUCCESS_HPP_
#define _APPROACHINGCHAPELSUCCESS_HPP_

#include "../Location.hpp"

class ApproachingChapelSuccess: public Location {

public:
    ApproachingChapelSuccess(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "As you step into the dimly lit chapel, the heavy scent of incense fills your nostrils, casting an eerie atmosphere upon the ancient stones. A solitary key in hand, you unlock the door and enter. To one side, a row of various altars stretches out before you, each adorned with symbols of different gods, their presence palpable in the hushed air. On the other side, a descent into the darkness of the cellar awaits, likely leading to the sprawling dungeons beneath the village, harboring secrets untold.",
        const std::string& choice_1 = "Approach the altars.",
        const std::string& choice_2 = "Descend into the dungeons.",
        const std::string& choice_3 = "Go out");
    
    ~ApproachingChapelSuccess() = default;
};

#endif