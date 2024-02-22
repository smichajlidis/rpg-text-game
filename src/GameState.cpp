#include "../include/GameState.hpp"

#include <iostream>

GameState::GameState() {
    square = std::make_shared<Square>();
    tavern = std::make_shared<Tavern>(); 
    forest = std::make_shared<Forest>(); 
    chapel = std::make_shared<Chapel>();
    square->getRelatedLocations(tavern, forest, chapel);

    innkeeper = std::make_shared<Innkeeper>();
    innkeeper->getRelatedLocations(tavern);
    gamblers = std::make_shared<Gamblers>(); 
    priest = std::make_shared<Priest>(); 
    ladies = std::make_shared<Ladies>();   
    tavern->getRelatedLocations(innkeeper, gamblers, priest, ladies, square);

    forest_exploration = std::make_shared<ForestExploration>();
    thugs = std::make_shared<Thugs>(); 
    forest->getRelatedLocations(forest_exploration, thugs, square);

    altars = std::make_shared<Altars>();
    dungeons = std::make_shared<Dungeons>(); 
    chapel->getRelatedLocations(altars, dungeons, square);

    current_location = square;
}

void GameState::displayLocation() {
    std::uint32_t choice;

    do {
        if (player.drunk > 0)
            player.drunk--;
        player.display_top_bar();
        current_location->printDescriptions();

        std::cin >> choice;
        
        screen_stuff.clear();

        switch(choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                if (current_location->getNumberOfLocations() >= choice) {
                    current_location = current_location->moveToLocation(choice);
                }
                break;
            case 6:
                equipment.display_equipment();
                break;
            case 7:
                loading_menu.displayLoadingMenu();
                break;
            case 8:
                saving_menu.displaySavingMenu();
                break;
            case 9:
                exiting_menu.displayExitingMenu();
            default:
                break;
        }

        screen_stuff.clear();

    } while(choice != 9);
}