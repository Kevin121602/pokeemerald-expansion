# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_DUSK_STONE_AVAILABLE, LavaridgeTown_HerbShop_EventScript_ShopDuskStoneAvailable
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ShopDuskStoneAvailable::
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_PokemartWithDuskStone
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SUN_STONE
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ICE_STONE
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_PokemartWithDuskStone:
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SUN_STONE
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ICE_STONE
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_FAIRY_FEATHER, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_FAIRY_FEATHER
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_FAIRY_FEATHER
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Stone Emporium, home\n"
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "of glistening Evolution Stones!$"
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at stones\n"
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in Lavaridge?\p"
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That Fairy Feather I gave you, it's\n"
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a prized possession.\p"
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a Pokémon.\p"
# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of Fairy\n"
# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "type moves.$"
# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 92 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Stones evolve a variety of Pokemon.\n"
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But those Pokémon will learn fewer\l"
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves once they evolve!$"
