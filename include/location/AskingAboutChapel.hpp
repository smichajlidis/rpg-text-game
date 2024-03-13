#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../InteractionWithNPC.hpp"

class AskingAboutChapel: public InteractionWithNPC {

public:
    AskingAboutChapel(std::shared_ptr<Player> player, const std::string& description = "- Not your business young man",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, description, choice_1) {}

    ~AskingAboutChapel() = default;
};

#endif