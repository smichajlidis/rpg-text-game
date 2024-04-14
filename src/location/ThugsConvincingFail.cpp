#include "../../include/location/ThugsConvincingFail.hpp"

#include <iostream>

ThugsConvincingFail::ThugsConvincingFail(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    npc = game_state->getNPC("thugs");

    related_locations.push_back("thugs_convincing");
    related_locations.push_back("forest");

    sentences.push_back("- You're treading on thin ice, mate. Keep pushing and you'll find out how cold it gets.");
    sentences.push_back("- Back off before you find yourself on the wrong end of a very unfriendly conversation.");
    sentences.push_back("- You're playing with fire here, and let's just say we're not in the mood to douse any flames.");
    sentences.push_back("- You think you're clever, don't you? Well, let's see how clever you feel when we're through with you.");
    sentences.push_back("- You're skating on thin ice, and guess what? It's cracking.");
    sentences.push_back("- You've got a lot of nerve trying to pull that stunt. You're lucky we're in a good mood... for now.");
    sentences.push_back("- Push us one more time and see what happens. We dare you.");
}

void ThugsConvincingFail::printLocation() {
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