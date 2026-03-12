# 1 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_MapScripts::
# 3 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_OnTransition
# 4 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 6 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_OnTransition:
# 7 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
# 8 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMaster::
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 12 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 14 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_ReceivedBerryToday
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
# 16 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_BERRIES
# 17 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 19 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_BERRIES
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, NUM_BERRY_MASTER_BERRIES_SKIPPED
# 25 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 27 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 28 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 29 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 30 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 31 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 32 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedBerryToday::
# 33 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 35 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 36 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday
# 42 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
# 43 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_ShowEasyChatScreen
# 45 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 46 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 47 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route123_BerryMastersHouse_EventScript_GavePhrase
# 48 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route123_BerryMastersHouse_EventScript_CancelPhrase
# 49 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_CancelPhrase::
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 55 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GavePhrase::
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 59 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GiveSpelonBerry
# 60 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GivePamtreBerry
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GiveWatmelBerry
# 62 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GiveDurinBerry
# 63 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GiveBelueBerry
# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 65 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	random NUM_BERRY_MASTER_WIFE_BERRIES
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 70 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem VAR_RESULT
# 71 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 72 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 75 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 76 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveSpelonBerry::
# 77 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 79 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_SPELON_BERRY
# 80 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 81 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_SPELON_BERRY
# 82 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GivePamtreBerry::
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 87 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_PAMTRE_BERRY
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 90 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_PAMTRE_BERRY
# 91 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 92 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 93 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveWatmelBerry::
# 95 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 97 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_WATMEL_BERRY
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATMEL_BERRY
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveDurinBerry::
# 104 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_DURIN_BERRY
# 107 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 108 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_DURIN_BERRY
# 109 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 110 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 111 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 112 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GiveBelueBerry::
# 113 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveNormalBerry
# 114 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
# 115 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giveitem ITEM_BELUE_BERRY
# 116 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 117 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELUE_BERRY
# 118 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GaveBerry
# 119 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 120 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 121 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ReceivedWifeBerryToday::
# 122 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 123 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 124 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 125 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 126 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_GaveBerry::
# 127 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 128 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
# 129 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 130 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 131 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 132 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_Trader::
# 133 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock
# 134 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	faceplayer
# 135 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_ROUTE_123_NPC_TRADE_COMPLETED, Route123_BerryMastersHouse_EventScript_TradeCompleted
# 136 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	ingame_trade INGAME_TRADE_HISUIAN_VOLTORB, Route123_BerryMastersHouse_Text_IllTradeIfYouWant, Route123_BerryMastersHouse_EventScript_ElectrodeTrade, Route123_BerryMastersHouse_EventScript_NotRequestedMon1, Route123_BerryMastersHouse_Text_PleaseBeGoodToMyPokemon
# 137 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_ROUTE_123_NPC_TRADE_COMPLETED
# 138 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 139 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 140 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 141 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_ElectrodeTrade::
# 142 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	ingame_trade INGAME_TRADE_HISUIAN_ELECTRODE, Route123_BerryMastersHouse_Text_HowAboutElectrode, Route123_BerryMastersHouse_EventScript_DeclineTrade, Route123_BerryMastersHouse_EventScript_NotRequestedMon2, Route123_BerryMastersHouse_Text_PleaseBeGoodToMyPokemon
# 143 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_ROUTE_123_NPC_TRADE_COMPLETED
# 144 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 145 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 146 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 147 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_DeclineTrade::
# 148 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_LifeIsTough, MSGBOX_DEFAULT
# 149 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 150 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 151 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 152 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_NotRequestedMon1::
# 153 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoesntLookLikeVoltorbToMe, MSGBOX_DEFAULT
# 154 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 155 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 156 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 157 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_NotRequestedMon2::
# 158 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoesntLookLikeElectrodeToMe, MSGBOX_DEFAULT
# 159 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 160 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 161 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 162 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_EventScript_TradeCompleted::
# 163 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_IHopeYouFind, MSGBOX_DEFAULT
# 164 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	release
# 165 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	end
# 166 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 167 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_IllTradeIfYouWant:
# 168 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "I want to prank someone with an\n"
# 169 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "exploding Voltorb.\p"
# 170 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "But this Hisuian one that I have isn't\n"
# 171 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "conspicuous enough.\p"
# 172 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Would you be willing to trade me a\n"
# 173 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Voltorb from Kanto?$"
# 174 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 175 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_HowAboutElectrode:
# 176 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Fine, I'll settle for an Electrode.\n"
# 177 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "How about it?$"
# 178 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 179 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_PleaseBeGoodToMyPokemon:
# 180 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Thanks, kid.\n"
# 181 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "I hope you find my Pokémon electrifying!$"
# 182 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 183 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_DoesntLookLikeVoltorbToMe:
# 184 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "What? That's not a Voltorb.$"
# 185 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 186 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_DoesntLookLikeElectrodeToMe:
# 187 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "What? That's not an Electrode.$"
# 188 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 189 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_LifeIsTough:
# 190 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "Life is tough for a genius prankster\n"
# 191 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "like me…$"
# 192 "data/maps/Route123_BerryMastersHouse/scripts.pory"

# 193 "data/maps/Route123_BerryMastersHouse/scripts.pory"
Route123_BerryMastersHouse_Text_IHopeYouFind:
# 194 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	.string "I hope you find my Pokémon electrifying!$"
