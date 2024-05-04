#include "../../include/location/DungeonsFindItem.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

DungeonsFindItem::DungeonsFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1,  const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    addNewItem("While exploring the dark dungeon, you come across a finely crafted, enchanted dagger hidden within a dusty alcove. Its blade gleams with an otherworldly aura, hinting at its potent magical abilities.", "enchanted_dagger", 200, "weapon", 25);
    addNewItem("Deep within the labyrinthine corridors, you stumble upon an ornate chest, adorned with intricate carvings. Within rests a set of ancient armor, rumored to have been worn by a legendary warrior in battles long past.", "ancient_armor", 500, "armor", 30);
    addNewItem("Concealed within a hidden chamber lies a mystical artifact, enhancing the charisma of its bearer. Its delicate patterns pulse with a faint, ethereal light, promising great power to those who wear it.", "charisma_amulet", 750, "charisma_amulet", 35);
    addNewItem("Nestled among piles of forgotten treasures, you discover a sturdy amulet, said to provide its wearer with resilience against incoming blows and strikes. Its protective aura emanates a sense of strength and fortitude.", "resilient_amulet", 400, "hp_amulet", 20);
    addNewItem("Within the depths of a forgotten crypt, you unearth an ancient relic—an obsidian pendant adorned with cryptic runes. Its dark energy resonates with ancient power, imbuing its bearer with strength and vigor.", "obsidian_relic", 700, "strength_amulet", 20);
    addNewItem("Tucked away in a hidden alcove, you find a vial of shimmering potion, its contents swirling with potent magical energies. A single drop could heal even the most grievous of wounds or grant incredible strength to its imbiber.", "elixir_of_power", 100, "food", 100);

    related_locations.push_back("dungeons");
    related_locations.push_back("approaching_chapel_success");
}

void DungeonsFindItem::addNewItem(std::string description, std::string name, std::uint32_t value, const std::string& type, std::uint32_t strength) {
    Item item (name, value, type, strength);
    game_state->addItem(name, item);
    related_items.insert({description, item});
    sentences.push_back(description);
}

void DungeonsFindItem::printLocation() {

    std::srand(std::time(0));
    std::string current_item = sentences.at(std::rand() % sentences.size());
    
    std::cout << current_item << "\n\nYou found an item:\n" << related_items[current_item];
    player->addItem(related_items[current_item]);

    std::cout << "\n\n";
    printChoices();
}
