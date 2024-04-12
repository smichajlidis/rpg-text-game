#include "../include/GameState.hpp"
#include "../include/location/Square.hpp"
#include "../include/location/YouAreDead.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

GameState::GameState() {
    player = std::make_shared<Player>();

    top_bar.pointToPlayer(player);
    equipment_menu.addPlayer(player);
    loading_menu.addPlayer(player);
    saving_menu.addPlayer(player);

    std::shared_ptr<Location> you_are_dead = std::make_shared<YouAreDead>();
    addLocation("you_are_dead", you_are_dead);
}

void GameState::displayLocation() {
    std::string input;
    char c {};

    do {
        player->updateAfterEachRound();
        top_bar.displayTopBar();
        current_location->printLocation();

        std::cin >> input;

        std::istringstream iss(input);
        std::uint32_t choice;

        screen_stuff.clear();

        if (iss >> choice) {
            if (current_location->inputValidation(choice)) {
                current_location = getLocation(current_location->getNextLocationName(choice));
                while (current_location->getDescription().empty()) {
                    current_location = getLocation(current_location->getNextLocationName(choice));
                }
            }
        }
        else {
            c = std::toupper(input.at(0));
            switch(c) {
                case 'E':
                    equipment_menu.displayMenu();
                    break;
                case 'L':
                    loading_menu.displayMenu();
                    break;
                case 'S':
                    saving_menu.displayMenu();
                    break;
                case 'Q':
                    exiting_menu.displayMenu();
                    break;
                default:
                    break;
            }
        }
        if (!player->getHP()) {
            top_bar.displayTopBar();
            getLocation("you_are_dead")->printLocation();
            c = 'Q';
        }
        else if (player->getWin()) {
            top_bar.displayTopBar();
            getLocation("thugs_paying_success")->printLocation();
            c = 'Q';
        }
        screen_stuff.clear();

    } while(c != 'Q');
}

void GameState::addLocation(const std::string& name, std::shared_ptr<Location> ptr) {
    locations.insert({name, std::move(ptr)});
}

void GameState::addNPC(const std::string& name, std::shared_ptr<NPC> ptr) {
    npcs.insert({name, std::move(ptr)});
}

void GameState::addEnemy(const std::string& name, std::shared_ptr<LivingBeing> ptr) {
    enemies.insert({name, std::move(ptr)});
}

void GameState::addItem(const std::string& name, const Item& ptr) {
    items.insert({name, std::move(ptr)});
}

void GameState::passItsPointerToSquare() {
    current_location = std::make_shared<Square>(std::shared_ptr<GameState>(shared_from_this()));
    addLocation("square", current_location);
}

std::shared_ptr<Location> GameState::getLocation(const std::string& name) const {
    auto it = locations.find(name);
    if (it != locations.end()) {
        return it->second;
    } else {
        return current_location;
    }
}

std::shared_ptr<NPC> GameState::getNPC(const std::string& name) const {
    auto it = npcs.find(name);
    if (it != npcs.end()) {
        return it->second;
    } else {
        return nullptr;
    }
}

std::shared_ptr<LivingBeing> GameState::getEnemy(const std::string& name) const {
    auto it = enemies.find(name);
    if (it != enemies.end()) {
        return it->second;
    } else {
        return nullptr;
    }
}

std::shared_ptr<Player> GameState::getPlayer() const {
    return player;
}