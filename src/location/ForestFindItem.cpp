#include "../../include/location/ForestFindItem.hpp"

ForestFindItem::ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1,  const std::string& choice_2)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2) {

    Item rusty_sword ("rusty_sword", 55, 17);
    game_state->addItem("rusty_sword", rusty_sword);
    related_items.insert({"While wandering through the dense forest, you stumble upon an old, rusty sword partially buried in the ground. Despite its worn appearance, it still seems sturdy enough for use.", rusty_sword});
    Item old_locket ("old_locket", 75);
    game_state->addItem("old_locket", old_locket);
    related_items.insert({"Along the worn path, obscured by overgrown foliage, lies a forgotten tomb. Inside rests an ancient coffin, within which lies a tarnished locket, adorned with faded gemstones.", old_locket});
    Item precious_stones ("precious_stones, 150");
    game_state->addItem("precious_stones", precious_stones);
    related_items.insert({"Beneath a tangle of roots, you uncover a hidden cache containing a handful of precious gemstones", precious_stones});
    Item broken_compass ("broken_compass, 75");
    game_state->addItem("broken_compass", broken_compass);
    related_items.insert({"Nestled amidst fallen leaves, a broken compass lies abandoned. Though its needle no longer spins true, its brass casing may fetch a modest sum from a skilled tinkerer.", broken_compass});
    Item medicinal_herbs ("medicinal_herbs, 50");
    game_state->addItem("medicinal_herbs", medicinal_herbs);
    related_items.insert({"Sprouting near a bubbling spring is a patch of vibrant green herbs known for their potent healing properties. Harvesting them could yield enough ingredients to craft several powerful curatives.", medicinal_herbs});
    Item rare_mushroom ("rare_mushroom, 120");
    game_state->addItem("rare_mushroom", rare_mushroom);
    related_items.insert({"Concealed beneath a canopy of leaves, you uncover a rare luminescent mushroom prized for its medicinal properties. Its unique glow hints at its value to alchemists and healers alike.", rare_mushroom});
    Item uncut_gemstones ("uncut_gemstones, 85");
    game_state->addItem("uncut_gemstones", uncut_gemstones);
    related_items.insert({"Gleaming amidst the moss-covered rocks are clusters of precious gemstones waiting to be discovered. With careful extraction, these stones could fetch a handsome price at market.", uncut_gemstones});
    Item wild_berries ("wild_berries, 20, 15");
    game_state->addItem("wild_berries", wild_berries);
    related_items.insert({"Scattered across the forest floor are clusters of plump wild berries, ripe for the picking. Though common, their sweet flavor and nutritional value make them a welcome find for any weary traveler.", wild_berries});
    Item rare_wood ("rare_wood, 50");
    game_state->addItem("rare_wood", rare_wood);
    related_items.insert({"Resting against the trunk of a towering tree lies a fallen branch of rare wood, its rich grain shimmering in the dappled sunlight. Craftsmen would pay handsomely for such a prized material", rare_wood});

    related_locations.push_back("forest_exploration");
    related_locations.push_back("forest");
}

// void printLocation() {

// }

// std::string ForestFindItem::getNextLocationName(std::uint32_t val) {

//         return related_locations.at(0);
//     }
//     else {
//         return related_locations.at(1);
//     }
// }