#include "../../include/location/SunAltarSuccess.hpp"

SunAltarSuccess::SunAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    sentences.push_back("After offering 100 gold, your body is imbued with the rays of the sun, granting you strength and energy ready to face upcoming challenges.");
    sentences.push_back("When you place 100 gold on the altar, you feel the warm rays of the sun surrounding you, adding strength and courage to your chosen path.");
    sentences.push_back("Upon making the 100 gold offering, you sense the energy of the sun flowing through your veins, giving you the strength to endure the toughest battles.");
    sentences.push_back("After sacrificing 100 gold, you feel the warmth of the sun's rays filling your being, adding strength and determination to overcome adversity.");
    sentences.push_back("By offering 100 gold, you feel the blessings of the sun's rays surrounding you, adding strength and optimism in the face of future challenges.");

    related_locations.push_back("sun_altar");
    related_locations.push_back("chapel_altars");
}