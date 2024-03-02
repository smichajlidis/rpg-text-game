#ifndef _LOCATIONCHOOSER_HPP_
#define _LOCATIONCHOOSER_HPP_

#include "Location.hpp"
#include "Player.hpp"

#include <memory>

class LocationChooser: public Location {

public:
    LocationChooser(std::shared_ptr<Player> player)
        : player(std::move(player)) {}

    ~LocationChooser() = default;

protected:
    std::shared_ptr<Player> player;
};

#endif