#ifndef _LOCATION_H_
#define _LOCATION_H_

class Player;

#include <vector>
#include <string>
#include <memory>

class Location {

public:
    Location() = default;

    ~Location() = default;

    void getRelatedLocations(std::shared_ptr<Location> location_one = 0, std::shared_ptr<Location> location_two = 0, 
        std::shared_ptr<Location> location_three = 0, std::shared_ptr<Location> location_four = 0, std::shared_ptr<Location> location_five = 0);
    
    std::shared_ptr<Location> moveToLocationOne();
    std::shared_ptr<Location> moveToLocationTwo();
    std::shared_ptr<Location> moveToLocationThree();
    std::shared_ptr<Location> moveToLocationFour();
    std::shared_ptr<Location> moveToLocationFive();

    void player_pointer(Player* ptr);
    void print_location();
    
    void equipment_menu();

    Location(std::shared_ptr<Location> location_one_arg = 0, std::shared_ptr<Location> location_two_arg = 0, std::shared_ptr<Location> location_three_arg = 0, std::shared_ptr<Location> location_four_arg = 0, std::shared_ptr<Location> location_five_arg = 0);
    Location(const std::string& name_val = "nowhere", const std::string& description_val = "none", const std::string& choice_1_val = "", const std::string& choice_2_val = "", const std::string& choice_3_val = "", const std::string&choice_4_val = "", const std::string& choice_5_val = "");

private:
    std::string name;

    std::vector<std::string> descriptions;

    std::string description;
    std::string choice_1;
    std::string choice_2;
    std::string choice_3;
    std::string choice_4;
    std::string choice_5;
    Player* player;

    std::shared_ptr<Location> location_one;
    std::shared_ptr<Location> location_two;
    std::shared_ptr<Location> location_three;
    std::shared_ptr<Location> location_four;
    std::shared_ptr<Location> location_five;

    std::vector <Location*> related_locations;
};

#endif