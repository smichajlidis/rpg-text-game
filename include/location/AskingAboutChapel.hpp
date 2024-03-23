#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class AskingAboutChapel: public InteractionWithNPC {

public:
    AskingAboutChapel(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr);
    
    ~AskingAboutChapel() = default;

    std::string getNextLocationName(std::uint32_t) override;
};

#endif