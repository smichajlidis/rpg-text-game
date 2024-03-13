#ifndef _PRIESTFAIL_HPP_
#define _PRIESTFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class PriestFail: public InteractionWithNPC {

public:
    PriestFail(std::shared_ptr<Player> player, const std::string& description = "- Live me alone stranger!",
        const std::string& choice_1 = "Return")
        : InteractionWithNPC(player, description, choice_1) {}

    ~PriestFail() = default;
};

#endif