#include "../../include/location/DungeonsFindItem.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

DungeonsFindItem::DungeonsFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1,  const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    addNewItem("While exploring the dark dungeon, you come across a finely crafted, enchanted dagger hidden within a dusty alcove. Its blade gleams with an otherworldly aura, hinting at its potent magical abilities.", "enchanted_dagger", 200, 25);
    addNewItem("Deep within the labyrinthine corridors, you stumble upon an ornate chest, adorned with intricate carvings. Within rests a set of ancient armor, rumored to have been worn by a legendary warrior in battles long past.", "ancient_armor", 500, 30);
    addNewItem("Concealed within a hidden chamber lies a gleaming scepter, imbued with the power of ancient sorcery. Its intricate runes pulse with a faint, ethereal light, promising great power to those who wield it.", "sorcerous_scepter", 750, 35);
    addNewItem("Nestled among piles of forgotten treasures, you discover a shimmering amulet, said to grant its wearer protection from dark enchantments and curses. Its radiant glow fills the chamber with a sense of warmth and safety.", "radiant_amulet", 400, 20);
    addNewItem("Resting atop a pedestal of stone, you find a tome bound in ancient leather, its pages filled with arcane knowledge and forbidden spells. Though dangerous, its secrets could hold the key to unlocking unimaginable power.", "forbidden_tome", 600);
    addNewItem("Hidden within a locked chest lies a collection of rare scrolls, each containing spells of immense power. Their intricate glyphs dance across the parchment, waiting to be unleashed by a skilled mage.", "scrolls_of_power", 550);
    addNewItem("Buried beneath layers of rubble, you uncover a mysterious crystal orb, pulsating with raw magical energy. Its swirling colors cast strange shadows across the chamber, promising untold mystical potential.", "mystic_orb", 800);
    addNewItem("Within the depths of a forgotten crypt, you unearth an ancient relic—an obsidian pendant adorned with cryptic runes. Its dark energy resonates with ancient power, emanating an aura of dread and mystery.", "obsidian_relic", 700);
    addNewItem("Tucked away in a hidden alcove, you find a vial of shimmering potion, its contents swirling with potent magical energies. A single drop could heal even the most grievous of wounds or grant incredible strength to its imbiber.", "elixir_of_power", 300);

    related_locations.push_back("dungeons");
    related_locations.push_back("approaching_chapel_success");
}

void DungeonsFindItem::addNewItem(std::string description, std::string name, std::uint32_t value, std::uint32_t strength) {
    Item item (name, value, strength);
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
