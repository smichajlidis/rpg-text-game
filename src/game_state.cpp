#include <iostream>

#include "../include/game_state.h"
#include "../include/item/food/forest_fruits.h"
#include "../include/creature/skeleton.h"
#include "../include/creature/wolf.h"
#include "../include/item/weapon/hunting_weapon/bow.h"
#include "../include/item/weapon/sword.h"

void GameState::display_location() {
    std::uint32_t choice;

    do {
        if (player.drunk > 0)
            player.drunk--;
        player.display_top_bar();
        current_location->print_location();

        std::cin >> choice;
        
        screen_stuff.clear();

        switch(choice) {
            case 1:
                current_location = current_location->moveToLocationOne();
                break;
            case 2:
                current_location = current_location->moveToLocationTwo();
                break;
            case 3:
                current_location = current_location->moveToLocationThree();
                break;
            case 4:
                current_location = current_location->moveToLocationFour();
                break;
            case 5:
                current_location = current_location->moveToLocationFive();
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
            default:
                break;
        }

        screen_stuff.clear();

    } while(choice != 9);
}

GameState::GameState()
    : i_ptr(1) {

    square = std::make_shared<Square>();
    tavern = std::make_shared<Tavern>(); 
    forest = std::make_shared<Forest>(); 
    chapel = std::make_shared<Chapel>();     
    current_location = square;

    square->getRelatedLocations(tavern, forest, chapel);


    // LOCATION INITIALIZATION
    // square.related_locations.push_back(&square);
    // square.related_locations.push_back(&tavern);
    // square.related_locations.push_back(&forest);
    // square.related_locations.push_back(&chapels_door);
    // square.player_pointer(&player);

    // tavern.related_locations.push_back(&square);
    // tavern.related_locations.push_back(&innkeeper);
    // tavern.related_locations.push_back(&gamblers);
    // tavern.related_locations.push_back(&priest);
    // tavern.related_locations.push_back(&ladies);
    // tavern.related_locations.push_back(&tavern);
    // tavern.player_pointer(&player);

    // forest.related_locations.push_back(&square);
    // forest.related_locations.push_back(&forest_exploration);
    // forest.related_locations.push_back(&thugs);
    // forest.related_locations.push_back(&forest);
    // forest.player_pointer(&player);

    // chapels_door.related_locations.push_back(&square);
    // chapels_door.related_locations.push_back(&chapel);
    // chapels_door.player_pointer(&player);

    // chapel.related_locations.push_back(&square);
    // chapel.related_locations.push_back(&altars);
    // chapel.related_locations.push_back(&dungeons);
    // chapel.player_pointer(&player);

    // innkeeper.related_locations.push_back(&tavern);
    // innkeeper.related_locations.push_back(&order_beer);
    // innkeeper.related_locations.push_back(&trade);
    // innkeeper.related_locations.push_back(&gossip);
    // innkeeper.related_locations.push_back(&hot_dish);
    // innkeeper.related_locations.push_back(&innkeeper);
    // innkeeper.player_pointer(&player);

    // gamblers.related_locations.push_back(&tavern);
    // gamblers.related_locations.push_back(&gamblers);
    // gamblers.point_player(&player);
    // gamblers.player_pointer(&player);

    // ladies.related_locations.push_back(&tavern);
    // ladies.related_locations.push_back(&ladies);
    // ladies.point_player(&player);
    // ladies.player_pointer(&player);

    // priest.related_locations.push_back(&tavern);
    // priest.related_locations.push_back(&priest);
    // priest.point_player(&player);
    // Item* chapel_key {nullptr};
    // chapel_key = new ChapelKey;
    // priest.equipment.items.push_back(chapel_key);
    // priest.player_pointer(&player);

    // thugs.related_locations.push_back(&forest);
    // thugs.related_locations.push_back(&pay_for_entrance);
    // thugs.related_locations.push_back(&charisma_trial);
    // thugs.related_locations.push_back(&attack_thugs);
    // thugs.related_locations.push_back(&thugs);
    // thugs.player_pointer(&player);

    //     pay_for_entrance.related_locations.push_back(&thugs);
    //     pay_for_entrance.player_pointer(&player);
    //     pay_for_entrance.get_i_ptr(&i_ptr);
        
    //     charisma_trial.related_locations.push_back(&thugs);
    //     charisma_trial.player_pointer(&player);
    //     charisma_trial.get_i_ptr(&i_ptr);

    //     attack_thugs.related_locations.push_back(&thugs);
    //     attack_thugs.player_pointer(&player);
    //     Creature* thug {nullptr};
    //     thug = new Thug;
    //     attack_thugs.related_creatures.push_back(thug);
    //     attack_thugs.get_i_ptr(&i_ptr);

    // altars.related_locations.push_back(&chapel);
    // altars.related_locations.push_back(&strength_altar);
    // altars.related_locations.push_back(&charisma_altar);
    // altars.related_locations.push_back(&luck_altar);
    // altars.related_locations.push_back(&gold_altar);
    // altars.related_locations.push_back(&weapon_altar);
    // altars.player_pointer(&player);

    //     strength_altar.related_locations.push_back(&altars);
    //     strength_altar.player_pointer(&player);

    //     charisma_altar.related_locations.push_back(&altars);
    //     charisma_altar.player_pointer(&player);

    //     luck_altar.related_locations.push_back(&altars);
    //     luck_altar.player_pointer(&player);

    //     gold_altar.related_locations.push_back(&altars);
    //     gold_altar.player_pointer(&player);

    //     weapon_altar.related_locations.push_back(&altars);
    //     weapon_altar.player_pointer(&player);

    // order_beer.point_player(&player);
    // order_beer.related_locations.push_back(&innkeeper);
    // order_beer.player_pointer(&player);

    // trade.related_locations.push_back(&innkeeper);
    // trade.related_locations.push_back(&buying);
    // trade.related_locations.push_back(&selling);
    // trade.related_locations.push_back(&trade);
    // trade.player_pointer(&player);

    // selling.point_equipment(&player.equipment);
    // selling.point_trade_goods(&trade_goods);
    // selling.related_locations.push_back(&trade);
    // selling.related_locations.push_back(&selling);
    // selling.player_pointer(&player);

    // buying.point_equipment(&player.equipment);
    // buying.point_trade_goods(&trade_goods);
    // buying.related_locations.push_back(&trade);
    // buying.related_locations.push_back(&buying);
    // buying.player_pointer(&player);

    // gossip.related_locations.push_back(&innkeeper);
    // gossip.related_locations.push_back(&gossip);
    // gossip.player_pointer(&player);

    // hot_dish.related_locations.push_back(&innkeeper);
    // hot_dish.point_player(&player);
    // hot_dish.player_pointer(&player);

    // forest_exploration.related_locations.push_back(&forest);
    // forest_exploration.related_locations.push_back(&forest_attack);
    // forest_exploration.related_locations.push_back(&found_food);
    // forest_exploration.related_locations.push_back(&found_nothing);
    // forest_exploration.related_locations.push_back(&hunting);
    // forest_exploration.related_locations.push_back(&forest_exploration);
    // forest_exploration.player_pointer(&player);

    // dungeons.related_locations.push_back(&chapel);
    // dungeons.related_locations.push_back(&dungeons_attack);
    // dungeons.related_locations.push_back(&found_treasures);
    // dungeons.related_locations.push_back(&dungeons_nothing);
    // dungeons.related_locations.push_back(&chapel);
    // dungeons.related_locations.push_back(&dungeons);
    // dungeons.player_pointer(&player);

    // forest_attack.related_locations.push_back(&forest_exploration);
    // Creature* wolf {nullptr};
    // wolf = new Wolf;
    // forest_attack.related_creatures.push_back(wolf);
    // forest_attack.player_pointer(&player);
    // forest_attack.get_i_ptr(&i_ptr);

    // found_food.related_locations.push_back(&forest_exploration);
    // Item* forest_fruits {nullptr};
    // forest_fruits = new ForestFruits;
    // found_food.related_items.push_back(forest_fruits);
    // found_food.player_pointer(&player);
    
    // found_nothing.related_locations.push_back(&forest_exploration);
    // found_nothing.player_pointer(&player);

    // hunting.related_locations.push_back(&forest_exploration);
    // hunting.player_pointer(&player);
    // hunting.related_items.push_back(&leather);
    // hunting.related_items.push_back(&meat);

    // dungeons_attack.related_locations.push_back(&dungeons);
    // dungeons_attack.player_pointer(&player);
    // Creature* skeleton {nullptr};
    // skeleton = new Skeleton;
    // dungeons_attack.related_creatures.push_back(skeleton);
    // dungeons_attack.get_i_ptr(&i_ptr);

    // found_treasures.related_locations.push_back(&dungeons);
    // Item* bow2 {nullptr};
    // bow2 = new Bow;
    // found_treasures.related_items.push_back(bow2);
    // found_treasures.player_pointer(&player);

    // dungeons_nothing.related_locations.push_back(&dungeons);
    // dungeons_nothing.player_pointer(&player);

    // ADDING ITEMS FOR TRADING
  
    Item* sword2 {nullptr};
    sword2 = new Sword;
    player.equipment.items.push_back(sword2);

    Item* sword {nullptr};
    sword = new Sword;
    trade_goods.items.push_back(sword);

    (*(trade_goods.items).at(0)).increase_amount(2);

    Item* bow {nullptr};
    bow = new Bow;
    trade_goods.items.push_back(bow);




}

GameState::~GameState() {
}