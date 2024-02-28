#ifndef _TOPBAR_HPP_
#define _TOPBAR_HPP_

class Player;

#include <memory>

class TopBar {

public:
    TopBar() = default;

    ~TopBar() = default;

    void displayTopBar() const;
    void pointToPlayer(std::shared_ptr<Player>);

private:
    std::shared_ptr<Player> player;
};

#endif