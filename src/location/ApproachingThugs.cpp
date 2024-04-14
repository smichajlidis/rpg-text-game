#include "../../include/location/ApproachingThugs.hpp"
#include "../../include/location/ThugsPaying.hpp"
#include "../../include/location/ThugsConvincing.hpp"
//#include "../../include/location/ThugsAttack.hpp"

#include <iostream>

ApproachingThugs::ApproachingThugs(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3, const std::string& choice_4)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3, choice_4) {

    std::shared_ptr<NPC> thugs = std::make_shared<NPC>();
    game_state->addNPC("thugs", thugs);
    npc = game_state->getNPC("thugs");

    game_state->addLocation("thugs_paying", std::make_shared<ThugsPaying>(game_state->getPlayer(), game_state));
    game_state->addLocation("thugs_convincing", std::make_shared<ThugsConvincing>(game_state->getPlayer(), game_state));
    //game_state->addLocation("thugs_attack", std::make_shared<ThugsAttack>(game_state->getPlayer(), game_state));

    related_locations.push_back("thugs_paying");
    related_locations.push_back("thugs_convincing");
    related_locations.push_back("thugs_attack");
    related_locations.push_back("forest");

    sentences.push_back("- Stop right there! Crossing this bridge will cost you dearly. Hand over 10000 pieces of gold or turn back!");
    sentences.push_back("- Halt! No one crosses this bridge without paying the toll. Fork over 10000 pieces of gold if you wish to proceed.");
    sentences.push_back("- Hold it! You're not getting past us without paying up. 10000 pieces of gold or no passage!");
    sentences.push_back("- Who goes there? To cross this bridge, you'll need to cough up 10000 pieces of gold. No exceptions!");
    sentences.push_back("- Intruders! Prepare to pay the toll of 10000 pieces of gold if you want to cross this bridge alive.");
    sentences.push_back("- State your business! Crossing here requires a toll of 10000 pieces of gold. Pay or face the consequences.");
}

void ApproachingThugs::printLocation() {
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