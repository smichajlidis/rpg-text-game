#ifndef _THUGSCONVINCINGSUCCESS_HPP_
#define _THUGSCONVINCINGSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class ThugsConvincingSuccess: public InteractionWithNPC {

public:
    ThugsConvincingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "description",
        const std::string& choice_1 = "Continue",
        const std::string& choice_2 = "Ask for something else");

    ~ThugsConvincingSuccess() = default;

    void printLocation() override;
};

#endif