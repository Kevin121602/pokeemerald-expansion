SlateportCity_EventScript_ApplianceMan::
# 2 "data/maps/SlateportCity/scripts.pory"
	lock
# 3 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 4 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_CHANGED_ROTOM_FORM, SlateportCity_EventScript_ApplianceMan_2
# 8 "data/maps/SlateportCity/scripts.pory"
	special IsRotomInParty
# 9 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_ApplianceMan_5
# 14 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_2, MSGBOX_YESNO
# 20 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_ApplianceMan_8
# 25 "data/maps/SlateportCity/scripts.pory"
	random 5
# 26 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_OpenPartyMenu
# 27 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_EventScript_ApplianceMan_11
# 33 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_ApplianceMan_1:
# 39 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_ApplianceMan_2:
# 5 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_0
	goto SlateportCity_EventScript_ApplianceMan_1

SlateportCity_EventScript_ApplianceMan_5:
# 10 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_1
	goto SlateportCity_EventScript_ApplianceMan_1

SlateportCity_EventScript_ApplianceMan_8:
# 21 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_3
# 22 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_ApplianceMan_11:
# 28 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_CHANGED_ROTOM_FORM
# 29 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_4
# 30 "data/maps/SlateportCity/scripts.pory"
	release
	end


# 43 "data/maps/SlateportCity/scripts.pory"

# 44 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 45 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 46 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 47 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 48 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 49 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 50 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 51 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 52 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 53 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 54 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 55 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 56 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 57 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 58 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 59 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 60 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 61 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 62 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 63 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 64 "data/maps/SlateportCity/scripts.pory"

# 65 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 66 "data/maps/SlateportCity/scripts.pory"

# 67 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 68 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 69 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 70 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 71 "data/maps/SlateportCity/scripts.pory"

# 72 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 73 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_SYS_GAUNTLET
# 74 "data/maps/SlateportCity/scripts.pory"
	call EventScript_HideMrBriney
# 75 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 76 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 77 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 78 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 79 "data/maps/SlateportCity/scripts.pory"
	end
# 80 "data/maps/SlateportCity/scripts.pory"

# 81 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 82 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 83 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 84 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 85 "data/maps/SlateportCity/scripts.pory"
	return
# 86 "data/maps/SlateportCity/scripts.pory"

# 87 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 88 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 89 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 90 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 91 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 92 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 93 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 94 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 95 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 97 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 98 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 99 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 100 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 101 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 102 "data/maps/SlateportCity/scripts.pory"
	return
# 103 "data/maps/SlateportCity/scripts.pory"

# 104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OpenPartyMenu::
# 105 "data/maps/SlateportCity/scripts.pory"
	special ChooseRotomForRandomFormChange
# 106 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 107 "data/maps/SlateportCity/scripts.pory"
	lock
# 108 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 109 "data/maps/SlateportCity/scripts.pory"
	return
# 110 "data/maps/SlateportCity/scripts.pory"

# 111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 112 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 113 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 114 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 115 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 116 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 117 "data/maps/SlateportCity/scripts.pory"
	return
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 120 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 121 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 122 "data/maps/SlateportCity/scripts.pory"
	return
# 123 "data/maps/SlateportCity/scripts.pory"

# 124 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 125 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 126 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 127 "data/maps/SlateportCity/scripts.pory"

# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 129 "data/maps/SlateportCity/scripts.pory"
	lockall
# 130 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 131 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 132 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 133 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 134 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 135 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 136 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 137 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 139 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 140 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 141 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 143 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 144 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 145 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 146 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 147 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 148 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 149 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 150 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 151 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 152 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 153 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 154 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 156 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 157 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 158 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 159 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 160 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 161 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 162 "data/maps/SlateportCity/scripts.pory"
	end
# 163 "data/maps/SlateportCity/scripts.pory"

# 164 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 165 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 166 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 167 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 168 "data/maps/SlateportCity/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 171 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 172 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 173 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 174 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 175 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 177 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 178 "data/maps/SlateportCity/scripts.pory"
	step_end
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 181 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 182 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 183 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 184 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 185 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 186 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 187 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 188 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 189 "data/maps/SlateportCity/scripts.pory"
	step_end
# 190 "data/maps/SlateportCity/scripts.pory"

# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 192 "data/maps/SlateportCity/scripts.pory"
	lock
# 193 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 194 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 195 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 196 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 197 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 198 "data/maps/SlateportCity/scripts.pory"
	release
# 199 "data/maps/SlateportCity/scripts.pory"
	end
# 200 "data/maps/SlateportCity/scripts.pory"

# 201 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 203 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 204 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 205 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 206 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 207 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 208 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 209 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader1::
# 214 "data/maps/SlateportCity/scripts.pory"
	lock
# 215 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 216 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED, SlateportCity_EventScript_Trade1Completed
# 217 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_GRIMER, SlateportCity_Text_IllTradeIfYouWant1, SlateportCity_EventScript_MukTrade, SlateportCity_EventScript_NotRequestedMon1, SlateportCity_Text_RememberToRecycle
# 218 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 219 "data/maps/SlateportCity/scripts.pory"
	release
# 220 "data/maps/SlateportCity/scripts.pory"
	end
# 221 "data/maps/SlateportCity/scripts.pory"

# 222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MukTrade::
# 223 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_MUK, SlateportCity_Text_WillingToTradeMuks, SlateportCity_EventScript_DeclineTrade1, SlateportCity_EventScript_NotRequestedMon2, SlateportCity_Text_RememberToRecycle
# 224 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 225 "data/maps/SlateportCity/scripts.pory"
	release
# 226 "data/maps/SlateportCity/scripts.pory"
	end
# 227 "data/maps/SlateportCity/scripts.pory"

# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade1::
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YoungPeopleDont, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon1::
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAGrimer, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity/scripts.pory"
	release
# 236 "data/maps/SlateportCity/scripts.pory"
	end
# 237 "data/maps/SlateportCity/scripts.pory"

# 238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon2::
# 239 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAMuk, MSGBOX_DEFAULT
# 240 "data/maps/SlateportCity/scripts.pory"
	release
# 241 "data/maps/SlateportCity/scripts.pory"
	end
# 242 "data/maps/SlateportCity/scripts.pory"

# 243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trade1Completed::
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RememberToRecycle, MSGBOX_DEFAULT
# 245 "data/maps/SlateportCity/scripts.pory"
	release
# 246 "data/maps/SlateportCity/scripts.pory"
	end
# 247 "data/maps/SlateportCity/scripts.pory"

# 248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant1:
# 249 "data/maps/SlateportCity/scripts.pory"
	.string "Oil spills are such a tragedy.\p"
# 250 "data/maps/SlateportCity/scripts.pory"
	.string "Look at what happened to this Grimer I\n"
# 251 "data/maps/SlateportCity/scripts.pory"
	.string "found by the harbor…\p"
# 252 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe you can care for this Grimer better\n"
# 253 "data/maps/SlateportCity/scripts.pory"
	.string "than I can.\p"
# 254 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Grimer of your own, I would\n"
# 255 "data/maps/SlateportCity/scripts.pory"
	.string "be willing to trade.$"
# 256 "data/maps/SlateportCity/scripts.pory"

# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WillingToTradeMuks:
# 258 "data/maps/SlateportCity/scripts.pory"
	.string "I see, would you be willing to trade Muks\n"
# 259 "data/maps/SlateportCity/scripts.pory"
	.string "instead?$"
# 260 "data/maps/SlateportCity/scripts.pory"

# 261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAGrimer:
# 262 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Grimer, silly.$"
# 263 "data/maps/SlateportCity/scripts.pory"

# 264 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAMuk:
# 265 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Muk, silly.$"
# 266 "data/maps/SlateportCity/scripts.pory"

# 267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YoungPeopleDont:
# 268 "data/maps/SlateportCity/scripts.pory"
	.string "Young people don't care about the\n"
# 269 "data/maps/SlateportCity/scripts.pory"
	.string "environment these days…$"
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RememberToRecycle:
# 272 "data/maps/SlateportCity/scripts.pory"
	.string "Remember to recycle!$"
# 273 "data/maps/SlateportCity/scripts.pory"

# 274 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader2::
# 275 "data/maps/SlateportCity/scripts.pory"
	lock
# 276 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 277 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED, SlateportCity_EventScript_TradeCompleted
# 278 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_WEEZING, SlateportCity_Text_IllTradeIfYouWant2, SlateportCity_EventScript_DeclineTrade2, SlateportCity_EventScript_NotRequestedMon3, SlateportCity_Text_MyWeezingLooks
# 279 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED
# 280 "data/maps/SlateportCity/scripts.pory"
	release
# 281 "data/maps/SlateportCity/scripts.pory"
	end
# 282 "data/maps/SlateportCity/scripts.pory"

# 283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade2::
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon3::
# 289 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontTryToPull, MSGBOX_DEFAULT
# 290 "data/maps/SlateportCity/scripts.pory"
	release
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TradeCompleted::
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 295 "data/maps/SlateportCity/scripts.pory"
	release
# 296 "data/maps/SlateportCity/scripts.pory"
	end
# 297 "data/maps/SlateportCity/scripts.pory"

# 298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant2:
# 299 "data/maps/SlateportCity/scripts.pory"
	.string "The name's Devin, and I just set up\n"
# 300 "data/maps/SlateportCity/scripts.pory"
	.string "this tent, I call it the Devin Tent!\p"
# 301 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway, I have this Weezing I want to\n"
# 302 "data/maps/SlateportCity/scripts.pory"
	.string "trade.\p"
# 303 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Weezing from Kanto i'll\n"
# 304 "data/maps/SlateportCity/scripts.pory"
	.string "trade you for it!\p"
# 305 "data/maps/SlateportCity/scripts.pory"
	.string "There's just one catch, this Weezing is\n"
# 306 "data/maps/SlateportCity/scripts.pory"
	.string "quite afraid of heights you see.\p"
# 307 "data/maps/SlateportCity/scripts.pory"
	.string "So if you could keep it as Levitate, so\n"
# 308 "data/maps/SlateportCity/scripts.pory"
	.string "it doesn't have to worry about falling,\l"
# 309 "data/maps/SlateportCity/scripts.pory"
	.string "that would be great.\p"
# 310 "data/maps/SlateportCity/scripts.pory"
	.string "Are you up for it?$"
# 311 "data/maps/SlateportCity/scripts.pory"

# 312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MyWeezingLooks:
# 313 "data/maps/SlateportCity/scripts.pory"
	.string "My Weezing looks happier already.$"
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontTryToPull:
# 316 "data/maps/SlateportCity/scripts.pory"
	.string "Don't try to pull a fast one on me.$"
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDontWantToThatsOkay:
# 319 "data/maps/SlateportCity/scripts.pory"
	.string "Thats fine.$"
# 320 "data/maps/SlateportCity/scripts.pory"

# 321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AnyPokemonCanBeCute:
# 322 "data/maps/SlateportCity/scripts.pory"
	.string "How is my Weezing doing?$"
# 323 "data/maps/SlateportCity/scripts.pory"

# 324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 325 "data/maps/SlateportCity/scripts.pory"
	lock
# 326 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 327 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 328 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 329 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 330 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 331 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 332 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 333 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 334 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 335 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 336 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 339 "data/maps/SlateportCity/scripts.pory"
	release
# 340 "data/maps/SlateportCity/scripts.pory"
	end
# 341 "data/maps/SlateportCity/scripts.pory"

# 342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 343 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 344 "data/maps/SlateportCity/scripts.pory"
	release
# 345 "data/maps/SlateportCity/scripts.pory"
	end
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity/scripts.pory"
	release
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 353 "data/maps/SlateportCity/scripts.pory"
	lock
# 354 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 355 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 356 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 357 "data/maps/SlateportCity/scripts.pory"
	release
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 362 "data/maps/SlateportCity/scripts.pory"
	release
# 363 "data/maps/SlateportCity/scripts.pory"
	end
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 366 "data/maps/SlateportCity/scripts.pory"
	lock
# 367 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 368 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 370 "data/maps/SlateportCity/scripts.pory"
	release
# 371 "data/maps/SlateportCity/scripts.pory"
	end
# 372 "data/maps/SlateportCity/scripts.pory"

# 373 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 375 "data/maps/SlateportCity/scripts.pory"
	release
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 379 "data/maps/SlateportCity/scripts.pory"
	lock
# 380 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 381 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 382 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity/scripts.pory"
	release
# 385 "data/maps/SlateportCity/scripts.pory"
	end
# 386 "data/maps/SlateportCity/scripts.pory"

# 387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 388 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity/scripts.pory"
	release
# 390 "data/maps/SlateportCity/scripts.pory"
	end
# 391 "data/maps/SlateportCity/scripts.pory"

# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 394 "data/maps/SlateportCity/scripts.pory"
	release
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 398 "data/maps/SlateportCity/scripts.pory"
	lock
# 399 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 400 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 402 "data/maps/SlateportCity/scripts.pory"
	release
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity/scripts.pory"
	release
# 408 "data/maps/SlateportCity/scripts.pory"
	end
# 409 "data/maps/SlateportCity/scripts.pory"

# 410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 411 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 412 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 416 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 417 "data/maps/SlateportCity/scripts.pory"
	end
# 418 "data/maps/SlateportCity/scripts.pory"

# 419 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 420 "data/maps/SlateportCity/scripts.pory"
	lock
# 421 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 422 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	release
# 425 "data/maps/SlateportCity/scripts.pory"
	end
# 426 "data/maps/SlateportCity/scripts.pory"

# 427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 428 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 429 "data/maps/SlateportCity/scripts.pory"
	release
# 430 "data/maps/SlateportCity/scripts.pory"
	end
# 431 "data/maps/SlateportCity/scripts.pory"

# 432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 433 "data/maps/SlateportCity/scripts.pory"
	lock
# 434 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 435 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	release
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	release
# 443 "data/maps/SlateportCity/scripts.pory"
	end
# 444 "data/maps/SlateportCity/scripts.pory"

# 445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 446 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 447 "data/maps/SlateportCity/scripts.pory"
	end
# 448 "data/maps/SlateportCity/scripts.pory"

# 449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 450 "data/maps/SlateportCity/scripts.pory"
	lockall
# 451 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 452 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 458 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 459 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 460 "data/maps/SlateportCity/scripts.pory"
	end
# 461 "data/maps/SlateportCity/scripts.pory"

# 462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 463 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 464 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 465 "data/maps/SlateportCity/scripts.pory"
	end
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 468 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 469 "data/maps/SlateportCity/scripts.pory"
	end
# 470 "data/maps/SlateportCity/scripts.pory"

# 471 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 472 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 473 "data/maps/SlateportCity/scripts.pory"
	end
# 474 "data/maps/SlateportCity/scripts.pory"

# 475 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 477 "data/maps/SlateportCity/scripts.pory"
	end
# 478 "data/maps/SlateportCity/scripts.pory"

# 479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 481 "data/maps/SlateportCity/scripts.pory"
	end
# 482 "data/maps/SlateportCity/scripts.pory"

# 483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 484 "data/maps/SlateportCity/scripts.pory"
	lockall
# 485 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 488 "data/maps/SlateportCity/scripts.pory"
	end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 491 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 492 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 493 "data/maps/SlateportCity/scripts.pory"
	end
# 494 "data/maps/SlateportCity/scripts.pory"

# 495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 497 "data/maps/SlateportCity/scripts.pory"
	end
# 498 "data/maps/SlateportCity/scripts.pory"

# 499 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 500 "data/maps/SlateportCity/scripts.pory"
	lock
# 501 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 502 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 503 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 504 "data/maps/SlateportCity/scripts.pory"
	release
# 505 "data/maps/SlateportCity/scripts.pory"
	end
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 509 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 510 "data/maps/SlateportCity/scripts.pory"
	release
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 515 "data/maps/SlateportCity/scripts.pory"
	end
# 516 "data/maps/SlateportCity/scripts.pory"

# 517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 518 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 519 "data/maps/SlateportCity/scripts.pory"
	end
# 520 "data/maps/SlateportCity/scripts.pory"

# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 522 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 523 "data/maps/SlateportCity/scripts.pory"
	end
# 524 "data/maps/SlateportCity/scripts.pory"

# 525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 527 "data/maps/SlateportCity/scripts.pory"
	end
# 528 "data/maps/SlateportCity/scripts.pory"

# 529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 530 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 531 "data/maps/SlateportCity/scripts.pory"
	end
# 532 "data/maps/SlateportCity/scripts.pory"

# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 534 "data/maps/SlateportCity/scripts.pory"
	lock
# 535 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 536 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 537 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 538 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 539 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/SlateportCity/scripts.pory"
	release
# 541 "data/maps/SlateportCity/scripts.pory"
	end
# 542 "data/maps/SlateportCity/scripts.pory"

# 543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 544 "data/maps/SlateportCity/scripts.pory"
	lock
# 545 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 546 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 547 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 548 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 549 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/SlateportCity/scripts.pory"
	release
# 551 "data/maps/SlateportCity/scripts.pory"
	end
# 552 "data/maps/SlateportCity/scripts.pory"

# 553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 554 "data/maps/SlateportCity/scripts.pory"
	lock
# 555 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 556 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 557 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 558 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 559 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/SlateportCity/scripts.pory"
	release
# 561 "data/maps/SlateportCity/scripts.pory"
	end
# 562 "data/maps/SlateportCity/scripts.pory"

# 563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 564 "data/maps/SlateportCity/scripts.pory"
	lock
# 565 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 566 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 567 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 568 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 569 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/SlateportCity/scripts.pory"
	release
# 571 "data/maps/SlateportCity/scripts.pory"
	end
# 572 "data/maps/SlateportCity/scripts.pory"

# 573 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 574 "data/maps/SlateportCity/scripts.pory"
	lock
# 575 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 576 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 577 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 578 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 579 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/SlateportCity/scripts.pory"
	release
# 581 "data/maps/SlateportCity/scripts.pory"
	end
# 582 "data/maps/SlateportCity/scripts.pory"

# 583 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 584 "data/maps/SlateportCity/scripts.pory"
	lock
# 585 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 586 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 587 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 588 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 589 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/SlateportCity/scripts.pory"
	release
# 591 "data/maps/SlateportCity/scripts.pory"
	end
# 592 "data/maps/SlateportCity/scripts.pory"

# 593 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 594 "data/maps/SlateportCity/scripts.pory"
	lock
# 595 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	release
# 601 "data/maps/SlateportCity/scripts.pory"
	end
# 602 "data/maps/SlateportCity/scripts.pory"

# 603 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 604 "data/maps/SlateportCity/scripts.pory"
	lock
# 605 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 606 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 607 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	release
# 611 "data/maps/SlateportCity/scripts.pory"
	end
# 612 "data/maps/SlateportCity/scripts.pory"

# 613 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 614 "data/maps/SlateportCity/scripts.pory"
	lock
# 615 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 616 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 618 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 622 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 623 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 624 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 626 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 627 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 628 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 630 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 631 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 632 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 634 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 636 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 637 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 638 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 639 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 640 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 642 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/SlateportCity/scripts.pory"
	release
# 644 "data/maps/SlateportCity/scripts.pory"
	end
# 645 "data/maps/SlateportCity/scripts.pory"

# 646 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 647 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 648 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 649 "data/maps/SlateportCity/scripts.pory"
	step_end
# 650 "data/maps/SlateportCity/scripts.pory"

# 651 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 652 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 653 "data/maps/SlateportCity/scripts.pory"
	end
# 654 "data/maps/SlateportCity/scripts.pory"

# 655 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 656 "data/maps/SlateportCity/scripts.pory"
	lock
# 657 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 658 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 659 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 660 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 661 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/SlateportCity/scripts.pory"
	release
# 663 "data/maps/SlateportCity/scripts.pory"
	end
# 664 "data/maps/SlateportCity/scripts.pory"

# 665 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 666 "data/maps/SlateportCity/scripts.pory"
	lock
# 667 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 668 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 669 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 670 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 671 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 672 "data/maps/SlateportCity/scripts.pory"
	release
# 673 "data/maps/SlateportCity/scripts.pory"
	end
# 674 "data/maps/SlateportCity/scripts.pory"

# 675 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 677 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 678 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 679 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 680 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 681 "data/maps/SlateportCity/scripts.pory"
	release
# 682 "data/maps/SlateportCity/scripts.pory"
	end
# 683 "data/maps/SlateportCity/scripts.pory"

# 684 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 685 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 686 "data/maps/SlateportCity/scripts.pory"
	release
# 687 "data/maps/SlateportCity/scripts.pory"
	end
# 688 "data/maps/SlateportCity/scripts.pory"

# 689 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 690 "data/maps/SlateportCity/scripts.pory"
	lock
# 691 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 692 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 693 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 694 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 695 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 696 "data/maps/SlateportCity/scripts.pory"
	release
# 697 "data/maps/SlateportCity/scripts.pory"
	end
# 698 "data/maps/SlateportCity/scripts.pory"

# 699 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 700 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 701 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 702 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 703 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 704 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 705 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 706 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 707 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 708 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 709 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 710 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 711 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 712 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 713 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 714 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 715 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 716 "data/maps/SlateportCity/scripts.pory"
	release
# 717 "data/maps/SlateportCity/scripts.pory"
	end
# 718 "data/maps/SlateportCity/scripts.pory"

# 719 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AccurateMoveTMClerk::
# 720 "data/maps/SlateportCity/scripts.pory"
	lock
# 721 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 722 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 723 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 724 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AccurateTMs
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 726 "data/maps/SlateportCity/scripts.pory"
	release
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EvolutionItemClerk::
# 730 "data/maps/SlateportCity/scripts.pory"
	lock
# 731 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 732 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellEvolutionItems
# 733 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 734 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EvolutionItems
# 735 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 736 "data/maps/SlateportCity/scripts.pory"
	release
# 737 "data/maps/SlateportCity/scripts.pory"
	end
# 738 "data/maps/SlateportCity/scripts.pory"

# 739 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonSpecificItemClerk::
# 740 "data/maps/SlateportCity/scripts.pory"
	lock
# 741 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 742 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellItemsThatMake
# 743 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 744 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_MonSpecificItems
# 745 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 746 "data/maps/SlateportCity/scripts.pory"
	release
# 747 "data/maps/SlateportCity/scripts.pory"
	end
# 748 "data/maps/SlateportCity/scripts.pory"

# 749 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 750 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AccurateTMs:
# 751 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 752 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DISARMING_VOICE
# 753 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_FEINT_ATTACK
# 754 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_MAGICAL_LEAF
# 755 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 756 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 757 "data/maps/SlateportCity/scripts.pory"
	release
# 758 "data/maps/SlateportCity/scripts.pory"
	end
# 759 "data/maps/SlateportCity/scripts.pory"

# 760 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 761 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EvolutionItems:
# 762 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 763 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 764 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 765 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 766 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 767 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 768 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 769 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 770 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 771 "data/maps/SlateportCity/scripts.pory"
	release
# 772 "data/maps/SlateportCity/scripts.pory"
	end
# 773 "data/maps/SlateportCity/scripts.pory"

# 774 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 775 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_MonSpecificItems:
# 776 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 777 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 778 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 779 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 780 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 781 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 782 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 783 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 784 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 785 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 786 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 787 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 788 "data/maps/SlateportCity/scripts.pory"
	release
# 789 "data/maps/SlateportCity/scripts.pory"
	end
# 790 "data/maps/SlateportCity/scripts.pory"

# 791 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 792 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 793 "data/maps/SlateportCity/scripts.pory"
	lockall
# 794 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 795 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 796 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 797 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 798 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 800 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 801 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 803 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 804 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 805 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 806 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 807 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 809 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 810 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 811 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 812 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 814 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 815 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 816 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 817 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 818 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 819 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 820 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 821 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 823 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 825 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 826 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 827 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 829 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 831 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 833 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 834 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 835 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 836 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 837 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 839 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 840 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 841 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 842 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 844 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 845 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 846 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 847 "data/maps/SlateportCity/scripts.pory"
	end
# 848 "data/maps/SlateportCity/scripts.pory"

# 849 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 850 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 851 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 852 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 853 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 854 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 855 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 856 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 857 "data/maps/SlateportCity/scripts.pory"
	step_end
# 858 "data/maps/SlateportCity/scripts.pory"

# 859 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 860 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 861 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 862 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 863 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 864 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 865 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 866 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 867 "data/maps/SlateportCity/scripts.pory"
	step_end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 870 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 872 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 873 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 874 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 875 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 876 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 877 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 878 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 879 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 880 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 881 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 882 "data/maps/SlateportCity/scripts.pory"
	step_end
# 883 "data/maps/SlateportCity/scripts.pory"

# 884 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 885 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 886 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 887 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 888 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 889 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 890 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 891 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 892 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 893 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 894 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 895 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 896 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 897 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 898 "data/maps/SlateportCity/scripts.pory"
	step_end
# 899 "data/maps/SlateportCity/scripts.pory"

# 900 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 901 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 902 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 903 "data/maps/SlateportCity/scripts.pory"
	step_end
# 904 "data/maps/SlateportCity/scripts.pory"

# 905 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 906 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 907 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 909 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 910 "data/maps/SlateportCity/scripts.pory"
	step_end
# 911 "data/maps/SlateportCity/scripts.pory"

# 912 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 913 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 914 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 915 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 916 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 917 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 918 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 920 "data/maps/SlateportCity/scripts.pory"
	step_end
# 921 "data/maps/SlateportCity/scripts.pory"

# 922 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 923 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 924 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 925 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 926 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 927 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 928 "data/maps/SlateportCity/scripts.pory"
	step_end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 931 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 932 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 933 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 934 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 935 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 936 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 937 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 939 "data/maps/SlateportCity/scripts.pory"
	step_end
# 940 "data/maps/SlateportCity/scripts.pory"

# 941 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 942 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 943 "data/maps/SlateportCity/scripts.pory"
	end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 946 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 947 "data/maps/SlateportCity/scripts.pory"
	end
# 948 "data/maps/SlateportCity/scripts.pory"

# 949 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 950 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 951 "data/maps/SlateportCity/scripts.pory"
	end
# 952 "data/maps/SlateportCity/scripts.pory"

# 953 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 954 "data/maps/SlateportCity/scripts.pory"
	lock
# 955 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 956 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 957 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 958 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 959 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 960 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 961 "data/maps/SlateportCity/scripts.pory"
	release
# 962 "data/maps/SlateportCity/scripts.pory"
	end
# 963 "data/maps/SlateportCity/scripts.pory"

# 964 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 965 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 966 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 967 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 968 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 969 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 970 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 971 "data/maps/SlateportCity/scripts.pory"
	end
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 974 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 975 "data/maps/SlateportCity/scripts.pory"
	release
# 976 "data/maps/SlateportCity/scripts.pory"
	end
# 977 "data/maps/SlateportCity/scripts.pory"

# 978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 979 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 980 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 981 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 982 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 983 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 984 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 985 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 986 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 987 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 988 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 989 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 990 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 991 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 992 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 993 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 994 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 995 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 996 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 997 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 998 "data/maps/SlateportCity/scripts.pory"
	end
# 999 "data/maps/SlateportCity/scripts.pory"

# 1000 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 1001 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1002 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1003 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1004 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1005 "data/maps/SlateportCity/scripts.pory"
	end
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1008 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1009 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1010 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1011 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1012 "data/maps/SlateportCity/scripts.pory"
	end
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1015 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1016 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1017 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1018 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1019 "data/maps/SlateportCity/scripts.pory"
	end
# 1020 "data/maps/SlateportCity/scripts.pory"

# 1021 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1022 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1023 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1024 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1025 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1026 "data/maps/SlateportCity/scripts.pory"
	end
# 1027 "data/maps/SlateportCity/scripts.pory"

# 1028 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1029 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1030 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1031 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1032 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1033 "data/maps/SlateportCity/scripts.pory"
	end
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1036 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1037 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1038 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1039 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1040 "data/maps/SlateportCity/scripts.pory"
	end
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1043 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1044 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1045 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1046 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1047 "data/maps/SlateportCity/scripts.pory"
	end
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1050 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1051 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1052 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1053 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1054 "data/maps/SlateportCity/scripts.pory"
	end
# 1055 "data/maps/SlateportCity/scripts.pory"

# 1056 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1057 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1058 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1059 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1060 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1061 "data/maps/SlateportCity/scripts.pory"
	end
# 1062 "data/maps/SlateportCity/scripts.pory"

# 1063 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1064 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1065 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1066 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1067 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1068 "data/maps/SlateportCity/scripts.pory"
	end
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1071 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1072 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1073 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1074 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1075 "data/maps/SlateportCity/scripts.pory"
	end
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1078 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1079 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1080 "data/maps/SlateportCity/scripts.pory"
	release
# 1081 "data/maps/SlateportCity/scripts.pory"
	end
# 1082 "data/maps/SlateportCity/scripts.pory"

# 1083 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1084 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1085 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1086 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1087 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1088 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1089 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1090 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1091 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1092 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1093 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1094 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1095 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1096 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1097 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1098 "data/maps/SlateportCity/scripts.pory"
	release
# 1099 "data/maps/SlateportCity/scripts.pory"
	end
# 1100 "data/maps/SlateportCity/scripts.pory"

# 1101 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1102 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1103 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1104 "data/maps/SlateportCity/scripts.pory"
	release
# 1105 "data/maps/SlateportCity/scripts.pory"
	end
# 1106 "data/maps/SlateportCity/scripts.pory"

# 1107 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1108 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1109 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1110 "data/maps/SlateportCity/scripts.pory"
	end
# 1111 "data/maps/SlateportCity/scripts.pory"

# 1112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1113 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1114 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1115 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1116 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1117 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1118 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 1119 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1120 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1121 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1122 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1123 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1124 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1125 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1126 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1127 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1128 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1129 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 1130 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1131 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1132 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1133 "data/maps/SlateportCity/scripts.pory"
	end
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1136 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1137 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1138 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1139 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1142 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1143 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1144 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1145 "data/maps/SlateportCity/scripts.pory"

# 1146 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1147 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1148 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1149 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1150 "data/maps/SlateportCity/scripts.pory"

# 1151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1152 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1153 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1154 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1155 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1156 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1157 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1158 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1159 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1160 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1161 "data/maps/SlateportCity/scripts.pory"

# 1162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1163 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1164 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1165 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1166 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1167 "data/maps/SlateportCity/scripts.pory"
	end
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellEvolutionItems:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "I sell one-of-a-kind evolution items!$"
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellItemsThatMake:
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "I sell items that make certain Pokémon\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "stronger!$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1181 "data/maps/SlateportCity/scripts.pory"

# 1182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1193 "data/maps/SlateportCity/scripts.pory"

# 1194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1197 "data/maps/SlateportCity/scripts.pory"

# 1198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1202 "data/maps/SlateportCity/scripts.pory"

# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1206 "data/maps/SlateportCity/scripts.pory"

# 1207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1212 "data/maps/SlateportCity/scripts.pory"

# 1213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1219 "data/maps/SlateportCity/scripts.pory"

# 1220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1226 "data/maps/SlateportCity/scripts.pory"

# 1227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1231 "data/maps/SlateportCity/scripts.pory"

# 1232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1251 "data/maps/SlateportCity/scripts.pory"

# 1252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1267 "data/maps/SlateportCity/scripts.pory"

# 1268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1271 "data/maps/SlateportCity/scripts.pory"

# 1272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1276 "data/maps/SlateportCity/scripts.pory"

# 1277 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1286 "data/maps/SlateportCity/scripts.pory"

# 1287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1290 "data/maps/SlateportCity/scripts.pory"

# 1291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1294 "data/maps/SlateportCity/scripts.pory"

# 1295 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1307 "data/maps/SlateportCity/scripts.pory"

# 1308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1324 "data/maps/SlateportCity/scripts.pory"

# 1325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1330 "data/maps/SlateportCity/scripts.pory"

# 1331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1345 "data/maps/SlateportCity/scripts.pory"

# 1346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1350 "data/maps/SlateportCity/scripts.pory"

# 1351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1356 "data/maps/SlateportCity/scripts.pory"

# 1357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1364 "data/maps/SlateportCity/scripts.pory"

# 1365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1376 "data/maps/SlateportCity/scripts.pory"

# 1377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1387 "data/maps/SlateportCity/scripts.pory"

# 1388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1391 "data/maps/SlateportCity/scripts.pory"

# 1392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1395 "data/maps/SlateportCity/scripts.pory"

# 1396 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1403 "data/maps/SlateportCity/scripts.pory"

# 1404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1407 "data/maps/SlateportCity/scripts.pory"

# 1408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1414 "data/maps/SlateportCity/scripts.pory"

# 1415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1419 "data/maps/SlateportCity/scripts.pory"

# 1420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1429 "data/maps/SlateportCity/scripts.pory"

# 1430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1440 "data/maps/SlateportCity/scripts.pory"

# 1441 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1444 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1446 "data/maps/SlateportCity/scripts.pory"

# 1447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1451 "data/maps/SlateportCity/scripts.pory"

# 1452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1455 "data/maps/SlateportCity/scripts.pory"

# 1456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1457 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1459 "data/maps/SlateportCity/scripts.pory"

# 1460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1464 "data/maps/SlateportCity/scripts.pory"

# 1465 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1470 "data/maps/SlateportCity/scripts.pory"

# 1471 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1473 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1476 "data/maps/SlateportCity/scripts.pory"

# 1477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon FAN CLUB\n"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1480 "data/maps/SlateportCity/scripts.pory"

# 1481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1482 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1485 "data/maps/SlateportCity/scripts.pory"

# 1486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1490 "data/maps/SlateportCity/scripts.pory"

# 1491 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1494 "data/maps/SlateportCity/scripts.pory"

# 1495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1501 "data/maps/SlateportCity/scripts.pory"

# 1502 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1506 "data/maps/SlateportCity/scripts.pory"

# 1507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1508 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1510 "data/maps/SlateportCity/scripts.pory"

# 1511 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1519 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1520 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1524 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1525 "data/maps/SlateportCity/scripts.pory"

# 1526 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CenterS for crushing BERRIES.\p"
# 1529 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1530 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1531 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1532 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1533 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1534 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1535 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1536 "data/maps/SlateportCity/scripts.pory"

# 1537 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1538 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1539 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1540 "data/maps/SlateportCity/scripts.pory"

# 1541 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1542 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1543 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1544 "data/maps/SlateportCity/scripts.pory"

# 1545 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1548 "data/maps/SlateportCity/scripts.pory"

# 1549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1551 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1552 "data/maps/SlateportCity/scripts.pory"

# 1553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1554 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1555 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1556 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1557 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1558 "data/maps/SlateportCity/scripts.pory"

# 1559 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1560 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1561 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1562 "data/maps/SlateportCity/scripts.pory"

# 1563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1564 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1565 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1566 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1567 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1568 "data/maps/SlateportCity/scripts.pory"

# 1569 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1570 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1571 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1572 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1573 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1574 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1575 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1576 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1577 "data/maps/SlateportCity/scripts.pory"

# 1578 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1579 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1580 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1581 "data/maps/SlateportCity/scripts.pory"

# 1582 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1583 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1584 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1585 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1586 "data/maps/SlateportCity/scripts.pory"
	.string "PokénavS.\p"
# 1587 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1588 "data/maps/SlateportCity/scripts.pory"

# 1589 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1590 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1591 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1592 "data/maps/SlateportCity/scripts.pory"

# 1593 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1594 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1595 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1596 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1597 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1598 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1599 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1600 "data/maps/SlateportCity/scripts.pory"

# 1601 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1602 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1603 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1604 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1605 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1606 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1607 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1608 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1609 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1610 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCity_EventScript_ApplianceMan_Text_0:
# 5 "data/maps/SlateportCity/scripts.pory"
	.string "That was spooky! I don't think I want\n"
	.string "that to happen to another appliance…$"

SlateportCity_EventScript_ApplianceMan_Text_1:
# 10 "data/maps/SlateportCity/scripts.pory"
	.string "I brought these old appliances to the\n"
	.string "market to sell, but it doesn't look\l"
	.string "like anyone is interested…$"

SlateportCity_EventScript_ApplianceMan_Text_2:
# 14 "data/maps/SlateportCity/scripts.pory"
	.string "I brought these old appliances to the\n"
	.string "market to sell, but it doesn't look\l"
	.string "like anyone is interested…\p"
	.string "Oh! Your Rotom seems to like one of\n"
	.string "my appliances!\p"
	.string "Do you want me to let it have a look?$"

SlateportCity_EventScript_ApplianceMan_Text_3:
# 21 "data/maps/SlateportCity/scripts.pory"
	.string "I thought so…$"

SlateportCity_EventScript_ApplianceMan_Text_4:
# 29 "data/maps/SlateportCity/scripts.pory"
	.string "I had no idea Pokémon could do that…$"
