#ifndef _TRYTOESCAPE_HPP_
#define _TRYTOESCAPE_HPP_

#include "../InteractionWithNPC.hpp"

class TryToEscape: public InteractionWithNPC {

public:
    TryToEscape(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);

    ~TryToEscape() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif