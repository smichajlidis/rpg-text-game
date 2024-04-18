#ifndef _CHAPELALTARS_HPP_
#define _CHAPELALTARS_HPP_

#include "../InteractionWithNPC.hpp"

class ChapelAltars: public InteractionWithNPC {

public:
    ChapelAltars(std::shared_ptr<Player> player = nullptr, std::shared_ptr<GameState> game_state = nullptr,
    const std::string& description = "The altars seem to be places of worship for gods, each offering a different blessing:\n\n#Offer 100 gold at the Sun Altar to bolster your strength.\n#Offer 100 gold at the Lion Altar to enhance your charisma.\n#Offer 100 gold at the Mysterious Altar in the shadows, hoping for luck.\n#Make a significant offering of 1000 gold pieces at the Altar of Last Resort to acquire an extraordinary weapon.\n\nThe choice is yours.",
    const std::string& choice_1 = "Sun Altar (100 gold)",
    const std::string& choice_2 = "Lion Altar (100 gold)",
    const std::string& choice_3 = "Mysterious Altar (100 gold)",
    const std::string& choice_4 = "Altar of Last Resort (1000 gold)",
    const std::string& choice_5 = "Return to the main hall");

    ~ChapelAltars() = default;
};

#endif