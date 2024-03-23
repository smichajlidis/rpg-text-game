#ifndef _ASKINGABOUTCHAPELSUCCESS_HPP_
#define _ASKINGABOUTCHAPELSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class AskingAboutChapelSuccess: public InteractionWithNPC {

public:
    AskingAboutChapelSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "Ok, if you are so curious - here is a chapel's key. But keep the chapel closed!",
        const std::string& choice_1 = "Say goodbye");

    ~AskingAboutChapelSuccess() = default;
};

#endif