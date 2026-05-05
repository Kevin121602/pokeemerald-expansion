# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_SYS_GAUNTLET
# 32 "data/maps/SlateportCity/scripts.pory"
	call EventScript_HideMrBriney
# 33 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 34 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 35 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 36 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 37 "data/maps/SlateportCity/scripts.pory"
	end
# 38 "data/maps/SlateportCity/scripts.pory"

# 39 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 40 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 41 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 42 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 43 "data/maps/SlateportCity/scripts.pory"
	return
# 44 "data/maps/SlateportCity/scripts.pory"

# 45 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 59 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 60 "data/maps/SlateportCity/scripts.pory"
	return
# 61 "data/maps/SlateportCity/scripts.pory"

# 62 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 63 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 65 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 66 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 67 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 68 "data/maps/SlateportCity/scripts.pory"
	return
# 69 "data/maps/SlateportCity/scripts.pory"

# 70 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 72 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 73 "data/maps/SlateportCity/scripts.pory"
	return
# 74 "data/maps/SlateportCity/scripts.pory"

# 75 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 76 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 77 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 78 "data/maps/SlateportCity/scripts.pory"

# 79 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 80 "data/maps/SlateportCity/scripts.pory"
	lockall
# 81 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 82 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 83 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 84 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 86 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 87 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 89 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 92 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 94 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 95 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 96 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 98 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 99 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 101 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 102 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 103 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 104 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 105 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 107 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 108 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 109 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 110 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 111 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 112 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 113 "data/maps/SlateportCity/scripts.pory"
	end
# 114 "data/maps/SlateportCity/scripts.pory"

# 115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 116 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 117 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 118 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/SlateportCity/scripts.pory"
	step_end
# 120 "data/maps/SlateportCity/scripts.pory"

# 121 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 129 "data/maps/SlateportCity/scripts.pory"
	step_end
# 130 "data/maps/SlateportCity/scripts.pory"

# 131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 140 "data/maps/SlateportCity/scripts.pory"
	step_end
# 141 "data/maps/SlateportCity/scripts.pory"

# 142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 143 "data/maps/SlateportCity/scripts.pory"
	lock
# 144 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 145 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 146 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 147 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
	release
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 160 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 161 "data/maps/SlateportCity/scripts.pory"
	release
# 162 "data/maps/SlateportCity/scripts.pory"
	end
# 163 "data/maps/SlateportCity/scripts.pory"

# 164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader1::
# 165 "data/maps/SlateportCity/scripts.pory"
	lock
# 166 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 167 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED, SlateportCity_EventScript_Trade1Completed
# 168 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_GRIMER, SlateportCity_Text_IllTradeIfYouWant1, SlateportCity_EventScript_MukTrade, SlateportCity_EventScript_NotRequestedMon1, SlateportCity_Text_RememberToRecycle
# 169 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 170 "data/maps/SlateportCity/scripts.pory"
	release
# 171 "data/maps/SlateportCity/scripts.pory"
	end
# 172 "data/maps/SlateportCity/scripts.pory"

# 173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MukTrade::
# 174 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_MUK, SlateportCity_Text_WillingToTradeMuks, SlateportCity_EventScript_DeclineTrade1, SlateportCity_EventScript_NotRequestedMon2, SlateportCity_Text_RememberToRecycle
# 175 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 176 "data/maps/SlateportCity/scripts.pory"
	release
# 177 "data/maps/SlateportCity/scripts.pory"
	end
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade1::
# 180 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YoungPeopleDont, MSGBOX_DEFAULT
# 181 "data/maps/SlateportCity/scripts.pory"
	release
# 182 "data/maps/SlateportCity/scripts.pory"
	end
# 183 "data/maps/SlateportCity/scripts.pory"

# 184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon1::
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAGrimer, MSGBOX_DEFAULT
# 186 "data/maps/SlateportCity/scripts.pory"
	release
# 187 "data/maps/SlateportCity/scripts.pory"
	end
# 188 "data/maps/SlateportCity/scripts.pory"

# 189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon2::
# 190 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAMuk, MSGBOX_DEFAULT
# 191 "data/maps/SlateportCity/scripts.pory"
	release
# 192 "data/maps/SlateportCity/scripts.pory"
	end
# 193 "data/maps/SlateportCity/scripts.pory"

# 194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trade1Completed::
# 195 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RememberToRecycle, MSGBOX_DEFAULT
# 196 "data/maps/SlateportCity/scripts.pory"
	release
# 197 "data/maps/SlateportCity/scripts.pory"
	end
# 198 "data/maps/SlateportCity/scripts.pory"

# 199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant1:
# 200 "data/maps/SlateportCity/scripts.pory"
	.string "Oil spills are such a tragedy.\p"
# 201 "data/maps/SlateportCity/scripts.pory"
	.string "Look at what happened to this Grimer I\n"
# 202 "data/maps/SlateportCity/scripts.pory"
	.string "found by the harbor…\p"
# 203 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe you can care for this Grimer better\n"
# 204 "data/maps/SlateportCity/scripts.pory"
	.string "than I can.\p"
# 205 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Grimer of your own, I would\n"
# 206 "data/maps/SlateportCity/scripts.pory"
	.string "be willing to trade.$"
# 207 "data/maps/SlateportCity/scripts.pory"

# 208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WillingToTradeMuks:
# 209 "data/maps/SlateportCity/scripts.pory"
	.string "I see, would you be willing to trade Muks\n"
# 210 "data/maps/SlateportCity/scripts.pory"
	.string "instead?$"
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAGrimer:
# 213 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Grimer, silly.$"
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAMuk:
# 216 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Muk, silly.$"
# 217 "data/maps/SlateportCity/scripts.pory"

# 218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YoungPeopleDont:
# 219 "data/maps/SlateportCity/scripts.pory"
	.string "Young people don't care about the\n"
# 220 "data/maps/SlateportCity/scripts.pory"
	.string "environment these days…$"
# 221 "data/maps/SlateportCity/scripts.pory"

# 222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RememberToRecycle:
# 223 "data/maps/SlateportCity/scripts.pory"
	.string "Remember to recycle!$"
# 224 "data/maps/SlateportCity/scripts.pory"

# 225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader2::
# 226 "data/maps/SlateportCity/scripts.pory"
	lock
# 227 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 228 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED, SlateportCity_EventScript_TradeCompleted
# 229 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_WEEZING, SlateportCity_Text_IllTradeIfYouWant2, SlateportCity_EventScript_DeclineTrade2, SlateportCity_EventScript_NotRequestedMon3, SlateportCity_Text_MyWeezingLooks
# 230 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED
# 231 "data/maps/SlateportCity/scripts.pory"
	release
# 232 "data/maps/SlateportCity/scripts.pory"
	end
# 233 "data/maps/SlateportCity/scripts.pory"

# 234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade2::
# 235 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 236 "data/maps/SlateportCity/scripts.pory"
	release
# 237 "data/maps/SlateportCity/scripts.pory"
	end
# 238 "data/maps/SlateportCity/scripts.pory"

# 239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon3::
# 240 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontTryToPull, MSGBOX_DEFAULT
# 241 "data/maps/SlateportCity/scripts.pory"
	release
# 242 "data/maps/SlateportCity/scripts.pory"
	end
# 243 "data/maps/SlateportCity/scripts.pory"

# 244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TradeCompleted::
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
	release
# 247 "data/maps/SlateportCity/scripts.pory"
	end
# 248 "data/maps/SlateportCity/scripts.pory"

# 249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant2:
# 250 "data/maps/SlateportCity/scripts.pory"
	.string "The name's Devin, and I just set up\n"
# 251 "data/maps/SlateportCity/scripts.pory"
	.string "this tent, I call it the Devin Tent!\p"
# 252 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway, I have this Weezing I want to\n"
# 253 "data/maps/SlateportCity/scripts.pory"
	.string "trade.\p"
# 254 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Weezing from Kanto i'll\n"
# 255 "data/maps/SlateportCity/scripts.pory"
	.string "trade you for it!\p"
# 256 "data/maps/SlateportCity/scripts.pory"
	.string "There's just one catch, this Weezing is\n"
# 257 "data/maps/SlateportCity/scripts.pory"
	.string "quite afraid of heights you see.\p"
# 258 "data/maps/SlateportCity/scripts.pory"
	.string "So if you could keep it as Levitate, so\n"
# 259 "data/maps/SlateportCity/scripts.pory"
	.string "it doesn't have to worry about falling,\l"
# 260 "data/maps/SlateportCity/scripts.pory"
	.string "that would be great.\p"
# 261 "data/maps/SlateportCity/scripts.pory"
	.string "Are you up for it?$"
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MyWeezingLooks:
# 264 "data/maps/SlateportCity/scripts.pory"
	.string "My Weezing looks happier already.$"
# 265 "data/maps/SlateportCity/scripts.pory"

# 266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontTryToPull:
# 267 "data/maps/SlateportCity/scripts.pory"
	.string "Don't try to pull a fast one on me.$"
# 268 "data/maps/SlateportCity/scripts.pory"

# 269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDontWantToThatsOkay:
# 270 "data/maps/SlateportCity/scripts.pory"
	.string "Thats fine.$"
# 271 "data/maps/SlateportCity/scripts.pory"

# 272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AnyPokemonCanBeCute:
# 273 "data/maps/SlateportCity/scripts.pory"
	.string "How is my Weezing doing?$"
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 276 "data/maps/SlateportCity/scripts.pory"
	lock
# 277 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 278 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 279 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 280 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 281 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 282 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 283 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 286 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 287 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 289 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 290 "data/maps/SlateportCity/scripts.pory"
	release
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 295 "data/maps/SlateportCity/scripts.pory"
	release
# 296 "data/maps/SlateportCity/scripts.pory"
	end
# 297 "data/maps/SlateportCity/scripts.pory"

# 298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 299 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 300 "data/maps/SlateportCity/scripts.pory"
	release
# 301 "data/maps/SlateportCity/scripts.pory"
	end
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 304 "data/maps/SlateportCity/scripts.pory"
	lock
# 305 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 306 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity/scripts.pory"
	release
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 313 "data/maps/SlateportCity/scripts.pory"
	release
# 314 "data/maps/SlateportCity/scripts.pory"
	end
# 315 "data/maps/SlateportCity/scripts.pory"

# 316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 317 "data/maps/SlateportCity/scripts.pory"
	lock
# 318 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 319 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 320 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 321 "data/maps/SlateportCity/scripts.pory"
	release
# 322 "data/maps/SlateportCity/scripts.pory"
	end
# 323 "data/maps/SlateportCity/scripts.pory"

# 324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 325 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 326 "data/maps/SlateportCity/scripts.pory"
	release
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 330 "data/maps/SlateportCity/scripts.pory"
	lock
# 331 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 332 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 333 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 334 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 335 "data/maps/SlateportCity/scripts.pory"
	release
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	release
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 344 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 345 "data/maps/SlateportCity/scripts.pory"
	release
# 346 "data/maps/SlateportCity/scripts.pory"
	end
# 347 "data/maps/SlateportCity/scripts.pory"

# 348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 349 "data/maps/SlateportCity/scripts.pory"
	lock
# 350 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 351 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 352 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 353 "data/maps/SlateportCity/scripts.pory"
	release
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 358 "data/maps/SlateportCity/scripts.pory"
	release
# 359 "data/maps/SlateportCity/scripts.pory"
	end
# 360 "data/maps/SlateportCity/scripts.pory"

# 361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 362 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 364 "data/maps/SlateportCity/scripts.pory"
	end
# 365 "data/maps/SlateportCity/scripts.pory"

# 366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 371 "data/maps/SlateportCity/scripts.pory"
	lock
# 372 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 373 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 375 "data/maps/SlateportCity/scripts.pory"
	release
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 379 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 380 "data/maps/SlateportCity/scripts.pory"
	release
# 381 "data/maps/SlateportCity/scripts.pory"
	end
# 382 "data/maps/SlateportCity/scripts.pory"

# 383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 384 "data/maps/SlateportCity/scripts.pory"
	lock
# 385 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 386 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 388 "data/maps/SlateportCity/scripts.pory"
	release
# 389 "data/maps/SlateportCity/scripts.pory"
	end
# 390 "data/maps/SlateportCity/scripts.pory"

# 391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 392 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 393 "data/maps/SlateportCity/scripts.pory"
	release
# 394 "data/maps/SlateportCity/scripts.pory"
	end
# 395 "data/maps/SlateportCity/scripts.pory"

# 396 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 398 "data/maps/SlateportCity/scripts.pory"
	end
# 399 "data/maps/SlateportCity/scripts.pory"

# 400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 401 "data/maps/SlateportCity/scripts.pory"
	lockall
# 402 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 403 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 404 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 405 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 406 "data/maps/SlateportCity/scripts.pory"
	end
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 409 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 410 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 411 "data/maps/SlateportCity/scripts.pory"
	end
# 412 "data/maps/SlateportCity/scripts.pory"

# 413 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 414 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 415 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 416 "data/maps/SlateportCity/scripts.pory"
	end
# 417 "data/maps/SlateportCity/scripts.pory"

# 418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 419 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 420 "data/maps/SlateportCity/scripts.pory"
	end
# 421 "data/maps/SlateportCity/scripts.pory"

# 422 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 424 "data/maps/SlateportCity/scripts.pory"
	end
# 425 "data/maps/SlateportCity/scripts.pory"

# 426 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 427 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 428 "data/maps/SlateportCity/scripts.pory"
	end
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 432 "data/maps/SlateportCity/scripts.pory"
	end
# 433 "data/maps/SlateportCity/scripts.pory"

# 434 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 435 "data/maps/SlateportCity/scripts.pory"
	lockall
# 436 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 438 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 439 "data/maps/SlateportCity/scripts.pory"
	end
# 440 "data/maps/SlateportCity/scripts.pory"

# 441 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 442 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 443 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 444 "data/maps/SlateportCity/scripts.pory"
	end
# 445 "data/maps/SlateportCity/scripts.pory"

# 446 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 448 "data/maps/SlateportCity/scripts.pory"
	end
# 449 "data/maps/SlateportCity/scripts.pory"

# 450 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 451 "data/maps/SlateportCity/scripts.pory"
	lock
# 452 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 453 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 454 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 455 "data/maps/SlateportCity/scripts.pory"
	release
# 456 "data/maps/SlateportCity/scripts.pory"
	end
# 457 "data/maps/SlateportCity/scripts.pory"

# 458 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 459 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 461 "data/maps/SlateportCity/scripts.pory"
	release
# 462 "data/maps/SlateportCity/scripts.pory"
	end
# 463 "data/maps/SlateportCity/scripts.pory"

# 464 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 465 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 466 "data/maps/SlateportCity/scripts.pory"
	end
# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 469 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 470 "data/maps/SlateportCity/scripts.pory"
	end
# 471 "data/maps/SlateportCity/scripts.pory"

# 472 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 473 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 474 "data/maps/SlateportCity/scripts.pory"
	end
# 475 "data/maps/SlateportCity/scripts.pory"

# 476 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 477 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 478 "data/maps/SlateportCity/scripts.pory"
	end
# 479 "data/maps/SlateportCity/scripts.pory"

# 480 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 481 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 482 "data/maps/SlateportCity/scripts.pory"
	end
# 483 "data/maps/SlateportCity/scripts.pory"

# 484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 485 "data/maps/SlateportCity/scripts.pory"
	lock
# 486 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 487 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 488 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 489 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 490 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 491 "data/maps/SlateportCity/scripts.pory"
	release
# 492 "data/maps/SlateportCity/scripts.pory"
	end
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 495 "data/maps/SlateportCity/scripts.pory"
	lock
# 496 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 499 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 500 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/SlateportCity/scripts.pory"
	release
# 502 "data/maps/SlateportCity/scripts.pory"
	end
# 503 "data/maps/SlateportCity/scripts.pory"

# 504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 505 "data/maps/SlateportCity/scripts.pory"
	lock
# 506 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 507 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 508 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 509 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 510 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/SlateportCity/scripts.pory"
	release
# 512 "data/maps/SlateportCity/scripts.pory"
	end
# 513 "data/maps/SlateportCity/scripts.pory"

# 514 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 515 "data/maps/SlateportCity/scripts.pory"
	lock
# 516 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 517 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 518 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 519 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 520 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SlateportCity/scripts.pory"
	release
# 522 "data/maps/SlateportCity/scripts.pory"
	end
# 523 "data/maps/SlateportCity/scripts.pory"

# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 525 "data/maps/SlateportCity/scripts.pory"
	lock
# 526 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 527 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 528 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 529 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 530 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/SlateportCity/scripts.pory"
	release
# 532 "data/maps/SlateportCity/scripts.pory"
	end
# 533 "data/maps/SlateportCity/scripts.pory"

# 534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 535 "data/maps/SlateportCity/scripts.pory"
	lock
# 536 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 537 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 538 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 539 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 540 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/SlateportCity/scripts.pory"
	release
# 542 "data/maps/SlateportCity/scripts.pory"
	end
# 543 "data/maps/SlateportCity/scripts.pory"

# 544 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 545 "data/maps/SlateportCity/scripts.pory"
	lock
# 546 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 547 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 548 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 549 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 550 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/SlateportCity/scripts.pory"
	release
# 552 "data/maps/SlateportCity/scripts.pory"
	end
# 553 "data/maps/SlateportCity/scripts.pory"

# 554 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 555 "data/maps/SlateportCity/scripts.pory"
	lock
# 556 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 557 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 558 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 559 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 560 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/SlateportCity/scripts.pory"
	release
# 562 "data/maps/SlateportCity/scripts.pory"
	end
# 563 "data/maps/SlateportCity/scripts.pory"

# 564 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 565 "data/maps/SlateportCity/scripts.pory"
	lock
# 566 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 567 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 568 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 569 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 571 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 573 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 574 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 575 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 579 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 581 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 582 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 583 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 585 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 587 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 588 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 589 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 591 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 593 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/SlateportCity/scripts.pory"
	release
# 595 "data/maps/SlateportCity/scripts.pory"
	end
# 596 "data/maps/SlateportCity/scripts.pory"

# 597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 598 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 599 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 600 "data/maps/SlateportCity/scripts.pory"
	step_end
# 601 "data/maps/SlateportCity/scripts.pory"

# 602 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 603 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 604 "data/maps/SlateportCity/scripts.pory"
	end
# 605 "data/maps/SlateportCity/scripts.pory"

# 606 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 607 "data/maps/SlateportCity/scripts.pory"
	lock
# 608 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 609 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 610 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 611 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 612 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/SlateportCity/scripts.pory"
	release
# 614 "data/maps/SlateportCity/scripts.pory"
	end
# 615 "data/maps/SlateportCity/scripts.pory"

# 616 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 617 "data/maps/SlateportCity/scripts.pory"
	lock
# 618 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 619 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 621 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 622 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 623 "data/maps/SlateportCity/scripts.pory"
	release
# 624 "data/maps/SlateportCity/scripts.pory"
	end
# 625 "data/maps/SlateportCity/scripts.pory"

# 626 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 627 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 628 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 629 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 630 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 631 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 632 "data/maps/SlateportCity/scripts.pory"
	release
# 633 "data/maps/SlateportCity/scripts.pory"
	end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 636 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 637 "data/maps/SlateportCity/scripts.pory"
	release
# 638 "data/maps/SlateportCity/scripts.pory"
	end
# 639 "data/maps/SlateportCity/scripts.pory"

# 640 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 641 "data/maps/SlateportCity/scripts.pory"
	lock
# 642 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 643 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 644 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 645 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 646 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 647 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 648 "data/maps/SlateportCity/scripts.pory"
	release
# 649 "data/maps/SlateportCity/scripts.pory"
	end
# 650 "data/maps/SlateportCity/scripts.pory"

# 651 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 652 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 653 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 654 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 655 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 656 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 657 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 658 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 659 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 660 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 661 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 662 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 663 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 664 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 665 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 666 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 667 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 668 "data/maps/SlateportCity/scripts.pory"
	release
# 669 "data/maps/SlateportCity/scripts.pory"
	end
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AccurateMoveTMClerk::
# 672 "data/maps/SlateportCity/scripts.pory"
	lock
# 673 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 674 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 675 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 676 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AccurateTMs
# 677 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 678 "data/maps/SlateportCity/scripts.pory"
	release
# 679 "data/maps/SlateportCity/scripts.pory"
	end
# 680 "data/maps/SlateportCity/scripts.pory"

# 681 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 682 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AccurateTMs:
# 683 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 684 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DISARMING_VOICE
# 685 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_FEINT_ATTACK
# 686 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_MAGICAL_LEAF
# 687 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 688 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 689 "data/maps/SlateportCity/scripts.pory"
	release
# 690 "data/maps/SlateportCity/scripts.pory"
	end
# 691 "data/maps/SlateportCity/scripts.pory"

# 692 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 693 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 694 "data/maps/SlateportCity/scripts.pory"
	lockall
# 695 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 696 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 697 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 698 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 699 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 701 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 702 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 704 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 705 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 706 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 707 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 708 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 710 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 711 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 712 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 713 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 715 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 716 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 717 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 718 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 719 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 720 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 721 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 722 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 724 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 726 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 727 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 728 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 730 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 732 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 733 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 734 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 735 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 736 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 737 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 738 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 740 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 741 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 742 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 743 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 744 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 745 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 746 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 747 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 748 "data/maps/SlateportCity/scripts.pory"
	end
# 749 "data/maps/SlateportCity/scripts.pory"

# 750 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 751 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 752 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 753 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 754 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 755 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 756 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 757 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 758 "data/maps/SlateportCity/scripts.pory"
	step_end
# 759 "data/maps/SlateportCity/scripts.pory"

# 760 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 761 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 762 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 763 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 764 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 765 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 766 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 767 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 768 "data/maps/SlateportCity/scripts.pory"
	step_end
# 769 "data/maps/SlateportCity/scripts.pory"

# 770 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 771 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 772 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 773 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 774 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 775 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 776 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 777 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 778 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 779 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 780 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 781 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 782 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 783 "data/maps/SlateportCity/scripts.pory"
	step_end
# 784 "data/maps/SlateportCity/scripts.pory"

# 785 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 786 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 787 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 788 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 789 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 790 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 791 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 792 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 793 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 794 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 795 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 796 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 797 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 798 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 799 "data/maps/SlateportCity/scripts.pory"
	step_end
# 800 "data/maps/SlateportCity/scripts.pory"

# 801 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 802 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 803 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 804 "data/maps/SlateportCity/scripts.pory"
	step_end
# 805 "data/maps/SlateportCity/scripts.pory"

# 806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 807 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 808 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 809 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 810 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 811 "data/maps/SlateportCity/scripts.pory"
	step_end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 814 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 815 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 816 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 817 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 818 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 819 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 820 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 821 "data/maps/SlateportCity/scripts.pory"
	step_end
# 822 "data/maps/SlateportCity/scripts.pory"

# 823 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 824 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 825 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 826 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 827 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 828 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 829 "data/maps/SlateportCity/scripts.pory"
	step_end
# 830 "data/maps/SlateportCity/scripts.pory"

# 831 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 832 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 833 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 834 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 835 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 836 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 837 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 838 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 839 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 840 "data/maps/SlateportCity/scripts.pory"
	step_end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 843 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 844 "data/maps/SlateportCity/scripts.pory"
	end
# 845 "data/maps/SlateportCity/scripts.pory"

# 846 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 847 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 848 "data/maps/SlateportCity/scripts.pory"
	end
# 849 "data/maps/SlateportCity/scripts.pory"

# 850 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 851 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 852 "data/maps/SlateportCity/scripts.pory"
	end
# 853 "data/maps/SlateportCity/scripts.pory"

# 854 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 855 "data/maps/SlateportCity/scripts.pory"
	lock
# 856 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 857 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 858 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 859 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 860 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 861 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 862 "data/maps/SlateportCity/scripts.pory"
	release
# 863 "data/maps/SlateportCity/scripts.pory"
	end
# 864 "data/maps/SlateportCity/scripts.pory"

# 865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 866 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 867 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 868 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 869 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 870 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 871 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 872 "data/maps/SlateportCity/scripts.pory"
	end
# 873 "data/maps/SlateportCity/scripts.pory"

# 874 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 875 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 876 "data/maps/SlateportCity/scripts.pory"
	release
# 877 "data/maps/SlateportCity/scripts.pory"
	end
# 878 "data/maps/SlateportCity/scripts.pory"

# 879 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 880 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 881 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 882 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 883 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 884 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 885 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 886 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 887 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 888 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 889 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 890 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 891 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 892 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 893 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 894 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 895 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 896 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 897 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 898 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 899 "data/maps/SlateportCity/scripts.pory"
	end
# 900 "data/maps/SlateportCity/scripts.pory"

# 901 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 902 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 903 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 904 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 905 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 906 "data/maps/SlateportCity/scripts.pory"
	end
# 907 "data/maps/SlateportCity/scripts.pory"

# 908 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 909 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 910 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 911 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 912 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 913 "data/maps/SlateportCity/scripts.pory"
	end
# 914 "data/maps/SlateportCity/scripts.pory"

# 915 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 916 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 917 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 918 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 919 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 920 "data/maps/SlateportCity/scripts.pory"
	end
# 921 "data/maps/SlateportCity/scripts.pory"

# 922 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 923 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 924 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 925 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 926 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 927 "data/maps/SlateportCity/scripts.pory"
	end
# 928 "data/maps/SlateportCity/scripts.pory"

# 929 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 930 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 931 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 932 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 933 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 934 "data/maps/SlateportCity/scripts.pory"
	end
# 935 "data/maps/SlateportCity/scripts.pory"

# 936 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 937 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 938 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 939 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 940 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 941 "data/maps/SlateportCity/scripts.pory"
	end
# 942 "data/maps/SlateportCity/scripts.pory"

# 943 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 944 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 945 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 946 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 947 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 948 "data/maps/SlateportCity/scripts.pory"
	end
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 951 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 952 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 953 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 954 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 955 "data/maps/SlateportCity/scripts.pory"
	end
# 956 "data/maps/SlateportCity/scripts.pory"

# 957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 958 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 959 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 960 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 961 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 962 "data/maps/SlateportCity/scripts.pory"
	end
# 963 "data/maps/SlateportCity/scripts.pory"

# 964 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 965 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 966 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 967 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 968 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 969 "data/maps/SlateportCity/scripts.pory"
	end
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 972 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 973 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 974 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 975 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 976 "data/maps/SlateportCity/scripts.pory"
	end
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 979 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 980 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 981 "data/maps/SlateportCity/scripts.pory"
	release
# 982 "data/maps/SlateportCity/scripts.pory"
	end
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 985 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 986 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 987 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 988 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 989 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 990 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 991 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 992 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 993 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 994 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 995 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 996 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 997 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 998 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 999 "data/maps/SlateportCity/scripts.pory"
	release
# 1000 "data/maps/SlateportCity/scripts.pory"
	end
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1003 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1004 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1005 "data/maps/SlateportCity/scripts.pory"
	release
# 1006 "data/maps/SlateportCity/scripts.pory"
	end
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1009 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1010 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1011 "data/maps/SlateportCity/scripts.pory"
	end
# 1012 "data/maps/SlateportCity/scripts.pory"

# 1013 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1014 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1015 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1016 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1017 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1018 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1019 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 1020 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1021 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1022 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1023 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1024 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1025 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1026 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1027 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1028 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1029 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1030 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 1031 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1032 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1033 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1034 "data/maps/SlateportCity/scripts.pory"
	end
# 1035 "data/maps/SlateportCity/scripts.pory"

# 1036 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1037 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1038 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1039 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1040 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1043 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1044 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1045 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1046 "data/maps/SlateportCity/scripts.pory"

# 1047 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1048 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1049 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1050 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1053 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1054 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1055 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1056 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1057 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1058 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1059 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1060 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1061 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1062 "data/maps/SlateportCity/scripts.pory"

# 1063 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1064 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1065 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1066 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1067 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1068 "data/maps/SlateportCity/scripts.pory"
	end
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1071 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1073 "data/maps/SlateportCity/scripts.pory"

# 1074 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1077 "data/maps/SlateportCity/scripts.pory"

# 1078 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1080 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1084 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1085 "data/maps/SlateportCity/scripts.pory"

# 1086 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1089 "data/maps/SlateportCity/scripts.pory"

# 1090 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1094 "data/maps/SlateportCity/scripts.pory"

# 1095 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1101 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1102 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1113 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1118 "data/maps/SlateportCity/scripts.pory"

# 1119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1123 "data/maps/SlateportCity/scripts.pory"

# 1124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1130 "data/maps/SlateportCity/scripts.pory"

# 1131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1136 "data/maps/SlateportCity/scripts.pory"

# 1137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1143 "data/maps/SlateportCity/scripts.pory"

# 1144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1163 "data/maps/SlateportCity/scripts.pory"

# 1164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1165 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1182 "data/maps/SlateportCity/scripts.pory"

# 1183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1203 "data/maps/SlateportCity/scripts.pory"

# 1204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1210 "data/maps/SlateportCity/scripts.pory"

# 1211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1216 "data/maps/SlateportCity/scripts.pory"

# 1217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1227 "data/maps/SlateportCity/scripts.pory"

# 1228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1233 "data/maps/SlateportCity/scripts.pory"

# 1234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1237 "data/maps/SlateportCity/scripts.pory"

# 1238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1248 "data/maps/SlateportCity/scripts.pory"

# 1249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1256 "data/maps/SlateportCity/scripts.pory"

# 1257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1262 "data/maps/SlateportCity/scripts.pory"

# 1263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1268 "data/maps/SlateportCity/scripts.pory"

# 1269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1291 "data/maps/SlateportCity/scripts.pory"

# 1292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1332 "data/maps/SlateportCity/scripts.pory"

# 1333 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1343 "data/maps/SlateportCity/scripts.pory"

# 1344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1351 "data/maps/SlateportCity/scripts.pory"

# 1352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1356 "data/maps/SlateportCity/scripts.pory"

# 1357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1368 "data/maps/SlateportCity/scripts.pory"

# 1369 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon FAN CLUB\n"
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1372 "data/maps/SlateportCity/scripts.pory"

# 1373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1377 "data/maps/SlateportCity/scripts.pory"

# 1378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1386 "data/maps/SlateportCity/scripts.pory"

# 1387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1393 "data/maps/SlateportCity/scripts.pory"

# 1394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1398 "data/maps/SlateportCity/scripts.pory"

# 1399 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1402 "data/maps/SlateportCity/scripts.pory"

# 1403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1417 "data/maps/SlateportCity/scripts.pory"

# 1418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CenterS for crushing BERRIES.\p"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1428 "data/maps/SlateportCity/scripts.pory"

# 1429 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1432 "data/maps/SlateportCity/scripts.pory"

# 1433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1436 "data/maps/SlateportCity/scripts.pory"

# 1437 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1440 "data/maps/SlateportCity/scripts.pory"

# 1441 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1444 "data/maps/SlateportCity/scripts.pory"

# 1445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1450 "data/maps/SlateportCity/scripts.pory"

# 1451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1454 "data/maps/SlateportCity/scripts.pory"

# 1455 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1456 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1457 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1460 "data/maps/SlateportCity/scripts.pory"

# 1461 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1469 "data/maps/SlateportCity/scripts.pory"

# 1470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1473 "data/maps/SlateportCity/scripts.pory"

# 1474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1477 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "PokénavS.\p"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1480 "data/maps/SlateportCity/scripts.pory"

# 1481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1482 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1484 "data/maps/SlateportCity/scripts.pory"

# 1485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1492 "data/maps/SlateportCity/scripts.pory"

# 1493 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
