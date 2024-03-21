#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class AskingAboutChapel: public InteractionWithNPC {

public:
    AskingAboutChapel(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr)
        : InteractionWithNPC(player, game_state) {}
    
    ~AskingAboutChapel() = default;
};

#endif