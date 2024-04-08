#include "../../include/location/ForestFindItem.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

ForestFindItem::ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1,  const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    addNewItem("While wandering through the dense forest, you stumble upon an old, rusty sword partially buried in the ground. Despite its worn appearance, it still seems sturdy enough for use.", "rusty_sword", 55, 17);
    addNewItem("Along the worn path, obscured by overgrown foliage, lies a forgotten tomb. Inside rests an ancient coffin, within which lies a tarnished locket, adorned with faded gemstones.", "old_locket", 75);
    addNewItem("Beneath a tangle of roots, you uncover a hidden cache containing a handful of precious gemstones", "precious_stones", 150);
    addNewItem("Nestled amidst fallen leaves, a broken compass lies abandoned. Though its needle no longer spins true, its brass casing may fetch a modest sum from a skilled tinkerer.", "broken_compass", 75);
    addNewItem("Sprouting near a bubbling spring is a patch of vibrant green herbs known for their potent healing properties. Harvesting them could yield enough ingredients to craft several powerful curatives.", "medicinal_herbs", 50);
    addNewItem("Concealed beneath a canopy of leaves, you uncover a rare luminescent mushroom prized for its medicinal properties. Its unique glow hints at its value to alchemists and healers alike.", "rare_mushroom", 120);
    addNewItem("Gleaming amidst the moss-covered rocks are clusters of precious gemstones waiting to be discovered. With careful extraction, these stones could fetch a handsome price at market.", "uncut_gemstones", 85);
    addNewItem("Scattered across the forest floor are clusters of plump wild berries, ripe for the picking. Though common, their sweet flavor and nutritional value make them a welcome find for any weary traveler.", "wild_berries", 20, 15);
    addNewItem("Resting against the trunk of a towering tree lies a fallen branch of rare wood, its rich grain shimmering in the dappled sunlight. Craftsmen would pay handsomely for such a prized material", "rare_wood", 50);

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}

void ForestFindItem::addNewItem(std::string description, std::string name, std::uint32_t strength, std::uint32_t value) {
    Item item (name, strength, value);
    game_state->addItem(name, item);
    related_items.insert({description, item});
    sentences.push_back(description);
}

void ForestFindItem::printLocation() {

    std::srand(std::time(0));
    std::string current_item = sentences.at(std::rand() % sentences.size());
    
    std::cout << current_item << "\n\nYou found an item:\n" << related_items[current_item];
    player->addItem(related_items[current_item]);

    std::cout << "\n\n";
    printChoices();
}
