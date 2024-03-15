#ifndef _ASKINGABOUTCHAPELFAIL_HPP_
#define _ASKINGABOUTCHAPELFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class AskingAboutChapelFail: public InteractionWithNPC {

public:
    AskingAboutChapelFail(std::shared_ptr<Player> player, const std::string& description = "- Not your business young man.",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, description, choice_1) {}

    ~AskingAboutChapelFail() = default;
};

#endif