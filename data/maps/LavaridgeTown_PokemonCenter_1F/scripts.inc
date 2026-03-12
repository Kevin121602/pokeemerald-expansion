# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Trader::
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_PokemonCenter_1F_EventScript_NeedHeatBadge
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_LAVARIDGE_NPC_TRADE_COMPLETED, LavaridgeTown_PokemonCenter_1F_EventScript_TradeCompleted
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	ingame_trade INGAME_TRADE_HISUIAN_GROWLITHE, LavaridgeTown_PokemonCenter_1F_Text_IllTradeIfYouWant, LavaridgeTown_PokemonCenter_1F_EventScript_ArcanineTrade, LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon1, LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_ArcanineTrade::
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	ingame_trade INGAME_TRADE_HISUIAN_ARCANINE, LavaridgeTown_PokemonCenter_1F_Text_HowAboutArcanine, LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade, LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon2, LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NeedHeatBadge::
# 51 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_LookingForHeatBadge, MSGBOX_DEFAULT
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 53 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade::
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon1::
# 61 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeGrowlitheToMe, MSGBOX_DEFAULT
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 65 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon2::
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeArcanineToMe, MSGBOX_DEFAULT
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 69 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_TradeCompleted::
# 71 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 72 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 73 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 74 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 75 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_IllTradeIfYouWant:
# 76 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I'm looking for someone to trade my\n"
# 77 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe with.\p"
# 78 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Are you interested? I'm looking for a\n"
# 79 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe of your own.$"
# 80 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HowAboutArcanine:
# 82 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "How about an Arcanine?$"
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 84 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon:
# 85 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon looks very happy to be\n"
# 86 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "with you!$"
# 87 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeGrowlitheToMe:
# 89 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 90 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "a Growltihe to me.$"
# 91 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 92 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeArcanineToMe:
# 93 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 94 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "an Arcanine to me.$"
# 95 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 96 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_LookingForHeatBadge:
# 97 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I'm looking for someone to trade my\n"
# 98 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe with.\p"
# 99 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "But not just any Trainer will do, I'm\n"
# 100 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "looking for someone with the Heat Badge.$"
# 101 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 102 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_YouDontWantToThatsOkay:
# 103 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's a shame…$"
# 104 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 105 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_AnyPokemonCanBeCute:
# 106 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon looks very happy to be\n"
# 107 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "with you!$"
# 108 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 109 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 110 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think Pokémon get closer to their\n"
# 111 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Trainers if they spend time together.\p"
# 112 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 113 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 114 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 115 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 116 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 117 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 118 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my Pokémon\n"
# 119 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 120 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 121 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 122 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 123 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 124 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If Pokémon are getting rest, so too\n"
# 125 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their Trainers.$"
