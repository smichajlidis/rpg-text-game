#include "../include/GameState.hpp"
#include "../include/location/Square.hpp"

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
                if (current_location->getDescription().empty()) {
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

        screen_stuff.clear();

    } while(c != 'Q');
}

void GameState::addLocation(const std::string& name, std::shared_ptr<Location> ptr) {
    locations.insert({name, std::move(ptr)});
}

void GameState::addNPC(const std::string& name, std::shared_ptr<NPC> ptr) {
    npcs.insert({name, std::move(ptr)});
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

std::shared_ptr<Player> GameState::getPlayer() const {
    return player;
}