#include "../../include/location/AltarOfLastResortSuccess.hpp"

#include <ctime>
#include <cstdlib>
#include <iostream>

AltarOfLastResortSuccess::AltarOfLastResortSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    addNewItem("As you kneel in prayer before the altar, a radiant light descends from above, illuminating a legendary sword nestled in the stone—a gift from the gods to aid you in your quest. Behold, Excalibur, a blade of unparalleled might that increases your strength by 50 with each swing.", "excalibur", 700, 50);
    addNewItem("In the hallowed silence of the chapel, the presence of the ancients envelops you, bestowing upon you a suit of armor forged from divine essence. The Aegis of the Ancients, an indestructible shield against all odds, enhances your endurance by 50, a testament to the gods' protection.", "aegis_of_the_ancients", 450, 50);
    addNewItem("As your prayers reach a crescendo, a vial containing a shimmering elixir materializes before you—a gift from the divine realms. The Elixir of Eternal Youth, a potent concoction, not only restores you to full health but also grants you immunity to the ravages of time.", "elixir_of_eternal_youth", 100, 100);
    addNewItem("With each whispered entreaty, the crown upon the altar begins to glow with an ethereal light—a sign of the gods' favor. This is the Crown of Charm, an adornment that enhances your charisma by 50, allowing you to sway hearts and minds with ease.", "Crown_of_Charm", 800, 50);
    addNewItem("In a moment of divine grace, a gleaming amulet materializes before you, radiating with the blessings of fortune. This is Fortune's Amulet, a talisman imbued with luck, increasing your fortune by 50 and guiding your path to prosperity.", "fortune_amulet", 320, 50);

    related_locations.push_back("altar_of_last_resort");
    related_locations.push_back("chapel_altars");
}

void AltarOfLastResortSuccess::addNewItem(std::string description, std::string name, std::uint32_t value, std::uint32_t strength) {
    Item item (name, value, strength);
    game_state->addItem(name, item);
    related_items.insert({description, item});
    sentences.push_back(description);
}

void AltarOfLastResortSuccess::printLocation() {

    std::srand(std::time(0));
    std::string current_item = sentences.at(std::rand() % sentences.size());
    
    std::cout << current_item << "\n\nYou've got:\n" << related_items[current_item];
    player->addItem(related_items[current_item]);

    std::cout << "\n\n";
    printChoices();
}