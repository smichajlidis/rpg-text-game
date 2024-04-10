#include "../../include/location/HuntingFail.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>

HuntingFail::HuntingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");

    sentences.push_back("During the wild boar pursuit, the animal suddenly senses your presence and flees into the depths of the forest, leaving you empty-handed.");
    sentences.push_back("Your shot at the deer narrowly misses the mark, and the animal leaps away abruptly, preventing a second attempt.");
    sentences.push_back("Despite meticulous tracking, the rare wolf detects your presence and bolts in the blink of an eye, leaving you without the desired trophy.");
    sentences.push_back("While hunting for a stag, the animal is startled by a loud noise, fleeing before you can take a shot.");
    sentences.push_back("Despite your efforts, during the lynx hunt, the animal manages to vanish into the dense forest, making it difficult to track further.");
    sentences.push_back("In the pursuit of a rare eagle, the bird unexpectedly takes flight, leaving you empty-handed.");
    sentences.push_back("While tracking a panther, the creature senses your presence and disappears into the wild terrain, denying you a chance at the trophy.");
    sentences.push_back("Despite finding the trail of a rare rabbit, the animal slips into the thicket, making it challenging to track further.");
    sentences.push_back("During the bear hunt, a loud noise startles the animal, causing it to flee deep into the woods, leaving you empty-handed.");
    sentences.push_back("Your long wait during the fox hunt ends in failure as the animal suddenly detects your presence and disappears into the forest.");
}

void HuntingFail::printLocation() {
    srand(time(NULL));
    std::cout << sentences.at(std::rand() % sentences.size());
    std::cout << "\n\n";
    printChoices();
}