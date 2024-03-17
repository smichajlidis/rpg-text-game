#include "../../include/location/Square.hpp"
#include "../../include/location/Tavern.hpp"
#include "../../include/location/Forest.hpp"

Square::Square(std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : Location(game_state, description, choice_1, choice_2, choice_3) {

    std::shared_ptr<Tavern> tavern = std::make_shared<Tavern>();
    std::shared_ptr<Forest> forest = std::make_shared<Forest>();

    game_state->addLocation("tavern", tavern);
    game_state->addLocation("forest", forest);

    //closed_chapel = std::make_shared<ClosedChapel>(player);
}