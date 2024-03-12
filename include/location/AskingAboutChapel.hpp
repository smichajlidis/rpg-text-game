#ifndef _ASKINGABOUTCHAPEL_HPP_
#define _ASKINGABOUTCHAPEL_HPP_

#include "../NPC.hpp"

class AskingAboutChapel: public NPC {

public:
    AskingAboutChapel(std::shared_ptr<Player> player, const std::string& description = "- Not your business young man",
        const std::string& choice_1 = "Return")
        : NPC(player, description, choice_1) {}

    ~AskingAboutChapel() = default;
};

#endif