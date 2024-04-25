#include "../../include/location/LionAltarSuccess.hpp"

LionAltarSuccess::LionAltarSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    sentences.push_back("After depositing 100 gold on the altar, your charisma increases, and your words become more persuasive, capable of leading others.");
    sentences.push_back("When you offer 100 gold, your posture becomes more confident, and your words sound like commands ready for immediate execution.");
    sentences.push_back("Upon offering 100 gold, people look at you with admiration, ready to follow your every command, feeling the power of your presence.");
    sentences.push_back("After giving 100 gold, you feel your confidence growing inside, and your gaze emanates strength and determination.");
    sentences.push_back("By placing 100 gold on the altar, your charisma grows, and people around you look at you with admiration, ready to heed your every word.");
    
    related_locations.push_back("lion_altar");
    related_locations.push_back("chapel_altars");
}