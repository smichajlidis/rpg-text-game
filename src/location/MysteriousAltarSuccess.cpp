#include "../../include/location/MysteriousAltarSuccess.hpp"

MysteriousAltarSuccess::MysteriousAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    sentences.push_back("After offering 100 gold in the shadows of the altar, you feel invisible forces surrounding you, ready for future challenges.");
    sentences.push_back("When you deposit 100 gold on the altar, you feel unknown powers blessing you with mysterious protection, ready to shield you in the toughest times.");
    sentences.push_back("Upon making the 100 gold offering, you feel luck is on your side, and fate aligns in your favor, making it easier to overcome obstacles.");
    sentences.push_back("After giving 100 gold, you feel a mysterious force filling your being, giving you confidence in the face of future challenges.");
    sentences.push_back("By sacrificing 100 gold, you feel unknown powers flowing through your body, adding strength and determination to overcome the next hurdles.");

    related_locations.push_back("mysterious_altar");
    related_locations.push_back("chapel_altars");
}