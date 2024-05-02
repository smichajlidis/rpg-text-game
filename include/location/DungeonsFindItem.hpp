#ifndef _DUNGEONSFINDITEM_HPP_
#define _DUNGEONSFINDITEM_HPP_

#include "../InteractionWithNPC.hpp"

#include <unordered_map>

class DungeonsFindItem: public InteractionWithNPC {

public:
    DungeonsFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = "Find item",
        const std::string& choice_1 = "Move forward",
        const std::string& choice_2 = "Stop exploring");
        
    ~DungeonsFindItem() = default;

    void printLocation() override;
    void addNewItem(std::string, std::string, std::uint32_t, std::uint32_t strength = 0);

private:
    std::unordered_map<std::string, Item> related_items;
};

#endif