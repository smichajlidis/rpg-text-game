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

    virtual std::shared_ptr<Location> checkingCondition(std::uint32_t) = 0;
    std::shared_ptr<Location> action(std::uint32_t) override;

protected:
    std::shared_ptr<Player> player;
};

#endif