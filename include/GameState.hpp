#ifndef _GAME_STATE_HPP_
#define _GAME_STATE_HPP_

#include "ScreenStuff.hpp"
#include "TopBar.hpp"
#include "SavingMenu.hpp"
#include "LoadingMenu.hpp"
#include "ExitingMenu.hpp"
#include "EquipmentMenu.hpp"
#include "Player.hpp"

class Location;
class NPC;

#include <memory>
#include <unordered_map>

class GameState: public std::enable_shared_from_this<GameState>  {

public:
    GameState();

    ~GameState() = default;

    void displayLocation();
    void addLocation(const std::string& name, std::shared_ptr<Location> ptr);
    void addNPC(const std::string& name, std::shared_ptr<NPC> ptr);
    void addEnemy(const std::string& name, std::shared_ptr<LivingBeing> ptr);
    void addItem(const std::string& name, const Item&);
    void passItsPointerToSquare();
    std::shared_ptr<Player> getPlayer() const;
    std::shared_ptr<Location> getLocation(const std::string& name) const;
    std::shared_ptr<NPC> getNPC(const std::string& name) const;
    std::shared_ptr<LivingBeing> getEnemy(const std::string& name) const;

private:
    std::unordered_map<std::string, std::shared_ptr<Location>> locations;
    std::shared_ptr<Location> current_location;
    std::unordered_map<std::string, std::shared_ptr<NPC>> npcs;
    std::unordered_map<std::string, std::shared_ptr<LivingBeing>> enemies;
    std::unordered_map<std::string, Item> items;
    std::shared_ptr<Player> player;

    ScreenStuff screen_stuff;
    SavingMenu saving_menu;
    LoadingMenu loading_menu;
    ExitingMenu exiting_menu;
    EquipmentMenu equipment_menu;
    TopBar top_bar;
};

#endif