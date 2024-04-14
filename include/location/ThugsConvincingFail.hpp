#ifndef _THUGSCONVINCINGFAIL_HPP_
#define _THUGSCONVINCINGFAIL_HPP_

#include "../InteractionWithNPC.hpp"

class ThugsConvincingFail: public InteractionWithNPC {

public:
    ThugsConvincingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "- Give it up, it's not gonna happen.",
        const std::string& choice_1 = "Try again",
        const std::string& choice_2 = "Say goodbye");
    
    ~ThugsConvincingFail() = default;

    void printLocation() override;
};

#endif