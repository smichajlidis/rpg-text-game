#include "../../include/location/NoMoneyForPray.hpp"

NoMoneyForPray::NoMoneyForPray(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {

    sentences.push_back("Despite your heartfelt prayers, the altars remain unmoved by your modest offering.");
    sentences.push_back("Your words echo in the silent chamber of the altars, but they seem to fall on deaf ears.");
    sentences.push_back("As you offer your prayers, a sense of disappointment fills the air, signaling that your offering has not been sufficient.");
    sentences.push_back("The atmosphere around the altars remains unchanged, indicating that your offering has not reached the divine realm.");
    sentences.push_back("Though you approach the altars with hope in your heart, it seems that fate has other plans, and your offering goes unanswered.");
    sentences.push_back("Despite your earnest attempts to invoke the blessings of the altars, it appears that your offering has not met the requirements for divine intervention.");

    related_locations.push_back("chapel_altars");
}