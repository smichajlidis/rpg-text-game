#ifndef _INNKEEPER_HPP_
#define _INNKEEPER_HPP_

#include "../NPC.hpp"

class Innkeeper: public NPC {

public:
    Innkeeper(std::shared_ptr<Player> player, const std::string& description = "- Hello stranger, what do you wish?",
        const std::string& choice_1 = "Ask for a beer",
        const std::string& choice_2 = "Trade",
        const std::string& choice_3 = "Ask for a gossip",
        const std::string& choice_4 = "Order something to eat",
        const std::string& choice_5 = "Say goodbye")
        : NPC(player, description, choice_1, choice_2, choice_3, choice_4, choice_5) {}

    ~Innkeeper() = default;
};

#endif