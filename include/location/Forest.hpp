#ifndef _FOREST_HPP_
#define _FOREST_HPP_

#include "../Location.hpp"

class Forest: public Location {

public:
    Forest(std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "In a forest clearing, you stand at a crossroads. Before you lies a bridge in the distance, offering a path forward. Alternatively, you could explore the mysteries of the woods or retreat to where you came from. Each choice holds its own potential for adventure and peril.",
        const std::string& choice_1 = "Forest exploration",
        const std::string& choice_2 = "Go to the bridge",
        const std::string& choice_3 = "Go back");
    
    ~Forest() = default;
};

#endif