#include "../../include/location/ForestFindItem.hpp"

ForestFindItem::ForestFindItem(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1)
    : InteractionWithNPC(player, game_state, description, choice_1) {

    sentences.push_back("While wandering through the dense forest, you stumble upon an old, rusty sword partially buried in the ground. Despite its worn appearance, it still seems sturdy enough for use.");
    sentences.push_back("Along the worn path, obscured by overgrown foliage, lies a forgotten tomb. Inside rests an ancient coffin, within which lies a tarnished locket, adorned with faded gemstones.");
    sentences.push_back("Beneath a tangle of roots, you uncover a hidden cache containing a collection of small trinkets: a tarnished silver locket, a handful of precious gemstones, and a pouch of coins.");
    sentences.push_back("Nestled amidst fallen leaves, a broken compass lies abandoned. Though its needle no longer spins true, its brass casing may fetch a modest sum from a skilled tinkerer.");
    sentences.push_back("Sprouting near a bubbling spring is a patch of vibrant green herbs known for their potent healing properties. Harvesting them could yield enough ingredients to craft several powerful curatives.");
    sentences.push_back("Concealed beneath a canopy of leaves, you uncover a rare luminescent mushroom prized for its medicinal properties. Its unique glow hints at its value to alchemists and healers alike.");
    sentences.push_back("Gleaming amidst the moss-covered rocks are clusters of precious gemstones waiting to be discovered. With careful extraction, these stones could fetch a handsome price at market.");
    sentences.push_back("Scattered across the forest floor are clusters of plump wild berries, ripe for the picking. Though common, their sweet flavor and nutritional value make them a welcome find for any weary traveler.");
    sentences.push_back("Resting against the trunk of a towering tree lies a fallen branch of rare wood, its rich grain shimmering in the dappled sunlight. Craftsmen would pay handsomely for such a prized material");

    related_locations.push_back("forest");
}
        