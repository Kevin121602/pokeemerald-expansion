# 1 "data/maps/DewfordTown_House2/scripts.pory"

# 2 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_MapScripts::
# 3 "data/maps/DewfordTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_House2/scripts.pory"

# 5 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Man::
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 7 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 8 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
# 10 "data/maps/DewfordTown_House2/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
# 12 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
# 13 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 14 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 15 "data/maps/DewfordTown_House2/scripts.pory"

# 16 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_NoRoomForScarf::
# 17 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 20 "data/maps/DewfordTown_House2/scripts.pory"

# 21 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_ExplainSilkScarf::
# 22 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 24 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 25 "data/maps/DewfordTown_House2/scripts.pory"

# 26 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Boy::
# 27 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
# 28 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 29 "data/maps/DewfordTown_House2/scripts.pory"

# 30 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_Trader::
# 31 "data/maps/DewfordTown_House2/scripts.pory"
	lock
# 32 "data/maps/DewfordTown_House2/scripts.pory"
	faceplayer
# 33 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_DEWFORD_NPC_TRADE_COMPLETED, DewfordTown_House2_EventScript_TradeCompleted
# 34 "data/maps/DewfordTown_House2/scripts.pory"
	random 3
# 35 "data/maps/DewfordTown_House2/scripts.pory"
	switch VAR_RESULT
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	case 0, DewfordTown_House2_EventScript_CombatTrade
# 37 "data/maps/DewfordTown_House2/scripts.pory"
	case 1, DewfordTown_House2_EventScript_BlazeTrade
# 38 "data/maps/DewfordTown_House2/scripts.pory"
	case 2, DewfordTown_House2_EventScript_AquaTrade
# 39 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 40 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 41 "data/maps/DewfordTown_House2/scripts.pory"

# 42 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_CombatTrade::
# 43 "data/maps/DewfordTown_House2/scripts.pory"
	ingame_trade INGAME_TRADE_PALDEAN_TAUROS_COMBAT, DewfordTown_House2_Text_IllTradeYouTauros, DewfordTown_House2_EventScript_DeclineTrade, DewfordTown_House2_EventScript_NotRequestedMon, DewfordTown_House2_Text_TaurosIsVery
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_DEWFORD_NPC_TRADE_COMPLETED
# 45 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 46 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 47 "data/maps/DewfordTown_House2/scripts.pory"

# 48 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_BlazeTrade::
# 49 "data/maps/DewfordTown_House2/scripts.pory"
	ingame_trade INGAME_TRADE_PALDEAN_TAUROS_BLAZE, DewfordTown_House2_Text_IllTradeYouTauros, DewfordTown_House2_EventScript_DeclineTrade, DewfordTown_House2_EventScript_NotRequestedMon, DewfordTown_House2_Text_TaurosIsVery
# 50 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_DEWFORD_NPC_TRADE_COMPLETED
# 51 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 52 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 53 "data/maps/DewfordTown_House2/scripts.pory"

# 54 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_AquaTrade::
# 55 "data/maps/DewfordTown_House2/scripts.pory"
	ingame_trade INGAME_TRADE_PALDEAN_TAUROS_AQUA, DewfordTown_House2_Text_IllTradeYouTauros, DewfordTown_House2_EventScript_DeclineTrade, DewfordTown_House2_EventScript_NotRequestedMon, DewfordTown_House2_Text_TaurosIsVery
# 56 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_DEWFORD_NPC_TRADE_COMPLETED
# 57 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 58 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 59 "data/maps/DewfordTown_House2/scripts.pory"

# 60 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_DeclineTrade::
# 61 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ThatsFine, MSGBOX_DEFAULT
# 62 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 63 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 64 "data/maps/DewfordTown_House2/scripts.pory"

# 65 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_NotRequestedMon::
# 66 "data/maps/DewfordTown_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 67 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 68 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 69 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 70 "data/maps/DewfordTown_House2/scripts.pory"

# 71 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_EventScript_TradeCompleted::
# 72 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_TaurosIsVery, MSGBOX_DEFAULT
# 73 "data/maps/DewfordTown_House2/scripts.pory"
	release
# 74 "data/maps/DewfordTown_House2/scripts.pory"
	end
# 75 "data/maps/DewfordTown_House2/scripts.pory"

# 76 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_WantYouToHaveSilkScarf:
# 77 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Gorge your eyes on this!\p"
# 78 "data/maps/DewfordTown_House2/scripts.pory"
	.string "It's a SILK SCARF. It's right at the\n"
# 79 "data/maps/DewfordTown_House2/scripts.pory"
	.string "cutting edge of fashion, yeah!\p"
# 80 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, I can see your eyes twinkling!\n"
# 81 "data/maps/DewfordTown_House2/scripts.pory"
	.string "You appreciate my dazzling style!\p"
# 82 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you're a delight!\n"
# 83 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Here you go. I want you to have it!$"
# 84 "data/maps/DewfordTown_House2/scripts.pory"

# 85 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_NoRoom:
# 86 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you don't have room?\p"
# 87 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Now, listen tight, this SCARF is a must-\n"
# 88 "data/maps/DewfordTown_House2/scripts.pory"
	.string "have! Why, I would sell all my items\l"
# 89 "data/maps/DewfordTown_House2/scripts.pory"
	.string "in order to get it!$"
# 90 "data/maps/DewfordTown_House2/scripts.pory"

# 91 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ExplainSilkScarf:
# 92 "data/maps/DewfordTown_House2/scripts.pory"
	.string "The SILK SCARF raises the power of\n"
# 93 "data/maps/DewfordTown_House2/scripts.pory"
	.string "NORMAL-type moves.\p"
# 94 "data/maps/DewfordTown_House2/scripts.pory"
	.string "It's a marvelous SCARF that will go\n"
# 95 "data/maps/DewfordTown_House2/scripts.pory"
	.string "with almost all Pokémon!$"
# 96 "data/maps/DewfordTown_House2/scripts.pory"

# 97 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_BrawlySoCool:
# 98 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, you bothered to cross the bridge\n"
# 99 "data/maps/DewfordTown_House2/scripts.pory"
	.string "to visit Dewford?\p"
# 100 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Did you maybe come here because you\n"
# 101 "data/maps/DewfordTown_House2/scripts.pory"
	.string "heard about Brawly?\p"
# 102 "data/maps/DewfordTown_House2/scripts.pory"
	.string "He's so cool…\n"
# 103 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Everyone idolizes him.$"
# 104 "data/maps/DewfordTown_House2/scripts.pory"

# 105 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_TaurosIsVery:
# 106 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Tauros is a very fashionable\n"
# 107 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Pokémon!$"
# 108 "data/maps/DewfordTown_House2/scripts.pory"

# 109 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_IllTradeYouTauros:
# 110 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Here in Dewford Town, Paldean Tauros is\n"
# 111 "data/maps/DewfordTown_House2/scripts.pory"
	.string "all the rage.\p"
# 112 "data/maps/DewfordTown_House2/scripts.pory"
	.string "But me, I prefer the classics.\p"
# 113 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Do you have a Tauros from Kanto?\n"
# 114 "data/maps/DewfordTown_House2/scripts.pory"
	.string "I can trade you mine from Paldea.$"
# 115 "data/maps/DewfordTown_House2/scripts.pory"

# 116 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_ThatsFine:
# 117 "data/maps/DewfordTown_House2/scripts.pory"
	.string "That's fine, I'll be here in case you\n"
# 118 "data/maps/DewfordTown_House2/scripts.pory"
	.string "change your mind…$"
# 119 "data/maps/DewfordTown_House2/scripts.pory"

# 120 "data/maps/DewfordTown_House2/scripts.pory"
DewfordTown_House2_Text_DoesntLookLikeMonToMe:
# 121 "data/maps/DewfordTown_House2/scripts.pory"
	.string "That doesn't look like a Tauros to me…$"
