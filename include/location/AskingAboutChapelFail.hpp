#ifndef _ASKINGABOUTCHAPELFAIL_HPP_
#define _ASKINGABOUTCHAPELFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class AskingAboutChapelFail: public InteractionWithNPC {

public:
    AskingAboutChapelFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "- Not your business young man.",
        const std::string& choice_1 = "Return");

    ~AskingAboutChapelFail() = default;
};

#endif