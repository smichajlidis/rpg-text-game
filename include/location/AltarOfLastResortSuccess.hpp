#ifndef _ALTAROFLASTRESORTSUCCESS_HPP_
#define _ALTAROFLASTRESORTSUCCESS_HPP_

#include "../InteractionWithNPC.hpp"

#include <unordered_map>

class AltarOfLastResortSuccess: public InteractionWithNPC {

public:
    AltarOfLastResortSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state = nullptr,
        const std::string& description = ".",
        const std::string& choice_1 = "Keep praying (1000 gold)",
        const std::string& choice_2 = "Return");

    ~AltarOfLastResortSuccess() = default;

    void printLocation() override;
    void addNewItem(std::string, std::string, std::uint32_t, const std::string&, std::uint32_t strength = 0);

private:
    std::unordered_map<std::string, Item> related_items;
};

#endif