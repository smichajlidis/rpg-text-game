#ifndef _FORESTFINDITEM_HPP_
#define _FORESTFINDITEM_HPP_

#include "../InteractionWithNPC.hpp"

#include <unordered_map>

class ForestFindItem: public InteractionWithNPC {

public:
    ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Find item",
        const std::string& choice_1 = "Move forward",
        const std::string& choice_2 = "Stop exploring");
        
    ~ForestFindItem() = default;

    void printLocation() override;
    void addNewItem(std::string, std::string, std::uint32_t, const std::string& type = "", std::uint32_t strength = 0);

private:
    std::unordered_map<std::string, Item> related_items;
};

#endif