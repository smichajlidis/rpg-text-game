#ifndef _THUGSPAYINGSUCCESS_HPP_
#define _THUGSPAYINGSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

class ThugsPayingSuccess: public InteractionWithNPC {

public:
    ThugsPayingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "- Welcome, traveler! Your payment has been received. You may now pass safely.");
        
    ~ThugsPayingSuccess() = default;

    void printLocation() override;
};

#endif