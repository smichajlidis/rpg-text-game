#include "../../include/location/HuntingSuccess.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

HuntingSuccess::HuntingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1,  const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    addNewItem("After a fierce encounter with a wild boar, you discover excellent meat, which will find a buyer in the nearby tavern.", "boar_meat", 8);
    addNewItem("Your hunting skills lead you to capture an impressive deer, whose antlers can be a valuable treasure for a collector.", "deer_antlers", 20);
    addNewItem("Successfully hunting down a rare wolf, you acquire sharp fangs that can serve as decoration or alchemical material for a knowledgeable alchemist.", "wolf_fangs", 12);
    addNewItem("During a hunt for a stag, you manage to obtain high-quality leather, sought after by skilled craftsmen.", "stag_leather", 18);
    addNewItem("Your precision in hunting lynxes allows you to acquire rare fur, sought by exclusive craftsmen.", "lynx_fur", 25);
    addNewItem("In the midst of dense forest, you find traces of a rare eagle, whose feathers can be used as decoration or magical material for a skilled blacksmith.", "eagle_feathers", 15);
    addNewItem("Your tracking skills lead you to hunt down a panther, from which excellent skins can be used by manufacturers of high-quality clothing.", "panther_skins", 22);
    addNewItem("Amidst the dense forest, you manage to find the trail of a rare rabbit, whose fur will be valuable for enthusiasts of exotic garments.", "rabbit_fur", 10);
    addNewItem("During a bear hunt, you discover excellent paws that can serve as unique material for crafting decorative items.", "bear_paws", 30);
    addNewItem("Your perseverance in hunting foxes pays off as you acquire their shiny fur, prized by collectors of rare skins.", "fox_fur", 12);

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}

void HuntingSuccess::addNewItem(std::string description, std::string name, std::uint32_t strength, std::uint32_t value) {
    Item item (name, strength, value);
    game_state->addItem(name, item);
    related_items.insert({description, item});
    sentences.push_back(description);
}

void HuntingSuccess::printLocation() {

    std::srand(std::time(0));
    std::string current_item = sentences.at(std::rand() % sentences.size());
    
    std::cout << current_item << "\n\nYou've got:\n" << related_items[current_item];
    player->addItem(related_items[current_item]);

    std::cout << "\n\n";
    printChoices();
}
