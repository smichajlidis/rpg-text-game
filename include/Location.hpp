#ifndef _LOCATION_HPP_
#define _LOCATION_HPP_

#include "GameState.hpp"

#include <vector>
#include <string>
#include <memory>

class Location {

public:
    Location(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "");

    ~Location() = default;

    void setRelatedLocations(std::shared_ptr<Location> location_one = 0, std::shared_ptr<Location> location_two = 0, std::shared_ptr<Location> location_three = 0, std::shared_ptr<Location> location_four = 0, std::shared_ptr<Location> location_five = 0);
    virtual std::shared_ptr<Location> moveToLocation(std::uint32_t);
    virtual bool inputValidation(std::uint32_t) const;
    void printDescriptions() const;
    virtual void printLocation();
    std::string getDescription() const;
    void setGameState(std::shared_ptr<GameState>);

    virtual std::string getNextLocationName(std::uint32_t);

protected:
    std::vector<std::string> descriptions;
    std::vector<std::shared_ptr<Location>> locations;
    std::shared_ptr<GameState> game_state;

    std::vector<std::string> related_locations;
};

#endif