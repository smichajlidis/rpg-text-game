#ifndef _ALTAROFLASTRESORT_HPP_
#define _ALTAROFLASTRESORT_HPP_

#include "../InteractionWithNPC.hpp"

class AltarOfLastResort: public InteractionWithNPC {

public:
    AltarOfLastResort(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~AltarOfLastResort() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif