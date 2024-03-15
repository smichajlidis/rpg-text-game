#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class Player;

class AskingAboutChapel: public InteractionWithNPC {

public:
    AskingAboutChapel(std::shared_ptr<Player> player)
        : InteractionWithNPC(player) {}
    
    ~AskingAboutChapel() = default;

    std::shared_ptr<Location> moveToLocation(std::uint32_t) override;
};

#endif