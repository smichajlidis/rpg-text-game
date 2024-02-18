#ifndef _LOCATION_H_
#define _LOCATION_H_

class Player;

#include <vector>
#include <string>
#include <memory>

class Location {

public:
    Location(const std::string& description = "", const std::string& choice_1 = "", const std::string& choice_2 = "", const std::string& choice_3 = "", const std::string&choice_4 = "", const std::string& choice_5 = "");

    ~Location() = default;

    void getRelatedLocations(std::shared_ptr<Location> location_one = 0, std::shared_ptr<Location> location_two = 0, 
        std::shared_ptr<Location> location_three = 0, std::shared_ptr<Location> location_four = 0, std::shared_ptr<Location> location_five = 0);

    std::shared_ptr<Location> moveToLocation(std::uint32_t);
    std::uint32_t getNumberOfLocations() const;

    void player_pointer(Player* ptr);
    virtual void print_location();

private:
    std::vector<std::string> descriptions;
    std::vector<std::shared_ptr<Location>> locations;
    Player* player;

    // std::shared_ptr<Location> location_one;
    // std::shared_ptr<Location> location_two;
    // std::shared_ptr<Location> location_three;
    // std::shared_ptr<Location> location_four;
    // std::shared_ptr<Location> location_five;
    
};

#endif