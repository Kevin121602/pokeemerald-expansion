# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 6 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_FARFETCHD, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
# 10 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 11 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 13 "data/maps/RustboroCity_House1/scripts.pory"

# 14 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 15 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 18 "data/maps/RustboroCity_House1/scripts.pory"

# 19 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 24 "data/maps/RustboroCity_House1/scripts.pory"

# 25 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 26 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 29 "data/maps/RustboroCity_House1/scripts.pory"

# 30 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 33 "data/maps/RustboroCity_House1/scripts.pory"

# 34 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Why do I love Farfetch'd so much?\p"
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Because the crux of the biscuit\n"
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	.string "is the apostrophe.\p"
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my Farfetch'd-G for\n"
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	.string "your Farfetch'd if you want.$"
# 40 "data/maps/RustboroCity_House1/scripts.pory"

# 41 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 43 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my Pokémon.$"
# 44 "data/maps/RustboroCity_House1/scripts.pory"

# 45 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 47 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a Farfetch'd to me.$"
# 48 "data/maps/RustboroCity_House1/scripts.pory"

# 49 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 50 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my Pokémon is cute, you know…$"
# 52 "data/maps/RustboroCity_House1/scripts.pory"

# 53 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 54 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any Pokémon can be cute if you raise\n"
# 55 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 56 "data/maps/RustboroCity_House1/scripts.pory"

# 57 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 58 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 59 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of Pokémon and people.\p"
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 61 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"
