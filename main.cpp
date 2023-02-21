#include <iostream>
#include "includes.h"

int main() {

    Item object {"object", 20, 12};
    HuntingWeapon bow {"bow", 40, 25};
    Weapon sword {"sword", 50, 45};
    Weapon spear {"spear", 30, 18};
    Armor shield;
    Clothes pants;
    Food strawberry {"strawberry", 2, 4};

    Equipment equipment;

    equipment.add_armor(shield);
    equipment.add_hunting_weapon(bow);
    equipment.add_weapon(spear);
    equipment.add_weapon(sword);
    equipment.add_food(strawberry);
    equipment.add_clothes(pants);
    equipment.add_food(strawberry);

    equipment.remove_food(strawberry);
    equipment.remove_food(strawberry);
    
    Creature creature {"monster", 12, 1500};

    Player player {"player", 40, 150, 4};

   // Location first;
  //  Location yard {"yard", "this is the yard"};

    Tavern tavern;
    Forest forest;
    Square square;
    ClosedChapel closed_chapel;

  //  Location *p1;
  //  p1=&square;
  //  (*p1).print_location();
  //  p1->making_a_choice();

    GameState game_state;

    game_state.display_location();

    game_state.display_location();

   // square.print_location();
   // forest.print_location();
   // closed_chapel.print_location();
   // tavern.print_location();

    std::cout << "Hello World!" << std::endl;

    return 0;
}