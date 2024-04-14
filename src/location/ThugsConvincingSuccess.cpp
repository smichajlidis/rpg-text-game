#include "../../include/location/ThugsConvincingSuccess.hpp"

#include <iostream>

ThugsConvincingSuccess::ThugsConvincingSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("thugs");

    related_locations.push_back("thugs_convincing");
    related_locations.push_back("approaching_thugs");

    sentences.push_back("- You're winning us over. Keep it up and you might just earn our admiration.");
    sentences.push_back("- We're warming up to you. Looks like your charm offensive is working.");
    sentences.push_back("- Hey, you're not so bad after all. Keep this up and we might even become friends.");
    sentences.push_back("- We're intrigued. Your approach is actually starting to grow on us.");
    sentences.push_back("- We like your style. Keep it going and who knows where this could lead.");
    sentences.push_back("- You're making a good impression. Looks like our initial skepticism was misplaced.");
    sentences.push_back("- You've got our attention. Keep up the good work and you might just win us over completely.");
}

void ThugsConvincingSuccess::printLocation() {
    srand(time(NULL));
    if (npc) {
        std::cout << "[ATTITUDE: " << npc->getAttitudeToPlayer() << "/100]\n\n";
    }
    if (sentences.size()) {
        std::cout<<sentences.at(std::rand() % sentences.size());
    }
    std::cout << "\n\n";
    printChoices();
}