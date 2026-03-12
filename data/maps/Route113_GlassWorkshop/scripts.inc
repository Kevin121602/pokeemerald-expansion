# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition:
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_Trader::
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_ROUTE_113_NPC_TRADE_COMPLETED, Route113_GlassWorkshop_EventScript_TradeCompleted
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_CORSOLA, Route113_GlassWorkshop_Text_IllTradeIfYouWant, Route113_GlassWorkshop_EventScript_DeclineTrade, Route113_GlassWorkshop_EventScript_NotRequestedMon, Route113_GlassWorkshop_Text_PleaseBeGoodToMyPokemon
# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_ROUTE_113_NPC_TRADE_COMPLETED
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_DeclineTrade::
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotRequestedMon::
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TradeCompleted::
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IllTradeIfYouWant:
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I fished up this Corsola, but I\n"
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "think there's something wrong with\l"
# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "it. It looks so gloomy…\p"
# 39 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "If you have a Corsola of your own,\n"
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'll happily trade you.$"
# 41 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_PleaseBeGoodToMyPokemon:
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Thanks!\n"
# 44 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This one looks a lot more lively.$"
# 45 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 46 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_DoesntLookLikeMonToMe:
# 47 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_YouDontWantToThatsOkay:
# 51 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "If you don't want to, that's fine.\n"
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "But this Corsola is really bringing\l"
# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "down the atmosphere around here…$"
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_AnyPokemonCanBeCute:
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Maybe it was all this soot that made\n"
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "my Corsola so gloomy…$"
